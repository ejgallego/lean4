// Lean compiler output
// Module: LeanIR
// Imports: public import Init public meta import Init import Lean.CoreM import Lean.Util.ForEachExpr import all Lean.Util.Path import all Lean.Environment import Lean.Compiler.Options import Lean.Compiler.IR.CompilerM import Lean.Compiler.ModPkgExt import all Lean.Compiler.CSimpAttr import Lean.Compiler.LCNF.EmitC import Lean.Language.Lean import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.Main import Lean.Meta.ExprDefEq import Lean.Meta.LevelDefEq import Lean.Meta.Match.MatchEqs import Lean.Elab.PreDefinition.Structural.Eqns import Lean.Parser
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
lean_object* lean_array_uget(lean_object*, size_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Compiler_LCNF_resumeCompilation(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_output;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_serve;
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_export_entries(lean_object*);
lean_object* l_Lean_mkModuleData(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_get_ir_extra_const_names(lean_object*, uint8_t, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_println___at___00Lean_Environment_displayStats_spec__1(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
extern lean_object* l_Lean_instInhabitedClassState_default;
extern lean_object* l_Lean_Meta_Match_Extension_instInhabitedState;
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_inLeanIR;
lean_object* l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_maxHeartbeats;
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_saveModuleDataParts(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_display_cumulative_profiling_times();
lean_object* l_Lean_Environment_displayStats(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_init_search_path();
extern lean_object* l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_IR_declMapExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_setDeclPublic(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_impureSigExt;
extern lean_object* l_Lean_Compiler_CSimp_ext;
extern lean_object* l_Lean_Meta_instanceExtension;
extern lean_object* l_Lean_classExtension;
extern lean_object* l_Lean_Meta_Match_Extension_extension;
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedImportState_default;
lean_object* l_Lean_importModulesCore(lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* l_Lean_withImporting___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__0 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__0_value;
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__1 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unknown option '"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__0 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__0_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__1 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__1_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid -D parameter, argument must contain '='"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__2 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__2_value;
static const lean_ctor_object l___private_LeanIR_0__setConfigOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanIR_0__setConfigOption___closed__2_value)}};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__3 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__3_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "invalid trailing argument `"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__4 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__4_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`, expected argument of the form `-Dopt=val`"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__5 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00main_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00main_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_main___lam__2___closed__0 = (const lean_object*)&l_main___lam__2___closed__0_value;
static const lean_string_object l_main___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_main___lam__2___closed__1 = (const lean_object*)&l_main___lam__2___closed__1_value;
static const lean_string_object l_main___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_main___lam__2___closed__2 = (const lean_object*)&l_main___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_main___lam__2(lean_object*, lean_object*, uint16_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_main___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--stat"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_boxed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0;
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "usage: leanir <setup.json> <output.ir> <output.c> [--stat] <-Dopt=val>..."};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static lean_once_cell_t l_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__1;
static lean_once_cell_t l_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__2;
static lean_once_cell_t l_main___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__3;
static lean_once_cell_t l_main___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__4;
static lean_once_cell_t l_main___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__5;
static lean_once_cell_t l_main___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__6;
static lean_once_cell_t l_main___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__7;
static const lean_ctor_object l_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__8 = (const lean_object*)&l_main___closed__8_value;
static const lean_string_object l_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sig"};
static const lean_object* l_main___closed__9 = (const lean_object*)&l_main___closed__9_value;
static const lean_string_object l_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_main___closed__10 = (const lean_object*)&l_main___closed__10_value;
static const lean_ctor_object l_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__10_value),LEAN_SCALAR_PTR_LITERAL(157, 0, 67, 166, 172, 92, 38, 85)}};
static const lean_object* l_main___closed__11 = (const lean_object*)&l_main___closed__11_value;
static const lean_string_object l_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l_main___closed__12 = (const lean_object*)&l_main___closed__12_value;
static const lean_string_object l_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "failed to create '"};
static const lean_object* l_main___closed__13 = (const lean_object*)&l_main___closed__13_value;
static const lean_string_object l_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "LeanIR"};
static const lean_object* l_main___closed__14 = (const lean_object*)&l_main___closed__14_value;
static const lean_string_object l_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "main"};
static const lean_object* l_main___closed__15 = (const lean_object*)&l_main___closed__15_value;
static const lean_string_object l_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_main___closed__16 = (const lean_object*)&l_main___closed__16_value;
static lean_once_cell_t l_main___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__17;
static const lean_string_object l_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_main___closed__18 = (const lean_object*)&l_main___closed__18_value;
static lean_once_cell_t l_main___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__19;
static lean_once_cell_t l_main___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__20;
static const lean_string_object l_main___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_main___closed__21 = (const lean_object*)&l_main___closed__21_value;
static const lean_ctor_object l_main___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__21_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_main___closed__22 = (const lean_object*)&l_main___closed__22_value;
static const lean_ctor_object l_main___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_main___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__23 = (const lean_object*)&l_main___closed__23_value;
static lean_once_cell_t l_main___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__24;
static lean_once_cell_t l_main___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__25;
static lean_once_cell_t l_main___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__26;
static lean_once_cell_t l_main___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__27;
static const lean_array_object l_main___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__28 = (const lean_object*)&l_main___closed__28_value;
static lean_once_cell_t l_main___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__29;
static lean_once_cell_t l_main___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__30;
static lean_once_cell_t l_main___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__31;
static const lean_array_object l_main___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__32 = (const lean_object*)&l_main___closed__32_value;
static const lean_string_object l_main___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "module '"};
static const lean_object* l_main___closed__33 = (const lean_object*)&l_main___closed__33_value;
static const lean_string_object l_main___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' not found"};
static const lean_object* l_main___closed__34 = (const lean_object*)&l_main___closed__34_value;
static lean_once_cell_t l_main___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_main___closed__35;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* l_main___boxed__const__2;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData(lean_object* v_env_1_){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = 0;
v___x_4_ = lean_box(0);
lean_inc_ref(v_env_1_);
v___x_5_ = l_Lean_mkModuleData(v_env_1_, v___x_3_, v___x_4_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_30_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_30_ == 0)
{
v___x_8_ = v___x_5_;
v_isShared_9_ = v_isSharedCheck_30_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_a_6_);
lean_dec(v___x_5_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_30_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
uint8_t v_isModule_10_; lean_object* v_imports_11_; lean_object* v_constNames_12_; lean_object* v_constants_13_; lean_object* v_entries_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_26_; 
v_isModule_10_ = lean_ctor_get_uint8(v_a_6_, sizeof(void*)*7);
v_imports_11_ = lean_ctor_get(v_a_6_, 0);
v_constNames_12_ = lean_ctor_get(v_a_6_, 1);
v_constants_13_ = lean_ctor_get(v_a_6_, 2);
v_entries_14_ = lean_ctor_get(v_a_6_, 4);
v_isSharedCheck_26_ = !lean_is_exclusive(v_a_6_);
if (v_isSharedCheck_26_ == 0)
{
lean_object* v_unused_27_; lean_object* v_unused_28_; lean_object* v_unused_29_; 
v_unused_27_ = lean_ctor_get(v_a_6_, 6);
lean_dec(v_unused_27_);
v_unused_28_ = lean_ctor_get(v_a_6_, 5);
lean_dec(v_unused_28_);
v_unused_29_ = lean_ctor_get(v_a_6_, 3);
lean_dec(v_unused_29_);
v___x_16_ = v_a_6_;
v_isShared_17_ = v_isSharedCheck_26_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_entries_14_);
lean_inc(v_constants_13_);
lean_inc(v_constNames_12_);
lean_inc(v_imports_11_);
lean_dec(v_a_6_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_26_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
uint8_t v___x_18_; lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_18_ = 0;
v___x_19_ = lean_get_ir_extra_const_names(v_env_1_, v___x_3_, v___x_18_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 6, v___x_4_);
lean_ctor_set(v___x_16_, 5, v___x_4_);
lean_ctor_set(v___x_16_, 3, v___x_19_);
v___x_21_ = v___x_16_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_imports_11_);
lean_ctor_set(v_reuseFailAlloc_25_, 1, v_constNames_12_);
lean_ctor_set(v_reuseFailAlloc_25_, 2, v_constants_13_);
lean_ctor_set(v_reuseFailAlloc_25_, 3, v___x_19_);
lean_ctor_set(v_reuseFailAlloc_25_, 4, v_entries_14_);
lean_ctor_set(v_reuseFailAlloc_25_, 5, v___x_4_);
lean_ctor_set(v_reuseFailAlloc_25_, 6, v___x_4_);
lean_ctor_set_uint8(v_reuseFailAlloc_25_, sizeof(void*)*7, v_isModule_10_);
v___x_21_ = v_reuseFailAlloc_25_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_23_; 
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 0, v___x_21_);
v___x_23_ = v___x_8_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___x_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
}
else
{
lean_dec_ref(v_env_1_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData___boxed(lean_object* v_env_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_LeanIR_0__mkIRSigData(v_env_31_);
return v_res_33_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(lean_object* v_a_34_, lean_object* v_as_35_, size_t v_i_36_, size_t v_stop_37_){
_start:
{
uint8_t v___x_38_; 
v___x_38_ = lean_usize_dec_eq(v_i_36_, v_stop_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = lean_array_uget_borrowed(v_as_35_, v_i_36_);
v___x_40_ = lean_name_eq(v_a_34_, v___x_39_);
if (v___x_40_ == 0)
{
size_t v___x_41_; size_t v___x_42_; 
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_add(v_i_36_, v___x_41_);
v_i_36_ = v___x_42_;
goto _start;
}
else
{
return v___x_40_;
}
}
else
{
uint8_t v___x_44_; 
v___x_44_ = 0;
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1___boxed(lean_object* v_a_45_, lean_object* v_as_46_, lean_object* v_i_47_, lean_object* v_stop_48_){
_start:
{
size_t v_i_boxed_49_; size_t v_stop_boxed_50_; uint8_t v_res_51_; lean_object* v_r_52_; 
v_i_boxed_49_ = lean_unbox_usize(v_i_47_);
lean_dec(v_i_47_);
v_stop_boxed_50_ = lean_unbox_usize(v_stop_48_);
lean_dec(v_stop_48_);
v_res_51_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_45_, v_as_46_, v_i_boxed_49_, v_stop_boxed_50_);
lean_dec_ref(v_as_46_);
lean_dec(v_a_45_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(lean_object* v_as_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_55_ = lean_unsigned_to_nat(0u);
v___x_56_ = lean_array_get_size(v_as_53_);
v___x_57_ = lean_nat_dec_lt(v___x_55_, v___x_56_);
if (v___x_57_ == 0)
{
return v___x_57_;
}
else
{
size_t v___x_58_; size_t v___x_59_; uint8_t v___x_60_; 
v___x_58_ = ((size_t)0ULL);
v___x_59_ = lean_usize_of_nat(v___x_56_);
v___x_60_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_54_, v_as_53_, v___x_58_, v___x_59_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1___boxed(lean_object* v_as_61_, lean_object* v_a_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(v_as_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_as_61_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(lean_object* v_irExtNames_65_, lean_object* v_as_66_, size_t v_i_67_, size_t v_stop_68_, lean_object* v_b_69_){
_start:
{
lean_object* v___y_71_; uint8_t v___x_75_; 
v___x_75_ = lean_usize_dec_eq(v_i_67_, v_stop_68_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v_fst_77_; uint8_t v___x_78_; 
v___x_76_ = lean_array_uget_borrowed(v_as_66_, v_i_67_);
v_fst_77_ = lean_ctor_get(v___x_76_, 0);
v___x_78_ = l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(v_irExtNames_65_, v_fst_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
lean_inc(v___x_76_);
v___x_79_ = lean_array_push(v_b_69_, v___x_76_);
v___y_71_ = v___x_79_;
goto v___jp_70_;
}
else
{
v___y_71_ = v_b_69_;
goto v___jp_70_;
}
}
else
{
return v_b_69_;
}
v___jp_70_:
{
size_t v___x_72_; size_t v___x_73_; 
v___x_72_ = ((size_t)1ULL);
v___x_73_ = lean_usize_add(v_i_67_, v___x_72_);
v_i_67_ = v___x_73_;
v_b_69_ = v___y_71_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2___boxed(lean_object* v_irExtNames_80_, lean_object* v_as_81_, lean_object* v_i_82_, lean_object* v_stop_83_, lean_object* v_b_84_){
_start:
{
size_t v_i_boxed_85_; size_t v_stop_boxed_86_; lean_object* v_res_87_; 
v_i_boxed_85_ = lean_unbox_usize(v_i_82_);
lean_dec(v_i_82_);
v_stop_boxed_86_ = lean_unbox_usize(v_stop_83_);
lean_dec(v_stop_83_);
v_res_87_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_80_, v_as_81_, v_i_boxed_85_, v_stop_boxed_86_, v_b_84_);
lean_dec_ref(v_as_81_);
lean_dec_ref(v_irExtNames_80_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(size_t v_sz_88_, size_t v_i_89_, lean_object* v_bs_90_){
_start:
{
uint8_t v___x_91_; 
v___x_91_ = lean_usize_dec_lt(v_i_89_, v_sz_88_);
if (v___x_91_ == 0)
{
return v_bs_90_;
}
else
{
lean_object* v_v_92_; lean_object* v_fst_93_; lean_object* v___x_94_; lean_object* v_bs_x27_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; 
v_v_92_ = lean_array_uget_borrowed(v_bs_90_, v_i_89_);
v_fst_93_ = lean_ctor_get(v_v_92_, 0);
lean_inc(v_fst_93_);
v___x_94_ = lean_unsigned_to_nat(0u);
v_bs_x27_95_ = lean_array_uset(v_bs_90_, v_i_89_, v___x_94_);
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_add(v_i_89_, v___x_96_);
v___x_98_ = lean_array_uset(v_bs_x27_95_, v_i_89_, v_fst_93_);
v_i_89_ = v___x_97_;
v_bs_90_ = v___x_98_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0___boxed(lean_object* v_sz_100_, lean_object* v_i_101_, lean_object* v_bs_102_){
_start:
{
size_t v_sz_boxed_103_; size_t v_i_boxed_104_; lean_object* v_res_105_; 
v_sz_boxed_103_ = lean_unbox_usize(v_sz_100_);
lean_dec(v_sz_100_);
v_i_boxed_104_ = lean_unbox_usize(v_i_101_);
lean_dec(v_i_101_);
v_res_105_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_boxed_103_, v_i_boxed_104_, v_bs_102_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData(lean_object* v_env_110_){
_start:
{
lean_object* v_irEntries_112_; size_t v_sz_113_; size_t v___x_114_; lean_object* v_irExtNames_115_; uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
lean_inc_ref_n(v_env_110_, 2);
v_irEntries_112_ = lean_ir_export_entries(v_env_110_);
v_sz_113_ = lean_array_size(v_irEntries_112_);
v___x_114_ = ((size_t)0ULL);
lean_inc_ref(v_irEntries_112_);
v_irExtNames_115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_113_, v___x_114_, v_irEntries_112_);
v___x_116_ = 2;
v___x_117_ = lean_box(0);
v___x_118_ = l_Lean_mkModuleData(v_env_110_, v___x_116_, v___x_117_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_143_; 
v_a_119_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_143_ == 0)
{
v___x_121_ = v___x_118_;
v_isShared_122_ = v_isSharedCheck_143_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_118_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_143_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___y_124_; lean_object* v_entries_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_entries_136_ = lean_ctor_get(v_a_119_, 4);
lean_inc_ref(v_entries_136_);
lean_dec(v_a_119_);
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = lean_array_get_size(v_entries_136_);
v___x_139_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__1));
v___x_140_ = lean_nat_dec_lt(v___x_137_, v___x_138_);
if (v___x_140_ == 0)
{
lean_dec_ref(v_entries_136_);
lean_dec_ref(v_irExtNames_115_);
v___y_124_ = v___x_139_;
goto v___jp_123_;
}
else
{
size_t v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_usize_of_nat(v___x_138_);
v___x_142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_115_, v_entries_136_, v___x_114_, v___x_141_, v___x_139_);
lean_dec_ref(v_entries_136_);
lean_dec_ref(v_irExtNames_115_);
v___y_124_ = v___x_142_;
goto v___jp_123_;
}
v___jp_123_:
{
lean_object* v___x_125_; uint8_t v_isModule_126_; lean_object* v_imports_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_125_ = l_Lean_Environment_header(v_env_110_);
v_isModule_126_ = lean_ctor_get_uint8(v___x_125_, sizeof(void*)*8 + 4);
v_imports_127_ = lean_ctor_get(v___x_125_, 1);
lean_inc_ref(v_imports_127_);
lean_dec_ref(v___x_125_);
v___x_128_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__0));
v___x_129_ = 1;
v___x_130_ = lean_get_ir_extra_const_names(v_env_110_, v___x_116_, v___x_129_);
v___x_131_ = l_Array_append___redArg(v_irEntries_112_, v___y_124_);
lean_dec_ref(v___y_124_);
v___x_132_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_132_, 0, v_imports_127_);
lean_ctor_set(v___x_132_, 1, v___x_128_);
lean_ctor_set(v___x_132_, 2, v___x_128_);
lean_ctor_set(v___x_132_, 3, v___x_130_);
lean_ctor_set(v___x_132_, 4, v___x_131_);
lean_ctor_set(v___x_132_, 5, v___x_117_);
lean_ctor_set(v___x_132_, 6, v___x_117_);
lean_ctor_set_uint8(v___x_132_, sizeof(void*)*7, v_isModule_126_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_132_);
v___x_134_ = v___x_121_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v___x_132_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
else
{
lean_dec_ref(v_irExtNames_115_);
lean_dec_ref(v_irEntries_112_);
lean_dec_ref(v_env_110_);
return v___x_118_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object* v_env_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_LeanIR_0__mkIRData(v_env_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object* v_s_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_149_ = lean_string_utf8_byte_size(v_s_148_);
v___x_150_ = lean_unsigned_to_nat(2u);
v___x_151_ = lean_nat_dec_le(v___x_150_, v___x_149_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
lean_dec_ref(v_s_148_);
v___x_152_ = lean_box(0);
return v___x_152_;
}
else
{
lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_153_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0));
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = lean_string_memcmp(v_s_148_, v___x_153_, v___x_154_, v___x_154_, v___x_150_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
lean_dec_ref(v_s_148_);
v___x_156_ = lean_box(0);
return v___x_156_;
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
lean_inc_ref(v_s_148_);
v___x_157_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_157_, 0, v_s_148_);
lean_ctor_set(v___x_157_, 1, v___x_154_);
lean_ctor_set(v___x_157_, 2, v___x_149_);
v___x_158_ = l_String_Slice_pos_x21(v___x_157_, v___x_150_);
lean_dec_ref_known(v___x_157_, 3);
v___x_159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_159_, 0, v_s_148_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
lean_ctor_set(v___x_159_, 2, v___x_149_);
v___x_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object* v_s_161_, lean_object* v_pat_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_s_161_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object* v_s_164_, lean_object* v_pat_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(v_s_164_, v_pat_165_);
lean_dec_ref(v_pat_165_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object* v_val_167_, lean_object* v_a_168_, lean_object* v_b_169_){
_start:
{
lean_object* v_str_170_; lean_object* v_startInclusive_171_; lean_object* v_endExclusive_172_; lean_object* v___x_173_; uint8_t v_decide_174_; 
v_str_170_ = lean_ctor_get(v_val_167_, 0);
v_startInclusive_171_ = lean_ctor_get(v_val_167_, 1);
v_endExclusive_172_ = lean_ctor_get(v_val_167_, 2);
v___x_173_ = lean_nat_sub(v_endExclusive_172_, v_startInclusive_171_);
v_decide_174_ = lean_nat_dec_eq(v_a_168_, v___x_173_);
lean_dec(v___x_173_);
if (v_decide_174_ == 0)
{
lean_object* v___x_175_; uint32_t v___x_176_; uint32_t v___x_177_; uint8_t v___x_178_; 
v___x_175_ = lean_nat_add(v_startInclusive_171_, v_a_168_);
v___x_176_ = lean_string_utf8_get_fast(v_str_170_, v___x_175_);
v___x_177_ = 61;
v___x_178_ = lean_uint32_dec_eq(v___x_176_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_a_168_);
v___x_179_ = lean_box(0);
v___x_180_ = lean_string_utf8_next_fast(v_str_170_, v___x_175_);
lean_dec(v___x_175_);
v___x_181_ = lean_nat_sub(v___x_180_, v_startInclusive_171_);
v_a_168_ = v___x_181_;
v_b_169_ = v___x_179_;
goto _start;
}
else
{
lean_object* v___x_183_; 
lean_dec(v___x_175_);
v___x_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_183_, 0, v_a_168_);
return v___x_183_;
}
}
else
{
lean_dec(v_a_168_);
lean_inc(v_b_169_);
return v_b_169_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object* v_val_184_, lean_object* v_a_185_, lean_object* v_b_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_184_, v_a_185_, v_b_186_);
lean_dec(v_b_186_);
lean_dec_ref(v_val_184_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object* v_opts_195_, lean_object* v_arg_196_){
_start:
{
lean_object* v___x_198_; 
lean_inc_ref(v_arg_196_);
v___x_198_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_arg_196_);
if (lean_obj_tag(v___x_198_) == 1)
{
lean_object* v_val_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_263_; 
lean_dec_ref(v_arg_196_);
v_val_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_263_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_263_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_val_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_263_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___y_204_; lean_object* v_searcher_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_searcher_256_ = lean_unsigned_to_nat(0u);
v___x_257_ = lean_box(0);
v___x_258_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_199_, v_searcher_256_, v___x_257_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_startInclusive_259_; lean_object* v_endExclusive_260_; lean_object* v___x_261_; 
v_startInclusive_259_ = lean_ctor_get(v_val_199_, 1);
v_endExclusive_260_ = lean_ctor_get(v_val_199_, 2);
v___x_261_ = lean_nat_sub(v_endExclusive_260_, v_startInclusive_259_);
v___y_204_ = v___x_261_;
goto v___jp_203_;
}
else
{
lean_object* v_val_262_; 
v_val_262_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_val_262_);
lean_dec_ref_known(v___x_258_, 1);
v___y_204_ = v_val_262_;
goto v___jp_203_;
}
v___jp_203_:
{
lean_object* v_str_205_; lean_object* v_startInclusive_206_; lean_object* v_endExclusive_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_255_; 
v_str_205_ = lean_ctor_get(v_val_199_, 0);
v_startInclusive_206_ = lean_ctor_get(v_val_199_, 1);
v_endExclusive_207_ = lean_ctor_get(v_val_199_, 2);
v_isSharedCheck_255_ = !lean_is_exclusive(v_val_199_);
if (v_isSharedCheck_255_ == 0)
{
v___x_209_ = v_val_199_;
v_isShared_210_ = v_isSharedCheck_255_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_endExclusive_207_);
lean_inc(v_startInclusive_206_);
lean_inc(v_str_205_);
lean_dec(v_val_199_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_255_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_211_; uint8_t v_decide_212_; 
v___x_211_ = lean_nat_sub(v_endExclusive_207_, v_startInclusive_206_);
v_decide_212_ = lean_nat_dec_eq(v___y_204_, v___x_211_);
lean_dec(v___x_211_);
if (v_decide_212_ == 0)
{
lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_213_ = lean_nat_add(v_startInclusive_206_, v___y_204_);
lean_dec(v___y_204_);
lean_inc(v___x_213_);
lean_inc(v_startInclusive_206_);
lean_inc_ref(v_str_205_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 2, v___x_213_);
v___x_215_ = v___x_209_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_str_205_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_startInclusive_206_);
lean_ctor_set(v_reuseFailAlloc_250_, 2, v___x_213_);
v___x_215_ = v_reuseFailAlloc_250_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v_name_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v_val_220_; lean_object* v___x_221_; 
v_name_216_ = l_String_Slice_toName(v___x_215_);
lean_dec_ref(v___x_215_);
v___x_217_ = lean_string_utf8_next_fast(v_str_205_, v___x_213_);
lean_dec(v___x_213_);
v___x_218_ = lean_nat_sub(v___x_217_, v_startInclusive_206_);
v___x_219_ = lean_nat_add(v_startInclusive_206_, v___x_218_);
lean_dec(v___x_218_);
lean_dec(v_startInclusive_206_);
v_val_220_ = lean_string_utf8_extract_fast(v_str_205_, v___x_219_, v_endExclusive_207_);
lean_dec(v_endExclusive_207_);
lean_dec(v___x_219_);
lean_dec_ref(v_str_205_);
v___x_221_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_241_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_241_ == 0)
{
v___x_224_ = v___x_221_;
v_isShared_225_ = v_isSharedCheck_241_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_221_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_241_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; 
v___x_226_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_222_, v_name_216_);
lean_dec(v_a_222_);
if (lean_obj_tag(v___x_226_) == 1)
{
lean_object* v_val_227_; lean_object* v___x_228_; 
lean_del_object(v___x_224_);
lean_del_object(v___x_201_);
v_val_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_227_);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = l_Lean_Language_Lean_setOption(v_opts_195_, v_val_227_, v_name_216_, v_val_220_);
return v___x_228_;
}
else
{
lean_object* v___x_229_; uint8_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
lean_dec(v___x_226_);
lean_dec_ref(v_val_220_);
lean_dec_ref(v_opts_195_);
v___x_229_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__0));
v___x_230_ = 1;
v___x_231_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_216_, v___x_230_);
v___x_232_ = lean_string_append(v___x_229_, v___x_231_);
lean_dec_ref(v___x_231_);
v___x_233_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_234_ = lean_string_append(v___x_232_, v___x_233_);
if (v_isShared_202_ == 0)
{
lean_ctor_set_tag(v___x_201_, 18);
lean_ctor_set(v___x_201_, 0, v___x_234_);
v___x_236_ = v___x_201_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_234_);
v___x_236_ = v_reuseFailAlloc_240_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_238_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 1);
lean_ctor_set(v___x_224_, 0, v___x_236_);
v___x_238_ = v___x_224_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
lean_dec_ref(v_val_220_);
lean_dec(v_name_216_);
lean_del_object(v___x_201_);
lean_dec_ref(v_opts_195_);
v_a_242_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_221_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_221_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
else
{
lean_object* v___x_251_; lean_object* v___x_253_; 
lean_del_object(v___x_209_);
lean_dec(v_endExclusive_207_);
lean_dec(v_startInclusive_206_);
lean_dec_ref(v_str_205_);
lean_dec(v___y_204_);
lean_dec_ref(v_opts_195_);
v___x_251_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__3));
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_251_);
v___x_253_ = v___x_201_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
}
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec(v___x_198_);
lean_dec_ref(v_opts_195_);
v___x_264_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__4));
v___x_265_ = lean_string_append(v___x_264_, v_arg_196_);
lean_dec_ref(v_arg_196_);
v___x_266_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__5));
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
v___x_268_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
return v___x_269_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object* v_opts_270_, lean_object* v_arg_271_, lean_object* v_a_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l___private_LeanIR_0__setConfigOption(v_opts_270_, v_arg_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object* v_val_274_, lean_object* v_inst_275_, lean_object* v_R_276_, lean_object* v_a_277_, lean_object* v_b_278_, lean_object* v_c_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_274_, v_a_277_, v_b_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object* v_val_281_, lean_object* v_inst_282_, lean_object* v_R_283_, lean_object* v_a_284_, lean_object* v_b_285_, lean_object* v_c_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(v_val_281_, v_inst_282_, v_R_283_, v_a_284_, v_b_285_, v_c_286_);
lean_dec(v_b_285_);
lean_dec_ref(v_val_281_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0(lean_object* v___x_288_, lean_object* v_x_289_){
_start:
{
lean_inc_ref(v___x_288_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0___boxed(lean_object* v___x_290_, lean_object* v_x_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_main___elam__0___redArg___lam__0(v___x_290_, v_x_291_);
lean_dec_ref(v_x_291_);
lean_dec_ref(v___x_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object* v___x_293_, uint8_t v___x_294_, lean_object* v_inst_295_, lean_object* v_ext_296_, lean_object* v_env_297_){
_start:
{
lean_object* v_toEnvExtension_299_; lean_object* v_addImportedFn_300_; lean_object* v_asyncMode_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_importedEntries_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_335_; 
v_toEnvExtension_299_ = lean_ctor_get(v_ext_296_, 0);
lean_inc_ref(v_toEnvExtension_299_);
v_addImportedFn_300_ = lean_ctor_get(v_ext_296_, 2);
lean_inc_ref(v_addImportedFn_300_);
lean_dec_ref(v_ext_296_);
v_asyncMode_301_ = lean_ctor_get(v_toEnvExtension_299_, 2);
v___x_302_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v_inst_295_);
lean_inc_ref(v_env_297_);
v___x_303_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_302_, v_toEnvExtension_299_, v_env_297_, v_asyncMode_301_, v___x_293_, v___x_294_);
lean_dec_ref(v___x_302_);
v_importedEntries_304_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_335_ == 0)
{
lean_object* v_unused_336_; 
v_unused_336_ = lean_ctor_get(v___x_303_, 1);
lean_dec(v_unused_336_);
v___x_306_ = v___x_303_;
v_isShared_307_ = v_isSharedCheck_335_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_importedEntries_304_);
lean_dec(v___x_303_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_335_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_308_ = l_Lean_Options_empty;
lean_inc_ref(v_env_297_);
v___x_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_309_, 0, v_env_297_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
lean_inc_ref(v_importedEntries_304_);
v___x_310_ = lean_apply_3(v_addImportedFn_300_, v_importedEntries_304_, v___x_309_, lean_box(0));
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_326_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_326_ == 0)
{
v___x_313_ = v___x_310_;
v_isShared_314_ = v_isSharedCheck_326_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_310_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_326_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v_a_311_);
v___x_316_ = v___x_306_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_importedEntries_304_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_a_311_);
v___x_316_ = v_reuseFailAlloc_325_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___f_317_; lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_323_; 
v___f_317_ = lean_alloc_closure((void*)(l_main___elam__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_317_, 0, v___x_316_);
v___x_318_ = lean_box(0);
v___x_319_ = lean_box(0);
v___x_320_ = 1;
v___x_321_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_299_, v_env_297_, v___f_317_, v___x_318_, v___x_319_, v___x_320_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 0, v___x_321_);
v___x_323_ = v___x_313_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_del_object(v___x_306_);
lean_dec_ref(v_importedEntries_304_);
lean_dec_ref(v_toEnvExtension_299_);
lean_dec_ref(v_env_297_);
v_a_327_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_310_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_310_);
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
}
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object* v___x_337_, lean_object* v___x_338_, lean_object* v_inst_339_, lean_object* v_ext_340_, lean_object* v_env_341_, lean_object* v___y_342_){
_start:
{
uint8_t v___x_37325__boxed_343_; lean_object* v_res_344_; 
v___x_37325__boxed_343_ = lean_unbox(v___x_338_);
v_res_344_ = l_main___elam__0___redArg(v___x_337_, v___x_37325__boxed_343_, v_inst_339_, v_ext_340_, v_env_341_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0(lean_object* v___x_345_, uint8_t v___x_346_, lean_object* v_00_u03b1_347_, lean_object* v_00_u03b2_348_, lean_object* v_00_u03c3_349_, lean_object* v_inst_350_, lean_object* v_ext_351_, lean_object* v_env_352_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_main___elam__0___redArg(v___x_345_, v___x_346_, v_inst_350_, v_ext_351_, v_env_352_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object* v___x_355_, lean_object* v___x_356_, lean_object* v_00_u03b1_357_, lean_object* v_00_u03b2_358_, lean_object* v_00_u03c3_359_, lean_object* v_inst_360_, lean_object* v_ext_361_, lean_object* v_env_362_, lean_object* v___y_363_){
_start:
{
uint8_t v___x_37405__boxed_364_; lean_object* v_res_365_; 
v___x_37405__boxed_364_ = lean_unbox(v___x_356_);
v_res_365_ = l_main___elam__0(v___x_355_, v___x_37405__boxed_364_, v_00_u03b1_357_, v_00_u03b2_358_, v_00_u03c3_359_, v_inst_360_, v_ext_361_, v_env_362_);
return v_res_365_;
}
}
static lean_object* _init_l_panic___at___00main_spec__5___closed__0(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = l_instInhabitedError;
v___x_367_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_367_, 0, lean_box(0));
lean_closure_set(v___x_367_, 1, lean_box(0));
lean_closure_set(v___x_367_, 2, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object* v_msg_368_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_20521__overap_371_; lean_object* v___x_372_; 
v___x_370_ = lean_obj_once(&l_panic___at___00main_spec__5___closed__0, &l_panic___at___00main_spec__5___closed__0_once, _init_l_panic___at___00main_spec__5___closed__0);
v___x_20521__overap_371_ = lean_panic_fn_borrowed(v___x_370_, v_msg_368_);
v___x_372_ = lean_apply_1(v___x_20521__overap_371_, lean_box(0));
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object* v_msg_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_panic___at___00main_spec__5(v_msg_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8(lean_object* v_opts_376_, lean_object* v_opt_377_){
_start:
{
lean_object* v_name_378_; lean_object* v_defValue_379_; lean_object* v_map_380_; lean_object* v___x_381_; 
v_name_378_ = lean_ctor_get(v_opt_377_, 0);
v_defValue_379_ = lean_ctor_get(v_opt_377_, 1);
v_map_380_ = lean_ctor_get(v_opts_376_, 0);
v___x_381_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_380_, v_name_378_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_inc(v_defValue_379_);
return v_defValue_379_;
}
else
{
lean_object* v_val_382_; 
v_val_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_val_382_);
lean_dec_ref_known(v___x_381_, 1);
if (lean_obj_tag(v_val_382_) == 3)
{
lean_object* v_v_383_; 
v_v_383_ = lean_ctor_get(v_val_382_, 0);
lean_inc(v_v_383_);
lean_dec_ref_known(v_val_382_, 1);
return v_v_383_;
}
else
{
lean_dec(v_val_382_);
lean_inc(v_defValue_379_);
return v_defValue_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object* v_opts_384_, lean_object* v_opt_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_Option_get___at___00main_spec__8(v_opts_384_, v_opt_385_);
lean_dec_ref(v_opt_385_);
lean_dec_ref(v_opts_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_main___lam__0(lean_object* v_package_x3f_387_, lean_object* v_ps_388_){
_start:
{
lean_object* v_importedEntries_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
v_importedEntries_389_ = lean_ctor_get(v_ps_388_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v_ps_388_);
if (v_isSharedCheck_396_ == 0)
{
lean_object* v_unused_397_; 
v_unused_397_ = lean_ctor_get(v_ps_388_, 1);
lean_dec(v_unused_397_);
v___x_391_ = v_ps_388_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_importedEntries_389_);
lean_dec(v_ps_388_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 1, v_package_x3f_387_);
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_importedEntries_389_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_package_x3f_387_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object* v_a_398_, lean_object* v_x_399_){
_start:
{
if (lean_obj_tag(v_x_399_) == 0)
{
lean_dec(v_a_398_);
return v_x_399_;
}
else
{
lean_object* v_key_400_; lean_object* v_value_401_; lean_object* v_tail_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_435_; 
v_key_400_ = lean_ctor_get(v_x_399_, 0);
v_value_401_ = lean_ctor_get(v_x_399_, 1);
v_tail_402_ = lean_ctor_get(v_x_399_, 2);
v_isSharedCheck_435_ = !lean_is_exclusive(v_x_399_);
if (v_isSharedCheck_435_ == 0)
{
v___x_404_ = v_x_399_;
v_isShared_405_ = v_isSharedCheck_435_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_tail_402_);
lean_inc(v_value_401_);
lean_inc(v_key_400_);
lean_dec(v_x_399_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_435_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
uint8_t v___x_406_; 
v___x_406_ = lean_name_eq(v_key_400_, v_a_398_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_398_, v_tail_402_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 2, v___x_407_);
v___x_409_ = v___x_404_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_key_400_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v_value_401_);
lean_ctor_set(v_reuseFailAlloc_410_, 2, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
else
{
lean_object* v_toEffectiveImport_411_; lean_object* v_parts_412_; lean_object* v_irParts_413_; uint8_t v_needsIRTrans_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_434_; 
lean_dec(v_key_400_);
v_toEffectiveImport_411_ = lean_ctor_get(v_value_401_, 0);
v_parts_412_ = lean_ctor_get(v_value_401_, 1);
v_irParts_413_ = lean_ctor_get(v_value_401_, 2);
v_needsIRTrans_414_ = lean_ctor_get_uint8(v_value_401_, sizeof(void*)*3);
v_isSharedCheck_434_ = !lean_is_exclusive(v_value_401_);
if (v_isSharedCheck_434_ == 0)
{
v___x_416_ = v_value_401_;
v_isShared_417_ = v_isSharedCheck_434_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_irParts_413_);
lean_inc(v_parts_412_);
lean_inc(v_toEffectiveImport_411_);
lean_dec(v_value_401_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_434_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v_toImport_418_; uint8_t v_hasData_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_433_; 
v_toImport_418_ = lean_ctor_get(v_toEffectiveImport_411_, 0);
v_hasData_419_ = lean_ctor_get_uint8(v_toEffectiveImport_411_, sizeof(void*)*1 + 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v_toEffectiveImport_411_);
if (v_isSharedCheck_433_ == 0)
{
v___x_421_ = v_toEffectiveImport_411_;
v_isShared_422_ = v_isSharedCheck_433_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_toImport_418_);
lean_dec(v_toEffectiveImport_411_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_433_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
uint8_t v___x_423_; lean_object* v___x_425_; 
v___x_423_ = 0;
if (v_isShared_422_ == 0)
{
v___x_425_ = v___x_421_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_toImport_418_);
lean_ctor_set_uint8(v_reuseFailAlloc_432_, sizeof(void*)*1 + 1, v_hasData_419_);
v___x_425_ = v_reuseFailAlloc_432_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_427_; 
lean_ctor_set_uint8(v___x_425_, sizeof(void*)*1, v___x_423_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 0, v___x_425_);
v___x_427_ = v___x_416_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_425_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_parts_412_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v_irParts_413_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3, v_needsIRTrans_414_);
v___x_427_ = v_reuseFailAlloc_431_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v___x_427_);
lean_ctor_set(v___x_404_, 0, v_a_398_);
v___x_429_ = v___x_404_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_398_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_430_, 2, v_tail_402_);
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object* v_m_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_size_438_; lean_object* v_buckets_439_; lean_object* v___x_440_; uint64_t v___y_442_; 
v_size_438_ = lean_ctor_get(v_m_436_, 0);
v_buckets_439_ = lean_ctor_get(v_m_436_, 1);
v___x_440_ = lean_array_get_size(v_buckets_439_);
if (lean_obj_tag(v_a_437_) == 0)
{
uint64_t v___x_469_; 
v___x_469_ = 1723ULL;
v___y_442_ = v___x_469_;
goto v___jp_441_;
}
else
{
uint64_t v_hash_470_; 
v_hash_470_ = lean_ctor_get_uint64(v_a_437_, sizeof(void*)*2);
v___y_442_ = v_hash_470_;
goto v___jp_441_;
}
v___jp_441_:
{
uint64_t v___x_443_; uint64_t v___x_444_; uint64_t v_fold_445_; uint64_t v___x_446_; uint64_t v___x_447_; uint64_t v___x_448_; size_t v___x_449_; size_t v___x_450_; size_t v___x_451_; size_t v___x_452_; size_t v___x_453_; lean_object* v_bucket_454_; uint8_t v___x_455_; 
v___x_443_ = 32ULL;
v___x_444_ = lean_uint64_shift_right(v___y_442_, v___x_443_);
v_fold_445_ = lean_uint64_xor(v___y_442_, v___x_444_);
v___x_446_ = 16ULL;
v___x_447_ = lean_uint64_shift_right(v_fold_445_, v___x_446_);
v___x_448_ = lean_uint64_xor(v_fold_445_, v___x_447_);
v___x_449_ = lean_uint64_to_usize(v___x_448_);
v___x_450_ = lean_usize_of_nat(v___x_440_);
v___x_451_ = ((size_t)1ULL);
v___x_452_ = lean_usize_sub(v___x_450_, v___x_451_);
v___x_453_ = lean_usize_land(v___x_449_, v___x_452_);
v_bucket_454_ = lean_array_uget_borrowed(v_buckets_439_, v___x_453_);
v___x_455_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_a_437_, v_bucket_454_);
if (v___x_455_ == 0)
{
lean_dec(v_a_437_);
return v_m_436_;
}
else
{
lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_466_; 
lean_inc(v_bucket_454_);
lean_inc_ref(v_buckets_439_);
lean_inc(v_size_438_);
v_isSharedCheck_466_ = !lean_is_exclusive(v_m_436_);
if (v_isSharedCheck_466_ == 0)
{
lean_object* v_unused_467_; lean_object* v_unused_468_; 
v_unused_467_ = lean_ctor_get(v_m_436_, 1);
lean_dec(v_unused_467_);
v_unused_468_ = lean_ctor_get(v_m_436_, 0);
lean_dec(v_unused_468_);
v___x_457_ = v_m_436_;
v_isShared_458_ = v_isSharedCheck_466_;
goto v_resetjp_456_;
}
else
{
lean_dec(v_m_436_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_466_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v_buckets_460_; lean_object* v_bucket_461_; lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_459_ = lean_box(0);
v_buckets_460_ = lean_array_uset(v_buckets_439_, v___x_453_, v___x_459_);
v_bucket_461_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_437_, v_bucket_454_);
v___x_462_ = lean_array_uset(v_buckets_460_, v___x_453_, v_bucket_461_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 1, v___x_462_);
v___x_464_ = v___x_457_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_size_438_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__1(lean_object* v___x_471_, lean_object* v___x_472_, uint8_t v___x_473_, lean_object* v_importArts_474_, uint8_t v___y_475_, uint8_t v___x_476_, lean_object* v_name_477_, lean_object* v___x_478_, uint8_t v___x_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_st_mk_ref(v___x_471_);
v___x_482_ = l_Lean_importModulesCore(v___x_472_, v___x_473_, v_importArts_474_, v___y_475_, v___x_476_, v___x_481_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v___x_483_; lean_object* v_moduleNameMap_484_; lean_object* v_moduleNames_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_495_; 
lean_dec_ref_known(v___x_482_, 1);
v___x_483_ = lean_st_ref_get(v___x_481_);
lean_dec(v___x_481_);
v_moduleNameMap_484_ = lean_ctor_get(v___x_483_, 0);
v_moduleNames_485_ = lean_ctor_get(v___x_483_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_495_ == 0)
{
v___x_487_ = v___x_483_;
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_moduleNames_485_);
lean_inc(v_moduleNameMap_484_);
lean_dec(v___x_483_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_491_; 
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(v_moduleNameMap_484_, v_name_477_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_489_);
v___x_491_ = v___x_487_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_moduleNames_485_);
v___x_491_ = v_reuseFailAlloc_494_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
uint32_t v___x_492_; lean_object* v___x_493_; 
v___x_492_ = 0;
v___x_493_ = l_Lean_finalizeImport(v___x_491_, v___x_472_, v___x_478_, v___x_492_, v___x_476_, v___x_479_, v___x_473_, v___x_476_, v___x_476_);
return v___x_493_;
}
}
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
lean_dec(v___x_481_);
lean_dec_ref(v___x_478_);
lean_dec(v_name_477_);
lean_dec_ref(v___x_472_);
v_a_496_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_482_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_482_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object* v___x_504_, lean_object* v___x_505_, lean_object* v___x_506_, lean_object* v_importArts_507_, lean_object* v___y_508_, lean_object* v___x_509_, lean_object* v_name_510_, lean_object* v___x_511_, lean_object* v___x_512_, lean_object* v___y_513_){
_start:
{
uint8_t v___x_37573__boxed_514_; uint8_t v___y_37574__boxed_515_; uint8_t v___x_37575__boxed_516_; uint8_t v___x_37577__boxed_517_; lean_object* v_res_518_; 
v___x_37573__boxed_514_ = lean_unbox(v___x_506_);
v___y_37574__boxed_515_ = lean_unbox(v___y_508_);
v___x_37575__boxed_516_ = lean_unbox(v___x_509_);
v___x_37577__boxed_517_ = lean_unbox(v___x_512_);
v_res_518_ = l_main___lam__1(v___x_504_, v___x_505_, v___x_37573__boxed_514_, v_importArts_507_, v___y_37574__boxed_515_, v___x_37575__boxed_516_, v_name_510_, v___x_511_, v___x_37577__boxed_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_main___lam__2(lean_object* v___x_522_, lean_object* v___x_523_, uint16_t v___x_524_, lean_object* v_name_525_, lean_object* v_a_526_, uint8_t v___x_527_, lean_object* v___x_528_, lean_object* v_head_529_, lean_object* v___x_530_, lean_object* v___x_531_, lean_object* v___x_532_, lean_object* v___x_533_, lean_object* v___x_534_, lean_object* v___x_535_, lean_object* v___x_536_, lean_object* v___x_537_, uint8_t v___x_538_, uint8_t v___x_539_, uint8_t v___x_540_){
_start:
{
lean_object* v_a_543_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v_fileName_549_; lean_object* v_fileMap_550_; lean_object* v_currNamespace_551_; lean_object* v_openDecls_552_; lean_object* v_initHeartbeats_553_; lean_object* v_maxHeartbeats_554_; lean_object* v_quotContext_555_; lean_object* v_currMacroScope_556_; lean_object* v_cancelTk_x3f_557_; lean_object* v_inheritedTraceOptions_558_; lean_object* v_currRecDepth_559_; lean_object* v_ref_560_; uint8_t v_suppressElabErrors_561_; uint8_t v_checkDeprecated_562_; uint8_t v_isRecordingDeps_563_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v_nextMacroScope_598_; lean_object* v_ngen_599_; lean_object* v_auxDeclNGen_600_; lean_object* v_traceState_601_; lean_object* v_recordedDeps_602_; lean_object* v_messages_603_; lean_object* v_infoState_604_; lean_object* v_snapshotTasks_605_; lean_object* v___y_606_; lean_object* v___x_609_; uint8_t v___y_611_; lean_object* v_env_628_; uint8_t v___x_629_; uint16_t v___x_630_; uint16_t v___x_631_; uint16_t v___x_632_; uint8_t v___x_633_; 
v___x_546_ = lean_io_get_num_heartbeats();
v___x_547_ = lean_st_mk_ref(v___x_522_);
v___x_595_ = l_Lean_inheritedTraceOptions;
v___x_596_ = lean_st_ref_get(v___x_595_);
v___x_609_ = lean_st_ref_get(v___x_547_);
v_env_628_ = lean_ctor_get(v___x_609_, 0);
lean_inc_ref(v_env_628_);
lean_dec(v___x_609_);
v___x_629_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_628_);
lean_dec_ref(v_env_628_);
v___x_630_ = 512;
v___x_631_ = lean_uint16_land(v___x_524_, v___x_630_);
v___x_632_ = 0;
v___x_633_ = lean_uint16_dec_eq(v___x_631_, v___x_632_);
if (v___x_633_ == 0)
{
if (v___x_629_ == 0)
{
v___y_611_ = v___x_629_;
goto v___jp_610_;
}
else
{
lean_dec_ref(v___x_528_);
lean_inc(v___x_531_);
v_fileName_549_ = v_head_529_;
v_fileMap_550_ = v___x_530_;
v_currNamespace_551_ = v___x_531_;
v_openDecls_552_ = v___x_532_;
v_initHeartbeats_553_ = v___x_546_;
v_maxHeartbeats_554_ = v___x_533_;
v_quotContext_555_ = v___x_531_;
v_currMacroScope_556_ = v___x_534_;
v_cancelTk_x3f_557_ = v___x_535_;
v_inheritedTraceOptions_558_ = v___x_596_;
v_currRecDepth_559_ = v___x_536_;
v_ref_560_ = v___x_537_;
v_suppressElabErrors_561_ = v___x_538_;
v_checkDeprecated_562_ = v___x_539_;
v_isRecordingDeps_563_ = v___x_538_;
goto v___jp_548_;
}
}
else
{
if (v___x_629_ == 0)
{
lean_dec_ref(v___x_528_);
lean_inc(v___x_531_);
v_fileName_549_ = v_head_529_;
v_fileMap_550_ = v___x_530_;
v_currNamespace_551_ = v___x_531_;
v_openDecls_552_ = v___x_532_;
v_initHeartbeats_553_ = v___x_546_;
v_maxHeartbeats_554_ = v___x_533_;
v_quotContext_555_ = v___x_531_;
v_currMacroScope_556_ = v___x_534_;
v_cancelTk_x3f_557_ = v___x_535_;
v_inheritedTraceOptions_558_ = v___x_596_;
v_currRecDepth_559_ = v___x_536_;
v_ref_560_ = v___x_537_;
v_suppressElabErrors_561_ = v___x_538_;
v_checkDeprecated_562_ = v___x_539_;
v_isRecordingDeps_563_ = v___x_538_;
goto v___jp_548_;
}
else
{
v___y_611_ = v___x_540_;
goto v___jp_610_;
}
}
v___jp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_mk_io_user_error(v_a_543_);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
return v___x_545_;
}
v___jp_548_:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_564_ = l_Lean_maxRecDepth;
v___x_565_ = l_Lean_Option_get___at___00main_spec__8(v___x_523_, v___x_564_);
v___x_566_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_566_, 0, v_fileName_549_);
lean_ctor_set(v___x_566_, 1, v_fileMap_550_);
lean_ctor_set(v___x_566_, 2, v___x_523_);
lean_ctor_set(v___x_566_, 3, v___x_565_);
lean_ctor_set(v___x_566_, 4, v_currNamespace_551_);
lean_ctor_set(v___x_566_, 5, v_openDecls_552_);
lean_ctor_set(v___x_566_, 6, v_initHeartbeats_553_);
lean_ctor_set(v___x_566_, 7, v_maxHeartbeats_554_);
lean_ctor_set(v___x_566_, 8, v_quotContext_555_);
lean_ctor_set(v___x_566_, 9, v_currMacroScope_556_);
lean_ctor_set(v___x_566_, 10, v_cancelTk_x3f_557_);
lean_ctor_set(v___x_566_, 11, v_inheritedTraceOptions_558_);
v___x_567_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v_currRecDepth_559_);
lean_ctor_set(v___x_567_, 2, v_ref_560_);
lean_ctor_set_uint16(v___x_567_, sizeof(void*)*3, v___x_524_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*3 + 2, v_suppressElabErrors_561_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*3 + 3, v_checkDeprecated_562_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*3 + 4, v_isRecordingDeps_563_);
v___x_568_ = l_Lean_Compiler_LCNF_emitC(v_name_525_, v___x_567_, v___x_547_);
lean_dec_ref_known(v___x_567_, 3);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_568_, 1);
v___x_570_ = lean_st_ref_get(v___x_547_);
lean_dec(v___x_547_);
lean_dec(v___x_570_);
v___x_571_ = lean_string_to_utf8(v_a_569_);
v___x_572_ = lean_io_prim_handle_write(v_a_526_, v___x_571_);
lean_dec_ref(v___x_571_);
return v___x_572_;
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_594_; 
lean_dec(v___x_547_);
v_a_573_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_594_ == 0)
{
v___x_575_ = v___x_568_;
v_isShared_576_ = v_isSharedCheck_594_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_568_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_594_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
if (lean_obj_tag(v_a_573_) == 0)
{
lean_object* v_msg_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_581_; 
v_msg_577_ = lean_ctor_get(v_a_573_, 1);
lean_inc_ref(v_msg_577_);
lean_dec_ref_known(v_a_573_, 2);
v___x_578_ = l_Lean_MessageData_toString(v_msg_577_);
v___x_579_ = lean_mk_io_user_error(v___x_578_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_579_);
v___x_581_ = v___x_575_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v___x_579_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
else
{
lean_object* v_id_583_; lean_object* v___x_584_; 
lean_del_object(v___x_575_);
v_id_583_ = lean_ctor_get(v_a_573_, 0);
lean_inc(v_id_583_);
lean_dec_ref_known(v_a_573_, 2);
v___x_584_ = l_Lean_InternalExceptionId_getName(v_id_583_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
lean_dec(v_id_583_);
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = ((lean_object*)(l_main___lam__2___closed__0));
v___x_587_ = l_Lean_Name_toString(v_a_585_, v___x_527_);
v___x_588_ = lean_string_append(v___x_586_, v___x_587_);
lean_dec_ref(v___x_587_);
v_a_543_ = v___x_588_;
goto v___jp_542_;
}
else
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
lean_dec_ref_known(v___x_584_, 1);
v___x_589_ = ((lean_object*)(l_main___lam__2___closed__1));
v___x_590_ = l_Nat_reprFast(v_id_583_);
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
lean_dec_ref(v___x_590_);
v___x_592_ = ((lean_object*)(l_main___lam__2___closed__2));
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
v_a_543_ = v___x_593_;
goto v___jp_542_;
}
}
}
}
}
v___jp_597_:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_607_, 0, v___y_606_);
lean_ctor_set(v___x_607_, 1, v_nextMacroScope_598_);
lean_ctor_set(v___x_607_, 2, v_ngen_599_);
lean_ctor_set(v___x_607_, 3, v_auxDeclNGen_600_);
lean_ctor_set(v___x_607_, 4, v_traceState_601_);
lean_ctor_set(v___x_607_, 5, v___x_528_);
lean_ctor_set(v___x_607_, 6, v_recordedDeps_602_);
lean_ctor_set(v___x_607_, 7, v_messages_603_);
lean_ctor_set(v___x_607_, 8, v_infoState_604_);
lean_ctor_set(v___x_607_, 9, v_snapshotTasks_605_);
v___x_608_ = lean_st_ref_put(v___x_547_, v___x_607_);
lean_inc(v___x_531_);
v_fileName_549_ = v_head_529_;
v_fileMap_550_ = v___x_530_;
v_currNamespace_551_ = v___x_531_;
v_openDecls_552_ = v___x_532_;
v_initHeartbeats_553_ = v___x_546_;
v_maxHeartbeats_554_ = v___x_533_;
v_quotContext_555_ = v___x_531_;
v_currMacroScope_556_ = v___x_534_;
v_cancelTk_x3f_557_ = v___x_535_;
v_inheritedTraceOptions_558_ = v___x_596_;
v_currRecDepth_559_ = v___x_536_;
v_ref_560_ = v___x_537_;
v_suppressElabErrors_561_ = v___x_538_;
v_checkDeprecated_562_ = v___x_539_;
v_isRecordingDeps_563_ = v___x_538_;
goto v___jp_548_;
}
v___jp_610_:
{
lean_object* v___x_612_; lean_object* v_env_613_; lean_object* v_nextMacroScope_614_; lean_object* v_ngen_615_; lean_object* v_auxDeclNGen_616_; lean_object* v_traceState_617_; lean_object* v_recordedDeps_618_; lean_object* v_messages_619_; lean_object* v_infoState_620_; lean_object* v_snapshotTasks_621_; uint16_t v___x_622_; uint16_t v___x_623_; uint16_t v___x_624_; uint8_t v___x_625_; 
v___x_612_ = lean_st_ref_take(v___x_547_);
v_env_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc_ref(v_env_613_);
v_nextMacroScope_614_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_nextMacroScope_614_);
v_ngen_615_ = lean_ctor_get(v___x_612_, 2);
lean_inc_ref(v_ngen_615_);
v_auxDeclNGen_616_ = lean_ctor_get(v___x_612_, 3);
lean_inc_ref(v_auxDeclNGen_616_);
v_traceState_617_ = lean_ctor_get(v___x_612_, 4);
lean_inc_ref(v_traceState_617_);
v_recordedDeps_618_ = lean_ctor_get(v___x_612_, 6);
lean_inc_ref(v_recordedDeps_618_);
v_messages_619_ = lean_ctor_get(v___x_612_, 7);
lean_inc_ref(v_messages_619_);
v_infoState_620_ = lean_ctor_get(v___x_612_, 8);
lean_inc_ref(v_infoState_620_);
v_snapshotTasks_621_ = lean_ctor_get(v___x_612_, 9);
lean_inc_ref(v_snapshotTasks_621_);
lean_dec(v___x_612_);
v___x_622_ = 512;
v___x_623_ = lean_uint16_land(v___x_524_, v___x_622_);
v___x_624_ = 0;
v___x_625_ = lean_uint16_dec_eq(v___x_623_, v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; 
v___x_626_ = l_Lean_Kernel_enableDiag(v_env_613_, v___x_527_);
v_nextMacroScope_598_ = v_nextMacroScope_614_;
v_ngen_599_ = v_ngen_615_;
v_auxDeclNGen_600_ = v_auxDeclNGen_616_;
v_traceState_601_ = v_traceState_617_;
v_recordedDeps_602_ = v_recordedDeps_618_;
v_messages_603_ = v_messages_619_;
v_infoState_604_ = v_infoState_620_;
v_snapshotTasks_605_ = v_snapshotTasks_621_;
v___y_606_ = v___x_626_;
goto v___jp_597_;
}
else
{
lean_object* v___x_627_; 
v___x_627_ = l_Lean_Kernel_enableDiag(v_env_613_, v___y_611_);
v_nextMacroScope_598_ = v_nextMacroScope_614_;
v_ngen_599_ = v_ngen_615_;
v_auxDeclNGen_600_ = v_auxDeclNGen_616_;
v_traceState_601_ = v_traceState_617_;
v_recordedDeps_602_ = v_recordedDeps_618_;
v_messages_603_ = v_messages_619_;
v_infoState_604_ = v_infoState_620_;
v_snapshotTasks_605_ = v_snapshotTasks_621_;
v___y_606_ = v___x_627_;
goto v___jp_597_;
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__2___boxed(lean_object** _args){
lean_object* v___x_634_ = _args[0];
lean_object* v___x_635_ = _args[1];
lean_object* v___x_636_ = _args[2];
lean_object* v_name_637_ = _args[3];
lean_object* v_a_638_ = _args[4];
lean_object* v___x_639_ = _args[5];
lean_object* v___x_640_ = _args[6];
lean_object* v_head_641_ = _args[7];
lean_object* v___x_642_ = _args[8];
lean_object* v___x_643_ = _args[9];
lean_object* v___x_644_ = _args[10];
lean_object* v___x_645_ = _args[11];
lean_object* v___x_646_ = _args[12];
lean_object* v___x_647_ = _args[13];
lean_object* v___x_648_ = _args[14];
lean_object* v___x_649_ = _args[15];
lean_object* v___x_650_ = _args[16];
lean_object* v___x_651_ = _args[17];
lean_object* v___x_652_ = _args[18];
lean_object* v___y_653_ = _args[19];
_start:
{
uint16_t v___x_37646__boxed_654_; uint8_t v___x_37648__boxed_655_; uint8_t v___x_37659__boxed_656_; uint8_t v___x_37660__boxed_657_; uint8_t v___x_37661__boxed_658_; lean_object* v_res_659_; 
v___x_37646__boxed_654_ = lean_unbox(v___x_636_);
v___x_37648__boxed_655_ = lean_unbox(v___x_639_);
v___x_37659__boxed_656_ = lean_unbox(v___x_650_);
v___x_37660__boxed_657_ = lean_unbox(v___x_651_);
v___x_37661__boxed_658_ = lean_unbox(v___x_652_);
v_res_659_ = l_main___lam__2(v___x_634_, v___x_635_, v___x_37646__boxed_654_, v_name_637_, v_a_638_, v___x_37648__boxed_655_, v___x_640_, v_head_641_, v___x_642_, v___x_643_, v___x_644_, v___x_645_, v___x_646_, v___x_647_, v___x_648_, v___x_649_, v___x_37659__boxed_656_, v___x_37660__boxed_657_, v___x_37661__boxed_658_);
lean_dec(v_a_638_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_main___lam__3(lean_object* v___x_660_, lean_object* v_x_661_){
_start:
{
lean_inc_ref(v___x_660_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_main___lam__3___boxed(lean_object* v___x_662_, lean_object* v_x_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_main___lam__3(v___x_662_, v_x_663_);
lean_dec_ref(v_x_663_);
lean_dec_ref(v___x_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object* v_x2_665_, lean_object* v_as_666_, size_t v_i_667_, size_t v_stop_668_, lean_object* v_b_669_){
_start:
{
uint8_t v___x_670_; 
v___x_670_ = lean_usize_dec_eq(v_i_667_, v_stop_668_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; size_t v___x_673_; size_t v___x_674_; 
v___x_671_ = lean_array_uget_borrowed(v_as_666_, v_i_667_);
lean_inc_ref(v_x2_665_);
lean_inc(v___x_671_);
v___x_672_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_671_, v_x2_665_, v_b_669_);
v___x_673_ = ((size_t)1ULL);
v___x_674_ = lean_usize_add(v_i_667_, v___x_673_);
v_i_667_ = v___x_674_;
v_b_669_ = v___x_672_;
goto _start;
}
else
{
lean_dec_ref(v_x2_665_);
return v_b_669_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object* v_x2_676_, lean_object* v_as_677_, lean_object* v_i_678_, lean_object* v_stop_679_, lean_object* v_b_680_){
_start:
{
size_t v_i_boxed_681_; size_t v_stop_boxed_682_; lean_object* v_res_683_; 
v_i_boxed_681_ = lean_unbox_usize(v_i_678_);
lean_dec(v_i_678_);
v_stop_boxed_682_ = lean_unbox_usize(v_stop_679_);
lean_dec(v_stop_679_);
v_res_683_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v_x2_676_, v_as_677_, v_i_boxed_681_, v_stop_boxed_682_, v_b_680_);
lean_dec_ref(v_as_677_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(lean_object* v_as_684_, size_t v_i_685_, size_t v_stop_686_, lean_object* v_b_687_){
_start:
{
lean_object* v___y_689_; uint8_t v___x_693_; 
v___x_693_ = lean_usize_dec_eq(v_i_685_, v_stop_686_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; lean_object* v_declNames_695_; lean_object* v___x_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v___x_694_ = lean_array_uget_borrowed(v_as_684_, v_i_685_);
v_declNames_695_ = lean_ctor_get(v___x_694_, 0);
v___x_696_ = lean_unsigned_to_nat(0u);
v___x_697_ = lean_array_get_size(v_declNames_695_);
v___x_698_ = lean_nat_dec_lt(v___x_696_, v___x_697_);
if (v___x_698_ == 0)
{
v___y_689_ = v_b_687_;
goto v___jp_688_;
}
else
{
size_t v___x_699_; size_t v___x_700_; lean_object* v___x_701_; 
v___x_699_ = ((size_t)0ULL);
v___x_700_ = lean_usize_of_nat(v___x_697_);
lean_inc(v___x_694_);
v___x_701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v___x_694_, v_declNames_695_, v___x_699_, v___x_700_, v_b_687_);
v___y_689_ = v___x_701_;
goto v___jp_688_;
}
}
else
{
return v_b_687_;
}
v___jp_688_:
{
size_t v___x_690_; size_t v___x_691_; 
v___x_690_ = ((size_t)1ULL);
v___x_691_ = lean_usize_add(v_i_685_, v___x_690_);
v_i_685_ = v___x_691_;
v_b_687_ = v___y_689_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14___boxed(lean_object* v_as_702_, lean_object* v_i_703_, lean_object* v_stop_704_, lean_object* v_b_705_){
_start:
{
size_t v_i_boxed_706_; size_t v_stop_boxed_707_; lean_object* v_res_708_; 
v_i_boxed_706_ = lean_unbox_usize(v_i_703_);
lean_dec(v_i_703_);
v_stop_boxed_707_ = lean_unbox_usize(v_stop_704_);
lean_dec(v_stop_704_);
v_res_708_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(v_as_702_, v_i_boxed_706_, v_stop_boxed_707_, v_b_705_);
lean_dec_ref(v_as_702_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object* v_s_709_){
_start:
{
lean_object* v___x_711_; lean_object* v_putStr_712_; lean_object* v___x_713_; 
v___x_711_ = lean_get_stderr();
v_putStr_712_ = lean_ctor_get(v___x_711_, 4);
lean_inc_ref(v_putStr_712_);
lean_dec_ref(v___x_711_);
v___x_713_ = lean_apply_2(v_putStr_712_, v_s_709_, lean_box(0));
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object* v_s_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v_s_714_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object* v_s_717_){
_start:
{
uint32_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = 10;
v___x_720_ = lean_string_push(v_s_717_, v___x_719_);
v___x_721_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v___x_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object* v_s_722_, lean_object* v_a_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_IO_eprintln___at___00main_spec__6(v_s_722_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object* v_o_728_, lean_object* v_k_729_, lean_object* v_v_730_){
_start:
{
lean_object* v_map_731_; uint8_t v_hasTrace_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_746_; 
v_map_731_ = lean_ctor_get(v_o_728_, 0);
v_hasTrace_732_ = lean_ctor_get_uint8(v_o_728_, sizeof(void*)*1);
v_isSharedCheck_746_ = !lean_is_exclusive(v_o_728_);
if (v_isSharedCheck_746_ == 0)
{
v___x_734_ = v_o_728_;
v_isShared_735_ = v_isSharedCheck_746_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_map_731_);
lean_dec(v_o_728_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_746_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_736_, 0, v_v_730_);
lean_inc(v_k_729_);
v___x_737_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_729_, v___x_736_, v_map_731_);
if (v_hasTrace_732_ == 0)
{
lean_object* v___x_738_; uint8_t v___x_739_; lean_object* v___x_741_; 
v___x_738_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_739_ = l_Lean_Name_isPrefixOf(v___x_738_, v_k_729_);
lean_dec(v_k_729_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 0, v___x_737_);
v___x_741_ = v___x_734_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_737_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_ctor_set_uint8(v___x_741_, sizeof(void*)*1, v___x_739_);
return v___x_741_;
}
}
else
{
lean_object* v___x_744_; 
lean_dec(v_k_729_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 0, v___x_737_);
v___x_744_ = v___x_734_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_737_);
lean_ctor_set_uint8(v_reuseFailAlloc_745_, sizeof(void*)*1, v_hasTrace_732_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object* v_opts_747_, lean_object* v_opt_748_, lean_object* v_val_749_){
_start:
{
lean_object* v_name_750_; lean_object* v___x_751_; 
v_name_750_ = lean_ctor_get(v_opt_748_, 0);
lean_inc(v_name_750_);
lean_dec_ref(v_opt_748_);
v___x_751_ = l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(v_opts_747_, v_name_750_, v_val_749_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object* v_as_752_, size_t v_i_753_, size_t v_stop_754_, lean_object* v_b_755_){
_start:
{
uint8_t v___x_756_; 
v___x_756_ = lean_usize_dec_eq(v_i_753_, v_stop_754_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; lean_object* v_name_758_; lean_object* v___x_759_; size_t v___x_760_; size_t v___x_761_; 
v___x_757_ = lean_array_uget_borrowed(v_as_752_, v_i_753_);
v_name_758_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_name_758_);
v___x_759_ = l_Lean_Compiler_LCNF_setDeclPublic(v_b_755_, v_name_758_);
v___x_760_ = ((size_t)1ULL);
v___x_761_ = lean_usize_add(v_i_753_, v___x_760_);
v_i_753_ = v___x_761_;
v_b_755_ = v___x_759_;
goto _start;
}
else
{
return v_b_755_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object* v_as_763_, lean_object* v_i_764_, lean_object* v_stop_765_, lean_object* v_b_766_){
_start:
{
size_t v_i_boxed_767_; size_t v_stop_boxed_768_; lean_object* v_res_769_; 
v_i_boxed_767_ = lean_unbox_usize(v_i_764_);
lean_dec(v_i_764_);
v_stop_boxed_768_ = lean_unbox_usize(v_stop_765_);
lean_dec(v_stop_765_);
v_res_769_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v_as_763_, v_i_boxed_767_, v_stop_boxed_768_, v_b_766_);
lean_dec_ref(v_as_763_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object* v_as_x27_771_, lean_object* v_b_772_){
_start:
{
if (lean_obj_tag(v_as_x27_771_) == 0)
{
lean_object* v___x_774_; 
v___x_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_774_, 0, v_b_772_);
return v___x_774_;
}
else
{
lean_object* v_head_775_; lean_object* v_tail_776_; lean_object* v_fst_777_; lean_object* v_snd_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_803_; 
v_head_775_ = lean_ctor_get(v_as_x27_771_, 0);
v_tail_776_ = lean_ctor_get(v_as_x27_771_, 1);
v_fst_777_ = lean_ctor_get(v_b_772_, 0);
v_snd_778_ = lean_ctor_get(v_b_772_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v_b_772_);
if (v_isSharedCheck_803_ == 0)
{
v___x_780_ = v_b_772_;
v_isShared_781_ = v_isSharedCheck_803_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_snd_778_);
lean_inc(v_fst_777_);
lean_dec(v_b_772_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_803_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_782_; uint8_t v___x_783_; 
v___x_782_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0));
v___x_783_ = lean_string_dec_eq(v_head_775_, v___x_782_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; 
lean_inc(v_head_775_);
v___x_784_ = l___private_LeanIR_0__setConfigOption(v_snd_778_, v_head_775_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_784_, 1);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 1, v_a_785_);
v___x_787_ = v___x_780_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_fst_777_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_a_785_);
v___x_787_ = v_reuseFailAlloc_789_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
v_as_x27_771_ = v_tail_776_;
v_b_772_ = v___x_787_;
goto _start;
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_del_object(v___x_780_);
lean_dec(v_fst_777_);
v_a_790_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_784_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_784_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
else
{
lean_object* v___x_798_; lean_object* v___x_800_; 
lean_dec(v_fst_777_);
v___x_798_ = lean_box(v___x_783_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 0, v___x_798_);
v___x_800_ = v___x_780_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_798_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_snd_778_);
v___x_800_ = v_reuseFailAlloc_802_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
v_as_x27_771_ = v_tail_776_;
v_b_772_ = v___x_800_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object* v_as_x27_804_, lean_object* v_b_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_804_, v_b_805_);
lean_dec(v_as_x27_804_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object* v_a_808_, lean_object* v_as_809_, size_t v_i_810_, size_t v_stop_811_, lean_object* v_b_812_){
_start:
{
lean_object* v___y_814_; uint8_t v___x_818_; 
v___x_818_ = lean_usize_dec_eq(v_i_810_, v_stop_811_);
if (v___x_818_ == 0)
{
lean_object* v___x_819_; lean_object* v_name_820_; uint8_t v___x_821_; 
v___x_819_ = lean_array_uget_borrowed(v_as_809_, v_i_810_);
v_name_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc(v_name_820_);
lean_inc_ref(v_a_808_);
v___x_821_ = l_Lean_isExtern(v_a_808_, v_name_820_);
if (v___x_821_ == 0)
{
v___y_814_ = v_b_812_;
goto v___jp_813_;
}
else
{
lean_object* v___x_822_; 
lean_inc(v___x_819_);
v___x_822_ = lean_array_push(v_b_812_, v___x_819_);
v___y_814_ = v___x_822_;
goto v___jp_813_;
}
}
else
{
lean_dec_ref(v_a_808_);
return v_b_812_;
}
v___jp_813_:
{
size_t v___x_815_; size_t v___x_816_; 
v___x_815_ = ((size_t)1ULL);
v___x_816_ = lean_usize_add(v_i_810_, v___x_815_);
v_i_810_ = v___x_816_;
v_b_812_ = v___y_814_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object* v_a_823_, lean_object* v_as_824_, lean_object* v_i_825_, lean_object* v_stop_826_, lean_object* v_b_827_){
_start:
{
size_t v_i_boxed_828_; size_t v_stop_boxed_829_; lean_object* v_res_830_; 
v_i_boxed_828_ = lean_unbox_usize(v_i_825_);
lean_dec(v_i_825_);
v_stop_boxed_829_ = lean_unbox_usize(v_stop_826_);
lean_dec(v_stop_826_);
v_res_830_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v_a_823_, v_as_824_, v_i_boxed_828_, v_stop_boxed_829_, v_b_827_);
lean_dec_ref(v_as_824_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0(lean_object* v_addEntryFn_831_, lean_object* v___x_832_, lean_object* v_s_833_){
_start:
{
lean_object* v_importedEntries_834_; lean_object* v_state_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_843_; 
v_importedEntries_834_ = lean_ctor_get(v_s_833_, 0);
v_state_835_ = lean_ctor_get(v_s_833_, 1);
v_isSharedCheck_843_ = !lean_is_exclusive(v_s_833_);
if (v_isSharedCheck_843_ == 0)
{
v___x_837_ = v_s_833_;
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_state_835_);
lean_inc(v_importedEntries_834_);
lean_dec(v_s_833_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v_state_839_; lean_object* v___x_841_; 
v_state_839_ = lean_apply_2(v_addEntryFn_831_, v_state_835_, v___x_832_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 1, v_state_839_);
v___x_841_ = v___x_837_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_importedEntries_834_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v_state_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object* v_as_844_, size_t v_i_845_, size_t v_stop_846_, lean_object* v_b_847_){
_start:
{
lean_object* v___y_849_; uint8_t v___x_853_; 
v___x_853_ = lean_usize_dec_eq(v_i_845_, v_stop_846_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; lean_object* v_toEnvExtension_855_; lean_object* v_addEntryFn_856_; lean_object* v_asyncMode_857_; uint8_t v_logWrites_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___f_861_; uint8_t v___x_862_; 
v___x_854_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_855_ = lean_ctor_get(v___x_854_, 0);
v_addEntryFn_856_ = lean_ctor_get(v___x_854_, 3);
v_asyncMode_857_ = lean_ctor_get(v_toEnvExtension_855_, 2);
v_logWrites_858_ = lean_ctor_get_uint8(v_toEnvExtension_855_, sizeof(void*)*6);
v___x_859_ = lean_box(0);
v___x_860_ = lean_array_uget_borrowed(v_as_844_, v_i_845_);
lean_inc(v___x_860_);
lean_inc(v_addEntryFn_856_);
v___f_861_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0), 3, 2);
lean_closure_set(v___f_861_, 0, v_addEntryFn_856_);
lean_closure_set(v___f_861_, 1, v___x_860_);
v___x_862_ = 1;
if (v_logWrites_858_ == 0)
{
lean_object* v___x_863_; 
lean_inc_ref(v_toEnvExtension_855_);
v___x_863_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_855_, v_b_847_, v___f_861_, v_asyncMode_857_, v___x_859_, v___x_862_);
v___y_849_ = v___x_863_;
goto v___jp_848_;
}
else
{
lean_object* v___x_864_; lean_object* v___x_865_; 
lean_inc_ref_n(v_toEnvExtension_855_, 2);
v___x_864_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v_toEnvExtension_855_, v_b_847_);
lean_dec_ref(v_b_847_);
v___x_865_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_855_, v___x_864_, v___f_861_, v_asyncMode_857_, v___x_859_, v___x_862_);
v___y_849_ = v___x_865_;
goto v___jp_848_;
}
}
else
{
return v_b_847_;
}
v___jp_848_:
{
size_t v___x_850_; size_t v___x_851_; 
v___x_850_ = ((size_t)1ULL);
v___x_851_ = lean_usize_add(v_i_845_, v___x_850_);
v_i_845_ = v___x_851_;
v_b_847_ = v___y_849_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object* v_as_866_, lean_object* v_i_867_, lean_object* v_stop_868_, lean_object* v_b_869_){
_start:
{
size_t v_i_boxed_870_; size_t v_stop_boxed_871_; lean_object* v_res_872_; 
v_i_boxed_870_ = lean_unbox_usize(v_i_867_);
lean_dec(v_i_867_);
v_stop_boxed_871_ = lean_unbox_usize(v_stop_868_);
lean_dec(v_stop_868_);
v_res_872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v_as_866_, v_i_boxed_870_, v_stop_boxed_871_, v_b_869_);
lean_dec_ref(v_as_866_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object* v___y_874_, lean_object* v_as_875_, size_t v_i_876_, size_t v_stop_877_, lean_object* v_b_878_){
_start:
{
lean_object* v___y_880_; uint8_t v___x_884_; 
v___x_884_ = lean_usize_dec_eq(v_i_876_, v_stop_877_);
if (v___x_884_ == 0)
{
lean_object* v_fst_885_; lean_object* v_snd_886_; lean_object* v___x_887_; lean_object* v___y_889_; lean_object* v___x_903_; 
v_fst_885_ = lean_ctor_get(v_b_878_, 0);
v_snd_886_ = lean_ctor_get(v_b_878_, 1);
v___x_887_ = lean_array_uget_borrowed(v_as_875_, v_i_876_);
v___x_903_ = l_Lean_IR_Decl_name(v___x_887_);
if (lean_obj_tag(v___x_903_) == 1)
{
lean_object* v_pre_904_; lean_object* v_str_905_; lean_object* v___x_906_; uint8_t v___x_907_; 
v_pre_904_ = lean_ctor_get(v___x_903_, 0);
v_str_905_ = lean_ctor_get(v___x_903_, 1);
v___x_906_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0));
v___x_907_ = lean_string_dec_eq(v_str_905_, v___x_906_);
if (v___x_907_ == 0)
{
v___y_889_ = v___x_903_;
goto v___jp_888_;
}
else
{
lean_inc(v_pre_904_);
lean_dec_ref_known(v___x_903_, 2);
v___y_889_ = v_pre_904_;
goto v___jp_888_;
}
}
else
{
v___y_889_ = v___x_903_;
goto v___jp_888_;
}
v___jp_888_:
{
uint8_t v___x_890_; 
lean_inc_ref(v___y_874_);
v___x_890_ = l_Lean_isExtern(v___y_874_, v___y_889_);
if (v___x_890_ == 0)
{
v___y_880_ = v_b_878_;
goto v___jp_879_;
}
else
{
lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_900_; 
lean_inc(v_snd_886_);
lean_inc(v_fst_885_);
v_isSharedCheck_900_ = !lean_is_exclusive(v_b_878_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; lean_object* v_unused_902_; 
v_unused_901_ = lean_ctor_get(v_b_878_, 1);
lean_dec(v_unused_901_);
v_unused_902_ = lean_ctor_get(v_b_878_, 0);
lean_dec(v_unused_902_);
v___x_892_ = v_b_878_;
v_isShared_893_ = v_isSharedCheck_900_;
goto v_resetjp_891_;
}
else
{
lean_dec(v_b_878_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_900_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; 
lean_inc_n(v___x_887_, 2);
v___x_894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_887_);
lean_ctor_set(v___x_894_, 1, v_fst_885_);
v___x_895_ = l_Lean_IR_Decl_name(v___x_887_);
v___x_896_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(v_snd_886_, v___x_895_, v___x_887_);
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 1, v___x_896_);
lean_ctor_set(v___x_892_, 0, v___x_894_);
v___x_898_ = v___x_892_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v___x_896_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
v___y_880_ = v___x_898_;
goto v___jp_879_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_874_);
return v_b_878_;
}
v___jp_879_:
{
size_t v___x_881_; size_t v___x_882_; 
v___x_881_ = ((size_t)1ULL);
v___x_882_ = lean_usize_add(v_i_876_, v___x_881_);
v_i_876_ = v___x_882_;
v_b_878_ = v___y_880_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object* v___y_908_, lean_object* v_as_909_, lean_object* v_i_910_, lean_object* v_stop_911_, lean_object* v_b_912_){
_start:
{
size_t v_i_boxed_913_; size_t v_stop_boxed_914_; lean_object* v_res_915_; 
v_i_boxed_913_ = lean_unbox_usize(v_i_910_);
lean_dec(v_i_910_);
v_stop_boxed_914_ = lean_unbox_usize(v_stop_911_);
lean_dec(v_stop_911_);
v_res_915_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_908_, v_as_909_, v_i_boxed_913_, v_stop_boxed_914_, v_b_912_);
lean_dec_ref(v_as_909_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(lean_object* v_as_919_, size_t v_sz_920_, size_t v_i_921_, lean_object* v_b_922_){
_start:
{
uint8_t v___x_924_; 
v___x_924_ = lean_usize_dec_lt(v_i_921_, v_sz_920_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; 
v___x_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_925_, 0, v_b_922_);
return v___x_925_;
}
else
{
uint8_t v___x_926_; lean_object* v_a_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec_ref(v_b_922_);
v___x_926_ = 0;
v_a_927_ = lean_array_uget_borrowed(v_as_919_, v_i_921_);
lean_inc(v_a_927_);
v___x_928_ = l_Lean_Message_toString(v_a_927_, v___x_926_);
v___x_929_ = l_IO_eprintln___at___00main_spec__6(v___x_928_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_930_; size_t v___x_931_; size_t v___x_932_; 
lean_dec_ref_known(v___x_929_, 1);
v___x_930_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_931_ = ((size_t)1ULL);
v___x_932_ = lean_usize_add(v_i_921_, v___x_931_);
v_i_921_ = v___x_932_;
v_b_922_ = v___x_930_;
goto _start;
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
v_a_934_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_929_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_929_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___boxed(lean_object* v_as_942_, lean_object* v_sz_943_, lean_object* v_i_944_, lean_object* v_b_945_, lean_object* v___y_946_){
_start:
{
size_t v_sz_boxed_947_; size_t v_i_boxed_948_; lean_object* v_res_949_; 
v_sz_boxed_947_ = lean_unbox_usize(v_sz_943_);
lean_dec(v_sz_943_);
v_i_boxed_948_ = lean_unbox_usize(v_i_944_);
lean_dec(v_i_944_);
v_res_949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(v_as_942_, v_sz_boxed_947_, v_i_boxed_948_, v_b_945_);
lean_dec_ref(v_as_942_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object* v_as_950_, size_t v_sz_951_, size_t v_i_952_, lean_object* v_b_953_){
_start:
{
uint8_t v___x_955_; 
v___x_955_ = lean_usize_dec_lt(v_i_952_, v_sz_951_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; 
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v_b_953_);
return v___x_956_;
}
else
{
uint8_t v___x_957_; lean_object* v_a_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
lean_dec_ref(v_b_953_);
v___x_957_ = 0;
v_a_958_ = lean_array_uget_borrowed(v_as_950_, v_i_952_);
lean_inc(v_a_958_);
v___x_959_ = l_Lean_Message_toString(v_a_958_, v___x_957_);
v___x_960_ = l_IO_eprintln___at___00main_spec__6(v___x_959_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v___x_961_; size_t v___x_962_; size_t v___x_963_; lean_object* v___x_964_; 
lean_dec_ref_known(v___x_960_, 1);
v___x_961_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_962_ = ((size_t)1ULL);
v___x_963_ = lean_usize_add(v_i_952_, v___x_962_);
v___x_964_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(v_as_950_, v_sz_951_, v___x_963_, v___x_961_);
return v___x_964_;
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
v_a_965_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_960_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_960_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object* v_as_973_, lean_object* v_sz_974_, lean_object* v_i_975_, lean_object* v_b_976_, lean_object* v___y_977_){
_start:
{
size_t v_sz_boxed_978_; size_t v_i_boxed_979_; lean_object* v_res_980_; 
v_sz_boxed_978_ = lean_unbox_usize(v_sz_974_);
lean_dec(v_sz_974_);
v_i_boxed_979_ = lean_unbox_usize(v_i_975_);
lean_dec(v_i_975_);
v_res_980_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_as_973_, v_sz_boxed_978_, v_i_boxed_979_, v_b_976_);
lean_dec_ref(v_as_973_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object* v_init_981_, lean_object* v_n_982_, lean_object* v_b_983_){
_start:
{
if (lean_obj_tag(v_n_982_) == 0)
{
lean_object* v_cs_985_; lean_object* v___x_986_; lean_object* v___x_987_; size_t v_sz_988_; size_t v___x_989_; lean_object* v___x_990_; 
v_cs_985_ = lean_ctor_get(v_n_982_, 0);
v___x_986_ = lean_box(0);
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v_b_983_);
v_sz_988_ = lean_array_size(v_cs_985_);
v___x_989_ = ((size_t)0ULL);
v___x_990_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(v_init_981_, v_cs_985_, v_sz_988_, v___x_989_, v___x_987_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1005_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_1005_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1005_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v_fst_995_; 
v_fst_995_ = lean_ctor_get(v_a_991_, 0);
if (lean_obj_tag(v_fst_995_) == 0)
{
lean_object* v_snd_996_; lean_object* v___x_997_; lean_object* v___x_999_; 
v_snd_996_ = lean_ctor_get(v_a_991_, 1);
lean_inc(v_snd_996_);
lean_dec(v_a_991_);
v___x_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_997_, 0, v_snd_996_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v___x_997_);
v___x_999_ = v___x_993_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_997_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
else
{
lean_object* v_val_1001_; lean_object* v___x_1003_; 
lean_inc_ref(v_fst_995_);
lean_dec(v_a_991_);
v_val_1001_ = lean_ctor_get(v_fst_995_, 0);
lean_inc(v_val_1001_);
lean_dec_ref_known(v_fst_995_, 1);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v_val_1001_);
v___x_1003_ = v___x_993_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_val_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
v_a_1006_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_990_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_990_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
else
{
lean_object* v_vs_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; size_t v_sz_1017_; size_t v___x_1018_; lean_object* v___x_1019_; 
v_vs_1014_ = lean_ctor_get(v_n_982_, 0);
v___x_1015_ = lean_box(0);
v___x_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v_b_983_);
v_sz_1017_ = lean_array_size(v_vs_1014_);
v___x_1018_ = ((size_t)0ULL);
v___x_1019_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_vs_1014_, v_sz_1017_, v___x_1018_, v___x_1016_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1034_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1034_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1034_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v_fst_1024_; 
v_fst_1024_ = lean_ctor_get(v_a_1020_, 0);
if (lean_obj_tag(v_fst_1024_) == 0)
{
lean_object* v_snd_1025_; lean_object* v___x_1026_; lean_object* v___x_1028_; 
v_snd_1025_ = lean_ctor_get(v_a_1020_, 1);
lean_inc(v_snd_1025_);
lean_dec(v_a_1020_);
v___x_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1026_, 0, v_snd_1025_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1026_);
v___x_1028_ = v___x_1022_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
else
{
lean_object* v_val_1030_; lean_object* v___x_1032_; 
lean_inc_ref(v_fst_1024_);
lean_dec(v_a_1020_);
v_val_1030_ = lean_ctor_get(v_fst_1024_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v_fst_1024_, 1);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v_val_1030_);
v___x_1032_ = v___x_1022_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_val_1030_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
v_a_1035_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1019_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1019_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(lean_object* v_init_1043_, lean_object* v_as_1044_, size_t v_sz_1045_, size_t v_i_1046_, lean_object* v_b_1047_){
_start:
{
uint8_t v___x_1049_; 
v___x_1049_ = lean_usize_dec_lt(v_i_1046_, v_sz_1045_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1050_, 0, v_b_1047_);
return v___x_1050_;
}
else
{
lean_object* v_snd_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1085_; 
v_snd_1051_ = lean_ctor_get(v_b_1047_, 1);
v_isSharedCheck_1085_ = !lean_is_exclusive(v_b_1047_);
if (v_isSharedCheck_1085_ == 0)
{
lean_object* v_unused_1086_; 
v_unused_1086_ = lean_ctor_get(v_b_1047_, 0);
lean_dec(v_unused_1086_);
v___x_1053_ = v_b_1047_;
v_isShared_1054_ = v_isSharedCheck_1085_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_snd_1051_);
lean_dec(v_b_1047_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1085_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v_a_1056_; lean_object* v___x_1057_; 
v___x_1055_ = lean_box(0);
v_a_1056_ = lean_array_uget_borrowed(v_as_1044_, v_i_1046_);
lean_inc(v_snd_1051_);
v___x_1057_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1043_, v_a_1056_, v_snd_1051_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1076_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1060_ = v___x_1057_;
v_isShared_1061_ = v_isSharedCheck_1076_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1057_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1076_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
if (lean_obj_tag(v_a_1058_) == 0)
{
lean_object* v___x_1062_; lean_object* v___x_1064_; 
v___x_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1062_, 0, v_a_1058_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1062_);
v___x_1064_ = v___x_1053_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1062_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v_snd_1051_);
v___x_1064_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_object* v___x_1066_; 
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 0, v___x_1064_);
v___x_1066_ = v___x_1060_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; 
lean_del_object(v___x_1060_);
lean_dec(v_snd_1051_);
v_a_1069_ = lean_ctor_get(v_a_1058_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v_a_1058_, 1);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 1, v_a_1069_);
lean_ctor_set(v___x_1053_, 0, v___x_1055_);
v___x_1071_ = v___x_1053_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1055_);
lean_ctor_set(v_reuseFailAlloc_1075_, 1, v_a_1069_);
v___x_1071_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
size_t v___x_1072_; size_t v___x_1073_; 
v___x_1072_ = ((size_t)1ULL);
v___x_1073_ = lean_usize_add(v_i_1046_, v___x_1072_);
v_i_1046_ = v___x_1073_;
v_b_1047_ = v___x_1071_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
lean_del_object(v___x_1053_);
lean_dec(v_snd_1051_);
v_a_1077_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1057_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1057_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12___boxed(lean_object* v_init_1087_, lean_object* v_as_1088_, lean_object* v_sz_1089_, lean_object* v_i_1090_, lean_object* v_b_1091_, lean_object* v___y_1092_){
_start:
{
size_t v_sz_boxed_1093_; size_t v_i_boxed_1094_; lean_object* v_res_1095_; 
v_sz_boxed_1093_ = lean_unbox_usize(v_sz_1089_);
lean_dec(v_sz_1089_);
v_i_boxed_1094_ = lean_unbox_usize(v_i_1090_);
lean_dec(v_i_1090_);
v_res_1095_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(v_init_1087_, v_as_1088_, v_sz_boxed_1093_, v_i_boxed_1094_, v_b_1091_);
lean_dec_ref(v_as_1088_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object* v_init_1096_, lean_object* v_n_1097_, lean_object* v_b_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1096_, v_n_1097_, v_b_1098_);
lean_dec_ref(v_n_1097_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(lean_object* v_as_1104_, size_t v_sz_1105_, size_t v_i_1106_, lean_object* v_b_1107_){
_start:
{
uint8_t v___x_1109_; 
v___x_1109_ = lean_usize_dec_lt(v_i_1106_, v_sz_1105_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1110_; 
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v_b_1107_);
return v___x_1110_;
}
else
{
uint8_t v___x_1111_; lean_object* v_a_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
lean_dec_ref(v_b_1107_);
v___x_1111_ = 0;
v_a_1112_ = lean_array_uget_borrowed(v_as_1104_, v_i_1106_);
lean_inc(v_a_1112_);
v___x_1113_ = l_Lean_Message_toString(v_a_1112_, v___x_1111_);
v___x_1114_ = l_IO_eprintln___at___00main_spec__6(v___x_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v___x_1115_; size_t v___x_1116_; size_t v___x_1117_; 
lean_dec_ref_known(v___x_1114_, 1);
v___x_1115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_1116_ = ((size_t)1ULL);
v___x_1117_ = lean_usize_add(v_i_1106_, v___x_1116_);
v_i_1106_ = v___x_1117_;
v_b_1107_ = v___x_1115_;
goto _start;
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1114_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1114_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___boxed(lean_object* v_as_1127_, lean_object* v_sz_1128_, lean_object* v_i_1129_, lean_object* v_b_1130_, lean_object* v___y_1131_){
_start:
{
size_t v_sz_boxed_1132_; size_t v_i_boxed_1133_; lean_object* v_res_1134_; 
v_sz_boxed_1132_ = lean_unbox_usize(v_sz_1128_);
lean_dec(v_sz_1128_);
v_i_boxed_1133_ = lean_unbox_usize(v_i_1129_);
lean_dec(v_i_1129_);
v_res_1134_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(v_as_1127_, v_sz_boxed_1132_, v_i_boxed_1133_, v_b_1130_);
lean_dec_ref(v_as_1127_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object* v_as_1135_, size_t v_sz_1136_, size_t v_i_1137_, lean_object* v_b_1138_){
_start:
{
uint8_t v___x_1140_; 
v___x_1140_ = lean_usize_dec_lt(v_i_1137_, v_sz_1136_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v_b_1138_);
return v___x_1141_;
}
else
{
uint8_t v___x_1142_; lean_object* v_a_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
lean_dec_ref(v_b_1138_);
v___x_1142_ = 0;
v_a_1143_ = lean_array_uget_borrowed(v_as_1135_, v_i_1137_);
lean_inc(v_a_1143_);
v___x_1144_ = l_Lean_Message_toString(v_a_1143_, v___x_1142_);
v___x_1145_ = l_IO_eprintln___at___00main_spec__6(v___x_1144_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v___x_1146_; size_t v___x_1147_; size_t v___x_1148_; lean_object* v___x_1149_; 
lean_dec_ref_known(v___x_1145_, 1);
v___x_1146_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_1147_ = ((size_t)1ULL);
v___x_1148_ = lean_usize_add(v_i_1137_, v___x_1147_);
v___x_1149_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(v_as_1135_, v_sz_1136_, v___x_1148_, v___x_1146_);
return v___x_1149_;
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
v_a_1150_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1145_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1145_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object* v_as_1158_, lean_object* v_sz_1159_, lean_object* v_i_1160_, lean_object* v_b_1161_, lean_object* v___y_1162_){
_start:
{
size_t v_sz_boxed_1163_; size_t v_i_boxed_1164_; lean_object* v_res_1165_; 
v_sz_boxed_1163_ = lean_unbox_usize(v_sz_1159_);
lean_dec(v_sz_1159_);
v_i_boxed_1164_ = lean_unbox_usize(v_i_1160_);
lean_dec(v_i_1160_);
v_res_1165_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_as_1158_, v_sz_boxed_1163_, v_i_boxed_1164_, v_b_1161_);
lean_dec_ref(v_as_1158_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object* v_t_1166_, lean_object* v_init_1167_){
_start:
{
lean_object* v_root_1169_; lean_object* v_tail_1170_; lean_object* v___x_1171_; 
v_root_1169_ = lean_ctor_get(v_t_1166_, 0);
v_tail_1170_ = lean_ctor_get(v_t_1166_, 1);
v___x_1171_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1167_, v_root_1169_, v_init_1167_);
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1208_; 
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1174_ = v___x_1171_;
v_isShared_1175_ = v_isSharedCheck_1208_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1171_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1208_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
if (lean_obj_tag(v_a_1172_) == 0)
{
lean_object* v_a_1176_; lean_object* v___x_1178_; 
v_a_1176_ = lean_ctor_get(v_a_1172_, 0);
lean_inc(v_a_1176_);
lean_dec_ref_known(v_a_1172_, 1);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 0, v_a_1176_);
v___x_1178_ = v___x_1174_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; size_t v_sz_1183_; size_t v___x_1184_; lean_object* v___x_1185_; 
lean_del_object(v___x_1174_);
v_a_1180_ = lean_ctor_get(v_a_1172_, 0);
lean_inc(v_a_1180_);
lean_dec_ref_known(v_a_1172_, 1);
v___x_1181_ = lean_box(0);
v___x_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
lean_ctor_set(v___x_1182_, 1, v_a_1180_);
v_sz_1183_ = lean_array_size(v_tail_1170_);
v___x_1184_ = ((size_t)0ULL);
v___x_1185_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_tail_1170_, v_sz_1183_, v___x_1184_, v___x_1182_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1199_; 
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1188_ = v___x_1185_;
v_isShared_1189_ = v_isSharedCheck_1199_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1185_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1199_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v_fst_1190_; 
v_fst_1190_ = lean_ctor_get(v_a_1186_, 0);
if (lean_obj_tag(v_fst_1190_) == 0)
{
lean_object* v_snd_1191_; lean_object* v___x_1193_; 
v_snd_1191_ = lean_ctor_get(v_a_1186_, 1);
lean_inc(v_snd_1191_);
lean_dec(v_a_1186_);
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 0, v_snd_1191_);
v___x_1193_ = v___x_1188_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_snd_1191_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
else
{
lean_object* v_val_1195_; lean_object* v___x_1197_; 
lean_inc_ref(v_fst_1190_);
lean_dec(v_a_1186_);
v_val_1195_ = lean_ctor_get(v_fst_1190_, 0);
lean_inc(v_val_1195_);
lean_dec_ref_known(v_fst_1190_, 1);
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 0, v_val_1195_);
v___x_1197_ = v___x_1188_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_val_1195_);
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
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
v_a_1200_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1185_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1185_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
v_a_1209_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1171_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1171_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object* v_t_1217_, lean_object* v_init_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_t_1217_, v_init_1218_);
lean_dec_ref(v_t_1217_);
return v_res_1220_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(uint8_t v___x_1228_, lean_object* v_x_1229_){
_start:
{
if (lean_obj_tag(v_x_1229_) == 1)
{
lean_object* v_pre_1230_; 
v_pre_1230_ = lean_ctor_get(v_x_1229_, 0);
switch(lean_obj_tag(v_pre_1230_))
{
case 1:
{
lean_object* v_pre_1231_; 
v_pre_1231_ = lean_ctor_get(v_pre_1230_, 0);
switch(lean_obj_tag(v_pre_1231_))
{
case 0:
{
lean_object* v_str_1232_; lean_object* v_str_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v_str_1232_ = lean_ctor_get(v_x_1229_, 1);
v_str_1233_ = lean_ctor_get(v_pre_1230_, 1);
v___x_1234_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0));
v___x_1235_ = lean_string_dec_eq(v_str_1233_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; uint8_t v___x_1237_; 
v___x_1236_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1));
v___x_1237_ = lean_string_dec_eq(v_str_1233_, v___x_1236_);
if (v___x_1237_ == 0)
{
return v___x_1237_;
}
else
{
lean_object* v___x_1238_; uint8_t v___x_1239_; 
v___x_1238_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2));
v___x_1239_ = lean_string_dec_eq(v_str_1232_, v___x_1238_);
return v___x_1239_;
}
}
else
{
lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1240_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3));
v___x_1241_ = lean_string_dec_eq(v_str_1232_, v___x_1240_);
return v___x_1241_;
}
}
case 1:
{
lean_object* v_pre_1242_; 
v_pre_1242_ = lean_ctor_get(v_pre_1231_, 0);
if (lean_obj_tag(v_pre_1242_) == 0)
{
lean_object* v_str_1243_; lean_object* v_str_1244_; lean_object* v_str_1245_; lean_object* v___x_1246_; uint8_t v___x_1247_; 
v_str_1243_ = lean_ctor_get(v_x_1229_, 1);
v_str_1244_ = lean_ctor_get(v_pre_1230_, 1);
v_str_1245_ = lean_ctor_get(v_pre_1231_, 1);
v___x_1246_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4));
v___x_1247_ = lean_string_dec_eq(v_str_1245_, v___x_1246_);
if (v___x_1247_ == 0)
{
return v___x_1247_;
}
else
{
lean_object* v___x_1248_; uint8_t v___x_1249_; 
v___x_1248_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5));
v___x_1249_ = lean_string_dec_eq(v_str_1244_, v___x_1248_);
if (v___x_1249_ == 0)
{
return v___x_1249_;
}
else
{
lean_object* v___x_1250_; uint8_t v___x_1251_; 
v___x_1250_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6));
v___x_1251_ = lean_string_dec_eq(v_str_1243_, v___x_1250_);
return v___x_1251_;
}
}
}
else
{
return v___x_1228_;
}
}
default: 
{
return v___x_1228_;
}
}
}
case 0:
{
lean_object* v_str_1252_; lean_object* v___x_1253_; uint8_t v___x_1254_; 
v_str_1252_ = lean_ctor_get(v_x_1229_, 1);
v___x_1253_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_1254_ = lean_string_dec_eq(v_str_1252_, v___x_1253_);
return v___x_1254_;
}
default: 
{
return v___x_1228_;
}
}
}
else
{
return v___x_1228_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed(lean_object* v___x_1255_, lean_object* v_x_1256_){
_start:
{
uint8_t v___x_38597__boxed_1257_; uint8_t v_res_1258_; lean_object* v_r_1259_; 
v___x_38597__boxed_1257_ = lean_unbox(v___x_1255_);
v_res_1258_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(v___x_38597__boxed_1257_, v_x_1256_);
lean_dec(v_x_1256_);
v_r_1259_ = lean_box(v_res_1258_);
return v_r_1259_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(lean_object* v_opts_1260_, lean_object* v_opt_1261_){
_start:
{
lean_object* v_name_1262_; lean_object* v_defValue_1263_; lean_object* v_map_1264_; lean_object* v___x_1265_; 
v_name_1262_ = lean_ctor_get(v_opt_1261_, 0);
v_defValue_1263_ = lean_ctor_get(v_opt_1261_, 1);
v_map_1264_ = lean_ctor_get(v_opts_1260_, 0);
v___x_1265_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1264_, v_name_1262_);
if (lean_obj_tag(v___x_1265_) == 0)
{
uint8_t v___x_1266_; 
v___x_1266_ = lean_unbox(v_defValue_1263_);
return v___x_1266_;
}
else
{
lean_object* v_val_1267_; 
v_val_1267_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_val_1267_);
lean_dec_ref_known(v___x_1265_, 1);
if (lean_obj_tag(v_val_1267_) == 1)
{
uint8_t v_v_1268_; 
v_v_1268_ = lean_ctor_get_uint8(v_val_1267_, 0);
lean_dec_ref_known(v_val_1267_, 0);
return v_v_1268_;
}
else
{
uint8_t v___x_1269_; 
lean_dec(v_val_1267_);
v___x_1269_ = lean_unbox(v_defValue_1263_);
return v___x_1269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15___boxed(lean_object* v_opts_1270_, lean_object* v_opt_1271_){
_start:
{
uint8_t v_res_1272_; lean_object* v_r_1273_; 
v_res_1272_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v_opts_1270_, v_opt_1271_);
lean_dec_ref(v_opt_1271_);
lean_dec_ref(v_opts_1270_);
v_r_1273_ = lean_box(v_res_1272_);
return v_r_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(lean_object* v_ref_1278_, lean_object* v_msgData_1279_, uint8_t v_severity_1280_, uint8_t v_isSilent_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; uint8_t v___y_1290_; uint8_t v___y_1291_; lean_object* v___y_1292_; lean_object* v_toCold_1293_; lean_object* v___y_1294_; lean_object* v___y_1323_; lean_object* v___y_1324_; lean_object* v___y_1325_; uint8_t v___y_1326_; uint8_t v___y_1327_; uint8_t v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; uint8_t v___y_1353_; uint8_t v___y_1354_; uint8_t v___y_1355_; lean_object* v___y_1356_; uint8_t v___y_1360_; uint8_t v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = 2;
v___x_1378_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1280_, v___x_1377_);
if (v___x_1378_ == 0)
{
goto v___jp_1370_;
}
else
{
uint8_t v___x_1379_; 
lean_inc_ref(v_msgData_1279_);
v___x_1379_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1279_);
if (v___x_1379_ == 0)
{
goto v___jp_1370_;
}
else
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
lean_dec_ref(v_msgData_1279_);
v___x_1380_ = lean_box(0);
v___x_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
return v___x_1381_;
}
}
v___jp_1285_:
{
lean_object* v_currNamespace_1295_; lean_object* v_openDecls_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v_env_1301_; lean_object* v_nextMacroScope_1302_; lean_object* v_ngen_1303_; lean_object* v_auxDeclNGen_1304_; lean_object* v_traceState_1305_; lean_object* v_cache_1306_; lean_object* v_recordedDeps_1307_; lean_object* v_messages_1308_; lean_object* v_infoState_1309_; lean_object* v_snapshotTasks_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1321_; 
v_currNamespace_1295_ = lean_ctor_get(v_toCold_1293_, 4);
v_openDecls_1296_ = lean_ctor_get(v_toCold_1293_, 5);
lean_inc(v_openDecls_1296_);
lean_inc(v_currNamespace_1295_);
v___x_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1297_, 0, v_currNamespace_1295_);
lean_ctor_set(v___x_1297_, 1, v_openDecls_1296_);
v___x_1298_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
lean_ctor_set(v___x_1298_, 1, v___y_1292_);
lean_inc_ref(v___y_1286_);
lean_inc_ref(v___y_1288_);
v___x_1299_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1299_, 0, v___y_1288_);
lean_ctor_set(v___x_1299_, 1, v___y_1287_);
lean_ctor_set(v___x_1299_, 2, v___y_1289_);
lean_ctor_set(v___x_1299_, 3, v___y_1286_);
lean_ctor_set(v___x_1299_, 4, v___x_1298_);
lean_ctor_set_uint8(v___x_1299_, sizeof(void*)*5, v___y_1290_);
lean_ctor_set_uint8(v___x_1299_, sizeof(void*)*5 + 1, v___y_1291_);
lean_ctor_set_uint8(v___x_1299_, sizeof(void*)*5 + 2, v_isSilent_1281_);
v___x_1300_ = lean_st_ref_take(v___y_1294_);
v_env_1301_ = lean_ctor_get(v___x_1300_, 0);
v_nextMacroScope_1302_ = lean_ctor_get(v___x_1300_, 1);
v_ngen_1303_ = lean_ctor_get(v___x_1300_, 2);
v_auxDeclNGen_1304_ = lean_ctor_get(v___x_1300_, 3);
v_traceState_1305_ = lean_ctor_get(v___x_1300_, 4);
v_cache_1306_ = lean_ctor_get(v___x_1300_, 5);
v_recordedDeps_1307_ = lean_ctor_get(v___x_1300_, 6);
v_messages_1308_ = lean_ctor_get(v___x_1300_, 7);
v_infoState_1309_ = lean_ctor_get(v___x_1300_, 8);
v_snapshotTasks_1310_ = lean_ctor_get(v___x_1300_, 9);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1312_ = v___x_1300_;
v_isShared_1313_ = v_isSharedCheck_1321_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_snapshotTasks_1310_);
lean_inc(v_infoState_1309_);
lean_inc(v_messages_1308_);
lean_inc(v_recordedDeps_1307_);
lean_inc(v_cache_1306_);
lean_inc(v_traceState_1305_);
lean_inc(v_auxDeclNGen_1304_);
lean_inc(v_ngen_1303_);
lean_inc(v_nextMacroScope_1302_);
lean_inc(v_env_1301_);
lean_dec(v___x_1300_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1321_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1317_; 
v___x_1314_ = lean_box(0);
v___x_1315_ = l_Lean_MessageLog_add(v___x_1299_, v_messages_1308_);
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 7, v___x_1315_);
v___x_1317_ = v___x_1312_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_env_1301_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_nextMacroScope_1302_);
lean_ctor_set(v_reuseFailAlloc_1320_, 2, v_ngen_1303_);
lean_ctor_set(v_reuseFailAlloc_1320_, 3, v_auxDeclNGen_1304_);
lean_ctor_set(v_reuseFailAlloc_1320_, 4, v_traceState_1305_);
lean_ctor_set(v_reuseFailAlloc_1320_, 5, v_cache_1306_);
lean_ctor_set(v_reuseFailAlloc_1320_, 6, v_recordedDeps_1307_);
lean_ctor_set(v_reuseFailAlloc_1320_, 7, v___x_1315_);
lean_ctor_set(v_reuseFailAlloc_1320_, 8, v_infoState_1309_);
lean_ctor_set(v_reuseFailAlloc_1320_, 9, v_snapshotTasks_1310_);
v___x_1317_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_st_ref_put(v___y_1294_, v___x_1317_);
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1314_);
return v___x_1319_;
}
}
}
v___jp_1322_:
{
lean_object* v_fileName_1331_; lean_object* v_fileMap_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1348_; 
v_fileName_1331_ = lean_ctor_get(v___y_1325_, 0);
v_fileMap_1332_ = lean_ctor_get(v___y_1325_, 1);
v___x_1333_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1279_);
v___x_1334_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(v___x_1333_, v___y_1282_, v___y_1283_);
v_a_1335_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1337_ = v___x_1334_;
v_isShared_1338_ = v_isSharedCheck_1348_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1334_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1348_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
lean_inc_ref_n(v_fileMap_1332_, 2);
v___x_1339_ = l_Lean_FileMap_toPosition(v_fileMap_1332_, v___y_1329_);
lean_dec(v___y_1329_);
v___x_1340_ = l_Lean_FileMap_toPosition(v_fileMap_1332_, v___y_1330_);
lean_dec(v___y_1330_);
v___x_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
v___x_1342_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0));
if (v___y_1327_ == 0)
{
lean_del_object(v___x_1337_);
v___y_1286_ = v___x_1342_;
v___y_1287_ = v___x_1339_;
v___y_1288_ = v_fileName_1331_;
v___y_1289_ = v___x_1341_;
v___y_1290_ = v___y_1326_;
v___y_1291_ = v___y_1328_;
v___y_1292_ = v_a_1335_;
v_toCold_1293_ = v___y_1324_;
v___y_1294_ = v___y_1283_;
goto v___jp_1285_;
}
else
{
uint8_t v___x_1343_; 
lean_inc(v_a_1335_);
lean_inc_ref(v___y_1323_);
v___x_1343_ = l_Lean_MessageData_hasTag(v___y_1323_, v_a_1335_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; lean_object* v___x_1346_; 
lean_dec_ref_known(v___x_1341_, 1);
lean_dec_ref(v___x_1339_);
lean_dec(v_a_1335_);
v___x_1344_ = lean_box(0);
if (v_isShared_1338_ == 0)
{
lean_ctor_set(v___x_1337_, 0, v___x_1344_);
v___x_1346_ = v___x_1337_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
else
{
lean_del_object(v___x_1337_);
v___y_1286_ = v___x_1342_;
v___y_1287_ = v___x_1339_;
v___y_1288_ = v_fileName_1331_;
v___y_1289_ = v___x_1341_;
v___y_1290_ = v___y_1326_;
v___y_1291_ = v___y_1328_;
v___y_1292_ = v_a_1335_;
v_toCold_1293_ = v___y_1324_;
v___y_1294_ = v___y_1283_;
goto v___jp_1285_;
}
}
}
}
v___jp_1349_:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_Syntax_getTailPos_x3f(v___y_1350_, v___y_1353_);
lean_dec(v___y_1350_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_inc(v___y_1356_);
v___y_1323_ = v___y_1351_;
v___y_1324_ = v___y_1352_;
v___y_1325_ = v___y_1352_;
v___y_1326_ = v___y_1353_;
v___y_1327_ = v___y_1354_;
v___y_1328_ = v___y_1355_;
v___y_1329_ = v___y_1356_;
v___y_1330_ = v___y_1356_;
goto v___jp_1322_;
}
else
{
lean_object* v_val_1358_; 
v_val_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_val_1358_);
lean_dec_ref_known(v___x_1357_, 1);
v___y_1323_ = v___y_1351_;
v___y_1324_ = v___y_1352_;
v___y_1325_ = v___y_1352_;
v___y_1326_ = v___y_1353_;
v___y_1327_ = v___y_1354_;
v___y_1328_ = v___y_1355_;
v___y_1329_ = v___y_1356_;
v___y_1330_ = v_val_1358_;
goto v___jp_1322_;
}
}
v___jp_1359_:
{
lean_object* v_toCold_1361_; lean_object* v_ref_1362_; uint8_t v_suppressElabErrors_1363_; lean_object* v_ref_1364_; uint8_t v___x_1365_; lean_object* v___f_1366_; lean_object* v___x_1367_; 
v_toCold_1361_ = lean_ctor_get(v___y_1282_, 0);
v_ref_1362_ = lean_ctor_get(v___y_1282_, 2);
v_suppressElabErrors_1363_ = lean_ctor_get_uint8(v___y_1282_, sizeof(void*)*3 + 2);
v_ref_1364_ = l_Lean_replaceRef(v_ref_1278_, v_ref_1362_);
v___x_1365_ = 0;
v___f_1366_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__1));
v___x_1367_ = l_Lean_Syntax_getPos_x3f(v_ref_1364_, v___x_1365_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v___x_1368_; 
v___x_1368_ = lean_unsigned_to_nat(0u);
v___y_1350_ = v_ref_1364_;
v___y_1351_ = v___f_1366_;
v___y_1352_ = v_toCold_1361_;
v___y_1353_ = v___x_1365_;
v___y_1354_ = v_suppressElabErrors_1363_;
v___y_1355_ = v___y_1360_;
v___y_1356_ = v___x_1368_;
goto v___jp_1349_;
}
else
{
lean_object* v_val_1369_; 
v_val_1369_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_val_1369_);
lean_dec_ref_known(v___x_1367_, 1);
v___y_1350_ = v_ref_1364_;
v___y_1351_ = v___f_1366_;
v___y_1352_ = v_toCold_1361_;
v___y_1353_ = v___x_1365_;
v___y_1354_ = v_suppressElabErrors_1363_;
v___y_1355_ = v___y_1360_;
v___y_1356_ = v_val_1369_;
goto v___jp_1349_;
}
}
v___jp_1370_:
{
uint8_t v___x_1371_; uint8_t v___x_1372_; 
v___x_1371_ = 1;
v___x_1372_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1280_, v___x_1371_);
if (v___x_1372_ == 0)
{
v___y_1360_ = v_severity_1280_;
goto v___jp_1359_;
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1373_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1282_);
v___x_1374_ = l_Lean_warningAsError;
v___x_1375_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v___x_1373_, v___x_1374_);
lean_dec_ref(v___x_1373_);
if (v___x_1375_ == 0)
{
v___y_1360_ = v_severity_1280_;
goto v___jp_1359_;
}
else
{
uint8_t v___x_1376_; 
v___x_1376_ = 2;
v___y_1360_ = v___x_1376_;
goto v___jp_1359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___boxed(lean_object* v_ref_1382_, lean_object* v_msgData_1383_, lean_object* v_severity_1384_, lean_object* v_isSilent_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
uint8_t v_severity_boxed_1389_; uint8_t v_isSilent_boxed_1390_; lean_object* v_res_1391_; 
v_severity_boxed_1389_ = lean_unbox(v_severity_1384_);
v_isSilent_boxed_1390_ = lean_unbox(v_isSilent_1385_);
v_res_1391_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(v_ref_1382_, v_msgData_1383_, v_severity_boxed_1389_, v_isSilent_boxed_1390_, v___y_1386_, v___y_1387_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec(v_ref_1382_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(lean_object* v_msgData_1392_, uint8_t v_severity_1393_, uint8_t v_isSilent_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_ref_1398_; lean_object* v___x_1399_; 
v_ref_1398_ = lean_ctor_get(v___y_1395_, 2);
v___x_1399_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(v_ref_1398_, v_msgData_1392_, v_severity_1393_, v_isSilent_1394_, v___y_1395_, v___y_1396_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30___boxed(lean_object* v_msgData_1400_, lean_object* v_severity_1401_, lean_object* v_isSilent_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
uint8_t v_severity_boxed_1406_; uint8_t v_isSilent_boxed_1407_; lean_object* v_res_1408_; 
v_severity_boxed_1406_ = lean_unbox(v_severity_1401_);
v_isSilent_boxed_1407_ = lean_unbox(v_isSilent_1402_);
v_res_1408_ = l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(v_msgData_1400_, v_severity_boxed_1406_, v_isSilent_boxed_1407_, v___y_1403_, v___y_1404_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13(lean_object* v_msgData_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
uint8_t v___x_1413_; uint8_t v___x_1414_; lean_object* v___x_1415_; 
v___x_1413_ = 2;
v___x_1414_ = 0;
v___x_1415_ = l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(v_msgData_1409_, v___x_1413_, v___x_1414_, v___y_1410_, v___y_1411_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13___boxed(lean_object* v_msgData_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lean_logError___at___00main_spec__13(v_msgData_1416_, v___y_1417_, v___y_1418_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(lean_object* v_opts_1421_, lean_object* v_opt_1422_){
_start:
{
lean_object* v_name_1423_; lean_object* v_map_1424_; lean_object* v___x_1425_; 
v_name_1423_ = lean_ctor_get(v_opt_1422_, 0);
v_map_1424_ = lean_ctor_get(v_opts_1421_, 0);
v___x_1425_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1424_, v_name_1423_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_box(0);
return v___x_1426_;
}
else
{
lean_object* v_val_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1436_; 
v_val_1427_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1429_ = v___x_1425_;
v_isShared_1430_ = v_isSharedCheck_1436_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_val_1427_);
lean_dec(v___x_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1436_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
if (lean_obj_tag(v_val_1427_) == 0)
{
lean_object* v_v_1431_; lean_object* v___x_1433_; 
v_v_1431_ = lean_ctor_get(v_val_1427_, 0);
lean_inc_ref(v_v_1431_);
lean_dec_ref_known(v_val_1427_, 1);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v_v_1431_);
v___x_1433_ = v___x_1429_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_v_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
else
{
lean_object* v___x_1435_; 
lean_del_object(v___x_1429_);
lean_dec(v_val_1427_);
v___x_1435_ = lean_box(0);
return v___x_1435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14___boxed(lean_object* v_opts_1437_, lean_object* v_opt_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(v_opts_1437_, v_opt_1438_);
lean_dec_ref(v_opt_1438_);
lean_dec_ref(v_opts_1437_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(lean_object* v_x_1440_, lean_object* v_x_1441_){
_start:
{
if (lean_obj_tag(v_x_1441_) == 0)
{
return v_x_1440_;
}
else
{
lean_object* v_key_1442_; lean_object* v_value_1443_; lean_object* v_tail_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v_key_1442_ = lean_ctor_get(v_x_1441_, 0);
v_value_1443_ = lean_ctor_get(v_x_1441_, 1);
v_tail_1444_ = lean_ctor_get(v_x_1441_, 2);
lean_inc(v_value_1443_);
lean_inc(v_key_1442_);
v___x_1445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1445_, 0, v_key_1442_);
lean_ctor_set(v___x_1445_, 1, v_value_1443_);
v___x_1446_ = lean_array_push(v_x_1440_, v___x_1445_);
v_x_1440_ = v___x_1446_;
v_x_1441_ = v_tail_1444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22___boxed(lean_object* v_x_1448_, lean_object* v_x_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(v_x_1448_, v_x_1449_);
lean_dec(v_x_1449_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(lean_object* v_as_1451_, size_t v_i_1452_, size_t v_stop_1453_, lean_object* v_b_1454_){
_start:
{
uint8_t v___x_1455_; 
v___x_1455_ = lean_usize_dec_eq(v_i_1452_, v_stop_1453_);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; lean_object* v___x_1457_; size_t v___x_1458_; size_t v___x_1459_; 
v___x_1456_ = lean_array_uget_borrowed(v_as_1451_, v_i_1452_);
v___x_1457_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(v_b_1454_, v___x_1456_);
v___x_1458_ = ((size_t)1ULL);
v___x_1459_ = lean_usize_add(v_i_1452_, v___x_1458_);
v_i_1452_ = v___x_1459_;
v_b_1454_ = v___x_1457_;
goto _start;
}
else
{
return v_b_1454_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23___boxed(lean_object* v_as_1461_, lean_object* v_i_1462_, lean_object* v_stop_1463_, lean_object* v_b_1464_){
_start:
{
size_t v_i_boxed_1465_; size_t v_stop_boxed_1466_; lean_object* v_res_1467_; 
v_i_boxed_1465_ = lean_unbox_usize(v_i_1462_);
lean_dec(v_i_1462_);
v_stop_boxed_1466_ = lean_unbox_usize(v_stop_1463_);
lean_dec(v_stop_1463_);
v_res_1467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(v_as_1461_, v_i_boxed_1465_, v_stop_boxed_1466_, v_b_1464_);
lean_dec_ref(v_as_1461_);
return v_res_1467_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(lean_object* v_x_1468_, lean_object* v_x_1469_){
_start:
{
lean_object* v_fst_1470_; lean_object* v_fst_1471_; lean_object* v_fst_1472_; lean_object* v_fst_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; uint8_t v___x_1476_; 
v_fst_1470_ = lean_ctor_get(v_x_1468_, 0);
v_fst_1471_ = lean_ctor_get(v_x_1469_, 0);
v_fst_1472_ = lean_ctor_get(v_fst_1470_, 0);
v_fst_1473_ = lean_ctor_get(v_fst_1471_, 0);
v___x_1474_ = lean_unsigned_to_nat(1u);
v___x_1475_ = lean_nat_add(v_fst_1472_, v___x_1474_);
v___x_1476_ = lean_nat_dec_le(v___x_1475_, v_fst_1473_);
lean_dec(v___x_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0___boxed(lean_object* v_x_1477_, lean_object* v_x_1478_){
_start:
{
uint8_t v_res_1479_; lean_object* v_r_1480_; 
v_res_1479_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v_x_1477_, v_x_1478_);
lean_dec_ref(v_x_1478_);
lean_dec_ref(v_x_1477_);
v_r_1480_ = lean_box(v_res_1479_);
return v_r_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(lean_object* v_hi_1481_, lean_object* v_pivot_1482_, lean_object* v_as_1483_, lean_object* v_i_1484_, lean_object* v_k_1485_){
_start:
{
uint8_t v___x_1486_; 
v___x_1486_ = lean_nat_dec_lt(v_k_1485_, v_hi_1481_);
if (v___x_1486_ == 0)
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
lean_dec(v_k_1485_);
v___x_1487_ = lean_array_fswap(v_as_1483_, v_i_1484_, v_hi_1481_);
v___x_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1488_, 0, v_i_1484_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
return v___x_1488_;
}
else
{
lean_object* v___x_1489_; lean_object* v_fst_1490_; lean_object* v_fst_1491_; lean_object* v_fst_1492_; lean_object* v_fst_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1489_ = lean_array_fget_borrowed(v_as_1483_, v_k_1485_);
v_fst_1490_ = lean_ctor_get(v___x_1489_, 0);
v_fst_1491_ = lean_ctor_get(v_pivot_1482_, 0);
v_fst_1492_ = lean_ctor_get(v_fst_1490_, 0);
v_fst_1493_ = lean_ctor_get(v_fst_1491_, 0);
v___x_1494_ = lean_unsigned_to_nat(1u);
v___x_1495_ = lean_nat_add(v_fst_1492_, v___x_1494_);
v___x_1496_ = lean_nat_dec_le(v___x_1495_, v_fst_1493_);
lean_dec(v___x_1495_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; 
v___x_1497_ = lean_nat_add(v_k_1485_, v___x_1494_);
lean_dec(v_k_1485_);
v_k_1485_ = v___x_1497_;
goto _start;
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = lean_array_fswap(v_as_1483_, v_i_1484_, v_k_1485_);
v___x_1500_ = lean_nat_add(v_i_1484_, v___x_1494_);
lean_dec(v_i_1484_);
v___x_1501_ = lean_nat_add(v_k_1485_, v___x_1494_);
lean_dec(v_k_1485_);
v_as_1483_ = v___x_1499_;
v_i_1484_ = v___x_1500_;
v_k_1485_ = v___x_1501_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg___boxed(lean_object* v_hi_1503_, lean_object* v_pivot_1504_, lean_object* v_as_1505_, lean_object* v_i_1506_, lean_object* v_k_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_1503_, v_pivot_1504_, v_as_1505_, v_i_1506_, v_k_1507_);
lean_dec_ref(v_pivot_1504_);
lean_dec(v_hi_1503_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(lean_object* v_n_1509_, lean_object* v_as_1510_, lean_object* v_lo_1511_, lean_object* v_hi_1512_){
_start:
{
lean_object* v___y_1514_; uint8_t v___x_1524_; 
v___x_1524_ = lean_nat_dec_lt(v_lo_1511_, v_hi_1512_);
if (v___x_1524_ == 0)
{
lean_dec(v_lo_1511_);
return v_as_1510_;
}
else
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v_mid_1527_; lean_object* v___y_1529_; lean_object* v___y_1535_; lean_object* v___x_1540_; lean_object* v___x_1541_; uint8_t v___x_1542_; 
v___x_1525_ = lean_nat_add(v_lo_1511_, v_hi_1512_);
v___x_1526_ = lean_unsigned_to_nat(1u);
v_mid_1527_ = lean_nat_shiftr(v___x_1525_, v___x_1526_);
lean_dec(v___x_1525_);
v___x_1540_ = lean_array_fget_borrowed(v_as_1510_, v_mid_1527_);
v___x_1541_ = lean_array_fget_borrowed(v_as_1510_, v_lo_1511_);
v___x_1542_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1540_, v___x_1541_);
if (v___x_1542_ == 0)
{
v___y_1535_ = v_as_1510_;
goto v___jp_1534_;
}
else
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_array_fswap(v_as_1510_, v_lo_1511_, v_mid_1527_);
v___y_1535_ = v___x_1543_;
goto v___jp_1534_;
}
v___jp_1528_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1530_ = lean_array_fget_borrowed(v___y_1529_, v_mid_1527_);
v___x_1531_ = lean_array_fget_borrowed(v___y_1529_, v_hi_1512_);
v___x_1532_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1530_, v___x_1531_);
if (v___x_1532_ == 0)
{
lean_dec(v_mid_1527_);
v___y_1514_ = v___y_1529_;
goto v___jp_1513_;
}
else
{
lean_object* v___x_1533_; 
v___x_1533_ = lean_array_fswap(v___y_1529_, v_mid_1527_, v_hi_1512_);
lean_dec(v_mid_1527_);
v___y_1514_ = v___x_1533_;
goto v___jp_1513_;
}
}
v___jp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; uint8_t v___x_1538_; 
v___x_1536_ = lean_array_fget_borrowed(v___y_1535_, v_hi_1512_);
v___x_1537_ = lean_array_fget_borrowed(v___y_1535_, v_lo_1511_);
v___x_1538_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1536_, v___x_1537_);
if (v___x_1538_ == 0)
{
v___y_1529_ = v___y_1535_;
goto v___jp_1528_;
}
else
{
lean_object* v___x_1539_; 
v___x_1539_ = lean_array_fswap(v___y_1535_, v_lo_1511_, v_hi_1512_);
v___y_1529_ = v___x_1539_;
goto v___jp_1528_;
}
}
}
v___jp_1513_:
{
lean_object* v_pivot_1515_; lean_object* v___x_1516_; lean_object* v_fst_1517_; lean_object* v_snd_1518_; uint8_t v___x_1519_; 
v_pivot_1515_ = lean_array_fget(v___y_1514_, v_hi_1512_);
lean_inc_n(v_lo_1511_, 2);
v___x_1516_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_1512_, v_pivot_1515_, v___y_1514_, v_lo_1511_, v_lo_1511_);
lean_dec(v_pivot_1515_);
v_fst_1517_ = lean_ctor_get(v___x_1516_, 0);
lean_inc(v_fst_1517_);
v_snd_1518_ = lean_ctor_get(v___x_1516_, 1);
lean_inc(v_snd_1518_);
lean_dec_ref(v___x_1516_);
v___x_1519_ = lean_nat_dec_le(v_hi_1512_, v_fst_1517_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1520_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_1509_, v_snd_1518_, v_lo_1511_, v_fst_1517_);
v___x_1521_ = lean_unsigned_to_nat(1u);
v___x_1522_ = lean_nat_add(v_fst_1517_, v___x_1521_);
lean_dec(v_fst_1517_);
v_as_1510_ = v___x_1520_;
v_lo_1511_ = v___x_1522_;
goto _start;
}
else
{
lean_dec(v_fst_1517_);
lean_dec(v_lo_1511_);
return v_snd_1518_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___boxed(lean_object* v_n_1544_, lean_object* v_as_1545_, lean_object* v_lo_1546_, lean_object* v_hi_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_1544_, v_as_1545_, v_lo_1546_, v_hi_1547_);
lean_dec(v_hi_1547_);
lean_dec(v_n_1544_);
return v_res_1548_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(uint8_t v___x_1549_, lean_object* v___x_1550_, lean_object* v_x_1551_){
_start:
{
if (lean_obj_tag(v_x_1551_) == 1)
{
lean_object* v_pre_1552_; 
v_pre_1552_ = lean_ctor_get(v_x_1551_, 0);
switch(lean_obj_tag(v_pre_1552_))
{
case 1:
{
lean_object* v_pre_1553_; 
v_pre_1553_ = lean_ctor_get(v_pre_1552_, 0);
switch(lean_obj_tag(v_pre_1553_))
{
case 0:
{
lean_object* v_str_1554_; lean_object* v_str_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v_str_1554_ = lean_ctor_get(v_x_1551_, 1);
v_str_1555_ = lean_ctor_get(v_pre_1552_, 1);
v___x_1556_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0));
v___x_1557_ = lean_string_dec_eq(v_str_1555_, v___x_1556_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; uint8_t v___x_1559_; 
v___x_1558_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1));
v___x_1559_ = lean_string_dec_eq(v_str_1555_, v___x_1558_);
if (v___x_1559_ == 0)
{
return v___x_1559_;
}
else
{
lean_object* v___x_1560_; uint8_t v___x_1561_; 
v___x_1560_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2));
v___x_1561_ = lean_string_dec_eq(v_str_1554_, v___x_1560_);
return v___x_1561_;
}
}
else
{
lean_object* v___x_1562_; uint8_t v___x_1563_; 
v___x_1562_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3));
v___x_1563_ = lean_string_dec_eq(v_str_1554_, v___x_1562_);
return v___x_1563_;
}
}
case 1:
{
lean_object* v_pre_1564_; 
v_pre_1564_ = lean_ctor_get(v_pre_1553_, 0);
if (lean_obj_tag(v_pre_1564_) == 0)
{
lean_object* v_str_1565_; lean_object* v_str_1566_; lean_object* v_str_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; 
v_str_1565_ = lean_ctor_get(v_x_1551_, 1);
v_str_1566_ = lean_ctor_get(v_pre_1552_, 1);
v_str_1567_ = lean_ctor_get(v_pre_1553_, 1);
v___x_1568_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4));
v___x_1569_ = lean_string_dec_eq(v_str_1567_, v___x_1568_);
if (v___x_1569_ == 0)
{
return v___x_1569_;
}
else
{
lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1570_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5));
v___x_1571_ = lean_string_dec_eq(v_str_1566_, v___x_1570_);
if (v___x_1571_ == 0)
{
return v___x_1571_;
}
else
{
lean_object* v___x_1572_; uint8_t v___x_1573_; 
v___x_1572_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6));
v___x_1573_ = lean_string_dec_eq(v_str_1565_, v___x_1572_);
return v___x_1573_;
}
}
}
else
{
return v___x_1549_;
}
}
default: 
{
return v___x_1549_;
}
}
}
case 0:
{
lean_object* v_str_1574_; uint8_t v___x_1575_; 
v_str_1574_ = lean_ctor_get(v_x_1551_, 1);
v___x_1575_ = lean_string_dec_eq(v_str_1574_, v___x_1550_);
return v___x_1575_;
}
default: 
{
return v___x_1549_;
}
}
}
else
{
return v___x_1549_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed(lean_object* v___x_1576_, lean_object* v___x_1577_, lean_object* v_x_1578_){
_start:
{
uint8_t v___x_39055__boxed_1579_; uint8_t v_res_1580_; lean_object* v_r_1581_; 
v___x_39055__boxed_1579_ = lean_unbox(v___x_1576_);
v_res_1580_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(v___x_39055__boxed_1579_, v___x_1577_, v_x_1578_);
lean_dec(v_x_1578_);
lean_dec_ref(v___x_1577_);
v_r_1581_ = lean_box(v_res_1580_);
return v_r_1581_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0(void){
_start:
{
lean_object* v___x_1582_; double v___x_1583_; 
v___x_1582_ = lean_unsigned_to_nat(0u);
v___x_1583_ = lean_float_of_nat(v___x_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(uint8_t v___x_1584_, lean_object* v_as_1585_, size_t v_sz_1586_, size_t v_i_1587_, lean_object* v_b_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_a_1593_; uint8_t v___x_1597_; 
v___x_1597_ = lean_usize_dec_lt(v_i_1587_, v_sz_1586_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_b_1588_);
return v___x_1598_;
}
else
{
lean_object* v_a_1599_; lean_object* v_fst_1600_; lean_object* v_snd_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1679_; 
v_a_1599_ = lean_array_uget(v_as_1585_, v_i_1587_);
v_fst_1600_ = lean_ctor_get(v_a_1599_, 0);
v_snd_1601_ = lean_ctor_get(v_a_1599_, 1);
v_isSharedCheck_1679_ = !lean_is_exclusive(v_a_1599_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1603_ = v_a_1599_;
v_isShared_1604_ = v_isSharedCheck_1679_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_snd_1601_);
lean_inc(v_fst_1600_);
lean_dec(v_a_1599_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1679_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v_fst_1605_; lean_object* v_snd_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1678_; 
v_fst_1605_ = lean_ctor_get(v_fst_1600_, 0);
v_snd_1606_ = lean_ctor_get(v_fst_1600_, 1);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_fst_1600_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1608_ = v_fst_1600_;
v_isShared_1609_ = v_isSharedCheck_1678_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_snd_1606_);
lean_inc(v_fst_1605_);
lean_dec(v_fst_1600_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1678_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; double v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v_toCold_1615_; uint8_t v_suppressElabErrors_1616_; lean_object* v_fileName_1617_; lean_object* v_fileMap_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1625_; 
v___x_1610_ = lean_box(0);
v___x_1611_ = lean_box(0);
v___x_1612_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0);
v___x_1613_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0));
v___x_1614_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1614_, 0, v___x_1610_);
lean_ctor_set(v___x_1614_, 1, v___x_1611_);
lean_ctor_set(v___x_1614_, 2, v___x_1613_);
lean_ctor_set_float(v___x_1614_, sizeof(void*)*3, v___x_1612_);
lean_ctor_set_float(v___x_1614_, sizeof(void*)*3 + 8, v___x_1612_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 16, v___x_1597_);
v_toCold_1615_ = lean_ctor_get(v___y_1589_, 0);
v_suppressElabErrors_1616_ = lean_ctor_get_uint8(v___y_1589_, sizeof(void*)*3 + 2);
v_fileName_1617_ = lean_ctor_get(v_toCold_1615_, 0);
v_fileMap_1618_ = lean_ctor_get(v_toCold_1615_, 1);
v___x_1619_ = lean_box(0);
v___x_1620_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_1621_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_1622_ = l_Lean_MessageData_nil;
v___x_1623_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1614_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
lean_ctor_set(v___x_1623_, 2, v_snd_1601_);
if (v_isShared_1609_ == 0)
{
lean_ctor_set_tag(v___x_1608_, 8);
lean_ctor_set(v___x_1608_, 1, v___x_1623_);
lean_ctor_set(v___x_1608_, 0, v___x_1621_);
v___x_1625_ = v___x_1608_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
uint8_t v___x_1626_; lean_object* v___x_1627_; lean_object* v___y_1629_; lean_object* v___y_1630_; 
v___x_1626_ = 0;
lean_inc_ref(v_fileMap_1618_);
lean_inc_ref(v_fileName_1617_);
v___x_1627_ = l_Lean_Elab_mkMessageCore(v_fileName_1617_, v_fileMap_1618_, v___x_1625_, v___x_1626_, v_fst_1605_, v_snd_1606_);
lean_dec(v_snd_1606_);
lean_dec(v_fst_1605_);
if (v_suppressElabErrors_1616_ == 0)
{
v___y_1629_ = v___y_1589_;
v___y_1630_ = v___y_1590_;
goto v___jp_1628_;
}
else
{
lean_object* v_data_1673_; lean_object* v___x_1674_; lean_object* v___f_1675_; uint8_t v___x_1676_; 
v_data_1673_ = lean_ctor_get(v___x_1627_, 4);
v___x_1674_ = lean_box(v___x_1584_);
v___f_1675_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1675_, 0, v___x_1674_);
lean_closure_set(v___f_1675_, 1, v___x_1620_);
lean_inc(v_data_1673_);
v___x_1676_ = l_Lean_MessageData_hasTag(v___f_1675_, v_data_1673_);
if (v___x_1676_ == 0)
{
lean_dec_ref(v___x_1627_);
lean_del_object(v___x_1603_);
v_a_1593_ = v___x_1619_;
goto v___jp_1592_;
}
else
{
v___y_1629_ = v___y_1589_;
v___y_1630_ = v___y_1590_;
goto v___jp_1628_;
}
}
v___jp_1628_:
{
lean_object* v_toCold_1631_; lean_object* v_fileName_1632_; lean_object* v_pos_1633_; lean_object* v_endPos_1634_; uint8_t v_keepFullRange_1635_; uint8_t v_severity_1636_; uint8_t v_isSilent_1637_; lean_object* v_caption_1638_; lean_object* v_data_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1672_; 
v_toCold_1631_ = lean_ctor_get(v___y_1629_, 0);
v_fileName_1632_ = lean_ctor_get(v___x_1627_, 0);
v_pos_1633_ = lean_ctor_get(v___x_1627_, 1);
v_endPos_1634_ = lean_ctor_get(v___x_1627_, 2);
v_keepFullRange_1635_ = lean_ctor_get_uint8(v___x_1627_, sizeof(void*)*5);
v_severity_1636_ = lean_ctor_get_uint8(v___x_1627_, sizeof(void*)*5 + 1);
v_isSilent_1637_ = lean_ctor_get_uint8(v___x_1627_, sizeof(void*)*5 + 2);
v_caption_1638_ = lean_ctor_get(v___x_1627_, 3);
v_data_1639_ = lean_ctor_get(v___x_1627_, 4);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1641_ = v___x_1627_;
v_isShared_1642_ = v_isSharedCheck_1672_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_data_1639_);
lean_inc(v_caption_1638_);
lean_inc(v_endPos_1634_);
lean_inc(v_pos_1633_);
lean_inc(v_fileName_1632_);
lean_dec(v___x_1627_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1672_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v_currNamespace_1643_; lean_object* v_openDecls_1644_; lean_object* v___x_1646_; 
v_currNamespace_1643_ = lean_ctor_get(v_toCold_1631_, 4);
v_openDecls_1644_ = lean_ctor_get(v_toCold_1631_, 5);
lean_inc(v_openDecls_1644_);
lean_inc(v_currNamespace_1643_);
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 1, v_openDecls_1644_);
lean_ctor_set(v___x_1603_, 0, v_currNamespace_1643_);
v___x_1646_ = v___x_1603_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_currNamespace_1643_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_openDecls_1644_);
v___x_1646_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
lean_object* v___x_1647_; lean_object* v___x_1649_; 
v___x_1647_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
lean_ctor_set(v___x_1647_, 1, v_data_1639_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 4, v___x_1647_);
v___x_1649_ = v___x_1641_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_fileName_1632_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_pos_1633_);
lean_ctor_set(v_reuseFailAlloc_1670_, 2, v_endPos_1634_);
lean_ctor_set(v_reuseFailAlloc_1670_, 3, v_caption_1638_);
lean_ctor_set(v_reuseFailAlloc_1670_, 4, v___x_1647_);
lean_ctor_set_uint8(v_reuseFailAlloc_1670_, sizeof(void*)*5, v_keepFullRange_1635_);
lean_ctor_set_uint8(v_reuseFailAlloc_1670_, sizeof(void*)*5 + 1, v_severity_1636_);
lean_ctor_set_uint8(v_reuseFailAlloc_1670_, sizeof(void*)*5 + 2, v_isSilent_1637_);
v___x_1649_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
lean_object* v___x_1650_; lean_object* v_env_1651_; lean_object* v_nextMacroScope_1652_; lean_object* v_ngen_1653_; lean_object* v_auxDeclNGen_1654_; lean_object* v_traceState_1655_; lean_object* v_cache_1656_; lean_object* v_recordedDeps_1657_; lean_object* v_messages_1658_; lean_object* v_infoState_1659_; lean_object* v_snapshotTasks_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1669_; 
v___x_1650_ = lean_st_ref_take(v___y_1630_);
v_env_1651_ = lean_ctor_get(v___x_1650_, 0);
v_nextMacroScope_1652_ = lean_ctor_get(v___x_1650_, 1);
v_ngen_1653_ = lean_ctor_get(v___x_1650_, 2);
v_auxDeclNGen_1654_ = lean_ctor_get(v___x_1650_, 3);
v_traceState_1655_ = lean_ctor_get(v___x_1650_, 4);
v_cache_1656_ = lean_ctor_get(v___x_1650_, 5);
v_recordedDeps_1657_ = lean_ctor_get(v___x_1650_, 6);
v_messages_1658_ = lean_ctor_get(v___x_1650_, 7);
v_infoState_1659_ = lean_ctor_get(v___x_1650_, 8);
v_snapshotTasks_1660_ = lean_ctor_get(v___x_1650_, 9);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1662_ = v___x_1650_;
v_isShared_1663_ = v_isSharedCheck_1669_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_snapshotTasks_1660_);
lean_inc(v_infoState_1659_);
lean_inc(v_messages_1658_);
lean_inc(v_recordedDeps_1657_);
lean_inc(v_cache_1656_);
lean_inc(v_traceState_1655_);
lean_inc(v_auxDeclNGen_1654_);
lean_inc(v_ngen_1653_);
lean_inc(v_nextMacroScope_1652_);
lean_inc(v_env_1651_);
lean_dec(v___x_1650_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1669_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; lean_object* v___x_1666_; 
v___x_1664_ = l_Lean_MessageLog_add(v___x_1649_, v_messages_1658_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 7, v___x_1664_);
v___x_1666_ = v___x_1662_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_env_1651_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_nextMacroScope_1652_);
lean_ctor_set(v_reuseFailAlloc_1668_, 2, v_ngen_1653_);
lean_ctor_set(v_reuseFailAlloc_1668_, 3, v_auxDeclNGen_1654_);
lean_ctor_set(v_reuseFailAlloc_1668_, 4, v_traceState_1655_);
lean_ctor_set(v_reuseFailAlloc_1668_, 5, v_cache_1656_);
lean_ctor_set(v_reuseFailAlloc_1668_, 6, v_recordedDeps_1657_);
lean_ctor_set(v_reuseFailAlloc_1668_, 7, v___x_1664_);
lean_ctor_set(v_reuseFailAlloc_1668_, 8, v_infoState_1659_);
lean_ctor_set(v_reuseFailAlloc_1668_, 9, v_snapshotTasks_1660_);
v___x_1666_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
lean_object* v___x_1667_; 
v___x_1667_ = lean_st_ref_put(v___y_1630_, v___x_1666_);
v_a_1593_ = v___x_1619_;
goto v___jp_1592_;
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
v___jp_1592_:
{
size_t v___x_1594_; size_t v___x_1595_; 
v___x_1594_ = ((size_t)1ULL);
v___x_1595_ = lean_usize_add(v_i_1587_, v___x_1594_);
v_i_1587_ = v___x_1595_;
v_b_1588_ = v_a_1593_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___boxed(lean_object* v___x_1680_, lean_object* v_as_1681_, lean_object* v_sz_1682_, lean_object* v_i_1683_, lean_object* v_b_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
uint8_t v___x_39120__boxed_1688_; size_t v_sz_boxed_1689_; size_t v_i_boxed_1690_; lean_object* v_res_1691_; 
v___x_39120__boxed_1688_ = lean_unbox(v___x_1680_);
v_sz_boxed_1689_ = lean_unbox_usize(v_sz_1682_);
lean_dec(v_sz_1682_);
v_i_boxed_1690_ = lean_unbox_usize(v_i_1683_);
lean_dec(v_i_1683_);
v_res_1691_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(v___x_39120__boxed_1688_, v_as_1681_, v_sz_boxed_1689_, v_i_boxed_1690_, v_b_1684_, v___y_1685_, v___y_1686_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec_ref(v_as_1681_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(lean_object* v_a_1692_, lean_object* v_fallback_1693_, lean_object* v_x_1694_){
_start:
{
if (lean_obj_tag(v_x_1694_) == 0)
{
lean_inc(v_fallback_1693_);
return v_fallback_1693_;
}
else
{
lean_object* v_key_1695_; lean_object* v_value_1696_; lean_object* v_tail_1697_; lean_object* v_fst_1698_; lean_object* v_snd_1699_; lean_object* v_fst_1700_; lean_object* v_snd_1701_; uint8_t v_decide_1702_; 
v_key_1695_ = lean_ctor_get(v_x_1694_, 0);
v_value_1696_ = lean_ctor_get(v_x_1694_, 1);
v_tail_1697_ = lean_ctor_get(v_x_1694_, 2);
v_fst_1698_ = lean_ctor_get(v_key_1695_, 0);
v_snd_1699_ = lean_ctor_get(v_key_1695_, 1);
v_fst_1700_ = lean_ctor_get(v_a_1692_, 0);
v_snd_1701_ = lean_ctor_get(v_a_1692_, 1);
v_decide_1702_ = lean_nat_dec_eq(v_fst_1698_, v_fst_1700_);
if (v_decide_1702_ == 0)
{
v_x_1694_ = v_tail_1697_;
goto _start;
}
else
{
uint8_t v_decide_1704_; 
v_decide_1704_ = lean_nat_dec_eq(v_snd_1699_, v_snd_1701_);
if (v_decide_1704_ == 0)
{
v_x_1694_ = v_tail_1697_;
goto _start;
}
else
{
lean_inc(v_value_1696_);
return v_value_1696_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg___boxed(lean_object* v_a_1706_, lean_object* v_fallback_1707_, lean_object* v_x_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_1706_, v_fallback_1707_, v_x_1708_);
lean_dec(v_x_1708_);
lean_dec(v_fallback_1707_);
lean_dec_ref(v_a_1706_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(lean_object* v_m_1710_, lean_object* v_a_1711_, lean_object* v_fallback_1712_){
_start:
{
lean_object* v_buckets_1713_; lean_object* v_fst_1714_; lean_object* v_snd_1715_; lean_object* v___x_1716_; uint64_t v___x_1717_; uint64_t v___x_1718_; uint64_t v___x_1719_; uint64_t v___x_1720_; uint64_t v___x_1721_; uint64_t v_fold_1722_; uint64_t v___x_1723_; uint64_t v___x_1724_; uint64_t v___x_1725_; size_t v___x_1726_; size_t v___x_1727_; size_t v___x_1728_; size_t v___x_1729_; size_t v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v_buckets_1713_ = lean_ctor_get(v_m_1710_, 1);
v_fst_1714_ = lean_ctor_get(v_a_1711_, 0);
v_snd_1715_ = lean_ctor_get(v_a_1711_, 1);
v___x_1716_ = lean_array_get_size(v_buckets_1713_);
v___x_1717_ = l_String_instHashableRaw_hash(v_fst_1714_);
v___x_1718_ = l_String_instHashableRaw_hash(v_snd_1715_);
v___x_1719_ = lean_uint64_mix_hash(v___x_1717_, v___x_1718_);
v___x_1720_ = 32ULL;
v___x_1721_ = lean_uint64_shift_right(v___x_1719_, v___x_1720_);
v_fold_1722_ = lean_uint64_xor(v___x_1719_, v___x_1721_);
v___x_1723_ = 16ULL;
v___x_1724_ = lean_uint64_shift_right(v_fold_1722_, v___x_1723_);
v___x_1725_ = lean_uint64_xor(v_fold_1722_, v___x_1724_);
v___x_1726_ = lean_uint64_to_usize(v___x_1725_);
v___x_1727_ = lean_usize_of_nat(v___x_1716_);
v___x_1728_ = ((size_t)1ULL);
v___x_1729_ = lean_usize_sub(v___x_1727_, v___x_1728_);
v___x_1730_ = lean_usize_land(v___x_1726_, v___x_1729_);
v___x_1731_ = lean_array_uget_borrowed(v_buckets_1713_, v___x_1730_);
v___x_1732_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_1711_, v_fallback_1712_, v___x_1731_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg___boxed(lean_object* v_m_1733_, lean_object* v_a_1734_, lean_object* v_fallback_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_m_1733_, v_a_1734_, v_fallback_1735_);
lean_dec(v_fallback_1735_);
lean_dec_ref(v_a_1734_);
lean_dec_ref(v_m_1733_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(lean_object* v_x_1737_, lean_object* v_x_1738_){
_start:
{
if (lean_obj_tag(v_x_1738_) == 0)
{
return v_x_1737_;
}
else
{
lean_object* v_key_1739_; lean_object* v_value_1740_; lean_object* v_tail_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1768_; 
v_key_1739_ = lean_ctor_get(v_x_1738_, 0);
v_value_1740_ = lean_ctor_get(v_x_1738_, 1);
v_tail_1741_ = lean_ctor_get(v_x_1738_, 2);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_x_1738_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1743_ = v_x_1738_;
v_isShared_1744_ = v_isSharedCheck_1768_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_tail_1741_);
lean_inc(v_value_1740_);
lean_inc(v_key_1739_);
lean_dec(v_x_1738_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1768_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v_fst_1745_; lean_object* v_snd_1746_; lean_object* v___x_1747_; uint64_t v___x_1748_; uint64_t v___x_1749_; uint64_t v___x_1750_; uint64_t v___x_1751_; uint64_t v___x_1752_; uint64_t v_fold_1753_; uint64_t v___x_1754_; uint64_t v___x_1755_; uint64_t v___x_1756_; size_t v___x_1757_; size_t v___x_1758_; size_t v___x_1759_; size_t v___x_1760_; size_t v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1764_; 
v_fst_1745_ = lean_ctor_get(v_key_1739_, 0);
v_snd_1746_ = lean_ctor_get(v_key_1739_, 1);
v___x_1747_ = lean_array_get_size(v_x_1737_);
v___x_1748_ = l_String_instHashableRaw_hash(v_fst_1745_);
v___x_1749_ = l_String_instHashableRaw_hash(v_snd_1746_);
v___x_1750_ = lean_uint64_mix_hash(v___x_1748_, v___x_1749_);
v___x_1751_ = 32ULL;
v___x_1752_ = lean_uint64_shift_right(v___x_1750_, v___x_1751_);
v_fold_1753_ = lean_uint64_xor(v___x_1750_, v___x_1752_);
v___x_1754_ = 16ULL;
v___x_1755_ = lean_uint64_shift_right(v_fold_1753_, v___x_1754_);
v___x_1756_ = lean_uint64_xor(v_fold_1753_, v___x_1755_);
v___x_1757_ = lean_uint64_to_usize(v___x_1756_);
v___x_1758_ = lean_usize_of_nat(v___x_1747_);
v___x_1759_ = ((size_t)1ULL);
v___x_1760_ = lean_usize_sub(v___x_1758_, v___x_1759_);
v___x_1761_ = lean_usize_land(v___x_1757_, v___x_1760_);
v___x_1762_ = lean_array_uget_borrowed(v_x_1737_, v___x_1761_);
lean_inc(v___x_1762_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 2, v___x_1762_);
v___x_1764_ = v___x_1743_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_key_1739_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v_value_1740_);
lean_ctor_set(v_reuseFailAlloc_1767_, 2, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_array_uset(v_x_1737_, v___x_1761_, v___x_1764_);
v_x_1737_ = v___x_1765_;
v_x_1738_ = v_tail_1741_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(lean_object* v_i_1769_, lean_object* v_source_1770_, lean_object* v_target_1771_){
_start:
{
lean_object* v___x_1772_; uint8_t v___x_1773_; 
v___x_1772_ = lean_array_get_size(v_source_1770_);
v___x_1773_ = lean_nat_dec_lt(v_i_1769_, v___x_1772_);
if (v___x_1773_ == 0)
{
lean_dec_ref(v_source_1770_);
lean_dec(v_i_1769_);
return v_target_1771_;
}
else
{
lean_object* v_es_1774_; lean_object* v___x_1775_; lean_object* v_source_1776_; lean_object* v_target_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v_es_1774_ = lean_array_fget(v_source_1770_, v_i_1769_);
v___x_1775_ = lean_box(0);
v_source_1776_ = lean_array_fset(v_source_1770_, v_i_1769_, v___x_1775_);
v_target_1777_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(v_target_1771_, v_es_1774_);
v___x_1778_ = lean_unsigned_to_nat(1u);
v___x_1779_ = lean_nat_add(v_i_1769_, v___x_1778_);
lean_dec(v_i_1769_);
v_i_1769_ = v___x_1779_;
v_source_1770_ = v_source_1776_;
v_target_1771_ = v_target_1777_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(lean_object* v_data_1781_){
_start:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v_nbuckets_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1782_ = lean_array_get_size(v_data_1781_);
v___x_1783_ = lean_unsigned_to_nat(2u);
v_nbuckets_1784_ = lean_nat_mul(v___x_1782_, v___x_1783_);
v___x_1785_ = lean_unsigned_to_nat(0u);
v___x_1786_ = lean_box(0);
v___x_1787_ = lean_mk_array(v_nbuckets_1784_, v___x_1786_);
v___x_1788_ = lean_array_propagate_mark(v_data_1781_, v___x_1787_);
v___x_1789_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(v___x_1785_, v_data_1781_, v___x_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(lean_object* v_a_1790_, lean_object* v_b_1791_, lean_object* v_x_1792_){
_start:
{
if (lean_obj_tag(v_x_1792_) == 0)
{
lean_dec(v_b_1791_);
lean_dec_ref(v_a_1790_);
return v_x_1792_;
}
else
{
lean_object* v_key_1793_; lean_object* v_value_1794_; lean_object* v_tail_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1811_; 
v_key_1793_ = lean_ctor_get(v_x_1792_, 0);
v_value_1794_ = lean_ctor_get(v_x_1792_, 1);
v_tail_1795_ = lean_ctor_get(v_x_1792_, 2);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_x_1792_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1797_ = v_x_1792_;
v_isShared_1798_ = v_isSharedCheck_1811_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_tail_1795_);
lean_inc(v_value_1794_);
lean_inc(v_key_1793_);
lean_dec(v_x_1792_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1811_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v_fst_1804_; lean_object* v_snd_1805_; lean_object* v_fst_1806_; lean_object* v_snd_1807_; uint8_t v_decide_1808_; 
v_fst_1804_ = lean_ctor_get(v_key_1793_, 0);
v_snd_1805_ = lean_ctor_get(v_key_1793_, 1);
v_fst_1806_ = lean_ctor_get(v_a_1790_, 0);
v_snd_1807_ = lean_ctor_get(v_a_1790_, 1);
v_decide_1808_ = lean_nat_dec_eq(v_fst_1804_, v_fst_1806_);
if (v_decide_1808_ == 0)
{
goto v___jp_1799_;
}
else
{
uint8_t v_decide_1809_; 
v_decide_1809_ = lean_nat_dec_eq(v_snd_1805_, v_snd_1807_);
if (v_decide_1809_ == 0)
{
goto v___jp_1799_;
}
else
{
lean_object* v___x_1810_; 
lean_del_object(v___x_1797_);
lean_dec(v_value_1794_);
lean_dec(v_key_1793_);
v___x_1810_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1810_, 0, v_a_1790_);
lean_ctor_set(v___x_1810_, 1, v_b_1791_);
lean_ctor_set(v___x_1810_, 2, v_tail_1795_);
return v___x_1810_;
}
}
v___jp_1799_:
{
lean_object* v___x_1800_; lean_object* v___x_1802_; 
v___x_1800_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_1790_, v_b_1791_, v_tail_1795_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 2, v___x_1800_);
v___x_1802_ = v___x_1797_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v_key_1793_);
lean_ctor_set(v_reuseFailAlloc_1803_, 1, v_value_1794_);
lean_ctor_set(v_reuseFailAlloc_1803_, 2, v___x_1800_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(lean_object* v_a_1812_, lean_object* v_x_1813_){
_start:
{
if (lean_obj_tag(v_x_1813_) == 0)
{
uint8_t v___x_1814_; 
v___x_1814_ = 0;
return v___x_1814_;
}
else
{
lean_object* v_key_1815_; lean_object* v_tail_1816_; lean_object* v_fst_1817_; lean_object* v_snd_1818_; lean_object* v_fst_1819_; lean_object* v_snd_1820_; uint8_t v_decide_1821_; 
v_key_1815_ = lean_ctor_get(v_x_1813_, 0);
v_tail_1816_ = lean_ctor_get(v_x_1813_, 2);
v_fst_1817_ = lean_ctor_get(v_key_1815_, 0);
v_snd_1818_ = lean_ctor_get(v_key_1815_, 1);
v_fst_1819_ = lean_ctor_get(v_a_1812_, 0);
v_snd_1820_ = lean_ctor_get(v_a_1812_, 1);
v_decide_1821_ = lean_nat_dec_eq(v_fst_1817_, v_fst_1819_);
if (v_decide_1821_ == 0)
{
v_x_1813_ = v_tail_1816_;
goto _start;
}
else
{
uint8_t v_decide_1823_; 
v_decide_1823_ = lean_nat_dec_eq(v_snd_1818_, v_snd_1820_);
if (v_decide_1823_ == 0)
{
v_x_1813_ = v_tail_1816_;
goto _start;
}
else
{
return v_decide_1823_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_a_1825_, lean_object* v_x_1826_){
_start:
{
uint8_t v_res_1827_; lean_object* v_r_1828_; 
v_res_1827_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_1825_, v_x_1826_);
lean_dec(v_x_1826_);
lean_dec_ref(v_a_1825_);
v_r_1828_ = lean_box(v_res_1827_);
return v_r_1828_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(lean_object* v_m_1829_, lean_object* v_a_1830_, lean_object* v_b_1831_){
_start:
{
lean_object* v_size_1832_; lean_object* v_buckets_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1880_; 
v_size_1832_ = lean_ctor_get(v_m_1829_, 0);
v_buckets_1833_ = lean_ctor_get(v_m_1829_, 1);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_m_1829_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1835_ = v_m_1829_;
v_isShared_1836_ = v_isSharedCheck_1880_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_buckets_1833_);
lean_inc(v_size_1832_);
lean_dec(v_m_1829_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1880_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v_fst_1837_; lean_object* v_snd_1838_; lean_object* v___x_1839_; uint64_t v___x_1840_; uint64_t v___x_1841_; uint64_t v___x_1842_; uint64_t v___x_1843_; uint64_t v___x_1844_; uint64_t v_fold_1845_; uint64_t v___x_1846_; uint64_t v___x_1847_; uint64_t v___x_1848_; size_t v___x_1849_; size_t v___x_1850_; size_t v___x_1851_; size_t v___x_1852_; size_t v___x_1853_; lean_object* v_bkt_1854_; uint8_t v___x_1855_; 
v_fst_1837_ = lean_ctor_get(v_a_1830_, 0);
v_snd_1838_ = lean_ctor_get(v_a_1830_, 1);
v___x_1839_ = lean_array_get_size(v_buckets_1833_);
v___x_1840_ = l_String_instHashableRaw_hash(v_fst_1837_);
v___x_1841_ = l_String_instHashableRaw_hash(v_snd_1838_);
v___x_1842_ = lean_uint64_mix_hash(v___x_1840_, v___x_1841_);
v___x_1843_ = 32ULL;
v___x_1844_ = lean_uint64_shift_right(v___x_1842_, v___x_1843_);
v_fold_1845_ = lean_uint64_xor(v___x_1842_, v___x_1844_);
v___x_1846_ = 16ULL;
v___x_1847_ = lean_uint64_shift_right(v_fold_1845_, v___x_1846_);
v___x_1848_ = lean_uint64_xor(v_fold_1845_, v___x_1847_);
v___x_1849_ = lean_uint64_to_usize(v___x_1848_);
v___x_1850_ = lean_usize_of_nat(v___x_1839_);
v___x_1851_ = ((size_t)1ULL);
v___x_1852_ = lean_usize_sub(v___x_1850_, v___x_1851_);
v___x_1853_ = lean_usize_land(v___x_1849_, v___x_1852_);
v_bkt_1854_ = lean_array_uget_borrowed(v_buckets_1833_, v___x_1853_);
v___x_1855_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_1830_, v_bkt_1854_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1856_; lean_object* v_size_x27_1857_; lean_object* v___x_1858_; lean_object* v_buckets_x27_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; uint8_t v___x_1865_; 
v___x_1856_ = lean_unsigned_to_nat(1u);
v_size_x27_1857_ = lean_nat_add(v_size_1832_, v___x_1856_);
lean_dec(v_size_1832_);
lean_inc(v_bkt_1854_);
v___x_1858_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1858_, 0, v_a_1830_);
lean_ctor_set(v___x_1858_, 1, v_b_1831_);
lean_ctor_set(v___x_1858_, 2, v_bkt_1854_);
v_buckets_x27_1859_ = lean_array_uset(v_buckets_1833_, v___x_1853_, v___x_1858_);
v___x_1860_ = lean_unsigned_to_nat(4u);
v___x_1861_ = lean_nat_mul(v_size_x27_1857_, v___x_1860_);
v___x_1862_ = lean_unsigned_to_nat(3u);
v___x_1863_ = lean_nat_div(v___x_1861_, v___x_1862_);
lean_dec(v___x_1861_);
v___x_1864_ = lean_array_get_size(v_buckets_x27_1859_);
v___x_1865_ = lean_nat_dec_le(v___x_1863_, v___x_1864_);
lean_dec(v___x_1863_);
if (v___x_1865_ == 0)
{
lean_object* v_val_1866_; lean_object* v___x_1868_; 
v_val_1866_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(v_buckets_x27_1859_);
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 1, v_val_1866_);
lean_ctor_set(v___x_1835_, 0, v_size_x27_1857_);
v___x_1868_ = v___x_1835_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_size_x27_1857_);
lean_ctor_set(v_reuseFailAlloc_1869_, 1, v_val_1866_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
else
{
lean_object* v___x_1871_; 
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 1, v_buckets_x27_1859_);
lean_ctor_set(v___x_1835_, 0, v_size_x27_1857_);
v___x_1871_ = v___x_1835_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_size_x27_1857_);
lean_ctor_set(v_reuseFailAlloc_1872_, 1, v_buckets_x27_1859_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
else
{
lean_object* v___x_1873_; lean_object* v_buckets_x27_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1878_; 
lean_inc(v_bkt_1854_);
v___x_1873_ = lean_box(0);
v_buckets_x27_1874_ = lean_array_uset(v_buckets_1833_, v___x_1853_, v___x_1873_);
v___x_1875_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_1830_, v_b_1831_, v_bkt_1854_);
v___x_1876_ = lean_array_uset(v_buckets_x27_1874_, v___x_1853_, v___x_1875_);
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 1, v___x_1876_);
v___x_1878_ = v___x_1835_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_size_1832_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v___x_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t v___x_1883_, lean_object* v_as_1884_, size_t v_sz_1885_, size_t v_i_1886_, lean_object* v_b_1887_, lean_object* v___y_1888_){
_start:
{
uint8_t v___x_1890_; 
v___x_1890_ = lean_usize_dec_lt(v_i_1886_, v_sz_1885_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; 
v___x_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1891_, 0, v_b_1887_);
return v___x_1891_;
}
else
{
lean_object* v_snd_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1929_; 
v_snd_1892_ = lean_ctor_get(v_b_1887_, 1);
v_isSharedCheck_1929_ = !lean_is_exclusive(v_b_1887_);
if (v_isSharedCheck_1929_ == 0)
{
lean_object* v_unused_1930_; 
v_unused_1930_ = lean_ctor_get(v_b_1887_, 0);
lean_dec(v_unused_1930_);
v___x_1894_ = v_b_1887_;
v_isShared_1895_ = v_isSharedCheck_1929_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_snd_1892_);
lean_dec(v_b_1887_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1929_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v_ref_1896_; lean_object* v_a_1897_; lean_object* v_ref_1898_; lean_object* v_msg_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1928_; 
v_ref_1896_ = lean_ctor_get(v___y_1888_, 2);
v_a_1897_ = lean_array_uget(v_as_1884_, v_i_1886_);
v_ref_1898_ = lean_ctor_get(v_a_1897_, 0);
v_msg_1899_ = lean_ctor_get(v_a_1897_, 1);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_a_1897_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1901_ = v_a_1897_;
v_isShared_1902_ = v_isSharedCheck_1928_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_msg_1899_);
lean_inc(v_ref_1898_);
lean_dec(v_a_1897_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1928_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1903_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v_ref_1920_; lean_object* v___y_1922_; lean_object* v___x_1925_; 
v___x_1903_ = lean_box(0);
v_ref_1920_ = l_Lean_replaceRef(v_ref_1898_, v_ref_1896_);
lean_dec(v_ref_1898_);
v___x_1925_ = l_Lean_Syntax_getPos_x3f(v_ref_1920_, v___x_1883_);
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v___x_1926_; 
v___x_1926_ = lean_unsigned_to_nat(0u);
v___y_1922_ = v___x_1926_;
goto v___jp_1921_;
}
else
{
lean_object* v_val_1927_; 
v_val_1927_ = lean_ctor_get(v___x_1925_, 0);
lean_inc(v_val_1927_);
lean_dec_ref_known(v___x_1925_, 1);
v___y_1922_ = v_val_1927_;
goto v___jp_1921_;
}
v___jp_1904_:
{
lean_object* v___x_1908_; 
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 1, v___y_1906_);
lean_ctor_set(v___x_1894_, 0, v___y_1905_);
v___x_1908_ = v___x_1894_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v___y_1905_);
lean_ctor_set(v_reuseFailAlloc_1919_, 1, v___y_1906_);
v___x_1908_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v_pos2traces_1912_; lean_object* v___x_1914_; 
v___x_1909_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1910_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_1892_, v___x_1908_, v___x_1909_);
v___x_1911_ = lean_array_push(v___x_1910_, v_msg_1899_);
v_pos2traces_1912_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_1892_, v___x_1908_, v___x_1911_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 1, v_pos2traces_1912_);
lean_ctor_set(v___x_1901_, 0, v___x_1903_);
v___x_1914_ = v___x_1901_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v_pos2traces_1912_);
v___x_1914_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
size_t v___x_1915_; size_t v___x_1916_; 
v___x_1915_ = ((size_t)1ULL);
v___x_1916_ = lean_usize_add(v_i_1886_, v___x_1915_);
v_i_1886_ = v___x_1916_;
v_b_1887_ = v___x_1914_;
goto _start;
}
}
}
v___jp_1921_:
{
lean_object* v___x_1923_; 
v___x_1923_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1920_, v___x_1883_);
lean_dec(v_ref_1920_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_inc(v___y_1922_);
v___y_1905_ = v___y_1922_;
v___y_1906_ = v___y_1922_;
goto v___jp_1904_;
}
else
{
lean_object* v_val_1924_; 
v_val_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_val_1924_);
lean_dec_ref_known(v___x_1923_, 1);
v___y_1905_ = v___y_1922_;
v___y_1906_ = v_val_1924_;
goto v___jp_1904_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object* v___x_1931_, lean_object* v_as_1932_, lean_object* v_sz_1933_, lean_object* v_i_1934_, lean_object* v_b_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
uint8_t v___x_39564__boxed_1938_; size_t v_sz_boxed_1939_; size_t v_i_boxed_1940_; lean_object* v_res_1941_; 
v___x_39564__boxed_1938_ = lean_unbox(v___x_1931_);
v_sz_boxed_1939_ = lean_unbox_usize(v_sz_1933_);
lean_dec(v_sz_1933_);
v_i_boxed_1940_ = lean_unbox_usize(v_i_1934_);
lean_dec(v_i_1934_);
v_res_1941_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_39564__boxed_1938_, v_as_1932_, v_sz_boxed_1939_, v_i_boxed_1940_, v_b_1935_, v___y_1936_);
lean_dec_ref(v___y_1936_);
lean_dec_ref(v_as_1932_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(uint8_t v___x_1942_, lean_object* v_as_1943_, size_t v_sz_1944_, size_t v_i_1945_, lean_object* v_b_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
uint8_t v___x_1950_; 
v___x_1950_ = lean_usize_dec_lt(v_i_1945_, v_sz_1944_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; 
v___x_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1951_, 0, v_b_1946_);
return v___x_1951_;
}
else
{
lean_object* v_snd_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1989_; 
v_snd_1952_ = lean_ctor_get(v_b_1946_, 1);
v_isSharedCheck_1989_ = !lean_is_exclusive(v_b_1946_);
if (v_isSharedCheck_1989_ == 0)
{
lean_object* v_unused_1990_; 
v_unused_1990_ = lean_ctor_get(v_b_1946_, 0);
lean_dec(v_unused_1990_);
v___x_1954_ = v_b_1946_;
v_isShared_1955_ = v_isSharedCheck_1989_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_snd_1952_);
lean_dec(v_b_1946_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1989_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v_ref_1956_; lean_object* v_a_1957_; lean_object* v_ref_1958_; lean_object* v_msg_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1988_; 
v_ref_1956_ = lean_ctor_get(v___y_1947_, 2);
v_a_1957_ = lean_array_uget(v_as_1943_, v_i_1945_);
v_ref_1958_ = lean_ctor_get(v_a_1957_, 0);
v_msg_1959_ = lean_ctor_get(v_a_1957_, 1);
v_isSharedCheck_1988_ = !lean_is_exclusive(v_a_1957_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1961_ = v_a_1957_;
v_isShared_1962_ = v_isSharedCheck_1988_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_msg_1959_);
lean_inc(v_ref_1958_);
lean_dec(v_a_1957_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1988_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v_ref_1980_; lean_object* v___y_1982_; lean_object* v___x_1985_; 
v___x_1963_ = lean_box(0);
v_ref_1980_ = l_Lean_replaceRef(v_ref_1958_, v_ref_1956_);
lean_dec(v_ref_1958_);
v___x_1985_ = l_Lean_Syntax_getPos_x3f(v_ref_1980_, v___x_1942_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v___x_1986_; 
v___x_1986_ = lean_unsigned_to_nat(0u);
v___y_1982_ = v___x_1986_;
goto v___jp_1981_;
}
else
{
lean_object* v_val_1987_; 
v_val_1987_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_val_1987_);
lean_dec_ref_known(v___x_1985_, 1);
v___y_1982_ = v_val_1987_;
goto v___jp_1981_;
}
v___jp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 1, v___y_1966_);
lean_ctor_set(v___x_1954_, 0, v___y_1965_);
v___x_1968_ = v___x_1954_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v___y_1965_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v___y_1966_);
v___x_1968_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v_pos2traces_1972_; lean_object* v___x_1974_; 
v___x_1969_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1970_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_1952_, v___x_1968_, v___x_1969_);
v___x_1971_ = lean_array_push(v___x_1970_, v_msg_1959_);
v_pos2traces_1972_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_1952_, v___x_1968_, v___x_1971_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v_pos2traces_1972_);
lean_ctor_set(v___x_1961_, 0, v___x_1963_);
v___x_1974_ = v___x_1961_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v___x_1963_);
lean_ctor_set(v_reuseFailAlloc_1978_, 1, v_pos2traces_1972_);
v___x_1974_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
size_t v___x_1975_; size_t v___x_1976_; lean_object* v___x_1977_; 
v___x_1975_ = ((size_t)1ULL);
v___x_1976_ = lean_usize_add(v_i_1945_, v___x_1975_);
v___x_1977_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_1942_, v_as_1943_, v_sz_1944_, v___x_1976_, v___x_1974_, v___y_1947_);
return v___x_1977_;
}
}
}
v___jp_1981_:
{
lean_object* v___x_1983_; 
v___x_1983_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1980_, v___x_1942_);
lean_dec(v_ref_1980_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_inc(v___y_1982_);
v___y_1965_ = v___y_1982_;
v___y_1966_ = v___y_1982_;
goto v___jp_1964_;
}
else
{
lean_object* v_val_1984_; 
v_val_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_val_1984_);
lean_dec_ref_known(v___x_1983_, 1);
v___y_1965_ = v___y_1982_;
v___y_1966_ = v_val_1984_;
goto v___jp_1964_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40___boxed(lean_object* v___x_1991_, lean_object* v_as_1992_, lean_object* v_sz_1993_, lean_object* v_i_1994_, lean_object* v_b_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
uint8_t v___x_39645__boxed_1999_; size_t v_sz_boxed_2000_; size_t v_i_boxed_2001_; lean_object* v_res_2002_; 
v___x_39645__boxed_1999_ = lean_unbox(v___x_1991_);
v_sz_boxed_2000_ = lean_unbox_usize(v_sz_1993_);
lean_dec(v_sz_1993_);
v_i_boxed_2001_ = lean_unbox_usize(v_i_1994_);
lean_dec(v_i_1994_);
v_res_2002_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(v___x_39645__boxed_1999_, v_as_1992_, v_sz_boxed_2000_, v_i_boxed_2001_, v_b_1995_, v___y_1996_, v___y_1997_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
lean_dec_ref(v_as_1992_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(lean_object* v_init_2003_, uint8_t v___x_2004_, lean_object* v_n_2005_, lean_object* v_b_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
if (lean_obj_tag(v_n_2005_) == 0)
{
lean_object* v_cs_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; size_t v_sz_2013_; size_t v___x_2014_; lean_object* v___x_2015_; 
v_cs_2010_ = lean_ctor_get(v_n_2005_, 0);
v___x_2011_ = lean_box(0);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2011_);
lean_ctor_set(v___x_2012_, 1, v_b_2006_);
v_sz_2013_ = lean_array_size(v_cs_2010_);
v___x_2014_ = ((size_t)0ULL);
v___x_2015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(v_init_2003_, v___x_2004_, v_cs_2010_, v_sz_2013_, v___x_2014_, v___x_2012_, v___y_2007_, v___y_2008_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2030_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2018_ = v___x_2015_;
v_isShared_2019_ = v_isSharedCheck_2030_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2015_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2030_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v_fst_2020_; 
v_fst_2020_ = lean_ctor_get(v_a_2016_, 0);
if (lean_obj_tag(v_fst_2020_) == 0)
{
lean_object* v_snd_2021_; lean_object* v___x_2022_; lean_object* v___x_2024_; 
v_snd_2021_ = lean_ctor_get(v_a_2016_, 1);
lean_inc(v_snd_2021_);
lean_dec(v_a_2016_);
v___x_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2022_, 0, v_snd_2021_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v___x_2022_);
v___x_2024_ = v___x_2018_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2022_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
else
{
lean_object* v_val_2026_; lean_object* v___x_2028_; 
lean_inc_ref(v_fst_2020_);
lean_dec(v_a_2016_);
v_val_2026_ = lean_ctor_get(v_fst_2020_, 0);
lean_inc(v_val_2026_);
lean_dec_ref_known(v_fst_2020_, 1);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v_val_2026_);
v___x_2028_ = v___x_2018_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_val_2026_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
return v___x_2028_;
}
}
}
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
v_a_2031_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2015_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2015_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
else
{
lean_object* v_vs_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; size_t v_sz_2042_; size_t v___x_2043_; lean_object* v___x_2044_; 
v_vs_2039_ = lean_ctor_get(v_n_2005_, 0);
v___x_2040_ = lean_box(0);
v___x_2041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
lean_ctor_set(v___x_2041_, 1, v_b_2006_);
v_sz_2042_ = lean_array_size(v_vs_2039_);
v___x_2043_ = ((size_t)0ULL);
v___x_2044_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(v___x_2004_, v_vs_2039_, v_sz_2042_, v___x_2043_, v___x_2041_, v___y_2007_, v___y_2008_);
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2059_; 
v_a_2045_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2047_ = v___x_2044_;
v_isShared_2048_ = v_isSharedCheck_2059_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2044_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2059_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v_fst_2049_; 
v_fst_2049_ = lean_ctor_get(v_a_2045_, 0);
if (lean_obj_tag(v_fst_2049_) == 0)
{
lean_object* v_snd_2050_; lean_object* v___x_2051_; lean_object* v___x_2053_; 
v_snd_2050_ = lean_ctor_get(v_a_2045_, 1);
lean_inc(v_snd_2050_);
lean_dec(v_a_2045_);
v___x_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2051_, 0, v_snd_2050_);
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v___x_2051_);
v___x_2053_ = v___x_2047_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2051_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
else
{
lean_object* v_val_2055_; lean_object* v___x_2057_; 
lean_inc_ref(v_fst_2049_);
lean_dec(v_a_2045_);
v_val_2055_ = lean_ctor_get(v_fst_2049_, 0);
lean_inc(v_val_2055_);
lean_dec_ref_known(v_fst_2049_, 1);
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v_val_2055_);
v___x_2057_ = v___x_2047_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_val_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
v_a_2060_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2044_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2044_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(lean_object* v_init_2068_, uint8_t v___x_2069_, lean_object* v_as_2070_, size_t v_sz_2071_, size_t v_i_2072_, lean_object* v_b_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
uint8_t v___x_2077_; 
v___x_2077_ = lean_usize_dec_lt(v_i_2072_, v_sz_2071_);
if (v___x_2077_ == 0)
{
lean_object* v___x_2078_; 
v___x_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2078_, 0, v_b_2073_);
return v___x_2078_;
}
else
{
lean_object* v_snd_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2113_; 
v_snd_2079_ = lean_ctor_get(v_b_2073_, 1);
v_isSharedCheck_2113_ = !lean_is_exclusive(v_b_2073_);
if (v_isSharedCheck_2113_ == 0)
{
lean_object* v_unused_2114_; 
v_unused_2114_ = lean_ctor_get(v_b_2073_, 0);
lean_dec(v_unused_2114_);
v___x_2081_ = v_b_2073_;
v_isShared_2082_ = v_isSharedCheck_2113_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_snd_2079_);
lean_dec(v_b_2073_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2113_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2083_; lean_object* v_a_2084_; lean_object* v___x_2085_; 
v___x_2083_ = lean_box(0);
v_a_2084_ = lean_array_uget_borrowed(v_as_2070_, v_i_2072_);
lean_inc(v_snd_2079_);
v___x_2085_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2068_, v___x_2069_, v_a_2084_, v_snd_2079_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2104_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2088_ = v___x_2085_;
v_isShared_2089_ = v_isSharedCheck_2104_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2085_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2104_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
if (lean_obj_tag(v_a_2086_) == 0)
{
lean_object* v___x_2090_; lean_object* v___x_2092_; 
v___x_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2090_, 0, v_a_2086_);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 0, v___x_2090_);
v___x_2092_ = v___x_2081_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v___x_2090_);
lean_ctor_set(v_reuseFailAlloc_2096_, 1, v_snd_2079_);
v___x_2092_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2094_; 
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2092_);
v___x_2094_ = v___x_2088_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; 
lean_del_object(v___x_2088_);
lean_dec(v_snd_2079_);
v_a_2097_ = lean_ctor_get(v_a_2086_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v_a_2086_, 1);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 1, v_a_2097_);
lean_ctor_set(v___x_2081_, 0, v___x_2083_);
v___x_2099_ = v___x_2081_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2083_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v_a_2097_);
v___x_2099_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
size_t v___x_2100_; size_t v___x_2101_; 
v___x_2100_ = ((size_t)1ULL);
v___x_2101_ = lean_usize_add(v_i_2072_, v___x_2100_);
v_i_2072_ = v___x_2101_;
v_b_2073_ = v___x_2099_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_del_object(v___x_2081_);
lean_dec(v_snd_2079_);
v_a_2105_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2085_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2085_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39___boxed(lean_object* v_init_2115_, lean_object* v___x_2116_, lean_object* v_as_2117_, lean_object* v_sz_2118_, lean_object* v_i_2119_, lean_object* v_b_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_){
_start:
{
uint8_t v___x_39726__boxed_2124_; size_t v_sz_boxed_2125_; size_t v_i_boxed_2126_; lean_object* v_res_2127_; 
v___x_39726__boxed_2124_ = lean_unbox(v___x_2116_);
v_sz_boxed_2125_ = lean_unbox_usize(v_sz_2118_);
lean_dec(v_sz_2118_);
v_i_boxed_2126_ = lean_unbox_usize(v_i_2119_);
lean_dec(v_i_2119_);
v_res_2127_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(v_init_2115_, v___x_39726__boxed_2124_, v_as_2117_, v_sz_boxed_2125_, v_i_boxed_2126_, v_b_2120_, v___y_2121_, v___y_2122_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec_ref(v_as_2117_);
lean_dec_ref(v_init_2115_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27___boxed(lean_object* v_init_2128_, lean_object* v___x_2129_, lean_object* v_n_2130_, lean_object* v_b_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
uint8_t v___x_39746__boxed_2135_; lean_object* v_res_2136_; 
v___x_39746__boxed_2135_ = lean_unbox(v___x_2129_);
v_res_2136_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2128_, v___x_39746__boxed_2135_, v_n_2130_, v_b_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec_ref(v_n_2130_);
lean_dec_ref(v_init_2128_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(uint8_t v___x_2137_, lean_object* v_as_2138_, size_t v_sz_2139_, size_t v_i_2140_, lean_object* v_b_2141_, lean_object* v___y_2142_){
_start:
{
uint8_t v___x_2144_; 
v___x_2144_ = lean_usize_dec_lt(v_i_2140_, v_sz_2139_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; 
v___x_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2145_, 0, v_b_2141_);
return v___x_2145_;
}
else
{
lean_object* v_snd_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2183_; 
v_snd_2146_ = lean_ctor_get(v_b_2141_, 1);
v_isSharedCheck_2183_ = !lean_is_exclusive(v_b_2141_);
if (v_isSharedCheck_2183_ == 0)
{
lean_object* v_unused_2184_; 
v_unused_2184_ = lean_ctor_get(v_b_2141_, 0);
lean_dec(v_unused_2184_);
v___x_2148_ = v_b_2141_;
v_isShared_2149_ = v_isSharedCheck_2183_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_snd_2146_);
lean_dec(v_b_2141_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2183_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v_ref_2150_; lean_object* v_a_2151_; lean_object* v_ref_2152_; lean_object* v_msg_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2182_; 
v_ref_2150_ = lean_ctor_get(v___y_2142_, 2);
v_a_2151_ = lean_array_uget(v_as_2138_, v_i_2140_);
v_ref_2152_ = lean_ctor_get(v_a_2151_, 0);
v_msg_2153_ = lean_ctor_get(v_a_2151_, 1);
v_isSharedCheck_2182_ = !lean_is_exclusive(v_a_2151_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2155_ = v_a_2151_;
v_isShared_2156_ = v_isSharedCheck_2182_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_msg_2153_);
lean_inc(v_ref_2152_);
lean_dec(v_a_2151_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2182_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2157_; lean_object* v___y_2159_; lean_object* v___y_2160_; lean_object* v_ref_2174_; lean_object* v___y_2176_; lean_object* v___x_2179_; 
v___x_2157_ = lean_box(0);
v_ref_2174_ = l_Lean_replaceRef(v_ref_2152_, v_ref_2150_);
lean_dec(v_ref_2152_);
v___x_2179_ = l_Lean_Syntax_getPos_x3f(v_ref_2174_, v___x_2137_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v___x_2180_; 
v___x_2180_ = lean_unsigned_to_nat(0u);
v___y_2176_ = v___x_2180_;
goto v___jp_2175_;
}
else
{
lean_object* v_val_2181_; 
v_val_2181_ = lean_ctor_get(v___x_2179_, 0);
lean_inc(v_val_2181_);
lean_dec_ref_known(v___x_2179_, 1);
v___y_2176_ = v_val_2181_;
goto v___jp_2175_;
}
v___jp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 1, v___y_2160_);
lean_ctor_set(v___x_2148_, 0, v___y_2159_);
v___x_2162_ = v___x_2148_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___y_2159_);
lean_ctor_set(v_reuseFailAlloc_2173_, 1, v___y_2160_);
v___x_2162_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v_pos2traces_2166_; lean_object* v___x_2168_; 
v___x_2163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_2164_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_2146_, v___x_2162_, v___x_2163_);
v___x_2165_ = lean_array_push(v___x_2164_, v_msg_2153_);
v_pos2traces_2166_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_2146_, v___x_2162_, v___x_2165_);
if (v_isShared_2156_ == 0)
{
lean_ctor_set(v___x_2155_, 1, v_pos2traces_2166_);
lean_ctor_set(v___x_2155_, 0, v___x_2157_);
v___x_2168_ = v___x_2155_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2157_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_pos2traces_2166_);
v___x_2168_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
size_t v___x_2169_; size_t v___x_2170_; 
v___x_2169_ = ((size_t)1ULL);
v___x_2170_ = lean_usize_add(v_i_2140_, v___x_2169_);
v_i_2140_ = v___x_2170_;
v_b_2141_ = v___x_2168_;
goto _start;
}
}
}
v___jp_2175_:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Lean_Syntax_getTailPos_x3f(v_ref_2174_, v___x_2137_);
lean_dec(v_ref_2174_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_inc(v___y_2176_);
v___y_2159_ = v___y_2176_;
v___y_2160_ = v___y_2176_;
goto v___jp_2158_;
}
else
{
lean_object* v_val_2178_; 
v_val_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_val_2178_);
lean_dec_ref_known(v___x_2177_, 1);
v___y_2159_ = v___y_2176_;
v___y_2160_ = v_val_2178_;
goto v___jp_2158_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg___boxed(lean_object* v___x_2185_, lean_object* v_as_2186_, lean_object* v_sz_2187_, lean_object* v_i_2188_, lean_object* v_b_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
uint8_t v___x_39929__boxed_2192_; size_t v_sz_boxed_2193_; size_t v_i_boxed_2194_; lean_object* v_res_2195_; 
v___x_39929__boxed_2192_ = lean_unbox(v___x_2185_);
v_sz_boxed_2193_ = lean_unbox_usize(v_sz_2187_);
lean_dec(v_sz_2187_);
v_i_boxed_2194_ = lean_unbox_usize(v_i_2188_);
lean_dec(v_i_2188_);
v_res_2195_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_39929__boxed_2192_, v_as_2186_, v_sz_boxed_2193_, v_i_boxed_2194_, v_b_2189_, v___y_2190_);
lean_dec_ref(v___y_2190_);
lean_dec_ref(v_as_2186_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(uint8_t v___x_2196_, lean_object* v_as_2197_, size_t v_sz_2198_, size_t v_i_2199_, lean_object* v_b_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_){
_start:
{
uint8_t v___x_2204_; 
v___x_2204_ = lean_usize_dec_lt(v_i_2199_, v_sz_2198_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v_b_2200_);
return v___x_2205_;
}
else
{
lean_object* v_snd_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2243_; 
v_snd_2206_ = lean_ctor_get(v_b_2200_, 1);
v_isSharedCheck_2243_ = !lean_is_exclusive(v_b_2200_);
if (v_isSharedCheck_2243_ == 0)
{
lean_object* v_unused_2244_; 
v_unused_2244_ = lean_ctor_get(v_b_2200_, 0);
lean_dec(v_unused_2244_);
v___x_2208_ = v_b_2200_;
v_isShared_2209_ = v_isSharedCheck_2243_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_snd_2206_);
lean_dec(v_b_2200_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2243_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v_ref_2210_; lean_object* v_a_2211_; lean_object* v_ref_2212_; lean_object* v_msg_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2242_; 
v_ref_2210_ = lean_ctor_get(v___y_2201_, 2);
v_a_2211_ = lean_array_uget(v_as_2197_, v_i_2199_);
v_ref_2212_ = lean_ctor_get(v_a_2211_, 0);
v_msg_2213_ = lean_ctor_get(v_a_2211_, 1);
v_isSharedCheck_2242_ = !lean_is_exclusive(v_a_2211_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2215_ = v_a_2211_;
v_isShared_2216_ = v_isSharedCheck_2242_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_msg_2213_);
lean_inc(v_ref_2212_);
lean_dec(v_a_2211_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2242_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2217_; lean_object* v___y_2219_; lean_object* v___y_2220_; lean_object* v_ref_2234_; lean_object* v___y_2236_; lean_object* v___x_2239_; 
v___x_2217_ = lean_box(0);
v_ref_2234_ = l_Lean_replaceRef(v_ref_2212_, v_ref_2210_);
lean_dec(v_ref_2212_);
v___x_2239_ = l_Lean_Syntax_getPos_x3f(v_ref_2234_, v___x_2196_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v___x_2240_; 
v___x_2240_ = lean_unsigned_to_nat(0u);
v___y_2236_ = v___x_2240_;
goto v___jp_2235_;
}
else
{
lean_object* v_val_2241_; 
v_val_2241_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_val_2241_);
lean_dec_ref_known(v___x_2239_, 1);
v___y_2236_ = v_val_2241_;
goto v___jp_2235_;
}
v___jp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2209_ == 0)
{
lean_ctor_set(v___x_2208_, 1, v___y_2220_);
lean_ctor_set(v___x_2208_, 0, v___y_2219_);
v___x_2222_ = v___x_2208_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v___y_2219_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v___y_2220_);
v___x_2222_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v_pos2traces_2226_; lean_object* v___x_2228_; 
v___x_2223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_2224_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_2206_, v___x_2222_, v___x_2223_);
v___x_2225_ = lean_array_push(v___x_2224_, v_msg_2213_);
v_pos2traces_2226_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_2206_, v___x_2222_, v___x_2225_);
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 1, v_pos2traces_2226_);
lean_ctor_set(v___x_2215_, 0, v___x_2217_);
v___x_2228_ = v___x_2215_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2217_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v_pos2traces_2226_);
v___x_2228_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
size_t v___x_2229_; size_t v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = ((size_t)1ULL);
v___x_2230_ = lean_usize_add(v_i_2199_, v___x_2229_);
v___x_2231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_2196_, v_as_2197_, v_sz_2198_, v___x_2230_, v___x_2228_, v___y_2201_);
return v___x_2231_;
}
}
}
v___jp_2235_:
{
lean_object* v___x_2237_; 
v___x_2237_ = l_Lean_Syntax_getTailPos_x3f(v_ref_2234_, v___x_2196_);
lean_dec(v_ref_2234_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_inc(v___y_2236_);
v___y_2219_ = v___y_2236_;
v___y_2220_ = v___y_2236_;
goto v___jp_2218_;
}
else
{
lean_object* v_val_2238_; 
v_val_2238_ = lean_ctor_get(v___x_2237_, 0);
lean_inc(v_val_2238_);
lean_dec_ref_known(v___x_2237_, 1);
v___y_2219_ = v___y_2236_;
v___y_2220_ = v_val_2238_;
goto v___jp_2218_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28___boxed(lean_object* v___x_2245_, lean_object* v_as_2246_, lean_object* v_sz_2247_, lean_object* v_i_2248_, lean_object* v_b_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
uint8_t v___x_40009__boxed_2253_; size_t v_sz_boxed_2254_; size_t v_i_boxed_2255_; lean_object* v_res_2256_; 
v___x_40009__boxed_2253_ = lean_unbox(v___x_2245_);
v_sz_boxed_2254_ = lean_unbox_usize(v_sz_2247_);
lean_dec(v_sz_2247_);
v_i_boxed_2255_ = lean_unbox_usize(v_i_2248_);
lean_dec(v_i_2248_);
v_res_2256_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(v___x_40009__boxed_2253_, v_as_2246_, v_sz_boxed_2254_, v_i_boxed_2255_, v_b_2249_, v___y_2250_, v___y_2251_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec_ref(v_as_2246_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(uint8_t v___x_2257_, lean_object* v_t_2258_, lean_object* v_init_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v_root_2263_; lean_object* v_tail_2264_; lean_object* v___x_2265_; 
v_root_2263_ = lean_ctor_get(v_t_2258_, 0);
v_tail_2264_ = lean_ctor_get(v_t_2258_, 1);
lean_inc_ref(v_init_2259_);
v___x_2265_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2259_, v___x_2257_, v_root_2263_, v_init_2259_, v___y_2260_, v___y_2261_);
lean_dec_ref(v_init_2259_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2302_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2268_ = v___x_2265_;
v_isShared_2269_ = v_isSharedCheck_2302_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2265_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2302_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
if (lean_obj_tag(v_a_2266_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2272_; 
v_a_2270_ = lean_ctor_get(v_a_2266_, 0);
lean_inc(v_a_2270_);
lean_dec_ref_known(v_a_2266_, 1);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v_a_2270_);
v___x_2272_ = v___x_2268_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2270_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; size_t v_sz_2277_; size_t v___x_2278_; lean_object* v___x_2279_; 
lean_del_object(v___x_2268_);
v_a_2274_ = lean_ctor_get(v_a_2266_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v_a_2266_, 1);
v___x_2275_ = lean_box(0);
v___x_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v_a_2274_);
v_sz_2277_ = lean_array_size(v_tail_2264_);
v___x_2278_ = ((size_t)0ULL);
v___x_2279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(v___x_2257_, v_tail_2264_, v_sz_2277_, v___x_2278_, v___x_2276_, v___y_2260_, v___y_2261_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2293_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2282_ = v___x_2279_;
v_isShared_2283_ = v_isSharedCheck_2293_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2279_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2293_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v_fst_2284_; 
v_fst_2284_ = lean_ctor_get(v_a_2280_, 0);
if (lean_obj_tag(v_fst_2284_) == 0)
{
lean_object* v_snd_2285_; lean_object* v___x_2287_; 
v_snd_2285_ = lean_ctor_get(v_a_2280_, 1);
lean_inc(v_snd_2285_);
lean_dec(v_a_2280_);
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v_snd_2285_);
v___x_2287_ = v___x_2282_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_snd_2285_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
else
{
lean_object* v_val_2289_; lean_object* v___x_2291_; 
lean_inc_ref(v_fst_2284_);
lean_dec(v_a_2280_);
v_val_2289_ = lean_ctor_get(v_fst_2284_, 0);
lean_inc(v_val_2289_);
lean_dec_ref_known(v_fst_2284_, 1);
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v_val_2289_);
v___x_2291_ = v___x_2282_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_val_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
v_a_2294_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2279_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2279_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
v_a_2303_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2265_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2265_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19___boxed(lean_object* v___x_2311_, lean_object* v_t_2312_, lean_object* v_init_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
uint8_t v___x_40090__boxed_2317_; lean_object* v_res_2318_; 
v___x_40090__boxed_2317_ = lean_unbox(v___x_2311_);
v_res_2318_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(v___x_40090__boxed_2317_, v_t_2312_, v_init_2313_, v___y_2314_, v___y_2315_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec_ref(v_t_2312_);
return v_res_2318_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2319_ = lean_unsigned_to_nat(32u);
v___x_2320_ = lean_mk_empty_array_with_capacity(v___x_2319_);
v___x_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2320_);
return v___x_2321_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1(void){
_start:
{
size_t v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2322_ = ((size_t)5ULL);
v___x_2323_ = lean_unsigned_to_nat(0u);
v___x_2324_ = lean_unsigned_to_nat(32u);
v___x_2325_ = lean_mk_empty_array_with_capacity(v___x_2324_);
v___x_2326_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0);
v___x_2327_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2327_, 0, v___x_2326_);
lean_ctor_set(v___x_2327_, 1, v___x_2325_);
lean_ctor_set(v___x_2327_, 2, v___x_2323_);
lean_ctor_set(v___x_2327_, 3, v___x_2323_);
lean_ctor_set_usize(v___x_2327_, 4, v___x_2322_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(lean_object* v___y_2328_){
_start:
{
lean_object* v___x_2330_; lean_object* v_traceState_2331_; lean_object* v_traces_2332_; lean_object* v___x_2333_; lean_object* v_traceState_2334_; lean_object* v_env_2335_; lean_object* v_nextMacroScope_2336_; lean_object* v_ngen_2337_; lean_object* v_auxDeclNGen_2338_; lean_object* v_cache_2339_; lean_object* v_recordedDeps_2340_; lean_object* v_messages_2341_; lean_object* v_infoState_2342_; lean_object* v_snapshotTasks_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2362_; 
v___x_2330_ = lean_st_ref_get(v___y_2328_);
v_traceState_2331_ = lean_ctor_get(v___x_2330_, 4);
lean_inc_ref(v_traceState_2331_);
lean_dec(v___x_2330_);
v_traces_2332_ = lean_ctor_get(v_traceState_2331_, 0);
lean_inc_ref(v_traces_2332_);
lean_dec_ref(v_traceState_2331_);
v___x_2333_ = lean_st_ref_take(v___y_2328_);
v_traceState_2334_ = lean_ctor_get(v___x_2333_, 4);
v_env_2335_ = lean_ctor_get(v___x_2333_, 0);
v_nextMacroScope_2336_ = lean_ctor_get(v___x_2333_, 1);
v_ngen_2337_ = lean_ctor_get(v___x_2333_, 2);
v_auxDeclNGen_2338_ = lean_ctor_get(v___x_2333_, 3);
v_cache_2339_ = lean_ctor_get(v___x_2333_, 5);
v_recordedDeps_2340_ = lean_ctor_get(v___x_2333_, 6);
v_messages_2341_ = lean_ctor_get(v___x_2333_, 7);
v_infoState_2342_ = lean_ctor_get(v___x_2333_, 8);
v_snapshotTasks_2343_ = lean_ctor_get(v___x_2333_, 9);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2345_ = v___x_2333_;
v_isShared_2346_ = v_isSharedCheck_2362_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_snapshotTasks_2343_);
lean_inc(v_infoState_2342_);
lean_inc(v_messages_2341_);
lean_inc(v_recordedDeps_2340_);
lean_inc(v_cache_2339_);
lean_inc(v_traceState_2334_);
lean_inc(v_auxDeclNGen_2338_);
lean_inc(v_ngen_2337_);
lean_inc(v_nextMacroScope_2336_);
lean_inc(v_env_2335_);
lean_dec(v___x_2333_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2362_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
uint64_t v_tid_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2360_; 
v_tid_2347_ = lean_ctor_get_uint64(v_traceState_2334_, sizeof(void*)*1);
v_isSharedCheck_2360_ = !lean_is_exclusive(v_traceState_2334_);
if (v_isSharedCheck_2360_ == 0)
{
lean_object* v_unused_2361_; 
v_unused_2361_ = lean_ctor_get(v_traceState_2334_, 0);
lean_dec(v_unused_2361_);
v___x_2349_ = v_traceState_2334_;
v_isShared_2350_ = v_isSharedCheck_2360_;
goto v_resetjp_2348_;
}
else
{
lean_dec(v_traceState_2334_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2360_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2351_; lean_object* v___x_2353_; 
v___x_2351_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v___x_2351_);
v___x_2353_ = v___x_2349_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v___x_2351_);
lean_ctor_set_uint64(v_reuseFailAlloc_2359_, sizeof(void*)*1, v_tid_2347_);
v___x_2353_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
lean_object* v___x_2355_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 4, v___x_2353_);
v___x_2355_ = v___x_2345_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_env_2335_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_nextMacroScope_2336_);
lean_ctor_set(v_reuseFailAlloc_2358_, 2, v_ngen_2337_);
lean_ctor_set(v_reuseFailAlloc_2358_, 3, v_auxDeclNGen_2338_);
lean_ctor_set(v_reuseFailAlloc_2358_, 4, v___x_2353_);
lean_ctor_set(v_reuseFailAlloc_2358_, 5, v_cache_2339_);
lean_ctor_set(v_reuseFailAlloc_2358_, 6, v_recordedDeps_2340_);
lean_ctor_set(v_reuseFailAlloc_2358_, 7, v_messages_2341_);
lean_ctor_set(v_reuseFailAlloc_2358_, 8, v_infoState_2342_);
lean_ctor_set(v_reuseFailAlloc_2358_, 9, v_snapshotTasks_2343_);
v___x_2355_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2356_ = lean_st_ref_put(v___y_2328_, v___x_2355_);
v___x_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2357_, 0, v_traces_2332_);
return v___x_2357_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___boxed(lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_2363_);
lean_dec(v___y_2363_);
return v_res_2365_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2366_ = lean_box(0);
v___x_2367_ = lean_unsigned_to_nat(16u);
v___x_2368_ = lean_mk_array(v___x_2367_, v___x_2366_);
return v___x_2368_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1(void){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v_pos2traces_2371_; 
v___x_2369_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0, &l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0);
v___x_2370_ = lean_unsigned_to_nat(0u);
v_pos2traces_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_2371_, 0, v___x_2370_);
lean_ctor_set(v_pos2traces_2371_, 1, v___x_2369_);
return v_pos2traces_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9(lean_object* v___y_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v_toCold_2378_; lean_object* v_options_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v_toCold_2378_ = lean_ctor_get(v___y_2372_, 0);
v_options_2379_ = lean_ctor_get(v_toCold_2378_, 2);
v___x_2380_ = l_Lean_trace_profiler_output;
v___x_2381_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(v_options_2379_, v___x_2380_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v___x_2382_; uint8_t v___x_2383_; 
v___x_2382_ = l_Lean_trace_profiler_serve;
v___x_2383_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v_options_2379_, v___x_2382_);
if (v___x_2383_ == 0)
{
lean_object* v___x_2384_; lean_object* v_a_2385_; uint8_t v___x_2386_; 
v___x_2384_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_2373_);
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_a_2385_);
lean_dec_ref(v___x_2384_);
v___x_2386_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_2385_);
if (v___x_2386_ == 0)
{
lean_object* v___x_2387_; lean_object* v_pos2traces_2388_; lean_object* v___x_2389_; 
v___x_2387_ = lean_unsigned_to_nat(0u);
v_pos2traces_2388_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1, &l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1);
v___x_2389_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(v___x_2386_, v_a_2385_, v_pos2traces_2388_, v___y_2372_, v___y_2373_);
lean_dec(v_a_2385_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___y_2392_; lean_object* v___y_2406_; lean_object* v___y_2407_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2418_; lean_object* v_size_2424_; lean_object* v_buckets_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_a_2390_);
lean_dec_ref_known(v___x_2389_, 1);
v_size_2424_ = lean_ctor_get(v_a_2390_, 0);
lean_inc(v_size_2424_);
v_buckets_2425_ = lean_ctor_get(v_a_2390_, 1);
lean_inc_ref(v_buckets_2425_);
lean_dec(v_a_2390_);
v___x_2426_ = lean_mk_empty_array_with_capacity(v_size_2424_);
lean_dec(v_size_2424_);
v___x_2427_ = lean_array_get_size(v_buckets_2425_);
v___x_2428_ = lean_nat_dec_lt(v___x_2387_, v___x_2427_);
if (v___x_2428_ == 0)
{
lean_dec_ref(v_buckets_2425_);
v___y_2418_ = v___x_2426_;
goto v___jp_2417_;
}
else
{
size_t v___x_2429_; size_t v___x_2430_; lean_object* v___x_2431_; 
v___x_2429_ = ((size_t)0ULL);
v___x_2430_ = lean_usize_of_nat(v___x_2427_);
v___x_2431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(v_buckets_2425_, v___x_2429_, v___x_2430_, v___x_2426_);
lean_dec_ref(v_buckets_2425_);
v___y_2418_ = v___x_2431_;
goto v___jp_2417_;
}
v___jp_2391_:
{
lean_object* v___x_2393_; size_t v_sz_2394_; size_t v___x_2395_; lean_object* v___x_2396_; 
v___x_2393_ = lean_box(0);
v_sz_2394_ = lean_array_size(v___y_2392_);
v___x_2395_ = ((size_t)0ULL);
v___x_2396_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(v___x_2386_, v___y_2392_, v_sz_2394_, v___x_2395_, v___x_2393_, v___y_2372_, v___y_2373_);
lean_dec_ref(v___y_2392_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2403_; 
v_isSharedCheck_2403_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2403_ == 0)
{
lean_object* v_unused_2404_; 
v_unused_2404_ = lean_ctor_get(v___x_2396_, 0);
lean_dec(v_unused_2404_);
v___x_2398_ = v___x_2396_;
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
else
{
lean_dec(v___x_2396_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2401_; 
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 0, v___x_2393_);
v___x_2401_ = v___x_2398_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v___x_2393_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
else
{
return v___x_2396_;
}
}
v___jp_2405_:
{
lean_object* v___x_2410_; 
v___x_2410_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v___y_2408_, v___y_2407_, v___y_2406_, v___y_2409_);
lean_dec(v___y_2409_);
lean_dec(v___y_2408_);
v___y_2392_ = v___x_2410_;
goto v___jp_2391_;
}
v___jp_2411_:
{
uint8_t v___x_2416_; 
v___x_2416_ = lean_nat_dec_le(v___y_2415_, v___y_2413_);
if (v___x_2416_ == 0)
{
lean_dec(v___y_2413_);
lean_inc(v___y_2415_);
v___y_2406_ = v___y_2415_;
v___y_2407_ = v___y_2412_;
v___y_2408_ = v___y_2414_;
v___y_2409_ = v___y_2415_;
goto v___jp_2405_;
}
else
{
v___y_2406_ = v___y_2415_;
v___y_2407_ = v___y_2412_;
v___y_2408_ = v___y_2414_;
v___y_2409_ = v___y_2413_;
goto v___jp_2405_;
}
}
v___jp_2417_:
{
lean_object* v___x_2419_; uint8_t v___x_2420_; 
v___x_2419_ = lean_array_get_size(v___y_2418_);
v___x_2420_ = lean_nat_dec_eq(v___x_2419_, v___x_2387_);
if (v___x_2420_ == 0)
{
lean_object* v___x_2421_; lean_object* v___x_2422_; uint8_t v___x_2423_; 
v___x_2421_ = lean_unsigned_to_nat(1u);
v___x_2422_ = lean_nat_sub(v___x_2419_, v___x_2421_);
v___x_2423_ = lean_nat_dec_le(v___x_2387_, v___x_2422_);
if (v___x_2423_ == 0)
{
lean_inc(v___x_2422_);
v___y_2412_ = v___y_2418_;
v___y_2413_ = v___x_2422_;
v___y_2414_ = v___x_2419_;
v___y_2415_ = v___x_2422_;
goto v___jp_2411_;
}
else
{
v___y_2412_ = v___y_2418_;
v___y_2413_ = v___x_2422_;
v___y_2414_ = v___x_2419_;
v___y_2415_ = v___x_2387_;
goto v___jp_2411_;
}
}
else
{
v___y_2392_ = v___y_2418_;
goto v___jp_2391_;
}
}
}
else
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2439_; 
v_a_2432_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2434_ = v___x_2389_;
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2389_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2435_ == 0)
{
v___x_2437_ = v___x_2434_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2432_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
}
else
{
lean_dec(v_a_2385_);
goto v___jp_2375_;
}
}
else
{
goto v___jp_2375_;
}
}
else
{
lean_dec_ref_known(v___x_2381_, 1);
goto v___jp_2375_;
}
v___jp_2375_:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2376_ = lean_box(0);
v___x_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
return v___x_2377_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___boxed(lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(lean_object* v_as_2444_, size_t v_sz_2445_, size_t v_i_2446_, lean_object* v_b_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
uint8_t v___x_2451_; 
v___x_2451_ = lean_usize_dec_lt(v_i_2446_, v_sz_2445_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2452_, 0, v_b_2447_);
return v___x_2452_;
}
else
{
lean_object* v___x_2453_; lean_object* v_a_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2453_ = lean_box(0);
v_a_2454_ = lean_array_uget_borrowed(v_as_2444_, v_i_2446_);
v___x_2455_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2448_);
lean_inc(v_a_2454_);
v___x_2456_ = l_Lean_Compiler_LCNF_resumeCompilation(v_a_2454_, v___x_2455_, v___y_2448_, v___y_2449_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v___x_2457_; 
lean_dec_ref_known(v___x_2456_, 1);
v___x_2457_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2448_, v___y_2449_);
if (lean_obj_tag(v___x_2457_) == 0)
{
size_t v___x_2458_; size_t v___x_2459_; 
lean_dec_ref_known(v___x_2457_, 1);
v___x_2458_ = ((size_t)1ULL);
v___x_2459_ = lean_usize_add(v_i_2446_, v___x_2458_);
v_i_2446_ = v___x_2459_;
v_b_2447_ = v___x_2453_;
goto _start;
}
else
{
return v___x_2457_;
}
}
else
{
lean_object* v_a_2461_; lean_object* v___x_2462_; 
v_a_2461_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2456_, 1);
v___x_2462_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2448_, v___y_2449_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2469_ == 0)
{
lean_object* v_unused_2470_; 
v_unused_2470_ = lean_ctor_get(v___x_2462_, 0);
lean_dec(v_unused_2470_);
v___x_2464_ = v___x_2462_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_dec(v___x_2462_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
lean_ctor_set_tag(v___x_2464_, 1);
lean_ctor_set(v___x_2464_, 0, v_a_2461_);
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2461_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
else
{
lean_dec(v_a_2461_);
return v___x_2462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10___boxed(lean_object* v_as_2471_, lean_object* v_sz_2472_, lean_object* v_i_2473_, lean_object* v_b_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_){
_start:
{
size_t v_sz_boxed_2478_; size_t v_i_boxed_2479_; lean_object* v_res_2480_; 
v_sz_boxed_2478_ = lean_unbox_usize(v_sz_2472_);
lean_dec(v_sz_2472_);
v_i_boxed_2479_ = lean_unbox_usize(v_i_2473_);
lean_dec(v_i_2473_);
v_res_2480_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(v_as_2471_, v_sz_boxed_2478_, v_i_boxed_2479_, v_b_2474_, v___y_2475_, v___y_2476_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec_ref(v_as_2471_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(lean_object* v_as_2481_, size_t v_sz_2482_, size_t v_i_2483_, lean_object* v_b_2484_, lean_object* v___y_2485_){
_start:
{
uint8_t v___x_2487_; 
v___x_2487_ = lean_usize_dec_lt(v_i_2483_, v_sz_2482_);
if (v___x_2487_ == 0)
{
lean_object* v___x_2488_; 
v___x_2488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2488_, 0, v_b_2484_);
return v___x_2488_;
}
else
{
uint8_t v___x_2489_; lean_object* v_a_2490_; lean_object* v___x_2491_; lean_object* v_ref_2492_; lean_object* v___x_2493_; 
lean_dec_ref(v_b_2484_);
v___x_2489_ = 0;
v_a_2490_ = lean_array_uget_borrowed(v_as_2481_, v_i_2483_);
lean_inc(v_a_2490_);
v___x_2491_ = l_Lean_Message_toString(v_a_2490_, v___x_2489_);
v_ref_2492_ = lean_ctor_get(v___y_2485_, 2);
v___x_2493_ = l_IO_eprintln___at___00main_spec__6(v___x_2491_);
if (lean_obj_tag(v___x_2493_) == 0)
{
lean_object* v___x_2494_; size_t v___x_2495_; size_t v___x_2496_; 
lean_dec_ref_known(v___x_2493_, 1);
v___x_2494_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_2495_ = ((size_t)1ULL);
v___x_2496_ = lean_usize_add(v_i_2483_, v___x_2495_);
v_i_2483_ = v___x_2496_;
v_b_2484_ = v___x_2494_;
goto _start;
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2509_; 
v_a_2498_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2500_ = v___x_2493_;
v_isShared_2501_ = v_isSharedCheck_2509_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2493_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2509_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2507_; 
v___x_2502_ = lean_io_error_to_string(v_a_2498_);
v___x_2503_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
v___x_2504_ = l_Lean_MessageData_ofFormat(v___x_2503_);
lean_inc(v_ref_2492_);
v___x_2505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2505_, 0, v_ref_2492_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 0, v___x_2505_);
v___x_2507_ = v___x_2500_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v___x_2505_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg___boxed(lean_object* v_as_2510_, lean_object* v_sz_2511_, lean_object* v_i_2512_, lean_object* v_b_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
size_t v_sz_boxed_2516_; size_t v_i_boxed_2517_; lean_object* v_res_2518_; 
v_sz_boxed_2516_ = lean_unbox_usize(v_sz_2511_);
lean_dec(v_sz_2511_);
v_i_boxed_2517_ = lean_unbox_usize(v_i_2512_);
lean_dec(v_i_2512_);
v_res_2518_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_2510_, v_sz_boxed_2516_, v_i_boxed_2517_, v_b_2513_, v___y_2514_);
lean_dec_ref(v___y_2514_);
lean_dec_ref(v_as_2510_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(lean_object* v_as_2519_, size_t v_sz_2520_, size_t v_i_2521_, lean_object* v_b_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
uint8_t v___x_2526_; 
v___x_2526_ = lean_usize_dec_lt(v_i_2521_, v_sz_2520_);
if (v___x_2526_ == 0)
{
lean_object* v___x_2527_; 
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v_b_2522_);
return v___x_2527_;
}
else
{
uint8_t v___x_2528_; lean_object* v_a_2529_; lean_object* v___x_2530_; lean_object* v_ref_2531_; lean_object* v___x_2532_; 
lean_dec_ref(v_b_2522_);
v___x_2528_ = 0;
v_a_2529_ = lean_array_uget_borrowed(v_as_2519_, v_i_2521_);
lean_inc(v_a_2529_);
v___x_2530_ = l_Lean_Message_toString(v_a_2529_, v___x_2528_);
v_ref_2531_ = lean_ctor_get(v___y_2523_, 2);
v___x_2532_ = l_IO_eprintln___at___00main_spec__6(v___x_2530_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v___x_2533_; size_t v___x_2534_; size_t v___x_2535_; lean_object* v___x_2536_; 
lean_dec_ref_known(v___x_2532_, 1);
v___x_2533_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_2534_ = ((size_t)1ULL);
v___x_2535_ = lean_usize_add(v_i_2521_, v___x_2534_);
v___x_2536_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_2519_, v_sz_2520_, v___x_2535_, v___x_2533_, v___y_2523_);
return v___x_2536_;
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2548_; 
v_a_2537_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2539_ = v___x_2532_;
v_isShared_2540_ = v_isSharedCheck_2548_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_a_2537_);
lean_dec(v___x_2532_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2548_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2546_; 
v___x_2541_ = lean_io_error_to_string(v_a_2537_);
v___x_2542_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
v___x_2543_ = l_Lean_MessageData_ofFormat(v___x_2542_);
lean_inc(v_ref_2531_);
v___x_2544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2544_, 0, v_ref_2531_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
if (v_isShared_2540_ == 0)
{
lean_ctor_set(v___x_2539_, 0, v___x_2544_);
v___x_2546_ = v___x_2539_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___x_2544_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38___boxed(lean_object* v_as_2549_, lean_object* v_sz_2550_, lean_object* v_i_2551_, lean_object* v_b_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
size_t v_sz_boxed_2556_; size_t v_i_boxed_2557_; lean_object* v_res_2558_; 
v_sz_boxed_2556_ = lean_unbox_usize(v_sz_2550_);
lean_dec(v_sz_2550_);
v_i_boxed_2557_ = lean_unbox_usize(v_i_2551_);
lean_dec(v_i_2551_);
v_res_2558_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(v_as_2549_, v_sz_boxed_2556_, v_i_boxed_2557_, v_b_2552_, v___y_2553_, v___y_2554_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec_ref(v_as_2549_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(lean_object* v_init_2559_, lean_object* v_n_2560_, lean_object* v_b_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
if (lean_obj_tag(v_n_2560_) == 0)
{
lean_object* v_cs_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; size_t v_sz_2568_; size_t v___x_2569_; lean_object* v___x_2570_; 
v_cs_2565_ = lean_ctor_get(v_n_2560_, 0);
v___x_2566_ = lean_box(0);
v___x_2567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
lean_ctor_set(v___x_2567_, 1, v_b_2561_);
v_sz_2568_ = lean_array_size(v_cs_2565_);
v___x_2569_ = ((size_t)0ULL);
v___x_2570_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(v_init_2559_, v_cs_2565_, v_sz_2568_, v___x_2569_, v___x_2567_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2585_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2573_ = v___x_2570_;
v_isShared_2574_ = v_isSharedCheck_2585_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v___x_2570_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2585_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v_fst_2575_; 
v_fst_2575_ = lean_ctor_get(v_a_2571_, 0);
if (lean_obj_tag(v_fst_2575_) == 0)
{
lean_object* v_snd_2576_; lean_object* v___x_2577_; lean_object* v___x_2579_; 
v_snd_2576_ = lean_ctor_get(v_a_2571_, 1);
lean_inc(v_snd_2576_);
lean_dec(v_a_2571_);
v___x_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2577_, 0, v_snd_2576_);
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 0, v___x_2577_);
v___x_2579_ = v___x_2573_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v___x_2577_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
else
{
lean_object* v_val_2581_; lean_object* v___x_2583_; 
lean_inc_ref(v_fst_2575_);
lean_dec(v_a_2571_);
v_val_2581_ = lean_ctor_get(v_fst_2575_, 0);
lean_inc(v_val_2581_);
lean_dec_ref_known(v_fst_2575_, 1);
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 0, v_val_2581_);
v___x_2583_ = v___x_2573_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_val_2581_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
else
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
v_a_2586_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2588_ = v___x_2570_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2570_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2586_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
}
else
{
lean_object* v_vs_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; size_t v_sz_2597_; size_t v___x_2598_; lean_object* v___x_2599_; 
v_vs_2594_ = lean_ctor_get(v_n_2560_, 0);
v___x_2595_ = lean_box(0);
v___x_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
lean_ctor_set(v___x_2596_, 1, v_b_2561_);
v_sz_2597_ = lean_array_size(v_vs_2594_);
v___x_2598_ = ((size_t)0ULL);
v___x_2599_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(v_vs_2594_, v_sz_2597_, v___x_2598_, v___x_2596_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2614_; 
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2602_ = v___x_2599_;
v_isShared_2603_ = v_isSharedCheck_2614_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2599_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2614_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v_fst_2604_; 
v_fst_2604_ = lean_ctor_get(v_a_2600_, 0);
if (lean_obj_tag(v_fst_2604_) == 0)
{
lean_object* v_snd_2605_; lean_object* v___x_2606_; lean_object* v___x_2608_; 
v_snd_2605_ = lean_ctor_get(v_a_2600_, 1);
lean_inc(v_snd_2605_);
lean_dec(v_a_2600_);
v___x_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2606_, 0, v_snd_2605_);
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 0, v___x_2606_);
v___x_2608_ = v___x_2602_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v___x_2606_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
else
{
lean_object* v_val_2610_; lean_object* v___x_2612_; 
lean_inc_ref(v_fst_2604_);
lean_dec(v_a_2600_);
v_val_2610_ = lean_ctor_get(v_fst_2604_, 0);
lean_inc(v_val_2610_);
lean_dec_ref_known(v_fst_2604_, 1);
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 0, v_val_2610_);
v___x_2612_ = v___x_2602_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_val_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
v_a_2615_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2599_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2599_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(lean_object* v_init_2623_, lean_object* v_as_2624_, size_t v_sz_2625_, size_t v_i_2626_, lean_object* v_b_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_){
_start:
{
uint8_t v___x_2631_; 
v___x_2631_ = lean_usize_dec_lt(v_i_2626_, v_sz_2625_);
if (v___x_2631_ == 0)
{
lean_object* v___x_2632_; 
v___x_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2632_, 0, v_b_2627_);
return v___x_2632_;
}
else
{
lean_object* v_snd_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2667_; 
v_snd_2633_ = lean_ctor_get(v_b_2627_, 1);
v_isSharedCheck_2667_ = !lean_is_exclusive(v_b_2627_);
if (v_isSharedCheck_2667_ == 0)
{
lean_object* v_unused_2668_; 
v_unused_2668_ = lean_ctor_get(v_b_2627_, 0);
lean_dec(v_unused_2668_);
v___x_2635_ = v_b_2627_;
v_isShared_2636_ = v_isSharedCheck_2667_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_snd_2633_);
lean_dec(v_b_2627_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2667_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2637_; lean_object* v_a_2638_; lean_object* v___x_2639_; 
v___x_2637_ = lean_box(0);
v_a_2638_ = lean_array_uget_borrowed(v_as_2624_, v_i_2626_);
lean_inc(v_snd_2633_);
v___x_2639_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2623_, v_a_2638_, v_snd_2633_, v___y_2628_, v___y_2629_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2658_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2642_ = v___x_2639_;
v_isShared_2643_ = v_isSharedCheck_2658_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2639_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2658_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
if (lean_obj_tag(v_a_2640_) == 0)
{
lean_object* v___x_2644_; lean_object* v___x_2646_; 
v___x_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2644_, 0, v_a_2640_);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 0, v___x_2644_);
v___x_2646_ = v___x_2635_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v___x_2644_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_snd_2633_);
v___x_2646_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
lean_object* v___x_2648_; 
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 0, v___x_2646_);
v___x_2648_ = v___x_2642_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v___x_2646_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; 
lean_del_object(v___x_2642_);
lean_dec(v_snd_2633_);
v_a_2651_ = lean_ctor_get(v_a_2640_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v_a_2640_, 1);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 1, v_a_2651_);
lean_ctor_set(v___x_2635_, 0, v___x_2637_);
v___x_2653_ = v___x_2635_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v___x_2637_);
lean_ctor_set(v_reuseFailAlloc_2657_, 1, v_a_2651_);
v___x_2653_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
size_t v___x_2654_; size_t v___x_2655_; 
v___x_2654_ = ((size_t)1ULL);
v___x_2655_ = lean_usize_add(v_i_2626_, v___x_2654_);
v_i_2626_ = v___x_2655_;
v_b_2627_ = v___x_2653_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
lean_del_object(v___x_2635_);
lean_dec(v_snd_2633_);
v_a_2659_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2639_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2639_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37___boxed(lean_object* v_init_2669_, lean_object* v_as_2670_, lean_object* v_sz_2671_, lean_object* v_i_2672_, lean_object* v_b_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
size_t v_sz_boxed_2677_; size_t v_i_boxed_2678_; lean_object* v_res_2679_; 
v_sz_boxed_2677_ = lean_unbox_usize(v_sz_2671_);
lean_dec(v_sz_2671_);
v_i_boxed_2678_ = lean_unbox_usize(v_i_2672_);
lean_dec(v_i_2672_);
v_res_2679_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(v_init_2669_, v_as_2670_, v_sz_boxed_2677_, v_i_boxed_2678_, v_b_2673_, v___y_2674_, v___y_2675_);
lean_dec(v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec_ref(v_as_2670_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26___boxed(lean_object* v_init_2680_, lean_object* v_n_2681_, lean_object* v_b_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
lean_object* v_res_2686_; 
v_res_2686_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2680_, v_n_2681_, v_b_2682_, v___y_2683_, v___y_2684_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v_n_2681_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(lean_object* v_as_2687_, size_t v_sz_2688_, size_t v_i_2689_, lean_object* v_b_2690_, lean_object* v___y_2691_){
_start:
{
uint8_t v___x_2693_; 
v___x_2693_ = lean_usize_dec_lt(v_i_2689_, v_sz_2688_);
if (v___x_2693_ == 0)
{
lean_object* v___x_2694_; 
v___x_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2694_, 0, v_b_2690_);
return v___x_2694_;
}
else
{
uint8_t v___x_2695_; lean_object* v_a_2696_; lean_object* v___x_2697_; lean_object* v_ref_2698_; lean_object* v___x_2699_; 
lean_dec_ref(v_b_2690_);
v___x_2695_ = 0;
v_a_2696_ = lean_array_uget_borrowed(v_as_2687_, v_i_2689_);
lean_inc(v_a_2696_);
v___x_2697_ = l_Lean_Message_toString(v_a_2696_, v___x_2695_);
v_ref_2698_ = lean_ctor_get(v___y_2691_, 2);
v___x_2699_ = l_IO_eprintln___at___00main_spec__6(v___x_2697_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v___x_2700_; size_t v___x_2701_; size_t v___x_2702_; 
lean_dec_ref_known(v___x_2699_, 1);
v___x_2700_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_2701_ = ((size_t)1ULL);
v___x_2702_ = lean_usize_add(v_i_2689_, v___x_2701_);
v_i_2689_ = v___x_2702_;
v_b_2690_ = v___x_2700_;
goto _start;
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2715_; 
v_a_2704_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2706_ = v___x_2699_;
v_isShared_2707_ = v_isSharedCheck_2715_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2699_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2715_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2713_; 
v___x_2708_ = lean_io_error_to_string(v_a_2704_);
v___x_2709_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2708_);
v___x_2710_ = l_Lean_MessageData_ofFormat(v___x_2709_);
lean_inc(v_ref_2698_);
v___x_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2711_, 0, v_ref_2698_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
if (v_isShared_2707_ == 0)
{
lean_ctor_set(v___x_2706_, 0, v___x_2711_);
v___x_2713_ = v___x_2706_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v___x_2711_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg___boxed(lean_object* v_as_2716_, lean_object* v_sz_2717_, lean_object* v_i_2718_, lean_object* v_b_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_){
_start:
{
size_t v_sz_boxed_2722_; size_t v_i_boxed_2723_; lean_object* v_res_2724_; 
v_sz_boxed_2722_ = lean_unbox_usize(v_sz_2717_);
lean_dec(v_sz_2717_);
v_i_boxed_2723_ = lean_unbox_usize(v_i_2718_);
lean_dec(v_i_2718_);
v_res_2724_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_2716_, v_sz_boxed_2722_, v_i_boxed_2723_, v_b_2719_, v___y_2720_);
lean_dec_ref(v___y_2720_);
lean_dec_ref(v_as_2716_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(lean_object* v_as_2725_, size_t v_sz_2726_, size_t v_i_2727_, lean_object* v_b_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
uint8_t v___x_2732_; 
v___x_2732_ = lean_usize_dec_lt(v_i_2727_, v_sz_2726_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; 
v___x_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2733_, 0, v_b_2728_);
return v___x_2733_;
}
else
{
uint8_t v___x_2734_; lean_object* v_a_2735_; lean_object* v___x_2736_; lean_object* v_ref_2737_; lean_object* v___x_2738_; 
lean_dec_ref(v_b_2728_);
v___x_2734_ = 0;
v_a_2735_ = lean_array_uget_borrowed(v_as_2725_, v_i_2727_);
lean_inc(v_a_2735_);
v___x_2736_ = l_Lean_Message_toString(v_a_2735_, v___x_2734_);
v_ref_2737_ = lean_ctor_get(v___y_2729_, 2);
v___x_2738_ = l_IO_eprintln___at___00main_spec__6(v___x_2736_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v___x_2739_; size_t v___x_2740_; size_t v___x_2741_; lean_object* v___x_2742_; 
lean_dec_ref_known(v___x_2738_, 1);
v___x_2739_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_2740_ = ((size_t)1ULL);
v___x_2741_ = lean_usize_add(v_i_2727_, v___x_2740_);
v___x_2742_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_2725_, v_sz_2726_, v___x_2741_, v___x_2739_, v___y_2729_);
return v___x_2742_;
}
else
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2754_; 
v_a_2743_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2745_ = v___x_2738_;
v_isShared_2746_ = v_isSharedCheck_2754_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2738_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2754_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2752_; 
v___x_2747_ = lean_io_error_to_string(v_a_2743_);
v___x_2748_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2747_);
v___x_2749_ = l_Lean_MessageData_ofFormat(v___x_2748_);
lean_inc(v_ref_2737_);
v___x_2750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2750_, 0, v_ref_2737_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 0, v___x_2750_);
v___x_2752_ = v___x_2745_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v___x_2750_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
return v___x_2752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27___boxed(lean_object* v_as_2755_, lean_object* v_sz_2756_, lean_object* v_i_2757_, lean_object* v_b_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
size_t v_sz_boxed_2762_; size_t v_i_boxed_2763_; lean_object* v_res_2764_; 
v_sz_boxed_2762_ = lean_unbox_usize(v_sz_2756_);
lean_dec(v_sz_2756_);
v_i_boxed_2763_ = lean_unbox_usize(v_i_2757_);
lean_dec(v_i_2757_);
v_res_2764_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(v_as_2755_, v_sz_boxed_2762_, v_i_boxed_2763_, v_b_2758_, v___y_2759_, v___y_2760_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec_ref(v_as_2755_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11(lean_object* v_t_2765_, lean_object* v_init_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
lean_object* v_root_2770_; lean_object* v_tail_2771_; lean_object* v___x_2772_; 
v_root_2770_ = lean_ctor_get(v_t_2765_, 0);
v_tail_2771_ = lean_ctor_get(v_t_2765_, 1);
v___x_2772_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2766_, v_root_2770_, v_init_2766_, v___y_2767_, v___y_2768_);
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2809_; 
v_a_2773_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2775_ = v___x_2772_;
v_isShared_2776_ = v_isSharedCheck_2809_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2772_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2809_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
if (lean_obj_tag(v_a_2773_) == 0)
{
lean_object* v_a_2777_; lean_object* v___x_2779_; 
v_a_2777_ = lean_ctor_get(v_a_2773_, 0);
lean_inc(v_a_2777_);
lean_dec_ref_known(v_a_2773_, 1);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v_a_2777_);
v___x_2779_ = v___x_2775_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2777_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
else
{
lean_object* v_a_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; size_t v_sz_2784_; size_t v___x_2785_; lean_object* v___x_2786_; 
lean_del_object(v___x_2775_);
v_a_2781_ = lean_ctor_get(v_a_2773_, 0);
lean_inc(v_a_2781_);
lean_dec_ref_known(v_a_2773_, 1);
v___x_2782_ = lean_box(0);
v___x_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2782_);
lean_ctor_set(v___x_2783_, 1, v_a_2781_);
v_sz_2784_ = lean_array_size(v_tail_2771_);
v___x_2785_ = ((size_t)0ULL);
v___x_2786_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(v_tail_2771_, v_sz_2784_, v___x_2785_, v___x_2783_, v___y_2767_, v___y_2768_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2800_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2789_ = v___x_2786_;
v_isShared_2790_ = v_isSharedCheck_2800_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2786_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2800_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v_fst_2791_; 
v_fst_2791_ = lean_ctor_get(v_a_2787_, 0);
if (lean_obj_tag(v_fst_2791_) == 0)
{
lean_object* v_snd_2792_; lean_object* v___x_2794_; 
v_snd_2792_ = lean_ctor_get(v_a_2787_, 1);
lean_inc(v_snd_2792_);
lean_dec(v_a_2787_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v_snd_2792_);
v___x_2794_ = v___x_2789_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_snd_2792_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
else
{
lean_object* v_val_2796_; lean_object* v___x_2798_; 
lean_inc_ref(v_fst_2791_);
lean_dec(v_a_2787_);
v_val_2796_ = lean_ctor_get(v_fst_2791_, 0);
lean_inc(v_val_2796_);
lean_dec_ref_known(v_fst_2791_, 1);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v_val_2796_);
v___x_2798_ = v___x_2789_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_val_2796_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2808_; 
v_a_2801_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2803_ = v___x_2786_;
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2786_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2808_;
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
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2801_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
v_a_2810_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2772_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2772_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11___boxed(lean_object* v_t_2818_, lean_object* v_init_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l_Lean_PersistentArray_forIn___at___00main_spec__11(v_t_2818_, v_init_2819_, v___y_2820_, v___y_2821_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
lean_dec_ref(v_t_2818_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(lean_object* v_as_2824_, size_t v_sz_2825_, size_t v_i_2826_, lean_object* v_b_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_){
_start:
{
uint8_t v___x_2831_; 
v___x_2831_ = lean_usize_dec_lt(v_i_2826_, v_sz_2825_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2832_; 
v___x_2832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2832_, 0, v_b_2827_);
return v___x_2832_;
}
else
{
lean_object* v_a_2833_; lean_object* v_declNames_2834_; lean_object* v___x_2835_; size_t v_sz_2836_; size_t v___x_2837_; lean_object* v___x_2838_; 
v_a_2833_ = lean_array_uget_borrowed(v_as_2824_, v_i_2826_);
v_declNames_2834_ = lean_ctor_get(v_a_2833_, 0);
v___x_2835_ = lean_box(0);
v_sz_2836_ = lean_array_size(v_declNames_2834_);
v___x_2837_ = ((size_t)0ULL);
v___x_2838_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(v_declNames_2834_, v_sz_2836_, v___x_2837_, v___x_2835_, v___y_2828_, v___y_2829_);
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v___x_2839_; 
lean_dec_ref_known(v___x_2838_, 1);
v___x_2839_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v___y_2829_);
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_object* v_a_2840_; lean_object* v_unreported_2841_; lean_object* v___x_2842_; 
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
lean_inc(v_a_2840_);
lean_dec_ref_known(v___x_2839_, 1);
v_unreported_2841_ = lean_ctor_get(v_a_2840_, 1);
lean_inc_ref(v_unreported_2841_);
lean_dec(v_a_2840_);
v___x_2842_ = l_Lean_PersistentArray_forIn___at___00main_spec__11(v_unreported_2841_, v___x_2835_, v___y_2828_, v___y_2829_);
lean_dec_ref(v_unreported_2841_);
if (lean_obj_tag(v___x_2842_) == 0)
{
size_t v___x_2843_; size_t v___x_2844_; 
lean_dec_ref_known(v___x_2842_, 1);
v___x_2843_ = ((size_t)1ULL);
v___x_2844_ = lean_usize_add(v_i_2826_, v___x_2843_);
v_i_2826_ = v___x_2844_;
v_b_2827_ = v___x_2835_;
goto _start;
}
else
{
return v___x_2842_;
}
}
else
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2853_; 
v_a_2846_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2848_ = v___x_2839_;
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2839_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2851_; 
if (v_isShared_2849_ == 0)
{
v___x_2851_ = v___x_2848_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2846_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
return v___x_2851_;
}
}
}
}
else
{
return v___x_2838_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12___boxed(lean_object* v_as_2854_, lean_object* v_sz_2855_, lean_object* v_i_2856_, lean_object* v_b_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_){
_start:
{
size_t v_sz_boxed_2861_; size_t v_i_boxed_2862_; lean_object* v_res_2863_; 
v_sz_boxed_2861_ = lean_unbox_usize(v_sz_2855_);
lean_dec(v_sz_2855_);
v_i_boxed_2862_ = lean_unbox_usize(v_i_2856_);
lean_dec(v_i_2856_);
v_res_2863_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(v_as_2854_, v_sz_boxed_2861_, v_i_boxed_2862_, v_b_2857_, v___y_2858_, v___y_2859_);
lean_dec(v___y_2859_);
lean_dec_ref(v___y_2858_);
lean_dec_ref(v_as_2854_);
return v_res_2863_;
}
}
static lean_object* _init_l_main___closed__1(void){
_start:
{
lean_object* v___x_2865_; 
v___x_2865_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v___x_2865_;
}
}
static lean_object* _init_l_main___closed__2(void){
_start:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2866_ = l_Lean_instInhabitedClassState_default;
v___x_2867_ = lean_box(0);
v___x_2868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
lean_ctor_set(v___x_2868_, 1, v___x_2866_);
return v___x_2868_;
}
}
static lean_object* _init_l_main___closed__3(void){
_start:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2869_ = l_Lean_Meta_Match_Extension_instInhabitedState;
v___x_2870_ = lean_box(0);
v___x_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
lean_ctor_set(v___x_2871_, 1, v___x_2869_);
return v___x_2871_;
}
}
static lean_object* _init_l_main___closed__4(void){
_start:
{
lean_object* v___x_2872_; 
v___x_2872_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_2872_;
}
}
static lean_object* _init_l_main___closed__5(void){
_start:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2873_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2874_ = lean_box(0);
v___x_2875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
lean_ctor_set(v___x_2875_, 1, v___x_2873_);
return v___x_2875_;
}
}
static lean_object* _init_l_main___closed__6(void){
_start:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2876_ = lean_obj_once(&l_main___closed__5, &l_main___closed__5_once, _init_l_main___closed__5);
v___x_2877_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_2876_);
return v___x_2877_;
}
}
static lean_object* _init_l_main___closed__7(void){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = l_Array_instInhabited___redArg();
return v___x_2878_;
}
}
static lean_object* _init_l_main___closed__17(void){
_start:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2891_ = ((lean_object*)(l_main___closed__16));
v___x_2892_ = lean_unsigned_to_nat(27u);
v___x_2893_ = lean_unsigned_to_nat(160u);
v___x_2894_ = ((lean_object*)(l_main___closed__15));
v___x_2895_ = ((lean_object*)(l_main___closed__14));
v___x_2896_ = l_mkPanicMessageWithDecl(v___x_2895_, v___x_2894_, v___x_2893_, v___x_2892_, v___x_2891_);
return v___x_2896_;
}
}
static lean_object* _init_l_main___closed__19(void){
_start:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2898_ = ((lean_object*)(l_main___closed__16));
v___x_2899_ = lean_unsigned_to_nat(51u);
v___x_2900_ = lean_unsigned_to_nat(133u);
v___x_2901_ = ((lean_object*)(l_main___closed__15));
v___x_2902_ = ((lean_object*)(l_main___closed__14));
v___x_2903_ = l_mkPanicMessageWithDecl(v___x_2902_, v___x_2901_, v___x_2900_, v___x_2899_, v___x_2898_);
return v___x_2903_;
}
}
static lean_object* _init_l_main___closed__20(void){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2904_ = lean_unsigned_to_nat(1u);
v___x_2905_ = l_Lean_firstFrontendMacroScope;
v___x_2906_ = lean_nat_add(v___x_2905_, v___x_2904_);
return v___x_2906_;
}
}
static lean_object* _init_l_main___closed__24(void){
_start:
{
lean_object* v___x_2913_; uint64_t v___x_2914_; lean_object* v___x_2915_; 
v___x_2913_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2914_ = 0ULL;
v___x_2915_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2915_, 0, v___x_2913_);
lean_ctor_set_uint64(v___x_2915_, sizeof(void*)*1, v___x_2914_);
return v___x_2915_;
}
}
static lean_object* _init_l_main___closed__25(void){
_start:
{
lean_object* v___x_2916_; 
v___x_2916_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2916_;
}
}
static lean_object* _init_l_main___closed__26(void){
_start:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = lean_obj_once(&l_main___closed__25, &l_main___closed__25_once, _init_l_main___closed__25);
v___x_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2917_);
return v___x_2918_;
}
}
static lean_object* _init_l_main___closed__27(void){
_start:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2919_ = lean_obj_once(&l_main___closed__26, &l_main___closed__26_once, _init_l_main___closed__26);
v___x_2920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2919_);
lean_ctor_set(v___x_2920_, 1, v___x_2919_);
return v___x_2920_;
}
}
static lean_object* _init_l_main___closed__29(void){
_start:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; 
v___x_2923_ = lean_unsigned_to_nat(0u);
v___x_2924_ = l_Lean_Options_empty;
v___x_2925_ = ((lean_object*)(l_main___closed__28));
v___x_2926_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2925_);
lean_ctor_set(v___x_2926_, 1, v___x_2924_);
lean_ctor_set(v___x_2926_, 2, v___x_2925_);
lean_ctor_set(v___x_2926_, 3, v___x_2923_);
lean_ctor_set(v___x_2926_, 4, v___x_2923_);
lean_ctor_set(v___x_2926_, 5, v___x_2923_);
lean_ctor_set(v___x_2926_, 6, v___x_2925_);
lean_ctor_set(v___x_2926_, 7, v___x_2925_);
return v___x_2926_;
}
}
static lean_object* _init_l_main___closed__30(void){
_start:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2927_ = l_Lean_NameSet_empty;
v___x_2928_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2929_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
lean_ctor_set(v___x_2929_, 1, v___x_2928_);
lean_ctor_set(v___x_2929_, 2, v___x_2927_);
return v___x_2929_;
}
}
static lean_object* _init_l_main___closed__31(void){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; uint8_t v___x_2932_; lean_object* v___x_2933_; 
v___x_2930_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2931_ = lean_obj_once(&l_main___closed__26, &l_main___closed__26_once, _init_l_main___closed__26);
v___x_2932_ = 1;
v___x_2933_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2933_, 0, v___x_2931_);
lean_ctor_set(v___x_2933_, 1, v___x_2931_);
lean_ctor_set(v___x_2933_, 2, v___x_2930_);
lean_ctor_set_uint8(v___x_2933_, sizeof(void*)*3, v___x_2932_);
return v___x_2933_;
}
}
static uint8_t _init_l_main___closed__35(void){
_start:
{
uint8_t v___x_2938_; uint8_t v___x_2939_; uint8_t v___x_2940_; 
v___x_2938_ = 2;
v___x_2939_ = 0;
v___x_2940_ = l_Lean_instOrdOLeanLevel_ord(v___x_2939_, v___x_2938_);
return v___x_2940_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = 0;
v___x_2942_ = lean_box_uint32(v___x_2941_);
return v___x_2942_;
}
}
static lean_object* _init_l_main___boxed__const__2(void){
_start:
{
uint32_t v___x_2943_; lean_object* v___x_2944_; 
v___x_2943_ = 1;
v___x_2944_ = lean_box_uint32(v___x_2943_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_2945_){
_start:
{
if (lean_obj_tag(v_args_2945_) == 1)
{
lean_object* v_tail_2970_; 
v_tail_2970_ = lean_ctor_get(v_args_2945_, 1);
lean_inc(v_tail_2970_);
if (lean_obj_tag(v_tail_2970_) == 1)
{
lean_object* v_tail_2971_; 
v_tail_2971_ = lean_ctor_get(v_tail_2970_, 1);
lean_inc(v_tail_2971_);
if (lean_obj_tag(v_tail_2971_) == 1)
{
lean_object* v_head_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_3693_; 
v_head_2972_ = lean_ctor_get(v_args_2945_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v_args_2945_);
if (v_isSharedCheck_3693_ == 0)
{
lean_object* v_unused_3694_; 
v_unused_3694_ = lean_ctor_get(v_args_2945_, 1);
lean_dec(v_unused_3694_);
v___x_2974_ = v_args_2945_;
v_isShared_2975_ = v_isSharedCheck_3693_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_head_2972_);
lean_dec(v_args_2945_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_3693_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v_head_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_3691_; 
v_head_2976_ = lean_ctor_get(v_tail_2970_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v_tail_2970_);
if (v_isSharedCheck_3691_ == 0)
{
lean_object* v_unused_3692_; 
v_unused_3692_ = lean_ctor_get(v_tail_2970_, 1);
lean_dec(v_unused_3692_);
v___x_2978_ = v_tail_2970_;
v_isShared_2979_ = v_isSharedCheck_3691_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_head_2976_);
lean_dec(v_tail_2970_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_3691_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v_head_2980_; lean_object* v_tail_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_3690_; 
v_head_2980_ = lean_ctor_get(v_tail_2971_, 0);
v_tail_2981_ = lean_ctor_get(v_tail_2971_, 1);
v_isSharedCheck_3690_ = !lean_is_exclusive(v_tail_2971_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_2983_ = v_tail_2971_;
v_isShared_2984_ = v_isSharedCheck_3690_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_tail_2981_);
lean_inc(v_head_2980_);
lean_dec(v_tail_2971_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_3690_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2985_ = lean_obj_once(&l_main___closed__1, &l_main___closed__1_once, _init_l_main___closed__1);
v___x_2986_ = lean_box(0);
v___x_2987_ = lean_obj_once(&l_main___closed__2, &l_main___closed__2_once, _init_l_main___closed__2);
v___x_2988_ = lean_obj_once(&l_main___closed__3, &l_main___closed__3_once, _init_l_main___closed__3);
v___x_2989_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2990_ = lean_obj_once(&l_main___closed__6, &l_main___closed__6_once, _init_l_main___closed__6);
v___x_2991_ = lean_obj_once(&l_main___closed__7, &l_main___closed__7_once, _init_l_main___closed__7);
v___x_2992_ = lean_box(1);
v___x_2993_ = ((lean_object*)(l_main___closed__8));
v___x_2994_ = l_Lean_ModuleSetup_load(v_head_2972_);
lean_dec(v_head_2972_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v_name_2996_; lean_object* v_package_x3f_2997_; lean_object* v_importArts_2998_; lean_object* v_options_2999_; lean_object* v___f_3000_; uint8_t v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3005_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v___x_2994_, 1);
v_name_2996_ = lean_ctor_get(v_a_2995_, 0);
lean_inc(v_name_2996_);
v_package_x3f_2997_ = lean_ctor_get(v_a_2995_, 1);
lean_inc(v_package_x3f_2997_);
v_importArts_2998_ = lean_ctor_get(v_a_2995_, 3);
lean_inc(v_importArts_2998_);
v_options_2999_ = lean_ctor_get(v_a_2995_, 6);
lean_inc(v_options_2999_);
lean_dec(v_a_2995_);
v___f_3000_ = lean_alloc_closure((void*)(l_main___lam__0), 2, 1);
lean_closure_set(v___f_3000_, 0, v_package_x3f_2997_);
v___x_3001_ = 0;
v___x_3002_ = l_Lean_LeanOptions_toOptions(v_options_2999_);
v___x_3003_ = lean_box(v___x_3001_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set_tag(v___x_2983_, 0);
lean_ctor_set(v___x_2983_, 1, v___x_3002_);
lean_ctor_set(v___x_2983_, 0, v___x_3003_);
v___x_3005_ = v___x_2983_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3681_, 1, v___x_3002_);
v___x_3005_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_object* v___x_3006_; 
v___x_3006_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_tail_2981_, v___x_3005_);
lean_dec(v_tail_2981_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v_a_3007_; lean_object* v_fst_3008_; lean_object* v_snd_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3672_; 
v_a_3007_ = lean_ctor_get(v___x_3006_, 0);
lean_inc(v_a_3007_);
lean_dec_ref_known(v___x_3006_, 1);
v_fst_3008_ = lean_ctor_get(v_a_3007_, 0);
v_snd_3009_ = lean_ctor_get(v_a_3007_, 1);
v_isSharedCheck_3672_ = !lean_is_exclusive(v_a_3007_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3011_ = v_a_3007_;
v_isShared_3012_ = v_isSharedCheck_3672_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_snd_3009_);
lean_inc(v_fst_3008_);
lean_dec(v_a_3007_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3672_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3013_; uint8_t v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___y_3020_; uint8_t v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; uint8_t v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; uint8_t v___y_3180_; lean_object* v___y_3181_; lean_object* v___y_3182_; lean_object* v___y_3183_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; uint8_t v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v_nextMacroScope_3198_; lean_object* v_ngen_3199_; lean_object* v_auxDeclNGen_3200_; lean_object* v_traceState_3201_; lean_object* v_recordedDeps_3202_; lean_object* v_messages_3203_; lean_object* v_infoState_3204_; lean_object* v_snapshotTasks_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3209_; lean_object* v___y_3210_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3227_; uint8_t v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v___y_3231_; lean_object* v___y_3232_; lean_object* v___y_3233_; lean_object* v___y_3234_; uint8_t v___y_3235_; lean_object* v___y_3236_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3250_; uint16_t v___y_3251_; lean_object* v_fileName_3252_; lean_object* v_fileMap_3253_; lean_object* v_currNamespace_3254_; lean_object* v_openDecls_3255_; lean_object* v_initHeartbeats_3256_; lean_object* v_maxHeartbeats_3257_; lean_object* v_quotContext_3258_; lean_object* v_currMacroScope_3259_; lean_object* v_cancelTk_x3f_3260_; lean_object* v_inheritedTraceOptions_3261_; lean_object* v_currRecDepth_3262_; lean_object* v_ref_3263_; uint8_t v_suppressElabErrors_3264_; uint8_t v_checkDeprecated_3265_; uint8_t v_isRecordingDeps_3266_; lean_object* v___y_3267_; uint8_t v___y_3290_; lean_object* v___y_3291_; lean_object* v___y_3292_; lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; lean_object* v___y_3298_; uint8_t v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3301_; lean_object* v___y_3302_; lean_object* v_nextMacroScope_3303_; lean_object* v_ngen_3304_; lean_object* v_auxDeclNGen_3305_; lean_object* v_traceState_3306_; lean_object* v_recordedDeps_3307_; lean_object* v_messages_3308_; lean_object* v_infoState_3309_; lean_object* v_snapshotTasks_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; uint16_t v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___y_3352_; uint8_t v___y_3353_; lean_object* v___y_3354_; lean_object* v___y_3355_; lean_object* v___y_3356_; lean_object* v___y_3357_; uint8_t v___y_3358_; lean_object* v___y_3359_; uint16_t v___y_3360_; lean_object* v___y_3361_; lean_object* v___y_3362_; uint8_t v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; uint8_t v___y_3369_; lean_object* v___x_3386_; 
v___x_3013_ = l_Lean_Compiler_compiler_inLeanIR;
v___x_3014_ = 1;
v___x_3015_ = l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(v_snd_3009_, v___x_3013_, v___x_3014_);
v___x_3016_ = l_Lean_maxHeartbeats;
v___x_3017_ = lean_unsigned_to_nat(0u);
v___x_3018_ = l_Lean_Option_set___at___00main_spec__3(v___x_3015_, v___x_3016_, v___x_3017_);
v___x_3386_ = lean_init_search_path();
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3397_; lean_object* v___y_3507_; lean_object* v___y_3508_; uint8_t v___y_3509_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3542_; lean_object* v___y_3543_; lean_object* v___y_3544_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v___y_3547_; lean_object* v___y_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3564_; lean_object* v___y_3565_; uint8_t v___y_3636_; uint8_t v___x_3663_; 
lean_dec_ref_known(v___x_3386_, 1);
v___x_3387_ = ((lean_object*)(l_main___closed__18));
lean_inc(v_name_2996_);
v___x_3388_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3388_, 0, v_name_2996_);
lean_ctor_set_uint8(v___x_3388_, sizeof(void*)*1, v___x_3014_);
lean_ctor_set_uint8(v___x_3388_, sizeof(void*)*1 + 1, v___x_3014_);
lean_ctor_set_uint8(v___x_3388_, sizeof(void*)*1 + 2, v___x_3001_);
v___x_3389_ = lean_unsigned_to_nat(1u);
v___x_3390_ = lean_mk_empty_array_with_capacity(v___x_3389_);
v___x_3391_ = lean_array_push(v___x_3390_, v___x_3388_);
v___x_3392_ = 0;
v___x_3663_ = lean_uint8_once(&l_main___closed__35, &l_main___closed__35_once, _init_l_main___closed__35);
if (v___x_3663_ == 0)
{
v___y_3636_ = v___x_3014_;
goto v___jp_3635_;
}
else
{
v___y_3636_ = v___x_3001_;
goto v___jp_3635_;
}
v___jp_3393_:
{
lean_object* v___x_3398_; lean_object* v_moduleData_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3398_ = l_Lean_Environment_header(v___y_3397_);
v_moduleData_3399_ = lean_ctor_get(v___x_3398_, 7);
lean_inc_ref(v_moduleData_3399_);
lean_dec_ref(v___x_3398_);
v___x_3400_ = lean_array_get_size(v_moduleData_3399_);
v___x_3401_ = lean_nat_dec_lt(v___y_3395_, v___x_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
lean_dec_ref(v_moduleData_3399_);
lean_dec_ref(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
v___x_3402_ = lean_obj_once(&l_main___closed__19, &l_main___closed__19_once, _init_l_main___closed__19);
v___x_3403_ = l_panic___at___00main_spec__5(v___x_3402_);
return v___x_3403_;
}
else
{
lean_object* v_base_3404_; lean_object* v_private_3405_; lean_object* v_header_3406_; lean_object* v_serverBaseExts_3407_; lean_object* v_checked_3408_; lean_object* v_asyncConstsMap_3409_; lean_object* v_asyncCtx_x3f_3410_; lean_object* v_importRealizationCtx_x3f_3411_; lean_object* v_localRealizationCtxMap_3412_; lean_object* v_allRealizations_3413_; uint8_t v_isExporting_3414_; uint8_t v_isRecordingDeps_3415_; lean_object* v_synthCacheRaw_x3f_3416_; lean_object* v_declChangeLog_3417_; lean_object* v_recordingConstGen_3418_; lean_object* v_constAddedGens_3419_; lean_object* v_constGen_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3504_; 
v_base_3404_ = lean_ctor_get(v___y_3397_, 0);
lean_inc_ref(v_base_3404_);
v_private_3405_ = lean_ctor_get(v_base_3404_, 0);
lean_inc(v_private_3405_);
v_header_3406_ = lean_ctor_get(v_private_3405_, 7);
lean_inc_ref(v_header_3406_);
v_serverBaseExts_3407_ = lean_ctor_get(v___y_3397_, 1);
v_checked_3408_ = lean_ctor_get(v___y_3397_, 2);
v_asyncConstsMap_3409_ = lean_ctor_get(v___y_3397_, 3);
v_asyncCtx_x3f_3410_ = lean_ctor_get(v___y_3397_, 4);
v_importRealizationCtx_x3f_3411_ = lean_ctor_get(v___y_3397_, 5);
v_localRealizationCtxMap_3412_ = lean_ctor_get(v___y_3397_, 6);
v_allRealizations_3413_ = lean_ctor_get(v___y_3397_, 7);
v_isExporting_3414_ = lean_ctor_get_uint8(v___y_3397_, sizeof(void*)*13);
v_isRecordingDeps_3415_ = lean_ctor_get_uint8(v___y_3397_, sizeof(void*)*13 + 1);
v_synthCacheRaw_x3f_3416_ = lean_ctor_get(v___y_3397_, 8);
v_declChangeLog_3417_ = lean_ctor_get(v___y_3397_, 9);
v_recordingConstGen_3418_ = lean_ctor_get(v___y_3397_, 10);
v_constAddedGens_3419_ = lean_ctor_get(v___y_3397_, 11);
v_constGen_3420_ = lean_ctor_get(v___y_3397_, 12);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___y_3397_);
if (v_isSharedCheck_3504_ == 0)
{
lean_object* v_unused_3505_; 
v_unused_3505_ = lean_ctor_get(v___y_3397_, 0);
lean_dec(v_unused_3505_);
v___x_3422_ = v___y_3397_;
v_isShared_3423_ = v_isSharedCheck_3504_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_constGen_3420_);
lean_inc(v_constAddedGens_3419_);
lean_inc(v_recordingConstGen_3418_);
lean_inc(v_declChangeLog_3417_);
lean_inc(v_synthCacheRaw_x3f_3416_);
lean_inc(v_allRealizations_3413_);
lean_inc(v_localRealizationCtxMap_3412_);
lean_inc(v_importRealizationCtx_x3f_3411_);
lean_inc(v_asyncCtx_x3f_3410_);
lean_inc(v_asyncConstsMap_3409_);
lean_inc(v_checked_3408_);
lean_inc(v_serverBaseExts_3407_);
lean_dec(v___y_3397_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3504_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v_public_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3502_; 
v_public_3424_ = lean_ctor_get(v_base_3404_, 1);
v_isSharedCheck_3502_ = !lean_is_exclusive(v_base_3404_);
if (v_isSharedCheck_3502_ == 0)
{
lean_object* v_unused_3503_; 
v_unused_3503_ = lean_ctor_get(v_base_3404_, 0);
lean_dec(v_unused_3503_);
v___x_3426_ = v_base_3404_;
v_isShared_3427_ = v_isSharedCheck_3502_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_public_3424_);
lean_dec(v_base_3404_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3502_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v_constants_3428_; uint8_t v_quotInit_3429_; lean_object* v_diagnostics_3430_; lean_object* v_importedExtraConsts_3431_; lean_object* v_extensions_3432_; lean_object* v_irBaseExts_3433_; lean_object* v_extGens_3434_; lean_object* v_trackedGen_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3500_; 
v_constants_3428_ = lean_ctor_get(v_private_3405_, 0);
v_quotInit_3429_ = lean_ctor_get_uint8(v_private_3405_, sizeof(void*)*8);
v_diagnostics_3430_ = lean_ctor_get(v_private_3405_, 1);
v_importedExtraConsts_3431_ = lean_ctor_get(v_private_3405_, 2);
v_extensions_3432_ = lean_ctor_get(v_private_3405_, 3);
v_irBaseExts_3433_ = lean_ctor_get(v_private_3405_, 4);
v_extGens_3434_ = lean_ctor_get(v_private_3405_, 5);
v_trackedGen_3435_ = lean_ctor_get(v_private_3405_, 6);
v_isSharedCheck_3500_ = !lean_is_exclusive(v_private_3405_);
if (v_isSharedCheck_3500_ == 0)
{
lean_object* v_unused_3501_; 
v_unused_3501_ = lean_ctor_get(v_private_3405_, 7);
lean_dec(v_unused_3501_);
v___x_3437_ = v_private_3405_;
v_isShared_3438_ = v_isSharedCheck_3500_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_trackedGen_3435_);
lean_inc(v_extGens_3434_);
lean_inc(v_irBaseExts_3433_);
lean_inc(v_extensions_3432_);
lean_inc(v_importedExtraConsts_3431_);
lean_inc(v_diagnostics_3430_);
lean_inc(v_constants_3428_);
lean_dec(v_private_3405_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3500_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
uint32_t v_trustLevel_3439_; lean_object* v_mainModule_3440_; uint8_t v_isModule_3441_; lean_object* v_regions_3442_; lean_object* v_modules_3443_; lean_object* v_moduleNames_3444_; lean_object* v_moduleName2Idx_3445_; lean_object* v_importAllModules_3446_; lean_object* v_moduleData_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3498_; 
v_trustLevel_3439_ = lean_ctor_get_uint32(v_header_3406_, sizeof(void*)*8);
v_mainModule_3440_ = lean_ctor_get(v_header_3406_, 0);
v_isModule_3441_ = lean_ctor_get_uint8(v_header_3406_, sizeof(void*)*8 + 4);
v_regions_3442_ = lean_ctor_get(v_header_3406_, 2);
v_modules_3443_ = lean_ctor_get(v_header_3406_, 3);
v_moduleNames_3444_ = lean_ctor_get(v_header_3406_, 4);
v_moduleName2Idx_3445_ = lean_ctor_get(v_header_3406_, 5);
v_importAllModules_3446_ = lean_ctor_get(v_header_3406_, 6);
v_moduleData_3447_ = lean_ctor_get(v_header_3406_, 7);
v_isSharedCheck_3498_ = !lean_is_exclusive(v_header_3406_);
if (v_isSharedCheck_3498_ == 0)
{
lean_object* v_unused_3499_; 
v_unused_3499_ = lean_ctor_get(v_header_3406_, 1);
lean_dec(v_unused_3499_);
v___x_3449_ = v_header_3406_;
v_isShared_3450_ = v_isSharedCheck_3498_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_moduleData_3447_);
lean_inc(v_importAllModules_3446_);
lean_inc(v_moduleName2Idx_3445_);
lean_inc(v_moduleNames_3444_);
lean_inc(v_modules_3443_);
lean_inc(v_regions_3442_);
lean_inc(v_mainModule_3440_);
lean_dec(v_header_3406_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3498_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3451_; lean_object* v_imports_3452_; lean_object* v___x_3454_; 
v___x_3451_ = lean_array_fget(v_moduleData_3399_, v___y_3395_);
lean_dec_ref(v_moduleData_3399_);
v_imports_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc_ref(v_imports_3452_);
lean_dec(v___x_3451_);
if (v_isShared_3450_ == 0)
{
lean_ctor_set(v___x_3449_, 1, v_imports_3452_);
v___x_3454_ = v___x_3449_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_mainModule_3440_);
lean_ctor_set(v_reuseFailAlloc_3497_, 1, v_imports_3452_);
lean_ctor_set(v_reuseFailAlloc_3497_, 2, v_regions_3442_);
lean_ctor_set(v_reuseFailAlloc_3497_, 3, v_modules_3443_);
lean_ctor_set(v_reuseFailAlloc_3497_, 4, v_moduleNames_3444_);
lean_ctor_set(v_reuseFailAlloc_3497_, 5, v_moduleName2Idx_3445_);
lean_ctor_set(v_reuseFailAlloc_3497_, 6, v_importAllModules_3446_);
lean_ctor_set(v_reuseFailAlloc_3497_, 7, v_moduleData_3447_);
lean_ctor_set_uint32(v_reuseFailAlloc_3497_, sizeof(void*)*8, v_trustLevel_3439_);
lean_ctor_set_uint8(v_reuseFailAlloc_3497_, sizeof(void*)*8 + 4, v_isModule_3441_);
v___x_3454_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
lean_object* v___x_3456_; 
if (v_isShared_3438_ == 0)
{
lean_ctor_set(v___x_3437_, 7, v___x_3454_);
v___x_3456_ = v___x_3437_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_constants_3428_);
lean_ctor_set(v_reuseFailAlloc_3496_, 1, v_diagnostics_3430_);
lean_ctor_set(v_reuseFailAlloc_3496_, 2, v_importedExtraConsts_3431_);
lean_ctor_set(v_reuseFailAlloc_3496_, 3, v_extensions_3432_);
lean_ctor_set(v_reuseFailAlloc_3496_, 4, v_irBaseExts_3433_);
lean_ctor_set(v_reuseFailAlloc_3496_, 5, v_extGens_3434_);
lean_ctor_set(v_reuseFailAlloc_3496_, 6, v_trackedGen_3435_);
lean_ctor_set(v_reuseFailAlloc_3496_, 7, v___x_3454_);
lean_ctor_set_uint8(v_reuseFailAlloc_3496_, sizeof(void*)*8, v_quotInit_3429_);
v___x_3456_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
lean_object* v___x_3458_; 
if (v_isShared_3427_ == 0)
{
lean_ctor_set(v___x_3426_, 0, v___x_3456_);
v___x_3458_ = v___x_3426_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v___x_3456_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v_public_3424_);
v___x_3458_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
lean_object* v___x_3460_; 
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v___x_3458_);
v___x_3460_ = v___x_3422_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3458_);
lean_ctor_set(v_reuseFailAlloc_3494_, 1, v_serverBaseExts_3407_);
lean_ctor_set(v_reuseFailAlloc_3494_, 2, v_checked_3408_);
lean_ctor_set(v_reuseFailAlloc_3494_, 3, v_asyncConstsMap_3409_);
lean_ctor_set(v_reuseFailAlloc_3494_, 4, v_asyncCtx_x3f_3410_);
lean_ctor_set(v_reuseFailAlloc_3494_, 5, v_importRealizationCtx_x3f_3411_);
lean_ctor_set(v_reuseFailAlloc_3494_, 6, v_localRealizationCtxMap_3412_);
lean_ctor_set(v_reuseFailAlloc_3494_, 7, v_allRealizations_3413_);
lean_ctor_set(v_reuseFailAlloc_3494_, 8, v_synthCacheRaw_x3f_3416_);
lean_ctor_set(v_reuseFailAlloc_3494_, 9, v_declChangeLog_3417_);
lean_ctor_set(v_reuseFailAlloc_3494_, 10, v_recordingConstGen_3418_);
lean_ctor_set(v_reuseFailAlloc_3494_, 11, v_constAddedGens_3419_);
lean_ctor_set(v_reuseFailAlloc_3494_, 12, v_constGen_3420_);
lean_ctor_set_uint8(v_reuseFailAlloc_3494_, sizeof(void*)*13, v_isExporting_3414_);
lean_ctor_set_uint8(v_reuseFailAlloc_3494_, sizeof(void*)*13 + 1, v_isRecordingDeps_3415_);
v___x_3460_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; uint16_t v___x_3469_; uint8_t v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v_env_3488_; uint8_t v___x_3489_; uint16_t v___x_3490_; uint16_t v___x_3491_; uint16_t v___x_3492_; uint8_t v___x_3493_; 
v___x_3461_ = l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
v___x_3462_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2993_, v___x_3461_, v___x_3460_, v___y_3395_, v___x_3392_);
lean_dec(v___y_3395_);
v___x_3463_ = l_Lean_instInhabitedFileMap_default;
v___x_3464_ = lean_unsigned_to_nat(1000u);
v___x_3465_ = l_Lean_Core_getMaxHeartbeats(v___x_3018_);
v___x_3466_ = l_Lean_firstFrontendMacroScope;
v___x_3467_ = lean_box(0);
v___x_3468_ = lean_box(0);
v___x_3469_ = l_Lean_OptionFlags_ofOptions(v___x_3018_);
v___x_3470_ = 0;
v___x_3471_ = lean_obj_once(&l_main___closed__20, &l_main___closed__20_once, _init_l_main___closed__20);
v___x_3472_ = ((lean_object*)(l_main___closed__23));
lean_inc_n(v___y_3396_, 3);
v___x_3473_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3473_, 0, v___y_3396_);
lean_ctor_set(v___x_3473_, 1, v___x_3389_);
lean_ctor_set(v___x_3473_, 2, v___x_2986_);
v___x_3474_ = lean_obj_once(&l_main___closed__24, &l_main___closed__24_once, _init_l_main___closed__24);
v___x_3475_ = lean_obj_once(&l_main___closed__27, &l_main___closed__27_once, _init_l_main___closed__27);
v___x_3476_ = ((lean_object*)(l_main___closed__28));
v___x_3477_ = l_Lean_Options_empty;
v___x_3478_ = lean_obj_once(&l_main___closed__29, &l_main___closed__29_once, _init_l_main___closed__29);
v___x_3479_ = lean_obj_once(&l_main___closed__30, &l_main___closed__30_once, _init_l_main___closed__30);
v___x_3480_ = lean_obj_once(&l_main___closed__31, &l_main___closed__31_once, _init_l_main___closed__31);
lean_inc_ref(v___x_3473_);
v___x_3481_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3481_, 0, v___x_3460_);
lean_ctor_set(v___x_3481_, 1, v___x_3471_);
lean_ctor_set(v___x_3481_, 2, v___x_3472_);
lean_ctor_set(v___x_3481_, 3, v___x_3473_);
lean_ctor_set(v___x_3481_, 4, v___x_3474_);
lean_ctor_set(v___x_3481_, 5, v___x_3475_);
lean_ctor_set(v___x_3481_, 6, v___x_3478_);
lean_ctor_set(v___x_3481_, 7, v___x_3479_);
lean_ctor_set(v___x_3481_, 8, v___x_3480_);
lean_ctor_set(v___x_3481_, 9, v___x_3476_);
v___x_3482_ = lean_st_mk_ref(v___x_3481_);
v___x_3483_ = l_Lean_inheritedTraceOptions;
v___x_3484_ = lean_st_ref_get(v___x_3483_);
lean_inc(v___x_3484_);
lean_inc(v___x_3465_);
lean_inc_ref(v___x_3018_);
lean_inc(v_head_2976_);
v___x_3485_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3485_, 0, v_head_2976_);
lean_ctor_set(v___x_3485_, 1, v___x_3463_);
lean_ctor_set(v___x_3485_, 2, v___x_3018_);
lean_ctor_set(v___x_3485_, 3, v___x_3464_);
lean_ctor_set(v___x_3485_, 4, v___y_3396_);
lean_ctor_set(v___x_3485_, 5, v___x_2986_);
lean_ctor_set(v___x_3485_, 6, v___x_3017_);
lean_ctor_set(v___x_3485_, 7, v___x_3465_);
lean_ctor_set(v___x_3485_, 8, v___y_3396_);
lean_ctor_set(v___x_3485_, 9, v___x_3466_);
lean_ctor_set(v___x_3485_, 10, v___x_3467_);
lean_ctor_set(v___x_3485_, 11, v___x_3484_);
v___x_3486_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3486_, 0, v___x_3485_);
lean_ctor_set(v___x_3486_, 1, v___x_3017_);
lean_ctor_set(v___x_3486_, 2, v___x_3468_);
lean_ctor_set_uint16(v___x_3486_, sizeof(void*)*3, v___x_3469_);
lean_ctor_set_uint8(v___x_3486_, sizeof(void*)*3 + 2, v___x_3001_);
lean_ctor_set_uint8(v___x_3486_, sizeof(void*)*3 + 3, v___x_3470_);
lean_ctor_set_uint8(v___x_3486_, sizeof(void*)*3 + 4, v___x_3001_);
v___x_3487_ = lean_st_ref_get(v___x_3482_);
v_env_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc_ref(v_env_3488_);
lean_dec(v___x_3487_);
v___x_3489_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3488_);
lean_dec_ref(v_env_3488_);
v___x_3490_ = 512;
v___x_3491_ = lean_uint16_land(v___x_3469_, v___x_3490_);
v___x_3492_ = 0;
v___x_3493_ = lean_uint16_dec_eq(v___x_3491_, v___x_3492_);
if (v___x_3493_ == 0)
{
if (v___x_3489_ == 0)
{
lean_dec(v___x_3484_);
lean_dec(v___x_3465_);
v___y_3344_ = v___x_3466_;
v___y_3345_ = v___x_3461_;
v___y_3346_ = v___x_3477_;
v___y_3347_ = v___x_3468_;
v___y_3348_ = v___x_3472_;
v___y_3349_ = v___x_3473_;
v___y_3350_ = v___x_3463_;
v___y_3351_ = v___x_3462_;
v___y_3352_ = v___x_2986_;
v___y_3353_ = v___x_3401_;
v___y_3354_ = v___x_3474_;
v___y_3355_ = v___x_3471_;
v___y_3356_ = v___x_3475_;
v___y_3357_ = v___y_3394_;
v___y_3358_ = v___x_3470_;
v___y_3359_ = v___x_3467_;
v___y_3360_ = v___x_3469_;
v___y_3361_ = v___x_3479_;
v___y_3362_ = v___x_3476_;
v___y_3363_ = v___x_3401_;
v___y_3364_ = v___x_3478_;
v___y_3365_ = v___x_3482_;
v___y_3366_ = v___x_3480_;
v___y_3367_ = v___x_3486_;
v___y_3368_ = v___y_3396_;
v___y_3369_ = v___x_3489_;
goto v___jp_3343_;
}
else
{
lean_dec_ref_known(v___x_3486_, 3);
lean_inc(v_head_2976_);
lean_inc_n(v___y_3396_, 2);
lean_inc(v___x_3482_);
v___y_3227_ = v___x_3466_;
v___y_3228_ = v___x_3401_;
v___y_3229_ = v___x_3477_;
v___y_3230_ = v___x_3468_;
v___y_3231_ = v___x_3463_;
v___y_3232_ = v___x_3475_;
v___y_3233_ = v___y_3394_;
v___y_3234_ = v___x_2986_;
v___y_3235_ = v___x_3470_;
v___y_3236_ = v___x_3467_;
v___y_3237_ = v___x_3479_;
v___y_3238_ = v___x_3461_;
v___y_3239_ = v___x_3477_;
v___y_3240_ = v___x_3472_;
v___y_3241_ = v___x_3473_;
v___y_3242_ = v___x_3462_;
v___y_3243_ = v___x_3476_;
v___y_3244_ = v___x_3478_;
v___y_3245_ = v___x_3480_;
v___y_3246_ = v___x_3474_;
v___y_3247_ = v___x_3482_;
v___y_3248_ = v___x_3471_;
v___y_3249_ = v___x_3475_;
v___y_3250_ = v___y_3396_;
v___y_3251_ = v___x_3469_;
v_fileName_3252_ = v_head_2976_;
v_fileMap_3253_ = v___x_3463_;
v_currNamespace_3254_ = v___y_3396_;
v_openDecls_3255_ = v___x_2986_;
v_initHeartbeats_3256_ = v___x_3017_;
v_maxHeartbeats_3257_ = v___x_3465_;
v_quotContext_3258_ = v___y_3396_;
v_currMacroScope_3259_ = v___x_3466_;
v_cancelTk_x3f_3260_ = v___x_3467_;
v_inheritedTraceOptions_3261_ = v___x_3484_;
v_currRecDepth_3262_ = v___x_3017_;
v_ref_3263_ = v___x_3468_;
v_suppressElabErrors_3264_ = v___x_3001_;
v_checkDeprecated_3265_ = v___x_3470_;
v_isRecordingDeps_3266_ = v___x_3001_;
v___y_3267_ = v___x_3482_;
goto v___jp_3226_;
}
}
else
{
if (v___x_3489_ == 0)
{
lean_dec_ref_known(v___x_3486_, 3);
lean_inc(v_head_2976_);
lean_inc_n(v___y_3396_, 2);
lean_inc(v___x_3482_);
v___y_3227_ = v___x_3466_;
v___y_3228_ = v___x_3401_;
v___y_3229_ = v___x_3477_;
v___y_3230_ = v___x_3468_;
v___y_3231_ = v___x_3463_;
v___y_3232_ = v___x_3475_;
v___y_3233_ = v___y_3394_;
v___y_3234_ = v___x_2986_;
v___y_3235_ = v___x_3470_;
v___y_3236_ = v___x_3467_;
v___y_3237_ = v___x_3479_;
v___y_3238_ = v___x_3461_;
v___y_3239_ = v___x_3477_;
v___y_3240_ = v___x_3472_;
v___y_3241_ = v___x_3473_;
v___y_3242_ = v___x_3462_;
v___y_3243_ = v___x_3476_;
v___y_3244_ = v___x_3478_;
v___y_3245_ = v___x_3480_;
v___y_3246_ = v___x_3474_;
v___y_3247_ = v___x_3482_;
v___y_3248_ = v___x_3471_;
v___y_3249_ = v___x_3475_;
v___y_3250_ = v___y_3396_;
v___y_3251_ = v___x_3469_;
v_fileName_3252_ = v_head_2976_;
v_fileMap_3253_ = v___x_3463_;
v_currNamespace_3254_ = v___y_3396_;
v_openDecls_3255_ = v___x_2986_;
v_initHeartbeats_3256_ = v___x_3017_;
v_maxHeartbeats_3257_ = v___x_3465_;
v_quotContext_3258_ = v___y_3396_;
v_currMacroScope_3259_ = v___x_3466_;
v_cancelTk_x3f_3260_ = v___x_3467_;
v_inheritedTraceOptions_3261_ = v___x_3484_;
v_currRecDepth_3262_ = v___x_3017_;
v_ref_3263_ = v___x_3468_;
v_suppressElabErrors_3264_ = v___x_3001_;
v_checkDeprecated_3265_ = v___x_3470_;
v_isRecordingDeps_3266_ = v___x_3001_;
v___y_3267_ = v___x_3482_;
goto v___jp_3226_;
}
else
{
lean_dec(v___x_3484_);
lean_dec(v___x_3465_);
v___y_3344_ = v___x_3466_;
v___y_3345_ = v___x_3461_;
v___y_3346_ = v___x_3477_;
v___y_3347_ = v___x_3468_;
v___y_3348_ = v___x_3472_;
v___y_3349_ = v___x_3473_;
v___y_3350_ = v___x_3463_;
v___y_3351_ = v___x_3462_;
v___y_3352_ = v___x_2986_;
v___y_3353_ = v___x_3401_;
v___y_3354_ = v___x_3474_;
v___y_3355_ = v___x_3471_;
v___y_3356_ = v___x_3475_;
v___y_3357_ = v___y_3394_;
v___y_3358_ = v___x_3470_;
v___y_3359_ = v___x_3467_;
v___y_3360_ = v___x_3469_;
v___y_3361_ = v___x_3479_;
v___y_3362_ = v___x_3476_;
v___y_3363_ = v___x_3401_;
v___y_3364_ = v___x_3478_;
v___y_3365_ = v___x_3482_;
v___y_3366_ = v___x_3480_;
v___y_3367_ = v___x_3486_;
v___y_3368_ = v___y_3396_;
v___y_3369_ = v___x_3001_;
goto v___jp_3343_;
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
}
v___jp_3506_:
{
lean_object* v___x_3516_; 
if (v_isShared_2975_ == 0)
{
lean_ctor_set_tag(v___x_2974_, 0);
lean_ctor_set(v___x_2974_, 1, v___y_3514_);
lean_ctor_set(v___x_2974_, 0, v___y_3510_);
v___x_3516_ = v___x_2974_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v___y_3510_);
lean_ctor_set(v_reuseFailAlloc_3522_, 1, v___y_3514_);
v___x_3516_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
lean_object* v___f_3517_; lean_object* v___x_3518_; 
v___f_3517_ = lean_alloc_closure((void*)(l_main___lam__3___boxed), 2, 1);
lean_closure_set(v___f_3517_, 0, v___x_3516_);
v___x_3518_ = lean_box(0);
if (v___y_3509_ == 0)
{
lean_object* v___x_3519_; 
lean_inc(v___y_3512_);
lean_inc_ref(v___y_3513_);
v___x_3519_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v___y_3513_, v___y_3508_, v___f_3517_, v___x_3518_, v___y_3512_, v___x_3014_);
v___y_3394_ = v___y_3507_;
v___y_3395_ = v___y_3511_;
v___y_3396_ = v___y_3512_;
v___y_3397_ = v___x_3519_;
goto v___jp_3393_;
}
else
{
lean_object* v___x_3520_; lean_object* v___x_3521_; 
lean_inc_ref_n(v___y_3513_, 2);
v___x_3520_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v___y_3513_, v___y_3508_);
lean_dec_ref(v___y_3508_);
lean_inc(v___y_3512_);
v___x_3521_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v___y_3513_, v___x_3520_, v___f_3517_, v___x_3518_, v___y_3512_, v___x_3014_);
v___y_3394_ = v___y_3507_;
v___y_3395_ = v___y_3511_;
v___y_3396_ = v___y_3512_;
v___y_3397_ = v___x_3521_;
goto v___jp_3393_;
}
}
}
v___jp_3523_:
{
lean_object* v___x_3528_; lean_object* v_toEnvExtension_3529_; lean_object* v_asyncMode_3530_; uint8_t v_logWrites_3531_; lean_object* v___x_3532_; lean_object* v_importedEntries_3533_; lean_object* v_state_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; uint8_t v___x_3537_; 
v___x_3528_ = l_Lean_IR_declMapExt;
v_toEnvExtension_3529_ = lean_ctor_get(v___x_3528_, 0);
v_asyncMode_3530_ = lean_ctor_get(v_toEnvExtension_3529_, 2);
v_logWrites_3531_ = lean_ctor_get_uint8(v_toEnvExtension_3529_, sizeof(void*)*6);
lean_inc(v___y_3526_);
lean_inc_ref(v___y_3527_);
v___x_3532_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2990_, v_toEnvExtension_3529_, v___y_3527_, v_asyncMode_3530_, v___y_3526_, v___x_3001_);
v_importedEntries_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc_ref(v_importedEntries_3533_);
v_state_3534_ = lean_ctor_get(v___x_3532_, 1);
lean_inc(v_state_3534_);
lean_dec(v___x_3532_);
v___x_3535_ = lean_array_get_borrowed(v___x_2991_, v_importedEntries_3533_, v___y_3525_);
v___x_3536_ = lean_array_get_size(v___x_3535_);
v___x_3537_ = lean_nat_dec_lt(v___x_3017_, v___x_3536_);
if (v___x_3537_ == 0)
{
v___y_3507_ = v___y_3524_;
v___y_3508_ = v___y_3527_;
v___y_3509_ = v_logWrites_3531_;
v___y_3510_ = v_importedEntries_3533_;
v___y_3511_ = v___y_3525_;
v___y_3512_ = v___y_3526_;
v___y_3513_ = v_toEnvExtension_3529_;
v___y_3514_ = v_state_3534_;
goto v___jp_3506_;
}
else
{
size_t v___x_3538_; size_t v___x_3539_; lean_object* v___x_3540_; 
v___x_3538_ = ((size_t)0ULL);
v___x_3539_ = lean_usize_of_nat(v___x_3536_);
lean_inc_ref(v___y_3527_);
v___x_3540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_3527_, v___x_3535_, v___x_3538_, v___x_3539_, v_state_3534_);
v___y_3507_ = v___y_3524_;
v___y_3508_ = v___y_3527_;
v___y_3509_ = v_logWrites_3531_;
v___y_3510_ = v_importedEntries_3533_;
v___y_3511_ = v___y_3525_;
v___y_3512_ = v___y_3526_;
v___y_3513_ = v_toEnvExtension_3529_;
v___y_3514_ = v___x_3540_;
goto v___jp_3506_;
}
}
v___jp_3541_:
{
uint8_t v___x_3548_; 
v___x_3548_ = lean_nat_dec_lt(v___x_3017_, v___y_3543_);
if (v___x_3548_ == 0)
{
lean_dec_ref(v___y_3544_);
lean_dec(v___y_3543_);
v___y_3524_ = v___y_3542_;
v___y_3525_ = v___y_3545_;
v___y_3526_ = v___y_3546_;
v___y_3527_ = v___y_3547_;
goto v___jp_3523_;
}
else
{
size_t v___x_3549_; size_t v___x_3550_; lean_object* v___x_3551_; 
v___x_3549_ = ((size_t)0ULL);
v___x_3550_ = lean_usize_of_nat(v___y_3543_);
lean_dec(v___y_3543_);
v___x_3551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_3544_, v___x_3549_, v___x_3550_, v___y_3547_);
lean_dec_ref(v___y_3544_);
v___y_3524_ = v___y_3542_;
v___y_3525_ = v___y_3545_;
v___y_3526_ = v___y_3546_;
v___y_3527_ = v___x_3551_;
goto v___jp_3523_;
}
}
v___jp_3552_:
{
lean_object* v___x_3558_; uint8_t v___x_3559_; 
v___x_3558_ = lean_array_get_size(v___y_3557_);
v___x_3559_ = lean_nat_dec_lt(v___x_3017_, v___x_3558_);
if (v___x_3559_ == 0)
{
v___y_3542_ = v___y_3553_;
v___y_3543_ = v___x_3558_;
v___y_3544_ = v___y_3557_;
v___y_3545_ = v___y_3555_;
v___y_3546_ = v___y_3556_;
v___y_3547_ = v___y_3554_;
goto v___jp_3541_;
}
else
{
size_t v___x_3560_; size_t v___x_3561_; lean_object* v___x_3562_; 
v___x_3560_ = ((size_t)0ULL);
v___x_3561_ = lean_usize_of_nat(v___x_3558_);
v___x_3562_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v___y_3557_, v___x_3560_, v___x_3561_, v___y_3554_);
v___y_3542_ = v___y_3553_;
v___y_3543_ = v___x_3558_;
v___y_3544_ = v___y_3557_;
v___y_3545_ = v___y_3555_;
v___y_3546_ = v___y_3556_;
v___y_3547_ = v___x_3562_;
goto v___jp_3541_;
}
}
v___jp_3563_:
{
lean_object* v___x_3566_; lean_object* v_ext_3567_; lean_object* v___x_3568_; 
v___x_3566_ = l_Lean_Compiler_CSimp_ext;
v_ext_3567_ = lean_ctor_get(v___x_3566_, 1);
lean_inc_ref(v_ext_3567_);
lean_inc(v___y_3564_);
v___x_3568_ = l_main___elam__0___redArg(v___y_3564_, v___x_3001_, v___x_2985_, v_ext_3567_, v___y_3565_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3570_; lean_object* v_ext_3571_; lean_object* v___x_3572_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref_known(v___x_3568_, 1);
v___x_3570_ = l_Lean_Meta_instanceExtension;
v_ext_3571_ = lean_ctor_get(v___x_3570_, 1);
lean_inc_ref(v_ext_3571_);
lean_inc(v___y_3564_);
v___x_3572_ = l_main___elam__0___redArg(v___y_3564_, v___x_3001_, v___x_2985_, v_ext_3571_, v_a_3569_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc(v_a_3573_);
lean_dec_ref_known(v___x_3572_, 1);
v___x_3574_ = l_Lean_classExtension;
lean_inc(v___y_3564_);
v___x_3575_ = l_main___elam__0___redArg(v___y_3564_, v___x_3001_, v___x_2987_, v___x_3574_, v_a_3573_);
if (lean_obj_tag(v___x_3575_) == 0)
{
lean_object* v_a_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v_a_3576_ = lean_ctor_get(v___x_3575_, 0);
lean_inc(v_a_3576_);
lean_dec_ref_known(v___x_3575_, 1);
v___x_3577_ = l_Lean_Meta_Match_Extension_extension;
lean_inc(v___y_3564_);
v___x_3578_ = l_main___elam__0___redArg(v___y_3564_, v___x_3001_, v___x_2988_, v___x_3577_, v_a_3576_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3602_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3581_ = v___x_3578_;
v_isShared_3582_ = v_isSharedCheck_3602_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_a_3579_);
lean_dec(v___x_3578_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3602_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3583_; 
v___x_3583_ = l_Lean_Environment_getModuleIdx_x3f(v_a_3579_, v_name_2996_);
if (lean_obj_tag(v___x_3583_) == 1)
{
lean_object* v_val_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; uint8_t v___x_3589_; 
lean_del_object(v___x_3581_);
v_val_3584_ = lean_ctor_get(v___x_3583_, 0);
lean_inc(v_val_3584_);
lean_dec_ref_known(v___x_3583_, 1);
v___x_3585_ = l_Lean_Compiler_LCNF_impureSigExt;
v___x_3586_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2989_, v___x_3585_, v_a_3579_, v_val_3584_, v___x_3392_);
v___x_3587_ = lean_array_get_size(v___x_3586_);
v___x_3588_ = ((lean_object*)(l_main___closed__32));
v___x_3589_ = lean_nat_dec_lt(v___x_3017_, v___x_3587_);
if (v___x_3589_ == 0)
{
lean_dec_ref(v___x_3586_);
lean_inc(v___y_3564_);
v___y_3553_ = v___y_3564_;
v___y_3554_ = v_a_3579_;
v___y_3555_ = v_val_3584_;
v___y_3556_ = v___y_3564_;
v___y_3557_ = v___x_3588_;
goto v___jp_3552_;
}
else
{
size_t v___x_3590_; size_t v___x_3591_; lean_object* v___x_3592_; 
v___x_3590_ = ((size_t)0ULL);
v___x_3591_ = lean_usize_of_nat(v___x_3587_);
lean_inc(v_a_3579_);
v___x_3592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v_a_3579_, v___x_3586_, v___x_3590_, v___x_3591_, v___x_3588_);
lean_dec_ref(v___x_3586_);
lean_inc(v___y_3564_);
v___y_3553_ = v___y_3564_;
v___y_3554_ = v_a_3579_;
v___y_3555_ = v_val_3584_;
v___y_3556_ = v___y_3564_;
v___y_3557_ = v___x_3592_;
goto v___jp_3552_;
}
}
else
{
lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3600_; 
lean_dec(v___x_3583_);
lean_dec(v_a_3579_);
lean_dec(v___y_3564_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v___x_3593_ = ((lean_object*)(l_main___closed__33));
v___x_3594_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2996_, v___x_3014_);
v___x_3595_ = lean_string_append(v___x_3593_, v___x_3594_);
lean_dec_ref(v___x_3594_);
v___x_3596_ = ((lean_object*)(l_main___closed__34));
v___x_3597_ = lean_string_append(v___x_3595_, v___x_3596_);
v___x_3598_ = lean_mk_io_user_error(v___x_3597_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set_tag(v___x_3581_, 1);
lean_ctor_set(v___x_3581_, 0, v___x_3598_);
v___x_3600_ = v___x_3581_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v___x_3598_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
else
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3610_; 
lean_dec(v___y_3564_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v_a_3603_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3610_ == 0)
{
v___x_3605_ = v___x_3578_;
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3578_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3608_; 
if (v_isShared_3606_ == 0)
{
v___x_3608_ = v___x_3605_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v_a_3603_);
v___x_3608_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
return v___x_3608_;
}
}
}
}
else
{
lean_object* v_a_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3618_; 
lean_dec(v___y_3564_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v_a_3611_ = lean_ctor_get(v___x_3575_, 0);
v_isSharedCheck_3618_ = !lean_is_exclusive(v___x_3575_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3613_ = v___x_3575_;
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_a_3611_);
lean_dec(v___x_3575_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
lean_object* v___x_3616_; 
if (v_isShared_3614_ == 0)
{
v___x_3616_ = v___x_3613_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v_a_3611_);
v___x_3616_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
return v___x_3616_;
}
}
}
}
else
{
lean_object* v_a_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3626_; 
lean_dec(v___y_3564_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v_a_3619_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3621_ = v___x_3572_;
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_a_3619_);
lean_dec(v___x_3572_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3624_; 
if (v_isShared_3622_ == 0)
{
v___x_3624_ = v___x_3621_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_a_3619_);
v___x_3624_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
return v___x_3624_;
}
}
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_dec(v___y_3564_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v_a_3627_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3568_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3568_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
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
v___jp_3635_:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___f_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3637_ = l_Lean_instInhabitedImportState_default;
v___x_3638_ = lean_box(v___x_3392_);
v___x_3639_ = lean_box(v___y_3636_);
v___x_3640_ = lean_box(v___x_3014_);
v___x_3641_ = lean_box(v___x_3001_);
lean_inc_ref(v___x_3018_);
lean_inc(v_name_2996_);
v___f_3642_ = lean_alloc_closure((void*)(l_main___lam__1___boxed), 10, 9);
lean_closure_set(v___f_3642_, 0, v___x_3637_);
lean_closure_set(v___f_3642_, 1, v___x_3391_);
lean_closure_set(v___f_3642_, 2, v___x_3638_);
lean_closure_set(v___f_3642_, 3, v_importArts_2998_);
lean_closure_set(v___f_3642_, 4, v___x_3639_);
lean_closure_set(v___f_3642_, 5, v___x_3640_);
lean_closure_set(v___f_3642_, 6, v_name_2996_);
lean_closure_set(v___f_3642_, 7, v___x_3018_);
lean_closure_set(v___f_3642_, 8, v___x_3641_);
v___x_3643_ = lean_alloc_closure((void*)(l_Lean_withImporting___boxed), 3, 2);
lean_closure_set(v___x_3643_, 0, lean_box(0));
lean_closure_set(v___x_3643_, 1, v___f_3642_);
v___x_3644_ = lean_box(0);
v___x_3645_ = l_Lean_profileitIOUnsafe___redArg(v___x_3387_, v___x_3018_, v___x_3643_, v___x_3644_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v_a_3646_; lean_object* v___x_3647_; lean_object* v_toEnvExtension_3648_; lean_object* v_asyncMode_3649_; uint8_t v_logWrites_3650_; lean_object* v___x_3651_; 
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
lean_inc(v_a_3646_);
lean_dec_ref_known(v___x_3645_, 1);
v___x_3647_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v_toEnvExtension_3648_ = lean_ctor_get(v___x_3647_, 0);
v_asyncMode_3649_ = lean_ctor_get(v_toEnvExtension_3648_, 2);
v_logWrites_3650_ = lean_ctor_get_uint8(v_toEnvExtension_3648_, sizeof(void*)*6);
lean_inc(v_name_2996_);
v___x_3651_ = l_Lean_Environment_setMainModule(v_a_3646_, v_name_2996_);
if (v_logWrites_3650_ == 0)
{
lean_object* v___x_3652_; 
lean_inc_ref(v_toEnvExtension_3648_);
v___x_3652_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_3648_, v___x_3651_, v___f_3000_, v_asyncMode_3649_, v___x_3644_, v___x_3014_);
v___y_3564_ = v___x_3644_;
v___y_3565_ = v___x_3652_;
goto v___jp_3563_;
}
else
{
lean_object* v___x_3653_; lean_object* v___x_3654_; 
lean_inc_ref_n(v_toEnvExtension_3648_, 2);
v___x_3653_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v_toEnvExtension_3648_, v___x_3651_);
lean_dec_ref(v___x_3651_);
v___x_3654_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_3648_, v___x_3653_, v___f_3000_, v_asyncMode_3649_, v___x_3644_, v___x_3014_);
v___y_3564_ = v___x_3644_;
v___y_3565_ = v___x_3654_;
goto v___jp_3563_;
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec_ref(v___f_3000_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v_a_3655_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3645_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3645_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec_ref(v___f_3000_);
lean_dec(v_importArts_2998_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v_a_3664_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3386_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3386_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3669_; 
if (v_isShared_3667_ == 0)
{
v___x_3669_ = v___x_3666_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3664_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
v___jp_3019_:
{
lean_object* v___x_3042_; lean_object* v_messages_3043_; lean_object* v_env_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3170_; 
v___x_3042_ = lean_st_ref_get(v___y_3035_);
lean_dec(v___y_3035_);
v_messages_3043_ = lean_ctor_get(v___x_3042_, 7);
v_env_3044_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3170_ == 0)
{
lean_object* v_unused_3171_; lean_object* v_unused_3172_; lean_object* v_unused_3173_; lean_object* v_unused_3174_; lean_object* v_unused_3175_; lean_object* v_unused_3176_; lean_object* v_unused_3177_; lean_object* v_unused_3178_; 
v_unused_3171_ = lean_ctor_get(v___x_3042_, 9);
lean_dec(v_unused_3171_);
v_unused_3172_ = lean_ctor_get(v___x_3042_, 8);
lean_dec(v_unused_3172_);
v_unused_3173_ = lean_ctor_get(v___x_3042_, 6);
lean_dec(v_unused_3173_);
v_unused_3174_ = lean_ctor_get(v___x_3042_, 5);
lean_dec(v_unused_3174_);
v_unused_3175_ = lean_ctor_get(v___x_3042_, 4);
lean_dec(v_unused_3175_);
v_unused_3176_ = lean_ctor_get(v___x_3042_, 3);
lean_dec(v_unused_3176_);
v_unused_3177_ = lean_ctor_get(v___x_3042_, 2);
lean_dec(v_unused_3177_);
v_unused_3178_ = lean_ctor_get(v___x_3042_, 1);
lean_dec(v_unused_3178_);
v___x_3046_ = v___x_3042_;
v_isShared_3047_ = v_isSharedCheck_3170_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_messages_3043_);
lean_inc(v_env_3044_);
lean_dec(v___x_3042_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3170_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v_unreported_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v_unreported_3048_ = lean_ctor_get(v_messages_3043_, 1);
v___x_3049_ = lean_box(0);
v___x_3050_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_unreported_3048_, v___x_3049_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3160_; 
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3160_ == 0)
{
lean_object* v_unused_3161_; 
v_unused_3161_ = lean_ctor_get(v___x_3050_, 0);
lean_dec(v_unused_3161_);
v___x_3052_ = v___x_3050_;
v_isShared_3053_ = v_isSharedCheck_3160_;
goto v_resetjp_3051_;
}
else
{
lean_dec(v___x_3050_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3160_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
uint8_t v___x_3054_; 
v___x_3054_ = l_Lean_MessageLog_hasErrors(v_messages_3043_);
lean_dec_ref(v_messages_3043_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
lean_del_object(v___x_3052_);
v___x_3055_ = ((lean_object*)(l_main___closed__9));
lean_inc(v_head_2976_);
v___x_3056_ = l_System_FilePath_addExtension(v_head_2976_, v___x_3055_);
lean_inc_ref(v_env_3044_);
v___x_3057_ = l___private_LeanIR_0__mkIRSigData(v_env_3044_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_object* v_a_3058_; lean_object* v___x_3059_; 
v_a_3058_ = lean_ctor_get(v___x_3057_, 0);
lean_inc(v_a_3058_);
lean_dec_ref_known(v___x_3057_, 1);
lean_inc_ref(v_env_3044_);
v___x_3059_ = l___private_LeanIR_0__mkIRData(v_env_3044_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v_a_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3065_; 
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_a_3060_);
lean_dec_ref_known(v___x_3059_, 1);
v___x_3061_ = l_Lean_Environment_mainModule(v_env_3044_);
v___x_3062_ = ((lean_object*)(l_main___closed__11));
v___x_3063_ = l_Lean_Name_append(v___x_3061_, v___x_3062_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 1, v_a_3058_);
lean_ctor_set(v___x_3011_, 0, v___x_3056_);
v___x_3065_ = v___x_3011_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v___x_3056_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v_a_3058_);
v___x_3065_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
lean_object* v___x_3067_; 
lean_inc(v_head_2976_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set_tag(v___x_2978_, 0);
lean_ctor_set(v___x_2978_, 1, v_a_3060_);
v___x_3067_ = v___x_2978_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_head_2976_);
lean_ctor_set(v_reuseFailAlloc_3138_, 1, v_a_3060_);
v___x_3067_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3068_ = lean_unsigned_to_nat(2u);
v___x_3069_ = lean_mk_empty_array_with_capacity(v___x_3068_);
v___x_3070_ = lean_array_push(v___x_3069_, v___x_3065_);
v___x_3071_ = lean_array_push(v___x_3070_, v___x_3067_);
v___x_3072_ = l_Lean_saveModuleDataParts(v___x_3063_, v___x_3071_);
lean_dec(v___x_3063_);
if (lean_obj_tag(v___x_3072_) == 0)
{
uint8_t v___x_3073_; lean_object* v___x_3074_; 
lean_dec_ref_known(v___x_3072_, 1);
v___x_3073_ = 1;
v___x_3074_ = lean_io_prim_handle_mk(v_head_2980_, v___x_3073_);
if (lean_obj_tag(v___x_3074_) == 0)
{
lean_object* v_a_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; uint16_t v___x_3078_; lean_object* v___x_3080_; 
lean_dec(v_head_2980_);
v_a_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_a_3075_);
lean_dec_ref_known(v___x_3074_, 1);
v___x_3076_ = ((lean_object*)(l_main___closed__12));
v___x_3077_ = l_Lean_Core_getMaxHeartbeats(v___y_3032_);
v___x_3078_ = l_Lean_OptionFlags_ofOptions(v___y_3032_);
lean_inc_ref(v___y_3041_);
lean_inc_ref(v___y_3033_);
lean_inc_ref(v___y_3030_);
lean_inc_ref(v___y_3031_);
lean_inc_ref(v___y_3038_);
lean_inc_ref(v___y_3034_);
lean_inc_ref(v___y_3037_);
lean_inc(v___y_3039_);
lean_inc_ref(v_env_3044_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set(v___x_3046_, 9, v___y_3041_);
lean_ctor_set(v___x_3046_, 8, v___y_3033_);
lean_ctor_set(v___x_3046_, 7, v___y_3030_);
lean_ctor_set(v___x_3046_, 6, v___y_3031_);
lean_ctor_set(v___x_3046_, 5, v___y_3038_);
lean_ctor_set(v___x_3046_, 4, v___y_3034_);
lean_ctor_set(v___x_3046_, 3, v___y_3036_);
lean_ctor_set(v___x_3046_, 2, v___y_3037_);
lean_ctor_set(v___x_3046_, 1, v___y_3039_);
v___x_3080_ = v___x_3046_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_env_3044_);
lean_ctor_set(v_reuseFailAlloc_3107_, 1, v___y_3039_);
lean_ctor_set(v_reuseFailAlloc_3107_, 2, v___y_3037_);
lean_ctor_set(v_reuseFailAlloc_3107_, 3, v___y_3036_);
lean_ctor_set(v_reuseFailAlloc_3107_, 4, v___y_3034_);
lean_ctor_set(v_reuseFailAlloc_3107_, 5, v___y_3038_);
lean_ctor_set(v_reuseFailAlloc_3107_, 6, v___y_3031_);
lean_ctor_set(v_reuseFailAlloc_3107_, 7, v___y_3030_);
lean_ctor_set(v_reuseFailAlloc_3107_, 8, v___y_3033_);
lean_ctor_set(v_reuseFailAlloc_3107_, 9, v___y_3041_);
v___x_3080_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___f_3086_; lean_object* v___x_3087_; 
v___x_3081_ = lean_box(v___x_3078_);
v___x_3082_ = lean_box(v___y_3021_);
v___x_3083_ = lean_box(v___x_3001_);
v___x_3084_ = lean_box(v___y_3028_);
v___x_3085_ = lean_box(v___x_3054_);
lean_inc_ref(v___y_3025_);
lean_inc_ref(v___y_3022_);
v___f_3086_ = lean_alloc_closure((void*)(l_main___lam__2___boxed), 20, 19);
lean_closure_set(v___f_3086_, 0, v___x_3080_);
lean_closure_set(v___f_3086_, 1, v___y_3022_);
lean_closure_set(v___f_3086_, 2, v___x_3081_);
lean_closure_set(v___f_3086_, 3, v_name_2996_);
lean_closure_set(v___f_3086_, 4, v_a_3075_);
lean_closure_set(v___f_3086_, 5, v___x_3082_);
lean_closure_set(v___f_3086_, 6, v___y_3025_);
lean_closure_set(v___f_3086_, 7, v_head_2976_);
lean_closure_set(v___f_3086_, 8, v___y_3024_);
lean_closure_set(v___f_3086_, 9, v___y_3026_);
lean_closure_set(v___f_3086_, 10, v___y_3027_);
lean_closure_set(v___f_3086_, 11, v___x_3077_);
lean_closure_set(v___f_3086_, 12, v___y_3020_);
lean_closure_set(v___f_3086_, 13, v___y_3029_);
lean_closure_set(v___f_3086_, 14, v___x_3017_);
lean_closure_set(v___f_3086_, 15, v___y_3023_);
lean_closure_set(v___f_3086_, 16, v___x_3083_);
lean_closure_set(v___f_3086_, 17, v___x_3084_);
lean_closure_set(v___f_3086_, 18, v___x_3085_);
v___x_3087_ = l_Lean_profileitIOUnsafe___redArg(v___x_3076_, v___x_3018_, v___f_3086_, v___y_3040_);
lean_dec_ref(v___x_3018_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v___x_3088_; uint8_t v___x_3089_; 
lean_dec_ref_known(v___x_3087_, 1);
v___x_3088_ = lean_display_cumulative_profiling_times();
v___x_3089_ = lean_unbox(v_fst_3008_);
lean_dec(v_fst_3008_);
if (v___x_3089_ == 0)
{
lean_dec_ref(v_env_3044_);
goto v___jp_2947_;
}
else
{
lean_object* v___x_3090_; 
v___x_3090_ = l_Lean_Environment_displayStats(v_env_3044_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_dec_ref_known(v___x_3090_, 1);
goto v___jp_2947_;
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3090_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3090_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
}
else
{
lean_object* v_a_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3106_; 
lean_dec_ref(v_env_3044_);
lean_dec(v_fst_3008_);
v_a_3099_ = lean_ctor_get(v___x_3087_, 0);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3101_ = v___x_3087_;
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_a_3099_);
lean_dec(v___x_3087_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3104_; 
if (v_isShared_3102_ == 0)
{
v___x_3104_ = v___x_3101_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_a_3099_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
return v___x_3104_;
}
}
}
}
}
else
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
lean_dec_ref_known(v___x_3074_, 1);
lean_del_object(v___x_3046_);
lean_dec_ref(v_env_3044_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec(v___y_3020_);
lean_dec_ref(v___x_3018_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2976_);
v___x_3108_ = ((lean_object*)(l_main___closed__13));
v___x_3109_ = lean_string_append(v___x_3108_, v_head_2980_);
lean_dec(v_head_2980_);
v___x_3110_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_3111_ = lean_string_append(v___x_3109_, v___x_3110_);
v___x_3112_ = l_IO_eprintln___at___00main_spec__6(v___x_3111_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3120_; 
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3120_ == 0)
{
lean_object* v_unused_3121_; 
v_unused_3121_ = lean_ctor_get(v___x_3112_, 0);
lean_dec(v_unused_3121_);
v___x_3114_ = v___x_3112_;
v_isShared_3115_ = v_isSharedCheck_3120_;
goto v_resetjp_3113_;
}
else
{
lean_dec(v___x_3112_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3120_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3116_; lean_object* v___x_3118_; 
v___x_3116_ = l_main___boxed__const__2;
if (v_isShared_3115_ == 0)
{
lean_ctor_set(v___x_3114_, 0, v___x_3116_);
v___x_3118_ = v___x_3114_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3116_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3129_; 
v_a_3122_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3124_ = v___x_3112_;
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3112_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___x_3127_; 
if (v_isShared_3125_ == 0)
{
v___x_3127_ = v___x_3124_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v_a_3122_);
v___x_3127_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
return v___x_3127_;
}
}
}
}
}
else
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
lean_del_object(v___x_3046_);
lean_dec_ref(v_env_3044_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec(v___y_3020_);
lean_dec_ref(v___x_3018_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_dec(v_head_2976_);
v_a_3130_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3132_ = v___x_3072_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v___x_3072_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
}
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec(v_a_3058_);
lean_dec_ref(v___x_3056_);
lean_del_object(v___x_3046_);
lean_dec_ref(v_env_3044_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec(v___y_3020_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
v_a_3140_ = lean_ctor_get(v___x_3059_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3059_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3059_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3059_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
lean_dec_ref(v___x_3056_);
lean_del_object(v___x_3046_);
lean_dec_ref(v_env_3044_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec(v___y_3020_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
v_a_3148_ = lean_ctor_get(v___x_3057_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3057_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3057_);
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
else
{
lean_object* v___x_3156_; lean_object* v___x_3158_; 
lean_del_object(v___x_3046_);
lean_dec_ref(v_env_3044_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec(v___y_3020_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
v___x_3156_ = l_main___boxed__const__2;
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 0, v___x_3156_);
v___x_3158_ = v___x_3052_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v___x_3156_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
else
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
lean_del_object(v___x_3046_);
lean_dec_ref(v_env_3044_);
lean_dec_ref(v_messages_3043_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec(v___y_3020_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
v_a_3162_ = lean_ctor_get(v___x_3050_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_3050_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_3050_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
}
}
v___jp_3179_:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; size_t v_sz_3217_; size_t v___x_3218_; lean_object* v___x_3219_; 
lean_inc_ref(v___y_3210_);
v___x_3214_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3214_, 0, v___y_3213_);
lean_ctor_set(v___x_3214_, 1, v_nextMacroScope_3198_);
lean_ctor_set(v___x_3214_, 2, v_ngen_3199_);
lean_ctor_set(v___x_3214_, 3, v_auxDeclNGen_3200_);
lean_ctor_set(v___x_3214_, 4, v_traceState_3201_);
lean_ctor_set(v___x_3214_, 5, v___y_3210_);
lean_ctor_set(v___x_3214_, 6, v_recordedDeps_3202_);
lean_ctor_set(v___x_3214_, 7, v_messages_3203_);
lean_ctor_set(v___x_3214_, 8, v_infoState_3204_);
lean_ctor_set(v___x_3214_, 9, v_snapshotTasks_3205_);
v___x_3215_ = lean_st_ref_put(v___y_3211_, v___x_3214_);
v___x_3216_ = lean_box(0);
v_sz_3217_ = lean_array_size(v___y_3195_);
v___x_3218_ = ((size_t)0ULL);
v___x_3219_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(v___y_3195_, v_sz_3217_, v___x_3218_, v___x_3216_, v___y_3192_, v___y_3211_);
lean_dec_ref(v___y_3195_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_dec_ref_known(v___x_3219_, 1);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3192_);
v___y_3020_ = v___y_3181_;
v___y_3021_ = v___y_3180_;
v___y_3022_ = v___y_3182_;
v___y_3023_ = v___y_3183_;
v___y_3024_ = v___y_3184_;
v___y_3025_ = v___y_3185_;
v___y_3026_ = v___y_3186_;
v___y_3027_ = v___y_3187_;
v___y_3028_ = v___y_3189_;
v___y_3029_ = v___y_3188_;
v___y_3030_ = v___y_3190_;
v___y_3031_ = v___y_3197_;
v___y_3032_ = v___y_3191_;
v___y_3033_ = v___y_3206_;
v___y_3034_ = v___y_3207_;
v___y_3035_ = v___y_3208_;
v___y_3036_ = v___y_3194_;
v___y_3037_ = v___y_3193_;
v___y_3038_ = v___y_3210_;
v___y_3039_ = v___y_3209_;
v___y_3040_ = v___y_3212_;
v___y_3041_ = v___y_3196_;
goto v___jp_3019_;
}
else
{
lean_object* v_a_3220_; uint8_t v___x_3221_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref_known(v___x_3219_, 1);
v___x_3221_ = l_Lean_Exception_isInterrupt(v_a_3220_);
if (v___x_3221_ == 0)
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = l_Lean_Exception_toMessageData(v_a_3220_);
v___x_3223_ = l_Lean_logError___at___00main_spec__13(v___x_3222_, v___y_3192_, v___y_3211_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3192_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_dec_ref_known(v___x_3223_, 1);
v___y_3020_ = v___y_3181_;
v___y_3021_ = v___y_3180_;
v___y_3022_ = v___y_3182_;
v___y_3023_ = v___y_3183_;
v___y_3024_ = v___y_3184_;
v___y_3025_ = v___y_3185_;
v___y_3026_ = v___y_3186_;
v___y_3027_ = v___y_3187_;
v___y_3028_ = v___y_3189_;
v___y_3029_ = v___y_3188_;
v___y_3030_ = v___y_3190_;
v___y_3031_ = v___y_3197_;
v___y_3032_ = v___y_3191_;
v___y_3033_ = v___y_3206_;
v___y_3034_ = v___y_3207_;
v___y_3035_ = v___y_3208_;
v___y_3036_ = v___y_3194_;
v___y_3037_ = v___y_3193_;
v___y_3038_ = v___y_3210_;
v___y_3039_ = v___y_3209_;
v___y_3040_ = v___y_3212_;
v___y_3041_ = v___y_3196_;
goto v___jp_3019_;
}
else
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
lean_dec_ref_known(v___x_3223_, 1);
lean_dec(v___y_3212_);
lean_dec(v___y_3208_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3188_);
lean_dec(v___y_3187_);
lean_dec(v___y_3186_);
lean_dec_ref(v___y_3184_);
lean_dec(v___y_3183_);
lean_dec(v___y_3181_);
lean_dec_ref(v___x_3018_);
lean_del_object(v___x_3011_);
lean_dec(v_fst_3008_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
v___x_3224_ = lean_obj_once(&l_main___closed__17, &l_main___closed__17_once, _init_l_main___closed__17);
v___x_3225_ = l_panic___at___00main_spec__5(v___x_3224_);
return v___x_3225_;
}
}
else
{
lean_dec(v_a_3220_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3192_);
v___y_3020_ = v___y_3181_;
v___y_3021_ = v___y_3180_;
v___y_3022_ = v___y_3182_;
v___y_3023_ = v___y_3183_;
v___y_3024_ = v___y_3184_;
v___y_3025_ = v___y_3185_;
v___y_3026_ = v___y_3186_;
v___y_3027_ = v___y_3187_;
v___y_3028_ = v___y_3189_;
v___y_3029_ = v___y_3188_;
v___y_3030_ = v___y_3190_;
v___y_3031_ = v___y_3197_;
v___y_3032_ = v___y_3191_;
v___y_3033_ = v___y_3206_;
v___y_3034_ = v___y_3207_;
v___y_3035_ = v___y_3208_;
v___y_3036_ = v___y_3194_;
v___y_3037_ = v___y_3193_;
v___y_3038_ = v___y_3210_;
v___y_3039_ = v___y_3209_;
v___y_3040_ = v___y_3212_;
v___y_3041_ = v___y_3196_;
goto v___jp_3019_;
}
}
}
v___jp_3226_:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v_env_3273_; lean_object* v_nextMacroScope_3274_; lean_object* v_ngen_3275_; lean_object* v_auxDeclNGen_3276_; lean_object* v_traceState_3277_; lean_object* v_recordedDeps_3278_; lean_object* v_messages_3279_; lean_object* v_infoState_3280_; lean_object* v_snapshotTasks_3281_; lean_object* v___x_3282_; uint8_t v___x_3283_; 
v___x_3268_ = l_Lean_maxRecDepth;
v___x_3269_ = l_Lean_Option_get___at___00main_spec__8(v___x_3018_, v___x_3268_);
lean_inc_ref(v___x_3018_);
v___x_3270_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3270_, 0, v_fileName_3252_);
lean_ctor_set(v___x_3270_, 1, v_fileMap_3253_);
lean_ctor_set(v___x_3270_, 2, v___x_3018_);
lean_ctor_set(v___x_3270_, 3, v___x_3269_);
lean_ctor_set(v___x_3270_, 4, v_currNamespace_3254_);
lean_ctor_set(v___x_3270_, 5, v_openDecls_3255_);
lean_ctor_set(v___x_3270_, 6, v_initHeartbeats_3256_);
lean_ctor_set(v___x_3270_, 7, v_maxHeartbeats_3257_);
lean_ctor_set(v___x_3270_, 8, v_quotContext_3258_);
lean_ctor_set(v___x_3270_, 9, v_currMacroScope_3259_);
lean_ctor_set(v___x_3270_, 10, v_cancelTk_x3f_3260_);
lean_ctor_set(v___x_3270_, 11, v_inheritedTraceOptions_3261_);
v___x_3271_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3271_, 0, v___x_3270_);
lean_ctor_set(v___x_3271_, 1, v_currRecDepth_3262_);
lean_ctor_set(v___x_3271_, 2, v_ref_3263_);
lean_ctor_set_uint16(v___x_3271_, sizeof(void*)*3, v___y_3251_);
lean_ctor_set_uint8(v___x_3271_, sizeof(void*)*3 + 2, v_suppressElabErrors_3264_);
lean_ctor_set_uint8(v___x_3271_, sizeof(void*)*3 + 3, v_checkDeprecated_3265_);
lean_ctor_set_uint8(v___x_3271_, sizeof(void*)*3 + 4, v_isRecordingDeps_3266_);
v___x_3272_ = lean_st_ref_take(v___y_3267_);
v_env_3273_ = lean_ctor_get(v___x_3272_, 0);
lean_inc_ref(v_env_3273_);
v_nextMacroScope_3274_ = lean_ctor_get(v___x_3272_, 1);
lean_inc(v_nextMacroScope_3274_);
v_ngen_3275_ = lean_ctor_get(v___x_3272_, 2);
lean_inc_ref(v_ngen_3275_);
v_auxDeclNGen_3276_ = lean_ctor_get(v___x_3272_, 3);
lean_inc_ref(v_auxDeclNGen_3276_);
v_traceState_3277_ = lean_ctor_get(v___x_3272_, 4);
lean_inc_ref(v_traceState_3277_);
v_recordedDeps_3278_ = lean_ctor_get(v___x_3272_, 6);
lean_inc_ref(v_recordedDeps_3278_);
v_messages_3279_ = lean_ctor_get(v___x_3272_, 7);
lean_inc_ref(v_messages_3279_);
v_infoState_3280_ = lean_ctor_get(v___x_3272_, 8);
lean_inc_ref(v_infoState_3280_);
v_snapshotTasks_3281_ = lean_ctor_get(v___x_3272_, 9);
lean_inc_ref(v_snapshotTasks_3281_);
lean_dec(v___x_3272_);
v___x_3282_ = lean_array_get_size(v___y_3242_);
v___x_3283_ = lean_nat_dec_lt(v___x_3017_, v___x_3282_);
if (v___x_3283_ == 0)
{
lean_object* v___x_3284_; 
lean_inc_ref(v___y_3238_);
v___x_3284_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3238_, v_env_3273_, v___x_2992_);
v___y_3180_ = v___y_3228_;
v___y_3181_ = v___y_3227_;
v___y_3182_ = v___y_3229_;
v___y_3183_ = v___y_3230_;
v___y_3184_ = v___y_3231_;
v___y_3185_ = v___y_3232_;
v___y_3186_ = v___y_3233_;
v___y_3187_ = v___y_3234_;
v___y_3188_ = v___y_3236_;
v___y_3189_ = v___y_3235_;
v___y_3190_ = v___y_3237_;
v___y_3191_ = v___y_3239_;
v___y_3192_ = v___x_3271_;
v___y_3193_ = v___y_3240_;
v___y_3194_ = v___y_3241_;
v___y_3195_ = v___y_3242_;
v___y_3196_ = v___y_3243_;
v___y_3197_ = v___y_3244_;
v_nextMacroScope_3198_ = v_nextMacroScope_3274_;
v_ngen_3199_ = v_ngen_3275_;
v_auxDeclNGen_3200_ = v_auxDeclNGen_3276_;
v_traceState_3201_ = v_traceState_3277_;
v_recordedDeps_3202_ = v_recordedDeps_3278_;
v_messages_3203_ = v_messages_3279_;
v_infoState_3204_ = v_infoState_3280_;
v_snapshotTasks_3205_ = v_snapshotTasks_3281_;
v___y_3206_ = v___y_3245_;
v___y_3207_ = v___y_3246_;
v___y_3208_ = v___y_3247_;
v___y_3209_ = v___y_3248_;
v___y_3210_ = v___y_3249_;
v___y_3211_ = v___y_3267_;
v___y_3212_ = v___y_3250_;
v___y_3213_ = v___x_3284_;
goto v___jp_3179_;
}
else
{
size_t v___x_3285_; size_t v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; 
v___x_3285_ = ((size_t)0ULL);
v___x_3286_ = lean_usize_of_nat(v___x_3282_);
v___x_3287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(v___y_3242_, v___x_3285_, v___x_3286_, v___x_2992_);
lean_inc_ref(v___y_3238_);
v___x_3288_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3238_, v_env_3273_, v___x_3287_);
v___y_3180_ = v___y_3228_;
v___y_3181_ = v___y_3227_;
v___y_3182_ = v___y_3229_;
v___y_3183_ = v___y_3230_;
v___y_3184_ = v___y_3231_;
v___y_3185_ = v___y_3232_;
v___y_3186_ = v___y_3233_;
v___y_3187_ = v___y_3234_;
v___y_3188_ = v___y_3236_;
v___y_3189_ = v___y_3235_;
v___y_3190_ = v___y_3237_;
v___y_3191_ = v___y_3239_;
v___y_3192_ = v___x_3271_;
v___y_3193_ = v___y_3240_;
v___y_3194_ = v___y_3241_;
v___y_3195_ = v___y_3242_;
v___y_3196_ = v___y_3243_;
v___y_3197_ = v___y_3244_;
v_nextMacroScope_3198_ = v_nextMacroScope_3274_;
v_ngen_3199_ = v_ngen_3275_;
v_auxDeclNGen_3200_ = v_auxDeclNGen_3276_;
v_traceState_3201_ = v_traceState_3277_;
v_recordedDeps_3202_ = v_recordedDeps_3278_;
v_messages_3203_ = v_messages_3279_;
v_infoState_3204_ = v_infoState_3280_;
v_snapshotTasks_3205_ = v_snapshotTasks_3281_;
v___y_3206_ = v___y_3245_;
v___y_3207_ = v___y_3246_;
v___y_3208_ = v___y_3247_;
v___y_3209_ = v___y_3248_;
v___y_3210_ = v___y_3249_;
v___y_3211_ = v___y_3267_;
v___y_3212_ = v___y_3250_;
v___y_3213_ = v___x_3288_;
goto v___jp_3179_;
}
}
v___jp_3289_:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v_toCold_3327_; lean_object* v_currRecDepth_3328_; lean_object* v_ref_3329_; uint8_t v_suppressElabErrors_3330_; uint8_t v_checkDeprecated_3331_; uint8_t v_isRecordingDeps_3332_; lean_object* v_fileName_3333_; lean_object* v_fileMap_3334_; lean_object* v_currNamespace_3335_; lean_object* v_openDecls_3336_; lean_object* v_initHeartbeats_3337_; lean_object* v_maxHeartbeats_3338_; lean_object* v_quotContext_3339_; lean_object* v_currMacroScope_3340_; lean_object* v_cancelTk_x3f_3341_; lean_object* v_inheritedTraceOptions_3342_; 
lean_inc_ref(v___y_3321_);
v___x_3325_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3325_, 0, v___y_3324_);
lean_ctor_set(v___x_3325_, 1, v_nextMacroScope_3303_);
lean_ctor_set(v___x_3325_, 2, v_ngen_3304_);
lean_ctor_set(v___x_3325_, 3, v_auxDeclNGen_3305_);
lean_ctor_set(v___x_3325_, 4, v_traceState_3306_);
lean_ctor_set(v___x_3325_, 5, v___y_3321_);
lean_ctor_set(v___x_3325_, 6, v_recordedDeps_3307_);
lean_ctor_set(v___x_3325_, 7, v_messages_3308_);
lean_ctor_set(v___x_3325_, 8, v_infoState_3309_);
lean_ctor_set(v___x_3325_, 9, v_snapshotTasks_3310_);
v___x_3326_ = lean_st_ref_put(v___y_3318_, v___x_3325_);
v_toCold_3327_ = lean_ctor_get(v___y_3319_, 0);
lean_inc_ref(v_toCold_3327_);
v_currRecDepth_3328_ = lean_ctor_get(v___y_3319_, 1);
lean_inc(v_currRecDepth_3328_);
v_ref_3329_ = lean_ctor_get(v___y_3319_, 2);
lean_inc(v_ref_3329_);
v_suppressElabErrors_3330_ = lean_ctor_get_uint8(v___y_3319_, sizeof(void*)*3 + 2);
v_checkDeprecated_3331_ = lean_ctor_get_uint8(v___y_3319_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3332_ = lean_ctor_get_uint8(v___y_3319_, sizeof(void*)*3 + 4);
lean_dec_ref(v___y_3319_);
v_fileName_3333_ = lean_ctor_get(v_toCold_3327_, 0);
lean_inc_ref(v_fileName_3333_);
v_fileMap_3334_ = lean_ctor_get(v_toCold_3327_, 1);
lean_inc_ref(v_fileMap_3334_);
v_currNamespace_3335_ = lean_ctor_get(v_toCold_3327_, 4);
lean_inc(v_currNamespace_3335_);
v_openDecls_3336_ = lean_ctor_get(v_toCold_3327_, 5);
lean_inc(v_openDecls_3336_);
v_initHeartbeats_3337_ = lean_ctor_get(v_toCold_3327_, 6);
lean_inc(v_initHeartbeats_3337_);
v_maxHeartbeats_3338_ = lean_ctor_get(v_toCold_3327_, 7);
lean_inc(v_maxHeartbeats_3338_);
v_quotContext_3339_ = lean_ctor_get(v_toCold_3327_, 8);
lean_inc(v_quotContext_3339_);
v_currMacroScope_3340_ = lean_ctor_get(v_toCold_3327_, 9);
lean_inc(v_currMacroScope_3340_);
v_cancelTk_x3f_3341_ = lean_ctor_get(v_toCold_3327_, 10);
lean_inc(v_cancelTk_x3f_3341_);
v_inheritedTraceOptions_3342_ = lean_ctor_get(v_toCold_3327_, 11);
lean_inc_ref(v_inheritedTraceOptions_3342_);
lean_dec_ref(v_toCold_3327_);
lean_inc(v___y_3318_);
v___y_3227_ = v___y_3291_;
v___y_3228_ = v___y_3290_;
v___y_3229_ = v___y_3292_;
v___y_3230_ = v___y_3293_;
v___y_3231_ = v___y_3294_;
v___y_3232_ = v___y_3295_;
v___y_3233_ = v___y_3296_;
v___y_3234_ = v___y_3297_;
v___y_3235_ = v___y_3299_;
v___y_3236_ = v___y_3298_;
v___y_3237_ = v___y_3300_;
v___y_3238_ = v___y_3301_;
v___y_3239_ = v___y_3302_;
v___y_3240_ = v___y_3311_;
v___y_3241_ = v___y_3312_;
v___y_3242_ = v___y_3313_;
v___y_3243_ = v___y_3314_;
v___y_3244_ = v___y_3315_;
v___y_3245_ = v___y_3317_;
v___y_3246_ = v___y_3316_;
v___y_3247_ = v___y_3318_;
v___y_3248_ = v___y_3320_;
v___y_3249_ = v___y_3321_;
v___y_3250_ = v___y_3322_;
v___y_3251_ = v___y_3323_;
v_fileName_3252_ = v_fileName_3333_;
v_fileMap_3253_ = v_fileMap_3334_;
v_currNamespace_3254_ = v_currNamespace_3335_;
v_openDecls_3255_ = v_openDecls_3336_;
v_initHeartbeats_3256_ = v_initHeartbeats_3337_;
v_maxHeartbeats_3257_ = v_maxHeartbeats_3338_;
v_quotContext_3258_ = v_quotContext_3339_;
v_currMacroScope_3259_ = v_currMacroScope_3340_;
v_cancelTk_x3f_3260_ = v_cancelTk_x3f_3341_;
v_inheritedTraceOptions_3261_ = v_inheritedTraceOptions_3342_;
v_currRecDepth_3262_ = v_currRecDepth_3328_;
v_ref_3263_ = v_ref_3329_;
v_suppressElabErrors_3264_ = v_suppressElabErrors_3330_;
v_checkDeprecated_3265_ = v_checkDeprecated_3331_;
v_isRecordingDeps_3266_ = v_isRecordingDeps_3332_;
v___y_3267_ = v___y_3318_;
goto v___jp_3226_;
}
v___jp_3343_:
{
lean_object* v___x_3370_; lean_object* v_env_3371_; lean_object* v_nextMacroScope_3372_; lean_object* v_ngen_3373_; lean_object* v_auxDeclNGen_3374_; lean_object* v_traceState_3375_; lean_object* v_recordedDeps_3376_; lean_object* v_messages_3377_; lean_object* v_infoState_3378_; lean_object* v_snapshotTasks_3379_; uint16_t v___x_3380_; uint16_t v___x_3381_; uint16_t v___x_3382_; uint8_t v___x_3383_; 
v___x_3370_ = lean_st_ref_take(v___y_3365_);
v_env_3371_ = lean_ctor_get(v___x_3370_, 0);
lean_inc_ref(v_env_3371_);
v_nextMacroScope_3372_ = lean_ctor_get(v___x_3370_, 1);
lean_inc(v_nextMacroScope_3372_);
v_ngen_3373_ = lean_ctor_get(v___x_3370_, 2);
lean_inc_ref(v_ngen_3373_);
v_auxDeclNGen_3374_ = lean_ctor_get(v___x_3370_, 3);
lean_inc_ref(v_auxDeclNGen_3374_);
v_traceState_3375_ = lean_ctor_get(v___x_3370_, 4);
lean_inc_ref(v_traceState_3375_);
v_recordedDeps_3376_ = lean_ctor_get(v___x_3370_, 6);
lean_inc_ref(v_recordedDeps_3376_);
v_messages_3377_ = lean_ctor_get(v___x_3370_, 7);
lean_inc_ref(v_messages_3377_);
v_infoState_3378_ = lean_ctor_get(v___x_3370_, 8);
lean_inc_ref(v_infoState_3378_);
v_snapshotTasks_3379_ = lean_ctor_get(v___x_3370_, 9);
lean_inc_ref(v_snapshotTasks_3379_);
lean_dec(v___x_3370_);
v___x_3380_ = 512;
v___x_3381_ = lean_uint16_land(v___y_3360_, v___x_3380_);
v___x_3382_ = 0;
v___x_3383_ = lean_uint16_dec_eq(v___x_3381_, v___x_3382_);
if (v___x_3383_ == 0)
{
lean_object* v___x_3384_; 
v___x_3384_ = l_Lean_Kernel_enableDiag(v_env_3371_, v___y_3363_);
v___y_3290_ = v___y_3353_;
v___y_3291_ = v___y_3344_;
v___y_3292_ = v___y_3346_;
v___y_3293_ = v___y_3347_;
v___y_3294_ = v___y_3350_;
v___y_3295_ = v___y_3356_;
v___y_3296_ = v___y_3357_;
v___y_3297_ = v___y_3352_;
v___y_3298_ = v___y_3359_;
v___y_3299_ = v___y_3358_;
v___y_3300_ = v___y_3361_;
v___y_3301_ = v___y_3345_;
v___y_3302_ = v___y_3346_;
v_nextMacroScope_3303_ = v_nextMacroScope_3372_;
v_ngen_3304_ = v_ngen_3373_;
v_auxDeclNGen_3305_ = v_auxDeclNGen_3374_;
v_traceState_3306_ = v_traceState_3375_;
v_recordedDeps_3307_ = v_recordedDeps_3376_;
v_messages_3308_ = v_messages_3377_;
v_infoState_3309_ = v_infoState_3378_;
v_snapshotTasks_3310_ = v_snapshotTasks_3379_;
v___y_3311_ = v___y_3348_;
v___y_3312_ = v___y_3349_;
v___y_3313_ = v___y_3351_;
v___y_3314_ = v___y_3362_;
v___y_3315_ = v___y_3364_;
v___y_3316_ = v___y_3354_;
v___y_3317_ = v___y_3366_;
v___y_3318_ = v___y_3365_;
v___y_3319_ = v___y_3367_;
v___y_3320_ = v___y_3355_;
v___y_3321_ = v___y_3356_;
v___y_3322_ = v___y_3368_;
v___y_3323_ = v___y_3360_;
v___y_3324_ = v___x_3384_;
goto v___jp_3289_;
}
else
{
lean_object* v___x_3385_; 
v___x_3385_ = l_Lean_Kernel_enableDiag(v_env_3371_, v___y_3369_);
v___y_3290_ = v___y_3353_;
v___y_3291_ = v___y_3344_;
v___y_3292_ = v___y_3346_;
v___y_3293_ = v___y_3347_;
v___y_3294_ = v___y_3350_;
v___y_3295_ = v___y_3356_;
v___y_3296_ = v___y_3357_;
v___y_3297_ = v___y_3352_;
v___y_3298_ = v___y_3359_;
v___y_3299_ = v___y_3358_;
v___y_3300_ = v___y_3361_;
v___y_3301_ = v___y_3345_;
v___y_3302_ = v___y_3346_;
v_nextMacroScope_3303_ = v_nextMacroScope_3372_;
v_ngen_3304_ = v_ngen_3373_;
v_auxDeclNGen_3305_ = v_auxDeclNGen_3374_;
v_traceState_3306_ = v_traceState_3375_;
v_recordedDeps_3307_ = v_recordedDeps_3376_;
v_messages_3308_ = v_messages_3377_;
v_infoState_3309_ = v_infoState_3378_;
v_snapshotTasks_3310_ = v_snapshotTasks_3379_;
v___y_3311_ = v___y_3348_;
v___y_3312_ = v___y_3349_;
v___y_3313_ = v___y_3351_;
v___y_3314_ = v___y_3362_;
v___y_3315_ = v___y_3364_;
v___y_3316_ = v___y_3354_;
v___y_3317_ = v___y_3366_;
v___y_3318_ = v___y_3365_;
v___y_3319_ = v___y_3367_;
v___y_3320_ = v___y_3355_;
v___y_3321_ = v___y_3356_;
v___y_3322_ = v___y_3368_;
v___y_3323_ = v___y_3360_;
v___y_3324_ = v___x_3385_;
goto v___jp_3289_;
}
}
}
}
else
{
lean_object* v_a_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3680_; 
lean_dec_ref(v___f_3000_);
lean_dec(v_importArts_2998_);
lean_dec(v_name_2996_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v_a_3673_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3675_ = v___x_3006_;
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_a_3673_);
lean_dec(v___x_3006_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3678_; 
if (v_isShared_3676_ == 0)
{
v___x_3678_ = v___x_3675_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_a_3673_);
v___x_3678_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
return v___x_3678_;
}
}
}
}
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_del_object(v___x_2983_);
lean_dec(v_tail_2981_);
lean_dec(v_head_2980_);
lean_del_object(v___x_2978_);
lean_dec(v_head_2976_);
lean_del_object(v___x_2974_);
v_a_3682_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_2994_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_2994_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
}
}
}
else
{
lean_dec(v_tail_2971_);
lean_dec_ref_known(v_tail_2970_, 2);
lean_dec_ref_known(v_args_2945_, 2);
goto v___jp_2950_;
}
}
else
{
lean_dec_ref_known(v_args_2945_, 2);
lean_dec(v_tail_2970_);
goto v___jp_2950_;
}
}
else
{
lean_dec(v_args_2945_);
goto v___jp_2950_;
}
v___jp_2947_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2948_ = l_main___boxed__const__1;
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
return v___x_2949_;
}
v___jp_2950_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = ((lean_object*)(l_main___closed__0));
v___x_2952_ = l_IO_println___at___00Lean_Environment_displayStats_spec__1(v___x_2951_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2960_; 
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2960_ == 0)
{
lean_object* v_unused_2961_; 
v_unused_2961_ = lean_ctor_get(v___x_2952_, 0);
lean_dec(v_unused_2961_);
v___x_2954_ = v___x_2952_;
v_isShared_2955_ = v_isSharedCheck_2960_;
goto v_resetjp_2953_;
}
else
{
lean_dec(v___x_2952_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2960_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2956_ = l_main___boxed__const__2;
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 0, v___x_2956_);
v___x_2958_ = v___x_2954_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2956_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
v_a_2962_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2952_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2952_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_3695_, lean_object* v_a_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = _lean_main(v_args_3695_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object* v_as_3698_, lean_object* v_as_x27_3699_, lean_object* v_b_3700_, lean_object* v_a_3701_){
_start:
{
lean_object* v___x_3703_; 
v___x_3703_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_3699_, v_b_3700_);
return v___x_3703_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object* v_as_3704_, lean_object* v_as_x27_3705_, lean_object* v_b_3706_, lean_object* v_a_3707_, lean_object* v___y_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l_List_forIn_x27_loop___at___00main_spec__1(v_as_3704_, v_as_x27_3705_, v_b_3706_, v_a_3707_);
lean_dec(v_as_x27_3705_);
lean_dec(v_as_3704_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(lean_object* v___y_3710_, lean_object* v___y_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_3711_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___boxed(lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_){
_start:
{
lean_object* v_res_3717_; 
v_res_3717_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(v___y_3714_, v___y_3715_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(lean_object* v_00_u03b2_3718_, lean_object* v_m_3719_, lean_object* v_a_3720_, lean_object* v_fallback_3721_){
_start:
{
lean_object* v___x_3722_; 
v___x_3722_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_m_3719_, v_a_3720_, v_fallback_3721_);
return v___x_3722_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___boxed(lean_object* v_00_u03b2_3723_, lean_object* v_m_3724_, lean_object* v_a_3725_, lean_object* v_fallback_3726_){
_start:
{
lean_object* v_res_3727_; 
v_res_3727_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(v_00_u03b2_3723_, v_m_3724_, v_a_3725_, v_fallback_3726_);
lean_dec(v_fallback_3726_);
lean_dec_ref(v_a_3725_);
lean_dec_ref(v_m_3724_);
return v_res_3727_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18(lean_object* v_00_u03b2_3728_, lean_object* v_m_3729_, lean_object* v_a_3730_, lean_object* v_b_3731_){
_start:
{
lean_object* v___x_3732_; 
v___x_3732_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_m_3729_, v_a_3730_, v_b_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(lean_object* v_n_3733_, lean_object* v_as_3734_, lean_object* v_lo_3735_, lean_object* v_hi_3736_, lean_object* v_w_3737_, lean_object* v_hlo_3738_, lean_object* v_hhi_3739_){
_start:
{
lean_object* v___x_3740_; 
v___x_3740_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_3733_, v_as_3734_, v_lo_3735_, v_hi_3736_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___boxed(lean_object* v_n_3741_, lean_object* v_as_3742_, lean_object* v_lo_3743_, lean_object* v_hi_3744_, lean_object* v_w_3745_, lean_object* v_hlo_3746_, lean_object* v_hhi_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(v_n_3741_, v_as_3742_, v_lo_3743_, v_hi_3744_, v_w_3745_, v_hlo_3746_, v_hhi_3747_);
lean_dec(v_hi_3744_);
lean_dec(v_n_3741_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(lean_object* v_00_u03b2_3749_, lean_object* v_a_3750_, lean_object* v_fallback_3751_, lean_object* v_x_3752_){
_start:
{
lean_object* v___x_3753_; 
v___x_3753_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_3750_, v_fallback_3751_, v_x_3752_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___boxed(lean_object* v_00_u03b2_3754_, lean_object* v_a_3755_, lean_object* v_fallback_3756_, lean_object* v_x_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(v_00_u03b2_3754_, v_a_3755_, v_fallback_3756_, v_x_3757_);
lean_dec(v_x_3757_);
lean_dec(v_fallback_3756_);
lean_dec_ref(v_a_3755_);
return v_res_3758_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(lean_object* v_00_u03b2_3759_, lean_object* v_a_3760_, lean_object* v_x_3761_){
_start:
{
uint8_t v___x_3762_; 
v___x_3762_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_3760_, v_x_3761_);
return v___x_3762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b2_3763_, lean_object* v_a_3764_, lean_object* v_x_3765_){
_start:
{
uint8_t v_res_3766_; lean_object* v_r_3767_; 
v_res_3766_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(v_00_u03b2_3763_, v_a_3764_, v_x_3765_);
lean_dec(v_x_3765_);
lean_dec_ref(v_a_3764_);
v_r_3767_ = lean_box(v_res_3766_);
return v_r_3767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24(lean_object* v_00_u03b2_3768_, lean_object* v_data_3769_){
_start:
{
lean_object* v___x_3770_; 
v___x_3770_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(v_data_3769_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25(lean_object* v_00_u03b2_3771_, lean_object* v_a_3772_, lean_object* v_b_3773_, lean_object* v_x_3774_){
_start:
{
lean_object* v___x_3775_; 
v___x_3775_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_3772_, v_b_3773_, v_x_3774_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(lean_object* v_n_3776_, lean_object* v_lo_3777_, lean_object* v_hi_3778_, lean_object* v_hhi_3779_, lean_object* v_pivot_3780_, lean_object* v_as_3781_, lean_object* v_i_3782_, lean_object* v_k_3783_, lean_object* v_ilo_3784_, lean_object* v_ik_3785_, lean_object* v_w_3786_){
_start:
{
lean_object* v___x_3787_; 
v___x_3787_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_3778_, v_pivot_3780_, v_as_3781_, v_i_3782_, v_k_3783_);
return v___x_3787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___boxed(lean_object* v_n_3788_, lean_object* v_lo_3789_, lean_object* v_hi_3790_, lean_object* v_hhi_3791_, lean_object* v_pivot_3792_, lean_object* v_as_3793_, lean_object* v_i_3794_, lean_object* v_k_3795_, lean_object* v_ilo_3796_, lean_object* v_ik_3797_, lean_object* v_w_3798_){
_start:
{
lean_object* v_res_3799_; 
v_res_3799_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(v_n_3788_, v_lo_3789_, v_hi_3790_, v_hhi_3791_, v_pivot_3792_, v_as_3793_, v_i_3794_, v_k_3795_, v_ilo_3796_, v_ik_3797_, v_w_3798_);
lean_dec_ref(v_pivot_3792_);
lean_dec(v_hi_3790_);
lean_dec(v_lo_3789_);
lean_dec(v_n_3788_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(lean_object* v_as_3800_, size_t v_sz_3801_, size_t v_i_3802_, lean_object* v_b_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v___x_3807_; 
v___x_3807_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_3800_, v_sz_3801_, v_i_3802_, v_b_3803_, v___y_3804_);
return v___x_3807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___boxed(lean_object* v_as_3808_, lean_object* v_sz_3809_, lean_object* v_i_3810_, lean_object* v_b_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_){
_start:
{
size_t v_sz_boxed_3815_; size_t v_i_boxed_3816_; lean_object* v_res_3817_; 
v_sz_boxed_3815_ = lean_unbox_usize(v_sz_3809_);
lean_dec(v_sz_3809_);
v_i_boxed_3816_ = lean_unbox_usize(v_i_3810_);
lean_dec(v_i_3810_);
v_res_3817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(v_as_3808_, v_sz_boxed_3815_, v_i_boxed_3816_, v_b_3811_, v___y_3812_, v___y_3813_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v_as_3808_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35(lean_object* v_00_u03b2_3818_, lean_object* v_i_3819_, lean_object* v_source_3820_, lean_object* v_target_3821_){
_start:
{
lean_object* v___x_3822_; 
v___x_3822_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(v_i_3819_, v_source_3820_, v_target_3821_);
return v___x_3822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(uint8_t v___x_3823_, lean_object* v_as_3824_, size_t v_sz_3825_, size_t v_i_3826_, lean_object* v_b_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
lean_object* v___x_3831_; 
v___x_3831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_3823_, v_as_3824_, v_sz_3825_, v_i_3826_, v_b_3827_, v___y_3828_);
return v___x_3831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___boxed(lean_object* v___x_3832_, lean_object* v_as_3833_, lean_object* v_sz_3834_, lean_object* v_i_3835_, lean_object* v_b_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
uint8_t v___x_42684__boxed_3840_; size_t v_sz_boxed_3841_; size_t v_i_boxed_3842_; lean_object* v_res_3843_; 
v___x_42684__boxed_3840_ = lean_unbox(v___x_3832_);
v_sz_boxed_3841_ = lean_unbox_usize(v_sz_3834_);
lean_dec(v_sz_3834_);
v_i_boxed_3842_ = lean_unbox_usize(v_i_3835_);
lean_dec(v_i_3835_);
v_res_3843_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(v___x_42684__boxed_3840_, v_as_3833_, v_sz_boxed_3841_, v_i_boxed_3842_, v_b_3836_, v___y_3837_, v___y_3838_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec_ref(v_as_3833_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(lean_object* v_as_3844_, size_t v_sz_3845_, size_t v_i_3846_, lean_object* v_b_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_){
_start:
{
lean_object* v___x_3851_; 
v___x_3851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_3844_, v_sz_3845_, v_i_3846_, v_b_3847_, v___y_3848_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___boxed(lean_object* v_as_3852_, lean_object* v_sz_3853_, lean_object* v_i_3854_, lean_object* v_b_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_){
_start:
{
size_t v_sz_boxed_3859_; size_t v_i_boxed_3860_; lean_object* v_res_3861_; 
v_sz_boxed_3859_ = lean_unbox_usize(v_sz_3853_);
lean_dec(v_sz_3853_);
v_i_boxed_3860_ = lean_unbox_usize(v_i_3854_);
lean_dec(v_i_3854_);
v_res_3861_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(v_as_3852_, v_sz_boxed_3859_, v_i_boxed_3860_, v_b_3855_, v___y_3856_, v___y_3857_);
lean_dec(v___y_3857_);
lean_dec_ref(v___y_3856_);
lean_dec_ref(v_as_3852_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44(lean_object* v_00_u03b2_3862_, lean_object* v_x_3863_, lean_object* v_x_3864_){
_start:
{
lean_object* v___x_3865_; 
v___x_3865_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(v_x_3863_, v_x_3864_);
return v___x_3865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(uint8_t v___x_3866_, lean_object* v_as_3867_, size_t v_sz_3868_, size_t v_i_3869_, lean_object* v_b_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_){
_start:
{
lean_object* v___x_3874_; 
v___x_3874_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_3866_, v_as_3867_, v_sz_3868_, v_i_3869_, v_b_3870_, v___y_3871_);
return v___x_3874_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___boxed(lean_object* v___x_3875_, lean_object* v_as_3876_, lean_object* v_sz_3877_, lean_object* v_i_3878_, lean_object* v_b_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
uint8_t v___x_42715__boxed_3883_; size_t v_sz_boxed_3884_; size_t v_i_boxed_3885_; lean_object* v_res_3886_; 
v___x_42715__boxed_3883_ = lean_unbox(v___x_3875_);
v_sz_boxed_3884_ = lean_unbox_usize(v_sz_3877_);
lean_dec(v_sz_3877_);
v_i_boxed_3885_ = lean_unbox_usize(v_i_3878_);
lean_dec(v_i_3878_);
v_res_3886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(v___x_42715__boxed_3883_, v_as_3876_, v_sz_boxed_3884_, v_i_boxed_3885_, v_b_3879_, v___y_3880_, v___y_3881_);
lean_dec(v___y_3881_);
lean_dec_ref(v___y_3880_);
lean_dec_ref(v_as_3876_);
return v_res_3886_;
}
}
lean_object* runtime_initialize_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Path(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ExprDefEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LevelDefEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_CSimpAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ExprDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
l_main___boxed__const__2 = _init_l_main___boxed__const__2();
lean_mark_persistent(l_main___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Util_Path(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_ExprDefEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_LevelDefEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* initialize_Lean_Parser(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_CSimpAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ExprDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanIR(builtin);
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = runtime_initialize_LeanIR(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
