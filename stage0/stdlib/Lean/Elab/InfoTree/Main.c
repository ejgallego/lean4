// Lean compiler output
// Module: Lean.Elab.InfoTree.Main
// Imports: public import Lean.Elab.InfoTree.Basic public import Lean.Meta.PPGoal public import Lean.ReservedNameAction import Init.Data.Format.Macro
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_ppGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_ppTerm(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqMVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableMVarId_hash___boxed(lean_object*);
lean_object* l_Lean_mkConstWithLevelParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_substitute(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_mapM___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_CompletionInfo_stx(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_instReprDocElabKind_repr(uint8_t, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_Std_Format_nestD(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalName(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CustomInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[CustomInfo("};
static const lean_object* l_Lean_Elab_CustomInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_CustomInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CustomInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CustomInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_CustomInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_CustomInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_CustomInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ")]"};
static const lean_object* l_Lean_Elab_CustomInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_CustomInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_CustomInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CustomInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_CustomInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_CustomInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CustomInfo_format(lean_object*);
static const lean_closure_object l_Lean_Elab_instToFormatCustomInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_CustomInfo_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatCustomInfo___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatCustomInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToFormatCustomInfo = (const lean_object*)&l_Lean_Elab_instToFormatCustomInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "<InfoTree>"};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3;
static const lean_ctor_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10;
static const lean_array_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14;
static const lean_string_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__15_value;
static const lean_string_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__16 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__16_value;
static const lean_string_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__19;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20;
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2;
static const lean_array_object l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_toPPContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_toPPContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__4 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "†"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__6 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__6_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__7 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__7_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "†!"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__8 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__8_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__9 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " @ "};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_TermInfo_format___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[Term] "};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_TermInfo_format___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_TermInfo_format___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__4_value)}};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "(isBinder := true) "};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "<failed-to-infer-type>"};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_TermInfo_format___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__8_value)}};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_PartialTermInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "[PartialTerm] @ "};
static const lean_object* l_Lean_Elab_PartialTermInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_PartialTermInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_PartialTermInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_PartialTermInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_PartialTermInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_PartialTermInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialTermInfo_format(lean_object*, lean_object*);
static const lean_string_object l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__0 = (const lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__0_value;
static const lean_ctor_object l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__0_value)}};
static const lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1 = (const lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1_value;
static const lean_string_object l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__2 = (const lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__2_value;
static const lean_ctor_object l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__2_value)}};
static const lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3 = (const lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0(lean_object*);
static const lean_string_object l_Lean_Elab_CompletionInfo_format___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "[Completion-Id] "};
static const lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CompletionInfo_format___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_CompletionInfo_format___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_CompletionInfo_format___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CompletionInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "[Completion-Dot] "};
static const lean_object* l_Lean_Elab_CompletionInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CompletionInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_CompletionInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_CompletionInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[Completion] "};
static const lean_object* l_Lean_Elab_CompletionInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_CompletionInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_CompletionInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CommandInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[Command] @ "};
static const lean_object* l_Lean_Elab_CommandInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_CommandInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CommandInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CommandInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_CommandInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_CommandInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CommandInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_OptionInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[Option] "};
static const lean_object* l_Lean_Elab_OptionInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_OptionInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_OptionInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_OptionInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_OptionInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_OptionInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_OptionInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OptionInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ErrorNameInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[ErrorName] "};
static const lean_object* l_Lean_Elab_ErrorNameInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_ErrorNameInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ErrorNameInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorNameInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_ErrorNameInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_ErrorNameInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorNameInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorNameInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FieldInfo_format___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[Field] "};
static const lean_object* l_Lean_Elab_FieldInfo_format___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_FieldInfo_format___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_FieldInfo_format___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_FieldInfo_format___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_FieldInfo_format___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_FieldInfo_format___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_FieldInfo_format___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ContextInfo_ppGoals___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__0;
static lean_once_cell_t l_Lean_Elab_ContextInfo_ppGoals___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__1;
static lean_once_cell_t l_Lean_Elab_ContextInfo_ppGoals___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__2;
static lean_once_cell_t l_Lean_Elab_ContextInfo_ppGoals___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__3;
static const lean_string_object l_Lean_Elab_ContextInfo_ppGoals___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no goals"};
static const lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__4 = (const lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ContextInfo_ppGoals___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___closed__4_value)}};
static const lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__5 = (const lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_TacticInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[Tactic] @ "};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_TacticInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TacticInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_TacticInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nbefore "};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_TacticInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TacticInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__3_value;
static const lean_string_object l_Lean_Elab_TacticInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\nafter "};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__4 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__4_value;
static const lean_ctor_object l_Lean_Elab_TacticInfo_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TacticInfo_format___closed__4_value)}};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__5 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_TacticInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TacticInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_MacroExpansionInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "[MacroExpansion]\n"};
static const lean_object* l_Lean_Elab_MacroExpansionInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_MacroExpansionInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_MacroExpansionInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_MacroExpansionInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\n===>\n"};
static const lean_object* l_Lean_Elab_MacroExpansionInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_MacroExpansionInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_MacroExpansionInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_MacroExpansionInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_MacroExpansionInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_UserWidgetInfo_format___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_UserWidgetInfo_format___closed__0;
static lean_once_cell_t l_Lean_Elab_UserWidgetInfo_format___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_UserWidgetInfo_format___closed__1;
static const lean_string_object l_Lean_Elab_UserWidgetInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[UserWidget] "};
static const lean_object* l_Lean_Elab_UserWidgetInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_UserWidgetInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_UserWidgetInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_UserWidgetInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_UserWidgetInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_UserWidgetInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_UserWidgetInfo_format(lean_object*);
static const lean_string_object l_Lean_Elab_FVarAliasInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[FVarAlias] "};
static const lean_object* l_Lean_Elab_FVarAliasInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_FVarAliasInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_FVarAliasInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_FVarAliasInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " -> "};
static const lean_object* l_Lean_Elab_FVarAliasInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_FVarAliasInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_FVarAliasInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FVarAliasInfo_format(lean_object*);
static const lean_string_object l_Lean_Elab_FieldRedeclInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "[FieldRedecl] @ "};
static const lean_object* l_Lean_Elab_FieldRedeclInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_FieldRedeclInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_FieldRedeclInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FieldRedeclInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_FieldRedeclInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_FieldRedeclInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FieldRedeclInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FieldRedeclInfo_format___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DelabTermInfo_docString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[Error: "};
static const lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_docString_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "[DelabTerm] @ "};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_DelabTermInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nLocation: "};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_DelabTermInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__3_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nDocstring: "};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__4 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__4_value;
static const lean_ctor_object l_Lean_Elab_DelabTermInfo_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__4_value)}};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__5 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__5_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nExplicit: "};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__6 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__6_value;
static const lean_ctor_object l_Lean_Elab_DelabTermInfo_format___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__6_value)}};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__7 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__7_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__8 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__8_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__9 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ChoiceInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[Choice] @ "};
static const lean_object* l_Lean_Elab_ChoiceInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_ChoiceInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ChoiceInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ChoiceInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_ChoiceInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_ChoiceInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ChoiceInfo_format(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ChoiceResolutionInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "[ChoiceResolution] alternative "};
static const lean_object* l_Lean_Elab_ChoiceResolutionInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ChoiceResolutionInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_ChoiceResolutionInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_ChoiceResolutionInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l_Lean_Elab_ChoiceResolutionInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_ChoiceResolutionInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_ChoiceResolutionInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__3_value;
static const lean_string_object l_Lean_Elab_ChoiceResolutionInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lean_Elab_ChoiceResolutionInfo_format___closed__4 = (const lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ChoiceResolutionInfo_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__4_value)}};
static const lean_object* l_Lean_Elab_ChoiceResolutionInfo_format___closed__5 = (const lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__5_value;
static const lean_string_object l_Lean_Elab_ChoiceResolutionInfo_format___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ") @ "};
static const lean_object* l_Lean_Elab_ChoiceResolutionInfo_format___closed__6 = (const lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ChoiceResolutionInfo_format___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__6_value)}};
static const lean_object* l_Lean_Elab_ChoiceResolutionInfo_format___closed__7 = (const lean_object*)&l_Lean_Elab_ChoiceResolutionInfo_format___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ChoiceResolutionInfo_format(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DocInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[Doc] "};
static const lean_object* l_Lean_Elab_DocInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_DocInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_DocInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DocInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_DocInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_DocInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DocInfo_format(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DocElabInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "[DocElab] "};
static const lean_object* l_Lean_Elab_DocElabInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_DocElabInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_DocElabInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_PartialContextInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_PartialContextInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_PartialContextInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "parent["};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__2_value;
static const lean_string_object l_Lean_Elab_PartialContextInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "autoImplicits["};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__3_value;
static const lean_string_object l_Lean_Elab_PartialContextInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__4 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_format(lean_object*);
static const lean_string_object l_Lean_Elab_InfoTree_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 25, .m_data = "• <context-not-available>"};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__0 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_InfoTree_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_InfoTree_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__1 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__1_value;
static const lean_string_object l_Lean_Elab_InfoTree_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__2 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_InfoTree_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_InfoTree_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__3 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__3_value;
static const lean_string_object l_Lean_Elab_InfoTree_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "• \?"};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__4 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__4_value;
static const lean_ctor_object l_Lean_Elab_InfoTree_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_InfoTree_format___closed__4_value)}};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__5 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getResetInfoTrees___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_getResetInfoTrees___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getResetInfoTrees___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_getResetInfoTrees___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__3 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__3_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstWithInfos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstWithInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalNameWithInfos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalNameWithInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_withInfoContext_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_withInfoContext_x27___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_withInfoContext_x27___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_withInfoContext_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqMVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableMVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.InfoTree.Main"};
static const lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Elab.assignInfoHoleId"};
static const lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 101, .m_capacity = 101, .m_length = 100, .m_data = "assertion violation: ( __do_lift._@.Lean.Elab.InfoTree.Main.2379084842._hygCtx._hyg.19.0 ).isNone\n  "};
static const lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_withEnableInfoTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_withEnableInfoTree___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_withEnableInfoTree___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_withEnableInfoTree___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__0(lean_object* v_____do__lift_1_, lean_object* v_____do__lift_2_, lean_object* v_____do__lift_3_, lean_object* v_____do__lift_4_, lean_object* v_____do__lift_5_, lean_object* v_toPure_6_, lean_object* v_____do__lift_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_8_ = lean_box(0);
v___x_9_ = l_Lean_instInhabitedFileMap_default;
v___x_10_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_10_, 0, v_____do__lift_1_);
lean_ctor_set(v___x_10_, 1, v___x_8_);
lean_ctor_set(v___x_10_, 2, v___x_9_);
lean_ctor_set(v___x_10_, 3, v_____do__lift_2_);
lean_ctor_set(v___x_10_, 4, v_____do__lift_3_);
lean_ctor_set(v___x_10_, 5, v_____do__lift_4_);
lean_ctor_set(v___x_10_, 6, v_____do__lift_5_);
lean_ctor_set(v___x_10_, 7, v_____do__lift_7_);
v___x_11_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__1(lean_object* v_inst_12_, lean_object* v_____do__lift_13_, lean_object* v_____do__lift_14_, lean_object* v_____do__lift_15_, lean_object* v_____do__lift_16_, lean_object* v_toPure_17_, lean_object* v_toBind_18_, lean_object* v_____do__lift_19_){
_start:
{
lean_object* v_getNGen_20_; lean_object* v___f_21_; lean_object* v___x_22_; 
v_getNGen_20_ = lean_ctor_get(v_inst_12_, 0);
lean_inc(v_getNGen_20_);
lean_dec_ref(v_inst_12_);
v___f_21_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__0), 7, 6);
lean_closure_set(v___f_21_, 0, v_____do__lift_13_);
lean_closure_set(v___f_21_, 1, v_____do__lift_14_);
lean_closure_set(v___f_21_, 2, v_____do__lift_15_);
lean_closure_set(v___f_21_, 3, v_____do__lift_16_);
lean_closure_set(v___f_21_, 4, v_____do__lift_19_);
lean_closure_set(v___f_21_, 5, v_toPure_17_);
v___x_22_ = lean_apply_4(v_toBind_18_, lean_box(0), lean_box(0), v_getNGen_20_, v___f_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__2(lean_object* v_inst_23_, lean_object* v_____do__lift_24_, lean_object* v_____do__lift_25_, lean_object* v_____do__lift_26_, lean_object* v_toPure_27_, lean_object* v_toBind_28_, lean_object* v_getOpenDecls_29_, lean_object* v_____do__lift_30_){
_start:
{
lean_object* v___f_31_; lean_object* v___x_32_; 
lean_inc(v_toBind_28_);
v___f_31_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__1), 8, 7);
lean_closure_set(v___f_31_, 0, v_inst_23_);
lean_closure_set(v___f_31_, 1, v_____do__lift_24_);
lean_closure_set(v___f_31_, 2, v_____do__lift_25_);
lean_closure_set(v___f_31_, 3, v_____do__lift_26_);
lean_closure_set(v___f_31_, 4, v_____do__lift_30_);
lean_closure_set(v___f_31_, 5, v_toPure_27_);
lean_closure_set(v___f_31_, 6, v_toBind_28_);
v___x_32_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v_getOpenDecls_29_, v___f_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__3(lean_object* v_inst_33_, lean_object* v_inst_34_, lean_object* v_____do__lift_35_, lean_object* v_____do__lift_36_, lean_object* v_toPure_37_, lean_object* v_toBind_38_, lean_object* v_____do__lift_39_){
_start:
{
lean_object* v_getCurrNamespace_40_; lean_object* v_getOpenDecls_41_; lean_object* v___f_42_; lean_object* v___x_43_; 
v_getCurrNamespace_40_ = lean_ctor_get(v_inst_33_, 0);
lean_inc(v_getCurrNamespace_40_);
v_getOpenDecls_41_ = lean_ctor_get(v_inst_33_, 1);
lean_inc(v_getOpenDecls_41_);
lean_dec_ref(v_inst_33_);
lean_inc(v_toBind_38_);
v___f_42_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__2), 8, 7);
lean_closure_set(v___f_42_, 0, v_inst_34_);
lean_closure_set(v___f_42_, 1, v_____do__lift_35_);
lean_closure_set(v___f_42_, 2, v_____do__lift_36_);
lean_closure_set(v___f_42_, 3, v_____do__lift_39_);
lean_closure_set(v___f_42_, 4, v_toPure_37_);
lean_closure_set(v___f_42_, 5, v_toBind_38_);
lean_closure_set(v___f_42_, 6, v_getOpenDecls_41_);
v___x_43_ = lean_apply_4(v_toBind_38_, lean_box(0), lean_box(0), v_getCurrNamespace_40_, v___f_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__4(lean_object* v_inst_44_, lean_object* v_inst_45_, lean_object* v_inst_46_, lean_object* v_____do__lift_47_, lean_object* v_toPure_48_, lean_object* v_toBind_49_, lean_object* v_____do__lift_50_){
_start:
{
lean_object* v_getOptions_51_; lean_object* v___f_52_; lean_object* v___x_53_; 
v_getOptions_51_ = lean_ctor_get(v_inst_44_, 0);
lean_inc(v_getOptions_51_);
lean_dec_ref(v_inst_44_);
lean_inc(v_toBind_49_);
v___f_52_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__3), 7, 6);
lean_closure_set(v___f_52_, 0, v_inst_45_);
lean_closure_set(v___f_52_, 1, v_inst_46_);
lean_closure_set(v___f_52_, 2, v_____do__lift_47_);
lean_closure_set(v___f_52_, 3, v_____do__lift_50_);
lean_closure_set(v___f_52_, 4, v_toPure_48_);
lean_closure_set(v___f_52_, 5, v_toBind_49_);
v___x_53_ = lean_apply_4(v_toBind_49_, lean_box(0), lean_box(0), v_getOptions_51_, v___f_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__5(lean_object* v_inst_54_, lean_object* v_inst_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_toPure_58_, lean_object* v_toBind_59_, lean_object* v_____do__lift_60_){
_start:
{
lean_object* v_getMCtx_61_; lean_object* v___f_62_; lean_object* v___x_63_; 
v_getMCtx_61_ = lean_ctor_get(v_inst_54_, 0);
lean_inc(v_getMCtx_61_);
lean_dec_ref(v_inst_54_);
lean_inc(v_toBind_59_);
v___f_62_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__4), 7, 6);
lean_closure_set(v___f_62_, 0, v_inst_55_);
lean_closure_set(v___f_62_, 1, v_inst_56_);
lean_closure_set(v___f_62_, 2, v_inst_57_);
lean_closure_set(v___f_62_, 3, v_____do__lift_60_);
lean_closure_set(v___f_62_, 4, v_toPure_58_);
lean_closure_set(v___f_62_, 5, v_toBind_59_);
v___x_63_ = lean_apply_4(v_toBind_59_, lean_box(0), lean_box(0), v_getMCtx_61_, v___f_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg(lean_object* v_inst_64_, lean_object* v_inst_65_, lean_object* v_inst_66_, lean_object* v_inst_67_, lean_object* v_inst_68_, lean_object* v_inst_69_){
_start:
{
lean_object* v_toApplicative_70_; lean_object* v_toBind_71_; lean_object* v_getEnv_72_; lean_object* v_toPure_73_; lean_object* v___f_74_; lean_object* v___x_75_; 
v_toApplicative_70_ = lean_ctor_get(v_inst_64_, 0);
lean_inc_ref(v_toApplicative_70_);
v_toBind_71_ = lean_ctor_get(v_inst_64_, 1);
lean_inc_n(v_toBind_71_, 2);
lean_dec_ref(v_inst_64_);
v_getEnv_72_ = lean_ctor_get(v_inst_65_, 0);
lean_inc(v_getEnv_72_);
lean_dec_ref(v_inst_65_);
v_toPure_73_ = lean_ctor_get(v_toApplicative_70_, 1);
lean_inc(v_toPure_73_);
lean_dec_ref(v_toApplicative_70_);
v___f_74_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__5), 7, 6);
lean_closure_set(v___f_74_, 0, v_inst_66_);
lean_closure_set(v___f_74_, 1, v_inst_67_);
lean_closure_set(v___f_74_, 2, v_inst_68_);
lean_closure_set(v___f_74_, 3, v_inst_69_);
lean_closure_set(v___f_74_, 4, v_toPure_73_);
lean_closure_set(v___f_74_, 5, v_toBind_71_);
v___x_75_ = lean_apply_4(v_toBind_71_, lean_box(0), lean_box(0), v_getEnv_72_, v___f_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap(lean_object* v_m_76_, lean_object* v_inst_77_, lean_object* v_inst_78_, lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_inst_81_, lean_object* v_inst_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg(v_inst_77_, v_inst_78_, v_inst_79_, v_inst_80_, v_inst_81_, v_inst_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg___lam__0(lean_object* v_ctx_84_, lean_object* v_toPure_85_, lean_object* v_____do__lift_86_){
_start:
{
lean_object* v_env_87_; lean_object* v_cmdEnv_x3f_88_; lean_object* v_mctx_89_; lean_object* v_options_90_; lean_object* v_currNamespace_91_; lean_object* v_openDecls_92_; lean_object* v_ngen_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
v_env_87_ = lean_ctor_get(v_ctx_84_, 0);
v_cmdEnv_x3f_88_ = lean_ctor_get(v_ctx_84_, 1);
v_mctx_89_ = lean_ctor_get(v_ctx_84_, 3);
v_options_90_ = lean_ctor_get(v_ctx_84_, 4);
v_currNamespace_91_ = lean_ctor_get(v_ctx_84_, 5);
v_openDecls_92_ = lean_ctor_get(v_ctx_84_, 6);
v_ngen_93_ = lean_ctor_get(v_ctx_84_, 7);
v_isSharedCheck_101_ = !lean_is_exclusive(v_ctx_84_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; 
v_unused_102_ = lean_ctor_get(v_ctx_84_, 2);
lean_dec(v_unused_102_);
v___x_95_ = v_ctx_84_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_ngen_93_);
lean_inc(v_openDecls_92_);
lean_inc(v_currNamespace_91_);
lean_inc(v_options_90_);
lean_inc(v_mctx_89_);
lean_inc(v_cmdEnv_x3f_88_);
lean_inc(v_env_87_);
lean_dec(v_ctx_84_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 2, v_____do__lift_86_);
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_env_87_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_cmdEnv_x3f_88_);
lean_ctor_set(v_reuseFailAlloc_100_, 2, v_____do__lift_86_);
lean_ctor_set(v_reuseFailAlloc_100_, 3, v_mctx_89_);
lean_ctor_set(v_reuseFailAlloc_100_, 4, v_options_90_);
lean_ctor_set(v_reuseFailAlloc_100_, 5, v_currNamespace_91_);
lean_ctor_set(v_reuseFailAlloc_100_, 6, v_openDecls_92_);
lean_ctor_set(v_reuseFailAlloc_100_, 7, v_ngen_93_);
v___x_98_ = v_reuseFailAlloc_100_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_apply_2(v_toPure_85_, lean_box(0), v___x_98_);
return v___x_99_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg___lam__1(lean_object* v_toPure_103_, lean_object* v_toBind_104_, lean_object* v_inst_105_, lean_object* v_ctx_106_){
_start:
{
lean_object* v___f_107_; lean_object* v___x_108_; 
v___f_107_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_save___redArg___lam__0), 3, 2);
lean_closure_set(v___f_107_, 0, v_ctx_106_);
lean_closure_set(v___f_107_, 1, v_toPure_103_);
v___x_108_ = lean_apply_4(v_toBind_104_, lean_box(0), lean_box(0), v_inst_105_, v___f_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg(lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_inst_115_){
_start:
{
lean_object* v_toApplicative_116_; lean_object* v_toBind_117_; lean_object* v_toPure_118_; lean_object* v___x_119_; lean_object* v___f_120_; lean_object* v___x_121_; 
v_toApplicative_116_ = lean_ctor_get(v_inst_109_, 0);
v_toBind_117_ = lean_ctor_get(v_inst_109_, 1);
lean_inc_n(v_toBind_117_, 2);
v_toPure_118_ = lean_ctor_get(v_toApplicative_116_, 1);
lean_inc(v_toPure_118_);
v___x_119_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg(v_inst_109_, v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_, v_inst_114_);
v___f_120_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_save___redArg___lam__1), 4, 3);
lean_closure_set(v___f_120_, 0, v_toPure_118_);
lean_closure_set(v___f_120_, 1, v_toBind_117_);
lean_closure_set(v___f_120_, 2, v_inst_115_);
v___x_121_ = lean_apply_4(v_toBind_117_, lean_box(0), lean_box(0), v___x_119_, v___f_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save(lean_object* v_m_122_, lean_object* v_inst_123_, lean_object* v_inst_124_, lean_object* v_inst_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_Elab_CommandContextInfo_save___redArg(v_inst_123_, v_inst_124_, v_inst_125_, v_inst_126_, v_inst_127_, v_inst_128_, v_inst_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CustomInfo_format(lean_object* v_x_137_){
_start:
{
lean_object* v_value_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_152_; 
v_value_138_ = lean_ctor_get(v_x_137_, 1);
v_isSharedCheck_152_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_152_ == 0)
{
lean_object* v_unused_153_; 
v_unused_153_ = lean_ctor_get(v_x_137_, 0);
lean_dec(v_unused_153_);
v___x_140_ = v_x_137_;
v_isShared_141_ = v_isSharedCheck_152_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_value_138_);
lean_dec(v_x_137_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_152_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_142_ = ((lean_object*)(l_Lean_Elab_CustomInfo_format___closed__1));
v___x_143_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_value_138_);
lean_dec(v_value_138_);
v___x_144_ = 1;
v___x_145_ = l_Lean_Name_toString(v___x_143_, v___x_144_);
v___x_146_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
if (v_isShared_141_ == 0)
{
lean_ctor_set_tag(v___x_140_, 5);
lean_ctor_set(v___x_140_, 1, v___x_146_);
lean_ctor_set(v___x_140_, 0, v___x_142_);
v___x_148_ = v___x_140_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_142_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v___x_146_);
v___x_148_ = v_reuseFailAlloc_151_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(l_Lean_Elab_CustomInfo_format___closed__3));
v___x_150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(lean_object* v_opts_156_, lean_object* v_opt_157_){
_start:
{
lean_object* v_name_158_; lean_object* v_defValue_159_; lean_object* v_map_160_; lean_object* v___x_161_; 
v_name_158_ = lean_ctor_get(v_opt_157_, 0);
v_defValue_159_ = lean_ctor_get(v_opt_157_, 1);
v_map_160_ = lean_ctor_get(v_opts_156_, 0);
v___x_161_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_160_, v_name_158_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_inc(v_defValue_159_);
return v_defValue_159_;
}
else
{
lean_object* v_val_162_; 
v_val_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_val_162_);
lean_dec_ref_known(v___x_161_, 1);
if (lean_obj_tag(v_val_162_) == 3)
{
lean_object* v_v_163_; 
v_v_163_ = lean_ctor_get(v_val_162_, 0);
lean_inc(v_v_163_);
lean_dec_ref_known(v_val_162_, 1);
return v_v_163_;
}
else
{
lean_dec(v_val_162_);
lean_inc(v_defValue_159_);
return v_defValue_159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0___boxed(lean_object* v_opts_164_, lean_object* v_opt_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(v_opts_164_, v_opt_165_);
lean_dec_ref(v_opt_165_);
lean_dec_ref(v_opts_164_);
return v_res_166_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = l_Lean_Options_empty;
v___x_169_ = l_Lean_Core_getMaxHeartbeats(v___x_168_);
return v___x_169_;
}
}
static uint16_t _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2(void){
_start:
{
lean_object* v___x_170_; uint16_t v___x_171_; 
v___x_170_ = l_Lean_Options_empty;
v___x_171_ = l_Lean_OptionFlags_ofOptions(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = l_Lean_firstFrontendMacroScope;
v___x_174_ = lean_nat_add(v___x_173_, v___x_172_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_unsigned_to_nat(32u);
v___x_180_ = lean_mk_empty_array_with_capacity(v___x_179_);
v___x_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6(void){
_start:
{
size_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_182_ = ((size_t)5ULL);
v___x_183_ = lean_unsigned_to_nat(0u);
v___x_184_ = lean_unsigned_to_nat(32u);
v___x_185_ = lean_mk_empty_array_with_capacity(v___x_184_);
v___x_186_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5);
v___x_187_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v___x_185_);
lean_ctor_set(v___x_187_, 2, v___x_183_);
lean_ctor_set(v___x_187_, 3, v___x_183_);
lean_ctor_set_usize(v___x_187_, 4, v___x_182_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7(void){
_start:
{
lean_object* v___x_188_; uint64_t v___x_189_; lean_object* v___x_190_; 
v___x_188_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6);
v___x_189_ = 0ULL;
v___x_190_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_190_, 0, v___x_188_);
lean_ctor_set_uint64(v___x_190_, sizeof(void*)*1, v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8(void){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_191_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9);
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_198_ = lean_unsigned_to_nat(0u);
v___x_199_ = l_Lean_Options_empty;
v___x_200_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11));
v___x_201_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v___x_199_);
lean_ctor_set(v___x_201_, 2, v___x_200_);
lean_ctor_set(v___x_201_, 3, v___x_198_);
lean_ctor_set(v___x_201_, 4, v___x_198_);
lean_ctor_set(v___x_201_, 5, v___x_198_);
lean_ctor_set(v___x_201_, 6, v___x_200_);
lean_ctor_set(v___x_201_, 7, v___x_200_);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_202_ = l_Lean_NameSet_empty;
v___x_203_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6);
v___x_204_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
lean_ctor_set(v___x_204_, 2, v___x_202_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___x_208_; 
v___x_205_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6);
v___x_206_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9);
v___x_207_ = 1;
v___x_208_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set(v___x_208_, 1, v___x_206_);
lean_ctor_set(v___x_208_, 2, v___x_205_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*3, v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = l_Lean_maxRecDepth;
v___x_213_ = l_Lean_Options_empty;
v___x_214_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(v___x_213_, v___x_212_);
return v___x_214_;
}
}
static uint16_t _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__19(void){
_start:
{
uint16_t v___x_215_; uint16_t v___x_216_; uint16_t v___x_217_; 
v___x_215_ = 512;
v___x_216_ = lean_uint16_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2);
v___x_217_ = lean_uint16_land(v___x_216_, v___x_215_);
return v___x_217_;
}
}
static uint8_t _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20(void){
_start:
{
uint16_t v___x_218_; uint16_t v___x_219_; uint8_t v___x_220_; 
v___x_218_ = 0;
v___x_219_ = lean_uint16_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__19, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__19_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__19);
v___x_220_ = lean_uint16_dec_eq(v___x_219_, v___x_218_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg(lean_object* v_info_221_, lean_object* v_x_222_){
_start:
{
lean_object* v_a_225_; lean_object* v_toCommandContextInfo_228_; lean_object* v_env_229_; lean_object* v_options_230_; lean_object* v_currNamespace_231_; lean_object* v_openDecls_232_; lean_object* v_ngen_233_; uint8_t v___x_234_; lean_object* v_env_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; uint16_t v___x_245_; uint8_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___y_260_; lean_object* v___y_261_; uint16_t v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_331_; lean_object* v___y_332_; lean_object* v_nextMacroScope_333_; lean_object* v_ngen_334_; lean_object* v_auxDeclNGen_335_; lean_object* v_traceState_336_; lean_object* v_recordedDeps_337_; lean_object* v_messages_338_; lean_object* v_infoState_339_; lean_object* v_snapshotTasks_340_; lean_object* v___y_341_; lean_object* v___y_342_; uint16_t v___y_343_; lean_object* v___y_344_; lean_object* v___y_348_; lean_object* v___y_349_; lean_object* v___y_350_; lean_object* v___y_351_; uint16_t v___y_352_; uint8_t v___y_353_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___y_374_; lean_object* v_fileName_384_; lean_object* v_fileMap_385_; lean_object* v_currNamespace_386_; lean_object* v_openDecls_387_; lean_object* v_initHeartbeats_388_; lean_object* v_maxHeartbeats_389_; lean_object* v_quotContext_390_; lean_object* v_currMacroScope_391_; lean_object* v_cancelTk_x3f_392_; lean_object* v_inheritedTraceOptions_393_; lean_object* v_currRecDepth_394_; lean_object* v_ref_395_; uint8_t v_suppressElabErrors_396_; uint8_t v_checkDeprecated_397_; uint8_t v_isRecordingDeps_398_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v_nextMacroScope_406_; lean_object* v_ngen_407_; lean_object* v_auxDeclNGen_408_; lean_object* v_traceState_409_; lean_object* v_recordedDeps_410_; lean_object* v_messages_411_; lean_object* v_infoState_412_; lean_object* v_snapshotTasks_413_; lean_object* v___y_414_; lean_object* v___x_417_; uint8_t v___y_419_; lean_object* v_env_433_; uint8_t v___x_434_; uint8_t v___x_435_; 
v_toCommandContextInfo_228_ = lean_ctor_get(v_info_221_, 0);
lean_inc_ref(v_toCommandContextInfo_228_);
lean_dec_ref(v_info_221_);
v_env_229_ = lean_ctor_get(v_toCommandContextInfo_228_, 0);
lean_inc_ref(v_env_229_);
v_options_230_ = lean_ctor_get(v_toCommandContextInfo_228_, 4);
lean_inc_ref(v_options_230_);
v_currNamespace_231_ = lean_ctor_get(v_toCommandContextInfo_228_, 5);
lean_inc(v_currNamespace_231_);
v_openDecls_232_ = lean_ctor_get(v_toCommandContextInfo_228_, 6);
lean_inc(v_openDecls_232_);
v_ngen_233_ = lean_ctor_get(v_toCommandContextInfo_228_, 7);
lean_inc_ref(v_ngen_233_);
lean_dec_ref(v_toCommandContextInfo_228_);
v___x_234_ = 0;
v_env_235_ = l_Lean_Environment_setExporting(v_env_229_, v___x_234_);
v___x_236_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__0));
v___x_237_ = l_Lean_instInhabitedFileMap_default;
v___x_238_ = l_Lean_Options_empty;
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1);
v___x_241_ = lean_box(0);
v___x_242_ = l_Lean_firstFrontendMacroScope;
v___x_243_ = lean_box(0);
v___x_244_ = lean_box(0);
v___x_245_ = lean_uint16_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2);
v___x_246_ = 0;
v___x_247_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3);
v___x_248_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4));
v___x_249_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7);
v___x_250_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10);
v___x_251_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11));
v___x_252_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12);
v___x_253_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13);
v___x_254_ = 1;
v___x_255_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14);
v___x_256_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_256_, 0, v_env_235_);
lean_ctor_set(v___x_256_, 1, v___x_247_);
lean_ctor_set(v___x_256_, 2, v_ngen_233_);
lean_ctor_set(v___x_256_, 3, v___x_248_);
lean_ctor_set(v___x_256_, 4, v___x_249_);
lean_ctor_set(v___x_256_, 5, v___x_250_);
lean_ctor_set(v___x_256_, 6, v___x_252_);
lean_ctor_set(v___x_256_, 7, v___x_253_);
lean_ctor_set(v___x_256_, 8, v___x_255_);
lean_ctor_set(v___x_256_, 9, v___x_251_);
v___x_257_ = lean_io_get_num_heartbeats();
v___x_258_ = lean_st_mk_ref(v___x_256_);
v___x_403_ = l_Lean_inheritedTraceOptions;
v___x_404_ = lean_st_ref_get(v___x_403_);
v___x_417_ = lean_st_ref_get(v___x_258_);
v_env_433_ = lean_ctor_get(v___x_417_, 0);
lean_inc_ref(v_env_433_);
lean_dec(v___x_417_);
v___x_434_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_433_);
lean_dec_ref(v_env_433_);
v___x_435_ = lean_uint8_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20);
if (v___x_435_ == 0)
{
if (v___x_434_ == 0)
{
v___y_419_ = v___x_434_;
goto v___jp_418_;
}
else
{
v_fileName_384_ = v___x_236_;
v_fileMap_385_ = v___x_237_;
v_currNamespace_386_ = v_currNamespace_231_;
v_openDecls_387_ = v_openDecls_232_;
v_initHeartbeats_388_ = v___x_257_;
v_maxHeartbeats_389_ = v___x_240_;
v_quotContext_390_ = v___x_241_;
v_currMacroScope_391_ = v___x_242_;
v_cancelTk_x3f_392_ = v___x_243_;
v_inheritedTraceOptions_393_ = v___x_404_;
v_currRecDepth_394_ = v___x_239_;
v_ref_395_ = v___x_244_;
v_suppressElabErrors_396_ = v___x_234_;
v_checkDeprecated_397_ = v___x_246_;
v_isRecordingDeps_398_ = v___x_234_;
goto v___jp_383_;
}
}
else
{
if (v___x_434_ == 0)
{
v_fileName_384_ = v___x_236_;
v_fileMap_385_ = v___x_237_;
v_currNamespace_386_ = v_currNamespace_231_;
v_openDecls_387_ = v_openDecls_232_;
v_initHeartbeats_388_ = v___x_257_;
v_maxHeartbeats_389_ = v___x_240_;
v_quotContext_390_ = v___x_241_;
v_currMacroScope_391_ = v___x_242_;
v_cancelTk_x3f_392_ = v___x_243_;
v_inheritedTraceOptions_393_ = v___x_404_;
v_currRecDepth_394_ = v___x_239_;
v_ref_395_ = v___x_244_;
v_suppressElabErrors_396_ = v___x_234_;
v_checkDeprecated_397_ = v___x_246_;
v_isRecordingDeps_398_ = v___x_234_;
goto v___jp_383_;
}
else
{
v___y_419_ = v___x_234_;
goto v___jp_418_;
}
}
v___jp_224_:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_mk_io_user_error(v_a_225_);
v___x_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
v___jp_259_:
{
lean_object* v_toCold_265_; lean_object* v_currRecDepth_266_; lean_object* v_ref_267_; uint8_t v_suppressElabErrors_268_; uint8_t v_checkDeprecated_269_; uint8_t v_isRecordingDeps_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_329_; 
v_toCold_265_ = lean_ctor_get(v___y_263_, 0);
v_currRecDepth_266_ = lean_ctor_get(v___y_263_, 1);
v_ref_267_ = lean_ctor_get(v___y_263_, 2);
v_suppressElabErrors_268_ = lean_ctor_get_uint8(v___y_263_, sizeof(void*)*3 + 2);
v_checkDeprecated_269_ = lean_ctor_get_uint8(v___y_263_, sizeof(void*)*3 + 3);
v_isRecordingDeps_270_ = lean_ctor_get_uint8(v___y_263_, sizeof(void*)*3 + 4);
v_isSharedCheck_329_ = !lean_is_exclusive(v___y_263_);
if (v_isSharedCheck_329_ == 0)
{
v___x_272_ = v___y_263_;
v_isShared_273_ = v_isSharedCheck_329_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_ref_267_);
lean_inc(v_currRecDepth_266_);
lean_inc(v_toCold_265_);
lean_dec(v___y_263_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_329_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v_fileName_274_; lean_object* v_fileMap_275_; lean_object* v_currNamespace_276_; lean_object* v_openDecls_277_; lean_object* v_initHeartbeats_278_; lean_object* v_maxHeartbeats_279_; lean_object* v_quotContext_280_; lean_object* v_currMacroScope_281_; lean_object* v_cancelTk_x3f_282_; lean_object* v_inheritedTraceOptions_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_326_; 
v_fileName_274_ = lean_ctor_get(v_toCold_265_, 0);
v_fileMap_275_ = lean_ctor_get(v_toCold_265_, 1);
v_currNamespace_276_ = lean_ctor_get(v_toCold_265_, 4);
v_openDecls_277_ = lean_ctor_get(v_toCold_265_, 5);
v_initHeartbeats_278_ = lean_ctor_get(v_toCold_265_, 6);
v_maxHeartbeats_279_ = lean_ctor_get(v_toCold_265_, 7);
v_quotContext_280_ = lean_ctor_get(v_toCold_265_, 8);
v_currMacroScope_281_ = lean_ctor_get(v_toCold_265_, 9);
v_cancelTk_x3f_282_ = lean_ctor_get(v_toCold_265_, 10);
v_inheritedTraceOptions_283_ = lean_ctor_get(v_toCold_265_, 11);
v_isSharedCheck_326_ = !lean_is_exclusive(v_toCold_265_);
if (v_isSharedCheck_326_ == 0)
{
lean_object* v_unused_327_; lean_object* v_unused_328_; 
v_unused_327_ = lean_ctor_get(v_toCold_265_, 3);
lean_dec(v_unused_327_);
v_unused_328_ = lean_ctor_get(v_toCold_265_, 2);
lean_dec(v_unused_328_);
v___x_285_ = v_toCold_265_;
v_isShared_286_ = v_isSharedCheck_326_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_inheritedTraceOptions_283_);
lean_inc(v_cancelTk_x3f_282_);
lean_inc(v_currMacroScope_281_);
lean_inc(v_quotContext_280_);
lean_inc(v_maxHeartbeats_279_);
lean_inc(v_initHeartbeats_278_);
lean_inc(v_openDecls_277_);
lean_inc(v_currNamespace_276_);
lean_inc(v_fileMap_275_);
lean_inc(v_fileName_274_);
lean_dec(v_toCold_265_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_326_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_287_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(v___y_260_, v___y_261_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 3, v___x_287_);
lean_ctor_set(v___x_285_, 2, v___y_260_);
v___x_289_ = v___x_285_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_fileName_274_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_fileMap_275_);
lean_ctor_set(v_reuseFailAlloc_325_, 2, v___y_260_);
lean_ctor_set(v_reuseFailAlloc_325_, 3, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_325_, 4, v_currNamespace_276_);
lean_ctor_set(v_reuseFailAlloc_325_, 5, v_openDecls_277_);
lean_ctor_set(v_reuseFailAlloc_325_, 6, v_initHeartbeats_278_);
lean_ctor_set(v_reuseFailAlloc_325_, 7, v_maxHeartbeats_279_);
lean_ctor_set(v_reuseFailAlloc_325_, 8, v_quotContext_280_);
lean_ctor_set(v_reuseFailAlloc_325_, 9, v_currMacroScope_281_);
lean_ctor_set(v_reuseFailAlloc_325_, 10, v_cancelTk_x3f_282_);
lean_ctor_set(v_reuseFailAlloc_325_, 11, v_inheritedTraceOptions_283_);
v___x_289_ = v_reuseFailAlloc_325_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_291_; 
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_289_);
v___x_291_ = v___x_272_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_currRecDepth_266_);
lean_ctor_set(v_reuseFailAlloc_324_, 2, v_ref_267_);
lean_ctor_set_uint8(v_reuseFailAlloc_324_, sizeof(void*)*3 + 2, v_suppressElabErrors_268_);
lean_ctor_set_uint8(v_reuseFailAlloc_324_, sizeof(void*)*3 + 3, v_checkDeprecated_269_);
lean_ctor_set_uint8(v_reuseFailAlloc_324_, sizeof(void*)*3 + 4, v_isRecordingDeps_270_);
v___x_291_ = v_reuseFailAlloc_324_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
lean_object* v___x_292_; 
lean_ctor_set_uint16(v___x_291_, sizeof(void*)*3, v___y_262_);
v___x_292_ = lean_apply_3(v_x_222_, v___x_291_, v___y_264_, lean_box(0));
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_301_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_301_ == 0)
{
v___x_295_ = v___x_292_;
v_isShared_296_ = v_isSharedCheck_301_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_292_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_301_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_297_ = lean_st_ref_get(v___x_258_);
lean_dec(v___x_258_);
lean_dec(v___x_297_);
if (v_isShared_296_ == 0)
{
v___x_299_ = v___x_295_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_293_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_323_; 
lean_dec(v___x_258_);
v_a_302_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_323_ == 0)
{
v___x_304_ = v___x_292_;
v_isShared_305_ = v_isSharedCheck_323_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_292_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_323_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
if (lean_obj_tag(v_a_302_) == 0)
{
lean_object* v_msg_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_310_; 
v_msg_306_ = lean_ctor_get(v_a_302_, 1);
lean_inc_ref(v_msg_306_);
lean_dec_ref_known(v_a_302_, 2);
v___x_307_ = l_Lean_MessageData_toString(v_msg_306_);
v___x_308_ = lean_mk_io_user_error(v___x_307_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 0, v___x_308_);
v___x_310_ = v___x_304_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
else
{
lean_object* v_id_312_; lean_object* v___x_313_; 
lean_del_object(v___x_304_);
v_id_312_ = lean_ctor_get(v_a_302_, 0);
lean_inc(v_id_312_);
lean_dec_ref_known(v_a_302_, 2);
v___x_313_ = l_Lean_InternalExceptionId_getName(v_id_312_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
lean_dec(v_id_312_);
v_a_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_314_);
lean_dec_ref_known(v___x_313_, 1);
v___x_315_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__15));
v___x_316_ = l_Lean_Name_toString(v_a_314_, v___x_254_);
v___x_317_ = lean_string_append(v___x_315_, v___x_316_);
lean_dec_ref(v___x_316_);
v_a_225_ = v___x_317_;
goto v___jp_224_;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
lean_dec_ref_known(v___x_313_, 1);
v___x_318_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__16));
v___x_319_ = l_Nat_reprFast(v_id_312_);
v___x_320_ = lean_string_append(v___x_318_, v___x_319_);
lean_dec_ref(v___x_319_);
v___x_321_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17));
v___x_322_ = lean_string_append(v___x_320_, v___x_321_);
v_a_225_ = v___x_322_;
goto v___jp_224_;
}
}
}
}
}
}
}
}
}
v___jp_330_:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_345_, 0, v___y_344_);
lean_ctor_set(v___x_345_, 1, v_nextMacroScope_333_);
lean_ctor_set(v___x_345_, 2, v_ngen_334_);
lean_ctor_set(v___x_345_, 3, v_auxDeclNGen_335_);
lean_ctor_set(v___x_345_, 4, v_traceState_336_);
lean_ctor_set(v___x_345_, 5, v___x_250_);
lean_ctor_set(v___x_345_, 6, v_recordedDeps_337_);
lean_ctor_set(v___x_345_, 7, v_messages_338_);
lean_ctor_set(v___x_345_, 8, v_infoState_339_);
lean_ctor_set(v___x_345_, 9, v_snapshotTasks_340_);
v___x_346_ = lean_st_ref_put(v___y_332_, v___x_345_);
v___y_260_ = v___y_341_;
v___y_261_ = v___y_342_;
v___y_262_ = v___y_343_;
v___y_263_ = v___y_331_;
v___y_264_ = v___y_332_;
goto v___jp_259_;
}
v___jp_347_:
{
lean_object* v___x_354_; lean_object* v_env_355_; lean_object* v_nextMacroScope_356_; lean_object* v_ngen_357_; lean_object* v_auxDeclNGen_358_; lean_object* v_traceState_359_; lean_object* v_recordedDeps_360_; lean_object* v_messages_361_; lean_object* v_infoState_362_; lean_object* v_snapshotTasks_363_; uint16_t v___x_364_; uint16_t v___x_365_; uint16_t v___x_366_; uint8_t v___x_367_; 
v___x_354_ = lean_st_ref_take(v___y_349_);
v_env_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc_ref(v_env_355_);
v_nextMacroScope_356_ = lean_ctor_get(v___x_354_, 1);
lean_inc(v_nextMacroScope_356_);
v_ngen_357_ = lean_ctor_get(v___x_354_, 2);
lean_inc_ref(v_ngen_357_);
v_auxDeclNGen_358_ = lean_ctor_get(v___x_354_, 3);
lean_inc_ref(v_auxDeclNGen_358_);
v_traceState_359_ = lean_ctor_get(v___x_354_, 4);
lean_inc_ref(v_traceState_359_);
v_recordedDeps_360_ = lean_ctor_get(v___x_354_, 6);
lean_inc_ref(v_recordedDeps_360_);
v_messages_361_ = lean_ctor_get(v___x_354_, 7);
lean_inc_ref(v_messages_361_);
v_infoState_362_ = lean_ctor_get(v___x_354_, 8);
lean_inc_ref(v_infoState_362_);
v_snapshotTasks_363_ = lean_ctor_get(v___x_354_, 9);
lean_inc_ref(v_snapshotTasks_363_);
lean_dec(v___x_354_);
v___x_364_ = 512;
v___x_365_ = lean_uint16_land(v___y_352_, v___x_364_);
v___x_366_ = 0;
v___x_367_ = lean_uint16_dec_eq(v___x_365_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
v___x_368_ = l_Lean_Kernel_enableDiag(v_env_355_, v___x_254_);
v___y_331_ = v___y_348_;
v___y_332_ = v___y_349_;
v_nextMacroScope_333_ = v_nextMacroScope_356_;
v_ngen_334_ = v_ngen_357_;
v_auxDeclNGen_335_ = v_auxDeclNGen_358_;
v_traceState_336_ = v_traceState_359_;
v_recordedDeps_337_ = v_recordedDeps_360_;
v_messages_338_ = v_messages_361_;
v_infoState_339_ = v_infoState_362_;
v_snapshotTasks_340_ = v_snapshotTasks_363_;
v___y_341_ = v___y_350_;
v___y_342_ = v___y_351_;
v___y_343_ = v___y_352_;
v___y_344_ = v___x_368_;
goto v___jp_330_;
}
else
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_Kernel_enableDiag(v_env_355_, v___y_353_);
v___y_331_ = v___y_348_;
v___y_332_ = v___y_349_;
v_nextMacroScope_333_ = v_nextMacroScope_356_;
v_ngen_334_ = v_ngen_357_;
v_auxDeclNGen_335_ = v_auxDeclNGen_358_;
v_traceState_336_ = v_traceState_359_;
v_recordedDeps_337_ = v_recordedDeps_360_;
v_messages_338_ = v_messages_361_;
v_infoState_339_ = v_infoState_362_;
v_snapshotTasks_340_ = v_snapshotTasks_363_;
v___y_341_ = v___y_350_;
v___y_342_ = v___y_351_;
v___y_343_ = v___y_352_;
v___y_344_ = v___x_369_;
goto v___jp_330_;
}
}
v___jp_370_:
{
uint16_t v___x_375_; lean_object* v___x_376_; lean_object* v_env_377_; uint8_t v___x_378_; uint16_t v___x_379_; uint16_t v___x_380_; uint16_t v___x_381_; uint8_t v___x_382_; 
v___x_375_ = l_Lean_OptionFlags_ofOptions(v___y_374_);
v___x_376_ = lean_st_ref_get(v___y_372_);
v_env_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc_ref(v_env_377_);
lean_dec(v___x_376_);
v___x_378_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_377_);
lean_dec_ref(v_env_377_);
v___x_379_ = 512;
v___x_380_ = lean_uint16_land(v___x_375_, v___x_379_);
v___x_381_ = 0;
v___x_382_ = lean_uint16_dec_eq(v___x_380_, v___x_381_);
if (v___x_382_ == 0)
{
if (v___x_378_ == 0)
{
v___y_348_ = v___y_371_;
v___y_349_ = v___y_372_;
v___y_350_ = v___y_374_;
v___y_351_ = v___y_373_;
v___y_352_ = v___x_375_;
v___y_353_ = v___x_378_;
goto v___jp_347_;
}
else
{
v___y_260_ = v___y_374_;
v___y_261_ = v___y_373_;
v___y_262_ = v___x_375_;
v___y_263_ = v___y_371_;
v___y_264_ = v___y_372_;
goto v___jp_259_;
}
}
else
{
if (v___x_378_ == 0)
{
v___y_260_ = v___y_374_;
v___y_261_ = v___y_373_;
v___y_262_ = v___x_375_;
v___y_263_ = v___y_371_;
v___y_264_ = v___y_372_;
goto v___jp_259_;
}
else
{
v___y_348_ = v___y_371_;
v___y_349_ = v___y_372_;
v___y_350_ = v___y_374_;
v___y_351_ = v___y_373_;
v___y_352_ = v___x_375_;
v___y_353_ = v___x_234_;
goto v___jp_347_;
}
}
}
v___jp_383_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_399_ = l_Lean_maxRecDepth;
v___x_400_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18);
lean_inc(v_cancelTk_x3f_392_);
lean_inc(v_currMacroScope_391_);
lean_inc(v_quotContext_390_);
lean_inc(v_maxHeartbeats_389_);
lean_inc_ref(v_fileMap_385_);
lean_inc_ref(v_fileName_384_);
v___x_401_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_401_, 0, v_fileName_384_);
lean_ctor_set(v___x_401_, 1, v_fileMap_385_);
lean_ctor_set(v___x_401_, 2, v___x_238_);
lean_ctor_set(v___x_401_, 3, v___x_400_);
lean_ctor_set(v___x_401_, 4, v_currNamespace_386_);
lean_ctor_set(v___x_401_, 5, v_openDecls_387_);
lean_ctor_set(v___x_401_, 6, v_initHeartbeats_388_);
lean_ctor_set(v___x_401_, 7, v_maxHeartbeats_389_);
lean_ctor_set(v___x_401_, 8, v_quotContext_390_);
lean_ctor_set(v___x_401_, 9, v_currMacroScope_391_);
lean_ctor_set(v___x_401_, 10, v_cancelTk_x3f_392_);
lean_ctor_set(v___x_401_, 11, v_inheritedTraceOptions_393_);
lean_inc(v_ref_395_);
v___x_402_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v_currRecDepth_394_);
lean_ctor_set(v___x_402_, 2, v_ref_395_);
lean_ctor_set_uint16(v___x_402_, sizeof(void*)*3, v___x_245_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*3 + 2, v_suppressElabErrors_396_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*3 + 3, v_checkDeprecated_397_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*3 + 4, v_isRecordingDeps_398_);
lean_inc(v___x_258_);
v___y_371_ = v___x_402_;
v___y_372_ = v___x_258_;
v___y_373_ = v___x_399_;
v___y_374_ = v_options_230_;
goto v___jp_370_;
}
v___jp_405_:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_415_, 0, v___y_414_);
lean_ctor_set(v___x_415_, 1, v_nextMacroScope_406_);
lean_ctor_set(v___x_415_, 2, v_ngen_407_);
lean_ctor_set(v___x_415_, 3, v_auxDeclNGen_408_);
lean_ctor_set(v___x_415_, 4, v_traceState_409_);
lean_ctor_set(v___x_415_, 5, v___x_250_);
lean_ctor_set(v___x_415_, 6, v_recordedDeps_410_);
lean_ctor_set(v___x_415_, 7, v_messages_411_);
lean_ctor_set(v___x_415_, 8, v_infoState_412_);
lean_ctor_set(v___x_415_, 9, v_snapshotTasks_413_);
v___x_416_ = lean_st_ref_put(v___x_258_, v___x_415_);
v_fileName_384_ = v___x_236_;
v_fileMap_385_ = v___x_237_;
v_currNamespace_386_ = v_currNamespace_231_;
v_openDecls_387_ = v_openDecls_232_;
v_initHeartbeats_388_ = v___x_257_;
v_maxHeartbeats_389_ = v___x_240_;
v_quotContext_390_ = v___x_241_;
v_currMacroScope_391_ = v___x_242_;
v_cancelTk_x3f_392_ = v___x_243_;
v_inheritedTraceOptions_393_ = v___x_404_;
v_currRecDepth_394_ = v___x_239_;
v_ref_395_ = v___x_244_;
v_suppressElabErrors_396_ = v___x_234_;
v_checkDeprecated_397_ = v___x_246_;
v_isRecordingDeps_398_ = v___x_234_;
goto v___jp_383_;
}
v___jp_418_:
{
lean_object* v___x_420_; lean_object* v_env_421_; lean_object* v_nextMacroScope_422_; lean_object* v_ngen_423_; lean_object* v_auxDeclNGen_424_; lean_object* v_traceState_425_; lean_object* v_recordedDeps_426_; lean_object* v_messages_427_; lean_object* v_infoState_428_; lean_object* v_snapshotTasks_429_; uint8_t v___x_430_; 
v___x_420_ = lean_st_ref_take(v___x_258_);
v_env_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc_ref(v_env_421_);
v_nextMacroScope_422_ = lean_ctor_get(v___x_420_, 1);
lean_inc(v_nextMacroScope_422_);
v_ngen_423_ = lean_ctor_get(v___x_420_, 2);
lean_inc_ref(v_ngen_423_);
v_auxDeclNGen_424_ = lean_ctor_get(v___x_420_, 3);
lean_inc_ref(v_auxDeclNGen_424_);
v_traceState_425_ = lean_ctor_get(v___x_420_, 4);
lean_inc_ref(v_traceState_425_);
v_recordedDeps_426_ = lean_ctor_get(v___x_420_, 6);
lean_inc_ref(v_recordedDeps_426_);
v_messages_427_ = lean_ctor_get(v___x_420_, 7);
lean_inc_ref(v_messages_427_);
v_infoState_428_ = lean_ctor_get(v___x_420_, 8);
lean_inc_ref(v_infoState_428_);
v_snapshotTasks_429_ = lean_ctor_get(v___x_420_, 9);
lean_inc_ref(v_snapshotTasks_429_);
lean_dec(v___x_420_);
v___x_430_ = lean_uint8_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__20);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
v___x_431_ = l_Lean_Kernel_enableDiag(v_env_421_, v___x_254_);
v_nextMacroScope_406_ = v_nextMacroScope_422_;
v_ngen_407_ = v_ngen_423_;
v_auxDeclNGen_408_ = v_auxDeclNGen_424_;
v_traceState_409_ = v_traceState_425_;
v_recordedDeps_410_ = v_recordedDeps_426_;
v_messages_411_ = v_messages_427_;
v_infoState_412_ = v_infoState_428_;
v_snapshotTasks_413_ = v_snapshotTasks_429_;
v___y_414_ = v___x_431_;
goto v___jp_405_;
}
else
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_Kernel_enableDiag(v_env_421_, v___y_419_);
v_nextMacroScope_406_ = v_nextMacroScope_422_;
v_ngen_407_ = v_ngen_423_;
v_auxDeclNGen_408_ = v_auxDeclNGen_424_;
v_traceState_409_ = v_traceState_425_;
v_recordedDeps_410_ = v_recordedDeps_426_;
v_messages_411_ = v_messages_427_;
v_infoState_412_ = v_infoState_428_;
v_snapshotTasks_413_ = v_snapshotTasks_429_;
v___y_414_ = v___x_432_;
goto v___jp_405_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___boxed(lean_object* v_info_436_, lean_object* v_x_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_Elab_ContextInfo_runCoreM___redArg(v_info_436_, v_x_437_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM(lean_object* v_00_u03b1_440_, lean_object* v_info_441_, lean_object* v_x_442_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_Elab_ContextInfo_runCoreM___redArg(v_info_441_, v_x_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___boxed(lean_object* v_00_u03b1_445_, lean_object* v_info_446_, lean_object* v_x_447_, lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_Elab_ContextInfo_runCoreM(v_00_u03b1_445_, v_info_446_, v_x_447_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0(lean_object* v___x_450_, lean_object* v_x_451_, lean_object* v___x_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_st_mk_ref(v___x_450_);
lean_inc(v___x_456_);
v___x_457_ = lean_apply_5(v_x_451_, v___x_452_, v___x_456_, v___y_453_, v___y_454_, lean_box(0));
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_467_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_467_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_467_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_467_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_462_ = lean_st_ref_get(v___x_456_);
lean_dec(v___x_456_);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v_a_458_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_463_);
v___x_465_ = v___x_460_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_463_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
lean_dec(v___x_456_);
v_a_468_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_457_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_457_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0___boxed(lean_object* v___x_476_, lean_object* v_x_477_, lean_object* v___x_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0(v___x_476_, v_x_477_, v___x_478_, v___y_479_, v___y_480_);
return v_res_482_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg___closed__0);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg___boxed(lean_object* v___dummy_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg();
return v_res_488_;
}
}
static uint64_t _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1(void){
_start:
{
lean_object* v___x_495_; uint64_t v___x_496_; 
v___x_495_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0));
v___x_496_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_495_);
return v___x_496_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2(void){
_start:
{
uint64_t v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_497_ = lean_uint64_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1);
v___x_498_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0));
v___x_499_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_499_, 0, v___x_498_);
lean_ctor_set_uint64(v___x_499_, sizeof(void*)*1, v___x_497_);
return v___x_499_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0___redArg();
return v___x_502_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
return v___x_506_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5);
v___x_509_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
lean_ctor_set(v___x_509_, 2, v___x_507_);
return v___x_509_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_510_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7);
v___x_511_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6);
v___x_512_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5);
v___x_513_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4);
v___x_514_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
lean_ctor_set(v___x_514_, 1, v___x_512_);
lean_ctor_set(v___x_514_, 2, v___x_511_);
lean_ctor_set(v___x_514_, 3, v___x_512_);
lean_ctor_set(v___x_514_, 4, v___x_512_);
lean_ctor_set(v___x_514_, 5, v___x_512_);
lean_ctor_set(v___x_514_, 6, v___x_512_);
lean_ctor_set(v___x_514_, 7, v___x_510_);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__9(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_unsigned_to_nat(32u);
v___x_516_ = lean_mk_empty_array_with_capacity(v___x_515_);
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
return v___x_517_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__10(void){
_start:
{
size_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_518_ = ((size_t)5ULL);
v___x_519_ = lean_unsigned_to_nat(0u);
v___x_520_ = lean_unsigned_to_nat(32u);
v___x_521_ = lean_mk_empty_array_with_capacity(v___x_520_);
v___x_522_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__9, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__9_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__9);
v___x_523_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_523_, 0, v___x_522_);
lean_ctor_set(v___x_523_, 1, v___x_521_);
lean_ctor_set(v___x_523_, 2, v___x_519_);
lean_ctor_set(v___x_523_, 3, v___x_519_);
lean_ctor_set_usize(v___x_523_, 4, v___x_518_);
return v___x_523_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__11(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5);
v___x_525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
lean_ctor_set(v___x_525_, 2, v___x_524_);
lean_ctor_set(v___x_525_, 3, v___x_524_);
lean_ctor_set(v___x_525_, 4, v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object* v_info_526_, lean_object* v_lctx_527_, lean_object* v_x_528_){
_start:
{
lean_object* v___x_530_; uint8_t v___x_531_; uint8_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v_toCommandContextInfo_538_; lean_object* v_mctx_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___f_544_; lean_object* v___x_545_; 
v___x_530_ = lean_box(1);
v___x_531_ = 0;
v___x_532_ = 1;
v___x_533_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2);
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__3));
v___x_536_ = lean_box(0);
v___x_537_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_537_, 0, v___x_533_);
lean_ctor_set(v___x_537_, 1, v___x_530_);
lean_ctor_set(v___x_537_, 2, v_lctx_527_);
lean_ctor_set(v___x_537_, 3, v___x_535_);
lean_ctor_set(v___x_537_, 4, v___x_536_);
lean_ctor_set(v___x_537_, 5, v___x_534_);
lean_ctor_set(v___x_537_, 6, v___x_536_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*7, v___x_531_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*7 + 1, v___x_531_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*7 + 2, v___x_531_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*7 + 3, v___x_532_);
v_toCommandContextInfo_538_ = lean_ctor_get(v_info_526_, 0);
v_mctx_539_ = lean_ctor_get(v_toCommandContextInfo_538_, 3);
v___x_540_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8);
v___x_541_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__10, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__10_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__10);
v___x_542_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__11, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__11_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__11);
lean_inc_ref(v_mctx_539_);
v___x_543_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_543_, 0, v_mctx_539_);
lean_ctor_set(v___x_543_, 1, v___x_540_);
lean_ctor_set(v___x_543_, 2, v___x_530_);
lean_ctor_set(v___x_543_, 3, v___x_541_);
lean_ctor_set(v___x_543_, 4, v___x_542_);
v___f_544_ = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_544_, 0, v___x_543_);
lean_closure_set(v___f_544_, 1, v_x_528_);
lean_closure_set(v___f_544_, 2, v___x_537_);
v___x_545_ = l_Lean_Elab_ContextInfo_runCoreM___redArg(v_info_526_, v___f_544_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_554_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_554_ == 0)
{
v___x_548_ = v___x_545_;
v_isShared_549_ = v_isSharedCheck_554_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_545_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_554_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v_fst_550_; lean_object* v___x_552_; 
v_fst_550_ = lean_ctor_get(v_a_546_, 0);
lean_inc(v_fst_550_);
lean_dec(v_a_546_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v_fst_550_);
v___x_552_ = v___x_548_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_fst_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
v_a_555_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_545_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_545_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___boxed(lean_object* v_info_563_, lean_object* v_lctx_564_, lean_object* v_x_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_info_563_, v_lctx_564_, v_x_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM(lean_object* v_00_u03b1_568_, lean_object* v_info_569_, lean_object* v_lctx_570_, lean_object* v_x_571_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_info_569_, v_lctx_570_, v_x_571_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___boxed(lean_object* v_00_u03b1_574_, lean_object* v_info_575_, lean_object* v_lctx_576_, lean_object* v_x_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_Elab_ContextInfo_runMetaM(v_00_u03b1_574_, v_info_575_, v_lctx_576_, v_x_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0_spec__0(lean_object* v_00_u03b2_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0___redArg(){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0___redArg___boxed(lean_object* v___dummy_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0___redArg();
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_ContextInfo_runMetaM_spec__0(lean_object* v_00_u03b2_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_toPPContext(lean_object* v_info_588_, lean_object* v_lctx_589_){
_start:
{
lean_object* v_toCommandContextInfo_590_; lean_object* v_env_591_; lean_object* v_mctx_592_; lean_object* v_options_593_; lean_object* v_currNamespace_594_; lean_object* v_openDecls_595_; lean_object* v___x_596_; 
v_toCommandContextInfo_590_ = lean_ctor_get(v_info_588_, 0);
v_env_591_ = lean_ctor_get(v_toCommandContextInfo_590_, 0);
v_mctx_592_ = lean_ctor_get(v_toCommandContextInfo_590_, 3);
v_options_593_ = lean_ctor_get(v_toCommandContextInfo_590_, 4);
v_currNamespace_594_ = lean_ctor_get(v_toCommandContextInfo_590_, 5);
v_openDecls_595_ = lean_ctor_get(v_toCommandContextInfo_590_, 6);
lean_inc(v_openDecls_595_);
lean_inc(v_currNamespace_594_);
lean_inc_ref(v_options_593_);
lean_inc_ref(v_mctx_592_);
lean_inc_ref(v_env_591_);
v___x_596_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_596_, 0, v_env_591_);
lean_ctor_set(v___x_596_, 1, v_mctx_592_);
lean_ctor_set(v___x_596_, 2, v_lctx_589_);
lean_ctor_set(v___x_596_, 3, v_options_593_);
lean_ctor_set(v___x_596_, 4, v_currNamespace_594_);
lean_ctor_set(v___x_596_, 5, v_openDecls_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_toPPContext___boxed(lean_object* v_info_597_, lean_object* v_lctx_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_Elab_ContextInfo_toPPContext(v_info_597_, v_lctx_598_);
lean_dec_ref(v_info_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppSyntax(lean_object* v_info_600_, lean_object* v_lctx_601_, lean_object* v_stx_602_){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = l_Lean_Elab_ContextInfo_toPPContext(v_info_600_, v_lctx_601_);
v___x_605_ = l_Lean_ppTerm(v___x_604_, v_stx_602_);
v___x_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppSyntax___boxed(lean_object* v_info_607_, lean_object* v_lctx_608_, lean_object* v_stx_609_, lean_object* v_a_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lean_Elab_ContextInfo_ppSyntax(v_info_607_, v_lctx_608_, v_stx_609_);
lean_dec_ref(v_info_607_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(lean_object* v_ctx_627_, lean_object* v_pos_628_, lean_object* v_info_629_){
_start:
{
lean_object* v_toCommandContextInfo_630_; lean_object* v_fileMap_631_; lean_object* v___x_632_; lean_object* v_line_633_; lean_object* v_column_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_657_; 
v_toCommandContextInfo_630_ = lean_ctor_get(v_ctx_627_, 0);
lean_inc_ref(v_toCommandContextInfo_630_);
lean_dec_ref(v_ctx_627_);
v_fileMap_631_ = lean_ctor_get(v_toCommandContextInfo_630_, 2);
lean_inc_ref(v_fileMap_631_);
lean_dec_ref(v_toCommandContextInfo_630_);
v___x_632_ = l_Lean_FileMap_toPosition(v_fileMap_631_, v_pos_628_);
v_line_633_ = lean_ctor_get(v___x_632_, 0);
v_column_634_ = lean_ctor_get(v___x_632_, 1);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_657_ == 0)
{
v___x_636_ = v___x_632_;
v_isShared_637_ = v_isSharedCheck_657_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_column_634_);
lean_inc(v_line_633_);
lean_dec(v___x_632_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_657_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_638_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1));
v___x_639_ = l_Nat_reprFast(v_line_633_);
v___x_640_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
if (v_isShared_637_ == 0)
{
lean_ctor_set_tag(v___x_636_, 5);
lean_ctor_set(v___x_636_, 1, v___x_640_);
lean_ctor_set(v___x_636_, 0, v___x_638_);
v___x_642_ = v___x_636_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v___x_640_);
v___x_642_ = v_reuseFailAlloc_656_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v_pos_649_; 
v___x_643_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3));
v___x_644_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = l_Nat_reprFast(v_column_634_);
v___x_646_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
v___x_647_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_644_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
v___x_648_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5));
v_pos_649_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_pos_649_, 0, v___x_647_);
lean_ctor_set(v_pos_649_, 1, v___x_648_);
switch(lean_obj_tag(v_info_629_))
{
case 0:
{
return v_pos_649_;
}
case 1:
{
uint8_t v_canonical_653_; 
v_canonical_653_ = lean_ctor_get_uint8(v_info_629_, sizeof(void*)*2);
if (v_canonical_653_ == 1)
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__9));
v___x_655_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_655_, 0, v_pos_649_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
return v___x_655_;
}
else
{
goto v___jp_650_;
}
}
default: 
{
goto v___jp_650_;
}
}
v___jp_650_:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__7));
v___x_652_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_652_, 0, v_pos_649_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
return v___x_652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___boxed(lean_object* v_ctx_658_, lean_object* v_pos_659_, lean_object* v_info_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(v_ctx_658_, v_pos_659_, v_info_660_);
lean_dec(v_info_660_);
lean_dec(v_pos_659_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(lean_object* v_ctx_665_, lean_object* v_stx_666_){
_start:
{
lean_object* v___y_668_; lean_object* v___y_669_; uint8_t v___x_677_; lean_object* v___y_679_; lean_object* v___x_682_; 
v___x_677_ = 0;
v___x_682_ = l_Lean_Syntax_getPos_x3f(v_stx_666_, v___x_677_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v___x_683_; 
v___x_683_ = lean_unsigned_to_nat(0u);
v___y_679_ = v___x_683_;
goto v___jp_678_;
}
else
{
lean_object* v_val_684_; 
v_val_684_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_val_684_);
lean_dec_ref_known(v___x_682_, 1);
v___y_679_ = v_val_684_;
goto v___jp_678_;
}
v___jp_667_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_670_ = l_Lean_Syntax_getHeadInfo(v_stx_666_);
lean_inc_ref(v_ctx_665_);
v___x_671_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(v_ctx_665_, v___y_668_, v___x_670_);
lean_dec(v___x_670_);
lean_dec(v___y_668_);
v___x_672_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1));
v___x_673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = l_Lean_Syntax_getTailInfo(v_stx_666_);
v___x_675_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(v_ctx_665_, v___y_669_, v___x_674_);
lean_dec(v___x_674_);
lean_dec(v___y_669_);
v___x_676_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_673_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
return v___x_676_;
}
v___jp_678_:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_Syntax_getTailPos_x3f(v_stx_666_, v___x_677_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_inc(v___y_679_);
v___y_668_ = v___y_679_;
v___y_669_ = v___y_679_;
goto v___jp_667_;
}
else
{
lean_object* v_val_681_; 
v_val_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_val_681_);
lean_dec_ref_known(v___x_680_, 1);
v___y_668_ = v___y_679_;
v___y_669_ = v_val_681_;
goto v___jp_667_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___boxed(lean_object* v_ctx_685_, lean_object* v_stx_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_685_, v_stx_686_);
lean_dec(v_stx_686_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(lean_object* v_ctx_691_, lean_object* v_info_692_){
_start:
{
lean_object* v_elaborator_693_; lean_object* v_stx_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_709_; 
v_elaborator_693_ = lean_ctor_get(v_info_692_, 0);
v_stx_694_ = lean_ctor_get(v_info_692_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v_info_692_);
if (v_isSharedCheck_709_ == 0)
{
v___x_696_ = v_info_692_;
v_isShared_697_ = v_isSharedCheck_709_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_stx_694_);
lean_inc(v_elaborator_693_);
lean_dec(v_info_692_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_709_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
uint8_t v___x_698_; 
v___x_698_ = l_Lean_Name_isAnonymous(v_elaborator_693_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
v___x_699_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_691_, v_stx_694_);
lean_dec(v_stx_694_);
v___x_700_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
if (v_isShared_697_ == 0)
{
lean_ctor_set_tag(v___x_696_, 5);
lean_ctor_set(v___x_696_, 1, v___x_700_);
lean_ctor_set(v___x_696_, 0, v___x_699_);
v___x_702_ = v___x_696_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_699_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v___x_700_);
v___x_702_ = v_reuseFailAlloc_707_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
uint8_t v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_703_ = 1;
v___x_704_ = l_Lean_Name_toString(v_elaborator_693_, v___x_703_);
v___x_705_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
v___x_706_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_702_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
return v___x_706_;
}
}
else
{
lean_object* v___x_708_; 
lean_del_object(v___x_696_);
lean_dec(v_elaborator_693_);
v___x_708_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_691_, v_stx_694_);
lean_dec(v_stx_694_);
return v___x_708_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg(lean_object* v_info_710_, lean_object* v_ctx_711_, lean_object* v_x_712_){
_start:
{
lean_object* v_lctx_714_; lean_object* v___x_715_; 
v_lctx_714_ = lean_ctor_get(v_info_710_, 1);
lean_inc_ref(v_lctx_714_);
lean_dec_ref(v_info_710_);
v___x_715_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_711_, v_lctx_714_, v_x_712_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg___boxed(lean_object* v_info_716_, lean_object* v_ctx_717_, lean_object* v_x_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_Elab_TermInfo_runMetaM___redArg(v_info_716_, v_ctx_717_, v_x_718_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM(lean_object* v_00_u03b1_721_, lean_object* v_info_722_, lean_object* v_ctx_723_, lean_object* v_x_724_){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = l_Lean_Elab_TermInfo_runMetaM___redArg(v_info_722_, v_ctx_723_, v_x_724_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___boxed(lean_object* v_00_u03b1_727_, lean_object* v_info_728_, lean_object* v_ctx_729_, lean_object* v_x_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_Elab_TermInfo_runMetaM(v_00_u03b1_727_, v_info_728_, v_ctx_729_, v_x_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___lam__0(lean_object* v_ctx_747_, lean_object* v_toElabInfo_748_, lean_object* v_expr_749_, uint8_t v_isBinder_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v_a_771_; lean_object* v___y_781_; lean_object* v_a_782_; lean_object* v___x_786_; 
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
lean_inc_ref(v_expr_749_);
v___x_786_ = lean_infer_type(v_expr_749_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_788_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_787_);
lean_dec_ref_known(v___x_786_, 1);
v___x_788_ = l_Lean_Meta_ppExpr(v_a_787_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_788_, 1);
v_a_771_ = v_a_789_;
goto v___jp_770_;
}
else
{
lean_object* v_a_790_; 
v_a_790_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_790_);
v___y_781_ = v___x_788_;
v_a_782_ = v_a_790_;
goto v___jp_780_;
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
v_a_791_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_786_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_786_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
lean_inc(v_a_791_);
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
v___y_781_ = v___x_796_;
v_a_782_ = v_a_791_;
goto v___jp_780_;
}
}
}
v___jp_756_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
lean_inc_ref(v___y_759_);
v___x_760_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_760_, 0, v___y_759_);
v___x_761_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_761_, 0, v___y_758_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
v___x_762_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__1));
v___x_763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_763_, 0, v___x_761_);
lean_ctor_set(v___x_763_, 1, v___x_762_);
v___x_764_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
lean_ctor_set(v___x_764_, 1, v___y_757_);
v___x_765_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_766_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_747_, v_toElabInfo_748_);
v___x_768_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_766_);
lean_ctor_set(v___x_768_, 1, v___x_767_);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
v___jp_770_:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Meta_ppExpr(v_expr_749_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
lean_dec_ref_known(v___x_772_, 1);
v___x_774_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__3));
v___x_775_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
lean_ctor_set(v___x_775_, 1, v_a_773_);
v___x_776_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__5));
v___x_777_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_775_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
if (v_isBinder_750_ == 0)
{
lean_object* v___x_778_; 
v___x_778_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__6));
v___y_757_ = v_a_771_;
v___y_758_ = v___x_777_;
v___y_759_ = v___x_778_;
goto v___jp_756_;
}
else
{
lean_object* v___x_779_; 
v___x_779_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__7));
v___y_757_ = v_a_771_;
v___y_758_ = v___x_777_;
v___y_759_ = v___x_779_;
goto v___jp_756_;
}
}
else
{
lean_dec(v_a_771_);
lean_dec_ref(v_toElabInfo_748_);
lean_dec_ref(v_ctx_747_);
return v___x_772_;
}
}
v___jp_780_:
{
uint8_t v___x_783_; 
v___x_783_ = l_Lean_Exception_isInterrupt(v_a_782_);
if (v___x_783_ == 0)
{
uint8_t v___x_784_; 
v___x_784_ = l_Lean_Exception_isRuntime(v_a_782_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; 
lean_dec_ref(v___y_781_);
v___x_785_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__9));
v_a_771_ = v___x_785_;
goto v___jp_770_;
}
else
{
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec_ref(v_expr_749_);
lean_dec_ref(v_toElabInfo_748_);
lean_dec_ref(v_ctx_747_);
return v___y_781_;
}
}
else
{
lean_dec_ref(v_a_782_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec_ref(v_expr_749_);
lean_dec_ref(v_toElabInfo_748_);
lean_dec_ref(v_ctx_747_);
return v___y_781_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___lam__0___boxed(lean_object* v_ctx_799_, lean_object* v_toElabInfo_800_, lean_object* v_expr_801_, lean_object* v_isBinder_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
uint8_t v_isBinder_boxed_808_; lean_object* v_res_809_; 
v_isBinder_boxed_808_ = lean_unbox(v_isBinder_802_);
v_res_809_ = l_Lean_Elab_TermInfo_format___lam__0(v_ctx_799_, v_toElabInfo_800_, v_expr_801_, v_isBinder_boxed_808_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format(lean_object* v_ctx_810_, lean_object* v_info_811_){
_start:
{
lean_object* v_toElabInfo_813_; lean_object* v_expr_814_; uint8_t v_isBinder_815_; lean_object* v___x_816_; lean_object* v___f_817_; lean_object* v___x_818_; 
v_toElabInfo_813_ = lean_ctor_get(v_info_811_, 0);
v_expr_814_ = lean_ctor_get(v_info_811_, 3);
v_isBinder_815_ = lean_ctor_get_uint8(v_info_811_, sizeof(void*)*4);
v___x_816_ = lean_box(v_isBinder_815_);
lean_inc_ref(v_expr_814_);
lean_inc_ref(v_toElabInfo_813_);
lean_inc_ref(v_ctx_810_);
v___f_817_ = lean_alloc_closure((void*)(l_Lean_Elab_TermInfo_format___lam__0___boxed), 9, 4);
lean_closure_set(v___f_817_, 0, v_ctx_810_);
lean_closure_set(v___f_817_, 1, v_toElabInfo_813_);
lean_closure_set(v___f_817_, 2, v_expr_814_);
lean_closure_set(v___f_817_, 3, v___x_816_);
v___x_818_ = l_Lean_Elab_TermInfo_runMetaM___redArg(v_info_811_, v_ctx_810_, v___f_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___boxed(lean_object* v_ctx_819_, lean_object* v_info_820_, lean_object* v_a_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_Elab_TermInfo_format(v_ctx_819_, v_info_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialTermInfo_format(lean_object* v_ctx_826_, lean_object* v_info_827_){
_start:
{
lean_object* v_toElabInfo_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v_toElabInfo_828_ = lean_ctor_get(v_info_827_, 0);
lean_inc_ref(v_toElabInfo_828_);
lean_dec_ref(v_info_827_);
v___x_829_ = ((lean_object*)(l_Lean_Elab_PartialTermInfo_format___closed__1));
v___x_830_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_826_, v_toElabInfo_828_);
v___x_831_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_829_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0(lean_object* v_x_838_){
_start:
{
if (lean_obj_tag(v_x_838_) == 0)
{
lean_object* v___x_839_; 
v___x_839_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1));
return v___x_839_;
}
else
{
lean_object* v_val_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_850_; 
v_val_840_ = lean_ctor_get(v_x_838_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v_x_838_);
if (v_isSharedCheck_850_ == 0)
{
v___x_842_ = v_x_838_;
v_isShared_843_ = v_isSharedCheck_850_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_val_840_);
lean_dec(v_x_838_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_850_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_844_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3));
v___x_845_ = lean_expr_dbg_to_string(v_val_840_);
lean_dec(v_val_840_);
if (v_isShared_843_ == 0)
{
lean_ctor_set_tag(v___x_842_, 3);
lean_ctor_set(v___x_842_, 0, v___x_845_);
v___x_847_ = v___x_842_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_845_);
v___x_847_ = v_reuseFailAlloc_849_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
lean_object* v___x_848_; 
v___x_848_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_844_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
return v___x_848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___lam__0(lean_object* v_ctx_857_, lean_object* v_lctx_858_, lean_object* v_stx_859_, lean_object* v_expectedType_x3f_860_, lean_object* v_info_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v___x_867_; lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_886_; 
v___x_867_ = l_Lean_Elab_ContextInfo_ppSyntax(v_ctx_857_, v_lctx_858_, v_stx_859_);
v_a_868_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_886_ == 0)
{
v___x_870_ = v___x_867_;
v_isShared_871_ = v_isSharedCheck_886_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_867_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_886_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
v___x_872_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___lam__0___closed__1));
v___x_873_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
lean_ctor_set(v___x_873_, 1, v_a_868_);
v___x_874_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___lam__0___closed__3));
v___x_875_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_873_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0(v_expectedType_x3f_860_);
v___x_877_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_875_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_879_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = l_Lean_Elab_CompletionInfo_stx(v_info_861_);
v___x_881_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_857_, v___x_880_);
lean_dec(v___x_880_);
v___x_882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_879_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_882_);
v___x_884_ = v___x_870_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_882_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___boxed(lean_object* v_ctx_887_, lean_object* v_lctx_888_, lean_object* v_stx_889_, lean_object* v_expectedType_x3f_890_, lean_object* v_info_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_Elab_CompletionInfo_format___lam__0(v_ctx_887_, v_lctx_888_, v_stx_889_, v_expectedType_x3f_890_, v_info_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec_ref(v_info_891_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format(lean_object* v_ctx_904_, lean_object* v_info_905_){
_start:
{
switch(lean_obj_tag(v_info_905_))
{
case 0:
{
lean_object* v_termInfo_907_; lean_object* v_expectedType_x3f_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_929_; 
v_termInfo_907_ = lean_ctor_get(v_info_905_, 0);
v_expectedType_x3f_908_ = lean_ctor_get(v_info_905_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v_info_905_);
if (v_isSharedCheck_929_ == 0)
{
v___x_910_ = v_info_905_;
v_isShared_911_ = v_isSharedCheck_929_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_expectedType_x3f_908_);
lean_inc(v_termInfo_907_);
lean_dec(v_info_905_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_929_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; 
v___x_912_ = l_Lean_Elab_TermInfo_format(v_ctx_904_, v_termInfo_907_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_928_; 
v_a_913_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_928_ == 0)
{
v___x_915_ = v___x_912_;
v_isShared_916_ = v_isSharedCheck_928_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_912_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_928_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_917_; lean_object* v___x_919_; 
v___x_917_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___closed__1));
if (v_isShared_911_ == 0)
{
lean_ctor_set_tag(v___x_910_, 5);
lean_ctor_set(v___x_910_, 1, v_a_913_);
lean_ctor_set(v___x_910_, 0, v___x_917_);
v___x_919_ = v___x_910_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_a_913_);
v___x_919_ = v_reuseFailAlloc_927_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_920_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___lam__0___closed__3));
v___x_921_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_919_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0(v_expectedType_x3f_908_);
v___x_923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_921_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 0, v___x_923_);
v___x_925_ = v___x_915_;
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
}
}
else
{
lean_del_object(v___x_910_);
lean_dec(v_expectedType_x3f_908_);
return v___x_912_;
}
}
}
case 1:
{
lean_object* v_stx_930_; lean_object* v_lctx_931_; lean_object* v_expectedType_x3f_932_; lean_object* v___f_933_; lean_object* v___x_934_; 
v_stx_930_ = lean_ctor_get(v_info_905_, 0);
lean_inc(v_stx_930_);
v_lctx_931_ = lean_ctor_get(v_info_905_, 2);
lean_inc_ref_n(v_lctx_931_, 2);
v_expectedType_x3f_932_ = lean_ctor_get(v_info_905_, 3);
lean_inc(v_expectedType_x3f_932_);
lean_inc_ref(v_ctx_904_);
v___f_933_ = lean_alloc_closure((void*)(l_Lean_Elab_CompletionInfo_format___lam__0___boxed), 10, 5);
lean_closure_set(v___f_933_, 0, v_ctx_904_);
lean_closure_set(v___f_933_, 1, v_lctx_931_);
lean_closure_set(v___f_933_, 2, v_stx_930_);
lean_closure_set(v___f_933_, 3, v_expectedType_x3f_932_);
lean_closure_set(v___f_933_, 4, v_info_905_);
v___x_934_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_904_, v_lctx_931_, v___f_933_);
return v___x_934_;
}
default: 
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; uint8_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_935_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___closed__3));
v___x_936_ = l_Lean_Elab_CompletionInfo_stx(v_info_905_);
lean_dec_ref(v_info_905_);
v___x_937_ = lean_box(0);
v___x_938_ = 0;
lean_inc(v___x_936_);
v___x_939_ = l_Lean_Syntax_formatStx(v___x_936_, v___x_937_, v___x_938_);
v___x_940_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_935_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_904_, v___x_936_);
lean_dec(v___x_936_);
v___x_944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_942_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___boxed(lean_object* v_ctx_946_, lean_object* v_info_947_, lean_object* v_a_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l_Lean_Elab_CompletionInfo_format(v_ctx_946_, v_info_947_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandInfo_format(lean_object* v_ctx_953_, lean_object* v_info_954_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_956_ = ((lean_object*)(l_Lean_Elab_CommandInfo_format___closed__1));
v___x_957_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_953_, v_info_954_);
v___x_958_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandInfo_format___boxed(lean_object* v_ctx_960_, lean_object* v_info_961_, lean_object* v_a_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_Elab_CommandInfo_format(v_ctx_960_, v_info_961_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OptionInfo_format(lean_object* v_ctx_967_, lean_object* v_info_968_){
_start:
{
lean_object* v_stx_970_; lean_object* v_optionName_971_; lean_object* v___x_972_; uint8_t v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v_stx_970_ = lean_ctor_get(v_info_968_, 0);
lean_inc(v_stx_970_);
v_optionName_971_ = lean_ctor_get(v_info_968_, 1);
lean_inc(v_optionName_971_);
lean_dec_ref(v_info_968_);
v___x_972_ = ((lean_object*)(l_Lean_Elab_OptionInfo_format___closed__1));
v___x_973_ = 1;
v___x_974_ = l_Lean_Name_toString(v_optionName_971_, v___x_973_);
v___x_975_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
v___x_976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_972_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_978_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_967_, v_stx_970_);
lean_dec(v_stx_970_);
v___x_980_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OptionInfo_format___boxed(lean_object* v_ctx_982_, lean_object* v_info_983_, lean_object* v_a_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lean_Elab_OptionInfo_format(v_ctx_982_, v_info_983_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorNameInfo_format(lean_object* v_ctx_989_, lean_object* v_info_990_){
_start:
{
lean_object* v_stx_992_; lean_object* v_errorName_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1009_; 
v_stx_992_ = lean_ctor_get(v_info_990_, 0);
v_errorName_993_ = lean_ctor_get(v_info_990_, 1);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_info_990_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_995_ = v_info_990_;
v_isShared_996_ = v_isSharedCheck_1009_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_errorName_993_);
lean_inc(v_stx_992_);
lean_dec(v_info_990_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1009_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_997_; uint8_t v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_997_ = ((lean_object*)(l_Lean_Elab_ErrorNameInfo_format___closed__1));
v___x_998_ = 1;
v___x_999_ = l_Lean_Name_toString(v_errorName_993_, v___x_998_);
v___x_1000_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
if (v_isShared_996_ == 0)
{
lean_ctor_set_tag(v___x_995_, 5);
lean_ctor_set(v___x_995_, 1, v___x_1000_);
lean_ctor_set(v___x_995_, 0, v___x_997_);
v___x_1002_ = v___x_995_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v___x_1000_);
v___x_1002_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1003_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_1004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1002_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_989_, v_stx_992_);
lean_dec(v_stx_992_);
v___x_1006_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
return v___x_1007_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorNameInfo_format___boxed(lean_object* v_ctx_1010_, lean_object* v_info_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_Elab_ErrorNameInfo_format(v_ctx_1010_, v_info_1011_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___lam__0(lean_object* v_val_1020_, lean_object* v_fieldName_1021_, lean_object* v_ctx_1022_, lean_object* v_stx_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v___x_1029_; 
lean_inc(v___y_1027_);
lean_inc_ref(v___y_1026_);
lean_inc(v___y_1025_);
lean_inc_ref(v___y_1024_);
lean_inc_ref(v_val_1020_);
v___x_1029_ = lean_infer_type(v_val_1020_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v___x_1031_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1029_, 1);
v___x_1031_ = l_Lean_Meta_ppExpr(v_a_1030_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1062_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1034_ = v___x_1031_;
v_isShared_1035_ = v_isSharedCheck_1062_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1031_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1062_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; 
v___x_1036_ = l_Lean_Meta_ppExpr(v_val_1020_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1061_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1039_ = v___x_1036_;
v_isShared_1040_ = v_isSharedCheck_1061_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1036_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1061_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1041_; uint8_t v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1041_ = ((lean_object*)(l_Lean_Elab_FieldInfo_format___lam__0___closed__1));
v___x_1042_ = 1;
v___x_1043_ = l_Lean_Name_toString(v_fieldName_1021_, v___x_1042_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set_tag(v___x_1034_, 3);
lean_ctor_set(v___x_1034_, 0, v___x_1043_);
v___x_1045_ = v___x_1034_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1043_);
v___x_1045_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1041_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___lam__0___closed__3));
v___x_1048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1046_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
lean_ctor_set(v___x_1049_, 1, v_a_1032_);
v___x_1050_ = ((lean_object*)(l_Lean_Elab_FieldInfo_format___lam__0___closed__3));
v___x_1051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
lean_ctor_set(v___x_1052_, 1, v_a_1037_);
v___x_1053_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_1054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_1022_, v_stx_1023_);
v___x_1056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 0, v___x_1056_);
v___x_1058_ = v___x_1039_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1056_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
else
{
lean_del_object(v___x_1034_);
lean_dec(v_a_1032_);
lean_dec_ref(v_ctx_1022_);
lean_dec(v_fieldName_1021_);
return v___x_1036_;
}
}
}
else
{
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v_ctx_1022_);
lean_dec(v_fieldName_1021_);
lean_dec_ref(v_val_1020_);
return v___x_1031_;
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v_ctx_1022_);
lean_dec(v_fieldName_1021_);
lean_dec_ref(v_val_1020_);
v_a_1063_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1029_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1029_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___lam__0___boxed(lean_object* v_val_1071_, lean_object* v_fieldName_1072_, lean_object* v_ctx_1073_, lean_object* v_stx_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_Elab_FieldInfo_format___lam__0(v_val_1071_, v_fieldName_1072_, v_ctx_1073_, v_stx_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
lean_dec(v_stx_1074_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format(lean_object* v_ctx_1081_, lean_object* v_info_1082_){
_start:
{
lean_object* v_fieldName_1084_; lean_object* v_lctx_1085_; lean_object* v_val_1086_; lean_object* v_stx_1087_; lean_object* v___f_1088_; lean_object* v___x_1089_; 
v_fieldName_1084_ = lean_ctor_get(v_info_1082_, 1);
lean_inc(v_fieldName_1084_);
v_lctx_1085_ = lean_ctor_get(v_info_1082_, 2);
lean_inc_ref(v_lctx_1085_);
v_val_1086_ = lean_ctor_get(v_info_1082_, 3);
lean_inc_ref(v_val_1086_);
v_stx_1087_ = lean_ctor_get(v_info_1082_, 4);
lean_inc(v_stx_1087_);
lean_dec_ref(v_info_1082_);
lean_inc_ref(v_ctx_1081_);
v___f_1088_ = lean_alloc_closure((void*)(l_Lean_Elab_FieldInfo_format___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1088_, 0, v_val_1086_);
lean_closure_set(v___f_1088_, 1, v_fieldName_1084_);
lean_closure_set(v___f_1088_, 2, v_ctx_1081_);
lean_closure_set(v___f_1088_, 3, v_stx_1087_);
v___x_1089_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_1081_, v_lctx_1085_, v___f_1088_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___boxed(lean_object* v_ctx_1090_, lean_object* v_info_1091_, lean_object* v_a_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_Lean_Elab_FieldInfo_format(v_ctx_1090_, v_info_1091_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1_spec__1(lean_object* v_pre_1094_, lean_object* v_x_1095_, lean_object* v_x_1096_){
_start:
{
if (lean_obj_tag(v_x_1096_) == 0)
{
lean_dec(v_pre_1094_);
return v_x_1095_;
}
else
{
lean_object* v_head_1097_; lean_object* v_tail_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1107_; 
v_head_1097_ = lean_ctor_get(v_x_1096_, 0);
v_tail_1098_ = lean_ctor_get(v_x_1096_, 1);
v_isSharedCheck_1107_ = !lean_is_exclusive(v_x_1096_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1100_ = v_x_1096_;
v_isShared_1101_ = v_isSharedCheck_1107_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_tail_1098_);
lean_inc(v_head_1097_);
lean_dec(v_x_1096_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1107_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
lean_inc(v_pre_1094_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set_tag(v___x_1100_, 5);
lean_ctor_set(v___x_1100_, 1, v_pre_1094_);
lean_ctor_set(v___x_1100_, 0, v_x_1095_);
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_x_1095_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v_pre_1094_);
v___x_1103_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v___x_1104_; 
v___x_1104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
lean_ctor_set(v___x_1104_, 1, v_head_1097_);
v_x_1095_ = v___x_1104_;
v_x_1096_ = v_tail_1098_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1(lean_object* v_pre_1108_, lean_object* v_x_1109_){
_start:
{
if (lean_obj_tag(v_x_1109_) == 0)
{
lean_object* v___x_1110_; 
lean_dec(v_pre_1108_);
v___x_1110_ = lean_box(0);
return v___x_1110_;
}
else
{
lean_object* v_head_1111_; lean_object* v_tail_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1120_; 
v_head_1111_ = lean_ctor_get(v_x_1109_, 0);
v_tail_1112_ = lean_ctor_get(v_x_1109_, 1);
v_isSharedCheck_1120_ = !lean_is_exclusive(v_x_1109_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1114_ = v_x_1109_;
v_isShared_1115_ = v_isSharedCheck_1120_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_tail_1112_);
lean_inc(v_head_1111_);
lean_dec(v_x_1109_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1120_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
lean_inc(v_pre_1108_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set_tag(v___x_1114_, 5);
lean_ctor_set(v___x_1114_, 1, v_head_1111_);
lean_ctor_set(v___x_1114_, 0, v_pre_1108_);
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_pre_1108_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v_head_1111_);
v___x_1117_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_List_foldl___at___00Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1_spec__1(v_pre_1108_, v___x_1117_, v_tail_1112_);
return v___x_1118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0(lean_object* v_x_1121_, lean_object* v_x_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
if (lean_obj_tag(v_x_1121_) == 0)
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = l_List_reverse___redArg(v_x_1122_);
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
return v___x_1129_;
}
else
{
lean_object* v_head_1130_; lean_object* v_tail_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1149_; 
v_head_1130_ = lean_ctor_get(v_x_1121_, 0);
v_tail_1131_ = lean_ctor_get(v_x_1121_, 1);
v_isSharedCheck_1149_ = !lean_is_exclusive(v_x_1121_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1133_ = v_x_1121_;
v_isShared_1134_ = v_isSharedCheck_1149_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_tail_1131_);
lean_inc(v_head_1130_);
lean_dec(v_x_1121_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1149_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1135_; 
v___x_1135_ = l_Lean_Meta_ppGoal(v_head_1130_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
lean_dec(v_head_1130_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v_a_1136_; lean_object* v___x_1138_; 
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_a_1136_);
lean_dec_ref_known(v___x_1135_, 1);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 1, v_x_1122_);
lean_ctor_set(v___x_1133_, 0, v_a_1136_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1136_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_x_1122_);
v___x_1138_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
v_x_1121_ = v_tail_1131_;
v_x_1122_ = v___x_1138_;
goto _start;
}
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_del_object(v___x_1133_);
lean_dec(v_tail_1131_);
lean_dec(v_x_1122_);
v_a_1141_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1135_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1135_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0___boxed(lean_object* v_x_1150_, lean_object* v_x_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0(v_x_1150_, v_x_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0(lean_object* v_goals_1161_, lean_object* v___x_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0(v_goals_1161_, v___x_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1178_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1171_ = v___x_1168_;
v_isShared_1172_ = v_isSharedCheck_1178_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1168_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1178_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1176_; 
v___x_1173_ = ((lean_object*)(l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1));
v___x_1174_ = l_Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1(v___x_1173_, v_a_1169_);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 0, v___x_1174_);
v___x_1176_ = v___x_1171_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1174_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
v_a_1179_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1168_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1168_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0___boxed(lean_object* v_goals_1187_, lean_object* v___x_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lean_Elab_ContextInfo_ppGoals___lam__0(v_goals_1187_, v___x_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
return v_res_1194_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_ppGoals___closed__0(void){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
return v___x_1196_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_ppGoals___closed__1(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1197_ = lean_unsigned_to_nat(32u);
v___x_1198_ = lean_mk_empty_array_with_capacity(v___x_1197_);
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_ppGoals___closed__2(void){
_start:
{
size_t v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1200_ = ((size_t)5ULL);
v___x_1201_ = lean_unsigned_to_nat(0u);
v___x_1202_ = lean_unsigned_to_nat(32u);
v___x_1203_ = lean_mk_empty_array_with_capacity(v___x_1202_);
v___x_1204_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__1, &l_Lean_Elab_ContextInfo_ppGoals___closed__1_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__1);
v___x_1205_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
lean_ctor_set(v___x_1205_, 1, v___x_1203_);
lean_ctor_set(v___x_1205_, 2, v___x_1201_);
lean_ctor_set(v___x_1205_, 3, v___x_1201_);
lean_ctor_set_usize(v___x_1205_, 4, v___x_1200_);
return v___x_1205_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_ppGoals___closed__3(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1206_ = lean_box(1);
v___x_1207_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__2, &l_Lean_Elab_ContextInfo_ppGoals___closed__2_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__2);
v___x_1208_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__0, &l_Lean_Elab_ContextInfo_ppGoals___closed__0_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__0);
v___x_1209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
lean_ctor_set(v___x_1209_, 1, v___x_1207_);
lean_ctor_set(v___x_1209_, 2, v___x_1206_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals(lean_object* v_ctx_1213_, lean_object* v_goals_1214_){
_start:
{
uint8_t v___x_1216_; 
v___x_1216_ = l_List_isEmpty___redArg(v_goals_1214_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___f_1219_; lean_object* v___x_1220_; 
v___x_1217_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__3, &l_Lean_Elab_ContextInfo_ppGoals___closed__3_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__3);
v___x_1218_ = lean_box(0);
v___f_1219_ = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_ppGoals___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1219_, 0, v_goals_1214_);
lean_closure_set(v___f_1219_, 1, v___x_1218_);
v___x_1220_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_1213_, v___x_1217_, v___f_1219_);
return v___x_1220_;
}
else
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
lean_dec(v_goals_1214_);
lean_dec_ref(v_ctx_1213_);
v___x_1221_ = ((lean_object*)(l_Lean_Elab_ContextInfo_ppGoals___closed__5));
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
return v___x_1222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___boxed(lean_object* v_ctx_1223_, lean_object* v_goals_1224_, lean_object* v_a_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_Elab_ContextInfo_ppGoals(v_ctx_1223_, v_goals_1224_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TacticInfo_format(lean_object* v_ctx_1236_, lean_object* v_info_1237_){
_start:
{
lean_object* v_toCommandContextInfo_1239_; lean_object* v_parentDecl_x3f_1240_; lean_object* v_autoImplicits_1241_; lean_object* v_env_1242_; lean_object* v_cmdEnv_x3f_1243_; lean_object* v_fileMap_1244_; lean_object* v_options_1245_; lean_object* v_currNamespace_1246_; lean_object* v_openDecls_1247_; lean_object* v_ngen_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1290_; 
v_toCommandContextInfo_1239_ = lean_ctor_get(v_ctx_1236_, 0);
lean_inc_ref(v_toCommandContextInfo_1239_);
v_parentDecl_x3f_1240_ = lean_ctor_get(v_ctx_1236_, 1);
v_autoImplicits_1241_ = lean_ctor_get(v_ctx_1236_, 2);
v_env_1242_ = lean_ctor_get(v_toCommandContextInfo_1239_, 0);
v_cmdEnv_x3f_1243_ = lean_ctor_get(v_toCommandContextInfo_1239_, 1);
v_fileMap_1244_ = lean_ctor_get(v_toCommandContextInfo_1239_, 2);
v_options_1245_ = lean_ctor_get(v_toCommandContextInfo_1239_, 4);
v_currNamespace_1246_ = lean_ctor_get(v_toCommandContextInfo_1239_, 5);
v_openDecls_1247_ = lean_ctor_get(v_toCommandContextInfo_1239_, 6);
v_ngen_1248_ = lean_ctor_get(v_toCommandContextInfo_1239_, 7);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_toCommandContextInfo_1239_);
if (v_isSharedCheck_1290_ == 0)
{
lean_object* v_unused_1291_; 
v_unused_1291_ = lean_ctor_get(v_toCommandContextInfo_1239_, 3);
lean_dec(v_unused_1291_);
v___x_1250_ = v_toCommandContextInfo_1239_;
v_isShared_1251_ = v_isSharedCheck_1290_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_ngen_1248_);
lean_inc(v_openDecls_1247_);
lean_inc(v_currNamespace_1246_);
lean_inc(v_options_1245_);
lean_inc(v_fileMap_1244_);
lean_inc(v_cmdEnv_x3f_1243_);
lean_inc(v_env_1242_);
lean_dec(v_toCommandContextInfo_1239_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1290_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v_toElabInfo_1252_; lean_object* v_mctxBefore_1253_; lean_object* v_goalsBefore_1254_; lean_object* v_mctxAfter_1255_; lean_object* v_goalsAfter_1256_; lean_object* v___x_1258_; 
v_toElabInfo_1252_ = lean_ctor_get(v_info_1237_, 0);
lean_inc_ref(v_toElabInfo_1252_);
v_mctxBefore_1253_ = lean_ctor_get(v_info_1237_, 1);
lean_inc_ref(v_mctxBefore_1253_);
v_goalsBefore_1254_ = lean_ctor_get(v_info_1237_, 2);
lean_inc(v_goalsBefore_1254_);
v_mctxAfter_1255_ = lean_ctor_get(v_info_1237_, 3);
lean_inc_ref(v_mctxAfter_1255_);
v_goalsAfter_1256_ = lean_ctor_get(v_info_1237_, 4);
lean_inc(v_goalsAfter_1256_);
lean_dec_ref(v_info_1237_);
lean_inc_ref(v_ngen_1248_);
lean_inc(v_openDecls_1247_);
lean_inc(v_currNamespace_1246_);
lean_inc_ref(v_options_1245_);
lean_inc_ref(v_fileMap_1244_);
lean_inc(v_cmdEnv_x3f_1243_);
lean_inc_ref(v_env_1242_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 3, v_mctxBefore_1253_);
v___x_1258_ = v___x_1250_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_env_1242_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_cmdEnv_x3f_1243_);
lean_ctor_set(v_reuseFailAlloc_1289_, 2, v_fileMap_1244_);
lean_ctor_set(v_reuseFailAlloc_1289_, 3, v_mctxBefore_1253_);
lean_ctor_set(v_reuseFailAlloc_1289_, 4, v_options_1245_);
lean_ctor_set(v_reuseFailAlloc_1289_, 5, v_currNamespace_1246_);
lean_ctor_set(v_reuseFailAlloc_1289_, 6, v_openDecls_1247_);
lean_ctor_set(v_reuseFailAlloc_1289_, 7, v_ngen_1248_);
v___x_1258_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v_ctxB_1259_; lean_object* v___x_1260_; lean_object* v_ctxA_1261_; lean_object* v___x_1262_; 
lean_inc_ref_n(v_autoImplicits_1241_, 2);
lean_inc_n(v_parentDecl_x3f_1240_, 2);
v_ctxB_1259_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_ctxB_1259_, 0, v___x_1258_);
lean_ctor_set(v_ctxB_1259_, 1, v_parentDecl_x3f_1240_);
lean_ctor_set(v_ctxB_1259_, 2, v_autoImplicits_1241_);
v___x_1260_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1260_, 0, v_env_1242_);
lean_ctor_set(v___x_1260_, 1, v_cmdEnv_x3f_1243_);
lean_ctor_set(v___x_1260_, 2, v_fileMap_1244_);
lean_ctor_set(v___x_1260_, 3, v_mctxAfter_1255_);
lean_ctor_set(v___x_1260_, 4, v_options_1245_);
lean_ctor_set(v___x_1260_, 5, v_currNamespace_1246_);
lean_ctor_set(v___x_1260_, 6, v_openDecls_1247_);
lean_ctor_set(v___x_1260_, 7, v_ngen_1248_);
v_ctxA_1261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_ctxA_1261_, 0, v___x_1260_);
lean_ctor_set(v_ctxA_1261_, 1, v_parentDecl_x3f_1240_);
lean_ctor_set(v_ctxA_1261_, 2, v_autoImplicits_1241_);
v___x_1262_ = l_Lean_Elab_ContextInfo_ppGoals(v_ctxB_1259_, v_goalsBefore_1254_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; lean_object* v___x_1264_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_a_1263_);
lean_dec_ref_known(v___x_1262_, 1);
v___x_1264_ = l_Lean_Elab_ContextInfo_ppGoals(v_ctxA_1261_, v_goalsAfter_1256_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1288_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1267_ = v___x_1264_;
v_isShared_1268_ = v_isSharedCheck_1288_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1264_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1288_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v_stx_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; uint8_t v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1286_; 
v_stx_1269_ = lean_ctor_get(v_toElabInfo_1252_, 1);
lean_inc(v_stx_1269_);
v___x_1270_ = ((lean_object*)(l_Lean_Elab_TacticInfo_format___closed__1));
v___x_1271_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_1236_, v_toElabInfo_1252_);
v___x_1272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1270_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
v___x_1273_ = ((lean_object*)(l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1));
v___x_1274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1272_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = lean_box(0);
v___x_1276_ = 0;
v___x_1277_ = l_Lean_Syntax_formatStx(v_stx_1269_, v___x_1275_, v___x_1276_);
v___x_1278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1274_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = ((lean_object*)(l_Lean_Elab_TacticInfo_format___closed__3));
v___x_1280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v___x_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
lean_ctor_set(v___x_1281_, 1, v_a_1263_);
v___x_1282_ = ((lean_object*)(l_Lean_Elab_TacticInfo_format___closed__5));
v___x_1283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1283_);
lean_ctor_set(v___x_1284_, 1, v_a_1265_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 0, v___x_1284_);
v___x_1286_ = v___x_1267_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
else
{
lean_dec(v_a_1263_);
lean_dec_ref(v_toElabInfo_1252_);
lean_dec_ref(v_ctx_1236_);
return v___x_1264_;
}
}
else
{
lean_dec_ref_known(v_ctxA_1261_, 3);
lean_dec(v_goalsAfter_1256_);
lean_dec_ref(v_toElabInfo_1252_);
lean_dec_ref(v_ctx_1236_);
return v___x_1262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TacticInfo_format___boxed(lean_object* v_ctx_1292_, lean_object* v_info_1293_, lean_object* v_a_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Lean_Elab_TacticInfo_format(v_ctx_1292_, v_info_1293_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_MacroExpansionInfo_format(lean_object* v_ctx_1302_, lean_object* v_info_1303_){
_start:
{
lean_object* v_lctx_1305_; lean_object* v_stx_1306_; lean_object* v_output_1307_; lean_object* v___x_1308_; lean_object* v_a_1309_; lean_object* v___x_1310_; lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1323_; 
v_lctx_1305_ = lean_ctor_get(v_info_1303_, 0);
lean_inc_ref_n(v_lctx_1305_, 2);
v_stx_1306_ = lean_ctor_get(v_info_1303_, 1);
lean_inc(v_stx_1306_);
v_output_1307_ = lean_ctor_get(v_info_1303_, 2);
lean_inc(v_output_1307_);
lean_dec_ref(v_info_1303_);
v___x_1308_ = l_Lean_Elab_ContextInfo_ppSyntax(v_ctx_1302_, v_lctx_1305_, v_stx_1306_);
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref(v___x_1308_);
v___x_1310_ = l_Lean_Elab_ContextInfo_ppSyntax(v_ctx_1302_, v_lctx_1305_, v_output_1307_);
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1323_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1323_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1321_; 
v___x_1315_ = ((lean_object*)(l_Lean_Elab_MacroExpansionInfo_format___closed__1));
v___x_1316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v_a_1309_);
v___x_1317_ = ((lean_object*)(l_Lean_Elab_MacroExpansionInfo_format___closed__3));
v___x_1318_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1316_);
lean_ctor_set(v___x_1318_, 1, v___x_1317_);
v___x_1319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set(v___x_1319_, 1, v_a_1311_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1319_);
v___x_1321_ = v___x_1313_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1319_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_MacroExpansionInfo_format___boxed(lean_object* v_ctx_1324_, lean_object* v_info_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lean_Elab_MacroExpansionInfo_format(v_ctx_1324_, v_info_1325_);
lean_dec_ref(v_ctx_1324_);
return v_res_1327_;
}
}
static lean_object* _init_l_Lean_Elab_UserWidgetInfo_format___closed__0(void){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
return v___x_1329_;
}
}
static lean_object* _init_l_Lean_Elab_UserWidgetInfo_format___closed__1(void){
_start:
{
uint8_t v___x_1330_; size_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1330_ = 1;
v___x_1331_ = ((size_t)0ULL);
v___x_1332_ = lean_obj_once(&l_Lean_Elab_UserWidgetInfo_format___closed__0, &l_Lean_Elab_UserWidgetInfo_format___closed__0_once, _init_l_Lean_Elab_UserWidgetInfo_format___closed__0);
v___x_1333_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
lean_ctor_set_usize(v___x_1333_, 2, v___x_1331_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*3, v___x_1330_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_UserWidgetInfo_format(lean_object* v_info_1337_){
_start:
{
lean_object* v_toWidgetInstance_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1367_; 
v_toWidgetInstance_1338_ = lean_ctor_get(v_info_1337_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v_info_1337_);
if (v_isSharedCheck_1367_ == 0)
{
lean_object* v_unused_1368_; 
v_unused_1368_ = lean_ctor_get(v_info_1337_, 1);
lean_dec(v_unused_1368_);
v___x_1340_ = v_info_1337_;
v_isShared_1341_ = v_isSharedCheck_1367_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_toWidgetInstance_1338_);
lean_dec(v_info_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1367_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v_id_1342_; lean_object* v_props_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v_fst_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1365_; 
v_id_1342_ = lean_ctor_get(v_toWidgetInstance_1338_, 0);
lean_inc(v_id_1342_);
v_props_1343_ = lean_ctor_get(v_toWidgetInstance_1338_, 1);
lean_inc_ref(v_props_1343_);
lean_dec_ref(v_toWidgetInstance_1338_);
v___x_1344_ = lean_obj_once(&l_Lean_Elab_UserWidgetInfo_format___closed__1, &l_Lean_Elab_UserWidgetInfo_format___closed__1_once, _init_l_Lean_Elab_UserWidgetInfo_format___closed__1);
v___x_1345_ = lean_apply_1(v_props_1343_, v___x_1344_);
v_fst_1346_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1365_ == 0)
{
lean_object* v_unused_1366_; 
v_unused_1366_ = lean_ctor_get(v___x_1345_, 1);
lean_dec(v_unused_1366_);
v___x_1348_ = v___x_1345_;
v_isShared_1349_ = v_isSharedCheck_1365_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_fst_1346_);
lean_dec(v___x_1345_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1365_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; uint8_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1350_ = ((lean_object*)(l_Lean_Elab_UserWidgetInfo_format___closed__3));
v___x_1351_ = 1;
v___x_1352_ = l_Lean_Name_toString(v_id_1342_, v___x_1351_);
v___x_1353_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set_tag(v___x_1348_, 5);
lean_ctor_set(v___x_1348_, 1, v___x_1353_);
lean_ctor_set(v___x_1348_, 0, v___x_1350_);
v___x_1355_ = v___x_1348_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1350_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1356_ = ((lean_object*)(l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1));
if (v_isShared_1341_ == 0)
{
lean_ctor_set_tag(v___x_1340_, 5);
lean_ctor_set(v___x_1340_, 1, v___x_1356_);
lean_ctor_set(v___x_1340_, 0, v___x_1355_);
v___x_1358_ = v___x_1340_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1355_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1359_ = lean_unsigned_to_nat(80u);
v___x_1360_ = l_Lean_Json_pretty(v_fst_1346_, v___x_1359_);
v___x_1361_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
v___x_1362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1358_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
return v___x_1362_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FVarAliasInfo_format(lean_object* v_info_1375_){
_start:
{
lean_object* v_userName_1376_; lean_object* v_id_1377_; lean_object* v_baseId_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v_userName_1376_ = lean_ctor_get(v_info_1375_, 0);
lean_inc(v_userName_1376_);
v_id_1377_ = lean_ctor_get(v_info_1375_, 1);
lean_inc(v_id_1377_);
v_baseId_1378_ = lean_ctor_get(v_info_1375_, 2);
lean_inc(v_baseId_1378_);
lean_dec_ref(v_info_1375_);
v___x_1379_ = ((lean_object*)(l_Lean_Elab_FVarAliasInfo_format___closed__1));
v___x_1380_ = l_Lean_Name_eraseMacroScopes(v_userName_1376_);
lean_dec(v_userName_1376_);
v___x_1381_ = 1;
v___x_1382_ = l_Lean_Name_toString(v___x_1380_, v___x_1381_);
v___x_1383_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
v___x_1384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1379_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
v___x_1385_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__1));
v___x_1386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1384_);
lean_ctor_set(v___x_1386_, 1, v___x_1385_);
v___x_1387_ = l_Lean_Name_toString(v_id_1377_, v___x_1381_);
v___x_1388_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
v___x_1389_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1386_);
lean_ctor_set(v___x_1389_, 1, v___x_1388_);
v___x_1390_ = ((lean_object*)(l_Lean_Elab_FVarAliasInfo_format___closed__3));
v___x_1391_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1389_);
lean_ctor_set(v___x_1391_, 1, v___x_1390_);
v___x_1392_ = l_Lean_Name_toString(v_baseId_1378_, v___x_1381_);
v___x_1393_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
v___x_1394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1391_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldRedeclInfo_format(lean_object* v_ctx_1398_, lean_object* v_info_1399_){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1400_ = ((lean_object*)(l_Lean_Elab_FieldRedeclInfo_format___closed__1));
v___x_1401_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_1398_, v_info_1399_);
v___x_1402_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldRedeclInfo_format___boxed(lean_object* v_ctx_1403_, lean_object* v_info_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_Elab_FieldRedeclInfo_format(v_ctx_1403_, v_info_1404_);
lean_dec(v_info_1404_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f(lean_object* v_ppCtx_1408_, lean_object* v_info_1409_){
_start:
{
lean_object* v_mkDocString_x3f_1411_; 
v_mkDocString_x3f_1411_ = lean_ctor_get(v_info_1409_, 2);
lean_inc(v_mkDocString_x3f_1411_);
lean_dec_ref(v_info_1409_);
if (lean_obj_tag(v_mkDocString_x3f_1411_) == 0)
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_dec_ref(v_ppCtx_1408_);
v___x_1412_ = lean_box(0);
v___x_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
return v___x_1413_;
}
else
{
lean_object* v_val_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1446_; 
v_val_1414_ = lean_ctor_get(v_mkDocString_x3f_1411_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v_mkDocString_x3f_1411_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1416_ = v_mkDocString_x3f_1411_;
v_isShared_1417_ = v_isSharedCheck_1446_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_val_1414_);
lean_dec(v_mkDocString_x3f_1411_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1446_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_apply_2(v_val_1414_, v_ppCtx_1408_, lean_box(0));
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1429_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1421_ = v___x_1418_;
v_isShared_1422_ = v_isSharedCheck_1429_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1418_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1429_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v_a_1419_);
v___x_1424_ = v___x_1416_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1426_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 0, v___x_1424_);
v___x_1426_ = v___x_1421_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1424_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1445_; 
v_a_1430_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1432_ = v___x_1418_;
v_isShared_1433_ = v_isSharedCheck_1445_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1418_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1445_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1440_; 
v___x_1434_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__0));
v___x_1435_ = lean_io_error_to_string(v_a_1430_);
v___x_1436_ = lean_string_append(v___x_1434_, v___x_1435_);
lean_dec_ref(v___x_1435_);
v___x_1437_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1));
v___x_1438_ = lean_string_append(v___x_1436_, v___x_1437_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v___x_1438_);
v___x_1440_ = v___x_1416_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1438_);
v___x_1440_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___x_1442_; 
if (v_isShared_1433_ == 0)
{
lean_ctor_set_tag(v___x_1432_, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1440_);
v___x_1442_ = v___x_1432_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f___boxed(lean_object* v_ppCtx_1447_, lean_object* v_info_1448_, lean_object* v_a_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Lean_Elab_DelabTermInfo_docString_x3f(v_ppCtx_1447_, v_info_1448_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0(lean_object* v_x_1451_, lean_object* v_x_1452_){
_start:
{
if (lean_obj_tag(v_x_1451_) == 0)
{
lean_object* v___x_1453_; 
v___x_1453_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1));
return v___x_1453_;
}
else
{
lean_object* v_val_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1465_; 
v_val_1454_ = lean_ctor_get(v_x_1451_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v_x_1451_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1456_ = v_x_1451_;
v_isShared_1457_ = v_isSharedCheck_1465_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_val_1454_);
lean_dec(v_x_1451_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1465_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1461_; 
v___x_1458_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3));
v___x_1459_ = l_String_quote(v_val_1454_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set_tag(v___x_1456_, 3);
lean_ctor_set(v___x_1456_, 0, v___x_1459_);
v___x_1461_ = v___x_1456_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1459_);
v___x_1461_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1458_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
v___x_1463_ = l_Repr_addAppParen(v___x_1462_, v_x_1452_);
return v___x_1463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0___boxed(lean_object* v_x_1466_, lean_object* v_x_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0(v_x_1466_, v_x_1467_);
lean_dec(v_x_1467_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_format(lean_object* v_ctx_1483_, lean_object* v_info_1484_){
_start:
{
lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v_toTermInfo_1492_; lean_object* v_location_x3f_1493_; uint8_t v_explicit_1494_; lean_object* v___y_1496_; 
v_toTermInfo_1492_ = lean_ctor_get(v_info_1484_, 0);
lean_inc_ref(v_toTermInfo_1492_);
v_location_x3f_1493_ = lean_ctor_get(v_info_1484_, 1);
lean_inc(v_location_x3f_1493_);
v_explicit_1494_ = lean_ctor_get_uint8(v_info_1484_, sizeof(void*)*3);
if (lean_obj_tag(v_location_x3f_1493_) == 1)
{
lean_object* v_val_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1578_; 
v_val_1517_ = lean_ctor_get(v_location_x3f_1493_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v_location_x3f_1493_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1519_ = v_location_x3f_1493_;
v_isShared_1520_ = v_isSharedCheck_1578_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_val_1517_);
lean_dec(v_location_x3f_1493_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1578_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v_range_1521_; lean_object* v_pos_1522_; lean_object* v_endPos_1523_; lean_object* v_module_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1576_; 
v_range_1521_ = lean_ctor_get(v_val_1517_, 1);
v_pos_1522_ = lean_ctor_get(v_range_1521_, 0);
lean_inc_ref(v_pos_1522_);
v_endPos_1523_ = lean_ctor_get(v_range_1521_, 2);
lean_inc_ref(v_endPos_1523_);
v_module_1524_ = lean_ctor_get(v_val_1517_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v_val_1517_);
if (v_isSharedCheck_1576_ == 0)
{
lean_object* v_unused_1577_; 
v_unused_1577_ = lean_ctor_get(v_val_1517_, 1);
lean_dec(v_unused_1577_);
v___x_1526_ = v_val_1517_;
v_isShared_1527_ = v_isSharedCheck_1576_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_module_1524_);
lean_dec(v_val_1517_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1576_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v_line_1528_; lean_object* v_column_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1575_; 
v_line_1528_ = lean_ctor_get(v_pos_1522_, 0);
v_column_1529_ = lean_ctor_get(v_pos_1522_, 1);
v_isSharedCheck_1575_ = !lean_is_exclusive(v_pos_1522_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1531_ = v_pos_1522_;
v_isShared_1532_ = v_isSharedCheck_1575_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_column_1529_);
lean_inc(v_line_1528_);
lean_dec(v_pos_1522_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1575_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v_line_1533_; lean_object* v_column_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1574_; 
v_line_1533_ = lean_ctor_get(v_endPos_1523_, 0);
v_column_1534_ = lean_ctor_get(v_endPos_1523_, 1);
v_isSharedCheck_1574_ = !lean_is_exclusive(v_endPos_1523_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1536_ = v_endPos_1523_;
v_isShared_1537_ = v_isSharedCheck_1574_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_column_1534_);
lean_inc(v_line_1533_);
lean_dec(v_endPos_1523_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1574_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
uint8_t v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1538_ = 1;
v___x_1539_ = l_Lean_Name_toString(v_module_1524_, v___x_1538_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set_tag(v___x_1519_, 3);
lean_ctor_set(v___x_1519_, 0, v___x_1539_);
v___x_1541_ = v___x_1519_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1544_; 
v___x_1542_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__5));
if (v_isShared_1537_ == 0)
{
lean_ctor_set_tag(v___x_1536_, 5);
lean_ctor_set(v___x_1536_, 1, v___x_1542_);
lean_ctor_set(v___x_1536_, 0, v___x_1541_);
v___x_1544_ = v___x_1536_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1541_);
lean_ctor_set(v_reuseFailAlloc_1572_, 1, v___x_1542_);
v___x_1544_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1549_; 
v___x_1545_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1));
v___x_1546_ = l_Nat_reprFast(v_line_1528_);
v___x_1547_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
if (v_isShared_1532_ == 0)
{
lean_ctor_set_tag(v___x_1531_, 5);
lean_ctor_set(v___x_1531_, 1, v___x_1547_);
lean_ctor_set(v___x_1531_, 0, v___x_1545_);
v___x_1549_ = v___x_1531_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1545_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1550_; lean_object* v___x_1552_; 
v___x_1550_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3));
if (v_isShared_1527_ == 0)
{
lean_ctor_set_tag(v___x_1526_, 5);
lean_ctor_set(v___x_1526_, 1, v___x_1550_);
lean_ctor_set(v___x_1526_, 0, v___x_1549_);
v___x_1552_ = v___x_1526_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1549_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1553_ = l_Nat_reprFast(v_column_1529_);
v___x_1554_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
v___x_1555_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1552_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v___x_1556_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5));
v___x_1557_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1555_);
lean_ctor_set(v___x_1557_, 1, v___x_1556_);
v___x_1558_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1544_);
lean_ctor_set(v___x_1558_, 1, v___x_1557_);
v___x_1559_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1));
v___x_1560_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1558_);
lean_ctor_set(v___x_1560_, 1, v___x_1559_);
v___x_1561_ = l_Nat_reprFast(v_line_1533_);
v___x_1562_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
v___x_1563_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1545_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
lean_ctor_set(v___x_1564_, 1, v___x_1550_);
v___x_1565_ = l_Nat_reprFast(v_column_1534_);
v___x_1566_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
v___x_1567_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1564_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
v___x_1568_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
lean_ctor_set(v___x_1568_, 1, v___x_1556_);
v___x_1569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1560_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
v___y_1496_ = v___x_1569_;
goto v___jp_1495_;
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
lean_object* v___x_1579_; 
lean_dec(v_location_x3f_1493_);
v___x_1579_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1));
v___y_1496_ = v___x_1579_;
goto v___jp_1495_;
}
v___jp_1486_:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_inc_ref(v___y_1488_);
v___x_1489_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1489_, 0, v___y_1488_);
v___x_1490_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___y_1487_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
v___x_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
return v___x_1491_;
}
v___jp_1495_:
{
lean_object* v_lctx_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v_a_1500_; lean_object* v___x_1501_; 
v_lctx_1497_ = lean_ctor_get(v_toTermInfo_1492_, 1);
lean_inc_ref(v_lctx_1497_);
v___x_1498_ = l_Lean_Elab_ContextInfo_toPPContext(v_ctx_1483_, v_lctx_1497_);
v___x_1499_ = l_Lean_Elab_DelabTermInfo_docString_x3f(v___x_1498_, v_info_1484_);
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1500_);
lean_dec_ref(v___x_1499_);
v___x_1501_ = l_Lean_Elab_TermInfo_format(v_ctx_1483_, v_toTermInfo_1492_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__1));
v___x_1504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
lean_ctor_set(v___x_1504_, 1, v_a_1502_);
v___x_1505_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__3));
v___x_1506_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1504_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
v___x_1507_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1506_);
lean_ctor_set(v___x_1507_, 1, v___y_1496_);
v___x_1508_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__5));
v___x_1509_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1507_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
v___x_1510_ = lean_unsigned_to_nat(0u);
v___x_1511_ = l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0(v_a_1500_, v___x_1510_);
v___x_1512_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1509_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__7));
v___x_1514_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1512_);
lean_ctor_set(v___x_1514_, 1, v___x_1513_);
if (v_explicit_1494_ == 0)
{
lean_object* v___x_1515_; 
v___x_1515_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__8));
v___y_1487_ = v___x_1514_;
v___y_1488_ = v___x_1515_;
goto v___jp_1486_;
}
else
{
lean_object* v___x_1516_; 
v___x_1516_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__9));
v___y_1487_ = v___x_1514_;
v___y_1488_ = v___x_1516_;
goto v___jp_1486_;
}
}
else
{
lean_dec(v_a_1500_);
lean_dec(v___y_1496_);
return v___x_1501_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_format___boxed(lean_object* v_ctx_1580_, lean_object* v_info_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lean_Elab_DelabTermInfo_format(v_ctx_1580_, v_info_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ChoiceInfo_format(lean_object* v_ctx_1587_, lean_object* v_info_1588_){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1589_ = ((lean_object*)(l_Lean_Elab_ChoiceInfo_format___closed__1));
v___x_1590_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_1587_, v_info_1588_);
v___x_1591_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1589_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ChoiceResolutionInfo_format(lean_object* v_ctx_1604_, lean_object* v_info_1605_){
_start:
{
lean_object* v_stx_1606_; lean_object* v_chosenAltIdx_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1635_; 
v_stx_1606_ = lean_ctor_get(v_info_1605_, 0);
v_chosenAltIdx_1607_ = lean_ctor_get(v_info_1605_, 1);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_info_1605_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1609_ = v_info_1605_;
v_isShared_1610_ = v_isSharedCheck_1635_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_chosenAltIdx_1607_);
lean_inc(v_stx_1606_);
lean_dec(v_info_1605_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1635_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1615_; 
v___x_1611_ = ((lean_object*)(l_Lean_Elab_ChoiceResolutionInfo_format___closed__1));
lean_inc(v_chosenAltIdx_1607_);
v___x_1612_ = l_Nat_reprFast(v_chosenAltIdx_1607_);
v___x_1613_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set_tag(v___x_1609_, 5);
lean_ctor_set(v___x_1609_, 1, v___x_1613_);
lean_ctor_set(v___x_1609_, 0, v___x_1611_);
v___x_1615_ = v___x_1609_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1611_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v___x_1613_);
v___x_1615_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1616_ = ((lean_object*)(l_Lean_Elab_ChoiceResolutionInfo_format___closed__3));
v___x_1617_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1615_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = l_Lean_Syntax_getNumArgs(v_stx_1606_);
v___x_1619_ = l_Nat_reprFast(v___x_1618_);
v___x_1620_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
v___x_1621_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1617_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v___x_1622_ = ((lean_object*)(l_Lean_Elab_ChoiceResolutionInfo_format___closed__5));
v___x_1623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = l_Lean_Syntax_getArg(v_stx_1606_, v_chosenAltIdx_1607_);
lean_dec(v_chosenAltIdx_1607_);
v___x_1625_ = l_Lean_Syntax_getKind(v___x_1624_);
v___x_1626_ = 1;
v___x_1627_ = l_Lean_Name_toString(v___x_1625_, v___x_1626_);
v___x_1628_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
v___x_1629_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1623_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = ((lean_object*)(l_Lean_Elab_ChoiceResolutionInfo_format___closed__7));
v___x_1631_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1629_);
lean_ctor_set(v___x_1631_, 1, v___x_1630_);
v___x_1632_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_1604_, v_stx_1606_);
lean_dec(v_stx_1606_);
v___x_1633_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1631_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
return v___x_1633_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocInfo_format(lean_object* v_ctx_1639_, lean_object* v_info_1640_){
_start:
{
lean_object* v_stx_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; uint8_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v_stx_1641_ = lean_ctor_get(v_info_1640_, 1);
v___x_1642_ = ((lean_object*)(l_Lean_Elab_DocInfo_format___closed__1));
lean_inc(v_stx_1641_);
v___x_1643_ = l_Lean_Syntax_getKind(v_stx_1641_);
v___x_1644_ = 1;
v___x_1645_ = l_Lean_Name_toString(v___x_1643_, v___x_1644_);
v___x_1646_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
v___x_1647_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1642_);
lean_ctor_set(v___x_1647_, 1, v___x_1646_);
v___x_1648_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_1649_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1647_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
v___x_1650_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_1639_, v_info_1640_);
v___x_1651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1649_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabInfo_format(lean_object* v_ctx_1655_, lean_object* v_info_1656_){
_start:
{
lean_object* v_toElabInfo_1657_; lean_object* v_name_1658_; uint8_t v_kind_1659_; lean_object* v___x_1660_; uint8_t v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_toElabInfo_1657_ = lean_ctor_get(v_info_1656_, 0);
lean_inc_ref(v_toElabInfo_1657_);
v_name_1658_ = lean_ctor_get(v_info_1656_, 1);
lean_inc(v_name_1658_);
v_kind_1659_ = lean_ctor_get_uint8(v_info_1656_, sizeof(void*)*2);
lean_dec_ref(v_info_1656_);
v___x_1660_ = ((lean_object*)(l_Lean_Elab_DocElabInfo_format___closed__1));
v___x_1661_ = 1;
v___x_1662_ = l_Lean_Name_toString(v_name_1658_, v___x_1661_);
v___x_1663_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
v___x_1664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1660_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
v___x_1665_ = ((lean_object*)(l_Lean_Elab_ChoiceResolutionInfo_format___closed__5));
v___x_1666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = lean_unsigned_to_nat(0u);
v___x_1668_ = l_Lean_Elab_instReprDocElabKind_repr(v_kind_1659_, v___x_1667_);
v___x_1669_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1666_);
lean_ctor_set(v___x_1669_, 1, v___x_1668_);
v___x_1670_ = ((lean_object*)(l_Lean_Elab_ChoiceResolutionInfo_format___closed__7));
v___x_1671_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_1655_, v_toElabInfo_1657_);
v___x_1673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1671_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_format(lean_object* v_ctx_1674_, lean_object* v_x_1675_){
_start:
{
switch(lean_obj_tag(v_x_1675_))
{
case 0:
{
lean_object* v_i_1677_; lean_object* v___x_1678_; 
v_i_1677_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1677_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1678_ = l_Lean_Elab_TacticInfo_format(v_ctx_1674_, v_i_1677_);
return v___x_1678_;
}
case 1:
{
lean_object* v_i_1679_; lean_object* v___x_1680_; 
v_i_1679_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1679_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1680_ = l_Lean_Elab_TermInfo_format(v_ctx_1674_, v_i_1679_);
return v___x_1680_;
}
case 2:
{
lean_object* v_i_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1689_; 
v_i_1681_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1683_ = v_x_1675_;
v_isShared_1684_ = v_isSharedCheck_1689_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_i_1681_);
lean_dec(v_x_1675_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1689_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1685_; lean_object* v___x_1687_; 
v___x_1685_ = l_Lean_Elab_PartialTermInfo_format(v_ctx_1674_, v_i_1681_);
if (v_isShared_1684_ == 0)
{
lean_ctor_set_tag(v___x_1683_, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1685_);
v___x_1687_ = v___x_1683_;
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
case 3:
{
lean_object* v_i_1690_; lean_object* v___x_1691_; 
v_i_1690_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1690_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1691_ = l_Lean_Elab_CommandInfo_format(v_ctx_1674_, v_i_1690_);
return v___x_1691_;
}
case 4:
{
lean_object* v_i_1692_; lean_object* v___x_1693_; 
v_i_1692_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1692_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1693_ = l_Lean_Elab_MacroExpansionInfo_format(v_ctx_1674_, v_i_1692_);
lean_dec_ref(v_ctx_1674_);
return v___x_1693_;
}
case 5:
{
lean_object* v_i_1694_; lean_object* v___x_1695_; 
v_i_1694_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1694_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1695_ = l_Lean_Elab_OptionInfo_format(v_ctx_1674_, v_i_1694_);
return v___x_1695_;
}
case 6:
{
lean_object* v_i_1696_; lean_object* v___x_1697_; 
v_i_1696_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1696_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1697_ = l_Lean_Elab_ErrorNameInfo_format(v_ctx_1674_, v_i_1696_);
return v___x_1697_;
}
case 7:
{
lean_object* v_i_1698_; lean_object* v___x_1699_; 
v_i_1698_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1698_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1699_ = l_Lean_Elab_FieldInfo_format(v_ctx_1674_, v_i_1698_);
return v___x_1699_;
}
case 8:
{
lean_object* v_i_1700_; lean_object* v___x_1701_; 
v_i_1700_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1700_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1701_ = l_Lean_Elab_CompletionInfo_format(v_ctx_1674_, v_i_1700_);
return v___x_1701_;
}
case 9:
{
lean_object* v_i_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1710_; 
lean_dec_ref(v_ctx_1674_);
v_i_1702_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1704_ = v_x_1675_;
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_i_1702_);
lean_dec(v_x_1675_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1706_ = l_Lean_Elab_UserWidgetInfo_format(v_i_1702_);
if (v_isShared_1705_ == 0)
{
lean_ctor_set_tag(v___x_1704_, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1706_);
v___x_1708_ = v___x_1704_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v___x_1706_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
case 10:
{
lean_object* v_i_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1719_; 
lean_dec_ref(v_ctx_1674_);
v_i_1711_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1713_ = v_x_1675_;
v_isShared_1714_ = v_isSharedCheck_1719_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_i_1711_);
lean_dec(v_x_1675_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1719_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1715_; lean_object* v___x_1717_; 
v___x_1715_ = l_Lean_Elab_CustomInfo_format(v_i_1711_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set_tag(v___x_1713_, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1715_);
v___x_1717_ = v___x_1713_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v___x_1715_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
case 11:
{
lean_object* v_i_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v_ctx_1674_);
v_i_1720_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1722_ = v_x_1675_;
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_i_1720_);
lean_dec(v_x_1675_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1724_; lean_object* v___x_1726_; 
v___x_1724_ = l_Lean_Elab_FVarAliasInfo_format(v_i_1720_);
if (v_isShared_1723_ == 0)
{
lean_ctor_set_tag(v___x_1722_, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1724_);
v___x_1726_ = v___x_1722_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1724_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
case 12:
{
lean_object* v_i_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1737_; 
v_i_1729_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1731_ = v_x_1675_;
v_isShared_1732_ = v_isSharedCheck_1737_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_i_1729_);
lean_dec(v_x_1675_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1737_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1733_; lean_object* v___x_1735_; 
v___x_1733_ = l_Lean_Elab_FieldRedeclInfo_format(v_ctx_1674_, v_i_1729_);
lean_dec(v_i_1729_);
if (v_isShared_1732_ == 0)
{
lean_ctor_set_tag(v___x_1731_, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1733_);
v___x_1735_ = v___x_1731_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
case 13:
{
lean_object* v_i_1738_; lean_object* v___x_1739_; 
v_i_1738_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_i_1738_);
lean_dec_ref_known(v_x_1675_, 1);
v___x_1739_ = l_Lean_Elab_DelabTermInfo_format(v_ctx_1674_, v_i_1738_);
return v___x_1739_;
}
case 14:
{
lean_object* v_i_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1748_; 
v_i_1740_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1742_ = v_x_1675_;
v_isShared_1743_ = v_isSharedCheck_1748_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_i_1740_);
lean_dec(v_x_1675_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1748_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
v___x_1744_ = l_Lean_Elab_ChoiceInfo_format(v_ctx_1674_, v_i_1740_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set_tag(v___x_1742_, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1744_);
v___x_1746_ = v___x_1742_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1744_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
case 15:
{
lean_object* v_i_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1757_; 
v_i_1749_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1751_ = v_x_1675_;
v_isShared_1752_ = v_isSharedCheck_1757_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_i_1749_);
lean_dec(v_x_1675_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1757_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1753_; lean_object* v___x_1755_; 
v___x_1753_ = l_Lean_Elab_ChoiceResolutionInfo_format(v_ctx_1674_, v_i_1749_);
if (v_isShared_1752_ == 0)
{
lean_ctor_set_tag(v___x_1751_, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1753_);
v___x_1755_ = v___x_1751_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v___x_1753_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
case 16:
{
lean_object* v_i_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1766_; 
v_i_1758_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1760_ = v_x_1675_;
v_isShared_1761_ = v_isSharedCheck_1766_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_i_1758_);
lean_dec(v_x_1675_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1766_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
v___x_1762_ = l_Lean_Elab_DocInfo_format(v_ctx_1674_, v_i_1758_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set_tag(v___x_1760_, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1762_);
v___x_1764_ = v___x_1760_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
default: 
{
lean_object* v_i_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1775_; 
v_i_1767_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1769_ = v_x_1675_;
v_isShared_1770_ = v_isSharedCheck_1775_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_i_1767_);
lean_dec(v_x_1675_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1775_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1771_; lean_object* v___x_1773_; 
v___x_1771_ = l_Lean_Elab_DocElabInfo_format(v_ctx_1674_, v_i_1767_);
if (v_isShared_1770_ == 0)
{
lean_ctor_set_tag(v___x_1769_, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1771_);
v___x_1773_ = v___x_1769_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v___x_1771_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_format___boxed(lean_object* v_ctx_1776_, lean_object* v_x_1777_, lean_object* v_a_1778_){
_start:
{
lean_object* v_res_1779_; 
v_res_1779_ = l_Lean_Elab_Info_format(v_ctx_1776_, v_x_1777_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0(lean_object* v_x_1780_, lean_object* v_x_1781_){
_start:
{
if (lean_obj_tag(v_x_1781_) == 0)
{
return v_x_1780_;
}
else
{
lean_object* v_head_1782_; lean_object* v_tail_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v_head_1782_ = lean_ctor_get(v_x_1781_, 0);
v_tail_1783_ = lean_ctor_get(v_x_1781_, 1);
v___x_1784_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2));
v___x_1785_ = lean_string_append(v_x_1780_, v___x_1784_);
v___x_1786_ = lean_expr_dbg_to_string(v_head_1782_);
v___x_1787_ = lean_string_append(v___x_1785_, v___x_1786_);
lean_dec_ref(v___x_1786_);
v_x_1780_ = v___x_1787_;
v_x_1781_ = v_tail_1783_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0___boxed(lean_object* v_x_1789_, lean_object* v_x_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0(v_x_1789_, v_x_1790_);
lean_dec(v_x_1790_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0(lean_object* v_x_1794_){
_start:
{
if (lean_obj_tag(v_x_1794_) == 0)
{
lean_object* v___x_1795_; 
v___x_1795_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__0));
return v___x_1795_;
}
else
{
lean_object* v_tail_1796_; 
v_tail_1796_ = lean_ctor_get(v_x_1794_, 1);
if (lean_obj_tag(v_tail_1796_) == 0)
{
lean_object* v_head_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
v_head_1797_ = lean_ctor_get(v_x_1794_, 0);
v___x_1798_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1));
v___x_1799_ = lean_expr_dbg_to_string(v_head_1797_);
v___x_1800_ = lean_string_append(v___x_1798_, v___x_1799_);
lean_dec_ref(v___x_1799_);
v___x_1801_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1));
v___x_1802_ = lean_string_append(v___x_1800_, v___x_1801_);
return v___x_1802_;
}
else
{
lean_object* v_head_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; uint32_t v___x_1808_; lean_object* v___x_1809_; 
v_head_1803_ = lean_ctor_get(v_x_1794_, 0);
v___x_1804_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1));
v___x_1805_ = lean_expr_dbg_to_string(v_head_1803_);
v___x_1806_ = lean_string_append(v___x_1804_, v___x_1805_);
lean_dec_ref(v___x_1805_);
v___x_1807_ = l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0(v___x_1806_, v_tail_1796_);
v___x_1808_ = 93;
v___x_1809_ = lean_string_push(v___x_1807_, v___x_1808_);
return v___x_1809_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___boxed(lean_object* v_x_1810_){
_start:
{
lean_object* v_res_1811_; 
v_res_1811_ = l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0(v_x_1810_);
lean_dec(v_x_1810_);
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_format(lean_object* v_ctx_1818_){
_start:
{
switch(lean_obj_tag(v_ctx_1818_))
{
case 0:
{
lean_object* v___x_1819_; 
lean_dec_ref_known(v_ctx_1818_, 1);
v___x_1819_ = ((lean_object*)(l_Lean_Elab_PartialContextInfo_format___closed__1));
return v___x_1819_;
}
case 1:
{
lean_object* v_parentDecl_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1833_; 
v_parentDecl_1820_ = lean_ctor_get(v_ctx_1818_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_ctx_1818_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1822_ = v_ctx_1818_;
v_isShared_1823_ = v_isSharedCheck_1833_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_parentDecl_1820_);
lean_dec(v_ctx_1818_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1833_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1824_; uint8_t v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1831_; 
v___x_1824_ = ((lean_object*)(l_Lean_Elab_PartialContextInfo_format___closed__2));
v___x_1825_ = 1;
v___x_1826_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_parentDecl_1820_, v___x_1825_);
v___x_1827_ = lean_string_append(v___x_1824_, v___x_1826_);
lean_dec_ref(v___x_1826_);
v___x_1828_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1));
v___x_1829_ = lean_string_append(v___x_1827_, v___x_1828_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set_tag(v___x_1822_, 3);
lean_ctor_set(v___x_1822_, 0, v___x_1829_);
v___x_1831_ = v___x_1822_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v___x_1829_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
default: 
{
lean_object* v_autoImplicits_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1849_; 
v_autoImplicits_1834_ = lean_ctor_get(v_ctx_1818_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_ctx_1818_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1836_ = v_ctx_1818_;
v_isShared_1837_ = v_isSharedCheck_1849_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_autoImplicits_1834_);
lean_dec(v_ctx_1818_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1849_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1847_; 
v___x_1838_ = ((lean_object*)(l_Lean_Elab_PartialContextInfo_format___closed__3));
v___x_1839_ = ((lean_object*)(l_Lean_Elab_PartialContextInfo_format___closed__4));
v___x_1840_ = lean_array_to_list(v_autoImplicits_1834_);
v___x_1841_ = l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0(v___x_1840_);
lean_dec(v___x_1840_);
v___x_1842_ = lean_string_append(v___x_1839_, v___x_1841_);
lean_dec_ref(v___x_1841_);
v___x_1843_ = lean_string_append(v___x_1838_, v___x_1842_);
lean_dec_ref(v___x_1842_);
v___x_1844_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1));
v___x_1845_ = lean_string_append(v___x_1843_, v___x_1844_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set_tag(v___x_1836_, 3);
lean_ctor_set(v___x_1836_, 0, v___x_1845_);
v___x_1847_ = v___x_1836_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_format(lean_object* v_tree_1859_, lean_object* v_ctx_x3f_1860_){
_start:
{
switch(lean_obj_tag(v_tree_1859_))
{
case 0:
{
lean_object* v_i_1862_; lean_object* v_t_1863_; lean_object* v___x_1864_; 
v_i_1862_ = lean_ctor_get(v_tree_1859_, 0);
lean_inc_ref(v_i_1862_);
v_t_1863_ = lean_ctor_get(v_tree_1859_, 1);
lean_inc_ref(v_t_1863_);
lean_dec_ref_known(v_tree_1859_, 2);
v___x_1864_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_1862_, v_ctx_x3f_1860_);
v_tree_1859_ = v_t_1863_;
v_ctx_x3f_1860_ = v___x_1864_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_ctx_x3f_1860_) == 0)
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
lean_dec_ref_known(v_tree_1859_, 2);
v___x_1866_ = ((lean_object*)(l_Lean_Elab_InfoTree_format___closed__1));
v___x_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
return v___x_1867_;
}
else
{
lean_object* v_i_1868_; lean_object* v_children_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1919_; 
v_i_1868_ = lean_ctor_get(v_tree_1859_, 0);
v_children_1869_ = lean_ctor_get(v_tree_1859_, 1);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_tree_1859_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1871_ = v_tree_1859_;
v_isShared_1872_ = v_isSharedCheck_1919_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_children_1869_);
lean_inc(v_i_1868_);
lean_dec(v_tree_1859_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1919_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v_val_1873_; lean_object* v___x_1874_; 
v_val_1873_ = lean_ctor_get(v_ctx_x3f_1860_, 0);
lean_inc_ref(v_i_1868_);
lean_inc(v_val_1873_);
v___x_1874_ = l_Lean_Elab_Info_format(v_val_1873_, v_i_1868_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1918_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1877_ = v___x_1874_;
v_isShared_1878_ = v_isSharedCheck_1918_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1918_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v_size_1879_; lean_object* v___x_1880_; uint8_t v___x_1881_; 
v_size_1879_ = lean_ctor_get(v_children_1869_, 2);
v___x_1880_ = lean_unsigned_to_nat(0u);
v___x_1881_ = lean_nat_dec_eq(v_size_1879_, v___x_1880_);
if (v___x_1881_ == 0)
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
lean_del_object(v___x_1877_);
v___x_1882_ = l_Lean_Elab_Info_updateContext_x3f(v_ctx_x3f_1860_, v_i_1868_);
lean_dec_ref(v_i_1868_);
v___x_1883_ = l_Lean_PersistentArray_toList___redArg(v_children_1869_);
lean_dec_ref(v_children_1869_);
v___x_1884_ = lean_box(0);
v___x_1885_ = l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0(v___x_1882_, v___x_1883_, v___x_1884_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1901_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1888_ = v___x_1885_;
v_isShared_1889_ = v_isSharedCheck_1901_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1885_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1901_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1890_; lean_object* v___x_1892_; 
v___x_1890_ = ((lean_object*)(l_Lean_Elab_InfoTree_format___closed__3));
if (v_isShared_1872_ == 0)
{
lean_ctor_set_tag(v___x_1871_, 5);
lean_ctor_set(v___x_1871_, 1, v_a_1875_);
lean_ctor_set(v___x_1871_, 0, v___x_1890_);
v___x_1892_ = v___x_1871_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v___x_1890_);
lean_ctor_set(v_reuseFailAlloc_1900_, 1, v_a_1875_);
v___x_1892_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1898_; 
v___x_1893_ = lean_box(1);
v___x_1894_ = l_Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1(v___x_1893_, v_a_1886_);
v___x_1895_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1892_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
v___x_1896_ = l_Std_Format_nestD(v___x_1895_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 0, v___x_1896_);
v___x_1898_ = v___x_1888_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1896_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
lean_dec(v_a_1875_);
lean_del_object(v___x_1871_);
v_a_1902_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1885_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1885_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
else
{
lean_object* v___x_1910_; lean_object* v___x_1912_; 
lean_dec_ref(v_children_1869_);
lean_dec_ref(v_i_1868_);
lean_dec_ref_known(v_ctx_x3f_1860_, 1);
v___x_1910_ = ((lean_object*)(l_Lean_Elab_InfoTree_format___closed__3));
if (v_isShared_1872_ == 0)
{
lean_ctor_set_tag(v___x_1871_, 5);
lean_ctor_set(v___x_1871_, 1, v_a_1875_);
lean_ctor_set(v___x_1871_, 0, v___x_1910_);
v___x_1912_ = v___x_1871_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1910_);
lean_ctor_set(v_reuseFailAlloc_1917_, 1, v_a_1875_);
v___x_1912_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
lean_object* v___x_1913_; lean_object* v___x_1915_; 
v___x_1913_ = l_Std_Format_nestD(v___x_1912_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 0, v___x_1913_);
v___x_1915_ = v___x_1877_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1913_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
else
{
lean_del_object(v___x_1871_);
lean_dec_ref(v_children_1869_);
lean_dec_ref(v_i_1868_);
lean_dec_ref_known(v_ctx_x3f_1860_, 1);
return v___x_1874_;
}
}
}
}
default: 
{
lean_object* v_mvarId_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1933_; 
lean_dec(v_ctx_x3f_1860_);
v_mvarId_1920_ = lean_ctor_get(v_tree_1859_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v_tree_1859_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1922_ = v_tree_1859_;
v_isShared_1923_ = v_isSharedCheck_1933_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_mvarId_1920_);
lean_dec(v_tree_1859_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1933_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1924_; uint8_t v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1928_; 
v___x_1924_ = ((lean_object*)(l_Lean_Elab_InfoTree_format___closed__5));
v___x_1925_ = 1;
v___x_1926_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mvarId_1920_, v___x_1925_);
if (v_isShared_1923_ == 0)
{
lean_ctor_set_tag(v___x_1922_, 3);
lean_ctor_set(v___x_1922_, 0, v___x_1926_);
v___x_1928_ = v___x_1922_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1926_);
v___x_1928_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1929_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1924_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
v___x_1930_ = l_Std_Format_nestD(v___x_1929_);
v___x_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
return v___x_1931_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0(lean_object* v___x_1934_, lean_object* v_x_1935_, lean_object* v_x_1936_){
_start:
{
if (lean_obj_tag(v_x_1935_) == 0)
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
lean_dec(v___x_1934_);
v___x_1938_ = l_List_reverse___redArg(v_x_1936_);
v___x_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1938_);
return v___x_1939_;
}
else
{
lean_object* v_head_1940_; lean_object* v_tail_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1959_; 
v_head_1940_ = lean_ctor_get(v_x_1935_, 0);
v_tail_1941_ = lean_ctor_get(v_x_1935_, 1);
v_isSharedCheck_1959_ = !lean_is_exclusive(v_x_1935_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1943_ = v_x_1935_;
v_isShared_1944_ = v_isSharedCheck_1959_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_tail_1941_);
lean_inc(v_head_1940_);
lean_dec(v_x_1935_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1959_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1945_; 
lean_inc(v___x_1934_);
v___x_1945_ = l_Lean_Elab_InfoTree_format(v_head_1940_, v___x_1934_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1948_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 1, v_x_1936_);
lean_ctor_set(v___x_1943_, 0, v_a_1946_);
v___x_1948_ = v___x_1943_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1946_);
lean_ctor_set(v_reuseFailAlloc_1950_, 1, v_x_1936_);
v___x_1948_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
v_x_1935_ = v_tail_1941_;
v_x_1936_ = v___x_1948_;
goto _start;
}
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_del_object(v___x_1943_);
lean_dec(v_tail_1941_);
lean_dec(v_x_1936_);
lean_dec(v___x_1934_);
v_a_1951_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1945_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1945_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0___boxed(lean_object* v___x_1960_, lean_object* v_x_1961_, lean_object* v_x_1962_, lean_object* v___y_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0(v___x_1960_, v_x_1961_, v_x_1962_);
return v_res_1964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_format___boxed(lean_object* v_tree_1965_, lean_object* v_ctx_x3f_1966_, lean_object* v_a_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_Lean_Elab_InfoTree_format(v_tree_1965_, v_ctx_x3f_1966_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg___lam__0(lean_object* v_f_1969_, lean_object* v_s_1970_){
_start:
{
uint8_t v_enabled_1971_; lean_object* v_assignment_1972_; lean_object* v_lazyAssignment_1973_; lean_object* v_trees_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1982_; 
v_enabled_1971_ = lean_ctor_get_uint8(v_s_1970_, sizeof(void*)*3);
v_assignment_1972_ = lean_ctor_get(v_s_1970_, 0);
v_lazyAssignment_1973_ = lean_ctor_get(v_s_1970_, 1);
v_trees_1974_ = lean_ctor_get(v_s_1970_, 2);
v_isSharedCheck_1982_ = !lean_is_exclusive(v_s_1970_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1976_ = v_s_1970_;
v_isShared_1977_ = v_isSharedCheck_1982_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_trees_1974_);
lean_inc(v_lazyAssignment_1973_);
lean_inc(v_assignment_1972_);
lean_dec(v_s_1970_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1982_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1978_; lean_object* v___x_1980_; 
v___x_1978_ = lean_apply_1(v_f_1969_, v_trees_1974_);
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 2, v___x_1978_);
v___x_1980_ = v___x_1976_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_assignment_1972_);
lean_ctor_set(v_reuseFailAlloc_1981_, 1, v_lazyAssignment_1973_);
lean_ctor_set(v_reuseFailAlloc_1981_, 2, v___x_1978_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*3, v_enabled_1971_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg(lean_object* v_inst_1983_, lean_object* v_f_1984_){
_start:
{
lean_object* v_modifyInfoState_1985_; lean_object* v___f_1986_; lean_object* v___x_1987_; 
v_modifyInfoState_1985_ = lean_ctor_get(v_inst_1983_, 1);
lean_inc(v_modifyInfoState_1985_);
lean_dec_ref(v_inst_1983_);
v___f_1986_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1986_, 0, v_f_1984_);
v___x_1987_ = lean_apply_1(v_modifyInfoState_1985_, v___f_1986_);
return v___x_1987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees(lean_object* v_m_1988_, lean_object* v_inst_1989_, lean_object* v_f_1990_){
_start:
{
lean_object* v_modifyInfoState_1991_; lean_object* v___f_1992_; lean_object* v___x_1993_; 
v_modifyInfoState_1991_ = lean_ctor_get(v_inst_1989_, 1);
lean_inc(v_modifyInfoState_1991_);
lean_dec_ref(v_inst_1989_);
v___f_1992_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1992_, 0, v_f_1990_);
v___x_1993_ = lean_apply_1(v_modifyInfoState_1991_, v___f_1992_);
return v___x_1993_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1994_ = lean_unsigned_to_nat(32u);
v___x_1995_ = lean_mk_empty_array_with_capacity(v___x_1994_);
v___x_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1996_, 0, v___x_1995_);
return v___x_1996_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1(void){
_start:
{
size_t v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_1997_ = ((size_t)5ULL);
v___x_1998_ = lean_unsigned_to_nat(0u);
v___x_1999_ = lean_unsigned_to_nat(32u);
v___x_2000_ = lean_mk_empty_array_with_capacity(v___x_1999_);
v___x_2001_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0, &l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0);
v___x_2002_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
lean_ctor_set(v___x_2002_, 1, v___x_2000_);
lean_ctor_set(v___x_2002_, 2, v___x_1998_);
lean_ctor_set(v___x_2002_, 3, v___x_1998_);
lean_ctor_set_usize(v___x_2002_, 4, v___x_1997_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__0(lean_object* v_s_2003_){
_start:
{
uint8_t v_enabled_2004_; lean_object* v_assignment_2005_; lean_object* v_lazyAssignment_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2014_; 
v_enabled_2004_ = lean_ctor_get_uint8(v_s_2003_, sizeof(void*)*3);
v_assignment_2005_ = lean_ctor_get(v_s_2003_, 0);
v_lazyAssignment_2006_ = lean_ctor_get(v_s_2003_, 1);
v_isSharedCheck_2014_ = !lean_is_exclusive(v_s_2003_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; 
v_unused_2015_ = lean_ctor_get(v_s_2003_, 2);
lean_dec(v_unused_2015_);
v___x_2008_ = v_s_2003_;
v_isShared_2009_ = v_isSharedCheck_2014_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_lazyAssignment_2006_);
lean_inc(v_assignment_2005_);
lean_dec(v_s_2003_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2014_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2010_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1, &l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 2, v___x_2010_);
v___x_2012_ = v___x_2008_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_assignment_2005_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v_lazyAssignment_2006_);
lean_ctor_set(v_reuseFailAlloc_2013_, 2, v___x_2010_);
lean_ctor_set_uint8(v_reuseFailAlloc_2013_, sizeof(void*)*3, v_enabled_2004_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__1(lean_object* v_toPure_2016_, lean_object* v_trees_2017_, lean_object* v_____r_2018_){
_start:
{
lean_object* v___x_2019_; 
v___x_2019_ = lean_apply_2(v_toPure_2016_, lean_box(0), v_trees_2017_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__2(lean_object* v_toPure_2020_, lean_object* v_modifyInfoState_2021_, lean_object* v___f_2022_, lean_object* v_toBind_2023_, lean_object* v_____do__lift_2024_){
_start:
{
lean_object* v_trees_2025_; lean_object* v___f_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v_trees_2025_ = lean_ctor_get(v_____do__lift_2024_, 2);
lean_inc_ref(v_trees_2025_);
lean_dec_ref(v_____do__lift_2024_);
v___f_2026_ = lean_alloc_closure((void*)(l_Lean_Elab_getResetInfoTrees___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2026_, 0, v_toPure_2020_);
lean_closure_set(v___f_2026_, 1, v_trees_2025_);
v___x_2027_ = lean_apply_1(v_modifyInfoState_2021_, v___f_2022_);
v___x_2028_ = lean_apply_4(v_toBind_2023_, lean_box(0), lean_box(0), v___x_2027_, v___f_2026_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg(lean_object* v_inst_2030_, lean_object* v_inst_2031_){
_start:
{
lean_object* v_toApplicative_2032_; lean_object* v_toBind_2033_; lean_object* v_getInfoState_2034_; lean_object* v_modifyInfoState_2035_; lean_object* v_toPure_2036_; lean_object* v___f_2037_; lean_object* v___f_2038_; lean_object* v___x_2039_; 
v_toApplicative_2032_ = lean_ctor_get(v_inst_2030_, 0);
lean_inc_ref(v_toApplicative_2032_);
v_toBind_2033_ = lean_ctor_get(v_inst_2030_, 1);
lean_inc_n(v_toBind_2033_, 2);
lean_dec_ref(v_inst_2030_);
v_getInfoState_2034_ = lean_ctor_get(v_inst_2031_, 0);
lean_inc(v_getInfoState_2034_);
v_modifyInfoState_2035_ = lean_ctor_get(v_inst_2031_, 1);
lean_inc(v_modifyInfoState_2035_);
lean_dec_ref(v_inst_2031_);
v_toPure_2036_ = lean_ctor_get(v_toApplicative_2032_, 1);
lean_inc(v_toPure_2036_);
lean_dec_ref(v_toApplicative_2032_);
v___f_2037_ = ((lean_object*)(l_Lean_Elab_getResetInfoTrees___redArg___closed__0));
v___f_2038_ = lean_alloc_closure((void*)(l_Lean_Elab_getResetInfoTrees___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2038_, 0, v_toPure_2036_);
lean_closure_set(v___f_2038_, 1, v_modifyInfoState_2035_);
lean_closure_set(v___f_2038_, 2, v___f_2037_);
lean_closure_set(v___f_2038_, 3, v_toBind_2033_);
v___x_2039_ = lean_apply_4(v_toBind_2033_, lean_box(0), lean_box(0), v_getInfoState_2034_, v___f_2038_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees(lean_object* v_m_2040_, lean_object* v_inst_2041_, lean_object* v_inst_2042_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_Elab_getResetInfoTrees___redArg(v_inst_2041_, v_inst_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__0(lean_object* v_t_2044_, lean_object* v_s_2045_){
_start:
{
uint8_t v_enabled_2046_; lean_object* v_assignment_2047_; lean_object* v_lazyAssignment_2048_; lean_object* v_trees_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2057_; 
v_enabled_2046_ = lean_ctor_get_uint8(v_s_2045_, sizeof(void*)*3);
v_assignment_2047_ = lean_ctor_get(v_s_2045_, 0);
v_lazyAssignment_2048_ = lean_ctor_get(v_s_2045_, 1);
v_trees_2049_ = lean_ctor_get(v_s_2045_, 2);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_s_2045_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2051_ = v_s_2045_;
v_isShared_2052_ = v_isSharedCheck_2057_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_trees_2049_);
lean_inc(v_lazyAssignment_2048_);
lean_inc(v_assignment_2047_);
lean_dec(v_s_2045_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2057_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2053_; lean_object* v___x_2055_; 
v___x_2053_ = l_Lean_PersistentArray_push___redArg(v_trees_2049_, v_t_2044_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 2, v___x_2053_);
v___x_2055_ = v___x_2051_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_assignment_2047_);
lean_ctor_set(v_reuseFailAlloc_2056_, 1, v_lazyAssignment_2048_);
lean_ctor_set(v_reuseFailAlloc_2056_, 2, v___x_2053_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*3, v_enabled_2046_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__1(lean_object* v_toPure_2058_, lean_object* v_modifyInfoState_2059_, lean_object* v___f_2060_, lean_object* v_____do__lift_2061_){
_start:
{
uint8_t v_enabled_2062_; 
v_enabled_2062_ = lean_ctor_get_uint8(v_____do__lift_2061_, sizeof(void*)*3);
if (v_enabled_2062_ == 0)
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
lean_dec_ref(v___f_2060_);
lean_dec(v_modifyInfoState_2059_);
v___x_2063_ = lean_box(0);
v___x_2064_ = lean_apply_2(v_toPure_2058_, lean_box(0), v___x_2063_);
return v___x_2064_;
}
else
{
lean_object* v___x_2065_; 
lean_dec(v_toPure_2058_);
v___x_2065_ = lean_apply_1(v_modifyInfoState_2059_, v___f_2060_);
return v___x_2065_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__1___boxed(lean_object* v_toPure_2066_, lean_object* v_modifyInfoState_2067_, lean_object* v___f_2068_, lean_object* v_____do__lift_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lean_Elab_pushInfoTree___redArg___lam__1(v_toPure_2066_, v_modifyInfoState_2067_, v___f_2068_, v_____do__lift_2069_);
lean_dec_ref(v_____do__lift_2069_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg(lean_object* v_inst_2071_, lean_object* v_inst_2072_, lean_object* v_t_2073_){
_start:
{
lean_object* v_toApplicative_2074_; lean_object* v_toBind_2075_; lean_object* v_getInfoState_2076_; lean_object* v_modifyInfoState_2077_; lean_object* v_toPure_2078_; lean_object* v___f_2079_; lean_object* v___f_2080_; lean_object* v___x_2081_; 
v_toApplicative_2074_ = lean_ctor_get(v_inst_2071_, 0);
lean_inc_ref(v_toApplicative_2074_);
v_toBind_2075_ = lean_ctor_get(v_inst_2071_, 1);
lean_inc(v_toBind_2075_);
lean_dec_ref(v_inst_2071_);
v_getInfoState_2076_ = lean_ctor_get(v_inst_2072_, 0);
lean_inc(v_getInfoState_2076_);
v_modifyInfoState_2077_ = lean_ctor_get(v_inst_2072_, 1);
lean_inc(v_modifyInfoState_2077_);
lean_dec_ref(v_inst_2072_);
v_toPure_2078_ = lean_ctor_get(v_toApplicative_2074_, 1);
lean_inc(v_toPure_2078_);
lean_dec_ref(v_toApplicative_2074_);
v___f_2079_ = lean_alloc_closure((void*)(l_Lean_Elab_pushInfoTree___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2079_, 0, v_t_2073_);
v___f_2080_ = lean_alloc_closure((void*)(l_Lean_Elab_pushInfoTree___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2080_, 0, v_toPure_2078_);
lean_closure_set(v___f_2080_, 1, v_modifyInfoState_2077_);
lean_closure_set(v___f_2080_, 2, v___f_2079_);
v___x_2081_ = lean_apply_4(v_toBind_2075_, lean_box(0), lean_box(0), v_getInfoState_2076_, v___f_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree(lean_object* v_m_2082_, lean_object* v_inst_2083_, lean_object* v_inst_2084_, lean_object* v_t_2085_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lean_Elab_pushInfoTree___redArg(v_inst_2083_, v_inst_2084_, v_t_2085_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg___lam__0(lean_object* v_toPure_2087_, lean_object* v_t_2088_, lean_object* v_inst_2089_, lean_object* v_inst_2090_, lean_object* v_____do__lift_2091_){
_start:
{
uint8_t v_enabled_2092_; 
v_enabled_2092_ = lean_ctor_get_uint8(v_____do__lift_2091_, sizeof(void*)*3);
if (v_enabled_2092_ == 0)
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_dec_ref(v_inst_2090_);
lean_dec_ref(v_inst_2089_);
lean_dec_ref(v_t_2088_);
v___x_2093_ = lean_box(0);
v___x_2094_ = lean_apply_2(v_toPure_2087_, lean_box(0), v___x_2093_);
return v___x_2094_;
}
else
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
lean_dec(v_toPure_2087_);
v___x_2095_ = lean_unsigned_to_nat(32u);
v___x_2096_ = lean_mk_empty_array_with_capacity(v___x_2095_);
lean_dec_ref(v___x_2096_);
v___x_2097_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1, &l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1);
v___x_2098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2098_, 0, v_t_2088_);
lean_ctor_set(v___x_2098_, 1, v___x_2097_);
v___x_2099_ = l_Lean_Elab_pushInfoTree___redArg(v_inst_2089_, v_inst_2090_, v___x_2098_);
return v___x_2099_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg___lam__0___boxed(lean_object* v_toPure_2100_, lean_object* v_t_2101_, lean_object* v_inst_2102_, lean_object* v_inst_2103_, lean_object* v_____do__lift_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Lean_Elab_pushInfoLeaf___redArg___lam__0(v_toPure_2100_, v_t_2101_, v_inst_2102_, v_inst_2103_, v_____do__lift_2104_);
lean_dec_ref(v_____do__lift_2104_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg(lean_object* v_inst_2106_, lean_object* v_inst_2107_, lean_object* v_t_2108_){
_start:
{
lean_object* v_toApplicative_2109_; lean_object* v_toBind_2110_; lean_object* v_getInfoState_2111_; lean_object* v_toPure_2112_; lean_object* v___f_2113_; lean_object* v___x_2114_; 
v_toApplicative_2109_ = lean_ctor_get(v_inst_2106_, 0);
v_toBind_2110_ = lean_ctor_get(v_inst_2106_, 1);
lean_inc(v_toBind_2110_);
v_getInfoState_2111_ = lean_ctor_get(v_inst_2107_, 0);
lean_inc(v_getInfoState_2111_);
v_toPure_2112_ = lean_ctor_get(v_toApplicative_2109_, 1);
lean_inc(v_toPure_2112_);
v___f_2113_ = lean_alloc_closure((void*)(l_Lean_Elab_pushInfoLeaf___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2113_, 0, v_toPure_2112_);
lean_closure_set(v___f_2113_, 1, v_t_2108_);
lean_closure_set(v___f_2113_, 2, v_inst_2106_);
lean_closure_set(v___f_2113_, 3, v_inst_2107_);
v___x_2114_ = lean_apply_4(v_toBind_2110_, lean_box(0), lean_box(0), v_getInfoState_2111_, v___f_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf(lean_object* v_m_2115_, lean_object* v_inst_2116_, lean_object* v_inst_2117_, lean_object* v_t_2118_){
_start:
{
lean_object* v___x_2119_; 
v___x_2119_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_2116_, v_inst_2117_, v_t_2118_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___redArg(lean_object* v_inst_2120_, lean_object* v_inst_2121_, lean_object* v_info_2122_){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_2123_, 0, v_info_2122_);
v___x_2124_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_2120_, v_inst_2121_, v___x_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo(lean_object* v_m_2125_, lean_object* v_inst_2126_, lean_object* v_inst_2127_, lean_object* v_info_2128_){
_start:
{
lean_object* v___x_2129_; 
v___x_2129_ = l_Lean_Elab_addCompletionInfo___redArg(v_inst_2126_, v_inst_2127_, v_info_2128_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___redArg___lam__0(lean_object* v_stx_2130_, lean_object* v_expectedType_x3f_2131_, lean_object* v_inst_2132_, lean_object* v_inst_2133_, lean_object* v_____do__lift_2134_){
_start:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2135_ = lean_box(0);
v___x_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
lean_ctor_set(v___x_2136_, 1, v_stx_2130_);
v___x_2137_ = l_Lean_LocalContext_empty;
v___x_2138_ = 0;
v___x_2139_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2139_, 0, v___x_2136_);
lean_ctor_set(v___x_2139_, 1, v___x_2137_);
lean_ctor_set(v___x_2139_, 2, v_expectedType_x3f_2131_);
lean_ctor_set(v___x_2139_, 3, v_____do__lift_2134_);
lean_ctor_set_uint8(v___x_2139_, sizeof(void*)*4, v___x_2138_);
lean_ctor_set_uint8(v___x_2139_, sizeof(void*)*4 + 1, v___x_2138_);
v___x_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
v___x_2141_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_2132_, v_inst_2133_, v___x_2140_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___redArg(lean_object* v_inst_2142_, lean_object* v_inst_2143_, lean_object* v_inst_2144_, lean_object* v_inst_2145_, lean_object* v_stx_2146_, lean_object* v_n_2147_, lean_object* v_expectedType_x3f_2148_){
_start:
{
lean_object* v_toBind_2149_; lean_object* v___f_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v_toBind_2149_ = lean_ctor_get(v_inst_2142_, 1);
lean_inc(v_toBind_2149_);
lean_inc_ref(v_inst_2142_);
v___f_2150_ = lean_alloc_closure((void*)(l_Lean_Elab_addConstInfo___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2150_, 0, v_stx_2146_);
lean_closure_set(v___f_2150_, 1, v_expectedType_x3f_2148_);
lean_closure_set(v___f_2150_, 2, v_inst_2142_);
lean_closure_set(v___f_2150_, 3, v_inst_2143_);
v___x_2151_ = l_Lean_mkConstWithLevelParams___redArg(v_inst_2142_, v_inst_2144_, v_inst_2145_, v_n_2147_);
v___x_2152_ = lean_apply_4(v_toBind_2149_, lean_box(0), lean_box(0), v___x_2151_, v___f_2150_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo(lean_object* v_m_2153_, lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_inst_2156_, lean_object* v_inst_2157_, lean_object* v_stx_2158_, lean_object* v_n_2159_, lean_object* v_expectedType_x3f_2160_){
_start:
{
lean_object* v___x_2161_; 
v___x_2161_ = l_Lean_Elab_addConstInfo___redArg(v_inst_2154_, v_inst_2155_, v_inst_2156_, v_inst_2157_, v_stx_2158_, v_n_2159_, v_expectedType_x3f_2160_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(lean_object* v_t_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v___x_2165_; lean_object* v_infoState_2166_; uint8_t v_enabled_2167_; 
v___x_2165_ = lean_st_ref_get(v___y_2163_);
v_infoState_2166_ = lean_ctor_get(v___x_2165_, 8);
lean_inc_ref(v_infoState_2166_);
lean_dec(v___x_2165_);
v_enabled_2167_ = lean_ctor_get_uint8(v_infoState_2166_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2166_);
if (v_enabled_2167_ == 0)
{
lean_object* v___x_2168_; lean_object* v___x_2169_; 
lean_dec_ref(v_t_2162_);
v___x_2168_ = lean_box(0);
v___x_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2168_);
return v___x_2169_;
}
else
{
lean_object* v___x_2170_; lean_object* v_infoState_2171_; lean_object* v_env_2172_; lean_object* v_nextMacroScope_2173_; lean_object* v_ngen_2174_; lean_object* v_auxDeclNGen_2175_; lean_object* v_traceState_2176_; lean_object* v_cache_2177_; lean_object* v_recordedDeps_2178_; lean_object* v_messages_2179_; lean_object* v_snapshotTasks_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2202_; 
v___x_2170_ = lean_st_ref_take(v___y_2163_);
v_infoState_2171_ = lean_ctor_get(v___x_2170_, 8);
v_env_2172_ = lean_ctor_get(v___x_2170_, 0);
v_nextMacroScope_2173_ = lean_ctor_get(v___x_2170_, 1);
v_ngen_2174_ = lean_ctor_get(v___x_2170_, 2);
v_auxDeclNGen_2175_ = lean_ctor_get(v___x_2170_, 3);
v_traceState_2176_ = lean_ctor_get(v___x_2170_, 4);
v_cache_2177_ = lean_ctor_get(v___x_2170_, 5);
v_recordedDeps_2178_ = lean_ctor_get(v___x_2170_, 6);
v_messages_2179_ = lean_ctor_get(v___x_2170_, 7);
v_snapshotTasks_2180_ = lean_ctor_get(v___x_2170_, 9);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2182_ = v___x_2170_;
v_isShared_2183_ = v_isSharedCheck_2202_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_snapshotTasks_2180_);
lean_inc(v_infoState_2171_);
lean_inc(v_messages_2179_);
lean_inc(v_recordedDeps_2178_);
lean_inc(v_cache_2177_);
lean_inc(v_traceState_2176_);
lean_inc(v_auxDeclNGen_2175_);
lean_inc(v_ngen_2174_);
lean_inc(v_nextMacroScope_2173_);
lean_inc(v_env_2172_);
lean_dec(v___x_2170_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2202_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
uint8_t v_enabled_2184_; lean_object* v_assignment_2185_; lean_object* v_lazyAssignment_2186_; lean_object* v_trees_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2201_; 
v_enabled_2184_ = lean_ctor_get_uint8(v_infoState_2171_, sizeof(void*)*3);
v_assignment_2185_ = lean_ctor_get(v_infoState_2171_, 0);
v_lazyAssignment_2186_ = lean_ctor_get(v_infoState_2171_, 1);
v_trees_2187_ = lean_ctor_get(v_infoState_2171_, 2);
v_isSharedCheck_2201_ = !lean_is_exclusive(v_infoState_2171_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2189_ = v_infoState_2171_;
v_isShared_2190_ = v_isSharedCheck_2201_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_trees_2187_);
lean_inc(v_lazyAssignment_2186_);
lean_inc(v_assignment_2185_);
lean_dec(v_infoState_2171_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2201_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2194_; 
v___x_2191_ = lean_box(0);
v___x_2192_ = l_Lean_PersistentArray_push___redArg(v_trees_2187_, v_t_2162_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 2, v___x_2192_);
v___x_2194_ = v___x_2189_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_assignment_2185_);
lean_ctor_set(v_reuseFailAlloc_2200_, 1, v_lazyAssignment_2186_);
lean_ctor_set(v_reuseFailAlloc_2200_, 2, v___x_2192_);
lean_ctor_set_uint8(v_reuseFailAlloc_2200_, sizeof(void*)*3, v_enabled_2184_);
v___x_2194_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
lean_object* v___x_2196_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 8, v___x_2194_);
v___x_2196_ = v___x_2182_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_env_2172_);
lean_ctor_set(v_reuseFailAlloc_2199_, 1, v_nextMacroScope_2173_);
lean_ctor_set(v_reuseFailAlloc_2199_, 2, v_ngen_2174_);
lean_ctor_set(v_reuseFailAlloc_2199_, 3, v_auxDeclNGen_2175_);
lean_ctor_set(v_reuseFailAlloc_2199_, 4, v_traceState_2176_);
lean_ctor_set(v_reuseFailAlloc_2199_, 5, v_cache_2177_);
lean_ctor_set(v_reuseFailAlloc_2199_, 6, v_recordedDeps_2178_);
lean_ctor_set(v_reuseFailAlloc_2199_, 7, v_messages_2179_);
lean_ctor_set(v_reuseFailAlloc_2199_, 8, v___x_2194_);
lean_ctor_set(v_reuseFailAlloc_2199_, 9, v_snapshotTasks_2180_);
v___x_2196_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2197_ = lean_st_ref_put(v___y_2163_, v___x_2196_);
v___x_2198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2191_);
return v___x_2198_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_t_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(v_t_2203_, v___y_2204_);
lean_dec(v___y_2204_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1(lean_object* v_t_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
lean_object* v___x_2211_; lean_object* v_infoState_2212_; uint8_t v_enabled_2213_; 
v___x_2211_ = lean_st_ref_get(v___y_2209_);
v_infoState_2212_ = lean_ctor_get(v___x_2211_, 8);
lean_inc_ref(v_infoState_2212_);
lean_dec(v___x_2211_);
v_enabled_2213_ = lean_ctor_get_uint8(v_infoState_2212_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2212_);
if (v_enabled_2213_ == 0)
{
lean_object* v___x_2214_; lean_object* v___x_2215_; 
lean_dec_ref(v_t_2207_);
v___x_2214_ = lean_box(0);
v___x_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2214_);
return v___x_2215_;
}
else
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2216_ = lean_unsigned_to_nat(32u);
v___x_2217_ = lean_mk_empty_array_with_capacity(v___x_2216_);
lean_dec_ref(v___x_2217_);
v___x_2218_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1, &l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1);
v___x_2219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2219_, 0, v_t_2207_);
lean_ctor_set(v___x_2219_, 1, v___x_2218_);
v___x_2220_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(v___x_2219_, v___y_2209_);
return v___x_2220_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1___boxed(lean_object* v_t_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1(v_t_2221_, v___y_2222_, v___y_2223_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
return v_res_2225_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
return v___x_2227_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_2229_ = lean_unsigned_to_nat(0u);
v___x_2230_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
lean_ctor_set(v___x_2230_, 1, v___x_2229_);
lean_ctor_set(v___x_2230_, 2, v___x_2229_);
lean_ctor_set(v___x_2230_, 3, v___x_2229_);
lean_ctor_set(v___x_2230_, 4, v___x_2228_);
lean_ctor_set(v___x_2230_, 5, v___x_2228_);
lean_ctor_set(v___x_2230_, 6, v___x_2228_);
lean_ctor_set(v___x_2230_, 7, v___x_2228_);
lean_ctor_set(v___x_2230_, 8, v___x_2228_);
lean_ctor_set(v___x_2230_, 9, v___x_2228_);
lean_ctor_set(v___x_2230_, 10, v___x_2228_);
return v___x_2230_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2231_ = lean_box(1);
v___x_2232_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__2, &l_Lean_Elab_ContextInfo_ppGoals___closed__2_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__2);
v___x_2233_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_2234_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2233_);
lean_ctor_set(v___x_2234_, 1, v___x_2232_);
lean_ctor_set(v___x_2234_, 2, v___x_2231_);
return v___x_2234_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2236_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__3));
v___x_2237_ = l_Lean_stringToMessageData(v___x_2236_);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__5));
v___x_2240_ = l_Lean_stringToMessageData(v___x_2239_);
return v___x_2240_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8(void){
_start:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2242_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__7));
v___x_2243_ = l_Lean_stringToMessageData(v___x_2242_);
return v___x_2243_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2245_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__9));
v___x_2246_ = l_Lean_stringToMessageData(v___x_2245_);
return v___x_2246_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2248_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__11));
v___x_2249_ = l_Lean_stringToMessageData(v___x_2248_);
return v___x_2249_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__13));
v___x_2252_ = l_Lean_stringToMessageData(v___x_2251_);
return v___x_2252_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16(void){
_start:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2254_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__15));
v___x_2255_ = l_Lean_stringToMessageData(v___x_2254_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_2256_, lean_object* v_declHint_2257_, lean_object* v___y_2258_){
_start:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v_env_2262_; uint8_t v___x_2263_; 
v___x_2260_ = lean_box(0);
v___x_2261_ = lean_st_ref_get(v___y_2258_);
v_env_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc_ref(v_env_2262_);
lean_dec(v___x_2261_);
v___x_2263_ = l_Lean_Name_isAnonymous(v_declHint_2257_);
if (v___x_2263_ == 0)
{
uint8_t v_isExporting_2264_; 
v_isExporting_2264_ = lean_ctor_get_uint8(v_env_2262_, sizeof(void*)*13);
if (v_isExporting_2264_ == 0)
{
lean_object* v___x_2265_; 
lean_dec_ref(v_env_2262_);
lean_dec(v_declHint_2257_);
v___x_2265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2265_, 0, v_msg_2256_);
return v___x_2265_;
}
else
{
lean_object* v___x_2266_; uint8_t v___x_2267_; 
lean_inc_ref(v_env_2262_);
v___x_2266_ = l_Lean_Environment_setExporting(v_env_2262_, v___x_2263_);
lean_inc(v_declHint_2257_);
lean_inc_ref(v___x_2266_);
v___x_2267_ = l_Lean_Environment_contains(v___x_2266_, v_declHint_2257_, v_isExporting_2264_);
if (v___x_2267_ == 0)
{
lean_object* v___x_2268_; 
lean_dec_ref(v___x_2266_);
lean_dec_ref(v_env_2262_);
lean_dec(v_declHint_2257_);
v___x_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2268_, 0, v_msg_2256_);
return v___x_2268_;
}
else
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v_c_2274_; lean_object* v___x_2275_; 
v___x_2269_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_2270_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2);
v___x_2271_ = l_Lean_Options_empty;
lean_inc_ref(v___x_2266_);
v___x_2272_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2266_);
lean_ctor_set(v___x_2272_, 1, v___x_2269_);
lean_ctor_set(v___x_2272_, 2, v___x_2270_);
lean_ctor_set(v___x_2272_, 3, v___x_2271_);
lean_inc(v_declHint_2257_);
v___x_2273_ = l_Lean_MessageData_ofConstName(v_declHint_2257_, v___x_2263_);
v_c_2274_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2274_, 0, v___x_2272_);
lean_ctor_set(v_c_2274_, 1, v___x_2273_);
v___x_2275_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_2266_, v_declHint_2257_);
lean_dec_ref(v___x_2266_);
if (lean_obj_tag(v___x_2275_) == 0)
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
lean_dec_ref(v_env_2262_);
lean_dec(v_declHint_2257_);
v___x_2276_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4);
v___x_2277_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
lean_ctor_set(v___x_2277_, 1, v_c_2274_);
v___x_2278_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6);
v___x_2279_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2277_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = l_Lean_MessageData_note(v___x_2279_);
v___x_2281_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2281_, 0, v_msg_2256_);
lean_ctor_set(v___x_2281_, 1, v___x_2280_);
v___x_2282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
return v___x_2282_;
}
else
{
lean_object* v_val_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2317_; 
v_val_2283_ = lean_ctor_get(v___x_2275_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2275_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2285_ = v___x_2275_;
v_isShared_2286_ = v_isSharedCheck_2317_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_val_2283_);
lean_dec(v___x_2275_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2317_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2287_; lean_object* v_moduleNames_2288_; lean_object* v_mod_2289_; uint8_t v___x_2290_; 
v___x_2287_ = l_Lean_Environment_header(v_env_2262_);
lean_dec_ref(v_env_2262_);
v_moduleNames_2288_ = lean_ctor_get(v___x_2287_, 4);
lean_inc_ref(v_moduleNames_2288_);
lean_dec_ref(v___x_2287_);
v_mod_2289_ = lean_array_get(v___x_2260_, v_moduleNames_2288_, v_val_2283_);
lean_dec(v_val_2283_);
lean_dec_ref(v_moduleNames_2288_);
v___x_2290_ = l_Lean_isPrivateName(v_declHint_2257_);
lean_dec(v_declHint_2257_);
if (v___x_2290_ == 0)
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2302_; 
v___x_2291_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8);
v___x_2292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2291_);
lean_ctor_set(v___x_2292_, 1, v_c_2274_);
v___x_2293_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10);
v___x_2294_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2292_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
v___x_2295_ = l_Lean_MessageData_ofName(v_mod_2289_);
v___x_2296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2294_);
lean_ctor_set(v___x_2296_, 1, v___x_2295_);
v___x_2297_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12);
v___x_2298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2296_);
lean_ctor_set(v___x_2298_, 1, v___x_2297_);
v___x_2299_ = l_Lean_MessageData_note(v___x_2298_);
v___x_2300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2300_, 0, v_msg_2256_);
lean_ctor_set(v___x_2300_, 1, v___x_2299_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set_tag(v___x_2285_, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2300_);
v___x_2302_ = v___x_2285_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v___x_2300_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
else
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2315_; 
v___x_2304_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4);
v___x_2305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
lean_ctor_set(v___x_2305_, 1, v_c_2274_);
v___x_2306_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14);
v___x_2307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2305_);
lean_ctor_set(v___x_2307_, 1, v___x_2306_);
v___x_2308_ = l_Lean_MessageData_ofName(v_mod_2289_);
v___x_2309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2307_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
v___x_2310_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16);
v___x_2311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2309_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
v___x_2312_ = l_Lean_MessageData_note(v___x_2311_);
v___x_2313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2313_, 0, v_msg_2256_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set_tag(v___x_2285_, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2313_);
v___x_2315_ = v___x_2285_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2318_; 
lean_dec_ref(v_env_2262_);
lean_dec(v_declHint_2257_);
v___x_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2318_, 0, v_msg_2256_);
return v___x_2318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_2319_, lean_object* v_declHint_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(v_msg_2319_, v_declHint_2320_, v___y_2321_);
lean_dec(v___y_2321_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8(lean_object* v_msg_2324_, lean_object* v_declHint_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_){
_start:
{
lean_object* v___x_2329_; lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2339_; 
v___x_2329_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(v_msg_2324_, v_declHint_2325_, v___y_2327_);
v_a_2330_ = lean_ctor_get(v___x_2329_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2329_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2332_ = v___x_2329_;
v_isShared_2333_ = v_isSharedCheck_2339_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2329_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2339_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2337_; 
v___x_2334_ = l_Lean_unknownIdentifierMessageTag;
v___x_2335_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
lean_ctor_set(v___x_2335_, 1, v_a_2330_);
if (v_isShared_2333_ == 0)
{
lean_ctor_set(v___x_2332_, 0, v___x_2335_);
v___x_2337_ = v___x_2332_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v___x_2335_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_msg_2340_, lean_object* v_declHint_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8(v_msg_2340_, v_declHint_2341_, v___y_2342_, v___y_2343_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12(lean_object* v_msgData_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
lean_object* v___x_2350_; lean_object* v_toCold_2351_; lean_object* v_env_2352_; lean_object* v_options_2353_; uint8_t v___x_2354_; lean_object* v_env_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2350_ = lean_st_ref_get(v___y_2348_);
v_toCold_2351_ = lean_ctor_get(v___y_2347_, 0);
v_env_2352_ = lean_ctor_get(v___x_2350_, 0);
lean_inc_ref(v_env_2352_);
lean_dec(v___x_2350_);
v_options_2353_ = lean_ctor_get(v_toCold_2351_, 2);
v___x_2354_ = 0;
v_env_2355_ = l_Lean_Environment_setRecordingDeps(v_env_2352_, v___x_2354_);
v___x_2356_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_2357_ = lean_unsigned_to_nat(32u);
v___x_2358_ = lean_mk_empty_array_with_capacity(v___x_2357_);
lean_dec_ref(v___x_2358_);
v___x_2359_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2);
lean_inc_ref(v_options_2353_);
v___x_2360_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2360_, 0, v_env_2355_);
lean_ctor_set(v___x_2360_, 1, v___x_2356_);
lean_ctor_set(v___x_2360_, 2, v___x_2359_);
lean_ctor_set(v___x_2360_, 3, v_options_2353_);
v___x_2361_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2361_, 0, v___x_2360_);
lean_ctor_set(v___x_2361_, 1, v_msgData_2346_);
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12___boxed(lean_object* v_msgData_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12(v_msgData_2363_, v___y_2364_, v___y_2365_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(lean_object* v_msg_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_ref_2372_; lean_object* v___x_2373_; lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2382_; 
v_ref_2372_ = lean_ctor_get(v___y_2369_, 2);
v___x_2373_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12(v_msg_2368_, v___y_2369_, v___y_2370_);
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2382_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2382_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2378_; lean_object* v___x_2380_; 
lean_inc(v_ref_2372_);
v___x_2378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2378_, 0, v_ref_2372_);
lean_ctor_set(v___x_2378_, 1, v_a_2374_);
if (v_isShared_2377_ == 0)
{
lean_ctor_set_tag(v___x_2376_, 1);
lean_ctor_set(v___x_2376_, 0, v___x_2378_);
v___x_2380_ = v___x_2376_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2378_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg___boxed(lean_object* v_msg_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(v_msg_2383_, v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(lean_object* v_ref_2388_, lean_object* v_msg_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v_toCold_2393_; lean_object* v_currRecDepth_2394_; lean_object* v_ref_2395_; uint16_t v_optionFlags_2396_; uint8_t v_suppressElabErrors_2397_; uint8_t v_checkDeprecated_2398_; uint8_t v_isRecordingDeps_2399_; lean_object* v_ref_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v_toCold_2393_ = lean_ctor_get(v___y_2390_, 0);
v_currRecDepth_2394_ = lean_ctor_get(v___y_2390_, 1);
v_ref_2395_ = lean_ctor_get(v___y_2390_, 2);
v_optionFlags_2396_ = lean_ctor_get_uint16(v___y_2390_, sizeof(void*)*3);
v_suppressElabErrors_2397_ = lean_ctor_get_uint8(v___y_2390_, sizeof(void*)*3 + 2);
v_checkDeprecated_2398_ = lean_ctor_get_uint8(v___y_2390_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2399_ = lean_ctor_get_uint8(v___y_2390_, sizeof(void*)*3 + 4);
v_ref_2400_ = l_Lean_replaceRef(v_ref_2388_, v_ref_2395_);
lean_inc(v_currRecDepth_2394_);
lean_inc_ref(v_toCold_2393_);
v___x_2401_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2401_, 0, v_toCold_2393_);
lean_ctor_set(v___x_2401_, 1, v_currRecDepth_2394_);
lean_ctor_set(v___x_2401_, 2, v_ref_2400_);
lean_ctor_set_uint16(v___x_2401_, sizeof(void*)*3, v_optionFlags_2396_);
lean_ctor_set_uint8(v___x_2401_, sizeof(void*)*3 + 2, v_suppressElabErrors_2397_);
lean_ctor_set_uint8(v___x_2401_, sizeof(void*)*3 + 3, v_checkDeprecated_2398_);
lean_ctor_set_uint8(v___x_2401_, sizeof(void*)*3 + 4, v_isRecordingDeps_2399_);
v___x_2402_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(v_msg_2389_, v___x_2401_, v___y_2391_);
lean_dec_ref_known(v___x_2401_, 3);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg___boxed(lean_object* v_ref_2403_, lean_object* v_msg_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(v_ref_2403_, v_msg_2404_, v___y_2405_, v___y_2406_);
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v_ref_2403_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(lean_object* v_ref_2409_, lean_object* v_msg_2410_, lean_object* v_declHint_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v___x_2415_; lean_object* v_a_2416_; lean_object* v___x_2417_; 
v___x_2415_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8(v_msg_2410_, v_declHint_2411_, v___y_2412_, v___y_2413_);
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2416_);
lean_dec_ref(v___x_2415_);
v___x_2417_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(v_ref_2409_, v_a_2416_, v___y_2412_, v___y_2413_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg___boxed(lean_object* v_ref_2418_, lean_object* v_msg_2419_, lean_object* v_declHint_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(v_ref_2418_, v_msg_2419_, v_declHint_2420_, v___y_2421_, v___y_2422_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v_ref_2418_);
return v_res_2424_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2426_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__0));
v___x_2427_ = l_Lean_stringToMessageData(v___x_2426_);
return v___x_2427_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2429_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__2));
v___x_2430_ = l_Lean_stringToMessageData(v___x_2429_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_ref_2431_, lean_object* v_constName_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_){
_start:
{
lean_object* v___x_2436_; uint8_t v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2436_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1);
v___x_2437_ = 0;
lean_inc(v_constName_2432_);
v___x_2438_ = l_Lean_MessageData_ofConstName(v_constName_2432_, v___x_2437_);
v___x_2439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2436_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
v___x_2440_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3);
v___x_2441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2439_);
lean_ctor_set(v___x_2441_, 1, v___x_2440_);
v___x_2442_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(v_ref_2431_, v___x_2441_, v_constName_2432_, v___y_2433_, v___y_2434_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_ref_2443_, lean_object* v_constName_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(v_ref_2443_, v_constName_2444_, v___y_2445_, v___y_2446_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v_ref_2443_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_constName_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v_ref_2453_; lean_object* v___x_2454_; 
v_ref_2453_ = lean_ctor_get(v___y_2450_, 2);
v___x_2454_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(v_ref_2453_, v_constName_2449_, v___y_2450_, v___y_2451_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_constName_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(v_constName_2455_, v___y_2456_, v___y_2457_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1(lean_object* v_constName_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v___x_2464_; lean_object* v_env_2465_; uint8_t v___x_2466_; lean_object* v___x_2467_; 
v___x_2464_ = lean_st_ref_get(v___y_2462_);
v_env_2465_ = lean_ctor_get(v___x_2464_, 0);
lean_inc_ref(v_env_2465_);
lean_dec(v___x_2464_);
v___x_2466_ = 0;
lean_inc(v_constName_2460_);
v___x_2467_ = l_Lean_Environment_findConstVal_x3f(v_env_2465_, v_constName_2460_, v___x_2466_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v___x_2468_; 
v___x_2468_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(v_constName_2460_, v___y_2461_, v___y_2462_);
return v___x_2468_;
}
else
{
lean_object* v_val_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
lean_dec(v_constName_2460_);
v_val_2469_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2467_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_val_2469_);
lean_dec(v___x_2467_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
lean_ctor_set_tag(v___x_2471_, 0);
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_val_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_constName_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
lean_object* v_res_2481_; 
v_res_2481_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1(v_constName_2477_, v___y_2478_, v___y_2479_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__2(lean_object* v_a_2482_, lean_object* v_a_2483_){
_start:
{
if (lean_obj_tag(v_a_2482_) == 0)
{
lean_object* v___x_2484_; 
v___x_2484_ = l_List_reverse___redArg(v_a_2483_);
return v___x_2484_;
}
else
{
lean_object* v_head_2485_; lean_object* v_tail_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2495_; 
v_head_2485_ = lean_ctor_get(v_a_2482_, 0);
v_tail_2486_ = lean_ctor_get(v_a_2482_, 1);
v_isSharedCheck_2495_ = !lean_is_exclusive(v_a_2482_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2488_ = v_a_2482_;
v_isShared_2489_ = v_isSharedCheck_2495_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_tail_2486_);
lean_inc(v_head_2485_);
lean_dec(v_a_2482_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2495_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
v___x_2490_ = l_Lean_mkLevelParam(v_head_2485_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 1, v_a_2483_);
lean_ctor_set(v___x_2488_, 0, v___x_2490_);
v___x_2492_ = v___x_2488_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v___x_2490_);
lean_ctor_set(v_reuseFailAlloc_2494_, 1, v_a_2483_);
v___x_2492_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
v_a_2482_ = v_tail_2486_;
v_a_2483_ = v___x_2492_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0(lean_object* v_constName_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v___x_2500_; 
lean_inc(v_constName_2496_);
v___x_2500_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1(v_constName_2496_, v___y_2497_, v___y_2498_);
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2512_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2503_ = v___x_2500_;
v_isShared_2504_ = v_isSharedCheck_2512_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2500_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2512_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v_levelParams_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2510_; 
v_levelParams_2505_ = lean_ctor_get(v_a_2501_, 1);
lean_inc(v_levelParams_2505_);
lean_dec(v_a_2501_);
v___x_2506_ = lean_box(0);
v___x_2507_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__2(v_levelParams_2505_, v___x_2506_);
v___x_2508_ = l_Lean_mkConst(v_constName_2496_, v___x_2507_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 0, v___x_2508_);
v___x_2510_ = v___x_2503_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2508_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
lean_dec(v_constName_2496_);
v_a_2513_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2515_ = v___x_2500_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2500_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2513_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0___boxed(lean_object* v_constName_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0(v_constName_2521_, v___y_2522_, v___y_2523_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(lean_object* v_stx_2526_, lean_object* v_n_2527_, lean_object* v_expectedType_x3f_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0(v_n_2527_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; uint8_t v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2534_ = lean_box(0);
v___x_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2534_);
lean_ctor_set(v___x_2535_, 1, v_stx_2526_);
v___x_2536_ = l_Lean_LocalContext_empty;
v___x_2537_ = 0;
v___x_2538_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2538_, 0, v___x_2535_);
lean_ctor_set(v___x_2538_, 1, v___x_2536_);
lean_ctor_set(v___x_2538_, 2, v_expectedType_x3f_2528_);
lean_ctor_set(v___x_2538_, 3, v_a_2533_);
lean_ctor_set_uint8(v___x_2538_, sizeof(void*)*4, v___x_2537_);
lean_ctor_set_uint8(v___x_2538_, sizeof(void*)*4 + 1, v___x_2537_);
v___x_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2538_);
v___x_2540_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1(v___x_2539_, v___y_2529_, v___y_2530_);
return v___x_2540_;
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_dec(v_expectedType_x3f_2528_);
lean_dec(v_stx_2526_);
v_a_2541_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2532_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2532_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0___boxed(lean_object* v_stx_2549_, lean_object* v_n_2550_, lean_object* v_expectedType_x3f_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(v_stx_2549_, v_n_2550_, v_expectedType_x3f_2551_, v___y_2552_, v___y_2553_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object* v_id_2556_, lean_object* v_expectedType_x3f_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_){
_start:
{
lean_object* v___x_2561_; 
lean_inc(v_id_2556_);
v___x_2561_ = l_Lean_realizeGlobalConstNoOverload(v_id_2556_, v_a_2558_, v_a_2559_);
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2589_; 
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2564_ = v___x_2561_;
v_isShared_2565_ = v_isSharedCheck_2589_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2561_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2589_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2566_; lean_object* v_infoState_2567_; uint8_t v_enabled_2568_; 
v___x_2566_ = lean_st_ref_get(v_a_2559_);
v_infoState_2567_ = lean_ctor_get(v___x_2566_, 8);
lean_inc_ref(v_infoState_2567_);
lean_dec(v___x_2566_);
v_enabled_2568_ = lean_ctor_get_uint8(v_infoState_2567_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2567_);
if (v_enabled_2568_ == 0)
{
lean_object* v___x_2570_; 
lean_dec(v_expectedType_x3f_2557_);
lean_dec(v_id_2556_);
if (v_isShared_2565_ == 0)
{
v___x_2570_ = v___x_2564_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2562_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
else
{
lean_object* v___x_2572_; 
lean_del_object(v___x_2564_);
lean_inc(v_a_2562_);
v___x_2572_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(v_id_2556_, v_a_2562_, v_expectedType_x3f_2557_, v_a_2558_, v_a_2559_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2579_ == 0)
{
lean_object* v_unused_2580_; 
v_unused_2580_ = lean_ctor_get(v___x_2572_, 0);
lean_dec(v_unused_2580_);
v___x_2574_ = v___x_2572_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_dec(v___x_2572_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 0, v_a_2562_);
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2562_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
lean_dec(v_a_2562_);
v_a_2581_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2572_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2572_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
}
else
{
lean_dec(v_expectedType_x3f_2557_);
lean_dec(v_id_2556_);
return v___x_2561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed(lean_object* v_id_2590_, lean_object* v_expectedType_x3f_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_id_2590_, v_expectedType_x3f_2591_, v_a_2592_, v_a_2593_);
lean_dec(v_a_2593_);
lean_dec_ref(v_a_2592_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4(lean_object* v_t_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v___x_2600_; 
v___x_2600_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(v_t_2596_, v___y_2598_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___boxed(lean_object* v_t_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_){
_start:
{
lean_object* v_res_2605_; 
v_res_2605_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4(v_t_2601_, v___y_2602_, v___y_2603_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_2606_, lean_object* v_constName_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(v_constName_2607_, v___y_2608_, v___y_2609_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2612_, lean_object* v_constName_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_2612_, v_constName_2613_, v___y_2614_, v___y_2615_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b1_2618_, lean_object* v_ref_2619_, lean_object* v_constName_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v___x_2624_; 
v___x_2624_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(v_ref_2619_, v_constName_2620_, v___y_2621_, v___y_2622_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b1_2625_, lean_object* v_ref_2626_, lean_object* v_constName_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5(v_00_u03b1_2625_, v_ref_2626_, v_constName_2627_, v___y_2628_, v___y_2629_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v_ref_2626_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7(lean_object* v_00_u03b1_2632_, lean_object* v_ref_2633_, lean_object* v_msg_2634_, lean_object* v_declHint_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(v_ref_2633_, v_msg_2634_, v_declHint_2635_, v___y_2636_, v___y_2637_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___boxed(lean_object* v_00_u03b1_2640_, lean_object* v_ref_2641_, lean_object* v_msg_2642_, lean_object* v_declHint_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7(v_00_u03b1_2640_, v_ref_2641_, v_msg_2642_, v_declHint_2643_, v___y_2644_, v___y_2645_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v_ref_2641_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object* v_msg_2648_, lean_object* v_declHint_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
lean_object* v___x_2653_; 
v___x_2653_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(v_msg_2648_, v_declHint_2649_, v___y_2651_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_2654_, lean_object* v_declHint_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9(v_msg_2654_, v_declHint_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9(lean_object* v_00_u03b1_2660_, lean_object* v_ref_2661_, lean_object* v_msg_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_){
_start:
{
lean_object* v___x_2666_; 
v___x_2666_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(v_ref_2661_, v_msg_2662_, v___y_2663_, v___y_2664_);
return v___x_2666_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___boxed(lean_object* v_00_u03b1_2667_, lean_object* v_ref_2668_, lean_object* v_msg_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9(v_00_u03b1_2667_, v_ref_2668_, v_msg_2669_, v___y_2670_, v___y_2671_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v_ref_2668_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11(lean_object* v_00_u03b1_2674_, lean_object* v_msg_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(v_msg_2675_, v___y_2676_, v___y_2677_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___boxed(lean_object* v_00_u03b1_2680_, lean_object* v_msg_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11(v_00_u03b1_2680_, v_msg_2681_, v___y_2682_, v___y_2683_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(lean_object* v_id_2686_, lean_object* v_expectedType_x3f_2687_, lean_object* v_as_x27_2688_, lean_object* v_b_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_){
_start:
{
if (lean_obj_tag(v_as_x27_2688_) == 0)
{
lean_object* v___x_2693_; 
lean_dec(v_expectedType_x3f_2687_);
lean_dec(v_id_2686_);
v___x_2693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2693_, 0, v_b_2689_);
return v___x_2693_;
}
else
{
lean_object* v_head_2694_; lean_object* v_tail_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v_head_2694_ = lean_ctor_get(v_as_x27_2688_, 0);
v_tail_2695_ = lean_ctor_get(v_as_x27_2688_, 1);
v___x_2696_ = lean_box(0);
lean_inc(v_expectedType_x3f_2687_);
lean_inc(v_head_2694_);
lean_inc(v_id_2686_);
v___x_2697_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(v_id_2686_, v_head_2694_, v_expectedType_x3f_2687_, v___y_2690_, v___y_2691_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_dec_ref_known(v___x_2697_, 1);
v_as_x27_2688_ = v_tail_2695_;
v_b_2689_ = v___x_2696_;
goto _start;
}
else
{
lean_dec(v_expectedType_x3f_2687_);
lean_dec(v_id_2686_);
return v___x_2697_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg___boxed(lean_object* v_id_2699_, lean_object* v_expectedType_x3f_2700_, lean_object* v_as_x27_2701_, lean_object* v_b_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v_res_2706_; 
v_res_2706_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(v_id_2699_, v_expectedType_x3f_2700_, v_as_x27_2701_, v_b_2702_, v___y_2703_, v___y_2704_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec(v_as_x27_2701_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstWithInfos(lean_object* v_id_2707_, lean_object* v_expectedType_x3f_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_){
_start:
{
lean_object* v___x_2712_; 
lean_inc(v_id_2707_);
v___x_2712_ = l_Lean_realizeGlobalConst(v_id_2707_, v_a_2709_, v_a_2710_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2741_; 
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2715_ = v___x_2712_;
v_isShared_2716_ = v_isSharedCheck_2741_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2712_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2741_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2717_; lean_object* v_infoState_2718_; uint8_t v_enabled_2719_; 
v___x_2717_ = lean_st_ref_get(v_a_2710_);
v_infoState_2718_ = lean_ctor_get(v___x_2717_, 8);
lean_inc_ref(v_infoState_2718_);
lean_dec(v___x_2717_);
v_enabled_2719_ = lean_ctor_get_uint8(v_infoState_2718_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2718_);
if (v_enabled_2719_ == 0)
{
lean_object* v___x_2721_; 
lean_dec(v_expectedType_x3f_2708_);
lean_dec(v_id_2707_);
if (v_isShared_2716_ == 0)
{
v___x_2721_ = v___x_2715_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2713_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
else
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
lean_del_object(v___x_2715_);
v___x_2723_ = lean_box(0);
v___x_2724_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(v_id_2707_, v_expectedType_x3f_2708_, v_a_2713_, v___x_2723_, v_a_2709_, v_a_2710_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2731_ == 0)
{
lean_object* v_unused_2732_; 
v_unused_2732_ = lean_ctor_get(v___x_2724_, 0);
lean_dec(v_unused_2732_);
v___x_2726_ = v___x_2724_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_dec(v___x_2724_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 0, v_a_2713_);
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2713_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2740_; 
lean_dec(v_a_2713_);
v_a_2733_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2740_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2740_ == 0)
{
v___x_2735_ = v___x_2724_;
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2724_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2738_; 
if (v_isShared_2736_ == 0)
{
v___x_2738_ = v___x_2735_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v_a_2733_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
}
}
}
else
{
lean_dec(v_expectedType_x3f_2708_);
lean_dec(v_id_2707_);
return v___x_2712_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstWithInfos___boxed(lean_object* v_id_2742_, lean_object* v_expectedType_x3f_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Lean_Elab_realizeGlobalConstWithInfos(v_id_2742_, v_expectedType_x3f_2743_, v_a_2744_, v_a_2745_);
lean_dec(v_a_2745_);
lean_dec_ref(v_a_2744_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0(lean_object* v_id_2748_, lean_object* v_expectedType_x3f_2749_, lean_object* v_as_2750_, lean_object* v_as_x27_2751_, lean_object* v_b_2752_, lean_object* v_a_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
lean_object* v___x_2757_; 
v___x_2757_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(v_id_2748_, v_expectedType_x3f_2749_, v_as_x27_2751_, v_b_2752_, v___y_2754_, v___y_2755_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___boxed(lean_object* v_id_2758_, lean_object* v_expectedType_x3f_2759_, lean_object* v_as_2760_, lean_object* v_as_x27_2761_, lean_object* v_b_2762_, lean_object* v_a_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0(v_id_2758_, v_expectedType_x3f_2759_, v_as_2760_, v_as_x27_2761_, v_b_2762_, v_a_2763_, v___y_2764_, v___y_2765_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec(v_as_x27_2761_);
lean_dec(v_as_2760_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(lean_object* v_ref_2768_, lean_object* v_as_x27_2769_, lean_object* v_b_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
if (lean_obj_tag(v_as_x27_2769_) == 0)
{
lean_object* v___x_2774_; 
lean_dec(v_ref_2768_);
v___x_2774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2774_, 0, v_b_2770_);
return v___x_2774_;
}
else
{
lean_object* v_head_2775_; lean_object* v_tail_2776_; lean_object* v_fst_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v_head_2775_ = lean_ctor_get(v_as_x27_2769_, 0);
v_tail_2776_ = lean_ctor_get(v_as_x27_2769_, 1);
v_fst_2777_ = lean_ctor_get(v_head_2775_, 0);
v___x_2778_ = lean_box(0);
v___x_2779_ = lean_box(0);
lean_inc(v_fst_2777_);
lean_inc(v_ref_2768_);
v___x_2780_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(v_ref_2768_, v_fst_2777_, v___x_2779_, v___y_2771_, v___y_2772_);
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_dec_ref_known(v___x_2780_, 1);
v_as_x27_2769_ = v_tail_2776_;
v_b_2770_ = v___x_2778_;
goto _start;
}
else
{
lean_dec(v_ref_2768_);
return v___x_2780_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg___boxed(lean_object* v_ref_2782_, lean_object* v_as_x27_2783_, lean_object* v_b_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(v_ref_2782_, v_as_x27_2783_, v_b_2784_, v___y_2785_, v___y_2786_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v_as_x27_2783_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalNameWithInfos(lean_object* v_ref_2789_, lean_object* v_id_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = l_Lean_realizeGlobalName(v_id_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2823_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2797_ = v___x_2794_;
v_isShared_2798_ = v_isSharedCheck_2823_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2823_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2799_; lean_object* v_infoState_2800_; uint8_t v_enabled_2801_; 
v___x_2799_ = lean_st_ref_get(v_a_2792_);
v_infoState_2800_ = lean_ctor_get(v___x_2799_, 8);
lean_inc_ref(v_infoState_2800_);
lean_dec(v___x_2799_);
v_enabled_2801_ = lean_ctor_get_uint8(v_infoState_2800_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2800_);
if (v_enabled_2801_ == 0)
{
lean_object* v___x_2803_; 
lean_dec(v_ref_2789_);
if (v_isShared_2798_ == 0)
{
v___x_2803_ = v___x_2797_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_a_2795_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
else
{
lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_del_object(v___x_2797_);
v___x_2805_ = lean_box(0);
v___x_2806_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(v_ref_2789_, v_a_2795_, v___x_2805_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2813_ == 0)
{
lean_object* v_unused_2814_; 
v_unused_2814_ = lean_ctor_get(v___x_2806_, 0);
lean_dec(v_unused_2814_);
v___x_2808_ = v___x_2806_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_dec(v___x_2806_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v_a_2795_);
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2795_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
else
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
lean_dec(v_a_2795_);
v_a_2815_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v___x_2806_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2806_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
}
}
else
{
lean_dec(v_ref_2789_);
return v___x_2794_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalNameWithInfos___boxed(lean_object* v_ref_2824_, lean_object* v_id_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Lean_Elab_realizeGlobalNameWithInfos(v_ref_2824_, v_id_2825_, v_a_2826_, v_a_2827_);
lean_dec(v_a_2827_);
lean_dec_ref(v_a_2826_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0(lean_object* v_ref_2830_, lean_object* v_as_2831_, lean_object* v_as_x27_2832_, lean_object* v_b_2833_, lean_object* v_a_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(v_ref_2830_, v_as_x27_2832_, v_b_2833_, v___y_2835_, v___y_2836_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___boxed(lean_object* v_ref_2839_, lean_object* v_as_2840_, lean_object* v_as_x27_2841_, lean_object* v_b_2842_, lean_object* v_a_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0(v_ref_2839_, v_as_2840_, v_as_x27_2841_, v_b_2842_, v_a_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v_as_x27_2841_);
lean_dec(v_as_2840_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__0(lean_object* v_self_2848_){
_start:
{
lean_object* v_fst_2849_; 
v_fst_2849_ = lean_ctor_get(v_self_2848_, 0);
lean_inc(v_fst_2849_);
return v_fst_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__0___boxed(lean_object* v_self_2850_){
_start:
{
lean_object* v_res_2851_; 
v_res_2851_ = l_Lean_Elab_withInfoContext_x27___redArg___lam__0(v_self_2850_);
lean_dec_ref(v_self_2850_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__1(lean_object* v_info_2852_, lean_object* v_treesSaved_2853_, lean_object* v_s_2854_){
_start:
{
if (lean_obj_tag(v_info_2852_) == 0)
{
uint8_t v_enabled_2855_; lean_object* v_assignment_2856_; lean_object* v_lazyAssignment_2857_; lean_object* v_trees_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2868_; 
v_enabled_2855_ = lean_ctor_get_uint8(v_s_2854_, sizeof(void*)*3);
v_assignment_2856_ = lean_ctor_get(v_s_2854_, 0);
v_lazyAssignment_2857_ = lean_ctor_get(v_s_2854_, 1);
v_trees_2858_ = lean_ctor_get(v_s_2854_, 2);
v_isSharedCheck_2868_ = !lean_is_exclusive(v_s_2854_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2860_ = v_s_2854_;
v_isShared_2861_ = v_isSharedCheck_2868_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_trees_2858_);
lean_inc(v_lazyAssignment_2857_);
lean_inc(v_assignment_2856_);
lean_dec(v_s_2854_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2868_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v_val_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2866_; 
v_val_2862_ = lean_ctor_get(v_info_2852_, 0);
lean_inc(v_val_2862_);
lean_dec_ref_known(v_info_2852_, 1);
v___x_2863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2863_, 0, v_val_2862_);
lean_ctor_set(v___x_2863_, 1, v_trees_2858_);
v___x_2864_ = l_Lean_PersistentArray_push___redArg(v_treesSaved_2853_, v___x_2863_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 2, v___x_2864_);
v___x_2866_ = v___x_2860_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_assignment_2856_);
lean_ctor_set(v_reuseFailAlloc_2867_, 1, v_lazyAssignment_2857_);
lean_ctor_set(v_reuseFailAlloc_2867_, 2, v___x_2864_);
lean_ctor_set_uint8(v_reuseFailAlloc_2867_, sizeof(void*)*3, v_enabled_2855_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
else
{
uint8_t v_enabled_2869_; lean_object* v_assignment_2870_; lean_object* v_lazyAssignment_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2887_; 
v_enabled_2869_ = lean_ctor_get_uint8(v_s_2854_, sizeof(void*)*3);
v_assignment_2870_ = lean_ctor_get(v_s_2854_, 0);
v_lazyAssignment_2871_ = lean_ctor_get(v_s_2854_, 1);
v_isSharedCheck_2887_ = !lean_is_exclusive(v_s_2854_);
if (v_isSharedCheck_2887_ == 0)
{
lean_object* v_unused_2888_; 
v_unused_2888_ = lean_ctor_get(v_s_2854_, 2);
lean_dec(v_unused_2888_);
v___x_2873_ = v_s_2854_;
v_isShared_2874_ = v_isSharedCheck_2887_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_lazyAssignment_2871_);
lean_inc(v_assignment_2870_);
lean_dec(v_s_2854_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2887_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v_val_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2886_; 
v_val_2875_ = lean_ctor_get(v_info_2852_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_info_2852_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2877_ = v_info_2852_;
v_isShared_2878_ = v_isSharedCheck_2886_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_val_2875_);
lean_dec(v_info_2852_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2886_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
lean_ctor_set_tag(v___x_2877_, 2);
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_val_2875_);
v___x_2880_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2881_; lean_object* v___x_2883_; 
v___x_2881_ = l_Lean_PersistentArray_push___redArg(v_treesSaved_2853_, v___x_2880_);
if (v_isShared_2874_ == 0)
{
lean_ctor_set(v___x_2873_, 2, v___x_2881_);
v___x_2883_ = v___x_2873_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_assignment_2870_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_lazyAssignment_2871_);
lean_ctor_set(v_reuseFailAlloc_2884_, 2, v___x_2881_);
lean_ctor_set_uint8(v_reuseFailAlloc_2884_, sizeof(void*)*3, v_enabled_2869_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__2(lean_object* v_treesSaved_2889_, lean_object* v_modifyInfoState_2890_, lean_object* v_info_2891_){
_start:
{
lean_object* v___f_2892_; lean_object* v___x_2893_; 
v___f_2892_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2892_, 0, v_info_2891_);
lean_closure_set(v___f_2892_, 1, v_treesSaved_2889_);
v___x_2893_ = lean_apply_1(v_modifyInfoState_2890_, v___f_2892_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__3(lean_object* v___f_2894_, lean_object* v_info_2895_){
_start:
{
lean_object* v___x_2896_; 
v___x_2896_ = lean_apply_1(v___f_2894_, v_info_2895_);
return v___x_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__4(lean_object* v_toPure_2897_, lean_object* v_toBind_2898_, lean_object* v___f_2899_, lean_object* v_____do__lift_2900_){
_start:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2901_, 0, v_____do__lift_2900_);
v___x_2902_ = lean_apply_2(v_toPure_2897_, lean_box(0), v___x_2901_);
v___x_2903_ = lean_apply_4(v_toBind_2898_, lean_box(0), lean_box(0), v___x_2902_, v___f_2899_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__6(lean_object* v_toBind_2904_, lean_object* v_mkInfoOnError_2905_, lean_object* v___f_2906_, lean_object* v_mkInfo_2907_, lean_object* v___f_2908_, lean_object* v_a_x3f_2909_){
_start:
{
if (lean_obj_tag(v_a_x3f_2909_) == 0)
{
lean_object* v___x_2910_; 
lean_dec(v___f_2908_);
lean_dec(v_mkInfo_2907_);
v___x_2910_ = lean_apply_4(v_toBind_2904_, lean_box(0), lean_box(0), v_mkInfoOnError_2905_, v___f_2906_);
return v___x_2910_;
}
else
{
lean_object* v_val_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
lean_dec(v___f_2906_);
lean_dec(v_mkInfoOnError_2905_);
v_val_2911_ = lean_ctor_get(v_a_x3f_2909_, 0);
lean_inc(v_val_2911_);
lean_dec_ref_known(v_a_x3f_2909_, 1);
v___x_2912_ = lean_apply_1(v_mkInfo_2907_, v_val_2911_);
v___x_2913_ = lean_apply_4(v_toBind_2904_, lean_box(0), lean_box(0), v___x_2912_, v___f_2908_);
return v___x_2913_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__5(lean_object* v_toFunctor_2914_, lean_object* v_modifyInfoState_2915_, lean_object* v_toPure_2916_, lean_object* v_toBind_2917_, lean_object* v_mkInfoOnError_2918_, lean_object* v_mkInfo_2919_, lean_object* v_inst_2920_, lean_object* v_x_2921_, lean_object* v___f_2922_, lean_object* v_treesSaved_2923_){
_start:
{
lean_object* v_map_2924_; lean_object* v___f_2925_; lean_object* v___f_2926_; lean_object* v___f_2927_; lean_object* v___f_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
v_map_2924_ = lean_ctor_get(v_toFunctor_2914_, 0);
lean_inc(v_map_2924_);
lean_dec_ref(v_toFunctor_2914_);
v___f_2925_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2925_, 0, v_treesSaved_2923_);
lean_closure_set(v___f_2925_, 1, v_modifyInfoState_2915_);
v___f_2926_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2926_, 0, v___f_2925_);
lean_inc_ref(v___f_2926_);
lean_inc(v_toBind_2917_);
v___f_2927_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__4), 4, 3);
lean_closure_set(v___f_2927_, 0, v_toPure_2916_);
lean_closure_set(v___f_2927_, 1, v_toBind_2917_);
lean_closure_set(v___f_2927_, 2, v___f_2926_);
v___f_2928_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__6), 6, 5);
lean_closure_set(v___f_2928_, 0, v_toBind_2917_);
lean_closure_set(v___f_2928_, 1, v_mkInfoOnError_2918_);
lean_closure_set(v___f_2928_, 2, v___f_2927_);
lean_closure_set(v___f_2928_, 3, v_mkInfo_2919_);
lean_closure_set(v___f_2928_, 4, v___f_2926_);
v___x_2929_ = lean_apply_4(v_inst_2920_, lean_box(0), lean_box(0), v_x_2921_, v___f_2928_);
v___x_2930_ = lean_apply_4(v_map_2924_, lean_box(0), lean_box(0), v___f_2922_, v___x_2929_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__7(lean_object* v_x_2931_, lean_object* v_inst_2932_, lean_object* v_inst_2933_, lean_object* v_toBind_2934_, lean_object* v___f_2935_, lean_object* v_____do__lift_2936_){
_start:
{
uint8_t v_enabled_2937_; 
v_enabled_2937_ = lean_ctor_get_uint8(v_____do__lift_2936_, sizeof(void*)*3);
if (v_enabled_2937_ == 0)
{
lean_dec(v___f_2935_);
lean_dec(v_toBind_2934_);
lean_dec_ref(v_inst_2933_);
lean_dec_ref(v_inst_2932_);
lean_inc(v_x_2931_);
return v_x_2931_;
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = l_Lean_Elab_getResetInfoTrees___redArg(v_inst_2932_, v_inst_2933_);
v___x_2939_ = lean_apply_4(v_toBind_2934_, lean_box(0), lean_box(0), v___x_2938_, v___f_2935_);
return v___x_2939_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed(lean_object* v_x_2940_, lean_object* v_inst_2941_, lean_object* v_inst_2942_, lean_object* v_toBind_2943_, lean_object* v___f_2944_, lean_object* v_____do__lift_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Lean_Elab_withInfoContext_x27___redArg___lam__7(v_x_2940_, v_inst_2941_, v_inst_2942_, v_toBind_2943_, v___f_2944_, v_____do__lift_2945_);
lean_dec_ref(v_____do__lift_2945_);
lean_dec(v_x_2940_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg(lean_object* v_inst_2948_, lean_object* v_inst_2949_, lean_object* v_inst_2950_, lean_object* v_x_2951_, lean_object* v_mkInfo_2952_, lean_object* v_mkInfoOnError_2953_){
_start:
{
lean_object* v_toApplicative_2954_; lean_object* v_toBind_2955_; lean_object* v_getInfoState_2956_; lean_object* v_modifyInfoState_2957_; lean_object* v_toFunctor_2958_; lean_object* v_toPure_2959_; lean_object* v___f_2960_; lean_object* v___f_2961_; lean_object* v___f_2962_; lean_object* v___x_2963_; 
v_toApplicative_2954_ = lean_ctor_get(v_inst_2948_, 0);
v_toBind_2955_ = lean_ctor_get(v_inst_2948_, 1);
lean_inc_n(v_toBind_2955_, 3);
v_getInfoState_2956_ = lean_ctor_get(v_inst_2949_, 0);
lean_inc(v_getInfoState_2956_);
v_modifyInfoState_2957_ = lean_ctor_get(v_inst_2949_, 1);
v_toFunctor_2958_ = lean_ctor_get(v_toApplicative_2954_, 0);
v_toPure_2959_ = lean_ctor_get(v_toApplicative_2954_, 1);
v___f_2960_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
lean_inc(v_x_2951_);
lean_inc(v_toPure_2959_);
lean_inc(v_modifyInfoState_2957_);
lean_inc_ref(v_toFunctor_2958_);
v___f_2961_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__5), 10, 9);
lean_closure_set(v___f_2961_, 0, v_toFunctor_2958_);
lean_closure_set(v___f_2961_, 1, v_modifyInfoState_2957_);
lean_closure_set(v___f_2961_, 2, v_toPure_2959_);
lean_closure_set(v___f_2961_, 3, v_toBind_2955_);
lean_closure_set(v___f_2961_, 4, v_mkInfoOnError_2953_);
lean_closure_set(v___f_2961_, 5, v_mkInfo_2952_);
lean_closure_set(v___f_2961_, 6, v_inst_2950_);
lean_closure_set(v___f_2961_, 7, v_x_2951_);
lean_closure_set(v___f_2961_, 8, v___f_2960_);
v___f_2962_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_2962_, 0, v_x_2951_);
lean_closure_set(v___f_2962_, 1, v_inst_2948_);
lean_closure_set(v___f_2962_, 2, v_inst_2949_);
lean_closure_set(v___f_2962_, 3, v_toBind_2955_);
lean_closure_set(v___f_2962_, 4, v___f_2961_);
v___x_2963_ = lean_apply_4(v_toBind_2955_, lean_box(0), lean_box(0), v_getInfoState_2956_, v___f_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27(lean_object* v_m_2964_, lean_object* v_inst_2965_, lean_object* v_inst_2966_, lean_object* v_00_u03b1_2967_, lean_object* v_inst_2968_, lean_object* v_x_2969_, lean_object* v_mkInfo_2970_, lean_object* v_mkInfoOnError_2971_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Lean_Elab_withInfoContext_x27___redArg(v_inst_2965_, v_inst_2966_, v_inst_2968_, v_x_2969_, v_mkInfo_2970_, v_mkInfoOnError_2971_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__1(lean_object* v_treesSaved_2973_, lean_object* v_tree_2974_, lean_object* v_s_2975_){
_start:
{
uint8_t v_enabled_2976_; lean_object* v_assignment_2977_; lean_object* v_lazyAssignment_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2986_; 
v_enabled_2976_ = lean_ctor_get_uint8(v_s_2975_, sizeof(void*)*3);
v_assignment_2977_ = lean_ctor_get(v_s_2975_, 0);
v_lazyAssignment_2978_ = lean_ctor_get(v_s_2975_, 1);
v_isSharedCheck_2986_ = !lean_is_exclusive(v_s_2975_);
if (v_isSharedCheck_2986_ == 0)
{
lean_object* v_unused_2987_; 
v_unused_2987_ = lean_ctor_get(v_s_2975_, 2);
lean_dec(v_unused_2987_);
v___x_2980_ = v_s_2975_;
v_isShared_2981_ = v_isSharedCheck_2986_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_lazyAssignment_2978_);
lean_inc(v_assignment_2977_);
lean_dec(v_s_2975_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2986_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2982_; lean_object* v___x_2984_; 
v___x_2982_ = l_Lean_PersistentArray_push___redArg(v_treesSaved_2973_, v_tree_2974_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 2, v___x_2982_);
v___x_2984_ = v___x_2980_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_assignment_2977_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v_lazyAssignment_2978_);
lean_ctor_set(v_reuseFailAlloc_2985_, 2, v___x_2982_);
lean_ctor_set_uint8(v_reuseFailAlloc_2985_, sizeof(void*)*3, v_enabled_2976_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__0(lean_object* v_treesSaved_2988_, lean_object* v_modifyInfoState_2989_, lean_object* v_tree_2990_){
_start:
{
lean_object* v___f_2991_; lean_object* v___x_2992_; 
v___f_2991_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2991_, 0, v_treesSaved_2988_);
lean_closure_set(v___f_2991_, 1, v_tree_2990_);
v___x_2992_ = lean_apply_1(v_modifyInfoState_2989_, v___f_2991_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__2(lean_object* v_mkInfoTree_2993_, lean_object* v_toBind_2994_, lean_object* v___f_2995_, lean_object* v_st_2996_){
_start:
{
lean_object* v_trees_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v_trees_2997_ = lean_ctor_get(v_st_2996_, 2);
lean_inc_ref(v_trees_2997_);
lean_dec_ref(v_st_2996_);
v___x_2998_ = lean_apply_1(v_mkInfoTree_2993_, v_trees_2997_);
v___x_2999_ = lean_apply_4(v_toBind_2994_, lean_box(0), lean_box(0), v___x_2998_, v___f_2995_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__3(lean_object* v_toBind_3000_, lean_object* v_getInfoState_3001_, lean_object* v___f_3002_, lean_object* v_x_3003_){
_start:
{
lean_object* v___x_3004_; 
v___x_3004_ = lean_apply_4(v_toBind_3000_, lean_box(0), lean_box(0), v_getInfoState_3001_, v___f_3002_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__3___boxed(lean_object* v_toBind_3005_, lean_object* v_getInfoState_3006_, lean_object* v___f_3007_, lean_object* v_x_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l_Lean_Elab_withInfoTreeContext___redArg___lam__3(v_toBind_3005_, v_getInfoState_3006_, v___f_3007_, v_x_3008_);
lean_dec(v_x_3008_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__4(lean_object* v_toFunctor_3010_, lean_object* v_modifyInfoState_3011_, lean_object* v_mkInfoTree_3012_, lean_object* v_toBind_3013_, lean_object* v_getInfoState_3014_, lean_object* v_inst_3015_, lean_object* v_x_3016_, lean_object* v___f_3017_, lean_object* v_treesSaved_3018_){
_start:
{
lean_object* v_map_3019_; lean_object* v___f_3020_; lean_object* v___f_3021_; lean_object* v___f_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
v_map_3019_ = lean_ctor_get(v_toFunctor_3010_, 0);
lean_inc(v_map_3019_);
lean_dec_ref(v_toFunctor_3010_);
v___f_3020_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3020_, 0, v_treesSaved_3018_);
lean_closure_set(v___f_3020_, 1, v_modifyInfoState_3011_);
lean_inc(v_toBind_3013_);
v___f_3021_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__2), 4, 3);
lean_closure_set(v___f_3021_, 0, v_mkInfoTree_3012_);
lean_closure_set(v___f_3021_, 1, v_toBind_3013_);
lean_closure_set(v___f_3021_, 2, v___f_3020_);
v___f_3022_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_3022_, 0, v_toBind_3013_);
lean_closure_set(v___f_3022_, 1, v_getInfoState_3014_);
lean_closure_set(v___f_3022_, 2, v___f_3021_);
v___x_3023_ = lean_apply_4(v_inst_3015_, lean_box(0), lean_box(0), v_x_3016_, v___f_3022_);
v___x_3024_ = lean_apply_4(v_map_3019_, lean_box(0), lean_box(0), v___f_3017_, v___x_3023_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg(lean_object* v_inst_3025_, lean_object* v_inst_3026_, lean_object* v_inst_3027_, lean_object* v_x_3028_, lean_object* v_mkInfoTree_3029_){
_start:
{
lean_object* v_toApplicative_3030_; lean_object* v_toBind_3031_; lean_object* v_getInfoState_3032_; lean_object* v_modifyInfoState_3033_; lean_object* v_toFunctor_3034_; lean_object* v___f_3035_; lean_object* v___f_3036_; lean_object* v___f_3037_; lean_object* v___x_3038_; 
v_toApplicative_3030_ = lean_ctor_get(v_inst_3025_, 0);
v_toBind_3031_ = lean_ctor_get(v_inst_3025_, 1);
lean_inc_n(v_toBind_3031_, 3);
v_getInfoState_3032_ = lean_ctor_get(v_inst_3026_, 0);
lean_inc_n(v_getInfoState_3032_, 2);
v_modifyInfoState_3033_ = lean_ctor_get(v_inst_3026_, 1);
v_toFunctor_3034_ = lean_ctor_get(v_toApplicative_3030_, 0);
v___f_3035_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
lean_inc(v_x_3028_);
lean_inc(v_modifyInfoState_3033_);
lean_inc_ref(v_toFunctor_3034_);
v___f_3036_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__4), 9, 8);
lean_closure_set(v___f_3036_, 0, v_toFunctor_3034_);
lean_closure_set(v___f_3036_, 1, v_modifyInfoState_3033_);
lean_closure_set(v___f_3036_, 2, v_mkInfoTree_3029_);
lean_closure_set(v___f_3036_, 3, v_toBind_3031_);
lean_closure_set(v___f_3036_, 4, v_getInfoState_3032_);
lean_closure_set(v___f_3036_, 5, v_inst_3027_);
lean_closure_set(v___f_3036_, 6, v_x_3028_);
lean_closure_set(v___f_3036_, 7, v___f_3035_);
v___f_3037_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_3037_, 0, v_x_3028_);
lean_closure_set(v___f_3037_, 1, v_inst_3025_);
lean_closure_set(v___f_3037_, 2, v_inst_3026_);
lean_closure_set(v___f_3037_, 3, v_toBind_3031_);
lean_closure_set(v___f_3037_, 4, v___f_3036_);
v___x_3038_ = lean_apply_4(v_toBind_3031_, lean_box(0), lean_box(0), v_getInfoState_3032_, v___f_3037_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext(lean_object* v_m_3039_, lean_object* v_inst_3040_, lean_object* v_inst_3041_, lean_object* v_00_u03b1_3042_, lean_object* v_inst_3043_, lean_object* v_x_3044_, lean_object* v_mkInfoTree_3045_){
_start:
{
lean_object* v___x_3046_; 
v___x_3046_ = l_Lean_Elab_withInfoTreeContext___redArg(v_inst_3040_, v_inst_3041_, v_inst_3043_, v_x_3044_, v_mkInfoTree_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg___lam__0(lean_object* v_trees_3047_, lean_object* v_toPure_3048_, lean_object* v_____do__lift_3049_){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3050_, 0, v_____do__lift_3049_);
lean_ctor_set(v___x_3050_, 1, v_trees_3047_);
v___x_3051_ = lean_apply_2(v_toPure_3048_, lean_box(0), v___x_3050_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg___lam__1(lean_object* v_toPure_3052_, lean_object* v_toBind_3053_, lean_object* v_mkInfo_3054_, lean_object* v_trees_3055_){
_start:
{
lean_object* v___f_3056_; lean_object* v___x_3057_; 
v___f_3056_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3056_, 0, v_trees_3055_);
lean_closure_set(v___f_3056_, 1, v_toPure_3052_);
v___x_3057_ = lean_apply_4(v_toBind_3053_, lean_box(0), lean_box(0), v_mkInfo_3054_, v___f_3056_);
return v___x_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg(lean_object* v_inst_3058_, lean_object* v_inst_3059_, lean_object* v_inst_3060_, lean_object* v_x_3061_, lean_object* v_mkInfo_3062_){
_start:
{
lean_object* v_toApplicative_3063_; lean_object* v_toBind_3064_; lean_object* v_toPure_3065_; lean_object* v___f_3066_; lean_object* v___x_3067_; 
v_toApplicative_3063_ = lean_ctor_get(v_inst_3058_, 0);
v_toBind_3064_ = lean_ctor_get(v_inst_3058_, 1);
v_toPure_3065_ = lean_ctor_get(v_toApplicative_3063_, 1);
lean_inc(v_toBind_3064_);
lean_inc(v_toPure_3065_);
v___f_3066_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3066_, 0, v_toPure_3065_);
lean_closure_set(v___f_3066_, 1, v_toBind_3064_);
lean_closure_set(v___f_3066_, 2, v_mkInfo_3062_);
v___x_3067_ = l_Lean_Elab_withInfoTreeContext___redArg(v_inst_3058_, v_inst_3059_, v_inst_3060_, v_x_3061_, v___f_3066_);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext(lean_object* v_m_3068_, lean_object* v_inst_3069_, lean_object* v_inst_3070_, lean_object* v_00_u03b1_3071_, lean_object* v_inst_3072_, lean_object* v_x_3073_, lean_object* v_mkInfo_3074_){
_start:
{
lean_object* v_toApplicative_3075_; lean_object* v_toBind_3076_; lean_object* v_toPure_3077_; lean_object* v___f_3078_; lean_object* v___x_3079_; 
v_toApplicative_3075_ = lean_ctor_get(v_inst_3069_, 0);
v_toBind_3076_ = lean_ctor_get(v_inst_3069_, 1);
v_toPure_3077_ = lean_ctor_get(v_toApplicative_3075_, 1);
lean_inc(v_toBind_3076_);
lean_inc(v_toPure_3077_);
v___f_3078_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3078_, 0, v_toPure_3077_);
lean_closure_set(v___f_3078_, 1, v_toBind_3076_);
lean_closure_set(v___f_3078_, 2, v_mkInfo_3074_);
v___x_3079_ = l_Lean_Elab_withInfoTreeContext___redArg(v_inst_3069_, v_inst_3070_, v_inst_3072_, v_x_3073_, v___f_3078_);
return v___x_3079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1(lean_object* v_treesSaved_3080_, lean_object* v_trees_3081_, lean_object* v_s_3082_){
_start:
{
uint8_t v_enabled_3083_; lean_object* v_assignment_3084_; lean_object* v_lazyAssignment_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3093_; 
v_enabled_3083_ = lean_ctor_get_uint8(v_s_3082_, sizeof(void*)*3);
v_assignment_3084_ = lean_ctor_get(v_s_3082_, 0);
v_lazyAssignment_3085_ = lean_ctor_get(v_s_3082_, 1);
v_isSharedCheck_3093_ = !lean_is_exclusive(v_s_3082_);
if (v_isSharedCheck_3093_ == 0)
{
lean_object* v_unused_3094_; 
v_unused_3094_ = lean_ctor_get(v_s_3082_, 2);
lean_dec(v_unused_3094_);
v___x_3087_ = v_s_3082_;
v_isShared_3088_ = v_isSharedCheck_3093_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_lazyAssignment_3085_);
lean_inc(v_assignment_3084_);
lean_dec(v_s_3082_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3093_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3089_; lean_object* v___x_3091_; 
v___x_3089_ = l_Lean_PersistentArray_append___redArg(v_treesSaved_3080_, v_trees_3081_);
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 2, v___x_3089_);
v___x_3091_ = v___x_3087_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_assignment_3084_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v_lazyAssignment_3085_);
lean_ctor_set(v_reuseFailAlloc_3092_, 2, v___x_3089_);
lean_ctor_set_uint8(v_reuseFailAlloc_3092_, sizeof(void*)*3, v_enabled_3083_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1___boxed(lean_object* v_treesSaved_3095_, lean_object* v_trees_3096_, lean_object* v_s_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1(v_treesSaved_3095_, v_trees_3096_, v_s_3097_);
lean_dec_ref(v_trees_3096_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__0(lean_object* v_treesSaved_3099_, lean_object* v_modifyInfoState_3100_, lean_object* v_trees_3101_){
_start:
{
lean_object* v___f_3102_; lean_object* v___x_3103_; 
v___f_3102_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3102_, 0, v_treesSaved_3099_);
lean_closure_set(v___f_3102_, 1, v_trees_3101_);
v___x_3103_ = lean_apply_1(v_modifyInfoState_3100_, v___f_3102_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2(lean_object* v_toPure_3104_, lean_object* v_tree_3105_, lean_object* v_____do__lift_3106_){
_start:
{
if (lean_obj_tag(v_____do__lift_3106_) == 0)
{
lean_object* v___x_3107_; 
v___x_3107_ = lean_apply_2(v_toPure_3104_, lean_box(0), v_tree_3105_);
return v___x_3107_;
}
else
{
lean_object* v_val_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v_val_3108_ = lean_ctor_get(v_____do__lift_3106_, 0);
lean_inc(v_val_3108_);
v___x_3109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3109_, 0, v_val_3108_);
lean_ctor_set(v___x_3109_, 1, v_tree_3105_);
v___x_3110_ = lean_apply_2(v_toPure_3104_, lean_box(0), v___x_3109_);
return v___x_3110_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2___boxed(lean_object* v_toPure_3111_, lean_object* v_tree_3112_, lean_object* v_____do__lift_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2(v_toPure_3111_, v_tree_3112_, v_____do__lift_3113_);
lean_dec(v_____do__lift_3113_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3(lean_object* v_assignment_3115_, lean_object* v_toPure_3116_, lean_object* v_toBind_3117_, lean_object* v_ctx_x3f_3118_, lean_object* v_tree_3119_){
_start:
{
lean_object* v_tree_3120_; lean_object* v___f_3121_; lean_object* v___x_3122_; 
v_tree_3120_ = l_Lean_Elab_InfoTree_substitute(v_tree_3119_, v_assignment_3115_);
v___f_3121_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v___f_3121_, 0, v_toPure_3116_);
lean_closure_set(v___f_3121_, 1, v_tree_3120_);
v___x_3122_ = lean_apply_4(v_toBind_3117_, lean_box(0), lean_box(0), v_ctx_x3f_3118_, v___f_3121_);
return v___x_3122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3___boxed(lean_object* v_assignment_3123_, lean_object* v_toPure_3124_, lean_object* v_toBind_3125_, lean_object* v_ctx_x3f_3126_, lean_object* v_tree_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3(v_assignment_3123_, v_toPure_3124_, v_toBind_3125_, v_ctx_x3f_3126_, v_tree_3127_);
lean_dec_ref(v_assignment_3123_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__4(lean_object* v_toPure_3129_, lean_object* v_toBind_3130_, lean_object* v_ctx_x3f_3131_, lean_object* v_inst_3132_, lean_object* v___f_3133_, lean_object* v_st_3134_){
_start:
{
lean_object* v_assignment_3135_; lean_object* v_trees_3136_; lean_object* v___f_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v_assignment_3135_ = lean_ctor_get(v_st_3134_, 0);
lean_inc_ref(v_assignment_3135_);
v_trees_3136_ = lean_ctor_get(v_st_3134_, 2);
lean_inc_ref(v_trees_3136_);
lean_dec_ref(v_st_3134_);
lean_inc(v_toBind_3130_);
v___f_3137_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_3137_, 0, v_assignment_3135_);
lean_closure_set(v___f_3137_, 1, v_toPure_3129_);
lean_closure_set(v___f_3137_, 2, v_toBind_3130_);
lean_closure_set(v___f_3137_, 3, v_ctx_x3f_3131_);
v___x_3138_ = l_Lean_PersistentArray_mapM___redArg(v_inst_3132_, v___f_3137_, v_trees_3136_);
v___x_3139_ = lean_apply_4(v_toBind_3130_, lean_box(0), lean_box(0), v___x_3138_, v___f_3133_);
return v___x_3139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__6(lean_object* v_toFunctor_3140_, lean_object* v_modifyInfoState_3141_, lean_object* v_toPure_3142_, lean_object* v_toBind_3143_, lean_object* v_ctx_x3f_3144_, lean_object* v_inst_3145_, lean_object* v_getInfoState_3146_, lean_object* v_inst_3147_, lean_object* v_x_3148_, lean_object* v___f_3149_, lean_object* v_treesSaved_3150_){
_start:
{
lean_object* v_map_3151_; lean_object* v___f_3152_; lean_object* v___f_3153_; lean_object* v___f_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v_map_3151_ = lean_ctor_get(v_toFunctor_3140_, 0);
lean_inc(v_map_3151_);
lean_dec_ref(v_toFunctor_3140_);
v___f_3152_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3152_, 0, v_treesSaved_3150_);
lean_closure_set(v___f_3152_, 1, v_modifyInfoState_3141_);
lean_inc(v_toBind_3143_);
v___f_3153_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__4), 6, 5);
lean_closure_set(v___f_3153_, 0, v_toPure_3142_);
lean_closure_set(v___f_3153_, 1, v_toBind_3143_);
lean_closure_set(v___f_3153_, 2, v_ctx_x3f_3144_);
lean_closure_set(v___f_3153_, 3, v_inst_3145_);
lean_closure_set(v___f_3153_, 4, v___f_3152_);
v___f_3154_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_3154_, 0, v_toBind_3143_);
lean_closure_set(v___f_3154_, 1, v_getInfoState_3146_);
lean_closure_set(v___f_3154_, 2, v___f_3153_);
v___x_3155_ = lean_apply_4(v_inst_3147_, lean_box(0), lean_box(0), v_x_3148_, v___f_3154_);
v___x_3156_ = lean_apply_4(v_map_3151_, lean_box(0), lean_box(0), v___f_3149_, v___x_3155_);
return v___x_3156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(lean_object* v_inst_3157_, lean_object* v_inst_3158_, lean_object* v_inst_3159_, lean_object* v_x_3160_, lean_object* v_ctx_x3f_3161_){
_start:
{
lean_object* v_toApplicative_3162_; lean_object* v_toBind_3163_; lean_object* v_getInfoState_3164_; lean_object* v_modifyInfoState_3165_; lean_object* v_toFunctor_3166_; lean_object* v_toPure_3167_; lean_object* v___f_3168_; lean_object* v___f_3169_; lean_object* v___f_3170_; lean_object* v___x_3171_; 
v_toApplicative_3162_ = lean_ctor_get(v_inst_3157_, 0);
v_toBind_3163_ = lean_ctor_get(v_inst_3157_, 1);
lean_inc_n(v_toBind_3163_, 3);
v_getInfoState_3164_ = lean_ctor_get(v_inst_3158_, 0);
lean_inc_n(v_getInfoState_3164_, 2);
v_modifyInfoState_3165_ = lean_ctor_get(v_inst_3158_, 1);
v_toFunctor_3166_ = lean_ctor_get(v_toApplicative_3162_, 0);
v_toPure_3167_ = lean_ctor_get(v_toApplicative_3162_, 1);
v___f_3168_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
lean_inc(v_x_3160_);
lean_inc_ref(v_inst_3157_);
lean_inc(v_toPure_3167_);
lean_inc(v_modifyInfoState_3165_);
lean_inc_ref(v_toFunctor_3166_);
v___f_3169_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__6), 11, 10);
lean_closure_set(v___f_3169_, 0, v_toFunctor_3166_);
lean_closure_set(v___f_3169_, 1, v_modifyInfoState_3165_);
lean_closure_set(v___f_3169_, 2, v_toPure_3167_);
lean_closure_set(v___f_3169_, 3, v_toBind_3163_);
lean_closure_set(v___f_3169_, 4, v_ctx_x3f_3161_);
lean_closure_set(v___f_3169_, 5, v_inst_3157_);
lean_closure_set(v___f_3169_, 6, v_getInfoState_3164_);
lean_closure_set(v___f_3169_, 7, v_inst_3159_);
lean_closure_set(v___f_3169_, 8, v_x_3160_);
lean_closure_set(v___f_3169_, 9, v___f_3168_);
v___f_3170_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_3170_, 0, v_x_3160_);
lean_closure_set(v___f_3170_, 1, v_inst_3157_);
lean_closure_set(v___f_3170_, 2, v_inst_3158_);
lean_closure_set(v___f_3170_, 3, v_toBind_3163_);
lean_closure_set(v___f_3170_, 4, v___f_3169_);
v___x_3171_ = lean_apply_4(v_toBind_3163_, lean_box(0), lean_box(0), v_getInfoState_3164_, v___f_3170_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext(lean_object* v_m_3172_, lean_object* v_inst_3173_, lean_object* v_inst_3174_, lean_object* v_00_u03b1_3175_, lean_object* v_inst_3176_, lean_object* v_x_3177_, lean_object* v_ctx_x3f_3178_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(v_inst_3173_, v_inst_3174_, v_inst_3176_, v_x_3177_, v_ctx_x3f_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___redArg___lam__0(lean_object* v_toPure_3180_, lean_object* v_____do__lift_3181_){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3182_, 0, v_____do__lift_3181_);
v___x_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3182_);
v___x_3184_ = lean_apply_2(v_toPure_3180_, lean_box(0), v___x_3183_);
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___redArg(lean_object* v_inst_3185_, lean_object* v_inst_3186_, lean_object* v_inst_3187_, lean_object* v_inst_3188_, lean_object* v_inst_3189_, lean_object* v_inst_3190_, lean_object* v_inst_3191_, lean_object* v_inst_3192_, lean_object* v_inst_3193_, lean_object* v_x_3194_){
_start:
{
lean_object* v_toApplicative_3195_; lean_object* v_toBind_3196_; lean_object* v_toPure_3197_; lean_object* v___x_3198_; lean_object* v___f_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v_toApplicative_3195_ = lean_ctor_get(v_inst_3185_, 0);
v_toBind_3196_ = lean_ctor_get(v_inst_3185_, 1);
v_toPure_3197_ = lean_ctor_get(v_toApplicative_3195_, 1);
lean_inc_ref(v_inst_3185_);
v___x_3198_ = l_Lean_Elab_CommandContextInfo_save___redArg(v_inst_3185_, v_inst_3189_, v_inst_3191_, v_inst_3190_, v_inst_3192_, v_inst_3187_, v_inst_3193_);
lean_inc(v_toPure_3197_);
v___f_3199_ = lean_alloc_closure((void*)(l_Lean_Elab_withSaveInfoContext___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3199_, 0, v_toPure_3197_);
lean_inc(v_toBind_3196_);
v___x_3200_ = lean_apply_4(v_toBind_3196_, lean_box(0), lean_box(0), v___x_3198_, v___f_3199_);
v___x_3201_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(v_inst_3185_, v_inst_3186_, v_inst_3188_, v_x_3194_, v___x_3200_);
return v___x_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext(lean_object* v_m_3202_, lean_object* v_inst_3203_, lean_object* v_inst_3204_, lean_object* v_00_u03b1_3205_, lean_object* v_inst_3206_, lean_object* v_inst_3207_, lean_object* v_inst_3208_, lean_object* v_inst_3209_, lean_object* v_inst_3210_, lean_object* v_inst_3211_, lean_object* v_inst_3212_, lean_object* v_x_3213_){
_start:
{
lean_object* v___x_3214_; 
v___x_3214_ = l_Lean_Elab_withSaveInfoContext___redArg(v_inst_3203_, v_inst_3204_, v_inst_3206_, v_inst_3207_, v_inst_3208_, v_inst_3209_, v_inst_3210_, v_inst_3211_, v_inst_3212_, v_x_3213_);
return v___x_3214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext___redArg___lam__0(lean_object* v_toPure_3215_, lean_object* v_____x_3216_){
_start:
{
if (lean_obj_tag(v_____x_3216_) == 1)
{
lean_object* v_val_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3226_; 
v_val_3217_ = lean_ctor_get(v_____x_3216_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v_____x_3216_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3219_ = v_____x_3216_;
v_isShared_3220_ = v_isSharedCheck_3226_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_val_3217_);
lean_dec(v_____x_3216_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3226_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3221_; lean_object* v___x_3223_; 
v___x_3221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3221_, 0, v_val_3217_);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 0, v___x_3221_);
v___x_3223_ = v___x_3219_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v___x_3221_);
v___x_3223_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
lean_object* v___x_3224_; 
v___x_3224_ = lean_apply_2(v_toPure_3215_, lean_box(0), v___x_3223_);
return v___x_3224_;
}
}
}
else
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
lean_dec(v_____x_3216_);
v___x_3227_ = lean_box(0);
v___x_3228_ = lean_apply_2(v_toPure_3215_, lean_box(0), v___x_3227_);
return v___x_3228_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext___redArg(lean_object* v_inst_3229_, lean_object* v_inst_3230_, lean_object* v_inst_3231_, lean_object* v_inst_3232_, lean_object* v_x_3233_){
_start:
{
lean_object* v_toApplicative_3234_; lean_object* v_toBind_3235_; lean_object* v_toPure_3236_; lean_object* v___f_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
v_toApplicative_3234_ = lean_ctor_get(v_inst_3229_, 0);
v_toBind_3235_ = lean_ctor_get(v_inst_3229_, 1);
v_toPure_3236_ = lean_ctor_get(v_toApplicative_3234_, 1);
lean_inc(v_toPure_3236_);
v___f_3237_ = lean_alloc_closure((void*)(l_Lean_Elab_withSaveParentDeclInfoContext___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3237_, 0, v_toPure_3236_);
lean_inc(v_toBind_3235_);
v___x_3238_ = lean_apply_4(v_toBind_3235_, lean_box(0), lean_box(0), v_inst_3232_, v___f_3237_);
v___x_3239_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(v_inst_3229_, v_inst_3230_, v_inst_3231_, v_x_3233_, v___x_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext(lean_object* v_m_3240_, lean_object* v_inst_3241_, lean_object* v_inst_3242_, lean_object* v_00_u03b1_3243_, lean_object* v_inst_3244_, lean_object* v_inst_3245_, lean_object* v_x_3246_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = l_Lean_Elab_withSaveParentDeclInfoContext___redArg(v_inst_3241_, v_inst_3242_, v_inst_3244_, v_inst_3245_, v_x_3246_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg___lam__0(lean_object* v_toPure_3248_, lean_object* v_autoImplicits_3249_){
_start:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3250_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3250_, 0, v_autoImplicits_3249_);
v___x_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3250_);
v___x_3252_ = lean_apply_2(v_toPure_3248_, lean_box(0), v___x_3251_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg(lean_object* v_inst_3253_, lean_object* v_inst_3254_, lean_object* v_inst_3255_, lean_object* v_inst_3256_, lean_object* v_x_3257_){
_start:
{
lean_object* v_toApplicative_3258_; lean_object* v_toBind_3259_; lean_object* v_toPure_3260_; lean_object* v___f_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
v_toApplicative_3258_ = lean_ctor_get(v_inst_3253_, 0);
v_toBind_3259_ = lean_ctor_get(v_inst_3253_, 1);
v_toPure_3260_ = lean_ctor_get(v_toApplicative_3258_, 1);
lean_inc(v_toPure_3260_);
v___f_3261_ = lean_alloc_closure((void*)(l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3261_, 0, v_toPure_3260_);
lean_inc(v_toBind_3259_);
v___x_3262_ = lean_apply_4(v_toBind_3259_, lean_box(0), lean_box(0), v_inst_3256_, v___f_3261_);
v___x_3263_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(v_inst_3253_, v_inst_3254_, v_inst_3255_, v_x_3257_, v___x_3262_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext(lean_object* v_m_3264_, lean_object* v_inst_3265_, lean_object* v_inst_3266_, lean_object* v_00_u03b1_3267_, lean_object* v_inst_3268_, lean_object* v_inst_3269_, lean_object* v_x_3270_){
_start:
{
lean_object* v___x_3271_; 
v___x_3271_ = l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg(v_inst_3265_, v_inst_3266_, v_inst_3268_, v_inst_3269_, v_x_3270_);
return v___x_3271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0(lean_object* v___x_3272_, lean_object* v___x_3273_, lean_object* v_mvarId_3274_, lean_object* v_toPure_3275_, lean_object* v_____do__lift_3276_){
_start:
{
lean_object* v_assignment_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v_assignment_3277_ = lean_ctor_get(v_____do__lift_3276_, 0);
v___x_3278_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_3272_, v___x_3273_, v_assignment_3277_, v_mvarId_3274_);
v___x_3279_ = lean_apply_2(v_toPure_3275_, lean_box(0), v___x_3278_);
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0___boxed(lean_object* v___x_3280_, lean_object* v___x_3281_, lean_object* v_mvarId_3282_, lean_object* v_toPure_3283_, lean_object* v_____do__lift_3284_){
_start:
{
lean_object* v_res_3285_; 
v_res_3285_ = l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0(v___x_3280_, v___x_3281_, v_mvarId_3282_, v_toPure_3283_, v_____do__lift_3284_);
lean_dec_ref(v_____do__lift_3284_);
return v_res_3285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg(lean_object* v_inst_3288_, lean_object* v_inst_3289_, lean_object* v_mvarId_3290_){
_start:
{
lean_object* v_toApplicative_3291_; lean_object* v_toBind_3292_; lean_object* v_getInfoState_3293_; lean_object* v_toPure_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___f_3297_; lean_object* v___x_3298_; 
v_toApplicative_3291_ = lean_ctor_get(v_inst_3288_, 0);
lean_inc_ref(v_toApplicative_3291_);
v_toBind_3292_ = lean_ctor_get(v_inst_3288_, 1);
lean_inc(v_toBind_3292_);
lean_dec_ref(v_inst_3288_);
v_getInfoState_3293_ = lean_ctor_get(v_inst_3289_, 0);
lean_inc(v_getInfoState_3293_);
lean_dec_ref(v_inst_3289_);
v_toPure_3294_ = lean_ctor_get(v_toApplicative_3291_, 1);
lean_inc(v_toPure_3294_);
lean_dec_ref(v_toApplicative_3291_);
v___x_3295_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0));
v___x_3296_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1));
v___f_3297_ = lean_alloc_closure((void*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3297_, 0, v___x_3295_);
lean_closure_set(v___f_3297_, 1, v___x_3296_);
lean_closure_set(v___f_3297_, 2, v_mvarId_3290_);
lean_closure_set(v___f_3297_, 3, v_toPure_3294_);
v___x_3298_ = lean_apply_4(v_toBind_3292_, lean_box(0), lean_box(0), v_getInfoState_3293_, v___f_3297_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f(lean_object* v_m_3299_, lean_object* v_inst_3300_, lean_object* v_inst_3301_, lean_object* v_mvarId_3302_){
_start:
{
lean_object* v___x_3303_; 
v___x_3303_ = l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg(v_inst_3300_, v_inst_3301_, v_mvarId_3302_);
return v___x_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__0(lean_object* v___x_3304_, lean_object* v___x_3305_, lean_object* v_mvarId_3306_, lean_object* v_infoTree_3307_, lean_object* v_s_3308_){
_start:
{
uint8_t v_enabled_3309_; lean_object* v_assignment_3310_; lean_object* v_lazyAssignment_3311_; lean_object* v_trees_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3320_; 
v_enabled_3309_ = lean_ctor_get_uint8(v_s_3308_, sizeof(void*)*3);
v_assignment_3310_ = lean_ctor_get(v_s_3308_, 0);
v_lazyAssignment_3311_ = lean_ctor_get(v_s_3308_, 1);
v_trees_3312_ = lean_ctor_get(v_s_3308_, 2);
v_isSharedCheck_3320_ = !lean_is_exclusive(v_s_3308_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3314_ = v_s_3308_;
v_isShared_3315_ = v_isSharedCheck_3320_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_trees_3312_);
lean_inc(v_lazyAssignment_3311_);
lean_inc(v_assignment_3310_);
lean_dec(v_s_3308_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3320_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3316_; lean_object* v___x_3318_; 
v___x_3316_ = l_Lean_PersistentHashMap_insert___redArg(v___x_3304_, v___x_3305_, v_assignment_3310_, v_mvarId_3306_, v_infoTree_3307_);
if (v_isShared_3315_ == 0)
{
lean_ctor_set(v___x_3314_, 0, v___x_3316_);
v___x_3318_ = v___x_3314_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v___x_3316_);
lean_ctor_set(v_reuseFailAlloc_3319_, 1, v_lazyAssignment_3311_);
lean_ctor_set(v_reuseFailAlloc_3319_, 2, v_trees_3312_);
lean_ctor_set_uint8(v_reuseFailAlloc_3319_, sizeof(void*)*3, v_enabled_3309_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3324_ = ((lean_object*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__2));
v___x_3325_ = lean_unsigned_to_nat(2u);
v___x_3326_ = lean_unsigned_to_nat(384u);
v___x_3327_ = ((lean_object*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__1));
v___x_3328_ = ((lean_object*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__0));
v___x_3329_ = l_mkPanicMessageWithDecl(v___x_3328_, v___x_3327_, v___x_3326_, v___x_3325_, v___x_3324_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1(lean_object* v_inst_3330_, lean_object* v___f_3331_, lean_object* v___x_3332_, lean_object* v_____do__lift_3333_){
_start:
{
if (lean_obj_tag(v_____do__lift_3333_) == 0)
{
lean_object* v_modifyInfoState_3334_; lean_object* v___x_3335_; 
v_modifyInfoState_3334_ = lean_ctor_get(v_inst_3330_, 1);
lean_inc(v_modifyInfoState_3334_);
lean_dec_ref(v_inst_3330_);
v___x_3335_ = lean_apply_1(v_modifyInfoState_3334_, v___f_3331_);
return v___x_3335_;
}
else
{
lean_object* v___x_3336_; lean_object* v___x_3337_; 
lean_dec_ref(v___f_3331_);
lean_dec_ref(v_inst_3330_);
v___x_3336_ = lean_obj_once(&l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3, &l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3_once, _init_l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3);
v___x_3337_ = l_panic___redArg(v___x_3332_, v___x_3336_);
return v___x_3337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___boxed(lean_object* v_inst_3338_, lean_object* v___f_3339_, lean_object* v___x_3340_, lean_object* v_____do__lift_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lean_Elab_assignInfoHoleId___redArg___lam__1(v_inst_3338_, v___f_3339_, v___x_3340_, v_____do__lift_3341_);
lean_dec(v_____do__lift_3341_);
lean_dec(v___x_3340_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg(lean_object* v_inst_3343_, lean_object* v_inst_3344_, lean_object* v_mvarId_3345_, lean_object* v_infoTree_3346_){
_start:
{
lean_object* v_toBind_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___f_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___f_3354_; lean_object* v___x_3355_; 
v_toBind_3347_ = lean_ctor_get(v_inst_3343_, 1);
lean_inc(v_toBind_3347_);
v___x_3348_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0));
v___x_3349_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1));
lean_inc(v_mvarId_3345_);
v___f_3350_ = lean_alloc_closure((void*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__0), 5, 4);
lean_closure_set(v___f_3350_, 0, v___x_3348_);
lean_closure_set(v___f_3350_, 1, v___x_3349_);
lean_closure_set(v___f_3350_, 2, v_mvarId_3345_);
lean_closure_set(v___f_3350_, 3, v_infoTree_3346_);
v___x_3351_ = lean_box(0);
lean_inc_ref(v_inst_3344_);
lean_inc_ref(v_inst_3343_);
v___x_3352_ = l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg(v_inst_3343_, v_inst_3344_, v_mvarId_3345_);
v___x_3353_ = l_instInhabitedOfMonad___redArg(v_inst_3343_, v___x_3351_);
v___f_3354_ = lean_alloc_closure((void*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_3354_, 0, v_inst_3344_);
lean_closure_set(v___f_3354_, 1, v___f_3350_);
lean_closure_set(v___f_3354_, 2, v___x_3353_);
v___x_3355_ = lean_apply_4(v_toBind_3347_, lean_box(0), lean_box(0), v___x_3352_, v___f_3354_);
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId(lean_object* v_m_3356_, lean_object* v_inst_3357_, lean_object* v_inst_3358_, lean_object* v_mvarId_3359_, lean_object* v_infoTree_3360_){
_start:
{
lean_object* v___x_3361_; 
v___x_3361_ = l_Lean_Elab_assignInfoHoleId___redArg(v_inst_3357_, v_inst_3358_, v_mvarId_3359_, v_infoTree_3360_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___redArg___lam__0(lean_object* v_stx_3362_, lean_object* v_output_3363_, lean_object* v_toPure_3364_, lean_object* v_____do__lift_3365_){
_start:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3366_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3366_, 0, v_____do__lift_3365_);
lean_ctor_set(v___x_3366_, 1, v_stx_3362_);
lean_ctor_set(v___x_3366_, 2, v_output_3363_);
v___x_3367_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3366_);
v___x_3368_ = lean_apply_2(v_toPure_3364_, lean_box(0), v___x_3367_);
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___redArg(lean_object* v_inst_3369_, lean_object* v_inst_3370_, lean_object* v_inst_3371_, lean_object* v_inst_3372_, lean_object* v_stx_3373_, lean_object* v_output_3374_, lean_object* v_x_3375_){
_start:
{
lean_object* v_toApplicative_3376_; lean_object* v_toBind_3377_; lean_object* v_toPure_3378_; lean_object* v___f_3379_; lean_object* v_mkInfo_3380_; lean_object* v___f_3381_; lean_object* v___x_3382_; 
v_toApplicative_3376_ = lean_ctor_get(v_inst_3370_, 0);
v_toBind_3377_ = lean_ctor_get(v_inst_3370_, 1);
v_toPure_3378_ = lean_ctor_get(v_toApplicative_3376_, 1);
lean_inc_n(v_toPure_3378_, 2);
v___f_3379_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___redArg___lam__0), 4, 3);
lean_closure_set(v___f_3379_, 0, v_stx_3373_);
lean_closure_set(v___f_3379_, 1, v_output_3374_);
lean_closure_set(v___f_3379_, 2, v_toPure_3378_);
lean_inc_n(v_toBind_3377_, 2);
v_mkInfo_3380_ = lean_apply_4(v_toBind_3377_, lean_box(0), lean_box(0), v_inst_3372_, v___f_3379_);
v___f_3381_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3381_, 0, v_toPure_3378_);
lean_closure_set(v___f_3381_, 1, v_toBind_3377_);
lean_closure_set(v___f_3381_, 2, v_mkInfo_3380_);
v___x_3382_ = l_Lean_Elab_withInfoTreeContext___redArg(v_inst_3370_, v_inst_3371_, v_inst_3369_, v_x_3375_, v___f_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo(lean_object* v_m_3383_, lean_object* v_00_u03b1_3384_, lean_object* v_inst_3385_, lean_object* v_inst_3386_, lean_object* v_inst_3387_, lean_object* v_inst_3388_, lean_object* v_stx_3389_, lean_object* v_output_3390_, lean_object* v_x_3391_){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = l_Lean_Elab_withMacroExpansionInfo___redArg(v_inst_3385_, v_inst_3386_, v_inst_3387_, v_inst_3388_, v_stx_3389_, v_output_3390_, v_x_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__1(lean_object* v_treesSaved_3393_, lean_object* v___x_3394_, lean_object* v___x_3395_, lean_object* v___x_3396_, lean_object* v_mvarId_3397_, lean_object* v_s_3398_){
_start:
{
lean_object* v_trees_3399_; uint8_t v_enabled_3400_; lean_object* v_assignment_3401_; lean_object* v_lazyAssignment_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3419_; 
v_trees_3399_ = lean_ctor_get(v_s_3398_, 2);
v_enabled_3400_ = lean_ctor_get_uint8(v_s_3398_, sizeof(void*)*3);
v_assignment_3401_ = lean_ctor_get(v_s_3398_, 0);
v_lazyAssignment_3402_ = lean_ctor_get(v_s_3398_, 1);
v_isSharedCheck_3419_ = !lean_is_exclusive(v_s_3398_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3404_ = v_s_3398_;
v_isShared_3405_ = v_isSharedCheck_3419_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_trees_3399_);
lean_inc(v_lazyAssignment_3402_);
lean_inc(v_assignment_3401_);
lean_dec(v_s_3398_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3419_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v_size_3406_; lean_object* v___x_3407_; uint8_t v___x_3408_; 
v_size_3406_ = lean_ctor_get(v_trees_3399_, 2);
v___x_3407_ = lean_unsigned_to_nat(0u);
v___x_3408_ = lean_nat_dec_lt(v___x_3407_, v_size_3406_);
if (v___x_3408_ == 0)
{
lean_object* v___x_3410_; 
lean_dec_ref(v_trees_3399_);
lean_dec(v_mvarId_3397_);
lean_dec_ref(v___x_3396_);
lean_dec_ref(v___x_3395_);
if (v_isShared_3405_ == 0)
{
lean_ctor_set(v___x_3404_, 2, v_treesSaved_3393_);
v___x_3410_ = v___x_3404_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_assignment_3401_);
lean_ctor_set(v_reuseFailAlloc_3411_, 1, v_lazyAssignment_3402_);
lean_ctor_set(v_reuseFailAlloc_3411_, 2, v_treesSaved_3393_);
lean_ctor_set_uint8(v_reuseFailAlloc_3411_, sizeof(void*)*3, v_enabled_3400_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
else
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3417_; 
v___x_3412_ = lean_unsigned_to_nat(1u);
v___x_3413_ = lean_nat_sub(v_size_3406_, v___x_3412_);
v___x_3414_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3394_, v_trees_3399_, v___x_3413_);
lean_dec(v___x_3413_);
lean_dec_ref(v_trees_3399_);
v___x_3415_ = l_Lean_PersistentHashMap_insert___redArg(v___x_3395_, v___x_3396_, v_assignment_3401_, v_mvarId_3397_, v___x_3414_);
if (v_isShared_3405_ == 0)
{
lean_ctor_set(v___x_3404_, 2, v_treesSaved_3393_);
lean_ctor_set(v___x_3404_, 0, v___x_3415_);
v___x_3417_ = v___x_3404_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v___x_3415_);
lean_ctor_set(v_reuseFailAlloc_3418_, 1, v_lazyAssignment_3402_);
lean_ctor_set(v_reuseFailAlloc_3418_, 2, v_treesSaved_3393_);
lean_ctor_set_uint8(v_reuseFailAlloc_3418_, sizeof(void*)*3, v_enabled_3400_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__1___boxed(lean_object* v_treesSaved_3420_, lean_object* v___x_3421_, lean_object* v___x_3422_, lean_object* v___x_3423_, lean_object* v_mvarId_3424_, lean_object* v_s_3425_){
_start:
{
lean_object* v_res_3426_; 
v_res_3426_ = l_Lean_Elab_withInfoHole___redArg___lam__1(v_treesSaved_3420_, v___x_3421_, v___x_3422_, v___x_3423_, v_mvarId_3424_, v_s_3425_);
lean_dec_ref(v___x_3421_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__0(lean_object* v_modifyInfoState_3427_, lean_object* v___f_3428_, lean_object* v_x_3429_){
_start:
{
lean_object* v___x_3430_; 
v___x_3430_ = lean_apply_1(v_modifyInfoState_3427_, v___f_3428_);
return v___x_3430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__0___boxed(lean_object* v_modifyInfoState_3431_, lean_object* v___f_3432_, lean_object* v_x_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l_Lean_Elab_withInfoHole___redArg___lam__0(v_modifyInfoState_3431_, v___f_3432_, v_x_3433_);
lean_dec(v_x_3433_);
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__2(lean_object* v_toFunctor_3435_, lean_object* v___x_3436_, lean_object* v___x_3437_, lean_object* v___x_3438_, lean_object* v_mvarId_3439_, lean_object* v_modifyInfoState_3440_, lean_object* v_inst_3441_, lean_object* v_x_3442_, lean_object* v___f_3443_, lean_object* v_treesSaved_3444_){
_start:
{
lean_object* v_map_3445_; lean_object* v___f_3446_; lean_object* v___f_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v_map_3445_ = lean_ctor_get(v_toFunctor_3435_, 0);
lean_inc(v_map_3445_);
lean_dec_ref(v_toFunctor_3435_);
v___f_3446_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoHole___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_3446_, 0, v_treesSaved_3444_);
lean_closure_set(v___f_3446_, 1, v___x_3436_);
lean_closure_set(v___f_3446_, 2, v___x_3437_);
lean_closure_set(v___f_3446_, 3, v___x_3438_);
lean_closure_set(v___f_3446_, 4, v_mvarId_3439_);
v___f_3447_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoHole___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3447_, 0, v_modifyInfoState_3440_);
lean_closure_set(v___f_3447_, 1, v___f_3446_);
v___x_3448_ = lean_apply_4(v_inst_3441_, lean_box(0), lean_box(0), v_x_3442_, v___f_3447_);
v___x_3449_ = lean_apply_4(v_map_3445_, lean_box(0), lean_box(0), v___f_3443_, v___x_3448_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg(lean_object* v_inst_3450_, lean_object* v_inst_3451_, lean_object* v_inst_3452_, lean_object* v_mvarId_3453_, lean_object* v_x_3454_){
_start:
{
lean_object* v_toApplicative_3455_; lean_object* v_toBind_3456_; lean_object* v_getInfoState_3457_; lean_object* v_modifyInfoState_3458_; lean_object* v_toFunctor_3459_; lean_object* v___f_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___f_3464_; lean_object* v___f_3465_; lean_object* v___x_3466_; 
v_toApplicative_3455_ = lean_ctor_get(v_inst_3451_, 0);
v_toBind_3456_ = lean_ctor_get(v_inst_3451_, 1);
lean_inc_n(v_toBind_3456_, 2);
v_getInfoState_3457_ = lean_ctor_get(v_inst_3452_, 0);
lean_inc(v_getInfoState_3457_);
v_modifyInfoState_3458_ = lean_ctor_get(v_inst_3452_, 1);
v_toFunctor_3459_ = lean_ctor_get(v_toApplicative_3455_, 0);
v___f_3460_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
v___x_3461_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0));
v___x_3462_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1));
v___x_3463_ = l_Lean_Elab_instInhabitedInfoTree_default;
lean_inc(v_x_3454_);
lean_inc(v_modifyInfoState_3458_);
lean_inc_ref(v_toFunctor_3459_);
v___f_3464_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoHole___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3464_, 0, v_toFunctor_3459_);
lean_closure_set(v___f_3464_, 1, v___x_3463_);
lean_closure_set(v___f_3464_, 2, v___x_3461_);
lean_closure_set(v___f_3464_, 3, v___x_3462_);
lean_closure_set(v___f_3464_, 4, v_mvarId_3453_);
lean_closure_set(v___f_3464_, 5, v_modifyInfoState_3458_);
lean_closure_set(v___f_3464_, 6, v_inst_3450_);
lean_closure_set(v___f_3464_, 7, v_x_3454_);
lean_closure_set(v___f_3464_, 8, v___f_3460_);
v___f_3465_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_3465_, 0, v_x_3454_);
lean_closure_set(v___f_3465_, 1, v_inst_3451_);
lean_closure_set(v___f_3465_, 2, v_inst_3452_);
lean_closure_set(v___f_3465_, 3, v_toBind_3456_);
lean_closure_set(v___f_3465_, 4, v___f_3464_);
v___x_3466_ = lean_apply_4(v_toBind_3456_, lean_box(0), lean_box(0), v_getInfoState_3457_, v___f_3465_);
return v___x_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole(lean_object* v_m_3467_, lean_object* v_00_u03b1_3468_, lean_object* v_inst_3469_, lean_object* v_inst_3470_, lean_object* v_inst_3471_, lean_object* v_mvarId_3472_, lean_object* v_x_3473_){
_start:
{
lean_object* v_toApplicative_3474_; lean_object* v_toBind_3475_; lean_object* v_getInfoState_3476_; lean_object* v_modifyInfoState_3477_; lean_object* v_toFunctor_3478_; lean_object* v___f_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___f_3483_; lean_object* v___f_3484_; lean_object* v___x_3485_; 
v_toApplicative_3474_ = lean_ctor_get(v_inst_3470_, 0);
v_toBind_3475_ = lean_ctor_get(v_inst_3470_, 1);
lean_inc_n(v_toBind_3475_, 2);
v_getInfoState_3476_ = lean_ctor_get(v_inst_3471_, 0);
lean_inc(v_getInfoState_3476_);
v_modifyInfoState_3477_ = lean_ctor_get(v_inst_3471_, 1);
v_toFunctor_3478_ = lean_ctor_get(v_toApplicative_3474_, 0);
v___f_3479_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
v___x_3480_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0));
v___x_3481_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1));
v___x_3482_ = l_Lean_Elab_instInhabitedInfoTree_default;
lean_inc(v_x_3473_);
lean_inc(v_modifyInfoState_3477_);
lean_inc_ref(v_toFunctor_3478_);
v___f_3483_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoHole___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3483_, 0, v_toFunctor_3478_);
lean_closure_set(v___f_3483_, 1, v___x_3482_);
lean_closure_set(v___f_3483_, 2, v___x_3480_);
lean_closure_set(v___f_3483_, 3, v___x_3481_);
lean_closure_set(v___f_3483_, 4, v_mvarId_3472_);
lean_closure_set(v___f_3483_, 5, v_modifyInfoState_3477_);
lean_closure_set(v___f_3483_, 6, v_inst_3469_);
lean_closure_set(v___f_3483_, 7, v_x_3473_);
lean_closure_set(v___f_3483_, 8, v___f_3479_);
v___f_3484_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_3484_, 0, v_x_3473_);
lean_closure_set(v___f_3484_, 1, v_inst_3470_);
lean_closure_set(v___f_3484_, 2, v_inst_3471_);
lean_closure_set(v___f_3484_, 3, v_toBind_3475_);
lean_closure_set(v___f_3484_, 4, v___f_3483_);
v___x_3485_ = lean_apply_4(v_toBind_3475_, lean_box(0), lean_box(0), v_getInfoState_3476_, v___f_3484_);
return v___x_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___lam__0(uint8_t v_flag_3486_, lean_object* v_s_3487_){
_start:
{
lean_object* v_assignment_3488_; lean_object* v_lazyAssignment_3489_; lean_object* v_trees_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
v_assignment_3488_ = lean_ctor_get(v_s_3487_, 0);
v_lazyAssignment_3489_ = lean_ctor_get(v_s_3487_, 1);
v_trees_3490_ = lean_ctor_get(v_s_3487_, 2);
v_isSharedCheck_3497_ = !lean_is_exclusive(v_s_3487_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v_s_3487_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_trees_3490_);
lean_inc(v_lazyAssignment_3489_);
lean_inc(v_assignment_3488_);
lean_dec(v_s_3487_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_assignment_3488_);
lean_ctor_set(v_reuseFailAlloc_3496_, 1, v_lazyAssignment_3489_);
lean_ctor_set(v_reuseFailAlloc_3496_, 2, v_trees_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
lean_ctor_set_uint8(v___x_3495_, sizeof(void*)*3, v_flag_3486_);
return v___x_3495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___lam__0___boxed(lean_object* v_flag_3498_, lean_object* v_s_3499_){
_start:
{
uint8_t v_flag_boxed_3500_; lean_object* v_res_3501_; 
v_flag_boxed_3500_ = lean_unbox(v_flag_3498_);
v_res_3501_ = l_Lean_Elab_enableInfoTree___redArg___lam__0(v_flag_boxed_3500_, v_s_3499_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg(lean_object* v_inst_3502_, uint8_t v_flag_3503_){
_start:
{
lean_object* v_modifyInfoState_3504_; lean_object* v___x_3505_; lean_object* v___f_3506_; lean_object* v___x_3507_; 
v_modifyInfoState_3504_ = lean_ctor_get(v_inst_3502_, 1);
lean_inc(v_modifyInfoState_3504_);
lean_dec_ref(v_inst_3502_);
v___x_3505_ = lean_box(v_flag_3503_);
v___f_3506_ = lean_alloc_closure((void*)(l_Lean_Elab_enableInfoTree___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3506_, 0, v___x_3505_);
v___x_3507_ = lean_apply_1(v_modifyInfoState_3504_, v___f_3506_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___boxed(lean_object* v_inst_3508_, lean_object* v_flag_3509_){
_start:
{
uint8_t v_flag_boxed_3510_; lean_object* v_res_3511_; 
v_flag_boxed_3510_ = lean_unbox(v_flag_3509_);
v_res_3511_ = l_Lean_Elab_enableInfoTree___redArg(v_inst_3508_, v_flag_boxed_3510_);
return v_res_3511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree(lean_object* v_m_3512_, lean_object* v_inst_3513_, uint8_t v_flag_3514_){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = l_Lean_Elab_enableInfoTree___redArg(v_inst_3513_, v_flag_3514_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___boxed(lean_object* v_m_3516_, lean_object* v_inst_3517_, lean_object* v_flag_3518_){
_start:
{
uint8_t v_flag_boxed_3519_; lean_object* v_res_3520_; 
v_flag_boxed_3519_ = lean_unbox(v_flag_3518_);
v_res_3520_ = l_Lean_Elab_enableInfoTree(v_m_3516_, v_inst_3517_, v_flag_boxed_3519_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__0(lean_object* v_x_3521_){
_start:
{
lean_object* v_fst_3522_; 
v_fst_3522_ = lean_ctor_get(v_x_3521_, 0);
lean_inc(v_fst_3522_);
return v_fst_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__0___boxed(lean_object* v_x_3523_){
_start:
{
lean_object* v_res_3524_; 
v_res_3524_ = l_Lean_Elab_withEnableInfoTree___redArg___lam__0(v_x_3523_);
lean_dec_ref(v_x_3523_);
return v_res_3524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__1(lean_object* v_x_3525_, lean_object* v_____r_3526_){
_start:
{
lean_inc(v_x_3525_);
return v_x_3525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__1___boxed(lean_object* v_x_3527_, lean_object* v_____r_3528_){
_start:
{
lean_object* v_res_3529_; 
v_res_3529_ = l_Lean_Elab_withEnableInfoTree___redArg___lam__1(v_x_3527_, v_____r_3528_);
lean_dec(v_x_3527_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__2(lean_object* v___x_3530_, lean_object* v_x_3531_){
_start:
{
lean_inc(v___x_3530_);
return v___x_3530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__2___boxed(lean_object* v___x_3532_, lean_object* v_x_3533_){
_start:
{
lean_object* v_res_3534_; 
v_res_3534_ = l_Lean_Elab_withEnableInfoTree___redArg___lam__2(v___x_3532_, v_x_3533_);
lean_dec(v_x_3533_);
lean_dec(v___x_3532_);
return v_res_3534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__3(lean_object* v_toFunctor_3535_, lean_object* v_inst_3536_, uint8_t v_flag_3537_, lean_object* v_toBind_3538_, lean_object* v___f_3539_, lean_object* v_inst_3540_, lean_object* v___f_3541_, lean_object* v_____do__lift_3542_){
_start:
{
uint8_t v_enabled_3543_; lean_object* v_map_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___f_3548_; lean_object* v_y_3549_; lean_object* v___x_3550_; 
v_enabled_3543_ = lean_ctor_get_uint8(v_____do__lift_3542_, sizeof(void*)*3);
v_map_3544_ = lean_ctor_get(v_toFunctor_3535_, 0);
lean_inc(v_map_3544_);
lean_dec_ref(v_toFunctor_3535_);
lean_inc_ref(v_inst_3536_);
v___x_3545_ = l_Lean_Elab_enableInfoTree___redArg(v_inst_3536_, v_flag_3537_);
v___x_3546_ = lean_apply_4(v_toBind_3538_, lean_box(0), lean_box(0), v___x_3545_, v___f_3539_);
v___x_3547_ = l_Lean_Elab_enableInfoTree___redArg(v_inst_3536_, v_enabled_3543_);
v___f_3548_ = lean_alloc_closure((void*)(l_Lean_Elab_withEnableInfoTree___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_3548_, 0, v___x_3547_);
v_y_3549_ = lean_apply_4(v_inst_3540_, lean_box(0), lean_box(0), v___x_3546_, v___f_3548_);
v___x_3550_ = lean_apply_4(v_map_3544_, lean_box(0), lean_box(0), v___f_3541_, v_y_3549_);
return v___x_3550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__3___boxed(lean_object* v_toFunctor_3551_, lean_object* v_inst_3552_, lean_object* v_flag_3553_, lean_object* v_toBind_3554_, lean_object* v___f_3555_, lean_object* v_inst_3556_, lean_object* v___f_3557_, lean_object* v_____do__lift_3558_){
_start:
{
uint8_t v_flag_boxed_3559_; lean_object* v_res_3560_; 
v_flag_boxed_3559_ = lean_unbox(v_flag_3553_);
v_res_3560_ = l_Lean_Elab_withEnableInfoTree___redArg___lam__3(v_toFunctor_3551_, v_inst_3552_, v_flag_boxed_3559_, v_toBind_3554_, v___f_3555_, v_inst_3556_, v___f_3557_, v_____do__lift_3558_);
lean_dec_ref(v_____do__lift_3558_);
return v_res_3560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg(lean_object* v_inst_3562_, lean_object* v_inst_3563_, lean_object* v_inst_3564_, uint8_t v_flag_3565_, lean_object* v_x_3566_){
_start:
{
lean_object* v_toApplicative_3567_; lean_object* v_toBind_3568_; lean_object* v_getInfoState_3569_; lean_object* v_toFunctor_3570_; lean_object* v___f_3571_; lean_object* v___f_3572_; lean_object* v___x_3573_; lean_object* v___f_3574_; lean_object* v___x_3575_; 
v_toApplicative_3567_ = lean_ctor_get(v_inst_3562_, 0);
lean_inc_ref(v_toApplicative_3567_);
v_toBind_3568_ = lean_ctor_get(v_inst_3562_, 1);
lean_inc_n(v_toBind_3568_, 2);
lean_dec_ref(v_inst_3562_);
v_getInfoState_3569_ = lean_ctor_get(v_inst_3563_, 0);
lean_inc(v_getInfoState_3569_);
v_toFunctor_3570_ = lean_ctor_get(v_toApplicative_3567_, 0);
lean_inc_ref(v_toFunctor_3570_);
lean_dec_ref(v_toApplicative_3567_);
v___f_3571_ = ((lean_object*)(l_Lean_Elab_withEnableInfoTree___redArg___closed__0));
v___f_3572_ = lean_alloc_closure((void*)(l_Lean_Elab_withEnableInfoTree___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3572_, 0, v_x_3566_);
v___x_3573_ = lean_box(v_flag_3565_);
v___f_3574_ = lean_alloc_closure((void*)(l_Lean_Elab_withEnableInfoTree___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_3574_, 0, v_toFunctor_3570_);
lean_closure_set(v___f_3574_, 1, v_inst_3563_);
lean_closure_set(v___f_3574_, 2, v___x_3573_);
lean_closure_set(v___f_3574_, 3, v_toBind_3568_);
lean_closure_set(v___f_3574_, 4, v___f_3572_);
lean_closure_set(v___f_3574_, 5, v_inst_3564_);
lean_closure_set(v___f_3574_, 6, v___f_3571_);
v___x_3575_ = lean_apply_4(v_toBind_3568_, lean_box(0), lean_box(0), v_getInfoState_3569_, v___f_3574_);
return v___x_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___boxed(lean_object* v_inst_3576_, lean_object* v_inst_3577_, lean_object* v_inst_3578_, lean_object* v_flag_3579_, lean_object* v_x_3580_){
_start:
{
uint8_t v_flag_boxed_3581_; lean_object* v_res_3582_; 
v_flag_boxed_3581_ = lean_unbox(v_flag_3579_);
v_res_3582_ = l_Lean_Elab_withEnableInfoTree___redArg(v_inst_3576_, v_inst_3577_, v_inst_3578_, v_flag_boxed_3581_, v_x_3580_);
return v_res_3582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree(lean_object* v_m_3583_, lean_object* v_00_u03b1_3584_, lean_object* v_inst_3585_, lean_object* v_inst_3586_, lean_object* v_inst_3587_, uint8_t v_flag_3588_, lean_object* v_x_3589_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l_Lean_Elab_withEnableInfoTree___redArg(v_inst_3585_, v_inst_3586_, v_inst_3587_, v_flag_3588_, v_x_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___boxed(lean_object* v_m_3591_, lean_object* v_00_u03b1_3592_, lean_object* v_inst_3593_, lean_object* v_inst_3594_, lean_object* v_inst_3595_, lean_object* v_flag_3596_, lean_object* v_x_3597_){
_start:
{
uint8_t v_flag_boxed_3598_; lean_object* v_res_3599_; 
v_flag_boxed_3598_ = lean_unbox(v_flag_3596_);
v_res_3599_ = l_Lean_Elab_withEnableInfoTree(v_m_3591_, v_00_u03b1_3592_, v_inst_3593_, v_inst_3594_, v_inst_3595_, v_flag_boxed_3598_, v_x_3597_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___redArg___lam__0(lean_object* v_toPure_3600_, lean_object* v_____do__lift_3601_){
_start:
{
lean_object* v_trees_3602_; lean_object* v___x_3603_; 
v_trees_3602_ = lean_ctor_get(v_____do__lift_3601_, 2);
lean_inc_ref(v_trees_3602_);
lean_dec_ref(v_____do__lift_3601_);
v___x_3603_ = lean_apply_2(v_toPure_3600_, lean_box(0), v_trees_3602_);
return v___x_3603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___redArg(lean_object* v_inst_3604_, lean_object* v_inst_3605_){
_start:
{
lean_object* v_toApplicative_3606_; lean_object* v_toBind_3607_; lean_object* v_getInfoState_3608_; lean_object* v_toPure_3609_; lean_object* v___f_3610_; lean_object* v___x_3611_; 
v_toApplicative_3606_ = lean_ctor_get(v_inst_3605_, 0);
lean_inc_ref(v_toApplicative_3606_);
v_toBind_3607_ = lean_ctor_get(v_inst_3605_, 1);
lean_inc(v_toBind_3607_);
lean_dec_ref(v_inst_3605_);
v_getInfoState_3608_ = lean_ctor_get(v_inst_3604_, 0);
lean_inc(v_getInfoState_3608_);
lean_dec_ref(v_inst_3604_);
v_toPure_3609_ = lean_ctor_get(v_toApplicative_3606_, 1);
lean_inc(v_toPure_3609_);
lean_dec_ref(v_toApplicative_3606_);
v___f_3610_ = lean_alloc_closure((void*)(l_Lean_Elab_getInfoTrees___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3610_, 0, v_toPure_3609_);
v___x_3611_ = lean_apply_4(v_toBind_3607_, lean_box(0), lean_box(0), v_getInfoState_3608_, v___f_3610_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees(lean_object* v_m_3612_, lean_object* v_inst_3613_, lean_object* v_inst_3614_){
_start:
{
lean_object* v___x_3615_; 
v___x_3615_ = l_Lean_Elab_getInfoTrees___redArg(v_inst_3613_, v_inst_3614_);
return v___x_3615_;
}
}
lean_object* runtime_initialize_Lean_Elab_InfoTree_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PPGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_InfoTree_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_InfoTree_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_PPGoal(uint8_t builtin);
lean_object* initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_InfoTree_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_InfoTree_Main(builtin);
}
#ifdef __cplusplus
}
#endif
