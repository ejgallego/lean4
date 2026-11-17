// Lean compiler output
// Module: Lean.Linter.MissingDocs
// Imports: public import Lean.Parser.Syntax public import Lean.Meta.Tactic.Simp.RegisterCommand public import Lean.Elab.Command public import Lean.Linter.Util
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
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAtom(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_Lean_DataValue_sameCtor(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_ctorType_x3f(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
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
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Syntax_setArgs(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecl(lean_object*);
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Elab_Command_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "missingDocs"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(157, 241, 189, 233, 41, 176, 169, 7)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "enable the 'missing documentation' linter"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(94, 221, 43, 155, 63, 47, 239, 133)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_missingDocs;
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterMissingDocs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterMissingDocs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_SimpleHandler_toHandler(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "unexpected missing docs handler at '"};
static const lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__0_value;
static const lean_string_object l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "', `MissingDocs.Handler` or `MissingDocs.SimpleHandler` expected"};
static const lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__1 = (const lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__1_value;
static const lean_string_object l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__2 = (const lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__2_value;
static const lean_string_object l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__3 = (const lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__3_value;
static const lean_string_object l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MissingDocs"};
static const lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4 = (const lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4_value;
static const lean_string_object l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SimpleHandler"};
static const lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__5 = (const lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__5_value;
static const lean_string_object l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Handler"};
static const lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__6 = (const lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_537855421____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_537855421____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_builtinHandlersRef;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__3_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__3_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "missingDocsExt"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(25, 85, 84, 40, 188, 20, 254, 124)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 124, 238, 121, 86, 135, 253, 57)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__8_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__8_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__9_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__9_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_missingDocsExt;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_addHandler___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_addHandler(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Linter_MissingDocs_getHandlers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Linter_MissingDocs_getHandlers___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_getHandlers___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_getHandlers(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_missingDocs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_missingDocs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_MissingDocs_missingDocs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_MissingDocs_missingDocs___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_MissingDocs_missingDocs___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__0_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_missingDocs___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_missingDocs___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_missingDocs___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__1_value_aux_1),((lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(25, 85, 84, 40, 188, 20, 254, 124)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_missingDocs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(18, 71, 108, 38, 230, 58, 128, 97)}};
static const lean_object* l_Lean_Linter_MissingDocs_missingDocs___closed__1 = (const lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__1_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_missingDocs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__0_value),((lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__1_value)}};
static const lean_object* l_Lean_Linter_MissingDocs_missingDocs___closed__2 = (const lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_MissingDocs_missingDocs = (const lean_object*)&l_Lean_Linter_MissingDocs_missingDocs___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_2727349317____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_2727349317____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_addBuiltinHandler(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_addBuiltinHandler___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__4_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__5 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__5_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__7;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__8_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "addBuiltinHandler"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "toHandler"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Unexpected type for missing docs handler: Expected `"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__4_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` or `"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__4_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__4_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__6_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "`, but `"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__6_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__6_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__8_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__8_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__8_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(196, 60, 89, 104, 222, 184, 104, 61)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__4_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(109, 71, 38, 78, 110, 121, 74, 1)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__4_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__4_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__4_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(88, 142, 224, 55, 28, 93, 167, 225)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__6_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 103, 172, 65, 70, 157, 34, 163)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__6_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__6_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__6_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(171, 148, 68, 129, 115, 167, 183, 177)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__8_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(206, 122, 164, 204, 198, 240, 47, 250)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__8_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__8_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__10_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__8_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 126, 117, 226, 154, 200, 97, 116)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__10_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__10_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__11_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__11_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__11_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__12_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__10_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__11_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 196, 57, 107, 246, 197, 178, 184)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__12_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__12_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__13_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__12_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(127, 128, 182, 1, 36, 142, 177, 207)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__13_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__13_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__14_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__13_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(101, 71, 117, 107, 84, 87, 150, 165)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__14_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__14_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__15_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__14_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(184, 204, 34, 53, 202, 221, 81, 185)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__15_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__15_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__16_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__15_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)(((size_t)(573930092) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(172, 197, 83, 166, 62, 29, 54, 93)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__16_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__16_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__17_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__17_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__17_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__18_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__16_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__17_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 131, 13, 165, 249, 155, 232, 74)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__18_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__18_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__19_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__19_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__19_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__20_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__18_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__19_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(3, 89, 8, 244, 216, 147, 164, 205)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__20_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__20_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__21_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__20_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(198, 101, 182, 233, 18, 154, 75, 102)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__21_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__21_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__22_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "adds a syntax traversal for the missing docs linter"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__22_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__22_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__23_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "(builtin) "};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__23_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__23_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "builtin_missing_docs_handler"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 152, 43, 164, 254, 29, 181, 30)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "missing_docs_handler"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 38, 13, 120, 230, 132, 199, 211)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_lint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "missing doc string for "};
static const lean_object* l_Lean_Linter_MissingDocs_lint___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_lint___closed__0_value;
static lean_once_cell_t l_Lean_Linter_MissingDocs_lint___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_MissingDocs_lint___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lint(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_lintEmpty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "empty doc string for "};
static const lean_object* l_Lean_Linter_MissingDocs_lintEmpty___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintEmpty___closed__0_value;
static lean_once_cell_t l_Lean_Linter_MissingDocs_lintEmpty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_MissingDocs_lintEmpty___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmpty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintNamed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintNamed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmptyNamed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmptyNamed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_lintField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Linter_MissingDocs_lintField___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintField___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmptyField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmptyField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintStructField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintStructField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__1;
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value;
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value;
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__4 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_isMissingDoc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_isMissingDoc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inherit_doc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(83, 8, 69, 42, 53, 230, 51, 166)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__4_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_MissingDocs_hasInheritDoc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_hasInheritDoc___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_alt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 168, 96, 206, 229, 58, 101)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_MissingDocs_hasTacticAlt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_hasTacticAlt___boxed(lean_object*);
static const lean_ctor_object l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0_value_aux_2),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__17_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1_value_aux_2),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__18_value),LEAN_SCALAR_PTR_LITERAL(99, 134, 241, 204, 211, 206, 124, 144)}};
static const lean_object* l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1 = (const lean_object*)&l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_declModifiersDocStatus(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_declModifiersDocStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_declModifiersPubNoDoc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_declModifiersPubNoDoc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "public inductive"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__0_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "abbrev"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__1 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__1_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__2_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__2_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__2_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__1_value),LEAN_SCALAR_PTR_LITERAL(34, 181, 25, 109, 89, 238, 86, 99)}};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__2 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__2_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__3 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__3_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__4_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__4_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__4_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__3_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__4 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__4_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__5 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__5_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__6_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__6_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__6_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__5_value),LEAN_SCALAR_PTR_LITERAL(111, 217, 152, 21, 13, 97, 204, 102)}};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__6 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__6_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "axiom"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__7 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__7_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__8_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__8_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__8_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__7_value),LEAN_SCALAR_PTR_LITERAL(98, 213, 89, 132, 71, 178, 86, 86)}};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__8 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__8_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inductive"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__9 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__9_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__10_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__10_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__10_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__9_value),LEAN_SCALAR_PTR_LITERAL(167, 178, 72, 69, 244, 64, 6, 60)}};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__10 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__10_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "classInductive"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__11 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__11_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__12_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__12_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__12_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__11_value),LEAN_SCALAR_PTR_LITERAL(25, 56, 34, 53, 6, 51, 66, 48)}};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__12 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__12_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "structure"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__13 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__13_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__14_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__14_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__14_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__13_value),LEAN_SCALAR_PTR_LITERAL(180, 236, 187, 15, 83, 171, 117, 65)}};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__14 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__14_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "public structure"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__15 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__15_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "public axiom"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__16 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__16_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "public opaque"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__17 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__17_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "public def"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__18 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__18_value;
static const lean_string_object l_Lean_Linter_MissingDocs_lintDeclHead___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "public abbrev"};
static const lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___closed__19 = (const lean_object*)&l_Lean_Linter_MissingDocs_lintDeclHead___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintDeclHead(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "computed field"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__7(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5_spec__7(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "public constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "public field"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structSimpleBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 230, 214, 182, 254, 52, 213, 225)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_MissingDocs_checkDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_MissingDocs_checkDecl___closed__0;
static lean_once_cell_t l_Lean_Linter_MissingDocs_checkDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_MissingDocs_checkDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "initializer"};
static const lean_object* l_Lean_Linter_MissingDocs_checkInit___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkInit___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkInit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkInit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "initialize"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 206, 156, 211, 241, 221, 187, 166)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkNotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Linter_MissingDocs_checkNotation___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkNotation___closed__0_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_checkNotation___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_checkNotation___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_checkNotation___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_checkNotation___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_checkNotation___closed__1_value_aux_1),((lean_object*)&l_Lean_Linter_MissingDocs_checkNotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_checkNotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_checkNotation___closed__1_value_aux_2),((lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(136, 104, 45, 91, 146, 14, 86, 4)}};
static const lean_object* l_Lean_Linter_MissingDocs_checkNotation___closed__1 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkNotation___closed__1_value;
static const lean_string_object l_Lean_Linter_MissingDocs_checkNotation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "notation"};
static const lean_object* l_Lean_Linter_MissingDocs_checkNotation___closed__2 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkNotation___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkNotation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkNotation___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_checkNotation___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 34, 53, 7, 182, 20, 8, 182)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkMixfix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkMixfix___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mixfix"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 31, 80, 86, 44, 46, 155, 0)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "syntax"};
static const lean_object* l_Lean_Linter_MissingDocs_checkSyntax___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_checkSyntax___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 60, 146, 133, 142, 21, 8, 39)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_mkSimpleHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_mkSimpleHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntaxAbbrev(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntaxAbbrev___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "syntaxAbbrev"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 194, 172, 134, 159, 244, 204, 250)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkSyntaxCat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "syntax category"};
static const lean_object* l_Lean_Linter_MissingDocs_checkSyntaxCat___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkSyntaxCat___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntaxCat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntaxCat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "syntaxCat"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 111, 111, 178, 172, 19, 49, 32)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkMacro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Linter_MissingDocs_checkMacro___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkMacro___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkMacro(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkMacro___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_checkMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 185, 197, 33, 231, 124, 123, 210)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elab"};
static const lean_object* l_Lean_Linter_MissingDocs_checkElab___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkElab___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_checkElab___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 177, 45, 203, 60, 20, 245, 118)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkClassAbbrev___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "class abbrev"};
static const lean_object* l_Lean_Linter_MissingDocs_checkClassAbbrev___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkClassAbbrev___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkClassAbbrev(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkClassAbbrev___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "classAbbrev"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 112, 139, 141, 120, 66, 29, 3)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkSimpLike___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "simp-like tactic"};
static const lean_object* l_Lean_Linter_MissingDocs_checkSimpLike___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkSimpLike___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSimpLike(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSimpLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__0_value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "declareSimpLikeTactic"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(79, 29, 238, 199, 239, 152, 213, 112)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "option"};
static const lean_object* l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__0_value;
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "registerBuiltinOption"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 128, 225, 170, 242, 224, 12, 82)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__2 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "registerOption"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 95, 60, 142, 241, 184, 36, 53)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___boxed(lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_checkRegisterSimpAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simp attr"};
static const lean_object* l_Lean_Linter_MissingDocs_checkRegisterSimpAttr___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_checkRegisterSimpAttr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterSimpAttr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterSimpAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "registerSimpAttr"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(126, 98, 179, 212, 132, 154, 67, 50)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Invalid `set_option` command: The option `"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__1;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` cannot be configured using `set_option`"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8_spec__10(lean_object*);
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nhas type"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__0 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__1;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "\nbut the option `"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__2 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__3;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "` expects a value of type"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__4 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__5;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "set_option value type mismatch: The value"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__6 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__7;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__8 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__8_value)}};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__9 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__9_value;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__10 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__10_value)}};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__11 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__12 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__12_value;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__13 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__13_value;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__14 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__14_value;
static const lean_string_object l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__15 = (const lean_object*)&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__15_value;
static lean_once_cell_t l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__16;
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Unexpected set_option value `"};
static const lean_object* l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__1;
static const lean_string_object l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "`; expected a literal of type `"};
static const lean_object* l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__2 = (const lean_object*)&l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_MissingDocs_handleIn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "set_option"};
static const lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___closed__0 = (const lean_object*)&l_Lean_Linter_MissingDocs_handleIn___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Linter_MissingDocs_handleIn___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 223, 149, 245, 150, 86, 134, 198)}};
static const lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1 = (const lean_object*)&l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 79, 35, 19, 21, 38, 89, 10)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_MissingDocs_handleMutual_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_MissingDocs_handleMutual_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleMutual___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleMutual___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleMutual(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleMutual___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mutual"};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 205, 8, 5, 164, 77, 17, 1)}};
static const lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1();
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterMissingDocs(lean_object* v_o_59_){
_start:
{
lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_60_ = l_Lean_Linter_linter_missingDocs;
v___x_61_ = l_Lean_Linter_getLinterValue(v___x_60_, v_o_59_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterMissingDocs___boxed(lean_object* v_o_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l_Lean_Linter_getLinterMissingDocs(v_o_62_);
lean_dec_ref(v_o_62_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_SimpleHandler_toHandler(lean_object* v_h_65_, uint8_t v_enabled_66_, lean_object* v_stx_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
if (v_enabled_66_ == 0)
{
lean_object* v___x_71_; lean_object* v___x_72_; 
lean_dec(v_stx_67_);
lean_dec_ref(v_h_65_);
v___x_71_ = lean_box(0);
v___x_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
return v___x_72_;
}
else
{
lean_object* v___x_73_; 
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
v___x_73_ = lean_apply_4(v_h_65_, v_stx_67_, v_a_68_, v_a_69_, lean_box(0));
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed(lean_object* v_h_74_, lean_object* v_enabled_75_, lean_object* v_stx_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
uint8_t v_enabled_boxed_80_; lean_object* v_res_81_; 
v_enabled_boxed_80_ = lean_unbox(v_enabled_75_);
v_res_81_ = l_Lean_Linter_MissingDocs_SimpleHandler_toHandler(v_h_74_, v_enabled_boxed_80_, v_stx_76_, v_a_77_, v_a_78_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___redArg(lean_object* v_e_82_){
_start:
{
if (lean_obj_tag(v_e_82_) == 0)
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_92_; 
v_a_84_ = lean_ctor_get(v_e_82_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v_e_82_);
if (v_isSharedCheck_92_ == 0)
{
v___x_86_ = v_e_82_;
v_isShared_87_ = v_isSharedCheck_92_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v_e_82_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_92_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_88_ = lean_mk_io_user_error(v_a_84_);
if (v_isShared_87_ == 0)
{
lean_ctor_set_tag(v___x_86_, 1);
lean_ctor_set(v___x_86_, 0, v___x_88_);
v___x_90_ = v___x_86_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
v_a_93_ = lean_ctor_get(v_e_82_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v_e_82_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v_e_82_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v_e_82_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
lean_ctor_set_tag(v___x_95_, 0);
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___redArg___boxed(lean_object* v_e_101_, lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___redArg(v_e_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0(lean_object* v_00_u03b1_104_, lean_object* v_e_105_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___redArg(v_e_105_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___boxed(lean_object* v_00_u03b1_108_, lean_object* v_e_109_, lean_object* v_a_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0(v_00_u03b1_108_, v_e_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe(lean_object* v_constName_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_env_131_; lean_object* v_opts_132_; uint8_t v___x_133_; lean_object* v___x_134_; 
v_env_131_ = lean_ctor_get(v_a_120_, 0);
v_opts_132_ = lean_ctor_get(v_a_120_, 1);
v___x_133_ = 0;
lean_inc(v_constName_119_);
lean_inc_ref(v_env_131_);
v___x_134_ = l_Lean_Environment_find_x3f(v_env_131_, v_constName_119_, v___x_133_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_135_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__2));
v___x_136_ = 1;
v___x_137_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_constName_119_, v___x_136_);
v___x_138_ = lean_string_append(v___x_135_, v___x_137_);
lean_dec_ref(v___x_137_);
v___x_139_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__3));
v___x_140_ = lean_string_append(v___x_138_, v___x_139_);
v___x_141_ = lean_mk_io_user_error(v___x_140_);
v___x_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
else
{
lean_object* v_val_143_; lean_object* v___x_144_; 
v_val_143_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_val_143_);
lean_dec_ref_known(v___x_134_, 1);
v___x_144_ = l_Lean_ConstantInfo_type(v_val_143_);
lean_dec(v_val_143_);
if (lean_obj_tag(v___x_144_) == 4)
{
lean_object* v_declName_145_; 
v_declName_145_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_declName_145_);
lean_dec_ref_known(v___x_144_, 2);
if (lean_obj_tag(v_declName_145_) == 1)
{
lean_object* v_pre_146_; 
v_pre_146_ = lean_ctor_get(v_declName_145_, 0);
lean_inc(v_pre_146_);
if (lean_obj_tag(v_pre_146_) == 1)
{
lean_object* v_pre_147_; 
v_pre_147_ = lean_ctor_get(v_pre_146_, 0);
lean_inc(v_pre_147_);
if (lean_obj_tag(v_pre_147_) == 1)
{
lean_object* v_pre_148_; 
v_pre_148_ = lean_ctor_get(v_pre_147_, 0);
lean_inc(v_pre_148_);
if (lean_obj_tag(v_pre_148_) == 1)
{
lean_object* v_pre_149_; 
v_pre_149_ = lean_ctor_get(v_pre_148_, 0);
if (lean_obj_tag(v_pre_149_) == 0)
{
lean_object* v_str_150_; lean_object* v_str_151_; lean_object* v_str_152_; lean_object* v_str_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v_str_150_ = lean_ctor_get(v_declName_145_, 1);
lean_inc_ref(v_str_150_);
lean_dec_ref_known(v_declName_145_, 2);
v_str_151_ = lean_ctor_get(v_pre_146_, 1);
lean_inc_ref(v_str_151_);
lean_dec_ref_known(v_pre_146_, 2);
v_str_152_ = lean_ctor_get(v_pre_147_, 1);
lean_inc_ref(v_str_152_);
lean_dec_ref_known(v_pre_147_, 2);
v_str_153_ = lean_ctor_get(v_pre_148_, 1);
lean_inc_ref(v_str_153_);
lean_dec_ref_known(v_pre_148_, 2);
v___x_154_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_155_ = lean_string_dec_eq(v_str_153_, v___x_154_);
lean_dec_ref(v_str_153_);
if (v___x_155_ == 0)
{
lean_dec_ref(v_str_152_);
lean_dec_ref(v_str_151_);
lean_dec_ref(v_str_150_);
goto v___jp_122_;
}
else
{
lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_156_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_157_ = lean_string_dec_eq(v_str_152_, v___x_156_);
lean_dec_ref(v_str_152_);
if (v___x_157_ == 0)
{
lean_dec_ref(v_str_151_);
lean_dec_ref(v_str_150_);
goto v___jp_122_;
}
else
{
lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_158_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4));
v___x_159_ = lean_string_dec_eq(v_str_151_, v___x_158_);
lean_dec_ref(v_str_151_);
if (v___x_159_ == 0)
{
lean_dec_ref(v_str_150_);
goto v___jp_122_;
}
else
{
lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_160_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__5));
v___x_161_ = lean_string_dec_eq(v_str_150_, v___x_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__6));
v___x_163_ = lean_string_dec_eq(v_str_150_, v___x_162_);
lean_dec_ref(v_str_150_);
if (v___x_163_ == 0)
{
goto v___jp_122_;
}
else
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = l_Lean_Environment_evalConst___redArg(v_env_131_, v_opts_132_, v_constName_119_, v___x_163_);
lean_dec(v_constName_119_);
v___x_165_ = l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___redArg(v___x_164_);
return v___x_165_;
}
}
else
{
lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec_ref(v_str_150_);
v___x_166_ = l_Lean_Environment_evalConst___redArg(v_env_131_, v_opts_132_, v_constName_119_, v___x_161_);
lean_dec(v_constName_119_);
v___x_167_ = l_IO_ofExcept___at___00Lean_Linter_MissingDocs_mkHandlerUnsafe_spec__0___redArg(v___x_166_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_176_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_176_ == 0)
{
v___x_170_ = v___x_167_;
v_isShared_171_ = v_isSharedCheck_176_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_167_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_176_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; lean_object* v___x_174_; 
v___x_172_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_172_, 0, v_a_168_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 0, v___x_172_);
v___x_174_ = v___x_170_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
else
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
v_a_177_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_184_ == 0)
{
v___x_179_ = v___x_167_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_167_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
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
lean_dec_ref_known(v_pre_148_, 2);
lean_dec_ref_known(v_pre_147_, 2);
lean_dec_ref_known(v_pre_146_, 2);
lean_dec_ref_known(v_declName_145_, 2);
goto v___jp_122_;
}
}
else
{
lean_dec_ref_known(v_pre_147_, 2);
lean_dec(v_pre_148_);
lean_dec_ref_known(v_pre_146_, 2);
lean_dec_ref_known(v_declName_145_, 2);
goto v___jp_122_;
}
}
else
{
lean_dec_ref_known(v_pre_146_, 2);
lean_dec(v_pre_147_);
lean_dec_ref_known(v_declName_145_, 2);
goto v___jp_122_;
}
}
else
{
lean_dec(v_pre_146_);
lean_dec_ref_known(v_declName_145_, 2);
goto v___jp_122_;
}
}
else
{
lean_dec(v_declName_145_);
goto v___jp_122_;
}
}
else
{
lean_dec_ref(v___x_144_);
goto v___jp_122_;
}
}
v___jp_122_:
{
lean_object* v___x_123_; uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_123_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__0));
v___x_124_ = 1;
v___x_125_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_constName_119_, v___x_124_);
v___x_126_ = lean_string_append(v___x_123_, v___x_125_);
lean_dec_ref(v___x_125_);
v___x_127_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__1));
v___x_128_ = lean_string_append(v___x_126_, v___x_127_);
v___x_129_ = lean_mk_io_user_error(v___x_128_);
v___x_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_mkHandlerUnsafe___boxed(lean_object* v_constName_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_Linter_MissingDocs_mkHandlerUnsafe(v_constName_185_, v_a_186_);
lean_dec_ref(v_a_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_537855421____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_190_ = lean_box(1);
v___x_191_ = lean_st_mk_ref(v___x_190_);
v___x_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_537855421____hygCtx___hyg_2____boxed(lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_537855421____hygCtx___hyg_2_();
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object* v_s_195_){
_start:
{
lean_object* v_fst_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_fst_196_ = lean_ctor_get(v_s_195_, 0);
lean_inc(v_fst_196_);
lean_dec_ref(v_s_195_);
v___x_197_ = l_List_reverse___redArg(v_fst_196_);
v___x_198_ = lean_array_mk(v___x_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object* v_s_202_){
_start:
{
lean_object* v_fst_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_214_; 
v_fst_203_ = lean_ctor_get(v_s_202_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_s_202_);
if (v_isSharedCheck_214_ == 0)
{
lean_object* v_unused_215_; 
v_unused_215_ = lean_ctor_get(v_s_202_, 1);
lean_dec(v_unused_215_);
v___x_205_ = v_s_202_;
v_isShared_206_ = v_isSharedCheck_214_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_fst_203_);
lean_dec(v_s_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_214_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_207_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_));
v___x_208_ = l_List_lengthTR___redArg(v_fst_203_);
lean_dec(v_fst_203_);
v___x_209_ = l_Nat_reprFast(v___x_208_);
v___x_210_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
if (v_isShared_206_ == 0)
{
lean_ctor_set_tag(v___x_205_, 5);
lean_ctor_set(v___x_205_, 1, v___x_210_);
lean_ctor_set(v___x_205_, 0, v___x_207_);
v___x_212_ = v___x_205_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object* v_x_216_, lean_object* v_s_217_){
_start:
{
lean_object* v_fst_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v_fst_218_ = lean_ctor_get(v_s_217_, 0);
lean_inc(v_fst_218_);
lean_dec_ref(v_s_217_);
v___x_219_ = l_List_reverse___redArg(v_fst_218_);
v___x_220_ = lean_array_mk(v___x_219_);
lean_inc_ref_n(v___x_220_, 2);
v___x_221_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
lean_ctor_set(v___x_221_, 2, v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed(lean_object* v_x_222_, lean_object* v_s_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(v_x_222_, v_s_223_);
lean_dec_ref(v_x_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__3_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object* v_x_225_, lean_object* v_x_226_){
_start:
{
lean_object* v_snd_227_; lean_object* v_fst_228_; lean_object* v_snd_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_255_; 
v_snd_227_ = lean_ctor_get(v_x_226_, 1);
lean_inc(v_snd_227_);
v_fst_228_ = lean_ctor_get(v_x_225_, 0);
v_snd_229_ = lean_ctor_get(v_x_225_, 1);
v_isSharedCheck_255_ = !lean_is_exclusive(v_x_225_);
if (v_isSharedCheck_255_ == 0)
{
v___x_231_ = v_x_225_;
v_isShared_232_ = v_isSharedCheck_255_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_snd_229_);
lean_inc(v_fst_228_);
lean_dec(v_x_225_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_255_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v_fst_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_253_; 
v_fst_233_ = lean_ctor_get(v_x_226_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v_x_226_);
if (v_isSharedCheck_253_ == 0)
{
lean_object* v_unused_254_; 
v_unused_254_ = lean_ctor_get(v_x_226_, 1);
lean_dec(v_unused_254_);
v___x_235_ = v_x_226_;
v_isShared_236_ = v_isSharedCheck_253_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_fst_233_);
lean_dec(v_x_226_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_253_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v_fst_237_; lean_object* v_snd_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_252_; 
v_fst_237_ = lean_ctor_get(v_snd_227_, 0);
v_snd_238_ = lean_ctor_get(v_snd_227_, 1);
v_isSharedCheck_252_ = !lean_is_exclusive(v_snd_227_);
if (v_isSharedCheck_252_ == 0)
{
v___x_240_ = v_snd_227_;
v_isShared_241_ = v_isSharedCheck_252_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_snd_238_);
lean_inc(v_fst_237_);
lean_dec(v_snd_227_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_252_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
lean_inc(v_fst_237_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 1, v_fst_237_);
lean_ctor_set(v___x_240_, 0, v_fst_233_);
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_fst_233_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v_fst_237_);
v___x_243_ = v_reuseFailAlloc_251_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
if (v_isShared_232_ == 0)
{
lean_ctor_set_tag(v___x_231_, 1);
lean_ctor_set(v___x_231_, 1, v_fst_228_);
lean_ctor_set(v___x_231_, 0, v___x_243_);
v___x_245_ = v___x_231_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_fst_228_);
v___x_245_ = v_reuseFailAlloc_250_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_237_, v_snd_238_, v_snd_229_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_246_);
lean_ctor_set(v___x_235_, 0, v___x_245_);
v___x_248_ = v___x_235_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v___x_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object* v___x_256_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_258_ = lean_st_ref_get(v___x_256_);
v___x_259_ = lean_box(0);
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
lean_ctor_set(v___x_260_, 1, v___x_258_);
v___x_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed(lean_object* v___x_262_, lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(v___x_262_);
lean_dec(v___x_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__0(lean_object* v_as_265_, size_t v_i_266_, size_t v_stop_267_, lean_object* v_b_268_, lean_object* v___y_269_){
_start:
{
uint8_t v___x_271_; 
v___x_271_ = lean_usize_dec_eq(v_i_266_, v_stop_267_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; lean_object* v_fst_273_; lean_object* v_snd_274_; lean_object* v___x_275_; 
v___x_272_ = lean_array_uget_borrowed(v_as_265_, v_i_266_);
v_fst_273_ = lean_ctor_get(v___x_272_, 0);
v_snd_274_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_fst_273_);
v___x_275_ = l_Lean_Linter_MissingDocs_mkHandlerUnsafe(v_fst_273_, v___y_269_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; size_t v___x_278_; size_t v___x_279_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref_known(v___x_275_, 1);
lean_inc(v_snd_274_);
v___x_277_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_snd_274_, v_a_276_, v_b_268_);
v___x_278_ = ((size_t)1ULL);
v___x_279_ = lean_usize_add(v_i_266_, v___x_278_);
v_i_266_ = v___x_279_;
v_b_268_ = v___x_277_;
goto _start;
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec(v_b_268_);
v_a_281_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_275_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_275_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v___x_289_; 
v___x_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_289_, 0, v_b_268_);
return v___x_289_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__0___boxed(lean_object* v_as_290_, lean_object* v_i_291_, lean_object* v_stop_292_, lean_object* v_b_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
size_t v_i_boxed_296_; size_t v_stop_boxed_297_; lean_object* v_res_298_; 
v_i_boxed_296_ = lean_unbox_usize(v_i_291_);
lean_dec(v_i_291_);
v_stop_boxed_297_ = lean_unbox_usize(v_stop_292_);
lean_dec(v_stop_292_);
v_res_298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__0(v_as_290_, v_i_boxed_296_, v_stop_boxed_297_, v_b_293_, v___y_294_);
lean_dec_ref(v___y_294_);
lean_dec_ref(v_as_290_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__1(lean_object* v_as_299_, size_t v_i_300_, size_t v_stop_301_, lean_object* v_b_302_, lean_object* v___y_303_){
_start:
{
lean_object* v_a_306_; uint8_t v___x_310_; 
v___x_310_ = lean_usize_dec_eq(v_i_300_, v_stop_301_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_311_ = lean_array_uget_borrowed(v_as_299_, v_i_300_);
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_313_ = lean_array_get_size(v___x_311_);
v___x_314_ = lean_nat_dec_lt(v___x_312_, v___x_313_);
if (v___x_314_ == 0)
{
v_a_306_ = v_b_302_;
goto v___jp_305_;
}
else
{
size_t v___x_315_; size_t v___x_316_; lean_object* v___x_317_; 
v___x_315_ = ((size_t)0ULL);
v___x_316_ = lean_usize_of_nat(v___x_313_);
v___x_317_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__0(v___x_311_, v___x_315_, v___x_316_, v_b_302_, v___y_303_);
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_a_318_);
lean_dec_ref_known(v___x_317_, 1);
v_a_306_ = v_a_318_;
goto v___jp_305_;
}
else
{
return v___x_317_;
}
}
}
else
{
lean_object* v___x_319_; 
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v_b_302_);
return v___x_319_;
}
v___jp_305_:
{
size_t v___x_307_; size_t v___x_308_; 
v___x_307_ = ((size_t)1ULL);
v___x_308_ = lean_usize_add(v_i_300_, v___x_307_);
v_i_300_ = v___x_308_;
v_b_302_ = v_a_306_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__1___boxed(lean_object* v_as_320_, lean_object* v_i_321_, lean_object* v_stop_322_, lean_object* v_b_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
size_t v_i_boxed_326_; size_t v_stop_boxed_327_; lean_object* v_res_328_; 
v_i_boxed_326_ = lean_unbox_usize(v_i_321_);
lean_dec(v_i_321_);
v_stop_boxed_327_ = lean_unbox_usize(v_stop_322_);
lean_dec(v_stop_322_);
v_res_328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__1(v_as_320_, v_i_boxed_326_, v_stop_boxed_327_, v_b_323_, v___y_324_);
lean_dec_ref(v___y_324_);
lean_dec_ref(v_as_320_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(lean_object* v___x_329_, lean_object* v_as_330_, lean_object* v___y_331_){
_start:
{
lean_object* v_a_334_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_338_ = lean_st_ref_get(v___x_329_);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_array_get_size(v_as_330_);
v___x_341_ = lean_nat_dec_lt(v___x_339_, v___x_340_);
if (v___x_341_ == 0)
{
v_a_334_ = v___x_338_;
goto v___jp_333_;
}
else
{
size_t v___x_342_; size_t v___x_343_; lean_object* v___x_344_; 
v___x_342_ = ((size_t)0ULL);
v___x_343_ = lean_usize_of_nat(v___x_340_);
v___x_344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__spec__1(v_as_330_, v___x_342_, v___x_343_, v___x_338_, v___y_331_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_a_345_);
lean_dec_ref_known(v___x_344_, 1);
v_a_334_ = v_a_345_;
goto v___jp_333_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
v_a_346_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_344_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_344_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
v___jp_333_:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_335_ = lean_box(0);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v_a_334_);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed(lean_object* v___x_354_, lean_object* v_as_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(v___x_354_, v_as_355_, v___y_356_);
lean_dec_ref(v___y_356_);
lean_dec_ref(v_as_355_);
lean_dec(v___x_354_);
return v_res_358_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_369_; lean_object* v___f_370_; 
v___x_369_ = l_Lean_Linter_MissingDocs_builtinHandlersRef;
v___f_370_ = lean_alloc_closure((void*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__4_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_370_, 0, v___x_369_);
return v___f_370_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_371_; lean_object* v___f_372_; 
v___x_371_ = l_Lean_Linter_MissingDocs_builtinHandlersRef;
v___f_372_ = lean_alloc_closure((void*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed), 4, 1);
lean_closure_set(v___f_372_, 0, v___x_371_);
return v___f_372_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__8_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___f_376_; lean_object* v___f_377_; lean_object* v___f_378_; lean_object* v___f_379_; lean_object* v___f_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_373_ = 0;
v___x_374_ = lean_box(0);
v___x_375_ = lean_box(2);
v___f_376_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_));
v___f_377_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__2_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_));
v___f_378_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_));
v___f_379_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__7_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_);
v___f_380_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_);
v___x_381_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_));
v___x_382_ = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___f_380_);
lean_ctor_set(v___x_382_, 2, v___f_379_);
lean_ctor_set(v___x_382_, 3, v___f_378_);
lean_ctor_set(v___x_382_, 4, v___f_377_);
lean_ctor_set(v___x_382_, 5, v___f_376_);
lean_ctor_set(v___x_382_, 6, v___x_375_);
lean_ctor_set(v___x_382_, 7, v___x_374_);
lean_ctor_set_uint8(v___x_382_, sizeof(void*)*8, v___x_373_);
lean_ctor_set_uint8(v___x_382_, sizeof(void*)*8 + 1, v___x_373_);
return v___x_382_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__9_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___f_383_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__0_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_));
v___x_384_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__8_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__8_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__8_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___f_383_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__9_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__9_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__9_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_);
v___x_388_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2____boxed(lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_();
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_addHandler___lam__0(lean_object* v_addEntryFn_391_, lean_object* v___x_392_, lean_object* v_s_393_){
_start:
{
lean_object* v_importedEntries_394_; lean_object* v_state_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_403_; 
v_importedEntries_394_ = lean_ctor_get(v_s_393_, 0);
v_state_395_ = lean_ctor_get(v_s_393_, 1);
v_isSharedCheck_403_ = !lean_is_exclusive(v_s_393_);
if (v_isSharedCheck_403_ == 0)
{
v___x_397_ = v_s_393_;
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_state_395_);
lean_inc(v_importedEntries_394_);
lean_dec(v_s_393_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v_state_399_; lean_object* v___x_401_; 
v_state_399_ = lean_apply_2(v_addEntryFn_391_, v_state_395_, v___x_392_);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v_state_399_);
v___x_401_ = v___x_397_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_importedEntries_394_);
lean_ctor_set(v_reuseFailAlloc_402_, 1, v_state_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_addHandler(lean_object* v_env_404_, lean_object* v_declName_405_, lean_object* v_key_406_, lean_object* v_h_407_){
_start:
{
lean_object* v___x_408_; lean_object* v_toEnvExtension_409_; lean_object* v_addEntryFn_410_; lean_object* v_asyncMode_411_; uint8_t v_logWrites_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___f_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_408_ = l_Lean_Linter_MissingDocs_missingDocsExt;
v_toEnvExtension_409_ = lean_ctor_get(v___x_408_, 0);
v_addEntryFn_410_ = lean_ctor_get(v___x_408_, 3);
v_asyncMode_411_ = lean_ctor_get(v_toEnvExtension_409_, 2);
v_logWrites_412_ = lean_ctor_get_uint8(v_toEnvExtension_409_, sizeof(void*)*6);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_key_406_);
lean_ctor_set(v___x_413_, 1, v_h_407_);
v___x_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_414_, 0, v_declName_405_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
lean_inc(v_addEntryFn_410_);
v___f_415_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_addHandler___lam__0), 3, 2);
lean_closure_set(v___f_415_, 0, v_addEntryFn_410_);
lean_closure_set(v___f_415_, 1, v___x_414_);
v___x_416_ = lean_box(0);
v___x_417_ = 1;
if (v_logWrites_412_ == 0)
{
lean_object* v___x_418_; 
lean_inc_ref(v_toEnvExtension_409_);
v___x_418_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_409_, v_env_404_, v___f_415_, v_asyncMode_411_, v___x_416_, v___x_417_);
return v___x_418_;
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; 
lean_inc_ref_n(v_toEnvExtension_409_, 2);
v___x_419_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_409_, v_env_404_);
lean_dec_ref(v_env_404_);
v___x_420_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_409_, v___x_419_, v___f_415_, v_asyncMode_411_, v___x_416_, v___x_417_);
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_getHandlers(lean_object* v_env_424_){
_start:
{
lean_object* v___x_425_; lean_object* v_toEnvExtension_426_; lean_object* v_asyncMode_427_; lean_object* v___x_428_; lean_object* v___x_429_; uint8_t v___x_430_; lean_object* v___x_431_; lean_object* v_snd_432_; 
v___x_425_ = l_Lean_Linter_MissingDocs_missingDocsExt;
v_toEnvExtension_426_ = lean_ctor_get(v___x_425_, 0);
v_asyncMode_427_ = lean_ctor_get(v_toEnvExtension_426_, 2);
v___x_428_ = ((lean_object*)(l_Lean_Linter_MissingDocs_getHandlers___closed__0));
v___x_429_ = lean_box(0);
v___x_430_ = 0;
v___x_431_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_428_, v___x_425_, v_env_424_, v_asyncMode_427_, v___x_429_, v___x_430_);
v_snd_432_ = lean_ctor_get(v___x_431_, 1);
lean_inc(v_snd_432_);
lean_dec(v___x_431_);
return v_snd_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___redArg(lean_object* v_o_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v_env_438_; lean_object* v___x_439_; lean_object* v_toEnvExtension_440_; lean_object* v_asyncMode_441_; lean_object* v___x_442_; uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v_merged_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_453_; 
v___x_436_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_437_ = lean_st_ref_get(v___y_434_);
v_env_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc_ref(v_env_438_);
lean_dec(v___x_437_);
v___x_439_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_440_ = lean_ctor_get(v___x_439_, 0);
v_asyncMode_441_ = lean_ctor_get(v_toEnvExtension_440_, 2);
v___x_442_ = lean_box(0);
v___x_443_ = 0;
v___x_444_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_436_, v___x_439_, v_env_438_, v_asyncMode_441_, v___x_442_, v___x_443_);
v_merged_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_453_ == 0)
{
lean_object* v_unused_454_; 
v_unused_454_ = lean_ctor_get(v___x_444_, 1);
lean_dec(v_unused_454_);
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_453_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_merged_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_453_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 1, v_merged_445_);
lean_ctor_set(v___x_447_, 0, v_o_433_);
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_o_433_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_merged_445_);
v___x_450_ = v_reuseFailAlloc_452_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_451_; 
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___redArg___boxed(lean_object* v_o_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___redArg(v_o_455_, v___y_456_);
lean_dec(v___y_456_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0(lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v_scopes_464_; lean_object* v___x_465_; lean_object* v_opts_466_; lean_object* v___x_467_; 
v___x_462_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_463_ = lean_st_ref_get(v___y_460_);
v_scopes_464_ = lean_ctor_get(v___x_463_, 2);
lean_inc(v_scopes_464_);
lean_dec(v___x_463_);
v___x_465_ = l_List_head_x21___redArg(v___x_462_, v_scopes_464_);
lean_dec(v_scopes_464_);
v_opts_466_ = lean_ctor_get(v___x_465_, 1);
lean_inc_ref(v_opts_466_);
lean_dec(v___x_465_);
v___x_467_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___redArg(v_opts_466_, v___y_460_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0___boxed(lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0(v___y_468_, v___y_469_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_missingDocs___lam__0(lean_object* v_stx_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v___x_476_; lean_object* v_env_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_476_ = lean_st_ref_get(v___y_474_);
v_env_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc_ref(v_env_477_);
lean_dec(v___x_476_);
v___x_478_ = l_Lean_Linter_MissingDocs_getHandlers(v_env_477_);
lean_inc(v_stx_472_);
v___x_479_ = l_Lean_Syntax_getKind(v_stx_472_);
v___x_480_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_478_, v___x_479_);
lean_dec(v___x_479_);
lean_dec(v___x_478_);
if (lean_obj_tag(v___x_480_) == 1)
{
lean_object* v_val_481_; lean_object* v___x_482_; lean_object* v_a_483_; uint8_t v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v_val_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_val_481_);
lean_dec_ref_known(v___x_480_, 1);
v___x_482_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0(v___y_473_, v___y_474_);
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref(v___x_482_);
v___x_484_ = l_Lean_Linter_getLinterMissingDocs(v_a_483_);
lean_dec(v_a_483_);
v___x_485_ = lean_box(v___x_484_);
lean_inc(v___y_474_);
lean_inc_ref(v___y_473_);
v___x_486_ = lean_apply_5(v_val_481_, v___x_485_, v_stx_472_, v___y_473_, v___y_474_, lean_box(0));
return v___x_486_;
}
else
{
lean_object* v___x_487_; lean_object* v___x_488_; 
lean_dec(v___x_480_);
lean_dec(v_stx_472_);
v___x_487_ = lean_box(0);
v___x_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
return v___x_488_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_missingDocs___lam__0___boxed(lean_object* v_stx_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lean_Linter_MissingDocs_missingDocs___lam__0(v_stx_489_, v___y_490_, v___y_491_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0(lean_object* v_o_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___redArg(v_o_504_, v___y_506_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0___boxed(lean_object* v_o_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_MissingDocs_missingDocs_spec__0_spec__0(v_o_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_2727349317____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l_Lean_Linter_MissingDocs_missingDocs));
v___x_516_ = l_Lean_Elab_Command_addLinter(v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_2727349317____hygCtx___hyg_2____boxed(lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_2727349317____hygCtx___hyg_2_();
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_addBuiltinHandler(lean_object* v_key_519_, lean_object* v_h_520_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_522_ = l_Lean_Linter_MissingDocs_builtinHandlersRef;
v___x_523_ = lean_st_ref_take(v___x_522_);
v___x_524_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_key_519_, v_h_520_, v___x_523_);
v___x_525_ = lean_st_ref_put(v___x_522_, v___x_524_);
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_addBuiltinHandler___boxed(lean_object* v_key_527_, lean_object* v_h_528_, lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v_key_527_, v_h_528_);
return v_res_530_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_531_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0, &l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0_once, _init_l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0);
v___x_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
return v___x_533_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__1, &l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__1_once, _init_l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__1);
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg(lean_object* v_env_536_, lean_object* v___y_537_){
_start:
{
lean_object* v___x_539_; lean_object* v_nextMacroScope_540_; lean_object* v_ngen_541_; lean_object* v_auxDeclNGen_542_; lean_object* v_traceState_543_; lean_object* v_recordedDeps_544_; lean_object* v_messages_545_; lean_object* v_infoState_546_; lean_object* v_snapshotTasks_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_558_; 
v___x_539_ = lean_st_ref_take(v___y_537_);
v_nextMacroScope_540_ = lean_ctor_get(v___x_539_, 1);
v_ngen_541_ = lean_ctor_get(v___x_539_, 2);
v_auxDeclNGen_542_ = lean_ctor_get(v___x_539_, 3);
v_traceState_543_ = lean_ctor_get(v___x_539_, 4);
v_recordedDeps_544_ = lean_ctor_get(v___x_539_, 6);
v_messages_545_ = lean_ctor_get(v___x_539_, 7);
v_infoState_546_ = lean_ctor_get(v___x_539_, 8);
v_snapshotTasks_547_ = lean_ctor_get(v___x_539_, 9);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; lean_object* v_unused_560_; 
v_unused_559_ = lean_ctor_get(v___x_539_, 5);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v___x_539_, 0);
lean_dec(v_unused_560_);
v___x_549_ = v___x_539_;
v_isShared_550_ = v_isSharedCheck_558_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_snapshotTasks_547_);
lean_inc(v_infoState_546_);
lean_inc(v_messages_545_);
lean_inc(v_recordedDeps_544_);
lean_inc(v_traceState_543_);
lean_inc(v_auxDeclNGen_542_);
lean_inc(v_ngen_541_);
lean_inc(v_nextMacroScope_540_);
lean_dec(v___x_539_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_558_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_554_; 
v___x_551_ = lean_box(0);
v___x_552_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 5, v___x_552_);
lean_ctor_set(v___x_549_, 0, v_env_536_);
v___x_554_ = v___x_549_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_env_536_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_nextMacroScope_540_);
lean_ctor_set(v_reuseFailAlloc_557_, 2, v_ngen_541_);
lean_ctor_set(v_reuseFailAlloc_557_, 3, v_auxDeclNGen_542_);
lean_ctor_set(v_reuseFailAlloc_557_, 4, v_traceState_543_);
lean_ctor_set(v_reuseFailAlloc_557_, 5, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_557_, 6, v_recordedDeps_544_);
lean_ctor_set(v_reuseFailAlloc_557_, 7, v_messages_545_);
lean_ctor_set(v_reuseFailAlloc_557_, 8, v_infoState_546_);
lean_ctor_set(v_reuseFailAlloc_557_, 9, v_snapshotTasks_547_);
v___x_554_ = v_reuseFailAlloc_557_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_555_ = lean_st_ref_put(v___y_537_, v___x_554_);
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_551_);
return v___x_556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_env_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg(v_env_561_, v___y_562_);
lean_dec(v___y_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2(lean_object* v_env_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg(v_env_565_, v___y_567_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2(v_env_570_, v___y_571_, v___y_572_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
return v_res_574_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0, &l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0_once, _init_l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__0);
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
return v___x_576_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_577_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_578_ = lean_unsigned_to_nat(0u);
v___x_579_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
lean_ctor_set(v___x_579_, 2, v___x_578_);
lean_ctor_set(v___x_579_, 3, v___x_578_);
lean_ctor_set(v___x_579_, 4, v___x_577_);
lean_ctor_set(v___x_579_, 5, v___x_577_);
lean_ctor_set(v___x_579_, 6, v___x_577_);
lean_ctor_set(v___x_579_, 7, v___x_577_);
lean_ctor_set(v___x_579_, 8, v___x_577_);
lean_ctor_set(v___x_579_, 9, v___x_577_);
lean_ctor_set(v___x_579_, 10, v___x_577_);
return v___x_579_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_580_ = lean_unsigned_to_nat(32u);
v___x_581_ = lean_mk_empty_array_with_capacity(v___x_580_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_583_ = ((size_t)5ULL);
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = lean_unsigned_to_nat(32u);
v___x_586_ = lean_mk_empty_array_with_capacity(v___x_585_);
v___x_587_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_588_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v___x_586_);
lean_ctor_set(v___x_588_, 2, v___x_584_);
lean_ctor_set(v___x_588_, 3, v___x_584_);
lean_ctor_set_usize(v___x_588_, 4, v___x_583_);
return v___x_588_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_589_ = lean_box(1);
v___x_590_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_591_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_592_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set(v___x_592_, 1, v___x_590_);
lean_ctor_set(v___x_592_, 2, v___x_589_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___x_597_; lean_object* v_toCold_598_; lean_object* v_env_599_; lean_object* v_options_600_; uint8_t v___x_601_; lean_object* v_env_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_597_ = lean_st_ref_get(v___y_595_);
v_toCold_598_ = lean_ctor_get(v___y_594_, 0);
v_env_599_ = lean_ctor_get(v___x_597_, 0);
lean_inc_ref(v_env_599_);
lean_dec(v___x_597_);
v_options_600_ = lean_ctor_get(v_toCold_598_, 2);
v___x_601_ = 0;
v_env_602_ = l_Lean_Environment_setRecordingDeps(v_env_599_, v___x_601_);
v___x_603_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_604_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4);
lean_inc_ref(v_options_600_);
v___x_605_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_605_, 0, v_env_602_);
lean_ctor_set(v___x_605_, 1, v___x_603_);
lean_ctor_set(v___x_605_, 2, v___x_604_);
lean_ctor_set(v___x_605_, 3, v_options_600_);
v___x_606_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
lean_ctor_set(v___x_606_, 1, v_msgData_593_);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0(v_msgData_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
lean_object* v_ref_617_; lean_object* v___x_618_; lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_627_; 
v_ref_617_ = lean_ctor_get(v___y_614_, 2);
v___x_618_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0(v_msg_613_, v___y_614_, v___y_615_);
v_a_619_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_627_ == 0)
{
v___x_621_ = v___x_618_;
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_618_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
lean_inc(v_ref_617_);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v_ref_617_);
lean_ctor_set(v___x_623_, 1, v_a_619_);
if (v_isShared_622_ == 0)
{
lean_ctor_set_tag(v___x_621_, 1);
lean_ctor_set(v___x_621_, 0, v___x_623_);
v___x_625_ = v___x_621_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(v_msg_628_, v___y_629_, v___y_630_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
return v_res_632_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_635_ = l_Lean_stringToMessageData(v___x_634_);
return v___x_635_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_638_ = l_Lean_stringToMessageData(v___x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(lean_object* v_name_639_, lean_object* v_decl_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_644_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_);
v___x_645_ = l_Lean_MessageData_ofName(v_name_639_);
v___x_646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_);
v___x_648_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_646_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(v___x_648_, v___y_641_, v___y_642_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed(lean_object* v_name_650_, lean_object* v_decl_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(v_name_650_, v_decl_651_, v___y_652_, v___y_653_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v_decl_651_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___redArg(lean_object* v_ref_656_, lean_object* v_msg_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_toCold_661_; lean_object* v_currRecDepth_662_; lean_object* v_ref_663_; uint16_t v_optionFlags_664_; uint8_t v_suppressElabErrors_665_; uint8_t v_checkDeprecated_666_; uint8_t v_isRecordingDeps_667_; lean_object* v_ref_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_toCold_661_ = lean_ctor_get(v___y_658_, 0);
v_currRecDepth_662_ = lean_ctor_get(v___y_658_, 1);
v_ref_663_ = lean_ctor_get(v___y_658_, 2);
v_optionFlags_664_ = lean_ctor_get_uint16(v___y_658_, sizeof(void*)*3);
v_suppressElabErrors_665_ = lean_ctor_get_uint8(v___y_658_, sizeof(void*)*3 + 2);
v_checkDeprecated_666_ = lean_ctor_get_uint8(v___y_658_, sizeof(void*)*3 + 3);
v_isRecordingDeps_667_ = lean_ctor_get_uint8(v___y_658_, sizeof(void*)*3 + 4);
v_ref_668_ = l_Lean_replaceRef(v_ref_656_, v_ref_663_);
lean_inc(v_currRecDepth_662_);
lean_inc_ref(v_toCold_661_);
v___x_669_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_669_, 0, v_toCold_661_);
lean_ctor_set(v___x_669_, 1, v_currRecDepth_662_);
lean_ctor_set(v___x_669_, 2, v_ref_668_);
lean_ctor_set_uint16(v___x_669_, sizeof(void*)*3, v_optionFlags_664_);
lean_ctor_set_uint8(v___x_669_, sizeof(void*)*3 + 2, v_suppressElabErrors_665_);
lean_ctor_set_uint8(v___x_669_, sizeof(void*)*3 + 3, v_checkDeprecated_666_);
lean_ctor_set_uint8(v___x_669_, sizeof(void*)*3 + 4, v_isRecordingDeps_667_);
v___x_670_ = l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(v_msg_657_, v___x_669_, v___y_659_);
lean_dec_ref_known(v___x_669_, 3);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___redArg___boxed(lean_object* v_ref_671_, lean_object* v_msg_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___redArg(v_ref_671_, v_msg_672_, v___y_673_, v___y_674_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v_ref_671_);
return v_res_676_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__0));
v___x_679_ = l_Lean_stringToMessageData(v___x_678_);
return v___x_679_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__2));
v___x_682_ = l_Lean_stringToMessageData(v___x_681_);
return v___x_682_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__5(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__4));
v___x_685_ = l_Lean_stringToMessageData(v___x_684_);
return v___x_685_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__7(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__6));
v___x_688_ = l_Lean_stringToMessageData(v___x_687_);
return v___x_688_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__9(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__8));
v___x_691_ = l_Lean_stringToMessageData(v___x_690_);
return v___x_691_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__11(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__10));
v___x_694_ = l_Lean_stringToMessageData(v___x_693_);
return v___x_694_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__13(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__12));
v___x_697_ = l_Lean_stringToMessageData(v___x_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg(lean_object* v_msg_698_, lean_object* v_declHint_699_, lean_object* v___y_700_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v_env_704_; uint8_t v___x_705_; 
v___x_702_ = lean_box(0);
v___x_703_ = lean_st_ref_get(v___y_700_);
v_env_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc_ref(v_env_704_);
lean_dec(v___x_703_);
v___x_705_ = l_Lean_Name_isAnonymous(v_declHint_699_);
if (v___x_705_ == 0)
{
uint8_t v_isExporting_706_; 
v_isExporting_706_ = lean_ctor_get_uint8(v_env_704_, sizeof(void*)*13);
if (v_isExporting_706_ == 0)
{
lean_object* v___x_707_; 
lean_dec_ref(v_env_704_);
lean_dec(v_declHint_699_);
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v_msg_698_);
return v___x_707_;
}
else
{
lean_object* v___x_708_; uint8_t v___x_709_; 
lean_inc_ref(v_env_704_);
v___x_708_ = l_Lean_Environment_setExporting(v_env_704_, v___x_705_);
lean_inc(v_declHint_699_);
lean_inc_ref(v___x_708_);
v___x_709_ = l_Lean_Environment_contains(v___x_708_, v_declHint_699_, v_isExporting_706_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
lean_dec_ref(v___x_708_);
lean_dec_ref(v_env_704_);
lean_dec(v_declHint_699_);
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v_msg_698_);
return v___x_710_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v_c_716_; lean_object* v___x_717_; 
v___x_711_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_712_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_713_ = l_Lean_Options_empty;
lean_inc_ref(v___x_708_);
v___x_714_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_714_, 0, v___x_708_);
lean_ctor_set(v___x_714_, 1, v___x_711_);
lean_ctor_set(v___x_714_, 2, v___x_712_);
lean_ctor_set(v___x_714_, 3, v___x_713_);
lean_inc(v_declHint_699_);
v___x_715_ = l_Lean_MessageData_ofConstName(v_declHint_699_, v___x_705_);
v_c_716_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_716_, 0, v___x_714_);
lean_ctor_set(v_c_716_, 1, v___x_715_);
v___x_717_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_708_, v_declHint_699_);
lean_dec_ref(v___x_708_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
lean_dec_ref(v_env_704_);
lean_dec(v_declHint_699_);
v___x_718_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1);
v___x_719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
lean_ctor_set(v___x_719_, 1, v_c_716_);
v___x_720_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__3);
v___x_721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_719_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
v___x_722_ = l_Lean_MessageData_note(v___x_721_);
v___x_723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_723_, 0, v_msg_698_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
return v___x_724_;
}
else
{
lean_object* v_val_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_759_; 
v_val_725_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_759_ == 0)
{
v___x_727_ = v___x_717_;
v_isShared_728_ = v_isSharedCheck_759_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_val_725_);
lean_dec(v___x_717_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_759_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v_moduleNames_730_; lean_object* v_mod_731_; uint8_t v___x_732_; 
v___x_729_ = l_Lean_Environment_header(v_env_704_);
lean_dec_ref(v_env_704_);
v_moduleNames_730_ = lean_ctor_get(v___x_729_, 4);
lean_inc_ref(v_moduleNames_730_);
lean_dec_ref(v___x_729_);
v_mod_731_ = lean_array_get(v___x_702_, v_moduleNames_730_, v_val_725_);
lean_dec(v_val_725_);
lean_dec_ref(v_moduleNames_730_);
v___x_732_ = l_Lean_isPrivateName(v_declHint_699_);
lean_dec(v_declHint_699_);
if (v___x_732_ == 0)
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_744_; 
v___x_733_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__5);
v___x_734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
lean_ctor_set(v___x_734_, 1, v_c_716_);
v___x_735_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__7);
v___x_736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_734_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = l_Lean_MessageData_ofName(v_mod_731_);
v___x_738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_736_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__9);
v___x_740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
v___x_741_ = l_Lean_MessageData_note(v___x_740_);
v___x_742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_742_, 0, v_msg_698_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
if (v_isShared_728_ == 0)
{
lean_ctor_set_tag(v___x_727_, 0);
lean_ctor_set(v___x_727_, 0, v___x_742_);
v___x_744_ = v___x_727_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_746_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__1);
v___x_747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
lean_ctor_set(v___x_747_, 1, v_c_716_);
v___x_748_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__11);
v___x_749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_747_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = l_Lean_MessageData_ofName(v_mod_731_);
v___x_751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_751_, 0, v___x_749_);
lean_ctor_set(v___x_751_, 1, v___x_750_);
v___x_752_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___closed__13);
v___x_753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = l_Lean_MessageData_note(v___x_753_);
v___x_755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_755_, 0, v_msg_698_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
if (v_isShared_728_ == 0)
{
lean_ctor_set_tag(v___x_727_, 0);
lean_ctor_set(v___x_727_, 0, v___x_755_);
v___x_757_ = v___x_727_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_760_; 
lean_dec_ref(v_env_704_);
lean_dec(v_declHint_699_);
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v_msg_698_);
return v___x_760_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg___boxed(lean_object* v_msg_761_, lean_object* v_declHint_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg(v_msg_761_, v_declHint_762_, v___y_763_);
lean_dec(v___y_763_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12(lean_object* v_msg_766_, lean_object* v_declHint_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v___x_771_; lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_781_; 
v___x_771_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg(v_msg_766_, v_declHint_767_, v___y_769_);
v_a_772_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_781_ == 0)
{
v___x_774_ = v___x_771_;
v_isShared_775_ = v_isSharedCheck_781_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_781_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_776_ = l_Lean_unknownIdentifierMessageTag;
v___x_777_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
lean_ctor_set(v___x_777_, 1, v_a_772_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_777_);
v___x_779_ = v___x_774_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12___boxed(lean_object* v_msg_782_, lean_object* v_declHint_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12(v_msg_782_, v_declHint_783_, v___y_784_, v___y_785_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___redArg(lean_object* v_ref_788_, lean_object* v_msg_789_, lean_object* v_declHint_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; lean_object* v_a_795_; lean_object* v___x_796_; 
v___x_794_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12(v_msg_789_, v_declHint_790_, v___y_791_, v___y_792_);
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_795_);
lean_dec_ref(v___x_794_);
v___x_796_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___redArg(v_ref_788_, v_a_795_, v___y_791_, v___y_792_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_ref_797_, lean_object* v_msg_798_, lean_object* v_declHint_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___redArg(v_ref_797_, v_msg_798_, v_declHint_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v_ref_797_);
return v_res_803_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__2));
v___x_805_ = l_Lean_stringToMessageData(v___x_804_);
return v___x_805_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__3));
v___x_807_ = l_Lean_stringToMessageData(v___x_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object* v_ref_808_, lean_object* v_constName_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v___x_813_; uint8_t v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_813_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__0, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__0);
v___x_814_ = 0;
lean_inc(v_constName_809_);
v___x_815_ = l_Lean_MessageData_ofConstName(v_constName_809_, v___x_814_);
v___x_816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_813_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1);
v___x_818_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
v___x_819_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___redArg(v_ref_808_, v___x_818_, v_constName_809_, v___y_810_, v___y_811_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_820_, lean_object* v_constName_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_ref_820_, v_constName_821_, v___y_822_, v___y_823_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v_ref_820_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_constName_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v_ref_830_; lean_object* v___x_831_; 
v_ref_830_ = lean_ctor_get(v___y_827_, 2);
v___x_831_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_ref_830_, v_constName_826_, v___y_827_, v___y_828_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_constName_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___redArg(v_constName_832_, v___y_833_, v___y_834_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1(lean_object* v_constName_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v___x_841_; lean_object* v_env_842_; uint8_t v___x_843_; lean_object* v___x_844_; 
v___x_841_ = lean_st_ref_get(v___y_839_);
v_env_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc_ref(v_env_842_);
lean_dec(v___x_841_);
v___x_843_ = 0;
lean_inc(v_constName_837_);
v___x_844_ = l_Lean_Environment_find_x3f(v_env_842_, v_constName_837_, v___x_843_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v___x_845_; 
v___x_845_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___redArg(v_constName_837_, v___y_838_, v___y_839_);
return v___x_845_;
}
else
{
lean_object* v_val_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_constName_837_);
v_val_846_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_844_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_val_846_);
lean_dec(v___x_844_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
lean_ctor_set_tag(v___x_848_, 0);
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_val_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1___boxed(lean_object* v_constName_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1(v_constName_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
return v_res_858_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__0));
v___x_861_ = l_Lean_stringToMessageData(v___x_860_);
return v___x_861_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__2));
v___x_864_ = l_Lean_stringToMessageData(v___x_863_);
return v___x_864_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__4));
v___x_867_ = l_Lean_stringToMessageData(v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg(lean_object* v_attrName_868_, lean_object* v_declName_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_873_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__1);
v___x_874_ = l_Lean_MessageData_ofName(v_attrName_868_);
v___x_875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_873_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__3);
v___x_877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_875_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = 0;
v___x_879_ = l_Lean_MessageData_ofConstName(v_declName_869_, v___x_878_);
v___x_880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_877_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v___x_881_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___closed__5);
v___x_882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_880_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(v___x_882_, v___y_870_, v___y_871_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object* v_attrName_884_, lean_object* v_declName_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg(v_attrName_884_, v_declName_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
return v_res_889_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__0));
v___x_892_ = l_Lean_stringToMessageData(v___x_891_);
return v___x_892_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__2));
v___x_895_ = l_Lean_stringToMessageData(v___x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg(lean_object* v_name_899_, uint8_t v_kind_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___y_910_; 
v___x_904_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__1);
v___x_905_ = l_Lean_MessageData_ofName(v_name_899_);
v___x_906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_904_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
v___x_907_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__3);
v___x_908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_906_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
switch(v_kind_900_)
{
case 0:
{
lean_object* v___x_917_; 
v___x_917_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__4));
v___y_910_ = v___x_917_;
goto v___jp_909_;
}
case 1:
{
lean_object* v___x_918_; 
v___x_918_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__5));
v___y_910_ = v___x_918_;
goto v___jp_909_;
}
default: 
{
lean_object* v___x_919_; 
v___x_919_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___closed__6));
v___y_910_ = v___x_919_;
goto v___jp_909_;
}
}
v___jp_909_:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
lean_inc_ref(v___y_910_);
v___x_911_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_911_, 0, v___y_910_);
v___x_912_ = l_Lean_MessageData_ofFormat(v___x_911_);
v___x_913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_908_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(v___x_915_, v___y_901_, v___y_902_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object* v_name_920_, lean_object* v_kind_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
uint8_t v_kind_boxed_925_; lean_object* v_res_926_; 
v_kind_boxed_925_ = lean_unbox(v_kind_921_);
v_res_926_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg(v_name_920_, v_kind_boxed_925_, v___y_922_, v___y_923_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___lam__0(lean_object* v_addEntryFn_927_, lean_object* v_entry_928_, lean_object* v_s_929_){
_start:
{
lean_object* v_importedEntries_930_; lean_object* v_state_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_939_; 
v_importedEntries_930_ = lean_ctor_get(v_s_929_, 0);
v_state_931_ = lean_ctor_get(v_s_929_, 1);
v_isSharedCheck_939_ = !lean_is_exclusive(v_s_929_);
if (v_isSharedCheck_939_ == 0)
{
v___x_933_ = v_s_929_;
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_state_931_);
lean_inc(v_importedEntries_930_);
lean_dec(v_s_929_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v_state_935_; lean_object* v___x_937_; 
v_state_935_ = lean_apply_2(v_addEntryFn_927_, v_state_931_, v_entry_928_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v_state_935_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_importedEntries_930_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_state_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___redArg(lean_object* v_keys_940_, lean_object* v_i_941_, lean_object* v_k_942_){
_start:
{
lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = lean_array_get_size(v_keys_940_);
v___x_944_ = lean_nat_dec_lt(v_i_941_, v___x_943_);
if (v___x_944_ == 0)
{
lean_dec(v_i_941_);
return v___x_944_;
}
else
{
lean_object* v_k_x27_945_; uint8_t v___x_946_; 
v_k_x27_945_ = lean_array_fget_borrowed(v_keys_940_, v_i_941_);
v___x_946_ = l_Lean_instBEqExtraModUse_beq(v_k_942_, v_k_x27_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = lean_unsigned_to_nat(1u);
v___x_948_ = lean_nat_add(v_i_941_, v___x_947_);
lean_dec(v_i_941_);
v_i_941_ = v___x_948_;
goto _start;
}
else
{
lean_dec(v_i_941_);
return v___x_944_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___redArg___boxed(lean_object* v_keys_950_, lean_object* v_i_951_, lean_object* v_k_952_){
_start:
{
uint8_t v_res_953_; lean_object* v_r_954_; 
v_res_953_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___redArg(v_keys_950_, v_i_951_, v_k_952_);
lean_dec_ref(v_k_952_);
lean_dec_ref(v_keys_950_);
v_r_954_ = lean_box(v_res_953_);
return v_r_954_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___redArg(lean_object* v_x_955_, size_t v_x_956_, lean_object* v_x_957_){
_start:
{
if (lean_obj_tag(v_x_955_) == 0)
{
lean_object* v_es_958_; lean_object* v___x_959_; size_t v___x_960_; size_t v___x_961_; lean_object* v_j_962_; lean_object* v___x_963_; 
v_es_958_ = lean_ctor_get(v_x_955_, 0);
v___x_959_ = lean_box(2);
v___x_960_ = ((size_t)31ULL);
v___x_961_ = lean_usize_land(v_x_956_, v___x_960_);
v_j_962_ = lean_usize_to_nat(v___x_961_);
v___x_963_ = lean_array_get_borrowed(v___x_959_, v_es_958_, v_j_962_);
lean_dec(v_j_962_);
switch(lean_obj_tag(v___x_963_))
{
case 0:
{
lean_object* v_key_964_; uint8_t v___x_965_; 
v_key_964_ = lean_ctor_get(v___x_963_, 0);
v___x_965_ = l_Lean_instBEqExtraModUse_beq(v_x_957_, v_key_964_);
return v___x_965_;
}
case 1:
{
lean_object* v_node_966_; size_t v___x_967_; size_t v___x_968_; 
v_node_966_ = lean_ctor_get(v___x_963_, 0);
v___x_967_ = ((size_t)5ULL);
v___x_968_ = lean_usize_shift_right(v_x_956_, v___x_967_);
v_x_955_ = v_node_966_;
v_x_956_ = v___x_968_;
goto _start;
}
default: 
{
uint8_t v___x_970_; 
v___x_970_ = 0;
return v___x_970_;
}
}
}
else
{
lean_object* v_ks_971_; lean_object* v___x_972_; uint8_t v___x_973_; 
v_ks_971_ = lean_ctor_get(v_x_955_, 0);
v___x_972_ = lean_unsigned_to_nat(0u);
v___x_973_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___redArg(v_ks_971_, v___x_972_, v_x_957_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___redArg___boxed(lean_object* v_x_974_, lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
size_t v_x_9443__boxed_977_; uint8_t v_res_978_; lean_object* v_r_979_; 
v_x_9443__boxed_977_ = lean_unbox_usize(v_x_975_);
lean_dec(v_x_975_);
v_res_978_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___redArg(v_x_974_, v_x_9443__boxed_977_, v_x_976_);
lean_dec_ref(v_x_976_);
lean_dec_ref(v_x_974_);
v_r_979_ = lean_box(v_res_978_);
return v_r_979_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(lean_object* v_x_980_, lean_object* v_x_981_){
_start:
{
uint64_t v___x_982_; size_t v___x_983_; uint8_t v___x_984_; 
v___x_982_ = l_Lean_instHashableExtraModUse_hash(v_x_981_);
v___x_983_ = lean_uint64_to_usize(v___x_982_);
v___x_984_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___redArg(v_x_980_, v___x_983_, v_x_981_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_x_985_, lean_object* v_x_986_){
_start:
{
uint8_t v_res_987_; lean_object* v_r_988_; 
v_res_987_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(v_x_985_, v_x_986_);
lean_dec_ref(v_x_986_);
lean_dec_ref(v_x_985_);
v_r_988_ = lean_box(v_res_987_);
return v_r_988_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__0(void){
_start:
{
lean_object* v___x_989_; double v___x_990_; 
v___x_989_ = lean_unsigned_to_nat(0u);
v___x_990_ = lean_float_of_nat(v___x_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8(lean_object* v_cls_994_, lean_object* v_msg_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
lean_object* v_ref_999_; lean_object* v___x_1000_; lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1046_; 
v_ref_999_ = lean_ctor_get(v___y_996_, 2);
v___x_1000_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0(v_msg_995_, v___y_996_, v___y_997_);
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1003_ = v___x_1000_;
v_isShared_1004_ = v_isSharedCheck_1046_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_1000_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1046_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1005_; lean_object* v_traceState_1006_; lean_object* v_env_1007_; lean_object* v_nextMacroScope_1008_; lean_object* v_ngen_1009_; lean_object* v_auxDeclNGen_1010_; lean_object* v_cache_1011_; lean_object* v_recordedDeps_1012_; lean_object* v_messages_1013_; lean_object* v_infoState_1014_; lean_object* v_snapshotTasks_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1045_; 
v___x_1005_ = lean_st_ref_take(v___y_997_);
v_traceState_1006_ = lean_ctor_get(v___x_1005_, 4);
v_env_1007_ = lean_ctor_get(v___x_1005_, 0);
v_nextMacroScope_1008_ = lean_ctor_get(v___x_1005_, 1);
v_ngen_1009_ = lean_ctor_get(v___x_1005_, 2);
v_auxDeclNGen_1010_ = lean_ctor_get(v___x_1005_, 3);
v_cache_1011_ = lean_ctor_get(v___x_1005_, 5);
v_recordedDeps_1012_ = lean_ctor_get(v___x_1005_, 6);
v_messages_1013_ = lean_ctor_get(v___x_1005_, 7);
v_infoState_1014_ = lean_ctor_get(v___x_1005_, 8);
v_snapshotTasks_1015_ = lean_ctor_get(v___x_1005_, 9);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1017_ = v___x_1005_;
v_isShared_1018_ = v_isSharedCheck_1045_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_snapshotTasks_1015_);
lean_inc(v_infoState_1014_);
lean_inc(v_messages_1013_);
lean_inc(v_recordedDeps_1012_);
lean_inc(v_cache_1011_);
lean_inc(v_traceState_1006_);
lean_inc(v_auxDeclNGen_1010_);
lean_inc(v_ngen_1009_);
lean_inc(v_nextMacroScope_1008_);
lean_inc(v_env_1007_);
lean_dec(v___x_1005_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1045_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
uint64_t v_tid_1019_; lean_object* v_traces_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1044_; 
v_tid_1019_ = lean_ctor_get_uint64(v_traceState_1006_, sizeof(void*)*1);
v_traces_1020_ = lean_ctor_get(v_traceState_1006_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_traceState_1006_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1022_ = v_traceState_1006_;
v_isShared_1023_ = v_isSharedCheck_1044_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_traces_1020_);
lean_dec(v_traceState_1006_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1044_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; double v___x_1026_; uint8_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1024_ = lean_box(0);
v___x_1025_ = lean_box(0);
v___x_1026_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__0);
v___x_1027_ = 0;
v___x_1028_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__1));
v___x_1029_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1029_, 0, v_cls_994_);
lean_ctor_set(v___x_1029_, 1, v___x_1025_);
lean_ctor_set(v___x_1029_, 2, v___x_1028_);
lean_ctor_set_float(v___x_1029_, sizeof(void*)*3, v___x_1026_);
lean_ctor_set_float(v___x_1029_, sizeof(void*)*3 + 8, v___x_1026_);
lean_ctor_set_uint8(v___x_1029_, sizeof(void*)*3 + 16, v___x_1027_);
v___x_1030_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__2));
v___x_1031_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1029_);
lean_ctor_set(v___x_1031_, 1, v_a_1001_);
lean_ctor_set(v___x_1031_, 2, v___x_1030_);
lean_inc(v_ref_999_);
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v_ref_999_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = l_Lean_PersistentArray_push___redArg(v_traces_1020_, v___x_1032_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1033_);
v___x_1035_ = v___x_1022_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1033_);
lean_ctor_set_uint64(v_reuseFailAlloc_1043_, sizeof(void*)*1, v_tid_1019_);
v___x_1035_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
lean_object* v___x_1037_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 4, v___x_1035_);
v___x_1037_ = v___x_1017_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_env_1007_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_nextMacroScope_1008_);
lean_ctor_set(v_reuseFailAlloc_1042_, 2, v_ngen_1009_);
lean_ctor_set(v_reuseFailAlloc_1042_, 3, v_auxDeclNGen_1010_);
lean_ctor_set(v_reuseFailAlloc_1042_, 4, v___x_1035_);
lean_ctor_set(v_reuseFailAlloc_1042_, 5, v_cache_1011_);
lean_ctor_set(v_reuseFailAlloc_1042_, 6, v_recordedDeps_1012_);
lean_ctor_set(v_reuseFailAlloc_1042_, 7, v_messages_1013_);
lean_ctor_set(v_reuseFailAlloc_1042_, 8, v_infoState_1014_);
lean_ctor_set(v_reuseFailAlloc_1042_, 9, v_snapshotTasks_1015_);
v___x_1037_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1038_ = lean_st_ref_put(v___y_997_, v___x_1037_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 0, v___x_1024_);
v___x_1040_ = v___x_1003_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_1024_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___boxed(lean_object* v_cls_1047_, lean_object* v_msg_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8(v_cls_1047_, v_msg_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
return v_res_1052_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1053_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__4(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__3));
v___x_1059_ = l_Lean_stringToMessageData(v___x_1058_);
return v___x_1059_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__6(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__5));
v___x_1062_ = l_Lean_stringToMessageData(v___x_1061_);
return v___x_1062_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__7(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__1));
v___x_1064_ = l_Lean_stringToMessageData(v___x_1063_);
return v___x_1064_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__10(void){
_start:
{
lean_object* v_cls_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v_cls_1068_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__2));
v___x_1069_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__9));
v___x_1070_ = l_Lean_Name_append(v___x_1069_, v_cls_1068_);
return v___x_1070_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__12(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__11));
v___x_1073_ = l_Lean_stringToMessageData(v___x_1072_);
return v___x_1073_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__14(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13));
v___x_1076_ = l_Lean_stringToMessageData(v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5(lean_object* v_mod_1081_, uint8_t v_isMeta_1082_, lean_object* v_hint_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___y_1090_; lean_object* v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v___y_1096_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v_env_1105_; uint8_t v_isExporting_1106_; lean_object* v_entry_1107_; lean_object* v___y_1109_; lean_object* v___x_1132_; lean_object* v_env_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; 
v___x_1103_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__0);
v___x_1104_ = lean_st_ref_get(v___y_1085_);
v_env_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc_ref(v_env_1105_);
lean_dec(v___x_1104_);
v_isExporting_1106_ = lean_ctor_get_uint8(v_env_1105_, sizeof(void*)*13);
lean_dec_ref(v_env_1105_);
lean_inc(v_mod_1081_);
v_entry_1107_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1107_, 0, v_mod_1081_);
lean_ctor_set_uint8(v_entry_1107_, sizeof(void*)*1, v_isExporting_1106_);
lean_ctor_set_uint8(v_entry_1107_, sizeof(void*)*1 + 1, v_isMeta_1082_);
v___x_1132_ = lean_st_ref_get(v___y_1085_);
v_env_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc_ref(v_env_1133_);
lean_dec(v___x_1132_);
v___x_1134_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1135_ = lean_box(1);
v___x_1136_ = lean_box(0);
v___x_1137_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1103_, v___x_1134_, v_env_1133_, v___x_1135_, v___x_1136_);
v___x_1138_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(v___x_1137_, v_entry_1107_);
lean_dec(v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v_toCold_1139_; lean_object* v_options_1140_; uint8_t v_hasTrace_1141_; 
v_toCold_1139_ = lean_ctor_get(v___y_1084_, 0);
v_options_1140_ = lean_ctor_get(v_toCold_1139_, 2);
v_hasTrace_1141_ = lean_ctor_get_uint8(v_options_1140_, sizeof(void*)*1);
if (v_hasTrace_1141_ == 0)
{
lean_dec(v_hint_1083_);
lean_dec(v_mod_1081_);
v___y_1109_ = v___y_1085_;
goto v___jp_1108_;
}
else
{
lean_object* v_inheritedTraceOptions_1142_; lean_object* v_cls_1143_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___x_1163_; uint8_t v___x_1164_; 
v_inheritedTraceOptions_1142_ = lean_ctor_get(v_toCold_1139_, 11);
v_cls_1143_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__2));
v___x_1163_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__10);
v___x_1164_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1142_, v_options_1140_, v___x_1163_);
if (v___x_1164_ == 0)
{
lean_dec(v_hint_1083_);
lean_dec(v_mod_1081_);
v___y_1109_ = v___y_1085_;
goto v___jp_1108_;
}
else
{
lean_object* v___x_1165_; lean_object* v___y_1167_; 
v___x_1165_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__12);
if (v_isExporting_1106_ == 0)
{
lean_object* v___x_1174_; 
v___x_1174_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__17));
v___y_1167_ = v___x_1174_;
goto v___jp_1166_;
}
else
{
lean_object* v___x_1175_; 
v___x_1175_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__18));
v___y_1167_ = v___x_1175_;
goto v___jp_1166_;
}
v___jp_1166_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_inc_ref(v___y_1167_);
v___x_1168_ = l_Lean_stringToMessageData(v___y_1167_);
v___x_1169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1165_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
v___x_1170_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__14);
v___x_1171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1169_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
if (v_isMeta_1082_ == 0)
{
lean_object* v___x_1172_; 
v___x_1172_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__15));
v___y_1150_ = v___x_1171_;
v___y_1151_ = v___x_1172_;
goto v___jp_1149_;
}
else
{
lean_object* v___x_1173_; 
v___x_1173_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__16));
v___y_1150_ = v___x_1171_;
v___y_1151_ = v___x_1173_;
goto v___jp_1149_;
}
}
}
v___jp_1144_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___y_1145_);
lean_ctor_set(v___x_1147_, 1, v___y_1146_);
v___x_1148_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8(v_cls_1143_, v___x_1147_, v___y_1084_, v___y_1085_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_dec_ref_known(v___x_1148_, 1);
v___y_1109_ = v___y_1085_;
goto v___jp_1108_;
}
else
{
lean_dec_ref_known(v_entry_1107_, 1);
return v___x_1148_;
}
}
v___jp_1149_:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; 
lean_inc_ref(v___y_1151_);
v___x_1152_ = l_Lean_stringToMessageData(v___y_1151_);
v___x_1153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___y_1150_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__4);
v___x_1155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1153_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = l_Lean_MessageData_ofName(v_mod_1081_);
v___x_1157_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = l_Lean_Name_isAnonymous(v_hint_1083_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__6);
v___x_1160_ = l_Lean_MessageData_ofName(v_hint_1083_);
v___x_1161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1159_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
v___y_1145_ = v___x_1157_;
v___y_1146_ = v___x_1161_;
goto v___jp_1144_;
}
else
{
lean_object* v___x_1162_; 
lean_dec(v_hint_1083_);
v___x_1162_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__7);
v___y_1145_ = v___x_1157_;
v___y_1146_ = v___x_1162_;
goto v___jp_1144_;
}
}
}
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
lean_dec_ref_known(v_entry_1107_, 1);
lean_dec(v_hint_1083_);
lean_dec(v_mod_1081_);
v___x_1176_ = lean_box(0);
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
return v___x_1177_;
}
v___jp_1087_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1099_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg___closed__2);
v___x_1100_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1100_, 0, v___y_1098_);
lean_ctor_set(v___x_1100_, 1, v___y_1091_);
lean_ctor_set(v___x_1100_, 2, v___y_1097_);
lean_ctor_set(v___x_1100_, 3, v___y_1093_);
lean_ctor_set(v___x_1100_, 4, v___y_1092_);
lean_ctor_set(v___x_1100_, 5, v___x_1099_);
lean_ctor_set(v___x_1100_, 6, v___y_1096_);
lean_ctor_set(v___x_1100_, 7, v___y_1095_);
lean_ctor_set(v___x_1100_, 8, v___y_1089_);
lean_ctor_set(v___x_1100_, 9, v___y_1090_);
v___x_1101_ = lean_st_ref_put(v___y_1094_, v___x_1100_);
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___y_1088_);
return v___x_1102_;
}
v___jp_1108_:
{
lean_object* v___x_1110_; lean_object* v_env_1111_; lean_object* v_nextMacroScope_1112_; lean_object* v_ngen_1113_; lean_object* v_auxDeclNGen_1114_; lean_object* v_traceState_1115_; lean_object* v_recordedDeps_1116_; lean_object* v_messages_1117_; lean_object* v_infoState_1118_; lean_object* v_snapshotTasks_1119_; lean_object* v___x_1120_; lean_object* v_toEnvExtension_1121_; lean_object* v_addEntryFn_1122_; lean_object* v_asyncMode_1123_; uint8_t v_logWrites_1124_; lean_object* v___x_1125_; lean_object* v___f_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v___x_1110_ = lean_st_ref_take(v___y_1109_);
v_env_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc_ref(v_env_1111_);
v_nextMacroScope_1112_ = lean_ctor_get(v___x_1110_, 1);
lean_inc(v_nextMacroScope_1112_);
v_ngen_1113_ = lean_ctor_get(v___x_1110_, 2);
lean_inc_ref(v_ngen_1113_);
v_auxDeclNGen_1114_ = lean_ctor_get(v___x_1110_, 3);
lean_inc_ref(v_auxDeclNGen_1114_);
v_traceState_1115_ = lean_ctor_get(v___x_1110_, 4);
lean_inc_ref(v_traceState_1115_);
v_recordedDeps_1116_ = lean_ctor_get(v___x_1110_, 6);
lean_inc_ref(v_recordedDeps_1116_);
v_messages_1117_ = lean_ctor_get(v___x_1110_, 7);
lean_inc_ref(v_messages_1117_);
v_infoState_1118_ = lean_ctor_get(v___x_1110_, 8);
lean_inc_ref(v_infoState_1118_);
v_snapshotTasks_1119_ = lean_ctor_get(v___x_1110_, 9);
lean_inc_ref(v_snapshotTasks_1119_);
lean_dec(v___x_1110_);
v___x_1120_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_1121_ = lean_ctor_get(v___x_1120_, 0);
v_addEntryFn_1122_ = lean_ctor_get(v___x_1120_, 3);
v_asyncMode_1123_ = lean_ctor_get(v_toEnvExtension_1121_, 2);
v_logWrites_1124_ = lean_ctor_get_uint8(v_toEnvExtension_1121_, sizeof(void*)*6);
v___x_1125_ = lean_box(0);
lean_inc(v_addEntryFn_1122_);
v___f_1126_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___lam__0), 3, 2);
lean_closure_set(v___f_1126_, 0, v_addEntryFn_1122_);
lean_closure_set(v___f_1126_, 1, v_entry_1107_);
v___x_1127_ = lean_box(0);
v___x_1128_ = 1;
if (v_logWrites_1124_ == 0)
{
lean_object* v___x_1129_; 
lean_inc_ref(v_toEnvExtension_1121_);
v___x_1129_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1121_, v_env_1111_, v___f_1126_, v_asyncMode_1123_, v___x_1127_, v___x_1128_);
v___y_1088_ = v___x_1125_;
v___y_1089_ = v_infoState_1118_;
v___y_1090_ = v_snapshotTasks_1119_;
v___y_1091_ = v_nextMacroScope_1112_;
v___y_1092_ = v_traceState_1115_;
v___y_1093_ = v_auxDeclNGen_1114_;
v___y_1094_ = v___y_1109_;
v___y_1095_ = v_messages_1117_;
v___y_1096_ = v_recordedDeps_1116_;
v___y_1097_ = v_ngen_1113_;
v___y_1098_ = v___x_1129_;
goto v___jp_1087_;
}
else
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_inc_ref_n(v_toEnvExtension_1121_, 2);
v___x_1130_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1121_, v_env_1111_);
lean_dec_ref(v_env_1111_);
v___x_1131_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1121_, v___x_1130_, v___f_1126_, v_asyncMode_1123_, v___x_1127_, v___x_1128_);
v___y_1088_ = v___x_1125_;
v___y_1089_ = v_infoState_1118_;
v___y_1090_ = v_snapshotTasks_1119_;
v___y_1091_ = v_nextMacroScope_1112_;
v___y_1092_ = v_traceState_1115_;
v___y_1093_ = v_auxDeclNGen_1114_;
v___y_1094_ = v___y_1109_;
v___y_1095_ = v_messages_1117_;
v___y_1096_ = v_recordedDeps_1116_;
v___y_1097_ = v_ngen_1113_;
v___y_1098_ = v___x_1131_;
goto v___jp_1087_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object* v_mod_1178_, lean_object* v_isMeta_1179_, lean_object* v_hint_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
uint8_t v_isMeta_boxed_1184_; lean_object* v_res_1185_; 
v_isMeta_boxed_1184_ = lean_unbox(v_isMeta_1179_);
v_res_1185_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5(v_mod_1178_, v_isMeta_boxed_1184_, v_hint_1180_, v___y_1181_, v___y_1182_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__6(lean_object* v___x_1186_, lean_object* v_declName_1187_, lean_object* v_as_1188_, size_t v_sz_1189_, size_t v_i_1190_, lean_object* v_b_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
uint8_t v___x_1195_; 
v___x_1195_ = lean_usize_dec_lt(v_i_1190_, v_sz_1189_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; 
lean_dec(v_declName_1187_);
v___x_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1196_, 0, v_b_1191_);
return v___x_1196_;
}
else
{
lean_object* v___x_1197_; lean_object* v_modules_1198_; lean_object* v___x_1199_; lean_object* v_a_1200_; lean_object* v___x_1201_; lean_object* v_toImport_1202_; lean_object* v_module_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; lean_object* v___x_1206_; 
v___x_1197_ = l_Lean_Environment_header(v___x_1186_);
v_modules_1198_ = lean_ctor_get(v___x_1197_, 3);
lean_inc_ref(v_modules_1198_);
lean_dec_ref(v___x_1197_);
v___x_1199_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1200_ = lean_array_uget_borrowed(v_as_1188_, v_i_1190_);
v___x_1201_ = lean_array_get(v___x_1199_, v_modules_1198_, v_a_1200_);
lean_dec_ref(v_modules_1198_);
v_toImport_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc_ref(v_toImport_1202_);
lean_dec(v___x_1201_);
v_module_1203_ = lean_ctor_get(v_toImport_1202_, 0);
lean_inc(v_module_1203_);
lean_dec_ref(v_toImport_1202_);
v___x_1204_ = lean_box(0);
v___x_1205_ = 0;
lean_inc(v_declName_1187_);
v___x_1206_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5(v_module_1203_, v___x_1205_, v_declName_1187_, v___y_1192_, v___y_1193_);
if (lean_obj_tag(v___x_1206_) == 0)
{
size_t v___x_1207_; size_t v___x_1208_; 
lean_dec_ref_known(v___x_1206_, 1);
v___x_1207_ = ((size_t)1ULL);
v___x_1208_ = lean_usize_add(v_i_1190_, v___x_1207_);
v_i_1190_ = v___x_1208_;
v_b_1191_ = v___x_1204_;
goto _start;
}
else
{
lean_dec(v_declName_1187_);
return v___x_1206_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__6___boxed(lean_object* v___x_1210_, lean_object* v_declName_1211_, lean_object* v_as_1212_, lean_object* v_sz_1213_, lean_object* v_i_1214_, lean_object* v_b_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
size_t v_sz_boxed_1219_; size_t v_i_boxed_1220_; lean_object* v_res_1221_; 
v_sz_boxed_1219_ = lean_unbox_usize(v_sz_1213_);
lean_dec(v_sz_1213_);
v_i_boxed_1220_ = lean_unbox_usize(v_i_1214_);
lean_dec(v_i_1214_);
v_res_1221_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__6(v___x_1210_, v_declName_1211_, v_as_1212_, v_sz_boxed_1219_, v_i_boxed_1220_, v_b_1215_, v___y_1216_, v___y_1217_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec_ref(v_as_1212_);
lean_dec_ref(v___x_1210_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___redArg(lean_object* v_a_1222_, lean_object* v_x_1223_){
_start:
{
if (lean_obj_tag(v_x_1223_) == 0)
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_box(0);
return v___x_1224_;
}
else
{
lean_object* v_key_1225_; lean_object* v_value_1226_; lean_object* v_tail_1227_; uint8_t v___x_1228_; 
v_key_1225_ = lean_ctor_get(v_x_1223_, 0);
v_value_1226_ = lean_ctor_get(v_x_1223_, 1);
v_tail_1227_ = lean_ctor_get(v_x_1223_, 2);
v___x_1228_ = lean_name_eq(v_key_1225_, v_a_1222_);
if (v___x_1228_ == 0)
{
v_x_1223_ = v_tail_1227_;
goto _start;
}
else
{
lean_object* v___x_1230_; 
lean_inc(v_value_1226_);
v___x_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1230_, 0, v_value_1226_);
return v___x_1230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___redArg___boxed(lean_object* v_a_1231_, lean_object* v_x_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___redArg(v_a_1231_, v_x_1232_);
lean_dec(v_x_1232_);
lean_dec(v_a_1231_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___redArg(lean_object* v_m_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_buckets_1236_; lean_object* v___x_1237_; uint64_t v___y_1239_; 
v_buckets_1236_ = lean_ctor_get(v_m_1234_, 1);
v___x_1237_ = lean_array_get_size(v_buckets_1236_);
if (lean_obj_tag(v_a_1235_) == 0)
{
uint64_t v___x_1253_; 
v___x_1253_ = 1723ULL;
v___y_1239_ = v___x_1253_;
goto v___jp_1238_;
}
else
{
uint64_t v_hash_1254_; 
v_hash_1254_ = lean_ctor_get_uint64(v_a_1235_, sizeof(void*)*2);
v___y_1239_ = v_hash_1254_;
goto v___jp_1238_;
}
v___jp_1238_:
{
uint64_t v___x_1240_; uint64_t v___x_1241_; uint64_t v_fold_1242_; uint64_t v___x_1243_; uint64_t v___x_1244_; uint64_t v___x_1245_; size_t v___x_1246_; size_t v___x_1247_; size_t v___x_1248_; size_t v___x_1249_; size_t v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1240_ = 32ULL;
v___x_1241_ = lean_uint64_shift_right(v___y_1239_, v___x_1240_);
v_fold_1242_ = lean_uint64_xor(v___y_1239_, v___x_1241_);
v___x_1243_ = 16ULL;
v___x_1244_ = lean_uint64_shift_right(v_fold_1242_, v___x_1243_);
v___x_1245_ = lean_uint64_xor(v_fold_1242_, v___x_1244_);
v___x_1246_ = lean_uint64_to_usize(v___x_1245_);
v___x_1247_ = lean_usize_of_nat(v___x_1237_);
v___x_1248_ = ((size_t)1ULL);
v___x_1249_ = lean_usize_sub(v___x_1247_, v___x_1248_);
v___x_1250_ = lean_usize_land(v___x_1246_, v___x_1249_);
v___x_1251_ = lean_array_uget_borrowed(v_buckets_1236_, v___x_1250_);
v___x_1252_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___redArg(v_a_1235_, v___x_1251_);
return v___x_1252_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___redArg___boxed(lean_object* v_m_1255_, lean_object* v_a_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___redArg(v_m_1255_, v_a_1256_);
lean_dec(v_a_1256_);
lean_dec_ref(v_m_1255_);
return v_res_1257_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__0(void){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3(lean_object* v_declName_1261_, uint8_t v_isMeta_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v_env_1271_; lean_object* v___y_1273_; lean_object* v___x_1286_; 
v___x_1266_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__0);
v___x_1267_ = lean_st_ref_get(v___y_1264_);
v_env_1271_ = lean_ctor_get(v___x_1267_, 0);
lean_inc_ref(v_env_1271_);
lean_dec(v___x_1267_);
v___x_1286_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1271_, v_declName_1261_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_dec_ref(v_env_1271_);
lean_dec(v_declName_1261_);
goto v___jp_1268_;
}
else
{
lean_object* v_val_1287_; lean_object* v___x_1288_; lean_object* v_modules_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v_val_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_val_1287_);
lean_dec_ref_known(v___x_1286_, 1);
v___x_1288_ = l_Lean_Environment_header(v_env_1271_);
v_modules_1289_ = lean_ctor_get(v___x_1288_, 3);
lean_inc_ref(v_modules_1289_);
lean_dec_ref(v___x_1288_);
v___x_1290_ = lean_array_get_size(v_modules_1289_);
v___x_1291_ = lean_nat_dec_lt(v_val_1287_, v___x_1290_);
if (v___x_1291_ == 0)
{
lean_dec_ref(v_modules_1289_);
lean_dec(v_val_1287_);
lean_dec_ref(v_env_1271_);
lean_dec(v_declName_1261_);
goto v___jp_1268_;
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; uint8_t v___y_1295_; 
v___x_1292_ = lean_array_fget(v_modules_1289_, v_val_1287_);
lean_dec(v_val_1287_);
lean_dec_ref(v_modules_1289_);
v___x_1293_ = lean_st_ref_get(v___y_1264_);
if (v_isMeta_1262_ == 0)
{
lean_dec(v___x_1293_);
v___y_1295_ = v_isMeta_1262_;
goto v___jp_1294_;
}
else
{
lean_object* v_env_1306_; uint8_t v___x_1307_; 
v_env_1306_ = lean_ctor_get(v___x_1293_, 0);
lean_inc_ref(v_env_1306_);
lean_dec(v___x_1293_);
lean_inc(v_declName_1261_);
v___x_1307_ = l_Lean_isMarkedMeta(v_env_1306_, v_declName_1261_);
if (v___x_1307_ == 0)
{
v___y_1295_ = v_isMeta_1262_;
goto v___jp_1294_;
}
else
{
uint8_t v___x_1308_; 
v___x_1308_ = 0;
v___y_1295_ = v___x_1308_;
goto v___jp_1294_;
}
}
v___jp_1294_:
{
lean_object* v_toImport_1296_; lean_object* v_module_1297_; lean_object* v___x_1298_; 
v_toImport_1296_ = lean_ctor_get(v___x_1292_, 0);
lean_inc_ref(v_toImport_1296_);
lean_dec(v___x_1292_);
v_module_1297_ = lean_ctor_get(v_toImport_1296_, 0);
lean_inc(v_module_1297_);
lean_dec_ref(v_toImport_1296_);
lean_inc(v_declName_1261_);
v___x_1298_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5(v_module_1297_, v___y_1295_, v_declName_1261_, v___y_1263_, v___y_1264_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_dec_ref_known(v___x_1298_, 1);
v___x_1299_ = l_Lean_indirectModUseExt;
v___x_1300_ = lean_box(1);
v___x_1301_ = lean_box(0);
lean_inc_ref(v_env_1271_);
v___x_1302_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1266_, v___x_1299_, v_env_1271_, v___x_1300_, v___x_1301_);
v___x_1303_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___redArg(v___x_1302_, v_declName_1261_);
lean_dec(v___x_1302_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v___x_1304_; 
v___x_1304_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___closed__1));
v___y_1273_ = v___x_1304_;
goto v___jp_1272_;
}
else
{
lean_object* v_val_1305_; 
v_val_1305_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_val_1305_);
lean_dec_ref_known(v___x_1303_, 1);
v___y_1273_ = v_val_1305_;
goto v___jp_1272_;
}
}
else
{
lean_dec_ref(v_env_1271_);
lean_dec(v_declName_1261_);
return v___x_1298_;
}
}
}
}
v___jp_1268_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_box(0);
v___x_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
return v___x_1270_;
}
v___jp_1272_:
{
lean_object* v___x_1274_; size_t v_sz_1275_; size_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1274_ = lean_box(0);
v_sz_1275_ = lean_array_size(v___y_1273_);
v___x_1276_ = ((size_t)0ULL);
v___x_1277_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__6(v_env_1271_, v_declName_1261_, v___y_1273_, v_sz_1275_, v___x_1276_, v___x_1274_, v___y_1263_, v___y_1264_);
lean_dec_ref(v___y_1273_);
lean_dec_ref(v_env_1271_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1284_; 
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1284_ == 0)
{
lean_object* v_unused_1285_; 
v_unused_1285_ = lean_ctor_get(v___x_1277_, 0);
lean_dec(v_unused_1285_);
v___x_1279_ = v___x_1277_;
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
else
{
lean_dec(v___x_1277_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 0, v___x_1274_);
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1274_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
else
{
return v___x_1277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3___boxed(lean_object* v_declName_1309_, lean_object* v_isMeta_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
uint8_t v_isMeta_boxed_1314_; lean_object* v_res_1315_; 
v_isMeta_boxed_1314_ = lean_unbox(v_isMeta_1310_);
v_res_1315_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3(v_declName_1309_, v_isMeta_boxed_1314_, v___y_1311_, v___y_1312_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
return v_res_1315_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_1320_ = l_Lean_stringToMessageData(v___x_1319_);
return v___x_1320_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__4_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_1323_ = l_Lean_stringToMessageData(v___x_1322_);
return v___x_1323_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__6_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_1326_ = l_Lean_stringToMessageData(v___x_1325_);
return v___x_1326_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__8_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_1329_ = l_Lean_stringToMessageData(v___x_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(lean_object* v___x_1330_, lean_object* v___x_1331_, lean_object* v___x_1332_, uint8_t v_builtin_1333_, lean_object* v___x_1334_, lean_object* v_name_1335_, lean_object* v_declName_1336_, lean_object* v_stx_1337_, uint8_t v_kind_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___y_1359_; lean_object* v___y_1406_; lean_object* v___y_1407_; uint8_t v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1483_; lean_object* v___y_1484_; uint8_t v___x_1492_; uint8_t v___x_1493_; 
v___x_1492_ = 0;
v___x_1493_ = l_Lean_instBEqAttributeKind_beq(v_kind_1338_, v___x_1492_);
if (v___x_1493_ == 0)
{
lean_object* v___x_1494_; 
lean_dec(v_stx_1337_);
lean_dec(v_declName_1336_);
lean_dec(v___x_1334_);
lean_dec_ref(v___x_1332_);
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1330_);
v___x_1494_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg(v_name_1335_, v_kind_1338_, v___y_1339_, v___y_1340_);
return v___x_1494_;
}
else
{
goto v___jp_1490_;
}
v___jp_1342_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1348_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_1349_ = l_Lean_Name_mkStr4(v___x_1330_, v___x_1331_, v___x_1332_, v___x_1348_);
v___x_1350_ = l_Lean_mkConst(v___x_1349_, v___y_1343_);
v___x_1351_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v___y_1344_);
v___x_1352_ = l_Lean_mkAppB(v___x_1350_, v___x_1351_, v___y_1347_);
v___x_1353_ = l_Lean_declareBuiltin(v_declName_1336_, v___x_1352_, v___y_1346_, v___y_1345_);
return v___x_1353_;
}
v___jp_1354_:
{
if (v_builtin_1333_ == 0)
{
lean_object* v___x_1360_; lean_object* v_env_1361_; lean_object* v_ref_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
lean_dec_ref(v___y_1355_);
lean_dec_ref(v___x_1332_);
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1330_);
v___x_1360_ = lean_st_ref_get(v___y_1359_);
v_env_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc_ref(v_env_1361_);
lean_dec(v___x_1360_);
v_ref_1362_ = lean_ctor_get(v___y_1358_, 2);
v___x_1363_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1358_);
v___x_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1364_, 0, v_env_1361_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
lean_inc(v_declName_1336_);
v___x_1365_ = l_Lean_Linter_MissingDocs_mkHandlerUnsafe(v_declName_1336_, v___x_1364_);
lean_dec_ref_known(v___x_1364_, 2);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v_a_1366_; lean_object* v___x_1367_; lean_object* v_toEnvExtension_1368_; lean_object* v_addEntryFn_1369_; lean_object* v_asyncMode_1370_; uint8_t v_logWrites_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___f_1374_; uint8_t v___x_1375_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1365_, 1);
v___x_1367_ = l_Lean_Linter_MissingDocs_missingDocsExt;
v_toEnvExtension_1368_ = lean_ctor_get(v___x_1367_, 0);
v_addEntryFn_1369_ = lean_ctor_get(v___x_1367_, 3);
v_asyncMode_1370_ = lean_ctor_get(v_toEnvExtension_1368_, 2);
v_logWrites_1371_ = lean_ctor_get_uint8(v_toEnvExtension_1368_, sizeof(void*)*6);
v___x_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___y_1357_);
lean_ctor_set(v___x_1372_, 1, v_a_1366_);
v___x_1373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1373_, 0, v_declName_1336_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
lean_inc(v_addEntryFn_1369_);
v___f_1374_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_addHandler___lam__0), 3, 2);
lean_closure_set(v___f_1374_, 0, v_addEntryFn_1369_);
lean_closure_set(v___f_1374_, 1, v___x_1373_);
v___x_1375_ = 1;
if (v_logWrites_1371_ == 0)
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
lean_inc_ref(v_toEnvExtension_1368_);
v___x_1376_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1368_, v___y_1356_, v___f_1374_, v_asyncMode_1370_, v___x_1334_, v___x_1375_);
v___x_1377_ = l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg(v___x_1376_, v___y_1359_);
return v___x_1377_;
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_inc_ref_n(v_toEnvExtension_1368_, 2);
v___x_1378_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1368_, v___y_1356_);
lean_dec_ref(v___y_1356_);
v___x_1379_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1368_, v___x_1378_, v___f_1374_, v_asyncMode_1370_, v___x_1334_, v___x_1375_);
v___x_1380_ = l_Lean_setEnv___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__2___redArg(v___x_1379_, v___y_1359_);
return v___x_1380_;
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1392_; 
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v_declName_1336_);
lean_dec(v___x_1334_);
v_a_1381_ = lean_ctor_get(v___x_1365_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1365_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1383_ = v___x_1365_;
v_isShared_1384_ = v_isSharedCheck_1392_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1365_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1392_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1390_; 
v___x_1385_ = lean_io_error_to_string(v_a_1381_);
v___x_1386_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
v___x_1387_ = l_Lean_MessageData_ofFormat(v___x_1386_);
lean_inc(v_ref_1362_);
v___x_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1388_, 0, v_ref_1362_);
lean_ctor_set(v___x_1388_, 1, v___x_1387_);
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 0, v___x_1388_);
v___x_1390_ = v___x_1383_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v___x_1388_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
}
else
{
lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; uint8_t v___x_1398_; 
lean_dec_ref(v___y_1356_);
lean_dec(v___x_1334_);
v___x_1393_ = l_Lean_ConstantInfo_type(v___y_1355_);
lean_dec_ref(v___y_1355_);
v___x_1394_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__5));
lean_inc_ref(v___x_1332_);
lean_inc_ref(v___x_1331_);
lean_inc_ref(v___x_1330_);
v___x_1395_ = l_Lean_Name_mkStr4(v___x_1330_, v___x_1331_, v___x_1332_, v___x_1394_);
v___x_1396_ = lean_box(0);
v___x_1397_ = l_Lean_Expr_const___override(v___x_1395_, v___x_1396_);
v___x_1398_ = lean_expr_eqv(v___x_1393_, v___x_1397_);
lean_dec_ref(v___x_1397_);
lean_dec_ref(v___x_1393_);
if (v___x_1398_ == 0)
{
lean_object* v___x_1399_; 
lean_inc(v_declName_1336_);
v___x_1399_ = l_Lean_mkConst(v_declName_1336_, v___x_1396_);
v___y_1343_ = v___x_1396_;
v___y_1344_ = v___y_1357_;
v___y_1345_ = v___y_1359_;
v___y_1346_ = v___y_1358_;
v___y_1347_ = v___x_1399_;
goto v___jp_1342_;
}
else
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1400_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
lean_inc_ref(v___x_1332_);
lean_inc_ref(v___x_1331_);
lean_inc_ref(v___x_1330_);
v___x_1401_ = l_Lean_Name_mkStr5(v___x_1330_, v___x_1331_, v___x_1332_, v___x_1394_, v___x_1400_);
v___x_1402_ = l_Lean_mkConst(v___x_1401_, v___x_1396_);
lean_inc(v_declName_1336_);
v___x_1403_ = l_Lean_mkConst(v_declName_1336_, v___x_1396_);
v___x_1404_ = l_Lean_Expr_app___override(v___x_1402_, v___x_1403_);
v___y_1343_ = v___x_1396_;
v___y_1344_ = v___y_1357_;
v___y_1345_ = v___y_1359_;
v___y_1346_ = v___y_1358_;
v___y_1347_ = v___x_1404_;
goto v___jp_1342_;
}
}
}
v___jp_1405_:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
v___x_1412_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_);
v___x_1413_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__6));
lean_inc_ref(v___x_1332_);
lean_inc_ref(v___x_1331_);
lean_inc_ref(v___x_1330_);
v___x_1414_ = l_Lean_Name_mkStr4(v___x_1330_, v___x_1331_, v___x_1332_, v___x_1413_);
v___x_1415_ = l_Lean_MessageData_ofConstName(v___x_1414_, v___y_1408_);
v___x_1416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1412_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__5_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_);
v___x_1418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1416_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
v___x_1419_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__5));
v___x_1420_ = l_Lean_Name_mkStr4(v___x_1330_, v___x_1331_, v___x_1332_, v___x_1419_);
v___x_1421_ = l_Lean_MessageData_ofConstName(v___x_1420_, v___y_1408_);
v___x_1422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1418_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__7_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_);
v___x_1424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = l_Lean_MessageData_ofName(v_declName_1336_);
v___x_1426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2___closed__9_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_);
v___x_1428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1426_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = l_Lean_ConstantInfo_type(v___y_1407_);
lean_dec_ref(v___y_1407_);
v___x_1430_ = l_Lean_indentExpr(v___x_1429_);
v___x_1431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1428_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(v___x_1431_, v___y_1406_, v___y_1411_);
return v___x_1432_;
}
v___jp_1433_:
{
lean_object* v___x_1437_; 
lean_inc(v_declName_1336_);
v___x_1437_ = l_Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1(v_declName_1336_, v___y_1435_, v___y_1436_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1439_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = l_Lean_Attribute_Builtin_getIdent(v_stx_1337_, v___y_1435_, v___y_1436_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v___x_1441_ = lean_box(0);
v___x_1442_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_a_1440_, v___x_1441_, v___y_1435_, v___y_1436_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_object* v_a_1443_; uint8_t v___x_1444_; lean_object* v___x_1445_; 
v_a_1443_ = lean_ctor_get(v___x_1442_, 0);
lean_inc_n(v_a_1443_, 2);
lean_dec_ref_known(v___x_1442_, 1);
v___x_1444_ = 0;
v___x_1445_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3(v_a_1443_, v___x_1444_, v___y_1435_, v___y_1436_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v___x_1446_; uint8_t v___x_1447_; 
lean_dec_ref_known(v___x_1445_, 1);
v___x_1446_ = l_Lean_ConstantInfo_levelParams(v_a_1438_);
v___x_1447_ = l_List_isEmpty___redArg(v___x_1446_);
lean_dec(v___x_1446_);
if (v___x_1447_ == 0)
{
lean_dec(v___x_1334_);
v___y_1406_ = v___y_1435_;
v___y_1407_ = v_a_1438_;
v___y_1408_ = v___x_1444_;
v___y_1409_ = v___y_1434_;
v___y_1410_ = v_a_1443_;
v___y_1411_ = v___y_1436_;
goto v___jp_1405_;
}
else
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; uint8_t v___x_1453_; 
v___x_1448_ = l_Lean_ConstantInfo_type(v_a_1438_);
v___x_1449_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__6));
lean_inc_ref(v___x_1332_);
lean_inc_ref(v___x_1331_);
lean_inc_ref(v___x_1330_);
v___x_1450_ = l_Lean_Name_mkStr4(v___x_1330_, v___x_1331_, v___x_1332_, v___x_1449_);
v___x_1451_ = lean_box(0);
v___x_1452_ = l_Lean_Expr_const___override(v___x_1450_, v___x_1451_);
v___x_1453_ = lean_expr_eqv(v___x_1448_, v___x_1452_);
lean_dec_ref(v___x_1452_);
if (v___x_1453_ == 0)
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1454_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__5));
lean_inc_ref(v___x_1332_);
lean_inc_ref(v___x_1331_);
lean_inc_ref(v___x_1330_);
v___x_1455_ = l_Lean_Name_mkStr4(v___x_1330_, v___x_1331_, v___x_1332_, v___x_1454_);
v___x_1456_ = l_Lean_Expr_const___override(v___x_1455_, v___x_1451_);
v___x_1457_ = lean_expr_eqv(v___x_1448_, v___x_1456_);
lean_dec_ref(v___x_1456_);
lean_dec_ref(v___x_1448_);
if (v___x_1457_ == 0)
{
lean_dec(v___x_1334_);
v___y_1406_ = v___y_1435_;
v___y_1407_ = v_a_1438_;
v___y_1408_ = v___x_1444_;
v___y_1409_ = v___y_1434_;
v___y_1410_ = v_a_1443_;
v___y_1411_ = v___y_1436_;
goto v___jp_1405_;
}
else
{
v___y_1355_ = v_a_1438_;
v___y_1356_ = v___y_1434_;
v___y_1357_ = v_a_1443_;
v___y_1358_ = v___y_1435_;
v___y_1359_ = v___y_1436_;
goto v___jp_1354_;
}
}
else
{
lean_dec_ref(v___x_1448_);
v___y_1355_ = v_a_1438_;
v___y_1356_ = v___y_1434_;
v___y_1357_ = v_a_1443_;
v___y_1358_ = v___y_1435_;
v___y_1359_ = v___y_1436_;
goto v___jp_1354_;
}
}
}
else
{
lean_dec(v_a_1443_);
lean_dec(v_a_1438_);
lean_dec_ref(v___y_1434_);
lean_dec(v_declName_1336_);
lean_dec(v___x_1334_);
lean_dec_ref(v___x_1332_);
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1330_);
return v___x_1445_;
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec(v_a_1438_);
lean_dec_ref(v___y_1434_);
lean_dec(v_declName_1336_);
lean_dec(v___x_1334_);
lean_dec_ref(v___x_1332_);
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1330_);
v_a_1458_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1442_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1442_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec(v_a_1438_);
lean_dec_ref(v___y_1434_);
lean_dec(v_declName_1336_);
lean_dec(v___x_1334_);
lean_dec_ref(v___x_1332_);
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1330_);
v_a_1466_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1439_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1439_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec_ref(v___y_1434_);
lean_dec(v_stx_1337_);
lean_dec(v_declName_1336_);
lean_dec(v___x_1334_);
lean_dec_ref(v___x_1332_);
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1330_);
v_a_1474_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1437_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1437_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
v___jp_1482_:
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_st_ref_get(v___y_1484_);
if (v_builtin_1333_ == 0)
{
lean_object* v_env_1486_; lean_object* v___x_1487_; 
v_env_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc_ref(v_env_1486_);
lean_dec(v___x_1485_);
v___x_1487_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1486_, v_declName_1336_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_dec(v_name_1335_);
v___y_1434_ = v_env_1486_;
v___y_1435_ = v___y_1483_;
v___y_1436_ = v___y_1484_;
goto v___jp_1433_;
}
else
{
lean_object* v___x_1488_; 
lean_dec_ref_known(v___x_1487_, 1);
lean_dec_ref(v_env_1486_);
lean_dec(v_stx_1337_);
lean_dec(v___x_1334_);
lean_dec_ref(v___x_1332_);
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1330_);
v___x_1488_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg(v_name_1335_, v_declName_1336_, v___y_1483_, v___y_1484_);
return v___x_1488_;
}
}
else
{
lean_object* v_env_1489_; 
lean_dec(v_name_1335_);
v_env_1489_ = lean_ctor_get(v___x_1485_, 0);
lean_inc_ref(v_env_1489_);
lean_dec(v___x_1485_);
v___y_1434_ = v_env_1489_;
v___y_1435_ = v___y_1483_;
v___y_1436_ = v___y_1484_;
goto v___jp_1433_;
}
}
v___jp_1490_:
{
if (v_builtin_1333_ == 0)
{
lean_object* v___x_1491_; 
lean_inc(v_declName_1336_);
lean_inc(v_name_1335_);
v___x_1491_ = l_Lean_ensureAttrDeclIsMeta(v_name_1335_, v_declName_1336_, v_kind_1338_, v___y_1339_, v___y_1340_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_dec_ref_known(v___x_1491_, 1);
v___y_1483_ = v___y_1339_;
v___y_1484_ = v___y_1340_;
goto v___jp_1482_;
}
else
{
lean_dec(v_stx_1337_);
lean_dec(v_declName_1336_);
lean_dec(v_name_1335_);
lean_dec(v___x_1334_);
lean_dec_ref(v___x_1332_);
lean_dec_ref(v___x_1331_);
lean_dec_ref(v___x_1330_);
return v___x_1491_;
}
}
else
{
v___y_1483_ = v___y_1339_;
v___y_1484_ = v___y_1340_;
goto v___jp_1482_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed(lean_object* v___x_1495_, lean_object* v___x_1496_, lean_object* v___x_1497_, lean_object* v_builtin_1498_, lean_object* v___x_1499_, lean_object* v_name_1500_, lean_object* v_declName_1501_, lean_object* v_stx_1502_, lean_object* v_kind_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
uint8_t v_builtin_boxed_1507_; uint8_t v_kind_boxed_1508_; lean_object* v_res_1509_; 
v_builtin_boxed_1507_ = lean_unbox(v_builtin_1498_);
v_kind_boxed_1508_ = lean_unbox(v_kind_1503_);
v_res_1509_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(v___x_1495_, v___x_1496_, v___x_1497_, v_builtin_boxed_1507_, v___x_1499_, v_name_1500_, v_declName_1501_, v_stx_1502_, v_kind_boxed_1508_, v___y_1504_, v___y_1505_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(uint8_t v_builtin_1568_, lean_object* v_name_1569_){
_start:
{
lean_object* v___f_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___f_1577_; lean_object* v___x_1578_; lean_object* v___y_1580_; 
lean_inc_n(v_name_1569_, 2);
v___f_1571_ = lean_alloc_closure((void*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__0_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_1571_, 0, v_name_1569_);
v___x_1572_ = lean_box(0);
v___x_1573_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_1574_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_1575_ = ((lean_object*)(l_Lean_Linter_MissingDocs_mkHandlerUnsafe___closed__4));
v___x_1576_ = lean_box(v_builtin_1568_);
v___f_1577_ = lean_alloc_closure((void*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__2_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed), 12, 6);
lean_closure_set(v___f_1577_, 0, v___x_1573_);
lean_closure_set(v___f_1577_, 1, v___x_1574_);
lean_closure_set(v___f_1577_, 2, v___x_1575_);
lean_closure_set(v___f_1577_, 3, v___x_1576_);
lean_closure_set(v___f_1577_, 4, v___x_1572_);
lean_closure_set(v___f_1577_, 5, v_name_1569_);
v___x_1578_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__21_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
if (v_builtin_1568_ == 0)
{
lean_object* v___x_1587_; 
v___x_1587_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__1));
v___y_1580_ = v___x_1587_;
goto v___jp_1579_;
}
else
{
lean_object* v___x_1588_; 
v___x_1588_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__23_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___y_1580_ = v___x_1588_;
goto v___jp_1579_;
}
v___jp_1579_:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1581_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1___closed__22_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
lean_inc_ref(v___y_1580_);
v___x_1582_ = lean_string_append(v___y_1580_, v___x_1581_);
v___x_1583_ = 1;
v___x_1584_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1584_, 0, v___x_1578_);
lean_ctor_set(v___x_1584_, 1, v_name_1569_);
lean_ctor_set(v___x_1584_, 2, v___x_1582_);
lean_ctor_set_uint8(v___x_1584_, sizeof(void*)*3, v___x_1583_);
v___x_1585_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set(v___x_1585_, 1, v___f_1577_);
lean_ctor_set(v___x_1585_, 2, v___f_1571_);
v___x_1586_ = l_Lean_registerBuiltinAttribute(v___x_1585_);
return v___x_1586_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed(lean_object* v_builtin_1589_, lean_object* v_name_1590_, lean_object* v___y_1591_){
_start:
{
uint8_t v_builtin_boxed_1592_; lean_object* v_res_1593_; 
v_builtin_boxed_1592_ = lean_unbox(v_builtin_1589_);
v_res_1593_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(v_builtin_boxed_1592_, v_name_1590_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1601_ = 1;
v___x_1602_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_1603_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(v___x_1601_, v___x_1602_);
if (lean_obj_tag(v___x_1603_) == 0)
{
uint8_t v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
lean_dec_ref_known(v___x_1603_, 1);
v___x_1604_ = 0;
v___x_1605_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___closed__3_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_));
v___x_1606_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn___lam__1_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_(v___x_1604_, v___x_1605_);
return v___x_1606_;
}
else
{
return v___x_1603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2____boxed(lean_object* v_a_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_();
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1609_, lean_object* v_msg_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___redArg(v_msg_1610_, v___y_1611_, v___y_1612_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1615_, lean_object* v_msg_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0(v_00_u03b1_1615_, v_msg_1616_, v___y_1617_, v___y_1618_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4(lean_object* v_00_u03b1_1621_, lean_object* v_attrName_1622_, lean_object* v_declName_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___redArg(v_attrName_1622_, v_declName_1623_, v___y_1624_, v___y_1625_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4___boxed(lean_object* v_00_u03b1_1628_, lean_object* v_attrName_1629_, lean_object* v_declName_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__4(v_00_u03b1_1628_, v_attrName_1629_, v_declName_1630_, v___y_1631_, v___y_1632_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5(lean_object* v_00_u03b1_1635_, lean_object* v_name_1636_, uint8_t v_kind_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___redArg(v_name_1636_, v_kind_1637_, v___y_1638_, v___y_1639_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5___boxed(lean_object* v_00_u03b1_1642_, lean_object* v_name_1643_, lean_object* v_kind_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
uint8_t v_kind_boxed_1648_; lean_object* v_res_1649_; 
v_kind_boxed_1648_ = lean_unbox(v_kind_1644_);
v_res_1649_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__5(v_00_u03b1_1642_, v_name_1643_, v_kind_boxed_1648_, v___y_1645_, v___y_1646_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03b1_1650_, lean_object* v_constName_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___redArg(v_constName_1651_, v___y_1652_, v___y_1653_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03b1_1656_, lean_object* v_constName_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2(v_00_u03b1_1656_, v_constName_1657_, v___y_1658_, v___y_1659_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7(lean_object* v_00_u03b2_1662_, lean_object* v_m_1663_, lean_object* v_a_1664_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___redArg(v_m_1663_, v_a_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7___boxed(lean_object* v_00_u03b2_1666_, lean_object* v_m_1667_, lean_object* v_a_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7(v_00_u03b2_1666_, v_m_1667_, v_a_1668_);
lean_dec(v_a_1668_);
lean_dec_ref(v_m_1667_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1670_, lean_object* v_ref_1671_, lean_object* v_constName_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_ref_1671_, v_constName_1672_, v___y_1673_, v___y_1674_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1677_, lean_object* v_ref_1678_, lean_object* v_constName_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4(v_00_u03b1_1677_, v_ref_1678_, v_constName_1679_, v___y_1680_, v___y_1681_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec(v_ref_1678_);
return v_res_1683_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7(lean_object* v_00_u03b2_1684_, lean_object* v_x_1685_, lean_object* v_x_1686_){
_start:
{
uint8_t v___x_1687_; 
v___x_1687_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(v_x_1685_, v_x_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b2_1688_, lean_object* v_x_1689_, lean_object* v_x_1690_){
_start:
{
uint8_t v_res_1691_; lean_object* v_r_1692_; 
v_res_1691_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7(v_00_u03b2_1688_, v_x_1689_, v_x_1690_);
lean_dec_ref(v_x_1690_);
lean_dec_ref(v_x_1689_);
v_r_1692_ = lean_box(v_res_1691_);
return v_r_1692_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11(lean_object* v_00_u03b2_1693_, lean_object* v_a_1694_, lean_object* v_x_1695_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___redArg(v_a_1694_, v_x_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11___boxed(lean_object* v_00_u03b2_1697_, lean_object* v_a_1698_, lean_object* v_x_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__7_spec__11(v_00_u03b2_1697_, v_a_1698_, v_x_1699_);
lean_dec(v_x_1699_);
lean_dec(v_a_1698_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8(lean_object* v_00_u03b1_1701_, lean_object* v_ref_1702_, lean_object* v_msg_1703_, lean_object* v_declHint_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___redArg(v_ref_1702_, v_msg_1703_, v_declHint_1704_, v___y_1705_, v___y_1706_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b1_1709_, lean_object* v_ref_1710_, lean_object* v_msg_1711_, lean_object* v_declHint_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8(v_00_u03b1_1709_, v_ref_1710_, v_msg_1711_, v_declHint_1712_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v_ref_1710_);
return v_res_1716_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11(lean_object* v_00_u03b2_1717_, lean_object* v_x_1718_, size_t v_x_1719_, lean_object* v_x_1720_){
_start:
{
uint8_t v___x_1721_; 
v___x_1721_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___redArg(v_x_1718_, v_x_1719_, v_x_1720_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11___boxed(lean_object* v_00_u03b2_1722_, lean_object* v_x_1723_, lean_object* v_x_1724_, lean_object* v_x_1725_){
_start:
{
size_t v_x_10719__boxed_1726_; uint8_t v_res_1727_; lean_object* v_r_1728_; 
v_x_10719__boxed_1726_ = lean_unbox_usize(v_x_1724_);
lean_dec(v_x_1724_);
v_res_1727_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11(v_00_u03b2_1722_, v_x_1723_, v_x_10719__boxed_1726_, v_x_1725_);
lean_dec_ref(v_x_1725_);
lean_dec_ref(v_x_1723_);
v_r_1728_ = lean_box(v_res_1727_);
return v_r_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16(lean_object* v_msg_1729_, lean_object* v_declHint_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___redArg(v_msg_1729_, v_declHint_1730_, v___y_1732_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16___boxed(lean_object* v_msg_1735_, lean_object* v_declHint_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__12_spec__16(v_msg_1735_, v_declHint_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13(lean_object* v_00_u03b1_1741_, lean_object* v_ref_1742_, lean_object* v_msg_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___redArg(v_ref_1742_, v_msg_1743_, v___y_1744_, v___y_1745_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13___boxed(lean_object* v_00_u03b1_1748_, lean_object* v_ref_1749_, lean_object* v_msg_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__8_spec__13(v_00_u03b1_1748_, v_ref_1749_, v_msg_1750_, v___y_1751_, v___y_1752_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v_ref_1749_);
return v_res_1754_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16(lean_object* v_00_u03b2_1755_, lean_object* v_keys_1756_, lean_object* v_vals_1757_, lean_object* v_heq_1758_, lean_object* v_i_1759_, lean_object* v_k_1760_){
_start:
{
uint8_t v___x_1761_; 
v___x_1761_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___redArg(v_keys_1756_, v_i_1759_, v_k_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16___boxed(lean_object* v_00_u03b2_1762_, lean_object* v_keys_1763_, lean_object* v_vals_1764_, lean_object* v_heq_1765_, lean_object* v_i_1766_, lean_object* v_k_1767_){
_start:
{
uint8_t v_res_1768_; lean_object* v_r_1769_; 
v_res_1768_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__11_spec__16(v_00_u03b2_1762_, v_keys_1763_, v_vals_1764_, v_heq_1765_, v_i_1766_, v_k_1767_);
lean_dec_ref(v_k_1767_);
lean_dec_ref(v_vals_1764_);
lean_dec_ref(v_keys_1763_);
v_r_1769_ = lean_box(v_res_1768_);
return v_r_1769_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__3(lean_object* v_opts_1770_, lean_object* v_opt_1771_){
_start:
{
lean_object* v_name_1772_; lean_object* v_defValue_1773_; lean_object* v_map_1774_; lean_object* v___x_1775_; 
v_name_1772_ = lean_ctor_get(v_opt_1771_, 0);
v_defValue_1773_ = lean_ctor_get(v_opt_1771_, 1);
v_map_1774_ = lean_ctor_get(v_opts_1770_, 0);
v___x_1775_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1774_, v_name_1772_);
if (lean_obj_tag(v___x_1775_) == 0)
{
uint8_t v___x_1776_; 
v___x_1776_ = lean_unbox(v_defValue_1773_);
return v___x_1776_;
}
else
{
lean_object* v_val_1777_; 
v_val_1777_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_val_1777_);
lean_dec_ref_known(v___x_1775_, 1);
if (lean_obj_tag(v_val_1777_) == 1)
{
uint8_t v_v_1778_; 
v_v_1778_ = lean_ctor_get_uint8(v_val_1777_, 0);
lean_dec_ref_known(v_val_1777_, 0);
return v_v_1778_;
}
else
{
uint8_t v___x_1779_; 
lean_dec(v_val_1777_);
v___x_1779_ = lean_unbox(v_defValue_1773_);
return v___x_1779_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_opts_1780_, lean_object* v_opt_1781_){
_start:
{
uint8_t v_res_1782_; lean_object* v_r_1783_; 
v_res_1782_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__3(v_opts_1780_, v_opt_1781_);
lean_dec_ref(v_opt_1781_);
lean_dec_ref(v_opts_1780_);
v_r_1783_ = lean_box(v_res_1782_);
return v_r_1783_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___lam__0(uint8_t v___x_1784_, lean_object* v_x_1785_){
_start:
{
if (lean_obj_tag(v_x_1785_) == 1)
{
lean_object* v_pre_1786_; 
v_pre_1786_ = lean_ctor_get(v_x_1785_, 0);
if (lean_obj_tag(v_pre_1786_) == 0)
{
lean_object* v_str_1787_; lean_object* v___x_1788_; uint8_t v___x_1789_; 
v_str_1787_ = lean_ctor_get(v_x_1785_, 1);
v___x_1788_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__8));
v___x_1789_ = lean_string_dec_eq(v_str_1787_, v___x_1788_);
return v___x_1789_;
}
else
{
return v___x_1784_;
}
}
else
{
return v___x_1784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___x_1790_, lean_object* v_x_1791_){
_start:
{
uint8_t v___x_2290__boxed_1792_; uint8_t v_res_1793_; lean_object* v_r_1794_; 
v___x_2290__boxed_1792_ = lean_unbox(v___x_1790_);
v_res_1793_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___lam__0(v___x_2290__boxed_1792_, v_x_1791_);
lean_dec(v_x_1791_);
v_r_1794_ = lean_box(v_res_1793_);
return v_r_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_msgData_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v___x_1798_; lean_object* v_env_1799_; uint8_t v___x_1800_; lean_object* v_env_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v_scopes_1804_; lean_object* v___x_1805_; lean_object* v_opts_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1798_ = lean_st_ref_get(v___y_1796_);
v_env_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc_ref(v_env_1799_);
lean_dec(v___x_1798_);
v___x_1800_ = 0;
v_env_1801_ = l_Lean_Environment_setRecordingDeps(v_env_1799_, v___x_1800_);
v___x_1802_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1803_ = lean_st_ref_get(v___y_1796_);
v_scopes_1804_ = lean_ctor_get(v___x_1803_, 2);
lean_inc(v_scopes_1804_);
lean_dec(v___x_1803_);
v___x_1805_ = l_List_head_x21___redArg(v___x_1802_, v_scopes_1804_);
lean_dec(v_scopes_1804_);
v_opts_1806_ = lean_ctor_get(v___x_1805_, 1);
lean_inc_ref(v_opts_1806_);
lean_dec(v___x_1805_);
v___x_1807_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_1808_ = lean_unsigned_to_nat(32u);
v___x_1809_ = lean_mk_empty_array_with_capacity(v___x_1808_);
lean_dec_ref(v___x_1809_);
v___x_1810_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_1811_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1811_, 0, v_env_1801_);
lean_ctor_set(v___x_1811_, 1, v___x_1807_);
lean_ctor_set(v___x_1811_, 2, v___x_1810_);
lean_ctor_set(v___x_1811_, 3, v_opts_1806_);
v___x_1812_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
lean_ctor_set(v___x_1812_, 1, v_msgData_1795_);
v___x_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___redArg(v_msgData_1814_, v___y_1815_);
lean_dec(v___y_1815_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1(lean_object* v_ref_1821_, lean_object* v_msgData_1822_, uint8_t v_severity_1823_, uint8_t v_isSilent_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_){
_start:
{
lean_object* v___y_1829_; uint8_t v___y_1830_; lean_object* v___y_1831_; lean_object* v___y_1832_; lean_object* v___y_1833_; lean_object* v___y_1834_; uint8_t v___y_1835_; lean_object* v___y_1836_; lean_object* v___y_1894_; uint8_t v___y_1895_; lean_object* v___y_1896_; uint8_t v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1919_; lean_object* v___y_1920_; uint8_t v___y_1921_; uint8_t v___y_1922_; lean_object* v___y_1923_; uint8_t v___y_1927_; uint8_t v___x_1955_; uint8_t v___x_1956_; 
v___x_1955_ = 2;
v___x_1956_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1823_, v___x_1955_);
if (v___x_1956_ == 0)
{
goto v___jp_1944_;
}
else
{
uint8_t v___x_1957_; 
lean_inc_ref(v_msgData_1822_);
v___x_1957_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1822_);
if (v___x_1957_ == 0)
{
goto v___jp_1944_;
}
else
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
lean_dec_ref(v_msgData_1822_);
v___x_1958_ = lean_box(0);
v___x_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1958_);
return v___x_1959_;
}
}
v___jp_1828_:
{
lean_object* v___x_1837_; 
v___x_1837_ = l_Lean_Elab_Command_getScope___redArg(v___y_1836_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v_currNamespace_1839_; lean_object* v___x_1840_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v_currNamespace_1839_ = lean_ctor_get(v_a_1838_, 2);
lean_inc(v_currNamespace_1839_);
lean_dec(v_a_1838_);
v___x_1840_ = l_Lean_Elab_Command_getScope___redArg(v___y_1836_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1876_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1843_ = v___x_1840_;
v_isShared_1844_ = v_isSharedCheck_1876_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1840_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1876_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v_openDecls_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v_env_1850_; lean_object* v_messages_1851_; lean_object* v_scopes_1852_; lean_object* v_usedQuotCtxts_1853_; lean_object* v_nextMacroScope_1854_; lean_object* v_maxRecDepth_1855_; lean_object* v_ngen_1856_; lean_object* v_auxDeclNGen_1857_; lean_object* v_infoState_1858_; lean_object* v_traceState_1859_; lean_object* v_snapshotTasks_1860_; lean_object* v_prevLinterStates_1861_; lean_object* v_codeQualityEntryTasks_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1875_; 
v_openDecls_1845_ = lean_ctor_get(v_a_1841_, 3);
lean_inc(v_openDecls_1845_);
lean_dec(v_a_1841_);
v___x_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1846_, 0, v_currNamespace_1839_);
lean_ctor_set(v___x_1846_, 1, v_openDecls_1845_);
v___x_1847_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
lean_ctor_set(v___x_1847_, 1, v___y_1834_);
lean_inc_ref(v___y_1833_);
lean_inc_ref(v___y_1829_);
v___x_1848_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1848_, 0, v___y_1829_);
lean_ctor_set(v___x_1848_, 1, v___y_1832_);
lean_ctor_set(v___x_1848_, 2, v___y_1831_);
lean_ctor_set(v___x_1848_, 3, v___y_1833_);
lean_ctor_set(v___x_1848_, 4, v___x_1847_);
lean_ctor_set_uint8(v___x_1848_, sizeof(void*)*5, v___y_1835_);
lean_ctor_set_uint8(v___x_1848_, sizeof(void*)*5 + 1, v___y_1830_);
lean_ctor_set_uint8(v___x_1848_, sizeof(void*)*5 + 2, v_isSilent_1824_);
v___x_1849_ = lean_st_ref_take(v___y_1836_);
v_env_1850_ = lean_ctor_get(v___x_1849_, 0);
v_messages_1851_ = lean_ctor_get(v___x_1849_, 1);
v_scopes_1852_ = lean_ctor_get(v___x_1849_, 2);
v_usedQuotCtxts_1853_ = lean_ctor_get(v___x_1849_, 3);
v_nextMacroScope_1854_ = lean_ctor_get(v___x_1849_, 4);
v_maxRecDepth_1855_ = lean_ctor_get(v___x_1849_, 5);
v_ngen_1856_ = lean_ctor_get(v___x_1849_, 6);
v_auxDeclNGen_1857_ = lean_ctor_get(v___x_1849_, 7);
v_infoState_1858_ = lean_ctor_get(v___x_1849_, 8);
v_traceState_1859_ = lean_ctor_get(v___x_1849_, 9);
v_snapshotTasks_1860_ = lean_ctor_get(v___x_1849_, 10);
v_prevLinterStates_1861_ = lean_ctor_get(v___x_1849_, 11);
v_codeQualityEntryTasks_1862_ = lean_ctor_get(v___x_1849_, 12);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1864_ = v___x_1849_;
v_isShared_1865_ = v_isSharedCheck_1875_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1862_);
lean_inc(v_prevLinterStates_1861_);
lean_inc(v_snapshotTasks_1860_);
lean_inc(v_traceState_1859_);
lean_inc(v_infoState_1858_);
lean_inc(v_auxDeclNGen_1857_);
lean_inc(v_ngen_1856_);
lean_inc(v_maxRecDepth_1855_);
lean_inc(v_nextMacroScope_1854_);
lean_inc(v_usedQuotCtxts_1853_);
lean_inc(v_scopes_1852_);
lean_inc(v_messages_1851_);
lean_inc(v_env_1850_);
lean_dec(v___x_1849_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1875_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1869_; 
v___x_1866_ = lean_box(0);
v___x_1867_ = l_Lean_MessageLog_add(v___x_1848_, v_messages_1851_);
if (v_isShared_1865_ == 0)
{
lean_ctor_set(v___x_1864_, 1, v___x_1867_);
v___x_1869_ = v___x_1864_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_env_1850_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v___x_1867_);
lean_ctor_set(v_reuseFailAlloc_1874_, 2, v_scopes_1852_);
lean_ctor_set(v_reuseFailAlloc_1874_, 3, v_usedQuotCtxts_1853_);
lean_ctor_set(v_reuseFailAlloc_1874_, 4, v_nextMacroScope_1854_);
lean_ctor_set(v_reuseFailAlloc_1874_, 5, v_maxRecDepth_1855_);
lean_ctor_set(v_reuseFailAlloc_1874_, 6, v_ngen_1856_);
lean_ctor_set(v_reuseFailAlloc_1874_, 7, v_auxDeclNGen_1857_);
lean_ctor_set(v_reuseFailAlloc_1874_, 8, v_infoState_1858_);
lean_ctor_set(v_reuseFailAlloc_1874_, 9, v_traceState_1859_);
lean_ctor_set(v_reuseFailAlloc_1874_, 10, v_snapshotTasks_1860_);
lean_ctor_set(v_reuseFailAlloc_1874_, 11, v_prevLinterStates_1861_);
lean_ctor_set(v_reuseFailAlloc_1874_, 12, v_codeQualityEntryTasks_1862_);
v___x_1869_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_object* v___x_1870_; lean_object* v___x_1872_; 
v___x_1870_ = lean_st_ref_put(v___y_1836_, v___x_1869_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 0, v___x_1866_);
v___x_1872_ = v___x_1843_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1866_);
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
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_dec(v_currNamespace_1839_);
lean_dec_ref(v___y_1834_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
v_a_1877_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1840_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1840_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec_ref(v___y_1834_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
v_a_1885_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1837_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1837_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
v___jp_1893_:
{
lean_object* v_fileName_1899_; lean_object* v_fileMap_1900_; uint8_t v_suppressElabErrors_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1917_; 
v_fileName_1899_ = lean_ctor_get(v___y_1825_, 0);
v_fileMap_1900_ = lean_ctor_get(v___y_1825_, 1);
v_suppressElabErrors_1901_ = lean_ctor_get_uint8(v___y_1825_, sizeof(void*)*10);
v___x_1902_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1822_);
v___x_1903_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1902_, v___y_1826_);
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1906_ = v___x_1903_;
v_isShared_1907_ = v_isSharedCheck_1917_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1903_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1917_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
lean_inc_ref_n(v_fileMap_1900_, 2);
v___x_1908_ = l_Lean_FileMap_toPosition(v_fileMap_1900_, v___y_1896_);
lean_dec(v___y_1896_);
v___x_1909_ = l_Lean_FileMap_toPosition(v_fileMap_1900_, v___y_1898_);
lean_dec(v___y_1898_);
v___x_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
v___x_1911_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5_spec__8___closed__1));
if (v_suppressElabErrors_1901_ == 0)
{
lean_del_object(v___x_1906_);
v___y_1829_ = v_fileName_1899_;
v___y_1830_ = v___y_1895_;
v___y_1831_ = v___x_1910_;
v___y_1832_ = v___x_1908_;
v___y_1833_ = v___x_1911_;
v___y_1834_ = v_a_1904_;
v___y_1835_ = v___y_1897_;
v___y_1836_ = v___y_1826_;
goto v___jp_1828_;
}
else
{
uint8_t v___x_1912_; 
lean_inc(v_a_1904_);
lean_inc_ref(v___y_1894_);
v___x_1912_ = l_Lean_MessageData_hasTag(v___y_1894_, v_a_1904_);
if (v___x_1912_ == 0)
{
lean_object* v___x_1913_; lean_object* v___x_1915_; 
lean_dec_ref_known(v___x_1910_, 1);
lean_dec_ref(v___x_1908_);
lean_dec(v_a_1904_);
v___x_1913_ = lean_box(0);
if (v_isShared_1907_ == 0)
{
lean_ctor_set(v___x_1906_, 0, v___x_1913_);
v___x_1915_ = v___x_1906_;
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
else
{
lean_del_object(v___x_1906_);
v___y_1829_ = v_fileName_1899_;
v___y_1830_ = v___y_1895_;
v___y_1831_ = v___x_1910_;
v___y_1832_ = v___x_1908_;
v___y_1833_ = v___x_1911_;
v___y_1834_ = v_a_1904_;
v___y_1835_ = v___y_1897_;
v___y_1836_ = v___y_1826_;
goto v___jp_1828_;
}
}
}
}
v___jp_1918_:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_Syntax_getTailPos_x3f(v___y_1919_, v___y_1921_);
lean_dec(v___y_1919_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_inc(v___y_1923_);
v___y_1894_ = v___y_1920_;
v___y_1895_ = v___y_1922_;
v___y_1896_ = v___y_1923_;
v___y_1897_ = v___y_1921_;
v___y_1898_ = v___y_1923_;
goto v___jp_1893_;
}
else
{
lean_object* v_val_1925_; 
v_val_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc(v_val_1925_);
lean_dec_ref_known(v___x_1924_, 1);
v___y_1894_ = v___y_1920_;
v___y_1895_ = v___y_1922_;
v___y_1896_ = v___y_1923_;
v___y_1897_ = v___y_1921_;
v___y_1898_ = v_val_1925_;
goto v___jp_1893_;
}
}
v___jp_1926_:
{
lean_object* v___x_1928_; 
v___x_1928_ = l_Lean_Elab_Command_getRef___redArg(v___y_1825_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v_ref_1930_; uint8_t v___x_1931_; lean_object* v___f_1932_; lean_object* v___x_1933_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
v_ref_1930_ = l_Lean_replaceRef(v_ref_1821_, v_a_1929_);
lean_dec(v_a_1929_);
v___x_1931_ = 0;
v___f_1932_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___closed__0));
v___x_1933_ = l_Lean_Syntax_getPos_x3f(v_ref_1930_, v___x_1931_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v___x_1934_; 
v___x_1934_ = lean_unsigned_to_nat(0u);
v___y_1919_ = v_ref_1930_;
v___y_1920_ = v___f_1932_;
v___y_1921_ = v___x_1931_;
v___y_1922_ = v___y_1927_;
v___y_1923_ = v___x_1934_;
goto v___jp_1918_;
}
else
{
lean_object* v_val_1935_; 
v_val_1935_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_val_1935_);
lean_dec_ref_known(v___x_1933_, 1);
v___y_1919_ = v_ref_1930_;
v___y_1920_ = v___f_1932_;
v___y_1921_ = v___x_1931_;
v___y_1922_ = v___y_1927_;
v___y_1923_ = v_val_1935_;
goto v___jp_1918_;
}
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
lean_dec_ref(v_msgData_1822_);
v_a_1936_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1928_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1928_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
v___jp_1944_:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v_scopes_1947_; lean_object* v___x_1948_; lean_object* v_opts_1949_; uint8_t v___x_1950_; uint8_t v___x_1951_; 
v___x_1945_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1946_ = lean_st_ref_get(v___y_1826_);
v_scopes_1947_ = lean_ctor_get(v___x_1946_, 2);
lean_inc(v_scopes_1947_);
lean_dec(v___x_1946_);
v___x_1948_ = l_List_head_x21___redArg(v___x_1945_, v_scopes_1947_);
lean_dec(v_scopes_1947_);
v_opts_1949_ = lean_ctor_get(v___x_1948_, 1);
lean_inc_ref(v_opts_1949_);
lean_dec(v___x_1948_);
v___x_1950_ = 1;
v___x_1951_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1823_, v___x_1950_);
if (v___x_1951_ == 0)
{
lean_dec_ref(v_opts_1949_);
v___y_1927_ = v_severity_1823_;
goto v___jp_1926_;
}
else
{
lean_object* v___x_1952_; uint8_t v___x_1953_; 
v___x_1952_ = l_Lean_warningAsError;
v___x_1953_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__3(v_opts_1949_, v___x_1952_);
lean_dec_ref(v_opts_1949_);
if (v___x_1953_ == 0)
{
v___y_1927_ = v_severity_1823_;
goto v___jp_1926_;
}
else
{
uint8_t v___x_1954_; 
v___x_1954_ = 2;
v___y_1927_ = v___x_1954_;
goto v___jp_1926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_1960_, lean_object* v_msgData_1961_, lean_object* v_severity_1962_, lean_object* v_isSilent_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
uint8_t v_severity_boxed_1967_; uint8_t v_isSilent_boxed_1968_; lean_object* v_res_1969_; 
v_severity_boxed_1967_ = lean_unbox(v_severity_1962_);
v_isSilent_boxed_1968_ = lean_unbox(v_isSilent_1963_);
v_res_1969_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1(v_ref_1960_, v_msgData_1961_, v_severity_boxed_1967_, v_isSilent_boxed_1968_, v___y_1964_, v___y_1965_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v_ref_1960_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0(lean_object* v_ref_1970_, lean_object* v_msgData_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
uint8_t v___x_1975_; uint8_t v___x_1976_; lean_object* v___x_1977_; 
v___x_1975_ = 1;
v___x_1976_ = 0;
v___x_1977_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1(v_ref_1970_, v_msgData_1971_, v___x_1975_, v___x_1976_, v___y_1972_, v___y_1973_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0___boxed(lean_object* v_ref_1978_, lean_object* v_msgData_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0(v_ref_1978_, v_msgData_1979_, v___y_1980_, v___y_1981_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v_ref_1978_);
return v_res_1983_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1985_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__0));
v___x_1986_ = l_Lean_stringToMessageData(v___x_1985_);
return v___x_1986_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__2));
v___x_1989_ = l_Lean_stringToMessageData(v___x_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0(lean_object* v_linterOption_1990_, lean_object* v_stx_1991_, lean_object* v_msg_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v_name_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2014_; 
v_name_1996_ = lean_ctor_get(v_linterOption_1990_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v_linterOption_1990_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; 
v_unused_2015_ = lean_ctor_get(v_linterOption_1990_, 1);
lean_dec(v_unused_2015_);
v___x_1998_ = v_linterOption_1990_;
v_isShared_1999_ = v_isSharedCheck_2014_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_name_1996_);
lean_dec(v_linterOption_1990_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2014_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2003_; 
v___x_2000_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__1);
lean_inc(v_name_1996_);
v___x_2001_ = l_Lean_MessageData_ofName(v_name_1996_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set_tag(v___x_1998_, 7);
lean_ctor_set(v___x_1998_, 1, v___x_2001_);
lean_ctor_set(v___x_1998_, 0, v___x_2000_);
v___x_2003_ = v___x_1998_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2000_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v___x_2001_);
v___x_2003_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v_disable_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2004_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___closed__3);
v___x_2005_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2003_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
v_disable_2006_ = l_Lean_MessageData_note(v___x_2005_);
v___x_2007_ = l_Lean_Linter_linterMessageTag;
v___x_2008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2008_, 0, v_msg_1992_);
lean_ctor_set(v___x_2008_, 1, v_disable_2006_);
v___x_2009_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2007_);
lean_ctor_set(v___x_2009_, 1, v___x_2008_);
v___x_2010_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2010_, 0, v_name_1996_);
lean_ctor_set(v___x_2010_, 1, v___x_2009_);
lean_inc(v_stx_1991_);
v___x_2011_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2011_, 0, v_stx_1991_);
lean_ctor_set(v___x_2011_, 1, v___x_2010_);
v___x_2012_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0(v_stx_1991_, v___x_2011_, v___y_1993_, v___y_1994_);
lean_dec(v_stx_1991_);
return v___x_2012_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0___boxed(lean_object* v_linterOption_2016_, lean_object* v_stx_2017_, lean_object* v_msg_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0(v_linterOption_2016_, v_stx_2017_, v_msg_2018_, v___y_2019_, v___y_2020_);
lean_dec(v___y_2020_);
lean_dec_ref(v___y_2019_);
return v_res_2022_;
}
}
static lean_object* _init_l_Lean_Linter_MissingDocs_lint___closed__1(void){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2024_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lint___closed__0));
v___x_2025_ = l_Lean_stringToMessageData(v___x_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lint(lean_object* v_stx_2026_, lean_object* v_msg_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2031_ = l_Lean_Linter_linter_missingDocs;
v___x_2032_ = lean_obj_once(&l_Lean_Linter_MissingDocs_lint___closed__1, &l_Lean_Linter_MissingDocs_lint___closed__1_once, _init_l_Lean_Linter_MissingDocs_lint___closed__1);
v___x_2033_ = l_Lean_stringToMessageData(v_msg_2027_);
v___x_2034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2032_);
lean_ctor_set(v___x_2034_, 1, v___x_2033_);
v___x_2035_ = l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0(v___x_2031_, v_stx_2026_, v___x_2034_, v_a_2028_, v_a_2029_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lint___boxed(lean_object* v_stx_2036_, lean_object* v_msg_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lean_Linter_MissingDocs_lint(v_stx_2036_, v_msg_2037_, v_a_2038_, v_a_2039_);
lean_dec(v_a_2039_);
lean_dec_ref(v_a_2038_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2(lean_object* v_msgData_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___redArg(v_msgData_2042_, v___y_2044_);
return v___x_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2(v_msgData_2047_, v___y_2048_, v___y_2049_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
return v_res_2051_;
}
}
static lean_object* _init_l_Lean_Linter_MissingDocs_lintEmpty___closed__1(void){
_start:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2053_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintEmpty___closed__0));
v___x_2054_ = l_Lean_stringToMessageData(v___x_2053_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmpty(lean_object* v_stx_2055_, lean_object* v_msg_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2060_ = l_Lean_Linter_linter_missingDocs;
v___x_2061_ = lean_obj_once(&l_Lean_Linter_MissingDocs_lintEmpty___closed__1, &l_Lean_Linter_MissingDocs_lintEmpty___closed__1_once, _init_l_Lean_Linter_MissingDocs_lintEmpty___closed__1);
v___x_2062_ = l_Lean_stringToMessageData(v_msg_2056_);
v___x_2063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2061_);
lean_ctor_set(v___x_2063_, 1, v___x_2062_);
v___x_2064_ = l_Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0(v___x_2060_, v_stx_2055_, v___x_2063_, v_a_2057_, v_a_2058_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmpty___boxed(lean_object* v_stx_2065_, lean_object* v_msg_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lean_Linter_MissingDocs_lintEmpty(v_stx_2065_, v_msg_2066_, v_a_2067_, v_a_2068_);
lean_dec(v_a_2068_);
lean_dec_ref(v_a_2067_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintNamed(lean_object* v_stx_2071_, lean_object* v_msg_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2076_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13));
v___x_2077_ = lean_string_append(v_msg_2072_, v___x_2076_);
v___x_2078_ = l_Lean_Syntax_getId(v_stx_2071_);
v___x_2079_ = 1;
v___x_2080_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2078_, v___x_2079_);
v___x_2081_ = lean_string_append(v___x_2077_, v___x_2080_);
lean_dec_ref(v___x_2080_);
v___x_2082_ = l_Lean_Linter_MissingDocs_lint(v_stx_2071_, v___x_2081_, v_a_2073_, v_a_2074_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintNamed___boxed(lean_object* v_stx_2083_, lean_object* v_msg_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l_Lean_Linter_MissingDocs_lintNamed(v_stx_2083_, v_msg_2084_, v_a_2085_, v_a_2086_);
lean_dec(v_a_2086_);
lean_dec_ref(v_a_2085_);
return v_res_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmptyNamed(lean_object* v_stx_2089_, lean_object* v_msg_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_){
_start:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; uint8_t v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2094_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13));
v___x_2095_ = lean_string_append(v_msg_2090_, v___x_2094_);
v___x_2096_ = l_Lean_Syntax_getId(v_stx_2089_);
v___x_2097_ = 1;
v___x_2098_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2096_, v___x_2097_);
v___x_2099_ = lean_string_append(v___x_2095_, v___x_2098_);
lean_dec_ref(v___x_2098_);
v___x_2100_ = l_Lean_Linter_MissingDocs_lintEmpty(v_stx_2089_, v___x_2099_, v_a_2091_, v_a_2092_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmptyNamed___boxed(lean_object* v_stx_2101_, lean_object* v_msg_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Lean_Linter_MissingDocs_lintEmptyNamed(v_stx_2101_, v_msg_2102_, v_a_2103_, v_a_2104_);
lean_dec(v_a_2104_);
lean_dec_ref(v_a_2103_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintField(lean_object* v_parent_2108_, lean_object* v_stx_2109_, lean_object* v_msg_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2114_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13));
v___x_2115_ = lean_string_append(v_msg_2110_, v___x_2114_);
v___x_2116_ = l_Lean_Syntax_getId(v_parent_2108_);
v___x_2117_ = 1;
v___x_2118_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2116_, v___x_2117_);
v___x_2119_ = lean_string_append(v___x_2115_, v___x_2118_);
lean_dec_ref(v___x_2118_);
v___x_2120_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintField___closed__0));
v___x_2121_ = lean_string_append(v___x_2119_, v___x_2120_);
v___x_2122_ = l_Lean_Syntax_getId(v_stx_2109_);
v___x_2123_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2122_, v___x_2117_);
v___x_2124_ = lean_string_append(v___x_2121_, v___x_2123_);
lean_dec_ref(v___x_2123_);
v___x_2125_ = l_Lean_Linter_MissingDocs_lint(v_stx_2109_, v___x_2124_, v_a_2111_, v_a_2112_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintField___boxed(lean_object* v_parent_2126_, lean_object* v_stx_2127_, lean_object* v_msg_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Lean_Linter_MissingDocs_lintField(v_parent_2126_, v_stx_2127_, v_msg_2128_, v_a_2129_, v_a_2130_);
lean_dec(v_a_2130_);
lean_dec_ref(v_a_2129_);
lean_dec(v_parent_2126_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmptyField(lean_object* v_parent_2133_, lean_object* v_stx_2134_, lean_object* v_msg_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v___x_2139_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13));
v___x_2140_ = lean_string_append(v_msg_2135_, v___x_2139_);
v___x_2141_ = l_Lean_Syntax_getId(v_parent_2133_);
v___x_2142_ = 1;
v___x_2143_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2141_, v___x_2142_);
v___x_2144_ = lean_string_append(v___x_2140_, v___x_2143_);
lean_dec_ref(v___x_2143_);
v___x_2145_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintField___closed__0));
v___x_2146_ = lean_string_append(v___x_2144_, v___x_2145_);
v___x_2147_ = l_Lean_Syntax_getId(v_stx_2134_);
v___x_2148_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2147_, v___x_2142_);
v___x_2149_ = lean_string_append(v___x_2146_, v___x_2148_);
lean_dec_ref(v___x_2148_);
v___x_2150_ = l_Lean_Linter_MissingDocs_lintEmpty(v_stx_2134_, v___x_2149_, v_a_2136_, v_a_2137_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintEmptyField___boxed(lean_object* v_parent_2151_, lean_object* v_stx_2152_, lean_object* v_msg_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_){
_start:
{
lean_object* v_res_2157_; 
v_res_2157_ = l_Lean_Linter_MissingDocs_lintEmptyField(v_parent_2151_, v_stx_2152_, v_msg_2153_, v_a_2154_, v_a_2155_);
lean_dec(v_a_2155_);
lean_dec_ref(v_a_2154_);
lean_dec(v_parent_2151_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintStructField(lean_object* v_parent_2158_, lean_object* v_stx_2159_, lean_object* v_msg_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_){
_start:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; uint8_t v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2164_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__13));
v___x_2165_ = lean_string_append(v_msg_2160_, v___x_2164_);
v___x_2166_ = l_Lean_Syntax_getId(v_parent_2158_);
v___x_2167_ = 1;
v___x_2168_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2166_, v___x_2167_);
v___x_2169_ = lean_string_append(v___x_2165_, v___x_2168_);
lean_dec_ref(v___x_2168_);
v___x_2170_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintField___closed__0));
v___x_2171_ = lean_string_append(v___x_2169_, v___x_2170_);
v___x_2172_ = l_Lean_Syntax_getId(v_stx_2159_);
v___x_2173_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2172_, v___x_2167_);
v___x_2174_ = lean_string_append(v___x_2171_, v___x_2173_);
lean_dec_ref(v___x_2173_);
v___x_2175_ = l_Lean_Linter_MissingDocs_lint(v_stx_2159_, v___x_2174_, v_a_2161_, v_a_2162_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintStructField___boxed(lean_object* v_parent_2176_, lean_object* v_stx_2177_, lean_object* v_msg_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Lean_Linter_MissingDocs_lintStructField(v_parent_2176_, v_stx_2177_, v_msg_2178_, v_a_2179_, v_a_2180_);
lean_dec(v_a_2180_);
lean_dec_ref(v_a_2179_);
lean_dec(v_parent_2176_);
return v_res_2182_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2183_ = lean_box(1);
v___x_2184_ = l_Lean_MessageData_ofFormat(v___x_2183_);
return v___x_2184_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2188_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_2189_ = l_Lean_MessageData_ofFormat(v___x_2188_);
return v___x_2189_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_x_2190_, lean_object* v_x_2191_){
_start:
{
if (lean_obj_tag(v_x_2191_) == 0)
{
return v_x_2190_;
}
else
{
lean_object* v_head_2192_; lean_object* v_tail_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2215_; 
v_head_2192_ = lean_ctor_get(v_x_2191_, 0);
v_tail_2193_ = lean_ctor_get(v_x_2191_, 1);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_x_2191_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2195_ = v_x_2191_;
v_isShared_2196_ = v_isSharedCheck_2215_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_tail_2193_);
lean_inc(v_head_2192_);
lean_dec(v_x_2191_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2215_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v_before_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2213_; 
v_before_2197_ = lean_ctor_get(v_head_2192_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v_head_2192_);
if (v_isSharedCheck_2213_ == 0)
{
lean_object* v_unused_2214_; 
v_unused_2214_ = lean_ctor_get(v_head_2192_, 1);
lean_dec(v_unused_2214_);
v___x_2199_ = v_head_2192_;
v_isShared_2200_ = v_isSharedCheck_2213_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_before_2197_);
lean_dec(v_head_2192_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2213_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2201_; lean_object* v___x_2203_; 
v___x_2201_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0);
if (v_isShared_2200_ == 0)
{
lean_ctor_set_tag(v___x_2199_, 7);
lean_ctor_set(v___x_2199_, 1, v___x_2201_);
lean_ctor_set(v___x_2199_, 0, v_x_2190_);
v___x_2203_ = v___x_2199_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_x_2190_);
lean_ctor_set(v_reuseFailAlloc_2212_, 1, v___x_2201_);
v___x_2203_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
lean_object* v___x_2204_; lean_object* v___x_2206_; 
v___x_2204_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3);
if (v_isShared_2196_ == 0)
{
lean_ctor_set_tag(v___x_2195_, 7);
lean_ctor_set(v___x_2195_, 1, v___x_2204_);
lean_ctor_set(v___x_2195_, 0, v___x_2203_);
v___x_2206_ = v___x_2195_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v___x_2203_);
lean_ctor_set(v_reuseFailAlloc_2211_, 1, v___x_2204_);
v___x_2206_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2207_ = l_Lean_MessageData_ofSyntax(v_before_2197_);
v___x_2208_ = l_Lean_indentD(v___x_2207_);
v___x_2209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2206_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v_x_2190_ = v___x_2209_;
v_x_2191_ = v_tail_2193_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2219_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__1));
v___x_2220_ = l_Lean_MessageData_ofFormat(v___x_2219_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_msgData_2221_, lean_object* v_macroStack_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v_scopes_2227_; lean_object* v___x_2228_; lean_object* v_opts_2229_; lean_object* v___x_2230_; uint8_t v___x_2231_; 
v___x_2225_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2226_ = lean_st_ref_get(v___y_2223_);
v_scopes_2227_ = lean_ctor_get(v___x_2226_, 2);
lean_inc(v_scopes_2227_);
lean_dec(v___x_2226_);
v___x_2228_ = l_List_head_x21___redArg(v___x_2225_, v_scopes_2227_);
lean_dec(v_scopes_2227_);
v_opts_2229_ = lean_ctor_get(v___x_2228_, 1);
lean_inc_ref(v_opts_2229_);
lean_dec(v___x_2228_);
v___x_2230_ = l_Lean_Elab_pp_macroStack;
v___x_2231_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__3(v_opts_2229_, v___x_2230_);
lean_dec_ref(v_opts_2229_);
if (v___x_2231_ == 0)
{
lean_object* v___x_2232_; 
lean_dec(v_macroStack_2222_);
v___x_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2232_, 0, v_msgData_2221_);
return v___x_2232_;
}
else
{
if (lean_obj_tag(v_macroStack_2222_) == 0)
{
lean_object* v___x_2233_; 
v___x_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2233_, 0, v_msgData_2221_);
return v___x_2233_;
}
else
{
lean_object* v_head_2234_; lean_object* v_after_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2250_; 
v_head_2234_ = lean_ctor_get(v_macroStack_2222_, 0);
lean_inc(v_head_2234_);
v_after_2235_ = lean_ctor_get(v_head_2234_, 1);
v_isSharedCheck_2250_ = !lean_is_exclusive(v_head_2234_);
if (v_isSharedCheck_2250_ == 0)
{
lean_object* v_unused_2251_; 
v_unused_2251_ = lean_ctor_get(v_head_2234_, 0);
lean_dec(v_unused_2251_);
v___x_2237_ = v_head_2234_;
v_isShared_2238_ = v_isSharedCheck_2250_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_after_2235_);
lean_dec(v_head_2234_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2250_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2239_; lean_object* v___x_2241_; 
v___x_2239_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0);
if (v_isShared_2238_ == 0)
{
lean_ctor_set_tag(v___x_2237_, 7);
lean_ctor_set(v___x_2237_, 1, v___x_2239_);
lean_ctor_set(v___x_2237_, 0, v_msgData_2221_);
v___x_2241_ = v___x_2237_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_msgData_2221_);
lean_ctor_set(v_reuseFailAlloc_2249_, 1, v___x_2239_);
v___x_2241_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v_msgData_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2242_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___closed__2);
v___x_2243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2243_, 0, v___x_2241_);
lean_ctor_set(v___x_2243_, 1, v___x_2242_);
v___x_2244_ = l_Lean_MessageData_ofSyntax(v_after_2235_);
v___x_2245_ = l_Lean_indentD(v___x_2244_);
v_msgData_2246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2246_, 0, v___x_2243_);
lean_ctor_set(v_msgData_2246_, 1, v___x_2245_);
v___x_2247_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2_spec__3(v_msgData_2246_, v_macroStack_2222_);
v___x_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
return v___x_2248_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_2252_, lean_object* v_macroStack_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg(v_msgData_2252_, v_macroStack_2253_, v___y_2254_);
lean_dec(v___y_2254_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l_Lean_Elab_Command_getRef___redArg(v___y_2258_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; lean_object* v_macroStack_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v_a_2266_; lean_object* v___x_2267_; lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2276_; 
v_a_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2262_);
lean_dec_ref_known(v___x_2261_, 1);
v_macroStack_2263_ = lean_ctor_get(v___y_2258_, 4);
v___x_2264_ = l_Lean_Elab_getBetterRef(v_a_2262_, v_macroStack_2263_);
lean_dec(v_a_2262_);
v___x_2265_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_MissingDocs_lint_spec__0_spec__0_spec__1_spec__2___redArg(v_msg_2257_, v___y_2259_);
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2266_);
lean_dec_ref(v___x_2265_);
lean_inc(v_macroStack_2263_);
v___x_2267_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg(v_a_2266_, v_macroStack_2263_, v___y_2259_);
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2270_ = v___x_2267_;
v_isShared_2271_ = v_isSharedCheck_2276_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2267_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2276_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2272_; lean_object* v___x_2274_; 
v___x_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2264_);
lean_ctor_set(v___x_2272_, 1, v_a_2268_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set_tag(v___x_2270_, 1);
lean_ctor_set(v___x_2270_, 0, v___x_2272_);
v___x_2274_ = v___x_2270_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2272_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
lean_dec_ref(v_msg_2257_);
v_a_2277_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2261_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2261_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg(v_msg_2285_, v___y_2286_, v___y_2287_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___redArg(lean_object* v_ref_2290_, lean_object* v_msg_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
lean_object* v___x_2295_; 
v___x_2295_ = l_Lean_Elab_Command_getRef___redArg(v___y_2292_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v_a_2296_; lean_object* v_fileName_2297_; lean_object* v_fileMap_2298_; lean_object* v_currRecDepth_2299_; lean_object* v_cmdPos_2300_; lean_object* v_macroStack_2301_; lean_object* v_quotContext_x3f_2302_; lean_object* v_currMacroScope_2303_; lean_object* v_snap_x3f_2304_; lean_object* v_cancelTk_x3f_2305_; uint8_t v_suppressElabErrors_2306_; uint8_t v_checkDeprecated_2307_; lean_object* v_ref_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
lean_inc(v_a_2296_);
lean_dec_ref_known(v___x_2295_, 1);
v_fileName_2297_ = lean_ctor_get(v___y_2292_, 0);
v_fileMap_2298_ = lean_ctor_get(v___y_2292_, 1);
v_currRecDepth_2299_ = lean_ctor_get(v___y_2292_, 2);
v_cmdPos_2300_ = lean_ctor_get(v___y_2292_, 3);
v_macroStack_2301_ = lean_ctor_get(v___y_2292_, 4);
v_quotContext_x3f_2302_ = lean_ctor_get(v___y_2292_, 5);
v_currMacroScope_2303_ = lean_ctor_get(v___y_2292_, 6);
v_snap_x3f_2304_ = lean_ctor_get(v___y_2292_, 8);
v_cancelTk_x3f_2305_ = lean_ctor_get(v___y_2292_, 9);
v_suppressElabErrors_2306_ = lean_ctor_get_uint8(v___y_2292_, sizeof(void*)*10);
v_checkDeprecated_2307_ = lean_ctor_get_uint8(v___y_2292_, sizeof(void*)*10 + 1);
v_ref_2308_ = l_Lean_replaceRef(v_ref_2290_, v_a_2296_);
lean_dec(v_a_2296_);
lean_inc(v_cancelTk_x3f_2305_);
lean_inc(v_snap_x3f_2304_);
lean_inc(v_currMacroScope_2303_);
lean_inc(v_quotContext_x3f_2302_);
lean_inc(v_macroStack_2301_);
lean_inc(v_cmdPos_2300_);
lean_inc(v_currRecDepth_2299_);
lean_inc_ref(v_fileMap_2298_);
lean_inc_ref(v_fileName_2297_);
v___x_2309_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_2309_, 0, v_fileName_2297_);
lean_ctor_set(v___x_2309_, 1, v_fileMap_2298_);
lean_ctor_set(v___x_2309_, 2, v_currRecDepth_2299_);
lean_ctor_set(v___x_2309_, 3, v_cmdPos_2300_);
lean_ctor_set(v___x_2309_, 4, v_macroStack_2301_);
lean_ctor_set(v___x_2309_, 5, v_quotContext_x3f_2302_);
lean_ctor_set(v___x_2309_, 6, v_currMacroScope_2303_);
lean_ctor_set(v___x_2309_, 7, v_ref_2308_);
lean_ctor_set(v___x_2309_, 8, v_snap_x3f_2304_);
lean_ctor_set(v___x_2309_, 9, v_cancelTk_x3f_2305_);
lean_ctor_set_uint8(v___x_2309_, sizeof(void*)*10, v_suppressElabErrors_2306_);
lean_ctor_set_uint8(v___x_2309_, sizeof(void*)*10 + 1, v_checkDeprecated_2307_);
v___x_2310_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg(v_msg_2291_, v___x_2309_, v___y_2293_);
lean_dec_ref_known(v___x_2309_, 10);
return v___x_2310_;
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec_ref(v_msg_2291_);
v_a_2311_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2295_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2295_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___redArg___boxed(lean_object* v_ref_2319_, lean_object* v_msg_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___redArg(v_ref_2319_, v_msg_2320_, v___y_2321_, v___y_2322_);
lean_dec(v___y_2322_);
lean_dec_ref(v___y_2321_);
lean_dec(v_ref_2319_);
return v_res_2324_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__0));
v___x_2327_ = l_Lean_stringToMessageData(v___x_2326_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0(lean_object* v_stx_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_){
_start:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2341_ = lean_unsigned_to_nat(1u);
v___x_2342_ = l_Lean_Syntax_getArg(v_stx_2331_, v___x_2341_);
if (lean_obj_tag(v___x_2342_) == 1)
{
lean_object* v_kind_2343_; 
v_kind_2343_ = lean_ctor_get(v___x_2342_, 1);
lean_inc(v_kind_2343_);
if (lean_obj_tag(v_kind_2343_) == 1)
{
lean_object* v_pre_2344_; 
v_pre_2344_ = lean_ctor_get(v_kind_2343_, 0);
lean_inc(v_pre_2344_);
if (lean_obj_tag(v_pre_2344_) == 1)
{
lean_object* v_pre_2345_; 
v_pre_2345_ = lean_ctor_get(v_pre_2344_, 0);
lean_inc(v_pre_2345_);
if (lean_obj_tag(v_pre_2345_) == 1)
{
lean_object* v_pre_2346_; 
v_pre_2346_ = lean_ctor_get(v_pre_2345_, 0);
lean_inc(v_pre_2346_);
if (lean_obj_tag(v_pre_2346_) == 1)
{
lean_object* v_pre_2347_; 
v_pre_2347_ = lean_ctor_get(v_pre_2346_, 0);
if (lean_obj_tag(v_pre_2347_) == 0)
{
lean_object* v_args_2348_; lean_object* v_str_2349_; lean_object* v_str_2350_; lean_object* v_str_2351_; lean_object* v_str_2352_; lean_object* v___x_2353_; uint8_t v___x_2354_; 
v_args_2348_ = lean_ctor_get(v___x_2342_, 2);
lean_inc_ref(v_args_2348_);
lean_dec_ref_known(v___x_2342_, 3);
v_str_2349_ = lean_ctor_get(v_kind_2343_, 1);
lean_inc_ref(v_str_2349_);
lean_dec_ref_known(v_kind_2343_, 2);
v_str_2350_ = lean_ctor_get(v_pre_2344_, 1);
lean_inc_ref(v_str_2350_);
lean_dec_ref_known(v_pre_2344_, 2);
v_str_2351_ = lean_ctor_get(v_pre_2345_, 1);
lean_inc_ref(v_str_2351_);
lean_dec_ref_known(v_pre_2345_, 2);
v_str_2352_ = lean_ctor_get(v_pre_2346_, 1);
lean_inc_ref(v_str_2352_);
lean_dec_ref_known(v_pre_2346_, 2);
v___x_2353_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_2354_ = lean_string_dec_eq(v_str_2352_, v___x_2353_);
lean_dec_ref(v_str_2352_);
if (v___x_2354_ == 0)
{
lean_dec_ref(v_str_2351_);
lean_dec_ref(v_str_2350_);
lean_dec_ref(v_str_2349_);
lean_dec_ref(v_args_2348_);
goto v___jp_2335_;
}
else
{
lean_object* v___x_2355_; uint8_t v___x_2356_; 
v___x_2355_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2));
v___x_2356_ = lean_string_dec_eq(v_str_2351_, v___x_2355_);
lean_dec_ref(v_str_2351_);
if (v___x_2356_ == 0)
{
lean_dec_ref(v_str_2350_);
lean_dec_ref(v_str_2349_);
lean_dec_ref(v_args_2348_);
goto v___jp_2335_;
}
else
{
lean_object* v___x_2357_; uint8_t v___x_2358_; 
v___x_2357_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3));
v___x_2358_ = lean_string_dec_eq(v_str_2350_, v___x_2357_);
lean_dec_ref(v_str_2350_);
if (v___x_2358_ == 0)
{
lean_dec_ref(v_str_2349_);
lean_dec_ref(v_args_2348_);
goto v___jp_2335_;
}
else
{
lean_object* v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__4));
v___x_2360_ = lean_string_dec_eq(v_str_2349_, v___x_2359_);
lean_dec_ref(v_str_2349_);
if (v___x_2360_ == 0)
{
lean_dec_ref(v_args_2348_);
goto v___jp_2335_;
}
else
{
lean_object* v___x_2361_; lean_object* v___x_2362_; uint8_t v___x_2363_; 
v___x_2361_ = lean_array_get_size(v_args_2348_);
v___x_2362_ = lean_unsigned_to_nat(2u);
v___x_2363_ = lean_nat_dec_eq(v___x_2361_, v___x_2362_);
if (v___x_2363_ == 0)
{
lean_dec_ref(v_args_2348_);
goto v___jp_2335_;
}
else
{
lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2364_ = lean_unsigned_to_nat(0u);
v___x_2365_ = lean_array_fget(v_args_2348_, v___x_2364_);
lean_dec_ref(v_args_2348_);
if (lean_obj_tag(v___x_2365_) == 2)
{
lean_object* v_val_2366_; lean_object* v___x_2367_; 
lean_dec(v_stx_2331_);
v_val_2366_ = lean_ctor_get(v___x_2365_, 1);
lean_inc_ref(v_val_2366_);
lean_dec_ref_known(v___x_2365_, 2);
v___x_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2367_, 0, v_val_2366_);
return v___x_2367_;
}
else
{
lean_dec(v___x_2365_);
goto v___jp_2335_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2346_, 2);
lean_dec_ref_known(v_pre_2345_, 2);
lean_dec_ref_known(v_pre_2344_, 2);
lean_dec_ref_known(v_kind_2343_, 2);
lean_dec_ref_known(v___x_2342_, 3);
goto v___jp_2335_;
}
}
else
{
lean_dec_ref_known(v_pre_2345_, 2);
lean_dec(v_pre_2346_);
lean_dec_ref_known(v_pre_2344_, 2);
lean_dec_ref_known(v_kind_2343_, 2);
lean_dec_ref_known(v___x_2342_, 3);
goto v___jp_2335_;
}
}
else
{
lean_dec_ref_known(v_pre_2344_, 2);
lean_dec(v_pre_2345_);
lean_dec_ref_known(v_kind_2343_, 2);
lean_dec_ref_known(v___x_2342_, 3);
goto v___jp_2335_;
}
}
else
{
lean_dec_ref_known(v_kind_2343_, 2);
lean_dec(v_pre_2344_);
lean_dec_ref_known(v___x_2342_, 3);
goto v___jp_2335_;
}
}
else
{
lean_dec(v_kind_2343_);
lean_dec_ref_known(v___x_2342_, 3);
goto v___jp_2335_;
}
}
else
{
lean_dec(v___x_2342_);
goto v___jp_2335_;
}
v___jp_2335_:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2336_ = lean_obj_once(&l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__1, &l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__1_once, _init_l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__1);
lean_inc(v_stx_2331_);
v___x_2337_ = l_Lean_MessageData_ofSyntax(v_stx_2331_);
v___x_2338_ = l_Lean_indentD(v___x_2337_);
v___x_2339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2336_);
lean_ctor_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___redArg(v_stx_2331_, v___x_2339_, v___y_2332_, v___y_2333_);
lean_dec(v_stx_2331_);
return v___x_2340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___boxed(lean_object* v_stx_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0(v_stx_2368_, v___y_2369_, v___y_2370_);
lean_dec(v___y_2370_);
lean_dec_ref(v___y_2369_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString(lean_object* v_docOpt_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_){
_start:
{
uint8_t v___x_2382_; 
v___x_2382_ = l_Lean_Syntax_isNone(v_docOpt_2374_);
if (v___x_2382_ == 0)
{
lean_object* v___x_2383_; lean_object* v_docStx_2384_; lean_object* v___y_2386_; lean_object* v___y_2387_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2383_ = lean_unsigned_to_nat(0u);
v_docStx_2384_ = l_Lean_Syntax_getArg(v_docOpt_2374_, v___x_2383_);
v___x_2413_ = lean_unsigned_to_nat(1u);
v___x_2414_ = l_Lean_Syntax_getArg(v_docStx_2384_, v___x_2413_);
if (lean_obj_tag(v___x_2414_) == 1)
{
lean_object* v_kind_2415_; 
v_kind_2415_ = lean_ctor_get(v___x_2414_, 1);
if (lean_obj_tag(v_kind_2415_) == 1)
{
lean_object* v_pre_2416_; 
v_pre_2416_ = lean_ctor_get(v_kind_2415_, 0);
if (lean_obj_tag(v_pre_2416_) == 1)
{
lean_object* v_pre_2417_; 
v_pre_2417_ = lean_ctor_get(v_pre_2416_, 0);
if (lean_obj_tag(v_pre_2417_) == 1)
{
lean_object* v_pre_2418_; 
v_pre_2418_ = lean_ctor_get(v_pre_2417_, 0);
if (lean_obj_tag(v_pre_2418_) == 1)
{
lean_object* v_pre_2419_; 
v_pre_2419_ = lean_ctor_get(v_pre_2418_, 0);
if (lean_obj_tag(v_pre_2419_) == 0)
{
lean_object* v_str_2420_; lean_object* v_str_2421_; lean_object* v_str_2422_; lean_object* v_str_2423_; lean_object* v___x_2424_; uint8_t v___x_2425_; 
v_str_2420_ = lean_ctor_get(v_kind_2415_, 1);
v_str_2421_ = lean_ctor_get(v_pre_2416_, 1);
v_str_2422_ = lean_ctor_get(v_pre_2417_, 1);
v_str_2423_ = lean_ctor_get(v_pre_2418_, 1);
v___x_2424_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_));
v___x_2425_ = lean_string_dec_eq(v_str_2423_, v___x_2424_);
if (v___x_2425_ == 0)
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
else
{
lean_object* v___x_2426_; uint8_t v___x_2427_; 
v___x_2426_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__2));
v___x_2427_ = lean_string_dec_eq(v_str_2422_, v___x_2426_);
if (v___x_2427_ == 0)
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
else
{
lean_object* v___x_2428_; uint8_t v___x_2429_; 
v___x_2428_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0___closed__3));
v___x_2429_ = lean_string_dec_eq(v_str_2421_, v___x_2428_);
if (v___x_2429_ == 0)
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
else
{
lean_object* v___x_2430_; uint8_t v___x_2431_; 
v___x_2430_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString___closed__0));
v___x_2431_ = lean_string_dec_eq(v_str_2420_, v___x_2430_);
if (v___x_2431_ == 0)
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
else
{
lean_object* v___x_2432_; uint8_t v___x_2433_; 
v___x_2432_ = l_Lean_Syntax_getArg(v___x_2414_, v___x_2383_);
lean_dec_ref_known(v___x_2414_, 3);
v___x_2433_ = l_Lean_Syntax_isAtom(v___x_2432_);
lean_dec(v___x_2432_);
if (v___x_2433_ == 0)
{
lean_dec(v_docStx_2384_);
goto v___jp_2378_;
}
else
{
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
}
else
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
}
else
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
}
else
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
}
else
{
lean_dec_ref_known(v___x_2414_, 3);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
}
else
{
lean_dec(v___x_2414_);
v___y_2386_ = v_a_2375_;
v___y_2387_ = v_a_2376_;
goto v___jp_2385_;
}
v___jp_2385_:
{
lean_object* v___x_2388_; 
v___x_2388_ = l_Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0(v_docStx_2384_, v___y_2386_, v___y_2387_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2404_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2391_ = v___x_2388_;
v_isShared_2392_ = v_isSharedCheck_2404_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2388_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2404_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v_startInclusive_2396_; lean_object* v_endExclusive_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2402_; 
v___x_2393_ = lean_string_utf8_byte_size(v_a_2389_);
v___x_2394_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2394_, 0, v_a_2389_);
lean_ctor_set(v___x_2394_, 1, v___x_2383_);
lean_ctor_set(v___x_2394_, 2, v___x_2393_);
v___x_2395_ = l_String_Slice_trimAscii(v___x_2394_);
v_startInclusive_2396_ = lean_ctor_get(v___x_2395_, 1);
lean_inc(v_startInclusive_2396_);
v_endExclusive_2397_ = lean_ctor_get(v___x_2395_, 2);
lean_inc(v_endExclusive_2397_);
lean_dec_ref(v___x_2395_);
v___x_2398_ = lean_nat_sub(v_endExclusive_2397_, v_startInclusive_2396_);
lean_dec(v_startInclusive_2396_);
lean_dec(v_endExclusive_2397_);
v___x_2399_ = lean_nat_dec_eq(v___x_2398_, v___x_2383_);
lean_dec(v___x_2398_);
v___x_2400_ = lean_box(v___x_2399_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 0, v___x_2400_);
v___x_2402_ = v___x_2391_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v___x_2400_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
}
}
}
else
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2412_; 
v_a_2405_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2407_ = v___x_2388_;
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2388_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2410_; 
if (v_isShared_2408_ == 0)
{
v___x_2410_ = v___x_2407_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_a_2405_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
return v___x_2410_;
}
}
}
}
}
else
{
goto v___jp_2378_;
}
v___jp_2378_:
{
uint8_t v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2379_ = 0;
v___x_2380_ = lean_box(v___x_2379_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
return v___x_2381_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString___boxed(lean_object* v_docOpt_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString(v_docOpt_2434_, v_a_2435_, v_a_2436_);
lean_dec(v_a_2436_);
lean_dec_ref(v_a_2435_);
lean_dec(v_docOpt_2434_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0(lean_object* v_00_u03b1_2439_, lean_object* v_ref_2440_, lean_object* v_msg_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v___x_2445_; 
v___x_2445_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___redArg(v_ref_2440_, v_msg_2441_, v___y_2442_, v___y_2443_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2446_, lean_object* v_ref_2447_, lean_object* v_msg_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0(v_00_u03b1_2446_, v_ref_2447_, v_msg_2448_, v___y_2449_, v___y_2450_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
lean_dec(v_ref_2447_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2453_, lean_object* v_msg_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v___x_2458_; 
v___x_2458_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg(v_msg_2454_, v___y_2455_, v___y_2456_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2459_, lean_object* v_msg_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1(v_00_u03b1_2459_, v_msg_2460_, v___y_2461_, v___y_2462_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2(lean_object* v_msgData_2465_, lean_object* v_macroStack_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___redArg(v_msgData_2465_, v_macroStack_2466_, v___y_2468_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_2471_, lean_object* v_macroStack_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1_spec__2(v_msgData_2471_, v_macroStack_2472_, v___y_2473_, v___y_2474_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_isMissingDoc(lean_object* v_docOpt_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString(v_docOpt_2477_, v_a_2478_, v_a_2479_);
if (lean_obj_tag(v___x_2481_) == 0)
{
uint8_t v___x_2482_; 
v___x_2482_ = l_Lean_Syntax_isNone(v_docOpt_2477_);
if (v___x_2482_ == 0)
{
return v___x_2481_;
}
else
{
lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2490_; 
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2490_ == 0)
{
lean_object* v_unused_2491_; 
v_unused_2491_ = lean_ctor_get(v___x_2481_, 0);
lean_dec(v_unused_2491_);
v___x_2484_ = v___x_2481_;
v_isShared_2485_ = v_isSharedCheck_2490_;
goto v_resetjp_2483_;
}
else
{
lean_dec(v___x_2481_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2490_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2486_; lean_object* v___x_2488_; 
v___x_2486_ = lean_box(v___x_2482_);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 0, v___x_2486_);
v___x_2488_ = v___x_2484_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v___x_2486_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
else
{
return v___x_2481_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_isMissingDoc___boxed(lean_object* v_docOpt_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l_Lean_Linter_MissingDocs_isMissingDoc(v_docOpt_2492_, v_a_2493_, v_a_2494_);
lean_dec(v_a_2494_);
lean_dec_ref(v_a_2493_);
lean_dec(v_docOpt_2492_);
return v_res_2496_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0(lean_object* v_as_2507_, size_t v_i_2508_, size_t v_stop_2509_){
_start:
{
uint8_t v___x_2514_; 
v___x_2514_ = lean_usize_dec_eq(v_i_2508_, v_stop_2509_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; uint8_t v___x_2519_; 
v___x_2515_ = lean_unsigned_to_nat(1u);
v___x_2516_ = lean_array_uget_borrowed(v_as_2507_, v_i_2508_);
v___x_2517_ = l_Lean_Syntax_getArg(v___x_2516_, v___x_2515_);
v___x_2518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__2));
lean_inc(v___x_2517_);
v___x_2519_ = l_Lean_Syntax_isOfKind(v___x_2517_, v___x_2518_);
if (v___x_2519_ == 0)
{
lean_dec(v___x_2517_);
goto v___jp_2510_;
}
else
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; uint8_t v___x_2525_; 
v___x_2520_ = lean_unsigned_to_nat(0u);
v___x_2521_ = l_Lean_Syntax_getArg(v___x_2517_, v___x_2520_);
lean_dec(v___x_2517_);
v___x_2522_ = l_Lean_Syntax_getId(v___x_2521_);
lean_dec(v___x_2521_);
v___x_2523_ = l_Lean_Name_eraseMacroScopes(v___x_2522_);
lean_dec(v___x_2522_);
v___x_2524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___closed__4));
v___x_2525_ = lean_name_eq(v___x_2523_, v___x_2524_);
lean_dec(v___x_2523_);
if (v___x_2525_ == 0)
{
goto v___jp_2510_;
}
else
{
return v___x_2525_;
}
}
}
else
{
uint8_t v___x_2526_; 
v___x_2526_ = 0;
return v___x_2526_;
}
v___jp_2510_:
{
size_t v___x_2511_; size_t v___x_2512_; 
v___x_2511_ = ((size_t)1ULL);
v___x_2512_ = lean_usize_add(v_i_2508_, v___x_2511_);
v_i_2508_ = v___x_2512_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0___boxed(lean_object* v_as_2527_, lean_object* v_i_2528_, lean_object* v_stop_2529_){
_start:
{
size_t v_i_boxed_2530_; size_t v_stop_boxed_2531_; uint8_t v_res_2532_; lean_object* v_r_2533_; 
v_i_boxed_2530_ = lean_unbox_usize(v_i_2528_);
lean_dec(v_i_2528_);
v_stop_boxed_2531_ = lean_unbox_usize(v_stop_2529_);
lean_dec(v_stop_2529_);
v_res_2532_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0(v_as_2527_, v_i_boxed_2530_, v_stop_boxed_2531_);
lean_dec_ref(v_as_2527_);
v_r_2533_ = lean_box(v_res_2532_);
return v_r_2533_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_MissingDocs_hasInheritDoc(lean_object* v_attrs_2534_){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; uint8_t v___x_2541_; 
v___x_2535_ = lean_unsigned_to_nat(0u);
v___x_2536_ = l_Lean_Syntax_getArg(v_attrs_2534_, v___x_2535_);
v___x_2537_ = lean_unsigned_to_nat(1u);
v___x_2538_ = l_Lean_Syntax_getArg(v___x_2536_, v___x_2537_);
lean_dec(v___x_2536_);
v___x_2539_ = l_Lean_Syntax_getSepArgs(v___x_2538_);
lean_dec(v___x_2538_);
v___x_2540_ = lean_array_get_size(v___x_2539_);
v___x_2541_ = lean_nat_dec_lt(v___x_2535_, v___x_2540_);
if (v___x_2541_ == 0)
{
lean_dec_ref(v___x_2539_);
return v___x_2541_;
}
else
{
if (v___x_2541_ == 0)
{
lean_dec_ref(v___x_2539_);
return v___x_2541_;
}
else
{
size_t v___x_2542_; size_t v___x_2543_; uint8_t v___x_2544_; 
v___x_2542_ = ((size_t)0ULL);
v___x_2543_ = lean_usize_of_nat(v___x_2540_);
v___x_2544_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasInheritDoc_spec__0(v___x_2539_, v___x_2542_, v___x_2543_);
lean_dec_ref(v___x_2539_);
return v___x_2544_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_hasInheritDoc___boxed(lean_object* v_attrs_2545_){
_start:
{
uint8_t v_res_2546_; lean_object* v_r_2547_; 
v_res_2546_ = l_Lean_Linter_MissingDocs_hasInheritDoc(v_attrs_2545_);
lean_dec(v_attrs_2545_);
v_r_2547_ = lean_box(v_res_2546_);
return v_r_2547_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0(lean_object* v_as_2554_, size_t v_i_2555_, size_t v_stop_2556_){
_start:
{
uint8_t v___x_2557_; 
v___x_2557_ = lean_usize_dec_eq(v_i_2555_, v_stop_2556_);
if (v___x_2557_ == 0)
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; uint8_t v___x_2562_; 
v___x_2558_ = lean_unsigned_to_nat(1u);
v___x_2559_ = lean_array_uget_borrowed(v_as_2554_, v_i_2555_);
v___x_2560_ = l_Lean_Syntax_getArg(v___x_2559_, v___x_2558_);
v___x_2561_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___closed__1));
v___x_2562_ = l_Lean_Syntax_isOfKind(v___x_2560_, v___x_2561_);
if (v___x_2562_ == 0)
{
size_t v___x_2563_; size_t v___x_2564_; 
v___x_2563_ = ((size_t)1ULL);
v___x_2564_ = lean_usize_add(v_i_2555_, v___x_2563_);
v_i_2555_ = v___x_2564_;
goto _start;
}
else
{
return v___x_2562_;
}
}
else
{
uint8_t v___x_2566_; 
v___x_2566_ = 0;
return v___x_2566_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0___boxed(lean_object* v_as_2567_, lean_object* v_i_2568_, lean_object* v_stop_2569_){
_start:
{
size_t v_i_boxed_2570_; size_t v_stop_boxed_2571_; uint8_t v_res_2572_; lean_object* v_r_2573_; 
v_i_boxed_2570_ = lean_unbox_usize(v_i_2568_);
lean_dec(v_i_2568_);
v_stop_boxed_2571_ = lean_unbox_usize(v_stop_2569_);
lean_dec(v_stop_2569_);
v_res_2572_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0(v_as_2567_, v_i_boxed_2570_, v_stop_boxed_2571_);
lean_dec_ref(v_as_2567_);
v_r_2573_ = lean_box(v_res_2572_);
return v_r_2573_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_MissingDocs_hasTacticAlt(lean_object* v_attrs_2574_){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; uint8_t v___x_2581_; 
v___x_2575_ = lean_unsigned_to_nat(0u);
v___x_2576_ = l_Lean_Syntax_getArg(v_attrs_2574_, v___x_2575_);
v___x_2577_ = lean_unsigned_to_nat(1u);
v___x_2578_ = l_Lean_Syntax_getArg(v___x_2576_, v___x_2577_);
lean_dec(v___x_2576_);
v___x_2579_ = l_Lean_Syntax_getSepArgs(v___x_2578_);
lean_dec(v___x_2578_);
v___x_2580_ = lean_array_get_size(v___x_2579_);
v___x_2581_ = lean_nat_dec_lt(v___x_2575_, v___x_2580_);
if (v___x_2581_ == 0)
{
lean_dec_ref(v___x_2579_);
return v___x_2581_;
}
else
{
if (v___x_2581_ == 0)
{
lean_dec_ref(v___x_2579_);
return v___x_2581_;
}
else
{
size_t v___x_2582_; size_t v___x_2583_; uint8_t v___x_2584_; 
v___x_2582_ = ((size_t)0ULL);
v___x_2583_ = lean_usize_of_nat(v___x_2580_);
v___x_2584_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_MissingDocs_hasTacticAlt_spec__0(v___x_2579_, v___x_2582_, v___x_2583_);
lean_dec_ref(v___x_2579_);
return v___x_2584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_hasTacticAlt___boxed(lean_object* v_attrs_2585_){
_start:
{
uint8_t v_res_2586_; lean_object* v_r_2587_; 
v_res_2586_ = l_Lean_Linter_MissingDocs_hasTacticAlt(v_attrs_2585_);
lean_dec(v_attrs_2585_);
v_r_2587_ = lean_box(v_res_2586_);
return v_r_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_declModifiersDocStatus(lean_object* v_mods_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_){
_start:
{
lean_object* v___x_2605_; lean_object* v_env_2606_; lean_object* v___x_2607_; 
v___x_2605_ = lean_st_ref_get(v_a_2600_);
v_env_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc_ref(v_env_2606_);
lean_dec(v___x_2605_);
v___x_2607_ = l_Lean_Elab_Command_getScope___redArg(v_a_2600_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2664_; 
v_a_2608_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2610_ = v___x_2607_;
v_isShared_2611_ = v_isSharedCheck_2664_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2607_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2664_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
uint8_t v___y_2613_; lean_object* v___x_2654_; uint8_t v_isModule_2655_; 
v___x_2654_ = l_Lean_Environment_header(v_env_2606_);
lean_dec_ref(v_env_2606_);
v_isModule_2655_ = lean_ctor_get_uint8(v___x_2654_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_2654_);
if (v_isModule_2655_ == 0)
{
lean_dec(v_a_2608_);
goto v___jp_2645_;
}
else
{
uint8_t v_isPublic_2656_; 
v_isPublic_2656_ = lean_ctor_get_uint8(v_a_2608_, sizeof(void*)*10 + 1);
lean_dec(v_a_2608_);
if (v_isPublic_2656_ == 0)
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
v___x_2657_ = lean_unsigned_to_nat(2u);
v___x_2658_ = l_Lean_Syntax_getArg(v_mods_2598_, v___x_2657_);
v___x_2659_ = lean_unsigned_to_nat(0u);
v___x_2660_ = l_Lean_Syntax_getArg(v___x_2658_, v___x_2659_);
lean_dec(v___x_2658_);
v___x_2661_ = l_Lean_Syntax_getKind(v___x_2660_);
v___x_2662_ = ((lean_object*)(l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__1));
v___x_2663_ = lean_name_eq(v___x_2661_, v___x_2662_);
lean_dec(v___x_2661_);
if (v___x_2663_ == 0)
{
lean_del_object(v___x_2610_);
goto v___jp_2602_;
}
else
{
v___y_2613_ = v_isModule_2655_;
goto v___jp_2612_;
}
}
else
{
goto v___jp_2645_;
}
}
v___jp_2612_:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2614_ = lean_unsigned_to_nat(1u);
v___x_2615_ = l_Lean_Syntax_getArg(v_mods_2598_, v___x_2614_);
v___x_2616_ = l_Lean_Linter_MissingDocs_hasInheritDoc(v___x_2615_);
lean_dec(v___x_2615_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; lean_object* v___x_2618_; uint8_t v___x_2619_; 
v___x_2617_ = lean_unsigned_to_nat(0u);
v___x_2618_ = l_Lean_Syntax_getArg(v_mods_2598_, v___x_2617_);
v___x_2619_ = l_Lean_Syntax_isNone(v___x_2618_);
if (v___x_2619_ == 0)
{
lean_object* v___x_2620_; 
lean_del_object(v___x_2610_);
v___x_2620_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString(v___x_2618_, v_a_2599_, v_a_2600_);
lean_dec(v___x_2618_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2631_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2623_ = v___x_2620_;
v_isShared_2624_ = v_isSharedCheck_2631_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2620_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2631_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
uint8_t v___x_2625_; 
v___x_2625_ = lean_unbox(v_a_2621_);
lean_dec(v_a_2621_);
if (v___x_2625_ == 0)
{
lean_del_object(v___x_2623_);
goto v___jp_2602_;
}
else
{
lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2629_; 
v___x_2626_ = lean_box(v___y_2613_);
v___x_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2626_);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 0, v___x_2627_);
v___x_2629_ = v___x_2623_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v___x_2627_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
v_a_2632_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2620_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2620_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
else
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2643_; 
lean_dec(v___x_2618_);
v___x_2640_ = lean_box(v___x_2616_);
v___x_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
if (v_isShared_2611_ == 0)
{
lean_ctor_set(v___x_2610_, 0, v___x_2641_);
v___x_2643_ = v___x_2610_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v___x_2641_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
else
{
lean_del_object(v___x_2610_);
goto v___jp_2602_;
}
}
v___jp_2645_:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; uint8_t v___x_2652_; 
v___x_2646_ = lean_unsigned_to_nat(2u);
v___x_2647_ = l_Lean_Syntax_getArg(v_mods_2598_, v___x_2646_);
v___x_2648_ = lean_unsigned_to_nat(0u);
v___x_2649_ = l_Lean_Syntax_getArg(v___x_2647_, v___x_2648_);
lean_dec(v___x_2647_);
v___x_2650_ = l_Lean_Syntax_getKind(v___x_2649_);
v___x_2651_ = ((lean_object*)(l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0));
v___x_2652_ = lean_name_eq(v___x_2650_, v___x_2651_);
lean_dec(v___x_2650_);
if (v___x_2652_ == 0)
{
uint8_t v___x_2653_; 
v___x_2653_ = 1;
v___y_2613_ = v___x_2653_;
goto v___jp_2612_;
}
else
{
lean_del_object(v___x_2610_);
goto v___jp_2602_;
}
}
}
}
else
{
lean_object* v_a_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2672_; 
lean_dec_ref(v_env_2606_);
v_a_2665_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2672_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2672_ == 0)
{
v___x_2667_ = v___x_2607_;
v_isShared_2668_ = v_isSharedCheck_2672_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_a_2665_);
lean_dec(v___x_2607_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2672_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2670_; 
if (v_isShared_2668_ == 0)
{
v___x_2670_ = v___x_2667_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v_a_2665_);
v___x_2670_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
return v___x_2670_;
}
}
}
v___jp_2602_:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2603_ = lean_box(0);
v___x_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
return v___x_2604_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_declModifiersDocStatus___boxed(lean_object* v_mods_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v_mods_2673_, v_a_2674_, v_a_2675_);
lean_dec(v_a_2675_);
lean_dec_ref(v_a_2674_);
lean_dec(v_mods_2673_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_declModifiersPubNoDoc(lean_object* v_mods_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v_mods_2678_, v_a_2679_, v_a_2680_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2697_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2685_ = v___x_2682_;
v_isShared_2686_ = v_isSharedCheck_2697_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2682_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2697_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
if (lean_obj_tag(v_a_2683_) == 0)
{
uint8_t v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2690_; 
v___x_2687_ = 0;
v___x_2688_ = lean_box(v___x_2687_);
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 0, v___x_2688_);
v___x_2690_ = v___x_2685_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
else
{
uint8_t v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2695_; 
lean_dec_ref_known(v_a_2683_, 1);
v___x_2692_ = 1;
v___x_2693_ = lean_box(v___x_2692_);
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 0, v___x_2693_);
v___x_2695_ = v___x_2685_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2693_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
else
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2705_; 
v_a_2698_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2700_ = v___x_2682_;
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2682_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2703_; 
if (v_isShared_2701_ == 0)
{
v___x_2703_ = v___x_2700_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2698_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_declModifiersPubNoDoc___boxed(lean_object* v_mods_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Lean_Linter_MissingDocs_declModifiersPubNoDoc(v_mods_2706_, v_a_2707_, v_a_2708_);
lean_dec(v_a_2708_);
lean_dec_ref(v_a_2707_);
lean_dec(v_mods_2706_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus(uint8_t v_isEmpty_2711_, lean_object* v_stx_2712_, lean_object* v_msg_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_){
_start:
{
if (v_isEmpty_2711_ == 0)
{
lean_object* v___x_2717_; 
v___x_2717_ = l_Lean_Linter_MissingDocs_lint(v_stx_2712_, v_msg_2713_, v_a_2714_, v_a_2715_);
return v___x_2717_;
}
else
{
lean_object* v___x_2718_; 
v___x_2718_ = l_Lean_Linter_MissingDocs_lintEmpty(v_stx_2712_, v_msg_2713_, v_a_2714_, v_a_2715_);
return v___x_2718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus___boxed(lean_object* v_isEmpty_2719_, lean_object* v_stx_2720_, lean_object* v_msg_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_){
_start:
{
uint8_t v_isEmpty_boxed_2725_; lean_object* v_res_2726_; 
v_isEmpty_boxed_2725_ = lean_unbox(v_isEmpty_2719_);
v_res_2726_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus(v_isEmpty_boxed_2725_, v_stx_2720_, v_msg_2721_, v_a_2722_, v_a_2723_);
lean_dec(v_a_2723_);
lean_dec_ref(v_a_2722_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(uint8_t v_isEmpty_2727_, lean_object* v_stx_2728_, lean_object* v_msg_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_){
_start:
{
if (v_isEmpty_2727_ == 0)
{
lean_object* v___x_2733_; 
v___x_2733_ = l_Lean_Linter_MissingDocs_lintNamed(v_stx_2728_, v_msg_2729_, v_a_2730_, v_a_2731_);
return v___x_2733_;
}
else
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_Linter_MissingDocs_lintEmptyNamed(v_stx_2728_, v_msg_2729_, v_a_2730_, v_a_2731_);
return v___x_2734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed___boxed(lean_object* v_isEmpty_2735_, lean_object* v_stx_2736_, lean_object* v_msg_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
uint8_t v_isEmpty_boxed_2741_; lean_object* v_res_2742_; 
v_isEmpty_boxed_2741_ = lean_unbox(v_isEmpty_2735_);
v_res_2742_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v_isEmpty_boxed_2741_, v_stx_2736_, v_msg_2737_, v_a_2738_, v_a_2739_);
lean_dec(v_a_2739_);
lean_dec_ref(v_a_2738_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(uint8_t v_isEmpty_2743_, lean_object* v_parent_2744_, lean_object* v_stx_2745_, lean_object* v_msg_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_){
_start:
{
if (v_isEmpty_2743_ == 0)
{
lean_object* v___x_2750_; 
v___x_2750_ = l_Lean_Linter_MissingDocs_lintField(v_parent_2744_, v_stx_2745_, v_msg_2746_, v_a_2747_, v_a_2748_);
return v___x_2750_;
}
else
{
lean_object* v___x_2751_; 
v___x_2751_ = l_Lean_Linter_MissingDocs_lintEmptyField(v_parent_2744_, v_stx_2745_, v_msg_2746_, v_a_2747_, v_a_2748_);
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField___boxed(lean_object* v_isEmpty_2752_, lean_object* v_parent_2753_, lean_object* v_stx_2754_, lean_object* v_msg_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_){
_start:
{
uint8_t v_isEmpty_boxed_2759_; lean_object* v_res_2760_; 
v_isEmpty_boxed_2759_ = lean_unbox(v_isEmpty_2752_);
v_res_2760_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(v_isEmpty_boxed_2759_, v_parent_2753_, v_stx_2754_, v_msg_2755_, v_a_2756_, v_a_2757_);
lean_dec(v_a_2757_);
lean_dec_ref(v_a_2756_);
lean_dec(v_parent_2753_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintDeclHead(lean_object* v_k_2809_, lean_object* v_id_2810_, uint8_t v_isEmpty_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_){
_start:
{
lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v___x_2820_; uint8_t v___x_2821_; 
v___x_2820_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__2));
v___x_2821_ = lean_name_eq(v_k_2809_, v___x_2820_);
if (v___x_2821_ == 0)
{
lean_object* v___x_2822_; uint8_t v___x_2823_; 
v___x_2822_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__4));
v___x_2823_ = lean_name_eq(v_k_2809_, v___x_2822_);
if (v___x_2823_ == 0)
{
lean_object* v___x_2824_; uint8_t v___x_2825_; 
v___x_2824_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__6));
v___x_2825_ = lean_name_eq(v_k_2809_, v___x_2824_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2826_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__8));
v___x_2827_ = lean_name_eq(v_k_2809_, v___x_2826_);
if (v___x_2827_ == 0)
{
lean_object* v___x_2828_; uint8_t v___x_2829_; 
v___x_2828_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__10));
v___x_2829_ = lean_name_eq(v_k_2809_, v___x_2828_);
if (v___x_2829_ == 0)
{
lean_object* v___x_2830_; uint8_t v___x_2831_; 
v___x_2830_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__12));
v___x_2831_ = lean_name_eq(v_k_2809_, v___x_2830_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2832_; uint8_t v___x_2833_; 
v___x_2832_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__14));
v___x_2833_ = lean_name_eq(v_k_2809_, v___x_2832_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; lean_object* v___x_2835_; 
lean_dec(v_id_2810_);
v___x_2834_ = lean_box(0);
v___x_2835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2834_);
return v___x_2835_;
}
else
{
lean_object* v___x_2836_; lean_object* v___x_2837_; 
v___x_2836_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__15));
v___x_2837_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v_isEmpty_2811_, v_id_2810_, v___x_2836_, v_a_2812_, v_a_2813_);
return v___x_2837_;
}
}
else
{
v___y_2816_ = v_a_2812_;
v___y_2817_ = v_a_2813_;
goto v___jp_2815_;
}
}
else
{
v___y_2816_ = v_a_2812_;
v___y_2817_ = v_a_2813_;
goto v___jp_2815_;
}
}
else
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__16));
v___x_2839_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v_isEmpty_2811_, v_id_2810_, v___x_2838_, v_a_2812_, v_a_2813_);
return v___x_2839_;
}
}
else
{
lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2840_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__17));
v___x_2841_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v_isEmpty_2811_, v_id_2810_, v___x_2840_, v_a_2812_, v_a_2813_);
return v___x_2841_;
}
}
else
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__18));
v___x_2843_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v_isEmpty_2811_, v_id_2810_, v___x_2842_, v_a_2812_, v_a_2813_);
return v___x_2843_;
}
}
else
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2844_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__19));
v___x_2845_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v_isEmpty_2811_, v_id_2810_, v___x_2844_, v_a_2812_, v_a_2813_);
return v___x_2845_;
}
v___jp_2815_:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___x_2818_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__0));
v___x_2819_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v_isEmpty_2811_, v_id_2810_, v___x_2818_, v___y_2816_, v___y_2817_);
return v___x_2819_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_lintDeclHead___boxed(lean_object* v_k_2846_, lean_object* v_id_2847_, lean_object* v_isEmpty_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_){
_start:
{
uint8_t v_isEmpty_boxed_2852_; lean_object* v_res_2853_; 
v_isEmpty_boxed_2852_ = lean_unbox(v_isEmpty_2848_);
v_res_2853_ = l_Lean_Linter_MissingDocs_lintDeclHead(v_k_2846_, v_id_2847_, v_isEmpty_boxed_2852_, v_a_2849_, v_a_2850_);
lean_dec(v_a_2850_);
lean_dec_ref(v_a_2849_);
lean_dec(v_k_2846_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus(lean_object* v_docOpt_2854_, lean_object* v_attrs_2855_, uint8_t v_checkTacticAlt_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_){
_start:
{
uint8_t v___x_2863_; 
v___x_2863_ = l_Lean_Linter_MissingDocs_hasInheritDoc(v_attrs_2855_);
if (v___x_2863_ == 0)
{
if (v_checkTacticAlt_2856_ == 0)
{
goto v___jp_2864_;
}
else
{
uint8_t v___x_2888_; 
v___x_2888_ = l_Lean_Linter_MissingDocs_hasTacticAlt(v_attrs_2855_);
if (v___x_2888_ == 0)
{
goto v___jp_2864_;
}
else
{
goto v___jp_2860_;
}
}
}
else
{
goto v___jp_2860_;
}
v___jp_2860_:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2861_ = lean_box(0);
v___x_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2861_);
return v___x_2862_;
}
v___jp_2864_:
{
uint8_t v___x_2865_; 
v___x_2865_ = l_Lean_Syntax_isNone(v_docOpt_2854_);
if (v___x_2865_ == 0)
{
lean_object* v___x_2866_; 
v___x_2866_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString(v_docOpt_2854_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2876_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2869_ = v___x_2866_;
v_isShared_2870_ = v_isSharedCheck_2876_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2866_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2876_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
uint8_t v___x_2871_; 
v___x_2871_ = lean_unbox(v_a_2867_);
if (v___x_2871_ == 0)
{
lean_del_object(v___x_2869_);
lean_dec(v_a_2867_);
goto v___jp_2860_;
}
else
{
lean_object* v___x_2872_; lean_object* v___x_2874_; 
v___x_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2872_, 0, v_a_2867_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 0, v___x_2872_);
v___x_2874_ = v___x_2869_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v___x_2872_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
v_a_2877_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v___x_2866_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2866_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
else
{
lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2885_ = lean_box(v___x_2863_);
v___x_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2885_);
v___x_2887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2886_);
return v___x_2887_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus___boxed(lean_object* v_docOpt_2889_, lean_object* v_attrs_2890_, lean_object* v_checkTacticAlt_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_){
_start:
{
uint8_t v_checkTacticAlt_boxed_2895_; lean_object* v_res_2896_; 
v_checkTacticAlt_boxed_2895_ = lean_unbox(v_checkTacticAlt_2891_);
v_res_2896_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus(v_docOpt_2889_, v_attrs_2890_, v_checkTacticAlt_boxed_2895_, v_a_2892_, v_a_2893_);
lean_dec(v_a_2893_);
lean_dec_ref(v_a_2892_);
lean_dec(v_attrs_2890_);
lean_dec(v_docOpt_2889_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1(lean_object* v_rest_2898_, lean_object* v_as_2899_, size_t v_sz_2900_, size_t v_i_2901_, lean_object* v_b_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_){
_start:
{
lean_object* v_a_2907_; uint8_t v___x_2911_; 
v___x_2911_ = lean_usize_dec_lt(v_i_2901_, v_sz_2900_);
if (v___x_2911_ == 0)
{
lean_object* v___x_2912_; 
v___x_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2912_, 0, v_b_2902_);
return v___x_2912_;
}
else
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v_a_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2913_ = lean_unsigned_to_nat(0u);
v___x_2914_ = lean_unsigned_to_nat(1u);
v___x_2915_ = lean_box(0);
v_a_2916_ = lean_array_uget_borrowed(v_as_2899_, v_i_2901_);
v___x_2917_ = l_Lean_Syntax_getArg(v_a_2916_, v___x_2913_);
v___x_2918_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v___x_2917_, v___y_2903_, v___y_2904_);
lean_dec(v___x_2917_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; 
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2918_, 1);
if (lean_obj_tag(v_a_2919_) == 1)
{
lean_object* v_val_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; uint8_t v___x_2925_; lean_object* v___x_2926_; 
v_val_2920_ = lean_ctor_get(v_a_2919_, 0);
lean_inc(v_val_2920_);
lean_dec_ref_known(v_a_2919_, 1);
v___x_2921_ = l_Lean_Syntax_getArg(v_rest_2898_, v___x_2914_);
v___x_2922_ = l_Lean_Syntax_getArg(v___x_2921_, v___x_2913_);
lean_dec(v___x_2921_);
v___x_2923_ = l_Lean_Syntax_getArg(v_a_2916_, v___x_2914_);
v___x_2924_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1___closed__0));
v___x_2925_ = lean_unbox(v_val_2920_);
lean_dec(v_val_2920_);
v___x_2926_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(v___x_2925_, v___x_2922_, v___x_2923_, v___x_2924_, v___y_2903_, v___y_2904_);
lean_dec(v___x_2922_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_dec_ref_known(v___x_2926_, 1);
v_a_2907_ = v___x_2915_;
goto v___jp_2906_;
}
else
{
return v___x_2926_;
}
}
else
{
lean_dec(v_a_2919_);
v_a_2907_ = v___x_2915_;
goto v___jp_2906_;
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
v_a_2927_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2918_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2918_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
v___jp_2906_:
{
size_t v___x_2908_; size_t v___x_2909_; 
v___x_2908_ = ((size_t)1ULL);
v___x_2909_ = lean_usize_add(v_i_2901_, v___x_2908_);
v_i_2901_ = v___x_2909_;
v_b_2902_ = v_a_2907_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1___boxed(lean_object* v_rest_2935_, lean_object* v_as_2936_, lean_object* v_sz_2937_, lean_object* v_i_2938_, lean_object* v_b_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
size_t v_sz_boxed_2943_; size_t v_i_boxed_2944_; lean_object* v_res_2945_; 
v_sz_boxed_2943_ = lean_unbox_usize(v_sz_2937_);
lean_dec(v_sz_2937_);
v_i_boxed_2944_ = lean_unbox_usize(v_i_2938_);
lean_dec(v_i_2938_);
v_res_2945_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1(v_rest_2935_, v_as_2936_, v_sz_boxed_2943_, v_i_boxed_2944_, v_b_2939_, v___y_2940_, v___y_2941_);
lean_dec(v___y_2941_);
lean_dec_ref(v___y_2940_);
lean_dec_ref(v_as_2936_);
lean_dec(v_rest_2935_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4_spec__9___redArg(lean_object* v_x_2946_, lean_object* v_x_2947_){
_start:
{
if (lean_obj_tag(v_x_2947_) == 0)
{
return v_x_2946_;
}
else
{
lean_object* v_key_2948_; lean_object* v_value_2949_; lean_object* v_tail_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2973_; 
v_key_2948_ = lean_ctor_get(v_x_2947_, 0);
v_value_2949_ = lean_ctor_get(v_x_2947_, 1);
v_tail_2950_ = lean_ctor_get(v_x_2947_, 2);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_x_2947_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2952_ = v_x_2947_;
v_isShared_2953_ = v_isSharedCheck_2973_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_tail_2950_);
lean_inc(v_value_2949_);
lean_inc(v_key_2948_);
lean_dec(v_x_2947_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2973_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2954_; uint64_t v___x_2955_; uint64_t v___x_2956_; uint64_t v___x_2957_; uint64_t v_fold_2958_; uint64_t v___x_2959_; uint64_t v___x_2960_; uint64_t v___x_2961_; size_t v___x_2962_; size_t v___x_2963_; size_t v___x_2964_; size_t v___x_2965_; size_t v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2969_; 
v___x_2954_ = lean_array_get_size(v_x_2946_);
v___x_2955_ = l_String_instHashableRaw_hash(v_key_2948_);
v___x_2956_ = 32ULL;
v___x_2957_ = lean_uint64_shift_right(v___x_2955_, v___x_2956_);
v_fold_2958_ = lean_uint64_xor(v___x_2955_, v___x_2957_);
v___x_2959_ = 16ULL;
v___x_2960_ = lean_uint64_shift_right(v_fold_2958_, v___x_2959_);
v___x_2961_ = lean_uint64_xor(v_fold_2958_, v___x_2960_);
v___x_2962_ = lean_uint64_to_usize(v___x_2961_);
v___x_2963_ = lean_usize_of_nat(v___x_2954_);
v___x_2964_ = ((size_t)1ULL);
v___x_2965_ = lean_usize_sub(v___x_2963_, v___x_2964_);
v___x_2966_ = lean_usize_land(v___x_2962_, v___x_2965_);
v___x_2967_ = lean_array_uget_borrowed(v_x_2946_, v___x_2966_);
lean_inc(v___x_2967_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 2, v___x_2967_);
v___x_2969_ = v___x_2952_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_key_2948_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v_value_2949_);
lean_ctor_set(v_reuseFailAlloc_2972_, 2, v___x_2967_);
v___x_2969_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2970_; 
v___x_2970_ = lean_array_uset(v_x_2946_, v___x_2966_, v___x_2969_);
v_x_2946_ = v___x_2970_;
v_x_2947_ = v_tail_2950_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4___redArg(lean_object* v_i_2974_, lean_object* v_source_2975_, lean_object* v_target_2976_){
_start:
{
lean_object* v___x_2977_; uint8_t v___x_2978_; 
v___x_2977_ = lean_array_get_size(v_source_2975_);
v___x_2978_ = lean_nat_dec_lt(v_i_2974_, v___x_2977_);
if (v___x_2978_ == 0)
{
lean_dec_ref(v_source_2975_);
lean_dec(v_i_2974_);
return v_target_2976_;
}
else
{
lean_object* v_es_2979_; lean_object* v___x_2980_; lean_object* v_source_2981_; lean_object* v_target_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v_es_2979_ = lean_array_fget(v_source_2975_, v_i_2974_);
v___x_2980_ = lean_box(0);
v_source_2981_ = lean_array_fset(v_source_2975_, v_i_2974_, v___x_2980_);
v_target_2982_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4_spec__9___redArg(v_target_2976_, v_es_2979_);
v___x_2983_ = lean_unsigned_to_nat(1u);
v___x_2984_ = lean_nat_add(v_i_2974_, v___x_2983_);
lean_dec(v_i_2974_);
v_i_2974_ = v___x_2984_;
v_source_2975_ = v_source_2981_;
v_target_2976_ = v_target_2982_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3___redArg(lean_object* v_data_2986_){
_start:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v_nbuckets_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2987_ = lean_array_get_size(v_data_2986_);
v___x_2988_ = lean_unsigned_to_nat(2u);
v_nbuckets_2989_ = lean_nat_mul(v___x_2987_, v___x_2988_);
v___x_2990_ = lean_unsigned_to_nat(0u);
v___x_2991_ = lean_box(0);
v___x_2992_ = lean_mk_array(v_nbuckets_2989_, v___x_2991_);
v___x_2993_ = lean_array_propagate_mark(v_data_2986_, v___x_2992_);
v___x_2994_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4___redArg(v___x_2990_, v_data_2986_, v___x_2993_);
return v___x_2994_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___redArg(lean_object* v_a_2995_, lean_object* v_x_2996_){
_start:
{
if (lean_obj_tag(v_x_2996_) == 0)
{
uint8_t v___x_2997_; 
v___x_2997_ = 0;
return v___x_2997_;
}
else
{
lean_object* v_key_2998_; lean_object* v_tail_2999_; uint8_t v_decide_3000_; 
v_key_2998_ = lean_ctor_get(v_x_2996_, 0);
v_tail_2999_ = lean_ctor_get(v_x_2996_, 2);
v_decide_3000_ = lean_nat_dec_eq(v_key_2998_, v_a_2995_);
if (v_decide_3000_ == 0)
{
v_x_2996_ = v_tail_2999_;
goto _start;
}
else
{
return v_decide_3000_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___redArg___boxed(lean_object* v_a_3002_, lean_object* v_x_3003_){
_start:
{
uint8_t v_res_3004_; lean_object* v_r_3005_; 
v_res_3004_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___redArg(v_a_3002_, v_x_3003_);
lean_dec(v_x_3003_);
lean_dec(v_a_3002_);
v_r_3005_ = lean_box(v_res_3004_);
return v_r_3005_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2___redArg(lean_object* v_m_3006_, lean_object* v_a_3007_, lean_object* v_b_3008_){
_start:
{
lean_object* v_size_3009_; lean_object* v_buckets_3010_; lean_object* v___x_3011_; uint64_t v___x_3012_; uint64_t v___x_3013_; uint64_t v___x_3014_; uint64_t v_fold_3015_; uint64_t v___x_3016_; uint64_t v___x_3017_; uint64_t v___x_3018_; size_t v___x_3019_; size_t v___x_3020_; size_t v___x_3021_; size_t v___x_3022_; size_t v___x_3023_; lean_object* v_bkt_3024_; uint8_t v___x_3025_; 
v_size_3009_ = lean_ctor_get(v_m_3006_, 0);
v_buckets_3010_ = lean_ctor_get(v_m_3006_, 1);
v___x_3011_ = lean_array_get_size(v_buckets_3010_);
v___x_3012_ = l_String_instHashableRaw_hash(v_a_3007_);
v___x_3013_ = 32ULL;
v___x_3014_ = lean_uint64_shift_right(v___x_3012_, v___x_3013_);
v_fold_3015_ = lean_uint64_xor(v___x_3012_, v___x_3014_);
v___x_3016_ = 16ULL;
v___x_3017_ = lean_uint64_shift_right(v_fold_3015_, v___x_3016_);
v___x_3018_ = lean_uint64_xor(v_fold_3015_, v___x_3017_);
v___x_3019_ = lean_uint64_to_usize(v___x_3018_);
v___x_3020_ = lean_usize_of_nat(v___x_3011_);
v___x_3021_ = ((size_t)1ULL);
v___x_3022_ = lean_usize_sub(v___x_3020_, v___x_3021_);
v___x_3023_ = lean_usize_land(v___x_3019_, v___x_3022_);
v_bkt_3024_ = lean_array_uget_borrowed(v_buckets_3010_, v___x_3023_);
v___x_3025_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___redArg(v_a_3007_, v_bkt_3024_);
if (v___x_3025_ == 0)
{
lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3046_; 
lean_inc_ref(v_buckets_3010_);
lean_inc(v_size_3009_);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_m_3006_);
if (v_isSharedCheck_3046_ == 0)
{
lean_object* v_unused_3047_; lean_object* v_unused_3048_; 
v_unused_3047_ = lean_ctor_get(v_m_3006_, 1);
lean_dec(v_unused_3047_);
v_unused_3048_ = lean_ctor_get(v_m_3006_, 0);
lean_dec(v_unused_3048_);
v___x_3027_ = v_m_3006_;
v_isShared_3028_ = v_isSharedCheck_3046_;
goto v_resetjp_3026_;
}
else
{
lean_dec(v_m_3006_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3046_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3029_; lean_object* v_size_x27_3030_; lean_object* v___x_3031_; lean_object* v_buckets_x27_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; uint8_t v___x_3038_; 
v___x_3029_ = lean_unsigned_to_nat(1u);
v_size_x27_3030_ = lean_nat_add(v_size_3009_, v___x_3029_);
lean_dec(v_size_3009_);
lean_inc(v_bkt_3024_);
v___x_3031_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3031_, 0, v_a_3007_);
lean_ctor_set(v___x_3031_, 1, v_b_3008_);
lean_ctor_set(v___x_3031_, 2, v_bkt_3024_);
v_buckets_x27_3032_ = lean_array_uset(v_buckets_3010_, v___x_3023_, v___x_3031_);
v___x_3033_ = lean_unsigned_to_nat(4u);
v___x_3034_ = lean_nat_mul(v_size_x27_3030_, v___x_3033_);
v___x_3035_ = lean_unsigned_to_nat(3u);
v___x_3036_ = lean_nat_div(v___x_3034_, v___x_3035_);
lean_dec(v___x_3034_);
v___x_3037_ = lean_array_get_size(v_buckets_x27_3032_);
v___x_3038_ = lean_nat_dec_le(v___x_3036_, v___x_3037_);
lean_dec(v___x_3036_);
if (v___x_3038_ == 0)
{
lean_object* v_val_3039_; lean_object* v___x_3041_; 
v_val_3039_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3___redArg(v_buckets_x27_3032_);
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 1, v_val_3039_);
lean_ctor_set(v___x_3027_, 0, v_size_x27_3030_);
v___x_3041_ = v___x_3027_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_size_x27_3030_);
lean_ctor_set(v_reuseFailAlloc_3042_, 1, v_val_3039_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
else
{
lean_object* v___x_3044_; 
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 1, v_buckets_x27_3032_);
lean_ctor_set(v___x_3027_, 0, v_size_x27_3030_);
v___x_3044_ = v___x_3027_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_size_x27_3030_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v_buckets_x27_3032_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
else
{
lean_dec(v_b_3008_);
lean_dec(v_a_3007_);
return v_m_3006_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6___lam__0(uint8_t v___x_3049_, lean_object* v_x_3050_, lean_object* v_info_3051_, lean_object* v_s_3052_){
_start:
{
if (lean_obj_tag(v_info_3051_) == 12)
{
lean_object* v_i_3053_; lean_object* v___x_3054_; 
v_i_3053_ = lean_ctor_get(v_info_3051_, 0);
v___x_3054_ = l_Lean_Syntax_getRange_x3f(v_i_3053_, v___x_3049_);
if (lean_obj_tag(v___x_3054_) == 1)
{
lean_object* v_val_3055_; lean_object* v_start_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
v_val_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc(v_val_3055_);
lean_dec_ref_known(v___x_3054_, 1);
v_start_3056_ = lean_ctor_get(v_val_3055_, 0);
lean_inc(v_start_3056_);
lean_dec(v_val_3055_);
v___x_3057_ = lean_box(0);
v___x_3058_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2___redArg(v_s_3052_, v_start_3056_, v___x_3057_);
return v___x_3058_;
}
else
{
lean_dec(v___x_3054_);
return v_s_3052_;
}
}
else
{
return v_s_3052_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6___lam__0___boxed(lean_object* v___x_3059_, lean_object* v_x_3060_, lean_object* v_info_3061_, lean_object* v_s_3062_){
_start:
{
uint8_t v___x_9354__boxed_3063_; lean_object* v_res_3064_; 
v___x_9354__boxed_3063_ = lean_unbox(v___x_3059_);
v_res_3064_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6___lam__0(v___x_9354__boxed_3063_, v_x_3060_, v_info_3061_, v_s_3062_);
lean_dec_ref(v_info_3061_);
lean_dec_ref(v_x_3060_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6(uint8_t v___x_3065_, lean_object* v_as_3066_, size_t v_i_3067_, size_t v_stop_3068_, lean_object* v_b_3069_){
_start:
{
uint8_t v___x_3070_; 
v___x_3070_ = lean_usize_dec_eq(v_i_3067_, v_stop_3068_);
if (v___x_3070_ == 0)
{
lean_object* v___x_3071_; lean_object* v___f_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; size_t v___x_3075_; size_t v___x_3076_; 
v___x_3071_ = lean_box(v___x_3065_);
v___f_3072_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3072_, 0, v___x_3071_);
v___x_3073_ = lean_array_uget_borrowed(v_as_3066_, v_i_3067_);
lean_inc(v___x_3073_);
v___x_3074_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___f_3072_, v_b_3069_, v___x_3073_);
v___x_3075_ = ((size_t)1ULL);
v___x_3076_ = lean_usize_add(v_i_3067_, v___x_3075_);
v_i_3067_ = v___x_3076_;
v_b_3069_ = v___x_3074_;
goto _start;
}
else
{
return v_b_3069_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6___boxed(lean_object* v___x_3078_, lean_object* v_as_3079_, lean_object* v_i_3080_, lean_object* v_stop_3081_, lean_object* v_b_3082_){
_start:
{
uint8_t v___x_9370__boxed_3083_; size_t v_i_boxed_3084_; size_t v_stop_boxed_3085_; lean_object* v_res_3086_; 
v___x_9370__boxed_3083_ = lean_unbox(v___x_3078_);
v_i_boxed_3084_ = lean_unbox_usize(v_i_3080_);
lean_dec(v_i_3080_);
v_stop_boxed_3085_ = lean_unbox_usize(v_stop_3081_);
lean_dec(v_stop_3081_);
v_res_3086_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6(v___x_9370__boxed_3083_, v_as_3079_, v_i_boxed_3084_, v_stop_boxed_3085_, v_b_3082_);
lean_dec_ref(v_as_3079_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__7(uint8_t v___x_3087_, lean_object* v_x_3088_, lean_object* v_x_3089_){
_start:
{
if (lean_obj_tag(v_x_3088_) == 0)
{
lean_object* v_cs_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; uint8_t v___x_3093_; 
v_cs_3090_ = lean_ctor_get(v_x_3088_, 0);
v___x_3091_ = lean_unsigned_to_nat(0u);
v___x_3092_ = lean_array_get_size(v_cs_3090_);
v___x_3093_ = lean_nat_dec_lt(v___x_3091_, v___x_3092_);
if (v___x_3093_ == 0)
{
return v_x_3089_;
}
else
{
size_t v___x_3094_; size_t v___x_3095_; lean_object* v___x_3096_; 
v___x_3094_ = ((size_t)0ULL);
v___x_3095_ = lean_usize_of_nat(v___x_3092_);
v___x_3096_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5_spec__7(v___x_3087_, v_cs_3090_, v___x_3094_, v___x_3095_, v_x_3089_);
return v___x_3096_;
}
}
else
{
lean_object* v_vs_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; uint8_t v___x_3100_; 
v_vs_3097_ = lean_ctor_get(v_x_3088_, 0);
v___x_3098_ = lean_unsigned_to_nat(0u);
v___x_3099_ = lean_array_get_size(v_vs_3097_);
v___x_3100_ = lean_nat_dec_lt(v___x_3098_, v___x_3099_);
if (v___x_3100_ == 0)
{
return v_x_3089_;
}
else
{
size_t v___x_3101_; size_t v___x_3102_; lean_object* v___x_3103_; 
v___x_3101_ = ((size_t)0ULL);
v___x_3102_ = lean_usize_of_nat(v___x_3099_);
v___x_3103_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6(v___x_3087_, v_vs_3097_, v___x_3101_, v___x_3102_, v_x_3089_);
return v___x_3103_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5_spec__7(uint8_t v___x_3104_, lean_object* v_as_3105_, size_t v_i_3106_, size_t v_stop_3107_, lean_object* v_b_3108_){
_start:
{
uint8_t v___x_3109_; 
v___x_3109_ = lean_usize_dec_eq(v_i_3106_, v_stop_3107_);
if (v___x_3109_ == 0)
{
lean_object* v___x_3110_; lean_object* v___x_3111_; size_t v___x_3112_; size_t v___x_3113_; 
v___x_3110_ = lean_array_uget_borrowed(v_as_3105_, v_i_3106_);
v___x_3111_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__7(v___x_3104_, v___x_3110_, v_b_3108_);
v___x_3112_ = ((size_t)1ULL);
v___x_3113_ = lean_usize_add(v_i_3106_, v___x_3112_);
v_i_3106_ = v___x_3113_;
v_b_3108_ = v___x_3111_;
goto _start;
}
else
{
return v_b_3108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5_spec__7___boxed(lean_object* v___x_3115_, lean_object* v_as_3116_, lean_object* v_i_3117_, lean_object* v_stop_3118_, lean_object* v_b_3119_){
_start:
{
uint8_t v___x_9389__boxed_3120_; size_t v_i_boxed_3121_; size_t v_stop_boxed_3122_; lean_object* v_res_3123_; 
v___x_9389__boxed_3120_ = lean_unbox(v___x_3115_);
v_i_boxed_3121_ = lean_unbox_usize(v_i_3117_);
lean_dec(v_i_3117_);
v_stop_boxed_3122_ = lean_unbox_usize(v_stop_3118_);
lean_dec(v_stop_3118_);
v_res_3123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5_spec__7(v___x_9389__boxed_3120_, v_as_3116_, v_i_boxed_3121_, v_stop_boxed_3122_, v_b_3119_);
lean_dec_ref(v_as_3116_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__7___boxed(lean_object* v___x_3124_, lean_object* v_x_3125_, lean_object* v_x_3126_){
_start:
{
uint8_t v___x_9396__boxed_3127_; lean_object* v_res_3128_; 
v___x_9396__boxed_3127_ = lean_unbox(v___x_3124_);
v_res_3128_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__7(v___x_9396__boxed_3127_, v_x_3125_, v_x_3126_);
lean_dec_ref(v_x_3125_);
return v_res_3128_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_3129_; 
v___x_3129_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5(uint8_t v___x_3130_, lean_object* v_x_3131_, size_t v_x_3132_, size_t v_x_3133_, lean_object* v_x_3134_){
_start:
{
if (lean_obj_tag(v_x_3131_) == 0)
{
lean_object* v_cs_3135_; lean_object* v___x_3136_; size_t v___x_3137_; lean_object* v_j_3138_; lean_object* v___x_3139_; size_t v___x_3140_; size_t v___x_3141_; size_t v___x_3142_; size_t v___x_3143_; size_t v___x_3144_; size_t v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; uint8_t v___x_3150_; 
v_cs_3135_ = lean_ctor_get(v_x_3131_, 0);
v___x_3136_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5___closed__0);
v___x_3137_ = lean_usize_shift_right(v_x_3132_, v_x_3133_);
v_j_3138_ = lean_usize_to_nat(v___x_3137_);
v___x_3139_ = lean_array_get_borrowed(v___x_3136_, v_cs_3135_, v_j_3138_);
v___x_3140_ = ((size_t)1ULL);
v___x_3141_ = lean_usize_shift_left(v___x_3140_, v_x_3133_);
v___x_3142_ = lean_usize_sub(v___x_3141_, v___x_3140_);
v___x_3143_ = lean_usize_land(v_x_3132_, v___x_3142_);
v___x_3144_ = ((size_t)5ULL);
v___x_3145_ = lean_usize_sub(v_x_3133_, v___x_3144_);
v___x_3146_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5(v___x_3130_, v___x_3139_, v___x_3143_, v___x_3145_, v_x_3134_);
v___x_3147_ = lean_unsigned_to_nat(1u);
v___x_3148_ = lean_nat_add(v_j_3138_, v___x_3147_);
lean_dec(v_j_3138_);
v___x_3149_ = lean_array_get_size(v_cs_3135_);
v___x_3150_ = lean_nat_dec_lt(v___x_3148_, v___x_3149_);
if (v___x_3150_ == 0)
{
lean_dec(v___x_3148_);
return v___x_3146_;
}
else
{
size_t v___x_3151_; size_t v___x_3152_; lean_object* v___x_3153_; 
v___x_3151_ = lean_usize_of_nat(v___x_3148_);
lean_dec(v___x_3148_);
v___x_3152_ = lean_usize_of_nat(v___x_3149_);
v___x_3153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5_spec__7(v___x_3130_, v_cs_3135_, v___x_3151_, v___x_3152_, v___x_3146_);
return v___x_3153_;
}
}
else
{
lean_object* v_vs_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; uint8_t v___x_3157_; 
v_vs_3154_ = lean_ctor_get(v_x_3131_, 0);
v___x_3155_ = lean_usize_to_nat(v_x_3132_);
v___x_3156_ = lean_array_get_size(v_vs_3154_);
v___x_3157_ = lean_nat_dec_lt(v___x_3155_, v___x_3156_);
if (v___x_3157_ == 0)
{
lean_dec(v___x_3155_);
return v_x_3134_;
}
else
{
size_t v___x_3158_; size_t v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = lean_usize_of_nat(v___x_3155_);
lean_dec(v___x_3155_);
v___x_3159_ = lean_usize_of_nat(v___x_3156_);
v___x_3160_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6(v___x_3130_, v_vs_3154_, v___x_3158_, v___x_3159_, v_x_3134_);
return v___x_3160_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5___boxed(lean_object* v___x_3161_, lean_object* v_x_3162_, lean_object* v_x_3163_, lean_object* v_x_3164_, lean_object* v_x_3165_){
_start:
{
uint8_t v___x_9443__boxed_3166_; size_t v_x_9445__boxed_3167_; size_t v_x_9446__boxed_3168_; lean_object* v_res_3169_; 
v___x_9443__boxed_3166_ = lean_unbox(v___x_3161_);
v_x_9445__boxed_3167_ = lean_unbox_usize(v_x_3163_);
lean_dec(v_x_3163_);
v_x_9446__boxed_3168_ = lean_unbox_usize(v_x_3164_);
lean_dec(v_x_3164_);
v_res_3169_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5(v___x_9443__boxed_3166_, v_x_3162_, v_x_9445__boxed_3167_, v_x_9446__boxed_3168_, v_x_3165_);
lean_dec_ref(v_x_3162_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3(uint8_t v___x_3170_, lean_object* v_t_3171_, lean_object* v_init_3172_, lean_object* v_start_3173_){
_start:
{
lean_object* v___x_3174_; uint8_t v___x_3175_; 
v___x_3174_ = lean_unsigned_to_nat(0u);
v___x_3175_ = lean_nat_dec_eq(v_start_3173_, v___x_3174_);
if (v___x_3175_ == 0)
{
lean_object* v_root_3176_; lean_object* v_tail_3177_; size_t v_shift_3178_; lean_object* v_tailOff_3179_; uint8_t v___x_3180_; 
v_root_3176_ = lean_ctor_get(v_t_3171_, 0);
v_tail_3177_ = lean_ctor_get(v_t_3171_, 1);
v_shift_3178_ = lean_ctor_get_usize(v_t_3171_, 4);
v_tailOff_3179_ = lean_ctor_get(v_t_3171_, 3);
v___x_3180_ = lean_nat_dec_le(v_tailOff_3179_, v_start_3173_);
if (v___x_3180_ == 0)
{
size_t v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; uint8_t v___x_3184_; 
v___x_3181_ = lean_usize_of_nat(v_start_3173_);
v___x_3182_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__5(v___x_3170_, v_root_3176_, v___x_3181_, v_shift_3178_, v_init_3172_);
v___x_3183_ = lean_array_get_size(v_tail_3177_);
v___x_3184_ = lean_nat_dec_lt(v___x_3174_, v___x_3183_);
if (v___x_3184_ == 0)
{
return v___x_3182_;
}
else
{
size_t v___x_3185_; size_t v___x_3186_; lean_object* v___x_3187_; 
v___x_3185_ = ((size_t)0ULL);
v___x_3186_ = lean_usize_of_nat(v___x_3183_);
v___x_3187_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6(v___x_3170_, v_tail_3177_, v___x_3185_, v___x_3186_, v___x_3182_);
return v___x_3187_;
}
}
else
{
lean_object* v___x_3188_; lean_object* v___x_3189_; uint8_t v___x_3190_; 
v___x_3188_ = lean_nat_sub(v_start_3173_, v_tailOff_3179_);
v___x_3189_ = lean_array_get_size(v_tail_3177_);
v___x_3190_ = lean_nat_dec_lt(v___x_3188_, v___x_3189_);
if (v___x_3190_ == 0)
{
lean_dec(v___x_3188_);
return v_init_3172_;
}
else
{
size_t v___x_3191_; size_t v___x_3192_; lean_object* v___x_3193_; 
v___x_3191_ = lean_usize_of_nat(v___x_3188_);
lean_dec(v___x_3188_);
v___x_3192_ = lean_usize_of_nat(v___x_3189_);
v___x_3193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6(v___x_3170_, v_tail_3177_, v___x_3191_, v___x_3192_, v_init_3172_);
return v___x_3193_;
}
}
}
else
{
lean_object* v_root_3194_; lean_object* v_tail_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; uint8_t v___x_3198_; 
v_root_3194_ = lean_ctor_get(v_t_3171_, 0);
v_tail_3195_ = lean_ctor_get(v_t_3171_, 1);
v___x_3196_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__7(v___x_3170_, v_root_3194_, v_init_3172_);
v___x_3197_ = lean_array_get_size(v_tail_3195_);
v___x_3198_ = lean_nat_dec_lt(v___x_3174_, v___x_3197_);
if (v___x_3198_ == 0)
{
return v___x_3196_;
}
else
{
size_t v___x_3199_; size_t v___x_3200_; lean_object* v___x_3201_; 
v___x_3199_ = ((size_t)0ULL);
v___x_3200_ = lean_usize_of_nat(v___x_3197_);
v___x_3201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3_spec__6(v___x_3170_, v_tail_3195_, v___x_3199_, v___x_3200_, v___x_3196_);
return v___x_3201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3___boxed(lean_object* v___x_3202_, lean_object* v_t_3203_, lean_object* v_init_3204_, lean_object* v_start_3205_){
_start:
{
uint8_t v___x_9509__boxed_3206_; lean_object* v_res_3207_; 
v___x_9509__boxed_3206_ = lean_unbox(v___x_3202_);
v_res_3207_ = l_Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3(v___x_9509__boxed_3206_, v_t_3203_, v_init_3204_, v_start_3205_);
lean_dec(v_start_3205_);
lean_dec_ref(v_t_3203_);
return v_res_3207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0(lean_object* v_rest_3209_, uint8_t v___y_3210_, lean_object* v_as_3211_, size_t v_sz_3212_, size_t v_i_3213_, lean_object* v_b_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_){
_start:
{
lean_object* v_a_3219_; uint8_t v___x_3223_; 
v___x_3223_ = lean_usize_dec_lt(v_i_3213_, v_sz_3212_);
if (v___x_3223_ == 0)
{
lean_object* v___x_3224_; 
v___x_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3224_, 0, v_b_3214_);
return v___x_3224_;
}
else
{
lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v_a_3228_; uint8_t v___y_3230_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3225_ = lean_unsigned_to_nat(0u);
v___x_3226_ = lean_unsigned_to_nat(1u);
v___x_3227_ = lean_box(0);
v_a_3228_ = lean_array_uget_borrowed(v_as_3211_, v_i_3213_);
v___x_3237_ = lean_unsigned_to_nat(2u);
v___x_3238_ = l_Lean_Syntax_getArg(v_a_3228_, v___x_3237_);
v___x_3239_ = l_Lean_Syntax_getArg(v_a_3228_, v___x_3225_);
v___x_3240_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString(v___x_3239_, v___y_3215_, v___y_3216_);
if (lean_obj_tag(v___x_3240_) == 0)
{
lean_object* v_a_3241_; uint8_t v___x_3257_; 
v_a_3241_ = lean_ctor_get(v___x_3240_, 0);
lean_inc(v_a_3241_);
lean_dec_ref_known(v___x_3240_, 1);
v___x_3257_ = l_Lean_Syntax_isNone(v___x_3239_);
lean_dec(v___x_3239_);
if (v___x_3257_ == 0)
{
if (v___y_3210_ == 0)
{
goto v___jp_3242_;
}
else
{
uint8_t v___x_3258_; 
v___x_3258_ = lean_unbox(v_a_3241_);
if (v___x_3258_ == 0)
{
lean_dec(v_a_3241_);
lean_dec(v___x_3238_);
v_a_3219_ = v___x_3227_;
goto v___jp_3218_;
}
else
{
goto v___jp_3242_;
}
}
}
else
{
goto v___jp_3242_;
}
v___jp_3242_:
{
lean_object* v___x_3243_; 
v___x_3243_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v___x_3238_, v___y_3215_, v___y_3216_);
lean_dec(v___x_3238_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v_a_3244_; 
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v___x_3243_, 1);
if (lean_obj_tag(v_a_3244_) == 1)
{
uint8_t v___x_3245_; 
v___x_3245_ = lean_unbox(v_a_3241_);
if (v___x_3245_ == 0)
{
lean_object* v_val_3246_; uint8_t v___x_3247_; 
lean_dec(v_a_3241_);
v_val_3246_ = lean_ctor_get(v_a_3244_, 0);
lean_inc(v_val_3246_);
lean_dec_ref_known(v_a_3244_, 1);
v___x_3247_ = lean_unbox(v_val_3246_);
lean_dec(v_val_3246_);
v___y_3230_ = v___x_3247_;
goto v___jp_3229_;
}
else
{
uint8_t v___x_3248_; 
lean_dec_ref_known(v_a_3244_, 1);
v___x_3248_ = lean_unbox(v_a_3241_);
lean_dec(v_a_3241_);
v___y_3230_ = v___x_3248_;
goto v___jp_3229_;
}
}
else
{
lean_dec(v_a_3244_);
lean_dec(v_a_3241_);
v_a_3219_ = v___x_3227_;
goto v___jp_3218_;
}
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
lean_dec(v_a_3241_);
v_a_3249_ = lean_ctor_get(v___x_3243_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3243_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3243_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3243_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
}
else
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
lean_dec(v___x_3239_);
lean_dec(v___x_3238_);
v_a_3259_ = lean_ctor_get(v___x_3240_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3240_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3240_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3240_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3259_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
v___jp_3229_:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3231_ = l_Lean_Syntax_getArg(v_rest_3209_, v___x_3226_);
v___x_3232_ = l_Lean_Syntax_getArg(v___x_3231_, v___x_3225_);
lean_dec(v___x_3231_);
v___x_3233_ = lean_unsigned_to_nat(3u);
v___x_3234_ = l_Lean_Syntax_getArg(v_a_3228_, v___x_3233_);
v___x_3235_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0___closed__0));
v___x_3236_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(v___y_3230_, v___x_3232_, v___x_3234_, v___x_3235_, v___y_3215_, v___y_3216_);
lean_dec(v___x_3232_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_dec_ref_known(v___x_3236_, 1);
v_a_3219_ = v___x_3227_;
goto v___jp_3218_;
}
else
{
return v___x_3236_;
}
}
}
v___jp_3218_:
{
size_t v___x_3220_; size_t v___x_3221_; 
v___x_3220_ = ((size_t)1ULL);
v___x_3221_ = lean_usize_add(v_i_3213_, v___x_3220_);
v_i_3213_ = v___x_3221_;
v_b_3214_ = v_a_3219_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0___boxed(lean_object* v_rest_3267_, lean_object* v___y_3268_, lean_object* v_as_3269_, lean_object* v_sz_3270_, lean_object* v_i_3271_, lean_object* v_b_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_){
_start:
{
uint8_t v___y_9558__boxed_3276_; size_t v_sz_boxed_3277_; size_t v_i_boxed_3278_; lean_object* v_res_3279_; 
v___y_9558__boxed_3276_ = lean_unbox(v___y_3268_);
v_sz_boxed_3277_ = lean_unbox_usize(v_sz_3270_);
lean_dec(v_sz_3270_);
v_i_boxed_3278_ = lean_unbox_usize(v_i_3271_);
lean_dec(v_i_3271_);
v_res_3279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0(v_rest_3267_, v___y_9558__boxed_3276_, v_as_3269_, v_sz_boxed_3277_, v_i_boxed_3278_, v_b_3272_, v___y_3273_, v___y_3274_);
lean_dec(v___y_3274_);
lean_dec_ref(v___y_3273_);
lean_dec_ref(v_as_3269_);
lean_dec(v_rest_3267_);
return v_res_3279_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg(lean_object* v_m_3280_, lean_object* v_a_3281_){
_start:
{
lean_object* v_buckets_3282_; lean_object* v___x_3283_; uint64_t v___x_3284_; uint64_t v___x_3285_; uint64_t v___x_3286_; uint64_t v_fold_3287_; uint64_t v___x_3288_; uint64_t v___x_3289_; uint64_t v___x_3290_; size_t v___x_3291_; size_t v___x_3292_; size_t v___x_3293_; size_t v___x_3294_; size_t v___x_3295_; lean_object* v___x_3296_; uint8_t v___x_3297_; 
v_buckets_3282_ = lean_ctor_get(v_m_3280_, 1);
v___x_3283_ = lean_array_get_size(v_buckets_3282_);
v___x_3284_ = l_String_instHashableRaw_hash(v_a_3281_);
v___x_3285_ = 32ULL;
v___x_3286_ = lean_uint64_shift_right(v___x_3284_, v___x_3285_);
v_fold_3287_ = lean_uint64_xor(v___x_3284_, v___x_3286_);
v___x_3288_ = 16ULL;
v___x_3289_ = lean_uint64_shift_right(v_fold_3287_, v___x_3288_);
v___x_3290_ = lean_uint64_xor(v_fold_3287_, v___x_3289_);
v___x_3291_ = lean_uint64_to_usize(v___x_3290_);
v___x_3292_ = lean_usize_of_nat(v___x_3283_);
v___x_3293_ = ((size_t)1ULL);
v___x_3294_ = lean_usize_sub(v___x_3292_, v___x_3293_);
v___x_3295_ = lean_usize_land(v___x_3291_, v___x_3294_);
v___x_3296_ = lean_array_uget_borrowed(v_buckets_3282_, v___x_3295_);
v___x_3297_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___redArg(v_a_3281_, v___x_3296_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg___boxed(lean_object* v_m_3298_, lean_object* v_a_3299_){
_start:
{
uint8_t v_res_3300_; lean_object* v_r_3301_; 
v_res_3300_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg(v_m_3298_, v_a_3299_);
lean_dec(v_a_3299_);
lean_dec_ref(v_m_3298_);
v_r_3301_ = lean_box(v_res_3300_);
return v_r_3301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10(uint8_t v_val_3303_, lean_object* v___x_3304_, uint8_t v___x_3305_, lean_object* v___x_3306_, lean_object* v_as_3307_, size_t v_sz_3308_, size_t v_i_3309_, lean_object* v_b_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_){
_start:
{
lean_object* v_a_3315_; uint8_t v___x_3319_; 
v___x_3319_ = lean_usize_dec_lt(v_i_3309_, v_sz_3308_);
if (v___x_3319_ == 0)
{
lean_object* v___x_3320_; 
v___x_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3320_, 0, v_b_3310_);
return v___x_3320_;
}
else
{
lean_object* v___x_3321_; lean_object* v_a_3322_; lean_object* v___y_3324_; lean_object* v___y_3325_; lean_object* v___x_3328_; 
v___x_3321_ = lean_box(0);
v_a_3322_ = lean_array_uget_borrowed(v_as_3307_, v_i_3309_);
v___x_3328_ = l_Lean_Syntax_getRange_x3f(v_a_3322_, v___x_3305_);
if (lean_obj_tag(v___x_3328_) == 1)
{
lean_object* v_val_3329_; lean_object* v_start_3330_; uint8_t v___x_3331_; 
v_val_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_val_3329_);
lean_dec_ref_known(v___x_3328_, 1);
v_start_3330_ = lean_ctor_get(v_val_3329_, 0);
lean_inc(v_start_3330_);
lean_dec(v_val_3329_);
v___x_3331_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg(v___x_3306_, v_start_3330_);
lean_dec(v_start_3330_);
if (v___x_3331_ == 0)
{
v___y_3324_ = v___y_3311_;
v___y_3325_ = v___y_3312_;
goto v___jp_3323_;
}
else
{
v_a_3315_ = v___x_3321_;
goto v___jp_3314_;
}
}
else
{
lean_dec(v___x_3328_);
v___y_3324_ = v___y_3311_;
v___y_3325_ = v___y_3312_;
goto v___jp_3323_;
}
v___jp_3323_:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; 
v___x_3326_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___closed__0));
lean_inc(v_a_3322_);
v___x_3327_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(v_val_3303_, v___x_3304_, v_a_3322_, v___x_3326_, v___y_3324_, v___y_3325_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_dec_ref_known(v___x_3327_, 1);
v_a_3315_ = v___x_3321_;
goto v___jp_3314_;
}
else
{
return v___x_3327_;
}
}
}
v___jp_3314_:
{
size_t v___x_3316_; size_t v___x_3317_; 
v___x_3316_ = ((size_t)1ULL);
v___x_3317_ = lean_usize_add(v_i_3309_, v___x_3316_);
v_i_3309_ = v___x_3317_;
v_b_3310_ = v_a_3315_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___boxed(lean_object* v_val_3332_, lean_object* v___x_3333_, lean_object* v___x_3334_, lean_object* v___x_3335_, lean_object* v_as_3336_, lean_object* v_sz_3337_, lean_object* v_i_3338_, lean_object* v_b_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_){
_start:
{
uint8_t v_val_9702__boxed_3343_; uint8_t v___x_9704__boxed_3344_; size_t v_sz_boxed_3345_; size_t v_i_boxed_3346_; lean_object* v_res_3347_; 
v_val_9702__boxed_3343_ = lean_unbox(v_val_3332_);
v___x_9704__boxed_3344_ = lean_unbox(v___x_3334_);
v_sz_boxed_3345_ = lean_unbox_usize(v_sz_3337_);
lean_dec(v_sz_3337_);
v_i_boxed_3346_ = lean_unbox_usize(v_i_3338_);
lean_dec(v_i_3338_);
v_res_3347_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10(v_val_9702__boxed_3343_, v___x_3333_, v___x_9704__boxed_3344_, v___x_3335_, v_as_3336_, v_sz_boxed_3345_, v_i_boxed_3346_, v_b_3339_, v___y_3340_, v___y_3341_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec_ref(v_as_3336_);
lean_dec_ref(v___x_3335_);
lean_dec(v___x_3333_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5(lean_object* v___x_3348_, uint8_t v___x_3349_, lean_object* v___x_3350_, uint8_t v_val_3351_, lean_object* v_as_3352_, size_t v_sz_3353_, size_t v_i_3354_, lean_object* v_b_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v_a_3360_; uint8_t v___x_3364_; 
v___x_3364_ = lean_usize_dec_lt(v_i_3354_, v_sz_3353_);
if (v___x_3364_ == 0)
{
lean_object* v___x_3365_; 
v___x_3365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3365_, 0, v_b_3355_);
return v___x_3365_;
}
else
{
lean_object* v___x_3366_; lean_object* v_a_3367_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v___x_3373_; 
v___x_3366_ = lean_box(0);
v_a_3367_ = lean_array_uget_borrowed(v_as_3352_, v_i_3354_);
v___x_3373_ = l_Lean_Syntax_getRange_x3f(v_a_3367_, v___x_3349_);
if (lean_obj_tag(v___x_3373_) == 1)
{
lean_object* v_val_3374_; lean_object* v_start_3375_; uint8_t v___x_3376_; 
v_val_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_val_3374_);
lean_dec_ref_known(v___x_3373_, 1);
v_start_3375_ = lean_ctor_get(v_val_3374_, 0);
lean_inc(v_start_3375_);
lean_dec(v_val_3374_);
v___x_3376_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg(v___x_3350_, v_start_3375_);
lean_dec(v_start_3375_);
if (v___x_3376_ == 0)
{
v___y_3369_ = v___y_3356_;
v___y_3370_ = v___y_3357_;
goto v___jp_3368_;
}
else
{
v_a_3360_ = v___x_3366_;
goto v___jp_3359_;
}
}
else
{
lean_dec(v___x_3373_);
v___y_3369_ = v___y_3356_;
v___y_3370_ = v___y_3357_;
goto v___jp_3368_;
}
v___jp_3368_:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___closed__0));
lean_inc(v_a_3367_);
v___x_3372_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(v_val_3351_, v___x_3348_, v_a_3367_, v___x_3371_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3372_) == 0)
{
lean_dec_ref_known(v___x_3372_, 1);
v_a_3360_ = v___x_3366_;
goto v___jp_3359_;
}
else
{
return v___x_3372_;
}
}
}
v___jp_3359_:
{
size_t v___x_3361_; size_t v___x_3362_; lean_object* v___x_3363_; 
v___x_3361_ = ((size_t)1ULL);
v___x_3362_ = lean_usize_add(v_i_3354_, v___x_3361_);
v___x_3363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10(v_val_3351_, v___x_3348_, v___x_3349_, v___x_3350_, v_as_3352_, v_sz_3353_, v___x_3362_, v_a_3360_, v___y_3356_, v___y_3357_);
return v___x_3363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5___boxed(lean_object* v___x_3377_, lean_object* v___x_3378_, lean_object* v___x_3379_, lean_object* v_val_3380_, lean_object* v_as_3381_, lean_object* v_sz_3382_, lean_object* v_i_3383_, lean_object* v_b_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
uint8_t v___x_9760__boxed_3388_; uint8_t v_val_9762__boxed_3389_; size_t v_sz_boxed_3390_; size_t v_i_boxed_3391_; lean_object* v_res_3392_; 
v___x_9760__boxed_3388_ = lean_unbox(v___x_3378_);
v_val_9762__boxed_3389_ = lean_unbox(v_val_3380_);
v_sz_boxed_3390_ = lean_unbox_usize(v_sz_3382_);
lean_dec(v_sz_3382_);
v_i_boxed_3391_ = lean_unbox_usize(v_i_3383_);
lean_dec(v_i_3383_);
v_res_3392_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5(v___x_3377_, v___x_9760__boxed_3388_, v___x_3379_, v_val_9762__boxed_3389_, v_as_3381_, v_sz_boxed_3390_, v_i_boxed_3391_, v_b_3384_, v___y_3385_, v___y_3386_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
lean_dec_ref(v_as_3381_);
lean_dec_ref(v___x_3379_);
lean_dec(v___x_3377_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12(lean_object* v___x_3399_, uint8_t v___x_3400_, lean_object* v___x_3401_, lean_object* v_as_3402_, size_t v_sz_3403_, size_t v_i_3404_, lean_object* v_b_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v_a_3410_; uint8_t v___x_3414_; 
v___x_3414_ = lean_usize_dec_lt(v_i_3404_, v_sz_3403_);
if (v___x_3414_ == 0)
{
lean_object* v___x_3415_; 
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v_b_3405_);
return v___x_3415_;
}
else
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v_a_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3416_ = lean_unsigned_to_nat(0u);
v___x_3417_ = lean_unsigned_to_nat(2u);
v___x_3418_ = lean_box(0);
v___x_3419_ = lean_unsigned_to_nat(1u);
v_a_3420_ = lean_array_uget_borrowed(v_as_3402_, v_i_3404_);
v___x_3421_ = l_Lean_Syntax_getArg(v_a_3420_, v___x_3416_);
v___x_3422_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v___x_3421_, v___y_3406_, v___y_3407_);
lean_dec(v___x_3421_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_a_3423_);
lean_dec_ref_known(v___x_3422_, 1);
if (lean_obj_tag(v_a_3423_) == 1)
{
lean_object* v_val_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; uint8_t v___x_3427_; 
v_val_3424_ = lean_ctor_get(v_a_3423_, 0);
lean_inc(v_val_3424_);
lean_dec_ref_known(v_a_3423_, 1);
lean_inc(v_a_3420_);
v___x_3425_ = l_Lean_Syntax_getKind(v_a_3420_);
v___x_3426_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1));
v___x_3427_ = lean_name_eq(v___x_3425_, v___x_3426_);
lean_dec(v___x_3425_);
if (v___x_3427_ == 0)
{
lean_object* v___x_3428_; lean_object* v___x_3429_; size_t v_sz_3430_; size_t v___x_3431_; uint8_t v___x_3432_; lean_object* v___x_3433_; 
v___x_3428_ = l_Lean_Syntax_getArg(v_a_3420_, v___x_3417_);
v___x_3429_ = l_Lean_Syntax_getArgs(v___x_3428_);
lean_dec(v___x_3428_);
v_sz_3430_ = lean_array_size(v___x_3429_);
v___x_3431_ = ((size_t)0ULL);
v___x_3432_ = lean_unbox(v_val_3424_);
lean_dec(v_val_3424_);
v___x_3433_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5(v___x_3399_, v___x_3400_, v___x_3401_, v___x_3432_, v___x_3429_, v_sz_3430_, v___x_3431_, v___x_3418_, v___y_3406_, v___y_3407_);
lean_dec_ref(v___x_3429_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_dec_ref_known(v___x_3433_, 1);
v_a_3410_ = v___x_3418_;
goto v___jp_3409_;
}
else
{
return v___x_3433_;
}
}
else
{
lean_object* v___x_3434_; lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v___x_3441_; 
v___x_3434_ = l_Lean_Syntax_getArg(v_a_3420_, v___x_3419_);
v___x_3441_ = l_Lean_Syntax_getRange_x3f(v___x_3434_, v___x_3400_);
if (lean_obj_tag(v___x_3441_) == 1)
{
lean_object* v_val_3442_; lean_object* v_start_3443_; uint8_t v___x_3444_; 
v_val_3442_ = lean_ctor_get(v___x_3441_, 0);
lean_inc(v_val_3442_);
lean_dec_ref_known(v___x_3441_, 1);
v_start_3443_ = lean_ctor_get(v_val_3442_, 0);
lean_inc(v_start_3443_);
lean_dec(v_val_3442_);
v___x_3444_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg(v___x_3401_, v_start_3443_);
lean_dec(v_start_3443_);
if (v___x_3444_ == 0)
{
v___y_3436_ = v___y_3406_;
v___y_3437_ = v___y_3407_;
goto v___jp_3435_;
}
else
{
lean_dec(v___x_3434_);
lean_dec(v_val_3424_);
v_a_3410_ = v___x_3418_;
goto v___jp_3409_;
}
}
else
{
lean_dec(v___x_3441_);
v___y_3436_ = v___y_3406_;
v___y_3437_ = v___y_3407_;
goto v___jp_3435_;
}
v___jp_3435_:
{
lean_object* v___x_3438_; uint8_t v___x_3439_; lean_object* v___x_3440_; 
v___x_3438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___closed__0));
v___x_3439_ = lean_unbox(v_val_3424_);
lean_dec(v_val_3424_);
v___x_3440_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(v___x_3439_, v___x_3399_, v___x_3434_, v___x_3438_, v___y_3436_, v___y_3437_);
if (lean_obj_tag(v___x_3440_) == 0)
{
lean_dec_ref_known(v___x_3440_, 1);
v_a_3410_ = v___x_3418_;
goto v___jp_3409_;
}
else
{
return v___x_3440_;
}
}
}
}
else
{
lean_dec(v_a_3423_);
v_a_3410_ = v___x_3418_;
goto v___jp_3409_;
}
}
else
{
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3452_; 
v_a_3445_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3447_ = v___x_3422_;
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v___x_3422_);
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
v___jp_3409_:
{
size_t v___x_3411_; size_t v___x_3412_; 
v___x_3411_ = ((size_t)1ULL);
v___x_3412_ = lean_usize_add(v_i_3404_, v___x_3411_);
v_i_3404_ = v___x_3412_;
v_b_3405_ = v_a_3410_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___boxed(lean_object* v___x_3453_, lean_object* v___x_3454_, lean_object* v___x_3455_, lean_object* v_as_3456_, lean_object* v_sz_3457_, lean_object* v_i_3458_, lean_object* v_b_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_){
_start:
{
uint8_t v___x_9831__boxed_3463_; size_t v_sz_boxed_3464_; size_t v_i_boxed_3465_; lean_object* v_res_3466_; 
v___x_9831__boxed_3463_ = lean_unbox(v___x_3454_);
v_sz_boxed_3464_ = lean_unbox_usize(v_sz_3457_);
lean_dec(v_sz_3457_);
v_i_boxed_3465_ = lean_unbox_usize(v_i_3458_);
lean_dec(v_i_3458_);
v_res_3466_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12(v___x_3453_, v___x_9831__boxed_3463_, v___x_3455_, v_as_3456_, v_sz_boxed_3464_, v_i_boxed_3465_, v_b_3459_, v___y_3460_, v___y_3461_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec_ref(v_as_3456_);
lean_dec_ref(v___x_3455_);
lean_dec(v___x_3453_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6(lean_object* v___x_3467_, uint8_t v___x_3468_, lean_object* v___x_3469_, lean_object* v_as_3470_, size_t v_sz_3471_, size_t v_i_3472_, lean_object* v_b_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v_a_3478_; uint8_t v___x_3482_; 
v___x_3482_ = lean_usize_dec_lt(v_i_3472_, v_sz_3471_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; 
v___x_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3483_, 0, v_b_3473_);
return v___x_3483_;
}
else
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v_a_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3484_ = lean_unsigned_to_nat(0u);
v___x_3485_ = lean_box(0);
v___x_3486_ = lean_unsigned_to_nat(2u);
v___x_3487_ = lean_unsigned_to_nat(1u);
v_a_3488_ = lean_array_uget_borrowed(v_as_3470_, v_i_3472_);
v___x_3489_ = l_Lean_Syntax_getArg(v_a_3488_, v___x_3484_);
v___x_3490_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v___x_3489_, v___y_3474_, v___y_3475_);
lean_dec(v___x_3489_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v_a_3491_; 
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
lean_inc(v_a_3491_);
lean_dec_ref_known(v___x_3490_, 1);
if (lean_obj_tag(v_a_3491_) == 1)
{
lean_object* v_val_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; uint8_t v___x_3495_; 
v_val_3492_ = lean_ctor_get(v_a_3491_, 0);
lean_inc(v_val_3492_);
lean_dec_ref_known(v_a_3491_, 1);
lean_inc(v_a_3488_);
v___x_3493_ = l_Lean_Syntax_getKind(v_a_3488_);
v___x_3494_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12___closed__1));
v___x_3495_ = lean_name_eq(v___x_3493_, v___x_3494_);
lean_dec(v___x_3493_);
if (v___x_3495_ == 0)
{
lean_object* v___x_3496_; lean_object* v___x_3497_; size_t v_sz_3498_; size_t v___x_3499_; uint8_t v___x_3500_; lean_object* v___x_3501_; 
v___x_3496_ = l_Lean_Syntax_getArg(v_a_3488_, v___x_3486_);
v___x_3497_ = l_Lean_Syntax_getArgs(v___x_3496_);
lean_dec(v___x_3496_);
v_sz_3498_ = lean_array_size(v___x_3497_);
v___x_3499_ = ((size_t)0ULL);
v___x_3500_ = lean_unbox(v_val_3492_);
lean_dec(v_val_3492_);
v___x_3501_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5(v___x_3467_, v___x_3468_, v___x_3469_, v___x_3500_, v___x_3497_, v_sz_3498_, v___x_3499_, v___x_3485_, v___y_3474_, v___y_3475_);
lean_dec_ref(v___x_3497_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_dec_ref_known(v___x_3501_, 1);
v_a_3478_ = v___x_3485_;
goto v___jp_3477_;
}
else
{
return v___x_3501_;
}
}
else
{
lean_object* v___x_3502_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___x_3509_; 
v___x_3502_ = l_Lean_Syntax_getArg(v_a_3488_, v___x_3487_);
v___x_3509_ = l_Lean_Syntax_getRange_x3f(v___x_3502_, v___x_3468_);
if (lean_obj_tag(v___x_3509_) == 1)
{
lean_object* v_val_3510_; lean_object* v_start_3511_; uint8_t v___x_3512_; 
v_val_3510_ = lean_ctor_get(v___x_3509_, 0);
lean_inc(v_val_3510_);
lean_dec_ref_known(v___x_3509_, 1);
v_start_3511_ = lean_ctor_get(v_val_3510_, 0);
lean_inc(v_start_3511_);
lean_dec(v_val_3510_);
v___x_3512_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg(v___x_3469_, v_start_3511_);
lean_dec(v_start_3511_);
if (v___x_3512_ == 0)
{
v___y_3504_ = v___y_3474_;
v___y_3505_ = v___y_3475_;
goto v___jp_3503_;
}
else
{
lean_dec(v___x_3502_);
lean_dec(v_val_3492_);
v_a_3478_ = v___x_3485_;
goto v___jp_3477_;
}
}
else
{
lean_dec(v___x_3509_);
v___y_3504_ = v___y_3474_;
v___y_3505_ = v___y_3475_;
goto v___jp_3503_;
}
v___jp_3503_:
{
lean_object* v___x_3506_; uint8_t v___x_3507_; lean_object* v___x_3508_; 
v___x_3506_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__5_spec__10___closed__0));
v___x_3507_ = lean_unbox(v_val_3492_);
lean_dec(v_val_3492_);
v___x_3508_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusField(v___x_3507_, v___x_3467_, v___x_3502_, v___x_3506_, v___y_3504_, v___y_3505_);
if (lean_obj_tag(v___x_3508_) == 0)
{
lean_dec_ref_known(v___x_3508_, 1);
v_a_3478_ = v___x_3485_;
goto v___jp_3477_;
}
else
{
return v___x_3508_;
}
}
}
}
else
{
lean_dec(v_a_3491_);
v_a_3478_ = v___x_3485_;
goto v___jp_3477_;
}
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
v_a_3513_ = lean_ctor_get(v___x_3490_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3490_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3490_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3490_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
v___jp_3477_:
{
size_t v___x_3479_; size_t v___x_3480_; lean_object* v___x_3481_; 
v___x_3479_ = ((size_t)1ULL);
v___x_3480_ = lean_usize_add(v_i_3472_, v___x_3479_);
v___x_3481_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6_spec__12(v___x_3467_, v___x_3468_, v___x_3469_, v_as_3470_, v_sz_3471_, v___x_3480_, v_a_3478_, v___y_3474_, v___y_3475_);
return v___x_3481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6___boxed(lean_object* v___x_3521_, lean_object* v___x_3522_, lean_object* v___x_3523_, lean_object* v_as_3524_, lean_object* v_sz_3525_, lean_object* v_i_3526_, lean_object* v_b_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_){
_start:
{
uint8_t v___x_9951__boxed_3531_; size_t v_sz_boxed_3532_; size_t v_i_boxed_3533_; lean_object* v_res_3534_; 
v___x_9951__boxed_3531_ = lean_unbox(v___x_3522_);
v_sz_boxed_3532_ = lean_unbox_usize(v_sz_3525_);
lean_dec(v_sz_3525_);
v_i_boxed_3533_ = lean_unbox_usize(v_i_3526_);
lean_dec(v_i_3526_);
v_res_3534_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6(v___x_3521_, v___x_9951__boxed_3531_, v___x_3523_, v_as_3524_, v_sz_boxed_3532_, v_i_boxed_3533_, v_b_3527_, v___y_3528_, v___y_3529_);
lean_dec(v___y_3529_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v_as_3524_);
lean_dec_ref(v___x_3523_);
lean_dec(v___x_3521_);
return v_res_3534_;
}
}
static lean_object* _init_l_Lean_Linter_MissingDocs_checkDecl___closed__0(void){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3535_ = lean_box(0);
v___x_3536_ = lean_unsigned_to_nat(16u);
v___x_3537_ = lean_mk_array(v___x_3536_, v___x_3535_);
return v___x_3537_;
}
}
static lean_object* _init_l_Lean_Linter_MissingDocs_checkDecl___closed__1(void){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3538_ = lean_obj_once(&l_Lean_Linter_MissingDocs_checkDecl___closed__0, &l_Lean_Linter_MissingDocs_checkDecl___closed__0_once, _init_l_Lean_Linter_MissingDocs_checkDecl___closed__0);
v___x_3539_ = lean_unsigned_to_nat(0u);
v___x_3540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3539_);
lean_ctor_set(v___x_3540_, 1, v___x_3538_);
return v___x_3540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkDecl(lean_object* v_stx_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_){
_start:
{
lean_object* v___x_3548_; lean_object* v_head_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; uint8_t v___x_3555_; 
v___x_3548_ = lean_unsigned_to_nat(0u);
v_head_3549_ = l_Lean_Syntax_getArg(v_stx_3541_, v___x_3548_);
v___x_3550_ = lean_unsigned_to_nat(2u);
v___x_3551_ = l_Lean_Syntax_getArg(v_head_3549_, v___x_3550_);
v___x_3552_ = l_Lean_Syntax_getArg(v___x_3551_, v___x_3548_);
lean_dec(v___x_3551_);
v___x_3553_ = l_Lean_Syntax_getKind(v___x_3552_);
v___x_3554_ = ((lean_object*)(l_Lean_Linter_MissingDocs_declModifiersDocStatus___closed__0));
v___x_3555_ = lean_name_eq(v___x_3553_, v___x_3554_);
lean_dec(v___x_3553_);
if (v___x_3555_ == 0)
{
lean_object* v___x_3556_; lean_object* v_rest_3557_; lean_object* v___y_3559_; lean_object* v___y_3560_; uint8_t v___y_3561_; lean_object* v_k_3585_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___x_3620_; 
v___x_3556_ = lean_unsigned_to_nat(1u);
v_rest_3557_ = l_Lean_Syntax_getArg(v_stx_3541_, v___x_3556_);
lean_inc(v_rest_3557_);
v_k_3585_ = l_Lean_Syntax_getKind(v_rest_3557_);
v___x_3620_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v_head_3549_, v_a_3542_, v_a_3543_);
lean_dec(v_head_3549_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
lean_inc(v_a_3621_);
lean_dec_ref_known(v___x_3620_, 1);
if (lean_obj_tag(v_a_3621_) == 1)
{
lean_object* v_val_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; uint8_t v___x_3625_; lean_object* v___x_3626_; 
v_val_3622_ = lean_ctor_get(v_a_3621_, 0);
lean_inc(v_val_3622_);
lean_dec_ref_known(v_a_3621_, 1);
v___x_3623_ = l_Lean_Syntax_getArg(v_rest_3557_, v___x_3556_);
v___x_3624_ = l_Lean_Syntax_getArg(v___x_3623_, v___x_3548_);
lean_dec(v___x_3623_);
v___x_3625_ = lean_unbox(v_val_3622_);
lean_dec(v_val_3622_);
v___x_3626_ = l_Lean_Linter_MissingDocs_lintDeclHead(v_k_3585_, v___x_3624_, v___x_3625_, v_a_3542_, v_a_3543_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_dec_ref_known(v___x_3626_, 1);
v___y_3587_ = v_a_3542_;
v___y_3588_ = v_a_3543_;
goto v___jp_3586_;
}
else
{
lean_dec(v_k_3585_);
lean_dec(v_rest_3557_);
return v___x_3626_;
}
}
else
{
lean_dec(v_a_3621_);
v___y_3587_ = v_a_3542_;
v___y_3588_ = v_a_3543_;
goto v___jp_3586_;
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_dec(v_k_3585_);
lean_dec(v_rest_3557_);
v_a_3627_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3620_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3620_);
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
v___jp_3558_:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; size_t v_sz_3566_; size_t v___x_3567_; lean_object* v___x_3568_; 
v___x_3562_ = lean_unsigned_to_nat(4u);
v___x_3563_ = l_Lean_Syntax_getArg(v_rest_3557_, v___x_3562_);
v___x_3564_ = l_Lean_Syntax_getArgs(v___x_3563_);
lean_dec(v___x_3563_);
v___x_3565_ = lean_box(0);
v_sz_3566_ = lean_array_size(v___x_3564_);
v___x_3567_ = ((size_t)0ULL);
v___x_3568_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__0(v_rest_3557_, v___y_3561_, v___x_3564_, v_sz_3566_, v___x_3567_, v___x_3565_, v___y_3560_, v___y_3559_);
lean_dec_ref(v___x_3564_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v___x_3569_; lean_object* v___x_3570_; uint8_t v___x_3571_; 
lean_dec_ref_known(v___x_3568_, 1);
v___x_3569_ = lean_unsigned_to_nat(5u);
v___x_3570_ = l_Lean_Syntax_getArg(v_rest_3557_, v___x_3569_);
v___x_3571_ = l_Lean_Syntax_isNone(v___x_3570_);
if (v___x_3571_ == 0)
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; size_t v_sz_3575_; lean_object* v___x_3576_; 
v___x_3572_ = l_Lean_Syntax_getArg(v___x_3570_, v___x_3548_);
lean_dec(v___x_3570_);
v___x_3573_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3556_);
lean_dec(v___x_3572_);
v___x_3574_ = l_Lean_Syntax_getArgs(v___x_3573_);
lean_dec(v___x_3573_);
v_sz_3575_ = lean_array_size(v___x_3574_);
v___x_3576_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__1(v_rest_3557_, v___x_3574_, v_sz_3575_, v___x_3567_, v___x_3565_, v___y_3560_, v___y_3559_);
lean_dec_ref(v___x_3574_);
lean_dec(v_rest_3557_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3583_; 
v_isSharedCheck_3583_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3583_ == 0)
{
lean_object* v_unused_3584_; 
v_unused_3584_ = lean_ctor_get(v___x_3576_, 0);
lean_dec(v_unused_3584_);
v___x_3578_ = v___x_3576_;
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
else
{
lean_dec(v___x_3576_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v___x_3581_; 
if (v_isShared_3579_ == 0)
{
lean_ctor_set(v___x_3578_, 0, v___x_3565_);
v___x_3581_ = v___x_3578_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v___x_3565_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
return v___x_3581_;
}
}
}
else
{
return v___x_3576_;
}
}
else
{
lean_dec(v___x_3570_);
lean_dec(v_rest_3557_);
goto v___jp_3545_;
}
}
else
{
lean_dec(v_rest_3557_);
return v___x_3568_;
}
}
v___jp_3586_:
{
lean_object* v___x_3589_; uint8_t v___x_3590_; 
v___x_3589_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__10));
v___x_3590_ = lean_name_eq(v_k_3585_, v___x_3589_);
if (v___x_3590_ == 0)
{
lean_object* v___x_3591_; uint8_t v___x_3592_; 
v___x_3591_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__12));
v___x_3592_ = lean_name_eq(v_k_3585_, v___x_3591_);
if (v___x_3592_ == 0)
{
lean_object* v___x_3593_; uint8_t v___x_3594_; 
v___x_3593_ = ((lean_object*)(l_Lean_Linter_MissingDocs_lintDeclHead___closed__14));
v___x_3594_ = lean_name_eq(v_k_3585_, v___x_3593_);
lean_dec(v_k_3585_);
if (v___x_3594_ == 0)
{
lean_dec(v_rest_3557_);
goto v___jp_3545_;
}
else
{
lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; uint8_t v___x_3598_; 
v___x_3595_ = lean_unsigned_to_nat(4u);
v___x_3596_ = l_Lean_Syntax_getArg(v_rest_3557_, v___x_3595_);
v___x_3597_ = l_Lean_Syntax_getArg(v___x_3596_, v___x_3550_);
lean_dec(v___x_3596_);
v___x_3598_ = l_Lean_Syntax_isNone(v___x_3597_);
if (v___x_3598_ == 0)
{
lean_object* v___x_3599_; lean_object* v_infoState_3600_; lean_object* v_trees_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; size_t v_sz_3609_; size_t v___x_3610_; lean_object* v___x_3611_; 
v___x_3599_ = lean_st_ref_get(v___y_3588_);
v_infoState_3600_ = lean_ctor_get(v___x_3599_, 8);
lean_inc_ref(v_infoState_3600_);
lean_dec(v___x_3599_);
v_trees_3601_ = lean_ctor_get(v_infoState_3600_, 2);
lean_inc_ref(v_trees_3601_);
lean_dec_ref(v_infoState_3600_);
v___x_3602_ = lean_obj_once(&l_Lean_Linter_MissingDocs_checkDecl___closed__1, &l_Lean_Linter_MissingDocs_checkDecl___closed__1_once, _init_l_Lean_Linter_MissingDocs_checkDecl___closed__1);
v___x_3603_ = l_Lean_PersistentArray_foldlM___at___00Lean_Linter_MissingDocs_checkDecl_spec__3(v___x_3598_, v_trees_3601_, v___x_3602_, v___x_3548_);
lean_dec_ref(v_trees_3601_);
v___x_3604_ = l_Lean_Syntax_getArg(v_rest_3557_, v___x_3556_);
lean_dec(v_rest_3557_);
v___x_3605_ = l_Lean_Syntax_getArg(v___x_3604_, v___x_3548_);
lean_dec(v___x_3604_);
v___x_3606_ = l_Lean_Syntax_getArg(v___x_3597_, v___x_3548_);
lean_dec(v___x_3597_);
v___x_3607_ = l_Lean_Syntax_getArgs(v___x_3606_);
lean_dec(v___x_3606_);
v___x_3608_ = lean_box(0);
v_sz_3609_ = lean_array_size(v___x_3607_);
v___x_3610_ = ((size_t)0ULL);
v___x_3611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_MissingDocs_checkDecl_spec__6(v___x_3605_, v___x_3598_, v___x_3603_, v___x_3607_, v_sz_3609_, v___x_3610_, v___x_3608_, v___y_3587_, v___y_3588_);
lean_dec_ref(v___x_3607_);
lean_dec_ref(v___x_3603_);
lean_dec(v___x_3605_);
if (lean_obj_tag(v___x_3611_) == 0)
{
lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3618_; 
v_isSharedCheck_3618_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3618_ == 0)
{
lean_object* v_unused_3619_; 
v_unused_3619_ = lean_ctor_get(v___x_3611_, 0);
lean_dec(v_unused_3619_);
v___x_3613_ = v___x_3611_;
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
else
{
lean_dec(v___x_3611_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
lean_object* v___x_3616_; 
if (v_isShared_3614_ == 0)
{
lean_ctor_set(v___x_3613_, 0, v___x_3608_);
v___x_3616_ = v___x_3613_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v___x_3608_);
v___x_3616_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
return v___x_3616_;
}
}
}
else
{
return v___x_3611_;
}
}
else
{
lean_dec(v___x_3597_);
lean_dec(v_rest_3557_);
goto v___jp_3545_;
}
}
}
else
{
lean_dec(v_k_3585_);
v___y_3559_ = v___y_3588_;
v___y_3560_ = v___y_3587_;
v___y_3561_ = v___x_3592_;
goto v___jp_3558_;
}
}
else
{
lean_dec(v_k_3585_);
v___y_3559_ = v___y_3588_;
v___y_3560_ = v___y_3587_;
v___y_3561_ = v___x_3590_;
goto v___jp_3558_;
}
}
}
else
{
lean_dec(v_head_3549_);
goto v___jp_3545_;
}
v___jp_3545_:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = lean_box(0);
v___x_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3546_);
return v___x_3547_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkDecl___boxed(lean_object* v_stx_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Lean_Linter_MissingDocs_checkDecl(v_stx_3635_, v_a_3636_, v_a_3637_);
lean_dec(v_a_3637_);
lean_dec_ref(v_a_3636_);
lean_dec(v_stx_3635_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2(lean_object* v_00_u03b2_3640_, lean_object* v_m_3641_, lean_object* v_a_3642_, lean_object* v_b_3643_){
_start:
{
lean_object* v___x_3644_; 
v___x_3644_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2___redArg(v_m_3641_, v_a_3642_, v_b_3643_);
return v___x_3644_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4(lean_object* v_00_u03b2_3645_, lean_object* v_m_3646_, lean_object* v_a_3647_){
_start:
{
uint8_t v___x_3648_; 
v___x_3648_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___redArg(v_m_3646_, v_a_3647_);
return v___x_3648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4___boxed(lean_object* v_00_u03b2_3649_, lean_object* v_m_3650_, lean_object* v_a_3651_){
_start:
{
uint8_t v_res_3652_; lean_object* v_r_3653_; 
v_res_3652_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_MissingDocs_checkDecl_spec__4(v_00_u03b2_3649_, v_m_3650_, v_a_3651_);
lean_dec(v_a_3651_);
lean_dec_ref(v_m_3650_);
v_r_3653_ = lean_box(v_res_3652_);
return v_r_3653_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2(lean_object* v_00_u03b2_3654_, lean_object* v_a_3655_, lean_object* v_x_3656_){
_start:
{
uint8_t v___x_3657_; 
v___x_3657_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___redArg(v_a_3655_, v_x_3656_);
return v___x_3657_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3658_, lean_object* v_a_3659_, lean_object* v_x_3660_){
_start:
{
uint8_t v_res_3661_; lean_object* v_r_3662_; 
v_res_3661_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__2(v_00_u03b2_3658_, v_a_3659_, v_x_3660_);
lean_dec(v_x_3660_);
lean_dec(v_a_3659_);
v_r_3662_ = lean_box(v_res_3661_);
return v_r_3662_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3(lean_object* v_00_u03b2_3663_, lean_object* v_data_3664_){
_start:
{
lean_object* v___x_3665_; 
v___x_3665_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3___redArg(v_data_3664_);
return v___x_3665_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3666_, lean_object* v_i_3667_, lean_object* v_source_3668_, lean_object* v_target_3669_){
_start:
{
lean_object* v___x_3670_; 
v___x_3670_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4___redArg(v_i_3667_, v_source_3668_, v_target_3669_);
return v___x_3670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_3671_, lean_object* v_x_3672_, lean_object* v_x_3673_){
_start:
{
lean_object* v___x_3674_; 
v___x_3674_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_MissingDocs_checkDecl_spec__2_spec__3_spec__4_spec__9___redArg(v_x_3672_, v_x_3673_);
return v___x_3674_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__2(void){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3681_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkDecl___boxed), 4, 0);
v___x_3682_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_3682_, 0, v___x_3681_);
return v___x_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1(){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3684_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__1));
v___x_3685_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__2, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__2_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___closed__2);
v___x_3686_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_3684_, v___x_3685_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1___boxed(lean_object* v_a_3687_){
_start:
{
lean_object* v_res_3688_; 
v_res_3688_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1();
return v_res_3688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkInit(lean_object* v_stx_3690_, lean_object* v_a_3691_, lean_object* v_a_3692_){
_start:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; uint8_t v___x_3696_; 
v___x_3694_ = lean_unsigned_to_nat(2u);
v___x_3695_ = l_Lean_Syntax_getArg(v_stx_3690_, v___x_3694_);
v___x_3696_ = l_Lean_Syntax_isNone(v___x_3695_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; 
v___x_3697_ = lean_unsigned_to_nat(0u);
v___x_3698_ = l_Lean_Syntax_getArg(v_stx_3690_, v___x_3697_);
v___x_3699_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v___x_3698_, v_a_3691_, v_a_3692_);
lean_dec(v___x_3698_);
if (lean_obj_tag(v___x_3699_) == 0)
{
lean_object* v_a_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3713_; 
v_a_3700_ = lean_ctor_get(v___x_3699_, 0);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3699_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3702_ = v___x_3699_;
v_isShared_3703_ = v_isSharedCheck_3713_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_a_3700_);
lean_dec(v___x_3699_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3713_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
if (lean_obj_tag(v_a_3700_) == 1)
{
lean_object* v_val_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; uint8_t v___x_3707_; lean_object* v___x_3708_; 
lean_del_object(v___x_3702_);
v_val_3704_ = lean_ctor_get(v_a_3700_, 0);
lean_inc(v_val_3704_);
lean_dec_ref_known(v_a_3700_, 1);
v___x_3705_ = l_Lean_Syntax_getArg(v___x_3695_, v___x_3697_);
lean_dec(v___x_3695_);
v___x_3706_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkInit___closed__0));
v___x_3707_ = lean_unbox(v_val_3704_);
lean_dec(v_val_3704_);
v___x_3708_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v___x_3707_, v___x_3705_, v___x_3706_, v_a_3691_, v_a_3692_);
return v___x_3708_;
}
else
{
lean_object* v___x_3709_; lean_object* v___x_3711_; 
lean_dec(v_a_3700_);
lean_dec(v___x_3695_);
v___x_3709_ = lean_box(0);
if (v_isShared_3703_ == 0)
{
lean_ctor_set(v___x_3702_, 0, v___x_3709_);
v___x_3711_ = v___x_3702_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3709_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
return v___x_3711_;
}
}
}
}
else
{
lean_object* v_a_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3721_; 
lean_dec(v___x_3695_);
v_a_3714_ = lean_ctor_get(v___x_3699_, 0);
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3699_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3716_ = v___x_3699_;
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_a_3714_);
lean_dec(v___x_3699_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3719_; 
if (v_isShared_3717_ == 0)
{
v___x_3719_ = v___x_3716_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v_a_3714_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
return v___x_3719_;
}
}
}
}
else
{
lean_object* v___x_3722_; lean_object* v___x_3723_; 
lean_dec(v___x_3695_);
v___x_3722_ = lean_box(0);
v___x_3723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3722_);
return v___x_3723_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkInit___boxed(lean_object* v_stx_3724_, lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l_Lean_Linter_MissingDocs_checkInit(v_stx_3724_, v_a_3725_, v_a_3726_);
lean_dec(v_a_3726_);
lean_dec_ref(v_a_3725_);
lean_dec(v_stx_3724_);
return v_res_3728_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__2(void){
_start:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3735_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkInit___boxed), 4, 0);
v___x_3736_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_3736_, 0, v___x_3735_);
return v___x_3736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1(){
_start:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3738_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__1));
v___x_3739_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__2, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__2_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___closed__2);
v___x_3740_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_3738_, v___x_3739_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1___boxed(lean_object* v_a_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1();
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkNotation(lean_object* v_stx_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; uint8_t v___x_3761_; 
v___x_3754_ = lean_unsigned_to_nat(2u);
v___x_3755_ = l_Lean_Syntax_getArg(v_stx_3750_, v___x_3754_);
v___x_3756_ = lean_unsigned_to_nat(0u);
v___x_3757_ = l_Lean_Syntax_getArg(v___x_3755_, v___x_3756_);
lean_dec(v___x_3755_);
v___x_3758_ = l_Lean_Syntax_getArg(v___x_3757_, v___x_3756_);
lean_dec(v___x_3757_);
v___x_3759_ = l_Lean_Syntax_getKind(v___x_3758_);
v___x_3760_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkNotation___closed__1));
v___x_3761_ = lean_name_eq(v___x_3759_, v___x_3760_);
lean_dec(v___x_3759_);
if (v___x_3761_ == 0)
{
lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3762_ = l_Lean_Syntax_getArg(v_stx_3750_, v___x_3756_);
v___x_3763_ = lean_unsigned_to_nat(1u);
v___x_3764_ = l_Lean_Syntax_getArg(v_stx_3750_, v___x_3763_);
v___x_3765_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus(v___x_3762_, v___x_3764_, v___x_3761_, v_a_3751_, v_a_3752_);
lean_dec(v___x_3764_);
lean_dec(v___x_3762_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3789_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3768_ = v___x_3765_;
v_isShared_3769_ = v_isSharedCheck_3789_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3765_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3789_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
if (lean_obj_tag(v_a_3766_) == 1)
{
lean_object* v_val_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; uint8_t v___x_3773_; 
lean_del_object(v___x_3768_);
v_val_3770_ = lean_ctor_get(v_a_3766_, 0);
lean_inc(v_val_3770_);
lean_dec_ref_known(v_a_3766_, 1);
v___x_3771_ = lean_unsigned_to_nat(5u);
v___x_3772_ = l_Lean_Syntax_getArg(v_stx_3750_, v___x_3771_);
v___x_3773_ = l_Lean_Syntax_isNone(v___x_3772_);
if (v___x_3773_ == 0)
{
lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; uint8_t v___x_3778_; lean_object* v___x_3779_; 
v___x_3774_ = l_Lean_Syntax_getArg(v___x_3772_, v___x_3756_);
lean_dec(v___x_3772_);
v___x_3775_ = lean_unsigned_to_nat(3u);
v___x_3776_ = l_Lean_Syntax_getArg(v___x_3774_, v___x_3775_);
lean_dec(v___x_3774_);
v___x_3777_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkNotation___closed__2));
v___x_3778_ = lean_unbox(v_val_3770_);
lean_dec(v_val_3770_);
v___x_3779_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v___x_3778_, v___x_3776_, v___x_3777_, v_a_3751_, v_a_3752_);
return v___x_3779_;
}
else
{
lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; uint8_t v___x_3783_; lean_object* v___x_3784_; 
lean_dec(v___x_3772_);
v___x_3780_ = lean_unsigned_to_nat(3u);
v___x_3781_ = l_Lean_Syntax_getArg(v_stx_3750_, v___x_3780_);
v___x_3782_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkNotation___closed__2));
v___x_3783_ = lean_unbox(v_val_3770_);
lean_dec(v_val_3770_);
v___x_3784_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus(v___x_3783_, v___x_3781_, v___x_3782_, v_a_3751_, v_a_3752_);
return v___x_3784_;
}
}
else
{
lean_object* v___x_3785_; lean_object* v___x_3787_; 
lean_dec(v_a_3766_);
v___x_3785_ = lean_box(0);
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 0, v___x_3785_);
v___x_3787_ = v___x_3768_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v___x_3785_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
}
else
{
lean_object* v_a_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3797_; 
v_a_3790_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3792_ = v___x_3765_;
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_a_3790_);
lean_dec(v___x_3765_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
lean_object* v___x_3795_; 
if (v_isShared_3793_ == 0)
{
v___x_3795_ = v___x_3792_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_a_3790_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
return v___x_3795_;
}
}
}
}
else
{
lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3798_ = lean_box(0);
v___x_3799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3798_);
return v___x_3799_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkNotation___boxed(lean_object* v_stx_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_){
_start:
{
lean_object* v_res_3804_; 
v_res_3804_ = l_Lean_Linter_MissingDocs_checkNotation(v_stx_3800_, v_a_3801_, v_a_3802_);
lean_dec(v_a_3802_);
lean_dec_ref(v_a_3801_);
lean_dec(v_stx_3800_);
return v_res_3804_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__1(void){
_start:
{
lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3810_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkNotation___boxed), 4, 0);
v___x_3811_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_3811_, 0, v___x_3810_);
return v___x_3811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1(){
_start:
{
lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3813_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__0));
v___x_3814_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__1, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__1_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___closed__1);
v___x_3815_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_3813_, v___x_3814_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1___boxed(lean_object* v_a_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1();
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkMixfix(lean_object* v_stx_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_){
_start:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; uint8_t v___x_3829_; 
v___x_3822_ = lean_unsigned_to_nat(2u);
v___x_3823_ = l_Lean_Syntax_getArg(v_stx_3818_, v___x_3822_);
v___x_3824_ = lean_unsigned_to_nat(0u);
v___x_3825_ = l_Lean_Syntax_getArg(v___x_3823_, v___x_3824_);
lean_dec(v___x_3823_);
v___x_3826_ = l_Lean_Syntax_getArg(v___x_3825_, v___x_3824_);
lean_dec(v___x_3825_);
v___x_3827_ = l_Lean_Syntax_getKind(v___x_3826_);
v___x_3828_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkNotation___closed__1));
v___x_3829_ = lean_name_eq(v___x_3827_, v___x_3828_);
lean_dec(v___x_3827_);
if (v___x_3829_ == 0)
{
lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
v___x_3830_ = l_Lean_Syntax_getArg(v_stx_3818_, v___x_3824_);
v___x_3831_ = lean_unsigned_to_nat(1u);
v___x_3832_ = l_Lean_Syntax_getArg(v_stx_3818_, v___x_3831_);
v___x_3833_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus(v___x_3830_, v___x_3832_, v___x_3829_, v_a_3819_, v_a_3820_);
lean_dec(v___x_3832_);
lean_dec(v___x_3830_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3860_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3836_ = v___x_3833_;
v_isShared_3837_ = v_isSharedCheck_3860_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_a_3834_);
lean_dec(v___x_3833_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3860_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
if (lean_obj_tag(v_a_3834_) == 1)
{
lean_object* v_val_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; uint8_t v___x_3841_; 
lean_del_object(v___x_3836_);
v_val_3838_ = lean_ctor_get(v_a_3834_, 0);
lean_inc(v_val_3838_);
lean_dec_ref_known(v_a_3834_, 1);
v___x_3839_ = lean_unsigned_to_nat(5u);
v___x_3840_ = l_Lean_Syntax_getArg(v_stx_3818_, v___x_3839_);
v___x_3841_ = l_Lean_Syntax_isNone(v___x_3840_);
if (v___x_3841_ == 0)
{
lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; uint8_t v___x_3848_; lean_object* v___x_3849_; 
v___x_3842_ = l_Lean_Syntax_getArg(v___x_3840_, v___x_3824_);
lean_dec(v___x_3840_);
v___x_3843_ = lean_unsigned_to_nat(3u);
v___x_3844_ = l_Lean_Syntax_getArg(v___x_3842_, v___x_3843_);
lean_dec(v___x_3842_);
v___x_3845_ = l_Lean_Syntax_getArg(v_stx_3818_, v___x_3843_);
v___x_3846_ = l_Lean_Syntax_getArg(v___x_3845_, v___x_3824_);
lean_dec(v___x_3845_);
v___x_3847_ = l_Lean_Syntax_getAtomVal(v___x_3846_);
lean_dec(v___x_3846_);
v___x_3848_ = lean_unbox(v_val_3838_);
lean_dec(v_val_3838_);
v___x_3849_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v___x_3848_, v___x_3844_, v___x_3847_, v_a_3819_, v_a_3820_);
return v___x_3849_;
}
else
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; uint8_t v___x_3854_; lean_object* v___x_3855_; 
lean_dec(v___x_3840_);
v___x_3850_ = lean_unsigned_to_nat(3u);
v___x_3851_ = l_Lean_Syntax_getArg(v_stx_3818_, v___x_3850_);
v___x_3852_ = l_Lean_Syntax_getArg(v___x_3851_, v___x_3824_);
v___x_3853_ = l_Lean_Syntax_getAtomVal(v___x_3852_);
lean_dec(v___x_3852_);
v___x_3854_ = lean_unbox(v_val_3838_);
lean_dec(v_val_3838_);
v___x_3855_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus(v___x_3854_, v___x_3851_, v___x_3853_, v_a_3819_, v_a_3820_);
return v___x_3855_;
}
}
else
{
lean_object* v___x_3856_; lean_object* v___x_3858_; 
lean_dec(v_a_3834_);
v___x_3856_ = lean_box(0);
if (v_isShared_3837_ == 0)
{
lean_ctor_set(v___x_3836_, 0, v___x_3856_);
v___x_3858_ = v___x_3836_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v___x_3856_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
else
{
lean_object* v_a_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3868_; 
v_a_3861_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3868_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3863_ = v___x_3833_;
v_isShared_3864_ = v_isSharedCheck_3868_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_a_3861_);
lean_dec(v___x_3833_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3868_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v___x_3866_; 
if (v_isShared_3864_ == 0)
{
v___x_3866_ = v___x_3863_;
goto v_reusejp_3865_;
}
else
{
lean_object* v_reuseFailAlloc_3867_; 
v_reuseFailAlloc_3867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3867_, 0, v_a_3861_);
v___x_3866_ = v_reuseFailAlloc_3867_;
goto v_reusejp_3865_;
}
v_reusejp_3865_:
{
return v___x_3866_;
}
}
}
}
else
{
lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3869_ = lean_box(0);
v___x_3870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3869_);
return v___x_3870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkMixfix___boxed(lean_object* v_stx_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l_Lean_Linter_MissingDocs_checkMixfix(v_stx_3871_, v_a_3872_, v_a_3873_);
lean_dec(v_a_3873_);
lean_dec_ref(v_a_3872_);
lean_dec(v_stx_3871_);
return v_res_3875_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__2(void){
_start:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; 
v___x_3882_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkMixfix___boxed), 4, 0);
v___x_3883_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_3883_, 0, v___x_3882_);
return v___x_3883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1(){
_start:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3885_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__1));
v___x_3886_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__2, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__2_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___closed__2);
v___x_3887_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_3885_, v___x_3886_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1___boxed(lean_object* v_a_3888_){
_start:
{
lean_object* v_res_3889_; 
v_res_3889_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1();
return v_res_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntax(lean_object* v_stx_3891_, lean_object* v_a_3892_, lean_object* v_a_3893_){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; uint8_t v___x_3902_; 
v___x_3895_ = lean_unsigned_to_nat(2u);
v___x_3896_ = l_Lean_Syntax_getArg(v_stx_3891_, v___x_3895_);
v___x_3897_ = lean_unsigned_to_nat(0u);
v___x_3898_ = l_Lean_Syntax_getArg(v___x_3896_, v___x_3897_);
lean_dec(v___x_3896_);
v___x_3899_ = l_Lean_Syntax_getArg(v___x_3898_, v___x_3897_);
lean_dec(v___x_3898_);
v___x_3900_ = l_Lean_Syntax_getKind(v___x_3899_);
v___x_3901_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkNotation___closed__1));
v___x_3902_ = lean_name_eq(v___x_3900_, v___x_3901_);
lean_dec(v___x_3900_);
if (v___x_3902_ == 0)
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; uint8_t v___x_3906_; lean_object* v___x_3907_; 
v___x_3903_ = l_Lean_Syntax_getArg(v_stx_3891_, v___x_3897_);
v___x_3904_ = lean_unsigned_to_nat(1u);
v___x_3905_ = l_Lean_Syntax_getArg(v_stx_3891_, v___x_3904_);
v___x_3906_ = 1;
v___x_3907_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus(v___x_3903_, v___x_3905_, v___x_3906_, v_a_3892_, v_a_3893_);
lean_dec(v___x_3905_);
lean_dec(v___x_3903_);
if (lean_obj_tag(v___x_3907_) == 0)
{
lean_object* v_a_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3931_; 
v_a_3908_ = lean_ctor_get(v___x_3907_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3907_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3910_ = v___x_3907_;
v_isShared_3911_ = v_isSharedCheck_3931_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_a_3908_);
lean_dec(v___x_3907_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3931_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
if (lean_obj_tag(v_a_3908_) == 1)
{
lean_object* v_val_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; uint8_t v___x_3915_; 
lean_del_object(v___x_3910_);
v_val_3912_ = lean_ctor_get(v_a_3908_, 0);
lean_inc(v_val_3912_);
lean_dec_ref_known(v_a_3908_, 1);
v___x_3913_ = lean_unsigned_to_nat(5u);
v___x_3914_ = l_Lean_Syntax_getArg(v_stx_3891_, v___x_3913_);
v___x_3915_ = l_Lean_Syntax_isNone(v___x_3914_);
if (v___x_3915_ == 0)
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; uint8_t v___x_3920_; lean_object* v___x_3921_; 
v___x_3916_ = l_Lean_Syntax_getArg(v___x_3914_, v___x_3897_);
lean_dec(v___x_3914_);
v___x_3917_ = lean_unsigned_to_nat(3u);
v___x_3918_ = l_Lean_Syntax_getArg(v___x_3916_, v___x_3917_);
lean_dec(v___x_3916_);
v___x_3919_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkSyntax___closed__0));
v___x_3920_ = lean_unbox(v_val_3912_);
lean_dec(v_val_3912_);
v___x_3921_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v___x_3920_, v___x_3918_, v___x_3919_, v_a_3892_, v_a_3893_);
return v___x_3921_;
}
else
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; uint8_t v___x_3925_; lean_object* v___x_3926_; 
lean_dec(v___x_3914_);
v___x_3922_ = lean_unsigned_to_nat(3u);
v___x_3923_ = l_Lean_Syntax_getArg(v_stx_3891_, v___x_3922_);
v___x_3924_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkSyntax___closed__0));
v___x_3925_ = lean_unbox(v_val_3912_);
lean_dec(v_val_3912_);
v___x_3926_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus(v___x_3925_, v___x_3923_, v___x_3924_, v_a_3892_, v_a_3893_);
return v___x_3926_;
}
}
else
{
lean_object* v___x_3927_; lean_object* v___x_3929_; 
lean_dec(v_a_3908_);
v___x_3927_ = lean_box(0);
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 0, v___x_3927_);
v___x_3929_ = v___x_3910_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3927_);
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
else
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3939_; 
v_a_3932_ = lean_ctor_get(v___x_3907_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v___x_3907_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3934_ = v___x_3907_;
v_isShared_3935_ = v_isSharedCheck_3939_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v___x_3907_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3939_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
lean_object* v___x_3937_; 
if (v_isShared_3935_ == 0)
{
v___x_3937_ = v___x_3934_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v_a_3932_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
}
}
}
}
else
{
lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3940_ = lean_box(0);
v___x_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
return v___x_3941_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntax___boxed(lean_object* v_stx_3942_, lean_object* v_a_3943_, lean_object* v_a_3944_, lean_object* v_a_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l_Lean_Linter_MissingDocs_checkSyntax(v_stx_3942_, v_a_3943_, v_a_3944_);
lean_dec(v_a_3944_);
lean_dec_ref(v_a_3943_);
lean_dec(v_stx_3942_);
return v_res_3946_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__1(void){
_start:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; 
v___x_3952_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkSyntax___boxed), 4, 0);
v___x_3953_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_3953_, 0, v___x_3952_);
return v___x_3953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1(){
_start:
{
lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3955_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__0));
v___x_3956_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__1, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__1_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___closed__1);
v___x_3957_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_3955_, v___x_3956_);
return v___x_3957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1___boxed(lean_object* v_a_3958_){
_start:
{
lean_object* v_res_3959_; 
v_res_3959_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1();
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_mkSimpleHandler(lean_object* v_name_3960_, lean_object* v_declNameStxIdx_3961_, lean_object* v_stx_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_){
_start:
{
lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; 
v___x_3966_ = lean_unsigned_to_nat(0u);
v___x_3967_ = l_Lean_Syntax_getArg(v_stx_3962_, v___x_3966_);
v___x_3968_ = l_Lean_Linter_MissingDocs_isMissingDoc(v___x_3967_, v_a_3963_, v_a_3964_);
if (lean_obj_tag(v___x_3968_) == 0)
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3993_; 
v_a_3969_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3971_ = v___x_3968_;
v_isShared_3972_ = v_isSharedCheck_3993_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3968_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3993_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
uint8_t v___x_3973_; 
v___x_3973_ = lean_unbox(v_a_3969_);
lean_dec(v_a_3969_);
if (v___x_3973_ == 0)
{
lean_object* v___x_3974_; lean_object* v___x_3976_; 
lean_dec(v___x_3967_);
lean_dec_ref(v_name_3960_);
v___x_3974_ = lean_box(0);
if (v_isShared_3972_ == 0)
{
lean_ctor_set(v___x_3971_, 0, v___x_3974_);
v___x_3976_ = v___x_3971_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v___x_3974_);
v___x_3976_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
return v___x_3976_;
}
}
else
{
lean_object* v___x_3978_; 
lean_del_object(v___x_3971_);
v___x_3978_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString(v___x_3967_, v_a_3963_, v_a_3964_);
lean_dec(v___x_3967_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; uint8_t v___x_3980_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3979_);
lean_dec_ref_known(v___x_3978_, 1);
v___x_3980_ = lean_unbox(v_a_3979_);
lean_dec(v_a_3979_);
if (v___x_3980_ == 0)
{
lean_object* v___x_3981_; lean_object* v___x_3982_; 
v___x_3981_ = l_Lean_Syntax_getArg(v_stx_3962_, v_declNameStxIdx_3961_);
v___x_3982_ = l_Lean_Linter_MissingDocs_lintNamed(v___x_3981_, v_name_3960_, v_a_3963_, v_a_3964_);
return v___x_3982_;
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3983_ = l_Lean_Syntax_getArg(v_stx_3962_, v_declNameStxIdx_3961_);
v___x_3984_ = l_Lean_Linter_MissingDocs_lintEmptyNamed(v___x_3983_, v_name_3960_, v_a_3963_, v_a_3964_);
return v___x_3984_;
}
}
else
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3992_; 
lean_dec_ref(v_name_3960_);
v_a_3985_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3987_ = v___x_3978_;
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3978_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
lean_dec(v___x_3967_);
lean_dec_ref(v_name_3960_);
v_a_3994_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3968_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3968_);
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
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_mkSimpleHandler___boxed(lean_object* v_name_4002_, lean_object* v_declNameStxIdx_4003_, lean_object* v_stx_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_){
_start:
{
lean_object* v_res_4008_; 
v_res_4008_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v_name_4002_, v_declNameStxIdx_4003_, v_stx_4004_, v_a_4005_, v_a_4006_);
lean_dec(v_a_4006_);
lean_dec_ref(v_a_4005_);
lean_dec(v_stx_4004_);
lean_dec(v_declNameStxIdx_4003_);
return v_res_4008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntaxAbbrev(lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_){
_start:
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
v___x_4013_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkSyntax___closed__0));
v___x_4014_ = lean_unsigned_to_nat(2u);
v___x_4015_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_4013_, v___x_4014_, v_a_4009_, v_a_4010_, v_a_4011_);
return v___x_4015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntaxAbbrev___boxed(lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_){
_start:
{
lean_object* v_res_4020_; 
v_res_4020_ = l_Lean_Linter_MissingDocs_checkSyntaxAbbrev(v_a_4016_, v_a_4017_, v_a_4018_);
lean_dec(v_a_4018_);
lean_dec_ref(v_a_4017_);
lean_dec(v_a_4016_);
return v_res_4020_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__2(void){
_start:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4027_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkSyntaxAbbrev___boxed), 4, 0);
v___x_4028_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4028_, 0, v___x_4027_);
return v___x_4028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1(){
_start:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
v___x_4030_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__1));
v___x_4031_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__2, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__2_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___closed__2);
v___x_4032_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4030_, v___x_4031_);
return v___x_4032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1___boxed(lean_object* v_a_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1();
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntaxCat(lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_){
_start:
{
lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; 
v___x_4040_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkSyntaxCat___closed__0));
v___x_4041_ = lean_unsigned_to_nat(2u);
v___x_4042_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_4040_, v___x_4041_, v_a_4036_, v_a_4037_, v_a_4038_);
return v___x_4042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSyntaxCat___boxed(lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l_Lean_Linter_MissingDocs_checkSyntaxCat(v_a_4043_, v_a_4044_, v_a_4045_);
lean_dec(v_a_4045_);
lean_dec_ref(v_a_4044_);
lean_dec(v_a_4043_);
return v_res_4047_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__2(void){
_start:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; 
v___x_4054_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkSyntaxCat___boxed), 4, 0);
v___x_4055_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4055_, 0, v___x_4054_);
return v___x_4055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1(){
_start:
{
lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4057_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__1));
v___x_4058_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__2, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__2_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___closed__2);
v___x_4059_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4057_, v___x_4058_);
return v___x_4059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1___boxed(lean_object* v_a_4060_){
_start:
{
lean_object* v_res_4061_; 
v_res_4061_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1();
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkMacro(lean_object* v_stx_4063_, lean_object* v_a_4064_, lean_object* v_a_4065_){
_start:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; uint8_t v___x_4074_; 
v___x_4067_ = lean_unsigned_to_nat(2u);
v___x_4068_ = l_Lean_Syntax_getArg(v_stx_4063_, v___x_4067_);
v___x_4069_ = lean_unsigned_to_nat(0u);
v___x_4070_ = l_Lean_Syntax_getArg(v___x_4068_, v___x_4069_);
lean_dec(v___x_4068_);
v___x_4071_ = l_Lean_Syntax_getArg(v___x_4070_, v___x_4069_);
lean_dec(v___x_4070_);
v___x_4072_ = l_Lean_Syntax_getKind(v___x_4071_);
v___x_4073_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkNotation___closed__1));
v___x_4074_ = lean_name_eq(v___x_4072_, v___x_4073_);
lean_dec(v___x_4072_);
if (v___x_4074_ == 0)
{
lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; uint8_t v___x_4078_; lean_object* v___x_4079_; 
v___x_4075_ = l_Lean_Syntax_getArg(v_stx_4063_, v___x_4069_);
v___x_4076_ = lean_unsigned_to_nat(1u);
v___x_4077_ = l_Lean_Syntax_getArg(v_stx_4063_, v___x_4076_);
v___x_4078_ = 1;
v___x_4079_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus(v___x_4075_, v___x_4077_, v___x_4078_, v_a_4064_, v_a_4065_);
lean_dec(v___x_4077_);
lean_dec(v___x_4075_);
if (lean_obj_tag(v___x_4079_) == 0)
{
lean_object* v_a_4080_; lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4103_; 
v_a_4080_ = lean_ctor_get(v___x_4079_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v___x_4079_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_4082_ = v___x_4079_;
v_isShared_4083_ = v_isSharedCheck_4103_;
goto v_resetjp_4081_;
}
else
{
lean_inc(v_a_4080_);
lean_dec(v___x_4079_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4103_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
if (lean_obj_tag(v_a_4080_) == 1)
{
lean_object* v_val_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; uint8_t v___x_4087_; 
lean_del_object(v___x_4082_);
v_val_4084_ = lean_ctor_get(v_a_4080_, 0);
lean_inc(v_val_4084_);
lean_dec_ref_known(v_a_4080_, 1);
v___x_4085_ = lean_unsigned_to_nat(5u);
v___x_4086_ = l_Lean_Syntax_getArg(v_stx_4063_, v___x_4085_);
v___x_4087_ = l_Lean_Syntax_isNone(v___x_4086_);
if (v___x_4087_ == 0)
{
lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; uint8_t v___x_4092_; lean_object* v___x_4093_; 
v___x_4088_ = l_Lean_Syntax_getArg(v___x_4086_, v___x_4069_);
lean_dec(v___x_4086_);
v___x_4089_ = lean_unsigned_to_nat(3u);
v___x_4090_ = l_Lean_Syntax_getArg(v___x_4088_, v___x_4089_);
lean_dec(v___x_4088_);
v___x_4091_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkMacro___closed__0));
v___x_4092_ = lean_unbox(v_val_4084_);
lean_dec(v_val_4084_);
v___x_4093_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v___x_4092_, v___x_4090_, v___x_4091_, v_a_4064_, v_a_4065_);
return v___x_4093_;
}
else
{
lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; uint8_t v___x_4097_; lean_object* v___x_4098_; 
lean_dec(v___x_4086_);
v___x_4094_ = lean_unsigned_to_nat(3u);
v___x_4095_ = l_Lean_Syntax_getArg(v_stx_4063_, v___x_4094_);
v___x_4096_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkMacro___closed__0));
v___x_4097_ = lean_unbox(v_val_4084_);
lean_dec(v_val_4084_);
v___x_4098_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus(v___x_4097_, v___x_4095_, v___x_4096_, v_a_4064_, v_a_4065_);
return v___x_4098_;
}
}
else
{
lean_object* v___x_4099_; lean_object* v___x_4101_; 
lean_dec(v_a_4080_);
v___x_4099_ = lean_box(0);
if (v_isShared_4083_ == 0)
{
lean_ctor_set(v___x_4082_, 0, v___x_4099_);
v___x_4101_ = v___x_4082_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v___x_4099_);
v___x_4101_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
return v___x_4101_;
}
}
}
}
else
{
lean_object* v_a_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4111_; 
v_a_4104_ = lean_ctor_get(v___x_4079_, 0);
v_isSharedCheck_4111_ = !lean_is_exclusive(v___x_4079_);
if (v_isSharedCheck_4111_ == 0)
{
v___x_4106_ = v___x_4079_;
v_isShared_4107_ = v_isSharedCheck_4111_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_a_4104_);
lean_dec(v___x_4079_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4111_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4109_; 
if (v_isShared_4107_ == 0)
{
v___x_4109_ = v___x_4106_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4110_; 
v_reuseFailAlloc_4110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4110_, 0, v_a_4104_);
v___x_4109_ = v_reuseFailAlloc_4110_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
return v___x_4109_;
}
}
}
}
else
{
lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4112_ = lean_box(0);
v___x_4113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4113_, 0, v___x_4112_);
return v___x_4113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkMacro___boxed(lean_object* v_stx_4114_, lean_object* v_a_4115_, lean_object* v_a_4116_, lean_object* v_a_4117_){
_start:
{
lean_object* v_res_4118_; 
v_res_4118_ = l_Lean_Linter_MissingDocs_checkMacro(v_stx_4114_, v_a_4115_, v_a_4116_);
lean_dec(v_a_4116_);
lean_dec_ref(v_a_4115_);
lean_dec(v_stx_4114_);
return v_res_4118_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__1(void){
_start:
{
lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4124_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkMacro___boxed), 4, 0);
v___x_4125_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4125_, 0, v___x_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1(){
_start:
{
lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; 
v___x_4127_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__0));
v___x_4128_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__1, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__1_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___closed__1);
v___x_4129_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4127_, v___x_4128_);
return v___x_4129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1___boxed(lean_object* v_a_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1();
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkElab(lean_object* v_stx_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_){
_start:
{
lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; uint8_t v___x_4144_; 
v___x_4137_ = lean_unsigned_to_nat(2u);
v___x_4138_ = l_Lean_Syntax_getArg(v_stx_4133_, v___x_4137_);
v___x_4139_ = lean_unsigned_to_nat(0u);
v___x_4140_ = l_Lean_Syntax_getArg(v___x_4138_, v___x_4139_);
lean_dec(v___x_4138_);
v___x_4141_ = l_Lean_Syntax_getArg(v___x_4140_, v___x_4139_);
lean_dec(v___x_4140_);
v___x_4142_ = l_Lean_Syntax_getKind(v___x_4141_);
v___x_4143_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkNotation___closed__1));
v___x_4144_ = lean_name_eq(v___x_4142_, v___x_4143_);
lean_dec(v___x_4142_);
if (v___x_4144_ == 0)
{
lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; uint8_t v___x_4148_; lean_object* v___x_4149_; 
v___x_4145_ = l_Lean_Syntax_getArg(v_stx_4133_, v___x_4139_);
v___x_4146_ = lean_unsigned_to_nat(1u);
v___x_4147_ = l_Lean_Syntax_getArg(v_stx_4133_, v___x_4146_);
v___x_4148_ = 1;
v___x_4149_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_docOptStatus(v___x_4145_, v___x_4147_, v___x_4148_, v_a_4134_, v_a_4135_);
lean_dec(v___x_4147_);
lean_dec(v___x_4145_);
if (lean_obj_tag(v___x_4149_) == 0)
{
lean_object* v_a_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4173_; 
v_a_4150_ = lean_ctor_get(v___x_4149_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4149_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4152_ = v___x_4149_;
v_isShared_4153_ = v_isSharedCheck_4173_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_a_4150_);
lean_dec(v___x_4149_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4173_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
if (lean_obj_tag(v_a_4150_) == 1)
{
lean_object* v_val_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; uint8_t v___x_4157_; 
lean_del_object(v___x_4152_);
v_val_4154_ = lean_ctor_get(v_a_4150_, 0);
lean_inc(v_val_4154_);
lean_dec_ref_known(v_a_4150_, 1);
v___x_4155_ = lean_unsigned_to_nat(5u);
v___x_4156_ = l_Lean_Syntax_getArg(v_stx_4133_, v___x_4155_);
v___x_4157_ = l_Lean_Syntax_isNone(v___x_4156_);
if (v___x_4157_ == 0)
{
lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; uint8_t v___x_4162_; lean_object* v___x_4163_; 
v___x_4158_ = l_Lean_Syntax_getArg(v___x_4156_, v___x_4139_);
lean_dec(v___x_4156_);
v___x_4159_ = lean_unsigned_to_nat(3u);
v___x_4160_ = l_Lean_Syntax_getArg(v___x_4158_, v___x_4159_);
lean_dec(v___x_4158_);
v___x_4161_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkElab___closed__0));
v___x_4162_ = lean_unbox(v_val_4154_);
lean_dec(v_val_4154_);
v___x_4163_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v___x_4162_, v___x_4160_, v___x_4161_, v_a_4134_, v_a_4135_);
return v___x_4163_;
}
else
{
lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; uint8_t v___x_4167_; lean_object* v___x_4168_; 
lean_dec(v___x_4156_);
v___x_4164_ = lean_unsigned_to_nat(3u);
v___x_4165_ = l_Lean_Syntax_getArg(v_stx_4133_, v___x_4164_);
v___x_4166_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkElab___closed__0));
v___x_4167_ = lean_unbox(v_val_4154_);
lean_dec(v_val_4154_);
v___x_4168_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatus(v___x_4167_, v___x_4165_, v___x_4166_, v_a_4134_, v_a_4135_);
return v___x_4168_;
}
}
else
{
lean_object* v___x_4169_; lean_object* v___x_4171_; 
lean_dec(v_a_4150_);
v___x_4169_ = lean_box(0);
if (v_isShared_4153_ == 0)
{
lean_ctor_set(v___x_4152_, 0, v___x_4169_);
v___x_4171_ = v___x_4152_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v___x_4169_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4181_; 
v_a_4174_ = lean_ctor_get(v___x_4149_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4149_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4176_ = v___x_4149_;
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4149_);
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
else
{
lean_object* v___x_4182_; lean_object* v___x_4183_; 
v___x_4182_ = lean_box(0);
v___x_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4182_);
return v___x_4183_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkElab___boxed(lean_object* v_stx_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l_Lean_Linter_MissingDocs_checkElab(v_stx_4184_, v_a_4185_, v_a_4186_);
lean_dec(v_a_4186_);
lean_dec_ref(v_a_4185_);
lean_dec(v_stx_4184_);
return v_res_4188_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__1(void){
_start:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4194_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkElab___boxed), 4, 0);
v___x_4195_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4195_, 0, v___x_4194_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1(){
_start:
{
lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; 
v___x_4197_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__0));
v___x_4198_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__1, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__1_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___closed__1);
v___x_4199_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4197_, v___x_4198_);
return v___x_4199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1___boxed(lean_object* v_a_4200_){
_start:
{
lean_object* v_res_4201_; 
v_res_4201_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1();
return v_res_4201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkClassAbbrev(lean_object* v_stx_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_){
_start:
{
lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4207_ = lean_unsigned_to_nat(0u);
v___x_4208_ = l_Lean_Syntax_getArg(v_stx_4203_, v___x_4207_);
v___x_4209_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v___x_4208_, v_a_4204_, v_a_4205_);
lean_dec(v___x_4208_);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4224_; 
v_a_4210_ = lean_ctor_get(v___x_4209_, 0);
v_isSharedCheck_4224_ = !lean_is_exclusive(v___x_4209_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4212_ = v___x_4209_;
v_isShared_4213_ = v_isSharedCheck_4224_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4209_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4224_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
if (lean_obj_tag(v_a_4210_) == 1)
{
lean_object* v_val_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; uint8_t v___x_4218_; lean_object* v___x_4219_; 
lean_del_object(v___x_4212_);
v_val_4214_ = lean_ctor_get(v_a_4210_, 0);
lean_inc(v_val_4214_);
lean_dec_ref_known(v_a_4210_, 1);
v___x_4215_ = lean_unsigned_to_nat(3u);
v___x_4216_ = l_Lean_Syntax_getArg(v_stx_4203_, v___x_4215_);
v___x_4217_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkClassAbbrev___closed__0));
v___x_4218_ = lean_unbox(v_val_4214_);
lean_dec(v_val_4214_);
v___x_4219_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v___x_4218_, v___x_4216_, v___x_4217_, v_a_4204_, v_a_4205_);
return v___x_4219_;
}
else
{
lean_object* v___x_4220_; lean_object* v___x_4222_; 
lean_dec(v_a_4210_);
v___x_4220_ = lean_box(0);
if (v_isShared_4213_ == 0)
{
lean_ctor_set(v___x_4212_, 0, v___x_4220_);
v___x_4222_ = v___x_4212_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v___x_4220_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
}
else
{
lean_object* v_a_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4232_; 
v_a_4225_ = lean_ctor_get(v___x_4209_, 0);
v_isSharedCheck_4232_ = !lean_is_exclusive(v___x_4209_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4227_ = v___x_4209_;
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_a_4225_);
lean_dec(v___x_4209_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4230_; 
if (v_isShared_4228_ == 0)
{
v___x_4230_ = v___x_4227_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_a_4225_);
v___x_4230_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
return v___x_4230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkClassAbbrev___boxed(lean_object* v_stx_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_){
_start:
{
lean_object* v_res_4237_; 
v_res_4237_ = l_Lean_Linter_MissingDocs_checkClassAbbrev(v_stx_4233_, v_a_4234_, v_a_4235_);
lean_dec(v_a_4235_);
lean_dec_ref(v_a_4234_);
lean_dec(v_stx_4233_);
return v_res_4237_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__2(void){
_start:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; 
v___x_4244_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkClassAbbrev___boxed), 4, 0);
v___x_4245_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4245_, 0, v___x_4244_);
return v___x_4245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1(){
_start:
{
lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; 
v___x_4247_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__1));
v___x_4248_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__2, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__2_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___closed__2);
v___x_4249_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4247_, v___x_4248_);
return v___x_4249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1___boxed(lean_object* v_a_4250_){
_start:
{
lean_object* v_res_4251_; 
v_res_4251_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1();
return v_res_4251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSimpLike(lean_object* v_a_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_){
_start:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v___x_4257_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkSimpLike___closed__0));
v___x_4258_ = lean_unsigned_to_nat(2u);
v___x_4259_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_4257_, v___x_4258_, v_a_4253_, v_a_4254_, v_a_4255_);
return v___x_4259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkSimpLike___boxed(lean_object* v_a_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l_Lean_Linter_MissingDocs_checkSimpLike(v_a_4260_, v_a_4261_, v_a_4262_);
lean_dec(v_a_4262_);
lean_dec_ref(v_a_4261_);
lean_dec(v_a_4260_);
return v_res_4264_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__3(void){
_start:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; 
v___x_4272_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkSimpLike___boxed), 4, 0);
v___x_4273_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4273_, 0, v___x_4272_);
return v___x_4273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1(){
_start:
{
lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
v___x_4275_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__2));
v___x_4276_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__3, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__3_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___closed__3);
v___x_4277_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4275_, v___x_4276_);
return v___x_4277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1___boxed(lean_object* v_a_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1();
return v_res_4279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption(lean_object* v_a_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_){
_start:
{
lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4285_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption___closed__0));
v___x_4286_ = lean_unsigned_to_nat(3u);
v___x_4287_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_4285_, v___x_4286_, v_a_4281_, v_a_4282_, v_a_4283_);
return v___x_4287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption___boxed(lean_object* v_a_4288_, lean_object* v_a_4289_, lean_object* v_a_4290_, lean_object* v_a_4291_){
_start:
{
lean_object* v_res_4292_; 
v_res_4292_ = l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption(v_a_4288_, v_a_4289_, v_a_4290_);
lean_dec(v_a_4290_);
lean_dec_ref(v_a_4289_);
lean_dec(v_a_4288_);
return v_res_4292_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__3(void){
_start:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4299_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption___boxed), 4, 0);
v___x_4300_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4300_, 0, v___x_4299_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1(){
_start:
{
lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4302_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__2));
v___x_4303_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__3, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__3_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___closed__3);
v___x_4304_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4302_, v___x_4303_);
return v___x_4304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1___boxed(lean_object* v_a_4305_){
_start:
{
lean_object* v_res_4306_; 
v_res_4306_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1();
return v_res_4306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterOption(lean_object* v_stx_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_){
_start:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; 
v___x_4311_ = lean_unsigned_to_nat(0u);
v___x_4312_ = l_Lean_Syntax_getArg(v_stx_4307_, v___x_4311_);
v___x_4313_ = l_Lean_Linter_MissingDocs_declModifiersDocStatus(v___x_4312_, v_a_4308_, v_a_4309_);
lean_dec(v___x_4312_);
if (lean_obj_tag(v___x_4313_) == 0)
{
lean_object* v_a_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4328_; 
v_a_4314_ = lean_ctor_get(v___x_4313_, 0);
v_isSharedCheck_4328_ = !lean_is_exclusive(v___x_4313_);
if (v_isSharedCheck_4328_ == 0)
{
v___x_4316_ = v___x_4313_;
v_isShared_4317_ = v_isSharedCheck_4328_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_a_4314_);
lean_dec(v___x_4313_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4328_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
if (lean_obj_tag(v_a_4314_) == 1)
{
lean_object* v_val_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; uint8_t v___x_4322_; lean_object* v___x_4323_; 
lean_del_object(v___x_4316_);
v_val_4318_ = lean_ctor_get(v_a_4314_, 0);
lean_inc(v_val_4318_);
lean_dec_ref_known(v_a_4314_, 1);
v___x_4319_ = lean_unsigned_to_nat(2u);
v___x_4320_ = l_Lean_Syntax_getArg(v_stx_4307_, v___x_4319_);
v___x_4321_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkRegisterBuiltinOption___closed__0));
v___x_4322_ = lean_unbox(v_val_4318_);
lean_dec(v_val_4318_);
v___x_4323_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_lintDocStatusNamed(v___x_4322_, v___x_4320_, v___x_4321_, v_a_4308_, v_a_4309_);
return v___x_4323_;
}
else
{
lean_object* v___x_4324_; lean_object* v___x_4326_; 
lean_dec(v_a_4314_);
v___x_4324_ = lean_box(0);
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 0, v___x_4324_);
v___x_4326_ = v___x_4316_;
goto v_reusejp_4325_;
}
else
{
lean_object* v_reuseFailAlloc_4327_; 
v_reuseFailAlloc_4327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4327_, 0, v___x_4324_);
v___x_4326_ = v_reuseFailAlloc_4327_;
goto v_reusejp_4325_;
}
v_reusejp_4325_:
{
return v___x_4326_;
}
}
}
}
else
{
lean_object* v_a_4329_; lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4336_; 
v_a_4329_ = lean_ctor_get(v___x_4313_, 0);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4313_);
if (v_isSharedCheck_4336_ == 0)
{
v___x_4331_ = v___x_4313_;
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
else
{
lean_inc(v_a_4329_);
lean_dec(v___x_4313_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
lean_object* v___x_4334_; 
if (v_isShared_4332_ == 0)
{
v___x_4334_ = v___x_4331_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v_a_4329_);
v___x_4334_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
return v___x_4334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterOption___boxed(lean_object* v_stx_4337_, lean_object* v_a_4338_, lean_object* v_a_4339_, lean_object* v_a_4340_){
_start:
{
lean_object* v_res_4341_; 
v_res_4341_ = l_Lean_Linter_MissingDocs_checkRegisterOption(v_stx_4337_, v_a_4338_, v_a_4339_);
lean_dec(v_a_4339_);
lean_dec_ref(v_a_4338_);
lean_dec(v_stx_4337_);
return v_res_4341_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__2(void){
_start:
{
lean_object* v___x_4347_; lean_object* v___x_4348_; 
v___x_4347_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkRegisterOption___boxed), 4, 0);
v___x_4348_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4348_, 0, v___x_4347_);
return v___x_4348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1(){
_start:
{
lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___x_4350_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__1));
v___x_4351_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__2, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__2_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___closed__2);
v___x_4352_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4350_, v___x_4351_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1___boxed(lean_object* v_a_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1();
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterSimpAttr(lean_object* v_a_4356_, lean_object* v_a_4357_, lean_object* v_a_4358_){
_start:
{
lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; 
v___x_4360_ = ((lean_object*)(l_Lean_Linter_MissingDocs_checkRegisterSimpAttr___closed__0));
v___x_4361_ = lean_unsigned_to_nat(2u);
v___x_4362_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_4360_, v___x_4361_, v_a_4356_, v_a_4357_, v_a_4358_);
return v___x_4362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_checkRegisterSimpAttr___boxed(lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_){
_start:
{
lean_object* v_res_4367_; 
v_res_4367_ = l_Lean_Linter_MissingDocs_checkRegisterSimpAttr(v_a_4363_, v_a_4364_, v_a_4365_);
lean_dec(v_a_4365_);
lean_dec_ref(v_a_4364_);
lean_dec(v_a_4363_);
return v_res_4367_;
}
}
static lean_object* _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__2(void){
_start:
{
lean_object* v___x_4374_; lean_object* v___x_4375_; 
v___x_4374_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_checkRegisterSimpAttr___boxed), 4, 0);
v___x_4375_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_4375_, 0, v___x_4374_);
return v___x_4375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1(){
_start:
{
lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4377_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__1));
v___x_4378_ = lean_obj_once(&l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__2, &l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__2_once, _init_l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___closed__2);
v___x_4379_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_4377_, v___x_4378_);
return v___x_4379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1___boxed(lean_object* v_a_4380_){
_start:
{
lean_object* v_res_4381_; 
v_res_4381_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1();
return v_res_4381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___redArg(lean_object* v_t_4382_, lean_object* v___y_4383_){
_start:
{
lean_object* v___x_4385_; lean_object* v_infoState_4386_; uint8_t v_enabled_4387_; 
v___x_4385_ = lean_st_ref_get(v___y_4383_);
v_infoState_4386_ = lean_ctor_get(v___x_4385_, 8);
lean_inc_ref(v_infoState_4386_);
lean_dec(v___x_4385_);
v_enabled_4387_ = lean_ctor_get_uint8(v_infoState_4386_, sizeof(void*)*3);
lean_dec_ref(v_infoState_4386_);
if (v_enabled_4387_ == 0)
{
lean_object* v___x_4388_; lean_object* v___x_4389_; 
lean_dec_ref(v_t_4382_);
v___x_4388_ = lean_box(0);
v___x_4389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4389_, 0, v___x_4388_);
return v___x_4389_;
}
else
{
lean_object* v___x_4390_; lean_object* v_infoState_4391_; lean_object* v_env_4392_; lean_object* v_messages_4393_; lean_object* v_scopes_4394_; lean_object* v_usedQuotCtxts_4395_; lean_object* v_nextMacroScope_4396_; lean_object* v_maxRecDepth_4397_; lean_object* v_ngen_4398_; lean_object* v_auxDeclNGen_4399_; lean_object* v_traceState_4400_; lean_object* v_snapshotTasks_4401_; lean_object* v_prevLinterStates_4402_; lean_object* v_codeQualityEntryTasks_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4425_; 
v___x_4390_ = lean_st_ref_take(v___y_4383_);
v_infoState_4391_ = lean_ctor_get(v___x_4390_, 8);
v_env_4392_ = lean_ctor_get(v___x_4390_, 0);
v_messages_4393_ = lean_ctor_get(v___x_4390_, 1);
v_scopes_4394_ = lean_ctor_get(v___x_4390_, 2);
v_usedQuotCtxts_4395_ = lean_ctor_get(v___x_4390_, 3);
v_nextMacroScope_4396_ = lean_ctor_get(v___x_4390_, 4);
v_maxRecDepth_4397_ = lean_ctor_get(v___x_4390_, 5);
v_ngen_4398_ = lean_ctor_get(v___x_4390_, 6);
v_auxDeclNGen_4399_ = lean_ctor_get(v___x_4390_, 7);
v_traceState_4400_ = lean_ctor_get(v___x_4390_, 9);
v_snapshotTasks_4401_ = lean_ctor_get(v___x_4390_, 10);
v_prevLinterStates_4402_ = lean_ctor_get(v___x_4390_, 11);
v_codeQualityEntryTasks_4403_ = lean_ctor_get(v___x_4390_, 12);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4390_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4405_ = v___x_4390_;
v_isShared_4406_ = v_isSharedCheck_4425_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4403_);
lean_inc(v_prevLinterStates_4402_);
lean_inc(v_snapshotTasks_4401_);
lean_inc(v_traceState_4400_);
lean_inc(v_infoState_4391_);
lean_inc(v_auxDeclNGen_4399_);
lean_inc(v_ngen_4398_);
lean_inc(v_maxRecDepth_4397_);
lean_inc(v_nextMacroScope_4396_);
lean_inc(v_usedQuotCtxts_4395_);
lean_inc(v_scopes_4394_);
lean_inc(v_messages_4393_);
lean_inc(v_env_4392_);
lean_dec(v___x_4390_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4425_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
uint8_t v_enabled_4407_; lean_object* v_assignment_4408_; lean_object* v_lazyAssignment_4409_; lean_object* v_trees_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4424_; 
v_enabled_4407_ = lean_ctor_get_uint8(v_infoState_4391_, sizeof(void*)*3);
v_assignment_4408_ = lean_ctor_get(v_infoState_4391_, 0);
v_lazyAssignment_4409_ = lean_ctor_get(v_infoState_4391_, 1);
v_trees_4410_ = lean_ctor_get(v_infoState_4391_, 2);
v_isSharedCheck_4424_ = !lean_is_exclusive(v_infoState_4391_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4412_ = v_infoState_4391_;
v_isShared_4413_ = v_isSharedCheck_4424_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_trees_4410_);
lean_inc(v_lazyAssignment_4409_);
lean_inc(v_assignment_4408_);
lean_dec(v_infoState_4391_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4424_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4417_; 
v___x_4414_ = lean_box(0);
v___x_4415_ = l_Lean_PersistentArray_push___redArg(v_trees_4410_, v_t_4382_);
if (v_isShared_4413_ == 0)
{
lean_ctor_set(v___x_4412_, 2, v___x_4415_);
v___x_4417_ = v___x_4412_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_assignment_4408_);
lean_ctor_set(v_reuseFailAlloc_4423_, 1, v_lazyAssignment_4409_);
lean_ctor_set(v_reuseFailAlloc_4423_, 2, v___x_4415_);
lean_ctor_set_uint8(v_reuseFailAlloc_4423_, sizeof(void*)*3, v_enabled_4407_);
v___x_4417_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
lean_object* v___x_4419_; 
if (v_isShared_4406_ == 0)
{
lean_ctor_set(v___x_4405_, 8, v___x_4417_);
v___x_4419_ = v___x_4405_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_env_4392_);
lean_ctor_set(v_reuseFailAlloc_4422_, 1, v_messages_4393_);
lean_ctor_set(v_reuseFailAlloc_4422_, 2, v_scopes_4394_);
lean_ctor_set(v_reuseFailAlloc_4422_, 3, v_usedQuotCtxts_4395_);
lean_ctor_set(v_reuseFailAlloc_4422_, 4, v_nextMacroScope_4396_);
lean_ctor_set(v_reuseFailAlloc_4422_, 5, v_maxRecDepth_4397_);
lean_ctor_set(v_reuseFailAlloc_4422_, 6, v_ngen_4398_);
lean_ctor_set(v_reuseFailAlloc_4422_, 7, v_auxDeclNGen_4399_);
lean_ctor_set(v_reuseFailAlloc_4422_, 8, v___x_4417_);
lean_ctor_set(v_reuseFailAlloc_4422_, 9, v_traceState_4400_);
lean_ctor_set(v_reuseFailAlloc_4422_, 10, v_snapshotTasks_4401_);
lean_ctor_set(v_reuseFailAlloc_4422_, 11, v_prevLinterStates_4402_);
lean_ctor_set(v_reuseFailAlloc_4422_, 12, v_codeQualityEntryTasks_4403_);
v___x_4419_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
lean_object* v___x_4420_; lean_object* v___x_4421_; 
v___x_4420_ = lean_st_ref_put(v___y_4383_, v___x_4419_);
v___x_4421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4421_, 0, v___x_4414_);
return v___x_4421_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_t_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_){
_start:
{
lean_object* v_res_4429_; 
v_res_4429_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___redArg(v_t_4426_, v___y_4427_);
lean_dec(v___y_4427_);
return v_res_4429_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4430_ = lean_unsigned_to_nat(32u);
v___x_4431_ = lean_mk_empty_array_with_capacity(v___x_4430_);
v___x_4432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4432_, 0, v___x_4431_);
return v___x_4432_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__1(void){
_start:
{
size_t v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; 
v___x_4433_ = ((size_t)5ULL);
v___x_4434_ = lean_unsigned_to_nat(0u);
v___x_4435_ = lean_unsigned_to_nat(32u);
v___x_4436_ = lean_mk_empty_array_with_capacity(v___x_4435_);
v___x_4437_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__0);
v___x_4438_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4438_, 0, v___x_4437_);
lean_ctor_set(v___x_4438_, 1, v___x_4436_);
lean_ctor_set(v___x_4438_, 2, v___x_4434_);
lean_ctor_set(v___x_4438_, 3, v___x_4434_);
lean_ctor_set_usize(v___x_4438_, 4, v___x_4433_);
return v___x_4438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1(lean_object* v_t_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_){
_start:
{
lean_object* v___x_4443_; lean_object* v_infoState_4444_; uint8_t v_enabled_4445_; 
v___x_4443_ = lean_st_ref_get(v___y_4441_);
v_infoState_4444_ = lean_ctor_get(v___x_4443_, 8);
lean_inc_ref(v_infoState_4444_);
lean_dec(v___x_4443_);
v_enabled_4445_ = lean_ctor_get_uint8(v_infoState_4444_, sizeof(void*)*3);
lean_dec_ref(v_infoState_4444_);
if (v_enabled_4445_ == 0)
{
lean_object* v___x_4446_; lean_object* v___x_4447_; 
lean_dec_ref(v_t_4439_);
v___x_4446_ = lean_box(0);
v___x_4447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
return v___x_4447_;
}
else
{
lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
v___x_4448_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___closed__1);
v___x_4449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4449_, 0, v_t_4439_);
lean_ctor_set(v___x_4449_, 1, v___x_4448_);
v___x_4450_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___redArg(v___x_4449_, v___y_4441_);
return v___x_4450_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1___boxed(lean_object* v_t_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_){
_start:
{
lean_object* v_res_4455_; 
v_res_4455_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1(v_t_4451_, v___y_4452_, v___y_4453_);
lean_dec(v___y_4453_);
lean_dec_ref(v___y_4452_);
return v_res_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__0(lean_object* v_info_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; 
v___x_4460_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_4460_, 0, v_info_4456_);
v___x_4461_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1(v___x_4460_, v___y_4457_, v___y_4458_);
return v___x_4461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__0___boxed(lean_object* v_info_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__0(v_info_4462_, v___y_4463_, v___y_4464_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
return v_res_4466_;
}
}
static lean_object* _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; 
v___x_4468_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__0));
v___x_4469_ = l_Lean_stringToMessageData(v___x_4468_);
return v___x_4469_;
}
}
static lean_object* _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_4471_; lean_object* v___x_4472_; 
v___x_4471_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__2));
v___x_4472_ = l_Lean_stringToMessageData(v___x_4471_);
return v___x_4472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg(lean_object* v_optionName_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_){
_start:
{
lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; 
v___x_4477_ = lean_obj_once(&l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__1, &l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__1_once, _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__1);
v___x_4478_ = l_Lean_MessageData_ofName(v_optionName_4473_);
v___x_4479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4479_, 0, v___x_4477_);
lean_ctor_set(v___x_4479_, 1, v___x_4478_);
v___x_4480_ = lean_obj_once(&l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__3, &l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__3_once, _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___closed__3);
v___x_4481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4481_, 0, v___x_4479_);
lean_ctor_set(v___x_4481_, 1, v___x_4480_);
v___x_4482_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg(v___x_4481_, v___y_4474_, v___y_4475_);
return v___x_4482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg___boxed(lean_object* v_optionName_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v_res_4487_; 
v_res_4487_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg(v_optionName_4483_, v___y_4484_, v___y_4485_);
lean_dec(v___y_4485_);
lean_dec_ref(v___y_4484_);
return v_res_4487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__6(lean_object* v_o_4488_, lean_object* v_k_4489_, lean_object* v_v_4490_){
_start:
{
lean_object* v_map_4491_; uint8_t v_hasTrace_4492_; lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4505_; 
v_map_4491_ = lean_ctor_get(v_o_4488_, 0);
v_hasTrace_4492_ = lean_ctor_get_uint8(v_o_4488_, sizeof(void*)*1);
v_isSharedCheck_4505_ = !lean_is_exclusive(v_o_4488_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4494_ = v_o_4488_;
v_isShared_4495_ = v_isSharedCheck_4505_;
goto v_resetjp_4493_;
}
else
{
lean_inc(v_map_4491_);
lean_dec(v_o_4488_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4505_;
goto v_resetjp_4493_;
}
v_resetjp_4493_:
{
lean_object* v___x_4496_; 
lean_inc(v_k_4489_);
v___x_4496_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_4489_, v_v_4490_, v_map_4491_);
if (v_hasTrace_4492_ == 0)
{
lean_object* v___x_4497_; uint8_t v___x_4498_; lean_object* v___x_4500_; 
v___x_4497_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__3_spec__5___closed__9));
v___x_4498_ = l_Lean_Name_isPrefixOf(v___x_4497_, v_k_4489_);
lean_dec(v_k_4489_);
if (v_isShared_4495_ == 0)
{
lean_ctor_set(v___x_4494_, 0, v___x_4496_);
v___x_4500_ = v___x_4494_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v___x_4496_);
v___x_4500_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4499_;
}
v_reusejp_4499_:
{
lean_ctor_set_uint8(v___x_4500_, sizeof(void*)*1, v___x_4498_);
return v___x_4500_;
}
}
else
{
lean_object* v___x_4503_; 
lean_dec(v_k_4489_);
if (v_isShared_4495_ == 0)
{
lean_ctor_set(v___x_4494_, 0, v___x_4496_);
v___x_4503_ = v___x_4494_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v___x_4496_);
lean_ctor_set_uint8(v_reuseFailAlloc_4504_, sizeof(void*)*1, v_hasTrace_4492_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8_spec__10(lean_object* v_msg_4506_){
_start:
{
lean_object* v___x_4507_; lean_object* v___x_4508_; 
v___x_4507_ = l_Lean_instInhabitedExpr;
v___x_4508_ = lean_panic_fn_borrowed(v___x_4507_, v_msg_4506_);
return v___x_4508_;
}
}
static lean_object* _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__1(void){
_start:
{
lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4510_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__0));
v___x_4511_ = l_Lean_stringToMessageData(v___x_4510_);
return v___x_4511_;
}
}
static lean_object* _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__3(void){
_start:
{
lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4513_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__2));
v___x_4514_ = l_Lean_stringToMessageData(v___x_4513_);
return v___x_4514_;
}
}
static lean_object* _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__5(void){
_start:
{
lean_object* v___x_4516_; lean_object* v___x_4517_; 
v___x_4516_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__4));
v___x_4517_ = l_Lean_stringToMessageData(v___x_4516_);
return v___x_4517_;
}
}
static lean_object* _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__7(void){
_start:
{
lean_object* v___x_4519_; lean_object* v___x_4520_; 
v___x_4519_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__6));
v___x_4520_ = l_Lean_stringToMessageData(v___x_4519_);
return v___x_4520_;
}
}
static lean_object* _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__16(void){
_start:
{
lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4532_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__15));
v___x_4533_ = lean_unsigned_to_nat(14u);
v___x_4534_ = lean_unsigned_to_nat(22u);
v___x_4535_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__14));
v___x_4536_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__13));
v___x_4537_ = l_mkPanicMessageWithDecl(v___x_4536_, v___x_4535_, v___x_4534_, v___x_4533_, v___x_4532_);
return v___x_4537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8(lean_object* v_optionName_4538_, lean_object* v_found_4539_, lean_object* v_defVal_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_){
_start:
{
lean_object* v___x_4544_; 
v___x_4544_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_ctorType_x3f(v_defVal_4540_);
if (lean_obj_tag(v___x_4544_) == 1)
{
lean_object* v_val_4545_; lean_object* v___y_4547_; lean_object* v___y_4548_; lean_object* v___y_4549_; lean_object* v___y_4568_; lean_object* v___x_4616_; 
v_val_4545_ = lean_ctor_get(v___x_4544_, 0);
lean_inc(v_val_4545_);
lean_dec_ref_known(v___x_4544_, 1);
v___x_4616_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_ctorType_x3f(v_found_4539_);
if (lean_obj_tag(v___x_4616_) == 0)
{
lean_object* v___x_4617_; lean_object* v___x_4618_; 
v___x_4617_ = lean_obj_once(&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__16, &l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__16_once, _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__16);
v___x_4618_ = l_panic___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8_spec__10(v___x_4617_);
v___y_4568_ = v___x_4618_;
goto v___jp_4567_;
}
else
{
lean_object* v_val_4619_; 
v_val_4619_ = lean_ctor_get(v___x_4616_, 0);
lean_inc(v_val_4619_);
lean_dec_ref_known(v___x_4616_, 1);
v___y_4568_ = v_val_4619_;
goto v___jp_4567_;
}
v___jp_4546_:
{
lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; 
v___x_4550_ = l_Lean_MessageData_ofFormat(v___y_4549_);
v___x_4551_ = l_Lean_indentD(v___x_4550_);
lean_inc_ref(v___y_4548_);
v___x_4552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4552_, 0, v___y_4548_);
lean_ctor_set(v___x_4552_, 1, v___x_4551_);
v___x_4553_ = lean_obj_once(&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__1, &l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__1_once, _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__1);
v___x_4554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4554_, 0, v___x_4552_);
lean_ctor_set(v___x_4554_, 1, v___x_4553_);
v___x_4555_ = l_Lean_MessageData_ofExpr(v___y_4547_);
v___x_4556_ = l_Lean_indentD(v___x_4555_);
v___x_4557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4554_);
lean_ctor_set(v___x_4557_, 1, v___x_4556_);
v___x_4558_ = lean_obj_once(&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__3, &l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__3_once, _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__3);
v___x_4559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4557_);
lean_ctor_set(v___x_4559_, 1, v___x_4558_);
v___x_4560_ = l_Lean_MessageData_ofName(v_optionName_4538_);
v___x_4561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4559_);
lean_ctor_set(v___x_4561_, 1, v___x_4560_);
v___x_4562_ = lean_obj_once(&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__5, &l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__5_once, _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__5);
v___x_4563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4563_, 0, v___x_4561_);
lean_ctor_set(v___x_4563_, 1, v___x_4562_);
v___x_4564_ = l_Lean_indentExpr(v_val_4545_);
v___x_4565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4563_);
lean_ctor_set(v___x_4565_, 1, v___x_4564_);
v___x_4566_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg(v___x_4565_, v___y_4541_, v___y_4542_);
return v___x_4566_;
}
v___jp_4567_:
{
lean_object* v___x_4569_; 
v___x_4569_ = lean_obj_once(&l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__7, &l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__7_once, _init_l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__7);
switch(lean_obj_tag(v_found_4539_))
{
case 0:
{
lean_object* v_v_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4578_; 
v_v_4570_ = lean_ctor_get(v_found_4539_, 0);
v_isSharedCheck_4578_ = !lean_is_exclusive(v_found_4539_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4572_ = v_found_4539_;
v_isShared_4573_ = v_isSharedCheck_4578_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_v_4570_);
lean_dec(v_found_4539_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4578_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4574_; lean_object* v___x_4576_; 
v___x_4574_ = l_String_quote(v_v_4570_);
if (v_isShared_4573_ == 0)
{
lean_ctor_set_tag(v___x_4572_, 3);
lean_ctor_set(v___x_4572_, 0, v___x_4574_);
v___x_4576_ = v___x_4572_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v___x_4574_);
v___x_4576_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
v___y_4547_ = v___y_4568_;
v___y_4548_ = v___x_4569_;
v___y_4549_ = v___x_4576_;
goto v___jp_4546_;
}
}
}
case 1:
{
uint8_t v_v_4579_; 
v_v_4579_ = lean_ctor_get_uint8(v_found_4539_, 0);
lean_dec_ref_known(v_found_4539_, 0);
if (v_v_4579_ == 0)
{
lean_object* v___x_4580_; 
v___x_4580_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__9));
v___y_4547_ = v___y_4568_;
v___y_4548_ = v___x_4569_;
v___y_4549_ = v___x_4580_;
goto v___jp_4546_;
}
else
{
lean_object* v___x_4581_; 
v___x_4581_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__11));
v___y_4547_ = v___y_4568_;
v___y_4548_ = v___x_4569_;
v___y_4549_ = v___x_4581_;
goto v___jp_4546_;
}
}
case 2:
{
lean_object* v_v_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4593_; 
v_v_4582_ = lean_ctor_get(v_found_4539_, 0);
v_isSharedCheck_4593_ = !lean_is_exclusive(v_found_4539_);
if (v_isSharedCheck_4593_ == 0)
{
v___x_4584_ = v_found_4539_;
v_isShared_4585_ = v_isSharedCheck_4593_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_v_4582_);
lean_dec(v_found_4539_);
v___x_4584_ = lean_box(0);
v_isShared_4585_ = v_isSharedCheck_4593_;
goto v_resetjp_4583_;
}
v_resetjp_4583_:
{
lean_object* v___x_4586_; uint8_t v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4590_; 
v___x_4586_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__12));
v___x_4587_ = 1;
v___x_4588_ = l_Lean_Name_toString(v_v_4582_, v___x_4587_);
if (v_isShared_4585_ == 0)
{
lean_ctor_set_tag(v___x_4584_, 3);
lean_ctor_set(v___x_4584_, 0, v___x_4588_);
v___x_4590_ = v___x_4584_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4592_; 
v_reuseFailAlloc_4592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4592_, 0, v___x_4588_);
v___x_4590_ = v_reuseFailAlloc_4592_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
lean_object* v___x_4591_; 
v___x_4591_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4591_, 0, v___x_4586_);
lean_ctor_set(v___x_4591_, 1, v___x_4590_);
v___y_4547_ = v___y_4568_;
v___y_4548_ = v___x_4569_;
v___y_4549_ = v___x_4591_;
goto v___jp_4546_;
}
}
}
case 3:
{
lean_object* v_v_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4602_; 
v_v_4594_ = lean_ctor_get(v_found_4539_, 0);
v_isSharedCheck_4602_ = !lean_is_exclusive(v_found_4539_);
if (v_isSharedCheck_4602_ == 0)
{
v___x_4596_ = v_found_4539_;
v_isShared_4597_ = v_isSharedCheck_4602_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_v_4594_);
lean_dec(v_found_4539_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4602_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4598_; lean_object* v___x_4600_; 
v___x_4598_ = l_Nat_reprFast(v_v_4594_);
if (v_isShared_4597_ == 0)
{
lean_ctor_set(v___x_4596_, 0, v___x_4598_);
v___x_4600_ = v___x_4596_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v___x_4598_);
v___x_4600_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
v___y_4547_ = v___y_4568_;
v___y_4548_ = v___x_4569_;
v___y_4549_ = v___x_4600_;
goto v___jp_4546_;
}
}
}
case 4:
{
lean_object* v_v_4603_; lean_object* v___x_4605_; uint8_t v_isShared_4606_; uint8_t v_isSharedCheck_4611_; 
v_v_4603_ = lean_ctor_get(v_found_4539_, 0);
v_isSharedCheck_4611_ = !lean_is_exclusive(v_found_4539_);
if (v_isSharedCheck_4611_ == 0)
{
v___x_4605_ = v_found_4539_;
v_isShared_4606_ = v_isSharedCheck_4611_;
goto v_resetjp_4604_;
}
else
{
lean_inc(v_v_4603_);
lean_dec(v_found_4539_);
v___x_4605_ = lean_box(0);
v_isShared_4606_ = v_isSharedCheck_4611_;
goto v_resetjp_4604_;
}
v_resetjp_4604_:
{
lean_object* v___x_4607_; lean_object* v___x_4609_; 
v___x_4607_ = l_Int_repr(v_v_4603_);
lean_dec(v_v_4603_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set_tag(v___x_4605_, 3);
lean_ctor_set(v___x_4605_, 0, v___x_4607_);
v___x_4609_ = v___x_4605_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4610_; 
v_reuseFailAlloc_4610_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4610_, 0, v___x_4607_);
v___x_4609_ = v_reuseFailAlloc_4610_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
v___y_4547_ = v___y_4568_;
v___y_4548_ = v___x_4569_;
v___y_4549_ = v___x_4609_;
goto v___jp_4546_;
}
}
}
default: 
{
lean_object* v_v_4612_; lean_object* v___x_4613_; uint8_t v___x_4614_; lean_object* v___x_4615_; 
v_v_4612_ = lean_ctor_get(v_found_4539_, 0);
lean_inc(v_v_4612_);
lean_dec_ref_known(v_found_4539_, 1);
v___x_4613_ = lean_box(0);
v___x_4614_ = 0;
v___x_4615_ = l_Lean_Syntax_formatStx(v_v_4612_, v___x_4613_, v___x_4614_);
v___y_4547_ = v___y_4568_;
v___y_4548_ = v___x_4569_;
v___y_4549_ = v___x_4615_;
goto v___jp_4546_;
}
}
}
}
else
{
lean_object* v___x_4620_; 
lean_dec(v___x_4544_);
lean_dec_ref(v_found_4539_);
v___x_4620_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg(v_optionName_4538_, v___y_4541_, v___y_4542_);
return v___x_4620_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___boxed(lean_object* v_optionName_4621_, lean_object* v_found_4622_, lean_object* v_defVal_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_){
_start:
{
lean_object* v_res_4627_; 
v_res_4627_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8(v_optionName_4621_, v_found_4622_, v_defVal_4623_, v___y_4624_, v___y_4625_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
lean_dec_ref(v_defVal_4623_);
return v_res_4627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5(lean_object* v_optionName_4628_, lean_object* v_decl_4629_, lean_object* v_val_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_){
_start:
{
lean_object* v_defValue_4634_; uint8_t v___x_4635_; 
v_defValue_4634_ = lean_ctor_get(v_decl_4629_, 2);
v___x_4635_ = l_Lean_DataValue_sameCtor(v_defValue_4634_, v_val_4630_);
if (v___x_4635_ == 0)
{
lean_object* v___x_4636_; 
v___x_4636_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8(v_optionName_4628_, v_val_4630_, v_defValue_4634_, v___y_4631_, v___y_4632_);
return v___x_4636_;
}
else
{
lean_object* v___x_4637_; lean_object* v___x_4638_; 
lean_dec_ref(v_val_4630_);
lean_dec(v_optionName_4628_);
v___x_4637_ = lean_box(0);
v___x_4638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4638_, 0, v___x_4637_);
return v___x_4638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5___boxed(lean_object* v_optionName_4639_, lean_object* v_decl_4640_, lean_object* v_val_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_){
_start:
{
lean_object* v_res_4645_; 
v_res_4645_ = l_Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5(v_optionName_4639_, v_decl_4640_, v_val_4641_, v___y_4642_, v___y_4643_);
lean_dec(v___y_4643_);
lean_dec_ref(v___y_4642_);
lean_dec_ref(v_decl_4640_);
return v_res_4645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3(lean_object* v_optionName_4646_, lean_object* v_decl_4647_, lean_object* v_val_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_){
_start:
{
lean_object* v___x_4652_; 
lean_inc_ref(v_val_4648_);
lean_inc(v_optionName_4646_);
v___x_4652_ = l_Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5(v_optionName_4646_, v_decl_4647_, v_val_4648_, v___y_4649_, v___y_4650_);
if (lean_obj_tag(v___x_4652_) == 0)
{
lean_object* v___x_4654_; uint8_t v_isShared_4655_; uint8_t v_isSharedCheck_4666_; 
v_isSharedCheck_4666_ = !lean_is_exclusive(v___x_4652_);
if (v_isSharedCheck_4666_ == 0)
{
lean_object* v_unused_4667_; 
v_unused_4667_ = lean_ctor_get(v___x_4652_, 0);
lean_dec(v_unused_4667_);
v___x_4654_ = v___x_4652_;
v_isShared_4655_ = v_isSharedCheck_4666_;
goto v_resetjp_4653_;
}
else
{
lean_dec(v___x_4652_);
v___x_4654_ = lean_box(0);
v_isShared_4655_ = v_isSharedCheck_4666_;
goto v_resetjp_4653_;
}
v_resetjp_4653_:
{
lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v_scopes_4658_; lean_object* v___x_4659_; lean_object* v_opts_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4664_; 
v___x_4656_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4657_ = lean_st_ref_get(v___y_4650_);
v_scopes_4658_ = lean_ctor_get(v___x_4657_, 2);
lean_inc(v_scopes_4658_);
lean_dec(v___x_4657_);
v___x_4659_ = l_List_head_x21___redArg(v___x_4656_, v_scopes_4658_);
lean_dec(v_scopes_4658_);
v_opts_4660_ = lean_ctor_get(v___x_4659_, 1);
lean_inc_ref(v_opts_4660_);
lean_dec(v___x_4659_);
v___x_4661_ = l_Lean_Options_set___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__6(v_opts_4660_, v_optionName_4646_, v_val_4648_);
v___x_4662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4662_, 0, v___x_4661_);
lean_ctor_set(v___x_4662_, 1, v_decl_4647_);
if (v_isShared_4655_ == 0)
{
lean_ctor_set(v___x_4654_, 0, v___x_4662_);
v___x_4664_ = v___x_4654_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v___x_4662_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
}
else
{
lean_object* v_a_4668_; lean_object* v___x_4670_; uint8_t v_isShared_4671_; uint8_t v_isSharedCheck_4675_; 
lean_dec_ref(v_val_4648_);
lean_dec_ref(v_decl_4647_);
lean_dec(v_optionName_4646_);
v_a_4668_ = lean_ctor_get(v___x_4652_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4652_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4670_ = v___x_4652_;
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
else
{
lean_inc(v_a_4668_);
lean_dec(v___x_4652_);
v___x_4670_ = lean_box(0);
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
v_resetjp_4669_:
{
lean_object* v___x_4673_; 
if (v_isShared_4671_ == 0)
{
v___x_4673_ = v___x_4670_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v_a_4668_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
return v___x_4673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3___boxed(lean_object* v_optionName_4676_, lean_object* v_decl_4677_, lean_object* v_val_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_){
_start:
{
lean_object* v_res_4682_; 
v_res_4682_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3(v_optionName_4676_, v_decl_4677_, v_val_4678_, v___y_4679_, v___y_4680_);
lean_dec(v___y_4680_);
lean_dec_ref(v___y_4679_);
return v_res_4682_;
}
}
static lean_object* _init_l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4684_; lean_object* v___x_4685_; 
v___x_4684_ = ((lean_object*)(l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__0));
v___x_4685_ = l_Lean_stringToMessageData(v___x_4684_);
return v___x_4685_;
}
}
static lean_object* _init_l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4687_ = ((lean_object*)(l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__2));
v___x_4688_ = l_Lean_stringToMessageData(v___x_4687_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0(lean_object* v_id_4689_, lean_object* v_val_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v___x_4694_; 
v___x_4694_ = l_Lean_Elab_Command_getRef___redArg(v___y_4691_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v_a_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4705_; uint8_t v_isShared_4706_; uint8_t v_isSharedCheck_4775_; 
v_a_4695_ = lean_ctor_get(v___x_4694_, 0);
lean_inc_n(v_a_4695_, 2);
lean_dec_ref_known(v___x_4694_, 1);
v___x_4696_ = l_Lean_Syntax_getArgs(v_a_4695_);
v___x_4697_ = lean_unsigned_to_nat(3u);
v___x_4698_ = lean_unsigned_to_nat(0u);
v___x_4699_ = l_Array_toSubarray___redArg(v___x_4696_, v___x_4698_, v___x_4697_);
v___x_4700_ = l_Subarray_copy___redArg(v___x_4699_);
v___x_4701_ = l_Lean_Syntax_setArgs(v_a_4695_, v___x_4700_);
v___x_4702_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4701_);
v___x_4703_ = l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__0(v___x_4702_, v___y_4691_, v___y_4692_);
v_isSharedCheck_4775_ = !lean_is_exclusive(v___x_4703_);
if (v_isSharedCheck_4775_ == 0)
{
lean_object* v_unused_4776_; 
v_unused_4776_ = lean_ctor_get(v___x_4703_, 0);
lean_dec(v_unused_4776_);
v___x_4705_ = v___x_4703_;
v_isShared_4706_ = v_isSharedCheck_4775_;
goto v_resetjp_4704_;
}
else
{
lean_dec(v___x_4703_);
v___x_4705_ = lean_box(0);
v_isShared_4706_ = v_isSharedCheck_4775_;
goto v_resetjp_4704_;
}
v_resetjp_4704_:
{
lean_object* v___x_4707_; lean_object* v_optionName_4708_; lean_object* v___x_4709_; 
v___x_4707_ = l_Lean_Syntax_getId(v_id_4689_);
v_optionName_4708_ = l_Lean_Name_eraseMacroScopes(v___x_4707_);
lean_dec(v___x_4707_);
lean_inc(v_optionName_4708_);
v___x_4709_ = l_Lean_getOptionDecl(v_optionName_4708_);
if (lean_obj_tag(v___x_4709_) == 0)
{
lean_object* v_a_4710_; lean_object* v_declName_4711_; lean_object* v_defValue_4712_; lean_object* v___x_4713_; lean_object* v___x_4715_; 
lean_dec(v_a_4695_);
v_a_4710_ = lean_ctor_get(v___x_4709_, 0);
lean_inc(v_a_4710_);
lean_dec_ref_known(v___x_4709_, 1);
v_declName_4711_ = lean_ctor_get(v_a_4710_, 1);
v_defValue_4712_ = lean_ctor_get(v_a_4710_, 2);
lean_inc(v_declName_4711_);
lean_inc(v_optionName_4708_);
v___x_4713_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4713_, 0, v_id_4689_);
lean_ctor_set(v___x_4713_, 1, v_optionName_4708_);
lean_ctor_set(v___x_4713_, 2, v_declName_4711_);
if (v_isShared_4706_ == 0)
{
lean_ctor_set_tag(v___x_4705_, 5);
lean_ctor_set(v___x_4705_, 0, v___x_4713_);
v___x_4715_ = v___x_4705_;
goto v_reusejp_4714_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v___x_4713_);
v___x_4715_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4714_;
}
v_reusejp_4714_:
{
lean_object* v___x_4716_; lean_object* v___x_4731_; 
v___x_4716_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1(v___x_4715_, v___y_4691_, v___y_4692_);
lean_dec_ref(v___x_4716_);
v___x_4731_ = l_Lean_Syntax_isStrLit_x3f(v_val_4690_);
if (lean_obj_tag(v___x_4731_) == 0)
{
lean_object* v___x_4732_; 
v___x_4732_ = l_Lean_Syntax_isNatLit_x3f(v_val_4690_);
if (lean_obj_tag(v___x_4732_) == 0)
{
if (lean_obj_tag(v_val_4690_) == 2)
{
lean_object* v_val_4733_; lean_object* v___x_4734_; uint8_t v___x_4735_; 
v_val_4733_ = lean_ctor_get(v_val_4690_, 1);
v___x_4734_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__10));
v___x_4735_ = lean_string_dec_eq(v_val_4733_, v___x_4734_);
if (v___x_4735_ == 0)
{
lean_object* v___x_4736_; uint8_t v___x_4737_; 
v___x_4736_ = ((lean_object*)(l___private_Lean_Elab_SetOption_0__Lean_Elab_validateOptionValue_throwMistypedOptionValue___at___00Lean_Elab_validateOptionValue___at___00__private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3_spec__5_spec__8___closed__8));
v___x_4737_ = lean_string_dec_eq(v_val_4733_, v___x_4736_);
if (v___x_4737_ == 0)
{
lean_inc_ref(v_defValue_4712_);
lean_dec(v_a_4710_);
goto v___jp_4717_;
}
else
{
lean_object* v___x_4738_; lean_object* v___x_4739_; 
lean_dec_ref_known(v_val_4690_, 2);
v___x_4738_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4738_, 0, v___x_4735_);
v___x_4739_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3(v_optionName_4708_, v_a_4710_, v___x_4738_, v___y_4691_, v___y_4692_);
return v___x_4739_;
}
}
else
{
lean_object* v___x_4740_; lean_object* v___x_4741_; 
lean_dec_ref_known(v_val_4690_, 2);
v___x_4740_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4740_, 0, v___x_4735_);
v___x_4741_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3(v_optionName_4708_, v_a_4710_, v___x_4740_, v___y_4691_, v___y_4692_);
return v___x_4741_;
}
}
else
{
lean_inc_ref(v_defValue_4712_);
lean_dec(v_a_4710_);
goto v___jp_4717_;
}
}
else
{
lean_object* v_val_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4750_; 
lean_dec(v_val_4690_);
v_val_4742_ = lean_ctor_get(v___x_4732_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4744_ = v___x_4732_;
v_isShared_4745_ = v_isSharedCheck_4750_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_val_4742_);
lean_dec(v___x_4732_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4750_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
lean_object* v___x_4747_; 
if (v_isShared_4745_ == 0)
{
lean_ctor_set_tag(v___x_4744_, 3);
v___x_4747_ = v___x_4744_;
goto v_reusejp_4746_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_val_4742_);
v___x_4747_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4746_;
}
v_reusejp_4746_:
{
lean_object* v___x_4748_; 
v___x_4748_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3(v_optionName_4708_, v_a_4710_, v___x_4747_, v___y_4691_, v___y_4692_);
return v___x_4748_;
}
}
}
}
else
{
lean_object* v_val_4751_; lean_object* v___x_4753_; uint8_t v_isShared_4754_; uint8_t v_isSharedCheck_4759_; 
lean_dec(v_val_4690_);
v_val_4751_ = lean_ctor_get(v___x_4731_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4731_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4753_ = v___x_4731_;
v_isShared_4754_ = v_isSharedCheck_4759_;
goto v_resetjp_4752_;
}
else
{
lean_inc(v_val_4751_);
lean_dec(v___x_4731_);
v___x_4753_ = lean_box(0);
v_isShared_4754_ = v_isSharedCheck_4759_;
goto v_resetjp_4752_;
}
v_resetjp_4752_:
{
lean_object* v___x_4756_; 
if (v_isShared_4754_ == 0)
{
lean_ctor_set_tag(v___x_4753_, 0);
v___x_4756_ = v___x_4753_;
goto v_reusejp_4755_;
}
else
{
lean_object* v_reuseFailAlloc_4758_; 
v_reuseFailAlloc_4758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4758_, 0, v_val_4751_);
v___x_4756_ = v_reuseFailAlloc_4758_;
goto v_reusejp_4755_;
}
v_reusejp_4755_:
{
lean_object* v___x_4757_; 
v___x_4757_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_elabSetOption_setOption___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__3(v_optionName_4708_, v_a_4710_, v___x_4756_, v___y_4691_, v___y_4692_);
return v___x_4757_;
}
}
}
v___jp_4717_:
{
lean_object* v___x_4718_; 
v___x_4718_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_ctorType_x3f(v_defValue_4712_);
lean_dec_ref(v_defValue_4712_);
if (lean_obj_tag(v___x_4718_) == 1)
{
lean_object* v_val_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; 
lean_dec(v_optionName_4708_);
v_val_4719_ = lean_ctor_get(v___x_4718_, 0);
lean_inc(v_val_4719_);
lean_dec_ref_known(v___x_4718_, 1);
v___x_4720_ = lean_obj_once(&l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__1, &l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__1_once, _init_l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__1);
v___x_4721_ = l_Lean_MessageData_ofSyntax(v_val_4690_);
v___x_4722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4722_, 0, v___x_4720_);
lean_ctor_set(v___x_4722_, 1, v___x_4721_);
v___x_4723_ = lean_obj_once(&l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__3, &l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__3_once, _init_l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___closed__3);
v___x_4724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4724_, 0, v___x_4722_);
lean_ctor_set(v___x_4724_, 1, v___x_4723_);
v___x_4725_ = l_Lean_MessageData_ofExpr(v_val_4719_);
v___x_4726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4724_);
lean_ctor_set(v___x_4726_, 1, v___x_4725_);
v___x_4727_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___closed__1);
v___x_4728_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4728_, 0, v___x_4726_);
lean_ctor_set(v___x_4728_, 1, v___x_4727_);
v___x_4729_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_isEmptyDocString_spec__0_spec__0_spec__1___redArg(v___x_4728_, v___y_4691_, v___y_4692_);
return v___x_4729_;
}
else
{
lean_object* v___x_4730_; 
lean_dec(v___x_4718_);
lean_dec(v_val_4690_);
v___x_4730_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg(v_optionName_4708_, v___y_4691_, v___y_4692_);
return v___x_4730_;
}
}
}
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4774_; 
lean_dec(v_optionName_4708_);
lean_dec(v_val_4690_);
lean_dec(v_id_4689_);
v_a_4761_ = lean_ctor_get(v___x_4709_, 0);
v_isSharedCheck_4774_ = !lean_is_exclusive(v___x_4709_);
if (v_isSharedCheck_4774_ == 0)
{
v___x_4763_ = v___x_4709_;
v_isShared_4764_ = v_isSharedCheck_4774_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4709_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4774_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4765_; lean_object* v___x_4767_; 
v___x_4765_ = lean_io_error_to_string(v_a_4761_);
if (v_isShared_4706_ == 0)
{
lean_ctor_set_tag(v___x_4705_, 3);
lean_ctor_set(v___x_4705_, 0, v___x_4765_);
v___x_4767_ = v___x_4705_;
goto v_reusejp_4766_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v___x_4765_);
v___x_4767_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4766_;
}
v_reusejp_4766_:
{
lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4771_; 
v___x_4768_ = l_Lean_MessageData_ofFormat(v___x_4767_);
v___x_4769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4769_, 0, v_a_4695_);
lean_ctor_set(v___x_4769_, 1, v___x_4768_);
if (v_isShared_4764_ == 0)
{
lean_ctor_set(v___x_4763_, 0, v___x_4769_);
v___x_4771_ = v___x_4763_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v___x_4769_);
v___x_4771_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
return v___x_4771_;
}
}
}
}
}
}
else
{
lean_object* v_a_4777_; lean_object* v___x_4779_; uint8_t v_isShared_4780_; uint8_t v_isSharedCheck_4784_; 
lean_dec(v_val_4690_);
lean_dec(v_id_4689_);
v_a_4777_ = lean_ctor_get(v___x_4694_, 0);
v_isSharedCheck_4784_ = !lean_is_exclusive(v___x_4694_);
if (v_isSharedCheck_4784_ == 0)
{
v___x_4779_ = v___x_4694_;
v_isShared_4780_ = v_isSharedCheck_4784_;
goto v_resetjp_4778_;
}
else
{
lean_inc(v_a_4777_);
lean_dec(v___x_4694_);
v___x_4779_ = lean_box(0);
v_isShared_4780_ = v_isSharedCheck_4784_;
goto v_resetjp_4778_;
}
v_resetjp_4778_:
{
lean_object* v___x_4782_; 
if (v_isShared_4780_ == 0)
{
v___x_4782_ = v___x_4779_;
goto v_reusejp_4781_;
}
else
{
lean_object* v_reuseFailAlloc_4783_; 
v_reuseFailAlloc_4783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4783_, 0, v_a_4777_);
v___x_4782_ = v_reuseFailAlloc_4783_;
goto v_reusejp_4781_;
}
v_reusejp_4781_:
{
return v___x_4782_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0___boxed(lean_object* v_id_4785_, lean_object* v_val_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_, lean_object* v___y_4789_){
_start:
{
lean_object* v_res_4790_; 
v_res_4790_ = l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0(v_id_4785_, v_val_4786_, v___y_4787_, v___y_4788_);
lean_dec(v___y_4788_);
lean_dec_ref(v___y_4787_);
return v_res_4790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___lam__0(lean_object* v___x_4791_, lean_object* v___x_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_){
_start:
{
lean_object* v___x_4796_; 
v___x_4796_ = l_Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0(v___x_4791_, v___x_4792_, v___y_4793_, v___y_4794_);
if (lean_obj_tag(v___x_4796_) == 0)
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4805_; 
v_a_4797_ = lean_ctor_get(v___x_4796_, 0);
v_isSharedCheck_4805_ = !lean_is_exclusive(v___x_4796_);
if (v_isSharedCheck_4805_ == 0)
{
v___x_4799_ = v___x_4796_;
v_isShared_4800_ = v_isSharedCheck_4805_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4796_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4805_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v_fst_4801_; lean_object* v___x_4803_; 
v_fst_4801_ = lean_ctor_get(v_a_4797_, 0);
lean_inc(v_fst_4801_);
lean_dec(v_a_4797_);
if (v_isShared_4800_ == 0)
{
lean_ctor_set(v___x_4799_, 0, v_fst_4801_);
v___x_4803_ = v___x_4799_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v_fst_4801_);
v___x_4803_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
return v___x_4803_;
}
}
}
else
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4822_; 
v_a_4806_ = lean_ctor_get(v___x_4796_, 0);
v_isSharedCheck_4822_ = !lean_is_exclusive(v___x_4796_);
if (v_isSharedCheck_4822_ == 0)
{
v___x_4808_ = v___x_4796_;
v_isShared_4809_ = v_isSharedCheck_4822_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v___x_4796_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4822_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
uint8_t v___x_4810_; 
v___x_4810_ = l_Lean_Exception_isInterrupt(v_a_4806_);
if (v___x_4810_ == 0)
{
lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v_scopes_4813_; lean_object* v___x_4814_; lean_object* v_opts_4815_; lean_object* v___x_4817_; 
lean_dec(v_a_4806_);
v___x_4811_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4812_ = lean_st_ref_get(v___y_4794_);
v_scopes_4813_ = lean_ctor_get(v___x_4812_, 2);
lean_inc(v_scopes_4813_);
lean_dec(v___x_4812_);
v___x_4814_ = l_List_head_x21___redArg(v___x_4811_, v_scopes_4813_);
lean_dec(v_scopes_4813_);
v_opts_4815_ = lean_ctor_get(v___x_4814_, 1);
lean_inc_ref(v_opts_4815_);
lean_dec(v___x_4814_);
if (v_isShared_4809_ == 0)
{
lean_ctor_set_tag(v___x_4808_, 0);
lean_ctor_set(v___x_4808_, 0, v_opts_4815_);
v___x_4817_ = v___x_4808_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v_opts_4815_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
else
{
lean_object* v___x_4820_; 
if (v_isShared_4809_ == 0)
{
v___x_4820_ = v___x_4808_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v_a_4806_);
v___x_4820_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
return v___x_4820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___lam__0___boxed(lean_object* v___x_4823_, lean_object* v___x_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_){
_start:
{
lean_object* v_res_4828_; 
v_res_4828_ = l_Lean_Linter_MissingDocs_handleIn___redArg___lam__0(v___x_4823_, v___x_4824_, v___y_4825_, v___y_4826_);
lean_dec(v___y_4826_);
lean_dec_ref(v___y_4825_);
return v_res_4828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___lam__1(lean_object* v_a_4829_, lean_object* v_x_4830_){
_start:
{
lean_object* v_header_4831_; lean_object* v_currNamespace_4832_; lean_object* v_openDecls_4833_; lean_object* v_levelNames_4834_; lean_object* v_varDecls_4835_; lean_object* v_varUIds_4836_; lean_object* v_includedVars_4837_; lean_object* v_omittedVars_4838_; uint8_t v_isNoncomputable_4839_; uint8_t v_isPublic_4840_; uint8_t v_isMeta_4841_; lean_object* v_attrs_4842_; lean_object* v___x_4844_; uint8_t v_isShared_4845_; uint8_t v_isSharedCheck_4849_; 
v_header_4831_ = lean_ctor_get(v_x_4830_, 0);
v_currNamespace_4832_ = lean_ctor_get(v_x_4830_, 2);
v_openDecls_4833_ = lean_ctor_get(v_x_4830_, 3);
v_levelNames_4834_ = lean_ctor_get(v_x_4830_, 4);
v_varDecls_4835_ = lean_ctor_get(v_x_4830_, 5);
v_varUIds_4836_ = lean_ctor_get(v_x_4830_, 6);
v_includedVars_4837_ = lean_ctor_get(v_x_4830_, 7);
v_omittedVars_4838_ = lean_ctor_get(v_x_4830_, 8);
v_isNoncomputable_4839_ = lean_ctor_get_uint8(v_x_4830_, sizeof(void*)*10);
v_isPublic_4840_ = lean_ctor_get_uint8(v_x_4830_, sizeof(void*)*10 + 1);
v_isMeta_4841_ = lean_ctor_get_uint8(v_x_4830_, sizeof(void*)*10 + 2);
v_attrs_4842_ = lean_ctor_get(v_x_4830_, 9);
v_isSharedCheck_4849_ = !lean_is_exclusive(v_x_4830_);
if (v_isSharedCheck_4849_ == 0)
{
lean_object* v_unused_4850_; 
v_unused_4850_ = lean_ctor_get(v_x_4830_, 1);
lean_dec(v_unused_4850_);
v___x_4844_ = v_x_4830_;
v_isShared_4845_ = v_isSharedCheck_4849_;
goto v_resetjp_4843_;
}
else
{
lean_inc(v_attrs_4842_);
lean_inc(v_omittedVars_4838_);
lean_inc(v_includedVars_4837_);
lean_inc(v_varUIds_4836_);
lean_inc(v_varDecls_4835_);
lean_inc(v_levelNames_4834_);
lean_inc(v_openDecls_4833_);
lean_inc(v_currNamespace_4832_);
lean_inc(v_header_4831_);
lean_dec(v_x_4830_);
v___x_4844_ = lean_box(0);
v_isShared_4845_ = v_isSharedCheck_4849_;
goto v_resetjp_4843_;
}
v_resetjp_4843_:
{
lean_object* v___x_4847_; 
if (v_isShared_4845_ == 0)
{
lean_ctor_set(v___x_4844_, 1, v_a_4829_);
v___x_4847_ = v___x_4844_;
goto v_reusejp_4846_;
}
else
{
lean_object* v_reuseFailAlloc_4848_; 
v_reuseFailAlloc_4848_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_4848_, 0, v_header_4831_);
lean_ctor_set(v_reuseFailAlloc_4848_, 1, v_a_4829_);
lean_ctor_set(v_reuseFailAlloc_4848_, 2, v_currNamespace_4832_);
lean_ctor_set(v_reuseFailAlloc_4848_, 3, v_openDecls_4833_);
lean_ctor_set(v_reuseFailAlloc_4848_, 4, v_levelNames_4834_);
lean_ctor_set(v_reuseFailAlloc_4848_, 5, v_varDecls_4835_);
lean_ctor_set(v_reuseFailAlloc_4848_, 6, v_varUIds_4836_);
lean_ctor_set(v_reuseFailAlloc_4848_, 7, v_includedVars_4837_);
lean_ctor_set(v_reuseFailAlloc_4848_, 8, v_omittedVars_4838_);
lean_ctor_set(v_reuseFailAlloc_4848_, 9, v_attrs_4842_);
lean_ctor_set_uint8(v_reuseFailAlloc_4848_, sizeof(void*)*10, v_isNoncomputable_4839_);
lean_ctor_set_uint8(v_reuseFailAlloc_4848_, sizeof(void*)*10 + 1, v_isPublic_4840_);
lean_ctor_set_uint8(v_reuseFailAlloc_4848_, sizeof(void*)*10 + 2, v_isMeta_4841_);
v___x_4847_ = v_reuseFailAlloc_4848_;
goto v_reusejp_4846_;
}
v_reusejp_4846_:
{
return v___x_4847_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg(uint8_t v_flag_4851_, lean_object* v___y_4852_){
_start:
{
lean_object* v___x_4854_; lean_object* v_infoState_4855_; lean_object* v_env_4856_; lean_object* v_messages_4857_; lean_object* v_scopes_4858_; lean_object* v_usedQuotCtxts_4859_; lean_object* v_nextMacroScope_4860_; lean_object* v_maxRecDepth_4861_; lean_object* v_ngen_4862_; lean_object* v_auxDeclNGen_4863_; lean_object* v_traceState_4864_; lean_object* v_snapshotTasks_4865_; lean_object* v_prevLinterStates_4866_; lean_object* v_codeQualityEntryTasks_4867_; lean_object* v___x_4869_; uint8_t v_isShared_4870_; uint8_t v_isSharedCheck_4887_; 
v___x_4854_ = lean_st_ref_take(v___y_4852_);
v_infoState_4855_ = lean_ctor_get(v___x_4854_, 8);
v_env_4856_ = lean_ctor_get(v___x_4854_, 0);
v_messages_4857_ = lean_ctor_get(v___x_4854_, 1);
v_scopes_4858_ = lean_ctor_get(v___x_4854_, 2);
v_usedQuotCtxts_4859_ = lean_ctor_get(v___x_4854_, 3);
v_nextMacroScope_4860_ = lean_ctor_get(v___x_4854_, 4);
v_maxRecDepth_4861_ = lean_ctor_get(v___x_4854_, 5);
v_ngen_4862_ = lean_ctor_get(v___x_4854_, 6);
v_auxDeclNGen_4863_ = lean_ctor_get(v___x_4854_, 7);
v_traceState_4864_ = lean_ctor_get(v___x_4854_, 9);
v_snapshotTasks_4865_ = lean_ctor_get(v___x_4854_, 10);
v_prevLinterStates_4866_ = lean_ctor_get(v___x_4854_, 11);
v_codeQualityEntryTasks_4867_ = lean_ctor_get(v___x_4854_, 12);
v_isSharedCheck_4887_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4887_ == 0)
{
v___x_4869_ = v___x_4854_;
v_isShared_4870_ = v_isSharedCheck_4887_;
goto v_resetjp_4868_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4867_);
lean_inc(v_prevLinterStates_4866_);
lean_inc(v_snapshotTasks_4865_);
lean_inc(v_traceState_4864_);
lean_inc(v_infoState_4855_);
lean_inc(v_auxDeclNGen_4863_);
lean_inc(v_ngen_4862_);
lean_inc(v_maxRecDepth_4861_);
lean_inc(v_nextMacroScope_4860_);
lean_inc(v_usedQuotCtxts_4859_);
lean_inc(v_scopes_4858_);
lean_inc(v_messages_4857_);
lean_inc(v_env_4856_);
lean_dec(v___x_4854_);
v___x_4869_ = lean_box(0);
v_isShared_4870_ = v_isSharedCheck_4887_;
goto v_resetjp_4868_;
}
v_resetjp_4868_:
{
lean_object* v_assignment_4871_; lean_object* v_lazyAssignment_4872_; lean_object* v_trees_4873_; lean_object* v___x_4875_; uint8_t v_isShared_4876_; uint8_t v_isSharedCheck_4886_; 
v_assignment_4871_ = lean_ctor_get(v_infoState_4855_, 0);
v_lazyAssignment_4872_ = lean_ctor_get(v_infoState_4855_, 1);
v_trees_4873_ = lean_ctor_get(v_infoState_4855_, 2);
v_isSharedCheck_4886_ = !lean_is_exclusive(v_infoState_4855_);
if (v_isSharedCheck_4886_ == 0)
{
v___x_4875_ = v_infoState_4855_;
v_isShared_4876_ = v_isSharedCheck_4886_;
goto v_resetjp_4874_;
}
else
{
lean_inc(v_trees_4873_);
lean_inc(v_lazyAssignment_4872_);
lean_inc(v_assignment_4871_);
lean_dec(v_infoState_4855_);
v___x_4875_ = lean_box(0);
v_isShared_4876_ = v_isSharedCheck_4886_;
goto v_resetjp_4874_;
}
v_resetjp_4874_:
{
lean_object* v___x_4877_; lean_object* v___x_4879_; 
v___x_4877_ = lean_box(0);
if (v_isShared_4876_ == 0)
{
v___x_4879_ = v___x_4875_;
goto v_reusejp_4878_;
}
else
{
lean_object* v_reuseFailAlloc_4885_; 
v_reuseFailAlloc_4885_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4885_, 0, v_assignment_4871_);
lean_ctor_set(v_reuseFailAlloc_4885_, 1, v_lazyAssignment_4872_);
lean_ctor_set(v_reuseFailAlloc_4885_, 2, v_trees_4873_);
v___x_4879_ = v_reuseFailAlloc_4885_;
goto v_reusejp_4878_;
}
v_reusejp_4878_:
{
lean_object* v___x_4881_; 
lean_ctor_set_uint8(v___x_4879_, sizeof(void*)*3, v_flag_4851_);
if (v_isShared_4870_ == 0)
{
lean_ctor_set(v___x_4869_, 8, v___x_4879_);
v___x_4881_ = v___x_4869_;
goto v_reusejp_4880_;
}
else
{
lean_object* v_reuseFailAlloc_4884_; 
v_reuseFailAlloc_4884_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4884_, 0, v_env_4856_);
lean_ctor_set(v_reuseFailAlloc_4884_, 1, v_messages_4857_);
lean_ctor_set(v_reuseFailAlloc_4884_, 2, v_scopes_4858_);
lean_ctor_set(v_reuseFailAlloc_4884_, 3, v_usedQuotCtxts_4859_);
lean_ctor_set(v_reuseFailAlloc_4884_, 4, v_nextMacroScope_4860_);
lean_ctor_set(v_reuseFailAlloc_4884_, 5, v_maxRecDepth_4861_);
lean_ctor_set(v_reuseFailAlloc_4884_, 6, v_ngen_4862_);
lean_ctor_set(v_reuseFailAlloc_4884_, 7, v_auxDeclNGen_4863_);
lean_ctor_set(v_reuseFailAlloc_4884_, 8, v___x_4879_);
lean_ctor_set(v_reuseFailAlloc_4884_, 9, v_traceState_4864_);
lean_ctor_set(v_reuseFailAlloc_4884_, 10, v_snapshotTasks_4865_);
lean_ctor_set(v_reuseFailAlloc_4884_, 11, v_prevLinterStates_4866_);
lean_ctor_set(v_reuseFailAlloc_4884_, 12, v_codeQualityEntryTasks_4867_);
v___x_4881_ = v_reuseFailAlloc_4884_;
goto v_reusejp_4880_;
}
v_reusejp_4880_:
{
lean_object* v___x_4882_; lean_object* v___x_4883_; 
v___x_4882_ = lean_st_ref_put(v___y_4852_, v___x_4881_);
v___x_4883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4883_, 0, v___x_4877_);
return v___x_4883_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg___boxed(lean_object* v_flag_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_){
_start:
{
uint8_t v_flag_boxed_4891_; lean_object* v_res_4892_; 
v_flag_boxed_4891_ = lean_unbox(v_flag_4888_);
v_res_4892_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg(v_flag_boxed_4891_, v___y_4889_);
lean_dec(v___y_4889_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___redArg(uint8_t v_flag_4893_, lean_object* v_x_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_){
_start:
{
lean_object* v___x_4898_; lean_object* v_infoState_4899_; uint8_t v_enabled_4900_; lean_object* v_a_4902_; lean_object* v___x_4912_; lean_object* v___x_4913_; 
v___x_4898_ = lean_st_ref_get(v___y_4896_);
v_infoState_4899_ = lean_ctor_get(v___x_4898_, 8);
lean_inc_ref(v_infoState_4899_);
lean_dec(v___x_4898_);
v_enabled_4900_ = lean_ctor_get_uint8(v_infoState_4899_, sizeof(void*)*3);
lean_dec_ref(v_infoState_4899_);
v___x_4912_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg(v_flag_4893_, v___y_4896_);
lean_dec_ref(v___x_4912_);
lean_inc(v___y_4896_);
lean_inc_ref(v___y_4895_);
v___x_4913_ = lean_apply_3(v_x_4894_, v___y_4895_, v___y_4896_, lean_box(0));
if (lean_obj_tag(v___x_4913_) == 0)
{
lean_object* v_a_4914_; lean_object* v___x_4915_; lean_object* v___x_4917_; uint8_t v_isShared_4918_; uint8_t v_isSharedCheck_4922_; 
v_a_4914_ = lean_ctor_get(v___x_4913_, 0);
lean_inc(v_a_4914_);
lean_dec_ref_known(v___x_4913_, 1);
v___x_4915_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg(v_enabled_4900_, v___y_4896_);
v_isSharedCheck_4922_ = !lean_is_exclusive(v___x_4915_);
if (v_isSharedCheck_4922_ == 0)
{
lean_object* v_unused_4923_; 
v_unused_4923_ = lean_ctor_get(v___x_4915_, 0);
lean_dec(v_unused_4923_);
v___x_4917_ = v___x_4915_;
v_isShared_4918_ = v_isSharedCheck_4922_;
goto v_resetjp_4916_;
}
else
{
lean_dec(v___x_4915_);
v___x_4917_ = lean_box(0);
v_isShared_4918_ = v_isSharedCheck_4922_;
goto v_resetjp_4916_;
}
v_resetjp_4916_:
{
lean_object* v___x_4920_; 
if (v_isShared_4918_ == 0)
{
lean_ctor_set(v___x_4917_, 0, v_a_4914_);
v___x_4920_ = v___x_4917_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4921_; 
v_reuseFailAlloc_4921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4921_, 0, v_a_4914_);
v___x_4920_ = v_reuseFailAlloc_4921_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
return v___x_4920_;
}
}
}
else
{
lean_object* v_a_4924_; 
v_a_4924_ = lean_ctor_get(v___x_4913_, 0);
lean_inc(v_a_4924_);
lean_dec_ref_known(v___x_4913_, 1);
v_a_4902_ = v_a_4924_;
goto v___jp_4901_;
}
v___jp_4901_:
{
lean_object* v___x_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4910_; 
v___x_4903_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg(v_enabled_4900_, v___y_4896_);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_4910_ == 0)
{
lean_object* v_unused_4911_; 
v_unused_4911_ = lean_ctor_get(v___x_4903_, 0);
lean_dec(v_unused_4911_);
v___x_4905_ = v___x_4903_;
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
else
{
lean_dec(v___x_4903_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4908_; 
if (v_isShared_4906_ == 0)
{
lean_ctor_set_tag(v___x_4905_, 1);
lean_ctor_set(v___x_4905_, 0, v_a_4902_);
v___x_4908_ = v___x_4905_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v_a_4902_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
return v___x_4908_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___redArg___boxed(lean_object* v_flag_4925_, lean_object* v_x_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_){
_start:
{
uint8_t v_flag_boxed_4930_; lean_object* v_res_4931_; 
v_flag_boxed_4930_ = lean_unbox(v_flag_4925_);
v_res_4931_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___redArg(v_flag_boxed_4930_, v_x_4926_, v___y_4927_, v___y_4928_);
lean_dec(v___y_4928_);
lean_dec_ref(v___y_4927_);
return v_res_4931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg(lean_object* v_stx_4938_, lean_object* v_a_4939_, lean_object* v_a_4940_){
_start:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; uint8_t v___x_4946_; 
v___x_4942_ = lean_unsigned_to_nat(0u);
v___x_4943_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_4942_);
lean_inc(v___x_4943_);
v___x_4944_ = l_Lean_Syntax_getKind(v___x_4943_);
v___x_4945_ = ((lean_object*)(l_Lean_Linter_MissingDocs_handleIn___redArg___closed__1));
v___x_4946_ = lean_name_eq(v___x_4944_, v___x_4945_);
lean_dec(v___x_4944_);
if (v___x_4946_ == 0)
{
lean_object* v___x_4947_; lean_object* v_run_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; 
lean_dec(v___x_4943_);
v___x_4947_ = ((lean_object*)(l_Lean_Linter_MissingDocs_missingDocs));
v_run_4948_ = lean_ctor_get(v___x_4947_, 0);
v___x_4949_ = lean_unsigned_to_nat(2u);
v___x_4950_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_4949_);
lean_inc_ref(v_run_4948_);
lean_inc(v_a_4940_);
lean_inc_ref(v_a_4939_);
v___x_4951_ = lean_apply_4(v_run_4948_, v___x_4950_, v_a_4939_, v_a_4940_, lean_box(0));
return v___x_4951_;
}
else
{
uint8_t v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___f_4957_; lean_object* v___x_4958_; 
v___x_4952_ = 0;
v___x_4953_ = lean_unsigned_to_nat(1u);
v___x_4954_ = l_Lean_Syntax_getArg(v___x_4943_, v___x_4953_);
v___x_4955_ = lean_unsigned_to_nat(3u);
v___x_4956_ = l_Lean_Syntax_getArg(v___x_4943_, v___x_4955_);
lean_dec(v___x_4943_);
v___f_4957_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_handleIn___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_4957_, 0, v___x_4954_);
lean_closure_set(v___f_4957_, 1, v___x_4956_);
v___x_4958_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___redArg(v___x_4952_, v___f_4957_, v_a_4939_, v_a_4940_);
if (lean_obj_tag(v___x_4958_) == 0)
{
lean_object* v_a_4959_; lean_object* v___x_4960_; lean_object* v_run_4961_; lean_object* v___f_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; 
v_a_4959_ = lean_ctor_get(v___x_4958_, 0);
lean_inc(v_a_4959_);
lean_dec_ref_known(v___x_4958_, 1);
v___x_4960_ = ((lean_object*)(l_Lean_Linter_MissingDocs_missingDocs));
v_run_4961_ = lean_ctor_get(v___x_4960_, 0);
v___f_4962_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_handleIn___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4962_, 0, v_a_4959_);
v___x_4963_ = lean_unsigned_to_nat(2u);
v___x_4964_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_4963_);
lean_inc_ref(v_run_4961_);
v___x_4965_ = lean_apply_1(v_run_4961_, v___x_4964_);
v___x_4966_ = l_Lean_Elab_Command_withScope___redArg(v___f_4962_, v___x_4965_, v_a_4939_, v_a_4940_);
return v___x_4966_;
}
else
{
lean_object* v_a_4967_; lean_object* v___x_4969_; uint8_t v_isShared_4970_; uint8_t v_isSharedCheck_4974_; 
v_a_4967_ = lean_ctor_get(v___x_4958_, 0);
v_isSharedCheck_4974_ = !lean_is_exclusive(v___x_4958_);
if (v_isSharedCheck_4974_ == 0)
{
v___x_4969_ = v___x_4958_;
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
else
{
lean_inc(v_a_4967_);
lean_dec(v___x_4958_);
v___x_4969_ = lean_box(0);
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
v_resetjp_4968_:
{
lean_object* v___x_4972_; 
if (v_isShared_4970_ == 0)
{
v___x_4972_ = v___x_4969_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_a_4967_);
v___x_4972_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
return v___x_4972_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___redArg___boxed(lean_object* v_stx_4975_, lean_object* v_a_4976_, lean_object* v_a_4977_, lean_object* v_a_4978_){
_start:
{
lean_object* v_res_4979_; 
v_res_4979_ = l_Lean_Linter_MissingDocs_handleIn___redArg(v_stx_4975_, v_a_4976_, v_a_4977_);
lean_dec(v_a_4977_);
lean_dec_ref(v_a_4976_);
lean_dec(v_stx_4975_);
return v_res_4979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn(uint8_t v_x_4980_, lean_object* v_stx_4981_, lean_object* v_a_4982_, lean_object* v_a_4983_){
_start:
{
lean_object* v___x_4985_; 
v___x_4985_ = l_Lean_Linter_MissingDocs_handleIn___redArg(v_stx_4981_, v_a_4982_, v_a_4983_);
return v___x_4985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleIn___boxed(lean_object* v_x_4986_, lean_object* v_stx_4987_, lean_object* v_a_4988_, lean_object* v_a_4989_, lean_object* v_a_4990_){
_start:
{
uint8_t v_x_4434__boxed_4991_; lean_object* v_res_4992_; 
v_x_4434__boxed_4991_ = lean_unbox(v_x_4986_);
v_res_4992_ = l_Lean_Linter_MissingDocs_handleIn(v_x_4434__boxed_4991_, v_stx_4987_, v_a_4988_, v_a_4989_);
lean_dec(v_a_4989_);
lean_dec_ref(v_a_4988_);
lean_dec(v_stx_4987_);
return v_res_4992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5(uint8_t v_flag_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_){
_start:
{
lean_object* v___x_4997_; 
v___x_4997_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___redArg(v_flag_4993_, v___y_4995_);
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5___boxed(lean_object* v_flag_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_){
_start:
{
uint8_t v_flag_boxed_5002_; lean_object* v_res_5003_; 
v_flag_boxed_5002_ = lean_unbox(v_flag_4998_);
v_res_5003_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1_spec__5(v_flag_boxed_5002_, v___y_4999_, v___y_5000_);
lean_dec(v___y_5000_);
lean_dec_ref(v___y_4999_);
return v_res_5003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1(lean_object* v_00_u03b1_5004_, uint8_t v_flag_5005_, lean_object* v_x_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_){
_start:
{
lean_object* v___x_5010_; 
v___x_5010_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___redArg(v_flag_5005_, v_x_5006_, v___y_5007_, v___y_5008_);
return v___x_5010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1___boxed(lean_object* v_00_u03b1_5011_, lean_object* v_flag_5012_, lean_object* v_x_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_){
_start:
{
uint8_t v_flag_boxed_5017_; lean_object* v_res_5018_; 
v_flag_boxed_5017_ = lean_unbox(v_flag_5012_);
v_res_5018_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Linter_MissingDocs_handleIn_spec__1(v_00_u03b1_5011_, v_flag_boxed_5017_, v_x_5013_, v___y_5014_, v___y_5015_);
lean_dec(v___y_5015_);
lean_dec_ref(v___y_5014_);
return v_res_5018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2(lean_object* v_t_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_){
_start:
{
lean_object* v___x_5023_; 
v___x_5023_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___redArg(v_t_5019_, v___y_5021_);
return v___x_5023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2___boxed(lean_object* v_t_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_){
_start:
{
lean_object* v_res_5028_; 
v_res_5028_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__1_spec__2(v_t_5024_, v___y_5025_, v___y_5026_);
lean_dec(v___y_5026_);
lean_dec_ref(v___y_5025_);
return v_res_5028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2(lean_object* v_00_u03b1_5029_, lean_object* v_optionName_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_){
_start:
{
lean_object* v___x_5034_; 
v___x_5034_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___redArg(v_optionName_5030_, v___y_5031_, v___y_5032_);
return v___x_5034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2___boxed(lean_object* v_00_u03b1_5035_, lean_object* v_optionName_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l___private_Lean_Elab_SetOption_0__Lean_Elab_throwUnconfigurable___at___00Lean_Elab_elabSetOption___at___00Lean_Linter_MissingDocs_handleIn_spec__0_spec__2(v_00_u03b1_5035_, v_optionName_5036_, v___y_5037_, v___y_5038_);
lean_dec(v___y_5038_);
lean_dec_ref(v___y_5037_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1(){
_start:
{
lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; 
v___x_5048_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___closed__1));
v___x_5049_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_handleIn___boxed), 5, 0);
v___x_5050_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_5048_, v___x_5049_);
return v___x_5050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1___boxed(lean_object* v_a_5051_){
_start:
{
lean_object* v_res_5052_; 
v_res_5052_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1();
return v_res_5052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_MissingDocs_handleMutual_spec__0(lean_object* v_as_5053_, size_t v_i_5054_, size_t v_stop_5055_, lean_object* v_b_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_){
_start:
{
lean_object* v___x_5060_; lean_object* v_run_5061_; uint8_t v___x_5062_; 
v___x_5060_ = ((lean_object*)(l_Lean_Linter_MissingDocs_missingDocs));
v_run_5061_ = lean_ctor_get(v___x_5060_, 0);
v___x_5062_ = lean_usize_dec_eq(v_i_5054_, v_stop_5055_);
if (v___x_5062_ == 0)
{
lean_object* v___x_5063_; lean_object* v___x_5064_; 
v___x_5063_ = lean_array_uget_borrowed(v_as_5053_, v_i_5054_);
lean_inc_ref(v_run_5061_);
lean_inc(v___y_5058_);
lean_inc_ref(v___y_5057_);
lean_inc(v___x_5063_);
v___x_5064_ = lean_apply_4(v_run_5061_, v___x_5063_, v___y_5057_, v___y_5058_, lean_box(0));
if (lean_obj_tag(v___x_5064_) == 0)
{
lean_object* v_a_5065_; size_t v___x_5066_; size_t v___x_5067_; 
v_a_5065_ = lean_ctor_get(v___x_5064_, 0);
lean_inc(v_a_5065_);
lean_dec_ref_known(v___x_5064_, 1);
v___x_5066_ = ((size_t)1ULL);
v___x_5067_ = lean_usize_add(v_i_5054_, v___x_5066_);
v_i_5054_ = v___x_5067_;
v_b_5056_ = v_a_5065_;
goto _start;
}
else
{
return v___x_5064_;
}
}
else
{
lean_object* v___x_5069_; 
v___x_5069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5069_, 0, v_b_5056_);
return v___x_5069_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_MissingDocs_handleMutual_spec__0___boxed(lean_object* v_as_5070_, lean_object* v_i_5071_, lean_object* v_stop_5072_, lean_object* v_b_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_){
_start:
{
size_t v_i_boxed_5077_; size_t v_stop_boxed_5078_; lean_object* v_res_5079_; 
v_i_boxed_5077_ = lean_unbox_usize(v_i_5071_);
lean_dec(v_i_5071_);
v_stop_boxed_5078_ = lean_unbox_usize(v_stop_5072_);
lean_dec(v_stop_5072_);
v_res_5079_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_MissingDocs_handleMutual_spec__0(v_as_5070_, v_i_boxed_5077_, v_stop_boxed_5078_, v_b_5073_, v___y_5074_, v___y_5075_);
lean_dec(v___y_5075_);
lean_dec_ref(v___y_5074_);
lean_dec_ref(v_as_5070_);
return v_res_5079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleMutual___redArg(lean_object* v_stx_5080_, lean_object* v_a_5081_, lean_object* v_a_5082_){
_start:
{
lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; uint8_t v___x_5090_; 
v___x_5084_ = lean_unsigned_to_nat(1u);
v___x_5085_ = l_Lean_Syntax_getArg(v_stx_5080_, v___x_5084_);
v___x_5086_ = l_Lean_Syntax_getArgs(v___x_5085_);
lean_dec(v___x_5085_);
v___x_5087_ = lean_unsigned_to_nat(0u);
v___x_5088_ = lean_array_get_size(v___x_5086_);
v___x_5089_ = lean_box(0);
v___x_5090_ = lean_nat_dec_lt(v___x_5087_, v___x_5088_);
if (v___x_5090_ == 0)
{
lean_object* v___x_5091_; 
lean_dec_ref(v___x_5086_);
v___x_5091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5091_, 0, v___x_5089_);
return v___x_5091_;
}
else
{
size_t v___x_5092_; size_t v___x_5093_; lean_object* v___x_5094_; 
v___x_5092_ = ((size_t)0ULL);
v___x_5093_ = lean_usize_of_nat(v___x_5088_);
v___x_5094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_MissingDocs_handleMutual_spec__0(v___x_5086_, v___x_5092_, v___x_5093_, v___x_5089_, v_a_5081_, v_a_5082_);
lean_dec_ref(v___x_5086_);
return v___x_5094_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleMutual___redArg___boxed(lean_object* v_stx_5095_, lean_object* v_a_5096_, lean_object* v_a_5097_, lean_object* v_a_5098_){
_start:
{
lean_object* v_res_5099_; 
v_res_5099_ = l_Lean_Linter_MissingDocs_handleMutual___redArg(v_stx_5095_, v_a_5096_, v_a_5097_);
lean_dec(v_a_5097_);
lean_dec_ref(v_a_5096_);
lean_dec(v_stx_5095_);
return v_res_5099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleMutual(uint8_t v_x_5100_, lean_object* v_stx_5101_, lean_object* v_a_5102_, lean_object* v_a_5103_){
_start:
{
lean_object* v___x_5105_; 
v___x_5105_ = l_Lean_Linter_MissingDocs_handleMutual___redArg(v_stx_5101_, v_a_5102_, v_a_5103_);
return v___x_5105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_MissingDocs_handleMutual___boxed(lean_object* v_x_5106_, lean_object* v_stx_5107_, lean_object* v_a_5108_, lean_object* v_a_5109_, lean_object* v_a_5110_){
_start:
{
uint8_t v_x_392__boxed_5111_; lean_object* v_res_5112_; 
v_x_392__boxed_5111_ = lean_unbox(v_x_5106_);
v_res_5112_ = l_Lean_Linter_MissingDocs_handleMutual(v_x_392__boxed_5111_, v_stx_5107_, v_a_5108_, v_a_5109_);
lean_dec(v_a_5109_);
lean_dec_ref(v_a_5108_);
lean_dec(v_stx_5107_);
return v_res_5112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1(){
_start:
{
lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; 
v___x_5120_ = ((lean_object*)(l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___closed__1));
v___x_5121_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_handleMutual___boxed), 5, 0);
v___x_5122_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_5120_, v___x_5121_);
return v___x_5122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1___boxed(lean_object* v_a_5123_){
_start:
{
lean_object* v_res_5124_; 
v_res_5124_ = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1();
return v_res_5124_;
}
}
lean_object* runtime_initialize_Lean_Parser_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_RegisterCommand(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_MissingDocs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_RegisterCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_initFn_00___x40_Lean_Linter_MissingDocs_3645095946____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_missingDocs = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_missingDocs);
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_537855421____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_MissingDocs_builtinHandlersRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_MissingDocs_builtinHandlersRef);
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_103323494____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_MissingDocs_missingDocsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_MissingDocs_missingDocsExt);
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_2727349317____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_initFn_00___x40_Lean_Linter_MissingDocs_573930092____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkDecl___regBuiltin_Lean_Linter_MissingDocs_checkDecl__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkInit___regBuiltin_Lean_Linter_MissingDocs_checkInit__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkNotation___regBuiltin_Lean_Linter_MissingDocs_checkNotation__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMixfix___regBuiltin_Lean_Linter_MissingDocs_checkMixfix__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntax___regBuiltin_Lean_Linter_MissingDocs_checkSyntax__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxAbbrev__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSyntaxCat___regBuiltin_Lean_Linter_MissingDocs_checkSyntaxCat__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkMacro___regBuiltin_Lean_Linter_MissingDocs_checkMacro__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkElab___regBuiltin_Lean_Linter_MissingDocs_checkElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkClassAbbrev___regBuiltin_Lean_Linter_MissingDocs_checkClassAbbrev__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkSimpLike___regBuiltin_Lean_Linter_MissingDocs_checkSimpLike__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterBuiltinOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterBuiltinOption__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterOption___regBuiltin_Lean_Linter_MissingDocs_checkRegisterOption__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_checkRegisterSimpAttr___regBuiltin_Lean_Linter_MissingDocs_checkRegisterSimpAttr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleIn___regBuiltin_Lean_Linter_MissingDocs_handleIn__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_MissingDocs_0__Lean_Linter_MissingDocs_handleMutual___regBuiltin_Lean_Linter_MissingDocs_handleMutual__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_MissingDocs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_RegisterCommand(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_MissingDocs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_RegisterCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_MissingDocs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_MissingDocs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_MissingDocs(builtin);
}
#ifdef __cplusplus
}
#endif
