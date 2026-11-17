// Lean compiler output
// Module: Lean.DefEqAttrib
// Imports: public import Lean.Meta.Basic import Lean.Meta.Check import Lean.Meta.WHNF
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
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
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_Meta_smartUnfolding;
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofLazyM(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "defeqAttrib"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "useBackward"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(19, 237, 34, 130, 157, 80, 121, 174)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(230, 152, 155, 26, 74, 169, 34, 62)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 295, .m_capacity = 295, .m_length = 294, .m_data = "When true, `dsimp` also uses theorems tagged `@[backward_defeq]`, i.e. theorems inferred to be rfl only at default (not instance) transparency. Set this locally (e.g. `set_option backward.defeqAttrib.useBackward true in ...`) to restore the pre-stricter-inference behavior for a specific proof."};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(244, 198, 114, 201, 97, 27, 16, 197)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(150, 188, 13, 64, 239, 38, 217, 135)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(167, 236, 163, 127, 155, 208, 160, 151)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_backward_defeqAttrib_useBackward;
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0;
static lean_once_cell_t l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1;
static lean_once_cell_t l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Not a definitional equality: the conclusion should be an equality, but is"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_validateDefEqAttr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Not a definitional equality: the left-hand side"};
static const lean_object* l_Lean_validateDefEqAttr___lam__0___closed__0 = (const lean_object*)&l_Lean_validateDefEqAttr___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_validateDefEqAttr___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___lam__0___closed__1;
static const lean_string_object l_Lean_validateDefEqAttr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "\nis not definitionally equal to the right-hand side"};
static const lean_object* l_Lean_validateDefEqAttr___lam__0___closed__2 = (const lean_object*)&l_Lean_validateDefEqAttr___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_validateDefEqAttr___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___lam__0___closed__3;
static const lean_string_object l_Lean_validateDefEqAttr___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 149, .m_capacity = 149, .m_length = 148, .m_data = "This theorem is exported from the current module. This requires that all definitions that need to be unfolded to prove this theorem must be exposed."};
static const lean_object* l_Lean_validateDefEqAttr___lam__0___closed__4 = (const lean_object*)&l_Lean_validateDefEqAttr___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_validateDefEqAttr___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___lam__0___closed__5;
static lean_once_cell_t l_Lean_validateDefEqAttr___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_validateDefEqAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_validateDefEqAttr___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_validateDefEqAttr___closed__0 = (const lean_object*)&l_Lean_validateDefEqAttr___closed__0_value;
static const lean_ctor_object l_Lean_validateDefEqAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_validateDefEqAttr___closed__1 = (const lean_object*)&l_Lean_validateDefEqAttr___closed__1_value;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_validateDefEqAttr___closed__2;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__3;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__4;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__5;
static const lean_array_object l_Lean_validateDefEqAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_validateDefEqAttr___closed__6 = (const lean_object*)&l_Lean_validateDefEqAttr___closed__6_value;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__7;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__8;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__9;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__10;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__11;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__12;
static lean_once_cell_t l_Lean_validateDefEqAttr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_validateDefEqAttr___closed__13;
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "backward_defeq"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(37, 46, 228, 223, 90, 62, 127, 172)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 163, .m_capacity = 163, .m_length = 162, .m_data = "mark theorem as a definitional equality under the permissive pre-stricter-inference rules, used by `dsimp` when `set_option backward.defeqAttrib.useBackward true`"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_validateDefEqAttr___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "backwardDefeqAttr"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(81, 46, 119, 95, 12, 24, 171, 201)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_backwardDefeqAttr;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 862, .m_capacity = 862, .m_length = 861, .m_data = "Marks a theorem as a definitional equality under the permissive transparency rules that\npredated the stricter `@[defeq]` inference (i.e. an equality that holds at `.default` or\n`.all` transparency, but possibly not at `.instances` transparency as required by `dsimp`).\n\nSuch theorems are inferred automatically by `inferDefEqAttr`: any theorem that the old\n`:= rfl` inference would have accepted is tagged `@[backward_defeq]`, and additionally\ntagged `@[defeq]` when it also passes the stricter check at instance transparency.\n\n`dsimp` ignores `@[backward_defeq]` theorems by default. Setting\n`set_option backward.defeqAttrib.useBackward true` (typically scoped to a single proof\nwith `set_option ... in`) makes `dsimp` treat them like `@[defeq]` theorems, which\nprovides a local backwards-compatibility escape hatch for proofs broken by the stricter\ninference."};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(73) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(94) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(89) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(89) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` because it is not from the present async context"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___lam__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___lam__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DefEqAttrib_0__Lean_initFn___lam__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "defeq"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 220, 195, 245, 59, 218, 252, 66)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "mark theorem as a definitional equality, to be used by `dsimp`"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "defeqAttr"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__4_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(126, 101, 216, 69, 252, 98, 163, 179)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_defeqAttr;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 774, .m_capacity = 774, .m_length = 773, .m_data = "Marks the theorem as a definitional equality that can be used by `dsimp`.\n\nThe theorem must be an equality that holds at `.implicit` transparency. A theorem\nwith a definition that is (syntactically) `:= rfl` is implicitly marked `@[defeq]`\n(and also `@[backward_defeq]`, since the latter is a superset); write `:= (rfl)`\ninstead to suppress this.\n\nThe attribute should be given before a `@[simp]` attribute to have effect.\n\nWhen using the module system, an exported theorem can only be `@[defeq]` if all\ndefinitions that need to be unfolded to prove the theorem are exported and exposed.\n\nTagging a theorem with `@[defeq]` automatically also tags it with `@[backward_defeq]`,\nmaintaining the invariant that `@[defeq]` theorems form a subset of `@[backward_defeq]`\ntheorems."};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(96) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(122) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(114) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(114) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___boxed(lean_object*);
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__0 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__1 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__1_value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__2 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__3 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__3_value;
static const lean_string_object l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__4 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__5 = (const lean_object*)&l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6_spec__10___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_inferDefEqAttr_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_inferDefEqAttr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_inferDefEqAttr___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Theorem "};
static const lean_object* l_Lean_inferDefEqAttr___lam__1___closed__0 = (const lean_object*)&l_Lean_inferDefEqAttr___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_inferDefEqAttr___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inferDefEqAttr___lam__1___closed__1;
static const lean_string_object l_Lean_inferDefEqAttr___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = " has a `rfl`-proof but could not be validated as a definitional equality:"};
static const lean_object* l_Lean_inferDefEqAttr___lam__1___closed__2 = (const lean_object*)&l_Lean_inferDefEqAttr___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_inferDefEqAttr___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inferDefEqAttr___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_inferDefEqAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_inferDefEqAttr___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_inferDefEqAttr___closed__0 = (const lean_object*)&l_Lean_inferDefEqAttr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_54_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_));
v___x_56_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__7_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_));
v___x_57_ = l_Lean_Option_register___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4__spec__0(v___x_54_, v___x_55_, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4____boxed(lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_();
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__0(lean_object* v_opts_60_, lean_object* v_opt_61_){
_start:
{
lean_object* v_name_62_; lean_object* v_defValue_63_; lean_object* v_map_64_; lean_object* v___x_65_; 
v_name_62_ = lean_ctor_get(v_opt_61_, 0);
v_defValue_63_ = lean_ctor_get(v_opt_61_, 1);
v_map_64_ = lean_ctor_get(v_opts_60_, 0);
v___x_65_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_64_, v_name_62_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_inc(v_defValue_63_);
return v_defValue_63_;
}
else
{
lean_object* v_val_66_; 
v_val_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_val_66_);
lean_dec_ref_known(v___x_65_, 1);
if (lean_obj_tag(v_val_66_) == 3)
{
lean_object* v_v_67_; 
v_v_67_ = lean_ctor_get(v_val_66_, 0);
lean_inc(v_v_67_);
lean_dec_ref_known(v_val_66_, 1);
return v_v_67_;
}
else
{
lean_dec(v_val_66_);
lean_inc(v_defValue_63_);
return v_defValue_63_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__0___boxed(lean_object* v_opts_68_, lean_object* v_opt_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Option_get___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__0(v_opts_68_, v_opt_69_);
lean_dec_ref(v_opt_69_);
lean_dec_ref(v_opts_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1(lean_object* v_o_74_, lean_object* v_k_75_, uint8_t v_v_76_){
_start:
{
lean_object* v_map_77_; uint8_t v_hasTrace_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_92_; 
v_map_77_ = lean_ctor_get(v_o_74_, 0);
v_hasTrace_78_ = lean_ctor_get_uint8(v_o_74_, sizeof(void*)*1);
v_isSharedCheck_92_ = !lean_is_exclusive(v_o_74_);
if (v_isSharedCheck_92_ == 0)
{
v___x_80_ = v_o_74_;
v_isShared_81_ = v_isSharedCheck_92_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_map_77_);
lean_dec(v_o_74_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_92_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_82_, 0, v_v_76_);
lean_inc(v_k_75_);
v___x_83_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_75_, v___x_82_, v_map_77_);
if (v_hasTrace_78_ == 0)
{
lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v___x_87_; 
v___x_84_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__1));
v___x_85_ = l_Lean_Name_isPrefixOf(v___x_84_, v_k_75_);
lean_dec(v_k_75_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 0, v___x_83_);
v___x_87_ = v___x_80_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_83_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*1, v___x_85_);
return v___x_87_;
}
}
else
{
lean_object* v___x_90_; 
lean_dec(v_k_75_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 0, v___x_83_);
v___x_90_ = v___x_80_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_83_);
lean_ctor_set_uint8(v_reuseFailAlloc_91_, sizeof(void*)*1, v_hasTrace_78_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___boxed(lean_object* v_o_93_, lean_object* v_k_94_, lean_object* v_v_95_){
_start:
{
uint8_t v_v_boxed_96_; lean_object* v_res_97_; 
v_v_boxed_96_ = lean_unbox(v_v_95_);
v_res_97_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1(v_o_93_, v_k_94_, v_v_boxed_96_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1(lean_object* v_opts_98_, lean_object* v_opt_99_, uint8_t v_val_100_){
_start:
{
lean_object* v_name_101_; lean_object* v___x_102_; 
v_name_101_ = lean_ctor_get(v_opt_99_, 0);
lean_inc(v_name_101_);
lean_dec_ref(v_opt_99_);
v___x_102_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1(v_opts_98_, v_name_101_, v_val_100_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1___boxed(lean_object* v_opts_103_, lean_object* v_opt_104_, lean_object* v_val_105_){
_start:
{
uint8_t v_val_boxed_106_; lean_object* v_res_107_; 
v_val_boxed_106_ = lean_unbox(v_val_105_);
v_res_107_ = l_Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1(v_opts_103_, v_opt_104_, v_val_boxed_106_);
return v_res_107_;
}
}
static lean_object* _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0(void){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_108_;
}
}
static lean_object* _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0);
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
}
static lean_object* _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1);
v___x_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful(lean_object* v_e1_113_, lean_object* v_e2_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_){
_start:
{
lean_object* v___y_121_; lean_object* v___y_139_; lean_object* v___y_140_; lean_object* v___y_141_; lean_object* v_toCold_178_; lean_object* v_currRecDepth_179_; lean_object* v_ref_180_; uint8_t v_suppressElabErrors_181_; uint8_t v_checkDeprecated_182_; uint8_t v_isRecordingDeps_183_; lean_object* v_fileName_184_; lean_object* v_fileMap_185_; lean_object* v_options_186_; lean_object* v_currNamespace_187_; lean_object* v_openDecls_188_; lean_object* v_initHeartbeats_189_; lean_object* v_maxHeartbeats_190_; lean_object* v_quotContext_191_; lean_object* v_currMacroScope_192_; lean_object* v_cancelTk_x3f_193_; lean_object* v_inheritedTraceOptions_194_; uint8_t v___x_195_; lean_object* v___y_197_; uint16_t v___y_198_; lean_object* v_fileName_199_; lean_object* v_fileMap_200_; lean_object* v_currNamespace_201_; lean_object* v_openDecls_202_; lean_object* v_initHeartbeats_203_; lean_object* v_maxHeartbeats_204_; lean_object* v_quotContext_205_; lean_object* v_currMacroScope_206_; lean_object* v_cancelTk_x3f_207_; lean_object* v_inheritedTraceOptions_208_; lean_object* v_currRecDepth_209_; lean_object* v_ref_210_; uint8_t v_suppressElabErrors_211_; uint8_t v_checkDeprecated_212_; uint8_t v_isRecordingDeps_213_; lean_object* v___y_214_; lean_object* v___y_238_; lean_object* v_nextMacroScope_239_; lean_object* v_ngen_240_; lean_object* v_auxDeclNGen_241_; lean_object* v_traceState_242_; lean_object* v_recordedDeps_243_; lean_object* v_messages_244_; lean_object* v_infoState_245_; lean_object* v_snapshotTasks_246_; uint16_t v___y_247_; lean_object* v___y_248_; lean_object* v___y_253_; uint16_t v___y_254_; uint8_t v___y_255_; lean_object* v___y_274_; 
v_toCold_178_ = lean_ctor_get(v_a_117_, 0);
v_currRecDepth_179_ = lean_ctor_get(v_a_117_, 1);
v_ref_180_ = lean_ctor_get(v_a_117_, 2);
v_suppressElabErrors_181_ = lean_ctor_get_uint8(v_a_117_, sizeof(void*)*3 + 2);
v_checkDeprecated_182_ = lean_ctor_get_uint8(v_a_117_, sizeof(void*)*3 + 3);
v_isRecordingDeps_183_ = lean_ctor_get_uint8(v_a_117_, sizeof(void*)*3 + 4);
v_fileName_184_ = lean_ctor_get(v_toCold_178_, 0);
v_fileMap_185_ = lean_ctor_get(v_toCold_178_, 1);
v_options_186_ = lean_ctor_get(v_toCold_178_, 2);
v_currNamespace_187_ = lean_ctor_get(v_toCold_178_, 4);
v_openDecls_188_ = lean_ctor_get(v_toCold_178_, 5);
v_initHeartbeats_189_ = lean_ctor_get(v_toCold_178_, 6);
v_maxHeartbeats_190_ = lean_ctor_get(v_toCold_178_, 7);
v_quotContext_191_ = lean_ctor_get(v_toCold_178_, 8);
v_currMacroScope_192_ = lean_ctor_get(v_toCold_178_, 9);
v_cancelTk_x3f_193_ = lean_ctor_get(v_toCold_178_, 10);
v_inheritedTraceOptions_194_ = lean_ctor_get(v_toCold_178_, 11);
v___x_195_ = 1;
if (v_isRecordingDeps_183_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = l_Lean_Meta_smartUnfolding;
lean_inc_ref(v_options_186_);
v___x_285_ = l_Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1(v_options_186_, v___x_284_, v_isRecordingDeps_183_);
v___y_274_ = v___x_285_;
goto v___jp_273_;
}
else
{
lean_object* v___x_286_; 
lean_inc_ref(v_options_186_);
v___x_286_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_186_);
v___y_274_ = v___x_286_;
goto v___jp_273_;
}
v___jp_120_:
{
if (lean_obj_tag(v___y_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_a_122_ = lean_ctor_get(v___y_121_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___y_121_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___y_121_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___y_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___y_121_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___y_121_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___y_121_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___y_121_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
v___jp_138_:
{
if (lean_obj_tag(v___y_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_169_; 
v_a_142_ = lean_ctor_get(v___y_141_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___y_141_);
if (v_isSharedCheck_169_ == 0)
{
v___x_144_ = v___y_141_;
v_isShared_145_ = v_isSharedCheck_169_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___y_141_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_169_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
uint8_t v___x_146_; 
v___x_146_ = lean_unbox(v_a_142_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; uint8_t v_transparency_148_; uint8_t v___x_149_; uint8_t v___x_150_; 
lean_del_object(v___x_144_);
lean_dec(v_a_142_);
v___x_147_ = l_Lean_Meta_Context_config(v_a_115_);
v_transparency_148_ = lean_ctor_get_uint8(v___x_147_, 9);
lean_dec_ref(v___x_147_);
v___x_149_ = 0;
v___x_150_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_148_, v___x_149_);
if (v___x_150_ == 0)
{
lean_object* v_keyedConfig_151_; uint8_t v_trackZetaDelta_152_; lean_object* v_zetaDeltaSet_153_; lean_object* v_lctx_154_; lean_object* v_localInstances_155_; lean_object* v_defEqCtx_x3f_156_; lean_object* v_synthPendingDepth_157_; lean_object* v_customCanUnfoldPredicate_x3f_158_; uint8_t v_univApprox_159_; uint8_t v_inTypeClassResolution_160_; uint8_t v_cacheInferType_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_keyedConfig_151_ = lean_ctor_get(v_a_115_, 0);
v_trackZetaDelta_152_ = lean_ctor_get_uint8(v_a_115_, sizeof(void*)*7);
v_zetaDeltaSet_153_ = lean_ctor_get(v_a_115_, 1);
v_lctx_154_ = lean_ctor_get(v_a_115_, 2);
v_localInstances_155_ = lean_ctor_get(v_a_115_, 3);
v_defEqCtx_x3f_156_ = lean_ctor_get(v_a_115_, 4);
v_synthPendingDepth_157_ = lean_ctor_get(v_a_115_, 5);
v_customCanUnfoldPredicate_x3f_158_ = lean_ctor_get(v_a_115_, 6);
v_univApprox_159_ = lean_ctor_get_uint8(v_a_115_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_160_ = lean_ctor_get_uint8(v_a_115_, sizeof(void*)*7 + 2);
v_cacheInferType_161_ = lean_ctor_get_uint8(v_a_115_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_151_);
v___x_162_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_149_, v_keyedConfig_151_);
lean_inc(v_customCanUnfoldPredicate_x3f_158_);
lean_inc(v_synthPendingDepth_157_);
lean_inc(v_defEqCtx_x3f_156_);
lean_inc_ref(v_localInstances_155_);
lean_inc_ref(v_lctx_154_);
lean_inc(v_zetaDeltaSet_153_);
v___x_163_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v_zetaDeltaSet_153_);
lean_ctor_set(v___x_163_, 2, v_lctx_154_);
lean_ctor_set(v___x_163_, 3, v_localInstances_155_);
lean_ctor_set(v___x_163_, 4, v_defEqCtx_x3f_156_);
lean_ctor_set(v___x_163_, 5, v_synthPendingDepth_157_);
lean_ctor_set(v___x_163_, 6, v_customCanUnfoldPredicate_x3f_158_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*7, v_trackZetaDelta_152_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*7 + 1, v_univApprox_159_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*7 + 2, v_inTypeClassResolution_160_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*7 + 3, v_cacheInferType_161_);
v___x_164_ = l_Lean_Meta_isExprDefEq(v_e1_113_, v_e2_114_, v___x_163_, v_a_116_, v___y_140_, v___y_139_);
lean_dec_ref(v___y_140_);
lean_dec_ref_known(v___x_163_, 7);
v___y_121_ = v___x_164_;
goto v___jp_120_;
}
else
{
lean_object* v___x_165_; 
v___x_165_ = l_Lean_Meta_isExprDefEq(v_e1_113_, v_e2_114_, v_a_115_, v_a_116_, v___y_140_, v___y_139_);
lean_dec_ref(v___y_140_);
v___y_121_ = v___x_165_;
goto v___jp_120_;
}
}
else
{
lean_object* v___x_167_; 
lean_dec_ref(v___y_140_);
lean_dec_ref(v_e2_114_);
lean_dec_ref(v_e1_113_);
if (v_isShared_145_ == 0)
{
v___x_167_ = v___x_144_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_142_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_dec_ref(v___y_140_);
lean_dec_ref(v_e2_114_);
lean_dec_ref(v_e1_113_);
v_a_170_ = lean_ctor_get(v___y_141_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___y_141_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___y_141_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___y_141_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
v___jp_196_:
{
lean_object* v___x_215_; uint8_t v_transparency_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_215_ = l_Lean_Meta_Context_config(v_a_115_);
v_transparency_216_ = lean_ctor_get_uint8(v___x_215_, 9);
lean_dec_ref(v___x_215_);
v___x_217_ = l_Lean_maxRecDepth;
v___x_218_ = l_Lean_Option_get___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__0(v___y_197_, v___x_217_);
v___x_219_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_219_, 0, v_fileName_199_);
lean_ctor_set(v___x_219_, 1, v_fileMap_200_);
lean_ctor_set(v___x_219_, 2, v___y_197_);
lean_ctor_set(v___x_219_, 3, v___x_218_);
lean_ctor_set(v___x_219_, 4, v_currNamespace_201_);
lean_ctor_set(v___x_219_, 5, v_openDecls_202_);
lean_ctor_set(v___x_219_, 6, v_initHeartbeats_203_);
lean_ctor_set(v___x_219_, 7, v_maxHeartbeats_204_);
lean_ctor_set(v___x_219_, 8, v_quotContext_205_);
lean_ctor_set(v___x_219_, 9, v_currMacroScope_206_);
lean_ctor_set(v___x_219_, 10, v_cancelTk_x3f_207_);
lean_ctor_set(v___x_219_, 11, v_inheritedTraceOptions_208_);
lean_inc(v_ref_210_);
lean_inc(v_currRecDepth_209_);
v___x_220_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v_currRecDepth_209_);
lean_ctor_set(v___x_220_, 2, v_ref_210_);
lean_ctor_set_uint16(v___x_220_, sizeof(void*)*3, v___y_198_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*3 + 2, v_suppressElabErrors_211_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*3 + 3, v_checkDeprecated_212_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*3 + 4, v_isRecordingDeps_213_);
v___x_221_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_216_, v___x_195_);
if (v___x_221_ == 0)
{
lean_object* v_keyedConfig_222_; uint8_t v_trackZetaDelta_223_; lean_object* v_zetaDeltaSet_224_; lean_object* v_lctx_225_; lean_object* v_localInstances_226_; lean_object* v_defEqCtx_x3f_227_; lean_object* v_synthPendingDepth_228_; lean_object* v_customCanUnfoldPredicate_x3f_229_; uint8_t v_univApprox_230_; uint8_t v_inTypeClassResolution_231_; uint8_t v_cacheInferType_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v_keyedConfig_222_ = lean_ctor_get(v_a_115_, 0);
v_trackZetaDelta_223_ = lean_ctor_get_uint8(v_a_115_, sizeof(void*)*7);
v_zetaDeltaSet_224_ = lean_ctor_get(v_a_115_, 1);
v_lctx_225_ = lean_ctor_get(v_a_115_, 2);
v_localInstances_226_ = lean_ctor_get(v_a_115_, 3);
v_defEqCtx_x3f_227_ = lean_ctor_get(v_a_115_, 4);
v_synthPendingDepth_228_ = lean_ctor_get(v_a_115_, 5);
v_customCanUnfoldPredicate_x3f_229_ = lean_ctor_get(v_a_115_, 6);
v_univApprox_230_ = lean_ctor_get_uint8(v_a_115_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_231_ = lean_ctor_get_uint8(v_a_115_, sizeof(void*)*7 + 2);
v_cacheInferType_232_ = lean_ctor_get_uint8(v_a_115_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_222_);
v___x_233_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_195_, v_keyedConfig_222_);
lean_inc(v_customCanUnfoldPredicate_x3f_229_);
lean_inc(v_synthPendingDepth_228_);
lean_inc(v_defEqCtx_x3f_227_);
lean_inc_ref(v_localInstances_226_);
lean_inc_ref(v_lctx_225_);
lean_inc(v_zetaDeltaSet_224_);
v___x_234_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v_zetaDeltaSet_224_);
lean_ctor_set(v___x_234_, 2, v_lctx_225_);
lean_ctor_set(v___x_234_, 3, v_localInstances_226_);
lean_ctor_set(v___x_234_, 4, v_defEqCtx_x3f_227_);
lean_ctor_set(v___x_234_, 5, v_synthPendingDepth_228_);
lean_ctor_set(v___x_234_, 6, v_customCanUnfoldPredicate_x3f_229_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*7, v_trackZetaDelta_223_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*7 + 1, v_univApprox_230_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*7 + 2, v_inTypeClassResolution_231_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*7 + 3, v_cacheInferType_232_);
lean_inc_ref(v_e2_114_);
lean_inc_ref(v_e1_113_);
v___x_235_ = l_Lean_Meta_isExprDefEq(v_e1_113_, v_e2_114_, v___x_234_, v_a_116_, v___x_220_, v___y_214_);
lean_dec_ref_known(v___x_234_, 7);
v___y_139_ = v___y_214_;
v___y_140_ = v___x_220_;
v___y_141_ = v___x_235_;
goto v___jp_138_;
}
else
{
lean_object* v___x_236_; 
lean_inc_ref(v_e2_114_);
lean_inc_ref(v_e1_113_);
v___x_236_ = l_Lean_Meta_isExprDefEq(v_e1_113_, v_e2_114_, v_a_115_, v_a_116_, v___x_220_, v___y_214_);
v___y_139_ = v___y_214_;
v___y_140_ = v___x_220_;
v___y_141_ = v___x_236_;
goto v___jp_138_;
}
}
v___jp_237_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2);
v___x_250_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_250_, 0, v___y_248_);
lean_ctor_set(v___x_250_, 1, v_nextMacroScope_239_);
lean_ctor_set(v___x_250_, 2, v_ngen_240_);
lean_ctor_set(v___x_250_, 3, v_auxDeclNGen_241_);
lean_ctor_set(v___x_250_, 4, v_traceState_242_);
lean_ctor_set(v___x_250_, 5, v___x_249_);
lean_ctor_set(v___x_250_, 6, v_recordedDeps_243_);
lean_ctor_set(v___x_250_, 7, v_messages_244_);
lean_ctor_set(v___x_250_, 8, v_infoState_245_);
lean_ctor_set(v___x_250_, 9, v_snapshotTasks_246_);
v___x_251_ = lean_st_ref_put(v_a_118_, v___x_250_);
lean_inc_ref(v_inheritedTraceOptions_194_);
lean_inc(v_cancelTk_x3f_193_);
lean_inc(v_currMacroScope_192_);
lean_inc(v_quotContext_191_);
lean_inc(v_maxHeartbeats_190_);
lean_inc(v_initHeartbeats_189_);
lean_inc(v_openDecls_188_);
lean_inc(v_currNamespace_187_);
lean_inc_ref(v_fileMap_185_);
lean_inc_ref(v_fileName_184_);
v___y_197_ = v___y_238_;
v___y_198_ = v___y_247_;
v_fileName_199_ = v_fileName_184_;
v_fileMap_200_ = v_fileMap_185_;
v_currNamespace_201_ = v_currNamespace_187_;
v_openDecls_202_ = v_openDecls_188_;
v_initHeartbeats_203_ = v_initHeartbeats_189_;
v_maxHeartbeats_204_ = v_maxHeartbeats_190_;
v_quotContext_205_ = v_quotContext_191_;
v_currMacroScope_206_ = v_currMacroScope_192_;
v_cancelTk_x3f_207_ = v_cancelTk_x3f_193_;
v_inheritedTraceOptions_208_ = v_inheritedTraceOptions_194_;
v_currRecDepth_209_ = v_currRecDepth_179_;
v_ref_210_ = v_ref_180_;
v_suppressElabErrors_211_ = v_suppressElabErrors_181_;
v_checkDeprecated_212_ = v_checkDeprecated_182_;
v_isRecordingDeps_213_ = v_isRecordingDeps_183_;
v___y_214_ = v_a_118_;
goto v___jp_196_;
}
v___jp_252_:
{
uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v_env_258_; lean_object* v_nextMacroScope_259_; lean_object* v_ngen_260_; lean_object* v_auxDeclNGen_261_; lean_object* v_traceState_262_; lean_object* v_recordedDeps_263_; lean_object* v_messages_264_; lean_object* v_infoState_265_; lean_object* v_snapshotTasks_266_; uint16_t v___x_267_; uint16_t v___x_268_; uint16_t v___x_269_; uint8_t v___x_270_; 
v___x_256_ = 1;
v___x_257_ = lean_st_ref_take(v_a_118_);
v_env_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc_ref(v_env_258_);
v_nextMacroScope_259_ = lean_ctor_get(v___x_257_, 1);
lean_inc(v_nextMacroScope_259_);
v_ngen_260_ = lean_ctor_get(v___x_257_, 2);
lean_inc_ref(v_ngen_260_);
v_auxDeclNGen_261_ = lean_ctor_get(v___x_257_, 3);
lean_inc_ref(v_auxDeclNGen_261_);
v_traceState_262_ = lean_ctor_get(v___x_257_, 4);
lean_inc_ref(v_traceState_262_);
v_recordedDeps_263_ = lean_ctor_get(v___x_257_, 6);
lean_inc_ref(v_recordedDeps_263_);
v_messages_264_ = lean_ctor_get(v___x_257_, 7);
lean_inc_ref(v_messages_264_);
v_infoState_265_ = lean_ctor_get(v___x_257_, 8);
lean_inc_ref(v_infoState_265_);
v_snapshotTasks_266_ = lean_ctor_get(v___x_257_, 9);
lean_inc_ref(v_snapshotTasks_266_);
lean_dec(v___x_257_);
v___x_267_ = 512;
v___x_268_ = lean_uint16_land(v___y_254_, v___x_267_);
v___x_269_ = 0;
v___x_270_ = lean_uint16_dec_eq(v___x_268_, v___x_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_Kernel_enableDiag(v_env_258_, v___x_256_);
v___y_238_ = v___y_253_;
v_nextMacroScope_239_ = v_nextMacroScope_259_;
v_ngen_240_ = v_ngen_260_;
v_auxDeclNGen_241_ = v_auxDeclNGen_261_;
v_traceState_242_ = v_traceState_262_;
v_recordedDeps_243_ = v_recordedDeps_263_;
v_messages_244_ = v_messages_264_;
v_infoState_245_ = v_infoState_265_;
v_snapshotTasks_246_ = v_snapshotTasks_266_;
v___y_247_ = v___y_254_;
v___y_248_ = v___x_271_;
goto v___jp_237_;
}
else
{
lean_object* v___x_272_; 
v___x_272_ = l_Lean_Kernel_enableDiag(v_env_258_, v___y_255_);
v___y_238_ = v___y_253_;
v_nextMacroScope_239_ = v_nextMacroScope_259_;
v_ngen_240_ = v_ngen_260_;
v_auxDeclNGen_241_ = v_auxDeclNGen_261_;
v_traceState_242_ = v_traceState_262_;
v_recordedDeps_243_ = v_recordedDeps_263_;
v_messages_244_ = v_messages_264_;
v_infoState_245_ = v_infoState_265_;
v_snapshotTasks_246_ = v_snapshotTasks_266_;
v___y_247_ = v___y_254_;
v___y_248_ = v___x_272_;
goto v___jp_237_;
}
}
v___jp_273_:
{
uint16_t v___x_275_; lean_object* v___x_276_; lean_object* v_env_277_; uint8_t v___x_278_; uint16_t v___x_279_; uint16_t v___x_280_; uint16_t v___x_281_; uint8_t v___x_282_; 
v___x_275_ = l_Lean_OptionFlags_ofOptions(v___y_274_);
v___x_276_ = lean_st_ref_get(v_a_118_);
v_env_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc_ref(v_env_277_);
lean_dec(v___x_276_);
v___x_278_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_277_);
lean_dec_ref(v_env_277_);
v___x_279_ = 512;
v___x_280_ = lean_uint16_land(v___x_275_, v___x_279_);
v___x_281_ = 0;
v___x_282_ = lean_uint16_dec_eq(v___x_280_, v___x_281_);
if (v___x_282_ == 0)
{
if (v___x_278_ == 0)
{
v___y_253_ = v___y_274_;
v___y_254_ = v___x_275_;
v___y_255_ = v___x_278_;
goto v___jp_252_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_194_);
lean_inc(v_cancelTk_x3f_193_);
lean_inc(v_currMacroScope_192_);
lean_inc(v_quotContext_191_);
lean_inc(v_maxHeartbeats_190_);
lean_inc(v_initHeartbeats_189_);
lean_inc(v_openDecls_188_);
lean_inc(v_currNamespace_187_);
lean_inc_ref(v_fileMap_185_);
lean_inc_ref(v_fileName_184_);
v___y_197_ = v___y_274_;
v___y_198_ = v___x_275_;
v_fileName_199_ = v_fileName_184_;
v_fileMap_200_ = v_fileMap_185_;
v_currNamespace_201_ = v_currNamespace_187_;
v_openDecls_202_ = v_openDecls_188_;
v_initHeartbeats_203_ = v_initHeartbeats_189_;
v_maxHeartbeats_204_ = v_maxHeartbeats_190_;
v_quotContext_205_ = v_quotContext_191_;
v_currMacroScope_206_ = v_currMacroScope_192_;
v_cancelTk_x3f_207_ = v_cancelTk_x3f_193_;
v_inheritedTraceOptions_208_ = v_inheritedTraceOptions_194_;
v_currRecDepth_209_ = v_currRecDepth_179_;
v_ref_210_ = v_ref_180_;
v_suppressElabErrors_211_ = v_suppressElabErrors_181_;
v_checkDeprecated_212_ = v_checkDeprecated_182_;
v_isRecordingDeps_213_ = v_isRecordingDeps_183_;
v___y_214_ = v_a_118_;
goto v___jp_196_;
}
}
else
{
if (v___x_278_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_194_);
lean_inc(v_cancelTk_x3f_193_);
lean_inc(v_currMacroScope_192_);
lean_inc(v_quotContext_191_);
lean_inc(v_maxHeartbeats_190_);
lean_inc(v_initHeartbeats_189_);
lean_inc(v_openDecls_188_);
lean_inc(v_currNamespace_187_);
lean_inc_ref(v_fileMap_185_);
lean_inc_ref(v_fileName_184_);
v___y_197_ = v___y_274_;
v___y_198_ = v___x_275_;
v_fileName_199_ = v_fileName_184_;
v_fileMap_200_ = v_fileMap_185_;
v_currNamespace_201_ = v_currNamespace_187_;
v_openDecls_202_ = v_openDecls_188_;
v_initHeartbeats_203_ = v_initHeartbeats_189_;
v_maxHeartbeats_204_ = v_maxHeartbeats_190_;
v_quotContext_205_ = v_quotContext_191_;
v_currMacroScope_206_ = v_currMacroScope_192_;
v_cancelTk_x3f_207_ = v_cancelTk_x3f_193_;
v_inheritedTraceOptions_208_ = v_inheritedTraceOptions_194_;
v_currRecDepth_209_ = v_currRecDepth_179_;
v_ref_210_ = v_ref_180_;
v_suppressElabErrors_211_ = v_suppressElabErrors_181_;
v_checkDeprecated_212_ = v_checkDeprecated_182_;
v_isRecordingDeps_213_ = v_isRecordingDeps_183_;
v___y_214_ = v_a_118_;
goto v___jp_196_;
}
else
{
uint8_t v___x_283_; 
v___x_283_ = 0;
v___y_253_ = v___y_274_;
v___y_254_ = v___x_275_;
v___y_255_ = v___x_283_;
goto v___jp_252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___boxed(lean_object* v_e1_287_, lean_object* v_e2_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful(v_e1_287_, v_e2_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_);
lean_dec(v_a_292_);
lean_dec_ref(v_a_291_);
lean_dec(v_a_290_);
lean_dec_ref(v_a_289_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg___lam__0(lean_object* v_k_295_, lean_object* v_b_296_, lean_object* v_c_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_){
_start:
{
lean_object* v___x_303_; 
lean_inc(v___y_301_);
lean_inc_ref(v___y_300_);
lean_inc(v___y_299_);
lean_inc_ref(v___y_298_);
v___x_303_ = lean_apply_7(v_k_295_, v_b_296_, v_c_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, lean_box(0));
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg___lam__0___boxed(lean_object* v_k_304_, lean_object* v_b_305_, lean_object* v_c_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg___lam__0(v_k_304_, v_b_305_, v_c_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg(lean_object* v_type_313_, lean_object* v_k_314_, uint8_t v_cleanupAnnotations_315_, uint8_t v_whnfType_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v___f_322_; lean_object* v___x_323_; 
v___f_322_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_322_, 0, v_k_314_);
v___x_323_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_313_, v___f_322_, v_cleanupAnnotations_315_, v_whnfType_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_323_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_323_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
else
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
v_a_332_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v___x_323_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_323_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg___boxed(lean_object* v_type_340_, lean_object* v_k_341_, lean_object* v_cleanupAnnotations_342_, lean_object* v_whnfType_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_349_; uint8_t v_whnfType_boxed_350_; lean_object* v_res_351_; 
v_cleanupAnnotations_boxed_349_ = lean_unbox(v_cleanupAnnotations_342_);
v_whnfType_boxed_350_ = lean_unbox(v_whnfType_343_);
v_res_351_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg(v_type_340_, v_k_341_, v_cleanupAnnotations_boxed_349_, v_whnfType_boxed_350_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
lean_dec(v___y_347_);
lean_dec_ref(v___y_346_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1(lean_object* v_00_u03b1_352_, lean_object* v_type_353_, lean_object* v_k_354_, uint8_t v_cleanupAnnotations_355_, uint8_t v_whnfType_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg(v_type_353_, v_k_354_, v_cleanupAnnotations_355_, v_whnfType_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___boxed(lean_object* v_00_u03b1_363_, lean_object* v_type_364_, lean_object* v_k_365_, lean_object* v_cleanupAnnotations_366_, lean_object* v_whnfType_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_373_; uint8_t v_whnfType_boxed_374_; lean_object* v_res_375_; 
v_cleanupAnnotations_boxed_373_ = lean_unbox(v_cleanupAnnotations_366_);
v_whnfType_boxed_374_ = lean_unbox(v_whnfType_367_);
v_res_375_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1(v_00_u03b1_363_, v_type_364_, v_k_365_, v_cleanupAnnotations_boxed_373_, v_whnfType_boxed_374_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0_spec__0(lean_object* v_msgData_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v___x_382_; lean_object* v_env_383_; uint8_t v___x_384_; lean_object* v_env_385_; lean_object* v___x_386_; lean_object* v_toCold_387_; lean_object* v_mctx_388_; lean_object* v_lctx_389_; lean_object* v_options_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_382_ = lean_st_ref_get(v___y_380_);
v_env_383_ = lean_ctor_get(v___x_382_, 0);
lean_inc_ref(v_env_383_);
lean_dec(v___x_382_);
v___x_384_ = 0;
v_env_385_ = l_Lean_Environment_setRecordingDeps(v_env_383_, v___x_384_);
v___x_386_ = lean_st_ref_get(v___y_378_);
v_toCold_387_ = lean_ctor_get(v___y_379_, 0);
v_mctx_388_ = lean_ctor_get(v___x_386_, 0);
lean_inc_ref(v_mctx_388_);
lean_dec(v___x_386_);
v_lctx_389_ = lean_ctor_get(v___y_377_, 2);
v_options_390_ = lean_ctor_get(v_toCold_387_, 2);
lean_inc_ref(v_options_390_);
lean_inc_ref(v_lctx_389_);
v___x_391_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_391_, 0, v_env_385_);
lean_ctor_set(v___x_391_, 1, v_mctx_388_);
lean_ctor_set(v___x_391_, 2, v_lctx_389_);
lean_ctor_set(v___x_391_, 3, v_options_390_);
v___x_392_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v_msgData_376_);
v___x_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0_spec__0___boxed(lean_object* v_msgData_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0_spec__0(v_msgData_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(lean_object* v_msg_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_ref_407_; lean_object* v___x_408_; lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_417_; 
v_ref_407_ = lean_ctor_get(v___y_404_, 2);
v___x_408_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0_spec__0(v_msg_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
v_a_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_417_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_417_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_417_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_415_; 
lean_inc(v_ref_407_);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_ref_407_);
lean_ctor_set(v___x_413_, 1, v_a_409_);
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 1);
lean_ctor_set(v___x_411_, 0, v___x_413_);
v___x_415_ = v___x_411_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_413_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg___boxed(lean_object* v_msg_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(v_msg_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
return v_res_424_;
}
}
static lean_object* _init_l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__2));
v___x_430_ = l_Lean_stringToMessageData(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0(lean_object* v_k_431_, lean_object* v_x_432_, lean_object* v_type_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___x_439_; 
lean_inc(v___y_437_);
lean_inc_ref(v___y_436_);
lean_inc(v___y_435_);
lean_inc_ref(v___y_434_);
v___x_439_ = lean_whnf(v_type_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
if (lean_obj_tag(v___x_439_) == 0)
{
lean_object* v_a_440_; lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v___x_443_; 
v_a_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_a_440_);
lean_dec_ref_known(v___x_439_, 1);
v___x_441_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__1));
v___x_442_ = lean_unsigned_to_nat(3u);
v___x_443_ = l_Lean_Expr_isAppOfArity(v_a_440_, v___x_441_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec_ref(v_k_431_);
v___x_444_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__3, &l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__3_once, _init_l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__3);
v___x_445_ = lean_unsigned_to_nat(30u);
v___x_446_ = l_Lean_inlineExpr(v_a_440_, v___x_445_);
v___x_447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_444_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(v___x_447_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
return v___x_448_;
}
else
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_449_ = l_Lean_Expr_appFn_x21(v_a_440_);
v___x_450_ = l_Lean_Expr_appArg_x21(v___x_449_);
lean_dec_ref(v___x_449_);
v___x_451_ = l_Lean_Expr_appArg_x21(v_a_440_);
lean_dec(v_a_440_);
lean_inc(v___y_437_);
lean_inc_ref(v___y_436_);
lean_inc(v___y_435_);
lean_inc_ref(v___y_434_);
v___x_452_ = lean_apply_7(v_k_431_, v___x_450_, v___x_451_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, lean_box(0));
return v___x_452_;
}
}
else
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
lean_dec_ref(v_k_431_);
v_a_453_ = lean_ctor_get(v___x_439_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_439_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_439_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___boxed(lean_object* v_k_461_, lean_object* v_x_462_, lean_object* v_type_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0(v_k_461_, v_x_462_, v_type_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec_ref(v_x_462_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg(lean_object* v_type_470_, lean_object* v_k_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
lean_object* v___y_478_; lean_object* v___x_495_; uint8_t v_transparency_496_; lean_object* v___f_497_; uint8_t v___x_498_; uint8_t v___x_499_; uint8_t v___x_500_; 
v___x_495_ = l_Lean_Meta_Context_config(v_a_472_);
v_transparency_496_ = lean_ctor_get_uint8(v___x_495_, 9);
lean_dec_ref(v___x_495_);
v___f_497_ = lean_alloc_closure((void*)(l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_497_, 0, v_k_471_);
v___x_498_ = 0;
v___x_499_ = 0;
v___x_500_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_496_, v___x_498_);
if (v___x_500_ == 0)
{
lean_object* v_keyedConfig_501_; uint8_t v_trackZetaDelta_502_; lean_object* v_zetaDeltaSet_503_; lean_object* v_lctx_504_; lean_object* v_localInstances_505_; lean_object* v_defEqCtx_x3f_506_; lean_object* v_synthPendingDepth_507_; lean_object* v_customCanUnfoldPredicate_x3f_508_; uint8_t v_univApprox_509_; uint8_t v_inTypeClassResolution_510_; uint8_t v_cacheInferType_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_keyedConfig_501_ = lean_ctor_get(v_a_472_, 0);
v_trackZetaDelta_502_ = lean_ctor_get_uint8(v_a_472_, sizeof(void*)*7);
v_zetaDeltaSet_503_ = lean_ctor_get(v_a_472_, 1);
v_lctx_504_ = lean_ctor_get(v_a_472_, 2);
v_localInstances_505_ = lean_ctor_get(v_a_472_, 3);
v_defEqCtx_x3f_506_ = lean_ctor_get(v_a_472_, 4);
v_synthPendingDepth_507_ = lean_ctor_get(v_a_472_, 5);
v_customCanUnfoldPredicate_x3f_508_ = lean_ctor_get(v_a_472_, 6);
v_univApprox_509_ = lean_ctor_get_uint8(v_a_472_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_510_ = lean_ctor_get_uint8(v_a_472_, sizeof(void*)*7 + 2);
v_cacheInferType_511_ = lean_ctor_get_uint8(v_a_472_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_501_);
v___x_512_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_498_, v_keyedConfig_501_);
lean_inc(v_customCanUnfoldPredicate_x3f_508_);
lean_inc(v_synthPendingDepth_507_);
lean_inc(v_defEqCtx_x3f_506_);
lean_inc_ref(v_localInstances_505_);
lean_inc_ref(v_lctx_504_);
lean_inc(v_zetaDeltaSet_503_);
v___x_513_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_513_, 0, v___x_512_);
lean_ctor_set(v___x_513_, 1, v_zetaDeltaSet_503_);
lean_ctor_set(v___x_513_, 2, v_lctx_504_);
lean_ctor_set(v___x_513_, 3, v_localInstances_505_);
lean_ctor_set(v___x_513_, 4, v_defEqCtx_x3f_506_);
lean_ctor_set(v___x_513_, 5, v_synthPendingDepth_507_);
lean_ctor_set(v___x_513_, 6, v_customCanUnfoldPredicate_x3f_508_);
lean_ctor_set_uint8(v___x_513_, sizeof(void*)*7, v_trackZetaDelta_502_);
lean_ctor_set_uint8(v___x_513_, sizeof(void*)*7 + 1, v_univApprox_509_);
lean_ctor_set_uint8(v___x_513_, sizeof(void*)*7 + 2, v_inTypeClassResolution_510_);
lean_ctor_set_uint8(v___x_513_, sizeof(void*)*7 + 3, v_cacheInferType_511_);
v___x_514_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg(v_type_470_, v___f_497_, v___x_499_, v___x_499_, v___x_513_, v_a_473_, v_a_474_, v_a_475_);
lean_dec_ref_known(v___x_513_, 7);
v___y_478_ = v___x_514_;
goto v___jp_477_;
}
else
{
lean_object* v___x_515_; 
v___x_515_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__1___redArg(v_type_470_, v___f_497_, v___x_499_, v___x_499_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
v___y_478_ = v___x_515_;
goto v___jp_477_;
}
v___jp_477_:
{
if (lean_obj_tag(v___y_478_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
v_a_479_ = lean_ctor_get(v___y_478_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___y_478_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___y_478_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___y_478_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
else
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
v_a_487_ = lean_ctor_get(v___y_478_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___y_478_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___y_478_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___y_478_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___boxed(lean_object* v_type_516_, lean_object* v_k_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg(v_type_516_, v_k_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs(lean_object* v_00_u03b1_524_, lean_object* v_type_525_, lean_object* v_k_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg(v_type_525_, v_k_526_, v_a_527_, v_a_528_, v_a_529_, v_a_530_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___boxed(lean_object* v_00_u03b1_533_, lean_object* v_type_534_, lean_object* v_k_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs(v_00_u03b1_533_, v_type_534_, v_k_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
lean_dec(v_a_539_);
lean_dec_ref(v_a_538_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0(lean_object* v_00_u03b1_542_, lean_object* v_msg_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(v_msg_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___boxed(lean_object* v_00_u03b1_550_, lean_object* v_msg_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0(v_00_u03b1_550_, v_msg_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___lam__0(lean_object* v___y_558_, uint8_t v_isExporting_559_, lean_object* v___x_560_, lean_object* v___y_561_, lean_object* v___x_562_, lean_object* v_a_x3f_563_){
_start:
{
lean_object* v___x_565_; lean_object* v_env_566_; lean_object* v_nextMacroScope_567_; lean_object* v_ngen_568_; lean_object* v_auxDeclNGen_569_; lean_object* v_traceState_570_; lean_object* v_recordedDeps_571_; lean_object* v_messages_572_; lean_object* v_infoState_573_; lean_object* v_snapshotTasks_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_599_; 
v___x_565_ = lean_st_ref_take(v___y_558_);
v_env_566_ = lean_ctor_get(v___x_565_, 0);
v_nextMacroScope_567_ = lean_ctor_get(v___x_565_, 1);
v_ngen_568_ = lean_ctor_get(v___x_565_, 2);
v_auxDeclNGen_569_ = lean_ctor_get(v___x_565_, 3);
v_traceState_570_ = lean_ctor_get(v___x_565_, 4);
v_recordedDeps_571_ = lean_ctor_get(v___x_565_, 6);
v_messages_572_ = lean_ctor_get(v___x_565_, 7);
v_infoState_573_ = lean_ctor_get(v___x_565_, 8);
v_snapshotTasks_574_ = lean_ctor_get(v___x_565_, 9);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_599_ == 0)
{
lean_object* v_unused_600_; 
v_unused_600_ = lean_ctor_get(v___x_565_, 5);
lean_dec(v_unused_600_);
v___x_576_ = v___x_565_;
v_isShared_577_ = v_isSharedCheck_599_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_snapshotTasks_574_);
lean_inc(v_infoState_573_);
lean_inc(v_messages_572_);
lean_inc(v_recordedDeps_571_);
lean_inc(v_traceState_570_);
lean_inc(v_auxDeclNGen_569_);
lean_inc(v_ngen_568_);
lean_inc(v_nextMacroScope_567_);
lean_inc(v_env_566_);
lean_dec(v___x_565_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_599_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_578_ = l_Lean_Environment_setExporting(v_env_566_, v_isExporting_559_);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 5, v___x_560_);
lean_ctor_set(v___x_576_, 0, v___x_578_);
v___x_580_ = v___x_576_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_578_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_nextMacroScope_567_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v_ngen_568_);
lean_ctor_set(v_reuseFailAlloc_598_, 3, v_auxDeclNGen_569_);
lean_ctor_set(v_reuseFailAlloc_598_, 4, v_traceState_570_);
lean_ctor_set(v_reuseFailAlloc_598_, 5, v___x_560_);
lean_ctor_set(v_reuseFailAlloc_598_, 6, v_recordedDeps_571_);
lean_ctor_set(v_reuseFailAlloc_598_, 7, v_messages_572_);
lean_ctor_set(v_reuseFailAlloc_598_, 8, v_infoState_573_);
lean_ctor_set(v_reuseFailAlloc_598_, 9, v_snapshotTasks_574_);
v___x_580_ = v_reuseFailAlloc_598_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v_mctx_583_; lean_object* v_zetaDeltaFVarIds_584_; lean_object* v_postponed_585_; lean_object* v_diag_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_596_; 
v___x_581_ = lean_st_ref_put(v___y_558_, v___x_580_);
v___x_582_ = lean_st_ref_take(v___y_561_);
v_mctx_583_ = lean_ctor_get(v___x_582_, 0);
v_zetaDeltaFVarIds_584_ = lean_ctor_get(v___x_582_, 2);
v_postponed_585_ = lean_ctor_get(v___x_582_, 3);
v_diag_586_ = lean_ctor_get(v___x_582_, 4);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_596_ == 0)
{
lean_object* v_unused_597_; 
v_unused_597_ = lean_ctor_get(v___x_582_, 1);
lean_dec(v_unused_597_);
v___x_588_ = v___x_582_;
v_isShared_589_ = v_isSharedCheck_596_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_diag_586_);
lean_inc(v_postponed_585_);
lean_inc(v_zetaDeltaFVarIds_584_);
lean_inc(v_mctx_583_);
lean_dec(v___x_582_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_596_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; lean_object* v___x_592_; 
v___x_590_ = lean_box(0);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v___x_562_);
v___x_592_ = v___x_588_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_mctx_583_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_595_, 2, v_zetaDeltaFVarIds_584_);
lean_ctor_set(v_reuseFailAlloc_595_, 3, v_postponed_585_);
lean_ctor_set(v_reuseFailAlloc_595_, 4, v_diag_586_);
v___x_592_ = v_reuseFailAlloc_595_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_st_ref_put(v___y_561_, v___x_592_);
v___x_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_594_, 0, v___x_590_);
return v___x_594_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v___y_601_, lean_object* v_isExporting_602_, lean_object* v___x_603_, lean_object* v___y_604_, lean_object* v___x_605_, lean_object* v_a_x3f_606_, lean_object* v___y_607_){
_start:
{
uint8_t v_isExporting_boxed_608_; lean_object* v_res_609_; 
v_isExporting_boxed_608_ = lean_unbox(v_isExporting_602_);
v_res_609_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___lam__0(v___y_601_, v_isExporting_boxed_608_, v___x_603_, v___y_604_, v___x_605_, v_a_x3f_606_);
lean_dec(v_a_x3f_606_);
lean_dec(v___y_604_);
lean_dec(v___y_601_);
return v_res_609_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0);
v___x_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg(){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg___closed__0);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg___boxed(lean_object* v___dummy_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg();
return v_res_615_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4___redArg();
return v___x_616_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_unsigned_to_nat(0u);
v___x_620_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1);
v___x_621_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
lean_ctor_set(v___x_621_, 2, v___x_619_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_622_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__2);
v___x_623_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__1);
v___x_624_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__1);
v___x_625_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0);
v___x_626_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
lean_ctor_set(v___x_626_, 2, v___x_623_);
lean_ctor_set(v___x_626_, 3, v___x_624_);
lean_ctor_set(v___x_626_, 4, v___x_624_);
lean_ctor_set(v___x_626_, 5, v___x_624_);
lean_ctor_set(v___x_626_, 6, v___x_624_);
lean_ctor_set(v___x_626_, 7, v___x_622_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg(lean_object* v_x_627_, uint8_t v_isExporting_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v___x_634_; lean_object* v_env_635_; lean_object* v___x_636_; uint8_t v_isModule_637_; 
v___x_634_ = lean_st_ref_get(v___y_632_);
v_env_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc_ref(v_env_635_);
lean_dec(v___x_634_);
v___x_636_ = l_Lean_Environment_header(v_env_635_);
v_isModule_637_ = lean_ctor_get_uint8(v___x_636_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_636_);
if (v_isModule_637_ == 0)
{
lean_object* v___x_638_; 
lean_dec_ref(v_env_635_);
lean_inc(v___y_632_);
lean_inc_ref(v___y_631_);
lean_inc(v___y_630_);
lean_inc_ref(v___y_629_);
v___x_638_ = lean_apply_5(v_x_627_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, lean_box(0));
return v___x_638_;
}
else
{
uint8_t v_isExporting_639_; 
v_isExporting_639_ = lean_ctor_get_uint8(v_env_635_, sizeof(void*)*13);
lean_dec_ref(v_env_635_);
if (v_isExporting_628_ == 0)
{
if (v_isExporting_639_ == 0)
{
lean_object* v___x_706_; 
lean_inc(v___y_632_);
lean_inc_ref(v___y_631_);
lean_inc(v___y_630_);
lean_inc_ref(v___y_629_);
v___x_706_ = lean_apply_5(v_x_627_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, lean_box(0));
return v___x_706_;
}
else
{
goto v___jp_640_;
}
}
else
{
if (v_isExporting_639_ == 0)
{
goto v___jp_640_;
}
else
{
lean_object* v___x_707_; 
lean_inc(v___y_632_);
lean_inc_ref(v___y_631_);
lean_inc(v___y_630_);
lean_inc_ref(v___y_629_);
v___x_707_ = lean_apply_5(v_x_627_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, lean_box(0));
return v___x_707_;
}
}
v___jp_640_:
{
lean_object* v___x_641_; lean_object* v_env_642_; lean_object* v_nextMacroScope_643_; lean_object* v_ngen_644_; lean_object* v_auxDeclNGen_645_; lean_object* v_traceState_646_; lean_object* v_recordedDeps_647_; lean_object* v_messages_648_; lean_object* v_infoState_649_; lean_object* v_snapshotTasks_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_704_; 
v___x_641_ = lean_st_ref_take(v___y_632_);
v_env_642_ = lean_ctor_get(v___x_641_, 0);
v_nextMacroScope_643_ = lean_ctor_get(v___x_641_, 1);
v_ngen_644_ = lean_ctor_get(v___x_641_, 2);
v_auxDeclNGen_645_ = lean_ctor_get(v___x_641_, 3);
v_traceState_646_ = lean_ctor_get(v___x_641_, 4);
v_recordedDeps_647_ = lean_ctor_get(v___x_641_, 6);
v_messages_648_ = lean_ctor_get(v___x_641_, 7);
v_infoState_649_ = lean_ctor_get(v___x_641_, 8);
v_snapshotTasks_650_ = lean_ctor_get(v___x_641_, 9);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_704_ == 0)
{
lean_object* v_unused_705_; 
v_unused_705_ = lean_ctor_get(v___x_641_, 5);
lean_dec(v_unused_705_);
v___x_652_ = v___x_641_;
v_isShared_653_ = v_isSharedCheck_704_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_snapshotTasks_650_);
lean_inc(v_infoState_649_);
lean_inc(v_messages_648_);
lean_inc(v_recordedDeps_647_);
lean_inc(v_traceState_646_);
lean_inc(v_auxDeclNGen_645_);
lean_inc(v_ngen_644_);
lean_inc(v_nextMacroScope_643_);
lean_inc(v_env_642_);
lean_dec(v___x_641_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_704_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_654_ = l_Lean_Environment_setExporting(v_env_642_, v_isExporting_628_);
v___x_655_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 5, v___x_655_);
lean_ctor_set(v___x_652_, 0, v___x_654_);
v___x_657_ = v___x_652_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_654_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v_nextMacroScope_643_);
lean_ctor_set(v_reuseFailAlloc_703_, 2, v_ngen_644_);
lean_ctor_set(v_reuseFailAlloc_703_, 3, v_auxDeclNGen_645_);
lean_ctor_set(v_reuseFailAlloc_703_, 4, v_traceState_646_);
lean_ctor_set(v_reuseFailAlloc_703_, 5, v___x_655_);
lean_ctor_set(v_reuseFailAlloc_703_, 6, v_recordedDeps_647_);
lean_ctor_set(v_reuseFailAlloc_703_, 7, v_messages_648_);
lean_ctor_set(v_reuseFailAlloc_703_, 8, v_infoState_649_);
lean_ctor_set(v_reuseFailAlloc_703_, 9, v_snapshotTasks_650_);
v___x_657_ = v_reuseFailAlloc_703_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v_mctx_660_; lean_object* v_zetaDeltaFVarIds_661_; lean_object* v_postponed_662_; lean_object* v_diag_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_701_; 
v___x_658_ = lean_st_ref_put(v___y_632_, v___x_657_);
v___x_659_ = lean_st_ref_take(v___y_630_);
v_mctx_660_ = lean_ctor_get(v___x_659_, 0);
v_zetaDeltaFVarIds_661_ = lean_ctor_get(v___x_659_, 2);
v_postponed_662_ = lean_ctor_get(v___x_659_, 3);
v_diag_663_ = lean_ctor_get(v___x_659_, 4);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; 
v_unused_702_ = lean_ctor_get(v___x_659_, 1);
lean_dec(v_unused_702_);
v___x_665_ = v___x_659_;
v_isShared_666_ = v_isSharedCheck_701_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_diag_663_);
lean_inc(v_postponed_662_);
lean_inc(v_zetaDeltaFVarIds_661_);
lean_inc(v_mctx_660_);
lean_dec(v___x_659_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_701_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; lean_object* v___x_669_; 
v___x_667_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 1, v___x_667_);
v___x_669_ = v___x_665_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_mctx_660_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_700_, 2, v_zetaDeltaFVarIds_661_);
lean_ctor_set(v_reuseFailAlloc_700_, 3, v_postponed_662_);
lean_ctor_set(v_reuseFailAlloc_700_, 4, v_diag_663_);
v___x_669_ = v_reuseFailAlloc_700_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
lean_object* v___x_670_; lean_object* v_r_671_; 
v___x_670_ = lean_st_ref_put(v___y_630_, v___x_669_);
lean_inc(v___y_632_);
lean_inc_ref(v___y_631_);
lean_inc(v___y_630_);
lean_inc_ref(v___y_629_);
v_r_671_ = lean_apply_5(v_x_627_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, lean_box(0));
if (lean_obj_tag(v_r_671_) == 0)
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_688_; 
v_a_672_ = lean_ctor_get(v_r_671_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v_r_671_);
if (v_isSharedCheck_688_ == 0)
{
v___x_674_ = v_r_671_;
v_isShared_675_ = v_isSharedCheck_688_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v_r_671_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_688_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
lean_inc(v_a_672_);
if (v_isShared_675_ == 0)
{
lean_ctor_set_tag(v___x_674_, 1);
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_672_);
v___x_677_ = v_reuseFailAlloc_687_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
v___x_678_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___lam__0(v___y_632_, v_isExporting_639_, v___x_655_, v___y_630_, v___x_667_, v___x_677_);
lean_dec_ref(v___x_677_);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; 
v_unused_686_ = lean_ctor_get(v___x_678_, 0);
lean_dec(v_unused_686_);
v___x_680_ = v___x_678_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_dec(v___x_678_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v_a_672_);
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_672_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_698_; 
v_a_689_ = lean_ctor_get(v_r_671_, 0);
lean_inc(v_a_689_);
lean_dec_ref_known(v_r_671_, 1);
v___x_690_ = lean_box(0);
v___x_691_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___lam__0(v___y_632_, v_isExporting_639_, v___x_655_, v___y_630_, v___x_667_, v___x_690_);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_698_ == 0)
{
lean_object* v_unused_699_; 
v_unused_699_ = lean_ctor_get(v___x_691_, 0);
lean_dec(v_unused_699_);
v___x_693_ = v___x_691_;
v_isShared_694_ = v_isSharedCheck_698_;
goto v_resetjp_692_;
}
else
{
lean_dec(v___x_691_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_698_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_696_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set_tag(v___x_693_, 1);
lean_ctor_set(v___x_693_, 0, v_a_689_);
v___x_696_ = v___x_693_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_a_689_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___boxed(lean_object* v_x_708_, lean_object* v_isExporting_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
uint8_t v_isExporting_boxed_715_; lean_object* v_res_716_; 
v_isExporting_boxed_715_ = lean_unbox(v_isExporting_709_);
v_res_716_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg(v_x_708_, v_isExporting_boxed_715_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___redArg(lean_object* v_x_717_, uint8_t v_when_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
if (v_when_718_ == 0)
{
lean_object* v___x_724_; 
lean_inc(v___y_722_);
lean_inc_ref(v___y_721_);
lean_inc(v___y_720_);
lean_inc_ref(v___y_719_);
v___x_724_ = lean_apply_5(v_x_717_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, lean_box(0));
return v___x_724_;
}
else
{
uint8_t v___x_725_; lean_object* v___x_726_; 
v___x_725_ = 0;
v___x_726_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg(v_x_717_, v___x_725_, v___y_719_, v___y_720_, v___y_721_, v___y_722_);
return v___x_726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___redArg___boxed(lean_object* v_x_727_, lean_object* v_when_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
uint8_t v_when_boxed_734_; lean_object* v_res_735_; 
v_when_boxed_734_ = lean_unbox(v_when_728_);
v_res_735_ = l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___redArg(v_x_727_, v_when_boxed_734_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
return v_res_735_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___lam__0___closed__1(void){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_737_ = ((lean_object*)(l_Lean_validateDefEqAttr___lam__0___closed__0));
v___x_738_ = l_Lean_stringToMessageData(v___x_737_);
return v___x_738_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___lam__0___closed__3(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = ((lean_object*)(l_Lean_validateDefEqAttr___lam__0___closed__2));
v___x_741_ = l_Lean_stringToMessageData(v___x_740_);
return v___x_741_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___lam__0___closed__5(void){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = ((lean_object*)(l_Lean_validateDefEqAttr___lam__0___closed__4));
v___x_744_ = l_Lean_stringToMessageData(v___x_743_);
return v___x_744_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___lam__0___closed__6(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = lean_obj_once(&l_Lean_validateDefEqAttr___lam__0___closed__5, &l_Lean_validateDefEqAttr___lam__0___closed__5_once, _init_l_Lean_validateDefEqAttr___lam__0___closed__5);
v___x_746_ = l_Lean_MessageData_note(v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___lam__0(lean_object* v___x_747_, lean_object* v_lhs_748_, lean_object* v_rhs_749_, uint8_t v_a_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_toCold_756_; uint8_t v_trackZetaDelta_757_; lean_object* v_zetaDeltaSet_758_; lean_object* v_lctx_759_; lean_object* v_localInstances_760_; lean_object* v_defEqCtx_x3f_761_; lean_object* v_synthPendingDepth_762_; lean_object* v_customCanUnfoldPredicate_x3f_763_; uint8_t v_univApprox_764_; uint8_t v_inTypeClassResolution_765_; uint8_t v_cacheInferType_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_929_; 
v_toCold_756_ = lean_ctor_get(v___y_753_, 0);
lean_inc_ref(v_toCold_756_);
v_trackZetaDelta_757_ = lean_ctor_get_uint8(v___y_751_, sizeof(void*)*7);
v_zetaDeltaSet_758_ = lean_ctor_get(v___y_751_, 1);
v_lctx_759_ = lean_ctor_get(v___y_751_, 2);
v_localInstances_760_ = lean_ctor_get(v___y_751_, 3);
v_defEqCtx_x3f_761_ = lean_ctor_get(v___y_751_, 4);
v_synthPendingDepth_762_ = lean_ctor_get(v___y_751_, 5);
v_customCanUnfoldPredicate_x3f_763_ = lean_ctor_get(v___y_751_, 6);
v_univApprox_764_ = lean_ctor_get_uint8(v___y_751_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_765_ = lean_ctor_get_uint8(v___y_751_, sizeof(void*)*7 + 2);
v_cacheInferType_766_ = lean_ctor_get_uint8(v___y_751_, sizeof(void*)*7 + 3);
v_isSharedCheck_929_ = !lean_is_exclusive(v___y_751_);
if (v_isSharedCheck_929_ == 0)
{
lean_object* v_unused_930_; 
v_unused_930_ = lean_ctor_get(v___y_751_, 0);
lean_dec(v_unused_930_);
v___x_768_ = v___y_751_;
v_isShared_769_ = v_isSharedCheck_929_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_763_);
lean_inc(v_synthPendingDepth_762_);
lean_inc(v_defEqCtx_x3f_761_);
lean_inc(v_localInstances_760_);
lean_inc(v_lctx_759_);
lean_inc(v_zetaDeltaSet_758_);
lean_dec(v___y_751_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_929_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v_currRecDepth_770_; lean_object* v_ref_771_; uint8_t v_suppressElabErrors_772_; uint8_t v_checkDeprecated_773_; uint8_t v_isRecordingDeps_774_; lean_object* v_fileName_775_; lean_object* v_fileMap_776_; lean_object* v_options_777_; lean_object* v_currNamespace_778_; lean_object* v_openDecls_779_; lean_object* v_initHeartbeats_780_; lean_object* v_maxHeartbeats_781_; lean_object* v_quotContext_782_; lean_object* v_currMacroScope_783_; lean_object* v_cancelTk_x3f_784_; lean_object* v_inheritedTraceOptions_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_927_; 
v_currRecDepth_770_ = lean_ctor_get(v___y_753_, 1);
v_ref_771_ = lean_ctor_get(v___y_753_, 2);
v_suppressElabErrors_772_ = lean_ctor_get_uint8(v___y_753_, sizeof(void*)*3 + 2);
v_checkDeprecated_773_ = lean_ctor_get_uint8(v___y_753_, sizeof(void*)*3 + 3);
v_isRecordingDeps_774_ = lean_ctor_get_uint8(v___y_753_, sizeof(void*)*3 + 4);
v_fileName_775_ = lean_ctor_get(v_toCold_756_, 0);
v_fileMap_776_ = lean_ctor_get(v_toCold_756_, 1);
v_options_777_ = lean_ctor_get(v_toCold_756_, 2);
v_currNamespace_778_ = lean_ctor_get(v_toCold_756_, 4);
v_openDecls_779_ = lean_ctor_get(v_toCold_756_, 5);
v_initHeartbeats_780_ = lean_ctor_get(v_toCold_756_, 6);
v_maxHeartbeats_781_ = lean_ctor_get(v_toCold_756_, 7);
v_quotContext_782_ = lean_ctor_get(v_toCold_756_, 8);
v_currMacroScope_783_ = lean_ctor_get(v_toCold_756_, 9);
v_cancelTk_x3f_784_ = lean_ctor_get(v_toCold_756_, 10);
v_inheritedTraceOptions_785_ = lean_ctor_get(v_toCold_756_, 11);
v_isSharedCheck_927_ = !lean_is_exclusive(v_toCold_756_);
if (v_isSharedCheck_927_ == 0)
{
lean_object* v_unused_928_; 
v_unused_928_ = lean_ctor_get(v_toCold_756_, 3);
lean_dec(v_unused_928_);
v___x_787_ = v_toCold_756_;
v_isShared_788_ = v_isSharedCheck_927_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_inheritedTraceOptions_785_);
lean_inc(v_cancelTk_x3f_784_);
lean_inc(v_currMacroScope_783_);
lean_inc(v_quotContext_782_);
lean_inc(v_maxHeartbeats_781_);
lean_inc(v_initHeartbeats_780_);
lean_inc(v_openDecls_779_);
lean_inc(v_currNamespace_778_);
lean_inc(v_options_777_);
lean_inc(v_fileMap_776_);
lean_inc(v_fileName_775_);
lean_dec(v_toCold_756_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_927_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
uint64_t v___x_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_789_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_747_);
v___x_790_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_790_, 0, v___x_747_);
lean_ctor_set_uint64(v___x_790_, sizeof(void*)*1, v___x_789_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v___x_790_);
v___x_792_ = v___x_768_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_zetaDeltaSet_758_);
lean_ctor_set(v_reuseFailAlloc_926_, 2, v_lctx_759_);
lean_ctor_set(v_reuseFailAlloc_926_, 3, v_localInstances_760_);
lean_ctor_set(v_reuseFailAlloc_926_, 4, v_defEqCtx_x3f_761_);
lean_ctor_set(v_reuseFailAlloc_926_, 5, v_synthPendingDepth_762_);
lean_ctor_set(v_reuseFailAlloc_926_, 6, v_customCanUnfoldPredicate_x3f_763_);
lean_ctor_set_uint8(v_reuseFailAlloc_926_, sizeof(void*)*7, v_trackZetaDelta_757_);
lean_ctor_set_uint8(v_reuseFailAlloc_926_, sizeof(void*)*7 + 1, v_univApprox_764_);
lean_ctor_set_uint8(v_reuseFailAlloc_926_, sizeof(void*)*7 + 2, v_inTypeClassResolution_765_);
lean_ctor_set_uint8(v_reuseFailAlloc_926_, sizeof(void*)*7 + 3, v_cacheInferType_766_);
v___x_792_ = v_reuseFailAlloc_926_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
uint16_t v___y_794_; lean_object* v___y_795_; lean_object* v_fileName_796_; lean_object* v_fileMap_797_; lean_object* v_currNamespace_798_; lean_object* v_openDecls_799_; lean_object* v_initHeartbeats_800_; lean_object* v_maxHeartbeats_801_; lean_object* v_quotContext_802_; lean_object* v_currMacroScope_803_; lean_object* v_cancelTk_x3f_804_; lean_object* v_inheritedTraceOptions_805_; lean_object* v_currRecDepth_806_; lean_object* v_ref_807_; uint8_t v_suppressElabErrors_808_; uint8_t v_checkDeprecated_809_; uint8_t v_isRecordingDeps_810_; lean_object* v___y_811_; uint16_t v___y_878_; lean_object* v___y_879_; lean_object* v_nextMacroScope_880_; lean_object* v_ngen_881_; lean_object* v_auxDeclNGen_882_; lean_object* v_traceState_883_; lean_object* v_recordedDeps_884_; lean_object* v_messages_885_; lean_object* v_infoState_886_; lean_object* v_snapshotTasks_887_; lean_object* v___y_888_; uint16_t v___y_893_; lean_object* v___y_894_; uint8_t v___y_895_; lean_object* v___y_914_; 
if (v_isRecordingDeps_774_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = l_Lean_Meta_smartUnfolding;
v___x_924_ = l_Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1(v_options_777_, v___x_923_, v_isRecordingDeps_774_);
v___y_914_ = v___x_924_;
goto v___jp_913_;
}
else
{
lean_object* v___x_925_; 
v___x_925_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_777_);
v___y_914_ = v___x_925_;
goto v___jp_913_;
}
v___jp_793_:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_812_ = l_Lean_maxRecDepth;
v___x_813_ = l_Lean_Option_get___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__0(v___y_795_, v___x_812_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 11, v_inheritedTraceOptions_805_);
lean_ctor_set(v___x_787_, 10, v_cancelTk_x3f_804_);
lean_ctor_set(v___x_787_, 9, v_currMacroScope_803_);
lean_ctor_set(v___x_787_, 8, v_quotContext_802_);
lean_ctor_set(v___x_787_, 7, v_maxHeartbeats_801_);
lean_ctor_set(v___x_787_, 6, v_initHeartbeats_800_);
lean_ctor_set(v___x_787_, 5, v_openDecls_799_);
lean_ctor_set(v___x_787_, 4, v_currNamespace_798_);
lean_ctor_set(v___x_787_, 3, v___x_813_);
lean_ctor_set(v___x_787_, 2, v___y_795_);
lean_ctor_set(v___x_787_, 1, v_fileMap_797_);
lean_ctor_set(v___x_787_, 0, v_fileName_796_);
v___x_815_ = v___x_787_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_fileName_796_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_fileMap_797_);
lean_ctor_set(v_reuseFailAlloc_876_, 2, v___y_795_);
lean_ctor_set(v_reuseFailAlloc_876_, 3, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_876_, 4, v_currNamespace_798_);
lean_ctor_set(v_reuseFailAlloc_876_, 5, v_openDecls_799_);
lean_ctor_set(v_reuseFailAlloc_876_, 6, v_initHeartbeats_800_);
lean_ctor_set(v_reuseFailAlloc_876_, 7, v_maxHeartbeats_801_);
lean_ctor_set(v_reuseFailAlloc_876_, 8, v_quotContext_802_);
lean_ctor_set(v_reuseFailAlloc_876_, 9, v_currMacroScope_803_);
lean_ctor_set(v_reuseFailAlloc_876_, 10, v_cancelTk_x3f_804_);
lean_ctor_set(v_reuseFailAlloc_876_, 11, v_inheritedTraceOptions_805_);
v___x_815_ = v_reuseFailAlloc_876_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v_currRecDepth_806_);
lean_ctor_set(v___x_816_, 2, v_ref_807_);
lean_ctor_set_uint16(v___x_816_, sizeof(void*)*3, v___y_794_);
lean_ctor_set_uint8(v___x_816_, sizeof(void*)*3 + 2, v_suppressElabErrors_808_);
lean_ctor_set_uint8(v___x_816_, sizeof(void*)*3 + 3, v_checkDeprecated_809_);
lean_ctor_set_uint8(v___x_816_, sizeof(void*)*3 + 4, v_isRecordingDeps_810_);
v___x_817_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_lhs_748_, v_rhs_749_, v___x_792_, v___y_752_, v___x_816_, v___y_811_);
lean_dec_ref_known(v___x_816_, 3);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_867_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_867_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_867_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_867_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v_fst_822_; lean_object* v_snd_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_866_; 
v_fst_822_ = lean_ctor_get(v_a_818_, 0);
v_snd_823_ = lean_ctor_get(v_a_818_, 1);
v_isSharedCheck_866_ = !lean_is_exclusive(v_a_818_);
if (v_isSharedCheck_866_ == 0)
{
v___x_825_ = v_a_818_;
v_isShared_826_ = v_isSharedCheck_866_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_snd_823_);
lean_inc(v_fst_822_);
lean_dec(v_a_818_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_866_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_827_ = lean_obj_once(&l_Lean_validateDefEqAttr___lam__0___closed__1, &l_Lean_validateDefEqAttr___lam__0___closed__1_once, _init_l_Lean_validateDefEqAttr___lam__0___closed__1);
lean_inc(v_fst_822_);
v___x_828_ = l_Lean_indentExpr(v_fst_822_);
if (v_isShared_826_ == 0)
{
lean_ctor_set_tag(v___x_825_, 7);
lean_ctor_set(v___x_825_, 1, v___x_828_);
lean_ctor_set(v___x_825_, 0, v___x_827_);
v___x_830_ = v___x_825_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_827_);
lean_ctor_set(v_reuseFailAlloc_865_, 1, v___x_828_);
v___x_830_ = v_reuseFailAlloc_865_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v_env_836_; uint8_t v_isExporting_837_; 
v___x_831_ = lean_obj_once(&l_Lean_validateDefEqAttr___lam__0___closed__3, &l_Lean_validateDefEqAttr___lam__0___closed__3_once, _init_l_Lean_validateDefEqAttr___lam__0___closed__3);
v___x_832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
lean_inc(v_snd_823_);
v___x_833_ = l_Lean_indentExpr(v_snd_823_);
v___x_834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_832_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v___x_835_ = lean_st_ref_get(v___y_754_);
v_env_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc_ref(v_env_836_);
lean_dec(v___x_835_);
v_isExporting_837_ = lean_ctor_get_uint8(v_env_836_, sizeof(void*)*13);
lean_dec_ref(v_env_836_);
if (v_isExporting_837_ == 0)
{
lean_object* v___x_839_; 
lean_dec(v_snd_823_);
lean_dec(v_fst_822_);
lean_dec_ref(v___x_792_);
lean_dec_ref(v___y_753_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_834_);
v___x_839_ = v___x_820_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
else
{
lean_object* v___x_841_; lean_object* v___x_842_; 
lean_del_object(v___x_820_);
v___x_841_ = lean_alloc_closure((void*)(l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___boxed), 7, 2);
lean_closure_set(v___x_841_, 0, v_fst_822_);
lean_closure_set(v___x_841_, 1, v_snd_823_);
v___x_842_ = l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___redArg(v___x_841_, v_isExporting_837_, v___x_792_, v___y_752_, v___y_753_, v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec_ref(v___x_792_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_856_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_856_ == 0)
{
v___x_845_ = v___x_842_;
v_isShared_846_ = v_isSharedCheck_856_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_842_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_856_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
uint8_t v___x_847_; 
v___x_847_ = lean_unbox(v_a_843_);
lean_dec(v_a_843_);
if (v___x_847_ == 0)
{
lean_object* v___x_849_; 
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_834_);
v___x_849_ = v___x_845_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_834_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
else
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_851_ = lean_obj_once(&l_Lean_validateDefEqAttr___lam__0___closed__6, &l_Lean_validateDefEqAttr___lam__0___closed__6_once, _init_l_Lean_validateDefEqAttr___lam__0___closed__6);
v___x_852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_852_, 0, v___x_834_);
lean_ctor_set(v___x_852_, 1, v___x_851_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_852_);
v___x_854_ = v___x_845_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec_ref_known(v___x_834_, 2);
v_a_857_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_842_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_842_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
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
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
lean_dec_ref(v___x_792_);
lean_dec_ref(v___y_753_);
v_a_868_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_817_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_817_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
}
v___jp_877_:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_889_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2);
v___x_890_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_890_, 0, v___y_888_);
lean_ctor_set(v___x_890_, 1, v_nextMacroScope_880_);
lean_ctor_set(v___x_890_, 2, v_ngen_881_);
lean_ctor_set(v___x_890_, 3, v_auxDeclNGen_882_);
lean_ctor_set(v___x_890_, 4, v_traceState_883_);
lean_ctor_set(v___x_890_, 5, v___x_889_);
lean_ctor_set(v___x_890_, 6, v_recordedDeps_884_);
lean_ctor_set(v___x_890_, 7, v_messages_885_);
lean_ctor_set(v___x_890_, 8, v_infoState_886_);
lean_ctor_set(v___x_890_, 9, v_snapshotTasks_887_);
v___x_891_ = lean_st_ref_put(v___y_754_, v___x_890_);
lean_inc(v_ref_771_);
lean_inc(v_currRecDepth_770_);
v___y_794_ = v___y_878_;
v___y_795_ = v___y_879_;
v_fileName_796_ = v_fileName_775_;
v_fileMap_797_ = v_fileMap_776_;
v_currNamespace_798_ = v_currNamespace_778_;
v_openDecls_799_ = v_openDecls_779_;
v_initHeartbeats_800_ = v_initHeartbeats_780_;
v_maxHeartbeats_801_ = v_maxHeartbeats_781_;
v_quotContext_802_ = v_quotContext_782_;
v_currMacroScope_803_ = v_currMacroScope_783_;
v_cancelTk_x3f_804_ = v_cancelTk_x3f_784_;
v_inheritedTraceOptions_805_ = v_inheritedTraceOptions_785_;
v_currRecDepth_806_ = v_currRecDepth_770_;
v_ref_807_ = v_ref_771_;
v_suppressElabErrors_808_ = v_suppressElabErrors_772_;
v_checkDeprecated_809_ = v_checkDeprecated_773_;
v_isRecordingDeps_810_ = v_isRecordingDeps_774_;
v___y_811_ = v___y_754_;
goto v___jp_793_;
}
v___jp_892_:
{
uint8_t v___x_896_; lean_object* v___x_897_; lean_object* v_env_898_; lean_object* v_nextMacroScope_899_; lean_object* v_ngen_900_; lean_object* v_auxDeclNGen_901_; lean_object* v_traceState_902_; lean_object* v_recordedDeps_903_; lean_object* v_messages_904_; lean_object* v_infoState_905_; lean_object* v_snapshotTasks_906_; uint16_t v___x_907_; uint16_t v___x_908_; uint16_t v___x_909_; uint8_t v___x_910_; 
v___x_896_ = 1;
v___x_897_ = lean_st_ref_take(v___y_754_);
v_env_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc_ref(v_env_898_);
v_nextMacroScope_899_ = lean_ctor_get(v___x_897_, 1);
lean_inc(v_nextMacroScope_899_);
v_ngen_900_ = lean_ctor_get(v___x_897_, 2);
lean_inc_ref(v_ngen_900_);
v_auxDeclNGen_901_ = lean_ctor_get(v___x_897_, 3);
lean_inc_ref(v_auxDeclNGen_901_);
v_traceState_902_ = lean_ctor_get(v___x_897_, 4);
lean_inc_ref(v_traceState_902_);
v_recordedDeps_903_ = lean_ctor_get(v___x_897_, 6);
lean_inc_ref(v_recordedDeps_903_);
v_messages_904_ = lean_ctor_get(v___x_897_, 7);
lean_inc_ref(v_messages_904_);
v_infoState_905_ = lean_ctor_get(v___x_897_, 8);
lean_inc_ref(v_infoState_905_);
v_snapshotTasks_906_ = lean_ctor_get(v___x_897_, 9);
lean_inc_ref(v_snapshotTasks_906_);
lean_dec(v___x_897_);
v___x_907_ = 512;
v___x_908_ = lean_uint16_land(v___y_893_, v___x_907_);
v___x_909_ = 0;
v___x_910_ = lean_uint16_dec_eq(v___x_908_, v___x_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; 
v___x_911_ = l_Lean_Kernel_enableDiag(v_env_898_, v___x_896_);
v___y_878_ = v___y_893_;
v___y_879_ = v___y_894_;
v_nextMacroScope_880_ = v_nextMacroScope_899_;
v_ngen_881_ = v_ngen_900_;
v_auxDeclNGen_882_ = v_auxDeclNGen_901_;
v_traceState_883_ = v_traceState_902_;
v_recordedDeps_884_ = v_recordedDeps_903_;
v_messages_885_ = v_messages_904_;
v_infoState_886_ = v_infoState_905_;
v_snapshotTasks_887_ = v_snapshotTasks_906_;
v___y_888_ = v___x_911_;
goto v___jp_877_;
}
else
{
lean_object* v___x_912_; 
v___x_912_ = l_Lean_Kernel_enableDiag(v_env_898_, v___y_895_);
v___y_878_ = v___y_893_;
v___y_879_ = v___y_894_;
v_nextMacroScope_880_ = v_nextMacroScope_899_;
v_ngen_881_ = v_ngen_900_;
v_auxDeclNGen_882_ = v_auxDeclNGen_901_;
v_traceState_883_ = v_traceState_902_;
v_recordedDeps_884_ = v_recordedDeps_903_;
v_messages_885_ = v_messages_904_;
v_infoState_886_ = v_infoState_905_;
v_snapshotTasks_887_ = v_snapshotTasks_906_;
v___y_888_ = v___x_912_;
goto v___jp_877_;
}
}
v___jp_913_:
{
uint16_t v___x_915_; lean_object* v___x_916_; lean_object* v_env_917_; uint8_t v___x_918_; uint16_t v___x_919_; uint16_t v___x_920_; uint16_t v___x_921_; uint8_t v___x_922_; 
v___x_915_ = l_Lean_OptionFlags_ofOptions(v___y_914_);
v___x_916_ = lean_st_ref_get(v___y_754_);
v_env_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc_ref(v_env_917_);
lean_dec(v___x_916_);
v___x_918_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_917_);
lean_dec_ref(v_env_917_);
v___x_919_ = 512;
v___x_920_ = lean_uint16_land(v___x_915_, v___x_919_);
v___x_921_ = 0;
v___x_922_ = lean_uint16_dec_eq(v___x_920_, v___x_921_);
if (v___x_922_ == 0)
{
if (v___x_918_ == 0)
{
v___y_893_ = v___x_915_;
v___y_894_ = v___y_914_;
v___y_895_ = v___x_918_;
goto v___jp_892_;
}
else
{
lean_inc(v_ref_771_);
lean_inc(v_currRecDepth_770_);
v___y_794_ = v___x_915_;
v___y_795_ = v___y_914_;
v_fileName_796_ = v_fileName_775_;
v_fileMap_797_ = v_fileMap_776_;
v_currNamespace_798_ = v_currNamespace_778_;
v_openDecls_799_ = v_openDecls_779_;
v_initHeartbeats_800_ = v_initHeartbeats_780_;
v_maxHeartbeats_801_ = v_maxHeartbeats_781_;
v_quotContext_802_ = v_quotContext_782_;
v_currMacroScope_803_ = v_currMacroScope_783_;
v_cancelTk_x3f_804_ = v_cancelTk_x3f_784_;
v_inheritedTraceOptions_805_ = v_inheritedTraceOptions_785_;
v_currRecDepth_806_ = v_currRecDepth_770_;
v_ref_807_ = v_ref_771_;
v_suppressElabErrors_808_ = v_suppressElabErrors_772_;
v_checkDeprecated_809_ = v_checkDeprecated_773_;
v_isRecordingDeps_810_ = v_isRecordingDeps_774_;
v___y_811_ = v___y_754_;
goto v___jp_793_;
}
}
else
{
if (v___x_918_ == 0)
{
lean_inc(v_ref_771_);
lean_inc(v_currRecDepth_770_);
v___y_794_ = v___x_915_;
v___y_795_ = v___y_914_;
v_fileName_796_ = v_fileName_775_;
v_fileMap_797_ = v_fileMap_776_;
v_currNamespace_798_ = v_currNamespace_778_;
v_openDecls_799_ = v_openDecls_779_;
v_initHeartbeats_800_ = v_initHeartbeats_780_;
v_maxHeartbeats_801_ = v_maxHeartbeats_781_;
v_quotContext_802_ = v_quotContext_782_;
v_currMacroScope_803_ = v_currMacroScope_783_;
v_cancelTk_x3f_804_ = v_cancelTk_x3f_784_;
v_inheritedTraceOptions_805_ = v_inheritedTraceOptions_785_;
v_currRecDepth_806_ = v_currRecDepth_770_;
v_ref_807_ = v_ref_771_;
v_suppressElabErrors_808_ = v_suppressElabErrors_772_;
v_checkDeprecated_809_ = v_checkDeprecated_773_;
v_isRecordingDeps_810_ = v_isRecordingDeps_774_;
v___y_811_ = v___y_754_;
goto v___jp_793_;
}
else
{
v___y_893_ = v___x_915_;
v___y_894_ = v___y_914_;
v___y_895_ = v_a_750_;
goto v___jp_892_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___lam__0___boxed(lean_object* v___x_931_, lean_object* v_lhs_932_, lean_object* v_rhs_933_, lean_object* v_a_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
uint8_t v_a_9833__boxed_940_; lean_object* v_res_941_; 
v_a_9833__boxed_940_ = lean_unbox(v_a_934_);
v_res_941_ = l_Lean_validateDefEqAttr___lam__0(v___x_931_, v_lhs_932_, v_rhs_933_, v_a_9833__boxed_940_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
lean_dec(v___y_938_);
lean_dec(v___y_936_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___lam__1(lean_object* v_lhs_942_, lean_object* v_rhs_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v___x_949_; 
lean_inc_ref(v_rhs_943_);
lean_inc_ref(v_lhs_942_);
v___x_949_ = l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful(v_lhs_942_, v_rhs_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_967_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_967_ == 0)
{
v___x_952_ = v___x_949_;
v_isShared_953_ = v_isSharedCheck_967_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_949_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_967_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
uint8_t v___x_954_; 
v___x_954_ = lean_unbox(v_a_950_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; lean_object* v___f_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
lean_del_object(v___x_952_);
v___x_955_ = l_Lean_Meta_Context_config(v___y_944_);
lean_inc_ref(v_rhs_943_);
lean_inc_ref(v_lhs_942_);
v___f_956_ = lean_alloc_closure((void*)(l_Lean_validateDefEqAttr___lam__0___boxed), 9, 4);
lean_closure_set(v___f_956_, 0, v___x_955_);
lean_closure_set(v___f_956_, 1, v_lhs_942_);
lean_closure_set(v___f_956_, 2, v_rhs_943_);
lean_closure_set(v___f_956_, 3, v_a_950_);
v___x_957_ = lean_unsigned_to_nat(2u);
v___x_958_ = lean_mk_empty_array_with_capacity(v___x_957_);
v___x_959_ = lean_array_push(v___x_958_, v_lhs_942_);
v___x_960_ = lean_array_push(v___x_959_, v_rhs_943_);
v___x_961_ = l_Lean_MessageData_ofLazyM(v___f_956_, v___x_960_);
v___x_962_ = l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(v___x_961_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
return v___x_962_;
}
else
{
lean_object* v___x_963_; lean_object* v___x_965_; 
lean_dec(v_a_950_);
lean_dec_ref(v_rhs_943_);
lean_dec_ref(v_lhs_942_);
v___x_963_ = lean_box(0);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 0, v___x_963_);
v___x_965_ = v___x_952_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec_ref(v_rhs_943_);
lean_dec_ref(v_lhs_942_);
v_a_968_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_949_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_949_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___lam__1___boxed(lean_object* v_lhs_976_, lean_object* v_rhs_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lean_validateDefEqAttr___lam__1(v_lhs_976_, v_rhs_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
return v_res_983_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0(void){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0);
v___x_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
return v___x_985_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_986_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0);
v___x_987_ = lean_unsigned_to_nat(0u);
v___x_988_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
lean_ctor_set(v___x_988_, 2, v___x_987_);
lean_ctor_set(v___x_988_, 3, v___x_987_);
lean_ctor_set(v___x_988_, 4, v___x_986_);
lean_ctor_set(v___x_988_, 5, v___x_986_);
lean_ctor_set(v___x_988_, 6, v___x_986_);
lean_ctor_set(v___x_988_, 7, v___x_986_);
lean_ctor_set(v___x_988_, 8, v___x_986_);
lean_ctor_set(v___x_988_, 9, v___x_986_);
lean_ctor_set(v___x_988_, 10, v___x_986_);
return v___x_988_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__2(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_989_ = lean_unsigned_to_nat(32u);
v___x_990_ = lean_mk_empty_array_with_capacity(v___x_989_);
v___x_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
return v___x_991_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3(void){
_start:
{
size_t v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_992_ = ((size_t)5ULL);
v___x_993_ = lean_unsigned_to_nat(0u);
v___x_994_ = lean_unsigned_to_nat(32u);
v___x_995_ = lean_mk_empty_array_with_capacity(v___x_994_);
v___x_996_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__2);
v___x_997_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_997_, 0, v___x_996_);
lean_ctor_set(v___x_997_, 1, v___x_995_);
lean_ctor_set(v___x_997_, 2, v___x_993_);
lean_ctor_set(v___x_997_, 3, v___x_993_);
lean_ctor_set_usize(v___x_997_, 4, v___x_992_);
return v___x_997_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_998_ = lean_box(1);
v___x_999_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3);
v___x_1000_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__0);
v___x_1001_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
lean_ctor_set(v___x_1001_, 1, v___x_999_);
lean_ctor_set(v___x_1001_, 2, v___x_998_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11(lean_object* v_msgData_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v___x_1006_; lean_object* v_toCold_1007_; lean_object* v_env_1008_; lean_object* v_options_1009_; uint8_t v___x_1010_; lean_object* v_env_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1006_ = lean_st_ref_get(v___y_1004_);
v_toCold_1007_ = lean_ctor_get(v___y_1003_, 0);
v_env_1008_ = lean_ctor_get(v___x_1006_, 0);
lean_inc_ref(v_env_1008_);
lean_dec(v___x_1006_);
v_options_1009_ = lean_ctor_get(v_toCold_1007_, 2);
v___x_1010_ = 0;
v_env_1011_ = l_Lean_Environment_setRecordingDeps(v_env_1008_, v___x_1010_);
v___x_1012_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1);
v___x_1013_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4);
lean_inc_ref(v_options_1009_);
v___x_1014_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1014_, 0, v_env_1011_);
lean_ctor_set(v___x_1014_, 1, v___x_1012_);
lean_ctor_set(v___x_1014_, 2, v___x_1013_);
lean_ctor_set(v___x_1014_, 3, v_options_1009_);
v___x_1015_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
lean_ctor_set(v___x_1015_, 1, v_msgData_1002_);
v___x_1016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___boxed(lean_object* v_msgData_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11(v_msgData_1017_, v___y_1018_, v___y_1019_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg(lean_object* v_msg_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_ref_1026_; lean_object* v___x_1027_; lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1036_; 
v_ref_1026_ = lean_ctor_get(v___y_1023_, 2);
v___x_1027_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11(v_msg_1022_, v___y_1023_, v___y_1024_);
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1030_ = v___x_1027_;
v_isShared_1031_ = v_isSharedCheck_1036_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1027_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1036_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
lean_inc(v_ref_1026_);
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v_ref_1026_);
lean_ctor_set(v___x_1032_, 1, v_a_1028_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 1);
lean_ctor_set(v___x_1030_, 0, v___x_1032_);
v___x_1034_ = v___x_1030_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_msg_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg(v_msg_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___redArg(lean_object* v_ref_1042_, lean_object* v_msg_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v_toCold_1047_; lean_object* v_currRecDepth_1048_; lean_object* v_ref_1049_; uint16_t v_optionFlags_1050_; uint8_t v_suppressElabErrors_1051_; uint8_t v_checkDeprecated_1052_; uint8_t v_isRecordingDeps_1053_; lean_object* v_ref_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_toCold_1047_ = lean_ctor_get(v___y_1044_, 0);
v_currRecDepth_1048_ = lean_ctor_get(v___y_1044_, 1);
v_ref_1049_ = lean_ctor_get(v___y_1044_, 2);
v_optionFlags_1050_ = lean_ctor_get_uint16(v___y_1044_, sizeof(void*)*3);
v_suppressElabErrors_1051_ = lean_ctor_get_uint8(v___y_1044_, sizeof(void*)*3 + 2);
v_checkDeprecated_1052_ = lean_ctor_get_uint8(v___y_1044_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1053_ = lean_ctor_get_uint8(v___y_1044_, sizeof(void*)*3 + 4);
v_ref_1054_ = l_Lean_replaceRef(v_ref_1042_, v_ref_1049_);
lean_inc(v_currRecDepth_1048_);
lean_inc_ref(v_toCold_1047_);
v___x_1055_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1055_, 0, v_toCold_1047_);
lean_ctor_set(v___x_1055_, 1, v_currRecDepth_1048_);
lean_ctor_set(v___x_1055_, 2, v_ref_1054_);
lean_ctor_set_uint16(v___x_1055_, sizeof(void*)*3, v_optionFlags_1050_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*3 + 2, v_suppressElabErrors_1051_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*3 + 3, v_checkDeprecated_1052_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*3 + 4, v_isRecordingDeps_1053_);
v___x_1056_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg(v_msg_1043_, v___x_1055_, v___y_1045_);
lean_dec_ref_known(v___x_1055_, 3);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___redArg___boxed(lean_object* v_ref_1057_, lean_object* v_msg_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___redArg(v_ref_1057_, v_msg_1058_, v___y_1059_, v___y_1060_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v_ref_1057_);
return v_res_1062_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__0));
v___x_1065_ = l_Lean_stringToMessageData(v___x_1064_);
return v___x_1065_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__2));
v___x_1068_ = l_Lean_stringToMessageData(v___x_1067_);
return v___x_1068_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__4));
v___x_1071_ = l_Lean_stringToMessageData(v___x_1070_);
return v___x_1071_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7(void){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__6));
v___x_1074_ = l_Lean_stringToMessageData(v___x_1073_);
return v___x_1074_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__8));
v___x_1077_ = l_Lean_stringToMessageData(v___x_1076_);
return v___x_1077_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__10));
v___x_1080_ = l_Lean_stringToMessageData(v___x_1079_);
return v___x_1080_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__12));
v___x_1083_ = l_Lean_stringToMessageData(v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(lean_object* v_msg_1084_, lean_object* v_declHint_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v_env_1090_; uint8_t v___x_1091_; 
v___x_1088_ = lean_box(0);
v___x_1089_ = lean_st_ref_get(v___y_1086_);
v_env_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc_ref(v_env_1090_);
lean_dec(v___x_1089_);
v___x_1091_ = l_Lean_Name_isAnonymous(v_declHint_1085_);
if (v___x_1091_ == 0)
{
uint8_t v_isExporting_1092_; 
v_isExporting_1092_ = lean_ctor_get_uint8(v_env_1090_, sizeof(void*)*13);
if (v_isExporting_1092_ == 0)
{
lean_object* v___x_1093_; 
lean_dec_ref(v_env_1090_);
lean_dec(v_declHint_1085_);
v___x_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1093_, 0, v_msg_1084_);
return v___x_1093_;
}
else
{
lean_object* v___x_1094_; uint8_t v___x_1095_; 
lean_inc_ref(v_env_1090_);
v___x_1094_ = l_Lean_Environment_setExporting(v_env_1090_, v___x_1091_);
lean_inc(v_declHint_1085_);
lean_inc_ref(v___x_1094_);
v___x_1095_ = l_Lean_Environment_contains(v___x_1094_, v_declHint_1085_, v_isExporting_1092_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; 
lean_dec_ref(v___x_1094_);
lean_dec_ref(v_env_1090_);
lean_dec(v_declHint_1085_);
v___x_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1096_, 0, v_msg_1084_);
return v___x_1096_;
}
else
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v_c_1102_; lean_object* v___x_1103_; 
v___x_1097_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1);
v___x_1098_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4);
v___x_1099_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1094_);
v___x_1100_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1094_);
lean_ctor_set(v___x_1100_, 1, v___x_1097_);
lean_ctor_set(v___x_1100_, 2, v___x_1098_);
lean_ctor_set(v___x_1100_, 3, v___x_1099_);
lean_inc(v_declHint_1085_);
v___x_1101_ = l_Lean_MessageData_ofConstName(v_declHint_1085_, v___x_1091_);
v_c_1102_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1102_, 0, v___x_1100_);
lean_ctor_set(v_c_1102_, 1, v___x_1101_);
v___x_1103_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1094_, v_declHint_1085_);
lean_dec_ref(v___x_1094_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
lean_dec_ref(v_env_1090_);
lean_dec(v_declHint_1085_);
v___x_1104_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_1105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1104_);
lean_ctor_set(v___x_1105_, 1, v_c_1102_);
v___x_1106_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3);
v___x_1107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = l_Lean_MessageData_note(v___x_1107_);
v___x_1109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1109_, 0, v_msg_1084_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
return v___x_1110_;
}
else
{
lean_object* v_val_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1145_; 
v_val_1111_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1113_ = v___x_1103_;
v_isShared_1114_ = v_isSharedCheck_1145_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_val_1111_);
lean_dec(v___x_1103_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1145_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v_moduleNames_1116_; lean_object* v_mod_1117_; uint8_t v___x_1118_; 
v___x_1115_ = l_Lean_Environment_header(v_env_1090_);
lean_dec_ref(v_env_1090_);
v_moduleNames_1116_ = lean_ctor_get(v___x_1115_, 4);
lean_inc_ref(v_moduleNames_1116_);
lean_dec_ref(v___x_1115_);
v_mod_1117_ = lean_array_get(v___x_1088_, v_moduleNames_1116_, v_val_1111_);
lean_dec(v_val_1111_);
lean_dec_ref(v_moduleNames_1116_);
v___x_1118_ = l_Lean_isPrivateName(v_declHint_1085_);
lean_dec(v_declHint_1085_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1119_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5);
v___x_1120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v_c_1102_);
v___x_1121_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_1122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1120_);
lean_ctor_set(v___x_1122_, 1, v___x_1121_);
v___x_1123_ = l_Lean_MessageData_ofName(v_mod_1117_);
v___x_1124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1122_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_1125_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9);
v___x_1126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1124_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = l_Lean_MessageData_note(v___x_1126_);
v___x_1128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1128_, 0, v_msg_1084_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set_tag(v___x_1113_, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1128_);
v___x_1130_ = v___x_1113_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
else
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1143_; 
v___x_1132_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_1133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
lean_ctor_set(v___x_1133_, 1, v_c_1102_);
v___x_1134_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11);
v___x_1135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1133_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = l_Lean_MessageData_ofName(v_mod_1117_);
v___x_1137_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
v___x_1138_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13);
v___x_1139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1137_);
lean_ctor_set(v___x_1139_, 1, v___x_1138_);
v___x_1140_ = l_Lean_MessageData_note(v___x_1139_);
v___x_1141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1141_, 0, v_msg_1084_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set_tag(v___x_1113_, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1141_);
v___x_1143_ = v___x_1113_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1141_);
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
}
}
}
else
{
lean_object* v___x_1146_; 
lean_dec_ref(v_env_1090_);
lean_dec(v_declHint_1085_);
v___x_1146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1146_, 0, v_msg_1084_);
return v___x_1146_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_msg_1147_, lean_object* v_declHint_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_msg_1147_, v_declHint_1148_, v___y_1149_);
lean_dec(v___y_1149_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7(lean_object* v_msg_1152_, lean_object* v_declHint_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v___x_1157_; lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1167_; 
v___x_1157_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_msg_1152_, v_declHint_1153_, v___y_1155_);
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1167_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1167_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1162_ = l_Lean_unknownIdentifierMessageTag;
v___x_1163_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
lean_ctor_set(v___x_1163_, 1, v_a_1158_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1163_);
v___x_1165_ = v___x_1160_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7___boxed(lean_object* v_msg_1168_, lean_object* v_declHint_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7(v_msg_1168_, v_declHint_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_ref_1174_, lean_object* v_msg_1175_, lean_object* v_declHint_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v___x_1180_; lean_object* v_a_1181_; lean_object* v___x_1182_; 
v___x_1180_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7(v_msg_1175_, v_declHint_1176_, v___y_1177_, v___y_1178_);
v_a_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc(v_a_1181_);
lean_dec_ref(v___x_1180_);
v___x_1182_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___redArg(v_ref_1174_, v_a_1181_, v___y_1177_, v___y_1178_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_ref_1183_, lean_object* v_msg_1184_, lean_object* v_declHint_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___redArg(v_ref_1183_, v_msg_1184_, v_declHint_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v_ref_1183_);
return v_res_1189_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__0));
v___x_1192_ = l_Lean_stringToMessageData(v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__2));
v___x_1195_ = l_Lean_stringToMessageData(v___x_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg(lean_object* v_ref_1196_, lean_object* v_constName_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; uint8_t v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1201_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1);
v___x_1202_ = 0;
lean_inc(v_constName_1197_);
v___x_1203_ = l_Lean_MessageData_ofConstName(v_constName_1197_, v___x_1202_);
v___x_1204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1201_);
lean_ctor_set(v___x_1204_, 1, v___x_1203_);
v___x_1205_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3);
v___x_1206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1204_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___redArg(v_ref_1196_, v___x_1206_, v_constName_1197_, v___y_1198_, v___y_1199_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_ref_1208_, lean_object* v_constName_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg(v_ref_1208_, v_constName_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v_ref_1208_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___redArg(lean_object* v_constName_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v_ref_1218_; lean_object* v___x_1219_; 
v_ref_1218_ = lean_ctor_get(v___y_1215_, 2);
v___x_1219_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg(v_ref_1218_, v_constName_1214_, v___y_1215_, v___y_1216_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___redArg___boxed(lean_object* v_constName_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___redArg(v_constName_1220_, v___y_1221_, v___y_1222_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1(lean_object* v_constName_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v___x_1229_; lean_object* v_env_1230_; uint8_t v___x_1231_; lean_object* v___x_1232_; 
v___x_1229_ = lean_st_ref_get(v___y_1227_);
v_env_1230_ = lean_ctor_get(v___x_1229_, 0);
lean_inc_ref(v_env_1230_);
lean_dec(v___x_1229_);
v___x_1231_ = 0;
lean_inc(v_constName_1225_);
v___x_1232_ = l_Lean_Environment_findConstVal_x3f(v_env_1230_, v_constName_1225_, v___x_1231_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v___x_1233_; 
v___x_1233_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___redArg(v_constName_1225_, v___y_1226_, v___y_1227_);
return v___x_1233_;
}
else
{
lean_object* v_val_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec(v_constName_1225_);
v_val_1234_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1232_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_val_1234_);
lean_dec(v___x_1232_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
lean_ctor_set_tag(v___x_1236_, 0);
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_val_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1___boxed(lean_object* v_constName_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1(v_constName_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
return v_res_1246_;
}
}
static uint64_t _init_l_Lean_validateDefEqAttr___closed__2(void){
_start:
{
lean_object* v___x_1254_; uint64_t v___x_1255_; 
v___x_1254_ = ((lean_object*)(l_Lean_validateDefEqAttr___closed__1));
v___x_1255_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1254_);
return v___x_1255_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__3(void){
_start:
{
uint64_t v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1256_ = lean_uint64_once(&l_Lean_validateDefEqAttr___closed__2, &l_Lean_validateDefEqAttr___closed__2_once, _init_l_Lean_validateDefEqAttr___closed__2);
v___x_1257_ = ((lean_object*)(l_Lean_validateDefEqAttr___closed__1));
v___x_1258_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set_uint64(v___x_1258_, sizeof(void*)*1, v___x_1256_);
return v___x_1258_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__4(void){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__0);
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__5(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1261_ = lean_box(1);
v___x_1262_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3);
v___x_1263_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__4, &l_Lean_validateDefEqAttr___closed__4_once, _init_l_Lean_validateDefEqAttr___closed__4);
v___x_1264_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
lean_ctor_set(v___x_1264_, 1, v___x_1262_);
lean_ctor_set(v___x_1264_, 2, v___x_1261_);
return v___x_1264_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__7(void){
_start:
{
uint8_t v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1267_ = 1;
v___x_1268_ = lean_unsigned_to_nat(0u);
v___x_1269_ = lean_box(0);
v___x_1270_ = ((lean_object*)(l_Lean_validateDefEqAttr___closed__6));
v___x_1271_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__5, &l_Lean_validateDefEqAttr___closed__5_once, _init_l_Lean_validateDefEqAttr___closed__5);
v___x_1272_ = lean_box(1);
v___x_1273_ = 0;
v___x_1274_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__3, &l_Lean_validateDefEqAttr___closed__3_once, _init_l_Lean_validateDefEqAttr___closed__3);
v___x_1275_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set(v___x_1275_, 1, v___x_1272_);
lean_ctor_set(v___x_1275_, 2, v___x_1271_);
lean_ctor_set(v___x_1275_, 3, v___x_1270_);
lean_ctor_set(v___x_1275_, 4, v___x_1269_);
lean_ctor_set(v___x_1275_, 5, v___x_1268_);
lean_ctor_set(v___x_1275_, 6, v___x_1269_);
lean_ctor_set_uint8(v___x_1275_, sizeof(void*)*7, v___x_1273_);
lean_ctor_set_uint8(v___x_1275_, sizeof(void*)*7 + 1, v___x_1273_);
lean_ctor_set_uint8(v___x_1275_, sizeof(void*)*7 + 2, v___x_1273_);
lean_ctor_set_uint8(v___x_1275_, sizeof(void*)*7 + 3, v___x_1267_);
return v___x_1275_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__8(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1276_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__4, &l_Lean_validateDefEqAttr___closed__4_once, _init_l_Lean_validateDefEqAttr___closed__4);
v___x_1277_ = lean_unsigned_to_nat(0u);
v___x_1278_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
lean_ctor_set(v___x_1278_, 2, v___x_1277_);
lean_ctor_set(v___x_1278_, 3, v___x_1277_);
lean_ctor_set(v___x_1278_, 4, v___x_1276_);
lean_ctor_set(v___x_1278_, 5, v___x_1276_);
lean_ctor_set(v___x_1278_, 6, v___x_1276_);
lean_ctor_set(v___x_1278_, 7, v___x_1276_);
lean_ctor_set(v___x_1278_, 8, v___x_1276_);
lean_ctor_set(v___x_1278_, 9, v___x_1276_);
lean_ctor_set(v___x_1278_, 10, v___x_1276_);
return v___x_1278_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__9(void){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__4, &l_Lean_validateDefEqAttr___closed__4_once, _init_l_Lean_validateDefEqAttr___closed__4);
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
return v___x_1280_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__10(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__4, &l_Lean_validateDefEqAttr___closed__4_once, _init_l_Lean_validateDefEqAttr___closed__4);
v___x_1283_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
lean_ctor_set(v___x_1283_, 2, v___x_1281_);
return v___x_1283_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__11(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1284_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__10, &l_Lean_validateDefEqAttr___closed__10_once, _init_l_Lean_validateDefEqAttr___closed__10);
v___x_1285_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__9, &l_Lean_validateDefEqAttr___closed__9_once, _init_l_Lean_validateDefEqAttr___closed__9);
v___x_1286_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__4, &l_Lean_validateDefEqAttr___closed__4_once, _init_l_Lean_validateDefEqAttr___closed__4);
v___x_1287_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0);
v___x_1288_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v___x_1286_);
lean_ctor_set(v___x_1288_, 2, v___x_1285_);
lean_ctor_set(v___x_1288_, 3, v___x_1286_);
lean_ctor_set(v___x_1288_, 4, v___x_1286_);
lean_ctor_set(v___x_1288_, 5, v___x_1286_);
lean_ctor_set(v___x_1288_, 6, v___x_1286_);
lean_ctor_set(v___x_1288_, 7, v___x_1284_);
return v___x_1288_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__12(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__4, &l_Lean_validateDefEqAttr___closed__4_once, _init_l_Lean_validateDefEqAttr___closed__4);
v___x_1290_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
lean_ctor_set(v___x_1290_, 2, v___x_1289_);
lean_ctor_set(v___x_1290_, 3, v___x_1289_);
lean_ctor_set(v___x_1290_, 4, v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_l_Lean_validateDefEqAttr___closed__13(void){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1291_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__12, &l_Lean_validateDefEqAttr___closed__12_once, _init_l_Lean_validateDefEqAttr___closed__12);
v___x_1292_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__3);
v___x_1293_ = lean_box(1);
v___x_1294_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__11, &l_Lean_validateDefEqAttr___closed__11_once, _init_l_Lean_validateDefEqAttr___closed__11);
v___x_1295_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__8, &l_Lean_validateDefEqAttr___closed__8_once, _init_l_Lean_validateDefEqAttr___closed__8);
v___x_1296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v___x_1294_);
lean_ctor_set(v___x_1296_, 2, v___x_1293_);
lean_ctor_set(v___x_1296_, 3, v___x_1292_);
lean_ctor_set(v___x_1296_, 4, v___x_1291_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr(lean_object* v_declName_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v___f_1301_; lean_object* v___x_1302_; 
v___f_1301_ = ((lean_object*)(l_Lean_validateDefEqAttr___closed__0));
v___x_1302_ = l_Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1(v_declName_1297_, v_a_1298_, v_a_1299_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; lean_object* v_type_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1303_);
lean_dec_ref_known(v___x_1302_, 1);
v_type_1304_ = lean_ctor_get(v_a_1303_, 2);
lean_inc_ref(v_type_1304_);
lean_dec(v_a_1303_);
v___x_1305_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__7, &l_Lean_validateDefEqAttr___closed__7_once, _init_l_Lean_validateDefEqAttr___closed__7);
v___x_1306_ = lean_obj_once(&l_Lean_validateDefEqAttr___closed__13, &l_Lean_validateDefEqAttr___closed__13_once, _init_l_Lean_validateDefEqAttr___closed__13);
v___x_1307_ = lean_st_mk_ref(v___x_1306_);
v___x_1308_ = l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg(v_type_1304_, v___f_1301_, v___x_1305_, v___x_1307_, v_a_1298_, v_a_1299_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1317_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1311_ = v___x_1308_;
v_isShared_1312_ = v_isSharedCheck_1317_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1308_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1317_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1313_; lean_object* v___x_1315_; 
v___x_1313_ = lean_st_ref_get(v___x_1307_);
lean_dec(v___x_1307_);
lean_dec(v___x_1313_);
if (v_isShared_1312_ == 0)
{
v___x_1315_ = v___x_1311_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1309_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
else
{
lean_dec(v___x_1307_);
return v___x_1308_;
}
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
v_a_1318_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1302_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1302_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDefEqAttr___boxed(lean_object* v_declName_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Lean_validateDefEqAttr(v_declName_1326_, v_a_1327_, v_a_1328_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0(lean_object* v_00_u03b1_1331_, lean_object* v_x_1332_, uint8_t v_when_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___redArg(v_x_1332_, v_when_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___boxed(lean_object* v_00_u03b1_1340_, lean_object* v_x_1341_, lean_object* v_when_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
uint8_t v_when_boxed_1348_; lean_object* v_res_1349_; 
v_when_boxed_1348_ = lean_unbox(v_when_1342_);
v_res_1349_ = l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0(v_00_u03b1_1340_, v_x_1341_, v_when_boxed_1348_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2_spec__4(lean_object* v_00_u03b2_1350_){
_start:
{
lean_object* v___x_1351_; 
v___x_1351_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2___redArg(){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2___redArg___boxed(lean_object* v___dummy_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2___redArg();
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_validateDefEqAttr_spec__2(lean_object* v_00_u03b2_1356_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__0);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0(lean_object* v_00_u03b1_1358_, lean_object* v_x_1359_, uint8_t v_isExporting_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg(v_x_1359_, v_isExporting_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1367_, lean_object* v_x_1368_, lean_object* v_isExporting_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
uint8_t v_isExporting_boxed_1375_; lean_object* v_res_1376_; 
v_isExporting_boxed_1375_ = lean_unbox(v_isExporting_1369_);
v_res_1376_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0(v_00_u03b1_1367_, v_x_1368_, v_isExporting_boxed_1375_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2(lean_object* v_00_u03b1_1377_, lean_object* v_constName_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___redArg(v_constName_1378_, v___y_1379_, v___y_1380_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1383_, lean_object* v_constName_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2(v_00_u03b1_1383_, v_constName_1384_, v___y_1385_, v___y_1386_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3(lean_object* v_00_u03b1_1389_, lean_object* v_ref_1390_, lean_object* v_constName_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v___x_1395_; 
v___x_1395_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg(v_ref_1390_, v_constName_1391_, v___y_1392_, v___y_1393_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1396_, lean_object* v_ref_1397_, lean_object* v_constName_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3(v_00_u03b1_1396_, v_ref_1397_, v_constName_1398_, v___y_1399_, v___y_1400_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v_ref_1397_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03b1_1403_, lean_object* v_ref_1404_, lean_object* v_msg_1405_, lean_object* v_declHint_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___redArg(v_ref_1404_, v_msg_1405_, v_declHint_1406_, v___y_1407_, v___y_1408_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b1_1411_, lean_object* v_ref_1412_, lean_object* v_msg_1413_, lean_object* v_declHint_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6(v_00_u03b1_1411_, v_ref_1412_, v_msg_1413_, v_declHint_1414_, v___y_1415_, v___y_1416_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
lean_dec(v_ref_1412_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8(lean_object* v_msg_1419_, lean_object* v_declHint_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v___x_1424_; 
v___x_1424_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_msg_1419_, v_declHint_1420_, v___y_1422_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_1425_, lean_object* v_declHint_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8(v_msg_1425_, v_declHint_1426_, v___y_1427_, v___y_1428_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8(lean_object* v_00_u03b1_1431_, lean_object* v_ref_1432_, lean_object* v_msg_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v___x_1437_; 
v___x_1437_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___redArg(v_ref_1432_, v_msg_1433_, v___y_1434_, v___y_1435_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8___boxed(lean_object* v_00_u03b1_1438_, lean_object* v_ref_1439_, lean_object* v_msg_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8(v_00_u03b1_1438_, v_ref_1439_, v_msg_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v_ref_1439_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10(lean_object* v_00_u03b1_1445_, lean_object* v_msg_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg(v_msg_1446_, v___y_1447_, v___y_1448_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b1_1451_, lean_object* v_msg_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10(v_00_u03b1_1451_, v_msg_1452_, v___y_1453_, v___y_1454_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; uint8_t v___x_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; lean_object* v___x_1476_; 
v___x_1469_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__1_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_));
v___x_1470_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_));
v___x_1471_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_));
v___x_1472_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_));
v___x_1473_ = 0;
v___x_1474_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_));
v___x_1475_ = 0;
v___x_1476_ = l_Lean_registerTagAttribute(v___x_1469_, v___x_1470_, v___x_1471_, v___x_1472_, v___x_1473_, v___x_1474_, v___x_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2____boxed(lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_();
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1(){
_start:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1481_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_));
v___x_1482_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1___closed__0));
v___x_1483_ = l_Lean_addBuiltinDocString(v___x_1481_, v___x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1___boxed(lean_object* v_a_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1();
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3(){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1512_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_));
v___x_1513_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___closed__6));
v___x_1514_ = l_Lean_addBuiltinDeclarationRanges(v___x_1512_, v___x_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3___boxed(lean_object* v_a_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3();
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0___lam__0(lean_object* v_addEntryFn_1517_, lean_object* v_decl_1518_, lean_object* v_s_1519_){
_start:
{
lean_object* v_importedEntries_1520_; lean_object* v_state_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1529_; 
v_importedEntries_1520_ = lean_ctor_get(v_s_1519_, 0);
v_state_1521_ = lean_ctor_get(v_s_1519_, 1);
v_isSharedCheck_1529_ = !lean_is_exclusive(v_s_1519_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1523_ = v_s_1519_;
v_isShared_1524_ = v_isSharedCheck_1529_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_state_1521_);
lean_inc(v_importedEntries_1520_);
lean_dec(v_s_1519_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1529_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v_state_1525_; lean_object* v___x_1527_; 
v_state_1525_ = lean_apply_2(v_addEntryFn_1517_, v_state_1521_, v_decl_1518_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 1, v_state_1525_);
v___x_1527_ = v___x_1523_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_importedEntries_1520_);
lean_ctor_set(v_reuseFailAlloc_1528_, 1, v_state_1525_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0));
v___x_1532_ = l_Lean_stringToMessageData(v___x_1531_);
return v___x_1532_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2));
v___x_1535_ = l_Lean_stringToMessageData(v___x_1534_);
return v___x_1535_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1537_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__4));
v___x_1538_ = l_Lean_stringToMessageData(v___x_1537_);
return v___x_1538_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__6));
v___x_1541_ = l_Lean_stringToMessageData(v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_attrName_1542_, lean_object* v_declName_1543_, lean_object* v_asyncPrefix_x3f_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
lean_object* v___y_1549_; 
if (lean_obj_tag(v_asyncPrefix_x3f_1544_) == 0)
{
lean_object* v___x_1562_; 
v___x_1562_ = l_Lean_MessageData_nil;
v___y_1549_ = v___x_1562_;
goto v___jp_1548_;
}
else
{
lean_object* v_val_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_val_1563_ = lean_ctor_get(v_asyncPrefix_x3f_1544_, 0);
lean_inc(v_val_1563_);
lean_dec_ref_known(v_asyncPrefix_x3f_1544_, 1);
v___x_1564_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7);
v___x_1565_ = l_Lean_MessageData_ofName(v_val_1563_);
v___x_1566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1564_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3);
v___x_1568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
v___y_1549_ = v___x_1568_;
goto v___jp_1548_;
}
v___jp_1548_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1550_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_1551_ = l_Lean_MessageData_ofName(v_attrName_1542_);
v___x_1552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
v___x_1553_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3);
v___x_1554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1552_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = 0;
v___x_1556_ = l_Lean_MessageData_ofConstName(v_declName_1543_, v___x_1555_);
v___x_1557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1554_);
lean_ctor_set(v___x_1557_, 1, v___x_1556_);
v___x_1558_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5);
v___x_1559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1557_);
lean_ctor_set(v___x_1559_, 1, v___x_1558_);
v___x_1560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
lean_ctor_set(v___x_1560_, 1, v___y_1549_);
v___x_1561_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg(v___x_1560_, v___y_1545_, v___y_1546_);
return v___x_1561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_attrName_1569_, lean_object* v_declName_1570_, lean_object* v_asyncPrefix_x3f_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg(v_attrName_1569_, v_declName_1570_, v_asyncPrefix_x3f_1571_, v___y_1572_, v___y_1573_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
return v_res_1575_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__0));
v___x_1578_ = l_Lean_stringToMessageData(v___x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_attrName_1579_, lean_object* v_declName_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; uint8_t v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1584_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_1585_ = l_Lean_MessageData_ofName(v_attrName_1579_);
v___x_1586_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1584_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
v___x_1587_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3);
v___x_1588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1586_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = 0;
v___x_1590_ = l_Lean_MessageData_ofConstName(v_declName_1580_, v___x_1589_);
v___x_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1588_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1);
v___x_1593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10___redArg(v___x_1593_, v___y_1581_, v___y_1582_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_attrName_1595_, lean_object* v_declName_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg(v_attrName_1595_, v_declName_1596_, v___y_1597_, v___y_1598_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0(lean_object* v_attr_1601_, lean_object* v_decl_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1623_; lean_object* v___x_1645_; lean_object* v_env_1646_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v___x_1659_; 
v___x_1645_ = lean_st_ref_get(v___y_1604_);
v_env_1646_ = lean_ctor_get(v___x_1645_, 0);
lean_inc_ref(v_env_1646_);
lean_dec(v___x_1645_);
v___x_1659_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1646_, v_decl_1602_);
if (lean_obj_tag(v___x_1659_) == 0)
{
v___y_1648_ = v___y_1603_;
v___y_1649_ = v___y_1604_;
goto v___jp_1647_;
}
else
{
lean_object* v_attr_1660_; lean_object* v_toAttributeImplCore_1661_; lean_object* v_name_1662_; lean_object* v___x_1663_; 
lean_dec_ref_known(v___x_1659_, 1);
lean_dec_ref(v_env_1646_);
v_attr_1660_ = lean_ctor_get(v_attr_1601_, 0);
lean_inc_ref(v_attr_1660_);
lean_dec_ref(v_attr_1601_);
v_toAttributeImplCore_1661_ = lean_ctor_get(v_attr_1660_, 0);
lean_inc_ref(v_toAttributeImplCore_1661_);
lean_dec_ref(v_attr_1660_);
v_name_1662_ = lean_ctor_get(v_toAttributeImplCore_1661_, 1);
lean_inc(v_name_1662_);
lean_dec_ref(v_toAttributeImplCore_1661_);
v___x_1663_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg(v_name_1662_, v_decl_1602_, v___y_1603_, v___y_1604_);
return v___x_1663_;
}
v___jp_1606_:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1618_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2);
v___x_1619_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1619_, 0, v___y_1617_);
lean_ctor_set(v___x_1619_, 1, v___y_1613_);
lean_ctor_set(v___x_1619_, 2, v___y_1607_);
lean_ctor_set(v___x_1619_, 3, v___y_1609_);
lean_ctor_set(v___x_1619_, 4, v___y_1615_);
lean_ctor_set(v___x_1619_, 5, v___x_1618_);
lean_ctor_set(v___x_1619_, 6, v___y_1612_);
lean_ctor_set(v___x_1619_, 7, v___y_1611_);
lean_ctor_set(v___x_1619_, 8, v___y_1616_);
lean_ctor_set(v___x_1619_, 9, v___y_1614_);
v___x_1620_ = lean_st_ref_put(v___y_1610_, v___x_1619_);
v___x_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1621_, 0, v___y_1608_);
return v___x_1621_;
}
v___jp_1622_:
{
lean_object* v___x_1624_; lean_object* v_ext_1625_; lean_object* v_toEnvExtension_1626_; lean_object* v_env_1627_; lean_object* v_nextMacroScope_1628_; lean_object* v_ngen_1629_; lean_object* v_auxDeclNGen_1630_; lean_object* v_traceState_1631_; lean_object* v_recordedDeps_1632_; lean_object* v_messages_1633_; lean_object* v_infoState_1634_; lean_object* v_snapshotTasks_1635_; lean_object* v_addEntryFn_1636_; lean_object* v_asyncMode_1637_; uint8_t v_logWrites_1638_; lean_object* v___x_1639_; lean_object* v___f_1640_; uint8_t v___x_1641_; 
v___x_1624_ = lean_st_ref_take(v___y_1623_);
v_ext_1625_ = lean_ctor_get(v_attr_1601_, 1);
lean_inc_ref(v_ext_1625_);
lean_dec_ref(v_attr_1601_);
v_toEnvExtension_1626_ = lean_ctor_get(v_ext_1625_, 0);
lean_inc_ref(v_toEnvExtension_1626_);
v_env_1627_ = lean_ctor_get(v___x_1624_, 0);
lean_inc_ref(v_env_1627_);
v_nextMacroScope_1628_ = lean_ctor_get(v___x_1624_, 1);
lean_inc(v_nextMacroScope_1628_);
v_ngen_1629_ = lean_ctor_get(v___x_1624_, 2);
lean_inc_ref(v_ngen_1629_);
v_auxDeclNGen_1630_ = lean_ctor_get(v___x_1624_, 3);
lean_inc_ref(v_auxDeclNGen_1630_);
v_traceState_1631_ = lean_ctor_get(v___x_1624_, 4);
lean_inc_ref(v_traceState_1631_);
v_recordedDeps_1632_ = lean_ctor_get(v___x_1624_, 6);
lean_inc_ref(v_recordedDeps_1632_);
v_messages_1633_ = lean_ctor_get(v___x_1624_, 7);
lean_inc_ref(v_messages_1633_);
v_infoState_1634_ = lean_ctor_get(v___x_1624_, 8);
lean_inc_ref(v_infoState_1634_);
v_snapshotTasks_1635_ = lean_ctor_get(v___x_1624_, 9);
lean_inc_ref(v_snapshotTasks_1635_);
lean_dec(v___x_1624_);
v_addEntryFn_1636_ = lean_ctor_get(v_ext_1625_, 3);
lean_inc(v_addEntryFn_1636_);
lean_dec_ref(v_ext_1625_);
v_asyncMode_1637_ = lean_ctor_get(v_toEnvExtension_1626_, 2);
lean_inc(v_asyncMode_1637_);
v_logWrites_1638_ = lean_ctor_get_uint8(v_toEnvExtension_1626_, sizeof(void*)*6);
v___x_1639_ = lean_box(0);
lean_inc(v_decl_1602_);
v___f_1640_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0___lam__0), 3, 2);
lean_closure_set(v___f_1640_, 0, v_addEntryFn_1636_);
lean_closure_set(v___f_1640_, 1, v_decl_1602_);
v___x_1641_ = 1;
if (v_logWrites_1638_ == 0)
{
lean_object* v___x_1642_; 
v___x_1642_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1626_, v_env_1627_, v___f_1640_, v_asyncMode_1637_, v_decl_1602_, v___x_1641_);
lean_dec(v_asyncMode_1637_);
v___y_1607_ = v_ngen_1629_;
v___y_1608_ = v___x_1639_;
v___y_1609_ = v_auxDeclNGen_1630_;
v___y_1610_ = v___y_1623_;
v___y_1611_ = v_messages_1633_;
v___y_1612_ = v_recordedDeps_1632_;
v___y_1613_ = v_nextMacroScope_1628_;
v___y_1614_ = v_snapshotTasks_1635_;
v___y_1615_ = v_traceState_1631_;
v___y_1616_ = v_infoState_1634_;
v___y_1617_ = v___x_1642_;
goto v___jp_1606_;
}
else
{
lean_object* v___x_1643_; lean_object* v___x_1644_; 
lean_inc_ref(v_toEnvExtension_1626_);
v___x_1643_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1626_, v_env_1627_);
lean_dec_ref(v_env_1627_);
v___x_1644_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1626_, v___x_1643_, v___f_1640_, v_asyncMode_1637_, v_decl_1602_, v___x_1641_);
lean_dec(v_asyncMode_1637_);
v___y_1607_ = v_ngen_1629_;
v___y_1608_ = v___x_1639_;
v___y_1609_ = v_auxDeclNGen_1630_;
v___y_1610_ = v___y_1623_;
v___y_1611_ = v_messages_1633_;
v___y_1612_ = v_recordedDeps_1632_;
v___y_1613_ = v_nextMacroScope_1628_;
v___y_1614_ = v_snapshotTasks_1635_;
v___y_1615_ = v_traceState_1631_;
v___y_1616_ = v_infoState_1634_;
v___y_1617_ = v___x_1644_;
goto v___jp_1606_;
}
}
v___jp_1647_:
{
lean_object* v_ext_1650_; lean_object* v_toEnvExtension_1651_; lean_object* v_attr_1652_; lean_object* v_asyncMode_1653_; uint8_t v___x_1654_; 
v_ext_1650_ = lean_ctor_get(v_attr_1601_, 1);
v_toEnvExtension_1651_ = lean_ctor_get(v_ext_1650_, 0);
v_attr_1652_ = lean_ctor_get(v_attr_1601_, 0);
v_asyncMode_1653_ = lean_ctor_get(v_toEnvExtension_1651_, 2);
lean_inc(v_decl_1602_);
lean_inc_ref(v_env_1646_);
v___x_1654_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_1646_, v_decl_1602_, v_asyncMode_1653_);
if (v___x_1654_ == 0)
{
lean_object* v_toAttributeImplCore_1655_; lean_object* v_name_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
lean_inc_ref(v_attr_1652_);
lean_dec_ref(v_attr_1601_);
v_toAttributeImplCore_1655_ = lean_ctor_get(v_attr_1652_, 0);
lean_inc_ref(v_toAttributeImplCore_1655_);
lean_dec_ref(v_attr_1652_);
v_name_1656_ = lean_ctor_get(v_toAttributeImplCore_1655_, 1);
lean_inc(v_name_1656_);
lean_dec_ref(v_toAttributeImplCore_1655_);
v___x_1657_ = l_Lean_Environment_asyncPrefix_x3f(v_env_1646_);
v___x_1658_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg(v_name_1656_, v_decl_1602_, v___x_1657_, v___y_1648_, v___y_1649_);
return v___x_1658_;
}
else
{
lean_dec_ref(v_env_1646_);
v___y_1623_ = v___y_1649_;
goto v___jp_1622_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0___boxed(lean_object* v_attr_1664_, lean_object* v_decl_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0(v_attr_1664_, v_decl_1665_, v___y_1666_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___lam__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_(lean_object* v_declName_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v___x_1674_; 
lean_inc(v_declName_1670_);
v___x_1674_ = l_Lean_validateDefEqAttr(v_declName_1670_, v___y_1671_, v___y_1672_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
lean_dec_ref_known(v___x_1674_, 1);
v___x_1675_ = l_Lean_backwardDefeqAttr;
v___x_1676_ = l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0(v___x_1675_, v_declName_1670_, v___y_1671_, v___y_1672_);
return v___x_1676_;
}
else
{
lean_dec(v_declName_1670_);
return v___x_1674_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn___lam__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2____boxed(lean_object* v_declName_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l___private_Lean_DefEqAttrib_0__Lean_initFn___lam__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_(v_declName_1677_, v___y_1678_, v___y_1679_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; uint8_t v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; lean_object* v___x_1699_; 
v___f_1692_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__0_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_));
v___x_1693_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__2_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_));
v___x_1694_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__3_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_));
v___x_1695_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_));
v___x_1696_ = 0;
v___x_1697_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__6_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_));
v___x_1698_ = 0;
v___x_1699_ = l_Lean_registerTagAttribute(v___x_1693_, v___x_1694_, v___f_1692_, v___x_1695_, v___x_1696_, v___x_1697_, v___x_1698_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2____boxed(lean_object* v_a_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_();
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b1_1702_, lean_object* v_attrName_1703_, lean_object* v_declName_1704_, lean_object* v_asyncPrefix_x3f_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg(v_attrName_1703_, v_declName_1704_, v_asyncPrefix_x3f_1705_, v___y_1706_, v___y_1707_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b1_1710_, lean_object* v_attrName_1711_, lean_object* v_declName_1712_, lean_object* v_asyncPrefix_x3f_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b1_1710_, v_attrName_1711_, v_declName_1712_, v_asyncPrefix_x3f_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b1_1718_, lean_object* v_attrName_1719_, lean_object* v_declName_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg(v_attrName_1719_, v_declName_1720_, v___y_1721_, v___y_1722_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_00_u03b1_1725_, lean_object* v_attrName_1726_, lean_object* v_declName_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1(v_00_u03b1_1725_, v_attrName_1726_, v_declName_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1(){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1734_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_));
v___x_1735_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1___closed__0));
v___x_1736_ = l_Lean_addBuiltinDocString(v___x_1734_, v___x_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1___boxed(lean_object* v_a_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1();
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3(){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1765_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_initFn___closed__5_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_));
v___x_1766_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___closed__6));
v___x_1767_ = l_Lean_addBuiltinDeclarationRanges(v___x_1765_, v___x_1766_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3___boxed(lean_object* v_a_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3();
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg(lean_object* v_type_1781_, lean_object* v_proof_1782_, lean_object* v_a_1783_){
_start:
{
if (lean_obj_tag(v_type_1781_) == 7)
{
if (lean_obj_tag(v_proof_1782_) == 6)
{
lean_object* v_body_1785_; lean_object* v_body_1786_; 
v_body_1785_ = lean_ctor_get(v_type_1781_, 2);
v_body_1786_ = lean_ctor_get(v_proof_1782_, 2);
lean_inc_ref(v_body_1786_);
lean_dec_ref_known(v_proof_1782_, 3);
v_type_1781_ = v_body_1785_;
v_proof_1782_ = v_body_1786_;
goto _start;
}
else
{
uint8_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
lean_dec_ref(v_proof_1782_);
v___x_1788_ = 0;
v___x_1789_ = lean_box(v___x_1788_);
v___x_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
return v___x_1790_;
}
}
else
{
lean_object* v___x_1791_; lean_object* v___x_1792_; uint8_t v___x_1793_; 
v___x_1791_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg___lam__0___closed__1));
v___x_1792_ = lean_unsigned_to_nat(3u);
v___x_1793_ = l_Lean_Expr_isAppOfArity(v_type_1781_, v___x_1791_, v___x_1792_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec_ref(v_proof_1782_);
v___x_1794_ = lean_box(v___x_1793_);
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
return v___x_1795_;
}
else
{
lean_object* v___x_1796_; lean_object* v___x_1797_; uint8_t v___x_1798_; 
v___x_1796_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__1));
v___x_1797_ = lean_unsigned_to_nat(2u);
v___x_1798_ = l_Lean_Expr_isAppOfArity(v_proof_1782_, v___x_1796_, v___x_1797_);
if (v___x_1798_ == 0)
{
lean_object* v___x_1799_; uint8_t v___x_1800_; 
v___x_1799_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__3));
v___x_1800_ = l_Lean_Expr_isAppOfArity(v_proof_1782_, v___x_1799_, v___x_1797_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; 
v___x_1801_ = ((lean_object*)(l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___closed__5));
v___x_1802_ = lean_unsigned_to_nat(4u);
v___x_1803_ = l_Lean_Expr_isAppOfArity(v_proof_1782_, v___x_1801_, v___x_1802_);
if (v___x_1803_ == 0)
{
lean_object* v___x_1804_; uint8_t v___x_1805_; 
v___x_1804_ = l_Lean_Expr_getAppFn(v_proof_1782_);
lean_dec_ref(v_proof_1782_);
v___x_1805_ = l_Lean_Expr_isConst(v___x_1804_);
if (v___x_1805_ == 0)
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
lean_dec_ref(v___x_1804_);
v___x_1806_ = lean_box(v___x_1805_);
v___x_1807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
return v___x_1807_;
}
else
{
lean_object* v___x_1808_; lean_object* v_env_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1808_ = lean_st_ref_get(v_a_1783_);
v_env_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc_ref_n(v_env_1809_, 2);
lean_dec(v___x_1808_);
v___x_1810_ = l_Lean_Expr_constName_x21(v___x_1804_);
lean_dec_ref(v___x_1804_);
v___x_1811_ = l_Lean_defeqAttr;
lean_inc(v___x_1810_);
v___x_1812_ = l_Lean_TagAttribute_hasTag(v___x_1811_, v_env_1809_, v___x_1810_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; uint8_t v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1813_ = l_Lean_backwardDefeqAttr;
v___x_1814_ = l_Lean_TagAttribute_hasTag(v___x_1813_, v_env_1809_, v___x_1810_);
v___x_1815_ = lean_box(v___x_1814_);
v___x_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1815_);
return v___x_1816_;
}
else
{
lean_object* v___x_1817_; lean_object* v___x_1818_; 
lean_dec(v___x_1810_);
lean_dec_ref(v_env_1809_);
v___x_1817_ = lean_box(v___x_1812_);
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
return v___x_1818_;
}
}
}
else
{
lean_object* v___x_1819_; 
v___x_1819_ = l_Lean_Expr_appArg_x21(v_proof_1782_);
lean_dec_ref(v_proof_1782_);
v_proof_1782_ = v___x_1819_;
goto _start;
}
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
lean_dec_ref(v_proof_1782_);
v___x_1821_ = lean_box(v___x_1793_);
v___x_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
return v___x_1822_;
}
}
else
{
lean_object* v___x_1823_; lean_object* v___x_1824_; 
lean_dec_ref(v_proof_1782_);
v___x_1823_ = lean_box(v___x_1793_);
v___x_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1823_);
return v___x_1824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg___boxed(lean_object* v_type_1825_, lean_object* v_proof_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg(v_type_1825_, v_proof_1826_, v_a_1827_);
lean_dec(v_a_1827_);
lean_dec_ref(v_type_1825_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore(lean_object* v_type_1830_, lean_object* v_proof_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_){
_start:
{
lean_object* v___x_1835_; 
v___x_1835_ = l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg(v_type_1830_, v_proof_1831_, v_a_1833_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___boxed(lean_object* v_type_1836_, lean_object* v_proof_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore(v_type_1836_, v_proof_1837_, v_a_1838_, v_a_1839_);
lean_dec(v_a_1839_);
lean_dec_ref(v_a_1838_);
lean_dec_ref(v_type_1836_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___redArg(lean_object* v_attrName_1842_, lean_object* v_declName_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; uint8_t v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1849_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_1850_ = l_Lean_MessageData_ofName(v_attrName_1842_);
v___x_1851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1849_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
v___x_1852_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3);
v___x_1853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1851_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
v___x_1854_ = 0;
v___x_1855_ = l_Lean_MessageData_ofConstName(v_declName_1843_, v___x_1854_);
v___x_1856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1853_);
lean_ctor_set(v___x_1856_, 1, v___x_1855_);
v___x_1857_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__1___redArg___closed__1);
v___x_1858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
v___x_1859_ = l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(v___x_1858_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___redArg___boxed(lean_object* v_attrName_1860_, lean_object* v_declName_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___redArg(v_attrName_1860_, v_declName_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___redArg(lean_object* v_attrName_1868_, lean_object* v_declName_1869_, lean_object* v_asyncPrefix_x3f_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v___y_1877_; 
if (lean_obj_tag(v_asyncPrefix_x3f_1870_) == 0)
{
lean_object* v___x_1890_; 
v___x_1890_ = l_Lean_MessageData_nil;
v___y_1877_ = v___x_1890_;
goto v___jp_1876_;
}
else
{
lean_object* v_val_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v_val_1891_ = lean_ctor_get(v_asyncPrefix_x3f_1870_, 0);
lean_inc(v_val_1891_);
lean_dec_ref_known(v_asyncPrefix_x3f_1870_, 1);
v___x_1892_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__7);
v___x_1893_ = l_Lean_MessageData_ofName(v_val_1891_);
v___x_1894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1892_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3);
v___x_1896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1894_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v___y_1877_ = v___x_1896_;
goto v___jp_1876_;
}
v___jp_1876_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; uint8_t v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1878_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_1879_ = l_Lean_MessageData_ofName(v_attrName_1868_);
v___x_1880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1878_);
lean_ctor_set(v___x_1880_, 1, v___x_1879_);
v___x_1881_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__3);
v___x_1882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1880_);
lean_ctor_set(v___x_1882_, 1, v___x_1881_);
v___x_1883_ = 0;
v___x_1884_ = l_Lean_MessageData_ofConstName(v_declName_1869_, v___x_1883_);
v___x_1885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1882_);
lean_ctor_set(v___x_1885_, 1, v___x_1884_);
v___x_1886_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__5);
v___x_1887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1885_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
v___x_1888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1887_);
lean_ctor_set(v___x_1888_, 1, v___y_1877_);
v___x_1889_ = l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(v___x_1888_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
return v___x_1889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___redArg___boxed(lean_object* v_attrName_1897_, lean_object* v_declName_1898_, lean_object* v_asyncPrefix_x3f_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___redArg(v_attrName_1897_, v_declName_1898_, v_asyncPrefix_x3f_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0(lean_object* v_attr_1906_, lean_object* v_decl_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v___y_1914_; lean_object* v___y_1915_; lean_object* v___y_1916_; lean_object* v___y_1917_; lean_object* v___y_1918_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1924_; lean_object* v___y_1946_; lean_object* v___y_1947_; lean_object* v___x_1968_; lean_object* v_env_1969_; lean_object* v___y_1971_; lean_object* v___y_1972_; lean_object* v___y_1973_; lean_object* v___y_1974_; lean_object* v___x_1984_; 
v___x_1968_ = lean_st_ref_get(v___y_1911_);
v_env_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc_ref(v_env_1969_);
lean_dec(v___x_1968_);
v___x_1984_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1969_, v_decl_1907_);
if (lean_obj_tag(v___x_1984_) == 0)
{
v___y_1971_ = v___y_1908_;
v___y_1972_ = v___y_1909_;
v___y_1973_ = v___y_1910_;
v___y_1974_ = v___y_1911_;
goto v___jp_1970_;
}
else
{
lean_object* v_attr_1985_; lean_object* v_toAttributeImplCore_1986_; lean_object* v_name_1987_; lean_object* v___x_1988_; 
lean_dec_ref_known(v___x_1984_, 1);
lean_dec_ref(v_env_1969_);
v_attr_1985_ = lean_ctor_get(v_attr_1906_, 0);
lean_inc_ref(v_attr_1985_);
lean_dec_ref(v_attr_1906_);
v_toAttributeImplCore_1986_ = lean_ctor_get(v_attr_1985_, 0);
lean_inc_ref(v_toAttributeImplCore_1986_);
lean_dec_ref(v_attr_1985_);
v_name_1987_ = lean_ctor_get(v_toAttributeImplCore_1986_, 1);
lean_inc(v_name_1987_);
lean_dec_ref(v_toAttributeImplCore_1986_);
v___x_1988_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___redArg(v_name_1987_, v_decl_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
return v___x_1988_;
}
v___jp_1913_:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v_mctx_1929_; lean_object* v_zetaDeltaFVarIds_1930_; lean_object* v_postponed_1931_; lean_object* v_diag_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1943_; 
v___x_1925_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2);
v___x_1926_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1926_, 0, v___y_1924_);
lean_ctor_set(v___x_1926_, 1, v___y_1917_);
lean_ctor_set(v___x_1926_, 2, v___y_1923_);
lean_ctor_set(v___x_1926_, 3, v___y_1915_);
lean_ctor_set(v___x_1926_, 4, v___y_1914_);
lean_ctor_set(v___x_1926_, 5, v___x_1925_);
lean_ctor_set(v___x_1926_, 6, v___y_1919_);
lean_ctor_set(v___x_1926_, 7, v___y_1920_);
lean_ctor_set(v___x_1926_, 8, v___y_1922_);
lean_ctor_set(v___x_1926_, 9, v___y_1916_);
v___x_1927_ = lean_st_ref_put(v___y_1921_, v___x_1926_);
v___x_1928_ = lean_st_ref_take(v___y_1918_);
v_mctx_1929_ = lean_ctor_get(v___x_1928_, 0);
v_zetaDeltaFVarIds_1930_ = lean_ctor_get(v___x_1928_, 2);
v_postponed_1931_ = lean_ctor_get(v___x_1928_, 3);
v_diag_1932_ = lean_ctor_get(v___x_1928_, 4);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1943_ == 0)
{
lean_object* v_unused_1944_; 
v_unused_1944_ = lean_ctor_get(v___x_1928_, 1);
lean_dec(v_unused_1944_);
v___x_1934_ = v___x_1928_;
v_isShared_1935_ = v_isSharedCheck_1943_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_diag_1932_);
lean_inc(v_postponed_1931_);
lean_inc(v_zetaDeltaFVarIds_1930_);
lean_inc(v_mctx_1929_);
lean_dec(v___x_1928_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1943_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1936_ = lean_box(0);
v___x_1937_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 1, v___x_1937_);
v___x_1939_ = v___x_1934_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_mctx_1929_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v___x_1937_);
lean_ctor_set(v_reuseFailAlloc_1942_, 2, v_zetaDeltaFVarIds_1930_);
lean_ctor_set(v_reuseFailAlloc_1942_, 3, v_postponed_1931_);
lean_ctor_set(v_reuseFailAlloc_1942_, 4, v_diag_1932_);
v___x_1939_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_st_ref_put(v___y_1918_, v___x_1939_);
v___x_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1936_);
return v___x_1941_;
}
}
}
v___jp_1945_:
{
lean_object* v___x_1948_; lean_object* v_ext_1949_; lean_object* v_toEnvExtension_1950_; lean_object* v_env_1951_; lean_object* v_nextMacroScope_1952_; lean_object* v_ngen_1953_; lean_object* v_auxDeclNGen_1954_; lean_object* v_traceState_1955_; lean_object* v_recordedDeps_1956_; lean_object* v_messages_1957_; lean_object* v_infoState_1958_; lean_object* v_snapshotTasks_1959_; lean_object* v_addEntryFn_1960_; lean_object* v_asyncMode_1961_; uint8_t v_logWrites_1962_; lean_object* v___f_1963_; uint8_t v___x_1964_; 
v___x_1948_ = lean_st_ref_take(v___y_1947_);
v_ext_1949_ = lean_ctor_get(v_attr_1906_, 1);
lean_inc_ref(v_ext_1949_);
lean_dec_ref(v_attr_1906_);
v_toEnvExtension_1950_ = lean_ctor_get(v_ext_1949_, 0);
lean_inc_ref(v_toEnvExtension_1950_);
v_env_1951_ = lean_ctor_get(v___x_1948_, 0);
lean_inc_ref(v_env_1951_);
v_nextMacroScope_1952_ = lean_ctor_get(v___x_1948_, 1);
lean_inc(v_nextMacroScope_1952_);
v_ngen_1953_ = lean_ctor_get(v___x_1948_, 2);
lean_inc_ref(v_ngen_1953_);
v_auxDeclNGen_1954_ = lean_ctor_get(v___x_1948_, 3);
lean_inc_ref(v_auxDeclNGen_1954_);
v_traceState_1955_ = lean_ctor_get(v___x_1948_, 4);
lean_inc_ref(v_traceState_1955_);
v_recordedDeps_1956_ = lean_ctor_get(v___x_1948_, 6);
lean_inc_ref(v_recordedDeps_1956_);
v_messages_1957_ = lean_ctor_get(v___x_1948_, 7);
lean_inc_ref(v_messages_1957_);
v_infoState_1958_ = lean_ctor_get(v___x_1948_, 8);
lean_inc_ref(v_infoState_1958_);
v_snapshotTasks_1959_ = lean_ctor_get(v___x_1948_, 9);
lean_inc_ref(v_snapshotTasks_1959_);
lean_dec(v___x_1948_);
v_addEntryFn_1960_ = lean_ctor_get(v_ext_1949_, 3);
lean_inc(v_addEntryFn_1960_);
lean_dec_ref(v_ext_1949_);
v_asyncMode_1961_ = lean_ctor_get(v_toEnvExtension_1950_, 2);
lean_inc(v_asyncMode_1961_);
v_logWrites_1962_ = lean_ctor_get_uint8(v_toEnvExtension_1950_, sizeof(void*)*6);
lean_inc(v_decl_1907_);
v___f_1963_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___at___00__private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2__spec__0___lam__0), 3, 2);
lean_closure_set(v___f_1963_, 0, v_addEntryFn_1960_);
lean_closure_set(v___f_1963_, 1, v_decl_1907_);
v___x_1964_ = 1;
if (v_logWrites_1962_ == 0)
{
lean_object* v___x_1965_; 
v___x_1965_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1950_, v_env_1951_, v___f_1963_, v_asyncMode_1961_, v_decl_1907_, v___x_1964_);
lean_dec(v_asyncMode_1961_);
v___y_1914_ = v_traceState_1955_;
v___y_1915_ = v_auxDeclNGen_1954_;
v___y_1916_ = v_snapshotTasks_1959_;
v___y_1917_ = v_nextMacroScope_1952_;
v___y_1918_ = v___y_1946_;
v___y_1919_ = v_recordedDeps_1956_;
v___y_1920_ = v_messages_1957_;
v___y_1921_ = v___y_1947_;
v___y_1922_ = v_infoState_1958_;
v___y_1923_ = v_ngen_1953_;
v___y_1924_ = v___x_1965_;
goto v___jp_1913_;
}
else
{
lean_object* v___x_1966_; lean_object* v___x_1967_; 
lean_inc_ref(v_toEnvExtension_1950_);
v___x_1966_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1950_, v_env_1951_);
lean_dec_ref(v_env_1951_);
v___x_1967_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1950_, v___x_1966_, v___f_1963_, v_asyncMode_1961_, v_decl_1907_, v___x_1964_);
lean_dec(v_asyncMode_1961_);
v___y_1914_ = v_traceState_1955_;
v___y_1915_ = v_auxDeclNGen_1954_;
v___y_1916_ = v_snapshotTasks_1959_;
v___y_1917_ = v_nextMacroScope_1952_;
v___y_1918_ = v___y_1946_;
v___y_1919_ = v_recordedDeps_1956_;
v___y_1920_ = v_messages_1957_;
v___y_1921_ = v___y_1947_;
v___y_1922_ = v_infoState_1958_;
v___y_1923_ = v_ngen_1953_;
v___y_1924_ = v___x_1967_;
goto v___jp_1913_;
}
}
v___jp_1970_:
{
lean_object* v_ext_1975_; lean_object* v_toEnvExtension_1976_; lean_object* v_attr_1977_; lean_object* v_asyncMode_1978_; uint8_t v___x_1979_; 
v_ext_1975_ = lean_ctor_get(v_attr_1906_, 1);
v_toEnvExtension_1976_ = lean_ctor_get(v_ext_1975_, 0);
v_attr_1977_ = lean_ctor_get(v_attr_1906_, 0);
v_asyncMode_1978_ = lean_ctor_get(v_toEnvExtension_1976_, 2);
lean_inc(v_decl_1907_);
lean_inc_ref(v_env_1969_);
v___x_1979_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_1969_, v_decl_1907_, v_asyncMode_1978_);
if (v___x_1979_ == 0)
{
lean_object* v_toAttributeImplCore_1980_; lean_object* v_name_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
lean_inc_ref(v_attr_1977_);
lean_dec_ref(v_attr_1906_);
v_toAttributeImplCore_1980_ = lean_ctor_get(v_attr_1977_, 0);
lean_inc_ref(v_toAttributeImplCore_1980_);
lean_dec_ref(v_attr_1977_);
v_name_1981_ = lean_ctor_get(v_toAttributeImplCore_1980_, 1);
lean_inc(v_name_1981_);
lean_dec_ref(v_toAttributeImplCore_1980_);
v___x_1982_ = l_Lean_Environment_asyncPrefix_x3f(v_env_1969_);
v___x_1983_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___redArg(v_name_1981_, v_decl_1907_, v___x_1982_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
return v___x_1983_;
}
else
{
lean_dec_ref(v_env_1969_);
v___y_1946_ = v___y_1972_;
v___y_1947_ = v___y_1974_;
goto v___jp_1945_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0___boxed(lean_object* v_attr_1989_, lean_object* v_decl_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l_Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0(v_attr_1989_, v_decl_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
lean_dec(v___y_1994_);
lean_dec_ref(v___y_1993_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___redArg(lean_object* v_msg_1997_, lean_object* v_declHint_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v_env_2003_; uint8_t v___x_2004_; 
v___x_2001_ = lean_box(0);
v___x_2002_ = lean_st_ref_get(v___y_1999_);
v_env_2003_ = lean_ctor_get(v___x_2002_, 0);
lean_inc_ref(v_env_2003_);
lean_dec(v___x_2002_);
v___x_2004_ = l_Lean_Name_isAnonymous(v_declHint_1998_);
if (v___x_2004_ == 0)
{
uint8_t v_isExporting_2005_; 
v_isExporting_2005_ = lean_ctor_get_uint8(v_env_2003_, sizeof(void*)*13);
if (v_isExporting_2005_ == 0)
{
lean_object* v___x_2006_; 
lean_dec_ref(v_env_2003_);
lean_dec(v_declHint_1998_);
v___x_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2006_, 0, v_msg_1997_);
return v___x_2006_;
}
else
{
lean_object* v___x_2007_; uint8_t v___x_2008_; 
lean_inc_ref(v_env_2003_);
v___x_2007_ = l_Lean_Environment_setExporting(v_env_2003_, v___x_2004_);
lean_inc(v_declHint_1998_);
lean_inc_ref(v___x_2007_);
v___x_2008_ = l_Lean_Environment_contains(v___x_2007_, v_declHint_1998_, v_isExporting_2005_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; 
lean_dec_ref(v___x_2007_);
lean_dec_ref(v_env_2003_);
lean_dec(v_declHint_1998_);
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v_msg_1997_);
return v___x_2009_;
}
else
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v_c_2017_; lean_object* v___x_2018_; 
v___x_2010_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__1);
v___x_2011_ = lean_unsigned_to_nat(32u);
v___x_2012_ = lean_mk_empty_array_with_capacity(v___x_2011_);
lean_dec_ref(v___x_2012_);
v___x_2013_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__8_spec__10_spec__11___closed__4);
v___x_2014_ = l_Lean_Options_empty;
lean_inc_ref(v___x_2007_);
v___x_2015_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2007_);
lean_ctor_set(v___x_2015_, 1, v___x_2010_);
lean_ctor_set(v___x_2015_, 2, v___x_2013_);
lean_ctor_set(v___x_2015_, 3, v___x_2014_);
lean_inc(v_declHint_1998_);
v___x_2016_ = l_Lean_MessageData_ofConstName(v_declHint_1998_, v___x_2004_);
v_c_2017_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2017_, 0, v___x_2015_);
lean_ctor_set(v_c_2017_, 1, v___x_2016_);
v___x_2018_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_2007_, v_declHint_1998_);
lean_dec_ref(v___x_2007_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec_ref(v_env_2003_);
lean_dec(v_declHint_1998_);
v___x_2019_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_2020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
lean_ctor_set(v___x_2020_, 1, v_c_2017_);
v___x_2021_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__3);
v___x_2022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2020_);
lean_ctor_set(v___x_2022_, 1, v___x_2021_);
v___x_2023_ = l_Lean_MessageData_note(v___x_2022_);
v___x_2024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2024_, 0, v_msg_1997_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
return v___x_2025_;
}
else
{
lean_object* v_val_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2060_; 
v_val_2026_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2028_ = v___x_2018_;
v_isShared_2029_ = v_isSharedCheck_2060_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_val_2026_);
lean_dec(v___x_2018_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2060_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2030_; lean_object* v_moduleNames_2031_; lean_object* v_mod_2032_; uint8_t v___x_2033_; 
v___x_2030_ = l_Lean_Environment_header(v_env_2003_);
lean_dec_ref(v_env_2003_);
v_moduleNames_2031_ = lean_ctor_get(v___x_2030_, 4);
lean_inc_ref(v_moduleNames_2031_);
lean_dec_ref(v___x_2030_);
v_mod_2032_ = lean_array_get(v___x_2001_, v_moduleNames_2031_, v_val_2026_);
lean_dec(v_val_2026_);
lean_dec_ref(v_moduleNames_2031_);
v___x_2033_ = l_Lean_isPrivateName(v_declHint_1998_);
lean_dec(v_declHint_1998_);
if (v___x_2033_ == 0)
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
v___x_2034_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__5);
v___x_2035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2034_);
lean_ctor_set(v___x_2035_, 1, v_c_2017_);
v___x_2036_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_2037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2035_);
lean_ctor_set(v___x_2037_, 1, v___x_2036_);
v___x_2038_ = l_Lean_MessageData_ofName(v_mod_2032_);
v___x_2039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2037_);
lean_ctor_set(v___x_2039_, 1, v___x_2038_);
v___x_2040_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__9);
v___x_2041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2039_);
lean_ctor_set(v___x_2041_, 1, v___x_2040_);
v___x_2042_ = l_Lean_MessageData_note(v___x_2041_);
v___x_2043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2043_, 0, v_msg_1997_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
if (v_isShared_2029_ == 0)
{
lean_ctor_set_tag(v___x_2028_, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2043_);
v___x_2045_ = v___x_2028_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
else
{
lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2047_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_2048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
lean_ctor_set(v___x_2048_, 1, v_c_2017_);
v___x_2049_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__11);
v___x_2050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2048_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = l_Lean_MessageData_ofName(v_mod_2032_);
v___x_2052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2050_);
lean_ctor_set(v___x_2052_, 1, v___x_2051_);
v___x_2053_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3_spec__6_spec__7_spec__8___redArg___closed__13);
v___x_2054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2052_);
lean_ctor_set(v___x_2054_, 1, v___x_2053_);
v___x_2055_ = l_Lean_MessageData_note(v___x_2054_);
v___x_2056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2056_, 0, v_msg_1997_);
lean_ctor_set(v___x_2056_, 1, v___x_2055_);
if (v_isShared_2029_ == 0)
{
lean_ctor_set_tag(v___x_2028_, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2056_);
v___x_2058_ = v___x_2028_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2061_; 
lean_dec_ref(v_env_2003_);
lean_dec(v_declHint_1998_);
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_msg_1997_);
return v___x_2061_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___redArg___boxed(lean_object* v_msg_2062_, lean_object* v_declHint_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___redArg(v_msg_2062_, v_declHint_2063_, v___y_2064_);
lean_dec(v___y_2064_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9(lean_object* v_msg_2067_, lean_object* v_declHint_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v___x_2074_; lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2084_; 
v___x_2074_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___redArg(v_msg_2067_, v_declHint_2068_, v___y_2072_);
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2077_ = v___x_2074_;
v_isShared_2078_ = v_isSharedCheck_2084_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2074_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2084_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2082_; 
v___x_2079_ = l_Lean_unknownIdentifierMessageTag;
v___x_2080_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
lean_ctor_set(v___x_2080_, 1, v_a_2075_);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2080_);
v___x_2082_ = v___x_2077_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2080_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9___boxed(lean_object* v_msg_2085_, lean_object* v_declHint_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9(v_msg_2085_, v_declHint_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_);
lean_dec(v___y_2090_);
lean_dec_ref(v___y_2089_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___redArg(lean_object* v_ref_2093_, lean_object* v_msg_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_){
_start:
{
lean_object* v_toCold_2100_; lean_object* v_currRecDepth_2101_; lean_object* v_ref_2102_; uint16_t v_optionFlags_2103_; uint8_t v_suppressElabErrors_2104_; uint8_t v_checkDeprecated_2105_; uint8_t v_isRecordingDeps_2106_; lean_object* v_ref_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v_toCold_2100_ = lean_ctor_get(v___y_2097_, 0);
v_currRecDepth_2101_ = lean_ctor_get(v___y_2097_, 1);
v_ref_2102_ = lean_ctor_get(v___y_2097_, 2);
v_optionFlags_2103_ = lean_ctor_get_uint16(v___y_2097_, sizeof(void*)*3);
v_suppressElabErrors_2104_ = lean_ctor_get_uint8(v___y_2097_, sizeof(void*)*3 + 2);
v_checkDeprecated_2105_ = lean_ctor_get_uint8(v___y_2097_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2106_ = lean_ctor_get_uint8(v___y_2097_, sizeof(void*)*3 + 4);
v_ref_2107_ = l_Lean_replaceRef(v_ref_2093_, v_ref_2102_);
lean_inc(v_currRecDepth_2101_);
lean_inc_ref(v_toCold_2100_);
v___x_2108_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2108_, 0, v_toCold_2100_);
lean_ctor_set(v___x_2108_, 1, v_currRecDepth_2101_);
lean_ctor_set(v___x_2108_, 2, v_ref_2107_);
lean_ctor_set_uint16(v___x_2108_, sizeof(void*)*3, v_optionFlags_2103_);
lean_ctor_set_uint8(v___x_2108_, sizeof(void*)*3 + 2, v_suppressElabErrors_2104_);
lean_ctor_set_uint8(v___x_2108_, sizeof(void*)*3 + 3, v_checkDeprecated_2105_);
lean_ctor_set_uint8(v___x_2108_, sizeof(void*)*3 + 4, v_isRecordingDeps_2106_);
v___x_2109_ = l_Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0___redArg(v_msg_2094_, v___y_2095_, v___y_2096_, v___x_2108_, v___y_2098_);
lean_dec_ref_known(v___x_2108_, 3);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___redArg___boxed(lean_object* v_ref_2110_, lean_object* v_msg_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v_res_2117_; 
v_res_2117_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___redArg(v_ref_2110_, v_msg_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v_ref_2110_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___redArg(lean_object* v_ref_2118_, lean_object* v_msg_2119_, lean_object* v_declHint_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
lean_object* v___x_2126_; lean_object* v_a_2127_; lean_object* v___x_2128_; 
v___x_2126_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9(v_msg_2119_, v_declHint_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_a_2127_);
lean_dec_ref(v___x_2126_);
v___x_2128_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___redArg(v_ref_2118_, v_a_2127_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___redArg___boxed(lean_object* v_ref_2129_, lean_object* v_msg_2130_, lean_object* v_declHint_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_){
_start:
{
lean_object* v_res_2137_; 
v_res_2137_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___redArg(v_ref_2129_, v_msg_2130_, v_declHint_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v_ref_2129_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___redArg(lean_object* v_ref_2138_, lean_object* v_constName_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v___x_2145_; uint8_t v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2145_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__1);
v___x_2146_ = 0;
lean_inc(v_constName_2139_);
v___x_2147_ = l_Lean_MessageData_ofConstName(v_constName_2139_, v___x_2146_);
v___x_2148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2145_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
v___x_2149_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_validateDefEqAttr_spec__1_spec__2_spec__3___redArg___closed__3);
v___x_2150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2150_, 0, v___x_2148_);
lean_ctor_set(v___x_2150_, 1, v___x_2149_);
v___x_2151_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___redArg(v_ref_2138_, v___x_2150_, v_constName_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___redArg___boxed(lean_object* v_ref_2152_, lean_object* v_constName_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___redArg(v_ref_2152_, v_constName_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec(v_ref_2152_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___redArg(lean_object* v_constName_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_){
_start:
{
lean_object* v_ref_2166_; lean_object* v___x_2167_; 
v_ref_2166_ = lean_ctor_get(v___y_2163_, 2);
v___x_2167_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___redArg(v_ref_2166_, v_constName_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___redArg___boxed(lean_object* v_constName_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
lean_object* v_res_2174_; 
v_res_2174_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___redArg(v_constName_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1(lean_object* v_constName_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v___x_2181_; lean_object* v_env_2182_; uint8_t v___x_2183_; lean_object* v___x_2184_; 
v___x_2181_ = lean_st_ref_get(v___y_2179_);
v_env_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc_ref(v_env_2182_);
lean_dec(v___x_2181_);
v___x_2183_ = 0;
lean_inc(v_constName_2175_);
v___x_2184_ = l_Lean_Environment_find_x3f(v_env_2182_, v_constName_2175_, v___x_2183_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v___x_2185_; 
v___x_2185_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___redArg(v_constName_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_);
return v___x_2185_;
}
else
{
lean_object* v_val_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2193_; 
lean_dec(v_constName_2175_);
v_val_2186_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2188_ = v___x_2184_;
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_val_2186_);
lean_dec(v___x_2184_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2191_; 
if (v_isShared_2189_ == 0)
{
lean_ctor_set_tag(v___x_2188_, 0);
v___x_2191_ = v___x_2188_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_val_2186_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1___boxed(lean_object* v_constName_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
lean_object* v_res_2200_; 
v_res_2200_ = l_Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1(v_constName_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
return v_res_2200_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6_spec__10(lean_object* v_opts_2201_, lean_object* v_opt_2202_){
_start:
{
lean_object* v_name_2203_; lean_object* v_defValue_2204_; lean_object* v_map_2205_; lean_object* v___x_2206_; 
v_name_2203_ = lean_ctor_get(v_opt_2202_, 0);
v_defValue_2204_ = lean_ctor_get(v_opt_2202_, 1);
v_map_2205_ = lean_ctor_get(v_opts_2201_, 0);
v___x_2206_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2205_, v_name_2203_);
if (lean_obj_tag(v___x_2206_) == 0)
{
uint8_t v___x_2207_; 
v___x_2207_ = lean_unbox(v_defValue_2204_);
return v___x_2207_;
}
else
{
lean_object* v_val_2208_; 
v_val_2208_ = lean_ctor_get(v___x_2206_, 0);
lean_inc(v_val_2208_);
lean_dec_ref_known(v___x_2206_, 1);
if (lean_obj_tag(v_val_2208_) == 1)
{
uint8_t v_v_2209_; 
v_v_2209_ = lean_ctor_get_uint8(v_val_2208_, 0);
lean_dec_ref_known(v_val_2208_, 0);
return v_v_2209_;
}
else
{
uint8_t v___x_2210_; 
lean_dec(v_val_2208_);
v___x_2210_ = lean_unbox(v_defValue_2204_);
return v___x_2210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6_spec__10___boxed(lean_object* v_opts_2211_, lean_object* v_opt_2212_){
_start:
{
uint8_t v_res_2213_; lean_object* v_r_2214_; 
v_res_2213_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6_spec__10(v_opts_2211_, v_opt_2212_);
lean_dec_ref(v_opt_2212_);
lean_dec_ref(v_opts_2211_);
v_r_2214_ = lean_box(v_res_2213_);
return v_r_2214_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0(uint8_t v___x_2222_, lean_object* v_x_2223_){
_start:
{
if (lean_obj_tag(v_x_2223_) == 1)
{
lean_object* v_pre_2224_; 
v_pre_2224_ = lean_ctor_get(v_x_2223_, 0);
switch(lean_obj_tag(v_pre_2224_))
{
case 1:
{
lean_object* v_pre_2225_; 
v_pre_2225_ = lean_ctor_get(v_pre_2224_, 0);
switch(lean_obj_tag(v_pre_2225_))
{
case 0:
{
lean_object* v_str_2226_; lean_object* v_str_2227_; lean_object* v___x_2228_; uint8_t v___x_2229_; 
v_str_2226_ = lean_ctor_get(v_x_2223_, 1);
v_str_2227_ = lean_ctor_get(v_pre_2224_, 1);
v___x_2228_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__0));
v___x_2229_ = lean_string_dec_eq(v_str_2227_, v___x_2228_);
if (v___x_2229_ == 0)
{
lean_object* v___x_2230_; uint8_t v___x_2231_; 
v___x_2230_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__1));
v___x_2231_ = lean_string_dec_eq(v_str_2227_, v___x_2230_);
if (v___x_2231_ == 0)
{
return v___x_2231_;
}
else
{
lean_object* v___x_2232_; uint8_t v___x_2233_; 
v___x_2232_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__2));
v___x_2233_ = lean_string_dec_eq(v_str_2226_, v___x_2232_);
return v___x_2233_;
}
}
else
{
lean_object* v___x_2234_; uint8_t v___x_2235_; 
v___x_2234_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__3));
v___x_2235_ = lean_string_dec_eq(v_str_2226_, v___x_2234_);
return v___x_2235_;
}
}
case 1:
{
lean_object* v_pre_2236_; 
v_pre_2236_ = lean_ctor_get(v_pre_2225_, 0);
if (lean_obj_tag(v_pre_2236_) == 0)
{
lean_object* v_str_2237_; lean_object* v_str_2238_; lean_object* v_str_2239_; lean_object* v___x_2240_; uint8_t v___x_2241_; 
v_str_2237_ = lean_ctor_get(v_x_2223_, 1);
v_str_2238_ = lean_ctor_get(v_pre_2224_, 1);
v_str_2239_ = lean_ctor_get(v_pre_2225_, 1);
v___x_2240_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__4));
v___x_2241_ = lean_string_dec_eq(v_str_2239_, v___x_2240_);
if (v___x_2241_ == 0)
{
return v___x_2241_;
}
else
{
lean_object* v___x_2242_; uint8_t v___x_2243_; 
v___x_2242_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__5));
v___x_2243_ = lean_string_dec_eq(v_str_2238_, v___x_2242_);
if (v___x_2243_ == 0)
{
return v___x_2243_;
}
else
{
lean_object* v___x_2244_; uint8_t v___x_2245_; 
v___x_2244_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___closed__6));
v___x_2245_ = lean_string_dec_eq(v_str_2237_, v___x_2244_);
return v___x_2245_;
}
}
}
else
{
return v___x_2222_;
}
}
default: 
{
return v___x_2222_;
}
}
}
case 0:
{
lean_object* v_str_2246_; lean_object* v___x_2247_; uint8_t v___x_2248_; 
v_str_2246_ = lean_ctor_get(v_x_2223_, 1);
v___x_2247_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_DefEqAttrib_0__Lean_isDefEqCareful_spec__1_spec__1___closed__0));
v___x_2248_ = lean_string_dec_eq(v_str_2246_, v___x_2247_);
return v___x_2248_;
}
default: 
{
return v___x_2222_;
}
}
}
else
{
return v___x_2222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0___boxed(lean_object* v___x_2249_, lean_object* v_x_2250_){
_start:
{
uint8_t v___x_8800__boxed_2251_; uint8_t v_res_2252_; lean_object* v_r_2253_; 
v___x_8800__boxed_2251_ = lean_unbox(v___x_2249_);
v_res_2252_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___lam__0(v___x_8800__boxed_2251_, v_x_2250_);
lean_dec(v_x_2250_);
v_r_2253_ = lean_box(v_res_2252_);
return v_r_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6(lean_object* v_ref_2258_, lean_object* v_msgData_2259_, uint8_t v_severity_2260_, uint8_t v_isSilent_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
uint8_t v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; uint8_t v___y_2274_; lean_object* v_toCold_2275_; lean_object* v___y_2276_; lean_object* v___y_2305_; lean_object* v___y_2306_; uint8_t v___y_2307_; lean_object* v___y_2308_; uint8_t v___y_2309_; lean_object* v___y_2310_; uint8_t v___y_2311_; lean_object* v___y_2312_; lean_object* v___y_2332_; uint8_t v___y_2333_; lean_object* v___y_2334_; lean_object* v___y_2335_; uint8_t v___y_2336_; uint8_t v___y_2337_; lean_object* v___y_2338_; uint8_t v___y_2342_; uint8_t v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = 2;
v___x_2360_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2260_, v___x_2359_);
if (v___x_2360_ == 0)
{
goto v___jp_2352_;
}
else
{
uint8_t v___x_2361_; 
lean_inc_ref(v_msgData_2259_);
v___x_2361_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2259_);
if (v___x_2361_ == 0)
{
goto v___jp_2352_;
}
else
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
lean_dec_ref(v_msgData_2259_);
v___x_2362_ = lean_box(0);
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
return v___x_2363_;
}
}
v___jp_2267_:
{
lean_object* v_currNamespace_2277_; lean_object* v_openDecls_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v_env_2283_; lean_object* v_nextMacroScope_2284_; lean_object* v_ngen_2285_; lean_object* v_auxDeclNGen_2286_; lean_object* v_traceState_2287_; lean_object* v_cache_2288_; lean_object* v_recordedDeps_2289_; lean_object* v_messages_2290_; lean_object* v_infoState_2291_; lean_object* v_snapshotTasks_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2303_; 
v_currNamespace_2277_ = lean_ctor_get(v_toCold_2275_, 4);
v_openDecls_2278_ = lean_ctor_get(v_toCold_2275_, 5);
lean_inc(v_openDecls_2278_);
lean_inc(v_currNamespace_2277_);
v___x_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2279_, 0, v_currNamespace_2277_);
lean_ctor_set(v___x_2279_, 1, v_openDecls_2278_);
v___x_2280_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
lean_ctor_set(v___x_2280_, 1, v___y_2272_);
lean_inc_ref(v___y_2273_);
lean_inc_ref(v___y_2270_);
v___x_2281_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2281_, 0, v___y_2270_);
lean_ctor_set(v___x_2281_, 1, v___y_2271_);
lean_ctor_set(v___x_2281_, 2, v___y_2269_);
lean_ctor_set(v___x_2281_, 3, v___y_2273_);
lean_ctor_set(v___x_2281_, 4, v___x_2280_);
lean_ctor_set_uint8(v___x_2281_, sizeof(void*)*5, v___y_2274_);
lean_ctor_set_uint8(v___x_2281_, sizeof(void*)*5 + 1, v___y_2268_);
lean_ctor_set_uint8(v___x_2281_, sizeof(void*)*5 + 2, v_isSilent_2261_);
v___x_2282_ = lean_st_ref_take(v___y_2276_);
v_env_2283_ = lean_ctor_get(v___x_2282_, 0);
v_nextMacroScope_2284_ = lean_ctor_get(v___x_2282_, 1);
v_ngen_2285_ = lean_ctor_get(v___x_2282_, 2);
v_auxDeclNGen_2286_ = lean_ctor_get(v___x_2282_, 3);
v_traceState_2287_ = lean_ctor_get(v___x_2282_, 4);
v_cache_2288_ = lean_ctor_get(v___x_2282_, 5);
v_recordedDeps_2289_ = lean_ctor_get(v___x_2282_, 6);
v_messages_2290_ = lean_ctor_get(v___x_2282_, 7);
v_infoState_2291_ = lean_ctor_get(v___x_2282_, 8);
v_snapshotTasks_2292_ = lean_ctor_get(v___x_2282_, 9);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2294_ = v___x_2282_;
v_isShared_2295_ = v_isSharedCheck_2303_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_snapshotTasks_2292_);
lean_inc(v_infoState_2291_);
lean_inc(v_messages_2290_);
lean_inc(v_recordedDeps_2289_);
lean_inc(v_cache_2288_);
lean_inc(v_traceState_2287_);
lean_inc(v_auxDeclNGen_2286_);
lean_inc(v_ngen_2285_);
lean_inc(v_nextMacroScope_2284_);
lean_inc(v_env_2283_);
lean_dec(v___x_2282_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2303_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2299_; 
v___x_2296_ = lean_box(0);
v___x_2297_ = l_Lean_MessageLog_add(v___x_2281_, v_messages_2290_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 7, v___x_2297_);
v___x_2299_ = v___x_2294_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_env_2283_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v_nextMacroScope_2284_);
lean_ctor_set(v_reuseFailAlloc_2302_, 2, v_ngen_2285_);
lean_ctor_set(v_reuseFailAlloc_2302_, 3, v_auxDeclNGen_2286_);
lean_ctor_set(v_reuseFailAlloc_2302_, 4, v_traceState_2287_);
lean_ctor_set(v_reuseFailAlloc_2302_, 5, v_cache_2288_);
lean_ctor_set(v_reuseFailAlloc_2302_, 6, v_recordedDeps_2289_);
lean_ctor_set(v_reuseFailAlloc_2302_, 7, v___x_2297_);
lean_ctor_set(v_reuseFailAlloc_2302_, 8, v_infoState_2291_);
lean_ctor_set(v_reuseFailAlloc_2302_, 9, v_snapshotTasks_2292_);
v___x_2299_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = lean_st_ref_put(v___y_2276_, v___x_2299_);
v___x_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2296_);
return v___x_2301_;
}
}
}
v___jp_2304_:
{
lean_object* v_fileName_2313_; lean_object* v_fileMap_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2330_; 
v_fileName_2313_ = lean_ctor_get(v___y_2310_, 0);
v_fileMap_2314_ = lean_ctor_get(v___y_2310_, 1);
v___x_2315_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2259_);
v___x_2316_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs_spec__0_spec__0(v___x_2315_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2319_ = v___x_2316_;
v_isShared_2320_ = v_isSharedCheck_2330_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2316_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2330_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
lean_inc_ref_n(v_fileMap_2314_, 2);
v___x_2321_ = l_Lean_FileMap_toPosition(v_fileMap_2314_, v___y_2308_);
lean_dec(v___y_2308_);
v___x_2322_ = l_Lean_FileMap_toPosition(v_fileMap_2314_, v___y_2312_);
lean_dec(v___y_2312_);
v___x_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2322_);
v___x_2324_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___closed__0));
if (v___y_2309_ == 0)
{
lean_del_object(v___x_2319_);
v___y_2268_ = v___y_2307_;
v___y_2269_ = v___x_2323_;
v___y_2270_ = v_fileName_2313_;
v___y_2271_ = v___x_2321_;
v___y_2272_ = v_a_2317_;
v___y_2273_ = v___x_2324_;
v___y_2274_ = v___y_2311_;
v_toCold_2275_ = v___y_2305_;
v___y_2276_ = v___y_2265_;
goto v___jp_2267_;
}
else
{
uint8_t v___x_2325_; 
lean_inc(v_a_2317_);
lean_inc_ref(v___y_2306_);
v___x_2325_ = l_Lean_MessageData_hasTag(v___y_2306_, v_a_2317_);
if (v___x_2325_ == 0)
{
lean_object* v___x_2326_; lean_object* v___x_2328_; 
lean_dec_ref_known(v___x_2323_, 1);
lean_dec_ref(v___x_2321_);
lean_dec(v_a_2317_);
v___x_2326_ = lean_box(0);
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 0, v___x_2326_);
v___x_2328_ = v___x_2319_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v___x_2326_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
else
{
lean_del_object(v___x_2319_);
v___y_2268_ = v___y_2307_;
v___y_2269_ = v___x_2323_;
v___y_2270_ = v_fileName_2313_;
v___y_2271_ = v___x_2321_;
v___y_2272_ = v_a_2317_;
v___y_2273_ = v___x_2324_;
v___y_2274_ = v___y_2311_;
v_toCold_2275_ = v___y_2305_;
v___y_2276_ = v___y_2265_;
goto v___jp_2267_;
}
}
}
}
v___jp_2331_:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Lean_Syntax_getTailPos_x3f(v___y_2332_, v___y_2336_);
lean_dec(v___y_2332_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_inc(v___y_2338_);
v___y_2305_ = v___y_2334_;
v___y_2306_ = v___y_2335_;
v___y_2307_ = v___y_2337_;
v___y_2308_ = v___y_2338_;
v___y_2309_ = v___y_2333_;
v___y_2310_ = v___y_2334_;
v___y_2311_ = v___y_2336_;
v___y_2312_ = v___y_2338_;
goto v___jp_2304_;
}
else
{
lean_object* v_val_2340_; 
v_val_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_val_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v___y_2305_ = v___y_2334_;
v___y_2306_ = v___y_2335_;
v___y_2307_ = v___y_2337_;
v___y_2308_ = v___y_2338_;
v___y_2309_ = v___y_2333_;
v___y_2310_ = v___y_2334_;
v___y_2311_ = v___y_2336_;
v___y_2312_ = v_val_2340_;
goto v___jp_2304_;
}
}
v___jp_2341_:
{
lean_object* v_toCold_2343_; lean_object* v_ref_2344_; uint8_t v_suppressElabErrors_2345_; lean_object* v_ref_2346_; uint8_t v___x_2347_; lean_object* v___f_2348_; lean_object* v___x_2349_; 
v_toCold_2343_ = lean_ctor_get(v___y_2264_, 0);
v_ref_2344_ = lean_ctor_get(v___y_2264_, 2);
v_suppressElabErrors_2345_ = lean_ctor_get_uint8(v___y_2264_, sizeof(void*)*3 + 2);
v_ref_2346_ = l_Lean_replaceRef(v_ref_2258_, v_ref_2344_);
v___x_2347_ = 0;
v___f_2348_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___closed__1));
v___x_2349_ = l_Lean_Syntax_getPos_x3f(v_ref_2346_, v___x_2347_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v___x_2350_; 
v___x_2350_ = lean_unsigned_to_nat(0u);
v___y_2332_ = v_ref_2346_;
v___y_2333_ = v_suppressElabErrors_2345_;
v___y_2334_ = v_toCold_2343_;
v___y_2335_ = v___f_2348_;
v___y_2336_ = v___x_2347_;
v___y_2337_ = v___y_2342_;
v___y_2338_ = v___x_2350_;
goto v___jp_2331_;
}
else
{
lean_object* v_val_2351_; 
v_val_2351_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_val_2351_);
lean_dec_ref_known(v___x_2349_, 1);
v___y_2332_ = v_ref_2346_;
v___y_2333_ = v_suppressElabErrors_2345_;
v___y_2334_ = v_toCold_2343_;
v___y_2335_ = v___f_2348_;
v___y_2336_ = v___x_2347_;
v___y_2337_ = v___y_2342_;
v___y_2338_ = v_val_2351_;
goto v___jp_2331_;
}
}
v___jp_2352_:
{
uint8_t v___x_2353_; uint8_t v___x_2354_; 
v___x_2353_ = 1;
v___x_2354_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2260_, v___x_2353_);
if (v___x_2354_ == 0)
{
v___y_2342_ = v_severity_2260_;
goto v___jp_2341_;
}
else
{
lean_object* v___x_2355_; lean_object* v___x_2356_; uint8_t v___x_2357_; 
v___x_2355_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2264_);
v___x_2356_ = l_Lean_warningAsError;
v___x_2357_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6_spec__10(v___x_2355_, v___x_2356_);
lean_dec_ref(v___x_2355_);
if (v___x_2357_ == 0)
{
v___y_2342_ = v_severity_2260_;
goto v___jp_2341_;
}
else
{
uint8_t v___x_2358_; 
v___x_2358_ = 2;
v___y_2342_ = v___x_2358_;
goto v___jp_2341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6___boxed(lean_object* v_ref_2364_, lean_object* v_msgData_2365_, lean_object* v_severity_2366_, lean_object* v_isSilent_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
uint8_t v_severity_boxed_2373_; uint8_t v_isSilent_boxed_2374_; lean_object* v_res_2375_; 
v_severity_boxed_2373_ = lean_unbox(v_severity_2366_);
v_isSilent_boxed_2374_ = lean_unbox(v_isSilent_2367_);
v_res_2375_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6(v_ref_2364_, v_msgData_2365_, v_severity_boxed_2373_, v_isSilent_boxed_2374_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
lean_dec(v___y_2371_);
lean_dec_ref(v___y_2370_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
lean_dec(v_ref_2364_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5(lean_object* v_msgData_2376_, uint8_t v_severity_2377_, uint8_t v_isSilent_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_){
_start:
{
lean_object* v_ref_2384_; lean_object* v___x_2385_; 
v_ref_2384_ = lean_ctor_get(v___y_2381_, 2);
v___x_2385_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5_spec__6(v_ref_2384_, v_msgData_2376_, v_severity_2377_, v_isSilent_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5___boxed(lean_object* v_msgData_2386_, lean_object* v_severity_2387_, lean_object* v_isSilent_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
uint8_t v_severity_boxed_2394_; uint8_t v_isSilent_boxed_2395_; lean_object* v_res_2396_; 
v_severity_boxed_2394_ = lean_unbox(v_severity_2387_);
v_isSilent_boxed_2395_ = lean_unbox(v_isSilent_2388_);
v_res_2396_ = l_Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5(v_msgData_2386_, v_severity_boxed_2394_, v_isSilent_boxed_2395_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_inferDefEqAttr_spec__2(lean_object* v_msgData_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_){
_start:
{
uint8_t v___x_2403_; uint8_t v___x_2404_; lean_object* v___x_2405_; 
v___x_2403_ = 2;
v___x_2404_ = 0;
v___x_2405_ = l_Lean_log___at___00Lean_logError___at___00Lean_inferDefEqAttr_spec__2_spec__5(v_msgData_2397_, v___x_2403_, v___x_2404_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_inferDefEqAttr_spec__2___boxed(lean_object* v_msgData_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Lean_logError___at___00Lean_inferDefEqAttr_spec__2(v_msgData_2406_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
lean_dec(v___y_2408_);
lean_dec_ref(v___y_2407_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___lam__0(lean_object* v___y_2413_, uint8_t v_isExporting_2414_, lean_object* v___x_2415_, lean_object* v___y_2416_, lean_object* v___x_2417_, lean_object* v_a_x3f_2418_){
_start:
{
lean_object* v___x_2420_; lean_object* v_env_2421_; lean_object* v_nextMacroScope_2422_; lean_object* v_ngen_2423_; lean_object* v_auxDeclNGen_2424_; lean_object* v_traceState_2425_; lean_object* v_recordedDeps_2426_; lean_object* v_messages_2427_; lean_object* v_infoState_2428_; lean_object* v_snapshotTasks_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2454_; 
v___x_2420_ = lean_st_ref_take(v___y_2413_);
v_env_2421_ = lean_ctor_get(v___x_2420_, 0);
v_nextMacroScope_2422_ = lean_ctor_get(v___x_2420_, 1);
v_ngen_2423_ = lean_ctor_get(v___x_2420_, 2);
v_auxDeclNGen_2424_ = lean_ctor_get(v___x_2420_, 3);
v_traceState_2425_ = lean_ctor_get(v___x_2420_, 4);
v_recordedDeps_2426_ = lean_ctor_get(v___x_2420_, 6);
v_messages_2427_ = lean_ctor_get(v___x_2420_, 7);
v_infoState_2428_ = lean_ctor_get(v___x_2420_, 8);
v_snapshotTasks_2429_ = lean_ctor_get(v___x_2420_, 9);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2454_ == 0)
{
lean_object* v_unused_2455_; 
v_unused_2455_ = lean_ctor_get(v___x_2420_, 5);
lean_dec(v_unused_2455_);
v___x_2431_ = v___x_2420_;
v_isShared_2432_ = v_isSharedCheck_2454_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_snapshotTasks_2429_);
lean_inc(v_infoState_2428_);
lean_inc(v_messages_2427_);
lean_inc(v_recordedDeps_2426_);
lean_inc(v_traceState_2425_);
lean_inc(v_auxDeclNGen_2424_);
lean_inc(v_ngen_2423_);
lean_inc(v_nextMacroScope_2422_);
lean_inc(v_env_2421_);
lean_dec(v___x_2420_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2454_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2433_ = l_Lean_Environment_setExporting(v_env_2421_, v_isExporting_2414_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 5, v___x_2415_);
lean_ctor_set(v___x_2431_, 0, v___x_2433_);
v___x_2435_ = v___x_2431_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v___x_2433_);
lean_ctor_set(v_reuseFailAlloc_2453_, 1, v_nextMacroScope_2422_);
lean_ctor_set(v_reuseFailAlloc_2453_, 2, v_ngen_2423_);
lean_ctor_set(v_reuseFailAlloc_2453_, 3, v_auxDeclNGen_2424_);
lean_ctor_set(v_reuseFailAlloc_2453_, 4, v_traceState_2425_);
lean_ctor_set(v_reuseFailAlloc_2453_, 5, v___x_2415_);
lean_ctor_set(v_reuseFailAlloc_2453_, 6, v_recordedDeps_2426_);
lean_ctor_set(v_reuseFailAlloc_2453_, 7, v_messages_2427_);
lean_ctor_set(v_reuseFailAlloc_2453_, 8, v_infoState_2428_);
lean_ctor_set(v_reuseFailAlloc_2453_, 9, v_snapshotTasks_2429_);
v___x_2435_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v_mctx_2438_; lean_object* v_zetaDeltaFVarIds_2439_; lean_object* v_postponed_2440_; lean_object* v_diag_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2451_; 
v___x_2436_ = lean_st_ref_put(v___y_2413_, v___x_2435_);
v___x_2437_ = lean_st_ref_take(v___y_2416_);
v_mctx_2438_ = lean_ctor_get(v___x_2437_, 0);
v_zetaDeltaFVarIds_2439_ = lean_ctor_get(v___x_2437_, 2);
v_postponed_2440_ = lean_ctor_get(v___x_2437_, 3);
v_diag_2441_ = lean_ctor_get(v___x_2437_, 4);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2451_ == 0)
{
lean_object* v_unused_2452_; 
v_unused_2452_ = lean_ctor_get(v___x_2437_, 1);
lean_dec(v_unused_2452_);
v___x_2443_ = v___x_2437_;
v_isShared_2444_ = v_isSharedCheck_2451_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_diag_2441_);
lean_inc(v_postponed_2440_);
lean_inc(v_zetaDeltaFVarIds_2439_);
lean_inc(v_mctx_2438_);
lean_dec(v___x_2437_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2451_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2445_; lean_object* v___x_2447_; 
v___x_2445_ = lean_box(0);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 1, v___x_2417_);
v___x_2447_ = v___x_2443_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_mctx_2438_);
lean_ctor_set(v_reuseFailAlloc_2450_, 1, v___x_2417_);
lean_ctor_set(v_reuseFailAlloc_2450_, 2, v_zetaDeltaFVarIds_2439_);
lean_ctor_set(v_reuseFailAlloc_2450_, 3, v_postponed_2440_);
lean_ctor_set(v_reuseFailAlloc_2450_, 4, v_diag_2441_);
v___x_2447_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = lean_st_ref_put(v___y_2416_, v___x_2447_);
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2445_);
return v___x_2449_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___lam__0___boxed(lean_object* v___y_2456_, lean_object* v_isExporting_2457_, lean_object* v___x_2458_, lean_object* v___y_2459_, lean_object* v___x_2460_, lean_object* v_a_x3f_2461_, lean_object* v___y_2462_){
_start:
{
uint8_t v_isExporting_boxed_2463_; lean_object* v_res_2464_; 
v_isExporting_boxed_2463_ = lean_unbox(v_isExporting_2457_);
v_res_2464_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___lam__0(v___y_2456_, v_isExporting_boxed_2463_, v___x_2458_, v___y_2459_, v___x_2460_, v_a_x3f_2461_);
lean_dec(v_a_x3f_2461_);
lean_dec(v___y_2459_);
lean_dec(v___y_2456_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg(lean_object* v_declName_2465_, uint8_t v_isExporting_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v___x_2471_; lean_object* v_env_2472_; lean_object* v___x_2473_; uint8_t v_isModule_2474_; 
v___x_2471_ = lean_st_ref_get(v___y_2469_);
v_env_2472_ = lean_ctor_get(v___x_2471_, 0);
lean_inc_ref(v_env_2472_);
lean_dec(v___x_2471_);
v___x_2473_ = l_Lean_Environment_header(v_env_2472_);
v_isModule_2474_ = lean_ctor_get_uint8(v___x_2473_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_2473_);
if (v_isModule_2474_ == 0)
{
lean_object* v___x_2475_; 
lean_dec_ref(v_env_2472_);
v___x_2475_ = l_Lean_validateDefEqAttr(v_declName_2465_, v___y_2468_, v___y_2469_);
return v___x_2475_;
}
else
{
uint8_t v_isExporting_2476_; 
v_isExporting_2476_ = lean_ctor_get_uint8(v_env_2472_, sizeof(void*)*13);
lean_dec_ref(v_env_2472_);
if (v_isExporting_2466_ == 0)
{
if (v_isExporting_2476_ == 0)
{
lean_object* v___x_2543_; 
v___x_2543_ = l_Lean_validateDefEqAttr(v_declName_2465_, v___y_2468_, v___y_2469_);
return v___x_2543_;
}
else
{
goto v___jp_2477_;
}
}
else
{
if (v_isExporting_2476_ == 0)
{
goto v___jp_2477_;
}
else
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_validateDefEqAttr(v_declName_2465_, v___y_2468_, v___y_2469_);
return v___x_2544_;
}
}
v___jp_2477_:
{
lean_object* v___x_2478_; lean_object* v_env_2479_; lean_object* v_nextMacroScope_2480_; lean_object* v_ngen_2481_; lean_object* v_auxDeclNGen_2482_; lean_object* v_traceState_2483_; lean_object* v_recordedDeps_2484_; lean_object* v_messages_2485_; lean_object* v_infoState_2486_; lean_object* v_snapshotTasks_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2541_; 
v___x_2478_ = lean_st_ref_take(v___y_2469_);
v_env_2479_ = lean_ctor_get(v___x_2478_, 0);
v_nextMacroScope_2480_ = lean_ctor_get(v___x_2478_, 1);
v_ngen_2481_ = lean_ctor_get(v___x_2478_, 2);
v_auxDeclNGen_2482_ = lean_ctor_get(v___x_2478_, 3);
v_traceState_2483_ = lean_ctor_get(v___x_2478_, 4);
v_recordedDeps_2484_ = lean_ctor_get(v___x_2478_, 6);
v_messages_2485_ = lean_ctor_get(v___x_2478_, 7);
v_infoState_2486_ = lean_ctor_get(v___x_2478_, 8);
v_snapshotTasks_2487_ = lean_ctor_get(v___x_2478_, 9);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2541_ == 0)
{
lean_object* v_unused_2542_; 
v_unused_2542_ = lean_ctor_get(v___x_2478_, 5);
lean_dec(v_unused_2542_);
v___x_2489_ = v___x_2478_;
v_isShared_2490_ = v_isSharedCheck_2541_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_snapshotTasks_2487_);
lean_inc(v_infoState_2486_);
lean_inc(v_messages_2485_);
lean_inc(v_recordedDeps_2484_);
lean_inc(v_traceState_2483_);
lean_inc(v_auxDeclNGen_2482_);
lean_inc(v_ngen_2481_);
lean_inc(v_nextMacroScope_2480_);
lean_inc(v_env_2479_);
lean_dec(v___x_2478_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2541_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2494_; 
v___x_2491_ = l_Lean_Environment_setExporting(v_env_2479_, v_isExporting_2466_);
v___x_2492_ = lean_obj_once(&l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2, &l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2_once, _init_l___private_Lean_DefEqAttrib_0__Lean_isDefEqCareful___closed__2);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 5, v___x_2492_);
lean_ctor_set(v___x_2489_, 0, v___x_2491_);
v___x_2494_ = v___x_2489_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2491_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v_nextMacroScope_2480_);
lean_ctor_set(v_reuseFailAlloc_2540_, 2, v_ngen_2481_);
lean_ctor_set(v_reuseFailAlloc_2540_, 3, v_auxDeclNGen_2482_);
lean_ctor_set(v_reuseFailAlloc_2540_, 4, v_traceState_2483_);
lean_ctor_set(v_reuseFailAlloc_2540_, 5, v___x_2492_);
lean_ctor_set(v_reuseFailAlloc_2540_, 6, v_recordedDeps_2484_);
lean_ctor_set(v_reuseFailAlloc_2540_, 7, v_messages_2485_);
lean_ctor_set(v_reuseFailAlloc_2540_, 8, v_infoState_2486_);
lean_ctor_set(v_reuseFailAlloc_2540_, 9, v_snapshotTasks_2487_);
v___x_2494_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v_mctx_2497_; lean_object* v_zetaDeltaFVarIds_2498_; lean_object* v_postponed_2499_; lean_object* v_diag_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2538_; 
v___x_2495_ = lean_st_ref_put(v___y_2469_, v___x_2494_);
v___x_2496_ = lean_st_ref_take(v___y_2467_);
v_mctx_2497_ = lean_ctor_get(v___x_2496_, 0);
v_zetaDeltaFVarIds_2498_ = lean_ctor_get(v___x_2496_, 2);
v_postponed_2499_ = lean_ctor_get(v___x_2496_, 3);
v_diag_2500_ = lean_ctor_get(v___x_2496_, 4);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2538_ == 0)
{
lean_object* v_unused_2539_; 
v_unused_2539_ = lean_ctor_get(v___x_2496_, 1);
lean_dec(v_unused_2539_);
v___x_2502_ = v___x_2496_;
v_isShared_2503_ = v_isSharedCheck_2538_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_diag_2500_);
lean_inc(v_postponed_2499_);
lean_inc(v_zetaDeltaFVarIds_2498_);
lean_inc(v_mctx_2497_);
lean_dec(v___x_2496_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2538_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2504_; lean_object* v___x_2506_; 
v___x_2504_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___redArg___closed__3);
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 1, v___x_2504_);
v___x_2506_ = v___x_2502_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_mctx_2497_);
lean_ctor_set(v_reuseFailAlloc_2537_, 1, v___x_2504_);
lean_ctor_set(v_reuseFailAlloc_2537_, 2, v_zetaDeltaFVarIds_2498_);
lean_ctor_set(v_reuseFailAlloc_2537_, 3, v_postponed_2499_);
lean_ctor_set(v_reuseFailAlloc_2537_, 4, v_diag_2500_);
v___x_2506_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
lean_object* v___x_2507_; lean_object* v_r_2508_; 
v___x_2507_ = lean_st_ref_put(v___y_2467_, v___x_2506_);
v_r_2508_ = l_Lean_validateDefEqAttr(v_declName_2465_, v___y_2468_, v___y_2469_);
if (lean_obj_tag(v_r_2508_) == 0)
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2525_; 
v_a_2509_ = lean_ctor_get(v_r_2508_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v_r_2508_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2511_ = v_r_2508_;
v_isShared_2512_ = v_isSharedCheck_2525_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v_r_2508_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2525_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2514_; 
lean_inc(v_a_2509_);
if (v_isShared_2512_ == 0)
{
lean_ctor_set_tag(v___x_2511_, 1);
v___x_2514_ = v___x_2511_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2509_);
v___x_2514_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
lean_object* v___x_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
v___x_2515_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___lam__0(v___y_2469_, v_isExporting_2476_, v___x_2492_, v___y_2467_, v___x_2504_, v___x_2514_);
lean_dec_ref(v___x_2514_);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2522_ == 0)
{
lean_object* v_unused_2523_; 
v_unused_2523_ = lean_ctor_get(v___x_2515_, 0);
lean_dec(v_unused_2523_);
v___x_2517_ = v___x_2515_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_dec(v___x_2515_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 0, v_a_2509_);
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2509_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
v_a_2526_ = lean_ctor_get(v_r_2508_, 0);
lean_inc(v_a_2526_);
lean_dec_ref_known(v_r_2508_, 1);
v___x_2527_ = lean_box(0);
v___x_2528_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___lam__0(v___y_2469_, v_isExporting_2476_, v___x_2492_, v___y_2467_, v___x_2504_, v___x_2527_);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2535_ == 0)
{
lean_object* v_unused_2536_; 
v_unused_2536_ = lean_ctor_get(v___x_2528_, 0);
lean_dec(v_unused_2536_);
v___x_2530_ = v___x_2528_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_dec(v___x_2528_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
lean_ctor_set_tag(v___x_2530_, 1);
lean_ctor_set(v___x_2530_, 0, v_a_2526_);
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2526_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg___boxed(lean_object* v_declName_2545_, lean_object* v_isExporting_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
uint8_t v_isExporting_boxed_2551_; lean_object* v_res_2552_; 
v_isExporting_boxed_2551_ = lean_unbox(v_isExporting_2546_);
v_res_2552_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg(v_declName_2545_, v_isExporting_boxed_2551_, v___y_2547_, v___y_2548_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7(lean_object* v_declName_2553_, uint8_t v_isExporting_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
lean_object* v___x_2560_; 
v___x_2560_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg(v_declName_2553_, v_isExporting_2554_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___boxed(lean_object* v_declName_2561_, lean_object* v_isExporting_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_){
_start:
{
uint8_t v_isExporting_boxed_2568_; lean_object* v_res_2569_; 
v_isExporting_boxed_2568_ = lean_unbox(v_isExporting_2562_);
v_res_2569_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7(v_declName_2561_, v_isExporting_boxed_2568_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
lean_dec(v___y_2564_);
lean_dec_ref(v___y_2563_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___lam__0(lean_object* v_lhs_2570_, lean_object* v_rhs_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v___y_2578_; lean_object* v___x_2595_; uint8_t v_transparency_2596_; uint8_t v___x_2597_; uint8_t v___x_2598_; 
v___x_2595_ = l_Lean_Meta_Context_config(v___y_2572_);
v_transparency_2596_ = lean_ctor_get_uint8(v___x_2595_, 9);
lean_dec_ref(v___x_2595_);
v___x_2597_ = 5;
v___x_2598_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2596_, v___x_2597_);
if (v___x_2598_ == 0)
{
lean_object* v_keyedConfig_2599_; uint8_t v_trackZetaDelta_2600_; lean_object* v_zetaDeltaSet_2601_; lean_object* v_lctx_2602_; lean_object* v_localInstances_2603_; lean_object* v_defEqCtx_x3f_2604_; lean_object* v_synthPendingDepth_2605_; lean_object* v_customCanUnfoldPredicate_x3f_2606_; uint8_t v_univApprox_2607_; uint8_t v_inTypeClassResolution_2608_; uint8_t v_cacheInferType_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v_keyedConfig_2599_ = lean_ctor_get(v___y_2572_, 0);
v_trackZetaDelta_2600_ = lean_ctor_get_uint8(v___y_2572_, sizeof(void*)*7);
v_zetaDeltaSet_2601_ = lean_ctor_get(v___y_2572_, 1);
v_lctx_2602_ = lean_ctor_get(v___y_2572_, 2);
v_localInstances_2603_ = lean_ctor_get(v___y_2572_, 3);
v_defEqCtx_x3f_2604_ = lean_ctor_get(v___y_2572_, 4);
v_synthPendingDepth_2605_ = lean_ctor_get(v___y_2572_, 5);
v_customCanUnfoldPredicate_x3f_2606_ = lean_ctor_get(v___y_2572_, 6);
v_univApprox_2607_ = lean_ctor_get_uint8(v___y_2572_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2608_ = lean_ctor_get_uint8(v___y_2572_, sizeof(void*)*7 + 2);
v_cacheInferType_2609_ = lean_ctor_get_uint8(v___y_2572_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2599_);
v___x_2610_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2597_, v_keyedConfig_2599_);
lean_inc(v_customCanUnfoldPredicate_x3f_2606_);
lean_inc(v_synthPendingDepth_2605_);
lean_inc(v_defEqCtx_x3f_2604_);
lean_inc_ref(v_localInstances_2603_);
lean_inc_ref(v_lctx_2602_);
lean_inc(v_zetaDeltaSet_2601_);
v___x_2611_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2611_, 0, v___x_2610_);
lean_ctor_set(v___x_2611_, 1, v_zetaDeltaSet_2601_);
lean_ctor_set(v___x_2611_, 2, v_lctx_2602_);
lean_ctor_set(v___x_2611_, 3, v_localInstances_2603_);
lean_ctor_set(v___x_2611_, 4, v_defEqCtx_x3f_2604_);
lean_ctor_set(v___x_2611_, 5, v_synthPendingDepth_2605_);
lean_ctor_set(v___x_2611_, 6, v_customCanUnfoldPredicate_x3f_2606_);
lean_ctor_set_uint8(v___x_2611_, sizeof(void*)*7, v_trackZetaDelta_2600_);
lean_ctor_set_uint8(v___x_2611_, sizeof(void*)*7 + 1, v_univApprox_2607_);
lean_ctor_set_uint8(v___x_2611_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2608_);
lean_ctor_set_uint8(v___x_2611_, sizeof(void*)*7 + 3, v_cacheInferType_2609_);
v___x_2612_ = l_Lean_Meta_isExprDefEq(v_lhs_2570_, v_rhs_2571_, v___x_2611_, v___y_2573_, v___y_2574_, v___y_2575_);
lean_dec_ref_known(v___x_2611_, 7);
v___y_2578_ = v___x_2612_;
goto v___jp_2577_;
}
else
{
lean_object* v___x_2613_; 
v___x_2613_ = l_Lean_Meta_isExprDefEq(v_lhs_2570_, v_rhs_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
v___y_2578_ = v___x_2613_;
goto v___jp_2577_;
}
v___jp_2577_:
{
if (lean_obj_tag(v___y_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2586_; 
v_a_2579_ = lean_ctor_get(v___y_2578_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___y_2578_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2581_ = v___y_2578_;
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___y_2578_);
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
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2594_; 
v_a_2587_ = lean_ctor_get(v___y_2578_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___y_2578_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2589_ = v___y_2578_;
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___y_2578_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2592_; 
if (v_isShared_2590_ == 0)
{
v___x_2592_ = v___x_2589_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2587_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___lam__0___boxed(lean_object* v_lhs_2614_, lean_object* v_rhs_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = l_Lean_inferDefEqAttr___lam__0(v_lhs_2614_, v_rhs_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec_ref(v___y_2616_);
return v_res_2621_;
}
}
static lean_object* _init_l_Lean_inferDefEqAttr___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2623_ = ((lean_object*)(l_Lean_inferDefEqAttr___lam__1___closed__0));
v___x_2624_ = l_Lean_stringToMessageData(v___x_2623_);
return v___x_2624_;
}
}
static lean_object* _init_l_Lean_inferDefEqAttr___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2626_ = ((lean_object*)(l_Lean_inferDefEqAttr___lam__1___closed__2));
v___x_2627_ = l_Lean_stringToMessageData(v___x_2626_);
return v___x_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___lam__1(lean_object* v_declName_2628_, lean_object* v___f_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v___x_2641_; 
lean_inc(v_declName_2628_);
v___x_2641_ = l_Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1(v_declName_2628_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; uint8_t v___x_2643_; lean_object* v___x_2644_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc_n(v_a_2642_, 2);
lean_dec_ref_known(v___x_2641_, 1);
v___x_2643_ = 1;
v___x_2644_ = l_Lean_ConstantInfo_value_x3f(v_a_2642_, v___x_2643_);
if (lean_obj_tag(v___x_2644_) == 1)
{
lean_object* v_val_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v_val_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_val_2645_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2646_ = l_Lean_ConstantInfo_type(v_a_2642_);
lean_dec(v_a_2642_);
v___x_2647_ = l___private_Lean_DefEqAttrib_0__Lean_isRflProofCore___redArg(v___x_2646_, v_val_2645_, v___y_2633_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; uint8_t v___x_2649_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2647_, 1);
v___x_2649_ = lean_unbox(v_a_2648_);
if (v___x_2649_ == 0)
{
lean_dec(v_a_2648_);
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___f_2629_);
lean_dec(v_declName_2628_);
goto v___jp_2638_;
}
else
{
lean_object* v___x_2650_; 
v___x_2650_ = l___private_Lean_DefEqAttrib_0__Lean_withEqLhsRhs___redArg(v___x_2646_, v___f_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; uint8_t v___y_2657_; uint8_t v___x_2672_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2650_, 1);
v___x_2672_ = l_Lean_isPrivateName(v_declName_2628_);
if (v___x_2672_ == 0)
{
uint8_t v___x_2673_; 
v___x_2673_ = lean_unbox(v_a_2648_);
lean_dec(v_a_2648_);
v___y_2657_ = v___x_2673_;
goto v___jp_2656_;
}
else
{
uint8_t v___x_2674_; 
lean_dec(v_a_2648_);
v___x_2674_ = 0;
v___y_2657_ = v___x_2674_;
goto v___jp_2656_;
}
v___jp_2652_:
{
uint8_t v___x_2653_; 
v___x_2653_ = lean_unbox(v_a_2651_);
lean_dec(v_a_2651_);
if (v___x_2653_ == 0)
{
goto v___jp_2635_;
}
else
{
lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2654_ = l_Lean_defeqAttr;
lean_inc(v_declName_2628_);
v___x_2655_ = l_Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0(v___x_2654_, v_declName_2628_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_dec_ref_known(v___x_2655_, 1);
goto v___jp_2635_;
}
else
{
lean_dec(v_declName_2628_);
return v___x_2655_;
}
}
}
v___jp_2656_:
{
lean_object* v___x_2658_; 
lean_inc(v_declName_2628_);
v___x_2658_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0_spec__0___at___00Lean_inferDefEqAttr_spec__7___redArg(v_declName_2628_, v___y_2657_, v___y_2631_, v___y_2632_, v___y_2633_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_dec_ref_known(v___x_2658_, 1);
goto v___jp_2652_;
}
else
{
lean_object* v_a_2659_; uint8_t v___x_2660_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
v___x_2660_ = l_Lean_Exception_isInterrupt(v_a_2659_);
if (v___x_2660_ == 0)
{
uint8_t v___x_2661_; 
lean_inc(v_a_2659_);
v___x_2661_ = l_Lean_Exception_isRuntime(v_a_2659_);
if (v___x_2661_ == 0)
{
uint8_t v___x_2662_; 
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2662_ = lean_unbox(v_a_2651_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2663_ = lean_obj_once(&l_Lean_inferDefEqAttr___lam__1___closed__1, &l_Lean_inferDefEqAttr___lam__1___closed__1_once, _init_l_Lean_inferDefEqAttr___lam__1___closed__1);
lean_inc(v_declName_2628_);
v___x_2664_ = l_Lean_MessageData_ofName(v_declName_2628_);
v___x_2665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2663_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v___x_2666_ = lean_obj_once(&l_Lean_inferDefEqAttr___lam__1___closed__3, &l_Lean_inferDefEqAttr___lam__1___closed__3_once, _init_l_Lean_inferDefEqAttr___lam__1___closed__3);
v___x_2667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2665_);
lean_ctor_set(v___x_2667_, 1, v___x_2666_);
v___x_2668_ = l_Lean_Exception_toMessageData(v_a_2659_);
v___x_2669_ = l_Lean_indentD(v___x_2668_);
v___x_2670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2667_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = l_Lean_logError___at___00Lean_inferDefEqAttr_spec__2(v___x_2670_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_dec_ref_known(v___x_2671_, 1);
goto v___jp_2652_;
}
else
{
lean_dec(v_a_2651_);
lean_dec(v_declName_2628_);
return v___x_2671_;
}
}
else
{
lean_dec(v_a_2659_);
goto v___jp_2652_;
}
}
else
{
lean_dec(v_a_2651_);
lean_dec(v_declName_2628_);
return v___x_2658_;
}
}
else
{
lean_dec(v_a_2651_);
lean_dec(v_declName_2628_);
return v___x_2658_;
}
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
lean_dec(v_a_2648_);
lean_dec(v_declName_2628_);
v_a_2675_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2650_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2650_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
}
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___f_2629_);
lean_dec(v_declName_2628_);
v_a_2683_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2647_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2647_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
else
{
lean_dec(v___x_2644_);
lean_dec(v_a_2642_);
lean_dec_ref(v___f_2629_);
lean_dec(v_declName_2628_);
goto v___jp_2638_;
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec_ref(v___f_2629_);
lean_dec(v_declName_2628_);
v_a_2691_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2641_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2641_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
v___jp_2635_:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2636_ = l_Lean_backwardDefeqAttr;
v___x_2637_ = l_Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0(v___x_2636_, v_declName_2628_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
return v___x_2637_;
}
v___jp_2638_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2639_ = lean_box(0);
v___x_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
return v___x_2640_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___lam__1___boxed(lean_object* v_declName_2699_, lean_object* v___f_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v_res_2706_; 
v_res_2706_ = l_Lean_inferDefEqAttr___lam__1(v_declName_2699_, v___f_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr(lean_object* v_declName_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v___f_2714_; lean_object* v___f_2715_; uint8_t v___x_2716_; lean_object* v___x_2717_; 
v___f_2714_ = ((lean_object*)(l_Lean_inferDefEqAttr___closed__0));
v___f_2715_ = lean_alloc_closure((void*)(l_Lean_inferDefEqAttr___lam__1___boxed), 7, 2);
lean_closure_set(v___f_2715_, 0, v_declName_2708_);
lean_closure_set(v___f_2715_, 1, v___f_2714_);
v___x_2716_ = 1;
v___x_2717_ = l_Lean_withoutExporting___at___00Lean_validateDefEqAttr_spec__0___redArg(v___f_2715_, v___x_2716_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_inferDefEqAttr___boxed(lean_object* v_declName_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l_Lean_inferDefEqAttr(v_declName_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_);
lean_dec(v_a_2722_);
lean_dec_ref(v_a_2721_);
lean_dec(v_a_2720_);
lean_dec_ref(v_a_2719_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0(lean_object* v_00_u03b1_2725_, lean_object* v_attrName_2726_, lean_object* v_declName_2727_, lean_object* v_asyncPrefix_x3f_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___redArg(v_attrName_2726_, v_declName_2727_, v_asyncPrefix_x3f_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2735_, lean_object* v_attrName_2736_, lean_object* v_declName_2737_, lean_object* v_asyncPrefix_x3f_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__0(v_00_u03b1_2735_, v_attrName_2736_, v_declName_2737_, v_asyncPrefix_x3f_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_);
lean_dec(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1(lean_object* v_00_u03b1_2745_, lean_object* v_attrName_2746_, lean_object* v_declName_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___redArg(v_attrName_2746_, v_declName_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2754_, lean_object* v_attrName_2755_, lean_object* v_declName_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_inferDefEqAttr_spec__0_spec__1(v_00_u03b1_2754_, v_attrName_2755_, v_declName_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3(lean_object* v_00_u03b1_2763_, lean_object* v_constName_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___redArg(v_constName_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3___boxed(lean_object* v_00_u03b1_2771_, lean_object* v_constName_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3(v_00_u03b1_2771_, v_constName_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
lean_dec(v___y_2776_);
lean_dec_ref(v___y_2775_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3(lean_object* v_00_u03b1_2779_, lean_object* v_ref_2780_, lean_object* v_constName_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v___x_2787_; 
v___x_2787_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___redArg(v_ref_2780_, v_constName_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3___boxed(lean_object* v_00_u03b1_2788_, lean_object* v_ref_2789_, lean_object* v_constName_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3(v_00_u03b1_2788_, v_ref_2789_, v_constName_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
lean_dec(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v_ref_2789_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7(lean_object* v_00_u03b1_2797_, lean_object* v_ref_2798_, lean_object* v_msg_2799_, lean_object* v_declHint_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v___x_2806_; 
v___x_2806_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___redArg(v_ref_2798_, v_msg_2799_, v_declHint_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7___boxed(lean_object* v_00_u03b1_2807_, lean_object* v_ref_2808_, lean_object* v_msg_2809_, lean_object* v_declHint_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7(v_00_u03b1_2807_, v_ref_2808_, v_msg_2809_, v_declHint_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v_ref_2808_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12(lean_object* v_msg_2817_, lean_object* v_declHint_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___redArg(v_msg_2817_, v_declHint_2818_, v___y_2822_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12___boxed(lean_object* v_msg_2825_, lean_object* v_declHint_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
lean_object* v_res_2832_; 
v_res_2832_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__9_spec__12(v_msg_2825_, v_declHint_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10(lean_object* v_00_u03b1_2833_, lean_object* v_ref_2834_, lean_object* v_msg_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v___x_2841_; 
v___x_2841_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___redArg(v_ref_2834_, v_msg_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10___boxed(lean_object* v_00_u03b1_2842_, lean_object* v_ref_2843_, lean_object* v_msg_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_inferDefEqAttr_spec__1_spec__3_spec__3_spec__7_spec__10(v_00_u03b1_2842_, v_ref_2843_, v_msg_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
lean_dec(v___y_2846_);
lean_dec_ref(v___y_2845_);
lean_dec(v_ref_2843_);
return v_res_2850_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DefEqAttrib(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_4069019935____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_backward_defeqAttrib_useBackward = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_backward_defeqAttrib_useBackward);
lean_dec_ref(res);
res = l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_1921203779____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_backwardDefeqAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_backwardDefeqAttr);
lean_dec_ref(res);
res = l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DefEqAttrib_0__Lean_backwardDefeqAttr___regBuiltin_Lean_backwardDefeqAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DefEqAttrib_0__Lean_initFn_00___x40_Lean_DefEqAttrib_585514292____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_defeqAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_defeqAttr);
lean_dec_ref(res);
res = l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DefEqAttrib_0__Lean_defeqAttr___regBuiltin_Lean_defeqAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DefEqAttrib(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DefEqAttrib(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DefEqAttrib(builtin);
}
#ifdef __cplusplus
}
#endif
