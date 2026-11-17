// Lean compiler output
// Module: Lean.Elab.Tactic.AutoTry
// Imports: import Init.Try import Lean.Linter.Basic import Lean.Elab.InfoTree.Util import Lean.Elab.Tactic.Try import Lean.Elab.Tactic.Meta import Lean.Elab.BuiltinTerm
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
extern lean_object* l_Lean_Options_empty;
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Try_collectTryCoreSuggestions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isMaxRecDepth(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_inheritedTraceOptions;
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_ofPosition(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_ppTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_withSetOptionIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "autoTry"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "onEmptyProof"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(163, 27, 117, 182, 216, 95, 83, 170)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(246, 66, 211, 114, 249, 119, 53, 144)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "run `try\?` on empty proofs and empty subproofs and report any suggestions"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "AutoTry"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(123, 158, 41, 193, 164, 214, 205, 50)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(134, 107, 19, 219, 142, 120, 71, 103)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(143, 231, 72, 247, 126, 9, 135, 248)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(177, 8, 71, 56, 242, 58, 39, 172)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(56, 117, 79, 29, 89, 186, 57, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 64, 103, 152, 252, 208, 234, 111)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(238, 179, 17, 120, 45, 125, 47, 248)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(207, 38, 249, 99, 24, 26, 215, 145)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "tryOnEmptyBy"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(157, 147, 145, 244, 86, 29, 251, 255)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "deprecated alias for `autoTry.onEmptyProof`"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2026-06-29"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "use `autoTry.onEmptyProof` instead"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(46, 131, 101, 225, 212, 78, 145, 106)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(116, 35, 199, 123, 211, 20, 145, 177)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "onUnsolvedGoal"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(163, 27, 117, 182, 216, 95, 83, 170)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 35, 177, 27, 37, 159, 95, 227)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "run `try\?` on each proof or subproof that left a goal unsolved and report any suggestions"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(226, 125, 75, 37, 214, 50, 216, 179)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onSorry"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(163, 27, 117, 182, 216, 95, 83, 170)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(114, 120, 5, 251, 211, 194, 145, 174)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "run `try\?` on each `sorry` tactic and report any suggestions"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(243, 152, 110, 4, 119, 174, 78, 244)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "showEdits"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(20, 21, 81, 144, 12, 72, 243, 203)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(17, 28, 27, 160, 121, 115, 26, 139)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 155, .m_capacity = 155, .m_length = 154, .m_data = "if set, autoTry logs an info message per emitted suggestion showing the edit's source range and the literal replacement text (for testing the widget data)"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(29, 204, 20, 75, 31, 132, 119, 169)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(69, 93, 158, 104, 42, 66, 94, 233)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(12, 153, 76, 12, 100, 0, 9, 151)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_debug_autoTry_showEdits;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(163, 27, 117, 182, 216, 95, 83, 170)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(191, 70, 59, 26, 74, 166, 147, 107)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 139, 48, 72, 56, 123, 120, 146)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 21, 162, 206, 138, 91, 239, 46)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(29, 163, 242, 57, 142, 233, 206, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 255, 74, 69, 64, 33, 149, 223)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(102, 105, 242, 12, 167, 164, 120, 157)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)(((size_t)(938150806) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(180, 57, 244, 78, 41, 42, 251, 188)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(187, 82, 166, 189, 92, 2, 80, 56)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(27, 225, 145, 109, 89, 49, 216, 44)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(110, 154, 234, 233, 174, 233, 200, 29)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2;
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__25 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__26 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__26_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__27;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__28;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tacticSorry"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tacticAdmit"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_unsolvedGoal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_unsolvedGoal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_sorryTactic_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_sorryTactic_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeqBracketed"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 55, 102, 232, 177, 170, 100, 130)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 145, .m_capacity = 145, .m_length = 144, .m_data = "Tactic.unsolvedGoals message yielded no (msgCtx, namingCtx, goal) tuples; producer not following the `withContext`/`withNamingContext` contract\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "no tacticSeq body found for unsolved-goals message at "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "; unrecognised seq variant\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11_spec__13(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1;
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__2_value;
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "try\? raised: "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "term elab raised: "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__1_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 1, 0, 1, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4_value;
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 16, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try these:"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try this: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "autoTry edit: insert "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " at +"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "try\?"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tryTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(222, 128, 230, 128, 87, 180, 97, 21)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "suppressed: InfoView at insert point does not show exactly one goal state with one goal"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "trigger points: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " onSorry="};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " onUnsolved="};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "running: onEmpty="};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "skipping: command has non-unsolved-goal errors"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withSetOptionIn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__0_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "autoTryHook"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__2_value),LEAN_SCALAR_PTR_LITERAL(234, 31, 149, 163, 211, 218, 138, 113)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__1_value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_87_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_88_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_89_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_90_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_87_, v___x_88_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4____boxed(lean_object* v_a_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_();
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_));
v___x_122_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_));
v___x_123_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_));
v___x_124_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_121_, v___x_122_, v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4____boxed(lean_object* v_a_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_();
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_141_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_));
v___x_142_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_));
v___x_143_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_));
v___x_144_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_141_, v___x_142_, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4____boxed(lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_();
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_161_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_));
v___x_162_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_));
v___x_163_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_));
v___x_164_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_161_, v___x_162_, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4____boxed(lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_();
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_189_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_));
v___x_190_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_));
v___x_191_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_));
v___x_192_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_189_, v___x_190_, v___x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4____boxed(lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_();
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_232_; uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_232_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_233_ = 0;
v___x_234_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_235_ = l_Lean_registerTraceClass(v___x_232_, v___x_233_, v___x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2____boxed(lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_();
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(lean_object* v_opts_238_, lean_object* v_opt_239_){
_start:
{
lean_object* v_name_240_; lean_object* v_defValue_241_; lean_object* v_map_242_; lean_object* v___x_243_; 
v_name_240_ = lean_ctor_get(v_opt_239_, 0);
v_defValue_241_ = lean_ctor_get(v_opt_239_, 1);
v_map_242_ = lean_ctor_get(v_opts_238_, 0);
v___x_243_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_242_, v_name_240_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_inc(v_defValue_241_);
return v_defValue_241_;
}
else
{
lean_object* v_val_244_; 
v_val_244_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_val_244_);
lean_dec_ref_known(v___x_243_, 1);
if (lean_obj_tag(v_val_244_) == 3)
{
lean_object* v_v_245_; 
v_v_245_ = lean_ctor_get(v_val_244_, 0);
lean_inc(v_v_245_);
lean_dec_ref_known(v_val_244_, 1);
return v_v_245_;
}
else
{
lean_dec(v_val_244_);
lean_inc(v_defValue_241_);
return v_defValue_241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1___boxed(lean_object* v_opts_246_, lean_object* v_opt_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(v_opts_246_, v_opt_247_);
lean_dec_ref(v_opt_247_);
lean_dec_ref(v_opts_246_);
return v_res_248_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_249_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__1);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___boxed(lean_object* v___dummy_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg();
return v_res_255_;
}
}
static uint64_t _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1(void){
_start:
{
lean_object* v___x_262_; uint64_t v___x_263_; 
v___x_262_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0));
v___x_263_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_262_);
return v___x_263_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2(void){
_start:
{
uint64_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_264_ = lean_uint64_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1);
v___x_265_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0));
v___x_266_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set_uint64(v___x_266_, sizeof(void*)*1, v___x_264_);
return v___x_266_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4(void){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg();
return v___x_269_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0);
v___x_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
return v___x_273_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_276_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
lean_ctor_set(v___x_276_, 2, v___x_274_);
return v___x_276_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_277_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7);
v___x_278_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6);
v___x_279_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_280_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4);
v___x_281_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set(v___x_281_, 1, v___x_279_);
lean_ctor_set(v___x_281_, 2, v___x_278_);
lean_ctor_set(v___x_281_, 3, v___x_279_);
lean_ctor_set(v___x_281_, 4, v___x_279_);
lean_ctor_set(v___x_281_, 5, v___x_279_);
lean_ctor_set(v___x_281_, 6, v___x_279_);
lean_ctor_set(v___x_281_, 7, v___x_277_);
return v___x_281_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_282_ = lean_unsigned_to_nat(32u);
v___x_283_ = lean_mk_empty_array_with_capacity(v___x_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10(void){
_start:
{
size_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_285_ = ((size_t)5ULL);
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = lean_unsigned_to_nat(32u);
v___x_288_ = lean_mk_empty_array_with_capacity(v___x_287_);
v___x_289_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9);
v___x_290_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
lean_ctor_set(v___x_290_, 2, v___x_286_);
lean_ctor_set(v___x_290_, 3, v___x_286_);
lean_ctor_set_usize(v___x_290_, 4, v___x_285_);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
lean_ctor_set(v___x_292_, 2, v___x_291_);
lean_ctor_set(v___x_292_, 3, v___x_291_);
lean_ctor_set(v___x_292_, 4, v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = l_Lean_Options_empty;
v___x_294_ = l_Lean_Core_getMaxHeartbeats(v___x_293_);
return v___x_294_;
}
}
static uint16_t _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13(void){
_start:
{
lean_object* v___x_295_; uint16_t v___x_296_; 
v___x_295_ = l_Lean_Options_empty;
v___x_296_ = l_Lean_OptionFlags_ofOptions(v___x_295_);
return v___x_296_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_unsigned_to_nat(1u);
v___x_298_ = l_Lean_firstFrontendMacroScope;
v___x_299_ = lean_nat_add(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19(void){
_start:
{
lean_object* v___x_310_; uint64_t v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10);
v___x_311_ = 0ULL;
v___x_312_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_312_, 0, v___x_310_);
lean_ctor_set_uint64(v___x_312_, sizeof(void*)*1, v___x_311_);
return v___x_312_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
return v___x_314_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_315_ = lean_unsigned_to_nat(0u);
v___x_316_ = l_Lean_Options_empty;
v___x_317_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3));
v___x_318_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v___x_316_);
lean_ctor_set(v___x_318_, 2, v___x_317_);
lean_ctor_set(v___x_318_, 3, v___x_315_);
lean_ctor_set(v___x_318_, 4, v___x_315_);
lean_ctor_set(v___x_318_, 5, v___x_315_);
lean_ctor_set(v___x_318_, 6, v___x_317_);
lean_ctor_set(v___x_318_, 7, v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = l_Lean_NameSet_empty;
v___x_320_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10);
v___x_321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
lean_ctor_set(v___x_321_, 2, v___x_319_);
return v___x_321_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; uint8_t v___x_324_; lean_object* v___x_325_; 
v___x_322_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10);
v___x_323_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_324_ = 1;
v___x_325_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_325_, 0, v___x_323_);
lean_ctor_set(v___x_325_, 1, v___x_323_);
lean_ctor_set(v___x_325_, 2, v___x_322_);
lean_ctor_set_uint8(v___x_325_, sizeof(void*)*3, v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__27(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = l_Lean_maxRecDepth;
v___x_330_ = l_Lean_Options_empty;
v___x_331_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(v___x_330_, v___x_329_);
return v___x_331_;
}
}
static uint16_t _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__28(void){
_start:
{
uint16_t v___x_332_; uint16_t v___x_333_; uint16_t v___x_334_; 
v___x_332_ = 512;
v___x_333_ = lean_uint16_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13);
v___x_334_ = lean_uint16_land(v___x_333_, v___x_332_);
return v___x_334_;
}
}
static uint8_t _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29(void){
_start:
{
uint16_t v___x_335_; uint16_t v___x_336_; uint8_t v___x_337_; 
v___x_335_ = 0;
v___x_336_ = lean_uint16_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__28, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__28_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__28);
v___x_337_ = lean_uint16_dec_eq(v___x_336_, v___x_335_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(lean_object* v_env_338_, lean_object* v_mctx_339_, lean_object* v_lctx_340_, lean_object* v_opts_341_, lean_object* v_namingCtx_342_, lean_object* v_x_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v___x_347_; uint8_t v___x_348_; lean_object* v___x_349_; uint8_t v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v_fileName_359_; lean_object* v_fileMap_360_; lean_object* v_ref_361_; lean_object* v_cancelTk_x3f_362_; lean_object* v_a_364_; lean_object* v_a_371_; lean_object* v_currNamespace_373_; lean_object* v_openDecls_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint16_t v___x_381_; uint8_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; uint16_t v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_498_; lean_object* v___y_499_; uint16_t v___y_500_; lean_object* v___y_501_; lean_object* v_nextMacroScope_502_; lean_object* v_ngen_503_; lean_object* v_auxDeclNGen_504_; lean_object* v_traceState_505_; lean_object* v_recordedDeps_506_; lean_object* v_messages_507_; lean_object* v_infoState_508_; lean_object* v_snapshotTasks_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_515_; lean_object* v___y_516_; uint16_t v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; uint8_t v___y_520_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v_fileName_551_; lean_object* v_fileMap_552_; lean_object* v_currNamespace_553_; lean_object* v_openDecls_554_; lean_object* v_initHeartbeats_555_; lean_object* v_maxHeartbeats_556_; lean_object* v_quotContext_557_; lean_object* v_currMacroScope_558_; lean_object* v_cancelTk_x3f_559_; lean_object* v_inheritedTraceOptions_560_; lean_object* v_currRecDepth_561_; lean_object* v_ref_562_; uint8_t v_suppressElabErrors_563_; uint8_t v_checkDeprecated_564_; uint8_t v_isRecordingDeps_565_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v_nextMacroScope_573_; lean_object* v_ngen_574_; lean_object* v_auxDeclNGen_575_; lean_object* v_traceState_576_; lean_object* v_recordedDeps_577_; lean_object* v_messages_578_; lean_object* v_infoState_579_; lean_object* v_snapshotTasks_580_; lean_object* v___y_581_; lean_object* v___x_584_; uint8_t v___y_586_; lean_object* v_env_600_; uint8_t v___x_601_; uint8_t v___x_602_; 
v___x_347_ = lean_box(1);
v___x_348_ = 0;
v___x_349_ = l_Lean_Environment_setExporting(v_env_338_, v___x_348_);
v___x_350_ = 1;
v___x_351_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3));
v___x_354_ = lean_box(0);
v___x_355_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_355_, 0, v___x_351_);
lean_ctor_set(v___x_355_, 1, v___x_347_);
lean_ctor_set(v___x_355_, 2, v_lctx_340_);
lean_ctor_set(v___x_355_, 3, v___x_353_);
lean_ctor_set(v___x_355_, 4, v___x_354_);
lean_ctor_set(v___x_355_, 5, v___x_352_);
lean_ctor_set(v___x_355_, 6, v___x_354_);
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*7, v___x_348_);
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*7 + 1, v___x_348_);
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*7 + 2, v___x_348_);
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*7 + 3, v___x_350_);
v___x_356_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8);
v___x_357_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10);
v___x_358_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11);
v_fileName_359_ = lean_ctor_get(v_a_344_, 0);
v_fileMap_360_ = lean_ctor_get(v_a_344_, 1);
v_ref_361_ = lean_ctor_get(v_a_344_, 7);
v_cancelTk_x3f_362_ = lean_ctor_get(v_a_344_, 9);
v_currNamespace_373_ = lean_ctor_get(v_namingCtx_342_, 0);
lean_inc(v_currNamespace_373_);
v_openDecls_374_ = lean_ctor_get(v_namingCtx_342_, 1);
lean_inc(v_openDecls_374_);
lean_dec_ref(v_namingCtx_342_);
v___x_375_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_375_, 0, v_mctx_339_);
lean_ctor_set(v___x_375_, 1, v___x_356_);
lean_ctor_set(v___x_375_, 2, v___x_347_);
lean_ctor_set(v___x_375_, 3, v___x_357_);
lean_ctor_set(v___x_375_, 4, v___x_358_);
v___x_376_ = l_Lean_Options_empty;
v___x_377_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12);
v___x_378_ = lean_box(0);
v___x_379_ = l_Lean_firstFrontendMacroScope;
v___x_380_ = lean_box(0);
v___x_381_ = lean_uint16_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13);
v___x_382_ = 0;
v___x_383_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14);
v___x_384_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17));
v___x_385_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18));
v___x_386_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19);
v___x_387_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20);
v___x_388_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21);
v___x_389_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22);
v___x_390_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23);
v___x_391_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_391_, 0, v___x_349_);
lean_ctor_set(v___x_391_, 1, v___x_383_);
lean_ctor_set(v___x_391_, 2, v___x_384_);
lean_ctor_set(v___x_391_, 3, v___x_385_);
lean_ctor_set(v___x_391_, 4, v___x_386_);
lean_ctor_set(v___x_391_, 5, v___x_387_);
lean_ctor_set(v___x_391_, 6, v___x_388_);
lean_ctor_set(v___x_391_, 7, v___x_389_);
lean_ctor_set(v___x_391_, 8, v___x_390_);
lean_ctor_set(v___x_391_, 9, v___x_353_);
v___x_392_ = lean_io_get_num_heartbeats();
v___x_393_ = lean_st_mk_ref(v___x_391_);
v___x_570_ = l_Lean_inheritedTraceOptions;
v___x_571_ = lean_st_ref_get(v___x_570_);
v___x_584_ = lean_st_ref_get(v___x_393_);
v_env_600_ = lean_ctor_get(v___x_584_, 0);
lean_inc_ref(v_env_600_);
lean_dec(v___x_584_);
v___x_601_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_600_);
lean_dec_ref(v_env_600_);
v___x_602_ = lean_uint8_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29);
if (v___x_602_ == 0)
{
if (v___x_601_ == 0)
{
v___y_586_ = v___x_601_;
goto v___jp_585_;
}
else
{
v_fileName_551_ = v_fileName_359_;
v_fileMap_552_ = v_fileMap_360_;
v_currNamespace_553_ = v_currNamespace_373_;
v_openDecls_554_ = v_openDecls_374_;
v_initHeartbeats_555_ = v___x_392_;
v_maxHeartbeats_556_ = v___x_377_;
v_quotContext_557_ = v___x_378_;
v_currMacroScope_558_ = v___x_379_;
v_cancelTk_x3f_559_ = v_cancelTk_x3f_362_;
v_inheritedTraceOptions_560_ = v___x_571_;
v_currRecDepth_561_ = v___x_352_;
v_ref_562_ = v___x_380_;
v_suppressElabErrors_563_ = v___x_348_;
v_checkDeprecated_564_ = v___x_382_;
v_isRecordingDeps_565_ = v___x_348_;
goto v___jp_550_;
}
}
else
{
if (v___x_601_ == 0)
{
v_fileName_551_ = v_fileName_359_;
v_fileMap_552_ = v_fileMap_360_;
v_currNamespace_553_ = v_currNamespace_373_;
v_openDecls_554_ = v_openDecls_374_;
v_initHeartbeats_555_ = v___x_392_;
v_maxHeartbeats_556_ = v___x_377_;
v_quotContext_557_ = v___x_378_;
v_currMacroScope_558_ = v___x_379_;
v_cancelTk_x3f_559_ = v_cancelTk_x3f_362_;
v_inheritedTraceOptions_560_ = v___x_571_;
v_currRecDepth_561_ = v___x_352_;
v_ref_562_ = v___x_380_;
v_suppressElabErrors_563_ = v___x_348_;
v_checkDeprecated_564_ = v___x_382_;
v_isRecordingDeps_565_ = v___x_348_;
goto v___jp_550_;
}
else
{
v___y_586_ = v___x_348_;
goto v___jp_585_;
}
}
v___jp_363_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_365_ = lean_io_error_to_string(v_a_364_);
v___x_366_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
v___x_367_ = l_Lean_MessageData_ofFormat(v___x_366_);
lean_inc(v_ref_361_);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v_ref_361_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
return v___x_369_;
}
v___jp_370_:
{
lean_object* v___x_372_; 
v___x_372_ = lean_mk_io_user_error(v_a_371_);
v_a_364_ = v___x_372_;
goto v___jp_363_;
}
v___jp_394_:
{
lean_object* v_toCold_400_; lean_object* v_currRecDepth_401_; lean_object* v_ref_402_; uint8_t v_suppressElabErrors_403_; uint8_t v_checkDeprecated_404_; uint8_t v_isRecordingDeps_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_496_; 
v_toCold_400_ = lean_ctor_get(v___y_398_, 0);
v_currRecDepth_401_ = lean_ctor_get(v___y_398_, 1);
v_ref_402_ = lean_ctor_get(v___y_398_, 2);
v_suppressElabErrors_403_ = lean_ctor_get_uint8(v___y_398_, sizeof(void*)*3 + 2);
v_checkDeprecated_404_ = lean_ctor_get_uint8(v___y_398_, sizeof(void*)*3 + 3);
v_isRecordingDeps_405_ = lean_ctor_get_uint8(v___y_398_, sizeof(void*)*3 + 4);
v_isSharedCheck_496_ = !lean_is_exclusive(v___y_398_);
if (v_isSharedCheck_496_ == 0)
{
v___x_407_ = v___y_398_;
v_isShared_408_ = v_isSharedCheck_496_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_ref_402_);
lean_inc(v_currRecDepth_401_);
lean_inc(v_toCold_400_);
lean_dec(v___y_398_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_496_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v_fileName_409_; lean_object* v_fileMap_410_; lean_object* v_currNamespace_411_; lean_object* v_openDecls_412_; lean_object* v_initHeartbeats_413_; lean_object* v_maxHeartbeats_414_; lean_object* v_quotContext_415_; lean_object* v_currMacroScope_416_; lean_object* v_cancelTk_x3f_417_; lean_object* v_inheritedTraceOptions_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_493_; 
v_fileName_409_ = lean_ctor_get(v_toCold_400_, 0);
v_fileMap_410_ = lean_ctor_get(v_toCold_400_, 1);
v_currNamespace_411_ = lean_ctor_get(v_toCold_400_, 4);
v_openDecls_412_ = lean_ctor_get(v_toCold_400_, 5);
v_initHeartbeats_413_ = lean_ctor_get(v_toCold_400_, 6);
v_maxHeartbeats_414_ = lean_ctor_get(v_toCold_400_, 7);
v_quotContext_415_ = lean_ctor_get(v_toCold_400_, 8);
v_currMacroScope_416_ = lean_ctor_get(v_toCold_400_, 9);
v_cancelTk_x3f_417_ = lean_ctor_get(v_toCold_400_, 10);
v_inheritedTraceOptions_418_ = lean_ctor_get(v_toCold_400_, 11);
v_isSharedCheck_493_ = !lean_is_exclusive(v_toCold_400_);
if (v_isSharedCheck_493_ == 0)
{
lean_object* v_unused_494_; lean_object* v_unused_495_; 
v_unused_494_ = lean_ctor_get(v_toCold_400_, 3);
lean_dec(v_unused_494_);
v_unused_495_ = lean_ctor_get(v_toCold_400_, 2);
lean_dec(v_unused_495_);
v___x_420_ = v_toCold_400_;
v_isShared_421_ = v_isSharedCheck_493_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_inheritedTraceOptions_418_);
lean_inc(v_cancelTk_x3f_417_);
lean_inc(v_currMacroScope_416_);
lean_inc(v_quotContext_415_);
lean_inc(v_maxHeartbeats_414_);
lean_inc(v_initHeartbeats_413_);
lean_inc(v_openDecls_412_);
lean_inc(v_currNamespace_411_);
lean_inc(v_fileMap_410_);
lean_inc(v_fileName_409_);
lean_dec(v_toCold_400_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_493_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; lean_object* v___x_424_; 
v___x_422_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(v___y_396_, v___y_397_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 3, v___x_422_);
lean_ctor_set(v___x_420_, 2, v___y_396_);
v___x_424_ = v___x_420_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_fileName_409_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_fileMap_410_);
lean_ctor_set(v_reuseFailAlloc_492_, 2, v___y_396_);
lean_ctor_set(v_reuseFailAlloc_492_, 3, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_492_, 4, v_currNamespace_411_);
lean_ctor_set(v_reuseFailAlloc_492_, 5, v_openDecls_412_);
lean_ctor_set(v_reuseFailAlloc_492_, 6, v_initHeartbeats_413_);
lean_ctor_set(v_reuseFailAlloc_492_, 7, v_maxHeartbeats_414_);
lean_ctor_set(v_reuseFailAlloc_492_, 8, v_quotContext_415_);
lean_ctor_set(v_reuseFailAlloc_492_, 9, v_currMacroScope_416_);
lean_ctor_set(v_reuseFailAlloc_492_, 10, v_cancelTk_x3f_417_);
lean_ctor_set(v_reuseFailAlloc_492_, 11, v_inheritedTraceOptions_418_);
v___x_424_ = v_reuseFailAlloc_492_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_426_; 
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_424_);
v___x_426_ = v___x_407_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_currRecDepth_401_);
lean_ctor_set(v_reuseFailAlloc_491_, 2, v_ref_402_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*3 + 2, v_suppressElabErrors_403_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*3 + 3, v_checkDeprecated_404_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*3 + 4, v_isRecordingDeps_405_);
v___x_426_ = v_reuseFailAlloc_491_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
lean_ctor_set_uint16(v___x_426_, sizeof(void*)*3, v___y_395_);
v___x_427_ = lean_st_mk_ref(v___x_375_);
lean_inc(v___x_427_);
v___x_428_ = lean_apply_5(v_x_343_, v___x_355_, v___x_427_, v___x_426_, v___y_399_, lean_box(0));
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_475_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_475_ == 0)
{
v___x_431_ = v___x_428_;
v_isShared_432_ = v_isSharedCheck_475_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_428_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_475_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v_traceState_436_; lean_object* v_traceState_437_; lean_object* v_env_438_; lean_object* v_messages_439_; lean_object* v_scopes_440_; lean_object* v_usedQuotCtxts_441_; lean_object* v_nextMacroScope_442_; lean_object* v_maxRecDepth_443_; lean_object* v_ngen_444_; lean_object* v_auxDeclNGen_445_; lean_object* v_infoState_446_; lean_object* v_snapshotTasks_447_; lean_object* v_prevLinterStates_448_; lean_object* v_codeQualityEntryTasks_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_473_; 
v___x_433_ = lean_st_ref_get(v___x_427_);
lean_dec(v___x_427_);
lean_dec(v___x_433_);
v___x_434_ = lean_st_ref_get(v___x_393_);
lean_dec(v___x_393_);
v___x_435_ = lean_st_ref_take(v_a_345_);
v_traceState_436_ = lean_ctor_get(v___x_435_, 9);
lean_inc_ref(v_traceState_436_);
v_traceState_437_ = lean_ctor_get(v___x_434_, 4);
lean_inc_ref(v_traceState_437_);
v_env_438_ = lean_ctor_get(v___x_435_, 0);
v_messages_439_ = lean_ctor_get(v___x_435_, 1);
v_scopes_440_ = lean_ctor_get(v___x_435_, 2);
v_usedQuotCtxts_441_ = lean_ctor_get(v___x_435_, 3);
v_nextMacroScope_442_ = lean_ctor_get(v___x_435_, 4);
v_maxRecDepth_443_ = lean_ctor_get(v___x_435_, 5);
v_ngen_444_ = lean_ctor_get(v___x_435_, 6);
v_auxDeclNGen_445_ = lean_ctor_get(v___x_435_, 7);
v_infoState_446_ = lean_ctor_get(v___x_435_, 8);
v_snapshotTasks_447_ = lean_ctor_get(v___x_435_, 10);
v_prevLinterStates_448_ = lean_ctor_get(v___x_435_, 11);
v_codeQualityEntryTasks_449_ = lean_ctor_get(v___x_435_, 12);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_473_ == 0)
{
lean_object* v_unused_474_; 
v_unused_474_ = lean_ctor_get(v___x_435_, 9);
lean_dec(v_unused_474_);
v___x_451_ = v___x_435_;
v_isShared_452_ = v_isSharedCheck_473_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_codeQualityEntryTasks_449_);
lean_inc(v_prevLinterStates_448_);
lean_inc(v_snapshotTasks_447_);
lean_inc(v_infoState_446_);
lean_inc(v_auxDeclNGen_445_);
lean_inc(v_ngen_444_);
lean_inc(v_maxRecDepth_443_);
lean_inc(v_nextMacroScope_442_);
lean_inc(v_usedQuotCtxts_441_);
lean_inc(v_scopes_440_);
lean_inc(v_messages_439_);
lean_inc(v_env_438_);
lean_dec(v___x_435_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_473_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v_messages_453_; uint64_t v_tid_454_; lean_object* v_traces_455_; lean_object* v_traces_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_472_; 
v_messages_453_ = lean_ctor_get(v___x_434_, 7);
lean_inc_ref(v_messages_453_);
lean_dec(v___x_434_);
v_tid_454_ = lean_ctor_get_uint64(v_traceState_436_, sizeof(void*)*1);
v_traces_455_ = lean_ctor_get(v_traceState_436_, 0);
lean_inc_ref(v_traces_455_);
lean_dec_ref(v_traceState_436_);
v_traces_456_ = lean_ctor_get(v_traceState_437_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v_traceState_437_);
if (v_isSharedCheck_472_ == 0)
{
v___x_458_ = v_traceState_437_;
v_isShared_459_ = v_isSharedCheck_472_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_traces_456_);
lean_dec(v_traceState_437_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_472_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_460_ = l_Lean_MessageLog_append(v_messages_439_, v_messages_453_);
v___x_461_ = l_Lean_PersistentArray_append___redArg(v_traces_455_, v_traces_456_);
lean_dec_ref(v_traces_456_);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v___x_461_);
v___x_463_ = v___x_458_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_461_);
v___x_463_ = v_reuseFailAlloc_471_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_465_; 
lean_ctor_set_uint64(v___x_463_, sizeof(void*)*1, v_tid_454_);
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 9, v___x_463_);
lean_ctor_set(v___x_451_, 1, v___x_460_);
v___x_465_ = v___x_451_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_env_438_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v___x_460_);
lean_ctor_set(v_reuseFailAlloc_470_, 2, v_scopes_440_);
lean_ctor_set(v_reuseFailAlloc_470_, 3, v_usedQuotCtxts_441_);
lean_ctor_set(v_reuseFailAlloc_470_, 4, v_nextMacroScope_442_);
lean_ctor_set(v_reuseFailAlloc_470_, 5, v_maxRecDepth_443_);
lean_ctor_set(v_reuseFailAlloc_470_, 6, v_ngen_444_);
lean_ctor_set(v_reuseFailAlloc_470_, 7, v_auxDeclNGen_445_);
lean_ctor_set(v_reuseFailAlloc_470_, 8, v_infoState_446_);
lean_ctor_set(v_reuseFailAlloc_470_, 9, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_470_, 10, v_snapshotTasks_447_);
lean_ctor_set(v_reuseFailAlloc_470_, 11, v_prevLinterStates_448_);
lean_ctor_set(v_reuseFailAlloc_470_, 12, v_codeQualityEntryTasks_449_);
v___x_465_ = v_reuseFailAlloc_470_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_466_ = lean_st_ref_put(v_a_345_, v___x_465_);
if (v_isShared_432_ == 0)
{
v___x_468_ = v___x_431_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_429_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_476_; 
lean_dec(v___x_427_);
lean_dec(v___x_393_);
v_a_476_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_476_);
lean_dec_ref_known(v___x_428_, 1);
if (lean_obj_tag(v_a_476_) == 0)
{
lean_object* v_msg_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v_msg_477_ = lean_ctor_get(v_a_476_, 1);
lean_inc_ref(v_msg_477_);
lean_dec_ref_known(v_a_476_, 2);
v___x_478_ = l_Lean_MessageData_toString(v_msg_477_);
v___x_479_ = lean_mk_io_user_error(v___x_478_);
v_a_364_ = v___x_479_;
goto v___jp_363_;
}
else
{
lean_object* v_id_480_; lean_object* v___x_481_; 
v_id_480_ = lean_ctor_get(v_a_476_, 0);
lean_inc(v_id_480_);
lean_dec_ref_known(v_a_476_, 2);
v___x_481_ = l_Lean_InternalExceptionId_getName(v_id_480_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
lean_dec(v_id_480_);
v_a_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_a_482_);
lean_dec_ref_known(v___x_481_, 1);
v___x_483_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24));
v___x_484_ = l_Lean_Name_toString(v_a_482_, v___x_350_);
v___x_485_ = lean_string_append(v___x_483_, v___x_484_);
lean_dec_ref(v___x_484_);
v_a_371_ = v___x_485_;
goto v___jp_370_;
}
else
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec_ref_known(v___x_481_, 1);
v___x_486_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__25));
v___x_487_ = l_Nat_reprFast(v_id_480_);
v___x_488_ = lean_string_append(v___x_486_, v___x_487_);
lean_dec_ref(v___x_487_);
v___x_489_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__26));
v___x_490_ = lean_string_append(v___x_488_, v___x_489_);
v_a_371_ = v___x_490_;
goto v___jp_370_;
}
}
}
}
}
}
}
}
v___jp_497_:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_512_, 0, v___y_511_);
lean_ctor_set(v___x_512_, 1, v_nextMacroScope_502_);
lean_ctor_set(v___x_512_, 2, v_ngen_503_);
lean_ctor_set(v___x_512_, 3, v_auxDeclNGen_504_);
lean_ctor_set(v___x_512_, 4, v_traceState_505_);
lean_ctor_set(v___x_512_, 5, v___x_387_);
lean_ctor_set(v___x_512_, 6, v_recordedDeps_506_);
lean_ctor_set(v___x_512_, 7, v_messages_507_);
lean_ctor_set(v___x_512_, 8, v_infoState_508_);
lean_ctor_set(v___x_512_, 9, v_snapshotTasks_509_);
v___x_513_ = lean_st_ref_put(v___y_498_, v___x_512_);
v___y_395_ = v___y_500_;
v___y_396_ = v___y_501_;
v___y_397_ = v___y_510_;
v___y_398_ = v___y_499_;
v___y_399_ = v___y_498_;
goto v___jp_394_;
}
v___jp_514_:
{
lean_object* v___x_521_; lean_object* v_env_522_; lean_object* v_nextMacroScope_523_; lean_object* v_ngen_524_; lean_object* v_auxDeclNGen_525_; lean_object* v_traceState_526_; lean_object* v_recordedDeps_527_; lean_object* v_messages_528_; lean_object* v_infoState_529_; lean_object* v_snapshotTasks_530_; uint16_t v___x_531_; uint16_t v___x_532_; uint16_t v___x_533_; uint8_t v___x_534_; 
v___x_521_ = lean_st_ref_take(v___y_515_);
v_env_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc_ref(v_env_522_);
v_nextMacroScope_523_ = lean_ctor_get(v___x_521_, 1);
lean_inc(v_nextMacroScope_523_);
v_ngen_524_ = lean_ctor_get(v___x_521_, 2);
lean_inc_ref(v_ngen_524_);
v_auxDeclNGen_525_ = lean_ctor_get(v___x_521_, 3);
lean_inc_ref(v_auxDeclNGen_525_);
v_traceState_526_ = lean_ctor_get(v___x_521_, 4);
lean_inc_ref(v_traceState_526_);
v_recordedDeps_527_ = lean_ctor_get(v___x_521_, 6);
lean_inc_ref(v_recordedDeps_527_);
v_messages_528_ = lean_ctor_get(v___x_521_, 7);
lean_inc_ref(v_messages_528_);
v_infoState_529_ = lean_ctor_get(v___x_521_, 8);
lean_inc_ref(v_infoState_529_);
v_snapshotTasks_530_ = lean_ctor_get(v___x_521_, 9);
lean_inc_ref(v_snapshotTasks_530_);
lean_dec(v___x_521_);
v___x_531_ = 512;
v___x_532_ = lean_uint16_land(v___y_517_, v___x_531_);
v___x_533_ = 0;
v___x_534_ = lean_uint16_dec_eq(v___x_532_, v___x_533_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
v___x_535_ = l_Lean_Kernel_enableDiag(v_env_522_, v___x_350_);
v___y_498_ = v___y_515_;
v___y_499_ = v___y_516_;
v___y_500_ = v___y_517_;
v___y_501_ = v___y_518_;
v_nextMacroScope_502_ = v_nextMacroScope_523_;
v_ngen_503_ = v_ngen_524_;
v_auxDeclNGen_504_ = v_auxDeclNGen_525_;
v_traceState_505_ = v_traceState_526_;
v_recordedDeps_506_ = v_recordedDeps_527_;
v_messages_507_ = v_messages_528_;
v_infoState_508_ = v_infoState_529_;
v_snapshotTasks_509_ = v_snapshotTasks_530_;
v___y_510_ = v___y_519_;
v___y_511_ = v___x_535_;
goto v___jp_497_;
}
else
{
lean_object* v___x_536_; 
v___x_536_ = l_Lean_Kernel_enableDiag(v_env_522_, v___y_520_);
v___y_498_ = v___y_515_;
v___y_499_ = v___y_516_;
v___y_500_ = v___y_517_;
v___y_501_ = v___y_518_;
v_nextMacroScope_502_ = v_nextMacroScope_523_;
v_ngen_503_ = v_ngen_524_;
v_auxDeclNGen_504_ = v_auxDeclNGen_525_;
v_traceState_505_ = v_traceState_526_;
v_recordedDeps_506_ = v_recordedDeps_527_;
v_messages_507_ = v_messages_528_;
v_infoState_508_ = v_infoState_529_;
v_snapshotTasks_509_ = v_snapshotTasks_530_;
v___y_510_ = v___y_519_;
v___y_511_ = v___x_536_;
goto v___jp_497_;
}
}
v___jp_537_:
{
uint16_t v___x_542_; lean_object* v___x_543_; lean_object* v_env_544_; uint8_t v___x_545_; uint16_t v___x_546_; uint16_t v___x_547_; uint16_t v___x_548_; uint8_t v___x_549_; 
v___x_542_ = l_Lean_OptionFlags_ofOptions(v___y_541_);
v___x_543_ = lean_st_ref_get(v___y_538_);
v_env_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc_ref(v_env_544_);
lean_dec(v___x_543_);
v___x_545_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_544_);
lean_dec_ref(v_env_544_);
v___x_546_ = 512;
v___x_547_ = lean_uint16_land(v___x_542_, v___x_546_);
v___x_548_ = 0;
v___x_549_ = lean_uint16_dec_eq(v___x_547_, v___x_548_);
if (v___x_549_ == 0)
{
if (v___x_545_ == 0)
{
v___y_515_ = v___y_538_;
v___y_516_ = v___y_539_;
v___y_517_ = v___x_542_;
v___y_518_ = v___y_541_;
v___y_519_ = v___y_540_;
v___y_520_ = v___x_545_;
goto v___jp_514_;
}
else
{
v___y_395_ = v___x_542_;
v___y_396_ = v___y_541_;
v___y_397_ = v___y_540_;
v___y_398_ = v___y_539_;
v___y_399_ = v___y_538_;
goto v___jp_394_;
}
}
else
{
if (v___x_545_ == 0)
{
v___y_395_ = v___x_542_;
v___y_396_ = v___y_541_;
v___y_397_ = v___y_540_;
v___y_398_ = v___y_539_;
v___y_399_ = v___y_538_;
goto v___jp_394_;
}
else
{
v___y_515_ = v___y_538_;
v___y_516_ = v___y_539_;
v___y_517_ = v___x_542_;
v___y_518_ = v___y_541_;
v___y_519_ = v___y_540_;
v___y_520_ = v___x_348_;
goto v___jp_514_;
}
}
}
v___jp_550_:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_566_ = l_Lean_maxRecDepth;
v___x_567_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__27, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__27_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__27);
lean_inc(v_cancelTk_x3f_559_);
lean_inc(v_currMacroScope_558_);
lean_inc(v_quotContext_557_);
lean_inc(v_maxHeartbeats_556_);
lean_inc_ref(v_fileMap_552_);
lean_inc_ref(v_fileName_551_);
v___x_568_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_568_, 0, v_fileName_551_);
lean_ctor_set(v___x_568_, 1, v_fileMap_552_);
lean_ctor_set(v___x_568_, 2, v___x_376_);
lean_ctor_set(v___x_568_, 3, v___x_567_);
lean_ctor_set(v___x_568_, 4, v_currNamespace_553_);
lean_ctor_set(v___x_568_, 5, v_openDecls_554_);
lean_ctor_set(v___x_568_, 6, v_initHeartbeats_555_);
lean_ctor_set(v___x_568_, 7, v_maxHeartbeats_556_);
lean_ctor_set(v___x_568_, 8, v_quotContext_557_);
lean_ctor_set(v___x_568_, 9, v_currMacroScope_558_);
lean_ctor_set(v___x_568_, 10, v_cancelTk_x3f_559_);
lean_ctor_set(v___x_568_, 11, v_inheritedTraceOptions_560_);
lean_inc(v_ref_562_);
v___x_569_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v_currRecDepth_561_);
lean_ctor_set(v___x_569_, 2, v_ref_562_);
lean_ctor_set_uint16(v___x_569_, sizeof(void*)*3, v___x_381_);
lean_ctor_set_uint8(v___x_569_, sizeof(void*)*3 + 2, v_suppressElabErrors_563_);
lean_ctor_set_uint8(v___x_569_, sizeof(void*)*3 + 3, v_checkDeprecated_564_);
lean_ctor_set_uint8(v___x_569_, sizeof(void*)*3 + 4, v_isRecordingDeps_565_);
lean_inc(v___x_393_);
v___y_538_ = v___x_393_;
v___y_539_ = v___x_569_;
v___y_540_ = v___x_566_;
v___y_541_ = v_opts_341_;
goto v___jp_537_;
}
v___jp_572_:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_582_, 0, v___y_581_);
lean_ctor_set(v___x_582_, 1, v_nextMacroScope_573_);
lean_ctor_set(v___x_582_, 2, v_ngen_574_);
lean_ctor_set(v___x_582_, 3, v_auxDeclNGen_575_);
lean_ctor_set(v___x_582_, 4, v_traceState_576_);
lean_ctor_set(v___x_582_, 5, v___x_387_);
lean_ctor_set(v___x_582_, 6, v_recordedDeps_577_);
lean_ctor_set(v___x_582_, 7, v_messages_578_);
lean_ctor_set(v___x_582_, 8, v_infoState_579_);
lean_ctor_set(v___x_582_, 9, v_snapshotTasks_580_);
v___x_583_ = lean_st_ref_put(v___x_393_, v___x_582_);
v_fileName_551_ = v_fileName_359_;
v_fileMap_552_ = v_fileMap_360_;
v_currNamespace_553_ = v_currNamespace_373_;
v_openDecls_554_ = v_openDecls_374_;
v_initHeartbeats_555_ = v___x_392_;
v_maxHeartbeats_556_ = v___x_377_;
v_quotContext_557_ = v___x_378_;
v_currMacroScope_558_ = v___x_379_;
v_cancelTk_x3f_559_ = v_cancelTk_x3f_362_;
v_inheritedTraceOptions_560_ = v___x_571_;
v_currRecDepth_561_ = v___x_352_;
v_ref_562_ = v___x_380_;
v_suppressElabErrors_563_ = v___x_348_;
v_checkDeprecated_564_ = v___x_382_;
v_isRecordingDeps_565_ = v___x_348_;
goto v___jp_550_;
}
v___jp_585_:
{
lean_object* v___x_587_; lean_object* v_env_588_; lean_object* v_nextMacroScope_589_; lean_object* v_ngen_590_; lean_object* v_auxDeclNGen_591_; lean_object* v_traceState_592_; lean_object* v_recordedDeps_593_; lean_object* v_messages_594_; lean_object* v_infoState_595_; lean_object* v_snapshotTasks_596_; uint8_t v___x_597_; 
v___x_587_ = lean_st_ref_take(v___x_393_);
v_env_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc_ref(v_env_588_);
v_nextMacroScope_589_ = lean_ctor_get(v___x_587_, 1);
lean_inc(v_nextMacroScope_589_);
v_ngen_590_ = lean_ctor_get(v___x_587_, 2);
lean_inc_ref(v_ngen_590_);
v_auxDeclNGen_591_ = lean_ctor_get(v___x_587_, 3);
lean_inc_ref(v_auxDeclNGen_591_);
v_traceState_592_ = lean_ctor_get(v___x_587_, 4);
lean_inc_ref(v_traceState_592_);
v_recordedDeps_593_ = lean_ctor_get(v___x_587_, 6);
lean_inc_ref(v_recordedDeps_593_);
v_messages_594_ = lean_ctor_get(v___x_587_, 7);
lean_inc_ref(v_messages_594_);
v_infoState_595_ = lean_ctor_get(v___x_587_, 8);
lean_inc_ref(v_infoState_595_);
v_snapshotTasks_596_ = lean_ctor_get(v___x_587_, 9);
lean_inc_ref(v_snapshotTasks_596_);
lean_dec(v___x_587_);
v___x_597_ = lean_uint8_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__29);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; 
v___x_598_ = l_Lean_Kernel_enableDiag(v_env_588_, v___x_350_);
v_nextMacroScope_573_ = v_nextMacroScope_589_;
v_ngen_574_ = v_ngen_590_;
v_auxDeclNGen_575_ = v_auxDeclNGen_591_;
v_traceState_576_ = v_traceState_592_;
v_recordedDeps_577_ = v_recordedDeps_593_;
v_messages_578_ = v_messages_594_;
v_infoState_579_ = v_infoState_595_;
v_snapshotTasks_580_ = v_snapshotTasks_596_;
v___y_581_ = v___x_598_;
goto v___jp_572_;
}
else
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_Kernel_enableDiag(v_env_588_, v___y_586_);
v_nextMacroScope_573_ = v_nextMacroScope_589_;
v_ngen_574_ = v_ngen_590_;
v_auxDeclNGen_575_ = v_auxDeclNGen_591_;
v_traceState_576_ = v_traceState_592_;
v_recordedDeps_577_ = v_recordedDeps_593_;
v_messages_578_ = v_messages_594_;
v_infoState_579_ = v_infoState_595_;
v_snapshotTasks_580_ = v_snapshotTasks_596_;
v___y_581_ = v___x_599_;
goto v___jp_572_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___boxed(lean_object* v_env_603_, lean_object* v_mctx_604_, lean_object* v_lctx_605_, lean_object* v_opts_606_, lean_object* v_namingCtx_607_, lean_object* v_x_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(v_env_603_, v_mctx_604_, v_lctx_605_, v_opts_606_, v_namingCtx_607_, v_x_608_, v_a_609_, v_a_610_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope(lean_object* v_00_u03b1_613_, lean_object* v_env_614_, lean_object* v_mctx_615_, lean_object* v_lctx_616_, lean_object* v_opts_617_, lean_object* v_namingCtx_618_, lean_object* v_x_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(v_env_614_, v_mctx_615_, v_lctx_616_, v_opts_617_, v_namingCtx_618_, v_x_619_, v_a_620_, v_a_621_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___boxed(lean_object* v_00_u03b1_624_, lean_object* v_env_625_, lean_object* v_mctx_626_, lean_object* v_lctx_627_, lean_object* v_opts_628_, lean_object* v_namingCtx_629_, lean_object* v_x_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope(v_00_u03b1_624_, v_env_625_, v_mctx_626_, v_lctx_627_, v_opts_628_, v_namingCtx_629_, v_x_630_, v_a_631_, v_a_632_);
lean_dec(v_a_632_);
lean_dec_ref(v_a_631_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0(lean_object* v_00_u03b2_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0___redArg(){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0___redArg___boxed(lean_object* v___dummy_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0___redArg();
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(lean_object* v_00_u03b2_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4);
return v___x_642_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic(lean_object* v_stx_646_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_Lean_Syntax_getKind(v_stx_646_);
if (lean_obj_tag(v___x_647_) == 1)
{
lean_object* v_pre_648_; 
v_pre_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_pre_648_);
if (lean_obj_tag(v_pre_648_) == 1)
{
lean_object* v_pre_649_; 
v_pre_649_ = lean_ctor_get(v_pre_648_, 0);
lean_inc(v_pre_649_);
if (lean_obj_tag(v_pre_649_) == 1)
{
lean_object* v_pre_650_; 
v_pre_650_ = lean_ctor_get(v_pre_649_, 0);
lean_inc(v_pre_650_);
if (lean_obj_tag(v_pre_650_) == 1)
{
lean_object* v_pre_651_; 
v_pre_651_ = lean_ctor_get(v_pre_650_, 0);
if (lean_obj_tag(v_pre_651_) == 0)
{
lean_object* v_str_652_; lean_object* v_str_653_; lean_object* v_str_654_; lean_object* v_str_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v_str_652_ = lean_ctor_get(v___x_647_, 1);
lean_inc_ref(v_str_652_);
lean_dec_ref_known(v___x_647_, 2);
v_str_653_ = lean_ctor_get(v_pre_648_, 1);
lean_inc_ref(v_str_653_);
lean_dec_ref_known(v_pre_648_, 2);
v_str_654_ = lean_ctor_get(v_pre_649_, 1);
lean_inc_ref(v_str_654_);
lean_dec_ref_known(v_pre_649_, 2);
v_str_655_ = lean_ctor_get(v_pre_650_, 1);
lean_inc_ref(v_str_655_);
lean_dec_ref_known(v_pre_650_, 2);
v___x_656_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_657_ = lean_string_dec_eq(v_str_655_, v___x_656_);
lean_dec_ref(v_str_655_);
if (v___x_657_ == 0)
{
lean_dec_ref(v_str_654_);
lean_dec_ref(v_str_653_);
lean_dec_ref(v_str_652_);
return v___x_657_;
}
else
{
lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_658_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0));
v___x_659_ = lean_string_dec_eq(v_str_654_, v___x_658_);
lean_dec_ref(v_str_654_);
if (v___x_659_ == 0)
{
lean_dec_ref(v_str_653_);
lean_dec_ref(v_str_652_);
return v___x_659_;
}
else
{
lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_660_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_661_ = lean_string_dec_eq(v_str_653_, v___x_660_);
lean_dec_ref(v_str_653_);
if (v___x_661_ == 0)
{
lean_dec_ref(v_str_652_);
return v___x_661_;
}
else
{
lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_662_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__1));
v___x_663_ = lean_string_dec_eq(v_str_652_, v___x_662_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_664_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__2));
v___x_665_ = lean_string_dec_eq(v_str_652_, v___x_664_);
lean_dec_ref(v_str_652_);
return v___x_665_;
}
else
{
lean_dec_ref(v_str_652_);
return v___x_663_;
}
}
}
}
}
else
{
uint8_t v___x_666_; 
lean_dec_ref_known(v_pre_650_, 2);
lean_dec_ref_known(v_pre_649_, 2);
lean_dec_ref_known(v_pre_648_, 2);
lean_dec_ref_known(v___x_647_, 2);
v___x_666_ = 0;
return v___x_666_;
}
}
else
{
uint8_t v___x_667_; 
lean_dec(v_pre_650_);
lean_dec_ref_known(v_pre_649_, 2);
lean_dec_ref_known(v_pre_648_, 2);
lean_dec_ref_known(v___x_647_, 2);
v___x_667_ = 0;
return v___x_667_;
}
}
else
{
uint8_t v___x_668_; 
lean_dec_ref_known(v_pre_648_, 2);
lean_dec(v_pre_649_);
lean_dec_ref_known(v___x_647_, 2);
v___x_668_ = 0;
return v___x_668_;
}
}
else
{
uint8_t v___x_669_; 
lean_dec_ref_known(v___x_647_, 2);
lean_dec(v_pre_648_);
v___x_669_ = 0;
return v___x_669_;
}
}
else
{
uint8_t v___x_670_; 
lean_dec(v___x_647_);
v___x_670_ = 0;
return v___x_670_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___boxed(lean_object* v_stx_671_){
_start:
{
uint8_t v_res_672_; lean_object* v_r_673_; 
v_res_672_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic(v_stx_671_);
v_r_673_ = lean_box(v_res_672_);
return v_r_673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx___impl(lean_object* v_x_674_){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = lean_obj_tag_nat(v_x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx___impl___boxed(lean_object* v_x_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx___impl(v_x_676_);
lean_dec(v_x_676_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(lean_object* v_t_678_, lean_object* v_k_679_){
_start:
{
if (lean_obj_tag(v_t_678_) == 0)
{
lean_object* v_tacticSeq_680_; lean_object* v_insertPos_681_; lean_object* v___x_682_; 
v_tacticSeq_680_ = lean_ctor_get(v_t_678_, 0);
lean_inc(v_tacticSeq_680_);
v_insertPos_681_ = lean_ctor_get(v_t_678_, 1);
lean_inc(v_insertPos_681_);
lean_dec_ref_known(v_t_678_, 2);
v___x_682_ = lean_apply_2(v_k_679_, v_tacticSeq_680_, v_insertPos_681_);
return v___x_682_;
}
else
{
return v_k_679_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim(lean_object* v_motive_683_, lean_object* v_ctorIdx_684_, lean_object* v_t_685_, lean_object* v_h_686_, lean_object* v_k_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_685_, v_k_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___boxed(lean_object* v_motive_689_, lean_object* v_ctorIdx_690_, lean_object* v_t_691_, lean_object* v_h_692_, lean_object* v_k_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim(v_motive_689_, v_ctorIdx_690_, v_t_691_, v_h_692_, v_k_693_);
lean_dec(v_ctorIdx_690_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_unsolvedGoal_elim___redArg(lean_object* v_t_695_, lean_object* v_unsolvedGoal_696_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_695_, v_unsolvedGoal_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_unsolvedGoal_elim(lean_object* v_motive_698_, lean_object* v_t_699_, lean_object* v_h_700_, lean_object* v_unsolvedGoal_701_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_699_, v_unsolvedGoal_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_sorryTactic_elim___redArg(lean_object* v_t_703_, lean_object* v_sorryTactic_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_703_, v_sorryTactic_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_sorryTactic_elim(lean_object* v_motive_706_, lean_object* v_t_707_, lean_object* v_h_708_, lean_object* v_sorryTactic_709_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_707_, v_sorryTactic_709_);
return v___x_710_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1(void){
_start:
{
uint32_t v___x_714_; lean_object* v___x_715_; 
v___x_714_ = 32;
v___x_715_ = lean_box_uint32(v___x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep(lean_object* v_tacticSeq_716_, lean_object* v_fileMap_717_){
_start:
{
uint8_t v___x_718_; lean_object* v___x_719_; 
v___x_718_ = 0;
v___x_719_ = l_Lean_Syntax_getPos_x3f(v_tacticSeq_716_, v___x_718_);
if (lean_obj_tag(v___x_719_) == 1)
{
lean_object* v_val_720_; lean_object* v___x_721_; 
v_val_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_val_720_);
lean_dec_ref_known(v___x_719_, 1);
v___x_721_ = l_Lean_Syntax_getTailPos_x3f(v_tacticSeq_716_, v___x_718_);
if (lean_obj_tag(v___x_721_) == 1)
{
lean_object* v_val_722_; lean_object* v_startPos_723_; lean_object* v_line_724_; lean_object* v_column_725_; lean_object* v_endPos_726_; lean_object* v_line_727_; uint8_t v___x_728_; 
v_val_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_val_722_);
lean_dec_ref_known(v___x_721_, 1);
lean_inc_ref(v_fileMap_717_);
v_startPos_723_ = l_Lean_FileMap_toPosition(v_fileMap_717_, v_val_720_);
lean_dec(v_val_720_);
v_line_724_ = lean_ctor_get(v_startPos_723_, 0);
lean_inc(v_line_724_);
v_column_725_ = lean_ctor_get(v_startPos_723_, 1);
lean_inc(v_column_725_);
lean_dec_ref(v_startPos_723_);
v_endPos_726_ = l_Lean_FileMap_toPosition(v_fileMap_717_, v_val_722_);
lean_dec(v_val_722_);
v_line_727_ = lean_ctor_get(v_endPos_726_, 0);
lean_inc(v_line_727_);
lean_dec_ref(v_endPos_726_);
v___x_728_ = lean_nat_dec_eq(v_line_724_, v_line_727_);
lean_dec(v_line_727_);
lean_dec(v_line_724_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_729_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__0));
v___x_730_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1;
v___x_731_ = l_List_replicateTR___redArg(v_column_725_, v___x_730_);
v___x_732_ = lean_string_mk(v___x_731_);
v___x_733_ = lean_string_append(v___x_729_, v___x_732_);
lean_dec_ref(v___x_732_);
return v___x_733_;
}
else
{
lean_object* v___x_734_; 
lean_dec(v_column_725_);
v___x_734_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__1));
return v___x_734_;
}
}
else
{
lean_object* v___x_735_; 
lean_dec(v___x_721_);
lean_dec(v_val_720_);
lean_dec_ref(v_fileMap_717_);
v___x_735_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2));
return v___x_735_;
}
}
else
{
lean_object* v___x_736_; 
lean_dec(v___x_719_);
lean_dec_ref(v_fileMap_717_);
v___x_736_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2));
return v___x_736_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed(lean_object* v_tacticSeq_737_, lean_object* v_fileMap_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep(v_tacticSeq_737_, v_fileMap_738_);
lean_dec(v_tacticSeq_737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx(lean_object* v_p_744_){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_745_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_746_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1));
lean_inc(v_p_744_);
v___x_747_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
lean_ctor_set(v___x_747_, 1, v_p_744_);
lean_ctor_set(v___x_747_, 2, v___x_746_);
lean_ctor_set(v___x_747_, 3, v_p_744_);
v___x_748_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
lean_ctor_set(v___x_748_, 1, v___x_745_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(lean_object* v_range_749_){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v_start_752_; lean_object* v_stop_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_761_; 
v___x_750_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_751_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1));
v_start_752_ = lean_ctor_get(v_range_749_, 0);
v_stop_753_ = lean_ctor_get(v_range_749_, 1);
v_isSharedCheck_761_ = !lean_is_exclusive(v_range_749_);
if (v_isSharedCheck_761_ == 0)
{
v___x_755_ = v_range_749_;
v_isShared_756_ = v_isSharedCheck_761_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_stop_753_);
lean_inc(v_start_752_);
lean_dec(v_range_749_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_761_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_757_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_757_, 0, v___x_751_);
lean_ctor_set(v___x_757_, 1, v_start_752_);
lean_ctor_set(v___x_757_, 2, v___x_751_);
lean_ctor_set(v___x_757_, 3, v_stop_753_);
if (v_isShared_756_ == 0)
{
lean_ctor_set_tag(v___x_755_, 2);
lean_ctor_set(v___x_755_, 1, v___x_750_);
lean_ctor_set(v___x_755_, 0, v___x_757_);
v___x_759_ = v___x_755_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_750_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(lean_object* v_mc_x3f_762_, lean_object* v_nc_x3f_763_, lean_object* v_msg_764_, lean_object* v_acc_765_){
_start:
{
switch(lean_obj_tag(v_msg_764_))
{
case 3:
{
lean_object* v_a_766_; lean_object* v_a_767_; lean_object* v___x_768_; 
lean_dec(v_mc_x3f_762_);
v_a_766_ = lean_ctor_get(v_msg_764_, 0);
v_a_767_ = lean_ctor_get(v_msg_764_, 1);
lean_inc_ref(v_a_766_);
v___x_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_768_, 0, v_a_766_);
v_mc_x3f_762_ = v___x_768_;
v_msg_764_ = v_a_767_;
goto _start;
}
case 4:
{
lean_object* v_a_770_; lean_object* v_a_771_; lean_object* v___x_772_; 
lean_dec(v_nc_x3f_763_);
v_a_770_ = lean_ctor_get(v_msg_764_, 0);
v_a_771_ = lean_ctor_get(v_msg_764_, 1);
lean_inc_ref(v_a_770_);
v___x_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_772_, 0, v_a_770_);
v_nc_x3f_763_ = v___x_772_;
v_msg_764_ = v_a_771_;
goto _start;
}
case 5:
{
lean_object* v_a_774_; 
v_a_774_ = lean_ctor_get(v_msg_764_, 1);
v_msg_764_ = v_a_774_;
goto _start;
}
case 6:
{
lean_object* v_a_776_; 
v_a_776_ = lean_ctor_get(v_msg_764_, 0);
v_msg_764_ = v_a_776_;
goto _start;
}
case 8:
{
lean_object* v_a_778_; 
v_a_778_ = lean_ctor_get(v_msg_764_, 1);
v_msg_764_ = v_a_778_;
goto _start;
}
case 7:
{
lean_object* v_a_780_; lean_object* v_a_781_; lean_object* v___x_782_; 
v_a_780_ = lean_ctor_get(v_msg_764_, 0);
v_a_781_ = lean_ctor_get(v_msg_764_, 1);
lean_inc(v_nc_x3f_763_);
lean_inc(v_mc_x3f_762_);
v___x_782_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v_mc_x3f_762_, v_nc_x3f_763_, v_a_780_, v_acc_765_);
v_msg_764_ = v_a_781_;
v_acc_765_ = v___x_782_;
goto _start;
}
case 2:
{
lean_object* v_a_784_; 
v_a_784_ = lean_ctor_get(v_msg_764_, 1);
v_msg_764_ = v_a_784_;
goto _start;
}
case 9:
{
lean_object* v_msg_786_; lean_object* v_children_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v_msg_786_ = lean_ctor_get(v_msg_764_, 1);
v_children_787_ = lean_ctor_get(v_msg_764_, 2);
lean_inc(v_nc_x3f_763_);
lean_inc(v_mc_x3f_762_);
v___x_788_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v_mc_x3f_762_, v_nc_x3f_763_, v_msg_786_, v_acc_765_);
v___x_789_ = lean_unsigned_to_nat(0u);
v___x_790_ = lean_array_get_size(v_children_787_);
v___x_791_ = lean_nat_dec_lt(v___x_789_, v___x_790_);
if (v___x_791_ == 0)
{
lean_dec(v_nc_x3f_763_);
lean_dec(v_mc_x3f_762_);
return v___x_788_;
}
else
{
size_t v___x_792_; size_t v___x_793_; lean_object* v___x_794_; 
v___x_792_ = ((size_t)0ULL);
v___x_793_ = lean_usize_of_nat(v___x_790_);
v___x_794_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(v_mc_x3f_762_, v_nc_x3f_763_, v_children_787_, v___x_792_, v___x_793_, v___x_788_);
return v___x_794_;
}
}
case 1:
{
if (lean_obj_tag(v_mc_x3f_762_) == 1)
{
if (lean_obj_tag(v_nc_x3f_763_) == 1)
{
lean_object* v_a_795_; lean_object* v_val_796_; lean_object* v_val_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v_a_795_ = lean_ctor_get(v_msg_764_, 0);
v_val_796_ = lean_ctor_get(v_mc_x3f_762_, 0);
lean_inc(v_val_796_);
lean_dec_ref_known(v_mc_x3f_762_, 1);
v_val_797_ = lean_ctor_get(v_nc_x3f_763_, 0);
lean_inc(v_val_797_);
lean_dec_ref_known(v_nc_x3f_763_, 1);
lean_inc(v_a_795_);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v_val_797_);
lean_ctor_set(v___x_798_, 1, v_a_795_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v_val_796_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = lean_array_push(v_acc_765_, v___x_799_);
return v___x_800_;
}
else
{
lean_dec_ref_known(v_mc_x3f_762_, 1);
lean_dec(v_nc_x3f_763_);
return v_acc_765_;
}
}
else
{
lean_dec(v_nc_x3f_763_);
lean_dec(v_mc_x3f_762_);
return v_acc_765_;
}
}
default: 
{
lean_dec(v_nc_x3f_763_);
lean_dec(v_mc_x3f_762_);
return v_acc_765_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(lean_object* v_mc_x3f_801_, lean_object* v_nc_x3f_802_, lean_object* v_as_803_, size_t v_i_804_, size_t v_stop_805_, lean_object* v_b_806_){
_start:
{
uint8_t v___x_807_; 
v___x_807_ = lean_usize_dec_eq(v_i_804_, v_stop_805_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; lean_object* v___x_809_; size_t v___x_810_; size_t v___x_811_; 
v___x_808_ = lean_array_uget_borrowed(v_as_803_, v_i_804_);
lean_inc(v_nc_x3f_802_);
lean_inc(v_mc_x3f_801_);
v___x_809_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v_mc_x3f_801_, v_nc_x3f_802_, v___x_808_, v_b_806_);
v___x_810_ = ((size_t)1ULL);
v___x_811_ = lean_usize_add(v_i_804_, v___x_810_);
v_i_804_ = v___x_811_;
v_b_806_ = v___x_809_;
goto _start;
}
else
{
lean_dec(v_nc_x3f_802_);
lean_dec(v_mc_x3f_801_);
return v_b_806_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0___boxed(lean_object* v_mc_x3f_813_, lean_object* v_nc_x3f_814_, lean_object* v_as_815_, lean_object* v_i_816_, lean_object* v_stop_817_, lean_object* v_b_818_){
_start:
{
size_t v_i_boxed_819_; size_t v_stop_boxed_820_; lean_object* v_res_821_; 
v_i_boxed_819_ = lean_unbox_usize(v_i_816_);
lean_dec(v_i_816_);
v_stop_boxed_820_ = lean_unbox_usize(v_stop_817_);
lean_dec(v_stop_817_);
v_res_821_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(v_mc_x3f_813_, v_nc_x3f_814_, v_as_815_, v_i_boxed_819_, v_stop_boxed_820_, v_b_818_);
lean_dec_ref(v_as_815_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go___boxed(lean_object* v_mc_x3f_822_, lean_object* v_nc_x3f_823_, lean_object* v_msg_824_, lean_object* v_acc_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v_mc_x3f_822_, v_nc_x3f_823_, v_msg_824_, v_acc_825_);
lean_dec_ref(v_msg_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(lean_object* v_msg_829_){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = lean_box(0);
v___x_831_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___closed__0));
v___x_832_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v___x_830_, v___x_830_, v_msg_829_, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___boxed(lean_object* v_msg_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_msg_833_);
lean_dec_ref(v_msg_833_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f(lean_object* v_range_837_, lean_object* v_stx_838_){
_start:
{
lean_object* v___x_839_; 
lean_inc(v_stx_838_);
v___x_839_ = l_Lean_Syntax_getKind(v_stx_838_);
if (lean_obj_tag(v___x_839_) == 1)
{
lean_object* v_pre_840_; 
v_pre_840_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_pre_840_);
if (lean_obj_tag(v_pre_840_) == 1)
{
lean_object* v_pre_841_; 
v_pre_841_ = lean_ctor_get(v_pre_840_, 0);
lean_inc(v_pre_841_);
if (lean_obj_tag(v_pre_841_) == 1)
{
lean_object* v_pre_842_; 
v_pre_842_ = lean_ctor_get(v_pre_841_, 0);
lean_inc(v_pre_842_);
if (lean_obj_tag(v_pre_842_) == 1)
{
lean_object* v_pre_843_; 
v_pre_843_ = lean_ctor_get(v_pre_842_, 0);
if (lean_obj_tag(v_pre_843_) == 0)
{
lean_object* v_str_844_; lean_object* v_str_845_; lean_object* v_str_846_; lean_object* v_str_847_; lean_object* v___x_848_; uint8_t v___x_849_; 
v_str_844_ = lean_ctor_get(v___x_839_, 1);
lean_inc_ref(v_str_844_);
lean_dec_ref_known(v___x_839_, 2);
v_str_845_ = lean_ctor_get(v_pre_840_, 1);
lean_inc_ref(v_str_845_);
lean_dec_ref_known(v_pre_840_, 2);
v_str_846_ = lean_ctor_get(v_pre_841_, 1);
lean_inc_ref(v_str_846_);
lean_dec_ref_known(v_pre_841_, 2);
v_str_847_ = lean_ctor_get(v_pre_842_, 1);
lean_inc_ref(v_str_847_);
lean_dec_ref_known(v_pre_842_, 2);
v___x_848_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_849_ = lean_string_dec_eq(v_str_847_, v___x_848_);
lean_dec_ref(v_str_847_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
lean_dec_ref(v_str_846_);
lean_dec_ref(v_str_845_);
lean_dec_ref(v_str_844_);
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_850_ = lean_box(0);
return v___x_850_;
}
else
{
lean_object* v___x_851_; uint8_t v___x_852_; 
v___x_851_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0));
v___x_852_ = lean_string_dec_eq(v_str_846_, v___x_851_);
lean_dec_ref(v_str_846_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; 
lean_dec_ref(v_str_845_);
lean_dec_ref(v_str_844_);
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_853_ = lean_box(0);
return v___x_853_;
}
else
{
lean_object* v___x_854_; uint8_t v___x_855_; 
v___x_854_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_855_ = lean_string_dec_eq(v_str_845_, v___x_854_);
lean_dec_ref(v_str_845_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; 
lean_dec_ref(v_str_844_);
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_856_ = lean_box(0);
return v___x_856_;
}
else
{
lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_857_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__0));
v___x_858_ = lean_string_dec_eq(v_str_844_, v___x_857_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_859_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__1));
v___x_860_ = lean_string_dec_eq(v_str_844_, v___x_859_);
lean_dec_ref(v_str_844_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; 
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_861_ = lean_box(0);
return v___x_861_;
}
else
{
lean_object* v___x_862_; lean_object* v_body_863_; lean_object* v___y_865_; lean_object* v___x_868_; 
v___x_862_ = lean_unsigned_to_nat(1u);
v_body_863_ = l_Lean_Syntax_getArg(v_stx_838_, v___x_862_);
v___x_868_ = l_Lean_Syntax_getTailPos_x3f(v_body_863_, v___x_858_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = lean_unsigned_to_nat(2u);
v___x_870_ = l_Lean_Syntax_getArg(v_stx_838_, v___x_869_);
lean_dec(v_stx_838_);
v___x_871_ = l_Lean_Syntax_getPos_x3f(v___x_870_, v___x_858_);
lean_dec(v___x_870_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_stop_872_; 
v_stop_872_ = lean_ctor_get(v_range_837_, 1);
lean_inc(v_stop_872_);
lean_dec_ref(v_range_837_);
v___y_865_ = v_stop_872_;
goto v___jp_864_;
}
else
{
lean_object* v_val_873_; 
lean_dec_ref(v_range_837_);
v_val_873_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_val_873_);
lean_dec_ref_known(v___x_871_, 1);
v___y_865_ = v_val_873_;
goto v___jp_864_;
}
}
else
{
lean_object* v_val_874_; 
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v_val_874_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_val_874_);
lean_dec_ref_known(v___x_868_, 1);
v___y_865_ = v_val_874_;
goto v___jp_864_;
}
v___jp_864_:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v_body_863_);
lean_ctor_set(v___x_866_, 1, v___y_865_);
v___x_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
return v___x_867_;
}
}
}
else
{
lean_object* v___x_875_; lean_object* v_body_876_; lean_object* v___y_878_; uint8_t v___x_881_; lean_object* v___x_882_; 
lean_dec_ref(v_str_844_);
v___x_875_ = lean_unsigned_to_nat(0u);
v_body_876_ = l_Lean_Syntax_getArg(v_stx_838_, v___x_875_);
lean_dec(v_stx_838_);
v___x_881_ = 0;
v___x_882_ = l_Lean_Syntax_getTailPos_x3f(v_body_876_, v___x_881_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_stop_883_; 
v_stop_883_ = lean_ctor_get(v_range_837_, 1);
lean_inc(v_stop_883_);
lean_dec_ref(v_range_837_);
v___y_878_ = v_stop_883_;
goto v___jp_877_;
}
else
{
lean_object* v_val_884_; 
lean_dec_ref(v_range_837_);
v_val_884_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_val_884_);
lean_dec_ref_known(v___x_882_, 1);
v___y_878_ = v_val_884_;
goto v___jp_877_;
}
v___jp_877_:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_879_, 0, v_body_876_);
lean_ctor_set(v___x_879_, 1, v___y_878_);
v___x_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
return v___x_880_;
}
}
}
}
}
}
else
{
lean_object* v___x_885_; 
lean_dec_ref_known(v_pre_842_, 2);
lean_dec_ref_known(v_pre_841_, 2);
lean_dec_ref_known(v_pre_840_, 2);
lean_dec_ref_known(v___x_839_, 2);
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_885_ = lean_box(0);
return v___x_885_;
}
}
else
{
lean_object* v___x_886_; 
lean_dec(v_pre_842_);
lean_dec_ref_known(v_pre_841_, 2);
lean_dec_ref_known(v_pre_840_, 2);
lean_dec_ref_known(v___x_839_, 2);
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_886_ = lean_box(0);
return v___x_886_;
}
}
else
{
lean_object* v___x_887_; 
lean_dec(v_pre_841_);
lean_dec_ref_known(v_pre_840_, 2);
lean_dec_ref_known(v___x_839_, 2);
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_887_ = lean_box(0);
return v___x_887_;
}
}
else
{
lean_object* v___x_888_; 
lean_dec_ref_known(v___x_839_, 2);
lean_dec(v_pre_840_);
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_888_ = lean_box(0);
return v___x_888_;
}
}
else
{
lean_object* v___x_889_; 
lean_dec(v___x_839_);
lean_dec(v_stx_838_);
lean_dec_ref(v_range_837_);
v___x_889_ = lean_box(0);
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree(lean_object* v_range_893_, lean_object* v_stx_894_){
_start:
{
lean_object* v___x_895_; 
lean_inc(v_stx_894_);
lean_inc_ref(v_range_893_);
v___x_895_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f(v_range_893_, v_stx_894_);
if (lean_obj_tag(v___x_895_) == 1)
{
lean_dec(v_stx_894_);
lean_dec_ref(v_range_893_);
return v___x_895_;
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; size_t v_sz_899_; size_t v___x_900_; lean_object* v___x_901_; lean_object* v_fst_902_; 
lean_dec(v___x_895_);
v___x_896_ = l_Lean_Syntax_getArgs(v_stx_894_);
lean_dec(v_stx_894_);
v___x_897_ = lean_box(0);
v___x_898_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0));
v_sz_899_ = lean_array_size(v___x_896_);
v___x_900_ = ((size_t)0ULL);
v___x_901_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0(v_range_893_, v___x_896_, v_sz_899_, v___x_900_, v___x_898_);
lean_dec_ref(v___x_896_);
v_fst_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_fst_902_);
lean_dec_ref(v___x_901_);
if (lean_obj_tag(v_fst_902_) == 0)
{
return v___x_897_;
}
else
{
lean_object* v_val_903_; 
v_val_903_ = lean_ctor_get(v_fst_902_, 0);
lean_inc(v_val_903_);
lean_dec_ref_known(v_fst_902_, 1);
return v_val_903_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0(lean_object* v_range_904_, lean_object* v_as_905_, size_t v_sz_906_, size_t v_i_907_, lean_object* v_b_908_){
_start:
{
uint8_t v___x_909_; 
v___x_909_ = lean_usize_dec_lt(v_i_907_, v_sz_906_);
if (v___x_909_ == 0)
{
lean_dec_ref(v_range_904_);
lean_inc_ref(v_b_908_);
return v_b_908_;
}
else
{
lean_object* v___x_910_; lean_object* v_a_911_; lean_object* v___x_912_; 
v___x_910_ = lean_box(0);
v_a_911_ = lean_array_uget_borrowed(v_as_905_, v_i_907_);
lean_inc(v_a_911_);
lean_inc_ref(v_range_904_);
v___x_912_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree(v_range_904_, v_a_911_);
if (lean_obj_tag(v___x_912_) == 1)
{
lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec_ref(v_range_904_);
v___x_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v___x_910_);
return v___x_914_;
}
else
{
lean_object* v___x_915_; size_t v___x_916_; size_t v___x_917_; 
lean_dec(v___x_912_);
v___x_915_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0));
v___x_916_ = ((size_t)1ULL);
v___x_917_ = lean_usize_add(v_i_907_, v___x_916_);
v_i_907_ = v___x_917_;
v_b_908_ = v___x_915_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___boxed(lean_object* v_range_919_, lean_object* v_as_920_, lean_object* v_sz_921_, lean_object* v_i_922_, lean_object* v_b_923_){
_start:
{
size_t v_sz_boxed_924_; size_t v_i_boxed_925_; lean_object* v_res_926_; 
v_sz_boxed_924_ = lean_unbox_usize(v_sz_921_);
lean_dec(v_sz_921_);
v_i_boxed_925_ = lean_unbox_usize(v_i_922_);
lean_dec(v_i_922_);
v_res_926_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0(v_range_919_, v_as_920_, v_sz_boxed_924_, v_i_boxed_925_, v_b_923_);
lean_dec_ref(v_b_923_);
lean_dec_ref(v_as_920_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(lean_object* v_range_927_, lean_object* v_stx_928_){
_start:
{
uint8_t v___x_929_; lean_object* v___x_930_; 
v___x_929_ = 0;
v___x_930_ = l_Lean_Syntax_getRange_x3f(v_stx_928_, v___x_929_);
if (lean_obj_tag(v___x_930_) == 1)
{
lean_object* v_val_931_; uint8_t v___x_932_; 
v_val_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_val_931_);
lean_dec_ref_known(v___x_930_, 1);
v___x_932_ = l_Lean_Syntax_Range_includes(v_val_931_, v_range_927_, v___x_929_, v___x_929_);
lean_dec(v_val_931_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; 
lean_dec(v_stx_928_);
lean_dec_ref(v_range_927_);
v___x_933_ = lean_box(0);
return v___x_933_;
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; size_t v_sz_936_; size_t v___x_937_; lean_object* v___x_938_; lean_object* v_fst_939_; 
v___x_934_ = l_Lean_Syntax_getArgs(v_stx_928_);
v___x_935_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0));
v_sz_936_ = lean_array_size(v___x_934_);
v___x_937_ = ((size_t)0ULL);
lean_inc_ref(v_range_927_);
v___x_938_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0(v_range_927_, v___x_934_, v_sz_936_, v___x_937_, v___x_935_);
lean_dec_ref(v___x_934_);
v_fst_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_fst_939_);
lean_dec_ref(v___x_938_);
if (lean_obj_tag(v_fst_939_) == 0)
{
lean_object* v___x_940_; 
v___x_940_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree(v_range_927_, v_stx_928_);
return v___x_940_;
}
else
{
lean_object* v_val_941_; 
lean_dec(v_stx_928_);
lean_dec_ref(v_range_927_);
v_val_941_ = lean_ctor_get(v_fst_939_, 0);
lean_inc(v_val_941_);
lean_dec_ref_known(v_fst_939_, 1);
return v_val_941_;
}
}
}
else
{
lean_object* v___x_942_; 
lean_dec(v___x_930_);
lean_dec(v_stx_928_);
lean_dec_ref(v_range_927_);
v___x_942_ = lean_box(0);
return v___x_942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0(lean_object* v_range_943_, lean_object* v_as_944_, size_t v_sz_945_, size_t v_i_946_, lean_object* v_b_947_){
_start:
{
uint8_t v___x_948_; 
v___x_948_ = lean_usize_dec_lt(v_i_946_, v_sz_945_);
if (v___x_948_ == 0)
{
lean_dec_ref(v_range_943_);
lean_inc_ref(v_b_947_);
return v_b_947_;
}
else
{
lean_object* v___x_949_; lean_object* v_a_950_; lean_object* v___x_951_; 
v___x_949_ = lean_box(0);
v_a_950_ = lean_array_uget_borrowed(v_as_944_, v_i_946_);
lean_inc(v_a_950_);
lean_inc_ref(v_range_943_);
v___x_951_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v_range_943_, v_a_950_);
if (lean_obj_tag(v___x_951_) == 1)
{
lean_object* v___x_952_; lean_object* v___x_953_; 
lean_dec_ref(v_range_943_);
v___x_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
v___x_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set(v___x_953_, 1, v___x_949_);
return v___x_953_;
}
else
{
lean_object* v___x_954_; size_t v___x_955_; size_t v___x_956_; 
lean_dec(v___x_951_);
v___x_954_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0));
v___x_955_ = ((size_t)1ULL);
v___x_956_ = lean_usize_add(v_i_946_, v___x_955_);
v_i_946_ = v___x_956_;
v_b_947_ = v___x_954_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0___boxed(lean_object* v_range_958_, lean_object* v_as_959_, lean_object* v_sz_960_, lean_object* v_i_961_, lean_object* v_b_962_){
_start:
{
size_t v_sz_boxed_963_; size_t v_i_boxed_964_; lean_object* v_res_965_; 
v_sz_boxed_963_ = lean_unbox_usize(v_sz_960_);
lean_dec(v_sz_960_);
v_i_boxed_964_ = lean_unbox_usize(v_i_961_);
lean_dec(v_i_961_);
v_res_965_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0(v_range_958_, v_as_959_, v_sz_boxed_963_, v_i_boxed_964_, v_b_962_);
lean_dec_ref(v_b_962_);
lean_dec_ref(v_as_959_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody(lean_object* v_cmd_966_, lean_object* v_range_967_){
_start:
{
lean_object* v___x_968_; 
v___x_968_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v_range_967_, v_cmd_966_);
return v___x_968_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(lean_object* v_opts_969_, lean_object* v_opt_970_){
_start:
{
lean_object* v_name_971_; lean_object* v_defValue_972_; lean_object* v_map_973_; lean_object* v___x_974_; 
v_name_971_ = lean_ctor_get(v_opt_970_, 0);
v_defValue_972_ = lean_ctor_get(v_opt_970_, 1);
v_map_973_ = lean_ctor_get(v_opts_969_, 0);
v___x_974_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_973_, v_name_971_);
if (lean_obj_tag(v___x_974_) == 0)
{
uint8_t v___x_975_; 
v___x_975_ = lean_unbox(v_defValue_972_);
return v___x_975_;
}
else
{
lean_object* v_val_976_; 
v_val_976_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_val_976_);
lean_dec_ref_known(v___x_974_, 1);
if (lean_obj_tag(v_val_976_) == 1)
{
uint8_t v_v_977_; 
v_v_977_ = lean_ctor_get_uint8(v_val_976_, 0);
lean_dec_ref_known(v_val_976_, 0);
return v_v_977_;
}
else
{
uint8_t v___x_978_; 
lean_dec(v_val_976_);
v___x_978_ = lean_unbox(v_defValue_972_);
return v___x_978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___boxed(lean_object* v_opts_979_, lean_object* v_opt_980_){
_start:
{
uint8_t v_res_981_; lean_object* v_r_982_; 
v_res_981_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_979_, v_opt_980_);
lean_dec_ref(v_opt_980_);
lean_dec_ref(v_opts_979_);
v_r_982_ = lean_box(v_res_981_);
return v_r_982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0(lean_object* v_ctx_983_, lean_object* v_info_984_, lean_object* v_acc_985_){
_start:
{
if (lean_obj_tag(v_info_984_) == 0)
{
lean_object* v_i_986_; lean_object* v_toElabInfo_987_; lean_object* v_mctxBefore_988_; lean_object* v_goalsBefore_989_; lean_object* v_stx_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1008_; 
v_i_986_ = lean_ctor_get(v_info_984_, 0);
lean_inc_ref(v_i_986_);
lean_dec_ref_known(v_info_984_, 1);
v_toElabInfo_987_ = lean_ctor_get(v_i_986_, 0);
lean_inc_ref(v_toElabInfo_987_);
v_mctxBefore_988_ = lean_ctor_get(v_i_986_, 1);
lean_inc_ref(v_mctxBefore_988_);
v_goalsBefore_989_ = lean_ctor_get(v_i_986_, 2);
lean_inc(v_goalsBefore_989_);
lean_dec_ref(v_i_986_);
v_stx_990_ = lean_ctor_get(v_toElabInfo_987_, 1);
v_isSharedCheck_1008_ = !lean_is_exclusive(v_toElabInfo_987_);
if (v_isSharedCheck_1008_ == 0)
{
lean_object* v_unused_1009_; 
v_unused_1009_ = lean_ctor_get(v_toElabInfo_987_, 0);
lean_dec(v_unused_1009_);
v___x_992_ = v_toElabInfo_987_;
v_isShared_993_ = v_isSharedCheck_1008_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_stx_990_);
lean_dec(v_toElabInfo_987_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1008_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
uint8_t v___x_994_; 
lean_inc(v_stx_990_);
v___x_994_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic(v_stx_990_);
if (v___x_994_ == 0)
{
lean_del_object(v___x_992_);
lean_dec(v_stx_990_);
lean_dec(v_goalsBefore_989_);
lean_dec_ref(v_mctxBefore_988_);
return v_acc_985_;
}
else
{
lean_object* v___x_995_; 
v___x_995_ = l_List_head_x3f___redArg(v_goalsBefore_989_);
lean_dec(v_goalsBefore_989_);
if (lean_obj_tag(v___x_995_) == 1)
{
lean_object* v_toCommandContextInfo_996_; lean_object* v_val_997_; lean_object* v_env_998_; lean_object* v_options_999_; lean_object* v_currNamespace_1000_; lean_object* v_openDecls_1001_; lean_object* v_namingCtx_1003_; 
v_toCommandContextInfo_996_ = lean_ctor_get(v_ctx_983_, 0);
v_val_997_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_val_997_);
lean_dec_ref_known(v___x_995_, 1);
v_env_998_ = lean_ctor_get(v_toCommandContextInfo_996_, 0);
v_options_999_ = lean_ctor_get(v_toCommandContextInfo_996_, 4);
v_currNamespace_1000_ = lean_ctor_get(v_toCommandContextInfo_996_, 5);
v_openDecls_1001_ = lean_ctor_get(v_toCommandContextInfo_996_, 6);
lean_inc(v_openDecls_1001_);
lean_inc(v_currNamespace_1000_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 1, v_openDecls_1001_);
lean_ctor_set(v___x_992_, 0, v_currNamespace_1000_);
v_namingCtx_1003_ = v___x_992_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_currNamespace_1000_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_openDecls_1001_);
v_namingCtx_1003_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1004_ = lean_box(1);
lean_inc_ref(v_options_999_);
lean_inc_ref(v_env_998_);
v___x_1005_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v_stx_990_);
lean_ctor_set(v___x_1005_, 2, v_env_998_);
lean_ctor_set(v___x_1005_, 3, v_mctxBefore_988_);
lean_ctor_set(v___x_1005_, 4, v_options_999_);
lean_ctor_set(v___x_1005_, 5, v_namingCtx_1003_);
lean_ctor_set(v___x_1005_, 6, v_val_997_);
v___x_1006_ = lean_array_push(v_acc_985_, v___x_1005_);
return v___x_1006_;
}
}
else
{
lean_dec(v___x_995_);
lean_del_object(v___x_992_);
lean_dec(v_stx_990_);
lean_dec_ref(v_mctxBefore_988_);
return v_acc_985_;
}
}
}
}
else
{
lean_dec_ref(v_info_984_);
return v_acc_985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0___boxed(lean_object* v_ctx_1010_, lean_object* v_info_1011_, lean_object* v_acc_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0(v_ctx_1010_, v_info_1011_, v_acc_1012_);
lean_dec_ref(v_ctx_1010_);
return v_res_1013_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0(lean_object* v_x_1018_){
_start:
{
lean_object* v___x_1019_; uint8_t v___x_1020_; 
v___x_1019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___closed__1));
v___x_1020_ = lean_name_eq(v_x_1018_, v___x_1019_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0___boxed(lean_object* v_x_1021_){
_start:
{
uint8_t v_res_1022_; lean_object* v_r_1023_; 
v_res_1022_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___lam__0(v_x_1021_);
lean_dec(v_x_1021_);
v_r_1023_ = lean_box(v_res_1022_);
return v_r_1023_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___redArg(lean_object* v_a_1024_, lean_object* v_x_1025_){
_start:
{
if (lean_obj_tag(v_x_1025_) == 0)
{
uint8_t v___x_1026_; 
v___x_1026_ = 0;
return v___x_1026_;
}
else
{
lean_object* v_key_1027_; lean_object* v_tail_1028_; lean_object* v_fst_1029_; lean_object* v_snd_1030_; lean_object* v_fst_1031_; lean_object* v_snd_1032_; uint8_t v___x_1033_; 
v_key_1027_ = lean_ctor_get(v_x_1025_, 0);
v_tail_1028_ = lean_ctor_get(v_x_1025_, 2);
v_fst_1029_ = lean_ctor_get(v_key_1027_, 0);
v_snd_1030_ = lean_ctor_get(v_key_1027_, 1);
v_fst_1031_ = lean_ctor_get(v_a_1024_, 0);
v_snd_1032_ = lean_ctor_get(v_a_1024_, 1);
v___x_1033_ = l_Lean_Syntax_instBEqRange_beq(v_fst_1029_, v_fst_1031_);
if (v___x_1033_ == 0)
{
v_x_1025_ = v_tail_1028_;
goto _start;
}
else
{
uint8_t v___x_1035_; 
v___x_1035_ = l_Lean_instBEqMVarId_beq(v_snd_1030_, v_snd_1032_);
if (v___x_1035_ == 0)
{
v_x_1025_ = v_tail_1028_;
goto _start;
}
else
{
return v___x_1035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___redArg___boxed(lean_object* v_a_1037_, lean_object* v_x_1038_){
_start:
{
uint8_t v_res_1039_; lean_object* v_r_1040_; 
v_res_1039_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___redArg(v_a_1037_, v_x_1038_);
lean_dec(v_x_1038_);
lean_dec_ref(v_a_1037_);
v_r_1040_ = lean_box(v_res_1039_);
return v_r_1040_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4_spec__9___redArg(lean_object* v_x_1041_, lean_object* v_x_1042_){
_start:
{
if (lean_obj_tag(v_x_1042_) == 0)
{
return v_x_1041_;
}
else
{
lean_object* v_key_1043_; lean_object* v_value_1044_; lean_object* v_tail_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1072_; 
v_key_1043_ = lean_ctor_get(v_x_1042_, 0);
v_value_1044_ = lean_ctor_get(v_x_1042_, 1);
v_tail_1045_ = lean_ctor_get(v_x_1042_, 2);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_x_1042_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1047_ = v_x_1042_;
v_isShared_1048_ = v_isSharedCheck_1072_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_tail_1045_);
lean_inc(v_value_1044_);
lean_inc(v_key_1043_);
lean_dec(v_x_1042_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1072_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v_fst_1049_; lean_object* v_snd_1050_; lean_object* v___x_1051_; uint64_t v___x_1052_; uint64_t v___x_1053_; uint64_t v___x_1054_; uint64_t v___x_1055_; uint64_t v___x_1056_; uint64_t v_fold_1057_; uint64_t v___x_1058_; uint64_t v___x_1059_; uint64_t v___x_1060_; size_t v___x_1061_; size_t v___x_1062_; size_t v___x_1063_; size_t v___x_1064_; size_t v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1068_; 
v_fst_1049_ = lean_ctor_get(v_key_1043_, 0);
v_snd_1050_ = lean_ctor_get(v_key_1043_, 1);
v___x_1051_ = lean_array_get_size(v_x_1041_);
v___x_1052_ = l_Lean_Syntax_instHashableRange_hash(v_fst_1049_);
v___x_1053_ = l_Lean_instHashableMVarId_hash(v_snd_1050_);
v___x_1054_ = lean_uint64_mix_hash(v___x_1052_, v___x_1053_);
v___x_1055_ = 32ULL;
v___x_1056_ = lean_uint64_shift_right(v___x_1054_, v___x_1055_);
v_fold_1057_ = lean_uint64_xor(v___x_1054_, v___x_1056_);
v___x_1058_ = 16ULL;
v___x_1059_ = lean_uint64_shift_right(v_fold_1057_, v___x_1058_);
v___x_1060_ = lean_uint64_xor(v_fold_1057_, v___x_1059_);
v___x_1061_ = lean_uint64_to_usize(v___x_1060_);
v___x_1062_ = lean_usize_of_nat(v___x_1051_);
v___x_1063_ = ((size_t)1ULL);
v___x_1064_ = lean_usize_sub(v___x_1062_, v___x_1063_);
v___x_1065_ = lean_usize_land(v___x_1061_, v___x_1064_);
v___x_1066_ = lean_array_uget_borrowed(v_x_1041_, v___x_1065_);
lean_inc(v___x_1066_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 2, v___x_1066_);
v___x_1068_ = v___x_1047_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_key_1043_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_value_1044_);
lean_ctor_set(v_reuseFailAlloc_1071_, 2, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
lean_object* v___x_1069_; 
v___x_1069_ = lean_array_uset(v_x_1041_, v___x_1065_, v___x_1068_);
v_x_1041_ = v___x_1069_;
v_x_1042_ = v_tail_1045_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4___redArg(lean_object* v_i_1073_, lean_object* v_source_1074_, lean_object* v_target_1075_){
_start:
{
lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1076_ = lean_array_get_size(v_source_1074_);
v___x_1077_ = lean_nat_dec_lt(v_i_1073_, v___x_1076_);
if (v___x_1077_ == 0)
{
lean_dec_ref(v_source_1074_);
lean_dec(v_i_1073_);
return v_target_1075_;
}
else
{
lean_object* v_es_1078_; lean_object* v___x_1079_; lean_object* v_source_1080_; lean_object* v_target_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_es_1078_ = lean_array_fget(v_source_1074_, v_i_1073_);
v___x_1079_ = lean_box(0);
v_source_1080_ = lean_array_fset(v_source_1074_, v_i_1073_, v___x_1079_);
v_target_1081_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4_spec__9___redArg(v_target_1075_, v_es_1078_);
v___x_1082_ = lean_unsigned_to_nat(1u);
v___x_1083_ = lean_nat_add(v_i_1073_, v___x_1082_);
lean_dec(v_i_1073_);
v_i_1073_ = v___x_1083_;
v_source_1074_ = v_source_1080_;
v_target_1075_ = v_target_1081_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3___redArg(lean_object* v_data_1085_){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v_nbuckets_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1086_ = lean_array_get_size(v_data_1085_);
v___x_1087_ = lean_unsigned_to_nat(2u);
v_nbuckets_1088_ = lean_nat_mul(v___x_1086_, v___x_1087_);
v___x_1089_ = lean_unsigned_to_nat(0u);
v___x_1090_ = lean_box(0);
v___x_1091_ = lean_mk_array(v_nbuckets_1088_, v___x_1090_);
v___x_1092_ = lean_array_propagate_mark(v_data_1085_, v___x_1091_);
v___x_1093_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4___redArg(v___x_1089_, v_data_1085_, v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(lean_object* v_m_1094_, lean_object* v_a_1095_, lean_object* v_b_1096_){
_start:
{
lean_object* v_size_1097_; lean_object* v_buckets_1098_; lean_object* v_fst_1099_; lean_object* v_snd_1100_; lean_object* v___x_1101_; uint64_t v___x_1102_; uint64_t v___x_1103_; uint64_t v___x_1104_; uint64_t v___x_1105_; uint64_t v___x_1106_; uint64_t v_fold_1107_; uint64_t v___x_1108_; uint64_t v___x_1109_; uint64_t v___x_1110_; size_t v___x_1111_; size_t v___x_1112_; size_t v___x_1113_; size_t v___x_1114_; size_t v___x_1115_; lean_object* v_bkt_1116_; uint8_t v___x_1117_; 
v_size_1097_ = lean_ctor_get(v_m_1094_, 0);
v_buckets_1098_ = lean_ctor_get(v_m_1094_, 1);
v_fst_1099_ = lean_ctor_get(v_a_1095_, 0);
v_snd_1100_ = lean_ctor_get(v_a_1095_, 1);
v___x_1101_ = lean_array_get_size(v_buckets_1098_);
v___x_1102_ = l_Lean_Syntax_instHashableRange_hash(v_fst_1099_);
v___x_1103_ = l_Lean_instHashableMVarId_hash(v_snd_1100_);
v___x_1104_ = lean_uint64_mix_hash(v___x_1102_, v___x_1103_);
v___x_1105_ = 32ULL;
v___x_1106_ = lean_uint64_shift_right(v___x_1104_, v___x_1105_);
v_fold_1107_ = lean_uint64_xor(v___x_1104_, v___x_1106_);
v___x_1108_ = 16ULL;
v___x_1109_ = lean_uint64_shift_right(v_fold_1107_, v___x_1108_);
v___x_1110_ = lean_uint64_xor(v_fold_1107_, v___x_1109_);
v___x_1111_ = lean_uint64_to_usize(v___x_1110_);
v___x_1112_ = lean_usize_of_nat(v___x_1101_);
v___x_1113_ = ((size_t)1ULL);
v___x_1114_ = lean_usize_sub(v___x_1112_, v___x_1113_);
v___x_1115_ = lean_usize_land(v___x_1111_, v___x_1114_);
v_bkt_1116_ = lean_array_uget_borrowed(v_buckets_1098_, v___x_1115_);
v___x_1117_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___redArg(v_a_1095_, v_bkt_1116_);
if (v___x_1117_ == 0)
{
lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1138_; 
lean_inc_ref(v_buckets_1098_);
lean_inc(v_size_1097_);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_m_1094_);
if (v_isSharedCheck_1138_ == 0)
{
lean_object* v_unused_1139_; lean_object* v_unused_1140_; 
v_unused_1139_ = lean_ctor_get(v_m_1094_, 1);
lean_dec(v_unused_1139_);
v_unused_1140_ = lean_ctor_get(v_m_1094_, 0);
lean_dec(v_unused_1140_);
v___x_1119_ = v_m_1094_;
v_isShared_1120_ = v_isSharedCheck_1138_;
goto v_resetjp_1118_;
}
else
{
lean_dec(v_m_1094_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1138_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v_size_x27_1122_; lean_object* v___x_1123_; lean_object* v_buckets_x27_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; 
v___x_1121_ = lean_unsigned_to_nat(1u);
v_size_x27_1122_ = lean_nat_add(v_size_1097_, v___x_1121_);
lean_dec(v_size_1097_);
lean_inc(v_bkt_1116_);
v___x_1123_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1123_, 0, v_a_1095_);
lean_ctor_set(v___x_1123_, 1, v_b_1096_);
lean_ctor_set(v___x_1123_, 2, v_bkt_1116_);
v_buckets_x27_1124_ = lean_array_uset(v_buckets_1098_, v___x_1115_, v___x_1123_);
v___x_1125_ = lean_unsigned_to_nat(4u);
v___x_1126_ = lean_nat_mul(v_size_x27_1122_, v___x_1125_);
v___x_1127_ = lean_unsigned_to_nat(3u);
v___x_1128_ = lean_nat_div(v___x_1126_, v___x_1127_);
lean_dec(v___x_1126_);
v___x_1129_ = lean_array_get_size(v_buckets_x27_1124_);
v___x_1130_ = lean_nat_dec_le(v___x_1128_, v___x_1129_);
lean_dec(v___x_1128_);
if (v___x_1130_ == 0)
{
lean_object* v_val_1131_; lean_object* v___x_1133_; 
v_val_1131_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3___redArg(v_buckets_x27_1124_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v_val_1131_);
lean_ctor_set(v___x_1119_, 0, v_size_x27_1122_);
v___x_1133_ = v___x_1119_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_size_x27_1122_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v_val_1131_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
else
{
lean_object* v___x_1136_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v_buckets_x27_1124_);
lean_ctor_set(v___x_1119_, 0, v_size_x27_1122_);
v___x_1136_ = v___x_1119_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_size_x27_1122_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_buckets_x27_1124_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
else
{
lean_dec(v_b_1096_);
lean_dec_ref(v_a_1095_);
return v_m_1094_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(lean_object* v_m_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v_buckets_1143_; lean_object* v_fst_1144_; lean_object* v_snd_1145_; lean_object* v___x_1146_; uint64_t v___x_1147_; uint64_t v___x_1148_; uint64_t v___x_1149_; uint64_t v___x_1150_; uint64_t v___x_1151_; uint64_t v_fold_1152_; uint64_t v___x_1153_; uint64_t v___x_1154_; uint64_t v___x_1155_; size_t v___x_1156_; size_t v___x_1157_; size_t v___x_1158_; size_t v___x_1159_; size_t v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v_buckets_1143_ = lean_ctor_get(v_m_1141_, 1);
v_fst_1144_ = lean_ctor_get(v_a_1142_, 0);
v_snd_1145_ = lean_ctor_get(v_a_1142_, 1);
v___x_1146_ = lean_array_get_size(v_buckets_1143_);
v___x_1147_ = l_Lean_Syntax_instHashableRange_hash(v_fst_1144_);
v___x_1148_ = l_Lean_instHashableMVarId_hash(v_snd_1145_);
v___x_1149_ = lean_uint64_mix_hash(v___x_1147_, v___x_1148_);
v___x_1150_ = 32ULL;
v___x_1151_ = lean_uint64_shift_right(v___x_1149_, v___x_1150_);
v_fold_1152_ = lean_uint64_xor(v___x_1149_, v___x_1151_);
v___x_1153_ = 16ULL;
v___x_1154_ = lean_uint64_shift_right(v_fold_1152_, v___x_1153_);
v___x_1155_ = lean_uint64_xor(v_fold_1152_, v___x_1154_);
v___x_1156_ = lean_uint64_to_usize(v___x_1155_);
v___x_1157_ = lean_usize_of_nat(v___x_1146_);
v___x_1158_ = ((size_t)1ULL);
v___x_1159_ = lean_usize_sub(v___x_1157_, v___x_1158_);
v___x_1160_ = lean_usize_land(v___x_1156_, v___x_1159_);
v___x_1161_ = lean_array_uget_borrowed(v_buckets_1143_, v___x_1160_);
v___x_1162_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___redArg(v_a_1142_, v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg___boxed(lean_object* v_m_1163_, lean_object* v_a_1164_){
_start:
{
uint8_t v_res_1165_; lean_object* v_r_1166_; 
v_res_1165_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(v_m_1163_, v_a_1164_);
lean_dec_ref(v_a_1164_);
lean_dec_ref(v_m_1163_);
v_r_1166_ = lean_box(v_res_1165_);
return v_r_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg(lean_object* v___x_1167_, lean_object* v_fst_1168_, lean_object* v_snd_1169_, lean_object* v___x_1170_, lean_object* v_as_1171_, size_t v_sz_1172_, size_t v_i_1173_, lean_object* v_b_1174_){
_start:
{
lean_object* v_a_1177_; uint8_t v___x_1181_; 
v___x_1181_ = lean_usize_dec_lt(v_i_1173_, v_sz_1172_);
if (v___x_1181_ == 0)
{
lean_object* v___x_1182_; 
lean_dec(v___x_1170_);
lean_dec(v_snd_1169_);
lean_dec(v_fst_1168_);
lean_dec_ref(v___x_1167_);
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v_b_1174_);
return v___x_1182_;
}
else
{
lean_object* v_a_1183_; lean_object* v_snd_1184_; lean_object* v_fst_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1221_; 
v_a_1183_ = lean_array_uget(v_as_1171_, v_i_1173_);
v_snd_1184_ = lean_ctor_get(v_a_1183_, 1);
v_fst_1185_ = lean_ctor_get(v_a_1183_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v_a_1183_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1187_ = v_a_1183_;
v_isShared_1188_ = v_isSharedCheck_1221_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_snd_1184_);
lean_inc(v_fst_1185_);
lean_dec(v_a_1183_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1221_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v_fst_1189_; lean_object* v_snd_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1220_; 
v_fst_1189_ = lean_ctor_get(v_snd_1184_, 0);
v_snd_1190_ = lean_ctor_get(v_snd_1184_, 1);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_snd_1184_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1192_ = v_snd_1184_;
v_isShared_1193_ = v_isSharedCheck_1220_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_snd_1190_);
lean_inc(v_fst_1189_);
lean_dec(v_snd_1184_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1220_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v_fst_1194_; lean_object* v_snd_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1219_; 
v_fst_1194_ = lean_ctor_get(v_b_1174_, 0);
v_snd_1195_ = lean_ctor_get(v_b_1174_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_b_1174_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1197_ = v_b_1174_;
v_isShared_1198_ = v_isSharedCheck_1219_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_snd_1195_);
lean_inc(v_fst_1194_);
lean_dec(v_b_1174_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1219_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
lean_inc(v_snd_1190_);
lean_inc_ref(v___x_1167_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 1, v_snd_1190_);
lean_ctor_set(v___x_1197_, 0, v___x_1167_);
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_snd_1190_);
v___x_1200_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
uint8_t v___x_1201_; 
v___x_1201_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(v_snd_1195_, v___x_1200_);
if (v___x_1201_ == 0)
{
lean_object* v_env_1202_; lean_object* v_mctx_1203_; lean_object* v_opts_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; 
v_env_1202_ = lean_ctor_get(v_fst_1185_, 0);
lean_inc_ref(v_env_1202_);
v_mctx_1203_ = lean_ctor_get(v_fst_1185_, 1);
lean_inc_ref(v_mctx_1203_);
v_opts_1204_ = lean_ctor_get(v_fst_1185_, 3);
lean_inc_ref(v_opts_1204_);
lean_dec(v_fst_1185_);
v___x_1205_ = lean_box(0);
v___x_1206_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(v_snd_1195_, v___x_1200_, v___x_1205_);
lean_inc(v_snd_1169_);
lean_inc(v_fst_1168_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 1, v_snd_1169_);
lean_ctor_set(v___x_1187_, 0, v_fst_1168_);
v___x_1208_ = v___x_1187_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_fst_1168_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_snd_1169_);
v___x_1208_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1212_; 
lean_inc(v___x_1170_);
v___x_1209_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
lean_ctor_set(v___x_1209_, 1, v___x_1170_);
lean_ctor_set(v___x_1209_, 2, v_env_1202_);
lean_ctor_set(v___x_1209_, 3, v_mctx_1203_);
lean_ctor_set(v___x_1209_, 4, v_opts_1204_);
lean_ctor_set(v___x_1209_, 5, v_fst_1189_);
lean_ctor_set(v___x_1209_, 6, v_snd_1190_);
v___x_1210_ = lean_array_push(v_fst_1194_, v___x_1209_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 1, v___x_1206_);
lean_ctor_set(v___x_1192_, 0, v___x_1210_);
v___x_1212_ = v___x_1192_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v___x_1210_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v___x_1206_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
v_a_1177_ = v___x_1212_;
goto v___jp_1176_;
}
}
}
else
{
lean_object* v___x_1216_; 
lean_dec_ref(v___x_1200_);
lean_dec(v_snd_1190_);
lean_dec(v_fst_1189_);
lean_del_object(v___x_1187_);
lean_dec(v_fst_1185_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 1, v_snd_1195_);
lean_ctor_set(v___x_1192_, 0, v_fst_1194_);
v___x_1216_ = v___x_1192_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_fst_1194_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v_snd_1195_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
v_a_1177_ = v___x_1216_;
goto v___jp_1176_;
}
}
}
}
}
}
}
v___jp_1176_:
{
size_t v___x_1178_; size_t v___x_1179_; 
v___x_1178_ = ((size_t)1ULL);
v___x_1179_ = lean_usize_add(v_i_1173_, v___x_1178_);
v_i_1173_ = v___x_1179_;
v_b_1174_ = v_a_1177_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg___boxed(lean_object* v___x_1222_, lean_object* v_fst_1223_, lean_object* v_snd_1224_, lean_object* v___x_1225_, lean_object* v_as_1226_, lean_object* v_sz_1227_, lean_object* v_i_1228_, lean_object* v_b_1229_, lean_object* v___y_1230_){
_start:
{
size_t v_sz_boxed_1231_; size_t v_i_boxed_1232_; lean_object* v_res_1233_; 
v_sz_boxed_1231_ = lean_unbox_usize(v_sz_1227_);
lean_dec(v_sz_1227_);
v_i_boxed_1232_ = lean_unbox_usize(v_i_1228_);
lean_dec(v_i_1228_);
v_res_1233_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg(v___x_1222_, v_fst_1223_, v_snd_1224_, v___x_1225_, v_as_1226_, v_sz_boxed_1231_, v_i_boxed_1232_, v_b_1229_);
lean_dec_ref(v_as_1226_);
return v_res_1233_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0_spec__0___redArg___closed__0);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1236_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0);
v___x_1237_ = lean_unsigned_to_nat(0u);
v___x_1238_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
lean_ctor_set(v___x_1238_, 2, v___x_1237_);
lean_ctor_set(v___x_1238_, 3, v___x_1237_);
lean_ctor_set(v___x_1238_, 4, v___x_1236_);
lean_ctor_set(v___x_1238_, 5, v___x_1236_);
lean_ctor_set(v___x_1238_, 6, v___x_1236_);
lean_ctor_set(v___x_1238_, 7, v___x_1236_);
lean_ctor_set(v___x_1238_, 8, v___x_1236_);
lean_ctor_set(v___x_1238_, 9, v___x_1236_);
lean_ctor_set(v___x_1238_, 10, v___x_1236_);
return v___x_1238_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1239_ = lean_unsigned_to_nat(32u);
v___x_1240_ = lean_mk_empty_array_with_capacity(v___x_1239_);
v___x_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
return v___x_1241_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__3(void){
_start:
{
size_t v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1242_ = ((size_t)5ULL);
v___x_1243_ = lean_unsigned_to_nat(0u);
v___x_1244_ = lean_unsigned_to_nat(32u);
v___x_1245_ = lean_mk_empty_array_with_capacity(v___x_1244_);
v___x_1246_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__2);
v___x_1247_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
lean_ctor_set(v___x_1247_, 1, v___x_1245_);
lean_ctor_set(v___x_1247_, 2, v___x_1243_);
lean_ctor_set(v___x_1247_, 3, v___x_1243_);
lean_ctor_set_usize(v___x_1247_, 4, v___x_1242_);
return v___x_1247_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1248_ = lean_box(1);
v___x_1249_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__3);
v___x_1250_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__0);
v___x_1251_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___x_1249_);
lean_ctor_set(v___x_1251_, 2, v___x_1248_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg(lean_object* v_msgData_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v___x_1255_; lean_object* v_env_1256_; uint8_t v___x_1257_; lean_object* v_env_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v_scopes_1261_; lean_object* v___x_1262_; lean_object* v_opts_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1255_ = lean_st_ref_get(v___y_1253_);
v_env_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc_ref(v_env_1256_);
lean_dec(v___x_1255_);
v___x_1257_ = 0;
v_env_1258_ = l_Lean_Environment_setRecordingDeps(v_env_1256_, v___x_1257_);
v___x_1259_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1260_ = lean_st_ref_get(v___y_1253_);
v_scopes_1261_ = lean_ctor_get(v___x_1260_, 2);
lean_inc(v_scopes_1261_);
lean_dec(v___x_1260_);
v___x_1262_ = l_List_head_x21___redArg(v___x_1259_, v_scopes_1261_);
lean_dec(v_scopes_1261_);
v_opts_1263_ = lean_ctor_get(v___x_1262_, 1);
lean_inc_ref(v_opts_1263_);
lean_dec(v___x_1262_);
v___x_1264_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__1);
v___x_1265_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___closed__4);
v___x_1266_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1266_, 0, v_env_1258_);
lean_ctor_set(v___x_1266_, 1, v___x_1264_);
lean_ctor_set(v___x_1266_, 2, v___x_1265_);
lean_ctor_set(v___x_1266_, 3, v_opts_1263_);
v___x_1267_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
lean_ctor_set(v___x_1267_, 1, v_msgData_1252_);
v___x_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg___boxed(lean_object* v_msgData_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg(v_msgData_1269_, v___y_1270_);
lean_dec(v___y_1270_);
return v_res_1272_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1273_; double v___x_1274_; 
v___x_1273_ = lean_unsigned_to_nat(0u);
v___x_1274_ = lean_float_of_nat(v___x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(lean_object* v_cls_1277_, lean_object* v_msg_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_Elab_Command_getRef___redArg(v___y_1279_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1284_; lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1333_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
lean_dec_ref_known(v___x_1282_, 1);
v___x_1284_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg(v_msg_1278_, v___y_1280_);
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1287_ = v___x_1284_;
v_isShared_1288_ = v_isSharedCheck_1333_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1284_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1333_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1289_; lean_object* v_traceState_1290_; lean_object* v_env_1291_; lean_object* v_messages_1292_; lean_object* v_scopes_1293_; lean_object* v_usedQuotCtxts_1294_; lean_object* v_nextMacroScope_1295_; lean_object* v_maxRecDepth_1296_; lean_object* v_ngen_1297_; lean_object* v_auxDeclNGen_1298_; lean_object* v_infoState_1299_; lean_object* v_snapshotTasks_1300_; lean_object* v_prevLinterStates_1301_; lean_object* v_codeQualityEntryTasks_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1332_; 
v___x_1289_ = lean_st_ref_take(v___y_1280_);
v_traceState_1290_ = lean_ctor_get(v___x_1289_, 9);
v_env_1291_ = lean_ctor_get(v___x_1289_, 0);
v_messages_1292_ = lean_ctor_get(v___x_1289_, 1);
v_scopes_1293_ = lean_ctor_get(v___x_1289_, 2);
v_usedQuotCtxts_1294_ = lean_ctor_get(v___x_1289_, 3);
v_nextMacroScope_1295_ = lean_ctor_get(v___x_1289_, 4);
v_maxRecDepth_1296_ = lean_ctor_get(v___x_1289_, 5);
v_ngen_1297_ = lean_ctor_get(v___x_1289_, 6);
v_auxDeclNGen_1298_ = lean_ctor_get(v___x_1289_, 7);
v_infoState_1299_ = lean_ctor_get(v___x_1289_, 8);
v_snapshotTasks_1300_ = lean_ctor_get(v___x_1289_, 10);
v_prevLinterStates_1301_ = lean_ctor_get(v___x_1289_, 11);
v_codeQualityEntryTasks_1302_ = lean_ctor_get(v___x_1289_, 12);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1304_ = v___x_1289_;
v_isShared_1305_ = v_isSharedCheck_1332_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1302_);
lean_inc(v_prevLinterStates_1301_);
lean_inc(v_snapshotTasks_1300_);
lean_inc(v_traceState_1290_);
lean_inc(v_infoState_1299_);
lean_inc(v_auxDeclNGen_1298_);
lean_inc(v_ngen_1297_);
lean_inc(v_maxRecDepth_1296_);
lean_inc(v_nextMacroScope_1295_);
lean_inc(v_usedQuotCtxts_1294_);
lean_inc(v_scopes_1293_);
lean_inc(v_messages_1292_);
lean_inc(v_env_1291_);
lean_dec(v___x_1289_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1332_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
uint64_t v_tid_1306_; lean_object* v_traces_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1331_; 
v_tid_1306_ = lean_ctor_get_uint64(v_traceState_1290_, sizeof(void*)*1);
v_traces_1307_ = lean_ctor_get(v_traceState_1290_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_traceState_1290_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1309_ = v_traceState_1290_;
v_isShared_1310_ = v_isSharedCheck_1331_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_traces_1307_);
lean_dec(v_traceState_1290_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1331_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; double v___x_1313_; uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1322_; 
v___x_1311_ = lean_box(0);
v___x_1312_ = lean_box(0);
v___x_1313_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0);
v___x_1314_ = 0;
v___x_1315_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_1316_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1316_, 0, v_cls_1277_);
lean_ctor_set(v___x_1316_, 1, v___x_1312_);
lean_ctor_set(v___x_1316_, 2, v___x_1315_);
lean_ctor_set_float(v___x_1316_, sizeof(void*)*3, v___x_1313_);
lean_ctor_set_float(v___x_1316_, sizeof(void*)*3 + 8, v___x_1313_);
lean_ctor_set_uint8(v___x_1316_, sizeof(void*)*3 + 16, v___x_1314_);
v___x_1317_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__1));
v___x_1318_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1316_);
lean_ctor_set(v___x_1318_, 1, v_a_1285_);
lean_ctor_set(v___x_1318_, 2, v___x_1317_);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v_a_1283_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = l_Lean_PersistentArray_push___redArg(v_traces_1307_, v___x_1319_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 0, v___x_1320_);
v___x_1322_ = v___x_1309_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1320_);
lean_ctor_set_uint64(v_reuseFailAlloc_1330_, sizeof(void*)*1, v_tid_1306_);
v___x_1322_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
lean_object* v___x_1324_; 
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 9, v___x_1322_);
v___x_1324_ = v___x_1304_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_env_1291_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_messages_1292_);
lean_ctor_set(v_reuseFailAlloc_1329_, 2, v_scopes_1293_);
lean_ctor_set(v_reuseFailAlloc_1329_, 3, v_usedQuotCtxts_1294_);
lean_ctor_set(v_reuseFailAlloc_1329_, 4, v_nextMacroScope_1295_);
lean_ctor_set(v_reuseFailAlloc_1329_, 5, v_maxRecDepth_1296_);
lean_ctor_set(v_reuseFailAlloc_1329_, 6, v_ngen_1297_);
lean_ctor_set(v_reuseFailAlloc_1329_, 7, v_auxDeclNGen_1298_);
lean_ctor_set(v_reuseFailAlloc_1329_, 8, v_infoState_1299_);
lean_ctor_set(v_reuseFailAlloc_1329_, 9, v___x_1322_);
lean_ctor_set(v_reuseFailAlloc_1329_, 10, v_snapshotTasks_1300_);
lean_ctor_set(v_reuseFailAlloc_1329_, 11, v_prevLinterStates_1301_);
lean_ctor_set(v_reuseFailAlloc_1329_, 12, v_codeQualityEntryTasks_1302_);
v___x_1324_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1327_; 
v___x_1325_ = lean_st_ref_put(v___y_1280_, v___x_1324_);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 0, v___x_1311_);
v___x_1327_ = v___x_1287_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1311_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec_ref(v_msg_1278_);
lean_dec(v_cls_1277_);
v_a_1334_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1282_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1282_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___boxed(lean_object* v_cls_1342_, lean_object* v_msg_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v_cls_1342_, v_msg_1343_, v___y_1344_, v___y_1345_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
return v_res_1347_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3(void){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1353_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__2));
v___x_1354_ = l_Lean_Name_append(v___x_1353_, v___x_1352_);
return v___x_1354_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__4));
v___x_1357_ = l_Lean_stringToMessageData(v___x_1356_);
return v___x_1357_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__6));
v___x_1360_ = l_Lean_stringToMessageData(v___x_1359_);
return v___x_1360_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__8));
v___x_1363_ = l_Lean_stringToMessageData(v___x_1362_);
return v___x_1363_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__10));
v___x_1366_ = l_Lean_stringToMessageData(v___x_1365_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13(lean_object* v___x_1367_, lean_object* v_val_1368_, lean_object* v_cmd_1369_, uint8_t v_onUnsolved_1370_, uint8_t v___y_1371_, lean_object* v_as_1372_, size_t v_sz_1373_, size_t v_i_1374_, lean_object* v_b_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
uint8_t v___x_1379_; 
v___x_1379_ = lean_usize_dec_lt(v_i_1374_, v_sz_1373_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; 
lean_dec(v_cmd_1369_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_b_1375_);
return v___x_1380_;
}
else
{
lean_object* v_snd_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1529_; 
v_snd_1381_ = lean_ctor_get(v_b_1375_, 1);
v_isSharedCheck_1529_ = !lean_is_exclusive(v_b_1375_);
if (v_isSharedCheck_1529_ == 0)
{
lean_object* v_unused_1530_; 
v_unused_1530_ = lean_ctor_get(v_b_1375_, 0);
lean_dec(v_unused_1530_);
v___x_1383_ = v_b_1375_;
v_isShared_1384_ = v_isSharedCheck_1529_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_snd_1381_);
lean_dec(v_b_1375_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1529_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v_fst_1385_; lean_object* v_snd_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1528_; 
v_fst_1385_ = lean_ctor_get(v_snd_1381_, 0);
v_snd_1386_ = lean_ctor_get(v_snd_1381_, 1);
v_isSharedCheck_1528_ = !lean_is_exclusive(v_snd_1381_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1388_ = v_snd_1381_;
v_isShared_1389_ = v_isSharedCheck_1528_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_snd_1386_);
lean_inc(v_fst_1385_);
lean_dec(v_snd_1381_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1528_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v_a_1390_; lean_object* v_pos_1391_; lean_object* v_endPos_1392_; uint8_t v_severity_1393_; lean_object* v_data_1394_; lean_object* v___x_1395_; lean_object* v_a_1397_; 
v_a_1390_ = lean_array_uget_borrowed(v_as_1372_, v_i_1374_);
v_pos_1391_ = lean_ctor_get(v_a_1390_, 1);
v_endPos_1392_ = lean_ctor_get(v_a_1390_, 2);
lean_inc(v_endPos_1392_);
v_severity_1393_ = lean_ctor_get_uint8(v_a_1390_, sizeof(void*)*5 + 1);
v_data_1394_ = lean_ctor_get(v_a_1390_, 4);
v___x_1395_ = lean_box(0);
if (v_severity_1393_ == 2)
{
lean_object* v___f_1410_; uint8_t v___x_1411_; 
v___f_1410_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__0));
lean_inc(v_data_1394_);
v___x_1411_ = l_Lean_MessageData_hasTag(v___f_1410_, v_data_1394_);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; 
lean_dec(v_endPos_1392_);
lean_del_object(v___x_1383_);
v___x_1412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1412_, 0, v_fst_1385_);
lean_ctor_set(v___x_1412_, 1, v_snd_1386_);
v_a_1397_ = v___x_1412_;
goto v___jp_1396_;
}
else
{
if (lean_obj_tag(v_endPos_1392_) == 1)
{
lean_object* v_val_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1525_; 
v_val_1413_ = lean_ctor_get(v_endPos_1392_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_endPos_1392_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1415_ = v_endPos_1392_;
v_isShared_1416_ = v_isSharedCheck_1525_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_val_1413_);
lean_dec(v_endPos_1392_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1525_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; uint8_t v___x_1420_; uint8_t v___x_1421_; 
lean_inc_ref(v_pos_1391_);
v___x_1417_ = l_Lean_FileMap_ofPosition(v___x_1367_, v_pos_1391_);
v___x_1418_ = l_Lean_FileMap_ofPosition(v___x_1367_, v_val_1413_);
lean_inc(v___x_1418_);
lean_inc(v___x_1417_);
v___x_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1417_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = 0;
v___x_1421_ = l_Lean_Syntax_Range_includes(v_val_1368_, v___x_1419_, v___x_1420_, v___x_1420_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; 
lean_dec_ref_known(v___x_1419_, 2);
lean_dec(v___x_1418_);
lean_dec(v___x_1417_);
lean_del_object(v___x_1415_);
lean_del_object(v___x_1383_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v_fst_1385_);
lean_ctor_set(v___x_1422_, 1, v_snd_1386_);
v_a_1397_ = v___x_1422_;
goto v___jp_1396_;
}
else
{
lean_object* v___x_1423_; 
lean_inc(v_cmd_1369_);
lean_inc_ref(v___x_1419_);
v___x_1423_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v___x_1419_, v_cmd_1369_);
if (lean_obj_tag(v___x_1423_) == 1)
{
lean_object* v_val_1424_; lean_object* v_fst_1425_; lean_object* v_snd_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1489_; 
lean_dec(v___x_1418_);
lean_dec(v___x_1417_);
lean_del_object(v___x_1415_);
v_val_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_val_1424_);
lean_dec_ref_known(v___x_1423_, 1);
v_fst_1425_ = lean_ctor_get(v_val_1424_, 0);
v_snd_1426_ = lean_ctor_get(v_val_1424_, 1);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_val_1424_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1428_ = v_val_1424_;
v_isShared_1429_ = v_isSharedCheck_1489_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_snd_1426_);
lean_inc(v_fst_1425_);
lean_dec(v_val_1424_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1489_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; uint8_t v___y_1487_; lean_object* v___x_1488_; 
v___x_1488_ = l_Lean_Syntax_getPos_x3f(v_fst_1425_, v___x_1420_);
if (lean_obj_tag(v___x_1488_) == 0)
{
v___y_1487_ = v___x_1421_;
goto v___jp_1486_;
}
else
{
lean_dec_ref_known(v___x_1488_, 1);
v___y_1487_ = v___x_1420_;
goto v___jp_1486_;
}
v___jp_1430_:
{
lean_object* v___x_1436_; 
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 1, v_snd_1386_);
lean_ctor_set(v___x_1428_, 0, v_fst_1385_);
v___x_1436_ = v___x_1428_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_fst_1385_);
lean_ctor_set(v_reuseFailAlloc_1458_, 1, v_snd_1386_);
v___x_1436_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
size_t v_sz_1437_; size_t v___x_1438_; lean_object* v___x_1439_; 
v_sz_1437_ = lean_array_size(v___y_1432_);
v___x_1438_ = ((size_t)0ULL);
v___x_1439_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg(v___x_1419_, v_fst_1425_, v_snd_1426_, v___y_1431_, v___y_1432_, v_sz_1437_, v___x_1438_, v___x_1436_);
lean_dec_ref(v___y_1432_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v_fst_1441_; lean_object* v_snd_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v_fst_1441_ = lean_ctor_get(v_a_1440_, 0);
v_snd_1442_ = lean_ctor_get(v_a_1440_, 1);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_a_1440_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v_a_1440_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_snd_1442_);
lean_inc(v_fst_1441_);
lean_dec(v_a_1440_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_fst_1441_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_snd_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
v_a_1397_ = v___x_1447_;
goto v___jp_1396_;
}
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_del_object(v___x_1388_);
lean_dec(v_cmd_1369_);
v_a_1450_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1439_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1439_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
v___jp_1459_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; 
lean_inc_ref(v___x_1419_);
v___x_1460_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(v___x_1419_);
v___x_1461_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_data_1394_);
v___x_1462_ = lean_array_get_size(v___x_1461_);
v___x_1463_ = lean_unsigned_to_nat(0u);
v___x_1464_ = lean_nat_dec_eq(v___x_1462_, v___x_1463_);
if (v___x_1464_ == 0)
{
v___y_1431_ = v___x_1460_;
v___y_1432_ = v___x_1461_;
v___y_1433_ = v___y_1376_;
v___y_1434_ = v___y_1377_;
goto v___jp_1430_;
}
else
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v_scopes_1470_; lean_object* v___x_1471_; lean_object* v_opts_1472_; uint8_t v_hasTrace_1473_; 
v___x_1465_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1466_ = l_Lean_inheritedTraceOptions;
v___x_1467_ = lean_st_ref_get(v___x_1466_);
v___x_1468_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1469_ = lean_st_ref_get(v___y_1377_);
v_scopes_1470_ = lean_ctor_get(v___x_1469_, 2);
lean_inc(v_scopes_1470_);
lean_dec(v___x_1469_);
v___x_1471_ = l_List_head_x21___redArg(v___x_1468_, v_scopes_1470_);
lean_dec(v_scopes_1470_);
v_opts_1472_ = lean_ctor_get(v___x_1471_, 1);
lean_inc_ref(v_opts_1472_);
lean_dec(v___x_1471_);
v_hasTrace_1473_ = lean_ctor_get_uint8(v_opts_1472_, sizeof(void*)*1);
if (v_hasTrace_1473_ == 0)
{
lean_dec_ref(v_opts_1472_);
lean_dec(v___x_1467_);
v___y_1431_ = v___x_1460_;
v___y_1432_ = v___x_1461_;
v___y_1433_ = v___y_1376_;
v___y_1434_ = v___y_1377_;
goto v___jp_1430_;
}
else
{
lean_object* v___x_1474_; uint8_t v___x_1475_; 
v___x_1474_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_1475_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1467_, v_opts_1472_, v___x_1474_);
lean_dec_ref(v_opts_1472_);
lean_dec(v___x_1467_);
if (v___x_1475_ == 0)
{
v___y_1431_ = v___x_1460_;
v___y_1432_ = v___x_1461_;
v___y_1433_ = v___y_1376_;
v___y_1434_ = v___y_1377_;
goto v___jp_1430_;
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5);
v___x_1477_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_1465_, v___x_1476_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_dec_ref_known(v___x_1477_, 1);
v___y_1431_ = v___x_1460_;
v___y_1432_ = v___x_1461_;
v___y_1433_ = v___y_1376_;
v___y_1434_ = v___y_1377_;
goto v___jp_1430_;
}
else
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec_ref(v___x_1461_);
lean_dec(v___x_1460_);
lean_del_object(v___x_1428_);
lean_dec(v_snd_1426_);
lean_dec(v_fst_1425_);
lean_dec_ref_known(v___x_1419_, 2);
lean_del_object(v___x_1388_);
lean_dec(v_snd_1386_);
lean_dec(v_fst_1385_);
lean_dec(v_cmd_1369_);
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1477_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1477_);
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
}
}
v___jp_1486_:
{
if (v_onUnsolved_1370_ == 0)
{
if (v___y_1371_ == 0)
{
lean_del_object(v___x_1428_);
lean_dec(v_snd_1426_);
lean_dec(v_fst_1425_);
lean_dec_ref_known(v___x_1419_, 2);
goto v___jp_1404_;
}
else
{
if (v___y_1487_ == 0)
{
lean_del_object(v___x_1428_);
lean_dec(v_snd_1426_);
lean_dec(v_fst_1425_);
lean_dec_ref_known(v___x_1419_, 2);
goto v___jp_1404_;
}
else
{
lean_del_object(v___x_1383_);
goto v___jp_1459_;
}
}
}
else
{
lean_del_object(v___x_1383_);
goto v___jp_1459_;
}
}
}
}
else
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v_scopes_1495_; lean_object* v___x_1496_; lean_object* v_opts_1497_; uint8_t v_hasTrace_1498_; 
lean_dec(v___x_1423_);
lean_dec_ref_known(v___x_1419_, 2);
lean_del_object(v___x_1383_);
v___x_1490_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1491_ = l_Lean_inheritedTraceOptions;
v___x_1492_ = lean_st_ref_get(v___x_1491_);
v___x_1493_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1494_ = lean_st_ref_get(v___y_1377_);
v_scopes_1495_ = lean_ctor_get(v___x_1494_, 2);
lean_inc(v_scopes_1495_);
lean_dec(v___x_1494_);
v___x_1496_ = l_List_head_x21___redArg(v___x_1493_, v_scopes_1495_);
lean_dec(v_scopes_1495_);
v_opts_1497_ = lean_ctor_get(v___x_1496_, 1);
lean_inc_ref(v_opts_1497_);
lean_dec(v___x_1496_);
v_hasTrace_1498_ = lean_ctor_get_uint8(v_opts_1497_, sizeof(void*)*1);
if (v_hasTrace_1498_ == 0)
{
lean_dec_ref(v_opts_1497_);
lean_dec(v___x_1492_);
lean_dec(v___x_1418_);
lean_dec(v___x_1417_);
lean_del_object(v___x_1415_);
goto v___jp_1408_;
}
else
{
lean_object* v___x_1499_; uint8_t v___x_1500_; 
v___x_1499_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_1500_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1492_, v_opts_1497_, v___x_1499_);
lean_dec_ref(v_opts_1497_);
lean_dec(v___x_1492_);
if (v___x_1500_ == 0)
{
lean_dec(v___x_1418_);
lean_dec(v___x_1417_);
lean_del_object(v___x_1415_);
goto v___jp_1408_;
}
else
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1504_; 
v___x_1501_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7);
v___x_1502_ = l_Nat_reprFast(v___x_1417_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set_tag(v___x_1415_, 3);
lean_ctor_set(v___x_1415_, 0, v___x_1502_);
v___x_1504_ = v___x_1415_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1502_);
v___x_1504_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1505_ = l_Lean_MessageData_ofFormat(v___x_1504_);
v___x_1506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1501_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
v___x_1507_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9);
v___x_1508_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1506_);
lean_ctor_set(v___x_1508_, 1, v___x_1507_);
v___x_1509_ = l_Nat_reprFast(v___x_1418_);
v___x_1510_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1509_);
v___x_1511_ = l_Lean_MessageData_ofFormat(v___x_1510_);
v___x_1512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1508_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11);
v___x_1514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1512_);
lean_ctor_set(v___x_1514_, 1, v___x_1513_);
v___x_1515_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_1490_, v___x_1514_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_dec_ref_known(v___x_1515_, 1);
goto v___jp_1408_;
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
lean_del_object(v___x_1388_);
lean_dec(v_snd_1386_);
lean_dec(v_fst_1385_);
lean_dec(v_cmd_1369_);
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1515_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1515_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
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
lean_object* v___x_1526_; 
lean_dec(v_endPos_1392_);
lean_del_object(v___x_1383_);
v___x_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1526_, 0, v_fst_1385_);
lean_ctor_set(v___x_1526_, 1, v_snd_1386_);
v_a_1397_ = v___x_1526_;
goto v___jp_1396_;
}
}
}
else
{
lean_object* v___x_1527_; 
lean_dec(v_endPos_1392_);
lean_del_object(v___x_1383_);
v___x_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1527_, 0, v_fst_1385_);
lean_ctor_set(v___x_1527_, 1, v_snd_1386_);
v_a_1397_ = v___x_1527_;
goto v___jp_1396_;
}
v___jp_1396_:
{
lean_object* v___x_1399_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 1, v_a_1397_);
lean_ctor_set(v___x_1388_, 0, v___x_1395_);
v___x_1399_ = v___x_1388_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1395_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v_a_1397_);
v___x_1399_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
size_t v___x_1400_; size_t v___x_1401_; 
v___x_1400_ = ((size_t)1ULL);
v___x_1401_ = lean_usize_add(v_i_1374_, v___x_1400_);
v_i_1374_ = v___x_1401_;
v_b_1375_ = v___x_1399_;
goto _start;
}
}
v___jp_1404_:
{
lean_object* v___x_1406_; 
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 1, v_snd_1386_);
lean_ctor_set(v___x_1383_, 0, v_fst_1385_);
v___x_1406_ = v___x_1383_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_fst_1385_);
lean_ctor_set(v_reuseFailAlloc_1407_, 1, v_snd_1386_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
v_a_1397_ = v___x_1406_;
goto v___jp_1396_;
}
}
v___jp_1408_:
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1409_, 0, v_fst_1385_);
lean_ctor_set(v___x_1409_, 1, v_snd_1386_);
v_a_1397_ = v___x_1409_;
goto v___jp_1396_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___boxed(lean_object* v___x_1531_, lean_object* v_val_1532_, lean_object* v_cmd_1533_, lean_object* v_onUnsolved_1534_, lean_object* v___y_1535_, lean_object* v_as_1536_, lean_object* v_sz_1537_, lean_object* v_i_1538_, lean_object* v_b_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
uint8_t v_onUnsolved_boxed_1543_; uint8_t v___y_14015__boxed_1544_; size_t v_sz_boxed_1545_; size_t v_i_boxed_1546_; lean_object* v_res_1547_; 
v_onUnsolved_boxed_1543_ = lean_unbox(v_onUnsolved_1534_);
v___y_14015__boxed_1544_ = lean_unbox(v___y_1535_);
v_sz_boxed_1545_ = lean_unbox_usize(v_sz_1537_);
lean_dec(v_sz_1537_);
v_i_boxed_1546_ = lean_unbox_usize(v_i_1538_);
lean_dec(v_i_1538_);
v_res_1547_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13(v___x_1531_, v_val_1532_, v_cmd_1533_, v_onUnsolved_boxed_1543_, v___y_14015__boxed_1544_, v_as_1536_, v_sz_boxed_1545_, v_i_boxed_1546_, v_b_1539_, v___y_1540_, v___y_1541_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec_ref(v_as_1536_);
lean_dec_ref(v_val_1532_);
lean_dec_ref(v___x_1531_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9(lean_object* v___x_1548_, lean_object* v_val_1549_, lean_object* v_cmd_1550_, uint8_t v_onUnsolved_1551_, uint8_t v___y_1552_, lean_object* v_as_1553_, size_t v_sz_1554_, size_t v_i_1555_, lean_object* v_b_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
uint8_t v___x_1560_; 
v___x_1560_ = lean_usize_dec_lt(v_i_1555_, v_sz_1554_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_dec(v_cmd_1550_);
v___x_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1561_, 0, v_b_1556_);
return v___x_1561_;
}
else
{
lean_object* v_snd_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1710_; 
v_snd_1562_ = lean_ctor_get(v_b_1556_, 1);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_b_1556_);
if (v_isSharedCheck_1710_ == 0)
{
lean_object* v_unused_1711_; 
v_unused_1711_ = lean_ctor_get(v_b_1556_, 0);
lean_dec(v_unused_1711_);
v___x_1564_ = v_b_1556_;
v_isShared_1565_ = v_isSharedCheck_1710_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_snd_1562_);
lean_dec(v_b_1556_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1710_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v_fst_1566_; lean_object* v_snd_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1709_; 
v_fst_1566_ = lean_ctor_get(v_snd_1562_, 0);
v_snd_1567_ = lean_ctor_get(v_snd_1562_, 1);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_snd_1562_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1569_ = v_snd_1562_;
v_isShared_1570_ = v_isSharedCheck_1709_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_snd_1567_);
lean_inc(v_fst_1566_);
lean_dec(v_snd_1562_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1709_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v_a_1571_; lean_object* v_pos_1572_; lean_object* v_endPos_1573_; uint8_t v_severity_1574_; lean_object* v_data_1575_; lean_object* v___x_1576_; lean_object* v_a_1578_; 
v_a_1571_ = lean_array_uget_borrowed(v_as_1553_, v_i_1555_);
v_pos_1572_ = lean_ctor_get(v_a_1571_, 1);
v_endPos_1573_ = lean_ctor_get(v_a_1571_, 2);
lean_inc(v_endPos_1573_);
v_severity_1574_ = lean_ctor_get_uint8(v_a_1571_, sizeof(void*)*5 + 1);
v_data_1575_ = lean_ctor_get(v_a_1571_, 4);
v___x_1576_ = lean_box(0);
if (v_severity_1574_ == 2)
{
lean_object* v___f_1591_; uint8_t v___x_1592_; 
v___f_1591_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__0));
lean_inc(v_data_1575_);
v___x_1592_ = l_Lean_MessageData_hasTag(v___f_1591_, v_data_1575_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; 
lean_dec(v_endPos_1573_);
lean_del_object(v___x_1564_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v_fst_1566_);
lean_ctor_set(v___x_1593_, 1, v_snd_1567_);
v_a_1578_ = v___x_1593_;
goto v___jp_1577_;
}
else
{
if (lean_obj_tag(v_endPos_1573_) == 1)
{
lean_object* v_val_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1706_; 
v_val_1594_ = lean_ctor_get(v_endPos_1573_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_endPos_1573_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1596_ = v_endPos_1573_;
v_isShared_1597_ = v_isSharedCheck_1706_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_val_1594_);
lean_dec(v_endPos_1573_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1706_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; uint8_t v___x_1601_; uint8_t v___x_1602_; 
lean_inc_ref(v_pos_1572_);
v___x_1598_ = l_Lean_FileMap_ofPosition(v___x_1548_, v_pos_1572_);
v___x_1599_ = l_Lean_FileMap_ofPosition(v___x_1548_, v_val_1594_);
lean_inc(v___x_1599_);
lean_inc(v___x_1598_);
v___x_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1598_);
lean_ctor_set(v___x_1600_, 1, v___x_1599_);
v___x_1601_ = 0;
v___x_1602_ = l_Lean_Syntax_Range_includes(v_val_1549_, v___x_1600_, v___x_1601_, v___x_1601_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; 
lean_dec_ref_known(v___x_1600_, 2);
lean_dec(v___x_1599_);
lean_dec(v___x_1598_);
lean_del_object(v___x_1596_);
lean_del_object(v___x_1564_);
v___x_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1603_, 0, v_fst_1566_);
lean_ctor_set(v___x_1603_, 1, v_snd_1567_);
v_a_1578_ = v___x_1603_;
goto v___jp_1577_;
}
else
{
lean_object* v___x_1604_; 
lean_inc(v_cmd_1550_);
lean_inc_ref(v___x_1600_);
v___x_1604_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v___x_1600_, v_cmd_1550_);
if (lean_obj_tag(v___x_1604_) == 1)
{
lean_object* v_val_1605_; lean_object* v_fst_1606_; lean_object* v_snd_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1670_; 
lean_dec(v___x_1599_);
lean_dec(v___x_1598_);
lean_del_object(v___x_1596_);
v_val_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_val_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v_fst_1606_ = lean_ctor_get(v_val_1605_, 0);
v_snd_1607_ = lean_ctor_get(v_val_1605_, 1);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_val_1605_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1609_ = v_val_1605_;
v_isShared_1610_ = v_isSharedCheck_1670_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_snd_1607_);
lean_inc(v_fst_1606_);
lean_dec(v_val_1605_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1670_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; uint8_t v___y_1668_; lean_object* v___x_1669_; 
v___x_1669_ = l_Lean_Syntax_getPos_x3f(v_fst_1606_, v___x_1601_);
if (lean_obj_tag(v___x_1669_) == 0)
{
v___y_1668_ = v___x_1602_;
goto v___jp_1667_;
}
else
{
lean_dec_ref_known(v___x_1669_, 1);
v___y_1668_ = v___x_1601_;
goto v___jp_1667_;
}
v___jp_1611_:
{
lean_object* v___x_1617_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 1, v_snd_1567_);
lean_ctor_set(v___x_1609_, 0, v_fst_1566_);
v___x_1617_ = v___x_1609_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_fst_1566_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v_snd_1567_);
v___x_1617_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
size_t v_sz_1618_; size_t v___x_1619_; lean_object* v___x_1620_; 
v_sz_1618_ = lean_array_size(v___y_1613_);
v___x_1619_ = ((size_t)0ULL);
v___x_1620_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg(v___x_1600_, v_fst_1606_, v_snd_1607_, v___y_1612_, v___y_1613_, v_sz_1618_, v___x_1619_, v___x_1617_);
lean_dec_ref(v___y_1613_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v_fst_1622_; lean_object* v_snd_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1630_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_a_1621_);
lean_dec_ref_known(v___x_1620_, 1);
v_fst_1622_ = lean_ctor_get(v_a_1621_, 0);
v_snd_1623_ = lean_ctor_get(v_a_1621_, 1);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_a_1621_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1625_ = v_a_1621_;
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_snd_1623_);
lean_inc(v_fst_1622_);
lean_dec(v_a_1621_);
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
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_fst_1622_);
lean_ctor_set(v_reuseFailAlloc_1629_, 1, v_snd_1623_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
v_a_1578_ = v___x_1628_;
goto v___jp_1577_;
}
}
}
else
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1638_; 
lean_del_object(v___x_1569_);
lean_dec(v_cmd_1550_);
v_a_1631_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1633_ = v___x_1620_;
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1620_);
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
v___jp_1640_:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; uint8_t v___x_1645_; 
lean_inc_ref(v___x_1600_);
v___x_1641_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(v___x_1600_);
v___x_1642_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_data_1575_);
v___x_1643_ = lean_array_get_size(v___x_1642_);
v___x_1644_ = lean_unsigned_to_nat(0u);
v___x_1645_ = lean_nat_dec_eq(v___x_1643_, v___x_1644_);
if (v___x_1645_ == 0)
{
v___y_1612_ = v___x_1641_;
v___y_1613_ = v___x_1642_;
v___y_1614_ = v___y_1557_;
v___y_1615_ = v___y_1558_;
goto v___jp_1611_;
}
else
{
lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v_scopes_1651_; lean_object* v___x_1652_; lean_object* v_opts_1653_; uint8_t v_hasTrace_1654_; 
v___x_1646_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1647_ = l_Lean_inheritedTraceOptions;
v___x_1648_ = lean_st_ref_get(v___x_1647_);
v___x_1649_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1650_ = lean_st_ref_get(v___y_1558_);
v_scopes_1651_ = lean_ctor_get(v___x_1650_, 2);
lean_inc(v_scopes_1651_);
lean_dec(v___x_1650_);
v___x_1652_ = l_List_head_x21___redArg(v___x_1649_, v_scopes_1651_);
lean_dec(v_scopes_1651_);
v_opts_1653_ = lean_ctor_get(v___x_1652_, 1);
lean_inc_ref(v_opts_1653_);
lean_dec(v___x_1652_);
v_hasTrace_1654_ = lean_ctor_get_uint8(v_opts_1653_, sizeof(void*)*1);
if (v_hasTrace_1654_ == 0)
{
lean_dec_ref(v_opts_1653_);
lean_dec(v___x_1648_);
v___y_1612_ = v___x_1641_;
v___y_1613_ = v___x_1642_;
v___y_1614_ = v___y_1557_;
v___y_1615_ = v___y_1558_;
goto v___jp_1611_;
}
else
{
lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_1656_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1648_, v_opts_1653_, v___x_1655_);
lean_dec_ref(v_opts_1653_);
lean_dec(v___x_1648_);
if (v___x_1656_ == 0)
{
v___y_1612_ = v___x_1641_;
v___y_1613_ = v___x_1642_;
v___y_1614_ = v___y_1557_;
v___y_1615_ = v___y_1558_;
goto v___jp_1611_;
}
else
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5);
v___x_1658_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_1646_, v___x_1657_, v___y_1557_, v___y_1558_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_dec_ref_known(v___x_1658_, 1);
v___y_1612_ = v___x_1641_;
v___y_1613_ = v___x_1642_;
v___y_1614_ = v___y_1557_;
v___y_1615_ = v___y_1558_;
goto v___jp_1611_;
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1666_; 
lean_dec_ref(v___x_1642_);
lean_dec(v___x_1641_);
lean_del_object(v___x_1609_);
lean_dec(v_snd_1607_);
lean_dec(v_fst_1606_);
lean_dec_ref_known(v___x_1600_, 2);
lean_del_object(v___x_1569_);
lean_dec(v_snd_1567_);
lean_dec(v_fst_1566_);
lean_dec(v_cmd_1550_);
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1661_ = v___x_1658_;
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1659_);
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
}
}
v___jp_1667_:
{
if (v_onUnsolved_1551_ == 0)
{
if (v___y_1552_ == 0)
{
lean_del_object(v___x_1609_);
lean_dec(v_snd_1607_);
lean_dec(v_fst_1606_);
lean_dec_ref_known(v___x_1600_, 2);
goto v___jp_1585_;
}
else
{
if (v___y_1668_ == 0)
{
lean_del_object(v___x_1609_);
lean_dec(v_snd_1607_);
lean_dec(v_fst_1606_);
lean_dec_ref_known(v___x_1600_, 2);
goto v___jp_1585_;
}
else
{
lean_del_object(v___x_1564_);
goto v___jp_1640_;
}
}
}
else
{
lean_del_object(v___x_1564_);
goto v___jp_1640_;
}
}
}
}
else
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v_scopes_1676_; lean_object* v___x_1677_; lean_object* v_opts_1678_; uint8_t v_hasTrace_1679_; 
lean_dec(v___x_1604_);
lean_dec_ref_known(v___x_1600_, 2);
lean_del_object(v___x_1564_);
v___x_1671_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1672_ = l_Lean_inheritedTraceOptions;
v___x_1673_ = lean_st_ref_get(v___x_1672_);
v___x_1674_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1675_ = lean_st_ref_get(v___y_1558_);
v_scopes_1676_ = lean_ctor_get(v___x_1675_, 2);
lean_inc(v_scopes_1676_);
lean_dec(v___x_1675_);
v___x_1677_ = l_List_head_x21___redArg(v___x_1674_, v_scopes_1676_);
lean_dec(v_scopes_1676_);
v_opts_1678_ = lean_ctor_get(v___x_1677_, 1);
lean_inc_ref(v_opts_1678_);
lean_dec(v___x_1677_);
v_hasTrace_1679_ = lean_ctor_get_uint8(v_opts_1678_, sizeof(void*)*1);
if (v_hasTrace_1679_ == 0)
{
lean_dec_ref(v_opts_1678_);
lean_dec(v___x_1673_);
lean_dec(v___x_1599_);
lean_dec(v___x_1598_);
lean_del_object(v___x_1596_);
goto v___jp_1589_;
}
else
{
lean_object* v___x_1680_; uint8_t v___x_1681_; 
v___x_1680_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_1681_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1673_, v_opts_1678_, v___x_1680_);
lean_dec_ref(v_opts_1678_);
lean_dec(v___x_1673_);
if (v___x_1681_ == 0)
{
lean_dec(v___x_1599_);
lean_dec(v___x_1598_);
lean_del_object(v___x_1596_);
goto v___jp_1589_;
}
else
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1685_; 
v___x_1682_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7);
v___x_1683_ = l_Nat_reprFast(v___x_1598_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set_tag(v___x_1596_, 3);
lean_ctor_set(v___x_1596_, 0, v___x_1683_);
v___x_1685_ = v___x_1596_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1686_ = l_Lean_MessageData_ofFormat(v___x_1685_);
v___x_1687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1682_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
v___x_1688_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9);
v___x_1689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1687_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = l_Nat_reprFast(v___x_1599_);
v___x_1691_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
v___x_1692_ = l_Lean_MessageData_ofFormat(v___x_1691_);
v___x_1693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1689_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
v___x_1694_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11);
v___x_1695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1693_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
v___x_1696_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_1671_, v___x_1695_, v___y_1557_, v___y_1558_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_dec_ref_known(v___x_1696_, 1);
goto v___jp_1589_;
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_del_object(v___x_1569_);
lean_dec(v_snd_1567_);
lean_dec(v_fst_1566_);
lean_dec(v_cmd_1550_);
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1696_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1696_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
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
lean_object* v___x_1707_; 
lean_dec(v_endPos_1573_);
lean_del_object(v___x_1564_);
v___x_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1707_, 0, v_fst_1566_);
lean_ctor_set(v___x_1707_, 1, v_snd_1567_);
v_a_1578_ = v___x_1707_;
goto v___jp_1577_;
}
}
}
else
{
lean_object* v___x_1708_; 
lean_dec(v_endPos_1573_);
lean_del_object(v___x_1564_);
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_fst_1566_);
lean_ctor_set(v___x_1708_, 1, v_snd_1567_);
v_a_1578_ = v___x_1708_;
goto v___jp_1577_;
}
v___jp_1577_:
{
lean_object* v___x_1580_; 
if (v_isShared_1570_ == 0)
{
lean_ctor_set(v___x_1569_, 1, v_a_1578_);
lean_ctor_set(v___x_1569_, 0, v___x_1576_);
v___x_1580_ = v___x_1569_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1576_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_a_1578_);
v___x_1580_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
size_t v___x_1581_; size_t v___x_1582_; lean_object* v___x_1583_; 
v___x_1581_ = ((size_t)1ULL);
v___x_1582_ = lean_usize_add(v_i_1555_, v___x_1581_);
v___x_1583_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13(v___x_1548_, v_val_1549_, v_cmd_1550_, v_onUnsolved_1551_, v___y_1552_, v_as_1553_, v_sz_1554_, v___x_1582_, v___x_1580_, v___y_1557_, v___y_1558_);
return v___x_1583_;
}
}
v___jp_1585_:
{
lean_object* v___x_1587_; 
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 1, v_snd_1567_);
lean_ctor_set(v___x_1564_, 0, v_fst_1566_);
v___x_1587_ = v___x_1564_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_fst_1566_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v_snd_1567_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
v_a_1578_ = v___x_1587_;
goto v___jp_1577_;
}
}
v___jp_1589_:
{
lean_object* v___x_1590_; 
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v_fst_1566_);
lean_ctor_set(v___x_1590_, 1, v_snd_1567_);
v_a_1578_ = v___x_1590_;
goto v___jp_1577_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9___boxed(lean_object* v___x_1712_, lean_object* v_val_1713_, lean_object* v_cmd_1714_, lean_object* v_onUnsolved_1715_, lean_object* v___y_1716_, lean_object* v_as_1717_, lean_object* v_sz_1718_, lean_object* v_i_1719_, lean_object* v_b_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
uint8_t v_onUnsolved_boxed_1724_; uint8_t v___y_14356__boxed_1725_; size_t v_sz_boxed_1726_; size_t v_i_boxed_1727_; lean_object* v_res_1728_; 
v_onUnsolved_boxed_1724_ = lean_unbox(v_onUnsolved_1715_);
v___y_14356__boxed_1725_ = lean_unbox(v___y_1716_);
v_sz_boxed_1726_ = lean_unbox_usize(v_sz_1718_);
lean_dec(v_sz_1718_);
v_i_boxed_1727_ = lean_unbox_usize(v_i_1719_);
lean_dec(v_i_1719_);
v_res_1728_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9(v___x_1712_, v_val_1713_, v_cmd_1714_, v_onUnsolved_boxed_1724_, v___y_14356__boxed_1725_, v_as_1717_, v_sz_boxed_1726_, v_i_boxed_1727_, v_b_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec_ref(v_as_1717_);
lean_dec_ref(v_val_1713_);
lean_dec_ref(v___x_1712_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11_spec__13(lean_object* v___x_1729_, lean_object* v_val_1730_, lean_object* v_cmd_1731_, uint8_t v_onUnsolved_1732_, uint8_t v___y_1733_, lean_object* v_as_1734_, size_t v_sz_1735_, size_t v_i_1736_, lean_object* v_b_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
uint8_t v___x_1741_; 
v___x_1741_ = lean_usize_dec_lt(v_i_1736_, v_sz_1735_);
if (v___x_1741_ == 0)
{
lean_object* v___x_1742_; 
lean_dec(v_cmd_1731_);
v___x_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1742_, 0, v_b_1737_);
return v___x_1742_;
}
else
{
lean_object* v_snd_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1891_; 
v_snd_1743_ = lean_ctor_get(v_b_1737_, 1);
v_isSharedCheck_1891_ = !lean_is_exclusive(v_b_1737_);
if (v_isSharedCheck_1891_ == 0)
{
lean_object* v_unused_1892_; 
v_unused_1892_ = lean_ctor_get(v_b_1737_, 0);
lean_dec(v_unused_1892_);
v___x_1745_ = v_b_1737_;
v_isShared_1746_ = v_isSharedCheck_1891_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_snd_1743_);
lean_dec(v_b_1737_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1891_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v_fst_1747_; lean_object* v_snd_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1890_; 
v_fst_1747_ = lean_ctor_get(v_snd_1743_, 0);
v_snd_1748_ = lean_ctor_get(v_snd_1743_, 1);
v_isSharedCheck_1890_ = !lean_is_exclusive(v_snd_1743_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1750_ = v_snd_1743_;
v_isShared_1751_ = v_isSharedCheck_1890_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_snd_1748_);
lean_inc(v_fst_1747_);
lean_dec(v_snd_1743_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1890_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v_a_1752_; lean_object* v_pos_1753_; lean_object* v_endPos_1754_; uint8_t v_severity_1755_; lean_object* v_data_1756_; lean_object* v___x_1757_; lean_object* v_a_1759_; 
v_a_1752_ = lean_array_uget_borrowed(v_as_1734_, v_i_1736_);
v_pos_1753_ = lean_ctor_get(v_a_1752_, 1);
v_endPos_1754_ = lean_ctor_get(v_a_1752_, 2);
lean_inc(v_endPos_1754_);
v_severity_1755_ = lean_ctor_get_uint8(v_a_1752_, sizeof(void*)*5 + 1);
v_data_1756_ = lean_ctor_get(v_a_1752_, 4);
v___x_1757_ = lean_box(0);
if (v_severity_1755_ == 2)
{
lean_object* v___f_1772_; uint8_t v___x_1773_; 
v___f_1772_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__0));
lean_inc(v_data_1756_);
v___x_1773_ = l_Lean_MessageData_hasTag(v___f_1772_, v_data_1756_);
if (v___x_1773_ == 0)
{
lean_object* v___x_1774_; 
lean_dec(v_endPos_1754_);
lean_del_object(v___x_1745_);
v___x_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1774_, 0, v_fst_1747_);
lean_ctor_set(v___x_1774_, 1, v_snd_1748_);
v_a_1759_ = v___x_1774_;
goto v___jp_1758_;
}
else
{
if (lean_obj_tag(v_endPos_1754_) == 1)
{
lean_object* v_val_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1887_; 
v_val_1775_ = lean_ctor_get(v_endPos_1754_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v_endPos_1754_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1777_ = v_endPos_1754_;
v_isShared_1778_ = v_isSharedCheck_1887_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_val_1775_);
lean_dec(v_endPos_1754_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1887_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; uint8_t v___x_1782_; uint8_t v___x_1783_; 
lean_inc_ref(v_pos_1753_);
v___x_1779_ = l_Lean_FileMap_ofPosition(v___x_1729_, v_pos_1753_);
v___x_1780_ = l_Lean_FileMap_ofPosition(v___x_1729_, v_val_1775_);
lean_inc(v___x_1780_);
lean_inc(v___x_1779_);
v___x_1781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1779_);
lean_ctor_set(v___x_1781_, 1, v___x_1780_);
v___x_1782_ = 0;
v___x_1783_ = l_Lean_Syntax_Range_includes(v_val_1730_, v___x_1781_, v___x_1782_, v___x_1782_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; 
lean_dec_ref_known(v___x_1781_, 2);
lean_dec(v___x_1780_);
lean_dec(v___x_1779_);
lean_del_object(v___x_1777_);
lean_del_object(v___x_1745_);
v___x_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1784_, 0, v_fst_1747_);
lean_ctor_set(v___x_1784_, 1, v_snd_1748_);
v_a_1759_ = v___x_1784_;
goto v___jp_1758_;
}
else
{
lean_object* v___x_1785_; 
lean_inc(v_cmd_1731_);
lean_inc_ref(v___x_1781_);
v___x_1785_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v___x_1781_, v_cmd_1731_);
if (lean_obj_tag(v___x_1785_) == 1)
{
lean_object* v_val_1786_; lean_object* v_fst_1787_; lean_object* v_snd_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1851_; 
lean_dec(v___x_1780_);
lean_dec(v___x_1779_);
lean_del_object(v___x_1777_);
v_val_1786_ = lean_ctor_get(v___x_1785_, 0);
lean_inc(v_val_1786_);
lean_dec_ref_known(v___x_1785_, 1);
v_fst_1787_ = lean_ctor_get(v_val_1786_, 0);
v_snd_1788_ = lean_ctor_get(v_val_1786_, 1);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_val_1786_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1790_ = v_val_1786_;
v_isShared_1791_ = v_isSharedCheck_1851_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_snd_1788_);
lean_inc(v_fst_1787_);
lean_dec(v_val_1786_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1851_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___y_1793_; lean_object* v___y_1794_; lean_object* v___y_1795_; lean_object* v___y_1796_; uint8_t v___y_1849_; lean_object* v___x_1850_; 
v___x_1850_ = l_Lean_Syntax_getPos_x3f(v_fst_1787_, v___x_1782_);
if (lean_obj_tag(v___x_1850_) == 0)
{
v___y_1849_ = v___x_1783_;
goto v___jp_1848_;
}
else
{
lean_dec_ref_known(v___x_1850_, 1);
v___y_1849_ = v___x_1782_;
goto v___jp_1848_;
}
v___jp_1792_:
{
lean_object* v___x_1798_; 
if (v_isShared_1791_ == 0)
{
lean_ctor_set(v___x_1790_, 1, v_snd_1748_);
lean_ctor_set(v___x_1790_, 0, v_fst_1747_);
v___x_1798_ = v___x_1790_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_fst_1747_);
lean_ctor_set(v_reuseFailAlloc_1820_, 1, v_snd_1748_);
v___x_1798_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
size_t v_sz_1799_; size_t v___x_1800_; lean_object* v___x_1801_; 
v_sz_1799_ = lean_array_size(v___y_1794_);
v___x_1800_ = ((size_t)0ULL);
v___x_1801_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg(v___x_1781_, v_fst_1787_, v_snd_1788_, v___y_1793_, v___y_1794_, v_sz_1799_, v___x_1800_, v___x_1798_);
lean_dec_ref(v___y_1794_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v_a_1802_; lean_object* v_fst_1803_; lean_object* v_snd_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_a_1802_);
lean_dec_ref_known(v___x_1801_, 1);
v_fst_1803_ = lean_ctor_get(v_a_1802_, 0);
v_snd_1804_ = lean_ctor_get(v_a_1802_, 1);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_a_1802_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v_a_1802_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_snd_1804_);
lean_inc(v_fst_1803_);
lean_dec(v_a_1802_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_fst_1803_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_snd_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
v_a_1759_ = v___x_1809_;
goto v___jp_1758_;
}
}
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_del_object(v___x_1750_);
lean_dec(v_cmd_1731_);
v_a_1812_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1801_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1801_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
v___jp_1821_:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
lean_inc_ref(v___x_1781_);
v___x_1822_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(v___x_1781_);
v___x_1823_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_data_1756_);
v___x_1824_ = lean_array_get_size(v___x_1823_);
v___x_1825_ = lean_unsigned_to_nat(0u);
v___x_1826_ = lean_nat_dec_eq(v___x_1824_, v___x_1825_);
if (v___x_1826_ == 0)
{
v___y_1793_ = v___x_1822_;
v___y_1794_ = v___x_1823_;
v___y_1795_ = v___y_1738_;
v___y_1796_ = v___y_1739_;
goto v___jp_1792_;
}
else
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v_scopes_1832_; lean_object* v___x_1833_; lean_object* v_opts_1834_; uint8_t v_hasTrace_1835_; 
v___x_1827_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1828_ = l_Lean_inheritedTraceOptions;
v___x_1829_ = lean_st_ref_get(v___x_1828_);
v___x_1830_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1831_ = lean_st_ref_get(v___y_1739_);
v_scopes_1832_ = lean_ctor_get(v___x_1831_, 2);
lean_inc(v_scopes_1832_);
lean_dec(v___x_1831_);
v___x_1833_ = l_List_head_x21___redArg(v___x_1830_, v_scopes_1832_);
lean_dec(v_scopes_1832_);
v_opts_1834_ = lean_ctor_get(v___x_1833_, 1);
lean_inc_ref(v_opts_1834_);
lean_dec(v___x_1833_);
v_hasTrace_1835_ = lean_ctor_get_uint8(v_opts_1834_, sizeof(void*)*1);
if (v_hasTrace_1835_ == 0)
{
lean_dec_ref(v_opts_1834_);
lean_dec(v___x_1829_);
v___y_1793_ = v___x_1822_;
v___y_1794_ = v___x_1823_;
v___y_1795_ = v___y_1738_;
v___y_1796_ = v___y_1739_;
goto v___jp_1792_;
}
else
{
lean_object* v___x_1836_; uint8_t v___x_1837_; 
v___x_1836_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_1837_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1829_, v_opts_1834_, v___x_1836_);
lean_dec_ref(v_opts_1834_);
lean_dec(v___x_1829_);
if (v___x_1837_ == 0)
{
v___y_1793_ = v___x_1822_;
v___y_1794_ = v___x_1823_;
v___y_1795_ = v___y_1738_;
v___y_1796_ = v___y_1739_;
goto v___jp_1792_;
}
else
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5);
v___x_1839_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_1827_, v___x_1838_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_dec_ref_known(v___x_1839_, 1);
v___y_1793_ = v___x_1822_;
v___y_1794_ = v___x_1823_;
v___y_1795_ = v___y_1738_;
v___y_1796_ = v___y_1739_;
goto v___jp_1792_;
}
else
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
lean_dec_ref(v___x_1823_);
lean_dec(v___x_1822_);
lean_del_object(v___x_1790_);
lean_dec(v_snd_1788_);
lean_dec(v_fst_1787_);
lean_dec_ref_known(v___x_1781_, 2);
lean_del_object(v___x_1750_);
lean_dec(v_snd_1748_);
lean_dec(v_fst_1747_);
lean_dec(v_cmd_1731_);
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1839_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1839_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
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
}
}
}
v___jp_1848_:
{
if (v_onUnsolved_1732_ == 0)
{
if (v___y_1733_ == 0)
{
lean_del_object(v___x_1790_);
lean_dec(v_snd_1788_);
lean_dec(v_fst_1787_);
lean_dec_ref_known(v___x_1781_, 2);
goto v___jp_1766_;
}
else
{
if (v___y_1849_ == 0)
{
lean_del_object(v___x_1790_);
lean_dec(v_snd_1788_);
lean_dec(v_fst_1787_);
lean_dec_ref_known(v___x_1781_, 2);
goto v___jp_1766_;
}
else
{
lean_del_object(v___x_1745_);
goto v___jp_1821_;
}
}
}
else
{
lean_del_object(v___x_1745_);
goto v___jp_1821_;
}
}
}
}
else
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v_scopes_1857_; lean_object* v___x_1858_; lean_object* v_opts_1859_; uint8_t v_hasTrace_1860_; 
lean_dec(v___x_1785_);
lean_dec_ref_known(v___x_1781_, 2);
lean_del_object(v___x_1745_);
v___x_1852_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1853_ = l_Lean_inheritedTraceOptions;
v___x_1854_ = lean_st_ref_get(v___x_1853_);
v___x_1855_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1856_ = lean_st_ref_get(v___y_1739_);
v_scopes_1857_ = lean_ctor_get(v___x_1856_, 2);
lean_inc(v_scopes_1857_);
lean_dec(v___x_1856_);
v___x_1858_ = l_List_head_x21___redArg(v___x_1855_, v_scopes_1857_);
lean_dec(v_scopes_1857_);
v_opts_1859_ = lean_ctor_get(v___x_1858_, 1);
lean_inc_ref(v_opts_1859_);
lean_dec(v___x_1858_);
v_hasTrace_1860_ = lean_ctor_get_uint8(v_opts_1859_, sizeof(void*)*1);
if (v_hasTrace_1860_ == 0)
{
lean_dec_ref(v_opts_1859_);
lean_dec(v___x_1854_);
lean_dec(v___x_1780_);
lean_dec(v___x_1779_);
lean_del_object(v___x_1777_);
goto v___jp_1770_;
}
else
{
lean_object* v___x_1861_; uint8_t v___x_1862_; 
v___x_1861_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_1862_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1854_, v_opts_1859_, v___x_1861_);
lean_dec_ref(v_opts_1859_);
lean_dec(v___x_1854_);
if (v___x_1862_ == 0)
{
lean_dec(v___x_1780_);
lean_dec(v___x_1779_);
lean_del_object(v___x_1777_);
goto v___jp_1770_;
}
else
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1863_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7);
v___x_1864_ = l_Nat_reprFast(v___x_1779_);
if (v_isShared_1778_ == 0)
{
lean_ctor_set_tag(v___x_1777_, 3);
lean_ctor_set(v___x_1777_, 0, v___x_1864_);
v___x_1866_ = v___x_1777_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1867_ = l_Lean_MessageData_ofFormat(v___x_1866_);
v___x_1868_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1863_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v___x_1869_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9);
v___x_1870_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1868_);
lean_ctor_set(v___x_1870_, 1, v___x_1869_);
v___x_1871_ = l_Nat_reprFast(v___x_1780_);
v___x_1872_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
v___x_1873_ = l_Lean_MessageData_ofFormat(v___x_1872_);
v___x_1874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1870_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
v___x_1875_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11);
v___x_1876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1874_);
lean_ctor_set(v___x_1876_, 1, v___x_1875_);
v___x_1877_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_1852_, v___x_1876_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_dec_ref_known(v___x_1877_, 1);
goto v___jp_1770_;
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_del_object(v___x_1750_);
lean_dec(v_snd_1748_);
lean_dec(v_fst_1747_);
lean_dec(v_cmd_1731_);
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1877_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1877_);
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
}
}
}
}
}
}
else
{
lean_object* v___x_1888_; 
lean_dec(v_endPos_1754_);
lean_del_object(v___x_1745_);
v___x_1888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1888_, 0, v_fst_1747_);
lean_ctor_set(v___x_1888_, 1, v_snd_1748_);
v_a_1759_ = v___x_1888_;
goto v___jp_1758_;
}
}
}
else
{
lean_object* v___x_1889_; 
lean_dec(v_endPos_1754_);
lean_del_object(v___x_1745_);
v___x_1889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1889_, 0, v_fst_1747_);
lean_ctor_set(v___x_1889_, 1, v_snd_1748_);
v_a_1759_ = v___x_1889_;
goto v___jp_1758_;
}
v___jp_1758_:
{
lean_object* v___x_1761_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 1, v_a_1759_);
lean_ctor_set(v___x_1750_, 0, v___x_1757_);
v___x_1761_ = v___x_1750_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1757_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v_a_1759_);
v___x_1761_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
size_t v___x_1762_; size_t v___x_1763_; 
v___x_1762_ = ((size_t)1ULL);
v___x_1763_ = lean_usize_add(v_i_1736_, v___x_1762_);
v_i_1736_ = v___x_1763_;
v_b_1737_ = v___x_1761_;
goto _start;
}
}
v___jp_1766_:
{
lean_object* v___x_1768_; 
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 1, v_snd_1748_);
lean_ctor_set(v___x_1745_, 0, v_fst_1747_);
v___x_1768_ = v___x_1745_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_fst_1747_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v_snd_1748_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
v_a_1759_ = v___x_1768_;
goto v___jp_1758_;
}
}
v___jp_1770_:
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1771_, 0, v_fst_1747_);
lean_ctor_set(v___x_1771_, 1, v_snd_1748_);
v_a_1759_ = v___x_1771_;
goto v___jp_1758_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11_spec__13___boxed(lean_object* v___x_1893_, lean_object* v_val_1894_, lean_object* v_cmd_1895_, lean_object* v_onUnsolved_1896_, lean_object* v___y_1897_, lean_object* v_as_1898_, lean_object* v_sz_1899_, lean_object* v_i_1900_, lean_object* v_b_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
uint8_t v_onUnsolved_boxed_1905_; uint8_t v___y_14688__boxed_1906_; size_t v_sz_boxed_1907_; size_t v_i_boxed_1908_; lean_object* v_res_1909_; 
v_onUnsolved_boxed_1905_ = lean_unbox(v_onUnsolved_1896_);
v___y_14688__boxed_1906_ = lean_unbox(v___y_1897_);
v_sz_boxed_1907_ = lean_unbox_usize(v_sz_1899_);
lean_dec(v_sz_1899_);
v_i_boxed_1908_ = lean_unbox_usize(v_i_1900_);
lean_dec(v_i_1900_);
v_res_1909_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11_spec__13(v___x_1893_, v_val_1894_, v_cmd_1895_, v_onUnsolved_boxed_1905_, v___y_14688__boxed_1906_, v_as_1898_, v_sz_boxed_1907_, v_i_boxed_1908_, v_b_1901_, v___y_1902_, v___y_1903_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
lean_dec_ref(v_as_1898_);
lean_dec_ref(v_val_1894_);
lean_dec_ref(v___x_1893_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11(lean_object* v___x_1910_, lean_object* v_val_1911_, lean_object* v_cmd_1912_, uint8_t v_onUnsolved_1913_, uint8_t v___y_1914_, lean_object* v_as_1915_, size_t v_sz_1916_, size_t v_i_1917_, lean_object* v_b_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
uint8_t v___x_1922_; 
v___x_1922_ = lean_usize_dec_lt(v_i_1917_, v_sz_1916_);
if (v___x_1922_ == 0)
{
lean_object* v___x_1923_; 
lean_dec(v_cmd_1912_);
v___x_1923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1923_, 0, v_b_1918_);
return v___x_1923_;
}
else
{
lean_object* v_snd_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_2072_; 
v_snd_1924_ = lean_ctor_get(v_b_1918_, 1);
v_isSharedCheck_2072_ = !lean_is_exclusive(v_b_1918_);
if (v_isSharedCheck_2072_ == 0)
{
lean_object* v_unused_2073_; 
v_unused_2073_ = lean_ctor_get(v_b_1918_, 0);
lean_dec(v_unused_2073_);
v___x_1926_ = v_b_1918_;
v_isShared_1927_ = v_isSharedCheck_2072_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_snd_1924_);
lean_dec(v_b_1918_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_2072_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v_fst_1928_; lean_object* v_snd_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_2071_; 
v_fst_1928_ = lean_ctor_get(v_snd_1924_, 0);
v_snd_1929_ = lean_ctor_get(v_snd_1924_, 1);
v_isSharedCheck_2071_ = !lean_is_exclusive(v_snd_1924_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_1931_ = v_snd_1924_;
v_isShared_1932_ = v_isSharedCheck_2071_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_snd_1929_);
lean_inc(v_fst_1928_);
lean_dec(v_snd_1924_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_2071_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v_a_1933_; lean_object* v_pos_1934_; lean_object* v_endPos_1935_; uint8_t v_severity_1936_; lean_object* v_data_1937_; lean_object* v___x_1938_; lean_object* v_a_1940_; 
v_a_1933_ = lean_array_uget_borrowed(v_as_1915_, v_i_1917_);
v_pos_1934_ = lean_ctor_get(v_a_1933_, 1);
v_endPos_1935_ = lean_ctor_get(v_a_1933_, 2);
lean_inc(v_endPos_1935_);
v_severity_1936_ = lean_ctor_get_uint8(v_a_1933_, sizeof(void*)*5 + 1);
v_data_1937_ = lean_ctor_get(v_a_1933_, 4);
v___x_1938_ = lean_box(0);
if (v_severity_1936_ == 2)
{
lean_object* v___f_1953_; uint8_t v___x_1954_; 
v___f_1953_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__0));
lean_inc(v_data_1937_);
v___x_1954_ = l_Lean_MessageData_hasTag(v___f_1953_, v_data_1937_);
if (v___x_1954_ == 0)
{
lean_object* v___x_1955_; 
lean_dec(v_endPos_1935_);
lean_del_object(v___x_1926_);
v___x_1955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1955_, 0, v_fst_1928_);
lean_ctor_set(v___x_1955_, 1, v_snd_1929_);
v_a_1940_ = v___x_1955_;
goto v___jp_1939_;
}
else
{
if (lean_obj_tag(v_endPos_1935_) == 1)
{
lean_object* v_val_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_2068_; 
v_val_1956_ = lean_ctor_get(v_endPos_1935_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v_endPos_1935_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_1958_ = v_endPos_1935_;
v_isShared_1959_ = v_isSharedCheck_2068_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_val_1956_);
lean_dec(v_endPos_1935_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_2068_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; uint8_t v___x_1963_; uint8_t v___x_1964_; 
lean_inc_ref(v_pos_1934_);
v___x_1960_ = l_Lean_FileMap_ofPosition(v___x_1910_, v_pos_1934_);
v___x_1961_ = l_Lean_FileMap_ofPosition(v___x_1910_, v_val_1956_);
lean_inc(v___x_1961_);
lean_inc(v___x_1960_);
v___x_1962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1960_);
lean_ctor_set(v___x_1962_, 1, v___x_1961_);
v___x_1963_ = 0;
v___x_1964_ = l_Lean_Syntax_Range_includes(v_val_1911_, v___x_1962_, v___x_1963_, v___x_1963_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; 
lean_dec_ref_known(v___x_1962_, 2);
lean_dec(v___x_1961_);
lean_dec(v___x_1960_);
lean_del_object(v___x_1958_);
lean_del_object(v___x_1926_);
v___x_1965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1965_, 0, v_fst_1928_);
lean_ctor_set(v___x_1965_, 1, v_snd_1929_);
v_a_1940_ = v___x_1965_;
goto v___jp_1939_;
}
else
{
lean_object* v___x_1966_; 
lean_inc(v_cmd_1912_);
lean_inc_ref(v___x_1962_);
v___x_1966_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v___x_1962_, v_cmd_1912_);
if (lean_obj_tag(v___x_1966_) == 1)
{
lean_object* v_val_1967_; lean_object* v_fst_1968_; lean_object* v_snd_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_2032_; 
lean_dec(v___x_1961_);
lean_dec(v___x_1960_);
lean_del_object(v___x_1958_);
v_val_1967_ = lean_ctor_get(v___x_1966_, 0);
lean_inc(v_val_1967_);
lean_dec_ref_known(v___x_1966_, 1);
v_fst_1968_ = lean_ctor_get(v_val_1967_, 0);
v_snd_1969_ = lean_ctor_get(v_val_1967_, 1);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_val_1967_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_1971_ = v_val_1967_;
v_isShared_1972_ = v_isSharedCheck_2032_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_snd_1969_);
lean_inc(v_fst_1968_);
lean_dec(v_val_1967_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_2032_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; uint8_t v___y_2030_; lean_object* v___x_2031_; 
v___x_2031_ = l_Lean_Syntax_getPos_x3f(v_fst_1968_, v___x_1963_);
if (lean_obj_tag(v___x_2031_) == 0)
{
v___y_2030_ = v___x_1964_;
goto v___jp_2029_;
}
else
{
lean_dec_ref_known(v___x_2031_, 1);
v___y_2030_ = v___x_1963_;
goto v___jp_2029_;
}
v___jp_1973_:
{
lean_object* v___x_1979_; 
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 1, v_snd_1929_);
lean_ctor_set(v___x_1971_, 0, v_fst_1928_);
v___x_1979_ = v___x_1971_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_fst_1928_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v_snd_1929_);
v___x_1979_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
size_t v_sz_1980_; size_t v___x_1981_; lean_object* v___x_1982_; 
v_sz_1980_ = lean_array_size(v___y_1974_);
v___x_1981_ = ((size_t)0ULL);
v___x_1982_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg(v___x_1962_, v_fst_1968_, v_snd_1969_, v___y_1975_, v___y_1974_, v_sz_1980_, v___x_1981_, v___x_1979_);
lean_dec_ref(v___y_1974_);
if (lean_obj_tag(v___x_1982_) == 0)
{
lean_object* v_a_1983_; lean_object* v_fst_1984_; lean_object* v_snd_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
v_a_1983_ = lean_ctor_get(v___x_1982_, 0);
lean_inc(v_a_1983_);
lean_dec_ref_known(v___x_1982_, 1);
v_fst_1984_ = lean_ctor_get(v_a_1983_, 0);
v_snd_1985_ = lean_ctor_get(v_a_1983_, 1);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_a_1983_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v_a_1983_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_snd_1985_);
lean_inc(v_fst_1984_);
lean_dec(v_a_1983_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_fst_1984_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_snd_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
v_a_1940_ = v___x_1990_;
goto v___jp_1939_;
}
}
}
else
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
lean_del_object(v___x_1931_);
lean_dec(v_cmd_1912_);
v_a_1993_ = lean_ctor_get(v___x_1982_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1995_ = v___x_1982_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1982_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_a_1993_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
}
v___jp_2002_:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; 
lean_inc_ref(v___x_1962_);
v___x_2003_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(v___x_1962_);
v___x_2004_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_data_1937_);
v___x_2005_ = lean_array_get_size(v___x_2004_);
v___x_2006_ = lean_unsigned_to_nat(0u);
v___x_2007_ = lean_nat_dec_eq(v___x_2005_, v___x_2006_);
if (v___x_2007_ == 0)
{
v___y_1974_ = v___x_2004_;
v___y_1975_ = v___x_2003_;
v___y_1976_ = v___y_1919_;
v___y_1977_ = v___y_1920_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v_scopes_2013_; lean_object* v___x_2014_; lean_object* v_opts_2015_; uint8_t v_hasTrace_2016_; 
v___x_2008_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_2009_ = l_Lean_inheritedTraceOptions;
v___x_2010_ = lean_st_ref_get(v___x_2009_);
v___x_2011_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2012_ = lean_st_ref_get(v___y_1920_);
v_scopes_2013_ = lean_ctor_get(v___x_2012_, 2);
lean_inc(v_scopes_2013_);
lean_dec(v___x_2012_);
v___x_2014_ = l_List_head_x21___redArg(v___x_2011_, v_scopes_2013_);
lean_dec(v_scopes_2013_);
v_opts_2015_ = lean_ctor_get(v___x_2014_, 1);
lean_inc_ref(v_opts_2015_);
lean_dec(v___x_2014_);
v_hasTrace_2016_ = lean_ctor_get_uint8(v_opts_2015_, sizeof(void*)*1);
if (v_hasTrace_2016_ == 0)
{
lean_dec_ref(v_opts_2015_);
lean_dec(v___x_2010_);
v___y_1974_ = v___x_2004_;
v___y_1975_ = v___x_2003_;
v___y_1976_ = v___y_1919_;
v___y_1977_ = v___y_1920_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2017_; uint8_t v___x_2018_; 
v___x_2017_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_2018_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2010_, v_opts_2015_, v___x_2017_);
lean_dec_ref(v_opts_2015_);
lean_dec(v___x_2010_);
if (v___x_2018_ == 0)
{
v___y_1974_ = v___x_2004_;
v___y_1975_ = v___x_2003_;
v___y_1976_ = v___y_1919_;
v___y_1977_ = v___y_1920_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__5);
v___x_2020_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_2008_, v___x_2019_, v___y_1919_, v___y_1920_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_dec_ref_known(v___x_2020_, 1);
v___y_1974_ = v___x_2004_;
v___y_1975_ = v___x_2003_;
v___y_1976_ = v___y_1919_;
v___y_1977_ = v___y_1920_;
goto v___jp_1973_;
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec_ref(v___x_2004_);
lean_dec(v___x_2003_);
lean_del_object(v___x_1971_);
lean_dec(v_snd_1969_);
lean_dec(v_fst_1968_);
lean_dec_ref_known(v___x_1962_, 2);
lean_del_object(v___x_1931_);
lean_dec(v_snd_1929_);
lean_dec(v_fst_1928_);
lean_dec(v_cmd_1912_);
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2020_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2020_);
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
}
}
v___jp_2029_:
{
if (v_onUnsolved_1913_ == 0)
{
if (v___y_1914_ == 0)
{
lean_del_object(v___x_1971_);
lean_dec(v_snd_1969_);
lean_dec(v_fst_1968_);
lean_dec_ref_known(v___x_1962_, 2);
goto v___jp_1947_;
}
else
{
if (v___y_2030_ == 0)
{
lean_del_object(v___x_1971_);
lean_dec(v_snd_1969_);
lean_dec(v_fst_1968_);
lean_dec_ref_known(v___x_1962_, 2);
goto v___jp_1947_;
}
else
{
lean_del_object(v___x_1926_);
goto v___jp_2002_;
}
}
}
else
{
lean_del_object(v___x_1926_);
goto v___jp_2002_;
}
}
}
}
else
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v_scopes_2038_; lean_object* v___x_2039_; lean_object* v_opts_2040_; uint8_t v_hasTrace_2041_; 
lean_dec(v___x_1966_);
lean_dec_ref_known(v___x_1962_, 2);
lean_del_object(v___x_1926_);
v___x_2033_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_2034_ = l_Lean_inheritedTraceOptions;
v___x_2035_ = lean_st_ref_get(v___x_2034_);
v___x_2036_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2037_ = lean_st_ref_get(v___y_1920_);
v_scopes_2038_ = lean_ctor_get(v___x_2037_, 2);
lean_inc(v_scopes_2038_);
lean_dec(v___x_2037_);
v___x_2039_ = l_List_head_x21___redArg(v___x_2036_, v_scopes_2038_);
lean_dec(v_scopes_2038_);
v_opts_2040_ = lean_ctor_get(v___x_2039_, 1);
lean_inc_ref(v_opts_2040_);
lean_dec(v___x_2039_);
v_hasTrace_2041_ = lean_ctor_get_uint8(v_opts_2040_, sizeof(void*)*1);
if (v_hasTrace_2041_ == 0)
{
lean_dec_ref(v_opts_2040_);
lean_dec(v___x_2035_);
lean_dec(v___x_1961_);
lean_dec(v___x_1960_);
lean_del_object(v___x_1958_);
goto v___jp_1951_;
}
else
{
lean_object* v___x_2042_; uint8_t v___x_2043_; 
v___x_2042_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_2043_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2035_, v_opts_2040_, v___x_2042_);
lean_dec_ref(v_opts_2040_);
lean_dec(v___x_2035_);
if (v___x_2043_ == 0)
{
lean_dec(v___x_1961_);
lean_dec(v___x_1960_);
lean_del_object(v___x_1958_);
goto v___jp_1951_;
}
else
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2047_; 
v___x_2044_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__7);
v___x_2045_ = l_Nat_reprFast(v___x_1960_);
if (v_isShared_1959_ == 0)
{
lean_ctor_set_tag(v___x_1958_, 3);
lean_ctor_set(v___x_1958_, 0, v___x_2045_);
v___x_2047_ = v___x_1958_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v___x_2048_ = l_Lean_MessageData_ofFormat(v___x_2047_);
v___x_2049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2044_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
v___x_2050_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__9);
v___x_2051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2049_);
lean_ctor_set(v___x_2051_, 1, v___x_2050_);
v___x_2052_ = l_Nat_reprFast(v___x_1961_);
v___x_2053_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
v___x_2054_ = l_Lean_MessageData_ofFormat(v___x_2053_);
v___x_2055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2051_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__11);
v___x_2057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v___x_2058_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_2033_, v___x_2057_, v___y_1919_, v___y_1920_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_dec_ref_known(v___x_2058_, 1);
goto v___jp_1951_;
}
else
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
lean_del_object(v___x_1931_);
lean_dec(v_snd_1929_);
lean_dec(v_fst_1928_);
lean_dec(v_cmd_1912_);
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2058_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2058_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
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
lean_object* v___x_2069_; 
lean_dec(v_endPos_1935_);
lean_del_object(v___x_1926_);
v___x_2069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2069_, 0, v_fst_1928_);
lean_ctor_set(v___x_2069_, 1, v_snd_1929_);
v_a_1940_ = v___x_2069_;
goto v___jp_1939_;
}
}
}
else
{
lean_object* v___x_2070_; 
lean_dec(v_endPos_1935_);
lean_del_object(v___x_1926_);
v___x_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2070_, 0, v_fst_1928_);
lean_ctor_set(v___x_2070_, 1, v_snd_1929_);
v_a_1940_ = v___x_2070_;
goto v___jp_1939_;
}
v___jp_1939_:
{
lean_object* v___x_1942_; 
if (v_isShared_1932_ == 0)
{
lean_ctor_set(v___x_1931_, 1, v_a_1940_);
lean_ctor_set(v___x_1931_, 0, v___x_1938_);
v___x_1942_ = v___x_1931_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1938_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v_a_1940_);
v___x_1942_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
size_t v___x_1943_; size_t v___x_1944_; lean_object* v___x_1945_; 
v___x_1943_ = ((size_t)1ULL);
v___x_1944_ = lean_usize_add(v_i_1917_, v___x_1943_);
v___x_1945_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11_spec__13(v___x_1910_, v_val_1911_, v_cmd_1912_, v_onUnsolved_1913_, v___y_1914_, v_as_1915_, v_sz_1916_, v___x_1944_, v___x_1942_, v___y_1919_, v___y_1920_);
return v___x_1945_;
}
}
v___jp_1947_:
{
lean_object* v___x_1949_; 
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 1, v_snd_1929_);
lean_ctor_set(v___x_1926_, 0, v_fst_1928_);
v___x_1949_ = v___x_1926_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_fst_1928_);
lean_ctor_set(v_reuseFailAlloc_1950_, 1, v_snd_1929_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
v_a_1940_ = v___x_1949_;
goto v___jp_1939_;
}
}
v___jp_1951_:
{
lean_object* v___x_1952_; 
v___x_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1952_, 0, v_fst_1928_);
lean_ctor_set(v___x_1952_, 1, v_snd_1929_);
v_a_1940_ = v___x_1952_;
goto v___jp_1939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11___boxed(lean_object* v___x_2074_, lean_object* v_val_2075_, lean_object* v_cmd_2076_, lean_object* v_onUnsolved_2077_, lean_object* v___y_2078_, lean_object* v_as_2079_, lean_object* v_sz_2080_, lean_object* v_i_2081_, lean_object* v_b_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_){
_start:
{
uint8_t v_onUnsolved_boxed_2086_; uint8_t v___y_15020__boxed_2087_; size_t v_sz_boxed_2088_; size_t v_i_boxed_2089_; lean_object* v_res_2090_; 
v_onUnsolved_boxed_2086_ = lean_unbox(v_onUnsolved_2077_);
v___y_15020__boxed_2087_ = lean_unbox(v___y_2078_);
v_sz_boxed_2088_ = lean_unbox_usize(v_sz_2080_);
lean_dec(v_sz_2080_);
v_i_boxed_2089_ = lean_unbox_usize(v_i_2081_);
lean_dec(v_i_2081_);
v_res_2090_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11(v___x_2074_, v_val_2075_, v_cmd_2076_, v_onUnsolved_boxed_2086_, v___y_15020__boxed_2087_, v_as_2079_, v_sz_boxed_2088_, v_i_boxed_2089_, v_b_2082_, v___y_2083_, v___y_2084_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
lean_dec_ref(v_as_2079_);
lean_dec_ref(v_val_2075_);
lean_dec_ref(v___x_2074_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8(lean_object* v_init_2091_, lean_object* v___x_2092_, lean_object* v_val_2093_, lean_object* v_cmd_2094_, uint8_t v_onUnsolved_2095_, uint8_t v___y_2096_, lean_object* v_n_2097_, lean_object* v_b_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
if (lean_obj_tag(v_n_2097_) == 0)
{
lean_object* v_cs_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; size_t v_sz_2105_; size_t v___x_2106_; lean_object* v___x_2107_; 
v_cs_2102_ = lean_ctor_get(v_n_2097_, 0);
v___x_2103_ = lean_box(0);
v___x_2104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2103_);
lean_ctor_set(v___x_2104_, 1, v_b_2098_);
v_sz_2105_ = lean_array_size(v_cs_2102_);
v___x_2106_ = ((size_t)0ULL);
v___x_2107_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__10(v_init_2091_, v___x_2092_, v_val_2093_, v_cmd_2094_, v_onUnsolved_2095_, v___y_2096_, v_cs_2102_, v_sz_2105_, v___x_2106_, v___x_2104_, v___y_2099_, v___y_2100_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2122_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2110_ = v___x_2107_;
v_isShared_2111_ = v_isSharedCheck_2122_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_a_2108_);
lean_dec(v___x_2107_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2122_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v_fst_2112_; 
v_fst_2112_ = lean_ctor_get(v_a_2108_, 0);
if (lean_obj_tag(v_fst_2112_) == 0)
{
lean_object* v_snd_2113_; lean_object* v___x_2114_; lean_object* v___x_2116_; 
v_snd_2113_ = lean_ctor_get(v_a_2108_, 1);
lean_inc(v_snd_2113_);
lean_dec(v_a_2108_);
v___x_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2114_, 0, v_snd_2113_);
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 0, v___x_2114_);
v___x_2116_ = v___x_2110_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_2114_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
else
{
lean_object* v_val_2118_; lean_object* v___x_2120_; 
lean_inc_ref(v_fst_2112_);
lean_dec(v_a_2108_);
v_val_2118_ = lean_ctor_get(v_fst_2112_, 0);
lean_inc(v_val_2118_);
lean_dec_ref_known(v_fst_2112_, 1);
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 0, v_val_2118_);
v___x_2120_ = v___x_2110_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_val_2118_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
else
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2130_; 
v_a_2123_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2125_ = v___x_2107_;
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2107_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2128_; 
if (v_isShared_2126_ == 0)
{
v___x_2128_ = v___x_2125_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_a_2123_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
return v___x_2128_;
}
}
}
}
else
{
lean_object* v_vs_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; size_t v_sz_2134_; size_t v___x_2135_; lean_object* v___x_2136_; 
v_vs_2131_ = lean_ctor_get(v_n_2097_, 0);
v___x_2132_ = lean_box(0);
v___x_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
lean_ctor_set(v___x_2133_, 1, v_b_2098_);
v_sz_2134_ = lean_array_size(v_vs_2131_);
v___x_2135_ = ((size_t)0ULL);
v___x_2136_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__11(v___x_2092_, v_val_2093_, v_cmd_2094_, v_onUnsolved_2095_, v___y_2096_, v_vs_2131_, v_sz_2134_, v___x_2135_, v___x_2133_, v___y_2099_, v___y_2100_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2151_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2139_ = v___x_2136_;
v_isShared_2140_ = v_isSharedCheck_2151_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2136_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2151_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v_fst_2141_; 
v_fst_2141_ = lean_ctor_get(v_a_2137_, 0);
if (lean_obj_tag(v_fst_2141_) == 0)
{
lean_object* v_snd_2142_; lean_object* v___x_2143_; lean_object* v___x_2145_; 
v_snd_2142_ = lean_ctor_get(v_a_2137_, 1);
lean_inc(v_snd_2142_);
lean_dec(v_a_2137_);
v___x_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2143_, 0, v_snd_2142_);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2143_);
v___x_2145_ = v___x_2139_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
else
{
lean_object* v_val_2147_; lean_object* v___x_2149_; 
lean_inc_ref(v_fst_2141_);
lean_dec(v_a_2137_);
v_val_2147_ = lean_ctor_get(v_fst_2141_, 0);
lean_inc(v_val_2147_);
lean_dec_ref_known(v_fst_2141_, 1);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v_val_2147_);
v___x_2149_ = v___x_2139_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_val_2147_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
}
else
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2159_; 
v_a_2152_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2154_ = v___x_2136_;
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2136_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2155_ == 0)
{
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2152_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__10(lean_object* v_init_2160_, lean_object* v___x_2161_, lean_object* v_val_2162_, lean_object* v_cmd_2163_, uint8_t v_onUnsolved_2164_, uint8_t v___y_2165_, lean_object* v_as_2166_, size_t v_sz_2167_, size_t v_i_2168_, lean_object* v_b_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
uint8_t v___x_2173_; 
v___x_2173_ = lean_usize_dec_lt(v_i_2168_, v_sz_2167_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; 
lean_dec(v_cmd_2163_);
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_b_2169_);
return v___x_2174_;
}
else
{
lean_object* v_snd_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2209_; 
v_snd_2175_ = lean_ctor_get(v_b_2169_, 1);
v_isSharedCheck_2209_ = !lean_is_exclusive(v_b_2169_);
if (v_isSharedCheck_2209_ == 0)
{
lean_object* v_unused_2210_; 
v_unused_2210_ = lean_ctor_get(v_b_2169_, 0);
lean_dec(v_unused_2210_);
v___x_2177_ = v_b_2169_;
v_isShared_2178_ = v_isSharedCheck_2209_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_snd_2175_);
lean_dec(v_b_2169_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2209_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2179_; lean_object* v_a_2180_; lean_object* v___x_2181_; 
v___x_2179_ = lean_box(0);
v_a_2180_ = lean_array_uget_borrowed(v_as_2166_, v_i_2168_);
lean_inc(v_snd_2175_);
lean_inc(v_cmd_2163_);
v___x_2181_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8(v_init_2160_, v___x_2161_, v_val_2162_, v_cmd_2163_, v_onUnsolved_2164_, v___y_2165_, v_a_2180_, v_snd_2175_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2200_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2184_ = v___x_2181_;
v_isShared_2185_ = v_isSharedCheck_2200_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2181_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2200_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
if (lean_obj_tag(v_a_2182_) == 0)
{
lean_object* v___x_2186_; lean_object* v___x_2188_; 
lean_dec(v_cmd_2163_);
v___x_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2186_, 0, v_a_2182_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v___x_2186_);
v___x_2188_ = v___x_2177_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2186_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v_snd_2175_);
v___x_2188_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
lean_object* v___x_2190_; 
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 0, v___x_2188_);
v___x_2190_ = v___x_2184_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v___x_2188_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; 
lean_del_object(v___x_2184_);
lean_dec(v_snd_2175_);
v_a_2193_ = lean_ctor_get(v_a_2182_, 0);
lean_inc(v_a_2193_);
lean_dec_ref_known(v_a_2182_, 1);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 1, v_a_2193_);
lean_ctor_set(v___x_2177_, 0, v___x_2179_);
v___x_2195_ = v___x_2177_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v___x_2179_);
lean_ctor_set(v_reuseFailAlloc_2199_, 1, v_a_2193_);
v___x_2195_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
size_t v___x_2196_; size_t v___x_2197_; 
v___x_2196_ = ((size_t)1ULL);
v___x_2197_ = lean_usize_add(v_i_2168_, v___x_2196_);
v_i_2168_ = v___x_2197_;
v_b_2169_ = v___x_2195_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
lean_del_object(v___x_2177_);
lean_dec(v_snd_2175_);
lean_dec(v_cmd_2163_);
v_a_2201_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2181_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2181_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__10___boxed(lean_object* v_init_2211_, lean_object* v___x_2212_, lean_object* v_val_2213_, lean_object* v_cmd_2214_, lean_object* v_onUnsolved_2215_, lean_object* v___y_2216_, lean_object* v_as_2217_, lean_object* v_sz_2218_, lean_object* v_i_2219_, lean_object* v_b_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
uint8_t v_onUnsolved_boxed_2224_; uint8_t v___y_15321__boxed_2225_; size_t v_sz_boxed_2226_; size_t v_i_boxed_2227_; lean_object* v_res_2228_; 
v_onUnsolved_boxed_2224_ = lean_unbox(v_onUnsolved_2215_);
v___y_15321__boxed_2225_ = lean_unbox(v___y_2216_);
v_sz_boxed_2226_ = lean_unbox_usize(v_sz_2218_);
lean_dec(v_sz_2218_);
v_i_boxed_2227_ = lean_unbox_usize(v_i_2219_);
lean_dec(v_i_2219_);
v_res_2228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8_spec__10(v_init_2211_, v___x_2212_, v_val_2213_, v_cmd_2214_, v_onUnsolved_boxed_2224_, v___y_15321__boxed_2225_, v_as_2217_, v_sz_boxed_2226_, v_i_boxed_2227_, v_b_2220_, v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec_ref(v_as_2217_);
lean_dec_ref(v_val_2213_);
lean_dec_ref(v___x_2212_);
lean_dec_ref(v_init_2211_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8___boxed(lean_object* v_init_2229_, lean_object* v___x_2230_, lean_object* v_val_2231_, lean_object* v_cmd_2232_, lean_object* v_onUnsolved_2233_, lean_object* v___y_2234_, lean_object* v_n_2235_, lean_object* v_b_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
uint8_t v_onUnsolved_boxed_2240_; uint8_t v___y_15343__boxed_2241_; lean_object* v_res_2242_; 
v_onUnsolved_boxed_2240_ = lean_unbox(v_onUnsolved_2233_);
v___y_15343__boxed_2241_ = lean_unbox(v___y_2234_);
v_res_2242_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8(v_init_2229_, v___x_2230_, v_val_2231_, v_cmd_2232_, v_onUnsolved_boxed_2240_, v___y_15343__boxed_2241_, v_n_2235_, v_b_2236_, v___y_2237_, v___y_2238_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec_ref(v_n_2235_);
lean_dec_ref(v_val_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v_init_2229_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5(lean_object* v___x_2243_, lean_object* v_val_2244_, lean_object* v_cmd_2245_, uint8_t v_onUnsolved_2246_, uint8_t v___y_2247_, lean_object* v_t_2248_, lean_object* v_init_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_root_2253_; lean_object* v_tail_2254_; lean_object* v___x_2255_; 
v_root_2253_ = lean_ctor_get(v_t_2248_, 0);
v_tail_2254_ = lean_ctor_get(v_t_2248_, 1);
lean_inc(v_cmd_2245_);
lean_inc_ref(v_init_2249_);
v___x_2255_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__8(v_init_2249_, v___x_2243_, v_val_2244_, v_cmd_2245_, v_onUnsolved_2246_, v___y_2247_, v_root_2253_, v_init_2249_, v___y_2250_, v___y_2251_);
lean_dec_ref(v_init_2249_);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2292_; 
v_a_2256_ = lean_ctor_get(v___x_2255_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2258_ = v___x_2255_;
v_isShared_2259_ = v_isSharedCheck_2292_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2255_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2292_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
if (lean_obj_tag(v_a_2256_) == 0)
{
lean_object* v_a_2260_; lean_object* v___x_2262_; 
lean_dec(v_cmd_2245_);
v_a_2260_ = lean_ctor_get(v_a_2256_, 0);
lean_inc(v_a_2260_);
lean_dec_ref_known(v_a_2256_, 1);
if (v_isShared_2259_ == 0)
{
lean_ctor_set(v___x_2258_, 0, v_a_2260_);
v___x_2262_ = v___x_2258_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v_a_2260_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; size_t v_sz_2267_; size_t v___x_2268_; lean_object* v___x_2269_; 
lean_del_object(v___x_2258_);
v_a_2264_ = lean_ctor_get(v_a_2256_, 0);
lean_inc(v_a_2264_);
lean_dec_ref_known(v_a_2256_, 1);
v___x_2265_ = lean_box(0);
v___x_2266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
lean_ctor_set(v___x_2266_, 1, v_a_2264_);
v_sz_2267_ = lean_array_size(v_tail_2254_);
v___x_2268_ = ((size_t)0ULL);
v___x_2269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9(v___x_2243_, v_val_2244_, v_cmd_2245_, v_onUnsolved_2246_, v___y_2247_, v_tail_2254_, v_sz_2267_, v___x_2268_, v___x_2266_, v___y_2250_, v___y_2251_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2283_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2272_ = v___x_2269_;
v_isShared_2273_ = v_isSharedCheck_2283_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v___x_2269_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2283_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v_fst_2274_; 
v_fst_2274_ = lean_ctor_get(v_a_2270_, 0);
if (lean_obj_tag(v_fst_2274_) == 0)
{
lean_object* v_snd_2275_; lean_object* v___x_2277_; 
v_snd_2275_ = lean_ctor_get(v_a_2270_, 1);
lean_inc(v_snd_2275_);
lean_dec(v_a_2270_);
if (v_isShared_2273_ == 0)
{
lean_ctor_set(v___x_2272_, 0, v_snd_2275_);
v___x_2277_ = v___x_2272_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_snd_2275_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
else
{
lean_object* v_val_2279_; lean_object* v___x_2281_; 
lean_inc_ref(v_fst_2274_);
lean_dec(v_a_2270_);
v_val_2279_ = lean_ctor_get(v_fst_2274_, 0);
lean_inc(v_val_2279_);
lean_dec_ref_known(v_fst_2274_, 1);
if (v_isShared_2273_ == 0)
{
lean_ctor_set(v___x_2272_, 0, v_val_2279_);
v___x_2281_ = v___x_2272_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_val_2279_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
}
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2291_; 
v_a_2284_ = lean_ctor_get(v___x_2269_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2286_ = v___x_2269_;
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2269_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2289_; 
if (v_isShared_2287_ == 0)
{
v___x_2289_ = v___x_2286_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_a_2284_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec(v_cmd_2245_);
v_a_2293_ = lean_ctor_get(v___x_2255_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2255_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2255_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5___boxed(lean_object* v___x_2301_, lean_object* v_val_2302_, lean_object* v_cmd_2303_, lean_object* v_onUnsolved_2304_, lean_object* v___y_2305_, lean_object* v_t_2306_, lean_object* v_init_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
uint8_t v_onUnsolved_boxed_2311_; uint8_t v___y_15534__boxed_2312_; lean_object* v_res_2313_; 
v_onUnsolved_boxed_2311_ = lean_unbox(v_onUnsolved_2304_);
v___y_15534__boxed_2312_ = lean_unbox(v___y_2305_);
v_res_2313_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5(v___x_2301_, v_val_2302_, v_cmd_2303_, v_onUnsolved_boxed_2311_, v___y_15534__boxed_2312_, v_t_2306_, v_init_2307_, v___y_2308_, v___y_2309_);
lean_dec(v___y_2309_);
lean_dec_ref(v___y_2308_);
lean_dec_ref(v_t_2306_);
lean_dec_ref(v_val_2302_);
lean_dec_ref(v___x_2301_);
return v_res_2313_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2314_ = lean_box(0);
v___x_2315_ = lean_unsigned_to_nat(16u);
v___x_2316_ = lean_mk_array(v___x_2315_, v___x_2314_);
return v___x_2316_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2317_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0);
v___x_2318_ = lean_unsigned_to_nat(0u);
v___x_2319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
lean_ctor_set(v___x_2319_, 1, v___x_2317_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(lean_object* v_cmd_2323_, lean_object* v_opts_2324_, lean_object* v_tree_2325_, lean_object* v_msgs_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v___y_2331_; uint8_t v___y_2332_; lean_object* v___y_2333_; uint8_t v___y_2334_; lean_object* v___y_2335_; uint8_t v___y_2362_; uint8_t v___y_2363_; lean_object* v_acc_2364_; lean_object* v___y_2365_; lean_object* v___y_2366_; lean_object* v___f_2368_; uint8_t v___y_2370_; lean_object* v___x_2377_; uint8_t v___x_2378_; 
v___f_2368_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__2));
v___x_2377_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof;
v___x_2378_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_2324_, v___x_2377_);
if (v___x_2378_ == 0)
{
lean_object* v___x_2379_; uint8_t v___x_2380_; 
v___x_2379_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy;
v___x_2380_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_2324_, v___x_2379_);
v___y_2370_ = v___x_2380_;
goto v___jp_2369_;
}
else
{
v___y_2370_ = v___x_2378_;
goto v___jp_2369_;
}
v___jp_2330_:
{
uint8_t v___x_2336_; lean_object* v___x_2337_; 
v___x_2336_ = 1;
v___x_2337_ = l_Lean_Syntax_getRange_x3f(v_cmd_2323_, v___x_2336_);
if (lean_obj_tag(v___x_2337_) == 1)
{
lean_object* v_val_2338_; lean_object* v_fileMap_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v_val_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_val_2338_);
lean_dec_ref_known(v___x_2337_, 1);
v_fileMap_2339_ = lean_ctor_get(v___y_2335_, 1);
v___x_2340_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1);
v___x_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___y_2333_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
v___x_2342_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5(v_fileMap_2339_, v_val_2338_, v_cmd_2323_, v___y_2332_, v___y_2334_, v_msgs_2326_, v___x_2341_, v___y_2335_, v___y_2331_);
lean_dec(v_val_2338_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2351_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2345_ = v___x_2342_;
v_isShared_2346_ = v_isSharedCheck_2351_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2342_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2351_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v_fst_2347_; lean_object* v___x_2349_; 
v_fst_2347_ = lean_ctor_get(v_a_2343_, 0);
lean_inc(v_fst_2347_);
lean_dec(v_a_2343_);
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 0, v_fst_2347_);
v___x_2349_ = v___x_2345_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_fst_2347_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
v_a_2352_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2342_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2342_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
else
{
lean_object* v___x_2360_; 
lean_dec(v___x_2337_);
lean_dec(v_cmd_2323_);
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v___y_2333_);
return v___x_2360_;
}
}
v___jp_2361_:
{
if (v___y_2362_ == 0)
{
if (v___y_2363_ == 0)
{
lean_object* v___x_2367_; 
lean_dec(v_cmd_2323_);
v___x_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2367_, 0, v_acc_2364_);
return v___x_2367_;
}
else
{
v___y_2331_ = v___y_2366_;
v___y_2332_ = v___y_2362_;
v___y_2333_ = v_acc_2364_;
v___y_2334_ = v___y_2363_;
v___y_2335_ = v___y_2365_;
goto v___jp_2330_;
}
}
else
{
v___y_2331_ = v___y_2366_;
v___y_2332_ = v___y_2362_;
v___y_2333_ = v_acc_2364_;
v___y_2334_ = v___y_2363_;
v___y_2335_ = v___y_2365_;
goto v___jp_2330_;
}
}
v___jp_2369_:
{
lean_object* v___x_2371_; uint8_t v_onUnsolved_2372_; lean_object* v___x_2373_; uint8_t v_onSorry_2374_; lean_object* v_acc_2375_; 
v___x_2371_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal;
v_onUnsolved_2372_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_2324_, v___x_2371_);
v___x_2373_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry;
v_onSorry_2374_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_2324_, v___x_2373_);
v_acc_2375_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__3));
if (v_onSorry_2374_ == 0)
{
lean_dec_ref(v_tree_2325_);
v___y_2362_ = v_onUnsolved_2372_;
v___y_2363_ = v___y_2370_;
v_acc_2364_ = v_acc_2375_;
v___y_2365_ = v_a_2327_;
v___y_2366_ = v_a_2328_;
goto v___jp_2361_;
}
else
{
lean_object* v_acc_2376_; 
v_acc_2376_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___f_2368_, v_acc_2375_, v_tree_2325_);
v___y_2362_ = v_onUnsolved_2372_;
v___y_2363_ = v___y_2370_;
v_acc_2364_ = v_acc_2376_;
v___y_2365_ = v_a_2327_;
v___y_2366_ = v_a_2328_;
goto v___jp_2361_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___boxed(lean_object* v_cmd_2381_, lean_object* v_opts_2382_, lean_object* v_tree_2383_, lean_object* v_msgs_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_cmd_2381_, v_opts_2382_, v_tree_2383_, v_msgs_2384_, v_a_2385_, v_a_2386_);
lean_dec(v_a_2386_);
lean_dec_ref(v_a_2385_);
lean_dec_ref(v_msgs_2384_);
lean_dec_ref(v_opts_2382_);
return v_res_2388_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1(lean_object* v_00_u03b2_2389_, lean_object* v_m_2390_, lean_object* v_a_2391_){
_start:
{
uint8_t v___x_2392_; 
v___x_2392_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(v_m_2390_, v_a_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___boxed(lean_object* v_00_u03b2_2393_, lean_object* v_m_2394_, lean_object* v_a_2395_){
_start:
{
uint8_t v_res_2396_; lean_object* v_r_2397_; 
v_res_2396_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1(v_00_u03b2_2393_, v_m_2394_, v_a_2395_);
lean_dec_ref(v_a_2395_);
lean_dec_ref(v_m_2394_);
v_r_2397_ = lean_box(v_res_2396_);
return v_r_2397_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2(lean_object* v_00_u03b2_2398_, lean_object* v_m_2399_, lean_object* v_a_2400_, lean_object* v_b_2401_){
_start:
{
lean_object* v___x_2402_; 
v___x_2402_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(v_m_2399_, v_a_2400_, v_b_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(lean_object* v___x_2403_, lean_object* v_fst_2404_, lean_object* v_snd_2405_, lean_object* v___x_2406_, lean_object* v_as_2407_, size_t v_sz_2408_, size_t v_i_2409_, lean_object* v_b_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v___x_2414_; 
v___x_2414_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___redArg(v___x_2403_, v_fst_2404_, v_snd_2405_, v___x_2406_, v_as_2407_, v_sz_2408_, v_i_2409_, v_b_2410_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___boxed(lean_object* v___x_2415_, lean_object* v_fst_2416_, lean_object* v_snd_2417_, lean_object* v___x_2418_, lean_object* v_as_2419_, lean_object* v_sz_2420_, lean_object* v_i_2421_, lean_object* v_b_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
size_t v_sz_boxed_2426_; size_t v_i_boxed_2427_; lean_object* v_res_2428_; 
v_sz_boxed_2426_ = lean_unbox_usize(v_sz_2420_);
lean_dec(v_sz_2420_);
v_i_boxed_2427_ = lean_unbox_usize(v_i_2421_);
lean_dec(v_i_2421_);
v_res_2428_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_2415_, v_fst_2416_, v_snd_2417_, v___x_2418_, v_as_2419_, v_sz_boxed_2426_, v_i_boxed_2427_, v_b_2422_, v___y_2423_, v___y_2424_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec_ref(v_as_2419_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6(lean_object* v_msgData_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg(v_msgData_2429_, v___y_2431_);
return v___x_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___boxed(lean_object* v_msgData_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6(v_msgData_2434_, v___y_2435_, v___y_2436_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
return v_res_2438_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1(lean_object* v_00_u03b2_2439_, lean_object* v_a_2440_, lean_object* v_x_2441_){
_start:
{
uint8_t v___x_2442_; 
v___x_2442_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___redArg(v_a_2440_, v_x_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2443_, lean_object* v_a_2444_, lean_object* v_x_2445_){
_start:
{
uint8_t v_res_2446_; lean_object* v_r_2447_; 
v_res_2446_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__1(v_00_u03b2_2443_, v_a_2444_, v_x_2445_);
lean_dec(v_x_2445_);
lean_dec_ref(v_a_2444_);
v_r_2447_ = lean_box(v_res_2446_);
return v_r_2447_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3(lean_object* v_00_u03b2_2448_, lean_object* v_data_2449_){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3___redArg(v_data_2449_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_2451_, lean_object* v_i_2452_, lean_object* v_source_2453_, lean_object* v_target_2454_){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4___redArg(v_i_2452_, v_source_2453_, v_target_2454_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_2456_, lean_object* v_x_2457_, lean_object* v_x_2458_){
_start:
{
lean_object* v___x_2459_; 
v___x_2459_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2_spec__3_spec__4_spec__9___redArg(v_x_2457_, v_x_2458_);
return v___x_2459_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0(lean_object* v_x_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v___x_2468_; 
lean_inc(v___y_2462_);
lean_inc_ref(v___y_2461_);
v___x_2468_ = lean_apply_7(v_x_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, lean_box(0));
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0___boxed(lean_object* v_x_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0(v_x_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg(lean_object* v_mvarId_2478_, lean_object* v_x_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v___f_2487_; lean_object* v___x_2488_; 
lean_inc(v___y_2481_);
lean_inc_ref(v___y_2480_);
v___f_2487_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_2487_, 0, v_x_2479_);
lean_closure_set(v___f_2487_, 1, v___y_2480_);
lean_closure_set(v___f_2487_, 2, v___y_2481_);
v___x_2488_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2478_, v___f_2487_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2488_) == 0)
{
return v___x_2488_;
}
else
{
lean_object* v_a_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2496_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2491_ = v___x_2488_;
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_a_2489_);
lean_dec(v___x_2488_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2494_; 
if (v_isShared_2492_ == 0)
{
v___x_2494_ = v___x_2491_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_a_2489_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___boxed(lean_object* v_mvarId_2497_, lean_object* v_x_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
lean_object* v_res_2506_; 
v_res_2506_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg(v_mvarId_2497_, v_x_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2(lean_object* v_00_u03b1_2507_, lean_object* v_mvarId_2508_, lean_object* v_x_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v___x_2517_; 
v___x_2517_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg(v_mvarId_2508_, v_x_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___boxed(lean_object* v_00_u03b1_2518_, lean_object* v_mvarId_2519_, lean_object* v_x_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2(v_00_u03b1_2518_, v_mvarId_2519_, v_x_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0(lean_object* v_____r_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1));
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___boxed(lean_object* v_____r_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0(v_____r_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1(lean_object* v_____r_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1));
v___x_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1___boxed(lean_object* v_____r_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_){
_start:
{
lean_object* v_res_2570_; 
v_res_2570_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1(v_____r_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
lean_dec(v___y_2568_);
lean_dec_ref(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
return v_res_2570_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2(uint8_t v___x_2571_, lean_object* v_x_2572_){
_start:
{
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2___boxed(lean_object* v___x_2573_, lean_object* v_x_2574_){
_start:
{
uint8_t v___x_11429__boxed_2575_; uint8_t v_res_2576_; lean_object* v_r_2577_; 
v___x_11429__boxed_2575_ = lean_unbox(v___x_2573_);
v_res_2576_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2(v___x_11429__boxed_2575_, v_x_2574_);
lean_dec(v_x_2574_);
v_r_2577_ = lean_box(v_res_2576_);
return v_r_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(lean_object* v_msgData_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v___x_2584_; lean_object* v_env_2585_; uint8_t v___x_2586_; lean_object* v_env_2587_; lean_object* v___x_2588_; lean_object* v_toCold_2589_; lean_object* v_mctx_2590_; lean_object* v_lctx_2591_; lean_object* v_options_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2584_ = lean_st_ref_get(v___y_2582_);
v_env_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc_ref(v_env_2585_);
lean_dec(v___x_2584_);
v___x_2586_ = 0;
v_env_2587_ = l_Lean_Environment_setRecordingDeps(v_env_2585_, v___x_2586_);
v___x_2588_ = lean_st_ref_get(v___y_2580_);
v_toCold_2589_ = lean_ctor_get(v___y_2581_, 0);
v_mctx_2590_ = lean_ctor_get(v___x_2588_, 0);
lean_inc_ref(v_mctx_2590_);
lean_dec(v___x_2588_);
v_lctx_2591_ = lean_ctor_get(v___y_2579_, 2);
v_options_2592_ = lean_ctor_get(v_toCold_2589_, 2);
lean_inc_ref(v_options_2592_);
lean_inc_ref(v_lctx_2591_);
v___x_2593_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2593_, 0, v_env_2587_);
lean_ctor_set(v___x_2593_, 1, v_mctx_2590_);
lean_ctor_set(v___x_2593_, 2, v_lctx_2591_);
lean_ctor_set(v___x_2593_, 3, v_options_2592_);
v___x_2594_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
lean_ctor_set(v___x_2594_, 1, v_msgData_2578_);
v___x_2595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2___boxed(lean_object* v_msgData_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(v_msgData_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(lean_object* v_cls_2603_, lean_object* v_msg_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_){
_start:
{
lean_object* v_ref_2610_; lean_object* v___x_2611_; lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2657_; 
v_ref_2610_ = lean_ctor_get(v___y_2607_, 2);
v___x_2611_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(v_msg_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_);
v_a_2612_ = lean_ctor_get(v___x_2611_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2614_ = v___x_2611_;
v_isShared_2615_ = v_isSharedCheck_2657_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2611_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2657_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2616_; lean_object* v_traceState_2617_; lean_object* v_env_2618_; lean_object* v_nextMacroScope_2619_; lean_object* v_ngen_2620_; lean_object* v_auxDeclNGen_2621_; lean_object* v_cache_2622_; lean_object* v_recordedDeps_2623_; lean_object* v_messages_2624_; lean_object* v_infoState_2625_; lean_object* v_snapshotTasks_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2656_; 
v___x_2616_ = lean_st_ref_take(v___y_2608_);
v_traceState_2617_ = lean_ctor_get(v___x_2616_, 4);
v_env_2618_ = lean_ctor_get(v___x_2616_, 0);
v_nextMacroScope_2619_ = lean_ctor_get(v___x_2616_, 1);
v_ngen_2620_ = lean_ctor_get(v___x_2616_, 2);
v_auxDeclNGen_2621_ = lean_ctor_get(v___x_2616_, 3);
v_cache_2622_ = lean_ctor_get(v___x_2616_, 5);
v_recordedDeps_2623_ = lean_ctor_get(v___x_2616_, 6);
v_messages_2624_ = lean_ctor_get(v___x_2616_, 7);
v_infoState_2625_ = lean_ctor_get(v___x_2616_, 8);
v_snapshotTasks_2626_ = lean_ctor_get(v___x_2616_, 9);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2628_ = v___x_2616_;
v_isShared_2629_ = v_isSharedCheck_2656_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_snapshotTasks_2626_);
lean_inc(v_infoState_2625_);
lean_inc(v_messages_2624_);
lean_inc(v_recordedDeps_2623_);
lean_inc(v_cache_2622_);
lean_inc(v_traceState_2617_);
lean_inc(v_auxDeclNGen_2621_);
lean_inc(v_ngen_2620_);
lean_inc(v_nextMacroScope_2619_);
lean_inc(v_env_2618_);
lean_dec(v___x_2616_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2656_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
uint64_t v_tid_2630_; lean_object* v_traces_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2655_; 
v_tid_2630_ = lean_ctor_get_uint64(v_traceState_2617_, sizeof(void*)*1);
v_traces_2631_ = lean_ctor_get(v_traceState_2617_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v_traceState_2617_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2633_ = v_traceState_2617_;
v_isShared_2634_ = v_isSharedCheck_2655_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_traces_2631_);
lean_dec(v_traceState_2617_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2655_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; double v___x_2637_; uint8_t v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2646_; 
v___x_2635_ = lean_box(0);
v___x_2636_ = lean_box(0);
v___x_2637_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0);
v___x_2638_ = 0;
v___x_2639_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_2640_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2640_, 0, v_cls_2603_);
lean_ctor_set(v___x_2640_, 1, v___x_2636_);
lean_ctor_set(v___x_2640_, 2, v___x_2639_);
lean_ctor_set_float(v___x_2640_, sizeof(void*)*3, v___x_2637_);
lean_ctor_set_float(v___x_2640_, sizeof(void*)*3 + 8, v___x_2637_);
lean_ctor_set_uint8(v___x_2640_, sizeof(void*)*3 + 16, v___x_2638_);
v___x_2641_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__1));
v___x_2642_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set(v___x_2642_, 1, v_a_2612_);
lean_ctor_set(v___x_2642_, 2, v___x_2641_);
lean_inc(v_ref_2610_);
v___x_2643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2643_, 0, v_ref_2610_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = l_Lean_PersistentArray_push___redArg(v_traces_2631_, v___x_2643_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 0, v___x_2644_);
v___x_2646_ = v___x_2633_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v___x_2644_);
lean_ctor_set_uint64(v_reuseFailAlloc_2654_, sizeof(void*)*1, v_tid_2630_);
v___x_2646_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
lean_object* v___x_2648_; 
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 4, v___x_2646_);
v___x_2648_ = v___x_2628_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_env_2618_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v_nextMacroScope_2619_);
lean_ctor_set(v_reuseFailAlloc_2653_, 2, v_ngen_2620_);
lean_ctor_set(v_reuseFailAlloc_2653_, 3, v_auxDeclNGen_2621_);
lean_ctor_set(v_reuseFailAlloc_2653_, 4, v___x_2646_);
lean_ctor_set(v_reuseFailAlloc_2653_, 5, v_cache_2622_);
lean_ctor_set(v_reuseFailAlloc_2653_, 6, v_recordedDeps_2623_);
lean_ctor_set(v_reuseFailAlloc_2653_, 7, v_messages_2624_);
lean_ctor_set(v_reuseFailAlloc_2653_, 8, v_infoState_2625_);
lean_ctor_set(v_reuseFailAlloc_2653_, 9, v_snapshotTasks_2626_);
v___x_2648_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
lean_object* v___x_2649_; lean_object* v___x_2651_; 
v___x_2649_ = lean_st_ref_put(v___y_2608_, v___x_2648_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 0, v___x_2635_);
v___x_2651_ = v___x_2614_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v___x_2635_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg___boxed(lean_object* v_cls_2658_, lean_object* v_msg_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(v_cls_2658_, v_msg_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
return v_res_2665_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2667_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__0));
v___x_2668_ = l_Lean_stringToMessageData(v___x_2667_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3(lean_object* v___x_2669_, lean_object* v___f_2670_, lean_object* v___x_2671_, lean_object* v___x_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v___x_2680_; lean_object* v_a_2682_; lean_object* v___y_2686_; lean_object* v___x_2700_; 
v___x_2680_ = lean_st_mk_ref(v___x_2669_);
v___x_2700_ = l_Lean_Elab_Tactic_saveState___redArg(v___x_2680_, v___y_2674_, v___y_2676_, v___y_2678_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2702_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2701_);
lean_dec_ref_known(v___x_2700_, 1);
v___x_2702_ = l_Lean_Elab_Tactic_Try_collectTryCoreSuggestions(v___x_2672_, v___x_2671_, v___x_2680_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v_a_2703_; 
lean_dec(v_a_2701_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec_ref(v___x_2671_);
lean_dec_ref(v___f_2670_);
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref_known(v___x_2702_, 1);
v_a_2682_ = v_a_2703_;
goto v___jp_2681_;
}
else
{
lean_object* v_a_2704_; uint8_t v___x_2705_; 
v_a_2704_ = lean_ctor_get(v___x_2702_, 0);
v___x_2705_ = l_Lean_Exception_isInterrupt(v_a_2704_);
if (v___x_2705_ == 0)
{
uint8_t v___x_2706_; 
lean_inc(v_a_2704_);
v___x_2706_ = l_Lean_Exception_isRuntime(v_a_2704_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2707_; 
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2702_, 1);
v___x_2707_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_2701_, v___x_2706_, v___x_2680_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2736_; 
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2736_ == 0)
{
lean_object* v_unused_2737_; 
v_unused_2737_ = lean_ctor_get(v___x_2707_, 0);
lean_dec(v_unused_2737_);
v___x_2709_ = v___x_2707_;
v_isShared_2710_ = v_isSharedCheck_2736_;
goto v_resetjp_2708_;
}
else
{
lean_dec(v___x_2707_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2736_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
uint8_t v___x_2711_; 
lean_inc(v_a_2704_);
v___x_2711_ = l_Lean_Exception_isMaxRecDepth(v_a_2704_);
if (v___x_2711_ == 0)
{
lean_object* v_toCold_2712_; lean_object* v_options_2713_; uint8_t v_hasTrace_2714_; 
lean_del_object(v___x_2709_);
v_toCold_2712_ = lean_ctor_get(v___y_2677_, 0);
v_options_2713_ = lean_ctor_get(v_toCold_2712_, 2);
v_hasTrace_2714_ = lean_ctor_get_uint8(v_options_2713_, sizeof(void*)*1);
if (v_hasTrace_2714_ == 0)
{
lean_dec(v_a_2704_);
goto v___jp_2697_;
}
else
{
lean_object* v_inheritedTraceOptions_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; uint8_t v___x_2718_; 
v_inheritedTraceOptions_2715_ = lean_ctor_get(v_toCold_2712_, 11);
v___x_2716_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_2717_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_2718_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2715_, v_options_2713_, v___x_2717_);
if (v___x_2718_ == 0)
{
lean_dec(v_a_2704_);
goto v___jp_2697_;
}
else
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
v___x_2719_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1);
v___x_2720_ = l_Lean_Exception_toMessageData(v_a_2704_);
v___x_2721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2719_);
lean_ctor_set(v___x_2721_, 1, v___x_2720_);
v___x_2722_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(v___x_2716_, v___x_2721_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_object* v_a_2723_; lean_object* v___x_2724_; 
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_a_2723_);
lean_dec_ref_known(v___x_2722_, 1);
lean_inc(v___x_2680_);
v___x_2724_ = lean_apply_10(v___f_2670_, v_a_2723_, v___x_2671_, v___x_2680_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, lean_box(0));
v___y_2686_ = v___x_2724_;
goto v___jp_2685_;
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2732_; 
lean_dec(v___x_2680_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec_ref(v___x_2671_);
lean_dec_ref(v___f_2670_);
v_a_2725_ = lean_ctor_get(v___x_2722_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2722_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2727_ = v___x_2722_;
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___x_2722_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2725_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
}
}
else
{
lean_object* v___x_2734_; 
lean_dec(v___x_2680_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec_ref(v___x_2671_);
lean_dec_ref(v___f_2670_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set_tag(v___x_2709_, 1);
lean_ctor_set(v___x_2709_, 0, v_a_2704_);
v___x_2734_ = v___x_2709_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_a_2704_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
}
else
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2745_; 
lean_dec(v_a_2704_);
lean_dec(v___x_2680_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec_ref(v___x_2671_);
lean_dec_ref(v___f_2670_);
v_a_2738_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2740_ = v___x_2707_;
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2707_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
}
else
{
lean_dec(v_a_2701_);
lean_dec(v___x_2680_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec_ref(v___x_2671_);
lean_dec_ref(v___f_2670_);
return v___x_2702_;
}
}
else
{
lean_dec(v_a_2701_);
lean_dec(v___x_2680_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec_ref(v___x_2671_);
lean_dec_ref(v___f_2670_);
return v___x_2702_;
}
}
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
lean_dec(v___x_2680_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec_ref(v___x_2672_);
lean_dec_ref(v___x_2671_);
lean_dec_ref(v___f_2670_);
v_a_2746_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2700_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2700_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
v___jp_2681_:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; 
v___x_2683_ = lean_st_ref_get(v___x_2680_);
lean_dec(v___x_2680_);
lean_dec(v___x_2683_);
v___x_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2684_, 0, v_a_2682_);
return v___x_2684_;
}
v___jp_2685_:
{
if (lean_obj_tag(v___y_2686_) == 0)
{
lean_object* v_a_2687_; lean_object* v_a_2688_; 
v_a_2687_ = lean_ctor_get(v___y_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v___y_2686_, 1);
v_a_2688_ = lean_ctor_get(v_a_2687_, 0);
lean_inc(v_a_2688_);
lean_dec(v_a_2687_);
v_a_2682_ = v_a_2688_;
goto v___jp_2681_;
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_dec(v___x_2680_);
v_a_2689_ = lean_ctor_get(v___y_2686_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___y_2686_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___y_2686_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___y_2686_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
v___jp_2697_:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2698_ = lean_box(0);
lean_inc(v___x_2680_);
v___x_2699_ = lean_apply_10(v___f_2670_, v___x_2698_, v___x_2671_, v___x_2680_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, lean_box(0));
v___y_2686_ = v___x_2699_;
goto v___jp_2685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___boxed(lean_object* v___x_2754_, lean_object* v___f_2755_, lean_object* v___x_2756_, lean_object* v___x_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3(v___x_2754_, v___f_2755_, v___x_2756_, v___x_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4(lean_object* v___x_2766_, uint8_t v___x_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_2766_, v___x_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4___boxed(lean_object* v___x_2776_, lean_object* v___x_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
uint8_t v___x_11748__boxed_2785_; lean_object* v_res_2786_; 
v___x_11748__boxed_2785_ = lean_unbox(v___x_2777_);
v_res_2786_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4(v___x_2776_, v___x_11748__boxed_2785_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(lean_object* v_cls_2787_, lean_object* v_msg_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v_ref_2794_; lean_object* v___x_2795_; lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2841_; 
v_ref_2794_ = lean_ctor_get(v___y_2791_, 2);
v___x_2795_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(v_msg_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2841_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2841_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2800_; lean_object* v_traceState_2801_; lean_object* v_env_2802_; lean_object* v_nextMacroScope_2803_; lean_object* v_ngen_2804_; lean_object* v_auxDeclNGen_2805_; lean_object* v_cache_2806_; lean_object* v_recordedDeps_2807_; lean_object* v_messages_2808_; lean_object* v_infoState_2809_; lean_object* v_snapshotTasks_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2840_; 
v___x_2800_ = lean_st_ref_take(v___y_2792_);
v_traceState_2801_ = lean_ctor_get(v___x_2800_, 4);
v_env_2802_ = lean_ctor_get(v___x_2800_, 0);
v_nextMacroScope_2803_ = lean_ctor_get(v___x_2800_, 1);
v_ngen_2804_ = lean_ctor_get(v___x_2800_, 2);
v_auxDeclNGen_2805_ = lean_ctor_get(v___x_2800_, 3);
v_cache_2806_ = lean_ctor_get(v___x_2800_, 5);
v_recordedDeps_2807_ = lean_ctor_get(v___x_2800_, 6);
v_messages_2808_ = lean_ctor_get(v___x_2800_, 7);
v_infoState_2809_ = lean_ctor_get(v___x_2800_, 8);
v_snapshotTasks_2810_ = lean_ctor_get(v___x_2800_, 9);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2812_ = v___x_2800_;
v_isShared_2813_ = v_isSharedCheck_2840_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_snapshotTasks_2810_);
lean_inc(v_infoState_2809_);
lean_inc(v_messages_2808_);
lean_inc(v_recordedDeps_2807_);
lean_inc(v_cache_2806_);
lean_inc(v_traceState_2801_);
lean_inc(v_auxDeclNGen_2805_);
lean_inc(v_ngen_2804_);
lean_inc(v_nextMacroScope_2803_);
lean_inc(v_env_2802_);
lean_dec(v___x_2800_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2840_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
uint64_t v_tid_2814_; lean_object* v_traces_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2839_; 
v_tid_2814_ = lean_ctor_get_uint64(v_traceState_2801_, sizeof(void*)*1);
v_traces_2815_ = lean_ctor_get(v_traceState_2801_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v_traceState_2801_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2817_ = v_traceState_2801_;
v_isShared_2818_ = v_isSharedCheck_2839_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_traces_2815_);
lean_dec(v_traceState_2801_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2839_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; double v___x_2821_; uint8_t v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2830_; 
v___x_2819_ = lean_box(0);
v___x_2820_ = lean_box(0);
v___x_2821_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__0);
v___x_2822_ = 0;
v___x_2823_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_2824_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2824_, 0, v_cls_2787_);
lean_ctor_set(v___x_2824_, 1, v___x_2820_);
lean_ctor_set(v___x_2824_, 2, v___x_2823_);
lean_ctor_set_float(v___x_2824_, sizeof(void*)*3, v___x_2821_);
lean_ctor_set_float(v___x_2824_, sizeof(void*)*3 + 8, v___x_2821_);
lean_ctor_set_uint8(v___x_2824_, sizeof(void*)*3 + 16, v___x_2822_);
v___x_2825_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___closed__1));
v___x_2826_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2824_);
lean_ctor_set(v___x_2826_, 1, v_a_2796_);
lean_ctor_set(v___x_2826_, 2, v___x_2825_);
lean_inc(v_ref_2794_);
v___x_2827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2827_, 0, v_ref_2794_);
lean_ctor_set(v___x_2827_, 1, v___x_2826_);
v___x_2828_ = l_Lean_PersistentArray_push___redArg(v_traces_2815_, v___x_2827_);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v___x_2828_);
v___x_2830_ = v___x_2817_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2828_);
lean_ctor_set_uint64(v_reuseFailAlloc_2838_, sizeof(void*)*1, v_tid_2814_);
v___x_2830_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
lean_object* v___x_2832_; 
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 4, v___x_2830_);
v___x_2832_ = v___x_2812_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_env_2802_);
lean_ctor_set(v_reuseFailAlloc_2837_, 1, v_nextMacroScope_2803_);
lean_ctor_set(v_reuseFailAlloc_2837_, 2, v_ngen_2804_);
lean_ctor_set(v_reuseFailAlloc_2837_, 3, v_auxDeclNGen_2805_);
lean_ctor_set(v_reuseFailAlloc_2837_, 4, v___x_2830_);
lean_ctor_set(v_reuseFailAlloc_2837_, 5, v_cache_2806_);
lean_ctor_set(v_reuseFailAlloc_2837_, 6, v_recordedDeps_2807_);
lean_ctor_set(v_reuseFailAlloc_2837_, 7, v_messages_2808_);
lean_ctor_set(v_reuseFailAlloc_2837_, 8, v_infoState_2809_);
lean_ctor_set(v_reuseFailAlloc_2837_, 9, v_snapshotTasks_2810_);
v___x_2832_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
lean_object* v___x_2833_; lean_object* v___x_2835_; 
v___x_2833_ = lean_st_ref_put(v___y_2792_, v___x_2832_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 0, v___x_2819_);
v___x_2835_ = v___x_2798_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v___x_2819_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3___boxed(lean_object* v_cls_2842_, lean_object* v_msg_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(v_cls_2842_, v_msg_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
return v_res_2849_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__0));
v___x_2852_ = l_Lean_stringToMessageData(v___x_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5(lean_object* v___f_2853_, lean_object* v_term_2854_, lean_object* v___x_2855_, lean_object* v___x_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_){
_start:
{
lean_object* v___y_2863_; lean_object* v___x_2884_; 
v___x_2884_ = l_Lean_Elab_Term_TermElabM_run___redArg(v_term_2854_, v___x_2855_, v___x_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2893_; 
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec_ref(v___f_2853_);
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2887_ = v___x_2884_;
v_isShared_2888_ = v_isSharedCheck_2893_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2884_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2893_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v_fst_2889_; lean_object* v___x_2891_; 
v_fst_2889_ = lean_ctor_get(v_a_2885_, 0);
lean_inc(v_fst_2889_);
lean_dec(v_a_2885_);
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v_fst_2889_);
v___x_2891_ = v___x_2887_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_fst_2889_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
else
{
lean_object* v_a_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2931_; 
v_a_2894_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2896_ = v___x_2884_;
v_isShared_2897_ = v_isSharedCheck_2931_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_a_2894_);
lean_dec(v___x_2884_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2931_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
uint8_t v___x_2898_; 
v___x_2898_ = l_Lean_Exception_isInterrupt(v_a_2894_);
if (v___x_2898_ == 0)
{
uint8_t v___x_2899_; 
lean_inc(v_a_2894_);
v___x_2899_ = l_Lean_Exception_isRuntime(v_a_2894_);
if (v___x_2899_ == 0)
{
uint8_t v___x_2900_; 
lean_inc(v_a_2894_);
v___x_2900_ = l_Lean_Exception_isMaxRecDepth(v_a_2894_);
if (v___x_2900_ == 0)
{
lean_object* v_toCold_2901_; lean_object* v_options_2902_; uint8_t v_hasTrace_2903_; 
lean_del_object(v___x_2896_);
v_toCold_2901_ = lean_ctor_get(v___y_2859_, 0);
v_options_2902_ = lean_ctor_get(v_toCold_2901_, 2);
v_hasTrace_2903_ = lean_ctor_get_uint8(v_options_2902_, sizeof(void*)*1);
if (v_hasTrace_2903_ == 0)
{
lean_dec(v_a_2894_);
goto v___jp_2881_;
}
else
{
lean_object* v_inheritedTraceOptions_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; uint8_t v___x_2907_; 
v_inheritedTraceOptions_2904_ = lean_ctor_get(v_toCold_2901_, 11);
v___x_2905_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_2906_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_2907_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2904_, v_options_2902_, v___x_2906_);
if (v___x_2907_ == 0)
{
lean_dec(v_a_2894_);
goto v___jp_2881_;
}
else
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2908_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1);
v___x_2909_ = l_Lean_Exception_toMessageData(v_a_2894_);
v___x_2910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2908_);
lean_ctor_set(v___x_2910_, 1, v___x_2909_);
v___x_2911_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(v___x_2905_, v___x_2910_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2913_; 
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
lean_inc(v_a_2912_);
lean_dec_ref_known(v___x_2911_, 1);
v___x_2913_ = lean_apply_6(v___f_2853_, v_a_2912_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, lean_box(0));
v___y_2863_ = v___x_2913_;
goto v___jp_2862_;
}
else
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2921_; 
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec_ref(v___f_2853_);
v_a_2914_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2916_ = v___x_2911_;
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2911_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2919_; 
if (v_isShared_2917_ == 0)
{
v___x_2919_ = v___x_2916_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2914_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
}
}
}
else
{
lean_object* v___x_2923_; 
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec_ref(v___f_2853_);
if (v_isShared_2897_ == 0)
{
v___x_2923_ = v___x_2896_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_a_2894_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
else
{
lean_object* v___x_2926_; 
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec_ref(v___f_2853_);
if (v_isShared_2897_ == 0)
{
v___x_2926_ = v___x_2896_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2894_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
else
{
lean_object* v___x_2929_; 
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec_ref(v___f_2853_);
if (v_isShared_2897_ == 0)
{
v___x_2929_ = v___x_2896_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2894_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
v___jp_2862_:
{
if (lean_obj_tag(v___y_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2872_; 
v_a_2864_ = lean_ctor_get(v___y_2863_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___y_2863_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2866_ = v___y_2863_;
v_isShared_2867_ = v_isSharedCheck_2872_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___y_2863_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2872_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v_a_2868_; lean_object* v___x_2870_; 
v_a_2868_ = lean_ctor_get(v_a_2864_, 0);
lean_inc(v_a_2868_);
lean_dec(v_a_2864_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 0, v_a_2868_);
v___x_2870_ = v___x_2866_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2868_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
v_a_2873_ = lean_ctor_get(v___y_2863_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___y_2863_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___y_2863_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___y_2863_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
v___jp_2881_:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2882_ = lean_box(0);
v___x_2883_ = lean_apply_6(v___f_2853_, v___x_2882_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, lean_box(0));
v___y_2863_ = v___x_2883_;
goto v___jp_2862_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___boxed(lean_object* v___f_2932_, lean_object* v_term_2933_, lean_object* v___x_2934_, lean_object* v___x_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_){
_start:
{
lean_object* v_res_2941_; 
v_res_2941_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5(v___f_2932_, v_term_2933_, v___x_2934_, v___x_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_2942_, lean_object* v_vals_2943_, lean_object* v_i_2944_, lean_object* v_k_2945_){
_start:
{
lean_object* v___x_2946_; uint8_t v___x_2947_; 
v___x_2946_ = lean_array_get_size(v_keys_2942_);
v___x_2947_ = lean_nat_dec_lt(v_i_2944_, v___x_2946_);
if (v___x_2947_ == 0)
{
lean_object* v___x_2948_; 
lean_dec(v_i_2944_);
v___x_2948_ = lean_box(0);
return v___x_2948_;
}
else
{
lean_object* v_k_x27_2949_; uint8_t v___x_2950_; 
v_k_x27_2949_ = lean_array_fget_borrowed(v_keys_2942_, v_i_2944_);
v___x_2950_ = l_Lean_instBEqMVarId_beq(v_k_2945_, v_k_x27_2949_);
if (v___x_2950_ == 0)
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = lean_unsigned_to_nat(1u);
v___x_2952_ = lean_nat_add(v_i_2944_, v___x_2951_);
lean_dec(v_i_2944_);
v_i_2944_ = v___x_2952_;
goto _start;
}
else
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = lean_array_fget_borrowed(v_vals_2943_, v_i_2944_);
lean_dec(v_i_2944_);
lean_inc(v___x_2954_);
v___x_2955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2954_);
return v___x_2955_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_2956_, lean_object* v_vals_2957_, lean_object* v_i_2958_, lean_object* v_k_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(v_keys_2956_, v_vals_2957_, v_i_2958_, v_k_2959_);
lean_dec(v_k_2959_);
lean_dec_ref(v_vals_2957_);
lean_dec_ref(v_keys_2956_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(lean_object* v_x_2961_, size_t v_x_2962_, lean_object* v_x_2963_){
_start:
{
if (lean_obj_tag(v_x_2961_) == 0)
{
lean_object* v_es_2964_; lean_object* v___x_2965_; size_t v___x_2966_; size_t v___x_2967_; lean_object* v_j_2968_; lean_object* v___x_2969_; 
v_es_2964_ = lean_ctor_get(v_x_2961_, 0);
v___x_2965_ = lean_box(2);
v___x_2966_ = ((size_t)31ULL);
v___x_2967_ = lean_usize_land(v_x_2962_, v___x_2966_);
v_j_2968_ = lean_usize_to_nat(v___x_2967_);
v___x_2969_ = lean_array_get_borrowed(v___x_2965_, v_es_2964_, v_j_2968_);
lean_dec(v_j_2968_);
switch(lean_obj_tag(v___x_2969_))
{
case 0:
{
lean_object* v_key_2970_; lean_object* v_val_2971_; uint8_t v___x_2972_; 
v_key_2970_ = lean_ctor_get(v___x_2969_, 0);
v_val_2971_ = lean_ctor_get(v___x_2969_, 1);
v___x_2972_ = l_Lean_instBEqMVarId_beq(v_x_2963_, v_key_2970_);
if (v___x_2972_ == 0)
{
lean_object* v___x_2973_; 
v___x_2973_ = lean_box(0);
return v___x_2973_;
}
else
{
lean_object* v___x_2974_; 
lean_inc(v_val_2971_);
v___x_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2974_, 0, v_val_2971_);
return v___x_2974_;
}
}
case 1:
{
lean_object* v_node_2975_; size_t v___x_2976_; size_t v___x_2977_; 
v_node_2975_ = lean_ctor_get(v___x_2969_, 0);
v___x_2976_ = ((size_t)5ULL);
v___x_2977_ = lean_usize_shift_right(v_x_2962_, v___x_2976_);
v_x_2961_ = v_node_2975_;
v_x_2962_ = v___x_2977_;
goto _start;
}
default: 
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_box(0);
return v___x_2979_;
}
}
}
else
{
lean_object* v_ks_2980_; lean_object* v_vs_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v_ks_2980_ = lean_ctor_get(v_x_2961_, 0);
v_vs_2981_ = lean_ctor_get(v_x_2961_, 1);
v___x_2982_ = lean_unsigned_to_nat(0u);
v___x_2983_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(v_ks_2980_, v_vs_2981_, v___x_2982_, v_x_2963_);
return v___x_2983_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg___boxed(lean_object* v_x_2984_, lean_object* v_x_2985_, lean_object* v_x_2986_){
_start:
{
size_t v_x_12061__boxed_2987_; lean_object* v_res_2988_; 
v_x_12061__boxed_2987_ = lean_unbox_usize(v_x_2985_);
lean_dec(v_x_2985_);
v_res_2988_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(v_x_2984_, v_x_12061__boxed_2987_, v_x_2986_);
lean_dec(v_x_2986_);
lean_dec_ref(v_x_2984_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(lean_object* v_x_2989_, lean_object* v_x_2990_){
_start:
{
uint64_t v___x_2991_; size_t v___x_2992_; lean_object* v___x_2993_; 
v___x_2991_ = l_Lean_instHashableMVarId_hash(v_x_2990_);
v___x_2992_ = lean_uint64_to_usize(v___x_2991_);
v___x_2993_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(v_x_2989_, v___x_2992_, v_x_2990_);
return v___x_2993_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg___boxed(lean_object* v_x_2994_, lean_object* v_x_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(v_x_2994_, v_x_2995_);
lean_dec(v_x_2995_);
lean_dec_ref(v_x_2994_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal(lean_object* v_c_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v_mctx_3026_; lean_object* v_env_3027_; lean_object* v_opts_3028_; lean_object* v_namingCtx_3029_; lean_object* v_goal_3030_; lean_object* v_decls_3031_; lean_object* v___x_3032_; 
v_mctx_3026_ = lean_ctor_get(v_c_3022_, 3);
lean_inc_ref(v_mctx_3026_);
v_env_3027_ = lean_ctor_get(v_c_3022_, 2);
lean_inc_ref(v_env_3027_);
v_opts_3028_ = lean_ctor_get(v_c_3022_, 4);
lean_inc_ref(v_opts_3028_);
v_namingCtx_3029_ = lean_ctor_get(v_c_3022_, 5);
lean_inc_ref(v_namingCtx_3029_);
v_goal_3030_ = lean_ctor_get(v_c_3022_, 6);
lean_inc(v_goal_3030_);
lean_dec_ref(v_c_3022_);
v_decls_3031_ = lean_ctor_get(v_mctx_3026_, 5);
v___x_3032_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(v_decls_3031_, v_goal_3030_);
if (lean_obj_tag(v___x_3032_) == 1)
{
lean_object* v_val_3033_; lean_object* v_lctx_3034_; lean_object* v___f_3035_; lean_object* v___f_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___f_3041_; lean_object* v___x_3042_; uint8_t v___x_3043_; lean_object* v___x_3044_; lean_object* v_term_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___f_3048_; lean_object* v___x_3049_; 
v_val_3033_ = lean_ctor_get(v___x_3032_, 0);
lean_inc(v_val_3033_);
lean_dec_ref_known(v___x_3032_, 1);
v_lctx_3034_ = lean_ctor_get(v_val_3033_, 1);
lean_inc_ref(v_lctx_3034_);
lean_dec(v_val_3033_);
v___f_3035_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__0));
v___f_3036_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__1));
v___x_3037_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__3));
v___x_3038_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4));
v___x_3039_ = lean_box(0);
lean_inc(v_goal_3030_);
v___x_3040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3040_, 0, v_goal_3030_);
lean_ctor_set(v___x_3040_, 1, v___x_3039_);
v___f_3041_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___boxed), 11, 4);
lean_closure_set(v___f_3041_, 0, v___x_3040_);
lean_closure_set(v___f_3041_, 1, v___f_3035_);
lean_closure_set(v___f_3041_, 2, v___x_3038_);
lean_closure_set(v___f_3041_, 3, v___x_3037_);
v___x_3042_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___boxed), 10, 3);
lean_closure_set(v___x_3042_, 0, lean_box(0));
lean_closure_set(v___x_3042_, 1, v_goal_3030_);
lean_closure_set(v___x_3042_, 2, v___f_3041_);
v___x_3043_ = 1;
v___x_3044_ = lean_box(v___x_3043_);
v_term_3045_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4___boxed), 9, 2);
lean_closure_set(v_term_3045_, 0, v___x_3042_);
lean_closure_set(v_term_3045_, 1, v___x_3044_);
v___x_3046_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__6));
v___x_3047_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__7));
v___f_3048_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___boxed), 9, 4);
lean_closure_set(v___f_3048_, 0, v___f_3036_);
lean_closure_set(v___f_3048_, 1, v_term_3045_);
lean_closure_set(v___f_3048_, 2, v___x_3046_);
lean_closure_set(v___f_3048_, 3, v___x_3047_);
v___x_3049_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(v_env_3027_, v_mctx_3026_, v_lctx_3034_, v_opts_3028_, v_namingCtx_3029_, v___f_3048_, v_a_3023_, v_a_3024_);
return v___x_3049_;
}
else
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
lean_dec(v___x_3032_);
lean_dec(v_goal_3030_);
lean_dec_ref(v_namingCtx_3029_);
lean_dec_ref(v_opts_3028_);
lean_dec_ref(v_env_3027_);
lean_dec_ref(v_mctx_3026_);
v___x_3050_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0));
v___x_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3050_);
return v___x_3051_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___boxed(lean_object* v_c_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal(v_c_3052_, v_a_3053_, v_a_3054_);
lean_dec(v_a_3054_);
lean_dec_ref(v_a_3053_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0(lean_object* v_00_u03b2_3057_, lean_object* v_x_3058_, lean_object* v_x_3059_){
_start:
{
lean_object* v___x_3060_; 
v___x_3060_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(v_x_3058_, v_x_3059_);
return v___x_3060_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___boxed(lean_object* v_00_u03b2_3061_, lean_object* v_x_3062_, lean_object* v_x_3063_){
_start:
{
lean_object* v_res_3064_; 
v_res_3064_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0(v_00_u03b2_3061_, v_x_3062_, v_x_3063_);
lean_dec(v_x_3063_);
lean_dec_ref(v_x_3062_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1(lean_object* v_cls_3065_, lean_object* v_msg_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v___x_3076_; 
v___x_3076_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(v_cls_3065_, v_msg_3066_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___boxed(lean_object* v_cls_3077_, lean_object* v_msg_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_){
_start:
{
lean_object* v_res_3088_; 
v_res_3088_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1(v_cls_3077_, v_msg_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec_ref(v___y_3083_);
lean_dec(v___y_3082_);
lean_dec_ref(v___y_3081_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0(lean_object* v_00_u03b2_3089_, lean_object* v_x_3090_, size_t v_x_3091_, lean_object* v_x_3092_){
_start:
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(v_x_3090_, v_x_3091_, v_x_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3094_, lean_object* v_x_3095_, lean_object* v_x_3096_, lean_object* v_x_3097_){
_start:
{
size_t v_x_12318__boxed_3098_; lean_object* v_res_3099_; 
v_x_12318__boxed_3098_ = lean_unbox_usize(v_x_3096_);
lean_dec(v_x_3096_);
v_res_3099_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0(v_00_u03b2_3094_, v_x_3095_, v_x_12318__boxed_3098_, v_x_3097_);
lean_dec(v_x_3097_);
lean_dec_ref(v_x_3095_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_3100_, lean_object* v_keys_3101_, lean_object* v_vals_3102_, lean_object* v_heq_3103_, lean_object* v_i_3104_, lean_object* v_k_3105_){
_start:
{
lean_object* v___x_3106_; 
v___x_3106_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(v_keys_3101_, v_vals_3102_, v_i_3104_, v_k_3105_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3107_, lean_object* v_keys_3108_, lean_object* v_vals_3109_, lean_object* v_heq_3110_, lean_object* v_i_3111_, lean_object* v_k_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2(v_00_u03b2_3107_, v_keys_3108_, v_vals_3109_, v_heq_3110_, v_i_3111_, v_k_3112_);
lean_dec(v_k_3112_);
lean_dec_ref(v_vals_3109_);
lean_dec_ref(v_keys_3108_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0(uint8_t v___x_3116_, lean_object* v___x_3117_, lean_object* v_ref_3118_, lean_object* v_a_3119_, lean_object* v___x_3120_, lean_object* v___x_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
if (v___x_3116_ == 0)
{
lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; uint8_t v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3117_);
v___x_3126_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__0));
v___x_3127_ = lean_box(0);
v___x_3128_ = 4;
v___x_3129_ = l_Lean_MessageData_nil;
v___x_3130_ = l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(v_ref_3118_, v_a_3119_, v___x_3125_, v___x_3126_, v___x_3127_, v___x_3128_, v___x_3129_, v___y_3122_, v___y_3123_);
return v___x_3130_;
}
else
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3131_ = lean_array_get(v___x_3120_, v_a_3119_, v___x_3121_);
lean_dec_ref(v_a_3119_);
v___x_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3117_);
v___x_3133_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__1));
v___x_3134_ = lean_box(0);
v___x_3135_ = 4;
v___x_3136_ = l_Lean_MessageData_nil;
v___x_3137_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_ref_3118_, v___x_3131_, v___x_3132_, v___x_3133_, v___x_3134_, v___x_3135_, v___x_3136_, v___y_3122_, v___y_3123_);
return v___x_3137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___boxed(lean_object* v___x_3138_, lean_object* v___x_3139_, lean_object* v_ref_3140_, lean_object* v_a_3141_, lean_object* v___x_3142_, lean_object* v___x_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
uint8_t v___x_3604__boxed_3147_; lean_object* v_res_3148_; 
v___x_3604__boxed_3147_ = lean_unbox(v___x_3138_);
v_res_3148_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0(v___x_3604__boxed_3147_, v___x_3139_, v_ref_3140_, v_a_3141_, v___x_3142_, v___x_3143_, v___y_3144_, v___y_3145_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
lean_dec(v___x_3143_);
lean_dec_ref(v___x_3142_);
return v_res_3148_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0(uint8_t v___x_3149_, lean_object* v_x_3150_){
_start:
{
if (lean_obj_tag(v_x_3150_) == 1)
{
lean_object* v_pre_3151_; 
v_pre_3151_ = lean_ctor_get(v_x_3150_, 0);
if (lean_obj_tag(v_pre_3151_) == 0)
{
lean_object* v_str_3152_; lean_object* v___x_3153_; uint8_t v___x_3154_; 
v_str_3152_ = lean_ctor_get(v_x_3150_, 1);
v___x_3153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__1));
v___x_3154_ = lean_string_dec_eq(v_str_3152_, v___x_3153_);
return v___x_3154_;
}
else
{
return v___x_3149_;
}
}
else
{
return v___x_3149_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0___boxed(lean_object* v___x_3155_, lean_object* v_x_3156_){
_start:
{
uint8_t v___x_3657__boxed_3157_; uint8_t v_res_3158_; lean_object* v_r_3159_; 
v___x_3657__boxed_3157_ = lean_unbox(v___x_3155_);
v_res_3158_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0(v___x_3657__boxed_3157_, v_x_3156_);
lean_dec(v_x_3156_);
v_r_3159_ = lean_box(v_res_3158_);
return v_r_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0(lean_object* v_ref_3163_, lean_object* v_msgData_3164_, uint8_t v_severity_3165_, uint8_t v_isSilent_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
uint8_t v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; uint8_t v___y_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3236_; uint8_t v___y_3237_; lean_object* v___y_3238_; uint8_t v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3261_; uint8_t v___y_3262_; lean_object* v___y_3263_; uint8_t v___y_3264_; lean_object* v___y_3265_; uint8_t v___y_3269_; uint8_t v___x_3297_; uint8_t v___x_3298_; 
v___x_3297_ = 2;
v___x_3298_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3165_, v___x_3297_);
if (v___x_3298_ == 0)
{
goto v___jp_3286_;
}
else
{
uint8_t v___x_3299_; 
lean_inc_ref(v_msgData_3164_);
v___x_3299_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3164_);
if (v___x_3299_ == 0)
{
goto v___jp_3286_;
}
else
{
lean_object* v___x_3300_; lean_object* v___x_3301_; 
lean_dec_ref(v_msgData_3164_);
v___x_3300_ = lean_box(0);
v___x_3301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3300_);
return v___x_3301_;
}
}
v___jp_3170_:
{
lean_object* v___x_3179_; 
v___x_3179_ = l_Lean_Elab_Command_getScope___redArg(v___y_3178_);
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3180_; lean_object* v_currNamespace_3181_; lean_object* v___x_3182_; 
v_a_3180_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3180_);
lean_dec_ref_known(v___x_3179_, 1);
v_currNamespace_3181_ = lean_ctor_get(v_a_3180_, 2);
lean_inc(v_currNamespace_3181_);
lean_dec(v_a_3180_);
v___x_3182_ = l_Lean_Elab_Command_getScope___redArg(v___y_3178_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3218_; 
v_a_3183_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3185_ = v___x_3182_;
v_isShared_3186_ = v_isSharedCheck_3218_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3182_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3218_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v_openDecls_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v_env_3192_; lean_object* v_messages_3193_; lean_object* v_scopes_3194_; lean_object* v_usedQuotCtxts_3195_; lean_object* v_nextMacroScope_3196_; lean_object* v_maxRecDepth_3197_; lean_object* v_ngen_3198_; lean_object* v_auxDeclNGen_3199_; lean_object* v_infoState_3200_; lean_object* v_traceState_3201_; lean_object* v_snapshotTasks_3202_; lean_object* v_prevLinterStates_3203_; lean_object* v_codeQualityEntryTasks_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3217_; 
v_openDecls_3187_ = lean_ctor_get(v_a_3183_, 3);
lean_inc(v_openDecls_3187_);
lean_dec(v_a_3183_);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v_currNamespace_3181_);
lean_ctor_set(v___x_3188_, 1, v_openDecls_3187_);
v___x_3189_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3188_);
lean_ctor_set(v___x_3189_, 1, v___y_3172_);
lean_inc_ref(v___y_3175_);
lean_inc_ref(v___y_3177_);
v___x_3190_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3190_, 0, v___y_3177_);
lean_ctor_set(v___x_3190_, 1, v___y_3174_);
lean_ctor_set(v___x_3190_, 2, v___y_3173_);
lean_ctor_set(v___x_3190_, 3, v___y_3175_);
lean_ctor_set(v___x_3190_, 4, v___x_3189_);
lean_ctor_set_uint8(v___x_3190_, sizeof(void*)*5, v___y_3171_);
lean_ctor_set_uint8(v___x_3190_, sizeof(void*)*5 + 1, v___y_3176_);
lean_ctor_set_uint8(v___x_3190_, sizeof(void*)*5 + 2, v_isSilent_3166_);
v___x_3191_ = lean_st_ref_take(v___y_3178_);
v_env_3192_ = lean_ctor_get(v___x_3191_, 0);
v_messages_3193_ = lean_ctor_get(v___x_3191_, 1);
v_scopes_3194_ = lean_ctor_get(v___x_3191_, 2);
v_usedQuotCtxts_3195_ = lean_ctor_get(v___x_3191_, 3);
v_nextMacroScope_3196_ = lean_ctor_get(v___x_3191_, 4);
v_maxRecDepth_3197_ = lean_ctor_get(v___x_3191_, 5);
v_ngen_3198_ = lean_ctor_get(v___x_3191_, 6);
v_auxDeclNGen_3199_ = lean_ctor_get(v___x_3191_, 7);
v_infoState_3200_ = lean_ctor_get(v___x_3191_, 8);
v_traceState_3201_ = lean_ctor_get(v___x_3191_, 9);
v_snapshotTasks_3202_ = lean_ctor_get(v___x_3191_, 10);
v_prevLinterStates_3203_ = lean_ctor_get(v___x_3191_, 11);
v_codeQualityEntryTasks_3204_ = lean_ctor_get(v___x_3191_, 12);
v_isSharedCheck_3217_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3206_ = v___x_3191_;
v_isShared_3207_ = v_isSharedCheck_3217_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3204_);
lean_inc(v_prevLinterStates_3203_);
lean_inc(v_snapshotTasks_3202_);
lean_inc(v_traceState_3201_);
lean_inc(v_infoState_3200_);
lean_inc(v_auxDeclNGen_3199_);
lean_inc(v_ngen_3198_);
lean_inc(v_maxRecDepth_3197_);
lean_inc(v_nextMacroScope_3196_);
lean_inc(v_usedQuotCtxts_3195_);
lean_inc(v_scopes_3194_);
lean_inc(v_messages_3193_);
lean_inc(v_env_3192_);
lean_dec(v___x_3191_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3217_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3211_; 
v___x_3208_ = lean_box(0);
v___x_3209_ = l_Lean_MessageLog_add(v___x_3190_, v_messages_3193_);
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 1, v___x_3209_);
v___x_3211_ = v___x_3206_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_env_3192_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v___x_3209_);
lean_ctor_set(v_reuseFailAlloc_3216_, 2, v_scopes_3194_);
lean_ctor_set(v_reuseFailAlloc_3216_, 3, v_usedQuotCtxts_3195_);
lean_ctor_set(v_reuseFailAlloc_3216_, 4, v_nextMacroScope_3196_);
lean_ctor_set(v_reuseFailAlloc_3216_, 5, v_maxRecDepth_3197_);
lean_ctor_set(v_reuseFailAlloc_3216_, 6, v_ngen_3198_);
lean_ctor_set(v_reuseFailAlloc_3216_, 7, v_auxDeclNGen_3199_);
lean_ctor_set(v_reuseFailAlloc_3216_, 8, v_infoState_3200_);
lean_ctor_set(v_reuseFailAlloc_3216_, 9, v_traceState_3201_);
lean_ctor_set(v_reuseFailAlloc_3216_, 10, v_snapshotTasks_3202_);
lean_ctor_set(v_reuseFailAlloc_3216_, 11, v_prevLinterStates_3203_);
lean_ctor_set(v_reuseFailAlloc_3216_, 12, v_codeQualityEntryTasks_3204_);
v___x_3211_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
lean_object* v___x_3212_; lean_object* v___x_3214_; 
v___x_3212_ = lean_st_ref_put(v___y_3178_, v___x_3211_);
if (v_isShared_3186_ == 0)
{
lean_ctor_set(v___x_3185_, 0, v___x_3208_);
v___x_3214_ = v___x_3185_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3208_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
}
else
{
lean_object* v_a_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3226_; 
lean_dec(v_currNamespace_3181_);
lean_dec_ref(v___y_3174_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
v_a_3219_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3221_ = v___x_3182_;
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_a_3219_);
lean_dec(v___x_3182_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3224_; 
if (v_isShared_3222_ == 0)
{
v___x_3224_ = v___x_3221_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3219_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec_ref(v___y_3174_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
v_a_3227_ = lean_ctor_get(v___x_3179_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3179_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3179_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
v___jp_3235_:
{
lean_object* v_fileName_3241_; lean_object* v_fileMap_3242_; uint8_t v_suppressElabErrors_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v_a_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3259_; 
v_fileName_3241_ = lean_ctor_get(v___y_3167_, 0);
v_fileMap_3242_ = lean_ctor_get(v___y_3167_, 1);
v_suppressElabErrors_3243_ = lean_ctor_get_uint8(v___y_3167_, sizeof(void*)*10);
v___x_3244_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3164_);
v___x_3245_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__6___redArg(v___x_3244_, v___y_3168_);
v_a_3246_ = lean_ctor_get(v___x_3245_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3245_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3248_ = v___x_3245_;
v_isShared_3249_ = v_isSharedCheck_3259_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_a_3246_);
lean_dec(v___x_3245_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3259_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
lean_inc_ref_n(v_fileMap_3242_, 2);
v___x_3250_ = l_Lean_FileMap_toPosition(v_fileMap_3242_, v___y_3238_);
lean_dec(v___y_3238_);
v___x_3251_ = l_Lean_FileMap_toPosition(v_fileMap_3242_, v___y_3240_);
lean_dec(v___y_3240_);
v___x_3252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
v___x_3253_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
if (v_suppressElabErrors_3243_ == 0)
{
lean_del_object(v___x_3248_);
v___y_3171_ = v___y_3237_;
v___y_3172_ = v_a_3246_;
v___y_3173_ = v___x_3252_;
v___y_3174_ = v___x_3250_;
v___y_3175_ = v___x_3253_;
v___y_3176_ = v___y_3239_;
v___y_3177_ = v_fileName_3241_;
v___y_3178_ = v___y_3168_;
goto v___jp_3170_;
}
else
{
uint8_t v___x_3254_; 
lean_inc(v_a_3246_);
lean_inc_ref(v___y_3236_);
v___x_3254_ = l_Lean_MessageData_hasTag(v___y_3236_, v_a_3246_);
if (v___x_3254_ == 0)
{
lean_object* v___x_3255_; lean_object* v___x_3257_; 
lean_dec_ref_known(v___x_3252_, 1);
lean_dec_ref(v___x_3250_);
lean_dec(v_a_3246_);
v___x_3255_ = lean_box(0);
if (v_isShared_3249_ == 0)
{
lean_ctor_set(v___x_3248_, 0, v___x_3255_);
v___x_3257_ = v___x_3248_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v___x_3255_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
else
{
lean_del_object(v___x_3248_);
v___y_3171_ = v___y_3237_;
v___y_3172_ = v_a_3246_;
v___y_3173_ = v___x_3252_;
v___y_3174_ = v___x_3250_;
v___y_3175_ = v___x_3253_;
v___y_3176_ = v___y_3239_;
v___y_3177_ = v_fileName_3241_;
v___y_3178_ = v___y_3168_;
goto v___jp_3170_;
}
}
}
}
v___jp_3260_:
{
lean_object* v___x_3266_; 
v___x_3266_ = l_Lean_Syntax_getTailPos_x3f(v___y_3261_, v___y_3262_);
lean_dec(v___y_3261_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_inc(v___y_3265_);
v___y_3236_ = v___y_3263_;
v___y_3237_ = v___y_3262_;
v___y_3238_ = v___y_3265_;
v___y_3239_ = v___y_3264_;
v___y_3240_ = v___y_3265_;
goto v___jp_3235_;
}
else
{
lean_object* v_val_3267_; 
v_val_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_val_3267_);
lean_dec_ref_known(v___x_3266_, 1);
v___y_3236_ = v___y_3263_;
v___y_3237_ = v___y_3262_;
v___y_3238_ = v___y_3265_;
v___y_3239_ = v___y_3264_;
v___y_3240_ = v_val_3267_;
goto v___jp_3235_;
}
}
v___jp_3268_:
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lean_Elab_Command_getRef___redArg(v___y_3167_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v_ref_3272_; uint8_t v___x_3273_; lean_object* v___f_3274_; lean_object* v___x_3275_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v_ref_3272_ = l_Lean_replaceRef(v_ref_3163_, v_a_3271_);
lean_dec(v_a_3271_);
v___x_3273_ = 0;
v___f_3274_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___closed__0));
v___x_3275_ = l_Lean_Syntax_getPos_x3f(v_ref_3272_, v___x_3273_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v___x_3276_; 
v___x_3276_ = lean_unsigned_to_nat(0u);
v___y_3261_ = v_ref_3272_;
v___y_3262_ = v___x_3273_;
v___y_3263_ = v___f_3274_;
v___y_3264_ = v___y_3269_;
v___y_3265_ = v___x_3276_;
goto v___jp_3260_;
}
else
{
lean_object* v_val_3277_; 
v_val_3277_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_val_3277_);
lean_dec_ref_known(v___x_3275_, 1);
v___y_3261_ = v_ref_3272_;
v___y_3262_ = v___x_3273_;
v___y_3263_ = v___f_3274_;
v___y_3264_ = v___y_3269_;
v___y_3265_ = v_val_3277_;
goto v___jp_3260_;
}
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
lean_dec_ref(v_msgData_3164_);
v_a_3278_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_3270_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_3270_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
v___jp_3286_:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v_scopes_3289_; lean_object* v___x_3290_; lean_object* v_opts_3291_; uint8_t v___x_3292_; uint8_t v___x_3293_; 
v___x_3287_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3288_ = lean_st_ref_get(v___y_3168_);
v_scopes_3289_ = lean_ctor_get(v___x_3288_, 2);
lean_inc(v_scopes_3289_);
lean_dec(v___x_3288_);
v___x_3290_ = l_List_head_x21___redArg(v___x_3287_, v_scopes_3289_);
lean_dec(v_scopes_3289_);
v_opts_3291_ = lean_ctor_get(v___x_3290_, 1);
lean_inc_ref(v_opts_3291_);
lean_dec(v___x_3290_);
v___x_3292_ = 1;
v___x_3293_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3165_, v___x_3292_);
if (v___x_3293_ == 0)
{
lean_dec_ref(v_opts_3291_);
v___y_3269_ = v_severity_3165_;
goto v___jp_3268_;
}
else
{
lean_object* v___x_3294_; uint8_t v___x_3295_; 
v___x_3294_ = l_Lean_warningAsError;
v___x_3295_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_3291_, v___x_3294_);
lean_dec_ref(v_opts_3291_);
if (v___x_3295_ == 0)
{
v___y_3269_ = v_severity_3165_;
goto v___jp_3268_;
}
else
{
uint8_t v___x_3296_; 
v___x_3296_ = 2;
v___y_3269_ = v___x_3296_;
goto v___jp_3268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___boxed(lean_object* v_ref_3302_, lean_object* v_msgData_3303_, lean_object* v_severity_3304_, lean_object* v_isSilent_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_){
_start:
{
uint8_t v_severity_boxed_3309_; uint8_t v_isSilent_boxed_3310_; lean_object* v_res_3311_; 
v_severity_boxed_3309_ = lean_unbox(v_severity_3304_);
v_isSilent_boxed_3310_ = lean_unbox(v_isSilent_3305_);
v_res_3311_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0(v_ref_3302_, v_msgData_3303_, v_severity_boxed_3309_, v_isSilent_boxed_3310_, v___y_3306_, v___y_3307_);
lean_dec(v___y_3307_);
lean_dec_ref(v___y_3306_);
lean_dec(v_ref_3302_);
return v_res_3311_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0(lean_object* v_ref_3312_, lean_object* v_msgData_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_){
_start:
{
uint8_t v___x_3317_; uint8_t v___x_3318_; lean_object* v___x_3319_; 
v___x_3317_ = 0;
v___x_3318_ = 0;
v___x_3319_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0(v_ref_3312_, v_msgData_3313_, v___x_3317_, v___x_3318_, v___y_3314_, v___y_3315_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0___boxed(lean_object* v_ref_3320_, lean_object* v_msgData_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_){
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0(v_ref_3320_, v_msgData_3321_, v___y_3322_, v___y_3323_);
lean_dec(v___y_3323_);
lean_dec_ref(v___y_3322_);
lean_dec(v_ref_3320_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0(lean_object* v___x_3327_, lean_object* v_x_3328_){
_start:
{
lean_object* v___x_3329_; lean_object* v___x_3330_; 
v___x_3329_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___closed__0));
v___x_3330_ = lean_string_append(v___x_3329_, v___x_3327_);
return v___x_3330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___boxed(lean_object* v___x_3331_, lean_object* v_x_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0(v___x_3331_, v_x_3332_);
lean_dec_ref(v_x_3332_);
lean_dec_ref(v___x_3331_);
return v_res_3333_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__0));
v___x_3336_ = l_Lean_stringToMessageData(v___x_3335_);
return v___x_3336_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3338_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__2));
v___x_3339_ = l_Lean_stringToMessageData(v___x_3338_);
return v___x_3339_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5(void){
_start:
{
lean_object* v___x_3341_; lean_object* v___x_3342_; 
v___x_3341_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__4));
v___x_3342_ = l_Lean_stringToMessageData(v___x_3341_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1(lean_object* v___x_3343_, uint8_t v___x_3344_, lean_object* v___x_3345_, lean_object* v_insertPos_3346_, lean_object* v_cmdLine_3347_, lean_object* v_ref_3348_, size_t v_sz_3349_, size_t v_i_3350_, lean_object* v_bs_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_){
_start:
{
uint8_t v___x_3355_; 
v___x_3355_ = lean_usize_dec_lt(v_i_3350_, v_sz_3349_);
if (v___x_3355_ == 0)
{
lean_object* v___x_3356_; 
lean_dec_ref(v___x_3345_);
lean_dec_ref(v___x_3343_);
v___x_3356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3356_, 0, v_bs_3351_);
return v___x_3356_;
}
else
{
lean_object* v_v_3357_; lean_object* v___x_3358_; lean_object* v_bs_x27_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
v_v_3357_ = lean_array_uget(v_bs_3351_, v_i_3350_);
v___x_3358_ = lean_unsigned_to_nat(0u);
v_bs_x27_3359_ = lean_array_uset(v_bs_3351_, v_i_3350_, v___x_3358_);
lean_inc(v_v_3357_);
v___x_3360_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppTactic___boxed), 4, 1);
lean_closure_set(v___x_3360_, 0, v_v_3357_);
v___x_3361_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3360_, v___y_3352_, v___y_3353_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v_a_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___f_3365_; lean_object* v___x_3366_; 
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
lean_inc(v_a_3362_);
lean_dec_ref_known(v___x_3361_, 1);
v___x_3363_ = l_Std_Format_defWidth;
v___x_3364_ = l_Std_Format_pretty(v_a_3362_, v___x_3363_, v___x_3358_, v___x_3358_);
lean_inc_ref(v___x_3364_);
v___f_3365_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3365_, 0, v___x_3364_);
lean_inc_ref(v___x_3343_);
v___x_3366_ = lean_string_append(v___x_3343_, v___x_3364_);
lean_dec_ref(v___x_3364_);
if (v___x_3344_ == 0)
{
goto v___jp_3367_;
}
else
{
lean_object* v___x_3378_; lean_object* v_line_3379_; lean_object* v_column_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3415_; 
lean_inc_ref(v___x_3345_);
v___x_3378_ = l_Lean_FileMap_toPosition(v___x_3345_, v_insertPos_3346_);
v_line_3379_ = lean_ctor_get(v___x_3378_, 0);
v_column_3380_ = lean_ctor_get(v___x_3378_, 1);
v_isSharedCheck_3415_ = !lean_is_exclusive(v___x_3378_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3382_ = v___x_3378_;
v_isShared_3383_ = v_isSharedCheck_3415_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_column_3380_);
lean_inc(v_line_3379_);
lean_dec(v___x_3378_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3415_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3392_; 
v___x_3384_ = lean_nat_sub(v_line_3379_, v_cmdLine_3347_);
lean_dec(v_line_3379_);
v___x_3385_ = lean_unsigned_to_nat(1u);
v___x_3386_ = lean_nat_add(v___x_3384_, v___x_3385_);
lean_dec(v___x_3384_);
v___x_3387_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1);
lean_inc_ref(v___x_3366_);
v___x_3388_ = l_String_quote(v___x_3366_);
v___x_3389_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3388_);
v___x_3390_ = l_Lean_MessageData_ofFormat(v___x_3389_);
if (v_isShared_3383_ == 0)
{
lean_ctor_set_tag(v___x_3382_, 7);
lean_ctor_set(v___x_3382_, 1, v___x_3390_);
lean_ctor_set(v___x_3382_, 0, v___x_3387_);
v___x_3392_ = v___x_3382_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v___x_3387_);
lean_ctor_set(v_reuseFailAlloc_3414_, 1, v___x_3390_);
v___x_3392_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3393_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3);
v___x_3394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3392_);
lean_ctor_set(v___x_3394_, 1, v___x_3393_);
v___x_3395_ = l_Nat_reprFast(v___x_3386_);
v___x_3396_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
v___x_3397_ = l_Lean_MessageData_ofFormat(v___x_3396_);
v___x_3398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3394_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
v___x_3399_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5);
v___x_3400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3398_);
lean_ctor_set(v___x_3400_, 1, v___x_3399_);
v___x_3401_ = l_Nat_reprFast(v_column_3380_);
v___x_3402_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
v___x_3403_ = l_Lean_MessageData_ofFormat(v___x_3402_);
v___x_3404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3400_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
v___x_3405_ = l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0(v_ref_3348_, v___x_3404_, v___y_3352_, v___y_3353_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_dec_ref_known(v___x_3405_, 1);
goto v___jp_3367_;
}
else
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
lean_dec_ref(v___x_3366_);
lean_dec_ref(v___f_3365_);
lean_dec_ref(v_bs_x27_3359_);
lean_dec(v_v_3357_);
lean_dec_ref(v___x_3345_);
lean_dec_ref(v___x_3343_);
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3405_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3405_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
}
}
v___jp_3367_:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; size_t v___x_3374_; size_t v___x_3375_; lean_object* v___x_3376_; 
v___x_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3366_);
v___x_3369_ = lean_box(0);
v___x_3370_ = l_Lean_MessageData_ofSyntax(v_v_3357_);
v___x_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3370_);
v___x_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3372_, 0, v___f_3365_);
v___x_3373_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3368_);
lean_ctor_set(v___x_3373_, 1, v___x_3369_);
lean_ctor_set(v___x_3373_, 2, v___x_3369_);
lean_ctor_set(v___x_3373_, 3, v___x_3369_);
lean_ctor_set(v___x_3373_, 4, v___x_3371_);
lean_ctor_set(v___x_3373_, 5, v___x_3372_);
v___x_3374_ = ((size_t)1ULL);
v___x_3375_ = lean_usize_add(v_i_3350_, v___x_3374_);
v___x_3376_ = lean_array_uset(v_bs_x27_3359_, v_i_3350_, v___x_3373_);
v_i_3350_ = v___x_3375_;
v_bs_3351_ = v___x_3376_;
goto _start;
}
}
else
{
lean_object* v_a_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3423_; 
lean_dec_ref(v_bs_x27_3359_);
lean_dec(v_v_3357_);
lean_dec_ref(v___x_3345_);
lean_dec_ref(v___x_3343_);
v_a_3416_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3418_ = v___x_3361_;
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_a_3416_);
lean_dec(v___x_3361_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_a_3416_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___boxed(lean_object* v___x_3424_, lean_object* v___x_3425_, lean_object* v___x_3426_, lean_object* v_insertPos_3427_, lean_object* v_cmdLine_3428_, lean_object* v_ref_3429_, lean_object* v_sz_3430_, lean_object* v_i_3431_, lean_object* v_bs_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_){
_start:
{
uint8_t v___x_3964__boxed_3436_; size_t v_sz_boxed_3437_; size_t v_i_boxed_3438_; lean_object* v_res_3439_; 
v___x_3964__boxed_3436_ = lean_unbox(v___x_3425_);
v_sz_boxed_3437_ = lean_unbox_usize(v_sz_3430_);
lean_dec(v_sz_3430_);
v_i_boxed_3438_ = lean_unbox_usize(v_i_3431_);
lean_dec(v_i_3431_);
v_res_3439_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1(v___x_3424_, v___x_3964__boxed_3436_, v___x_3426_, v_insertPos_3427_, v_cmdLine_3428_, v_ref_3429_, v_sz_boxed_3437_, v_i_boxed_3438_, v_bs_3432_, v___y_3433_, v___y_3434_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec(v_ref_3429_);
lean_dec(v_cmdLine_3428_);
lean_dec(v_insertPos_3427_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions(lean_object* v_tacticSeq_3440_, lean_object* v_ref_3441_, lean_object* v_insertPos_3442_, lean_object* v_suggs_3443_, lean_object* v_cmdLine_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_){
_start:
{
lean_object* v___x_3448_; lean_object* v___x_3449_; uint8_t v___x_3450_; 
v___x_3448_ = lean_array_get_size(v_suggs_3443_);
v___x_3449_ = lean_unsigned_to_nat(0u);
v___x_3450_ = lean_nat_dec_eq(v___x_3448_, v___x_3449_);
if (v___x_3450_ == 0)
{
lean_object* v_fileMap_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v_scopes_3457_; lean_object* v___x_3458_; lean_object* v_opts_3459_; lean_object* v___x_3460_; uint8_t v___x_3461_; size_t v_sz_3462_; size_t v___x_3463_; lean_object* v___x_3464_; 
v_fileMap_3451_ = lean_ctor_get(v_a_3445_, 1);
v___x_3452_ = l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default;
lean_inc_ref_n(v_fileMap_3451_, 2);
v___x_3453_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep(v_tacticSeq_3440_, v_fileMap_3451_);
lean_inc(v_insertPos_3442_);
v___x_3454_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx(v_insertPos_3442_);
v___x_3455_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3456_ = lean_st_ref_get(v_a_3446_);
v_scopes_3457_ = lean_ctor_get(v___x_3456_, 2);
lean_inc(v_scopes_3457_);
lean_dec(v___x_3456_);
v___x_3458_ = l_List_head_x21___redArg(v___x_3455_, v_scopes_3457_);
lean_dec(v_scopes_3457_);
v_opts_3459_ = lean_ctor_get(v___x_3458_, 1);
lean_inc_ref(v_opts_3459_);
lean_dec(v___x_3458_);
v___x_3460_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_debug_autoTry_showEdits;
v___x_3461_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_3459_, v___x_3460_);
lean_dec_ref(v_opts_3459_);
v_sz_3462_ = lean_array_size(v_suggs_3443_);
v___x_3463_ = ((size_t)0ULL);
v___x_3464_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1(v___x_3453_, v___x_3461_, v_fileMap_3451_, v_insertPos_3442_, v_cmdLine_3444_, v_ref_3441_, v_sz_3462_, v___x_3463_, v_suggs_3443_, v_a_3445_, v_a_3446_);
lean_dec(v_insertPos_3442_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; uint8_t v___x_3468_; lean_object* v___x_3469_; lean_object* v___y_3470_; lean_object* v___x_3471_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v___x_3466_ = lean_array_get_size(v_a_3465_);
v___x_3467_ = lean_unsigned_to_nat(1u);
v___x_3468_ = lean_nat_dec_eq(v___x_3466_, v___x_3467_);
v___x_3469_ = lean_box(v___x_3468_);
v___y_3470_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___boxed), 9, 6);
lean_closure_set(v___y_3470_, 0, v___x_3469_);
lean_closure_set(v___y_3470_, 1, v___x_3454_);
lean_closure_set(v___y_3470_, 2, v_ref_3441_);
lean_closure_set(v___y_3470_, 3, v_a_3465_);
lean_closure_set(v___y_3470_, 4, v___x_3452_);
lean_closure_set(v___y_3470_, 5, v___x_3449_);
v___x_3471_ = l_Lean_Elab_Command_liftCoreM___redArg(v___y_3470_, v_a_3445_, v_a_3446_);
return v___x_3471_;
}
else
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3479_; 
lean_dec(v___x_3454_);
lean_dec(v_ref_3441_);
v_a_3472_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3479_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3479_ == 0)
{
v___x_3474_ = v___x_3464_;
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3464_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3477_; 
if (v_isShared_3475_ == 0)
{
v___x_3477_ = v___x_3474_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v_a_3472_);
v___x_3477_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
return v___x_3477_;
}
}
}
}
else
{
lean_object* v___x_3480_; lean_object* v___x_3481_; 
lean_dec_ref(v_suggs_3443_);
lean_dec(v_insertPos_3442_);
lean_dec(v_ref_3441_);
v___x_3480_ = lean_box(0);
v___x_3481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3481_, 0, v___x_3480_);
return v___x_3481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___boxed(lean_object* v_tacticSeq_3482_, lean_object* v_ref_3483_, lean_object* v_insertPos_3484_, lean_object* v_suggs_3485_, lean_object* v_cmdLine_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions(v_tacticSeq_3482_, v_ref_3483_, v_insertPos_3484_, v_suggs_3485_, v_cmdLine_3486_, v_a_3487_, v_a_3488_);
lean_dec(v_a_3488_);
lean_dec_ref(v_a_3487_);
lean_dec(v_cmdLine_3486_);
lean_dec(v_tacticSeq_3482_);
return v_res_3490_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0(lean_object* v_x_3491_){
_start:
{
uint8_t v___x_3492_; 
v___x_3492_ = 0;
return v___x_3492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0___boxed(lean_object* v_x_3493_){
_start:
{
uint8_t v_res_3494_; lean_object* v_r_3495_; 
v_res_3494_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0(v_x_3493_);
lean_dec(v_x_3493_);
v_r_3495_ = lean_box(v_res_3494_);
return v_r_3495_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3506_; 
v___x_3506_ = l_Array_mkArray0___redArg();
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1(lean_object* v___f_3516_, lean_object* v_ref_3517_, lean_object* v_goal_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_){
_start:
{
lean_object* v_toCold_3527_; lean_object* v_currRecDepth_3528_; lean_object* v_ref_3529_; uint16_t v_optionFlags_3530_; uint8_t v_suppressElabErrors_3531_; uint8_t v_checkDeprecated_3532_; uint8_t v_isRecordingDeps_3533_; uint8_t v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; uint8_t v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v_ref_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v_toCold_3527_ = lean_ctor_get(v___y_3521_, 0);
v_currRecDepth_3528_ = lean_ctor_get(v___y_3521_, 1);
v_ref_3529_ = lean_ctor_get(v___y_3521_, 2);
v_optionFlags_3530_ = lean_ctor_get_uint16(v___y_3521_, sizeof(void*)*3);
v_suppressElabErrors_3531_ = lean_ctor_get_uint8(v___y_3521_, sizeof(void*)*3 + 2);
v_checkDeprecated_3532_ = lean_ctor_get_uint8(v___y_3521_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3533_ = lean_ctor_get_uint8(v___y_3521_, sizeof(void*)*3 + 4);
v___x_3534_ = 0;
v___x_3535_ = l_Lean_SourceInfo_fromRef(v_ref_3529_, v___x_3534_);
v___x_3536_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__0));
lean_inc_n(v___x_3535_, 3);
v___x_3537_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3535_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2));
v___x_3539_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4));
v___x_3540_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5);
v___x_3541_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3535_);
lean_ctor_set(v___x_3541_, 1, v___x_3539_);
lean_ctor_set(v___x_3541_, 2, v___x_3540_);
v___x_3542_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7));
v___x_3543_ = l_Lean_Syntax_node1(v___x_3535_, v___x_3542_, v___x_3541_);
v___x_3544_ = l_Lean_Syntax_node2(v___x_3535_, v___x_3538_, v___x_3537_, v___x_3543_);
v___x_3545_ = lean_box(0);
v___x_3546_ = lean_box(0);
v___x_3547_ = 1;
v___x_3548_ = lean_box(1);
v___x_3549_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5));
v___x_3550_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_3550_, 0, v___x_3545_);
lean_ctor_set(v___x_3550_, 1, v___x_3546_);
lean_ctor_set(v___x_3550_, 2, v___x_3545_);
lean_ctor_set(v___x_3550_, 3, v___f_3516_);
lean_ctor_set(v___x_3550_, 4, v___x_3548_);
lean_ctor_set(v___x_3550_, 5, v___x_3548_);
lean_ctor_set(v___x_3550_, 6, v___x_3545_);
lean_ctor_set(v___x_3550_, 7, v___x_3549_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8, v___x_3547_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 1, v___x_3547_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 2, v___x_3547_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 3, v___x_3547_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 4, v___x_3534_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 5, v___x_3534_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 6, v___x_3534_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 7, v___x_3534_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 8, v___x_3547_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*8 + 9, v___x_3534_);
v___x_3551_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__8));
v___x_3552_ = lean_box(0);
v_ref_3553_ = l_Lean_replaceRef(v_ref_3517_, v_ref_3529_);
lean_inc(v_currRecDepth_3528_);
lean_inc_ref(v_toCold_3527_);
v___x_3554_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3554_, 0, v_toCold_3527_);
lean_ctor_set(v___x_3554_, 1, v_currRecDepth_3528_);
lean_ctor_set(v___x_3554_, 2, v_ref_3553_);
lean_ctor_set_uint16(v___x_3554_, sizeof(void*)*3, v_optionFlags_3530_);
lean_ctor_set_uint8(v___x_3554_, sizeof(void*)*3 + 2, v_suppressElabErrors_3531_);
lean_ctor_set_uint8(v___x_3554_, sizeof(void*)*3 + 3, v_checkDeprecated_3532_);
lean_ctor_set_uint8(v___x_3554_, sizeof(void*)*3 + 4, v_isRecordingDeps_3533_);
v___x_3555_ = l_Lean_Elab_runTactic(v_goal_3518_, v___x_3544_, v___x_3550_, v___x_3551_, v___y_3519_, v___y_3520_, v___x_3554_, v___y_3522_);
lean_dec_ref_known(v___x_3554_, 3);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3562_; 
v_isSharedCheck_3562_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3562_ == 0)
{
lean_object* v_unused_3563_; 
v_unused_3563_ = lean_ctor_get(v___x_3555_, 0);
lean_dec(v_unused_3563_);
v___x_3557_ = v___x_3555_;
v_isShared_3558_ = v_isSharedCheck_3562_;
goto v_resetjp_3556_;
}
else
{
lean_dec(v___x_3555_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3562_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3560_; 
if (v_isShared_3558_ == 0)
{
lean_ctor_set(v___x_3557_, 0, v___x_3552_);
v___x_3560_ = v___x_3557_;
goto v_reusejp_3559_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v___x_3552_);
v___x_3560_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3559_;
}
v_reusejp_3559_:
{
return v___x_3560_;
}
}
}
else
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3584_; 
v_a_3564_ = lean_ctor_get(v___x_3555_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3566_ = v___x_3555_;
v_isShared_3567_ = v_isSharedCheck_3584_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3555_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3584_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
lean_inc(v_a_3564_);
if (v_isShared_3567_ == 0)
{
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3564_);
v___x_3569_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
uint8_t v___x_3570_; 
v___x_3570_ = l_Lean_Exception_isInterrupt(v_a_3564_);
if (v___x_3570_ == 0)
{
uint8_t v___x_3571_; 
lean_inc(v_a_3564_);
v___x_3571_ = l_Lean_Exception_isRuntime(v_a_3564_);
if (v___x_3571_ == 0)
{
uint8_t v___x_3572_; 
lean_inc(v_a_3564_);
v___x_3572_ = l_Lean_Exception_isMaxRecDepth(v_a_3564_);
if (v___x_3572_ == 0)
{
lean_object* v_options_3573_; uint8_t v_hasTrace_3574_; 
lean_dec_ref(v___x_3569_);
v_options_3573_ = lean_ctor_get(v_toCold_3527_, 2);
v_hasTrace_3574_ = lean_ctor_get_uint8(v_options_3573_, sizeof(void*)*1);
if (v_hasTrace_3574_ == 0)
{
lean_dec(v_a_3564_);
goto v___jp_3524_;
}
else
{
lean_object* v_inheritedTraceOptions_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; uint8_t v___x_3578_; 
v_inheritedTraceOptions_3575_ = lean_ctor_get(v_toCold_3527_, 11);
v___x_3576_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_3577_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_3578_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3575_, v_options_3573_, v___x_3577_);
if (v___x_3578_ == 0)
{
lean_dec(v_a_3564_);
goto v___jp_3524_;
}
else
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3579_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1);
v___x_3580_ = l_Lean_Exception_toMessageData(v_a_3564_);
v___x_3581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3579_);
lean_ctor_set(v___x_3581_, 1, v___x_3580_);
v___x_3582_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(v___x_3576_, v___x_3581_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_);
return v___x_3582_;
}
}
}
else
{
lean_dec(v_a_3564_);
return v___x_3569_;
}
}
else
{
lean_dec(v_a_3564_);
return v___x_3569_;
}
}
else
{
lean_dec(v_a_3564_);
return v___x_3569_;
}
}
}
}
v___jp_3524_:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = lean_box(0);
v___x_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3525_);
return v___x_3526_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___boxed(lean_object* v___f_3585_, lean_object* v_ref_3586_, lean_object* v_goal_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1(v___f_3585_, v_ref_3586_, v_goal_3587_, v___y_3588_, v___y_3589_, v___y_3590_, v___y_3591_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec(v___y_3589_);
lean_dec_ref(v___y_3588_);
lean_dec(v_ref_3586_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal(lean_object* v_c_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_){
_start:
{
lean_object* v_mctx_3599_; lean_object* v_ref_3600_; lean_object* v_env_3601_; lean_object* v_opts_3602_; lean_object* v_namingCtx_3603_; lean_object* v_goal_3604_; lean_object* v_decls_3605_; lean_object* v___x_3606_; 
v_mctx_3599_ = lean_ctor_get(v_c_3595_, 3);
lean_inc_ref(v_mctx_3599_);
v_ref_3600_ = lean_ctor_get(v_c_3595_, 1);
lean_inc(v_ref_3600_);
v_env_3601_ = lean_ctor_get(v_c_3595_, 2);
lean_inc_ref(v_env_3601_);
v_opts_3602_ = lean_ctor_get(v_c_3595_, 4);
lean_inc_ref(v_opts_3602_);
v_namingCtx_3603_ = lean_ctor_get(v_c_3595_, 5);
lean_inc_ref(v_namingCtx_3603_);
v_goal_3604_ = lean_ctor_get(v_c_3595_, 6);
lean_inc(v_goal_3604_);
lean_dec_ref(v_c_3595_);
v_decls_3605_ = lean_ctor_get(v_mctx_3599_, 5);
v___x_3606_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(v_decls_3605_, v_goal_3604_);
if (lean_obj_tag(v___x_3606_) == 1)
{
lean_object* v_val_3607_; lean_object* v_lctx_3608_; lean_object* v___f_3609_; lean_object* v___f_3610_; lean_object* v___x_3611_; 
v_val_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_val_3607_);
lean_dec_ref_known(v___x_3606_, 1);
v_lctx_3608_ = lean_ctor_get(v_val_3607_, 1);
lean_inc_ref(v_lctx_3608_);
lean_dec(v_val_3607_);
v___f_3609_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___closed__0));
v___f_3610_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___boxed), 8, 3);
lean_closure_set(v___f_3610_, 0, v___f_3609_);
lean_closure_set(v___f_3610_, 1, v_ref_3600_);
lean_closure_set(v___f_3610_, 2, v_goal_3604_);
v___x_3611_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(v_env_3601_, v_mctx_3599_, v_lctx_3608_, v_opts_3602_, v_namingCtx_3603_, v___f_3610_, v_a_3596_, v_a_3597_);
return v___x_3611_;
}
else
{
lean_object* v___x_3612_; lean_object* v___x_3613_; 
lean_dec(v___x_3606_);
lean_dec(v_goal_3604_);
lean_dec_ref(v_namingCtx_3603_);
lean_dec_ref(v_opts_3602_);
lean_dec_ref(v_env_3601_);
lean_dec(v_ref_3600_);
lean_dec_ref(v_mctx_3599_);
v___x_3612_ = lean_box(0);
v___x_3613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3612_);
return v___x_3613_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___boxed(lean_object* v_c_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_){
_start:
{
lean_object* v_res_3618_; 
v_res_3618_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal(v_c_3614_, v_a_3615_, v_a_3616_);
lean_dec(v_a_3616_);
lean_dec_ref(v_a_3615_);
return v_res_3618_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(lean_object* v___x_3619_, lean_object* v_val_3620_, lean_object* v_as_3621_, size_t v_i_3622_, size_t v_stop_3623_){
_start:
{
uint8_t v___x_3628_; 
v___x_3628_ = lean_usize_dec_eq(v_i_3622_, v_stop_3623_);
if (v___x_3628_ == 0)
{
lean_object* v___x_3629_; lean_object* v_pos_3630_; uint8_t v_severity_3631_; lean_object* v_data_3632_; lean_object* v___f_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; uint8_t v___x_3636_; uint8_t v___y_3638_; 
v___x_3629_ = lean_array_uget_borrowed(v_as_3621_, v_i_3622_);
v_pos_3630_ = lean_ctor_get(v___x_3629_, 1);
v_severity_3631_ = lean_ctor_get_uint8(v___x_3629_, sizeof(void*)*5 + 1);
v_data_3632_ = lean_ctor_get(v___x_3629_, 4);
v___f_3633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__0));
lean_inc_ref(v_pos_3630_);
v___x_3634_ = l_Lean_FileMap_ofPosition(v___x_3619_, v_pos_3630_);
v___x_3635_ = 1;
v___x_3636_ = l_Lean_Syntax_Range_contains(v_val_3620_, v___x_3634_, v___x_3635_);
lean_dec(v___x_3634_);
if (v_severity_3631_ == 2)
{
v___y_3638_ = v___x_3635_;
goto v___jp_3637_;
}
else
{
v___y_3638_ = v___x_3628_;
goto v___jp_3637_;
}
v___jp_3637_:
{
if (v___x_3636_ == 0)
{
goto v___jp_3624_;
}
else
{
if (v___y_3638_ == 0)
{
goto v___jp_3624_;
}
else
{
uint8_t v___x_3639_; 
lean_inc(v_data_3632_);
v___x_3639_ = l_Lean_MessageData_hasTag(v___f_3633_, v_data_3632_);
if (v___x_3639_ == 0)
{
return v___y_3638_;
}
else
{
goto v___jp_3624_;
}
}
}
}
}
else
{
uint8_t v___x_3640_; 
v___x_3640_ = 0;
return v___x_3640_;
}
v___jp_3624_:
{
size_t v___x_3625_; size_t v___x_3626_; 
v___x_3625_ = ((size_t)1ULL);
v___x_3626_ = lean_usize_add(v_i_3622_, v___x_3625_);
v_i_3622_ = v___x_3626_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1___boxed(lean_object* v___x_3641_, lean_object* v_val_3642_, lean_object* v_as_3643_, lean_object* v_i_3644_, lean_object* v_stop_3645_){
_start:
{
size_t v_i_boxed_3646_; size_t v_stop_boxed_3647_; uint8_t v_res_3648_; lean_object* v_r_3649_; 
v_i_boxed_3646_ = lean_unbox_usize(v_i_3644_);
lean_dec(v_i_3644_);
v_stop_boxed_3647_ = lean_unbox_usize(v_stop_3645_);
lean_dec(v_stop_3645_);
v_res_3648_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(v___x_3641_, v_val_3642_, v_as_3643_, v_i_boxed_3646_, v_stop_boxed_3647_);
lean_dec_ref(v_as_3643_);
lean_dec_ref(v_val_3642_);
lean_dec_ref(v___x_3641_);
v_r_3649_ = lean_box(v_res_3648_);
return v_r_3649_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(lean_object* v___x_3650_, lean_object* v_val_3651_, lean_object* v_x_3652_){
_start:
{
if (lean_obj_tag(v_x_3652_) == 0)
{
lean_object* v_cs_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; uint8_t v___x_3656_; 
v_cs_3653_ = lean_ctor_get(v_x_3652_, 0);
v___x_3654_ = lean_unsigned_to_nat(0u);
v___x_3655_ = lean_array_get_size(v_cs_3653_);
v___x_3656_ = lean_nat_dec_lt(v___x_3654_, v___x_3655_);
if (v___x_3656_ == 0)
{
return v___x_3656_;
}
else
{
size_t v___x_3657_; size_t v___x_3658_; uint8_t v___x_3659_; 
v___x_3657_ = ((size_t)0ULL);
v___x_3658_ = lean_usize_of_nat(v___x_3655_);
v___x_3659_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1(v___x_3650_, v_val_3651_, v_cs_3653_, v___x_3657_, v___x_3658_);
return v___x_3659_;
}
}
else
{
lean_object* v_vs_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; uint8_t v___x_3663_; 
v_vs_3660_ = lean_ctor_get(v_x_3652_, 0);
v___x_3661_ = lean_unsigned_to_nat(0u);
v___x_3662_ = lean_array_get_size(v_vs_3660_);
v___x_3663_ = lean_nat_dec_lt(v___x_3661_, v___x_3662_);
if (v___x_3663_ == 0)
{
return v___x_3663_;
}
else
{
size_t v___x_3664_; size_t v___x_3665_; uint8_t v___x_3666_; 
v___x_3664_ = ((size_t)0ULL);
v___x_3665_ = lean_usize_of_nat(v___x_3662_);
v___x_3666_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(v___x_3650_, v_val_3651_, v_vs_3660_, v___x_3664_, v___x_3665_);
return v___x_3666_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1(lean_object* v___x_3667_, lean_object* v_val_3668_, lean_object* v_as_3669_, size_t v_i_3670_, size_t v_stop_3671_){
_start:
{
uint8_t v___x_3672_; 
v___x_3672_ = lean_usize_dec_eq(v_i_3670_, v_stop_3671_);
if (v___x_3672_ == 0)
{
lean_object* v___x_3673_; uint8_t v___x_3674_; 
v___x_3673_ = lean_array_uget_borrowed(v_as_3669_, v_i_3670_);
v___x_3674_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(v___x_3667_, v_val_3668_, v___x_3673_);
if (v___x_3674_ == 0)
{
size_t v___x_3675_; size_t v___x_3676_; 
v___x_3675_ = ((size_t)1ULL);
v___x_3676_ = lean_usize_add(v_i_3670_, v___x_3675_);
v_i_3670_ = v___x_3676_;
goto _start;
}
else
{
return v___x_3674_;
}
}
else
{
uint8_t v___x_3678_; 
v___x_3678_ = 0;
return v___x_3678_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1___boxed(lean_object* v___x_3679_, lean_object* v_val_3680_, lean_object* v_as_3681_, lean_object* v_i_3682_, lean_object* v_stop_3683_){
_start:
{
size_t v_i_boxed_3684_; size_t v_stop_boxed_3685_; uint8_t v_res_3686_; lean_object* v_r_3687_; 
v_i_boxed_3684_ = lean_unbox_usize(v_i_3682_);
lean_dec(v_i_3682_);
v_stop_boxed_3685_ = lean_unbox_usize(v_stop_3683_);
lean_dec(v_stop_3683_);
v_res_3686_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1(v___x_3679_, v_val_3680_, v_as_3681_, v_i_boxed_3684_, v_stop_boxed_3685_);
lean_dec_ref(v_as_3681_);
lean_dec_ref(v_val_3680_);
lean_dec_ref(v___x_3679_);
v_r_3687_ = lean_box(v_res_3686_);
return v_r_3687_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0___boxed(lean_object* v___x_3688_, lean_object* v_val_3689_, lean_object* v_x_3690_){
_start:
{
uint8_t v_res_3691_; lean_object* v_r_3692_; 
v_res_3691_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(v___x_3688_, v_val_3689_, v_x_3690_);
lean_dec_ref(v_x_3690_);
lean_dec_ref(v_val_3689_);
lean_dec_ref(v___x_3688_);
v_r_3692_ = lean_box(v_res_3691_);
return v_r_3692_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0(lean_object* v___x_3693_, lean_object* v_val_3694_, lean_object* v_t_3695_){
_start:
{
lean_object* v_root_3696_; lean_object* v_tail_3697_; uint8_t v___x_3698_; 
v_root_3696_ = lean_ctor_get(v_t_3695_, 0);
v_tail_3697_ = lean_ctor_get(v_t_3695_, 1);
v___x_3698_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(v___x_3693_, v_val_3694_, v_root_3696_);
if (v___x_3698_ == 0)
{
lean_object* v___x_3699_; lean_object* v___x_3700_; uint8_t v___x_3701_; 
v___x_3699_ = lean_unsigned_to_nat(0u);
v___x_3700_ = lean_array_get_size(v_tail_3697_);
v___x_3701_ = lean_nat_dec_lt(v___x_3699_, v___x_3700_);
if (v___x_3701_ == 0)
{
return v___x_3701_;
}
else
{
size_t v___x_3702_; size_t v___x_3703_; uint8_t v___x_3704_; 
v___x_3702_ = ((size_t)0ULL);
v___x_3703_ = lean_usize_of_nat(v___x_3700_);
v___x_3704_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(v___x_3693_, v_val_3694_, v_tail_3697_, v___x_3702_, v___x_3703_);
return v___x_3704_;
}
}
else
{
return v___x_3698_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0___boxed(lean_object* v___x_3705_, lean_object* v_val_3706_, lean_object* v_t_3707_){
_start:
{
uint8_t v_res_3708_; lean_object* v_r_3709_; 
v_res_3708_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0(v___x_3705_, v_val_3706_, v_t_3707_);
lean_dec_ref(v_t_3707_);
lean_dec_ref(v_val_3706_);
lean_dec_ref(v___x_3705_);
v_r_3709_ = lean_box(v_res_3708_);
return v_r_3709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError(lean_object* v_stx_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_){
_start:
{
uint8_t v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = 0;
v___x_3715_ = l_Lean_Syntax_getRange_x3f(v_stx_3710_, v___x_3714_);
if (lean_obj_tag(v___x_3715_) == 1)
{
lean_object* v_val_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3729_; 
v_val_3716_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3718_ = v___x_3715_;
v_isShared_3719_ = v_isSharedCheck_3729_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_val_3716_);
lean_dec(v___x_3715_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3729_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v_fileMap_3720_; lean_object* v___x_3721_; lean_object* v_messages_3722_; lean_object* v___x_3723_; uint8_t v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3727_; 
v_fileMap_3720_ = lean_ctor_get(v_a_3711_, 1);
v___x_3721_ = lean_st_ref_get(v_a_3712_);
v_messages_3722_ = lean_ctor_get(v___x_3721_, 1);
lean_inc_ref(v_messages_3722_);
lean_dec(v___x_3721_);
v___x_3723_ = l_Lean_MessageLog_reportedPlusUnreported(v_messages_3722_);
v___x_3724_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0(v_fileMap_3720_, v_val_3716_, v___x_3723_);
lean_dec_ref(v___x_3723_);
lean_dec(v_val_3716_);
v___x_3725_ = lean_box(v___x_3724_);
if (v_isShared_3719_ == 0)
{
lean_ctor_set_tag(v___x_3718_, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3725_);
v___x_3727_ = v___x_3718_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3725_);
v___x_3727_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
return v___x_3727_;
}
}
}
else
{
lean_object* v___x_3730_; lean_object* v___x_3731_; 
lean_dec(v___x_3715_);
v___x_3730_ = lean_box(v___x_3714_);
v___x_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3730_);
return v___x_3731_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError___boxed(lean_object* v_stx_3732_, lean_object* v_a_3733_, lean_object* v_a_3734_, lean_object* v_a_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError(v_stx_3732_, v_a_3733_, v_a_3734_);
lean_dec(v_a_3734_);
lean_dec_ref(v_a_3733_);
lean_dec(v_stx_3732_);
return v_res_3736_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos(lean_object* v_tree_3737_, lean_object* v_fileMap_3738_, lean_object* v_c_3739_){
_start:
{
lean_object* v___y_3741_; lean_object* v_kind_3745_; lean_object* v_ref_3746_; lean_object* v___y_3748_; 
v_kind_3745_ = lean_ctor_get(v_c_3739_, 0);
lean_inc(v_kind_3745_);
v_ref_3746_ = lean_ctor_get(v_c_3739_, 1);
lean_inc(v_ref_3746_);
lean_dec_ref(v_c_3739_);
if (lean_obj_tag(v_kind_3745_) == 0)
{
lean_object* v_insertPos_3764_; 
lean_dec(v_ref_3746_);
v_insertPos_3764_ = lean_ctor_get(v_kind_3745_, 1);
lean_inc(v_insertPos_3764_);
v___y_3748_ = v_insertPos_3764_;
goto v___jp_3747_;
}
else
{
uint8_t v___x_3765_; lean_object* v___x_3766_; 
v___x_3765_ = 0;
v___x_3766_ = l_Lean_Syntax_getPos_x3f(v_ref_3746_, v___x_3765_);
lean_dec(v_ref_3746_);
if (lean_obj_tag(v___x_3766_) == 0)
{
lean_object* v___x_3767_; 
v___x_3767_ = lean_unsigned_to_nat(0u);
v___y_3748_ = v___x_3767_;
goto v___jp_3747_;
}
else
{
lean_object* v_val_3768_; 
v_val_3768_ = lean_ctor_get(v___x_3766_, 0);
lean_inc(v_val_3768_);
lean_dec_ref_known(v___x_3766_, 1);
v___y_3748_ = v_val_3768_;
goto v___jp_3747_;
}
}
v___jp_3740_:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; uint8_t v___x_3744_; 
v___x_3742_ = l_List_lengthTR___redArg(v___y_3741_);
lean_dec(v___y_3741_);
v___x_3743_ = lean_unsigned_to_nat(1u);
v___x_3744_ = lean_nat_dec_eq(v___x_3742_, v___x_3743_);
lean_dec(v___x_3742_);
return v___x_3744_;
}
v___jp_3747_:
{
lean_object* v___x_3749_; 
v___x_3749_ = l_Lean_Elab_InfoTree_goalsAt_x3f(v_fileMap_3738_, v_tree_3737_, v___y_3748_);
if (lean_obj_tag(v___x_3749_) == 1)
{
lean_object* v_tail_3750_; 
v_tail_3750_ = lean_ctor_get(v___x_3749_, 1);
if (lean_obj_tag(v_tail_3750_) == 0)
{
if (lean_obj_tag(v_kind_3745_) == 0)
{
lean_object* v_head_3751_; lean_object* v_tacticSeq_3752_; uint8_t v___x_3753_; lean_object* v___x_3754_; 
v_head_3751_ = lean_ctor_get(v___x_3749_, 0);
lean_inc(v_head_3751_);
lean_dec_ref_known(v___x_3749_, 2);
v_tacticSeq_3752_ = lean_ctor_get(v_kind_3745_, 0);
lean_inc(v_tacticSeq_3752_);
lean_dec_ref_known(v_kind_3745_, 2);
v___x_3753_ = 0;
v___x_3754_ = l_Lean_Syntax_getPos_x3f(v_tacticSeq_3752_, v___x_3753_);
lean_dec(v_tacticSeq_3752_);
if (lean_obj_tag(v___x_3754_) == 0)
{
lean_object* v_tacticInfo_3755_; lean_object* v_goalsBefore_3756_; 
v_tacticInfo_3755_ = lean_ctor_get(v_head_3751_, 1);
lean_inc_ref(v_tacticInfo_3755_);
lean_dec(v_head_3751_);
v_goalsBefore_3756_ = lean_ctor_get(v_tacticInfo_3755_, 2);
lean_inc(v_goalsBefore_3756_);
lean_dec_ref(v_tacticInfo_3755_);
v___y_3741_ = v_goalsBefore_3756_;
goto v___jp_3740_;
}
else
{
lean_object* v_tacticInfo_3757_; lean_object* v_goalsAfter_3758_; 
lean_dec_ref_known(v___x_3754_, 1);
v_tacticInfo_3757_ = lean_ctor_get(v_head_3751_, 1);
lean_inc_ref(v_tacticInfo_3757_);
lean_dec(v_head_3751_);
v_goalsAfter_3758_ = lean_ctor_get(v_tacticInfo_3757_, 4);
lean_inc(v_goalsAfter_3758_);
lean_dec_ref(v_tacticInfo_3757_);
v___y_3741_ = v_goalsAfter_3758_;
goto v___jp_3740_;
}
}
else
{
lean_object* v_head_3759_; lean_object* v_tacticInfo_3760_; lean_object* v_goalsBefore_3761_; 
v_head_3759_ = lean_ctor_get(v___x_3749_, 0);
lean_inc(v_head_3759_);
lean_dec_ref_known(v___x_3749_, 2);
v_tacticInfo_3760_ = lean_ctor_get(v_head_3759_, 1);
lean_inc_ref(v_tacticInfo_3760_);
lean_dec(v_head_3759_);
v_goalsBefore_3761_ = lean_ctor_get(v_tacticInfo_3760_, 2);
lean_inc(v_goalsBefore_3761_);
lean_dec_ref(v_tacticInfo_3760_);
v___y_3741_ = v_goalsBefore_3761_;
goto v___jp_3740_;
}
}
else
{
uint8_t v___x_3762_; 
lean_dec_ref_known(v___x_3749_, 2);
lean_dec(v_kind_3745_);
v___x_3762_ = 0;
return v___x_3762_;
}
}
else
{
uint8_t v___x_3763_; 
lean_dec(v___x_3749_);
lean_dec(v_kind_3745_);
v___x_3763_ = 0;
return v___x_3763_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos___boxed(lean_object* v_tree_3769_, lean_object* v_fileMap_3770_, lean_object* v_c_3771_){
_start:
{
uint8_t v_res_3772_; lean_object* v_r_3773_; 
v_res_3772_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos(v_tree_3769_, v_fileMap_3770_, v_c_3771_);
v_r_3773_ = lean_box(v_res_3772_);
return v_r_3773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(lean_object* v___y_3774_){
_start:
{
lean_object* v___x_3776_; lean_object* v_infoState_3777_; lean_object* v_trees_3778_; lean_object* v___x_3779_; 
v___x_3776_ = lean_st_ref_get(v___y_3774_);
v_infoState_3777_ = lean_ctor_get(v___x_3776_, 8);
lean_inc_ref(v_infoState_3777_);
lean_dec(v___x_3776_);
v_trees_3778_ = lean_ctor_get(v_infoState_3777_, 2);
lean_inc_ref(v_trees_3778_);
lean_dec_ref(v_infoState_3777_);
v___x_3779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3779_, 0, v_trees_3778_);
return v___x_3779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg___boxed(lean_object* v___y_3780_, lean_object* v___y_3781_){
_start:
{
lean_object* v_res_3782_; 
v_res_3782_ = l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(v___y_3780_);
lean_dec(v___y_3780_);
return v_res_3782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0(lean_object* v___y_3783_, lean_object* v___y_3784_){
_start:
{
lean_object* v___x_3786_; 
v___x_3786_ = l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(v___y_3784_);
return v___x_3786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___boxed(lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_){
_start:
{
lean_object* v_res_3790_; 
v_res_3790_ = l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0(v___y_3787_, v___y_3788_);
lean_dec(v___y_3788_);
lean_dec_ref(v___y_3787_);
return v_res_3790_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; 
v___x_3792_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__0));
v___x_3793_ = l_Lean_stringToMessageData(v___x_3792_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(lean_object* v_tree_3794_, lean_object* v___x_3795_, lean_object* v___x_3796_, lean_object* v_as_3797_, size_t v_sz_3798_, size_t v_i_3799_, lean_object* v_b_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_){
_start:
{
lean_object* v_a_3805_; uint8_t v___x_3809_; 
v___x_3809_ = lean_usize_dec_lt(v_i_3799_, v_sz_3798_);
if (v___x_3809_ == 0)
{
lean_object* v___x_3810_; 
lean_dec_ref(v___x_3795_);
lean_dec_ref(v_tree_3794_);
v___x_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3810_, 0, v_b_3800_);
return v___x_3810_;
}
else
{
lean_object* v___x_3811_; lean_object* v_a_3812_; uint8_t v___x_3813_; 
v___x_3811_ = lean_box(0);
v_a_3812_ = lean_array_uget_borrowed(v_as_3797_, v_i_3799_);
lean_inc(v_a_3812_);
lean_inc_ref(v___x_3795_);
lean_inc_ref(v_tree_3794_);
v___x_3813_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos(v_tree_3794_, v___x_3795_, v_a_3812_);
if (v___x_3813_ == 0)
{
lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v_scopes_3819_; lean_object* v___x_3820_; lean_object* v_opts_3821_; uint8_t v_hasTrace_3822_; 
v___x_3814_ = l_Lean_inheritedTraceOptions;
v___x_3815_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_3816_ = lean_st_ref_get(v___x_3814_);
v___x_3817_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3818_ = lean_st_ref_get(v___y_3802_);
v_scopes_3819_ = lean_ctor_get(v___x_3818_, 2);
lean_inc(v_scopes_3819_);
lean_dec(v___x_3818_);
v___x_3820_ = l_List_head_x21___redArg(v___x_3817_, v_scopes_3819_);
lean_dec(v_scopes_3819_);
v_opts_3821_ = lean_ctor_get(v___x_3820_, 1);
lean_inc_ref(v_opts_3821_);
lean_dec(v___x_3820_);
v_hasTrace_3822_ = lean_ctor_get_uint8(v_opts_3821_, sizeof(void*)*1);
if (v_hasTrace_3822_ == 0)
{
lean_dec_ref(v_opts_3821_);
lean_dec(v___x_3816_);
v_a_3805_ = v___x_3811_;
goto v___jp_3804_;
}
else
{
lean_object* v___x_3823_; uint8_t v___x_3824_; 
v___x_3823_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_3824_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3816_, v_opts_3821_, v___x_3823_);
lean_dec_ref(v_opts_3821_);
lean_dec(v___x_3816_);
if (v___x_3824_ == 0)
{
v_a_3805_ = v___x_3811_;
goto v___jp_3804_;
}
else
{
lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3825_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1);
v___x_3826_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_3815_, v___x_3825_, v___y_3801_, v___y_3802_);
if (lean_obj_tag(v___x_3826_) == 0)
{
lean_dec_ref_known(v___x_3826_, 1);
v_a_3805_ = v___x_3811_;
goto v___jp_3804_;
}
else
{
lean_dec_ref(v___x_3795_);
lean_dec_ref(v_tree_3794_);
return v___x_3826_;
}
}
}
}
else
{
lean_object* v_kind_3827_; 
v_kind_3827_ = lean_ctor_get(v_a_3812_, 0);
if (lean_obj_tag(v_kind_3827_) == 0)
{
lean_object* v_ref_3828_; lean_object* v_tacticSeq_3829_; lean_object* v_insertPos_3830_; lean_object* v___x_3831_; 
v_ref_3828_ = lean_ctor_get(v_a_3812_, 1);
v_tacticSeq_3829_ = lean_ctor_get(v_kind_3827_, 0);
v_insertPos_3830_ = lean_ctor_get(v_kind_3827_, 1);
lean_inc(v_a_3812_);
v___x_3831_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal(v_a_3812_, v___y_3801_, v___y_3802_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v_a_3832_; lean_object* v___x_3833_; 
v_a_3832_ = lean_ctor_get(v___x_3831_, 0);
lean_inc(v_a_3832_);
lean_dec_ref_known(v___x_3831_, 1);
lean_inc(v_insertPos_3830_);
lean_inc(v_ref_3828_);
v___x_3833_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions(v_tacticSeq_3829_, v_ref_3828_, v_insertPos_3830_, v_a_3832_, v___x_3796_, v___y_3801_, v___y_3802_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_dec_ref_known(v___x_3833_, 1);
v_a_3805_ = v___x_3811_;
goto v___jp_3804_;
}
else
{
lean_dec_ref(v___x_3795_);
lean_dec_ref(v_tree_3794_);
return v___x_3833_;
}
}
else
{
lean_object* v_a_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3841_; 
lean_dec_ref(v___x_3795_);
lean_dec_ref(v_tree_3794_);
v_a_3834_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3841_ == 0)
{
v___x_3836_ = v___x_3831_;
v_isShared_3837_ = v_isSharedCheck_3841_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_a_3834_);
lean_dec(v___x_3831_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3841_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3839_; 
if (v_isShared_3837_ == 0)
{
v___x_3839_ = v___x_3836_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v_a_3834_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
return v___x_3839_;
}
}
}
}
else
{
lean_object* v___x_3842_; 
lean_inc(v_a_3812_);
v___x_3842_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal(v_a_3812_, v___y_3801_, v___y_3802_);
if (lean_obj_tag(v___x_3842_) == 0)
{
lean_dec_ref_known(v___x_3842_, 1);
v_a_3805_ = v___x_3811_;
goto v___jp_3804_;
}
else
{
lean_dec_ref(v___x_3795_);
lean_dec_ref(v_tree_3794_);
return v___x_3842_;
}
}
}
}
v___jp_3804_:
{
size_t v___x_3806_; size_t v___x_3807_; 
v___x_3806_ = ((size_t)1ULL);
v___x_3807_ = lean_usize_add(v_i_3799_, v___x_3806_);
v_i_3799_ = v___x_3807_;
v_b_3800_ = v_a_3805_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___boxed(lean_object* v_tree_3843_, lean_object* v___x_3844_, lean_object* v___x_3845_, lean_object* v_as_3846_, lean_object* v_sz_3847_, lean_object* v_i_3848_, lean_object* v_b_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
size_t v_sz_boxed_3853_; size_t v_i_boxed_3854_; lean_object* v_res_3855_; 
v_sz_boxed_3853_ = lean_unbox_usize(v_sz_3847_);
lean_dec(v_sz_3847_);
v_i_boxed_3854_ = lean_unbox_usize(v_i_3848_);
lean_dec(v_i_3848_);
v_res_3855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_tree_3843_, v___x_3844_, v___x_3845_, v_as_3846_, v_sz_boxed_3853_, v_i_boxed_3854_, v_b_3849_, v___y_3850_, v___y_3851_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
lean_dec_ref(v_as_3846_);
lean_dec(v___x_3845_);
return v_res_3855_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2(void){
_start:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__1));
v___x_3861_ = l_Lean_stringToMessageData(v___x_3860_);
return v___x_3861_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6(lean_object* v_stx_3862_, lean_object* v___x_3863_, lean_object* v___x_3864_, lean_object* v___x_3865_, lean_object* v___x_3866_, lean_object* v_as_3867_, size_t v_sz_3868_, size_t v_i_3869_, lean_object* v_b_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_){
_start:
{
uint8_t v___x_3874_; 
v___x_3874_ = lean_usize_dec_lt(v_i_3869_, v_sz_3868_);
if (v___x_3874_ == 0)
{
lean_object* v___x_3875_; 
lean_dec_ref(v___x_3865_);
lean_dec(v_stx_3862_);
v___x_3875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3875_, 0, v_b_3870_);
return v___x_3875_;
}
else
{
lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v_a_3879_; lean_object* v___x_3880_; 
lean_dec_ref(v_b_3870_);
v___x_3876_ = lean_box(0);
v___x_3877_ = l_Lean_inheritedTraceOptions;
v___x_3878_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v_a_3879_ = lean_array_uget_borrowed(v_as_3867_, v_i_3869_);
lean_inc(v_a_3879_);
lean_inc(v_stx_3862_);
v___x_3880_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_stx_3862_, v___x_3863_, v_a_3879_, v___x_3864_, v___y_3871_, v___y_3872_);
if (lean_obj_tag(v___x_3880_) == 0)
{
lean_object* v_a_3881_; lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v_scopes_3903_; lean_object* v___x_3904_; lean_object* v_opts_3905_; uint8_t v_hasTrace_3906_; 
v_a_3881_ = lean_ctor_get(v___x_3880_, 0);
lean_inc(v_a_3881_);
lean_dec_ref_known(v___x_3880_, 1);
v___x_3900_ = lean_st_ref_get(v___x_3877_);
v___x_3901_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3902_ = lean_st_ref_get(v___y_3872_);
v_scopes_3903_ = lean_ctor_get(v___x_3902_, 2);
lean_inc(v_scopes_3903_);
lean_dec(v___x_3902_);
v___x_3904_ = l_List_head_x21___redArg(v___x_3901_, v_scopes_3903_);
lean_dec(v_scopes_3903_);
v_opts_3905_ = lean_ctor_get(v___x_3904_, 1);
lean_inc_ref(v_opts_3905_);
lean_dec(v___x_3904_);
v_hasTrace_3906_ = lean_ctor_get_uint8(v_opts_3905_, sizeof(void*)*1);
if (v_hasTrace_3906_ == 0)
{
lean_dec_ref(v_opts_3905_);
lean_dec(v___x_3900_);
v___y_3883_ = v___y_3871_;
v___y_3884_ = v___y_3872_;
goto v___jp_3882_;
}
else
{
lean_object* v___x_3907_; uint8_t v___x_3908_; 
v___x_3907_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_3908_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3900_, v_opts_3905_, v___x_3907_);
lean_dec_ref(v_opts_3905_);
lean_dec(v___x_3900_);
if (v___x_3908_ == 0)
{
v___y_3883_ = v___y_3871_;
v___y_3884_ = v___y_3872_;
goto v___jp_3882_;
}
else
{
lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3909_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2);
v___x_3910_ = lean_array_get_size(v_a_3881_);
v___x_3911_ = l_Nat_reprFast(v___x_3910_);
v___x_3912_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
v___x_3913_ = l_Lean_MessageData_ofFormat(v___x_3912_);
v___x_3914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3909_);
lean_ctor_set(v___x_3914_, 1, v___x_3913_);
v___x_3915_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_3878_, v___x_3914_, v___y_3871_, v___y_3872_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_dec_ref_known(v___x_3915_, 1);
v___y_3883_ = v___y_3871_;
v___y_3884_ = v___y_3872_;
goto v___jp_3882_;
}
else
{
lean_object* v_a_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3923_; 
lean_dec(v_a_3881_);
lean_dec_ref(v___x_3865_);
lean_dec(v_stx_3862_);
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3923_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3918_ = v___x_3915_;
v_isShared_3919_ = v_isSharedCheck_3923_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_a_3916_);
lean_dec(v___x_3915_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3923_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v___x_3921_; 
if (v_isShared_3919_ == 0)
{
v___x_3921_ = v___x_3918_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v_a_3916_);
v___x_3921_ = v_reuseFailAlloc_3922_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
return v___x_3921_;
}
}
}
}
}
v___jp_3882_:
{
size_t v_sz_3885_; size_t v___x_3886_; lean_object* v___x_3887_; 
v_sz_3885_ = lean_array_size(v_a_3881_);
v___x_3886_ = ((size_t)0ULL);
lean_inc_ref(v___x_3865_);
lean_inc(v_a_3879_);
v___x_3887_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_a_3879_, v___x_3865_, v___x_3866_, v_a_3881_, v_sz_3885_, v___x_3886_, v___x_3876_, v___y_3883_, v___y_3884_);
lean_dec(v_a_3881_);
if (lean_obj_tag(v___x_3887_) == 0)
{
lean_object* v___x_3888_; size_t v___x_3889_; size_t v___x_3890_; 
lean_dec_ref_known(v___x_3887_, 1);
v___x_3888_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0));
v___x_3889_ = ((size_t)1ULL);
v___x_3890_ = lean_usize_add(v_i_3869_, v___x_3889_);
v_i_3869_ = v___x_3890_;
v_b_3870_ = v___x_3888_;
goto _start;
}
else
{
lean_object* v_a_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3899_; 
lean_dec_ref(v___x_3865_);
lean_dec(v_stx_3862_);
v_a_3892_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3894_ = v___x_3887_;
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_a_3892_);
lean_dec(v___x_3887_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3897_; 
if (v_isShared_3895_ == 0)
{
v___x_3897_ = v___x_3894_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_a_3892_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
}
}
}
else
{
lean_object* v_a_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3931_; 
lean_dec_ref(v___x_3865_);
lean_dec(v_stx_3862_);
v_a_3924_ = lean_ctor_get(v___x_3880_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3880_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3926_ = v___x_3880_;
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_a_3924_);
lean_dec(v___x_3880_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
lean_object* v___x_3929_; 
if (v_isShared_3927_ == 0)
{
v___x_3929_ = v___x_3926_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_a_3924_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___boxed(lean_object* v_stx_3932_, lean_object* v___x_3933_, lean_object* v___x_3934_, lean_object* v___x_3935_, lean_object* v___x_3936_, lean_object* v_as_3937_, lean_object* v_sz_3938_, lean_object* v_i_3939_, lean_object* v_b_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_){
_start:
{
size_t v_sz_boxed_3944_; size_t v_i_boxed_3945_; lean_object* v_res_3946_; 
v_sz_boxed_3944_ = lean_unbox_usize(v_sz_3938_);
lean_dec(v_sz_3938_);
v_i_boxed_3945_ = lean_unbox_usize(v_i_3939_);
lean_dec(v_i_3939_);
v_res_3946_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6(v_stx_3932_, v___x_3933_, v___x_3934_, v___x_3935_, v___x_3936_, v_as_3937_, v_sz_boxed_3944_, v_i_boxed_3945_, v_b_3940_, v___y_3941_, v___y_3942_);
lean_dec(v___y_3942_);
lean_dec_ref(v___y_3941_);
lean_dec_ref(v_as_3937_);
lean_dec(v___x_3936_);
lean_dec_ref(v___x_3934_);
lean_dec_ref(v___x_3933_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3(lean_object* v_stx_3947_, lean_object* v___x_3948_, lean_object* v___x_3949_, lean_object* v___x_3950_, lean_object* v___x_3951_, lean_object* v_as_3952_, size_t v_sz_3953_, size_t v_i_3954_, lean_object* v_b_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_){
_start:
{
uint8_t v___x_3959_; 
v___x_3959_ = lean_usize_dec_lt(v_i_3954_, v_sz_3953_);
if (v___x_3959_ == 0)
{
lean_object* v___x_3960_; 
lean_dec_ref(v___x_3950_);
lean_dec(v_stx_3947_);
v___x_3960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3960_, 0, v_b_3955_);
return v___x_3960_;
}
else
{
lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v_a_3964_; lean_object* v___x_3965_; 
lean_dec_ref(v_b_3955_);
v___x_3961_ = lean_box(0);
v___x_3962_ = l_Lean_inheritedTraceOptions;
v___x_3963_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v_a_3964_ = lean_array_uget_borrowed(v_as_3952_, v_i_3954_);
lean_inc(v_a_3964_);
lean_inc(v_stx_3947_);
v___x_3965_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_stx_3947_, v___x_3948_, v_a_3964_, v___x_3949_, v___y_3956_, v___y_3957_);
if (lean_obj_tag(v___x_3965_) == 0)
{
lean_object* v_a_3966_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v_scopes_3988_; lean_object* v___x_3989_; lean_object* v_opts_3990_; uint8_t v_hasTrace_3991_; 
v_a_3966_ = lean_ctor_get(v___x_3965_, 0);
lean_inc(v_a_3966_);
lean_dec_ref_known(v___x_3965_, 1);
v___x_3985_ = lean_st_ref_get(v___x_3962_);
v___x_3986_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3987_ = lean_st_ref_get(v___y_3957_);
v_scopes_3988_ = lean_ctor_get(v___x_3987_, 2);
lean_inc(v_scopes_3988_);
lean_dec(v___x_3987_);
v___x_3989_ = l_List_head_x21___redArg(v___x_3986_, v_scopes_3988_);
lean_dec(v_scopes_3988_);
v_opts_3990_ = lean_ctor_get(v___x_3989_, 1);
lean_inc_ref(v_opts_3990_);
lean_dec(v___x_3989_);
v_hasTrace_3991_ = lean_ctor_get_uint8(v_opts_3990_, sizeof(void*)*1);
if (v_hasTrace_3991_ == 0)
{
lean_dec_ref(v_opts_3990_);
lean_dec(v___x_3985_);
v___y_3968_ = v___y_3956_;
v___y_3969_ = v___y_3957_;
goto v___jp_3967_;
}
else
{
lean_object* v___x_3992_; uint8_t v___x_3993_; 
v___x_3992_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_3993_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3985_, v_opts_3990_, v___x_3992_);
lean_dec_ref(v_opts_3990_);
lean_dec(v___x_3985_);
if (v___x_3993_ == 0)
{
v___y_3968_ = v___y_3956_;
v___y_3969_ = v___y_3957_;
goto v___jp_3967_;
}
else
{
lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; 
v___x_3994_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2);
v___x_3995_ = lean_array_get_size(v_a_3966_);
v___x_3996_ = l_Nat_reprFast(v___x_3995_);
v___x_3997_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3996_);
v___x_3998_ = l_Lean_MessageData_ofFormat(v___x_3997_);
v___x_3999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3999_, 0, v___x_3994_);
lean_ctor_set(v___x_3999_, 1, v___x_3998_);
v___x_4000_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_3963_, v___x_3999_, v___y_3956_, v___y_3957_);
if (lean_obj_tag(v___x_4000_) == 0)
{
lean_dec_ref_known(v___x_4000_, 1);
v___y_3968_ = v___y_3956_;
v___y_3969_ = v___y_3957_;
goto v___jp_3967_;
}
else
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4008_; 
lean_dec(v_a_3966_);
lean_dec_ref(v___x_3950_);
lean_dec(v_stx_3947_);
v_a_4001_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4008_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_4003_ = v___x_4000_;
v_isShared_4004_ = v_isSharedCheck_4008_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v___x_4000_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4008_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4006_; 
if (v_isShared_4004_ == 0)
{
v___x_4006_ = v___x_4003_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v_a_4001_);
v___x_4006_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
return v___x_4006_;
}
}
}
}
}
v___jp_3967_:
{
size_t v_sz_3970_; size_t v___x_3971_; lean_object* v___x_3972_; 
v_sz_3970_ = lean_array_size(v_a_3966_);
v___x_3971_ = ((size_t)0ULL);
lean_inc_ref(v___x_3950_);
lean_inc(v_a_3964_);
v___x_3972_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_a_3964_, v___x_3950_, v___x_3951_, v_a_3966_, v_sz_3970_, v___x_3971_, v___x_3961_, v___y_3968_, v___y_3969_);
lean_dec(v_a_3966_);
if (lean_obj_tag(v___x_3972_) == 0)
{
lean_object* v___x_3973_; size_t v___x_3974_; size_t v___x_3975_; lean_object* v___x_3976_; 
lean_dec_ref_known(v___x_3972_, 1);
v___x_3973_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0));
v___x_3974_ = ((size_t)1ULL);
v___x_3975_ = lean_usize_add(v_i_3954_, v___x_3974_);
v___x_3976_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6(v_stx_3947_, v___x_3948_, v___x_3949_, v___x_3950_, v___x_3951_, v_as_3952_, v_sz_3953_, v___x_3975_, v___x_3973_, v___y_3956_, v___y_3957_);
return v___x_3976_;
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_dec_ref(v___x_3950_);
lean_dec(v_stx_3947_);
v_a_3977_ = lean_ctor_get(v___x_3972_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3972_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3972_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
}
else
{
lean_object* v_a_4009_; lean_object* v___x_4011_; uint8_t v_isShared_4012_; uint8_t v_isSharedCheck_4016_; 
lean_dec_ref(v___x_3950_);
lean_dec(v_stx_3947_);
v_a_4009_ = lean_ctor_get(v___x_3965_, 0);
v_isSharedCheck_4016_ = !lean_is_exclusive(v___x_3965_);
if (v_isSharedCheck_4016_ == 0)
{
v___x_4011_ = v___x_3965_;
v_isShared_4012_ = v_isSharedCheck_4016_;
goto v_resetjp_4010_;
}
else
{
lean_inc(v_a_4009_);
lean_dec(v___x_3965_);
v___x_4011_ = lean_box(0);
v_isShared_4012_ = v_isSharedCheck_4016_;
goto v_resetjp_4010_;
}
v_resetjp_4010_:
{
lean_object* v___x_4014_; 
if (v_isShared_4012_ == 0)
{
v___x_4014_ = v___x_4011_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v_a_4009_);
v___x_4014_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
return v___x_4014_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3___boxed(lean_object* v_stx_4017_, lean_object* v___x_4018_, lean_object* v___x_4019_, lean_object* v___x_4020_, lean_object* v___x_4021_, lean_object* v_as_4022_, lean_object* v_sz_4023_, lean_object* v_i_4024_, lean_object* v_b_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_){
_start:
{
size_t v_sz_boxed_4029_; size_t v_i_boxed_4030_; lean_object* v_res_4031_; 
v_sz_boxed_4029_ = lean_unbox_usize(v_sz_4023_);
lean_dec(v_sz_4023_);
v_i_boxed_4030_ = lean_unbox_usize(v_i_4024_);
lean_dec(v_i_4024_);
v_res_4031_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3(v_stx_4017_, v___x_4018_, v___x_4019_, v___x_4020_, v___x_4021_, v_as_4022_, v_sz_boxed_4029_, v_i_boxed_4030_, v_b_4025_, v___y_4026_, v___y_4027_);
lean_dec(v___y_4027_);
lean_dec_ref(v___y_4026_);
lean_dec_ref(v_as_4022_);
lean_dec(v___x_4021_);
lean_dec_ref(v___x_4019_);
lean_dec_ref(v___x_4018_);
return v_res_4031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5(lean_object* v_stx_4035_, lean_object* v___x_4036_, lean_object* v___x_4037_, lean_object* v___x_4038_, lean_object* v___x_4039_, lean_object* v_as_4040_, size_t v_sz_4041_, size_t v_i_4042_, lean_object* v_b_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_){
_start:
{
uint8_t v___x_4047_; 
v___x_4047_ = lean_usize_dec_lt(v_i_4042_, v_sz_4041_);
if (v___x_4047_ == 0)
{
lean_object* v___x_4048_; 
lean_dec_ref(v___x_4038_);
lean_dec(v_stx_4035_);
v___x_4048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4048_, 0, v_b_4043_);
return v___x_4048_;
}
else
{
lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v_a_4052_; lean_object* v___x_4053_; 
lean_dec_ref(v_b_4043_);
v___x_4049_ = lean_box(0);
v___x_4050_ = l_Lean_inheritedTraceOptions;
v___x_4051_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v_a_4052_ = lean_array_uget_borrowed(v_as_4040_, v_i_4042_);
lean_inc(v_a_4052_);
lean_inc(v_stx_4035_);
v___x_4053_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_stx_4035_, v___x_4036_, v_a_4052_, v___x_4037_, v___y_4044_, v___y_4045_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_object* v_a_4054_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v_scopes_4076_; lean_object* v___x_4077_; lean_object* v_opts_4078_; uint8_t v_hasTrace_4079_; 
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
lean_inc(v_a_4054_);
lean_dec_ref_known(v___x_4053_, 1);
v___x_4073_ = lean_st_ref_get(v___x_4050_);
v___x_4074_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4075_ = lean_st_ref_get(v___y_4045_);
v_scopes_4076_ = lean_ctor_get(v___x_4075_, 2);
lean_inc(v_scopes_4076_);
lean_dec(v___x_4075_);
v___x_4077_ = l_List_head_x21___redArg(v___x_4074_, v_scopes_4076_);
lean_dec(v_scopes_4076_);
v_opts_4078_ = lean_ctor_get(v___x_4077_, 1);
lean_inc_ref(v_opts_4078_);
lean_dec(v___x_4077_);
v_hasTrace_4079_ = lean_ctor_get_uint8(v_opts_4078_, sizeof(void*)*1);
if (v_hasTrace_4079_ == 0)
{
lean_dec_ref(v_opts_4078_);
lean_dec(v___x_4073_);
v___y_4056_ = v___y_4044_;
v___y_4057_ = v___y_4045_;
goto v___jp_4055_;
}
else
{
lean_object* v___x_4080_; uint8_t v___x_4081_; 
v___x_4080_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_4081_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4073_, v_opts_4078_, v___x_4080_);
lean_dec_ref(v_opts_4078_);
lean_dec(v___x_4073_);
if (v___x_4081_ == 0)
{
v___y_4056_ = v___y_4044_;
v___y_4057_ = v___y_4045_;
goto v___jp_4055_;
}
else
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; 
v___x_4082_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2);
v___x_4083_ = lean_array_get_size(v_a_4054_);
v___x_4084_ = l_Nat_reprFast(v___x_4083_);
v___x_4085_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4084_);
v___x_4086_ = l_Lean_MessageData_ofFormat(v___x_4085_);
v___x_4087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4087_, 0, v___x_4082_);
lean_ctor_set(v___x_4087_, 1, v___x_4086_);
v___x_4088_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_4051_, v___x_4087_, v___y_4044_, v___y_4045_);
if (lean_obj_tag(v___x_4088_) == 0)
{
lean_dec_ref_known(v___x_4088_, 1);
v___y_4056_ = v___y_4044_;
v___y_4057_ = v___y_4045_;
goto v___jp_4055_;
}
else
{
lean_object* v_a_4089_; lean_object* v___x_4091_; uint8_t v_isShared_4092_; uint8_t v_isSharedCheck_4096_; 
lean_dec(v_a_4054_);
lean_dec_ref(v___x_4038_);
lean_dec(v_stx_4035_);
v_a_4089_ = lean_ctor_get(v___x_4088_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v___x_4088_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4091_ = v___x_4088_;
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
else
{
lean_inc(v_a_4089_);
lean_dec(v___x_4088_);
v___x_4091_ = lean_box(0);
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
v_resetjp_4090_:
{
lean_object* v___x_4094_; 
if (v_isShared_4092_ == 0)
{
v___x_4094_ = v___x_4091_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_a_4089_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
}
}
}
v___jp_4055_:
{
size_t v_sz_4058_; size_t v___x_4059_; lean_object* v___x_4060_; 
v_sz_4058_ = lean_array_size(v_a_4054_);
v___x_4059_ = ((size_t)0ULL);
lean_inc_ref(v___x_4038_);
lean_inc(v_a_4052_);
v___x_4060_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_a_4052_, v___x_4038_, v___x_4039_, v_a_4054_, v_sz_4058_, v___x_4059_, v___x_4049_, v___y_4056_, v___y_4057_);
lean_dec(v_a_4054_);
if (lean_obj_tag(v___x_4060_) == 0)
{
lean_object* v___x_4061_; size_t v___x_4062_; size_t v___x_4063_; 
lean_dec_ref_known(v___x_4060_, 1);
v___x_4061_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0));
v___x_4062_ = ((size_t)1ULL);
v___x_4063_ = lean_usize_add(v_i_4042_, v___x_4062_);
v_i_4042_ = v___x_4063_;
v_b_4043_ = v___x_4061_;
goto _start;
}
else
{
lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4072_; 
lean_dec_ref(v___x_4038_);
lean_dec(v_stx_4035_);
v_a_4065_ = lean_ctor_get(v___x_4060_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4060_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4067_ = v___x_4060_;
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_dec(v___x_4060_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v___x_4070_; 
if (v_isShared_4068_ == 0)
{
v___x_4070_ = v___x_4067_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_a_4065_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
return v___x_4070_;
}
}
}
}
}
else
{
lean_object* v_a_4097_; lean_object* v___x_4099_; uint8_t v_isShared_4100_; uint8_t v_isSharedCheck_4104_; 
lean_dec_ref(v___x_4038_);
lean_dec(v_stx_4035_);
v_a_4097_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4104_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4104_ == 0)
{
v___x_4099_ = v___x_4053_;
v_isShared_4100_ = v_isSharedCheck_4104_;
goto v_resetjp_4098_;
}
else
{
lean_inc(v_a_4097_);
lean_dec(v___x_4053_);
v___x_4099_ = lean_box(0);
v_isShared_4100_ = v_isSharedCheck_4104_;
goto v_resetjp_4098_;
}
v_resetjp_4098_:
{
lean_object* v___x_4102_; 
if (v_isShared_4100_ == 0)
{
v___x_4102_ = v___x_4099_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v_a_4097_);
v___x_4102_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
return v___x_4102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___boxed(lean_object* v_stx_4105_, lean_object* v___x_4106_, lean_object* v___x_4107_, lean_object* v___x_4108_, lean_object* v___x_4109_, lean_object* v_as_4110_, lean_object* v_sz_4111_, lean_object* v_i_4112_, lean_object* v_b_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_){
_start:
{
size_t v_sz_boxed_4117_; size_t v_i_boxed_4118_; lean_object* v_res_4119_; 
v_sz_boxed_4117_ = lean_unbox_usize(v_sz_4111_);
lean_dec(v_sz_4111_);
v_i_boxed_4118_ = lean_unbox_usize(v_i_4112_);
lean_dec(v_i_4112_);
v_res_4119_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5(v_stx_4105_, v___x_4106_, v___x_4107_, v___x_4108_, v___x_4109_, v_as_4110_, v_sz_boxed_4117_, v_i_boxed_4118_, v_b_4113_, v___y_4114_, v___y_4115_);
lean_dec(v___y_4115_);
lean_dec_ref(v___y_4114_);
lean_dec_ref(v_as_4110_);
lean_dec(v___x_4109_);
lean_dec_ref(v___x_4107_);
lean_dec_ref(v___x_4106_);
return v_res_4119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4(lean_object* v_stx_4120_, lean_object* v___x_4121_, lean_object* v___x_4122_, lean_object* v___x_4123_, lean_object* v___x_4124_, lean_object* v_as_4125_, size_t v_sz_4126_, size_t v_i_4127_, lean_object* v_b_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_){
_start:
{
uint8_t v___x_4132_; 
v___x_4132_ = lean_usize_dec_lt(v_i_4127_, v_sz_4126_);
if (v___x_4132_ == 0)
{
lean_object* v___x_4133_; 
lean_dec_ref(v___x_4123_);
lean_dec(v_stx_4120_);
v___x_4133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4133_, 0, v_b_4128_);
return v___x_4133_;
}
else
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v_a_4137_; lean_object* v___x_4138_; 
lean_dec_ref(v_b_4128_);
v___x_4134_ = lean_box(0);
v___x_4135_ = l_Lean_inheritedTraceOptions;
v___x_4136_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v_a_4137_ = lean_array_uget_borrowed(v_as_4125_, v_i_4127_);
lean_inc(v_a_4137_);
lean_inc(v_stx_4120_);
v___x_4138_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_stx_4120_, v___x_4121_, v_a_4137_, v___x_4122_, v___y_4129_, v___y_4130_);
if (lean_obj_tag(v___x_4138_) == 0)
{
lean_object* v_a_4139_; lean_object* v___y_4141_; lean_object* v___y_4142_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v_scopes_4161_; lean_object* v___x_4162_; lean_object* v_opts_4163_; uint8_t v_hasTrace_4164_; 
v_a_4139_ = lean_ctor_get(v___x_4138_, 0);
lean_inc(v_a_4139_);
lean_dec_ref_known(v___x_4138_, 1);
v___x_4158_ = lean_st_ref_get(v___x_4135_);
v___x_4159_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4160_ = lean_st_ref_get(v___y_4130_);
v_scopes_4161_ = lean_ctor_get(v___x_4160_, 2);
lean_inc(v_scopes_4161_);
lean_dec(v___x_4160_);
v___x_4162_ = l_List_head_x21___redArg(v___x_4159_, v_scopes_4161_);
lean_dec(v_scopes_4161_);
v_opts_4163_ = lean_ctor_get(v___x_4162_, 1);
lean_inc_ref(v_opts_4163_);
lean_dec(v___x_4162_);
v_hasTrace_4164_ = lean_ctor_get_uint8(v_opts_4163_, sizeof(void*)*1);
if (v_hasTrace_4164_ == 0)
{
lean_dec_ref(v_opts_4163_);
lean_dec(v___x_4158_);
v___y_4141_ = v___y_4129_;
v___y_4142_ = v___y_4130_;
goto v___jp_4140_;
}
else
{
lean_object* v___x_4165_; uint8_t v___x_4166_; 
v___x_4165_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_4166_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4158_, v_opts_4163_, v___x_4165_);
lean_dec_ref(v_opts_4163_);
lean_dec(v___x_4158_);
if (v___x_4166_ == 0)
{
v___y_4141_ = v___y_4129_;
v___y_4142_ = v___y_4130_;
goto v___jp_4140_;
}
else
{
lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4167_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2);
v___x_4168_ = lean_array_get_size(v_a_4139_);
v___x_4169_ = l_Nat_reprFast(v___x_4168_);
v___x_4170_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
v___x_4171_ = l_Lean_MessageData_ofFormat(v___x_4170_);
v___x_4172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4167_);
lean_ctor_set(v___x_4172_, 1, v___x_4171_);
v___x_4173_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_4136_, v___x_4172_, v___y_4129_, v___y_4130_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_dec_ref_known(v___x_4173_, 1);
v___y_4141_ = v___y_4129_;
v___y_4142_ = v___y_4130_;
goto v___jp_4140_;
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4181_; 
lean_dec(v_a_4139_);
lean_dec_ref(v___x_4123_);
lean_dec(v_stx_4120_);
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4176_ = v___x_4173_;
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4173_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4179_; 
if (v_isShared_4177_ == 0)
{
v___x_4179_ = v___x_4176_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v_a_4174_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
}
}
v___jp_4140_:
{
size_t v_sz_4143_; size_t v___x_4144_; lean_object* v___x_4145_; 
v_sz_4143_ = lean_array_size(v_a_4139_);
v___x_4144_ = ((size_t)0ULL);
lean_inc_ref(v___x_4123_);
lean_inc(v_a_4137_);
v___x_4145_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_a_4137_, v___x_4123_, v___x_4124_, v_a_4139_, v_sz_4143_, v___x_4144_, v___x_4134_, v___y_4141_, v___y_4142_);
lean_dec(v_a_4139_);
if (lean_obj_tag(v___x_4145_) == 0)
{
lean_object* v___x_4146_; size_t v___x_4147_; size_t v___x_4148_; lean_object* v___x_4149_; 
lean_dec_ref_known(v___x_4145_, 1);
v___x_4146_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0));
v___x_4147_ = ((size_t)1ULL);
v___x_4148_ = lean_usize_add(v_i_4127_, v___x_4147_);
v___x_4149_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5(v_stx_4120_, v___x_4121_, v___x_4122_, v___x_4123_, v___x_4124_, v_as_4125_, v_sz_4126_, v___x_4148_, v___x_4146_, v___y_4129_, v___y_4130_);
return v___x_4149_;
}
else
{
lean_object* v_a_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4157_; 
lean_dec_ref(v___x_4123_);
lean_dec(v_stx_4120_);
v_a_4150_ = lean_ctor_get(v___x_4145_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v___x_4145_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4152_ = v___x_4145_;
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_a_4150_);
lean_dec(v___x_4145_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4155_; 
if (v_isShared_4153_ == 0)
{
v___x_4155_ = v___x_4152_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4150_);
v___x_4155_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
return v___x_4155_;
}
}
}
}
}
else
{
lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4189_; 
lean_dec_ref(v___x_4123_);
lean_dec(v_stx_4120_);
v_a_4182_ = lean_ctor_get(v___x_4138_, 0);
v_isSharedCheck_4189_ = !lean_is_exclusive(v___x_4138_);
if (v_isSharedCheck_4189_ == 0)
{
v___x_4184_ = v___x_4138_;
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_dec(v___x_4138_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4187_; 
if (v_isShared_4185_ == 0)
{
v___x_4187_ = v___x_4184_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v_a_4182_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
return v___x_4187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4___boxed(lean_object* v_stx_4190_, lean_object* v___x_4191_, lean_object* v___x_4192_, lean_object* v___x_4193_, lean_object* v___x_4194_, lean_object* v_as_4195_, lean_object* v_sz_4196_, lean_object* v_i_4197_, lean_object* v_b_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_){
_start:
{
size_t v_sz_boxed_4202_; size_t v_i_boxed_4203_; lean_object* v_res_4204_; 
v_sz_boxed_4202_ = lean_unbox_usize(v_sz_4196_);
lean_dec(v_sz_4196_);
v_i_boxed_4203_ = lean_unbox_usize(v_i_4197_);
lean_dec(v_i_4197_);
v_res_4204_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4(v_stx_4190_, v___x_4191_, v___x_4192_, v___x_4193_, v___x_4194_, v_as_4195_, v_sz_boxed_4202_, v_i_boxed_4203_, v_b_4198_, v___y_4199_, v___y_4200_);
lean_dec(v___y_4200_);
lean_dec_ref(v___y_4199_);
lean_dec_ref(v_as_4195_);
lean_dec(v___x_4194_);
lean_dec_ref(v___x_4192_);
lean_dec_ref(v___x_4191_);
return v_res_4204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(lean_object* v_init_4205_, lean_object* v_stx_4206_, lean_object* v___x_4207_, lean_object* v___x_4208_, lean_object* v___x_4209_, lean_object* v___x_4210_, lean_object* v_n_4211_, lean_object* v_b_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
if (lean_obj_tag(v_n_4211_) == 0)
{
lean_object* v_cs_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; size_t v_sz_4219_; size_t v___x_4220_; lean_object* v___x_4221_; 
v_cs_4216_ = lean_ctor_get(v_n_4211_, 0);
v___x_4217_ = lean_box(0);
v___x_4218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4217_);
lean_ctor_set(v___x_4218_, 1, v_b_4212_);
v_sz_4219_ = lean_array_size(v_cs_4216_);
v___x_4220_ = ((size_t)0ULL);
v___x_4221_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3(v_init_4205_, v_stx_4206_, v___x_4207_, v___x_4208_, v___x_4209_, v___x_4210_, v_cs_4216_, v_sz_4219_, v___x_4220_, v___x_4218_, v___y_4213_, v___y_4214_);
if (lean_obj_tag(v___x_4221_) == 0)
{
lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4236_; 
v_a_4222_ = lean_ctor_get(v___x_4221_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4221_);
if (v_isSharedCheck_4236_ == 0)
{
v___x_4224_ = v___x_4221_;
v_isShared_4225_ = v_isSharedCheck_4236_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_dec(v___x_4221_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4236_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v_fst_4226_; 
v_fst_4226_ = lean_ctor_get(v_a_4222_, 0);
if (lean_obj_tag(v_fst_4226_) == 0)
{
lean_object* v_snd_4227_; lean_object* v___x_4228_; lean_object* v___x_4230_; 
v_snd_4227_ = lean_ctor_get(v_a_4222_, 1);
lean_inc(v_snd_4227_);
lean_dec(v_a_4222_);
v___x_4228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4228_, 0, v_snd_4227_);
if (v_isShared_4225_ == 0)
{
lean_ctor_set(v___x_4224_, 0, v___x_4228_);
v___x_4230_ = v___x_4224_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v___x_4228_);
v___x_4230_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
return v___x_4230_;
}
}
else
{
lean_object* v_val_4232_; lean_object* v___x_4234_; 
lean_inc_ref(v_fst_4226_);
lean_dec(v_a_4222_);
v_val_4232_ = lean_ctor_get(v_fst_4226_, 0);
lean_inc(v_val_4232_);
lean_dec_ref_known(v_fst_4226_, 1);
if (v_isShared_4225_ == 0)
{
lean_ctor_set(v___x_4224_, 0, v_val_4232_);
v___x_4234_ = v___x_4224_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_val_4232_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
return v___x_4234_;
}
}
}
}
else
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4244_; 
v_a_4237_ = lean_ctor_get(v___x_4221_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___x_4221_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4239_ = v___x_4221_;
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4221_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4242_; 
if (v_isShared_4240_ == 0)
{
v___x_4242_ = v___x_4239_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v_a_4237_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
return v___x_4242_;
}
}
}
}
else
{
lean_object* v_vs_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; size_t v_sz_4248_; size_t v___x_4249_; lean_object* v___x_4250_; 
v_vs_4245_ = lean_ctor_get(v_n_4211_, 0);
v___x_4246_ = lean_box(0);
v___x_4247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4246_);
lean_ctor_set(v___x_4247_, 1, v_b_4212_);
v_sz_4248_ = lean_array_size(v_vs_4245_);
v___x_4249_ = ((size_t)0ULL);
v___x_4250_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4(v_stx_4206_, v___x_4207_, v___x_4208_, v___x_4209_, v___x_4210_, v_vs_4245_, v_sz_4248_, v___x_4249_, v___x_4247_, v___y_4213_, v___y_4214_);
if (lean_obj_tag(v___x_4250_) == 0)
{
lean_object* v_a_4251_; lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4265_; 
v_a_4251_ = lean_ctor_get(v___x_4250_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4250_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4253_ = v___x_4250_;
v_isShared_4254_ = v_isSharedCheck_4265_;
goto v_resetjp_4252_;
}
else
{
lean_inc(v_a_4251_);
lean_dec(v___x_4250_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4265_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v_fst_4255_; 
v_fst_4255_ = lean_ctor_get(v_a_4251_, 0);
if (lean_obj_tag(v_fst_4255_) == 0)
{
lean_object* v_snd_4256_; lean_object* v___x_4257_; lean_object* v___x_4259_; 
v_snd_4256_ = lean_ctor_get(v_a_4251_, 1);
lean_inc(v_snd_4256_);
lean_dec(v_a_4251_);
v___x_4257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4257_, 0, v_snd_4256_);
if (v_isShared_4254_ == 0)
{
lean_ctor_set(v___x_4253_, 0, v___x_4257_);
v___x_4259_ = v___x_4253_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v___x_4257_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
else
{
lean_object* v_val_4261_; lean_object* v___x_4263_; 
lean_inc_ref(v_fst_4255_);
lean_dec(v_a_4251_);
v_val_4261_ = lean_ctor_get(v_fst_4255_, 0);
lean_inc(v_val_4261_);
lean_dec_ref_known(v_fst_4255_, 1);
if (v_isShared_4254_ == 0)
{
lean_ctor_set(v___x_4253_, 0, v_val_4261_);
v___x_4263_ = v___x_4253_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v_val_4261_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
return v___x_4263_;
}
}
}
}
else
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4273_; 
v_a_4266_ = lean_ctor_get(v___x_4250_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4250_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4268_ = v___x_4250_;
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4250_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4271_; 
if (v_isShared_4269_ == 0)
{
v___x_4271_ = v___x_4268_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v_a_4266_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3(lean_object* v_init_4274_, lean_object* v_stx_4275_, lean_object* v___x_4276_, lean_object* v___x_4277_, lean_object* v___x_4278_, lean_object* v___x_4279_, lean_object* v_as_4280_, size_t v_sz_4281_, size_t v_i_4282_, lean_object* v_b_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_){
_start:
{
uint8_t v___x_4287_; 
v___x_4287_ = lean_usize_dec_lt(v_i_4282_, v_sz_4281_);
if (v___x_4287_ == 0)
{
lean_object* v___x_4288_; 
lean_dec_ref(v___x_4278_);
lean_dec(v_stx_4275_);
v___x_4288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4288_, 0, v_b_4283_);
return v___x_4288_;
}
else
{
lean_object* v_snd_4289_; lean_object* v___x_4291_; uint8_t v_isShared_4292_; uint8_t v_isSharedCheck_4323_; 
v_snd_4289_ = lean_ctor_get(v_b_4283_, 1);
v_isSharedCheck_4323_ = !lean_is_exclusive(v_b_4283_);
if (v_isSharedCheck_4323_ == 0)
{
lean_object* v_unused_4324_; 
v_unused_4324_ = lean_ctor_get(v_b_4283_, 0);
lean_dec(v_unused_4324_);
v___x_4291_ = v_b_4283_;
v_isShared_4292_ = v_isSharedCheck_4323_;
goto v_resetjp_4290_;
}
else
{
lean_inc(v_snd_4289_);
lean_dec(v_b_4283_);
v___x_4291_ = lean_box(0);
v_isShared_4292_ = v_isSharedCheck_4323_;
goto v_resetjp_4290_;
}
v_resetjp_4290_:
{
lean_object* v___x_4293_; lean_object* v_a_4294_; lean_object* v___x_4295_; 
v___x_4293_ = lean_box(0);
v_a_4294_ = lean_array_uget_borrowed(v_as_4280_, v_i_4282_);
lean_inc(v_snd_4289_);
lean_inc_ref(v___x_4278_);
lean_inc(v_stx_4275_);
v___x_4295_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(v_init_4274_, v_stx_4275_, v___x_4276_, v___x_4277_, v___x_4278_, v___x_4279_, v_a_4294_, v_snd_4289_, v___y_4284_, v___y_4285_);
if (lean_obj_tag(v___x_4295_) == 0)
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4314_; 
v_a_4296_ = lean_ctor_get(v___x_4295_, 0);
v_isSharedCheck_4314_ = !lean_is_exclusive(v___x_4295_);
if (v_isSharedCheck_4314_ == 0)
{
v___x_4298_ = v___x_4295_;
v_isShared_4299_ = v_isSharedCheck_4314_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v___x_4295_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4314_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
if (lean_obj_tag(v_a_4296_) == 0)
{
lean_object* v___x_4300_; lean_object* v___x_4302_; 
lean_dec_ref(v___x_4278_);
lean_dec(v_stx_4275_);
v___x_4300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4300_, 0, v_a_4296_);
if (v_isShared_4292_ == 0)
{
lean_ctor_set(v___x_4291_, 0, v___x_4300_);
v___x_4302_ = v___x_4291_;
goto v_reusejp_4301_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v___x_4300_);
lean_ctor_set(v_reuseFailAlloc_4306_, 1, v_snd_4289_);
v___x_4302_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4301_;
}
v_reusejp_4301_:
{
lean_object* v___x_4304_; 
if (v_isShared_4299_ == 0)
{
lean_ctor_set(v___x_4298_, 0, v___x_4302_);
v___x_4304_ = v___x_4298_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v___x_4302_);
v___x_4304_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
return v___x_4304_;
}
}
}
else
{
lean_object* v_a_4307_; lean_object* v___x_4309_; 
lean_del_object(v___x_4298_);
lean_dec(v_snd_4289_);
v_a_4307_ = lean_ctor_get(v_a_4296_, 0);
lean_inc(v_a_4307_);
lean_dec_ref_known(v_a_4296_, 1);
if (v_isShared_4292_ == 0)
{
lean_ctor_set(v___x_4291_, 1, v_a_4307_);
lean_ctor_set(v___x_4291_, 0, v___x_4293_);
v___x_4309_ = v___x_4291_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4313_; 
v_reuseFailAlloc_4313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4313_, 0, v___x_4293_);
lean_ctor_set(v_reuseFailAlloc_4313_, 1, v_a_4307_);
v___x_4309_ = v_reuseFailAlloc_4313_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
size_t v___x_4310_; size_t v___x_4311_; 
v___x_4310_ = ((size_t)1ULL);
v___x_4311_ = lean_usize_add(v_i_4282_, v___x_4310_);
v_i_4282_ = v___x_4311_;
v_b_4283_ = v___x_4309_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4315_; lean_object* v___x_4317_; uint8_t v_isShared_4318_; uint8_t v_isSharedCheck_4322_; 
lean_del_object(v___x_4291_);
lean_dec(v_snd_4289_);
lean_dec_ref(v___x_4278_);
lean_dec(v_stx_4275_);
v_a_4315_ = lean_ctor_get(v___x_4295_, 0);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4295_);
if (v_isSharedCheck_4322_ == 0)
{
v___x_4317_ = v___x_4295_;
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
else
{
lean_inc(v_a_4315_);
lean_dec(v___x_4295_);
v___x_4317_ = lean_box(0);
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
v_resetjp_4316_:
{
lean_object* v___x_4320_; 
if (v_isShared_4318_ == 0)
{
v___x_4320_ = v___x_4317_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_a_4315_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3___boxed(lean_object* v_init_4325_, lean_object* v_stx_4326_, lean_object* v___x_4327_, lean_object* v___x_4328_, lean_object* v___x_4329_, lean_object* v___x_4330_, lean_object* v_as_4331_, lean_object* v_sz_4332_, lean_object* v_i_4333_, lean_object* v_b_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
size_t v_sz_boxed_4338_; size_t v_i_boxed_4339_; lean_object* v_res_4340_; 
v_sz_boxed_4338_ = lean_unbox_usize(v_sz_4332_);
lean_dec(v_sz_4332_);
v_i_boxed_4339_ = lean_unbox_usize(v_i_4333_);
lean_dec(v_i_4333_);
v_res_4340_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3(v_init_4325_, v_stx_4326_, v___x_4327_, v___x_4328_, v___x_4329_, v___x_4330_, v_as_4331_, v_sz_boxed_4338_, v_i_boxed_4339_, v_b_4334_, v___y_4335_, v___y_4336_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
lean_dec_ref(v_as_4331_);
lean_dec(v___x_4330_);
lean_dec_ref(v___x_4328_);
lean_dec_ref(v___x_4327_);
return v_res_4340_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2___boxed(lean_object* v_init_4341_, lean_object* v_stx_4342_, lean_object* v___x_4343_, lean_object* v___x_4344_, lean_object* v___x_4345_, lean_object* v___x_4346_, lean_object* v_n_4347_, lean_object* v_b_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_){
_start:
{
lean_object* v_res_4352_; 
v_res_4352_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(v_init_4341_, v_stx_4342_, v___x_4343_, v___x_4344_, v___x_4345_, v___x_4346_, v_n_4347_, v_b_4348_, v___y_4349_, v___y_4350_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec_ref(v_n_4347_);
lean_dec(v___x_4346_);
lean_dec_ref(v___x_4344_);
lean_dec_ref(v___x_4343_);
return v_res_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2(lean_object* v___x_4353_, lean_object* v___x_4354_, lean_object* v_stx_4355_, lean_object* v___x_4356_, lean_object* v___x_4357_, lean_object* v_t_4358_, lean_object* v_init_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_){
_start:
{
lean_object* v_root_4363_; lean_object* v_tail_4364_; lean_object* v___x_4365_; 
v_root_4363_ = lean_ctor_get(v_t_4358_, 0);
v_tail_4364_ = lean_ctor_get(v_t_4358_, 1);
lean_inc_ref(v___x_4353_);
lean_inc(v_stx_4355_);
v___x_4365_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(v_init_4359_, v_stx_4355_, v___x_4356_, v___x_4357_, v___x_4353_, v___x_4354_, v_root_4363_, v_init_4359_, v___y_4360_, v___y_4361_);
if (lean_obj_tag(v___x_4365_) == 0)
{
lean_object* v_a_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4402_; 
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4368_ = v___x_4365_;
v_isShared_4369_ = v_isSharedCheck_4402_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_a_4366_);
lean_dec(v___x_4365_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4402_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
if (lean_obj_tag(v_a_4366_) == 0)
{
lean_object* v_a_4370_; lean_object* v___x_4372_; 
lean_dec(v_stx_4355_);
lean_dec_ref(v___x_4353_);
v_a_4370_ = lean_ctor_get(v_a_4366_, 0);
lean_inc(v_a_4370_);
lean_dec_ref_known(v_a_4366_, 1);
if (v_isShared_4369_ == 0)
{
lean_ctor_set(v___x_4368_, 0, v_a_4370_);
v___x_4372_ = v___x_4368_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v_a_4370_);
v___x_4372_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
return v___x_4372_;
}
}
else
{
lean_object* v_a_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; size_t v_sz_4377_; size_t v___x_4378_; lean_object* v___x_4379_; 
lean_del_object(v___x_4368_);
v_a_4374_ = lean_ctor_get(v_a_4366_, 0);
lean_inc(v_a_4374_);
lean_dec_ref_known(v_a_4366_, 1);
v___x_4375_ = lean_box(0);
v___x_4376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4376_, 0, v___x_4375_);
lean_ctor_set(v___x_4376_, 1, v_a_4374_);
v_sz_4377_ = lean_array_size(v_tail_4364_);
v___x_4378_ = ((size_t)0ULL);
v___x_4379_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3(v_stx_4355_, v___x_4356_, v___x_4357_, v___x_4353_, v___x_4354_, v_tail_4364_, v_sz_4377_, v___x_4378_, v___x_4376_, v___y_4360_, v___y_4361_);
if (lean_obj_tag(v___x_4379_) == 0)
{
lean_object* v_a_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4393_; 
v_a_4380_ = lean_ctor_get(v___x_4379_, 0);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4379_);
if (v_isSharedCheck_4393_ == 0)
{
v___x_4382_ = v___x_4379_;
v_isShared_4383_ = v_isSharedCheck_4393_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_a_4380_);
lean_dec(v___x_4379_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4393_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v_fst_4384_; 
v_fst_4384_ = lean_ctor_get(v_a_4380_, 0);
if (lean_obj_tag(v_fst_4384_) == 0)
{
lean_object* v_snd_4385_; lean_object* v___x_4387_; 
v_snd_4385_ = lean_ctor_get(v_a_4380_, 1);
lean_inc(v_snd_4385_);
lean_dec(v_a_4380_);
if (v_isShared_4383_ == 0)
{
lean_ctor_set(v___x_4382_, 0, v_snd_4385_);
v___x_4387_ = v___x_4382_;
goto v_reusejp_4386_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v_snd_4385_);
v___x_4387_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4386_;
}
v_reusejp_4386_:
{
return v___x_4387_;
}
}
else
{
lean_object* v_val_4389_; lean_object* v___x_4391_; 
lean_inc_ref(v_fst_4384_);
lean_dec(v_a_4380_);
v_val_4389_ = lean_ctor_get(v_fst_4384_, 0);
lean_inc(v_val_4389_);
lean_dec_ref_known(v_fst_4384_, 1);
if (v_isShared_4383_ == 0)
{
lean_ctor_set(v___x_4382_, 0, v_val_4389_);
v___x_4391_ = v___x_4382_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_val_4389_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4401_; 
v_a_4394_ = lean_ctor_get(v___x_4379_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4379_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4396_ = v___x_4379_;
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4379_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
lean_object* v___x_4399_; 
if (v_isShared_4397_ == 0)
{
v___x_4399_ = v___x_4396_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_a_4394_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
}
}
else
{
lean_object* v_a_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4410_; 
lean_dec(v_stx_4355_);
lean_dec_ref(v___x_4353_);
v_a_4403_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4405_ = v___x_4365_;
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_a_4403_);
lean_dec(v___x_4365_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4408_; 
if (v_isShared_4406_ == 0)
{
v___x_4408_ = v___x_4405_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_a_4403_);
v___x_4408_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
return v___x_4408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2___boxed(lean_object* v___x_4411_, lean_object* v___x_4412_, lean_object* v_stx_4413_, lean_object* v___x_4414_, lean_object* v___x_4415_, lean_object* v_t_4416_, lean_object* v_init_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_){
_start:
{
lean_object* v_res_4421_; 
v_res_4421_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2(v___x_4411_, v___x_4412_, v_stx_4413_, v___x_4414_, v___x_4415_, v_t_4416_, v_init_4417_, v___y_4418_, v___y_4419_);
lean_dec(v___y_4419_);
lean_dec_ref(v___y_4418_);
lean_dec_ref(v_t_4416_);
lean_dec_ref(v___x_4415_);
lean_dec_ref(v___x_4414_);
lean_dec(v___x_4412_);
return v_res_4421_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4423_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__0));
v___x_4424_ = l_Lean_stringToMessageData(v___x_4423_);
return v___x_4424_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4428_; lean_object* v___x_4429_; 
v___x_4428_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__4));
v___x_4429_ = l_Lean_stringToMessageData(v___x_4428_);
return v___x_4429_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4431_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__6));
v___x_4432_ = l_Lean_stringToMessageData(v___x_4431_);
return v___x_4432_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9(void){
_start:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; 
v___x_4434_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__8));
v___x_4435_ = l_Lean_stringToMessageData(v___x_4434_);
return v___x_4435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0(lean_object* v_stx_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v_scopes_4445_; lean_object* v___x_4446_; lean_object* v_opts_4447_; lean_object* v___y_4449_; lean_object* v___y_4450_; lean_object* v___y_4451_; lean_object* v___y_4452_; uint8_t v___y_4471_; lean_object* v___y_4472_; lean_object* v___y_4473_; uint8_t v___y_4479_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; uint8_t v___y_4488_; uint8_t v___y_4489_; lean_object* v___y_4490_; lean_object* v___y_4491_; lean_object* v___y_4492_; uint8_t v___y_4501_; uint8_t v___y_4502_; lean_object* v___y_4503_; uint8_t v___y_4504_; lean_object* v___y_4505_; lean_object* v___y_4506_; uint8_t v___y_4515_; uint8_t v___y_4516_; uint8_t v___y_4517_; uint8_t v___y_4551_; lean_object* v___x_4558_; uint8_t v___x_4559_; 
v___x_4443_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4444_ = lean_st_ref_get(v___y_4438_);
v_scopes_4445_ = lean_ctor_get(v___x_4444_, 2);
lean_inc(v_scopes_4445_);
lean_dec(v___x_4444_);
v___x_4446_ = l_List_head_x21___redArg(v___x_4443_, v_scopes_4445_);
lean_dec(v_scopes_4445_);
v_opts_4447_ = lean_ctor_get(v___x_4446_, 1);
lean_inc_ref(v_opts_4447_);
lean_dec(v___x_4446_);
v___x_4558_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof;
v___x_4559_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_4447_, v___x_4558_);
if (v___x_4559_ == 0)
{
lean_object* v___x_4560_; uint8_t v___x_4561_; 
v___x_4560_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy;
v___x_4561_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_4447_, v___x_4560_);
v___y_4551_ = v___x_4561_;
goto v___jp_4550_;
}
else
{
v___y_4551_ = v___x_4559_;
goto v___jp_4550_;
}
v___jp_4440_:
{
lean_object* v___x_4441_; lean_object* v___x_4442_; 
v___x_4441_ = lean_box(0);
v___x_4442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4441_);
return v___x_4442_;
}
v___jp_4448_:
{
lean_object* v___x_4453_; lean_object* v_line_4454_; lean_object* v___x_4455_; lean_object* v_messages_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v_a_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; 
lean_inc_ref_n(v___y_4451_, 2);
v___x_4453_ = l_Lean_FileMap_toPosition(v___y_4451_, v___y_4452_);
lean_dec(v___y_4452_);
v_line_4454_ = lean_ctor_get(v___x_4453_, 0);
lean_inc(v_line_4454_);
lean_dec_ref(v___x_4453_);
v___x_4455_ = lean_st_ref_get(v___y_4450_);
v_messages_4456_ = lean_ctor_get(v___x_4455_, 1);
lean_inc_ref(v_messages_4456_);
lean_dec(v___x_4455_);
v___x_4457_ = l_Lean_MessageLog_reportedPlusUnreported(v_messages_4456_);
v___x_4458_ = l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(v___y_4450_);
v_a_4459_ = lean_ctor_get(v___x_4458_, 0);
lean_inc(v_a_4459_);
lean_dec_ref(v___x_4458_);
v___x_4460_ = lean_box(0);
v___x_4461_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2(v___y_4451_, v_line_4454_, v_stx_4436_, v_opts_4447_, v___x_4457_, v_a_4459_, v___x_4460_, v___y_4449_, v___y_4450_);
lean_dec(v_a_4459_);
lean_dec_ref(v___x_4457_);
lean_dec_ref(v_opts_4447_);
lean_dec(v_line_4454_);
if (lean_obj_tag(v___x_4461_) == 0)
{
lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4468_; 
v_isSharedCheck_4468_ = !lean_is_exclusive(v___x_4461_);
if (v_isSharedCheck_4468_ == 0)
{
lean_object* v_unused_4469_; 
v_unused_4469_ = lean_ctor_get(v___x_4461_, 0);
lean_dec(v_unused_4469_);
v___x_4463_ = v___x_4461_;
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
else
{
lean_dec(v___x_4461_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4466_; 
if (v_isShared_4464_ == 0)
{
lean_ctor_set(v___x_4463_, 0, v___x_4460_);
v___x_4466_ = v___x_4463_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v___x_4460_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
else
{
return v___x_4461_;
}
}
v___jp_4470_:
{
lean_object* v_fileMap_4474_; lean_object* v___x_4475_; 
v_fileMap_4474_ = lean_ctor_get(v___y_4472_, 1);
v___x_4475_ = l_Lean_Syntax_getPos_x3f(v_stx_4436_, v___y_4471_);
if (lean_obj_tag(v___x_4475_) == 0)
{
lean_object* v___x_4476_; 
v___x_4476_ = lean_unsigned_to_nat(0u);
v___y_4449_ = v___y_4472_;
v___y_4450_ = v___y_4473_;
v___y_4451_ = v_fileMap_4474_;
v___y_4452_ = v___x_4476_;
goto v___jp_4448_;
}
else
{
lean_object* v_val_4477_; 
v_val_4477_ = lean_ctor_get(v___x_4475_, 0);
lean_inc(v_val_4477_);
lean_dec_ref_known(v___x_4475_, 1);
v___y_4449_ = v___y_4472_;
v___y_4450_ = v___y_4473_;
v___y_4451_ = v_fileMap_4474_;
v___y_4452_ = v_val_4477_;
goto v___jp_4448_;
}
}
v___jp_4478_:
{
lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
lean_inc_ref(v___y_4482_);
v___x_4483_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4483_, 0, v___y_4482_);
v___x_4484_ = l_Lean_MessageData_ofFormat(v___x_4483_);
v___x_4485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4485_, 0, v___y_4480_);
lean_ctor_set(v___x_4485_, 1, v___x_4484_);
lean_inc(v___y_4481_);
v___x_4486_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___y_4481_, v___x_4485_, v___y_4437_, v___y_4438_);
if (lean_obj_tag(v___x_4486_) == 0)
{
lean_dec_ref_known(v___x_4486_, 1);
v___y_4471_ = v___y_4479_;
v___y_4472_ = v___y_4437_;
v___y_4473_ = v___y_4438_;
goto v___jp_4470_;
}
else
{
lean_dec_ref(v_opts_4447_);
lean_dec(v_stx_4436_);
return v___x_4486_;
}
}
v___jp_4487_:
{
lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; 
lean_inc_ref(v___y_4492_);
v___x_4493_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4493_, 0, v___y_4492_);
v___x_4494_ = l_Lean_MessageData_ofFormat(v___x_4493_);
v___x_4495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4495_, 0, v___y_4490_);
lean_ctor_set(v___x_4495_, 1, v___x_4494_);
v___x_4496_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1);
v___x_4497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4497_, 0, v___x_4495_);
lean_ctor_set(v___x_4497_, 1, v___x_4496_);
if (v___y_4488_ == 0)
{
lean_object* v___x_4498_; 
v___x_4498_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2));
v___y_4479_ = v___y_4489_;
v___y_4480_ = v___x_4497_;
v___y_4481_ = v___y_4491_;
v___y_4482_ = v___x_4498_;
goto v___jp_4478_;
}
else
{
lean_object* v___x_4499_; 
v___x_4499_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3));
v___y_4479_ = v___y_4489_;
v___y_4480_ = v___x_4497_;
v___y_4481_ = v___y_4491_;
v___y_4482_ = v___x_4499_;
goto v___jp_4478_;
}
}
v___jp_4500_:
{
lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
lean_inc_ref(v___y_4506_);
v___x_4507_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4507_, 0, v___y_4506_);
v___x_4508_ = l_Lean_MessageData_ofFormat(v___x_4507_);
lean_inc_ref(v___y_4503_);
v___x_4509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4509_, 0, v___y_4503_);
lean_ctor_set(v___x_4509_, 1, v___x_4508_);
v___x_4510_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5);
v___x_4511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4511_, 0, v___x_4509_);
lean_ctor_set(v___x_4511_, 1, v___x_4510_);
if (v___y_4504_ == 0)
{
lean_object* v___x_4512_; 
v___x_4512_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2));
v___y_4488_ = v___y_4501_;
v___y_4489_ = v___y_4502_;
v___y_4490_ = v___x_4511_;
v___y_4491_ = v___y_4505_;
v___y_4492_ = v___x_4512_;
goto v___jp_4487_;
}
else
{
lean_object* v___x_4513_; 
v___x_4513_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3));
v___y_4488_ = v___y_4501_;
v___y_4489_ = v___y_4502_;
v___y_4490_ = v___x_4511_;
v___y_4491_ = v___y_4505_;
v___y_4492_ = v___x_4513_;
goto v___jp_4487_;
}
}
v___jp_4514_:
{
lean_object* v___x_4518_; lean_object* v_a_4519_; uint8_t v___x_4520_; 
v___x_4518_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError(v_stx_4436_, v___y_4437_, v___y_4438_);
v_a_4519_ = lean_ctor_get(v___x_4518_, 0);
lean_inc(v_a_4519_);
lean_dec_ref(v___x_4518_);
v___x_4520_ = lean_unbox(v_a_4519_);
if (v___x_4520_ == 0)
{
lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v_scopes_4525_; lean_object* v___x_4526_; lean_object* v_opts_4527_; uint8_t v_hasTrace_4528_; 
v___x_4521_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_4522_ = l_Lean_inheritedTraceOptions;
v___x_4523_ = lean_st_ref_get(v___x_4522_);
v___x_4524_ = lean_st_ref_get(v___y_4438_);
v_scopes_4525_ = lean_ctor_get(v___x_4524_, 2);
lean_inc(v_scopes_4525_);
lean_dec(v___x_4524_);
v___x_4526_ = l_List_head_x21___redArg(v___x_4443_, v_scopes_4525_);
lean_dec(v_scopes_4525_);
v_opts_4527_ = lean_ctor_get(v___x_4526_, 1);
lean_inc_ref(v_opts_4527_);
lean_dec(v___x_4526_);
v_hasTrace_4528_ = lean_ctor_get_uint8(v_opts_4527_, sizeof(void*)*1);
if (v_hasTrace_4528_ == 0)
{
uint8_t v___x_4529_; 
lean_dec_ref(v_opts_4527_);
lean_dec(v___x_4523_);
v___x_4529_ = lean_unbox(v_a_4519_);
lean_dec(v_a_4519_);
v___y_4471_ = v___x_4529_;
v___y_4472_ = v___y_4437_;
v___y_4473_ = v___y_4438_;
goto v___jp_4470_;
}
else
{
lean_object* v___x_4530_; uint8_t v___x_4531_; 
v___x_4530_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_4531_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4523_, v_opts_4527_, v___x_4530_);
lean_dec_ref(v_opts_4527_);
lean_dec(v___x_4523_);
if (v___x_4531_ == 0)
{
uint8_t v___x_4532_; 
v___x_4532_ = lean_unbox(v_a_4519_);
lean_dec(v_a_4519_);
v___y_4471_ = v___x_4532_;
v___y_4472_ = v___y_4437_;
v___y_4473_ = v___y_4438_;
goto v___jp_4470_;
}
else
{
lean_object* v___x_4533_; 
v___x_4533_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7);
if (v___y_4515_ == 0)
{
lean_object* v___x_4534_; uint8_t v___x_4535_; 
v___x_4534_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2));
v___x_4535_ = lean_unbox(v_a_4519_);
lean_dec(v_a_4519_);
v___y_4501_ = v___y_4516_;
v___y_4502_ = v___x_4535_;
v___y_4503_ = v___x_4533_;
v___y_4504_ = v___y_4517_;
v___y_4505_ = v___x_4521_;
v___y_4506_ = v___x_4534_;
goto v___jp_4500_;
}
else
{
lean_object* v___x_4536_; uint8_t v___x_4537_; 
v___x_4536_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3));
v___x_4537_ = lean_unbox(v_a_4519_);
lean_dec(v_a_4519_);
v___y_4501_ = v___y_4516_;
v___y_4502_ = v___x_4537_;
v___y_4503_ = v___x_4533_;
v___y_4504_ = v___y_4517_;
v___y_4505_ = v___x_4521_;
v___y_4506_ = v___x_4536_;
goto v___jp_4500_;
}
}
}
}
else
{
lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v_scopes_4542_; lean_object* v___x_4543_; lean_object* v_opts_4544_; uint8_t v_hasTrace_4545_; 
lean_dec(v_a_4519_);
lean_dec_ref(v_opts_4447_);
lean_dec(v_stx_4436_);
v___x_4538_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_4539_ = l_Lean_inheritedTraceOptions;
v___x_4540_ = lean_st_ref_get(v___x_4539_);
v___x_4541_ = lean_st_ref_get(v___y_4438_);
v_scopes_4542_ = lean_ctor_get(v___x_4541_, 2);
lean_inc(v_scopes_4542_);
lean_dec(v___x_4541_);
v___x_4543_ = l_List_head_x21___redArg(v___x_4443_, v_scopes_4542_);
lean_dec(v_scopes_4542_);
v_opts_4544_ = lean_ctor_get(v___x_4543_, 1);
lean_inc_ref(v_opts_4544_);
lean_dec(v___x_4543_);
v_hasTrace_4545_ = lean_ctor_get_uint8(v_opts_4544_, sizeof(void*)*1);
if (v_hasTrace_4545_ == 0)
{
lean_dec_ref(v_opts_4544_);
lean_dec(v___x_4540_);
goto v___jp_4440_;
}
else
{
lean_object* v___x_4546_; uint8_t v___x_4547_; 
v___x_4546_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__5_spec__9_spec__13___closed__3);
v___x_4547_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4540_, v_opts_4544_, v___x_4546_);
lean_dec_ref(v_opts_4544_);
lean_dec(v___x_4540_);
if (v___x_4547_ == 0)
{
goto v___jp_4440_;
}
else
{
lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4548_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9);
v___x_4549_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_4538_, v___x_4548_, v___y_4437_, v___y_4438_);
if (lean_obj_tag(v___x_4549_) == 0)
{
lean_dec_ref_known(v___x_4549_, 1);
goto v___jp_4440_;
}
else
{
return v___x_4549_;
}
}
}
}
}
v___jp_4550_:
{
lean_object* v___x_4552_; uint8_t v___x_4553_; lean_object* v___x_4554_; uint8_t v___x_4555_; 
v___x_4552_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal;
v___x_4553_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_4447_, v___x_4552_);
v___x_4554_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry;
v___x_4555_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_opts_4447_, v___x_4554_);
if (v___y_4551_ == 0)
{
if (v___x_4553_ == 0)
{
if (v___x_4555_ == 0)
{
lean_object* v___x_4556_; lean_object* v___x_4557_; 
lean_dec_ref(v_opts_4447_);
lean_dec(v_stx_4436_);
v___x_4556_ = lean_box(0);
v___x_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4556_);
return v___x_4557_;
}
else
{
v___y_4515_ = v___y_4551_;
v___y_4516_ = v___x_4555_;
v___y_4517_ = v___x_4553_;
goto v___jp_4514_;
}
}
else
{
v___y_4515_ = v___y_4551_;
v___y_4516_ = v___x_4555_;
v___y_4517_ = v___x_4553_;
goto v___jp_4514_;
}
}
else
{
v___y_4515_ = v___y_4551_;
v___y_4516_ = v___x_4555_;
v___y_4517_ = v___x_4553_;
goto v___jp_4514_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___boxed(lean_object* v_stx_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_){
_start:
{
lean_object* v_res_4566_; 
v_res_4566_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0(v_stx_4562_, v___y_4563_, v___y_4564_);
lean_dec(v___y_4564_);
lean_dec_ref(v___y_4563_);
return v_res_4566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4579_; lean_object* v___x_4580_; 
v___x_4579_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook));
v___x_4580_ = l_Lean_Elab_Command_addLinter(v___x_4579_);
return v___x_4580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2____boxed(lean_object* v_a_4581_){
_start:
{
lean_object* v_res_4582_; 
v_res_4582_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2_();
return v_res_4582_;
}
}
lean_object* runtime_initialize_Init_Try(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Try(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinTerm(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_AutoTry(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_debug_autoTry_showEdits = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_debug_autoTry_showEdits);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1 = _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_AutoTry(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Try(uint8_t builtin);
lean_object* initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Try(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinTerm(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_AutoTry(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_AutoTry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_AutoTry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_AutoTry(builtin);
}
#ifdef __cplusplus
}
#endif
