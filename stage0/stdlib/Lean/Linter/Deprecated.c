// Lean compiler output
// Module: Lean.Linter.Deprecated
// Imports: public import Lean.Meta.Basic import Lean.Linter.Init import Lean.Elab.InfoTree.Main import Lean.ExtraModUses import Lean.Meta.Hint import Init.Data.List.MapIdx import Init.Omega import Std.Time.Format import Std.Time.Zoned
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
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* lean_get_current_time();
lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* l_Std_Time_Database_defaultGetLocalZoneRules();
lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp(lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_LocalTimeType_getTimeZone(lean_object*);
lean_object* l_Std_Time_PlainDate_toLeanDateString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object*, uint8_t, lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_ConstantInfo_numLevelParams(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_ConstantInfo_instantiateTypeLevelParams(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
lean_object* l_Lean_Name_appendCore(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
extern lean_object* l_Lean_rootNamespace;
lean_object* l_Lean_getRevAliases(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
uint8_t l_Lean_isProtected(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 99, 57, 49, 46, 156, 253, 187)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "if true, generate deprecation warnings"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(248, 165, 85, 201, 27, 48, 185, 203)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_deprecated;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "deprecatedTarget"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 99, 57, 49, 46, 156, 253, 187)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(204, 166, 165, 234, 53, 174, 145, 27)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "if true, warn when a `@[deprecated]` attribute points at a declaration that is itself deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(248, 165, 85, 201, 27, 48, 185, 203)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(147, 187, 162, 70, 72, 196, 181, 236)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_deprecated_deprecatedTarget;
static const lean_ctor_object l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0 = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry_default = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__2(lean_object*);
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "UTC"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__1 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__1_value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__1_value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__2 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__2_value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__0(lean_object*);
static const lean_string_object l_Lean_Linter_mkSinceHint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try this: "};
static const lean_object* l_Lean_Linter_mkSinceHint___lam__0___closed__0 = (const lean_object*)&l_Lean_Linter_mkSinceHint___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_mkSinceHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(since := \""};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__0 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__0_value;
static const lean_string_object l_Lean_Linter_mkSinceHint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\")"};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__1 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__1_value;
static const lean_string_object l_Lean_Linter_mkSinceHint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Add the current date:"};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__2 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__2_value;
static const lean_ctor_object l_Lean_Linter_mkSinceHint___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Linter_mkSinceHint___closed__2_value)}};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__3 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__3_value;
static lean_once_cell_t l_Lean_Linter_mkSinceHint___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_mkSinceHint___closed__4;
static const lean_string_object l_Lean_Linter_mkSinceHint___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__5 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_deprecated"};
static const lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0 = (const lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 51, 129, 56, 173, 194, 28, 188)}};
static const lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1 = (const lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__7___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Try this: +typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__33(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__33___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46_spec__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__29(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__29___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__0_value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50___closed__0_value)} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__1 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__26(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "`[deprecated]` attribute should specify the date or library version at which the deprecation was introduced, using `(since := \"...\")`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "`[deprecated]` attribute should specify either a new name or a deprecation message"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "The updated constant has a different type:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\ninstead of"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 372, .m_capacity = 372, .m_length = 371, .m_data = "\n\nThis suggests that addressing the deprecation might be more involved than simply replacing the old name with the new name. This is often expected, but sometimes it indicates that the deprecation is in favor of the wrong declaration, or that there is a mistake in one of the statements.\n\nIf the type difference is intentional, use `+typeChanged` to silence this warning."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Add `+typeChanged` to silence this warning."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Invalid `[deprecated]` attribute syntax"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Add `+typeChanged`:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " +typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "+typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_array_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "The `+typeChanged` marker is not needed because the updated constant has the same type."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "This warning can be disabled with `set_option "};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "` is itself deprecated, but without an explicit replacement; `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "` is being deprecated in favor of a deprecated declaration"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` is itself deprecated in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`; consider deprecating `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` instead"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Deprecate in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` instead:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Invalid `[deprecated]` attribute: `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` cannot be deprecated in favor of itself"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__63_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__63_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "deprecatedAttr"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(85, 246, 23, 143, 159, 138, 155, 162)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(78, 182, 79, 155, 204, 118, 39, 140)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "mark declaration as deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_deprecatedAttr;
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_isDeprecated(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_isDeprecated___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MessageData_isDeprecationWarning___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_isDeprecationWarning___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_isDeprecationWarning___closed__0 = (const lean_object*)&l_Lean_MessageData_isDeprecationWarning___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getDeprecatedNewName(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Replace the deprecated name:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` has been deprecated"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__0 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__0_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__1;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ": Use `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__2 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__2_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__3;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "` is protected. References to this constant must include "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__4 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__4_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__5;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "its prefix `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__6 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__6_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__7;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "` even when inside its namespace."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__8 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__8_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__9;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "The updated constant is in a different namespace. Dot notation may need to be changed"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__10 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__10_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__11;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__12 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__12_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__13;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " (e.g., from `x."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__14 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__14_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__15;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` to `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__16 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__16_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__17;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " x`)"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__18 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__18_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__19;
static const lean_ctor_object l_Lean_Linter_checkDeprecated___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0_value)}};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__20 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__20_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__21;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "at least the last component `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__22 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__22_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__23;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "` of "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__24 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__24_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__25;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__26 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__26_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__27;
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_78_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_79_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_80_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v___x_77_, v___x_78_, v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4____boxed(lean_object* v_a_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__1(lean_object* v_a_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_nat_to_int(v_a_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__2(lean_object* v_a_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Rat_ofInt(v_a_89_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_unsigned_to_nat(1000000000u);
v___x_92_ = lean_nat_to_int(v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0(lean_object* v_tz_93_, lean_object* v_a_94_, lean_object* v___x_95_, lean_object* v_x_96_){
_start:
{
lean_object* v_offset_97_; lean_object* v_second_98_; lean_object* v_nano_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v_nanos_103_; lean_object* v___x_104_; lean_object* v_nanos_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v_offset_97_ = lean_ctor_get(v_tz_93_, 0);
v_second_98_ = lean_ctor_get(v_a_94_, 0);
v_nano_99_ = lean_ctor_get(v_a_94_, 1);
v___x_100_ = lean_nat_to_int(v___x_95_);
v___x_101_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0);
v___x_102_ = lean_int_mul(v_second_98_, v___x_101_);
v_nanos_103_ = lean_int_add(v___x_102_, v_nano_99_);
lean_dec(v___x_102_);
v___x_104_ = lean_int_mul(v_offset_97_, v___x_101_);
v_nanos_105_ = lean_int_add(v___x_104_, v___x_100_);
lean_dec(v___x_100_);
lean_dec(v___x_104_);
v___x_106_ = lean_int_add(v_nanos_103_, v_nanos_105_);
lean_dec(v_nanos_105_);
lean_dec(v_nanos_103_);
v___x_107_ = l_Std_Time_Duration_ofNanoseconds(v___x_106_);
lean_dec(v___x_106_);
v___x_108_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___boxed(lean_object* v_tz_109_, lean_object* v_a_110_, lean_object* v___x_111_, lean_object* v_x_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0(v_tz_109_, v_a_110_, v___x_111_, v_x_112_);
lean_dec_ref(v_a_110_);
lean_dec_ref(v_tz_109_);
return v_res_113_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = lean_nat_to_int(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__2));
v___x_120_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0);
v___x_121_ = l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(v___x_120_, v___x_119_, v___x_119_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate(){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_get_current_time();
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v_a_149_; lean_object* v___x_150_; 
v_a_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc(v_a_149_);
lean_dec_ref_known(v___x_148_, 1);
v___x_150_ = l_Std_Time_Database_defaultGetLocalZoneRules();
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_173_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_173_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_173_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_173_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v_offset_157_; lean_object* v_second_158_; lean_object* v_nano_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v_nanos_163_; lean_object* v___x_164_; lean_object* v_nanos_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_date_169_; lean_object* v___x_171_; 
v___x_155_ = l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp(v_a_151_, v_a_149_);
v___x_156_ = l_Std_Time_TimeZone_LocalTimeType_getTimeZone(v___x_155_);
lean_dec_ref(v___x_155_);
v_offset_157_ = lean_ctor_get(v___x_156_, 0);
lean_inc(v_offset_157_);
lean_dec_ref(v___x_156_);
v_second_158_ = lean_ctor_get(v_a_149_, 0);
lean_inc(v_second_158_);
v_nano_159_ = lean_ctor_get(v_a_149_, 1);
lean_inc(v_nano_159_);
lean_dec(v_a_149_);
v___x_160_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0);
v___x_161_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0);
v___x_162_ = lean_int_mul(v_second_158_, v___x_161_);
lean_dec(v_second_158_);
v_nanos_163_ = lean_int_add(v___x_162_, v_nano_159_);
lean_dec(v_nano_159_);
lean_dec(v___x_162_);
v___x_164_ = lean_int_mul(v_offset_157_, v___x_161_);
lean_dec(v_offset_157_);
v_nanos_165_ = lean_int_add(v___x_164_, v___x_160_);
lean_dec(v___x_164_);
v___x_166_ = lean_int_add(v_nanos_163_, v_nanos_165_);
lean_dec(v_nanos_165_);
lean_dec(v_nanos_163_);
v___x_167_ = l_Std_Time_Duration_ofNanoseconds(v___x_166_);
lean_dec(v___x_166_);
v___x_168_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_167_);
v_date_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc_ref(v_date_169_);
lean_dec_ref(v___x_168_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v_date_169_);
v___x_171_ = v___x_153_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_date_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
else
{
lean_dec_ref_known(v___x_150_, 1);
lean_dec(v_a_149_);
goto v___jp_123_;
}
}
else
{
lean_dec_ref_known(v___x_148_, 1);
goto v___jp_123_;
}
v___jp_123_:
{
lean_object* v___x_124_; 
v___x_124_ = lean_get_current_time();
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_139_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_139_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_139_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_139_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v_tz_131_; lean_object* v___f_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v_date_135_; lean_object* v___x_137_; 
v___x_129_ = lean_unsigned_to_nat(0u);
v___x_130_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3);
v_tz_131_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_130_, v_a_125_);
v___f_132_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___boxed), 4, 3);
lean_closure_set(v___f_132_, 0, v_tz_131_);
lean_closure_set(v___f_132_, 1, v_a_125_);
lean_closure_set(v___f_132_, 2, v___x_129_);
v___x_133_ = lean_mk_thunk(v___f_132_);
v___x_134_ = lean_thunk_get_own(v___x_133_);
lean_dec_ref(v___x_133_);
v_date_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc_ref(v_date_135_);
lean_dec(v___x_134_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v_date_135_);
v___x_137_ = v___x_127_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_date_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
v_a_140_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_124_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_124_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___boxed(lean_object* v_a_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate();
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__0(lean_object* v_a_176_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = lean_nat_to_int(v_a_176_);
v___x_178_ = l_Rat_ofInt(v___x_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___lam__0(lean_object* v___x_180_, lean_object* v_x_181_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___lam__0___closed__0));
v___x_183_ = lean_string_append(v___x_182_, v___x_180_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___lam__0___boxed(lean_object* v___x_184_, lean_object* v_x_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Linter_mkSinceHint___lam__0(v___x_184_, v_x_185_);
lean_dec_ref(v_x_185_);
lean_dec_ref(v___x_184_);
return v_res_186_;
}
}
static lean_object* _init_l_Lean_Linter_mkSinceHint___closed__4(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__3));
v___x_193_ = l_Lean_MessageData_ofFormat(v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint(lean_object* v_stx_195_, lean_object* v_a_196_, lean_object* v_a_197_){
_start:
{
uint8_t v___x_199_; lean_object* v___x_200_; 
v___x_199_ = 1;
v___x_200_ = l_Lean_Syntax_getTailPos_x3f(v_stx_195_, v___x_199_);
if (lean_obj_tag(v___x_200_) == 1)
{
lean_object* v_val_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_249_; 
v_val_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_249_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_249_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_val_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_249_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_ref_205_; lean_object* v___x_206_; 
v_ref_205_ = lean_ctor_get(v_a_196_, 2);
v___x_206_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate();
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_222_; 
v_a_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_207_);
lean_dec_ref_known(v___x_206_, 1);
v___x_208_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__0));
v___x_209_ = l_Std_Time_PlainDate_toLeanDateString(v_a_207_);
v___x_210_ = lean_string_append(v___x_208_, v___x_209_);
lean_dec_ref(v___x_209_);
v___x_211_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__1));
v___x_212_ = lean_string_append(v___x_210_, v___x_211_);
lean_inc_ref(v___x_212_);
v___f_213_ = lean_alloc_closure((void*)(l_Lean_Linter_mkSinceHint___lam__0___boxed), 2, 1);
lean_closure_set(v___f_213_, 0, v___x_212_);
v___x_214_ = lean_obj_once(&l_Lean_Linter_mkSinceHint___closed__4, &l_Lean_Linter_mkSinceHint___closed__4_once, _init_l_Lean_Linter_mkSinceHint___closed__4);
v___x_215_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__5));
v___x_216_ = lean_string_append(v___x_215_, v___x_212_);
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
v___x_218_ = lean_box(0);
v___x_219_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_212_);
v___x_220_ = l_Lean_MessageData_ofFormat(v___x_219_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_220_);
v___x_222_ = v___x_203_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_236_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; lean_object* v___x_235_; 
v___x_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_223_, 0, v___f_213_);
v___x_224_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_224_, 0, v___x_217_);
lean_ctor_set(v___x_224_, 1, v___x_218_);
lean_ctor_set(v___x_224_, 2, v___x_218_);
lean_ctor_set(v___x_224_, 3, v___x_218_);
lean_ctor_set(v___x_224_, 4, v___x_222_);
lean_ctor_set(v___x_224_, 5, v___x_223_);
lean_inc(v_val_201_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v_val_201_);
lean_ctor_set(v___x_225_, 1, v_val_201_);
v___x_226_ = l_Lean_Syntax_ofRange(v___x_225_, v___x_199_);
v___x_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
v___x_228_ = 4;
v___x_229_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_229_, 0, v___x_224_);
lean_ctor_set(v___x_229_, 1, v___x_227_);
lean_ctor_set(v___x_229_, 2, v___x_218_);
lean_ctor_set_uint8(v___x_229_, sizeof(void*)*3, v___x_228_);
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = lean_mk_empty_array_with_capacity(v___x_230_);
v___x_232_ = lean_array_push(v___x_231_, v___x_229_);
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v_stx_195_);
v___x_234_ = 0;
v___x_235_ = l_Lean_MessageData_hint(v___x_214_, v___x_232_, v___x_233_, v___x_218_, v___x_234_, v_a_196_, v_a_197_);
lean_dec_ref(v___x_232_);
return v___x_235_;
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_248_; 
lean_del_object(v___x_203_);
lean_dec(v_val_201_);
lean_dec(v_stx_195_);
v_a_237_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_248_ == 0)
{
v___x_239_ = v___x_206_;
v_isShared_240_ = v_isSharedCheck_248_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_206_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_248_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
v___x_241_ = lean_io_error_to_string(v_a_237_);
v___x_242_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
v___x_243_ = l_Lean_MessageData_ofFormat(v___x_242_);
lean_inc(v_ref_205_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_ref_205_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 0, v___x_244_);
v___x_246_ = v___x_239_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_244_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec(v___x_200_);
lean_dec(v_stx_195_);
v___x_250_ = l_Lean_MessageData_nil;
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___boxed(lean_object* v_stx_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Linter_mkSinceHint(v_stx_252_, v_a_253_, v_a_254_);
lean_dec(v_a_254_);
lean_dec_ref(v_a_253_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
if (lean_obj_tag(v_a_260_) == 0)
{
lean_object* v___x_262_; 
v___x_262_ = lean_array_to_list(v_a_261_);
return v___x_262_;
}
else
{
lean_object* v_tail_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_tail_263_ = lean_ctor_get(v_a_260_, 1);
v___x_264_ = lean_array_get_size(v_a_261_);
v___x_265_ = ((lean_object*)(l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1));
v___x_266_ = l_Lean_Name_num___override(v___x_265_, v___x_264_);
v___x_267_ = l_Lean_mkLevelParam(v___x_266_);
v___x_268_ = lean_array_push(v_a_261_, v___x_267_);
v_a_260_ = v_tail_263_;
v_a_261_ = v___x_268_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___boxed(lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(v_a_270_, v_a_271_);
lean_dec(v_a_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(lean_object* v_decl_u2081_275_, lean_object* v_decl_u2082_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v___y_283_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_300_ = l_Lean_ConstantInfo_numLevelParams(v_decl_u2081_275_);
v___x_301_ = l_Lean_ConstantInfo_numLevelParams(v_decl_u2082_276_);
v___x_302_ = lean_nat_dec_eq(v___x_300_, v___x_301_);
lean_dec(v___x_301_);
lean_dec(v___x_300_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_box(v___x_302_);
v___x_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
return v___x_304_;
}
else
{
lean_object* v___x_305_; uint8_t v_transparency_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v_levels_309_; lean_object* v_type_u2081_310_; lean_object* v_type_u2082_311_; uint8_t v___x_312_; uint8_t v___x_313_; 
v___x_305_ = l_Lean_Meta_Context_config(v_a_277_);
v_transparency_306_ = lean_ctor_get_uint8(v___x_305_, 9);
lean_dec_ref(v___x_305_);
v___x_307_ = l_Lean_ConstantInfo_levelParams(v_decl_u2081_275_);
v___x_308_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0));
v_levels_309_ = l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(v___x_307_, v___x_308_);
lean_dec(v___x_307_);
v_type_u2081_310_ = l_Lean_ConstantInfo_instantiateTypeLevelParams(v_decl_u2081_275_, v_levels_309_);
v_type_u2082_311_ = l_Lean_ConstantInfo_instantiateTypeLevelParams(v_decl_u2082_276_, v_levels_309_);
lean_dec(v_levels_309_);
v___x_312_ = 2;
v___x_313_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_306_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v_keyedConfig_314_; uint8_t v_trackZetaDelta_315_; lean_object* v_zetaDeltaSet_316_; lean_object* v_lctx_317_; lean_object* v_localInstances_318_; lean_object* v_defEqCtx_x3f_319_; lean_object* v_synthPendingDepth_320_; lean_object* v_customCanUnfoldPredicate_x3f_321_; uint8_t v_univApprox_322_; uint8_t v_inTypeClassResolution_323_; uint8_t v_cacheInferType_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v_keyedConfig_314_ = lean_ctor_get(v_a_277_, 0);
v_trackZetaDelta_315_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*7);
v_zetaDeltaSet_316_ = lean_ctor_get(v_a_277_, 1);
v_lctx_317_ = lean_ctor_get(v_a_277_, 2);
v_localInstances_318_ = lean_ctor_get(v_a_277_, 3);
v_defEqCtx_x3f_319_ = lean_ctor_get(v_a_277_, 4);
v_synthPendingDepth_320_ = lean_ctor_get(v_a_277_, 5);
v_customCanUnfoldPredicate_x3f_321_ = lean_ctor_get(v_a_277_, 6);
v_univApprox_322_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_323_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*7 + 2);
v_cacheInferType_324_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_314_);
v___x_325_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_312_, v_keyedConfig_314_);
lean_inc(v_customCanUnfoldPredicate_x3f_321_);
lean_inc(v_synthPendingDepth_320_);
lean_inc(v_defEqCtx_x3f_319_);
lean_inc_ref(v_localInstances_318_);
lean_inc_ref(v_lctx_317_);
lean_inc(v_zetaDeltaSet_316_);
v___x_326_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v_zetaDeltaSet_316_);
lean_ctor_set(v___x_326_, 2, v_lctx_317_);
lean_ctor_set(v___x_326_, 3, v_localInstances_318_);
lean_ctor_set(v___x_326_, 4, v_defEqCtx_x3f_319_);
lean_ctor_set(v___x_326_, 5, v_synthPendingDepth_320_);
lean_ctor_set(v___x_326_, 6, v_customCanUnfoldPredicate_x3f_321_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*7, v_trackZetaDelta_315_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*7 + 1, v_univApprox_322_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*7 + 2, v_inTypeClassResolution_323_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*7 + 3, v_cacheInferType_324_);
v___x_327_ = l_Lean_Meta_isExprDefEqGuarded(v_type_u2081_310_, v_type_u2082_311_, v___x_326_, v_a_278_, v_a_279_, v_a_280_);
lean_dec_ref_known(v___x_326_, 7);
v___y_283_ = v___x_327_;
goto v___jp_282_;
}
else
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_Meta_isExprDefEqGuarded(v_type_u2081_310_, v_type_u2082_311_, v_a_277_, v_a_278_, v_a_279_, v_a_280_);
v___y_283_ = v___x_328_;
goto v___jp_282_;
}
}
v___jp_282_:
{
if (lean_obj_tag(v___y_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_291_; 
v_a_284_ = lean_ctor_get(v___y_283_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___y_283_);
if (v_isSharedCheck_291_ == 0)
{
v___x_286_ = v___y_283_;
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___y_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_289_; 
if (v_isShared_287_ == 0)
{
v___x_289_ = v___x_286_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_284_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
v_a_292_ = lean_ctor_get(v___y_283_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___y_283_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___y_283_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___y_283_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___boxed(lean_object* v_decl_u2081_329_, lean_object* v_decl_u2082_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_decl_u2081_329_, v_decl_u2082_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec_ref(v_decl_u2082_330_);
lean_dec_ref(v_decl_u2081_329_);
return v_res_336_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(lean_object* v_opts_337_, lean_object* v_opt_338_){
_start:
{
lean_object* v_name_339_; lean_object* v_defValue_340_; lean_object* v_map_341_; lean_object* v___x_342_; 
v_name_339_ = lean_ctor_get(v_opt_338_, 0);
v_defValue_340_ = lean_ctor_get(v_opt_338_, 1);
v_map_341_ = lean_ctor_get(v_opts_337_, 0);
v___x_342_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_341_, v_name_339_);
if (lean_obj_tag(v___x_342_) == 0)
{
uint8_t v___x_343_; 
v___x_343_ = lean_unbox(v_defValue_340_);
return v___x_343_;
}
else
{
lean_object* v_val_344_; 
v_val_344_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_val_344_);
lean_dec_ref_known(v___x_342_, 1);
if (lean_obj_tag(v_val_344_) == 1)
{
uint8_t v_v_345_; 
v_v_345_ = lean_ctor_get_uint8(v_val_344_, 0);
lean_dec_ref_known(v_val_344_, 0);
return v_v_345_;
}
else
{
uint8_t v___x_346_; 
lean_dec(v_val_344_);
v___x_346_ = lean_unbox(v_defValue_340_);
return v___x_346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___boxed(lean_object* v_opts_347_, lean_object* v_opt_348_){
_start:
{
uint8_t v_res_349_; lean_object* v_r_350_; 
v_res_349_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v_opts_347_, v_opt_348_);
lean_dec_ref(v_opt_348_);
lean_dec_ref(v_opts_347_);
v_r_350_ = lean_box(v_res_349_);
return v_r_350_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__7(lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
if (lean_obj_tag(v_x_351_) == 0)
{
if (lean_obj_tag(v_x_352_) == 0)
{
uint8_t v___x_353_; 
v___x_353_ = 1;
return v___x_353_;
}
else
{
uint8_t v___x_354_; 
v___x_354_ = 0;
return v___x_354_;
}
}
else
{
if (lean_obj_tag(v_x_352_) == 0)
{
uint8_t v___x_355_; 
v___x_355_ = 0;
return v___x_355_;
}
else
{
lean_object* v_val_356_; lean_object* v_val_357_; uint8_t v___x_358_; 
v_val_356_ = lean_ctor_get(v_x_351_, 0);
v_val_357_ = lean_ctor_get(v_x_352_, 0);
v___x_358_ = lean_name_eq(v_val_356_, v_val_357_);
return v___x_358_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__7___boxed(lean_object* v_x_359_, lean_object* v_x_360_){
_start:
{
uint8_t v_res_361_; lean_object* v_r_362_; 
v_res_361_ = l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__7(v_x_359_, v_x_360_);
lean_dec(v_x_360_);
lean_dec(v_x_359_);
v_r_362_ = lean_box(v_res_361_);
return v_r_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object* v_x_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v_x_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(v_x_366_);
lean_dec_ref(v_x_366_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object* v_x_368_, lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_box(0);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v_x_375_, lean_object* v_x_376_, lean_object* v_x_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(v_x_375_, v_x_376_, v_x_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v_x_377_);
lean_dec_ref(v_x_376_);
lean_dec(v_x_375_);
return v_res_380_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(uint8_t v___x_381_, lean_object* v_env_382_, lean_object* v_n_383_, lean_object* v_x_384_){
_start:
{
uint8_t v___x_385_; 
v___x_385_ = l_Lean_Environment_contains(v_env_382_, v_n_383_, v___x_381_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v___x_386_, lean_object* v_env_387_, lean_object* v_n_388_, lean_object* v_x_389_){
_start:
{
uint8_t v___x_47343__boxed_390_; uint8_t v_res_391_; lean_object* v_r_392_; 
v___x_47343__boxed_390_ = lean_unbox(v___x_386_);
v_res_391_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(v___x_47343__boxed_390_, v_env_387_, v_n_388_, v_x_389_);
lean_dec_ref(v_x_389_);
v_r_392_ = lean_box(v_res_391_);
return v_r_392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___lam__0(lean_object* v_localDecl_393_, lean_object* v_givenName_394_){
_start:
{
lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_395_ = l_Lean_LocalDecl_userName(v_localDecl_393_);
v___x_396_ = lean_name_eq(v___x_395_, v_givenName_394_);
lean_dec(v___x_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; 
lean_dec_ref(v_localDecl_393_);
v___x_397_ = lean_box(0);
return v___x_397_;
}
else
{
lean_object* v___x_398_; 
v___x_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_398_, 0, v_localDecl_393_);
return v___x_398_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___lam__0___boxed(lean_object* v_localDecl_399_, lean_object* v_givenName_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___lam__0(v_localDecl_399_, v_givenName_400_);
lean_dec(v_givenName_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___redArg(lean_object* v_t_402_, lean_object* v_k_403_){
_start:
{
if (lean_obj_tag(v_t_402_) == 0)
{
lean_object* v_k_404_; lean_object* v_v_405_; lean_object* v_l_406_; lean_object* v_r_407_; uint8_t v___x_408_; 
v_k_404_ = lean_ctor_get(v_t_402_, 1);
v_v_405_ = lean_ctor_get(v_t_402_, 2);
v_l_406_ = lean_ctor_get(v_t_402_, 3);
v_r_407_ = lean_ctor_get(v_t_402_, 4);
v___x_408_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_403_, v_k_404_);
switch(v___x_408_)
{
case 0:
{
v_t_402_ = v_l_406_;
goto _start;
}
case 1:
{
lean_object* v___x_410_; 
lean_inc(v_v_405_);
v___x_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_410_, 0, v_v_405_);
return v___x_410_;
}
default: 
{
v_t_402_ = v_r_407_;
goto _start;
}
}
}
else
{
lean_object* v___x_412_; 
v___x_412_ = lean_box(0);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___redArg___boxed(lean_object* v_t_413_, lean_object* v_k_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___redArg(v_t_413_, v_k_414_);
lean_dec(v_k_414_);
lean_dec(v_t_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg(lean_object* v_givenName_416_, lean_object* v_auxDeclToFullName_417_, lean_object* v___x_418_, lean_object* v_givenNameView_419_, lean_object* v_as_420_, lean_object* v_i_421_){
_start:
{
lean_object* v_zero_422_; uint8_t v_isZero_423_; 
v_zero_422_ = lean_unsigned_to_nat(0u);
v_isZero_423_ = lean_nat_dec_eq(v_i_421_, v_zero_422_);
if (v_isZero_423_ == 1)
{
lean_object* v___x_424_; 
lean_dec(v_i_421_);
lean_dec_ref(v_givenNameView_419_);
lean_dec(v___x_418_);
v___x_424_ = lean_box(0);
return v___x_424_;
}
else
{
lean_object* v_one_425_; lean_object* v_n_426_; lean_object* v___y_428_; lean_object* v___x_430_; 
v_one_425_ = lean_unsigned_to_nat(1u);
v_n_426_ = lean_nat_sub(v_i_421_, v_one_425_);
lean_dec(v_i_421_);
v___x_430_ = lean_array_fget_borrowed(v_as_420_, v_n_426_);
if (lean_obj_tag(v___x_430_) == 0)
{
v_i_421_ = v_n_426_;
goto _start;
}
else
{
lean_object* v_val_432_; uint8_t v___x_433_; 
v_val_432_ = lean_ctor_get(v___x_430_, 0);
v___x_433_ = l_Lean_LocalDecl_isAuxDecl(v_val_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; 
lean_inc(v_val_432_);
v___x_434_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___lam__0(v_val_432_, v_givenName_416_);
v___y_428_ = v___x_434_;
goto v___jp_427_;
}
else
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = l_Lean_LocalDecl_fvarId(v_val_432_);
v___x_436_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___redArg(v_auxDeclToFullName_417_, v___x_435_);
lean_dec(v___x_435_);
if (lean_obj_tag(v___x_436_) == 1)
{
lean_object* v_val_437_; lean_object* v_fullDeclView_438_; lean_object* v_name_439_; lean_object* v_imported_440_; lean_object* v_ctx_441_; lean_object* v_scopes_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_462_; 
v_val_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v___x_436_, 1);
v_fullDeclView_438_ = l_Lean_extractMacroScopes(v_val_437_);
v_name_439_ = lean_ctor_get(v_fullDeclView_438_, 0);
v_imported_440_ = lean_ctor_get(v_fullDeclView_438_, 1);
v_ctx_441_ = lean_ctor_get(v_fullDeclView_438_, 2);
v_scopes_442_ = lean_ctor_get(v_fullDeclView_438_, 3);
v_isSharedCheck_462_ = !lean_is_exclusive(v_fullDeclView_438_);
if (v_isSharedCheck_462_ == 0)
{
v___x_444_ = v_fullDeclView_438_;
v_isShared_445_ = v_isSharedCheck_462_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_scopes_442_);
lean_inc(v_ctx_441_);
lean_inc(v_imported_440_);
lean_inc(v_name_439_);
lean_dec(v_fullDeclView_438_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_462_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___y_447_; lean_object* v___x_460_; 
lean_inc(v_name_439_);
v___x_460_ = l_Lean_privateToUserName_x3f(v_name_439_);
if (lean_obj_tag(v___x_460_) == 0)
{
v___y_447_ = v_name_439_;
goto v___jp_446_;
}
else
{
lean_object* v_val_461_; 
lean_dec(v_name_439_);
v_val_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_val_461_);
lean_dec_ref_known(v___x_460_, 1);
v___y_447_ = v_val_461_;
goto v___jp_446_;
}
v___jp_446_:
{
lean_object* v_fullDeclView_449_; 
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 0, v___y_447_);
v_fullDeclView_449_ = v___x_444_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___y_447_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_imported_440_);
lean_ctor_set(v_reuseFailAlloc_459_, 2, v_ctx_441_);
lean_ctor_set(v_reuseFailAlloc_459_, 3, v_scopes_442_);
v_fullDeclView_449_ = v_reuseFailAlloc_459_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v_fullDeclName_450_; uint8_t v___x_451_; 
lean_inc_ref(v_fullDeclView_449_);
v_fullDeclName_450_ = l_Lean_MacroScopesView_review(v_fullDeclView_449_);
v___x_451_ = l_Lean_Name_isPrefixOf(v___x_418_, v_fullDeclName_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; 
lean_dec_ref(v_fullDeclView_449_);
lean_inc(v___x_418_);
lean_inc_ref(v_givenNameView_419_);
lean_inc(v_val_432_);
v___x_452_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_432_, v_givenNameView_419_, v_fullDeclName_450_, v___x_418_);
lean_dec(v_fullDeclName_450_);
v___y_428_ = v___x_452_;
goto v___jp_427_;
}
else
{
lean_object* v___x_453_; lean_object* v_localDeclNameView_454_; uint8_t v___x_455_; 
lean_dec(v_fullDeclName_450_);
v___x_453_ = l_Lean_LocalDecl_userName(v_val_432_);
v_localDeclNameView_454_ = l_Lean_extractMacroScopes(v___x_453_);
v___x_455_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_454_, v_givenNameView_419_);
lean_dec_ref(v_localDeclNameView_454_);
if (v___x_455_ == 0)
{
lean_dec_ref(v_fullDeclView_449_);
v_i_421_ = v_n_426_;
goto _start;
}
else
{
uint8_t v___x_457_; 
v___x_457_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_419_, v_fullDeclView_449_);
lean_dec_ref(v_fullDeclView_449_);
if (v___x_457_ == 0)
{
v_i_421_ = v_n_426_;
goto _start;
}
else
{
lean_dec(v_n_426_);
lean_dec_ref(v_givenNameView_419_);
lean_dec(v___x_418_);
lean_inc_ref(v___x_430_);
return v___x_430_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_463_; 
lean_dec(v___x_436_);
lean_inc(v_val_432_);
v___x_463_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___lam__0(v_val_432_, v_givenName_416_);
v___y_428_ = v___x_463_;
goto v___jp_427_;
}
}
}
v___jp_427_:
{
if (lean_obj_tag(v___y_428_) == 0)
{
v_i_421_ = v_n_426_;
goto _start;
}
else
{
lean_dec(v_n_426_);
lean_dec_ref(v_givenNameView_419_);
lean_dec(v___x_418_);
return v___y_428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg___boxed(lean_object* v_givenName_464_, lean_object* v_auxDeclToFullName_465_, lean_object* v___x_466_, lean_object* v_givenNameView_467_, lean_object* v_as_468_, lean_object* v_i_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg(v_givenName_464_, v_auxDeclToFullName_465_, v___x_466_, v_givenNameView_467_, v_as_468_, v_i_469_);
lean_dec_ref(v_as_468_);
lean_dec(v_auxDeclToFullName_465_);
lean_dec(v_givenName_464_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___redArg(lean_object* v_givenName_471_, lean_object* v_auxDeclToFullName_472_, lean_object* v___x_473_, lean_object* v_givenNameView_474_, lean_object* v_as_475_, lean_object* v_i_476_){
_start:
{
lean_object* v_zero_477_; uint8_t v_isZero_478_; 
v_zero_477_ = lean_unsigned_to_nat(0u);
v_isZero_478_ = lean_nat_dec_eq(v_i_476_, v_zero_477_);
if (v_isZero_478_ == 1)
{
lean_object* v___x_479_; 
lean_dec(v_i_476_);
lean_dec_ref(v_givenNameView_474_);
lean_dec(v___x_473_);
v___x_479_ = lean_box(0);
return v___x_479_;
}
else
{
lean_object* v_one_480_; lean_object* v_n_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_one_480_ = lean_unsigned_to_nat(1u);
v_n_481_ = lean_nat_sub(v_i_476_, v_one_480_);
lean_dec(v_i_476_);
v___x_482_ = lean_array_fget_borrowed(v_as_475_, v_n_481_);
lean_inc_ref(v_givenNameView_474_);
lean_inc(v___x_473_);
v___x_483_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23(v_givenName_471_, v_auxDeclToFullName_472_, v___x_473_, v_givenNameView_474_, v___x_482_);
if (lean_obj_tag(v___x_483_) == 0)
{
v_i_476_ = v_n_481_;
goto _start;
}
else
{
lean_dec(v_n_481_);
lean_dec_ref(v_givenNameView_474_);
lean_dec(v___x_473_);
return v___x_483_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23(lean_object* v_givenName_485_, lean_object* v_auxDeclToFullName_486_, lean_object* v___x_487_, lean_object* v_givenNameView_488_, lean_object* v_x_489_){
_start:
{
if (lean_obj_tag(v_x_489_) == 0)
{
lean_object* v_cs_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_cs_490_ = lean_ctor_get(v_x_489_, 0);
v___x_491_ = lean_array_get_size(v_cs_490_);
v___x_492_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___redArg(v_givenName_485_, v_auxDeclToFullName_486_, v___x_487_, v_givenNameView_488_, v_cs_490_, v___x_491_);
return v___x_492_;
}
else
{
lean_object* v_vs_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_vs_493_ = lean_ctor_get(v_x_489_, 0);
v___x_494_ = lean_array_get_size(v_vs_493_);
v___x_495_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg(v_givenName_485_, v_auxDeclToFullName_486_, v___x_487_, v_givenNameView_488_, v_vs_493_, v___x_494_);
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23___boxed(lean_object* v_givenName_496_, lean_object* v_auxDeclToFullName_497_, lean_object* v___x_498_, lean_object* v_givenNameView_499_, lean_object* v_x_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23(v_givenName_496_, v_auxDeclToFullName_497_, v___x_498_, v_givenNameView_499_, v_x_500_);
lean_dec_ref(v_x_500_);
lean_dec(v_auxDeclToFullName_497_);
lean_dec(v_givenName_496_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___redArg___boxed(lean_object* v_givenName_502_, lean_object* v_auxDeclToFullName_503_, lean_object* v___x_504_, lean_object* v_givenNameView_505_, lean_object* v_as_506_, lean_object* v_i_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___redArg(v_givenName_502_, v_auxDeclToFullName_503_, v___x_504_, v_givenNameView_505_, v_as_506_, v_i_507_);
lean_dec_ref(v_as_506_);
lean_dec(v_auxDeclToFullName_503_);
lean_dec(v_givenName_502_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20(lean_object* v_givenName_509_, lean_object* v_auxDeclToFullName_510_, lean_object* v___x_511_, lean_object* v_givenNameView_512_, lean_object* v_t_513_){
_start:
{
lean_object* v_root_514_; lean_object* v_tail_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v_root_514_ = lean_ctor_get(v_t_513_, 0);
v_tail_515_ = lean_ctor_get(v_t_513_, 1);
v___x_516_ = lean_array_get_size(v_tail_515_);
lean_inc_ref(v_givenNameView_512_);
lean_inc(v___x_511_);
v___x_517_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg(v_givenName_509_, v_auxDeclToFullName_510_, v___x_511_, v_givenNameView_512_, v_tail_515_, v___x_516_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23(v_givenName_509_, v_auxDeclToFullName_510_, v___x_511_, v_givenNameView_512_, v_root_514_);
return v___x_518_;
}
else
{
lean_dec_ref(v_givenNameView_512_);
lean_dec(v___x_511_);
return v___x_517_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20___boxed(lean_object* v_givenName_519_, lean_object* v_auxDeclToFullName_520_, lean_object* v___x_521_, lean_object* v_givenNameView_522_, lean_object* v_t_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20(v_givenName_519_, v_auxDeclToFullName_520_, v___x_521_, v_givenNameView_522_, v_t_523_);
lean_dec_ref(v_t_523_);
lean_dec(v_auxDeclToFullName_520_);
lean_dec(v_givenName_519_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___redArg(lean_object* v_localDecl_x3f_525_, lean_object* v_givenName_526_, lean_object* v_as_527_, lean_object* v_i_528_){
_start:
{
lean_object* v_zero_529_; uint8_t v_isZero_530_; 
v_zero_529_ = lean_unsigned_to_nat(0u);
v_isZero_530_ = lean_nat_dec_eq(v_i_528_, v_zero_529_);
if (v_isZero_530_ == 1)
{
lean_object* v___x_531_; 
lean_dec(v_i_528_);
v___x_531_ = lean_box(0);
return v___x_531_;
}
else
{
lean_object* v_one_532_; lean_object* v_n_533_; lean_object* v___x_534_; 
v_one_532_ = lean_unsigned_to_nat(1u);
v_n_533_ = lean_nat_sub(v_i_528_, v_one_532_);
lean_dec(v_i_528_);
v___x_534_ = lean_array_fget_borrowed(v_as_527_, v_n_533_);
if (lean_obj_tag(v___x_534_) == 0)
{
v_i_528_ = v_n_533_;
goto _start;
}
else
{
lean_object* v_val_536_; uint8_t v___x_537_; 
v_val_536_ = lean_ctor_get(v___x_534_, 0);
v___x_537_ = l_Lean_LocalDecl_isAuxDecl(v_val_536_);
if (v___x_537_ == 0)
{
if (lean_obj_tag(v_localDecl_x3f_525_) == 0)
{
v_i_528_ = v_n_533_;
goto _start;
}
else
{
lean_dec(v_n_533_);
lean_inc_ref(v_localDecl_x3f_525_);
return v_localDecl_x3f_525_;
}
}
else
{
lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_539_ = l_Lean_LocalDecl_userName(v_val_536_);
v___x_540_ = lean_name_eq(v___x_539_, v_givenName_526_);
lean_dec(v___x_539_);
if (v___x_540_ == 0)
{
v_i_528_ = v_n_533_;
goto _start;
}
else
{
lean_dec(v_n_533_);
lean_inc_ref(v___x_534_);
return v___x_534_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___redArg___boxed(lean_object* v_localDecl_x3f_542_, lean_object* v_givenName_543_, lean_object* v_as_544_, lean_object* v_i_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___redArg(v_localDecl_x3f_542_, v_givenName_543_, v_as_544_, v_i_545_);
lean_dec_ref(v_as_544_);
lean_dec(v_givenName_543_);
lean_dec(v_localDecl_x3f_542_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___redArg(lean_object* v_localDecl_x3f_547_, lean_object* v_givenName_548_, lean_object* v_as_549_, lean_object* v_i_550_){
_start:
{
lean_object* v_zero_551_; uint8_t v_isZero_552_; 
v_zero_551_ = lean_unsigned_to_nat(0u);
v_isZero_552_ = lean_nat_dec_eq(v_i_550_, v_zero_551_);
if (v_isZero_552_ == 1)
{
lean_object* v___x_553_; 
lean_dec(v_i_550_);
v___x_553_ = lean_box(0);
return v___x_553_;
}
else
{
lean_object* v_one_554_; lean_object* v_n_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_one_554_ = lean_unsigned_to_nat(1u);
v_n_555_ = lean_nat_sub(v_i_550_, v_one_554_);
lean_dec(v_i_550_);
v___x_556_ = lean_array_fget_borrowed(v_as_549_, v_n_555_);
v___x_557_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26(v_localDecl_x3f_547_, v_givenName_548_, v___x_556_);
if (lean_obj_tag(v___x_557_) == 0)
{
v_i_550_ = v_n_555_;
goto _start;
}
else
{
lean_dec(v_n_555_);
return v___x_557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26(lean_object* v_localDecl_x3f_559_, lean_object* v_givenName_560_, lean_object* v_x_561_){
_start:
{
if (lean_obj_tag(v_x_561_) == 0)
{
lean_object* v_cs_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v_cs_562_ = lean_ctor_get(v_x_561_, 0);
v___x_563_ = lean_array_get_size(v_cs_562_);
v___x_564_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___redArg(v_localDecl_x3f_559_, v_givenName_560_, v_cs_562_, v___x_563_);
return v___x_564_;
}
else
{
lean_object* v_vs_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_vs_565_ = lean_ctor_get(v_x_561_, 0);
v___x_566_ = lean_array_get_size(v_vs_565_);
v___x_567_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___redArg(v_localDecl_x3f_559_, v_givenName_560_, v_vs_565_, v___x_566_);
return v___x_567_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26___boxed(lean_object* v_localDecl_x3f_568_, lean_object* v_givenName_569_, lean_object* v_x_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26(v_localDecl_x3f_568_, v_givenName_569_, v_x_570_);
lean_dec_ref(v_x_570_);
lean_dec(v_givenName_569_);
lean_dec(v_localDecl_x3f_568_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___redArg___boxed(lean_object* v_localDecl_x3f_572_, lean_object* v_givenName_573_, lean_object* v_as_574_, lean_object* v_i_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___redArg(v_localDecl_x3f_572_, v_givenName_573_, v_as_574_, v_i_575_);
lean_dec_ref(v_as_574_);
lean_dec(v_givenName_573_);
lean_dec(v_localDecl_x3f_572_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21(lean_object* v_localDecl_x3f_577_, lean_object* v_givenName_578_, lean_object* v_t_579_){
_start:
{
lean_object* v_root_580_; lean_object* v_tail_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_root_580_ = lean_ctor_get(v_t_579_, 0);
v_tail_581_ = lean_ctor_get(v_t_579_, 1);
v___x_582_ = lean_array_get_size(v_tail_581_);
v___x_583_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___redArg(v_localDecl_x3f_577_, v_givenName_578_, v_tail_581_, v___x_582_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v___x_584_; 
v___x_584_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26(v_localDecl_x3f_577_, v_givenName_578_, v_root_580_);
return v___x_584_;
}
else
{
return v___x_583_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21___boxed(lean_object* v_localDecl_x3f_585_, lean_object* v_givenName_586_, lean_object* v_t_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21(v_localDecl_x3f_585_, v_givenName_586_, v_t_587_);
lean_dec_ref(v_t_587_);
lean_dec(v_givenName_586_);
lean_dec(v_localDecl_x3f_585_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13___lam__0(lean_object* v_auxDeclToFullName_589_, lean_object* v_currNamespace_590_, lean_object* v_decls_591_, lean_object* v_givenNameView_592_){
_start:
{
lean_object* v_givenName_593_; lean_object* v_localDecl_x3f_594_; 
lean_inc_ref(v_givenNameView_592_);
v_givenName_593_ = l_Lean_MacroScopesView_review(v_givenNameView_592_);
v_localDecl_x3f_594_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20(v_givenName_593_, v_auxDeclToFullName_589_, v_currNamespace_590_, v_givenNameView_592_, v_decls_591_);
if (lean_obj_tag(v_localDecl_x3f_594_) == 0)
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21(v_localDecl_x3f_594_, v_givenName_593_, v_decls_591_);
lean_dec(v_givenName_593_);
return v___x_595_;
}
else
{
lean_dec(v_givenName_593_);
return v_localDecl_x3f_594_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13___lam__0___boxed(lean_object* v_auxDeclToFullName_596_, lean_object* v_currNamespace_597_, lean_object* v_decls_598_, lean_object* v_givenNameView_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13___lam__0(v_auxDeclToFullName_596_, v_currNamespace_597_, v_decls_598_, v_givenNameView_599_);
lean_dec_ref(v_decls_598_);
lean_dec(v_auxDeclToFullName_596_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__33(lean_object* v_x_601_){
_start:
{
if (lean_obj_tag(v_x_601_) == 0)
{
lean_object* v___x_602_; 
v___x_602_ = lean_box(0);
return v___x_602_;
}
else
{
lean_object* v_head_603_; lean_object* v_tail_604_; lean_object* v_fst_605_; uint8_t v___x_606_; 
v_head_603_ = lean_ctor_get(v_x_601_, 0);
v_tail_604_ = lean_ctor_get(v_x_601_, 1);
v_fst_605_ = lean_ctor_get(v_head_603_, 0);
v___x_606_ = l_Lean_isPrivateName(v_fst_605_);
if (v___x_606_ == 0)
{
v_x_601_ = v_tail_604_;
goto _start;
}
else
{
lean_object* v___x_608_; 
lean_inc(v_head_603_);
v___x_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_608_, 0, v_head_603_);
return v___x_608_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__33___boxed(lean_object* v_x_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__33(v_x_609_);
lean_dec(v_x_609_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___redArg(lean_object* v_opt_611_, lean_object* v___y_612_){
_start:
{
lean_object* v___x_614_; uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_614_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_612_);
v___x_615_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v___x_614_, v_opt_611_);
lean_dec_ref(v___x_614_);
v___x_616_ = lean_box(v___x_615_);
v___x_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___redArg___boxed(lean_object* v_opt_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___redArg(v_opt_618_, v___y_619_);
lean_dec_ref(v___y_619_);
lean_dec_ref(v_opt_618_);
return v_res_621_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(uint8_t v___x_630_, lean_object* v_x_631_){
_start:
{
if (lean_obj_tag(v_x_631_) == 1)
{
lean_object* v_pre_632_; 
v_pre_632_ = lean_ctor_get(v_x_631_, 0);
switch(lean_obj_tag(v_pre_632_))
{
case 1:
{
lean_object* v_pre_633_; 
v_pre_633_ = lean_ctor_get(v_pre_632_, 0);
switch(lean_obj_tag(v_pre_633_))
{
case 0:
{
lean_object* v_str_634_; lean_object* v_str_635_; lean_object* v___x_636_; uint8_t v___x_637_; 
v_str_634_ = lean_ctor_get(v_x_631_, 1);
v_str_635_ = lean_ctor_get(v_pre_632_, 1);
v___x_636_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0));
v___x_637_ = lean_string_dec_eq(v_str_635_, v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_638_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1));
v___x_639_ = lean_string_dec_eq(v_str_635_, v___x_638_);
if (v___x_639_ == 0)
{
return v___x_639_;
}
else
{
lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_640_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2));
v___x_641_ = lean_string_dec_eq(v_str_634_, v___x_640_);
return v___x_641_;
}
}
else
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3));
v___x_643_ = lean_string_dec_eq(v_str_634_, v___x_642_);
return v___x_643_;
}
}
case 1:
{
lean_object* v_pre_644_; 
v_pre_644_ = lean_ctor_get(v_pre_633_, 0);
if (lean_obj_tag(v_pre_644_) == 0)
{
lean_object* v_str_645_; lean_object* v_str_646_; lean_object* v_str_647_; lean_object* v___x_648_; uint8_t v___x_649_; 
v_str_645_ = lean_ctor_get(v_x_631_, 1);
v_str_646_ = lean_ctor_get(v_pre_632_, 1);
v_str_647_ = lean_ctor_get(v_pre_633_, 1);
v___x_648_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4));
v___x_649_ = lean_string_dec_eq(v_str_647_, v___x_648_);
if (v___x_649_ == 0)
{
return v___x_649_;
}
else
{
lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_650_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5));
v___x_651_ = lean_string_dec_eq(v_str_646_, v___x_650_);
if (v___x_651_ == 0)
{
return v___x_651_;
}
else
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6));
v___x_653_ = lean_string_dec_eq(v_str_645_, v___x_652_);
return v___x_653_;
}
}
}
else
{
return v___x_630_;
}
}
default: 
{
return v___x_630_;
}
}
}
case 0:
{
lean_object* v_str_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v_str_654_ = lean_ctor_get(v_x_631_, 1);
v___x_655_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7));
v___x_656_ = lean_string_dec_eq(v_str_654_, v___x_655_);
return v___x_656_;
}
default: 
{
return v___x_630_;
}
}
}
else
{
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed(lean_object* v___x_657_, lean_object* v_x_658_){
_start:
{
uint8_t v___x_47588__boxed_659_; uint8_t v_res_660_; lean_object* v_r_661_; 
v___x_47588__boxed_659_ = lean_unbox(v___x_657_);
v_res_660_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(v___x_47588__boxed_659_, v_x_658_);
lean_dec(v_x_658_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46_spec__49(lean_object* v_msgData_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v___x_668_; lean_object* v_env_669_; uint8_t v___x_670_; lean_object* v_env_671_; lean_object* v___x_672_; lean_object* v_toCold_673_; lean_object* v_mctx_674_; lean_object* v_lctx_675_; lean_object* v_options_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_668_ = lean_st_ref_get(v___y_666_);
v_env_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc_ref(v_env_669_);
lean_dec(v___x_668_);
v___x_670_ = 0;
v_env_671_ = l_Lean_Environment_setRecordingDeps(v_env_669_, v___x_670_);
v___x_672_ = lean_st_ref_get(v___y_664_);
v_toCold_673_ = lean_ctor_get(v___y_665_, 0);
v_mctx_674_ = lean_ctor_get(v___x_672_, 0);
lean_inc_ref(v_mctx_674_);
lean_dec(v___x_672_);
v_lctx_675_ = lean_ctor_get(v___y_663_, 2);
v_options_676_ = lean_ctor_get(v_toCold_673_, 2);
lean_inc_ref(v_options_676_);
lean_inc_ref(v_lctx_675_);
v___x_677_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_677_, 0, v_env_671_);
lean_ctor_set(v___x_677_, 1, v_mctx_674_);
lean_ctor_set(v___x_677_, 2, v_lctx_675_);
lean_ctor_set(v___x_677_, 3, v_options_676_);
v___x_678_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
lean_ctor_set(v___x_678_, 1, v_msgData_662_);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46_spec__49___boxed(lean_object* v_msgData_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46_spec__49(v_msgData_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46(lean_object* v_ref_691_, lean_object* v_msgData_692_, uint8_t v_severity_693_, uint8_t v_isSilent_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___y_701_; uint8_t v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; uint8_t v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v_toCold_708_; lean_object* v___y_709_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; uint8_t v___y_741_; lean_object* v___y_742_; uint8_t v___y_743_; uint8_t v___y_744_; lean_object* v___y_745_; lean_object* v___y_765_; uint8_t v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; uint8_t v___y_769_; uint8_t v___y_770_; lean_object* v___y_771_; uint8_t v___y_775_; uint8_t v___x_792_; uint8_t v___x_793_; 
v___x_792_ = 2;
v___x_793_ = l_Lean_instBEqMessageSeverity_beq(v_severity_693_, v___x_792_);
if (v___x_793_ == 0)
{
goto v___jp_785_;
}
else
{
uint8_t v___x_794_; 
lean_inc_ref(v_msgData_692_);
v___x_794_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_692_);
if (v___x_794_ == 0)
{
goto v___jp_785_;
}
else
{
lean_object* v___x_795_; lean_object* v___x_796_; 
lean_dec_ref(v_msgData_692_);
v___x_795_ = lean_box(0);
v___x_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
return v___x_796_;
}
}
v___jp_700_:
{
lean_object* v_currNamespace_710_; lean_object* v_openDecls_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v_env_716_; lean_object* v_nextMacroScope_717_; lean_object* v_ngen_718_; lean_object* v_auxDeclNGen_719_; lean_object* v_traceState_720_; lean_object* v_cache_721_; lean_object* v_recordedDeps_722_; lean_object* v_messages_723_; lean_object* v_infoState_724_; lean_object* v_snapshotTasks_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_736_; 
v_currNamespace_710_ = lean_ctor_get(v_toCold_708_, 4);
v_openDecls_711_ = lean_ctor_get(v_toCold_708_, 5);
lean_inc(v_openDecls_711_);
lean_inc(v_currNamespace_710_);
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v_currNamespace_710_);
lean_ctor_set(v___x_712_, 1, v_openDecls_711_);
v___x_713_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v___y_704_);
lean_inc_ref(v___y_701_);
lean_inc_ref(v___y_703_);
v___x_714_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_714_, 0, v___y_703_);
lean_ctor_set(v___x_714_, 1, v___y_707_);
lean_ctor_set(v___x_714_, 2, v___y_706_);
lean_ctor_set(v___x_714_, 3, v___y_701_);
lean_ctor_set(v___x_714_, 4, v___x_713_);
lean_ctor_set_uint8(v___x_714_, sizeof(void*)*5, v___y_705_);
lean_ctor_set_uint8(v___x_714_, sizeof(void*)*5 + 1, v___y_702_);
lean_ctor_set_uint8(v___x_714_, sizeof(void*)*5 + 2, v_isSilent_694_);
v___x_715_ = lean_st_ref_take(v___y_709_);
v_env_716_ = lean_ctor_get(v___x_715_, 0);
v_nextMacroScope_717_ = lean_ctor_get(v___x_715_, 1);
v_ngen_718_ = lean_ctor_get(v___x_715_, 2);
v_auxDeclNGen_719_ = lean_ctor_get(v___x_715_, 3);
v_traceState_720_ = lean_ctor_get(v___x_715_, 4);
v_cache_721_ = lean_ctor_get(v___x_715_, 5);
v_recordedDeps_722_ = lean_ctor_get(v___x_715_, 6);
v_messages_723_ = lean_ctor_get(v___x_715_, 7);
v_infoState_724_ = lean_ctor_get(v___x_715_, 8);
v_snapshotTasks_725_ = lean_ctor_get(v___x_715_, 9);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_736_ == 0)
{
v___x_727_ = v___x_715_;
v_isShared_728_ = v_isSharedCheck_736_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_snapshotTasks_725_);
lean_inc(v_infoState_724_);
lean_inc(v_messages_723_);
lean_inc(v_recordedDeps_722_);
lean_inc(v_cache_721_);
lean_inc(v_traceState_720_);
lean_inc(v_auxDeclNGen_719_);
lean_inc(v_ngen_718_);
lean_inc(v_nextMacroScope_717_);
lean_inc(v_env_716_);
lean_dec(v___x_715_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_736_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_729_ = lean_box(0);
v___x_730_ = l_Lean_MessageLog_add(v___x_714_, v_messages_723_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 7, v___x_730_);
v___x_732_ = v___x_727_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_env_716_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_nextMacroScope_717_);
lean_ctor_set(v_reuseFailAlloc_735_, 2, v_ngen_718_);
lean_ctor_set(v_reuseFailAlloc_735_, 3, v_auxDeclNGen_719_);
lean_ctor_set(v_reuseFailAlloc_735_, 4, v_traceState_720_);
lean_ctor_set(v_reuseFailAlloc_735_, 5, v_cache_721_);
lean_ctor_set(v_reuseFailAlloc_735_, 6, v_recordedDeps_722_);
lean_ctor_set(v_reuseFailAlloc_735_, 7, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_735_, 8, v_infoState_724_);
lean_ctor_set(v_reuseFailAlloc_735_, 9, v_snapshotTasks_725_);
v___x_732_ = v_reuseFailAlloc_735_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_733_ = lean_st_ref_put(v___y_709_, v___x_732_);
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v___x_729_);
return v___x_734_;
}
}
}
v___jp_737_:
{
lean_object* v_fileName_746_; lean_object* v_fileMap_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_763_; 
v_fileName_746_ = lean_ctor_get(v___y_742_, 0);
v_fileMap_747_ = lean_ctor_get(v___y_742_, 1);
v___x_748_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_692_);
v___x_749_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46_spec__49(v___x_748_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_763_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_763_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_763_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
lean_inc_ref_n(v_fileMap_747_, 2);
v___x_754_ = l_Lean_FileMap_toPosition(v_fileMap_747_, v___y_740_);
lean_dec(v___y_740_);
v___x_755_ = l_Lean_FileMap_toPosition(v_fileMap_747_, v___y_745_);
lean_dec(v___y_745_);
v___x_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
v___x_757_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0));
if (v___y_741_ == 0)
{
lean_del_object(v___x_752_);
v___y_701_ = v___x_757_;
v___y_702_ = v___y_743_;
v___y_703_ = v_fileName_746_;
v___y_704_ = v_a_750_;
v___y_705_ = v___y_744_;
v___y_706_ = v___x_756_;
v___y_707_ = v___x_754_;
v_toCold_708_ = v___y_738_;
v___y_709_ = v___y_698_;
goto v___jp_700_;
}
else
{
uint8_t v___x_758_; 
lean_inc(v_a_750_);
lean_inc_ref(v___y_739_);
v___x_758_ = l_Lean_MessageData_hasTag(v___y_739_, v_a_750_);
if (v___x_758_ == 0)
{
lean_object* v___x_759_; lean_object* v___x_761_; 
lean_dec_ref_known(v___x_756_, 1);
lean_dec_ref(v___x_754_);
lean_dec(v_a_750_);
v___x_759_ = lean_box(0);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_759_);
v___x_761_ = v___x_752_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
else
{
lean_del_object(v___x_752_);
v___y_701_ = v___x_757_;
v___y_702_ = v___y_743_;
v___y_703_ = v_fileName_746_;
v___y_704_ = v_a_750_;
v___y_705_ = v___y_744_;
v___y_706_ = v___x_756_;
v___y_707_ = v___x_754_;
v_toCold_708_ = v___y_738_;
v___y_709_ = v___y_698_;
goto v___jp_700_;
}
}
}
}
v___jp_764_:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Syntax_getTailPos_x3f(v___y_767_, v___y_769_);
lean_dec(v___y_767_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_inc(v___y_771_);
v___y_738_ = v___y_765_;
v___y_739_ = v___y_768_;
v___y_740_ = v___y_771_;
v___y_741_ = v___y_766_;
v___y_742_ = v___y_765_;
v___y_743_ = v___y_770_;
v___y_744_ = v___y_769_;
v___y_745_ = v___y_771_;
goto v___jp_737_;
}
else
{
lean_object* v_val_773_; 
v_val_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_val_773_);
lean_dec_ref_known(v___x_772_, 1);
v___y_738_ = v___y_765_;
v___y_739_ = v___y_768_;
v___y_740_ = v___y_771_;
v___y_741_ = v___y_766_;
v___y_742_ = v___y_765_;
v___y_743_ = v___y_770_;
v___y_744_ = v___y_769_;
v___y_745_ = v_val_773_;
goto v___jp_737_;
}
}
v___jp_774_:
{
lean_object* v_toCold_776_; lean_object* v_ref_777_; uint8_t v_suppressElabErrors_778_; lean_object* v_ref_779_; uint8_t v___x_780_; lean_object* v___f_781_; lean_object* v___x_782_; 
v_toCold_776_ = lean_ctor_get(v___y_697_, 0);
v_ref_777_ = lean_ctor_get(v___y_697_, 2);
v_suppressElabErrors_778_ = lean_ctor_get_uint8(v___y_697_, sizeof(void*)*3 + 2);
v_ref_779_ = l_Lean_replaceRef(v_ref_691_, v_ref_777_);
v___x_780_ = 0;
v___f_781_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__1));
v___x_782_ = l_Lean_Syntax_getPos_x3f(v_ref_779_, v___x_780_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v___x_783_; 
v___x_783_ = lean_unsigned_to_nat(0u);
v___y_765_ = v_toCold_776_;
v___y_766_ = v_suppressElabErrors_778_;
v___y_767_ = v_ref_779_;
v___y_768_ = v___f_781_;
v___y_769_ = v___x_780_;
v___y_770_ = v___y_775_;
v___y_771_ = v___x_783_;
goto v___jp_764_;
}
else
{
lean_object* v_val_784_; 
v_val_784_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_val_784_);
lean_dec_ref_known(v___x_782_, 1);
v___y_765_ = v_toCold_776_;
v___y_766_ = v_suppressElabErrors_778_;
v___y_767_ = v_ref_779_;
v___y_768_ = v___f_781_;
v___y_769_ = v___x_780_;
v___y_770_ = v___y_775_;
v___y_771_ = v_val_784_;
goto v___jp_764_;
}
}
v___jp_785_:
{
uint8_t v___x_786_; uint8_t v___x_787_; 
v___x_786_ = 1;
v___x_787_ = l_Lean_instBEqMessageSeverity_beq(v_severity_693_, v___x_786_);
if (v___x_787_ == 0)
{
v___y_775_ = v_severity_693_;
goto v___jp_774_;
}
else
{
lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_788_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_697_);
v___x_789_ = l_Lean_warningAsError;
v___x_790_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v___x_788_, v___x_789_);
lean_dec_ref(v___x_788_);
if (v___x_790_ == 0)
{
v___y_775_ = v_severity_693_;
goto v___jp_774_;
}
else
{
uint8_t v___x_791_; 
v___x_791_ = 2;
v___y_775_ = v___x_791_;
goto v___jp_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___boxed(lean_object* v_ref_797_, lean_object* v_msgData_798_, lean_object* v_severity_799_, lean_object* v_isSilent_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
uint8_t v_severity_boxed_806_; uint8_t v_isSilent_boxed_807_; lean_object* v_res_808_; 
v_severity_boxed_806_ = lean_unbox(v_severity_799_);
v_isSilent_boxed_807_ = lean_unbox(v_isSilent_800_);
v_res_808_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46(v_ref_797_, v_msgData_798_, v_severity_boxed_806_, v_isSilent_boxed_807_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v_ref_797_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44(lean_object* v_msgData_809_, uint8_t v_severity_810_, uint8_t v_isSilent_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_ref_817_; lean_object* v___x_818_; 
v_ref_817_ = lean_ctor_get(v___y_814_, 2);
v___x_818_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46(v_ref_817_, v_msgData_809_, v_severity_810_, v_isSilent_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44___boxed(lean_object* v_msgData_819_, lean_object* v_severity_820_, lean_object* v_isSilent_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
uint8_t v_severity_boxed_827_; uint8_t v_isSilent_boxed_828_; lean_object* v_res_829_; 
v_severity_boxed_827_ = lean_unbox(v_severity_820_);
v_isSilent_boxed_828_ = lean_unbox(v_isSilent_821_);
v_res_829_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44(v_msgData_819_, v_severity_boxed_827_, v_isSilent_boxed_828_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40(lean_object* v_msgData_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
uint8_t v___x_836_; uint8_t v___x_837_; lean_object* v___x_838_; 
v___x_836_ = 1;
v___x_837_ = 0;
v___x_838_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44(v_msgData_830_, v___x_836_, v___x_837_, v___y_831_, v___y_832_, v___y_833_, v___y_834_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40___boxed(lean_object* v_msgData_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40(v_msgData_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
return v_res_845_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__0));
v___x_848_ = l_Lean_stringToMessageData(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__2));
v___x_851_ = l_Lean_stringToMessageData(v___x_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34(lean_object* v_id_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v___x_858_; lean_object* v_env_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_881_; 
v___x_858_ = lean_st_ref_get(v___y_856_);
v_env_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc_ref(v_env_859_);
lean_dec(v___x_858_);
v___x_860_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_861_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___redArg(v___x_860_, v___y_855_);
v_a_862_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_881_ == 0)
{
v___x_864_ = v___x_861_;
v_isShared_865_ = v_isSharedCheck_881_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_881_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
uint8_t v_isExporting_871_; 
v_isExporting_871_ = lean_ctor_get_uint8(v_env_859_, sizeof(void*)*13);
lean_dec_ref(v_env_859_);
if (v_isExporting_871_ == 0)
{
lean_dec(v_a_862_);
lean_dec(v_id_852_);
goto v___jp_866_;
}
else
{
uint8_t v___x_872_; 
v___x_872_ = l_Lean_isPrivateName(v_id_852_);
if (v___x_872_ == 0)
{
lean_dec(v_a_862_);
lean_dec(v_id_852_);
goto v___jp_866_;
}
else
{
uint8_t v___x_873_; 
v___x_873_ = lean_unbox(v_a_862_);
lean_dec(v_a_862_);
if (v___x_873_ == 0)
{
lean_dec(v_id_852_);
goto v___jp_866_;
}
else
{
lean_object* v___x_874_; uint8_t v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
lean_del_object(v___x_864_);
v___x_874_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1);
v___x_875_ = 0;
v___x_876_ = l_Lean_MessageData_ofConstName(v_id_852_, v___x_875_);
v___x_877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_874_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3);
v___x_879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40(v___x_879_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
return v___x_880_;
}
}
}
v___jp_866_:
{
lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_867_ = lean_box(0);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_867_);
v___x_869_ = v___x_864_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_867_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___boxed(lean_object* v_id_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34(v_id_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28(lean_object* v_id_889_, uint8_t v_enableLog_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; lean_object* v_toCold_897_; lean_object* v_env_898_; lean_object* v_currNamespace_899_; lean_object* v_openDecls_900_; lean_object* v___x_901_; lean_object* v_res_902_; lean_object* v___x_903_; 
v___x_896_ = lean_st_ref_get(v___y_894_);
v_toCold_897_ = lean_ctor_get(v___y_893_, 0);
v_env_898_ = lean_ctor_get(v___x_896_, 0);
lean_inc_ref(v_env_898_);
lean_dec(v___x_896_);
v_currNamespace_899_ = lean_ctor_get(v_toCold_897_, 4);
v_openDecls_900_ = lean_ctor_get(v_toCold_897_, 5);
v___x_901_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_893_);
lean_inc(v_openDecls_900_);
lean_inc(v_currNamespace_899_);
v_res_902_ = l_Lean_ResolveName_resolveGlobalName(v_env_898_, v___x_901_, v_currNamespace_899_, v_openDecls_900_, v_id_889_);
lean_dec_ref(v___x_901_);
v___x_903_ = lean_st_ref_get(v___y_894_);
if (v_enableLog_890_ == 0)
{
lean_object* v___x_904_; 
lean_dec(v___x_903_);
v___x_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_904_, 0, v_res_902_);
return v___x_904_;
}
else
{
lean_object* v_env_905_; uint8_t v_isExporting_906_; 
v_env_905_ = lean_ctor_get(v___x_903_, 0);
lean_inc_ref(v_env_905_);
lean_dec(v___x_903_);
v_isExporting_906_ = lean_ctor_get_uint8(v_env_905_, sizeof(void*)*13);
lean_dec_ref(v_env_905_);
if (v_isExporting_906_ == 0)
{
lean_object* v___x_907_; 
v___x_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_907_, 0, v_res_902_);
return v___x_907_;
}
else
{
lean_object* v___x_908_; 
v___x_908_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__33(v_res_902_);
if (lean_obj_tag(v___x_908_) == 1)
{
lean_object* v_val_909_; lean_object* v_fst_910_; lean_object* v___x_911_; 
v_val_909_ = lean_ctor_get(v___x_908_, 0);
lean_inc(v_val_909_);
lean_dec_ref_known(v___x_908_, 1);
v_fst_910_ = lean_ctor_get(v_val_909_, 0);
lean_inc(v_fst_910_);
lean_dec(v_val_909_);
v___x_911_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34(v_fst_910_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_918_ == 0)
{
lean_object* v_unused_919_; 
v_unused_919_ = lean_ctor_get(v___x_911_, 0);
lean_dec(v_unused_919_);
v___x_913_ = v___x_911_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_dec(v___x_911_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 0, v_res_902_);
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_res_902_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec(v_res_902_);
v_a_920_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_911_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_911_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
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
lean_object* v___x_928_; 
lean_dec(v___x_908_);
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v_res_902_);
return v___x_928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28___boxed(lean_object* v_id_929_, lean_object* v_enableLog_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
uint8_t v_enableLog_boxed_936_; lean_object* v_res_937_; 
v_enableLog_boxed_936_ = lean_unbox(v_enableLog_930_);
v_res_937_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28(v_id_929_, v_enableLog_boxed_936_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
return v_res_937_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__29(lean_object* v_snd_938_, lean_object* v_x_939_){
_start:
{
if (lean_obj_tag(v_x_939_) == 0)
{
uint8_t v___x_940_; 
v___x_940_ = 0;
return v___x_940_;
}
else
{
lean_object* v_head_941_; lean_object* v_tail_942_; lean_object* v_snd_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v_head_941_ = lean_ctor_get(v_x_939_, 0);
v_tail_942_ = lean_ctor_get(v_x_939_, 1);
v_snd_943_ = lean_ctor_get(v_head_941_, 1);
v___x_944_ = l_List_lengthTR___redArg(v_snd_943_);
v___x_945_ = l_List_lengthTR___redArg(v_snd_938_);
v___x_946_ = lean_nat_dec_lt(v___x_944_, v___x_945_);
lean_dec(v___x_945_);
lean_dec(v___x_944_);
if (v___x_946_ == 0)
{
v_x_939_ = v_tail_942_;
goto _start;
}
else
{
return v___x_946_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__29___boxed(lean_object* v_snd_948_, lean_object* v_x_949_){
_start:
{
uint8_t v_res_950_; lean_object* v_r_951_; 
v_res_950_ = l_List_any___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__29(v_snd_948_, v_x_949_);
lean_dec(v_x_949_);
lean_dec(v_snd_948_);
v_r_951_ = lean_box(v_res_950_);
return v_r_951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22(lean_object* v_view_952_, lean_object* v_findLocalDecl_x3f_953_, lean_object* v_n_954_, lean_object* v_projs_955_, lean_object* v_auxDecl_x3f_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v_auxDecl_x3f_970_; lean_object* v_imported_1001_; lean_object* v_ctx_1002_; lean_object* v_scopes_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v_imported_1001_ = lean_ctor_get(v_view_952_, 1);
v_ctx_1002_ = lean_ctor_get(v_view_952_, 2);
v_scopes_1003_ = lean_ctor_get(v_view_952_, 3);
lean_inc(v_scopes_1003_);
lean_inc(v_ctx_1002_);
lean_inc(v_imported_1001_);
lean_inc(v_n_954_);
v___x_1004_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1004_, 0, v_n_954_);
lean_ctor_set(v___x_1004_, 1, v_imported_1001_);
lean_ctor_set(v___x_1004_, 2, v_ctx_1002_);
lean_ctor_set(v___x_1004_, 3, v_scopes_1003_);
lean_inc_ref(v_findLocalDecl_x3f_953_);
v___x_1005_ = lean_apply_1(v_findLocalDecl_x3f_953_, v___x_1004_);
if (lean_obj_tag(v___x_1005_) == 1)
{
lean_object* v_val_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1021_; 
v_val_1006_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1021_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_val_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1021_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
uint8_t v___x_1010_; 
v___x_1010_ = l_Lean_LocalDecl_isAuxDecl(v_val_1006_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1014_; 
lean_dec(v_auxDecl_x3f_956_);
lean_dec(v_n_954_);
lean_dec_ref(v_findLocalDecl_x3f_953_);
lean_dec_ref(v_view_952_);
v___x_1011_ = l_Lean_LocalDecl_toExpr(v_val_1006_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set(v___x_1012_, 1, v_projs_955_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1012_);
v___x_1014_ = v___x_1008_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1012_);
v___x_1014_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1015_; 
v___x_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
return v___x_1015_;
}
}
else
{
if (lean_obj_tag(v_auxDecl_x3f_956_) == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1019_; 
lean_inc(v_projs_955_);
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v_val_1006_);
lean_ctor_set(v___x_1017_, 1, v_projs_955_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1017_);
v___x_1019_ = v___x_1008_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
v_auxDecl_x3f_970_ = v___x_1019_;
goto v___jp_969_;
}
}
else
{
lean_del_object(v___x_1008_);
lean_dec(v_val_1006_);
v_auxDecl_x3f_970_ = v_auxDecl_x3f_956_;
goto v___jp_969_;
}
}
}
}
else
{
lean_dec(v___x_1005_);
v_auxDecl_x3f_970_ = v_auxDecl_x3f_956_;
goto v___jp_969_;
}
v___jp_962_:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_965_ = l_Lean_LocalDecl_toExpr(v___y_964_);
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
lean_ctor_set(v___x_966_, 1, v___y_963_);
v___x_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
return v___x_968_;
}
v___jp_969_:
{
if (lean_obj_tag(v_n_954_) == 1)
{
lean_object* v_pre_971_; lean_object* v_str_972_; lean_object* v___x_973_; 
v_pre_971_ = lean_ctor_get(v_n_954_, 0);
lean_inc(v_pre_971_);
v_str_972_ = lean_ctor_get(v_n_954_, 1);
lean_inc_ref(v_str_972_);
lean_dec_ref_known(v_n_954_, 2);
v___x_973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_973_, 0, v_str_972_);
lean_ctor_set(v___x_973_, 1, v_projs_955_);
v_n_954_ = v_pre_971_;
v_projs_955_ = v___x_973_;
v_auxDecl_x3f_956_ = v_auxDecl_x3f_970_;
goto _start;
}
else
{
lean_dec(v_projs_955_);
lean_dec(v_n_954_);
lean_dec_ref(v_findLocalDecl_x3f_953_);
if (lean_obj_tag(v_auxDecl_x3f_970_) == 1)
{
lean_object* v_val_975_; lean_object* v_fst_976_; lean_object* v_snd_977_; uint8_t v___x_978_; 
v_val_975_ = lean_ctor_get(v_auxDecl_x3f_970_, 0);
lean_inc(v_val_975_);
lean_dec_ref_known(v_auxDecl_x3f_970_, 1);
v_fst_976_ = lean_ctor_get(v_val_975_, 0);
lean_inc(v_fst_976_);
v_snd_977_ = lean_ctor_get(v_val_975_, 1);
lean_inc(v_snd_977_);
lean_dec(v_val_975_);
v___x_978_ = l_List_isEmpty___redArg(v_snd_977_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_979_ = l_Lean_MacroScopesView_review(v_view_952_);
v___x_980_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28(v___x_979_, v___x_978_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_990_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_990_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_990_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_990_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
uint8_t v___x_985_; 
v___x_985_ = l_List_any___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__29(v_snd_977_, v_a_981_);
lean_dec(v_a_981_);
if (v___x_985_ == 0)
{
lean_del_object(v___x_983_);
v___y_963_ = v_snd_977_;
v___y_964_ = v_fst_976_;
goto v___jp_962_;
}
else
{
lean_object* v___x_986_; lean_object* v___x_988_; 
lean_dec(v_snd_977_);
lean_dec(v_fst_976_);
v___x_986_ = lean_box(0);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v___x_986_);
v___x_988_ = v___x_983_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec(v_snd_977_);
lean_dec(v_fst_976_);
v_a_991_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_980_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_980_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
else
{
lean_dec_ref(v_view_952_);
v___y_963_ = v_snd_977_;
v___y_964_ = v_fst_976_;
goto v___jp_962_;
}
}
else
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
lean_dec(v_auxDecl_x3f_970_);
lean_dec_ref(v_view_952_);
v___x_999_ = lean_box(0);
v___x_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
return v___x_1000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22___boxed(lean_object* v_view_1022_, lean_object* v_findLocalDecl_x3f_1023_, lean_object* v_n_1024_, lean_object* v_projs_1025_, lean_object* v_auxDecl_x3f_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22(v_view_1022_, v_findLocalDecl_x3f_1023_, v_n_1024_, v_projs_1025_, v_auxDecl_x3f_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13(lean_object* v_n_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_){
_start:
{
lean_object* v_lctx_1039_; lean_object* v_toCold_1040_; lean_object* v_decls_1041_; lean_object* v_auxDeclToFullName_1042_; lean_object* v_currNamespace_1043_; lean_object* v_view_1044_; lean_object* v_name_1045_; lean_object* v_findLocalDecl_x3f_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v_lctx_1039_ = lean_ctor_get(v___y_1034_, 2);
v_toCold_1040_ = lean_ctor_get(v___y_1036_, 0);
v_decls_1041_ = lean_ctor_get(v_lctx_1039_, 1);
v_auxDeclToFullName_1042_ = lean_ctor_get(v_lctx_1039_, 2);
v_currNamespace_1043_ = lean_ctor_get(v_toCold_1040_, 4);
v_view_1044_ = l_Lean_extractMacroScopes(v_n_1033_);
v_name_1045_ = lean_ctor_get(v_view_1044_, 0);
lean_inc(v_name_1045_);
lean_inc_ref(v_decls_1041_);
lean_inc(v_currNamespace_1043_);
lean_inc(v_auxDeclToFullName_1042_);
v_findLocalDecl_x3f_1046_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13___lam__0___boxed), 4, 3);
lean_closure_set(v_findLocalDecl_x3f_1046_, 0, v_auxDeclToFullName_1042_);
lean_closure_set(v_findLocalDecl_x3f_1046_, 1, v_currNamespace_1043_);
lean_closure_set(v_findLocalDecl_x3f_1046_, 2, v_decls_1041_);
v___x_1047_ = lean_box(0);
v___x_1048_ = lean_box(0);
v___x_1049_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22(v_view_1044_, v_findLocalDecl_x3f_1046_, v_name_1045_, v___x_1047_, v___x_1048_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13___boxed(lean_object* v_n_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13(v_n_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___lam__0(uint8_t v___x_1057_, lean_object* v_n_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13(v_n_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1078_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1067_ = v___x_1064_;
v_isShared_1068_ = v_isSharedCheck_1078_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1064_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1078_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
if (lean_obj_tag(v_a_1065_) == 0)
{
uint8_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1069_ = 1;
v___x_1070_ = lean_box(v___x_1069_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1070_);
v___x_1072_ = v___x_1067_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
else
{
lean_object* v___x_1074_; lean_object* v___x_1076_; 
lean_dec_ref_known(v_a_1065_, 1);
v___x_1074_ = lean_box(v___x_1057_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1074_);
v___x_1076_ = v___x_1067_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1064_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1064_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___lam__0___boxed(lean_object* v___x_1087_, lean_object* v_n_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
uint8_t v___x_48220__boxed_1094_; lean_object* v_res_1095_; 
v___x_48220__boxed_1094_ = lean_unbox(v___x_1087_);
v_res_1095_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___lam__0(v___x_48220__boxed_1094_, v_n_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
lean_dec(v___y_1090_);
lean_dec_ref(v___y_1089_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___lam__0(lean_object* v___x_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1096_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___lam__0___boxed(lean_object* v___x_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___lam__0(v___x_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50(lean_object* v_ref_1112_, lean_object* v_msgData_1113_, uint8_t v_severity_1114_, uint8_t v_isSilent_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_a_1122_; uint8_t v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; uint8_t v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v_toCold_1133_; lean_object* v___y_1134_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; uint8_t v___y_1165_; lean_object* v___y_1166_; uint8_t v___y_1167_; uint8_t v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1188_; uint8_t v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; uint8_t v___y_1192_; uint8_t v___y_1193_; lean_object* v___y_1194_; uint8_t v___y_1198_; uint8_t v___x_1215_; uint8_t v___x_1216_; 
v___x_1215_ = 2;
v___x_1216_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1114_, v___x_1215_);
if (v___x_1216_ == 0)
{
goto v___jp_1208_;
}
else
{
uint8_t v___x_1217_; 
lean_inc_ref(v_msgData_1113_);
v___x_1217_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1113_);
if (v___x_1217_ == 0)
{
goto v___jp_1208_;
}
else
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
lean_dec_ref(v_msgData_1113_);
v___x_1218_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50___closed__0));
v___x_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
return v___x_1219_;
}
}
v___jp_1121_:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1123_, 0, v_a_1122_);
v___x_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
return v___x_1124_;
}
v___jp_1125_:
{
lean_object* v_currNamespace_1135_; lean_object* v_openDecls_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v_env_1141_; lean_object* v_nextMacroScope_1142_; lean_object* v_ngen_1143_; lean_object* v_auxDeclNGen_1144_; lean_object* v_traceState_1145_; lean_object* v_cache_1146_; lean_object* v_recordedDeps_1147_; lean_object* v_messages_1148_; lean_object* v_infoState_1149_; lean_object* v_snapshotTasks_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1160_; 
v_currNamespace_1135_ = lean_ctor_get(v_toCold_1133_, 4);
v_openDecls_1136_ = lean_ctor_get(v_toCold_1133_, 5);
lean_inc(v_openDecls_1136_);
lean_inc(v_currNamespace_1135_);
v___x_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1137_, 0, v_currNamespace_1135_);
lean_ctor_set(v___x_1137_, 1, v_openDecls_1136_);
v___x_1138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v___y_1128_);
lean_inc_ref(v___y_1127_);
lean_inc_ref(v___y_1129_);
v___x_1139_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1139_, 0, v___y_1129_);
lean_ctor_set(v___x_1139_, 1, v___y_1131_);
lean_ctor_set(v___x_1139_, 2, v___y_1132_);
lean_ctor_set(v___x_1139_, 3, v___y_1127_);
lean_ctor_set(v___x_1139_, 4, v___x_1138_);
lean_ctor_set_uint8(v___x_1139_, sizeof(void*)*5, v___y_1126_);
lean_ctor_set_uint8(v___x_1139_, sizeof(void*)*5 + 1, v___y_1130_);
lean_ctor_set_uint8(v___x_1139_, sizeof(void*)*5 + 2, v_isSilent_1115_);
v___x_1140_ = lean_st_ref_take(v___y_1134_);
v_env_1141_ = lean_ctor_get(v___x_1140_, 0);
v_nextMacroScope_1142_ = lean_ctor_get(v___x_1140_, 1);
v_ngen_1143_ = lean_ctor_get(v___x_1140_, 2);
v_auxDeclNGen_1144_ = lean_ctor_get(v___x_1140_, 3);
v_traceState_1145_ = lean_ctor_get(v___x_1140_, 4);
v_cache_1146_ = lean_ctor_get(v___x_1140_, 5);
v_recordedDeps_1147_ = lean_ctor_get(v___x_1140_, 6);
v_messages_1148_ = lean_ctor_get(v___x_1140_, 7);
v_infoState_1149_ = lean_ctor_get(v___x_1140_, 8);
v_snapshotTasks_1150_ = lean_ctor_get(v___x_1140_, 9);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1152_ = v___x_1140_;
v_isShared_1153_ = v_isSharedCheck_1160_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_snapshotTasks_1150_);
lean_inc(v_infoState_1149_);
lean_inc(v_messages_1148_);
lean_inc(v_recordedDeps_1147_);
lean_inc(v_cache_1146_);
lean_inc(v_traceState_1145_);
lean_inc(v_auxDeclNGen_1144_);
lean_inc(v_ngen_1143_);
lean_inc(v_nextMacroScope_1142_);
lean_inc(v_env_1141_);
lean_dec(v___x_1140_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1160_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1154_ = lean_box(0);
v___x_1155_ = l_Lean_MessageLog_add(v___x_1139_, v_messages_1148_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 7, v___x_1155_);
v___x_1157_ = v___x_1152_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_env_1141_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_nextMacroScope_1142_);
lean_ctor_set(v_reuseFailAlloc_1159_, 2, v_ngen_1143_);
lean_ctor_set(v_reuseFailAlloc_1159_, 3, v_auxDeclNGen_1144_);
lean_ctor_set(v_reuseFailAlloc_1159_, 4, v_traceState_1145_);
lean_ctor_set(v_reuseFailAlloc_1159_, 5, v_cache_1146_);
lean_ctor_set(v_reuseFailAlloc_1159_, 6, v_recordedDeps_1147_);
lean_ctor_set(v_reuseFailAlloc_1159_, 7, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1159_, 8, v_infoState_1149_);
lean_ctor_set(v_reuseFailAlloc_1159_, 9, v_snapshotTasks_1150_);
v___x_1157_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_st_ref_put(v___y_1134_, v___x_1157_);
v_a_1122_ = v___x_1154_;
goto v___jp_1121_;
}
}
}
v___jp_1161_:
{
lean_object* v_fileName_1170_; lean_object* v_fileMap_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1186_; 
v_fileName_1170_ = lean_ctor_get(v___y_1164_, 0);
v_fileMap_1171_ = lean_ctor_get(v___y_1164_, 1);
v___x_1172_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1113_);
v___x_1173_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46_spec__49(v___x_1172_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1186_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1186_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
lean_inc_ref_n(v_fileMap_1171_, 2);
v___x_1178_ = l_Lean_FileMap_toPosition(v_fileMap_1171_, v___y_1166_);
lean_dec(v___y_1166_);
v___x_1179_ = l_Lean_FileMap_toPosition(v_fileMap_1171_, v___y_1169_);
lean_dec(v___y_1169_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set_tag(v___x_1176_, 1);
lean_ctor_set(v___x_1176_, 0, v___x_1179_);
v___x_1181_ = v___x_1176_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1182_; 
v___x_1182_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0));
if (v___y_1168_ == 0)
{
v___y_1126_ = v___y_1165_;
v___y_1127_ = v___x_1182_;
v___y_1128_ = v_a_1174_;
v___y_1129_ = v_fileName_1170_;
v___y_1130_ = v___y_1167_;
v___y_1131_ = v___x_1178_;
v___y_1132_ = v___x_1181_;
v_toCold_1133_ = v___y_1162_;
v___y_1134_ = v___y_1119_;
goto v___jp_1125_;
}
else
{
uint8_t v___x_1183_; 
lean_inc(v_a_1174_);
lean_inc_ref(v___y_1163_);
v___x_1183_ = l_Lean_MessageData_hasTag(v___y_1163_, v_a_1174_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; 
lean_dec_ref(v___x_1181_);
lean_dec_ref(v___x_1178_);
lean_dec(v_a_1174_);
v___x_1184_ = lean_box(0);
v_a_1122_ = v___x_1184_;
goto v___jp_1121_;
}
else
{
v___y_1126_ = v___y_1165_;
v___y_1127_ = v___x_1182_;
v___y_1128_ = v_a_1174_;
v___y_1129_ = v_fileName_1170_;
v___y_1130_ = v___y_1167_;
v___y_1131_ = v___x_1178_;
v___y_1132_ = v___x_1181_;
v_toCold_1133_ = v___y_1162_;
v___y_1134_ = v___y_1119_;
goto v___jp_1125_;
}
}
}
}
}
v___jp_1187_:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lean_Syntax_getTailPos_x3f(v___y_1190_, v___y_1189_);
lean_dec(v___y_1190_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_inc(v___y_1194_);
v___y_1162_ = v___y_1188_;
v___y_1163_ = v___y_1191_;
v___y_1164_ = v___y_1188_;
v___y_1165_ = v___y_1189_;
v___y_1166_ = v___y_1194_;
v___y_1167_ = v___y_1193_;
v___y_1168_ = v___y_1192_;
v___y_1169_ = v___y_1194_;
goto v___jp_1161_;
}
else
{
lean_object* v_val_1196_; 
v_val_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_val_1196_);
lean_dec_ref_known(v___x_1195_, 1);
v___y_1162_ = v___y_1188_;
v___y_1163_ = v___y_1191_;
v___y_1164_ = v___y_1188_;
v___y_1165_ = v___y_1189_;
v___y_1166_ = v___y_1194_;
v___y_1167_ = v___y_1193_;
v___y_1168_ = v___y_1192_;
v___y_1169_ = v_val_1196_;
goto v___jp_1161_;
}
}
v___jp_1197_:
{
lean_object* v_toCold_1199_; lean_object* v_ref_1200_; uint8_t v_suppressElabErrors_1201_; lean_object* v_ref_1202_; uint8_t v___x_1203_; lean_object* v___f_1204_; lean_object* v___x_1205_; 
v_toCold_1199_ = lean_ctor_get(v___y_1118_, 0);
v_ref_1200_ = lean_ctor_get(v___y_1118_, 2);
v_suppressElabErrors_1201_ = lean_ctor_get_uint8(v___y_1118_, sizeof(void*)*3 + 2);
v_ref_1202_ = l_Lean_replaceRef(v_ref_1112_, v_ref_1200_);
v___x_1203_ = 0;
v___f_1204_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__1));
v___x_1205_ = l_Lean_Syntax_getPos_x3f(v_ref_1202_, v___x_1203_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v___x_1206_; 
v___x_1206_ = lean_unsigned_to_nat(0u);
v___y_1188_ = v_toCold_1199_;
v___y_1189_ = v___x_1203_;
v___y_1190_ = v_ref_1202_;
v___y_1191_ = v___f_1204_;
v___y_1192_ = v_suppressElabErrors_1201_;
v___y_1193_ = v___y_1198_;
v___y_1194_ = v___x_1206_;
goto v___jp_1187_;
}
else
{
lean_object* v_val_1207_; 
v_val_1207_ = lean_ctor_get(v___x_1205_, 0);
lean_inc(v_val_1207_);
lean_dec_ref_known(v___x_1205_, 1);
v___y_1188_ = v_toCold_1199_;
v___y_1189_ = v___x_1203_;
v___y_1190_ = v_ref_1202_;
v___y_1191_ = v___f_1204_;
v___y_1192_ = v_suppressElabErrors_1201_;
v___y_1193_ = v___y_1198_;
v___y_1194_ = v_val_1207_;
goto v___jp_1187_;
}
}
v___jp_1208_:
{
uint8_t v___x_1209_; uint8_t v___x_1210_; 
v___x_1209_ = 1;
v___x_1210_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1114_, v___x_1209_);
if (v___x_1210_ == 0)
{
v___y_1198_ = v_severity_1114_;
goto v___jp_1197_;
}
else
{
lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1211_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1118_);
v___x_1212_ = l_Lean_warningAsError;
v___x_1213_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v___x_1211_, v___x_1212_);
lean_dec_ref(v___x_1211_);
if (v___x_1213_ == 0)
{
v___y_1198_ = v_severity_1114_;
goto v___jp_1197_;
}
else
{
uint8_t v___x_1214_; 
v___x_1214_ = 2;
v___y_1198_ = v___x_1214_;
goto v___jp_1197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50___boxed(lean_object* v_ref_1220_, lean_object* v_msgData_1221_, lean_object* v_severity_1222_, lean_object* v_isSilent_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
uint8_t v_severity_boxed_1229_; uint8_t v_isSilent_boxed_1230_; lean_object* v_res_1231_; 
v_severity_boxed_1229_ = lean_unbox(v_severity_1222_);
v_isSilent_boxed_1230_ = lean_unbox(v_isSilent_1223_);
v_res_1231_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50(v_ref_1220_, v_msgData_1221_, v_severity_boxed_1229_, v_isSilent_boxed_1230_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v_ref_1220_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48(lean_object* v_msgData_1232_, uint8_t v_severity_1233_, uint8_t v_isSilent_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_ref_1240_; lean_object* v___x_1241_; 
v_ref_1240_ = lean_ctor_get(v___y_1237_, 2);
v___x_1241_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50(v_ref_1240_, v_msgData_1232_, v_severity_1233_, v_isSilent_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48___boxed(lean_object* v_msgData_1242_, lean_object* v_severity_1243_, lean_object* v_isSilent_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
uint8_t v_severity_boxed_1250_; uint8_t v_isSilent_boxed_1251_; lean_object* v_res_1252_; 
v_severity_boxed_1250_ = lean_unbox(v_severity_1243_);
v_isSilent_boxed_1251_ = lean_unbox(v_isSilent_1244_);
v_res_1252_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48(v_msgData_1242_, v_severity_boxed_1250_, v_isSilent_boxed_1251_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46(lean_object* v_msgData_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
uint8_t v___x_1259_; uint8_t v___x_1260_; lean_object* v___x_1261_; 
v___x_1259_ = 1;
v___x_1260_ = 0;
v___x_1261_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48(v_msgData_1253_, v___x_1259_, v___x_1260_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46___boxed(lean_object* v_msgData_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46(v_msgData_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___redArg(lean_object* v_opt_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v___x_1272_; uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1272_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1270_);
v___x_1273_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v___x_1272_, v_opt_1269_);
lean_dec_ref(v___x_1272_);
v___x_1274_ = lean_box(v___x_1273_);
v___x_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___redArg___boxed(lean_object* v_opt_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___redArg(v_opt_1277_, v___y_1278_);
lean_dec_ref(v___y_1278_);
lean_dec_ref(v_opt_1277_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42(lean_object* v_id_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___x_1287_; lean_object* v_env_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1311_; 
v___x_1287_ = lean_st_ref_get(v___y_1285_);
v_env_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc_ref(v_env_1288_);
lean_dec(v___x_1287_);
v___x_1289_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1290_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___redArg(v___x_1289_, v___y_1284_);
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1293_ = v___x_1290_;
v_isShared_1294_ = v_isSharedCheck_1311_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1290_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1311_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
uint8_t v_isExporting_1300_; 
v_isExporting_1300_ = lean_ctor_get_uint8(v_env_1288_, sizeof(void*)*13);
lean_dec_ref(v_env_1288_);
if (v_isExporting_1300_ == 0)
{
lean_dec(v_a_1291_);
lean_dec(v_id_1281_);
goto v___jp_1295_;
}
else
{
lean_object* v_val_1301_; uint8_t v___x_1302_; 
v_val_1301_ = lean_ctor_get(v_a_1291_, 0);
lean_inc(v_val_1301_);
lean_dec(v_a_1291_);
v___x_1302_ = l_Lean_isPrivateName(v_id_1281_);
if (v___x_1302_ == 0)
{
lean_dec(v_val_1301_);
lean_dec(v_id_1281_);
goto v___jp_1295_;
}
else
{
uint8_t v___x_1303_; 
v___x_1303_ = lean_unbox(v_val_1301_);
lean_dec(v_val_1301_);
if (v___x_1303_ == 0)
{
lean_dec(v_id_1281_);
goto v___jp_1295_;
}
else
{
lean_object* v___x_1304_; uint8_t v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_del_object(v___x_1293_);
v___x_1304_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__1);
v___x_1305_ = 0;
v___x_1306_ = l_Lean_MessageData_ofConstName(v_id_1281_, v___x_1305_);
v___x_1307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1304_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34___closed__3);
v___x_1309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1307_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
v___x_1310_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46(v___x_1309_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
return v___x_1310_;
}
}
}
v___jp_1295_:
{
lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1296_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__46_spec__48_spec__50___closed__0));
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1296_);
v___x_1298_ = v___x_1293_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42___boxed(lean_object* v_id_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42(v_id_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36(lean_object* v_id_1319_, uint8_t v_enableLog_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v___x_1326_; lean_object* v_toCold_1327_; lean_object* v_env_1328_; lean_object* v_currNamespace_1329_; lean_object* v_openDecls_1330_; lean_object* v___x_1331_; lean_object* v_res_1332_; lean_object* v___x_1336_; 
v___x_1326_ = lean_st_ref_get(v___y_1324_);
v_toCold_1327_ = lean_ctor_get(v___y_1323_, 0);
v_env_1328_ = lean_ctor_get(v___x_1326_, 0);
lean_inc_ref(v_env_1328_);
lean_dec(v___x_1326_);
v_currNamespace_1329_ = lean_ctor_get(v_toCold_1327_, 4);
v_openDecls_1330_ = lean_ctor_get(v_toCold_1327_, 5);
v___x_1331_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1323_);
lean_inc(v_openDecls_1330_);
lean_inc(v_currNamespace_1329_);
v_res_1332_ = l_Lean_ResolveName_resolveGlobalName(v_env_1328_, v___x_1331_, v_currNamespace_1329_, v_openDecls_1330_, v_id_1319_);
lean_dec_ref(v___x_1331_);
v___x_1336_ = lean_st_ref_get(v___y_1324_);
if (v_enableLog_1320_ == 0)
{
lean_dec(v___x_1336_);
goto v___jp_1333_;
}
else
{
lean_object* v_env_1337_; uint8_t v_isExporting_1338_; 
v_env_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc_ref(v_env_1337_);
lean_dec(v___x_1336_);
v_isExporting_1338_ = lean_ctor_get_uint8(v_env_1337_, sizeof(void*)*13);
lean_dec_ref(v_env_1337_);
if (v_isExporting_1338_ == 0)
{
goto v___jp_1333_;
}
else
{
lean_object* v___x_1339_; 
v___x_1339_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__33(v_res_1332_);
if (lean_obj_tag(v___x_1339_) == 1)
{
lean_object* v_val_1340_; lean_object* v_fst_1341_; lean_object* v___x_1342_; 
v_val_1340_ = lean_ctor_get(v___x_1339_, 0);
lean_inc(v_val_1340_);
lean_dec_ref_known(v___x_1339_, 1);
v_fst_1341_ = lean_ctor_get(v_val_1340_, 0);
lean_inc(v_fst_1341_);
lean_dec(v_val_1340_);
v___x_1342_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42(v_fst_1341_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1351_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1345_ = v___x_1342_;
v_isShared_1346_ = v_isSharedCheck_1351_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1342_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1351_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
if (lean_obj_tag(v_a_1343_) == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1349_; 
lean_dec(v_res_1332_);
v___x_1347_ = lean_box(0);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v___x_1347_);
v___x_1349_ = v___x_1345_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
else
{
lean_dec_ref_known(v_a_1343_, 1);
lean_del_object(v___x_1345_);
goto v___jp_1333_;
}
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
lean_dec(v_res_1332_);
v_a_1352_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1342_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1342_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
else
{
lean_dec(v___x_1339_);
goto v___jp_1333_;
}
}
}
v___jp_1333_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1334_, 0, v_res_1332_);
v___x_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
return v___x_1335_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36___boxed(lean_object* v_id_1360_, lean_object* v_enableLog_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
uint8_t v_enableLog_boxed_1367_; lean_object* v_res_1368_; 
v_enableLog_boxed_1367_ = lean_unbox(v_enableLog_1361_);
v_res_1368_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36(v_id_1360_, v_enableLog_boxed_1367_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27(lean_object* v_n_u2080_1373_, lean_object* v_filter_1374_, lean_object* v_view_x3f_1375_, lean_object* v_n_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_){
_start:
{
lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1452_; 
if (lean_obj_tag(v_view_x3f_1375_) == 1)
{
lean_object* v_val_1479_; lean_object* v_imported_1480_; lean_object* v_ctx_1481_; lean_object* v_scopes_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1490_; 
v_val_1479_ = lean_ctor_get(v_view_x3f_1375_, 0);
lean_inc(v_val_1479_);
lean_dec_ref_known(v_view_x3f_1375_, 1);
v_imported_1480_ = lean_ctor_get(v_val_1479_, 1);
v_ctx_1481_ = lean_ctor_get(v_val_1479_, 2);
v_scopes_1482_ = lean_ctor_get(v_val_1479_, 3);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_val_1479_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; 
v_unused_1491_ = lean_ctor_get(v_val_1479_, 0);
lean_dec(v_unused_1491_);
v___x_1484_ = v_val_1479_;
v_isShared_1485_ = v_isSharedCheck_1490_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_scopes_1482_);
lean_inc(v_ctx_1481_);
lean_inc(v_imported_1480_);
lean_dec(v_val_1479_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1490_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 0, v_n_1376_);
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_n_1376_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v_imported_1480_);
lean_ctor_set(v_reuseFailAlloc_1489_, 2, v_ctx_1481_);
lean_ctor_set(v_reuseFailAlloc_1489_, 3, v_scopes_1482_);
v___x_1487_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1488_; 
v___x_1488_ = l_Lean_MacroScopesView_review(v___x_1487_);
v___y_1452_ = v___x_1488_;
goto v___jp_1451_;
}
}
}
else
{
lean_dec(v_view_x3f_1375_);
v___y_1452_ = v_n_1376_;
goto v___jp_1451_;
}
v___jp_1382_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = lean_box(0);
v___x_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
return v___x_1384_;
}
v___jp_1385_:
{
lean_object* v___x_1388_; 
lean_inc_ref(v___y_1387_);
lean_inc(v___y_1380_);
lean_inc_ref(v___y_1379_);
lean_inc(v___y_1378_);
lean_inc_ref(v___y_1377_);
v___x_1388_ = lean_apply_5(v___y_1387_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, lean_box(0));
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1408_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1391_ = v___x_1388_;
v_isShared_1392_ = v_isSharedCheck_1408_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1388_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1408_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
if (lean_obj_tag(v_a_1389_) == 0)
{
lean_object* v___x_1393_; lean_object* v___x_1395_; 
lean_dec(v___y_1386_);
v___x_1393_ = lean_box(0);
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 0, v___x_1393_);
v___x_1395_ = v___x_1391_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1393_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
else
{
lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1406_; 
v_isSharedCheck_1406_ = !lean_is_exclusive(v_a_1389_);
if (v_isSharedCheck_1406_ == 0)
{
lean_object* v_unused_1407_; 
v_unused_1407_ = lean_ctor_get(v_a_1389_, 0);
lean_dec(v_unused_1407_);
v___x_1398_ = v_a_1389_;
v_isShared_1399_ = v_isSharedCheck_1406_;
goto v_resetjp_1397_;
}
else
{
lean_dec(v_a_1389_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1406_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v___y_1386_);
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___y_1386_);
v___x_1401_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
lean_object* v___x_1403_; 
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 0, v___x_1401_);
v___x_1403_ = v___x_1391_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
}
}
else
{
lean_object* v_a_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
lean_dec(v___y_1386_);
v_a_1409_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1411_ = v___x_1388_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_a_1409_);
lean_dec(v___x_1388_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1409_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
v___jp_1417_:
{
lean_object* v___x_1420_; 
lean_inc_ref(v___y_1419_);
lean_inc(v___y_1380_);
lean_inc_ref(v___y_1379_);
lean_inc(v___y_1378_);
lean_inc_ref(v___y_1377_);
v___x_1420_ = lean_apply_5(v___y_1419_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, lean_box(0));
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1442_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1423_ = v___x_1420_;
v_isShared_1424_ = v_isSharedCheck_1442_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1420_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1442_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
if (lean_obj_tag(v_a_1421_) == 0)
{
lean_object* v___x_1425_; lean_object* v___x_1427_; 
lean_dec(v___y_1418_);
lean_dec_ref(v_filter_1374_);
v___x_1425_ = lean_box(0);
if (v_isShared_1424_ == 0)
{
lean_ctor_set(v___x_1423_, 0, v___x_1425_);
v___x_1427_ = v___x_1423_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1425_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
else
{
lean_object* v___x_1429_; 
lean_dec_ref_known(v_a_1421_, 1);
lean_del_object(v___x_1423_);
lean_inc(v___y_1380_);
lean_inc_ref(v___y_1379_);
lean_inc(v___y_1378_);
lean_inc_ref(v___y_1377_);
lean_inc(v___y_1418_);
v___x_1429_ = lean_apply_6(v_filter_1374_, v___y_1418_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, lean_box(0));
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; uint8_t v___x_1431_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
lean_inc(v_a_1430_);
lean_dec_ref_known(v___x_1429_, 1);
v___x_1431_ = lean_unbox(v_a_1430_);
lean_dec(v_a_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___f_1432_; 
v___f_1432_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__0));
v___y_1386_ = v___y_1418_;
v___y_1387_ = v___f_1432_;
goto v___jp_1385_;
}
else
{
lean_object* v___f_1433_; 
v___f_1433_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__1));
v___y_1386_ = v___y_1418_;
v___y_1387_ = v___f_1433_;
goto v___jp_1385_;
}
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec(v___y_1418_);
v_a_1434_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1429_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1429_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_dec(v___y_1418_);
lean_dec_ref(v_filter_1374_);
v_a_1443_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1420_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1420_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
v___jp_1451_:
{
uint8_t v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = 0;
lean_inc(v___y_1452_);
v___x_1454_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36(v___y_1452_, v___x_1453_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1470_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1457_ = v___x_1454_;
v_isShared_1458_ = v_isSharedCheck_1470_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1454_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1470_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
if (lean_obj_tag(v_a_1455_) == 0)
{
lean_object* v___x_1459_; lean_object* v___x_1461_; 
lean_dec(v___y_1452_);
lean_dec_ref(v_filter_1374_);
v___x_1459_ = lean_box(0);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v___x_1459_);
v___x_1461_ = v___x_1457_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1459_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
else
{
lean_object* v_val_1463_; 
lean_del_object(v___x_1457_);
v_val_1463_ = lean_ctor_get(v_a_1455_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v_a_1455_, 1);
if (lean_obj_tag(v_val_1463_) == 1)
{
lean_object* v_head_1464_; lean_object* v_tail_1465_; 
v_head_1464_ = lean_ctor_get(v_val_1463_, 0);
lean_inc(v_head_1464_);
v_tail_1465_ = lean_ctor_get(v_val_1463_, 1);
lean_inc(v_tail_1465_);
lean_dec_ref_known(v_val_1463_, 2);
if (lean_obj_tag(v_tail_1465_) == 0)
{
lean_object* v_fst_1466_; uint8_t v___x_1467_; 
v_fst_1466_ = lean_ctor_get(v_head_1464_, 0);
lean_inc(v_fst_1466_);
lean_dec(v_head_1464_);
v___x_1467_ = lean_name_eq(v_fst_1466_, v_n_u2080_1373_);
lean_dec(v_fst_1466_);
if (v___x_1467_ == 0)
{
lean_object* v___f_1468_; 
v___f_1468_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__0));
v___y_1418_ = v___y_1452_;
v___y_1419_ = v___f_1468_;
goto v___jp_1417_;
}
else
{
lean_object* v___f_1469_; 
v___f_1469_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__1));
v___y_1418_ = v___y_1452_;
v___y_1419_ = v___f_1469_;
goto v___jp_1417_;
}
}
else
{
lean_dec(v_tail_1465_);
lean_dec(v_head_1464_);
lean_dec(v___y_1452_);
lean_dec_ref(v_filter_1374_);
goto v___jp_1382_;
}
}
else
{
lean_dec(v_val_1463_);
lean_dec(v___y_1452_);
lean_dec_ref(v_filter_1374_);
goto v___jp_1382_;
}
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec(v___y_1452_);
lean_dec_ref(v_filter_1374_);
v_a_1471_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1454_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1454_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___boxed(lean_object* v_n_u2080_1492_, lean_object* v_filter_1493_, lean_object* v_view_x3f_1494_, lean_object* v_n_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27(v_n_u2080_1492_, v_filter_1493_, v_view_x3f_1494_, v_n_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v_n_u2080_1492_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___redArg(lean_object* v_n_u2080_1502_, lean_object* v_filter_1503_, lean_object* v_view_x3f_1504_, lean_object* v_as_x27_1505_, lean_object* v_b_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
if (lean_obj_tag(v_as_x27_1505_) == 0)
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_dec(v_view_x3f_1504_);
lean_dec_ref(v_filter_1503_);
v___x_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_b_1506_);
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
return v___x_1513_;
}
else
{
lean_object* v_head_1514_; lean_object* v_tail_1515_; lean_object* v_snd_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1554_; 
v_head_1514_ = lean_ctor_get(v_as_x27_1505_, 0);
v_tail_1515_ = lean_ctor_get(v_as_x27_1505_, 1);
v_snd_1516_ = lean_ctor_get(v_b_1506_, 1);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_b_1506_);
if (v_isSharedCheck_1554_ == 0)
{
lean_object* v_unused_1555_; 
v_unused_1555_ = lean_ctor_get(v_b_1506_, 0);
lean_dec(v_unused_1555_);
v___x_1518_ = v_b_1506_;
v_isShared_1519_ = v_isSharedCheck_1554_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_snd_1516_);
lean_dec(v_b_1506_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1554_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1520_ = lean_box(0);
v___x_1521_ = l_Lean_Name_appendCore(v_head_1514_, v_snd_1516_);
lean_inc(v___x_1521_);
lean_inc(v_view_x3f_1504_);
lean_inc_ref(v_filter_1503_);
v___x_1522_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27(v_n_u2080_1502_, v_filter_1503_, v_view_x3f_1504_, v___x_1521_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1545_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1545_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1545_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
if (lean_obj_tag(v_a_1523_) == 0)
{
lean_object* v___x_1528_; 
lean_del_object(v___x_1525_);
if (v_isShared_1519_ == 0)
{
lean_ctor_set(v___x_1518_, 1, v___x_1521_);
lean_ctor_set(v___x_1518_, 0, v___x_1520_);
v___x_1528_ = v___x_1518_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1520_);
lean_ctor_set(v_reuseFailAlloc_1530_, 1, v___x_1521_);
v___x_1528_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
v_as_x27_1505_ = v_tail_1515_;
v_b_1506_ = v___x_1528_;
goto _start;
}
}
else
{
lean_object* v___x_1532_; 
lean_dec(v_view_x3f_1504_);
lean_dec_ref(v_filter_1503_);
lean_inc_ref(v_a_1523_);
if (v_isShared_1519_ == 0)
{
lean_ctor_set(v___x_1518_, 1, v___x_1521_);
lean_ctor_set(v___x_1518_, 0, v_a_1523_);
v___x_1532_ = v___x_1518_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1523_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v___x_1521_);
v___x_1532_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1542_; 
v_isSharedCheck_1542_ = !lean_is_exclusive(v_a_1523_);
if (v_isSharedCheck_1542_ == 0)
{
lean_object* v_unused_1543_; 
v_unused_1543_ = lean_ctor_get(v_a_1523_, 0);
lean_dec(v_unused_1543_);
v___x_1534_ = v_a_1523_;
v_isShared_1535_ = v_isSharedCheck_1542_;
goto v_resetjp_1533_;
}
else
{
lean_dec(v_a_1523_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1542_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1532_);
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1532_);
v___x_1537_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
lean_object* v___x_1539_; 
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1537_);
v___x_1539_ = v___x_1525_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec(v___x_1521_);
lean_del_object(v___x_1518_);
lean_dec(v_view_x3f_1504_);
lean_dec_ref(v_filter_1503_);
v_a_1546_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1522_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1522_);
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
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___redArg___boxed(lean_object* v_n_u2080_1556_, lean_object* v_filter_1557_, lean_object* v_view_x3f_1558_, lean_object* v_as_x27_1559_, lean_object* v_b_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___redArg(v_n_u2080_1556_, v_filter_1557_, v_view_x3f_1558_, v_as_x27_1559_, v_b_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v_as_x27_1559_);
lean_dec(v_n_u2080_1556_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24(lean_object* v_n_u2080_1570_, lean_object* v_filter_1571_, lean_object* v_view_x3f_1572_, lean_object* v_n_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v___y_1580_; uint8_t v___x_1621_; 
v___x_1621_ = l_Lean_Name_hasMacroScopes(v_n_1573_);
if (v___x_1621_ == 0)
{
lean_object* v___f_1622_; 
v___f_1622_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__1));
v___y_1580_ = v___f_1622_;
goto v___jp_1579_;
}
else
{
lean_object* v___f_1623_; 
v___f_1623_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27___closed__0));
v___y_1580_ = v___f_1623_;
goto v___jp_1579_;
}
v___jp_1579_:
{
lean_object* v___x_1581_; 
lean_inc_ref(v___y_1580_);
lean_inc(v___y_1577_);
lean_inc_ref(v___y_1576_);
lean_inc(v___y_1575_);
lean_inc_ref(v___y_1574_);
v___x_1581_ = lean_apply_5(v___y_1580_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, lean_box(0));
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1612_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1584_ = v___x_1581_;
v_isShared_1585_ = v_isSharedCheck_1612_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1581_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1612_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
if (lean_obj_tag(v_a_1582_) == 0)
{
lean_object* v___x_1586_; lean_object* v___x_1588_; 
lean_dec(v_n_1573_);
lean_dec(v_view_x3f_1572_);
lean_dec_ref(v_filter_1571_);
v___x_1586_ = lean_box(0);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v___x_1586_);
v___x_1588_ = v___x_1584_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
else
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
lean_dec_ref_known(v_a_1582_, 1);
lean_del_object(v___x_1584_);
v___x_1590_ = l_Lean_privateToUserName(v_n_1573_);
v___x_1591_ = l_Lean_Name_componentsRev(v___x_1590_);
v___x_1592_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___closed__0));
v___x_1593_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___redArg(v_n_u2080_1570_, v_filter_1571_, v_view_x3f_1572_, v___x_1591_, v___x_1592_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
lean_dec(v___x_1591_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1603_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1596_ = v___x_1593_;
v_isShared_1597_ = v_isSharedCheck_1603_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1593_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1603_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v_val_1598_; lean_object* v_fst_1599_; lean_object* v___x_1601_; 
v_val_1598_ = lean_ctor_get(v_a_1594_, 0);
lean_inc(v_val_1598_);
lean_dec(v_a_1594_);
v_fst_1599_ = lean_ctor_get(v_val_1598_, 0);
lean_inc(v_fst_1599_);
lean_dec(v_val_1598_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 0, v_fst_1599_);
v___x_1601_ = v___x_1596_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_fst_1599_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
v_a_1604_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1593_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1593_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1604_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
}
}
else
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
lean_dec(v_n_1573_);
lean_dec(v_view_x3f_1572_);
lean_dec_ref(v_filter_1571_);
v_a_1613_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v___x_1581_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1581_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1613_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24___boxed(lean_object* v_n_u2080_1624_, lean_object* v_filter_1625_, lean_object* v_view_x3f_1626_, lean_object* v_n_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24(v_n_u2080_1624_, v_filter_1625_, v_view_x3f_1626_, v_n_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v_n_u2080_1624_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__25(lean_object* v_n_u2080_1634_, lean_object* v_filter_1635_, lean_object* v_as_1636_, lean_object* v_i_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = lean_array_get_size(v_as_1636_);
v___x_1644_ = lean_nat_dec_lt(v_i_1637_, v___x_1643_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
lean_dec(v_i_1637_);
lean_dec_ref(v_filter_1635_);
v___x_1645_ = lean_box(0);
v___x_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
return v___x_1646_;
}
else
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1647_ = lean_box(0);
v___x_1648_ = lean_array_fget_borrowed(v_as_1636_, v_i_1637_);
lean_inc(v___x_1648_);
lean_inc_ref(v_filter_1635_);
v___x_1649_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24(v_n_u2080_1634_, v_filter_1635_, v___x_1647_, v___x_1648_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
if (lean_obj_tag(v_a_1650_) == 0)
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
lean_dec_ref_known(v___x_1649_, 1);
v___x_1651_ = lean_unsigned_to_nat(1u);
v___x_1652_ = lean_nat_add(v_i_1637_, v___x_1651_);
lean_dec(v_i_1637_);
v_i_1637_ = v___x_1652_;
goto _start;
}
else
{
lean_dec(v_i_1637_);
lean_dec_ref(v_filter_1635_);
return v___x_1649_;
}
}
else
{
lean_dec(v_i_1637_);
lean_dec_ref(v_filter_1635_);
return v___x_1649_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__25___boxed(lean_object* v_n_u2080_1654_, lean_object* v_filter_1655_, lean_object* v_as_1656_, lean_object* v_i_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__25(v_n_u2080_1654_, v_filter_1655_, v_as_1656_, v_i_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec_ref(v_as_1656_);
lean_dec(v_n_u2080_1654_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__26(lean_object* v_n_u2081_1664_, lean_object* v_as_1665_, size_t v_i_1666_, size_t v_stop_1667_, lean_object* v_b_1668_){
_start:
{
lean_object* v___y_1670_; uint8_t v___x_1674_; 
v___x_1674_ = lean_usize_dec_eq(v_i_1666_, v_stop_1667_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; 
v___x_1675_ = lean_array_uget_borrowed(v_as_1665_, v_i_1666_);
v___x_1676_ = l_Lean_Name_getPrefix(v___x_1675_);
v___x_1677_ = l_Lean_Name_getPrefix(v_n_u2081_1664_);
v___x_1678_ = l_Lean_Name_isPrefixOf(v___x_1676_, v___x_1677_);
lean_dec(v___x_1677_);
lean_dec(v___x_1676_);
if (v___x_1678_ == 0)
{
v___y_1670_ = v_b_1668_;
goto v___jp_1669_;
}
else
{
lean_object* v___x_1679_; 
lean_inc(v___x_1675_);
v___x_1679_ = lean_array_push(v_b_1668_, v___x_1675_);
v___y_1670_ = v___x_1679_;
goto v___jp_1669_;
}
}
else
{
return v_b_1668_;
}
v___jp_1669_:
{
size_t v___x_1671_; size_t v___x_1672_; 
v___x_1671_ = ((size_t)1ULL);
v___x_1672_ = lean_usize_add(v_i_1666_, v___x_1671_);
v_i_1666_ = v___x_1672_;
v_b_1668_ = v___y_1670_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__26___boxed(lean_object* v_n_u2081_1680_, lean_object* v_as_1681_, lean_object* v_i_1682_, lean_object* v_stop_1683_, lean_object* v_b_1684_){
_start:
{
size_t v_i_boxed_1685_; size_t v_stop_boxed_1686_; lean_object* v_res_1687_; 
v_i_boxed_1685_ = lean_unbox_usize(v_i_1682_);
lean_dec(v_i_1682_);
v_stop_boxed_1686_ = lean_unbox_usize(v_stop_1683_);
lean_dec(v_stop_1683_);
v_res_1687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__26(v_n_u2081_1680_, v_as_1681_, v_i_boxed_1685_, v_stop_boxed_1686_, v_b_1684_);
lean_dec_ref(v_as_1681_);
lean_dec(v_n_u2081_1680_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14(lean_object* v_n_u2080_1690_, uint8_t v_fullNames_1691_, uint8_t v_allowHorizAliases_1692_, lean_object* v_filter_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v_view_1699_; lean_object* v_name_1700_; lean_object* v_n_u2081_1701_; 
lean_inc(v_n_u2080_1690_);
v_view_1699_ = l_Lean_extractMacroScopes(v_n_u2080_1690_);
v_name_1700_ = lean_ctor_get(v_view_1699_, 0);
lean_inc(v_name_1700_);
v_n_u2081_1701_ = l_Lean_privateToUserName(v_name_1700_);
if (v_fullNames_1691_ == 0)
{
lean_object* v___x_1702_; lean_object* v_aliases_1704_; lean_object* v_env_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1702_ = lean_st_ref_get(v___y_1697_);
v_env_1719_ = lean_ctor_get(v___x_1702_, 0);
lean_inc_ref(v_env_1719_);
lean_dec(v___x_1702_);
lean_inc(v_n_u2080_1690_);
v___x_1720_ = l_Lean_getRevAliases(v_env_1719_, v_n_u2080_1690_);
v___x_1721_ = lean_array_mk(v___x_1720_);
if (v_allowHorizAliases_1692_ == 0)
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; uint8_t v___x_1725_; 
v___x_1722_ = lean_unsigned_to_nat(0u);
v___x_1723_ = lean_array_get_size(v___x_1721_);
v___x_1724_ = ((lean_object*)(l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14___closed__0));
v___x_1725_ = lean_nat_dec_lt(v___x_1722_, v___x_1723_);
if (v___x_1725_ == 0)
{
lean_dec_ref(v___x_1721_);
v_aliases_1704_ = v___x_1724_;
goto v___jp_1703_;
}
else
{
size_t v___x_1726_; size_t v___x_1727_; lean_object* v___x_1728_; 
v___x_1726_ = ((size_t)0ULL);
v___x_1727_ = lean_usize_of_nat(v___x_1723_);
v___x_1728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__26(v_n_u2081_1701_, v___x_1721_, v___x_1726_, v___x_1727_, v___x_1724_);
lean_dec_ref(v___x_1721_);
v_aliases_1704_ = v___x_1728_;
goto v___jp_1703_;
}
}
else
{
v_aliases_1704_ = v___x_1721_;
goto v___jp_1703_;
}
v___jp_1703_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_filter_1693_);
v___x_1706_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__25(v_n_u2080_1690_, v_filter_1693_, v_aliases_1704_, v___x_1705_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_);
lean_dec_ref(v_aliases_1704_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
if (lean_obj_tag(v_a_1707_) == 0)
{
lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1717_; 
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1717_ == 0)
{
lean_object* v_unused_1718_; 
v_unused_1718_ = lean_ctor_get(v___x_1706_, 0);
lean_dec(v_unused_1718_);
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1717_;
goto v_resetjp_1708_;
}
else
{
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1717_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
lean_ctor_set_tag(v___x_1709_, 1);
lean_ctor_set(v___x_1709_, 0, v_view_1699_);
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_view_1699_);
v___x_1712_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1713_ = l_Lean_rootNamespace;
v___x_1714_ = l_Lean_Name_append(v___x_1713_, v_n_u2081_1701_);
v___x_1715_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24(v_n_u2080_1690_, v_filter_1693_, v___x_1712_, v___x_1714_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_);
lean_dec(v_n_u2080_1690_);
return v___x_1715_;
}
}
}
else
{
lean_dec(v_n_u2081_1701_);
lean_dec_ref(v_view_1699_);
lean_dec_ref(v_filter_1693_);
lean_dec(v_n_u2080_1690_);
return v___x_1706_;
}
}
else
{
lean_dec(v_n_u2081_1701_);
lean_dec_ref(v_view_1699_);
lean_dec_ref(v_filter_1693_);
lean_dec(v_n_u2080_1690_);
return v___x_1706_;
}
}
}
else
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1729_, 0, v_view_1699_);
lean_inc(v_n_u2081_1701_);
lean_inc_ref(v___x_1729_);
lean_inc_ref(v_filter_1693_);
v___x_1730_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27(v_n_u2080_1690_, v_filter_1693_, v___x_1729_, v_n_u2081_1701_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
if (lean_obj_tag(v_a_1731_) == 0)
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec_ref_known(v___x_1730_, 1);
v___x_1732_ = l_Lean_rootNamespace;
v___x_1733_ = l_Lean_Name_append(v___x_1732_, v_n_u2081_1701_);
v___x_1734_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27(v_n_u2080_1690_, v_filter_1693_, v___x_1729_, v___x_1733_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_);
lean_dec(v_n_u2080_1690_);
return v___x_1734_;
}
else
{
lean_dec_ref_known(v___x_1729_, 1);
lean_dec(v_n_u2081_1701_);
lean_dec_ref(v_filter_1693_);
lean_dec(v_n_u2080_1690_);
return v___x_1730_;
}
}
else
{
lean_dec_ref_known(v___x_1729_, 1);
lean_dec(v_n_u2081_1701_);
lean_dec_ref(v_filter_1693_);
lean_dec(v_n_u2080_1690_);
return v___x_1730_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14___boxed(lean_object* v_n_u2080_1735_, lean_object* v_fullNames_1736_, lean_object* v_allowHorizAliases_1737_, lean_object* v_filter_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
uint8_t v_fullNames_boxed_1744_; uint8_t v_allowHorizAliases_boxed_1745_; lean_object* v_res_1746_; 
v_fullNames_boxed_1744_ = lean_unbox(v_fullNames_1736_);
v_allowHorizAliases_boxed_1745_ = lean_unbox(v_allowHorizAliases_1737_);
v_res_1746_ = l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14(v_n_u2080_1735_, v_fullNames_boxed_1744_, v_allowHorizAliases_boxed_1745_, v_filter_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(lean_object* v_n_u2080_1750_, uint8_t v_fullNames_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
uint8_t v___x_1757_; lean_object* v___f_1758_; lean_object* v___x_1759_; 
v___x_1757_ = 0;
v___f_1758_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___closed__0));
v___x_1759_ = l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14(v_n_u2080_1750_, v_fullNames_1751_, v___x_1757_, v___f_1758_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___boxed(lean_object* v_n_u2080_1760_, lean_object* v_fullNames_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
uint8_t v_fullNames_boxed_1767_; lean_object* v_res_1768_; 
v_fullNames_boxed_1767_ = lean_unbox(v_fullNames_1761_);
v_res_1768_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(v_n_u2080_1760_, v_fullNames_boxed_1767_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
return v_res_1768_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1769_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1770_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0);
v___x_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg(){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__1);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___boxed(lean_object* v___dummy_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg();
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(lean_object* v_o_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v_env_1781_; lean_object* v___x_1782_; lean_object* v_toEnvExtension_1783_; lean_object* v_asyncMode_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; lean_object* v___x_1787_; lean_object* v_merged_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1796_; 
v___x_1779_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1780_ = lean_st_ref_get(v___y_1777_);
v_env_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc_ref(v_env_1781_);
lean_dec(v___x_1780_);
v___x_1782_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1783_ = lean_ctor_get(v___x_1782_, 0);
v_asyncMode_1784_ = lean_ctor_get(v_toEnvExtension_1783_, 2);
v___x_1785_ = lean_box(0);
v___x_1786_ = 0;
v___x_1787_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1779_, v___x_1782_, v_env_1781_, v_asyncMode_1784_, v___x_1785_, v___x_1786_);
v_merged_1788_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1796_ == 0)
{
lean_object* v_unused_1797_; 
v_unused_1797_ = lean_ctor_get(v___x_1787_, 1);
lean_dec(v_unused_1797_);
v___x_1790_ = v___x_1787_;
v_isShared_1791_ = v_isSharedCheck_1796_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_merged_1788_);
lean_dec(v___x_1787_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1796_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1793_; 
if (v_isShared_1791_ == 0)
{
lean_ctor_set(v___x_1790_, 1, v_merged_1788_);
lean_ctor_set(v___x_1790_, 0, v_o_1776_);
v___x_1793_ = v___x_1790_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_o_1776_);
lean_ctor_set(v_reuseFailAlloc_1795_, 1, v_merged_1788_);
v___x_1793_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; 
v___x_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
return v___x_1794_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg___boxed(lean_object* v_o_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(v_o_1798_, v___y_1799_);
lean_dec(v___y_1799_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3(lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1802_);
v___x_1806_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(v___x_1805_, v___y_1803_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3___boxed(lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3(v___y_1807_, v___y_1808_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___lam__0(lean_object* v_addEntryFn_1811_, lean_object* v_entry_1812_, lean_object* v_s_1813_){
_start:
{
lean_object* v_importedEntries_1814_; lean_object* v_state_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1823_; 
v_importedEntries_1814_ = lean_ctor_get(v_s_1813_, 0);
v_state_1815_ = lean_ctor_get(v_s_1813_, 1);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_s_1813_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1817_ = v_s_1813_;
v_isShared_1818_ = v_isSharedCheck_1823_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_state_1815_);
lean_inc(v_importedEntries_1814_);
lean_dec(v_s_1813_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1823_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v_state_1819_; lean_object* v___x_1821_; 
v_state_1819_ = lean_apply_2(v_addEntryFn_1811_, v_state_1815_, v_entry_1812_);
if (v_isShared_1818_ == 0)
{
lean_ctor_set(v___x_1817_, 1, v_state_1819_);
v___x_1821_ = v___x_1817_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_importedEntries_1814_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_state_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0);
v___x_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
return v___x_1825_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1826_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1827_ = lean_unsigned_to_nat(0u);
v___x_1828_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
lean_ctor_set(v___x_1828_, 1, v___x_1827_);
lean_ctor_set(v___x_1828_, 2, v___x_1827_);
lean_ctor_set(v___x_1828_, 3, v___x_1827_);
lean_ctor_set(v___x_1828_, 4, v___x_1826_);
lean_ctor_set(v___x_1828_, 5, v___x_1826_);
lean_ctor_set(v___x_1828_, 6, v___x_1826_);
lean_ctor_set(v___x_1828_, 7, v___x_1826_);
lean_ctor_set(v___x_1828_, 8, v___x_1826_);
lean_ctor_set(v___x_1828_, 9, v___x_1826_);
lean_ctor_set(v___x_1828_, 10, v___x_1826_);
return v___x_1828_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1829_ = lean_unsigned_to_nat(32u);
v___x_1830_ = lean_mk_empty_array_with_capacity(v___x_1829_);
v___x_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
return v___x_1831_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1832_ = ((size_t)5ULL);
v___x_1833_ = lean_unsigned_to_nat(0u);
v___x_1834_ = lean_unsigned_to_nat(32u);
v___x_1835_ = lean_mk_empty_array_with_capacity(v___x_1834_);
v___x_1836_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_1837_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
lean_ctor_set(v___x_1837_, 1, v___x_1835_);
lean_ctor_set(v___x_1837_, 2, v___x_1833_);
lean_ctor_set(v___x_1837_, 3, v___x_1833_);
lean_ctor_set_usize(v___x_1837_, 4, v___x_1832_);
return v___x_1837_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1838_ = lean_box(1);
v___x_1839_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_1840_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1841_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1840_);
lean_ctor_set(v___x_1841_, 1, v___x_1839_);
lean_ctor_set(v___x_1841_, 2, v___x_1838_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v___x_1846_; lean_object* v_toCold_1847_; lean_object* v_env_1848_; lean_object* v_options_1849_; uint8_t v___x_1850_; lean_object* v_env_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1846_ = lean_st_ref_get(v___y_1844_);
v_toCold_1847_ = lean_ctor_get(v___y_1843_, 0);
v_env_1848_ = lean_ctor_get(v___x_1846_, 0);
lean_inc_ref(v_env_1848_);
lean_dec(v___x_1846_);
v_options_1849_ = lean_ctor_get(v_toCold_1847_, 2);
v___x_1850_ = 0;
v_env_1851_ = l_Lean_Environment_setRecordingDeps(v_env_1848_, v___x_1850_);
v___x_1852_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_1853_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4);
lean_inc_ref(v_options_1849_);
v___x_1854_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1854_, 0, v_env_1851_);
lean_ctor_set(v___x_1854_, 1, v___x_1852_);
lean_ctor_set(v___x_1854_, 2, v___x_1853_);
lean_ctor_set(v___x_1854_, 3, v_options_1849_);
v___x_1855_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
lean_ctor_set(v___x_1855_, 1, v_msgData_1842_);
v___x_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_){
_start:
{
lean_object* v_res_1861_; 
v_res_1861_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(v_msgData_1857_, v___y_1858_, v___y_1859_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
return v_res_1861_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_1862_; double v___x_1863_; 
v___x_1862_ = lean_unsigned_to_nat(0u);
v___x_1863_ = lean_float_of_nat(v___x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9(lean_object* v_cls_1866_, lean_object* v_msg_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
lean_object* v_ref_1871_; lean_object* v___x_1872_; lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1918_; 
v_ref_1871_ = lean_ctor_get(v___y_1868_, 2);
v___x_1872_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(v_msg_1867_, v___y_1868_, v___y_1869_);
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1875_ = v___x_1872_;
v_isShared_1876_ = v_isSharedCheck_1918_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1872_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1918_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v_traceState_1878_; lean_object* v_env_1879_; lean_object* v_nextMacroScope_1880_; lean_object* v_ngen_1881_; lean_object* v_auxDeclNGen_1882_; lean_object* v_cache_1883_; lean_object* v_recordedDeps_1884_; lean_object* v_messages_1885_; lean_object* v_infoState_1886_; lean_object* v_snapshotTasks_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1917_; 
v___x_1877_ = lean_st_ref_take(v___y_1869_);
v_traceState_1878_ = lean_ctor_get(v___x_1877_, 4);
v_env_1879_ = lean_ctor_get(v___x_1877_, 0);
v_nextMacroScope_1880_ = lean_ctor_get(v___x_1877_, 1);
v_ngen_1881_ = lean_ctor_get(v___x_1877_, 2);
v_auxDeclNGen_1882_ = lean_ctor_get(v___x_1877_, 3);
v_cache_1883_ = lean_ctor_get(v___x_1877_, 5);
v_recordedDeps_1884_ = lean_ctor_get(v___x_1877_, 6);
v_messages_1885_ = lean_ctor_get(v___x_1877_, 7);
v_infoState_1886_ = lean_ctor_get(v___x_1877_, 8);
v_snapshotTasks_1887_ = lean_ctor_get(v___x_1877_, 9);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1889_ = v___x_1877_;
v_isShared_1890_ = v_isSharedCheck_1917_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_snapshotTasks_1887_);
lean_inc(v_infoState_1886_);
lean_inc(v_messages_1885_);
lean_inc(v_recordedDeps_1884_);
lean_inc(v_cache_1883_);
lean_inc(v_traceState_1878_);
lean_inc(v_auxDeclNGen_1882_);
lean_inc(v_ngen_1881_);
lean_inc(v_nextMacroScope_1880_);
lean_inc(v_env_1879_);
lean_dec(v___x_1877_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1917_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
uint64_t v_tid_1891_; lean_object* v_traces_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1916_; 
v_tid_1891_ = lean_ctor_get_uint64(v_traceState_1878_, sizeof(void*)*1);
v_traces_1892_ = lean_ctor_get(v_traceState_1878_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v_traceState_1878_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1894_ = v_traceState_1878_;
v_isShared_1895_ = v_isSharedCheck_1916_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_traces_1892_);
lean_dec(v_traceState_1878_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1916_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; double v___x_1898_; uint8_t v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1907_; 
v___x_1896_ = lean_box(0);
v___x_1897_ = lean_box(0);
v___x_1898_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0);
v___x_1899_ = 0;
v___x_1900_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0));
v___x_1901_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1901_, 0, v_cls_1866_);
lean_ctor_set(v___x_1901_, 1, v___x_1897_);
lean_ctor_set(v___x_1901_, 2, v___x_1900_);
lean_ctor_set_float(v___x_1901_, sizeof(void*)*3, v___x_1898_);
lean_ctor_set_float(v___x_1901_, sizeof(void*)*3 + 8, v___x_1898_);
lean_ctor_set_uint8(v___x_1901_, sizeof(void*)*3 + 16, v___x_1899_);
v___x_1902_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__1));
v___x_1903_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1901_);
lean_ctor_set(v___x_1903_, 1, v_a_1873_);
lean_ctor_set(v___x_1903_, 2, v___x_1902_);
lean_inc(v_ref_1871_);
v___x_1904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1904_, 0, v_ref_1871_);
lean_ctor_set(v___x_1904_, 1, v___x_1903_);
v___x_1905_ = l_Lean_PersistentArray_push___redArg(v_traces_1892_, v___x_1904_);
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 0, v___x_1905_);
v___x_1907_ = v___x_1894_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1905_);
lean_ctor_set_uint64(v_reuseFailAlloc_1915_, sizeof(void*)*1, v_tid_1891_);
v___x_1907_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v___x_1909_; 
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 4, v___x_1907_);
v___x_1909_ = v___x_1889_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_env_1879_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v_nextMacroScope_1880_);
lean_ctor_set(v_reuseFailAlloc_1914_, 2, v_ngen_1881_);
lean_ctor_set(v_reuseFailAlloc_1914_, 3, v_auxDeclNGen_1882_);
lean_ctor_set(v_reuseFailAlloc_1914_, 4, v___x_1907_);
lean_ctor_set(v_reuseFailAlloc_1914_, 5, v_cache_1883_);
lean_ctor_set(v_reuseFailAlloc_1914_, 6, v_recordedDeps_1884_);
lean_ctor_set(v_reuseFailAlloc_1914_, 7, v_messages_1885_);
lean_ctor_set(v_reuseFailAlloc_1914_, 8, v_infoState_1886_);
lean_ctor_set(v_reuseFailAlloc_1914_, 9, v_snapshotTasks_1887_);
v___x_1909_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
lean_object* v___x_1910_; lean_object* v___x_1912_; 
v___x_1910_ = lean_st_ref_put(v___y_1869_, v___x_1909_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v___x_1896_);
v___x_1912_ = v___x_1875_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v___x_1896_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___boxed(lean_object* v_cls_1919_, lean_object* v_msg_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9(v_cls_1919_, v_msg_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
return v_res_1924_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___redArg(lean_object* v_keys_1925_, lean_object* v_i_1926_, lean_object* v_k_1927_){
_start:
{
lean_object* v___x_1928_; uint8_t v___x_1929_; 
v___x_1928_ = lean_array_get_size(v_keys_1925_);
v___x_1929_ = lean_nat_dec_lt(v_i_1926_, v___x_1928_);
if (v___x_1929_ == 0)
{
lean_dec(v_i_1926_);
return v___x_1929_;
}
else
{
lean_object* v_k_x27_1930_; uint8_t v___x_1931_; 
v_k_x27_1930_ = lean_array_fget_borrowed(v_keys_1925_, v_i_1926_);
v___x_1931_ = l_Lean_instBEqExtraModUse_beq(v_k_1927_, v_k_x27_1930_);
if (v___x_1931_ == 0)
{
lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1932_ = lean_unsigned_to_nat(1u);
v___x_1933_ = lean_nat_add(v_i_1926_, v___x_1932_);
lean_dec(v_i_1926_);
v_i_1926_ = v___x_1933_;
goto _start;
}
else
{
lean_dec(v_i_1926_);
return v___x_1929_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___redArg___boxed(lean_object* v_keys_1935_, lean_object* v_i_1936_, lean_object* v_k_1937_){
_start:
{
uint8_t v_res_1938_; lean_object* v_r_1939_; 
v_res_1938_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___redArg(v_keys_1935_, v_i_1936_, v_k_1937_);
lean_dec_ref(v_k_1937_);
lean_dec_ref(v_keys_1935_);
v_r_1939_ = lean_box(v_res_1938_);
return v_r_1939_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___redArg(lean_object* v_x_1940_, size_t v_x_1941_, lean_object* v_x_1942_){
_start:
{
if (lean_obj_tag(v_x_1940_) == 0)
{
lean_object* v_es_1943_; lean_object* v___x_1944_; size_t v___x_1945_; size_t v___x_1946_; lean_object* v_j_1947_; lean_object* v___x_1948_; 
v_es_1943_ = lean_ctor_get(v_x_1940_, 0);
v___x_1944_ = lean_box(2);
v___x_1945_ = ((size_t)31ULL);
v___x_1946_ = lean_usize_land(v_x_1941_, v___x_1945_);
v_j_1947_ = lean_usize_to_nat(v___x_1946_);
v___x_1948_ = lean_array_get_borrowed(v___x_1944_, v_es_1943_, v_j_1947_);
lean_dec(v_j_1947_);
switch(lean_obj_tag(v___x_1948_))
{
case 0:
{
lean_object* v_key_1949_; uint8_t v___x_1950_; 
v_key_1949_ = lean_ctor_get(v___x_1948_, 0);
v___x_1950_ = l_Lean_instBEqExtraModUse_beq(v_x_1942_, v_key_1949_);
return v___x_1950_;
}
case 1:
{
lean_object* v_node_1951_; size_t v___x_1952_; size_t v___x_1953_; 
v_node_1951_ = lean_ctor_get(v___x_1948_, 0);
v___x_1952_ = ((size_t)5ULL);
v___x_1953_ = lean_usize_shift_right(v_x_1941_, v___x_1952_);
v_x_1940_ = v_node_1951_;
v_x_1941_ = v___x_1953_;
goto _start;
}
default: 
{
uint8_t v___x_1955_; 
v___x_1955_ = 0;
return v___x_1955_;
}
}
}
else
{
lean_object* v_ks_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; 
v_ks_1956_ = lean_ctor_get(v_x_1940_, 0);
v___x_1957_ = lean_unsigned_to_nat(0u);
v___x_1958_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___redArg(v_ks_1956_, v___x_1957_, v_x_1942_);
return v___x_1958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___redArg___boxed(lean_object* v_x_1959_, lean_object* v_x_1960_, lean_object* v_x_1961_){
_start:
{
size_t v_x_49619__boxed_1962_; uint8_t v_res_1963_; lean_object* v_r_1964_; 
v_x_49619__boxed_1962_ = lean_unbox_usize(v_x_1960_);
lean_dec(v_x_1960_);
v_res_1963_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___redArg(v_x_1959_, v_x_49619__boxed_1962_, v_x_1961_);
lean_dec_ref(v_x_1961_);
lean_dec_ref(v_x_1959_);
v_r_1964_ = lean_box(v_res_1963_);
return v_r_1964_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(lean_object* v_x_1965_, lean_object* v_x_1966_){
_start:
{
uint64_t v___x_1967_; size_t v___x_1968_; uint8_t v___x_1969_; 
v___x_1967_ = l_Lean_instHashableExtraModUse_hash(v_x_1966_);
v___x_1968_ = lean_uint64_to_usize(v___x_1967_);
v___x_1969_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___redArg(v_x_1965_, v___x_1968_, v_x_1966_);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_x_1970_, lean_object* v_x_1971_){
_start:
{
uint8_t v_res_1972_; lean_object* v_r_1973_; 
v_res_1972_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v_x_1970_, v_x_1971_);
lean_dec_ref(v_x_1971_);
lean_dec_ref(v_x_1970_);
v_r_1973_ = lean_box(v_res_1972_);
return v_r_1973_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0);
v___x_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
return v___x_1975_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1976_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0);
v___x_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
lean_ctor_set(v___x_1977_, 1, v___x_1976_);
return v___x_1977_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2(void){
_start:
{
lean_object* v___x_1978_; 
v___x_1978_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1978_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6(void){
_start:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1983_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__5));
v___x_1984_ = l_Lean_stringToMessageData(v___x_1983_);
return v___x_1984_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8(void){
_start:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1986_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__7));
v___x_1987_ = l_Lean_stringToMessageData(v___x_1986_);
return v___x_1987_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0));
v___x_1989_ = l_Lean_stringToMessageData(v___x_1988_);
return v___x_1989_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11(void){
_start:
{
lean_object* v_cls_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v_cls_1992_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4));
v___x_1993_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__10));
v___x_1994_ = l_Lean_Name_append(v___x_1993_, v_cls_1992_);
return v___x_1994_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13(void){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1996_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__12));
v___x_1997_ = l_Lean_stringToMessageData(v___x_1996_);
return v___x_1997_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14(void){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__5));
v___x_1999_ = l_Lean_stringToMessageData(v___x_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(lean_object* v_mod_2004_, uint8_t v_isMeta_2005_, lean_object* v_hint_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2020_; lean_object* v___y_2021_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v_env_2028_; uint8_t v_isExporting_2029_; lean_object* v_entry_2030_; lean_object* v___y_2032_; lean_object* v___x_2055_; lean_object* v_env_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
v___x_2026_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2);
v___x_2027_ = lean_st_ref_get(v___y_2008_);
v_env_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc_ref(v_env_2028_);
lean_dec(v___x_2027_);
v_isExporting_2029_ = lean_ctor_get_uint8(v_env_2028_, sizeof(void*)*13);
lean_dec_ref(v_env_2028_);
lean_inc(v_mod_2004_);
v_entry_2030_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2030_, 0, v_mod_2004_);
lean_ctor_set_uint8(v_entry_2030_, sizeof(void*)*1, v_isExporting_2029_);
lean_ctor_set_uint8(v_entry_2030_, sizeof(void*)*1 + 1, v_isMeta_2005_);
v___x_2055_ = lean_st_ref_get(v___y_2008_);
v_env_2056_ = lean_ctor_get(v___x_2055_, 0);
lean_inc_ref(v_env_2056_);
lean_dec(v___x_2055_);
v___x_2057_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2058_ = lean_box(1);
v___x_2059_ = lean_box(0);
v___x_2060_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2026_, v___x_2057_, v_env_2056_, v___x_2058_, v___x_2059_);
v___x_2061_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v___x_2060_, v_entry_2030_);
lean_dec(v___x_2060_);
if (v___x_2061_ == 0)
{
lean_object* v_toCold_2062_; lean_object* v_options_2063_; uint8_t v_hasTrace_2064_; 
v_toCold_2062_ = lean_ctor_get(v___y_2007_, 0);
v_options_2063_ = lean_ctor_get(v_toCold_2062_, 2);
v_hasTrace_2064_ = lean_ctor_get_uint8(v_options_2063_, sizeof(void*)*1);
if (v_hasTrace_2064_ == 0)
{
lean_dec(v_hint_2006_);
lean_dec(v_mod_2004_);
v___y_2032_ = v___y_2008_;
goto v___jp_2031_;
}
else
{
lean_object* v_inheritedTraceOptions_2065_; lean_object* v_cls_2066_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2073_; lean_object* v___y_2074_; lean_object* v___x_2086_; uint8_t v___x_2087_; 
v_inheritedTraceOptions_2065_ = lean_ctor_get(v_toCold_2062_, 11);
v_cls_2066_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4));
v___x_2086_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11);
v___x_2087_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2065_, v_options_2063_, v___x_2086_);
if (v___x_2087_ == 0)
{
lean_dec(v_hint_2006_);
lean_dec(v_mod_2004_);
v___y_2032_ = v___y_2008_;
goto v___jp_2031_;
}
else
{
lean_object* v___x_2088_; lean_object* v___y_2090_; 
v___x_2088_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13);
if (v_isExporting_2029_ == 0)
{
lean_object* v___x_2097_; 
v___x_2097_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__17));
v___y_2090_ = v___x_2097_;
goto v___jp_2089_;
}
else
{
lean_object* v___x_2098_; 
v___x_2098_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__18));
v___y_2090_ = v___x_2098_;
goto v___jp_2089_;
}
v___jp_2089_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_inc_ref(v___y_2090_);
v___x_2091_ = l_Lean_stringToMessageData(v___y_2090_);
v___x_2092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2088_);
lean_ctor_set(v___x_2092_, 1, v___x_2091_);
v___x_2093_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14);
v___x_2094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2092_);
lean_ctor_set(v___x_2094_, 1, v___x_2093_);
if (v_isMeta_2005_ == 0)
{
lean_object* v___x_2095_; 
v___x_2095_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__15));
v___y_2073_ = v___x_2094_;
v___y_2074_ = v___x_2095_;
goto v___jp_2072_;
}
else
{
lean_object* v___x_2096_; 
v___x_2096_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__16));
v___y_2073_ = v___x_2094_;
v___y_2074_ = v___x_2096_;
goto v___jp_2072_;
}
}
}
v___jp_2067_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2070_, 0, v___y_2068_);
lean_ctor_set(v___x_2070_, 1, v___y_2069_);
v___x_2071_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9(v_cls_2066_, v___x_2070_, v___y_2007_, v___y_2008_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_dec_ref_known(v___x_2071_, 1);
v___y_2032_ = v___y_2008_;
goto v___jp_2031_;
}
else
{
lean_dec_ref_known(v_entry_2030_, 1);
return v___x_2071_;
}
}
v___jp_2072_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; uint8_t v___x_2081_; 
lean_inc_ref(v___y_2074_);
v___x_2075_ = l_Lean_stringToMessageData(v___y_2074_);
v___x_2076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___y_2073_);
lean_ctor_set(v___x_2076_, 1, v___x_2075_);
v___x_2077_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6);
v___x_2078_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2076_);
lean_ctor_set(v___x_2078_, 1, v___x_2077_);
v___x_2079_ = l_Lean_MessageData_ofName(v_mod_2004_);
v___x_2080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2078_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___x_2081_ = l_Lean_Name_isAnonymous(v_hint_2006_);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2082_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8);
v___x_2083_ = l_Lean_MessageData_ofName(v_hint_2006_);
v___x_2084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2082_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___y_2068_ = v___x_2080_;
v___y_2069_ = v___x_2084_;
goto v___jp_2067_;
}
else
{
lean_object* v___x_2085_; 
lean_dec(v_hint_2006_);
v___x_2085_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9);
v___y_2068_ = v___x_2080_;
v___y_2069_ = v___x_2085_;
goto v___jp_2067_;
}
}
}
}
else
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
lean_dec_ref_known(v_entry_2030_, 1);
lean_dec(v_hint_2006_);
lean_dec(v_mod_2004_);
v___x_2099_ = lean_box(0);
v___x_2100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2099_);
return v___x_2100_;
}
v___jp_2010_:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2022_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1);
v___x_2023_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2023_, 0, v___y_2021_);
lean_ctor_set(v___x_2023_, 1, v___y_2020_);
lean_ctor_set(v___x_2023_, 2, v___y_2012_);
lean_ctor_set(v___x_2023_, 3, v___y_2011_);
lean_ctor_set(v___x_2023_, 4, v___y_2016_);
lean_ctor_set(v___x_2023_, 5, v___x_2022_);
lean_ctor_set(v___x_2023_, 6, v___y_2015_);
lean_ctor_set(v___x_2023_, 7, v___y_2018_);
lean_ctor_set(v___x_2023_, 8, v___y_2017_);
lean_ctor_set(v___x_2023_, 9, v___y_2013_);
v___x_2024_ = lean_st_ref_put(v___y_2014_, v___x_2023_);
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___y_2019_);
return v___x_2025_;
}
v___jp_2031_:
{
lean_object* v___x_2033_; lean_object* v_env_2034_; lean_object* v_nextMacroScope_2035_; lean_object* v_ngen_2036_; lean_object* v_auxDeclNGen_2037_; lean_object* v_traceState_2038_; lean_object* v_recordedDeps_2039_; lean_object* v_messages_2040_; lean_object* v_infoState_2041_; lean_object* v_snapshotTasks_2042_; lean_object* v___x_2043_; lean_object* v_toEnvExtension_2044_; lean_object* v_addEntryFn_2045_; lean_object* v_asyncMode_2046_; uint8_t v_logWrites_2047_; lean_object* v___x_2048_; lean_object* v___f_2049_; lean_object* v___x_2050_; uint8_t v___x_2051_; 
v___x_2033_ = lean_st_ref_take(v___y_2032_);
v_env_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc_ref(v_env_2034_);
v_nextMacroScope_2035_ = lean_ctor_get(v___x_2033_, 1);
lean_inc(v_nextMacroScope_2035_);
v_ngen_2036_ = lean_ctor_get(v___x_2033_, 2);
lean_inc_ref(v_ngen_2036_);
v_auxDeclNGen_2037_ = lean_ctor_get(v___x_2033_, 3);
lean_inc_ref(v_auxDeclNGen_2037_);
v_traceState_2038_ = lean_ctor_get(v___x_2033_, 4);
lean_inc_ref(v_traceState_2038_);
v_recordedDeps_2039_ = lean_ctor_get(v___x_2033_, 6);
lean_inc_ref(v_recordedDeps_2039_);
v_messages_2040_ = lean_ctor_get(v___x_2033_, 7);
lean_inc_ref(v_messages_2040_);
v_infoState_2041_ = lean_ctor_get(v___x_2033_, 8);
lean_inc_ref(v_infoState_2041_);
v_snapshotTasks_2042_ = lean_ctor_get(v___x_2033_, 9);
lean_inc_ref(v_snapshotTasks_2042_);
lean_dec(v___x_2033_);
v___x_2043_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_2044_ = lean_ctor_get(v___x_2043_, 0);
v_addEntryFn_2045_ = lean_ctor_get(v___x_2043_, 3);
v_asyncMode_2046_ = lean_ctor_get(v_toEnvExtension_2044_, 2);
v_logWrites_2047_ = lean_ctor_get_uint8(v_toEnvExtension_2044_, sizeof(void*)*6);
v___x_2048_ = lean_box(0);
lean_inc(v_addEntryFn_2045_);
v___f_2049_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___lam__0), 3, 2);
lean_closure_set(v___f_2049_, 0, v_addEntryFn_2045_);
lean_closure_set(v___f_2049_, 1, v_entry_2030_);
v___x_2050_ = lean_box(0);
v___x_2051_ = 1;
if (v_logWrites_2047_ == 0)
{
lean_object* v___x_2052_; 
lean_inc_ref(v_toEnvExtension_2044_);
v___x_2052_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2044_, v_env_2034_, v___f_2049_, v_asyncMode_2046_, v___x_2050_, v___x_2051_);
v___y_2011_ = v_auxDeclNGen_2037_;
v___y_2012_ = v_ngen_2036_;
v___y_2013_ = v_snapshotTasks_2042_;
v___y_2014_ = v___y_2032_;
v___y_2015_ = v_recordedDeps_2039_;
v___y_2016_ = v_traceState_2038_;
v___y_2017_ = v_infoState_2041_;
v___y_2018_ = v_messages_2040_;
v___y_2019_ = v___x_2048_;
v___y_2020_ = v_nextMacroScope_2035_;
v___y_2021_ = v___x_2052_;
goto v___jp_2010_;
}
else
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
lean_inc_ref_n(v_toEnvExtension_2044_, 2);
v___x_2053_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2044_, v_env_2034_);
lean_dec_ref(v_env_2034_);
v___x_2054_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2044_, v___x_2053_, v___f_2049_, v_asyncMode_2046_, v___x_2050_, v___x_2051_);
v___y_2011_ = v_auxDeclNGen_2037_;
v___y_2012_ = v_ngen_2036_;
v___y_2013_ = v_snapshotTasks_2042_;
v___y_2014_ = v___y_2032_;
v___y_2015_ = v_recordedDeps_2039_;
v___y_2016_ = v_traceState_2038_;
v___y_2017_ = v_infoState_2041_;
v___y_2018_ = v_messages_2040_;
v___y_2019_ = v___x_2048_;
v___y_2020_ = v_nextMacroScope_2035_;
v___y_2021_ = v___x_2054_;
goto v___jp_2010_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object* v_mod_2101_, lean_object* v_isMeta_2102_, lean_object* v_hint_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
uint8_t v_isMeta_boxed_2107_; lean_object* v_res_2108_; 
v_isMeta_boxed_2107_ = lean_unbox(v_isMeta_2102_);
v_res_2108_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(v_mod_2101_, v_isMeta_boxed_2107_, v_hint_2103_, v___y_2104_, v___y_2105_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
return v_res_2108_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(lean_object* v_a_2109_, lean_object* v_x_2110_){
_start:
{
if (lean_obj_tag(v_x_2110_) == 0)
{
lean_object* v___x_2111_; 
v___x_2111_ = lean_box(0);
return v___x_2111_;
}
else
{
lean_object* v_key_2112_; lean_object* v_value_2113_; lean_object* v_tail_2114_; uint8_t v___x_2115_; 
v_key_2112_ = lean_ctor_get(v_x_2110_, 0);
v_value_2113_ = lean_ctor_get(v_x_2110_, 1);
v_tail_2114_ = lean_ctor_get(v_x_2110_, 2);
v___x_2115_ = lean_name_eq(v_key_2112_, v_a_2109_);
if (v___x_2115_ == 0)
{
v_x_2110_ = v_tail_2114_;
goto _start;
}
else
{
lean_object* v___x_2117_; 
lean_inc(v_value_2113_);
v___x_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2117_, 0, v_value_2113_);
return v___x_2117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg___boxed(lean_object* v_a_2118_, lean_object* v_x_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(v_a_2118_, v_x_2119_);
lean_dec(v_x_2119_);
lean_dec(v_a_2118_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(lean_object* v_m_2121_, lean_object* v_a_2122_){
_start:
{
lean_object* v_buckets_2123_; lean_object* v___x_2124_; uint64_t v___y_2126_; 
v_buckets_2123_ = lean_ctor_get(v_m_2121_, 1);
v___x_2124_ = lean_array_get_size(v_buckets_2123_);
if (lean_obj_tag(v_a_2122_) == 0)
{
uint64_t v___x_2140_; 
v___x_2140_ = 1723ULL;
v___y_2126_ = v___x_2140_;
goto v___jp_2125_;
}
else
{
uint64_t v_hash_2141_; 
v_hash_2141_ = lean_ctor_get_uint64(v_a_2122_, sizeof(void*)*2);
v___y_2126_ = v_hash_2141_;
goto v___jp_2125_;
}
v___jp_2125_:
{
uint64_t v___x_2127_; uint64_t v___x_2128_; uint64_t v_fold_2129_; uint64_t v___x_2130_; uint64_t v___x_2131_; uint64_t v___x_2132_; size_t v___x_2133_; size_t v___x_2134_; size_t v___x_2135_; size_t v___x_2136_; size_t v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2127_ = 32ULL;
v___x_2128_ = lean_uint64_shift_right(v___y_2126_, v___x_2127_);
v_fold_2129_ = lean_uint64_xor(v___y_2126_, v___x_2128_);
v___x_2130_ = 16ULL;
v___x_2131_ = lean_uint64_shift_right(v_fold_2129_, v___x_2130_);
v___x_2132_ = lean_uint64_xor(v_fold_2129_, v___x_2131_);
v___x_2133_ = lean_uint64_to_usize(v___x_2132_);
v___x_2134_ = lean_usize_of_nat(v___x_2124_);
v___x_2135_ = ((size_t)1ULL);
v___x_2136_ = lean_usize_sub(v___x_2134_, v___x_2135_);
v___x_2137_ = lean_usize_land(v___x_2133_, v___x_2136_);
v___x_2138_ = lean_array_uget_borrowed(v_buckets_2123_, v___x_2137_);
v___x_2139_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(v_a_2122_, v___x_2138_);
return v___x_2139_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg___boxed(lean_object* v_m_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(v_m_2142_, v_a_2143_);
lean_dec(v_a_2143_);
lean_dec_ref(v_m_2142_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5(lean_object* v___x_2145_, lean_object* v_declName_2146_, lean_object* v_as_2147_, size_t v_sz_2148_, size_t v_i_2149_, lean_object* v_b_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_){
_start:
{
uint8_t v___x_2154_; 
v___x_2154_ = lean_usize_dec_lt(v_i_2149_, v_sz_2148_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; 
lean_dec(v_declName_2146_);
v___x_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2155_, 0, v_b_2150_);
return v___x_2155_;
}
else
{
lean_object* v___x_2156_; lean_object* v_modules_2157_; lean_object* v___x_2158_; lean_object* v_a_2159_; lean_object* v___x_2160_; lean_object* v_toImport_2161_; lean_object* v_module_2162_; lean_object* v___x_2163_; uint8_t v___x_2164_; lean_object* v___x_2165_; 
v___x_2156_ = l_Lean_Environment_header(v___x_2145_);
v_modules_2157_ = lean_ctor_get(v___x_2156_, 3);
lean_inc_ref(v_modules_2157_);
lean_dec_ref(v___x_2156_);
v___x_2158_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2159_ = lean_array_uget_borrowed(v_as_2147_, v_i_2149_);
v___x_2160_ = lean_array_get(v___x_2158_, v_modules_2157_, v_a_2159_);
lean_dec_ref(v_modules_2157_);
v_toImport_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc_ref(v_toImport_2161_);
lean_dec(v___x_2160_);
v_module_2162_ = lean_ctor_get(v_toImport_2161_, 0);
lean_inc(v_module_2162_);
lean_dec_ref(v_toImport_2161_);
v___x_2163_ = lean_box(0);
v___x_2164_ = 0;
lean_inc(v_declName_2146_);
v___x_2165_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(v_module_2162_, v___x_2164_, v_declName_2146_, v___y_2151_, v___y_2152_);
if (lean_obj_tag(v___x_2165_) == 0)
{
size_t v___x_2166_; size_t v___x_2167_; 
lean_dec_ref_known(v___x_2165_, 1);
v___x_2166_ = ((size_t)1ULL);
v___x_2167_ = lean_usize_add(v_i_2149_, v___x_2166_);
v_i_2149_ = v___x_2167_;
v_b_2150_ = v___x_2163_;
goto _start;
}
else
{
lean_dec(v_declName_2146_);
return v___x_2165_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5___boxed(lean_object* v___x_2169_, lean_object* v_declName_2170_, lean_object* v_as_2171_, lean_object* v_sz_2172_, lean_object* v_i_2173_, lean_object* v_b_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_){
_start:
{
size_t v_sz_boxed_2178_; size_t v_i_boxed_2179_; lean_object* v_res_2180_; 
v_sz_boxed_2178_ = lean_unbox_usize(v_sz_2172_);
lean_dec(v_sz_2172_);
v_i_boxed_2179_ = lean_unbox_usize(v_i_2173_);
lean_dec(v_i_2173_);
v_res_2180_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5(v___x_2169_, v_declName_2170_, v_as_2171_, v_sz_boxed_2178_, v_i_boxed_2179_, v_b_2174_, v___y_2175_, v___y_2176_);
lean_dec(v___y_2176_);
lean_dec_ref(v___y_2175_);
lean_dec_ref(v_as_2171_);
lean_dec_ref(v___x_2169_);
return v_res_2180_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0(void){
_start:
{
lean_object* v___x_2181_; 
v___x_2181_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2(lean_object* v_declName_2184_, uint8_t v_isMeta_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v_env_2194_; lean_object* v___y_2196_; lean_object* v___x_2209_; 
v___x_2189_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0);
v___x_2190_ = lean_st_ref_get(v___y_2187_);
v_env_2194_ = lean_ctor_get(v___x_2190_, 0);
lean_inc_ref(v_env_2194_);
lean_dec(v___x_2190_);
v___x_2209_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2194_, v_declName_2184_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_dec_ref(v_env_2194_);
lean_dec(v_declName_2184_);
goto v___jp_2191_;
}
else
{
lean_object* v_val_2210_; lean_object* v___x_2211_; lean_object* v_modules_2212_; lean_object* v___x_2213_; uint8_t v___x_2214_; 
v_val_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_val_2210_);
lean_dec_ref_known(v___x_2209_, 1);
v___x_2211_ = l_Lean_Environment_header(v_env_2194_);
v_modules_2212_ = lean_ctor_get(v___x_2211_, 3);
lean_inc_ref(v_modules_2212_);
lean_dec_ref(v___x_2211_);
v___x_2213_ = lean_array_get_size(v_modules_2212_);
v___x_2214_ = lean_nat_dec_lt(v_val_2210_, v___x_2213_);
if (v___x_2214_ == 0)
{
lean_dec_ref(v_modules_2212_);
lean_dec(v_val_2210_);
lean_dec_ref(v_env_2194_);
lean_dec(v_declName_2184_);
goto v___jp_2191_;
}
else
{
lean_object* v___x_2215_; lean_object* v___x_2216_; uint8_t v___y_2218_; 
v___x_2215_ = lean_array_fget(v_modules_2212_, v_val_2210_);
lean_dec(v_val_2210_);
lean_dec_ref(v_modules_2212_);
v___x_2216_ = lean_st_ref_get(v___y_2187_);
if (v_isMeta_2185_ == 0)
{
lean_dec(v___x_2216_);
v___y_2218_ = v_isMeta_2185_;
goto v___jp_2217_;
}
else
{
lean_object* v_env_2229_; uint8_t v___x_2230_; 
v_env_2229_ = lean_ctor_get(v___x_2216_, 0);
lean_inc_ref(v_env_2229_);
lean_dec(v___x_2216_);
lean_inc(v_declName_2184_);
v___x_2230_ = l_Lean_isMarkedMeta(v_env_2229_, v_declName_2184_);
if (v___x_2230_ == 0)
{
v___y_2218_ = v_isMeta_2185_;
goto v___jp_2217_;
}
else
{
uint8_t v___x_2231_; 
v___x_2231_ = 0;
v___y_2218_ = v___x_2231_;
goto v___jp_2217_;
}
}
v___jp_2217_:
{
lean_object* v_toImport_2219_; lean_object* v_module_2220_; lean_object* v___x_2221_; 
v_toImport_2219_ = lean_ctor_get(v___x_2215_, 0);
lean_inc_ref(v_toImport_2219_);
lean_dec(v___x_2215_);
v_module_2220_ = lean_ctor_get(v_toImport_2219_, 0);
lean_inc(v_module_2220_);
lean_dec_ref(v_toImport_2219_);
lean_inc(v_declName_2184_);
v___x_2221_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(v_module_2220_, v___y_2218_, v_declName_2184_, v___y_2186_, v___y_2187_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
lean_dec_ref_known(v___x_2221_, 1);
v___x_2222_ = l_Lean_indirectModUseExt;
v___x_2223_ = lean_box(1);
v___x_2224_ = lean_box(0);
lean_inc_ref(v_env_2194_);
v___x_2225_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2189_, v___x_2222_, v_env_2194_, v___x_2223_, v___x_2224_);
v___x_2226_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(v___x_2225_, v_declName_2184_);
lean_dec(v___x_2225_);
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_object* v___x_2227_; 
v___x_2227_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__1));
v___y_2196_ = v___x_2227_;
goto v___jp_2195_;
}
else
{
lean_object* v_val_2228_; 
v_val_2228_ = lean_ctor_get(v___x_2226_, 0);
lean_inc(v_val_2228_);
lean_dec_ref_known(v___x_2226_, 1);
v___y_2196_ = v_val_2228_;
goto v___jp_2195_;
}
}
else
{
lean_dec_ref(v_env_2194_);
lean_dec(v_declName_2184_);
return v___x_2221_;
}
}
}
}
v___jp_2191_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2192_ = lean_box(0);
v___x_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2192_);
return v___x_2193_;
}
v___jp_2195_:
{
lean_object* v___x_2197_; size_t v_sz_2198_; size_t v___x_2199_; lean_object* v___x_2200_; 
v___x_2197_ = lean_box(0);
v_sz_2198_ = lean_array_size(v___y_2196_);
v___x_2199_ = ((size_t)0ULL);
v___x_2200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5(v_env_2194_, v_declName_2184_, v___y_2196_, v_sz_2198_, v___x_2199_, v___x_2197_, v___y_2186_, v___y_2187_);
lean_dec_ref(v___y_2196_);
lean_dec_ref(v_env_2194_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2207_ == 0)
{
lean_object* v_unused_2208_; 
v_unused_2208_ = lean_ctor_get(v___x_2200_, 0);
lean_dec(v_unused_2208_);
v___x_2202_ = v___x_2200_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_dec(v___x_2200_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2197_);
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v___x_2197_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
else
{
return v___x_2200_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___boxed(lean_object* v_declName_2232_, lean_object* v_isMeta_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
uint8_t v_isMeta_boxed_2237_; lean_object* v_res_2238_; 
v_isMeta_boxed_2237_ = lean_unbox(v_isMeta_2233_);
v_res_2238_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2(v_declName_2232_, v_isMeta_boxed_2237_, v___y_2234_, v___y_2235_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object* v_ref_2239_, lean_object* v_msgData_2240_, uint8_t v_severity_2241_, uint8_t v_isSilent_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v___y_2249_; uint8_t v___y_2250_; uint8_t v___y_2251_; lean_object* v___y_2252_; lean_object* v___y_2253_; lean_object* v_toCold_2254_; lean_object* v___y_2255_; lean_object* v___y_2284_; lean_object* v___y_2285_; lean_object* v___y_2286_; uint8_t v___y_2287_; lean_object* v___y_2288_; uint8_t v___y_2289_; uint8_t v___y_2290_; lean_object* v___y_2291_; uint8_t v___y_2311_; lean_object* v___y_2312_; uint8_t v___y_2313_; lean_object* v___y_2314_; lean_object* v___y_2315_; uint8_t v___y_2316_; lean_object* v___y_2317_; uint8_t v___y_2321_; uint8_t v___x_2338_; uint8_t v___x_2339_; 
v___x_2338_ = 2;
v___x_2339_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2241_, v___x_2338_);
if (v___x_2339_ == 0)
{
goto v___jp_2331_;
}
else
{
uint8_t v___x_2340_; 
lean_inc_ref(v_msgData_2240_);
v___x_2340_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2240_);
if (v___x_2340_ == 0)
{
goto v___jp_2331_;
}
else
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
lean_dec_ref(v_msgData_2240_);
v___x_2341_ = lean_box(0);
v___x_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2341_);
return v___x_2342_;
}
}
v___jp_2246_:
{
lean_object* v_currNamespace_2256_; lean_object* v_openDecls_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v_env_2262_; lean_object* v_nextMacroScope_2263_; lean_object* v_ngen_2264_; lean_object* v_auxDeclNGen_2265_; lean_object* v_traceState_2266_; lean_object* v_cache_2267_; lean_object* v_recordedDeps_2268_; lean_object* v_messages_2269_; lean_object* v_infoState_2270_; lean_object* v_snapshotTasks_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2282_; 
v_currNamespace_2256_ = lean_ctor_get(v_toCold_2254_, 4);
v_openDecls_2257_ = lean_ctor_get(v_toCold_2254_, 5);
lean_inc(v_openDecls_2257_);
lean_inc(v_currNamespace_2256_);
v___x_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2258_, 0, v_currNamespace_2256_);
lean_ctor_set(v___x_2258_, 1, v_openDecls_2257_);
v___x_2259_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
lean_ctor_set(v___x_2259_, 1, v___y_2248_);
lean_inc_ref(v___y_2253_);
lean_inc_ref(v___y_2247_);
v___x_2260_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2260_, 0, v___y_2247_);
lean_ctor_set(v___x_2260_, 1, v___y_2252_);
lean_ctor_set(v___x_2260_, 2, v___y_2249_);
lean_ctor_set(v___x_2260_, 3, v___y_2253_);
lean_ctor_set(v___x_2260_, 4, v___x_2259_);
lean_ctor_set_uint8(v___x_2260_, sizeof(void*)*5, v___y_2250_);
lean_ctor_set_uint8(v___x_2260_, sizeof(void*)*5 + 1, v___y_2251_);
lean_ctor_set_uint8(v___x_2260_, sizeof(void*)*5 + 2, v_isSilent_2242_);
v___x_2261_ = lean_st_ref_take(v___y_2255_);
v_env_2262_ = lean_ctor_get(v___x_2261_, 0);
v_nextMacroScope_2263_ = lean_ctor_get(v___x_2261_, 1);
v_ngen_2264_ = lean_ctor_get(v___x_2261_, 2);
v_auxDeclNGen_2265_ = lean_ctor_get(v___x_2261_, 3);
v_traceState_2266_ = lean_ctor_get(v___x_2261_, 4);
v_cache_2267_ = lean_ctor_get(v___x_2261_, 5);
v_recordedDeps_2268_ = lean_ctor_get(v___x_2261_, 6);
v_messages_2269_ = lean_ctor_get(v___x_2261_, 7);
v_infoState_2270_ = lean_ctor_get(v___x_2261_, 8);
v_snapshotTasks_2271_ = lean_ctor_get(v___x_2261_, 9);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2273_ = v___x_2261_;
v_isShared_2274_ = v_isSharedCheck_2282_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_snapshotTasks_2271_);
lean_inc(v_infoState_2270_);
lean_inc(v_messages_2269_);
lean_inc(v_recordedDeps_2268_);
lean_inc(v_cache_2267_);
lean_inc(v_traceState_2266_);
lean_inc(v_auxDeclNGen_2265_);
lean_inc(v_ngen_2264_);
lean_inc(v_nextMacroScope_2263_);
lean_inc(v_env_2262_);
lean_dec(v___x_2261_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2282_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2278_; 
v___x_2275_ = lean_box(0);
v___x_2276_ = l_Lean_MessageLog_add(v___x_2260_, v_messages_2269_);
if (v_isShared_2274_ == 0)
{
lean_ctor_set(v___x_2273_, 7, v___x_2276_);
v___x_2278_ = v___x_2273_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_env_2262_);
lean_ctor_set(v_reuseFailAlloc_2281_, 1, v_nextMacroScope_2263_);
lean_ctor_set(v_reuseFailAlloc_2281_, 2, v_ngen_2264_);
lean_ctor_set(v_reuseFailAlloc_2281_, 3, v_auxDeclNGen_2265_);
lean_ctor_set(v_reuseFailAlloc_2281_, 4, v_traceState_2266_);
lean_ctor_set(v_reuseFailAlloc_2281_, 5, v_cache_2267_);
lean_ctor_set(v_reuseFailAlloc_2281_, 6, v_recordedDeps_2268_);
lean_ctor_set(v_reuseFailAlloc_2281_, 7, v___x_2276_);
lean_ctor_set(v_reuseFailAlloc_2281_, 8, v_infoState_2270_);
lean_ctor_set(v_reuseFailAlloc_2281_, 9, v_snapshotTasks_2271_);
v___x_2278_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2279_ = lean_st_ref_put(v___y_2255_, v___x_2278_);
v___x_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2275_);
return v___x_2280_;
}
}
}
v___jp_2283_:
{
lean_object* v_fileName_2292_; lean_object* v_fileMap_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2309_; 
v_fileName_2292_ = lean_ctor_get(v___y_2288_, 0);
v_fileMap_2293_ = lean_ctor_get(v___y_2288_, 1);
v___x_2294_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2240_);
v___x_2295_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(v___x_2294_, v___y_2243_, v___y_2244_);
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2298_ = v___x_2295_;
v_isShared_2299_ = v_isSharedCheck_2309_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2295_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2309_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
lean_inc_ref_n(v_fileMap_2293_, 2);
v___x_2300_ = l_Lean_FileMap_toPosition(v_fileMap_2293_, v___y_2286_);
lean_dec(v___y_2286_);
v___x_2301_ = l_Lean_FileMap_toPosition(v_fileMap_2293_, v___y_2291_);
lean_dec(v___y_2291_);
v___x_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
v___x_2303_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__0));
if (v___y_2287_ == 0)
{
lean_del_object(v___x_2298_);
v___y_2247_ = v_fileName_2292_;
v___y_2248_ = v_a_2296_;
v___y_2249_ = v___x_2302_;
v___y_2250_ = v___y_2289_;
v___y_2251_ = v___y_2290_;
v___y_2252_ = v___x_2300_;
v___y_2253_ = v___x_2303_;
v_toCold_2254_ = v___y_2284_;
v___y_2255_ = v___y_2244_;
goto v___jp_2246_;
}
else
{
uint8_t v___x_2304_; 
lean_inc(v_a_2296_);
lean_inc_ref(v___y_2285_);
v___x_2304_ = l_Lean_MessageData_hasTag(v___y_2285_, v_a_2296_);
if (v___x_2304_ == 0)
{
lean_object* v___x_2305_; lean_object* v___x_2307_; 
lean_dec_ref_known(v___x_2302_, 1);
lean_dec_ref(v___x_2300_);
lean_dec(v_a_2296_);
v___x_2305_ = lean_box(0);
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 0, v___x_2305_);
v___x_2307_ = v___x_2298_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
else
{
lean_del_object(v___x_2298_);
v___y_2247_ = v_fileName_2292_;
v___y_2248_ = v_a_2296_;
v___y_2249_ = v___x_2302_;
v___y_2250_ = v___y_2289_;
v___y_2251_ = v___y_2290_;
v___y_2252_ = v___x_2300_;
v___y_2253_ = v___x_2303_;
v_toCold_2254_ = v___y_2284_;
v___y_2255_ = v___y_2244_;
goto v___jp_2246_;
}
}
}
}
v___jp_2310_:
{
lean_object* v___x_2318_; 
v___x_2318_ = l_Lean_Syntax_getTailPos_x3f(v___y_2315_, v___y_2313_);
lean_dec(v___y_2315_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_inc(v___y_2317_);
v___y_2284_ = v___y_2312_;
v___y_2285_ = v___y_2314_;
v___y_2286_ = v___y_2317_;
v___y_2287_ = v___y_2311_;
v___y_2288_ = v___y_2312_;
v___y_2289_ = v___y_2313_;
v___y_2290_ = v___y_2316_;
v___y_2291_ = v___y_2317_;
goto v___jp_2283_;
}
else
{
lean_object* v_val_2319_; 
v_val_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_val_2319_);
lean_dec_ref_known(v___x_2318_, 1);
v___y_2284_ = v___y_2312_;
v___y_2285_ = v___y_2314_;
v___y_2286_ = v___y_2317_;
v___y_2287_ = v___y_2311_;
v___y_2288_ = v___y_2312_;
v___y_2289_ = v___y_2313_;
v___y_2290_ = v___y_2316_;
v___y_2291_ = v_val_2319_;
goto v___jp_2283_;
}
}
v___jp_2320_:
{
lean_object* v_toCold_2322_; lean_object* v_ref_2323_; uint8_t v_suppressElabErrors_2324_; lean_object* v_ref_2325_; uint8_t v___x_2326_; lean_object* v___f_2327_; lean_object* v___x_2328_; 
v_toCold_2322_ = lean_ctor_get(v___y_2243_, 0);
v_ref_2323_ = lean_ctor_get(v___y_2243_, 2);
v_suppressElabErrors_2324_ = lean_ctor_get_uint8(v___y_2243_, sizeof(void*)*3 + 2);
v_ref_2325_ = l_Lean_replaceRef(v_ref_2239_, v_ref_2323_);
v___x_2326_ = 0;
v___f_2327_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40_spec__44_spec__46___closed__1));
v___x_2328_ = l_Lean_Syntax_getPos_x3f(v_ref_2325_, v___x_2326_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v___x_2329_; 
v___x_2329_ = lean_unsigned_to_nat(0u);
v___y_2311_ = v_suppressElabErrors_2324_;
v___y_2312_ = v_toCold_2322_;
v___y_2313_ = v___x_2326_;
v___y_2314_ = v___f_2327_;
v___y_2315_ = v_ref_2325_;
v___y_2316_ = v___y_2321_;
v___y_2317_ = v___x_2329_;
goto v___jp_2310_;
}
else
{
lean_object* v_val_2330_; 
v_val_2330_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_val_2330_);
lean_dec_ref_known(v___x_2328_, 1);
v___y_2311_ = v_suppressElabErrors_2324_;
v___y_2312_ = v_toCold_2322_;
v___y_2313_ = v___x_2326_;
v___y_2314_ = v___f_2327_;
v___y_2315_ = v_ref_2325_;
v___y_2316_ = v___y_2321_;
v___y_2317_ = v_val_2330_;
goto v___jp_2310_;
}
}
v___jp_2331_:
{
uint8_t v___x_2332_; uint8_t v___x_2333_; 
v___x_2332_ = 1;
v___x_2333_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2241_, v___x_2332_);
if (v___x_2333_ == 0)
{
v___y_2321_ = v_severity_2241_;
goto v___jp_2320_;
}
else
{
lean_object* v___x_2334_; lean_object* v___x_2335_; uint8_t v___x_2336_; 
v___x_2334_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2243_);
v___x_2335_ = l_Lean_warningAsError;
v___x_2336_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v___x_2334_, v___x_2335_);
lean_dec_ref(v___x_2334_);
if (v___x_2336_ == 0)
{
v___y_2321_ = v_severity_2241_;
goto v___jp_2320_;
}
else
{
uint8_t v___x_2337_; 
v___x_2337_ = 2;
v___y_2321_ = v___x_2337_;
goto v___jp_2320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___boxed(lean_object* v_ref_2343_, lean_object* v_msgData_2344_, lean_object* v_severity_2345_, lean_object* v_isSilent_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
uint8_t v_severity_boxed_2350_; uint8_t v_isSilent_boxed_2351_; lean_object* v_res_2352_; 
v_severity_boxed_2350_ = lean_unbox(v_severity_2345_);
v_isSilent_boxed_2351_ = lean_unbox(v_isSilent_2346_);
v_res_2352_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5(v_ref_2343_, v_msgData_2344_, v_severity_boxed_2350_, v_isSilent_boxed_2351_, v___y_2347_, v___y_2348_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v_ref_2343_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_msgData_2353_, uint8_t v_severity_2354_, uint8_t v_isSilent_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v_ref_2359_; lean_object* v___x_2360_; 
v_ref_2359_ = lean_ctor_get(v___y_2356_, 2);
v___x_2360_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5(v_ref_2359_, v_msgData_2353_, v_severity_2354_, v_isSilent_2355_, v___y_2356_, v___y_2357_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_msgData_2361_, lean_object* v_severity_2362_, lean_object* v_isSilent_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
uint8_t v_severity_boxed_2367_; uint8_t v_isSilent_boxed_2368_; lean_object* v_res_2369_; 
v_severity_boxed_2367_ = lean_unbox(v_severity_2362_);
v_isSilent_boxed_2368_ = lean_unbox(v_isSilent_2363_);
v_res_2369_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2(v_msgData_2361_, v_severity_boxed_2367_, v_isSilent_boxed_2368_, v___y_2364_, v___y_2365_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(lean_object* v_msgData_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
uint8_t v___x_2374_; uint8_t v___x_2375_; lean_object* v___x_2376_; 
v___x_2374_ = 1;
v___x_2375_ = 0;
v___x_2376_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2(v_msgData_2370_, v___x_2374_, v___x_2375_, v___y_2371_, v___y_2372_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1___boxed(lean_object* v_msgData_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v_msgData_2377_, v___y_2378_, v___y_2379_);
lean_dec(v___y_2379_);
lean_dec_ref(v___y_2378_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v_ref_2386_; lean_object* v___x_2387_; lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2396_; 
v_ref_2386_ = lean_ctor_get(v___y_2383_, 2);
v___x_2387_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(v_msg_2382_, v___y_2383_, v___y_2384_);
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2390_ = v___x_2387_;
v_isShared_2391_ = v_isSharedCheck_2396_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2387_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2396_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; lean_object* v___x_2394_; 
lean_inc(v_ref_2386_);
v___x_2392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2392_, 0, v_ref_2386_);
lean_ctor_set(v___x_2392_, 1, v_a_2388_);
if (v_isShared_2391_ == 0)
{
lean_ctor_set_tag(v___x_2390_, 1);
lean_ctor_set(v___x_2390_, 0, v___x_2392_);
v___x_2394_ = v___x_2390_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v___x_2392_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
return v___x_2394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v_msg_2397_, v___y_2398_, v___y_2399_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
return v_res_2401_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2404_ = l_Lean_stringToMessageData(v___x_2403_);
return v___x_2404_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2409_ = l_Lean_MessageData_ofFormat(v___x_2408_);
return v___x_2409_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2412_ = l_Lean_stringToMessageData(v___x_2411_);
return v___x_2412_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2414_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2415_ = l_Lean_stringToMessageData(v___x_2414_);
return v___x_2415_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2418_ = l_Lean_stringToMessageData(v___x_2417_);
return v___x_2418_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2423_ = l_Lean_MessageData_ofFormat(v___x_2422_);
return v___x_2423_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2424_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2425_ = l_Lean_MessageData_hint_x27(v___x_2424_);
return v___x_2425_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2428_ = l_Lean_stringToMessageData(v___x_2427_);
return v___x_2428_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2432_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2433_ = l_Lean_MessageData_ofFormat(v___x_2432_);
return v___x_2433_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2440_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2441_ = l_Lean_MessageData_ofFormat(v___x_2440_);
return v___x_2441_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2442_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2442_);
return v___x_2443_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg___closed__0);
v___x_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
return v___x_2445_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2446_ = lean_box(1);
v___x_2447_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_2448_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2449_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2448_);
lean_ctor_set(v___x_2449_, 1, v___x_2447_);
lean_ctor_set(v___x_2449_, 2, v___x_2446_);
return v___x_2449_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2452_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2453_ = lean_unsigned_to_nat(0u);
v___x_2454_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2453_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
lean_ctor_set(v___x_2454_, 2, v___x_2453_);
lean_ctor_set(v___x_2454_, 3, v___x_2453_);
lean_ctor_set(v___x_2454_, 4, v___x_2452_);
lean_ctor_set(v___x_2454_, 5, v___x_2452_);
lean_ctor_set(v___x_2454_, 6, v___x_2452_);
lean_ctor_set(v___x_2454_, 7, v___x_2452_);
lean_ctor_set(v___x_2454_, 8, v___x_2452_);
lean_ctor_set(v___x_2454_, 9, v___x_2452_);
lean_ctor_set(v___x_2454_, 10, v___x_2452_);
return v___x_2454_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10___redArg();
return v___x_2455_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2456_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
return v___x_2457_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2458_ = lean_unsigned_to_nat(0u);
v___x_2459_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2460_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2459_);
lean_ctor_set(v___x_2460_, 1, v___x_2459_);
lean_ctor_set(v___x_2460_, 2, v___x_2458_);
return v___x_2460_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2461_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2462_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2463_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2464_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2465_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2464_);
lean_ctor_set(v___x_2465_, 1, v___x_2463_);
lean_ctor_set(v___x_2465_, 2, v___x_2462_);
lean_ctor_set(v___x_2465_, 3, v___x_2463_);
lean_ctor_set(v___x_2465_, 4, v___x_2463_);
lean_ctor_set(v___x_2465_, 5, v___x_2463_);
lean_ctor_set(v___x_2465_, 6, v___x_2463_);
lean_ctor_set(v___x_2465_, 7, v___x_2461_);
return v___x_2465_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2466_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2466_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
lean_ctor_set(v___x_2467_, 2, v___x_2466_);
lean_ctor_set(v___x_2467_, 3, v___x_2466_);
lean_ctor_set(v___x_2467_, 4, v___x_2466_);
return v___x_2467_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2471_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2472_ = l_Lean_MessageData_ofFormat(v___x_2471_);
return v___x_2472_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2474_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2475_ = l_Lean_stringToMessageData(v___x_2474_);
return v___x_2475_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2477_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2478_ = l_Lean_stringToMessageData(v___x_2477_);
return v___x_2478_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2481_ = l_Lean_stringToMessageData(v___x_2480_);
return v___x_2481_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2483_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2484_ = l_Lean_stringToMessageData(v___x_2483_);
return v___x_2484_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2486_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2487_ = l_Lean_stringToMessageData(v___x_2486_);
return v___x_2487_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2490_ = l_Lean_stringToMessageData(v___x_2489_);
return v___x_2490_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2493_ = l_Lean_stringToMessageData(v___x_2492_);
return v___x_2493_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2496_ = l_Lean_stringToMessageData(v___x_2495_);
return v___x_2496_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2499_ = l_Lean_stringToMessageData(v___x_2498_);
return v___x_2499_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2502_ = l_Lean_stringToMessageData(v___x_2501_);
return v___x_2502_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2504_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2505_ = l_Lean_stringToMessageData(v___x_2504_);
return v___x_2505_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2507_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2508_ = l_Lean_stringToMessageData(v___x_2507_);
return v___x_2508_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__63_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2511_ = l_Lean_stringToMessageData(v___x_2510_);
return v___x_2511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object* v___x_2512_, lean_object* v___x_2513_, lean_object* v___f_2514_, uint8_t v___x_2515_, lean_object* v___x_2516_, lean_object* v___x_2517_, lean_object* v_a_2518_, lean_object* v_declName_2519_, lean_object* v_stx_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v_hint_2615_; lean_object* v___y_2616_; lean_object* v___y_2617_; lean_object* v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___x_2649_; uint8_t v___x_2650_; 
v___x_2649_ = l_Lean_Name_mkStr2(v___x_2512_, v___x_2513_);
lean_inc(v_stx_2520_);
v___x_2650_ = l_Lean_Syntax_isOfKind(v_stx_2520_, v___x_2649_);
lean_dec(v___x_2649_);
if (v___x_2650_ == 0)
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___x_2651_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2652_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_2651_, v___y_2521_, v___y_2522_);
return v___x_2652_;
}
else
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; uint8_t v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v_val_2665_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2693_; uint8_t v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; lean_object* v___y_2697_; lean_object* v___y_2698_; lean_object* v___y_2703_; lean_object* v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2707_; lean_object* v___y_2708_; uint8_t v___y_2709_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v___y_2712_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v___y_2762_; lean_object* v___y_2763_; lean_object* v___y_2764_; uint8_t v___y_2765_; lean_object* v___y_2766_; lean_object* v_msg_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2921_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v_a_2927_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2947_; lean_object* v_since_x3f_2948_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v___y_2966_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v_typeChanged_x3f_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2983_; lean_object* v_text_x3f_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v_id_x3f_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___x_3009_; uint8_t v___x_3010_; 
v___x_2653_ = lean_unsigned_to_nat(0u);
v___x_2654_ = lean_unsigned_to_nat(1u);
v___x_3009_ = l_Lean_Syntax_getArg(v_stx_2520_, v___x_2654_);
v___x_3010_ = l_Lean_Syntax_isNone(v___x_3009_);
if (v___x_3010_ == 0)
{
uint8_t v___x_3011_; 
lean_inc(v___x_3009_);
v___x_3011_ = l_Lean_Syntax_matchesNull(v___x_3009_, v___x_2654_);
if (v___x_3011_ == 0)
{
lean_object* v___x_3012_; lean_object* v___x_3013_; 
lean_dec(v___x_3009_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___x_3012_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3013_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_3012_, v___y_2521_, v___y_2522_);
return v___x_3013_;
}
else
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = l_Lean_Syntax_getArg(v___x_3009_, v___x_2653_);
lean_dec(v___x_3009_);
v___x_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3015_, 0, v___x_3014_);
v_id_x3f_2997_ = v___x_3015_;
v___y_2998_ = v___y_2521_;
v___y_2999_ = v___y_2522_;
goto v___jp_2996_;
}
}
else
{
lean_object* v___x_3016_; 
lean_dec(v___x_3009_);
v___x_3016_ = lean_box(0);
v_id_x3f_2997_ = v___x_3016_;
v___y_2998_ = v___y_2521_;
v___y_2999_ = v___y_2522_;
goto v___jp_2996_;
}
v___jp_2655_:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; uint8_t v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2666_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2667_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2668_ = lean_box(0);
v___x_2669_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2670_, 0, v___f_2514_);
v___x_2671_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2667_);
lean_ctor_set(v___x_2671_, 1, v___x_2668_);
lean_ctor_set(v___x_2671_, 2, v___x_2668_);
lean_ctor_set(v___x_2671_, 3, v___x_2668_);
lean_ctor_set(v___x_2671_, 4, v___x_2669_);
lean_ctor_set(v___x_2671_, 5, v___x_2670_);
lean_inc(v_val_2665_);
v___x_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2672_, 0, v_val_2665_);
lean_ctor_set(v___x_2672_, 1, v_val_2665_);
v___x_2673_ = l_Lean_Syntax_ofRange(v___x_2672_, v___y_2661_);
v___x_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2673_);
v___x_2675_ = 4;
v___x_2676_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2676_, 0, v___x_2671_);
lean_ctor_set(v___x_2676_, 1, v___x_2674_);
lean_ctor_set(v___x_2676_, 2, v___x_2668_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*3, v___x_2675_);
v___x_2677_ = lean_mk_empty_array_with_capacity(v___x_2654_);
v___x_2678_ = lean_array_push(v___x_2677_, v___x_2676_);
v___x_2679_ = l_Lean_MessageData_hint(v___x_2666_, v___x_2678_, v___x_2668_, v___x_2668_, v___x_2515_, v___y_2663_, v___y_2656_);
lean_dec_ref(v___x_2678_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v___x_2679_, 1);
v___y_2609_ = v___y_2658_;
v___y_2610_ = v___y_2657_;
v___y_2611_ = v___y_2659_;
v___y_2612_ = v___y_2660_;
v___y_2613_ = v___y_2662_;
v___y_2614_ = v___y_2664_;
v_hint_2615_ = v_a_2680_;
v___y_2616_ = v___y_2663_;
v___y_2617_ = v___y_2656_;
goto v___jp_2608_;
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2662_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec(v___y_2657_);
lean_dec(v_stx_2520_);
v_a_2681_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2679_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2679_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
v___jp_2689_:
{
if (lean_obj_tag(v___y_2692_) == 0)
{
lean_dec_ref(v___f_2514_);
v___y_2640_ = v___y_2690_;
v___y_2641_ = v___y_2691_;
v___y_2642_ = v___y_2692_;
v___y_2643_ = v___y_2693_;
v___y_2644_ = v___y_2695_;
v___y_2645_ = v___y_2697_;
v___y_2646_ = v___y_2696_;
v___y_2647_ = v___y_2698_;
goto v___jp_2639_;
}
else
{
lean_object* v_val_2699_; lean_object* v___x_2700_; 
v_val_2699_ = lean_ctor_get(v___y_2692_, 0);
v___x_2700_ = l_Lean_Syntax_getTailPos_x3f(v_val_2699_, v___y_2694_);
if (lean_obj_tag(v___x_2700_) == 1)
{
lean_object* v_val_2701_; 
v_val_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_val_2701_);
lean_dec_ref_known(v___x_2700_, 1);
v___y_2656_ = v___y_2690_;
v___y_2657_ = v___y_2691_;
v___y_2658_ = v___y_2692_;
v___y_2659_ = v___y_2693_;
v___y_2660_ = v___y_2695_;
v___y_2661_ = v___y_2694_;
v___y_2662_ = v___y_2697_;
v___y_2663_ = v___y_2696_;
v___y_2664_ = v___y_2698_;
v_val_2665_ = v_val_2701_;
goto v___jp_2655_;
}
else
{
lean_dec(v___x_2700_);
lean_dec_ref(v___f_2514_);
v___y_2640_ = v___y_2690_;
v___y_2641_ = v___y_2691_;
v___y_2642_ = v___y_2692_;
v___y_2643_ = v___y_2693_;
v___y_2644_ = v___y_2695_;
v___y_2645_ = v___y_2697_;
v___y_2646_ = v___y_2696_;
v___y_2647_ = v___y_2698_;
goto v___jp_2639_;
}
}
}
v___jp_2702_:
{
lean_object* v___x_2713_; 
lean_inc_ref(v___y_2707_);
v___x_2713_ = l_Lean_Environment_find_x3f(v___y_2707_, v_declName_2519_, v___x_2515_);
if (lean_obj_tag(v___x_2713_) == 1)
{
lean_object* v_val_2714_; lean_object* v___x_2715_; 
v_val_2714_ = lean_ctor_get(v___x_2713_, 0);
lean_inc(v_val_2714_);
lean_dec_ref_known(v___x_2713_, 1);
v___x_2715_ = l_Lean_Environment_find_x3f(v___y_2707_, v___y_2703_, v___x_2515_);
if (lean_obj_tag(v___x_2715_) == 1)
{
lean_object* v_val_2716_; uint8_t v___x_2717_; uint8_t v___x_2718_; uint8_t v___x_2719_; lean_object* v___x_2720_; uint64_t v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v_val_2716_ = lean_ctor_get(v___x_2715_, 0);
lean_inc(v_val_2716_);
lean_dec_ref_known(v___x_2715_, 1);
v___x_2717_ = 1;
v___x_2718_ = 0;
v___x_2719_ = 2;
v___x_2720_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_2720_, 0, v___x_2515_);
lean_ctor_set_uint8(v___x_2720_, 1, v___x_2515_);
lean_ctor_set_uint8(v___x_2720_, 2, v___x_2515_);
lean_ctor_set_uint8(v___x_2720_, 3, v___x_2515_);
lean_ctor_set_uint8(v___x_2720_, 4, v___x_2515_);
lean_ctor_set_uint8(v___x_2720_, 5, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 6, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 7, v___x_2515_);
lean_ctor_set_uint8(v___x_2720_, 8, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 9, v___x_2717_);
lean_ctor_set_uint8(v___x_2720_, 10, v___x_2718_);
lean_ctor_set_uint8(v___x_2720_, 11, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 12, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 13, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 14, v___x_2719_);
lean_ctor_set_uint8(v___x_2720_, 15, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 16, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 17, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 18, v___y_2709_);
lean_ctor_set_uint8(v___x_2720_, 19, v___x_2515_);
v___x_2721_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2720_);
v___x_2722_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2722_, 0, v___x_2720_);
lean_ctor_set_uint64(v___x_2722_, sizeof(void*)*1, v___x_2721_);
v___x_2723_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_2724_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2725_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2726_ = lean_box(0);
lean_inc(v___x_2516_);
v___x_2727_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2727_, 0, v___x_2722_);
lean_ctor_set(v___x_2727_, 1, v___x_2516_);
lean_ctor_set(v___x_2727_, 2, v___x_2724_);
lean_ctor_set(v___x_2727_, 3, v___x_2725_);
lean_ctor_set(v___x_2727_, 4, v___x_2726_);
lean_ctor_set(v___x_2727_, 5, v___x_2653_);
lean_ctor_set(v___x_2727_, 6, v___x_2726_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*7, v___x_2515_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*7 + 1, v___x_2515_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*7 + 2, v___x_2515_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*7 + 3, v___y_2709_);
v___x_2728_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2729_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2730_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2728_);
lean_ctor_set(v___x_2731_, 1, v___x_2729_);
lean_ctor_set(v___x_2731_, 2, v___x_2516_);
lean_ctor_set(v___x_2731_, 3, v___x_2723_);
lean_ctor_set(v___x_2731_, 4, v___x_2730_);
v___x_2732_ = lean_st_mk_ref(v___x_2731_);
v___x_2733_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_val_2714_, v_val_2716_, v___x_2727_, v___x_2732_, v___y_2711_, v___y_2712_);
lean_dec_ref_known(v___x_2727_, 7);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; lean_object* v___x_2735_; uint8_t v___x_2736_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2734_);
lean_dec_ref_known(v___x_2733_, 1);
v___x_2735_ = lean_st_ref_get(v___x_2732_);
lean_dec(v___x_2732_);
lean_dec(v___x_2735_);
v___x_2736_ = lean_unbox(v_a_2734_);
lean_dec(v_a_2734_);
if (v___x_2736_ == 0)
{
if (lean_obj_tag(v___y_2708_) == 0)
{
if (lean_obj_tag(v___y_2704_) == 0)
{
v___y_2690_ = v___y_2712_;
v___y_2691_ = v___y_2704_;
v___y_2692_ = v___y_2705_;
v___y_2693_ = v___y_2706_;
v___y_2694_ = v___y_2709_;
v___y_2695_ = v_val_2714_;
v___y_2696_ = v___y_2711_;
v___y_2697_ = v_val_2716_;
v___y_2698_ = v___y_2710_;
goto v___jp_2689_;
}
else
{
lean_object* v_val_2737_; lean_object* v___x_2738_; 
v_val_2737_ = lean_ctor_get(v___y_2704_, 0);
v___x_2738_ = l_Lean_Syntax_getTailPos_x3f(v_val_2737_, v___y_2709_);
if (lean_obj_tag(v___x_2738_) == 0)
{
v___y_2690_ = v___y_2712_;
v___y_2691_ = v___y_2704_;
v___y_2692_ = v___y_2705_;
v___y_2693_ = v___y_2706_;
v___y_2694_ = v___y_2709_;
v___y_2695_ = v_val_2714_;
v___y_2696_ = v___y_2711_;
v___y_2697_ = v_val_2716_;
v___y_2698_ = v___y_2710_;
goto v___jp_2689_;
}
else
{
lean_object* v_val_2739_; 
v_val_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_val_2739_);
lean_dec_ref_known(v___x_2738_, 1);
v___y_2656_ = v___y_2712_;
v___y_2657_ = v___y_2704_;
v___y_2658_ = v___y_2705_;
v___y_2659_ = v___y_2706_;
v___y_2660_ = v_val_2714_;
v___y_2661_ = v___y_2709_;
v___y_2662_ = v_val_2716_;
v___y_2663_ = v___y_2711_;
v___y_2664_ = v___y_2710_;
v_val_2665_ = v_val_2739_;
goto v___jp_2655_;
}
}
}
else
{
lean_dec_ref_known(v___y_2708_, 1);
lean_dec(v_val_2716_);
lean_dec(v_val_2714_);
lean_dec_ref(v___f_2514_);
v___y_2592_ = v___y_2704_;
v___y_2593_ = v___y_2705_;
v___y_2594_ = v___y_2706_;
v___y_2595_ = v___y_2710_;
v___y_2596_ = v___y_2711_;
v___y_2597_ = v___y_2712_;
goto v___jp_2591_;
}
}
else
{
lean_dec(v_val_2716_);
lean_dec(v_val_2714_);
lean_dec_ref(v___f_2514_);
if (lean_obj_tag(v___y_2708_) == 0)
{
v___y_2592_ = v___y_2704_;
v___y_2593_ = v___y_2705_;
v___y_2594_ = v___y_2706_;
v___y_2595_ = v___y_2710_;
v___y_2596_ = v___y_2711_;
v___y_2597_ = v___y_2712_;
goto v___jp_2591_;
}
else
{
lean_object* v___x_2740_; lean_object* v___x_2741_; 
lean_dec_ref_known(v___y_2708_, 1);
v___x_2740_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2741_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2740_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_dec_ref_known(v___x_2741_, 1);
v___y_2592_ = v___y_2704_;
v___y_2593_ = v___y_2705_;
v___y_2594_ = v___y_2706_;
v___y_2595_ = v___y_2710_;
v___y_2596_ = v___y_2711_;
v___y_2597_ = v___y_2712_;
goto v___jp_2591_;
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
lean_dec(v___y_2710_);
lean_dec(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec(v___y_2704_);
lean_dec(v_stx_2520_);
v_a_2742_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___x_2741_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2741_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
}
}
else
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
lean_dec(v___x_2732_);
lean_dec(v_val_2716_);
lean_dec(v_val_2714_);
lean_dec(v___y_2710_);
lean_dec(v___y_2708_);
lean_dec(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec(v___y_2704_);
lean_dec(v_stx_2520_);
lean_dec_ref(v___f_2514_);
v_a_2750_ = lean_ctor_get(v___x_2733_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2752_ = v___x_2733_;
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2733_);
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
lean_dec(v___x_2715_);
lean_dec(v_val_2714_);
lean_dec(v___y_2708_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___y_2592_ = v___y_2704_;
v___y_2593_ = v___y_2705_;
v___y_2594_ = v___y_2706_;
v___y_2595_ = v___y_2710_;
v___y_2596_ = v___y_2711_;
v___y_2597_ = v___y_2712_;
goto v___jp_2591_;
}
}
else
{
lean_dec(v___x_2713_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2703_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___y_2592_ = v___y_2704_;
v___y_2593_ = v___y_2705_;
v___y_2594_ = v___y_2706_;
v___y_2595_ = v___y_2710_;
v___y_2596_ = v___y_2711_;
v___y_2597_ = v___y_2712_;
goto v___jp_2591_;
}
}
v___jp_2758_:
{
lean_object* v___x_2770_; 
v___x_2770_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v_msg_2767_, v___y_2768_, v___y_2769_);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_dec_ref_known(v___x_2770_, 1);
v___y_2703_ = v___y_2759_;
v___y_2704_ = v___y_2761_;
v___y_2705_ = v___y_2760_;
v___y_2706_ = v___y_2762_;
v___y_2707_ = v___y_2763_;
v___y_2708_ = v___y_2764_;
v___y_2709_ = v___y_2765_;
v___y_2710_ = v___y_2766_;
v___y_2711_ = v___y_2768_;
v___y_2712_ = v___y_2769_;
goto v___jp_2702_;
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2778_; 
lean_dec(v___y_2766_);
lean_dec(v___y_2764_);
lean_dec_ref(v___y_2763_);
lean_dec(v___y_2762_);
lean_dec(v___y_2761_);
lean_dec(v___y_2760_);
lean_dec(v___y_2759_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v_a_2771_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2773_ = v___x_2770_;
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2770_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2776_; 
if (v_isShared_2774_ == 0)
{
v___x_2776_ = v___x_2773_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v_a_2771_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
}
v___jp_2779_:
{
if (lean_obj_tag(v___y_2784_) == 1)
{
lean_object* v_val_2787_; lean_object* v___x_2788_; 
v_val_2787_ = lean_ctor_get(v___y_2784_, 0);
lean_inc(v_val_2787_);
v___x_2788_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2(v_val_2787_, v___x_2515_, v___y_2785_, v___y_2786_);
if (lean_obj_tag(v___x_2788_) == 0)
{
lean_object* v___x_2789_; lean_object* v_a_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; 
lean_dec_ref_known(v___x_2788_, 1);
v___x_2789_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3(v___y_2785_, v___y_2786_);
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc(v_a_2790_);
lean_dec_ref(v___x_2789_);
v___x_2791_ = l_Lean_Linter_linter_deprecated;
v___x_2792_ = l_Lean_Linter_getLinterValue(v___x_2791_, v_a_2790_);
lean_dec(v_a_2790_);
if (v___x_2792_ == 0)
{
lean_dec(v___y_2783_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___y_2592_ = v___y_2781_;
v___y_2593_ = v___y_2780_;
v___y_2594_ = v___y_2782_;
v___y_2595_ = v___y_2784_;
v___y_2596_ = v___y_2785_;
v___y_2597_ = v___y_2786_;
goto v___jp_2591_;
}
else
{
lean_object* v___x_2793_; lean_object* v_env_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; uint8_t v___x_2797_; 
lean_inc(v_val_2787_);
v___x_2793_ = lean_st_ref_get(v___y_2786_);
v_env_2794_ = lean_ctor_get(v___x_2793_, 0);
lean_inc_ref(v_env_2794_);
lean_dec(v___x_2793_);
v___x_2795_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2785_);
v___x_2796_ = l_Lean_Linter_linter_deprecated_deprecatedTarget;
v___x_2797_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v___x_2795_, v___x_2796_);
lean_dec_ref(v___x_2795_);
if (v___x_2797_ == 0)
{
lean_dec_ref(v___x_2517_);
v___y_2703_ = v_val_2787_;
v___y_2704_ = v___y_2781_;
v___y_2705_ = v___y_2780_;
v___y_2706_ = v___y_2782_;
v___y_2707_ = v_env_2794_;
v___y_2708_ = v___y_2783_;
v___y_2709_ = v___x_2792_;
v___y_2710_ = v___y_2784_;
v___y_2711_ = v___y_2785_;
v___y_2712_ = v___y_2786_;
goto v___jp_2702_;
}
else
{
lean_object* v___x_2798_; 
lean_inc(v_val_2787_);
lean_inc_ref(v_env_2794_);
v___x_2798_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v___x_2517_, v_a_2518_, v___x_2515_, v_env_2794_, v_val_2787_);
if (lean_obj_tag(v___x_2798_) == 1)
{
lean_object* v_val_2799_; lean_object* v_name_2800_; lean_object* v_newName_x3f_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v_val_2799_ = lean_ctor_get(v___x_2798_, 0);
lean_inc(v_val_2799_);
lean_dec_ref_known(v___x_2798_, 1);
v_name_2800_ = lean_ctor_get(v___x_2796_, 0);
v_newName_x3f_2801_ = lean_ctor_get(v_val_2799_, 0);
lean_inc(v_newName_x3f_2801_);
lean_dec(v_val_2799_);
v___x_2802_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
lean_inc(v_name_2800_);
v___x_2803_ = l_Lean_MessageData_ofName(v_name_2800_);
v___x_2804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2802_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
v___x_2805_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2804_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
v___x_2807_ = l_Lean_MessageData_note(v___x_2806_);
if (lean_obj_tag(v_newName_x3f_2801_) == 0)
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2808_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
lean_inc(v_val_2787_);
v___x_2809_ = l_Lean_MessageData_ofConstName(v_val_2787_, v___x_2797_);
v___x_2810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2808_);
lean_ctor_set(v___x_2810_, 1, v___x_2809_);
v___x_2811_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2810_);
lean_ctor_set(v___x_2812_, 1, v___x_2811_);
lean_inc(v_declName_2519_);
v___x_2813_ = l_Lean_MessageData_ofConstName(v_declName_2519_, v___x_2797_);
v___x_2814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2812_);
lean_ctor_set(v___x_2814_, 1, v___x_2813_);
v___x_2815_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2814_);
lean_ctor_set(v___x_2816_, 1, v___x_2815_);
v___x_2817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
lean_ctor_set(v___x_2817_, 1, v___x_2807_);
v___x_2818_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2817_, v___y_2785_, v___y_2786_);
if (lean_obj_tag(v___x_2818_) == 0)
{
lean_dec_ref_known(v___x_2818_, 1);
v___y_2703_ = v_val_2787_;
v___y_2704_ = v___y_2781_;
v___y_2705_ = v___y_2780_;
v___y_2706_ = v___y_2782_;
v___y_2707_ = v_env_2794_;
v___y_2708_ = v___y_2783_;
v___y_2709_ = v___x_2792_;
v___y_2710_ = v___y_2784_;
v___y_2711_ = v___y_2785_;
v___y_2712_ = v___y_2786_;
goto v___jp_2702_;
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
lean_dec_ref(v_env_2794_);
lean_dec_ref_known(v___y_2784_, 1);
lean_dec(v_val_2787_);
lean_dec(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec(v___y_2780_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v_a_2819_ = lean_ctor_get(v___x_2818_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2818_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2818_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2818_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
else
{
lean_object* v_val_2827_; uint8_t v___x_2828_; 
v_val_2827_ = lean_ctor_get(v_newName_x3f_2801_, 0);
lean_inc(v_val_2827_);
lean_dec_ref_known(v_newName_x3f_2801_, 1);
v___x_2828_ = lean_name_eq(v_val_2827_, v_val_2787_);
if (v___x_2828_ == 0)
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2829_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
lean_inc(v_val_2787_);
v___x_2830_ = l_Lean_MessageData_ofConstName(v_val_2787_, v___x_2797_);
v___x_2831_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2829_);
lean_ctor_set(v___x_2831_, 1, v___x_2830_);
v___x_2832_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2831_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
lean_inc(v_val_2827_);
v___x_2834_ = l_Lean_MessageData_ofConstName(v_val_2827_, v___x_2797_);
lean_inc_ref_n(v___x_2834_, 2);
v___x_2835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2833_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
lean_inc(v_declName_2519_);
v___x_2838_ = l_Lean_MessageData_ofConstName(v_declName_2519_, v___x_2797_);
v___x_2839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2837_);
lean_ctor_set(v___x_2839_, 1, v___x_2838_);
v___x_2840_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2839_);
lean_ctor_set(v___x_2841_, 1, v___x_2840_);
v___x_2842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2841_);
lean_ctor_set(v___x_2842_, 1, v___x_2834_);
v___x_2843_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2842_);
lean_ctor_set(v___x_2844_, 1, v___x_2843_);
v___x_2845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2844_);
lean_ctor_set(v___x_2845_, 1, v___x_2807_);
if (lean_obj_tag(v___y_2780_) == 1)
{
lean_object* v_val_2846_; lean_object* v___x_2847_; 
v_val_2846_ = lean_ctor_get(v___y_2780_, 0);
v___x_2847_ = l_Lean_Syntax_getRange_x3f(v_val_2846_, v___x_2797_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_dec_ref(v___x_2834_);
lean_dec(v_val_2827_);
v___y_2759_ = v_val_2787_;
v___y_2760_ = v___y_2780_;
v___y_2761_ = v___y_2781_;
v___y_2762_ = v___y_2782_;
v___y_2763_ = v_env_2794_;
v___y_2764_ = v___y_2783_;
v___y_2765_ = v___x_2792_;
v___y_2766_ = v___y_2784_;
v_msg_2767_ = v___x_2845_;
v___y_2768_ = v___y_2785_;
v___y_2769_ = v___y_2786_;
goto v___jp_2758_;
}
else
{
lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2910_; 
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2910_ == 0)
{
lean_object* v_unused_2911_; 
v_unused_2911_ = lean_ctor_get(v___x_2847_, 0);
lean_dec(v_unused_2911_);
v___x_2849_ = v___x_2847_;
v_isShared_2850_ = v_isSharedCheck_2910_;
goto v_resetjp_2848_;
}
else
{
lean_dec(v___x_2847_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2910_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
uint8_t v___x_2851_; uint8_t v___x_2852_; uint8_t v___x_2853_; lean_object* v___x_2854_; uint64_t v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; 
v___x_2851_ = 1;
v___x_2852_ = 0;
v___x_2853_ = 2;
v___x_2854_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_2854_, 0, v___x_2828_);
lean_ctor_set_uint8(v___x_2854_, 1, v___x_2828_);
lean_ctor_set_uint8(v___x_2854_, 2, v___x_2828_);
lean_ctor_set_uint8(v___x_2854_, 3, v___x_2828_);
lean_ctor_set_uint8(v___x_2854_, 4, v___x_2828_);
lean_ctor_set_uint8(v___x_2854_, 5, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 6, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 7, v___x_2828_);
lean_ctor_set_uint8(v___x_2854_, 8, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 9, v___x_2851_);
lean_ctor_set_uint8(v___x_2854_, 10, v___x_2852_);
lean_ctor_set_uint8(v___x_2854_, 11, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 12, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 13, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 14, v___x_2853_);
lean_ctor_set_uint8(v___x_2854_, 15, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 16, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 17, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 18, v___x_2797_);
lean_ctor_set_uint8(v___x_2854_, 19, v___x_2828_);
v___x_2855_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2854_);
v___x_2856_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2856_, 0, v___x_2854_);
lean_ctor_set_uint64(v___x_2856_, sizeof(void*)*1, v___x_2855_);
v___x_2857_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_2858_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2859_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2860_ = lean_box(0);
lean_inc_n(v___x_2516_, 2);
v___x_2861_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2861_, 0, v___x_2856_);
lean_ctor_set(v___x_2861_, 1, v___x_2516_);
lean_ctor_set(v___x_2861_, 2, v___x_2858_);
lean_ctor_set(v___x_2861_, 3, v___x_2859_);
lean_ctor_set(v___x_2861_, 4, v___x_2860_);
lean_ctor_set(v___x_2861_, 5, v___x_2653_);
lean_ctor_set(v___x_2861_, 6, v___x_2860_);
lean_ctor_set_uint8(v___x_2861_, sizeof(void*)*7, v___x_2515_);
lean_ctor_set_uint8(v___x_2861_, sizeof(void*)*7 + 1, v___x_2515_);
lean_ctor_set_uint8(v___x_2861_, sizeof(void*)*7 + 2, v___x_2515_);
lean_ctor_set_uint8(v___x_2861_, sizeof(void*)*7 + 3, v___x_2797_);
v___x_2862_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2863_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2864_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2865_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2865_, 0, v___x_2862_);
lean_ctor_set(v___x_2865_, 1, v___x_2863_);
lean_ctor_set(v___x_2865_, 2, v___x_2516_);
lean_ctor_set(v___x_2865_, 3, v___x_2857_);
lean_ctor_set(v___x_2865_, 4, v___x_2864_);
v___x_2866_ = lean_st_mk_ref(v___x_2865_);
v___x_2867_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(v_val_2827_, v___x_2515_, v___x_2861_, v___x_2866_, v___y_2785_, v___y_2786_);
lean_dec_ref_known(v___x_2861_, 7);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_object* v_a_2868_; lean_object* v___x_2869_; 
v_a_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2867_, 1);
v___x_2869_ = lean_st_ref_get(v___x_2866_);
lean_dec(v___x_2866_);
lean_dec(v___x_2869_);
if (lean_obj_tag(v_a_2868_) == 1)
{
lean_object* v_val_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2901_; 
v_val_2870_ = lean_ctor_get(v_a_2868_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v_a_2868_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2872_ = v_a_2868_;
v_isShared_2873_ = v_isSharedCheck_2901_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_val_2870_);
lean_dec(v_a_2868_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2901_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2880_; 
v___x_2874_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
lean_ctor_set(v___x_2875_, 1, v___x_2834_);
v___x_2876_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2875_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
v___x_2878_ = l_Lean_Name_toString(v_val_2870_, v___x_2797_);
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 0, v___x_2878_);
v___x_2880_ = v___x_2849_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v___x_2878_);
v___x_2880_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2881_; uint8_t v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2887_; 
v___x_2881_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2880_);
lean_ctor_set(v___x_2881_, 1, v___x_2860_);
lean_ctor_set(v___x_2881_, 2, v___x_2860_);
lean_ctor_set(v___x_2881_, 3, v___x_2860_);
lean_ctor_set(v___x_2881_, 4, v___x_2860_);
lean_ctor_set(v___x_2881_, 5, v___x_2860_);
v___x_2882_ = 0;
v___x_2883_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2883_, 0, v___x_2881_);
lean_ctor_set(v___x_2883_, 1, v___x_2860_);
lean_ctor_set(v___x_2883_, 2, v___x_2860_);
lean_ctor_set_uint8(v___x_2883_, sizeof(void*)*3, v___x_2882_);
v___x_2884_ = lean_mk_empty_array_with_capacity(v___x_2654_);
v___x_2885_ = lean_array_push(v___x_2884_, v___x_2883_);
lean_inc(v_val_2846_);
if (v_isShared_2873_ == 0)
{
lean_ctor_set(v___x_2872_, 0, v_val_2846_);
v___x_2887_ = v___x_2872_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_val_2846_);
v___x_2887_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Lean_MessageData_hint(v___x_2877_, v___x_2885_, v___x_2887_, v___x_2860_, v___x_2515_, v___y_2785_, v___y_2786_);
lean_dec_ref(v___x_2885_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; lean_object* v___x_2890_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2888_, 1);
v___x_2890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2845_);
lean_ctor_set(v___x_2890_, 1, v_a_2889_);
v___y_2759_ = v_val_2787_;
v___y_2760_ = v___y_2780_;
v___y_2761_ = v___y_2781_;
v___y_2762_ = v___y_2782_;
v___y_2763_ = v_env_2794_;
v___y_2764_ = v___y_2783_;
v___y_2765_ = v___x_2792_;
v___y_2766_ = v___y_2784_;
v_msg_2767_ = v___x_2890_;
v___y_2768_ = v___y_2785_;
v___y_2769_ = v___y_2786_;
goto v___jp_2758_;
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
lean_dec_ref_known(v___y_2780_, 1);
lean_dec_ref_known(v___x_2845_, 2);
lean_dec_ref(v_env_2794_);
lean_dec(v_val_2787_);
lean_dec_ref_known(v___y_2784_, 1);
lean_dec(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v_a_2891_ = lean_ctor_get(v___x_2888_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2888_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2888_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2868_);
lean_del_object(v___x_2849_);
lean_dec_ref(v___x_2834_);
v___y_2759_ = v_val_2787_;
v___y_2760_ = v___y_2780_;
v___y_2761_ = v___y_2781_;
v___y_2762_ = v___y_2782_;
v___y_2763_ = v_env_2794_;
v___y_2764_ = v___y_2783_;
v___y_2765_ = v___x_2792_;
v___y_2766_ = v___y_2784_;
v_msg_2767_ = v___x_2845_;
v___y_2768_ = v___y_2785_;
v___y_2769_ = v___y_2786_;
goto v___jp_2758_;
}
}
else
{
lean_object* v_a_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2909_; 
lean_dec(v___x_2866_);
lean_del_object(v___x_2849_);
lean_dec_ref_known(v___y_2780_, 1);
lean_dec_ref_known(v___x_2845_, 2);
lean_dec_ref(v___x_2834_);
lean_dec_ref(v_env_2794_);
lean_dec(v_val_2787_);
lean_dec_ref_known(v___y_2784_, 1);
lean_dec(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v_a_2902_ = lean_ctor_get(v___x_2867_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2904_ = v___x_2867_;
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_a_2902_);
lean_dec(v___x_2867_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2907_; 
if (v_isShared_2905_ == 0)
{
v___x_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v_a_2902_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2834_);
lean_dec(v_val_2827_);
v___y_2759_ = v_val_2787_;
v___y_2760_ = v___y_2780_;
v___y_2761_ = v___y_2781_;
v___y_2762_ = v___y_2782_;
v___y_2763_ = v_env_2794_;
v___y_2764_ = v___y_2783_;
v___y_2765_ = v___x_2792_;
v___y_2766_ = v___y_2784_;
v_msg_2767_ = v___x_2845_;
v___y_2768_ = v___y_2785_;
v___y_2769_ = v___y_2786_;
goto v___jp_2758_;
}
}
else
{
lean_dec(v_val_2827_);
lean_dec_ref(v___x_2807_);
v___y_2703_ = v_val_2787_;
v___y_2704_ = v___y_2781_;
v___y_2705_ = v___y_2780_;
v___y_2706_ = v___y_2782_;
v___y_2707_ = v_env_2794_;
v___y_2708_ = v___y_2783_;
v___y_2709_ = v___x_2792_;
v___y_2710_ = v___y_2784_;
v___y_2711_ = v___y_2785_;
v___y_2712_ = v___y_2786_;
goto v___jp_2702_;
}
}
}
else
{
lean_dec(v___x_2798_);
v___y_2703_ = v_val_2787_;
v___y_2704_ = v___y_2781_;
v___y_2705_ = v___y_2780_;
v___y_2706_ = v___y_2782_;
v___y_2707_ = v_env_2794_;
v___y_2708_ = v___y_2783_;
v___y_2709_ = v___x_2792_;
v___y_2710_ = v___y_2784_;
v___y_2711_ = v___y_2785_;
v___y_2712_ = v___y_2786_;
goto v___jp_2702_;
}
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec_ref_known(v___y_2784_, 1);
lean_dec(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec(v___y_2780_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v_a_2912_ = lean_ctor_get(v___x_2788_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2788_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2788_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_dec(v___y_2783_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___y_2592_ = v___y_2781_;
v___y_2593_ = v___y_2780_;
v___y_2594_ = v___y_2782_;
v___y_2595_ = v___y_2784_;
v___y_2596_ = v___y_2785_;
v___y_2597_ = v___y_2786_;
goto v___jp_2591_;
}
}
v___jp_2920_:
{
lean_object* v___x_2928_; uint8_t v___x_2929_; 
lean_inc(v_declName_2519_);
v___x_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2928_, 0, v_declName_2519_);
v___x_2929_ = l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__7(v_a_2927_, v___x_2928_);
lean_dec_ref_known(v___x_2928_, 1);
if (v___x_2929_ == 0)
{
v___y_2780_ = v___y_2922_;
v___y_2781_ = v___y_2923_;
v___y_2782_ = v___y_2924_;
v___y_2783_ = v___y_2926_;
v___y_2784_ = v_a_2927_;
v___y_2785_ = v___y_2925_;
v___y_2786_ = v___y_2921_;
goto v___jp_2779_;
}
else
{
lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
lean_dec(v_a_2927_);
lean_dec(v___y_2926_);
lean_dec(v___y_2924_);
lean_dec(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec(v_stx_2520_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___x_2930_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2931_ = l_Lean_MessageData_ofConstName(v_declName_2519_, v___x_2929_);
v___x_2932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2930_);
lean_ctor_set(v___x_2932_, 1, v___x_2931_);
v___x_2933_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__63_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__63_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__63_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2932_);
lean_ctor_set(v___x_2934_, 1, v___x_2933_);
v___x_2935_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_2934_, v___y_2925_, v___y_2921_);
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2935_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2935_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
v___jp_2944_:
{
if (lean_obj_tag(v___y_2946_) == 0)
{
lean_object* v___x_2951_; 
v___x_2951_ = lean_box(0);
v___y_2921_ = v___y_2950_;
v___y_2922_ = v___y_2946_;
v___y_2923_ = v___y_2945_;
v___y_2924_ = v_since_x3f_2948_;
v___y_2925_ = v___y_2949_;
v___y_2926_ = v___y_2947_;
v_a_2927_ = v___x_2951_;
goto v___jp_2920_;
}
else
{
lean_object* v_val_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v_val_2952_ = lean_ctor_get(v___y_2946_, 0);
v___x_2953_ = lean_box(0);
lean_inc(v_val_2952_);
v___x_2954_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_val_2952_, v___x_2953_, v___y_2949_, v___y_2950_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2956_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
v___x_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_a_2955_);
v___y_2921_ = v___y_2950_;
v___y_2922_ = v___y_2946_;
v___y_2923_ = v___y_2945_;
v___y_2924_ = v_since_x3f_2948_;
v___y_2925_ = v___y_2949_;
v___y_2926_ = v___y_2947_;
v_a_2927_ = v___x_2956_;
goto v___jp_2920_;
}
else
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2964_; 
lean_dec_ref_known(v___y_2946_, 1);
lean_dec(v_since_x3f_2948_);
lean_dec(v___y_2947_);
lean_dec(v___y_2945_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v_a_2957_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2959_ = v___x_2954_;
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2954_);
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
v___jp_2965_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; uint8_t v___x_2974_; 
v___x_2972_ = lean_unsigned_to_nat(4u);
v___x_2973_ = l_Lean_Syntax_getArg(v_stx_2520_, v___x_2972_);
v___x_2974_ = l_Lean_Syntax_isNone(v___x_2973_);
if (v___x_2974_ == 0)
{
lean_object* v___x_2975_; uint8_t v___x_2976_; 
v___x_2975_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_2973_);
v___x_2976_ = l_Lean_Syntax_matchesNull(v___x_2973_, v___x_2975_);
if (v___x_2976_ == 0)
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
lean_dec(v___x_2973_);
lean_dec(v_typeChanged_x3f_2969_);
lean_dec(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___x_2977_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2978_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_2977_, v___y_2970_, v___y_2971_);
return v___x_2978_;
}
else
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = l_Lean_Syntax_getArg(v___x_2973_, v___y_2968_);
lean_dec(v___x_2973_);
v___x_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
v___y_2945_ = v___y_2967_;
v___y_2946_ = v___y_2966_;
v___y_2947_ = v_typeChanged_x3f_2969_;
v_since_x3f_2948_ = v___x_2980_;
v___y_2949_ = v___y_2970_;
v___y_2950_ = v___y_2971_;
goto v___jp_2944_;
}
}
else
{
lean_object* v___x_2981_; 
lean_dec(v___x_2973_);
v___x_2981_ = lean_box(0);
v___y_2945_ = v___y_2967_;
v___y_2946_ = v___y_2966_;
v___y_2947_ = v_typeChanged_x3f_2969_;
v_since_x3f_2948_ = v___x_2981_;
v___y_2949_ = v___y_2970_;
v___y_2950_ = v___y_2971_;
goto v___jp_2944_;
}
}
v___jp_2982_:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2987_ = lean_unsigned_to_nat(3u);
v___x_2988_ = l_Lean_Syntax_getArg(v_stx_2520_, v___x_2987_);
v___x_2989_ = l_Lean_Syntax_isNone(v___x_2988_);
if (v___x_2989_ == 0)
{
uint8_t v___x_2990_; 
lean_inc(v___x_2988_);
v___x_2990_ = l_Lean_Syntax_matchesNull(v___x_2988_, v___x_2654_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
lean_dec(v___x_2988_);
lean_dec(v_text_x3f_2984_);
lean_dec(v___y_2983_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___x_2991_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2992_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_2991_, v___y_2985_, v___y_2986_);
return v___x_2992_;
}
else
{
lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2993_ = l_Lean_Syntax_getArg(v___x_2988_, v___x_2653_);
lean_dec(v___x_2988_);
v___x_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2993_);
v___y_2966_ = v___y_2983_;
v___y_2967_ = v_text_x3f_2984_;
v___y_2968_ = v___x_2987_;
v_typeChanged_x3f_2969_ = v___x_2994_;
v___y_2970_ = v___y_2985_;
v___y_2971_ = v___y_2986_;
goto v___jp_2965_;
}
}
else
{
lean_object* v___x_2995_; 
lean_dec(v___x_2988_);
v___x_2995_ = lean_box(0);
v___y_2966_ = v___y_2983_;
v___y_2967_ = v_text_x3f_2984_;
v___y_2968_ = v___x_2987_;
v_typeChanged_x3f_2969_ = v___x_2995_;
v___y_2970_ = v___y_2985_;
v___y_2971_ = v___y_2986_;
goto v___jp_2965_;
}
}
v___jp_2996_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; uint8_t v___x_3002_; 
v___x_3000_ = lean_unsigned_to_nat(2u);
v___x_3001_ = l_Lean_Syntax_getArg(v_stx_2520_, v___x_3000_);
v___x_3002_ = l_Lean_Syntax_isNone(v___x_3001_);
if (v___x_3002_ == 0)
{
uint8_t v___x_3003_; 
lean_inc(v___x_3001_);
v___x_3003_ = l_Lean_Syntax_matchesNull(v___x_3001_, v___x_2654_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3004_; lean_object* v___x_3005_; 
lean_dec(v___x_3001_);
lean_dec(v_id_x3f_2997_);
lean_dec(v_stx_2520_);
lean_dec(v_declName_2519_);
lean_dec_ref(v___x_2517_);
lean_dec(v___x_2516_);
lean_dec_ref(v___f_2514_);
v___x_3004_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3005_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_3004_, v___y_2998_, v___y_2999_);
return v___x_3005_;
}
else
{
lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3006_ = l_Lean_Syntax_getArg(v___x_3001_, v___x_2653_);
lean_dec(v___x_3001_);
v___x_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
v___y_2983_ = v_id_x3f_2997_;
v_text_x3f_2984_ = v___x_3007_;
v___y_2985_ = v___y_2998_;
v___y_2986_ = v___y_2999_;
goto v___jp_2982_;
}
}
else
{
lean_object* v___x_3008_; 
lean_dec(v___x_3001_);
v___x_3008_ = lean_box(0);
v___y_2983_ = v_id_x3f_2997_;
v_text_x3f_2984_ = v___x_3008_;
v___y_2985_ = v___y_2998_;
v___y_2986_ = v___y_2999_;
goto v___jp_2982_;
}
}
}
v___jp_2524_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2528_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2528_, 0, v___y_2527_);
lean_ctor_set(v___x_2528_, 1, v___y_2526_);
lean_ctor_set(v___x_2528_, 2, v___y_2525_);
v___x_2529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2528_);
return v___x_2529_;
}
v___jp_2530_:
{
if (lean_obj_tag(v___y_2531_) == 0)
{
lean_object* v___x_2536_; 
v___x_2536_ = l_Lean_Linter_mkSinceHint(v_stx_2520_, v___y_2534_, v___y_2535_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v___x_2538_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2538_);
lean_ctor_set(v___x_2539_, 1, v_a_2537_);
v___x_2540_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2539_, v___y_2534_, v___y_2535_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_dec_ref_known(v___x_2540_, 1);
v___y_2525_ = v___y_2531_;
v___y_2526_ = v___y_2532_;
v___y_2527_ = v___y_2533_;
goto v___jp_2524_;
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_dec(v___y_2533_);
lean_dec(v___y_2532_);
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2540_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2540_);
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
else
{
lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
lean_dec(v___y_2533_);
lean_dec(v___y_2532_);
v_a_2549_ = lean_ctor_get(v___x_2536_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___x_2536_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___x_2536_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2549_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
}
else
{
lean_dec(v_stx_2520_);
v___y_2525_ = v___y_2531_;
v___y_2526_ = v___y_2532_;
v___y_2527_ = v___y_2533_;
goto v___jp_2524_;
}
}
v___jp_2557_:
{
if (lean_obj_tag(v___y_2559_) == 0)
{
if (lean_obj_tag(v___y_2560_) == 0)
{
lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2564_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2565_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2564_, v___y_2561_, v___y_2558_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_dec_ref_known(v___x_2565_, 1);
v___y_2531_ = v___y_2563_;
v___y_2532_ = v___y_2560_;
v___y_2533_ = v___y_2562_;
v___y_2534_ = v___y_2561_;
v___y_2535_ = v___y_2558_;
goto v___jp_2530_;
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
lean_dec(v___y_2563_);
lean_dec(v___y_2562_);
lean_dec(v_stx_2520_);
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2565_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2565_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
else
{
v___y_2531_ = v___y_2563_;
v___y_2532_ = v___y_2560_;
v___y_2533_ = v___y_2562_;
v___y_2534_ = v___y_2561_;
v___y_2535_ = v___y_2558_;
goto v___jp_2530_;
}
}
else
{
lean_dec_ref_known(v___y_2559_, 1);
v___y_2531_ = v___y_2563_;
v___y_2532_ = v___y_2560_;
v___y_2533_ = v___y_2562_;
v___y_2534_ = v___y_2561_;
v___y_2535_ = v___y_2558_;
goto v___jp_2530_;
}
}
v___jp_2574_:
{
if (lean_obj_tag(v___y_2577_) == 0)
{
lean_object* v___x_2581_; 
v___x_2581_ = lean_box(0);
v___y_2558_ = v___y_2575_;
v___y_2559_ = v___y_2576_;
v___y_2560_ = v___y_2580_;
v___y_2561_ = v___y_2578_;
v___y_2562_ = v___y_2579_;
v___y_2563_ = v___x_2581_;
goto v___jp_2557_;
}
else
{
lean_object* v_val_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2590_; 
v_val_2582_ = lean_ctor_get(v___y_2577_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___y_2577_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2584_ = v___y_2577_;
v_isShared_2585_ = v_isSharedCheck_2590_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_val_2582_);
lean_dec(v___y_2577_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2590_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2586_; lean_object* v___x_2588_; 
v___x_2586_ = l_Lean_TSyntax_getString(v_val_2582_);
lean_dec(v_val_2582_);
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 0, v___x_2586_);
v___x_2588_ = v___x_2584_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2586_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
v___y_2558_ = v___y_2575_;
v___y_2559_ = v___y_2576_;
v___y_2560_ = v___y_2580_;
v___y_2561_ = v___y_2578_;
v___y_2562_ = v___y_2579_;
v___y_2563_ = v___x_2588_;
goto v___jp_2557_;
}
}
}
}
v___jp_2591_:
{
if (lean_obj_tag(v___y_2592_) == 0)
{
lean_object* v___x_2598_; 
v___x_2598_ = lean_box(0);
v___y_2575_ = v___y_2597_;
v___y_2576_ = v___y_2593_;
v___y_2577_ = v___y_2594_;
v___y_2578_ = v___y_2596_;
v___y_2579_ = v___y_2595_;
v___y_2580_ = v___x_2598_;
goto v___jp_2574_;
}
else
{
lean_object* v_val_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2607_; 
v_val_2599_ = lean_ctor_get(v___y_2592_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___y_2592_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2601_ = v___y_2592_;
v_isShared_2602_ = v_isSharedCheck_2607_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_val_2599_);
lean_dec(v___y_2592_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2607_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2603_; lean_object* v___x_2605_; 
v___x_2603_ = l_Lean_TSyntax_getString(v_val_2599_);
lean_dec(v_val_2599_);
if (v_isShared_2602_ == 0)
{
lean_ctor_set(v___x_2601_, 0, v___x_2603_);
v___x_2605_ = v___x_2601_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v___x_2603_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
v___y_2575_ = v___y_2597_;
v___y_2576_ = v___y_2593_;
v___y_2577_ = v___y_2594_;
v___y_2578_ = v___y_2596_;
v___y_2579_ = v___y_2595_;
v___y_2580_ = v___x_2605_;
goto v___jp_2574_;
}
}
}
}
v___jp_2608_:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2618_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2619_ = l_Lean_ConstantInfo_type(v___y_2613_);
lean_dec_ref(v___y_2613_);
v___x_2620_ = l_Lean_indentExpr(v___x_2619_);
v___x_2621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2618_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2621_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
v___x_2624_ = l_Lean_ConstantInfo_type(v___y_2612_);
lean_dec_ref(v___y_2612_);
v___x_2625_ = l_Lean_indentExpr(v___x_2624_);
v___x_2626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2623_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v___x_2627_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2626_);
lean_ctor_set(v___x_2628_, 1, v___x_2627_);
v___x_2629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2628_);
lean_ctor_set(v___x_2629_, 1, v_hint_2615_);
v___x_2630_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2629_, v___y_2616_, v___y_2617_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_dec_ref_known(v___x_2630_, 1);
v___y_2592_ = v___y_2610_;
v___y_2593_ = v___y_2609_;
v___y_2594_ = v___y_2611_;
v___y_2595_ = v___y_2614_;
v___y_2596_ = v___y_2616_;
v___y_2597_ = v___y_2617_;
goto v___jp_2591_;
}
else
{
lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2638_; 
lean_dec(v___y_2614_);
lean_dec(v___y_2611_);
lean_dec(v___y_2610_);
lean_dec(v___y_2609_);
lean_dec(v_stx_2520_);
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2633_ = v___x_2630_;
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v___x_2630_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2636_; 
if (v_isShared_2634_ == 0)
{
v___x_2636_ = v___x_2633_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v_a_2631_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
return v___x_2636_;
}
}
}
}
v___jp_2639_:
{
lean_object* v___x_2648_; 
v___x_2648_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___y_2609_ = v___y_2642_;
v___y_2610_ = v___y_2641_;
v___y_2611_ = v___y_2643_;
v___y_2612_ = v___y_2644_;
v___y_2613_ = v___y_2645_;
v___y_2614_ = v___y_2647_;
v_hint_2615_ = v___x_2648_;
v___y_2616_ = v___y_2646_;
v___y_2617_ = v___y_2640_;
goto v___jp_2608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v___x_3017_, lean_object* v___x_3018_, lean_object* v___f_3019_, lean_object* v___x_3020_, lean_object* v___x_3021_, lean_object* v___x_3022_, lean_object* v_a_3023_, lean_object* v_declName_3024_, lean_object* v_stx_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_){
_start:
{
uint8_t v___x_50675__boxed_3029_; lean_object* v_res_3030_; 
v___x_50675__boxed_3029_ = lean_unbox(v___x_3020_);
v_res_3030_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(v___x_3017_, v___x_3018_, v___f_3019_, v___x_50675__boxed_3029_, v___x_3021_, v___x_3022_, v_a_3023_, v_declName_3024_, v_stx_3025_, v___y_3026_, v___y_3027_);
lean_dec(v___y_3027_);
lean_dec_ref(v___y_3026_);
lean_dec_ref(v_a_3023_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_3050_; lean_object* v___f_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; uint8_t v___x_3056_; lean_object* v___f_3057_; lean_object* v___x_3058_; 
v___f_3050_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___f_3051_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3052_ = lean_box(1);
v___x_3053_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3054_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_3055_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3056_ = 0;
v___f_3057_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3058_ = l_Lean_registerParametricAttributeExt___redArg(v___x_3055_, v___x_3056_, v___f_3057_, v___x_3056_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___f_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc_n(v_a_3059_, 2);
lean_dec_ref_known(v___x_3058_, 1);
v___x_3060_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_3061_ = lean_box(v___x_3056_);
v___f_3062_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed), 12, 7);
lean_closure_set(v___f_3062_, 0, v___x_3054_);
lean_closure_set(v___f_3062_, 1, v___x_3060_);
lean_closure_set(v___f_3062_, 2, v___f_3050_);
lean_closure_set(v___f_3062_, 3, v___x_3061_);
lean_closure_set(v___f_3062_, 4, v___x_3052_);
lean_closure_set(v___f_3062_, 5, v___x_3053_);
lean_closure_set(v___f_3062_, 6, v_a_3059_);
v___x_3063_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3064_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3064_, 0, v___x_3063_);
lean_ctor_set(v___x_3064_, 1, v___f_3062_);
lean_ctor_set(v___x_3064_, 2, v___f_3051_);
lean_ctor_set(v___x_3064_, 3, v___f_3057_);
lean_ctor_set_uint8(v___x_3064_, sizeof(void*)*4, v___x_3056_);
v___x_3065_ = l_Lean_registerParametricAttributeForExt___redArg(v___x_3064_, v_a_3059_);
return v___x_3065_;
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
v_a_3066_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_3058_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3058_);
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
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v_a_3074_){
_start:
{
lean_object* v_res_3075_; 
v_res_3075_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_();
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_3076_, lean_object* v_msg_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v___x_3081_; 
v___x_3081_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v_msg_3077_, v___y_3078_, v___y_3079_);
return v___x_3081_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_3082_, lean_object* v_msg_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_){
_start:
{
lean_object* v_res_3087_; 
v_res_3087_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0(v_00_u03b1_3082_, v_msg_3083_, v___y_3084_, v___y_3085_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
return v_res_3087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8(lean_object* v_o_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_){
_start:
{
lean_object* v___x_3092_; 
v___x_3092_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(v_o_3088_, v___y_3090_);
return v___x_3092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___boxed(lean_object* v_o_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8(v_o_3093_, v___y_3094_, v___y_3095_);
lean_dec(v___y_3095_);
lean_dec_ref(v___y_3094_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4_spec__10(lean_object* v_00_u03b2_3098_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
return v___x_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4___redArg(){
_start:
{
lean_object* v___x_3101_; 
v___x_3101_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
return v___x_3101_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object* v___dummy_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4___redArg();
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(lean_object* v_00_u03b2_3104_){
_start:
{
lean_object* v___x_3105_; 
v___x_3105_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
return v___x_3105_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6(lean_object* v_00_u03b2_3106_, lean_object* v_m_3107_, lean_object* v_a_3108_){
_start:
{
lean_object* v___x_3109_; 
v___x_3109_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(v_m_3107_, v_a_3108_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___boxed(lean_object* v_00_u03b2_3110_, lean_object* v_m_3111_, lean_object* v_a_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6(v_00_u03b2_3110_, v_m_3111_, v_a_3112_);
lean_dec(v_a_3112_);
lean_dec_ref(v_m_3111_);
return v_res_3113_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8(lean_object* v_00_u03b2_3114_, lean_object* v_x_3115_, lean_object* v_x_3116_){
_start:
{
uint8_t v___x_3117_; 
v___x_3117_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v_x_3115_, v_x_3116_);
return v___x_3117_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_3118_, lean_object* v_x_3119_, lean_object* v_x_3120_){
_start:
{
uint8_t v_res_3121_; lean_object* v_r_3122_; 
v_res_3121_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8(v_00_u03b2_3118_, v_x_3119_, v_x_3120_);
lean_dec_ref(v_x_3120_);
lean_dec_ref(v_x_3119_);
v_r_3122_ = lean_box(v_res_3121_);
return v_r_3122_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12(lean_object* v_00_u03b2_3123_, lean_object* v_a_3124_, lean_object* v_x_3125_){
_start:
{
lean_object* v___x_3126_; 
v___x_3126_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(v_a_3124_, v_x_3125_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12___boxed(lean_object* v_00_u03b2_3127_, lean_object* v_a_3128_, lean_object* v_x_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__12(v_00_u03b2_3127_, v_a_3128_, v_x_3129_);
lean_dec(v_x_3129_);
lean_dec(v_a_3128_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19(lean_object* v_00_u03b4_3131_, lean_object* v_t_3132_, lean_object* v_k_3133_){
_start:
{
lean_object* v___x_3134_; 
v___x_3134_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___redArg(v_t_3132_, v_k_3133_);
return v___x_3134_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19___boxed(lean_object* v_00_u03b4_3135_, lean_object* v_t_3136_, lean_object* v_k_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__19(v_00_u03b4_3135_, v_t_3136_, v_k_3137_);
lean_dec(v_k_3137_);
lean_dec(v_t_3136_);
return v_res_3138_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14(lean_object* v_00_u03b2_3139_, lean_object* v_x_3140_, size_t v_x_3141_, lean_object* v_x_3142_){
_start:
{
uint8_t v___x_3143_; 
v___x_3143_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___redArg(v_x_3140_, v_x_3141_, v_x_3142_);
return v___x_3143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14___boxed(lean_object* v_00_u03b2_3144_, lean_object* v_x_3145_, lean_object* v_x_3146_, lean_object* v_x_3147_){
_start:
{
size_t v_x_51951__boxed_3148_; uint8_t v_res_3149_; lean_object* v_r_3150_; 
v_x_51951__boxed_3148_ = lean_unbox_usize(v_x_3146_);
lean_dec(v_x_3146_);
v_res_3149_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14(v_00_u03b2_3144_, v_x_3145_, v_x_51951__boxed_3148_, v_x_3147_);
lean_dec_ref(v_x_3147_);
lean_dec_ref(v_x_3145_);
v_r_3150_ = lean_box(v_res_3149_);
return v_r_3150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22(lean_object* v_givenName_3151_, lean_object* v_auxDeclToFullName_3152_, lean_object* v___x_3153_, lean_object* v_givenNameView_3154_, lean_object* v_as_3155_, lean_object* v_i_3156_, lean_object* v_a_3157_){
_start:
{
lean_object* v___x_3158_; 
v___x_3158_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___redArg(v_givenName_3151_, v_auxDeclToFullName_3152_, v___x_3153_, v_givenNameView_3154_, v_as_3155_, v_i_3156_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22___boxed(lean_object* v_givenName_3159_, lean_object* v_auxDeclToFullName_3160_, lean_object* v___x_3161_, lean_object* v_givenNameView_3162_, lean_object* v_as_3163_, lean_object* v_i_3164_, lean_object* v_a_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__22(v_givenName_3159_, v_auxDeclToFullName_3160_, v___x_3161_, v_givenNameView_3162_, v_as_3163_, v_i_3164_, v_a_3165_);
lean_dec_ref(v_as_3163_);
lean_dec(v_auxDeclToFullName_3160_);
lean_dec(v_givenName_3159_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25(lean_object* v_localDecl_x3f_3167_, lean_object* v_givenName_3168_, lean_object* v_as_3169_, lean_object* v_i_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v___x_3172_; 
v___x_3172_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___redArg(v_localDecl_x3f_3167_, v_givenName_3168_, v_as_3169_, v_i_3170_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25___boxed(lean_object* v_localDecl_x3f_3173_, lean_object* v_givenName_3174_, lean_object* v_as_3175_, lean_object* v_i_3176_, lean_object* v_a_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__25(v_localDecl_x3f_3173_, v_givenName_3174_, v_as_3175_, v_i_3176_, v_a_3177_);
lean_dec_ref(v_as_3175_);
lean_dec(v_givenName_3174_);
lean_dec(v_localDecl_x3f_3173_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32(lean_object* v_n_u2080_3179_, lean_object* v_filter_3180_, lean_object* v_view_x3f_3181_, lean_object* v_as_3182_, lean_object* v_as_x27_3183_, lean_object* v_b_3184_, lean_object* v_a_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v___x_3191_; 
v___x_3191_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___redArg(v_n_u2080_3179_, v_filter_3180_, v_view_x3f_3181_, v_as_x27_3183_, v_b_3184_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
return v___x_3191_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32___boxed(lean_object* v_n_u2080_3192_, lean_object* v_filter_3193_, lean_object* v_view_x3f_3194_, lean_object* v_as_3195_, lean_object* v_as_x27_3196_, lean_object* v_b_3197_, lean_object* v_a_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__24_spec__32(v_n_u2080_3192_, v_filter_3193_, v_view_x3f_3194_, v_as_3195_, v_as_x27_3196_, v_b_3197_, v_a_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v_as_x27_3196_);
lean_dec(v_as_3195_);
lean_dec(v_n_u2080_3192_);
return v_res_3204_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19(lean_object* v_00_u03b2_3205_, lean_object* v_keys_3206_, lean_object* v_vals_3207_, lean_object* v_heq_3208_, lean_object* v_i_3209_, lean_object* v_k_3210_){
_start:
{
uint8_t v___x_3211_; 
v___x_3211_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___redArg(v_keys_3206_, v_i_3209_, v_k_3210_);
return v___x_3211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19___boxed(lean_object* v_00_u03b2_3212_, lean_object* v_keys_3213_, lean_object* v_vals_3214_, lean_object* v_heq_3215_, lean_object* v_i_3216_, lean_object* v_k_3217_){
_start:
{
uint8_t v_res_3218_; lean_object* v_r_3219_; 
v_res_3218_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__14_spec__19(v_00_u03b2_3212_, v_keys_3213_, v_vals_3214_, v_heq_3215_, v_i_3216_, v_k_3217_);
lean_dec_ref(v_k_3217_);
lean_dec_ref(v_vals_3214_);
lean_dec_ref(v_keys_3213_);
v_r_3219_ = lean_box(v_res_3218_);
return v_r_3219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26(lean_object* v_givenName_3220_, lean_object* v_auxDeclToFullName_3221_, lean_object* v___x_3222_, lean_object* v_givenNameView_3223_, lean_object* v_as_3224_, lean_object* v_i_3225_, lean_object* v_a_3226_){
_start:
{
lean_object* v___x_3227_; 
v___x_3227_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___redArg(v_givenName_3220_, v_auxDeclToFullName_3221_, v___x_3222_, v_givenNameView_3223_, v_as_3224_, v_i_3225_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26___boxed(lean_object* v_givenName_3228_, lean_object* v_auxDeclToFullName_3229_, lean_object* v___x_3230_, lean_object* v_givenNameView_3231_, lean_object* v_as_3232_, lean_object* v_i_3233_, lean_object* v_a_3234_){
_start:
{
lean_object* v_res_3235_; 
v_res_3235_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__20_spec__23_spec__26(v_givenName_3228_, v_auxDeclToFullName_3229_, v___x_3230_, v_givenNameView_3231_, v_as_3232_, v_i_3233_, v_a_3234_);
lean_dec_ref(v_as_3232_);
lean_dec(v_auxDeclToFullName_3229_);
lean_dec(v_givenName_3228_);
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30(lean_object* v_localDecl_x3f_3236_, lean_object* v_givenName_3237_, lean_object* v_as_3238_, lean_object* v_i_3239_, lean_object* v_a_3240_){
_start:
{
lean_object* v___x_3241_; 
v___x_3241_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___redArg(v_localDecl_x3f_3236_, v_givenName_3237_, v_as_3238_, v_i_3239_);
return v___x_3241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30___boxed(lean_object* v_localDecl_x3f_3242_, lean_object* v_givenName_3243_, lean_object* v_as_3244_, lean_object* v_i_3245_, lean_object* v_a_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__21_spec__26_spec__30(v_localDecl_x3f_3242_, v_givenName_3243_, v_as_3244_, v_i_3245_, v_a_3246_);
lean_dec_ref(v_as_3244_);
lean_dec(v_givenName_3243_);
lean_dec(v_localDecl_x3f_3242_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39(lean_object* v_opt_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_){
_start:
{
lean_object* v___x_3254_; 
v___x_3254_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___redArg(v_opt_3248_, v___y_3251_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39___boxed(lean_object* v_opt_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__39(v_opt_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
lean_dec(v___y_3259_);
lean_dec_ref(v___y_3258_);
lean_dec(v___y_3257_);
lean_dec_ref(v___y_3256_);
lean_dec_ref(v_opt_3255_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45(lean_object* v_opt_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___redArg(v_opt_3262_, v___y_3265_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45___boxed(lean_object* v_opt_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_){
_start:
{
lean_object* v_res_3275_; 
v_res_3275_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__14_spec__27_spec__36_spec__42_spec__45(v_opt_3269_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec_ref(v_opt_3269_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg___lam__0(lean_object* v_declName_3276_, lean_object* v_entry_3277_, lean_object* v_inst_3278_, lean_object* v_inst_3279_, lean_object* v_inst_3280_, lean_object* v_env_3281_){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = l_Lean_Linter_deprecatedAttr;
v___x_3283_ = l_Lean_ParametricAttribute_setParam___redArg(v___x_3282_, v_env_3281_, v_declName_3276_, v_entry_3277_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3293_; 
lean_dec_ref(v_inst_3280_);
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3286_ = v___x_3283_;
v_isShared_3287_ = v_isSharedCheck_3293_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3283_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3293_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
lean_ctor_set_tag(v___x_3286_, 3);
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3290_ = l_Lean_MessageData_ofFormat(v___x_3289_);
v___x_3291_ = l_Lean_throwError___redArg(v_inst_3278_, v_inst_3279_, v___x_3290_);
return v___x_3291_;
}
}
}
else
{
lean_object* v_a_3294_; lean_object* v___x_3295_; 
lean_dec_ref(v_inst_3279_);
lean_dec_ref(v_inst_3278_);
v_a_3294_ = lean_ctor_get(v___x_3283_, 0);
lean_inc(v_a_3294_);
lean_dec_ref_known(v___x_3283_, 1);
v___x_3295_ = l_Lean_setEnv___redArg(v_inst_3280_, v_a_3294_);
return v___x_3295_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg(lean_object* v_inst_3296_, lean_object* v_inst_3297_, lean_object* v_inst_3298_, lean_object* v_declName_3299_, lean_object* v_entry_3300_){
_start:
{
lean_object* v_toBind_3301_; lean_object* v_getEnv_3302_; lean_object* v___f_3303_; lean_object* v___x_3304_; 
v_toBind_3301_ = lean_ctor_get(v_inst_3296_, 1);
lean_inc(v_toBind_3301_);
v_getEnv_3302_ = lean_ctor_get(v_inst_3297_, 0);
lean_inc(v_getEnv_3302_);
v___f_3303_ = lean_alloc_closure((void*)(l_Lean_Linter_setDeprecated___redArg___lam__0), 6, 5);
lean_closure_set(v___f_3303_, 0, v_declName_3299_);
lean_closure_set(v___f_3303_, 1, v_entry_3300_);
lean_closure_set(v___f_3303_, 2, v_inst_3296_);
lean_closure_set(v___f_3303_, 3, v_inst_3298_);
lean_closure_set(v___f_3303_, 4, v_inst_3297_);
v___x_3304_ = lean_apply_4(v_toBind_3301_, lean_box(0), lean_box(0), v_getEnv_3302_, v___f_3303_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated(lean_object* v_m_3305_, lean_object* v_inst_3306_, lean_object* v_inst_3307_, lean_object* v_inst_3308_, lean_object* v_declName_3309_, lean_object* v_entry_3310_){
_start:
{
lean_object* v___x_3311_; 
v___x_3311_ = l_Lean_Linter_setDeprecated___redArg(v_inst_3306_, v_inst_3307_, v_inst_3308_, v_declName_3309_, v_entry_3310_);
return v___x_3311_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_isDeprecated(lean_object* v_env_3312_, lean_object* v_declName_3313_){
_start:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3314_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3315_ = l_Lean_Linter_deprecatedAttr;
v___x_3316_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3314_, v___x_3315_, v_env_3312_, v_declName_3313_);
if (lean_obj_tag(v___x_3316_) == 0)
{
uint8_t v___x_3317_; 
v___x_3317_ = 0;
return v___x_3317_;
}
else
{
uint8_t v___x_3318_; 
lean_dec_ref_known(v___x_3316_, 1);
v___x_3318_ = 1;
return v___x_3318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_isDeprecated___boxed(lean_object* v_env_3319_, lean_object* v_declName_3320_){
_start:
{
uint8_t v_res_3321_; lean_object* v_r_3322_; 
v_res_3321_ = l_Lean_Linter_isDeprecated(v_env_3319_, v_declName_3320_);
v_r_3322_ = lean_box(v_res_3321_);
return v_r_3322_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning___lam__0(lean_object* v_x_3323_){
_start:
{
lean_object* v___x_3324_; uint8_t v___x_3325_; 
v___x_3324_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3325_ = lean_name_eq(v_x_3323_, v___x_3324_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___lam__0___boxed(lean_object* v_x_3326_){
_start:
{
uint8_t v_res_3327_; lean_object* v_r_3328_; 
v_res_3327_ = l_Lean_MessageData_isDeprecationWarning___lam__0(v_x_3326_);
lean_dec(v_x_3326_);
v_r_3328_ = lean_box(v_res_3327_);
return v_r_3328_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning(lean_object* v_msg_3330_){
_start:
{
lean_object* v___f_3331_; uint8_t v___x_3332_; 
v___f_3331_ = ((lean_object*)(l_Lean_MessageData_isDeprecationWarning___closed__0));
v___x_3332_ = l_Lean_MessageData_hasTag(v___f_3331_, v_msg_3330_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___boxed(lean_object* v_msg_3333_){
_start:
{
uint8_t v_res_3334_; lean_object* v_r_3335_; 
v_res_3334_ = l_Lean_MessageData_isDeprecationWarning(v_msg_3333_);
v_r_3335_ = lean_box(v_res_3334_);
return v_r_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getDeprecatedNewName(lean_object* v_env_3336_, lean_object* v_declName_3337_){
_start:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3338_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3339_ = l_Lean_Linter_deprecatedAttr;
v___x_3340_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3338_, v___x_3339_, v_env_3336_, v_declName_3337_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v___x_3341_; 
v___x_3341_ = lean_box(0);
return v___x_3341_;
}
else
{
lean_object* v_val_3342_; lean_object* v_newName_x3f_3343_; 
v_val_3342_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_val_3342_);
lean_dec_ref_known(v___x_3340_, 1);
v_newName_x3f_3343_ = lean_ctor_get(v_val_3342_, 0);
lean_inc(v_newName_x3f_3343_);
lean_dec(v_val_3342_);
return v_newName_x3f_3343_;
}
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(lean_object* v_x_3344_, lean_object* v_x_3345_){
_start:
{
if (lean_obj_tag(v_x_3344_) == 0)
{
if (lean_obj_tag(v_x_3345_) == 0)
{
uint8_t v___x_3346_; 
v___x_3346_ = 1;
return v___x_3346_;
}
else
{
uint8_t v___x_3347_; 
v___x_3347_ = 0;
return v___x_3347_;
}
}
else
{
if (lean_obj_tag(v_x_3345_) == 0)
{
uint8_t v___x_3348_; 
v___x_3348_ = 0;
return v___x_3348_;
}
else
{
lean_object* v_head_3349_; lean_object* v_tail_3350_; lean_object* v_head_3351_; lean_object* v_tail_3352_; uint8_t v___x_3353_; 
v_head_3349_ = lean_ctor_get(v_x_3344_, 0);
v_tail_3350_ = lean_ctor_get(v_x_3344_, 1);
v_head_3351_ = lean_ctor_get(v_x_3345_, 0);
v_tail_3352_ = lean_ctor_get(v_x_3345_, 1);
v___x_3353_ = lean_string_dec_eq(v_head_3349_, v_head_3351_);
if (v___x_3353_ == 0)
{
return v___x_3353_;
}
else
{
v_x_3344_ = v_tail_3350_;
v_x_3345_ = v_tail_3352_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0___boxed(lean_object* v_x_3355_, lean_object* v_x_3356_){
_start:
{
uint8_t v_res_3357_; lean_object* v_r_3358_; 
v_res_3357_ = l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(v_x_3355_, v_x_3356_);
lean_dec(v_x_3356_);
lean_dec(v_x_3355_);
v_r_3358_ = lean_box(v_res_3357_);
return v_r_3358_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(lean_object* v_x_3359_, lean_object* v_x_3360_){
_start:
{
if (lean_obj_tag(v_x_3359_) == 0)
{
if (lean_obj_tag(v_x_3360_) == 0)
{
uint8_t v___x_3361_; 
v___x_3361_ = 1;
return v___x_3361_;
}
else
{
uint8_t v___x_3362_; 
v___x_3362_ = 0;
return v___x_3362_;
}
}
else
{
if (lean_obj_tag(v_x_3360_) == 0)
{
uint8_t v___x_3363_; 
v___x_3363_ = 0;
return v___x_3363_;
}
else
{
lean_object* v_head_3364_; lean_object* v_head_3365_; lean_object* v_tail_3366_; lean_object* v_tail_3367_; lean_object* v_fst_3368_; lean_object* v_snd_3369_; lean_object* v_fst_3370_; lean_object* v_snd_3371_; uint8_t v___x_3372_; 
v_head_3364_ = lean_ctor_get(v_x_3359_, 0);
v_head_3365_ = lean_ctor_get(v_x_3360_, 0);
v_tail_3366_ = lean_ctor_get(v_x_3359_, 1);
v_tail_3367_ = lean_ctor_get(v_x_3360_, 1);
v_fst_3368_ = lean_ctor_get(v_head_3364_, 0);
v_snd_3369_ = lean_ctor_get(v_head_3364_, 1);
v_fst_3370_ = lean_ctor_get(v_head_3365_, 0);
v_snd_3371_ = lean_ctor_get(v_head_3365_, 1);
v___x_3372_ = lean_name_eq(v_fst_3368_, v_fst_3370_);
if (v___x_3372_ == 0)
{
return v___x_3372_;
}
else
{
uint8_t v___x_3373_; 
v___x_3373_ = l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(v_snd_3369_, v_snd_3371_);
if (v___x_3373_ == 0)
{
return v___x_3373_;
}
else
{
v_x_3359_ = v_tail_3366_;
v_x_3360_ = v_tail_3367_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0___boxed(lean_object* v_x_3375_, lean_object* v_x_3376_){
_start:
{
uint8_t v_res_3377_; lean_object* v_r_3378_; 
v_res_3377_ = l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(v_x_3375_, v_x_3376_);
lean_dec(v_x_3376_);
lean_dec(v_x_3375_);
v_r_3378_ = lean_box(v_res_3377_);
return v_r_3378_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1(void){
_start:
{
lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3380_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0));
v___x_3381_ = l_Lean_stringToMessageData(v___x_3380_);
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(lean_object* v_declName_3382_, lean_object* v_newName_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_){
_start:
{
lean_object* v_ref_3392_; 
v_ref_3392_ = lean_ctor_get(v_a_3386_, 2);
if (lean_obj_tag(v_ref_3392_) == 3)
{
lean_object* v_val_3393_; uint8_t v___x_3394_; 
v_val_3393_ = lean_ctor_get(v_ref_3392_, 2);
v___x_3394_ = l_Lean_Name_hasMacroScopes(v_val_3393_);
if (v___x_3394_ == 0)
{
uint8_t v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = 1;
v___x_3396_ = l_Lean_Syntax_getRange_x3f(v_ref_3392_, v___x_3395_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_dec(v_newName_3383_);
lean_dec(v_declName_3382_);
goto v___jp_3389_;
}
else
{
lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3470_; 
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3470_ == 0)
{
lean_object* v_unused_3471_; 
v_unused_3471_ = lean_ctor_get(v___x_3396_, 0);
lean_dec(v_unused_3471_);
v___x_3398_ = v___x_3396_;
v_isShared_3399_ = v_isSharedCheck_3470_;
goto v_resetjp_3397_;
}
else
{
lean_dec(v___x_3396_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3470_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3400_; 
lean_inc(v_val_3393_);
v___x_3400_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28(v_val_3393_, v___x_3395_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_a_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; uint8_t v___x_3405_; 
v_a_3401_ = lean_ctor_get(v___x_3400_, 0);
lean_inc(v_a_3401_);
lean_dec_ref_known(v___x_3400_, 1);
v___x_3402_ = lean_box(0);
v___x_3403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3403_, 0, v_declName_3382_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
v___x_3404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
lean_ctor_set(v___x_3404_, 1, v___x_3402_);
v___x_3405_ = l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(v_a_3401_, v___x_3404_);
lean_dec_ref_known(v___x_3404_, 2);
lean_dec(v_a_3401_);
if (v___x_3405_ == 0)
{
lean_del_object(v___x_3398_);
lean_dec(v_newName_3383_);
goto v___jp_3389_;
}
else
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(v_newName_3383_, v___x_3394_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_);
if (lean_obj_tag(v___x_3406_) == 0)
{
lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3453_; 
v_a_3407_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3453_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3409_ = v___x_3406_;
v_isShared_3410_ = v_isSharedCheck_3453_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_dec(v___x_3406_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3453_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
if (lean_obj_tag(v_a_3407_) == 1)
{
lean_object* v_val_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3448_; 
lean_del_object(v___x_3409_);
v_val_3411_ = lean_ctor_get(v_a_3407_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v_a_3407_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3413_ = v_a_3407_;
v_isShared_3414_ = v_isSharedCheck_3448_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_val_3411_);
lean_dec(v_a_3407_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3448_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; uint8_t v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3426_; 
v___x_3415_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1);
v___x_3416_ = l_Lean_Name_toString(v_val_3411_, v___x_3395_);
v___x_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
v___x_3418_ = lean_box(0);
v___x_3419_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3417_);
lean_ctor_set(v___x_3419_, 1, v___x_3418_);
lean_ctor_set(v___x_3419_, 2, v___x_3418_);
lean_ctor_set(v___x_3419_, 3, v___x_3418_);
lean_ctor_set(v___x_3419_, 4, v___x_3418_);
lean_ctor_set(v___x_3419_, 5, v___x_3418_);
v___x_3420_ = 0;
v___x_3421_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3421_, 0, v___x_3419_);
lean_ctor_set(v___x_3421_, 1, v___x_3418_);
lean_ctor_set(v___x_3421_, 2, v___x_3418_);
lean_ctor_set_uint8(v___x_3421_, sizeof(void*)*3, v___x_3420_);
v___x_3422_ = lean_unsigned_to_nat(1u);
v___x_3423_ = lean_mk_empty_array_with_capacity(v___x_3422_);
v___x_3424_ = lean_array_push(v___x_3423_, v___x_3421_);
lean_inc_ref(v_ref_3392_);
if (v_isShared_3414_ == 0)
{
lean_ctor_set(v___x_3413_, 0, v_ref_3392_);
v___x_3426_ = v___x_3413_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_ref_3392_);
v___x_3426_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
lean_object* v___x_3427_; 
v___x_3427_ = l_Lean_MessageData_hint(v___x_3415_, v___x_3424_, v___x_3426_, v___x_3418_, v___x_3394_, v_a_3386_, v_a_3387_);
lean_dec_ref(v___x_3424_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3438_; 
v_a_3428_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3430_ = v___x_3427_;
v_isShared_3431_ = v_isSharedCheck_3438_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3427_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3438_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3399_ == 0)
{
lean_ctor_set(v___x_3398_, 0, v_a_3428_);
v___x_3433_ = v___x_3398_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
lean_object* v___x_3435_; 
if (v_isShared_3431_ == 0)
{
lean_ctor_set(v___x_3430_, 0, v___x_3433_);
v___x_3435_ = v___x_3430_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v___x_3433_);
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
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3446_; 
lean_del_object(v___x_3398_);
v_a_3439_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3441_ = v___x_3427_;
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v___x_3427_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3444_; 
if (v_isShared_3442_ == 0)
{
v___x_3444_ = v___x_3441_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_a_3439_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
}
}
else
{
lean_object* v___x_3449_; lean_object* v___x_3451_; 
lean_dec(v_a_3407_);
lean_del_object(v___x_3398_);
v___x_3449_ = lean_box(0);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3449_);
v___x_3451_ = v___x_3409_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3449_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
else
{
lean_object* v_a_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3461_; 
lean_del_object(v___x_3398_);
v_a_3454_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3456_ = v___x_3406_;
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_a_3454_);
lean_dec(v___x_3406_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3459_; 
if (v_isShared_3457_ == 0)
{
v___x_3459_ = v___x_3456_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_a_3454_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
return v___x_3459_;
}
}
}
}
}
else
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
lean_del_object(v___x_3398_);
lean_dec(v_newName_3383_);
lean_dec(v_declName_3382_);
v_a_3462_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3400_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3400_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
}
}
}
else
{
lean_dec(v_newName_3383_);
lean_dec(v_declName_3382_);
goto v___jp_3389_;
}
}
else
{
lean_object* v___x_3472_; lean_object* v___x_3473_; 
lean_dec(v_newName_3383_);
lean_dec(v_declName_3382_);
v___x_3472_ = lean_box(0);
v___x_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3472_);
return v___x_3473_;
}
v___jp_3389_:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3390_ = lean_box(0);
v___x_3391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3391_, 0, v___x_3390_);
return v___x_3391_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___boxed(lean_object* v_declName_3474_, lean_object* v_newName_3475_, lean_object* v_a_3476_, lean_object* v_a_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_, lean_object* v_a_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(v_declName_3474_, v_newName_3475_, v_a_3476_, v_a_3477_, v_a_3478_, v_a_3479_);
lean_dec(v_a_3479_);
lean_dec_ref(v_a_3478_);
lean_dec(v_a_3477_);
lean_dec_ref(v_a_3476_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(lean_object* v_o_3482_, lean_object* v___y_3483_){
_start:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v_env_3487_; lean_object* v___x_3488_; lean_object* v_toEnvExtension_3489_; lean_object* v_asyncMode_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; lean_object* v___x_3493_; lean_object* v_merged_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3502_; 
v___x_3485_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_3486_ = lean_st_ref_get(v___y_3483_);
v_env_3487_ = lean_ctor_get(v___x_3486_, 0);
lean_inc_ref(v_env_3487_);
lean_dec(v___x_3486_);
v___x_3488_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_3489_ = lean_ctor_get(v___x_3488_, 0);
v_asyncMode_3490_ = lean_ctor_get(v_toEnvExtension_3489_, 2);
v___x_3491_ = lean_box(0);
v___x_3492_ = 0;
v___x_3493_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3485_, v___x_3488_, v_env_3487_, v_asyncMode_3490_, v___x_3491_, v___x_3492_);
v_merged_3494_ = lean_ctor_get(v___x_3493_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3493_);
if (v_isSharedCheck_3502_ == 0)
{
lean_object* v_unused_3503_; 
v_unused_3503_ = lean_ctor_get(v___x_3493_, 1);
lean_dec(v_unused_3503_);
v___x_3496_ = v___x_3493_;
v_isShared_3497_ = v_isSharedCheck_3502_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_merged_3494_);
lean_dec(v___x_3493_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3502_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
lean_ctor_set(v___x_3496_, 1, v_merged_3494_);
lean_ctor_set(v___x_3496_, 0, v_o_3482_);
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_o_3482_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v_merged_3494_);
v___x_3499_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
lean_object* v___x_3500_; 
v___x_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3499_);
return v___x_3500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg___boxed(lean_object* v_o_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v_o_3504_, v___y_3505_);
lean_dec(v___y_3505_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3513_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3510_);
v___x_3514_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v___x_3513_, v___y_3511_);
return v___x_3514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0___boxed(lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_){
_start:
{
lean_object* v_res_3520_; 
v_res_3520_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_);
lean_dec(v___y_3518_);
lean_dec_ref(v___y_3517_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
return v_res_3520_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__1(void){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3522_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__0));
v___x_3523_ = l_Lean_stringToMessageData(v___x_3522_);
return v___x_3523_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__3(void){
_start:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__2));
v___x_3526_ = l_Lean_stringToMessageData(v___x_3525_);
return v___x_3526_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__5(void){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3528_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__4));
v___x_3529_ = l_Lean_stringToMessageData(v___x_3528_);
return v___x_3529_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__7(void){
_start:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3531_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__6));
v___x_3532_ = l_Lean_stringToMessageData(v___x_3531_);
return v___x_3532_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__9(void){
_start:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__8));
v___x_3535_ = l_Lean_stringToMessageData(v___x_3534_);
return v___x_3535_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__11(void){
_start:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3537_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__10));
v___x_3538_ = l_Lean_stringToMessageData(v___x_3537_);
return v___x_3538_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__13(void){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3540_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__12));
v___x_3541_ = l_Lean_stringToMessageData(v___x_3540_);
return v___x_3541_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__15(void){
_start:
{
lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3543_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__14));
v___x_3544_ = l_Lean_stringToMessageData(v___x_3543_);
return v___x_3544_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__17(void){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__16));
v___x_3547_ = l_Lean_stringToMessageData(v___x_3546_);
return v___x_3547_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__19(void){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__18));
v___x_3550_ = l_Lean_stringToMessageData(v___x_3549_);
return v___x_3550_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__21(void){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__20));
v___x_3554_ = l_Lean_MessageData_ofFormat(v___x_3553_);
return v___x_3554_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__23(void){
_start:
{
lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3556_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__22));
v___x_3557_ = l_Lean_stringToMessageData(v___x_3556_);
return v___x_3557_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__25(void){
_start:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3559_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__24));
v___x_3560_ = l_Lean_stringToMessageData(v___x_3559_);
return v___x_3560_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__27(void){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3562_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__26));
v___x_3563_ = l_Lean_stringToMessageData(v___x_3562_);
return v___x_3563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated(lean_object* v_declName_3564_, uint8_t v_allowSuggestion_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_){
_start:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v_a_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3736_; 
v___x_3571_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3572_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3736_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3575_ = v___x_3572_;
v_isShared_3576_ = v_isSharedCheck_3736_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_a_3573_);
lean_dec(v___x_3572_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3736_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3577_; uint8_t v___x_3578_; lean_object* v_extraMsg_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; 
v___x_3577_ = l_Lean_Linter_linter_deprecated;
v___x_3578_ = l_Lean_Linter_getLinterValue(v___x_3577_, v_a_3573_);
lean_dec(v_a_3573_);
if (v___x_3578_ == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3596_; 
lean_dec(v_declName_3564_);
v___x_3594_ = lean_box(0);
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 0, v___x_3594_);
v___x_3596_ = v___x_3575_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v___x_3594_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
else
{
lean_object* v___x_3598_; lean_object* v_env_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3598_ = lean_st_ref_get(v_a_3569_);
v_env_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc_ref(v_env_3599_);
lean_dec(v___x_3598_);
v___x_3600_ = l_Lean_Linter_deprecatedAttr;
lean_inc(v_declName_3564_);
v___x_3601_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3571_, v___x_3600_, v_env_3599_, v_declName_3564_);
if (lean_obj_tag(v___x_3601_) == 1)
{
lean_object* v_val_3602_; lean_object* v_text_x3f_3603_; 
lean_del_object(v___x_3575_);
v_val_3602_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_val_3602_);
lean_dec_ref_known(v___x_3601_, 1);
v_text_x3f_3603_ = lean_ctor_get(v_val_3602_, 1);
if (lean_obj_tag(v_text_x3f_3603_) == 0)
{
lean_object* v_newName_x3f_3604_; 
v_newName_x3f_3604_ = lean_ctor_get(v_val_3602_, 0);
lean_inc(v_newName_x3f_3604_);
lean_dec(v_val_3602_);
if (lean_obj_tag(v_newName_x3f_3604_) == 0)
{
lean_object* v___x_3605_; 
v___x_3605_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9);
v_extraMsg_3580_ = v___x_3605_;
v___y_3581_ = v_a_3566_;
v___y_3582_ = v_a_3567_;
v___y_3583_ = v_a_3568_;
v___y_3584_ = v_a_3569_;
goto v___jp_3579_;
}
else
{
lean_object* v_val_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v_env_3613_; lean_object* v___x_3614_; uint8_t v___x_3615_; lean_object* v___x_3616_; 
v_val_3606_ = lean_ctor_get(v_newName_x3f_3604_, 0);
lean_inc_n(v_val_3606_, 2);
lean_dec_ref_known(v_newName_x3f_3604_, 1);
v___x_3607_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__3, &l_Lean_Linter_checkDeprecated___closed__3_once, _init_l_Lean_Linter_checkDeprecated___closed__3);
v___x_3608_ = l_Lean_MessageData_ofConstName(v_val_3606_, v___x_3578_);
lean_inc_ref(v___x_3608_);
v___x_3609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3609_, 0, v___x_3607_);
lean_ctor_set(v___x_3609_, 1, v___x_3608_);
v___x_3610_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3609_);
lean_ctor_set(v___x_3611_, 1, v___x_3610_);
v___x_3612_ = lean_st_ref_get(v_a_3569_);
v_env_3613_ = lean_ctor_get(v___x_3612_, 0);
lean_inc_ref_n(v_env_3613_, 2);
lean_dec(v___x_3612_);
v___x_3614_ = l_Lean_Name_getPrefix(v_declName_3564_);
v___x_3615_ = 0;
lean_inc(v_declName_3564_);
v___x_3616_ = l_Lean_Environment_find_x3f(v_env_3613_, v_declName_3564_, v___x_3615_);
if (lean_obj_tag(v___x_3616_) == 1)
{
lean_object* v_val_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v_val_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_val_3617_);
lean_dec_ref_known(v___x_3616_, 1);
v___x_3618_ = l_Lean_Name_getPrefix(v_val_3606_);
lean_inc(v_val_3606_);
lean_inc_ref(v_env_3613_);
v___x_3619_ = l_Lean_Environment_find_x3f(v_env_3613_, v_val_3606_, v___x_3615_);
if (lean_obj_tag(v___x_3619_) == 1)
{
lean_object* v_val_3620_; lean_object* v___x_3621_; 
v_val_3620_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_val_3620_);
lean_dec_ref_known(v___x_3619_, 1);
v___x_3621_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_val_3617_, v_val_3620_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_object* v_a_3622_; lean_object* v_msg_3624_; lean_object* v___y_3625_; lean_object* v___y_3626_; lean_object* v___y_3627_; lean_object* v___y_3628_; lean_object* v___y_3643_; lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v___y_3646_; lean_object* v___y_3647_; lean_object* v___y_3648_; lean_object* v___y_3663_; lean_object* v___y_3664_; lean_object* v___y_3665_; lean_object* v___y_3666_; lean_object* v___y_3667_; lean_object* v___y_3668_; lean_object* v_msg_3676_; lean_object* v___y_3677_; lean_object* v___y_3678_; lean_object* v___y_3679_; lean_object* v___y_3680_; uint8_t v___x_3708_; 
v_a_3622_ = lean_ctor_get(v___x_3621_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v___x_3621_, 1);
v___x_3708_ = lean_unbox(v_a_3622_);
if (v___x_3708_ == 0)
{
lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3709_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3710_ = l_Lean_ConstantInfo_type(v_val_3620_);
lean_dec(v_val_3620_);
v___x_3711_ = l_Lean_indentExpr(v___x_3710_);
v___x_3712_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3709_);
lean_ctor_set(v___x_3712_, 1, v___x_3711_);
v___x_3713_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3714_, 0, v___x_3712_);
lean_ctor_set(v___x_3714_, 1, v___x_3713_);
v___x_3715_ = l_Lean_ConstantInfo_type(v_val_3617_);
lean_dec(v_val_3617_);
v___x_3716_ = l_Lean_indentExpr(v___x_3715_);
v___x_3717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3714_);
lean_ctor_set(v___x_3717_, 1, v___x_3716_);
v___x_3718_ = l_Lean_MessageData_note(v___x_3717_);
v___x_3719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3611_);
lean_ctor_set(v___x_3719_, 1, v___x_3718_);
v_msg_3676_ = v___x_3719_;
v___y_3677_ = v_a_3566_;
v___y_3678_ = v_a_3567_;
v___y_3679_ = v_a_3568_;
v___y_3680_ = v_a_3569_;
goto v___jp_3675_;
}
else
{
lean_dec(v_val_3620_);
lean_dec(v_val_3617_);
v_msg_3676_ = v___x_3611_;
v___y_3677_ = v_a_3566_;
v___y_3678_ = v_a_3567_;
v___y_3679_ = v_a_3568_;
v___y_3680_ = v_a_3569_;
goto v___jp_3675_;
}
v___jp_3623_:
{
if (v_allowSuggestion_3565_ == 0)
{
lean_dec(v_a_3622_);
lean_dec(v_val_3606_);
v_extraMsg_3580_ = v_msg_3624_;
v___y_3581_ = v___y_3625_;
v___y_3582_ = v___y_3626_;
v___y_3583_ = v___y_3627_;
v___y_3584_ = v___y_3628_;
goto v___jp_3579_;
}
else
{
uint8_t v___x_3629_; 
v___x_3629_ = lean_unbox(v_a_3622_);
lean_dec(v_a_3622_);
if (v___x_3629_ == 0)
{
lean_dec(v_val_3606_);
v_extraMsg_3580_ = v_msg_3624_;
v___y_3581_ = v___y_3625_;
v___y_3582_ = v___y_3626_;
v___y_3583_ = v___y_3627_;
v___y_3584_ = v___y_3628_;
goto v___jp_3579_;
}
else
{
lean_object* v___x_3630_; 
lean_inc(v_declName_3564_);
v___x_3630_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(v_declName_3564_, v_val_3606_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_a_3631_);
lean_dec_ref_known(v___x_3630_, 1);
if (lean_obj_tag(v_a_3631_) == 1)
{
lean_object* v_val_3632_; lean_object* v___x_3633_; 
v_val_3632_ = lean_ctor_get(v_a_3631_, 0);
lean_inc(v_val_3632_);
lean_dec_ref_known(v_a_3631_, 1);
v___x_3633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3633_, 0, v_msg_3624_);
lean_ctor_set(v___x_3633_, 1, v_val_3632_);
v_extraMsg_3580_ = v___x_3633_;
v___y_3581_ = v___y_3625_;
v___y_3582_ = v___y_3626_;
v___y_3583_ = v___y_3627_;
v___y_3584_ = v___y_3628_;
goto v___jp_3579_;
}
else
{
lean_dec(v_a_3631_);
v_extraMsg_3580_ = v_msg_3624_;
v___y_3581_ = v___y_3625_;
v___y_3582_ = v___y_3626_;
v___y_3583_ = v___y_3627_;
v___y_3584_ = v___y_3628_;
goto v___jp_3579_;
}
}
else
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
lean_dec_ref(v_msg_3624_);
lean_dec(v_declName_3564_);
v_a_3634_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3630_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v___x_3630_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_a_3634_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
}
}
}
v___jp_3642_:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3649_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3649_);
lean_ctor_set(v___x_3650_, 1, v___x_3608_);
v___x_3651_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__5, &l_Lean_Linter_checkDeprecated___closed__5_once, _init_l_Lean_Linter_checkDeprecated___closed__5);
v___x_3652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3650_);
lean_ctor_set(v___x_3652_, 1, v___x_3651_);
v___x_3653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3653_, 0, v___x_3652_);
lean_ctor_set(v___x_3653_, 1, v___y_3648_);
v___x_3654_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__7, &l_Lean_Linter_checkDeprecated___closed__7_once, _init_l_Lean_Linter_checkDeprecated___closed__7);
v___x_3655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3653_);
lean_ctor_set(v___x_3655_, 1, v___x_3654_);
v___x_3656_ = l_Lean_MessageData_ofName(v___x_3618_);
v___x_3657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3655_);
lean_ctor_set(v___x_3657_, 1, v___x_3656_);
v___x_3658_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__9, &l_Lean_Linter_checkDeprecated___closed__9_once, _init_l_Lean_Linter_checkDeprecated___closed__9);
v___x_3659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3657_);
lean_ctor_set(v___x_3659_, 1, v___x_3658_);
v___x_3660_ = l_Lean_MessageData_note(v___x_3659_);
v___x_3661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3661_, 0, v___y_3647_);
lean_ctor_set(v___x_3661_, 1, v___x_3660_);
v_msg_3624_ = v___x_3661_;
v___y_3625_ = v___y_3643_;
v___y_3626_ = v___y_3645_;
v___y_3627_ = v___y_3646_;
v___y_3628_ = v___y_3644_;
goto v___jp_3623_;
}
v___jp_3662_:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3669_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__11, &l_Lean_Linter_checkDeprecated___closed__11_once, _init_l_Lean_Linter_checkDeprecated___closed__11);
v___x_3670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3669_);
lean_ctor_set(v___x_3670_, 1, v___y_3668_);
v___x_3671_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__13, &l_Lean_Linter_checkDeprecated___closed__13_once, _init_l_Lean_Linter_checkDeprecated___closed__13);
v___x_3672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3670_);
lean_ctor_set(v___x_3672_, 1, v___x_3671_);
v___x_3673_ = l_Lean_MessageData_note(v___x_3672_);
v___x_3674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3674_, 0, v___y_3667_);
lean_ctor_set(v___x_3674_, 1, v___x_3673_);
v_msg_3624_ = v___x_3674_;
v___y_3625_ = v___y_3663_;
v___y_3626_ = v___y_3665_;
v___y_3627_ = v___y_3666_;
v___y_3628_ = v___y_3664_;
goto v___jp_3623_;
}
v___jp_3675_:
{
uint8_t v___x_3681_; 
v___x_3681_ = l_Lean_Name_isAnonymous(v___x_3614_);
if (v___x_3681_ == 0)
{
uint8_t v___x_3682_; 
v___x_3682_ = lean_name_eq(v___x_3614_, v___x_3618_);
lean_dec(v___x_3614_);
if (v___x_3682_ == 0)
{
lean_dec(v___x_3618_);
lean_dec_ref(v_env_3613_);
lean_dec_ref(v___x_3608_);
if (lean_obj_tag(v_declName_3564_) == 1)
{
lean_object* v_str_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v_str_3683_ = lean_ctor_get(v_declName_3564_, 1);
v___x_3684_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__15, &l_Lean_Linter_checkDeprecated___closed__15_once, _init_l_Lean_Linter_checkDeprecated___closed__15);
lean_inc_ref(v_str_3683_);
v___x_3685_ = l_Lean_stringToMessageData(v_str_3683_);
v___x_3686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3684_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___x_3687_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__17, &l_Lean_Linter_checkDeprecated___closed__17_once, _init_l_Lean_Linter_checkDeprecated___closed__17);
v___x_3688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3686_);
lean_ctor_set(v___x_3688_, 1, v___x_3687_);
lean_inc(v_val_3606_);
v___x_3689_ = l_Lean_MessageData_ofConstName(v_val_3606_, v___x_3681_);
v___x_3690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3688_);
lean_ctor_set(v___x_3690_, 1, v___x_3689_);
v___x_3691_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__19, &l_Lean_Linter_checkDeprecated___closed__19_once, _init_l_Lean_Linter_checkDeprecated___closed__19);
v___x_3692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3690_);
lean_ctor_set(v___x_3692_, 1, v___x_3691_);
v___y_3663_ = v___y_3677_;
v___y_3664_ = v___y_3680_;
v___y_3665_ = v___y_3678_;
v___y_3666_ = v___y_3679_;
v___y_3667_ = v_msg_3676_;
v___y_3668_ = v___x_3692_;
goto v___jp_3662_;
}
else
{
lean_object* v___x_3693_; 
v___x_3693_ = l_Lean_MessageData_nil;
v___y_3663_ = v___y_3677_;
v___y_3664_ = v___y_3680_;
v___y_3665_ = v___y_3678_;
v___y_3666_ = v___y_3679_;
v___y_3667_ = v_msg_3676_;
v___y_3668_ = v___x_3693_;
goto v___jp_3662_;
}
}
else
{
uint8_t v___x_3694_; 
lean_inc(v_declName_3564_);
lean_inc_ref(v_env_3613_);
v___x_3694_ = l_Lean_isProtected(v_env_3613_, v_declName_3564_);
if (v___x_3694_ == 0)
{
uint8_t v___x_3695_; 
lean_inc(v_val_3606_);
v___x_3695_ = l_Lean_isProtected(v_env_3613_, v_val_3606_);
if (v___x_3695_ == 0)
{
lean_dec(v___x_3618_);
lean_dec_ref(v___x_3608_);
v_msg_3624_ = v_msg_3676_;
v___y_3625_ = v___y_3677_;
v___y_3626_ = v___y_3678_;
v___y_3627_ = v___y_3679_;
v___y_3628_ = v___y_3680_;
goto v___jp_3623_;
}
else
{
lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; uint8_t v___x_3699_; 
lean_inc(v___x_3618_);
v___x_3696_ = l_Lean_Name_componentsRev(v___x_3618_);
v___x_3697_ = lean_unsigned_to_nat(1u);
v___x_3698_ = l_List_lengthTR___redArg(v___x_3696_);
v___x_3699_ = lean_nat_dec_lt(v___x_3697_, v___x_3698_);
lean_dec(v___x_3698_);
if (v___x_3699_ == 0)
{
lean_object* v___x_3700_; 
lean_dec(v___x_3696_);
v___x_3700_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__21, &l_Lean_Linter_checkDeprecated___closed__21_once, _init_l_Lean_Linter_checkDeprecated___closed__21);
v___y_3643_ = v___y_3677_;
v___y_3644_ = v___y_3680_;
v___y_3645_ = v___y_3678_;
v___y_3646_ = v___y_3679_;
v___y_3647_ = v_msg_3676_;
v___y_3648_ = v___x_3700_;
goto v___jp_3642_;
}
else
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; 
v___x_3701_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__23, &l_Lean_Linter_checkDeprecated___closed__23_once, _init_l_Lean_Linter_checkDeprecated___closed__23);
v___x_3702_ = lean_unsigned_to_nat(0u);
v___x_3703_ = l_List_get___redArg(v___x_3696_, v___x_3702_);
lean_dec(v___x_3696_);
v___x_3704_ = l_Lean_MessageData_ofName(v___x_3703_);
v___x_3705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3701_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
v___x_3706_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__25, &l_Lean_Linter_checkDeprecated___closed__25_once, _init_l_Lean_Linter_checkDeprecated___closed__25);
v___x_3707_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3705_);
lean_ctor_set(v___x_3707_, 1, v___x_3706_);
v___y_3643_ = v___y_3677_;
v___y_3644_ = v___y_3680_;
v___y_3645_ = v___y_3678_;
v___y_3646_ = v___y_3679_;
v___y_3647_ = v_msg_3676_;
v___y_3648_ = v___x_3707_;
goto v___jp_3642_;
}
}
}
else
{
lean_dec(v___x_3618_);
lean_dec_ref(v_env_3613_);
lean_dec_ref(v___x_3608_);
v_msg_3624_ = v_msg_3676_;
v___y_3625_ = v___y_3677_;
v___y_3626_ = v___y_3678_;
v___y_3627_ = v___y_3679_;
v___y_3628_ = v___y_3680_;
goto v___jp_3623_;
}
}
}
else
{
lean_dec(v___x_3618_);
lean_dec(v___x_3614_);
lean_dec_ref(v_env_3613_);
lean_dec_ref(v___x_3608_);
v_msg_3624_ = v_msg_3676_;
v___y_3625_ = v___y_3677_;
v___y_3626_ = v___y_3678_;
v___y_3627_ = v___y_3679_;
v___y_3628_ = v___y_3680_;
goto v___jp_3623_;
}
}
}
else
{
lean_object* v_a_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3727_; 
lean_dec(v_val_3620_);
lean_dec(v___x_3618_);
lean_dec(v_val_3617_);
lean_dec(v___x_3614_);
lean_dec_ref(v_env_3613_);
lean_dec_ref_known(v___x_3611_, 2);
lean_dec_ref(v___x_3608_);
lean_dec(v_val_3606_);
lean_dec(v_declName_3564_);
v_a_3720_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3727_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3722_ = v___x_3621_;
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_a_3720_);
lean_dec(v___x_3621_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v___x_3725_; 
if (v_isShared_3723_ == 0)
{
v___x_3725_ = v___x_3722_;
goto v_reusejp_3724_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v_a_3720_);
v___x_3725_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3724_;
}
v_reusejp_3724_:
{
return v___x_3725_;
}
}
}
}
else
{
lean_dec(v___x_3619_);
lean_dec(v___x_3618_);
lean_dec(v_val_3617_);
lean_dec(v___x_3614_);
lean_dec_ref(v_env_3613_);
lean_dec_ref(v___x_3608_);
lean_dec(v_val_3606_);
v_extraMsg_3580_ = v___x_3611_;
v___y_3581_ = v_a_3566_;
v___y_3582_ = v_a_3567_;
v___y_3583_ = v_a_3568_;
v___y_3584_ = v_a_3569_;
goto v___jp_3579_;
}
}
else
{
lean_dec(v___x_3616_);
lean_dec(v___x_3614_);
lean_dec_ref(v_env_3613_);
lean_dec_ref(v___x_3608_);
lean_dec(v_val_3606_);
v_extraMsg_3580_ = v___x_3611_;
v___y_3581_ = v_a_3566_;
v___y_3582_ = v_a_3567_;
v___y_3583_ = v_a_3568_;
v___y_3584_ = v_a_3569_;
goto v___jp_3579_;
}
}
}
else
{
lean_object* v_val_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
lean_inc_ref(v_text_x3f_3603_);
lean_dec(v_val_3602_);
v_val_3728_ = lean_ctor_get(v_text_x3f_3603_, 0);
lean_inc(v_val_3728_);
lean_dec_ref_known(v_text_x3f_3603_, 1);
v___x_3729_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__27, &l_Lean_Linter_checkDeprecated___closed__27_once, _init_l_Lean_Linter_checkDeprecated___closed__27);
v___x_3730_ = l_Lean_stringToMessageData(v_val_3728_);
v___x_3731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3729_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v_extraMsg_3580_ = v___x_3731_;
v___y_3581_ = v_a_3566_;
v___y_3582_ = v_a_3567_;
v___y_3583_ = v_a_3568_;
v___y_3584_ = v_a_3569_;
goto v___jp_3579_;
}
}
else
{
lean_object* v___x_3732_; lean_object* v___x_3734_; 
lean_dec(v___x_3601_);
lean_dec(v_declName_3564_);
v___x_3732_ = lean_box(0);
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 0, v___x_3732_);
v___x_3734_ = v___x_3575_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v___x_3732_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
}
v___jp_3579_:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3585_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3586_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3587_ = l_Lean_MessageData_ofConstName(v_declName_3564_, v___x_3578_);
v___x_3588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3588_, 0, v___x_3586_);
lean_ctor_set(v___x_3588_, 1, v___x_3587_);
v___x_3589_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__1, &l_Lean_Linter_checkDeprecated___closed__1_once, _init_l_Lean_Linter_checkDeprecated___closed__1);
v___x_3590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3588_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
v___x_3591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3591_, 0, v___x_3590_);
lean_ctor_set(v___x_3591_, 1, v_extraMsg_3580_);
v___x_3592_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3592_, 0, v___x_3585_);
lean_ctor_set(v___x_3592_, 1, v___x_3591_);
v___x_3593_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6_spec__13_spec__22_spec__28_spec__34_spec__40(v___x_3592_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_);
return v___x_3593_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated___boxed(lean_object* v_declName_3737_, lean_object* v_allowSuggestion_3738_, lean_object* v_a_3739_, lean_object* v_a_3740_, lean_object* v_a_3741_, lean_object* v_a_3742_, lean_object* v_a_3743_){
_start:
{
uint8_t v_allowSuggestion_boxed_3744_; lean_object* v_res_3745_; 
v_allowSuggestion_boxed_3744_ = lean_unbox(v_allowSuggestion_3738_);
v_res_3745_ = l_Lean_Linter_checkDeprecated(v_declName_3737_, v_allowSuggestion_boxed_3744_, v_a_3739_, v_a_3740_, v_a_3741_, v_a_3742_);
lean_dec(v_a_3742_);
lean_dec_ref(v_a_3741_);
lean_dec(v_a_3740_);
lean_dec_ref(v_a_3739_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(lean_object* v_o_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v___x_3752_; 
v___x_3752_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v_o_3746_, v___y_3750_);
return v___x_3752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___boxed(lean_object* v_o_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_){
_start:
{
lean_object* v_res_3759_; 
v_res_3759_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(v_o_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_);
lean_dec(v___y_3757_);
lean_dec_ref(v___y_3756_);
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
return v_res_3759_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Format(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Zoned(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_deprecated = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_deprecated);
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_deprecated_deprecatedTarget = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_deprecated_deprecatedTarget);
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_deprecatedAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_deprecatedAttr);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Std_Time_Format(uint8_t builtin);
lean_object* initialize_Std_Time_Zoned(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Zoned(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Deprecated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Deprecated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Deprecated(builtin);
}
#ifdef __cplusplus
}
#endif
