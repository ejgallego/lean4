// Lean compiler output
// Module: Lean.Elab.Util
// Imports: public import Lean.Parser.Extension meta import Lean.Parser.Command public import Lean.KeyedDeclsAttribute import Lean.BuiltinDocAttr public import Lean.ExtraModUses import all Init.Prelude
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_EStateM_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_take(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Lean_MacroScopesView_review_spec__0(lean_object*, lean_object*);
lean_object* l_EStateM_nonBacktrackable___redArg();
lean_object* l_EStateM_instMonadExceptOfOfBacktrackable___redArg(lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_getId(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isValidSyntaxNodeKind(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Exception_getRef(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRefPos___redArg(lean_object*, lean_object*);
lean_object* l_Lean_toMessageList(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_declareBuiltinDocStringAndRanges(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_init___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_List_forM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_recordExtraModUseFromDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwMaxRecDepthAt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___redArg(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_getCurrNamespace(lean_object*, lean_object*);
lean_object* l_Lean_Macro_hasDecl(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_evalPrio(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getEntries___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_liftExcept___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InternalExceptionId_getName___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* l_Lean_Syntax_reprint(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_String_toFormat(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_prettyPrint(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_format___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MacroScopesView_equalScope(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_equalScope___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_expandOptNamedPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__0 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value;
static const lean_string_object l_Lean_Elab_expandOptNamedPrio___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__1 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value;
static const lean_string_object l_Lean_Elab_expandOptNamedPrio___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__2 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__2_value;
static const lean_string_object l_Lean_Elab_expandOptNamedPrio___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedPrio"};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__3 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__3_value;
static const lean_ctor_object l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_expandOptNamedPrio___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__3_value),LEAN_SCALAR_PTR_LITERAL(171, 32, 2, 102, 118, 75, 64, 185)}};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__4 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptNamedPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptNamedPrio___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getBetterRef___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "macroStack"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(63, 33, 22, 128, 67, 155, 63, 18)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "display macro expansion stack"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 212, 36, 208, 228, 94, 220, 119)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(248, 94, 242, 78, 7, 86, 25, 134)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pp_macroStack;
static const lean_string_object l_Lean_Elab_addMacroStack___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_addMacroStack___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__2_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__3_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid syntax node kind `"};
static const lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__0 = (const lean_object*)&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__0_value;
static lean_once_cell_t l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1;
static const lean_string_object l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__2 = (const lean_object*)&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__2_value;
static lean_once_cell_t l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__0 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 144, 98, 72, 115, 31, 20, 74)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__0 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__1 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__2 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value;
static const lean_array_object l_Lean_Elab_mkElabAttribute___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__3 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__3_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__4 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__4_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__5 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__6 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__7 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__7_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__8 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__9 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__10;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__11;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__12 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__12_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__13 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__13_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__14 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__15 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__15_value;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__16;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__17;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__18;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__19;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__20;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__21;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__22;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__23;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__24;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__25;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___auto__1;
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__10_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_mkElabAttribute___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_mkElabAttribute___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_mkElabAttribute___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " elaborator"};
static const lean_object* l_Lean_Elab_mkElabAttribute___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "builtin_macro"};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__0 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 183, 24, 34, 89, 102, 112, 162)}};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__1 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__1_value;
static const lean_string_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__2 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__2_value;
static const lean_ctor_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 126, 236, 0, 202, 60, 1)}};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__3 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__3_value;
static const lean_string_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Macro"};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__4 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__4_value;
static const lean_ctor_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__5 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_mkMacroAttributeUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "macroAttribute"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 124, 3, 111, 194, 84, 182, 133)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_macroAttribute;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 390, .m_capacity = 390, .m_length = 387, .m_data = "Registers a macro expander for a given syntax node kind.\n\nA macro expander should have type `Lean.Macro` (which is `Lean.Syntax → Lean.MacroM Lean.Syntax`),\ni.e. should take syntax of the given syntax node kind as a parameter and produce different syntax\nin the same syntax category.\n\nThe `macro_rules` and `macro` commands should usually be preferred over using this attribute\ndirectly."};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(140) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(151) << 1) | 1)),((lean_object*)(((size_t)(91) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(91) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(151) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(151) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instMonadMacroAdapterCoreM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instMonadMacroAdapterCoreM___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___closed__0 = (const lean_object*)&l_Lean_Elab_instMonadMacroAdapterCoreM___closed__0_value;
static const lean_closure_object l_Lean_Elab_instMonadMacroAdapterCoreM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instMonadMacroAdapterCoreM___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___closed__1 = (const lean_object*)&l_Lean_Elab_instMonadMacroAdapterCoreM___closed__1_value;
static lean_once_cell_t l_Lean_Elab_instMonadMacroAdapterCoreM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___lam__13___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__14___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__16___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__18___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__19___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__20___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__22___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_map, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_liftMacroM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_seqRight, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_liftMacroM___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__4_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__5_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__1_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__6_value)}};
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__7_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_bind, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_liftMacroM___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__7_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__11;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__12;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__13;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__14;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_pure___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__9_value)} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkUnusedBaseName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkUnusedBaseName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_findUnusedName_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_findUnusedName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_findUnusedName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_findUnusedName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_findUnusedName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_logException___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", errors "};
static const lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Util"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 78, 200, 72, 47, 79, 142, 191)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(255, 84, 221, 213, 184, 25, 230, 28)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 230, 224, 210, 33, 91, 167, 71)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(80, 51, 41, 220, 74, 50, 181, 52)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 155, 36, 75, 140, 113, 216, 4)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 108, 121, 158, 225, 216, 58, 115)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 130, 197, 179, 188, 68, 15, 67)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(151, 200, 117, 111, 119, 67, 77, 165)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(5, 178, 137, 191, 232, 27, 150, 24)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2034298159) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(65, 73, 120, 144, 106, 211, 68, 250)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(130, 206, 183, 5, 147, 115, 55, 70)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(142, 61, 92, 97, 132, 90, 23, 86)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(223, 154, 120, 49, 240, 44, 140, 147)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "step"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 235, 194, 189, 11, 11, 236, 225)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "result"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 235, 194, 189, 11, 11, 236, 225)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(254, 13, 218, 138, 0, 214, 255, 58)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_prettyPrint(lean_object* v_stx_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
lean_inc(v_stx_1_);
v___x_2_ = l_Lean_Syntax_unsetTrailing(v_stx_1_);
v___x_3_ = l_Lean_Syntax_reprint(v___x_2_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v___x_4_; uint8_t v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = 0;
v___x_6_ = l_Lean_Syntax_formatStx(v_stx_1_, v___x_4_, v___x_5_);
return v___x_6_;
}
else
{
lean_object* v_val_7_; lean_object* v___x_8_; 
lean_dec(v_stx_1_);
v_val_7_ = lean_ctor_get(v___x_3_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v___x_3_, 1);
v___x_8_ = l_String_toFormat(v_val_7_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_format(lean_object* v_view_9_, lean_object* v_mainModule_10_){
_start:
{
lean_object* v___y_12_; lean_object* v_name_16_; lean_object* v_imported_17_; lean_object* v_ctx_18_; lean_object* v_scopes_19_; uint8_t v___x_20_; 
v_name_16_ = lean_ctor_get(v_view_9_, 0);
lean_inc(v_name_16_);
v_imported_17_ = lean_ctor_get(v_view_9_, 1);
lean_inc(v_imported_17_);
v_ctx_18_ = lean_ctor_get(v_view_9_, 2);
lean_inc(v_ctx_18_);
v_scopes_19_ = lean_ctor_get(v_view_9_, 3);
lean_inc(v_scopes_19_);
lean_dec_ref(v_view_9_);
v___x_20_ = l_List_isEmpty___redArg(v_scopes_19_);
if (v___x_20_ == 0)
{
uint8_t v___x_21_; 
v___x_21_ = lean_name_eq(v_ctx_18_, v_mainModule_10_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = l_Lean_Name_append(v_name_16_, v_imported_17_);
v___x_23_ = l_Lean_Name_append(v___x_22_, v_ctx_18_);
v___x_24_ = l_List_foldl___at___00Lean_MacroScopesView_review_spec__0(v___x_23_, v_scopes_19_);
v___y_12_ = v___x_24_;
goto v___jp_11_;
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec(v_ctx_18_);
v___x_25_ = l_Lean_Name_append(v_name_16_, v_imported_17_);
v___x_26_ = l_List_foldl___at___00Lean_MacroScopesView_review_spec__0(v___x_25_, v_scopes_19_);
v___y_12_ = v___x_26_;
goto v___jp_11_;
}
}
else
{
lean_dec(v_scopes_19_);
lean_dec(v_ctx_18_);
lean_dec(v_imported_17_);
v___y_12_ = v_name_16_;
goto v___jp_11_;
}
v___jp_11_:
{
uint8_t v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = 1;
v___x_14_ = l_Lean_Name_toString(v___y_12_, v___x_13_);
v___x_15_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_format___boxed(lean_object* v_view_27_, lean_object* v_mainModule_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_MacroScopesView_format(v_view_27_, v_mainModule_28_);
lean_dec(v_mainModule_28_);
return v_res_29_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0(lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
if (lean_obj_tag(v_x_30_) == 0)
{
if (lean_obj_tag(v_x_31_) == 0)
{
uint8_t v___x_32_; 
v___x_32_ = 1;
return v___x_32_;
}
else
{
uint8_t v___x_33_; 
v___x_33_ = 0;
return v___x_33_;
}
}
else
{
if (lean_obj_tag(v_x_31_) == 0)
{
uint8_t v___x_34_; 
v___x_34_ = 0;
return v___x_34_;
}
else
{
lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v_head_37_; lean_object* v_tail_38_; uint8_t v___x_39_; 
v_head_35_ = lean_ctor_get(v_x_30_, 0);
v_tail_36_ = lean_ctor_get(v_x_30_, 1);
v_head_37_ = lean_ctor_get(v_x_31_, 0);
v_tail_38_ = lean_ctor_get(v_x_31_, 1);
v___x_39_ = lean_nat_dec_eq(v_head_35_, v_head_37_);
if (v___x_39_ == 0)
{
return v___x_39_;
}
else
{
v_x_30_ = v_tail_36_;
v_x_31_ = v_tail_38_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0___boxed(lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0(v_x_41_, v_x_42_);
lean_dec(v_x_42_);
lean_dec(v_x_41_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
LEAN_EXPORT uint8_t l_Lean_MacroScopesView_equalScope(lean_object* v_a_45_, lean_object* v_b_46_){
_start:
{
lean_object* v_imported_47_; lean_object* v_ctx_48_; lean_object* v_scopes_49_; lean_object* v_imported_50_; lean_object* v_ctx_51_; lean_object* v_scopes_52_; uint8_t v___x_53_; 
v_imported_47_ = lean_ctor_get(v_a_45_, 1);
v_ctx_48_ = lean_ctor_get(v_a_45_, 2);
v_scopes_49_ = lean_ctor_get(v_a_45_, 3);
v_imported_50_ = lean_ctor_get(v_b_46_, 1);
v_ctx_51_ = lean_ctor_get(v_b_46_, 2);
v_scopes_52_ = lean_ctor_get(v_b_46_, 3);
v___x_53_ = l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0(v_scopes_49_, v_scopes_52_);
if (v___x_53_ == 0)
{
return v___x_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = lean_name_eq(v_ctx_48_, v_ctx_51_);
if (v___x_54_ == 0)
{
return v___x_54_;
}
else
{
uint8_t v___x_55_; 
v___x_55_ = lean_name_eq(v_imported_47_, v_imported_50_);
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_equalScope___boxed(lean_object* v_a_56_, lean_object* v_b_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = l_Lean_MacroScopesView_equalScope(v_a_56_, v_b_57_);
lean_dec_ref(v_b_57_);
lean_dec_ref(v_a_56_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptNamedPrio(lean_object* v_stx_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
uint8_t v___x_72_; 
v___x_72_ = l_Lean_Syntax_isNone(v_stx_69_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = l_Lean_Syntax_getArg(v_stx_69_, v___x_73_);
v___x_75_ = ((lean_object*)(l_Lean_Elab_expandOptNamedPrio___closed__4));
lean_inc(v___x_74_);
v___x_76_ = l_Lean_Syntax_isOfKind(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
lean_dec(v___x_74_);
v___x_77_ = l_Lean_Macro_throwUnsupported___redArg(v_a_71_);
return v___x_77_;
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_unsigned_to_nat(3u);
v___x_79_ = l_Lean_Syntax_getArg(v___x_74_, v___x_78_);
lean_dec(v___x_74_);
v___x_80_ = l_Lean_evalPrio(v___x_79_, v_a_70_, v_a_71_);
return v___x_80_;
}
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_unsigned_to_nat(1000u);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v_a_71_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptNamedPrio___boxed(lean_object* v_stx_83_, lean_object* v_a_84_, lean_object* v_a_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_Elab_expandOptNamedPrio(v_stx_83_, v_a_84_, v_a_85_);
lean_dec_ref(v_a_84_);
lean_dec(v_stx_83_);
return v_res_86_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0(lean_object* v_x_87_, lean_object* v_x_88_){
_start:
{
if (lean_obj_tag(v_x_87_) == 0)
{
if (lean_obj_tag(v_x_88_) == 0)
{
uint8_t v___x_89_; 
v___x_89_ = 1;
return v___x_89_;
}
else
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
}
else
{
if (lean_obj_tag(v_x_88_) == 0)
{
uint8_t v___x_91_; 
v___x_91_ = 0;
return v___x_91_;
}
else
{
lean_object* v_val_92_; lean_object* v_val_93_; uint8_t v_decide_94_; 
v_val_92_ = lean_ctor_get(v_x_87_, 0);
v_val_93_ = lean_ctor_get(v_x_88_, 0);
v_decide_94_ = lean_nat_dec_eq(v_val_92_, v_val_93_);
return v_decide_94_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0___boxed(lean_object* v_x_95_, lean_object* v_x_96_){
_start:
{
uint8_t v_res_97_; lean_object* v_r_98_; 
v_res_97_ = l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0(v_x_95_, v_x_96_);
lean_dec(v_x_96_);
lean_dec(v_x_95_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1(lean_object* v___x_99_, lean_object* v_x_100_){
_start:
{
if (lean_obj_tag(v_x_100_) == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_box(0);
return v___x_101_;
}
else
{
lean_object* v_head_102_; lean_object* v_tail_103_; lean_object* v_before_104_; uint8_t v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_head_102_ = lean_ctor_get(v_x_100_, 0);
v_tail_103_ = lean_ctor_get(v_x_100_, 1);
v_before_104_ = lean_ctor_get(v_head_102_, 0);
v___x_105_ = 0;
v___x_106_ = l_Lean_Syntax_getPos_x3f(v_before_104_, v___x_105_);
v___x_107_ = l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0(v___x_106_, v___x_99_);
lean_dec(v___x_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
lean_inc(v_head_102_);
v___x_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_108_, 0, v_head_102_);
return v___x_108_;
}
else
{
v_x_100_ = v_tail_103_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1___boxed(lean_object* v___x_110_, lean_object* v_x_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1(v___x_110_, v_x_111_);
lean_dec(v_x_111_);
lean_dec(v___x_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getBetterRef(lean_object* v_ref_113_, lean_object* v_macroStack_114_){
_start:
{
uint8_t v___x_115_; lean_object* v___x_116_; 
v___x_115_ = 0;
v___x_116_ = l_Lean_Syntax_getPos_x3f(v_ref_113_, v___x_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v___x_117_; 
v___x_117_ = l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1(v___x_116_, v_macroStack_114_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_inc(v_ref_113_);
return v_ref_113_;
}
else
{
lean_object* v_val_118_; lean_object* v_before_119_; 
v_val_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_val_118_);
lean_dec_ref_known(v___x_117_, 1);
v_before_119_ = lean_ctor_get(v_val_118_, 0);
lean_inc(v_before_119_);
lean_dec(v_val_118_);
return v_before_119_;
}
}
else
{
lean_dec_ref_known(v___x_116_, 1);
lean_inc(v_ref_113_);
return v_ref_113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getBetterRef___boxed(lean_object* v_ref_120_, lean_object* v_macroStack_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Elab_getBetterRef(v_ref_120_, v_macroStack_121_);
lean_dec(v_macroStack_121_);
lean_dec(v_ref_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0(lean_object* v_name_123_, lean_object* v_decl_124_, lean_object* v_ref_125_){
_start:
{
lean_object* v_defValue_127_; lean_object* v_descr_128_; lean_object* v_deprecation_x3f_129_; lean_object* v___x_130_; uint8_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v_defValue_127_ = lean_ctor_get(v_decl_124_, 0);
v_descr_128_ = lean_ctor_get(v_decl_124_, 1);
v_deprecation_x3f_129_ = lean_ctor_get(v_decl_124_, 2);
v___x_130_ = lean_alloc_ctor(1, 0, 1);
v___x_131_ = lean_unbox(v_defValue_127_);
lean_ctor_set_uint8(v___x_130_, 0, v___x_131_);
lean_inc(v_deprecation_x3f_129_);
lean_inc_ref(v_descr_128_);
lean_inc_n(v_name_123_, 2);
v___x_132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_132_, 0, v_name_123_);
lean_ctor_set(v___x_132_, 1, v_ref_125_);
lean_ctor_set(v___x_132_, 2, v___x_130_);
lean_ctor_set(v___x_132_, 3, v_descr_128_);
lean_ctor_set(v___x_132_, 4, v_deprecation_x3f_129_);
v___x_133_ = lean_register_option(v_name_123_, v___x_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_141_; 
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v___x_133_, 0);
lean_dec(v_unused_142_);
v___x_135_ = v___x_133_;
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
else
{
lean_dec(v___x_133_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_139_; 
lean_inc(v_defValue_127_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v_name_123_);
lean_ctor_set(v___x_137_, 1, v_defValue_127_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_137_);
v___x_139_ = v___x_135_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
lean_dec(v_name_123_);
v_a_143_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_133_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_133_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_151_, lean_object* v_decl_152_, lean_object* v_ref_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0(v_name_151_, v_decl_152_, v_ref_153_);
lean_dec_ref(v_decl_152_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_174_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_));
v___x_175_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_));
v___x_176_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_));
v___x_177_ = l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0(v___x_174_, v___x_175_, v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4____boxed(lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_();
return v_res_179_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = ((lean_object*)(l_Lean_Elab_addMacroStack___redArg___lam__0___closed__1));
v___x_184_ = l_Lean_MessageData_ofFormat(v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0(lean_object* v___x_185_, lean_object* v_msgData_186_, lean_object* v_elem_187_){
_start:
{
lean_object* v_before_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_200_; 
v_before_188_ = lean_ctor_get(v_elem_187_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v_elem_187_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; 
v_unused_201_ = lean_ctor_get(v_elem_187_, 1);
lean_dec(v_unused_201_);
v___x_190_ = v_elem_187_;
v_isShared_191_ = v_isSharedCheck_200_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_before_188_);
lean_dec(v_elem_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_200_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 7);
lean_ctor_set(v___x_190_, 1, v___x_185_);
lean_ctor_set(v___x_190_, 0, v_msgData_186_);
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_msgData_186_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v___x_185_);
v___x_193_ = v_reuseFailAlloc_199_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_194_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2, &l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2);
v___x_195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = l_Lean_MessageData_ofSyntax(v_before_188_);
v___x_197_ = l_Lean_indentD(v___x_196_);
v___x_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_195_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
return v___x_198_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_box(1);
v___x_203_ = l_Lean_MessageData_ofFormat(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_204_; lean_object* v___f_205_; 
v___x_204_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0, &l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0);
v___f_205_ = lean_alloc_closure((void*)(l_Lean_Elab_addMacroStack___redArg___lam__0), 3, 1);
lean_closure_set(v___f_205_, 0, v___x_204_);
return v___f_205_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lean_Elab_addMacroStack___redArg___lam__1___closed__3));
v___x_210_ = l_Lean_MessageData_ofFormat(v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1(lean_object* v___x_211_, lean_object* v_toPure_212_, lean_object* v_msgData_213_, lean_object* v_macroStack_214_, lean_object* v_____do__lift_215_){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_216_ = l_Lean_Elab_pp_macroStack;
v___x_217_ = l_Lean_Option_get___redArg(v___x_211_, v_____do__lift_215_, v___x_216_);
v___x_218_ = lean_unbox(v___x_217_);
lean_dec(v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; 
lean_dec(v_macroStack_214_);
v___x_219_ = lean_apply_2(v_toPure_212_, lean_box(0), v_msgData_213_);
return v___x_219_;
}
else
{
if (lean_obj_tag(v_macroStack_214_) == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_apply_2(v_toPure_212_, lean_box(0), v_msgData_213_);
return v___x_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_after_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_238_; 
v_head_221_ = lean_ctor_get(v_macroStack_214_, 0);
lean_inc(v_head_221_);
v_after_222_ = lean_ctor_get(v_head_221_, 1);
v_isSharedCheck_238_ = !lean_is_exclusive(v_head_221_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; 
v_unused_239_ = lean_ctor_get(v_head_221_, 0);
lean_dec(v_unused_239_);
v___x_224_ = v_head_221_;
v_isShared_225_ = v_isSharedCheck_238_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_after_222_);
lean_dec(v_head_221_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_238_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; lean_object* v___f_227_; lean_object* v___x_229_; 
v___x_226_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0, &l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0);
v___f_227_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1, &l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1);
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 7);
lean_ctor_set(v___x_224_, 1, v___x_226_);
lean_ctor_set(v___x_224_, 0, v_msgData_213_);
v___x_229_ = v___x_224_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_msgData_213_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_226_);
v___x_229_ = v_reuseFailAlloc_237_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v_msgData_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_230_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4, &l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4);
v___x_231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = l_Lean_MessageData_ofSyntax(v_after_222_);
v___x_233_ = l_Lean_indentD(v___x_232_);
v_msgData_234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_234_, 0, v___x_231_);
lean_ctor_set(v_msgData_234_, 1, v___x_233_);
v___x_235_ = l_List_foldl___redArg(v___f_227_, v_msgData_234_, v_macroStack_214_);
v___x_236_ = lean_apply_2(v_toPure_212_, lean_box(0), v___x_235_);
return v___x_236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___boxed(lean_object* v___x_240_, lean_object* v_toPure_241_, lean_object* v_msgData_242_, lean_object* v_macroStack_243_, lean_object* v_____do__lift_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Elab_addMacroStack___redArg___lam__1(v___x_240_, v_toPure_241_, v_msgData_242_, v_macroStack_243_, v_____do__lift_244_);
lean_dec_ref(v_____do__lift_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg(lean_object* v_inst_246_, lean_object* v_inst_247_, lean_object* v_msgData_248_, lean_object* v_macroStack_249_){
_start:
{
lean_object* v___x_250_; lean_object* v_toApplicative_251_; lean_object* v_toBind_252_; lean_object* v_getOptions_253_; lean_object* v_toPure_254_; lean_object* v___f_255_; lean_object* v___x_256_; 
v___x_250_ = l_Lean_KVMap_instValueBool;
v_toApplicative_251_ = lean_ctor_get(v_inst_246_, 0);
lean_inc_ref(v_toApplicative_251_);
v_toBind_252_ = lean_ctor_get(v_inst_246_, 1);
lean_inc(v_toBind_252_);
lean_dec_ref(v_inst_246_);
v_getOptions_253_ = lean_ctor_get(v_inst_247_, 0);
lean_inc(v_getOptions_253_);
lean_dec_ref(v_inst_247_);
v_toPure_254_ = lean_ctor_get(v_toApplicative_251_, 1);
lean_inc(v_toPure_254_);
lean_dec_ref(v_toApplicative_251_);
v___f_255_ = lean_alloc_closure((void*)(l_Lean_Elab_addMacroStack___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_255_, 0, v___x_250_);
lean_closure_set(v___f_255_, 1, v_toPure_254_);
lean_closure_set(v___f_255_, 2, v_msgData_248_);
lean_closure_set(v___f_255_, 3, v_macroStack_249_);
v___x_256_ = lean_apply_4(v_toBind_252_, lean_box(0), lean_box(0), v_getOptions_253_, v___f_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack(lean_object* v_m_257_, lean_object* v_inst_258_, lean_object* v_inst_259_, lean_object* v_msgData_260_, lean_object* v_macroStack_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lean_Elab_addMacroStack___redArg(v_inst_258_, v_inst_259_, v_msgData_260_, v_macroStack_261_);
return v___x_262_;
}
}
static lean_object* _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = ((lean_object*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__0));
v___x_265_ = l_Lean_stringToMessageData(v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0(lean_object* v_inst_266_, lean_object* v_inst_267_, lean_object* v_____r_268_){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_obj_once(&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1, &l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1);
v___x_270_ = l_Lean_throwError___redArg(v_inst_266_, v_inst_267_, v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__1(lean_object* v_k_271_, lean_object* v___f_272_, lean_object* v_toPure_273_, lean_object* v_____do__lift_274_){
_start:
{
uint8_t v___x_275_; 
lean_inc(v_k_271_);
v___x_275_ = l_Lean_Parser_isValidSyntaxNodeKind(v_____do__lift_274_, v_k_271_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v_toPure_273_);
lean_dec(v_k_271_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_apply_1(v___f_272_, v___x_276_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; 
lean_dec(v___f_272_);
v___x_278_ = lean_apply_2(v_toPure_273_, lean_box(0), v_k_271_);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2(lean_object* v_k_279_, lean_object* v___f_280_, lean_object* v_toPure_281_, lean_object* v_toBind_282_, lean_object* v_getEnv_283_, lean_object* v_____do__lift_284_){
_start:
{
lean_object* v_k_285_; lean_object* v___f_286_; lean_object* v___x_287_; 
v_k_285_ = l_Lean_mkPrivateName(v_____do__lift_284_, v_k_279_);
v___f_286_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__1), 4, 3);
lean_closure_set(v___f_286_, 0, v_k_285_);
lean_closure_set(v___f_286_, 1, v___f_280_);
lean_closure_set(v___f_286_, 2, v_toPure_281_);
v___x_287_ = lean_apply_4(v_toBind_282_, lean_box(0), lean_box(0), v_getEnv_283_, v___f_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2___boxed(lean_object* v_k_288_, lean_object* v___f_289_, lean_object* v_toPure_290_, lean_object* v_toBind_291_, lean_object* v_getEnv_292_, lean_object* v_____do__lift_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2(v_k_288_, v___f_289_, v_toPure_290_, v_toBind_291_, v_getEnv_292_, v_____do__lift_293_);
lean_dec_ref(v_____do__lift_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3(lean_object* v___f_295_, lean_object* v_k_296_, lean_object* v_toBind_297_, lean_object* v_getEnv_298_, lean_object* v___f_299_, lean_object* v_____do__lift_300_){
_start:
{
uint8_t v_isExporting_304_; 
v_isExporting_304_ = lean_ctor_get_uint8(v_____do__lift_300_, sizeof(void*)*13);
if (v_isExporting_304_ == 0)
{
uint8_t v___x_305_; 
v___x_305_ = l_Lean_isPrivateName(v_k_296_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; 
lean_dec(v___f_295_);
v___x_306_ = lean_apply_4(v_toBind_297_, lean_box(0), lean_box(0), v_getEnv_298_, v___f_299_);
return v___x_306_;
}
else
{
lean_dec(v___f_299_);
lean_dec(v_getEnv_298_);
lean_dec(v_toBind_297_);
goto v___jp_301_;
}
}
else
{
lean_dec(v___f_299_);
lean_dec(v_getEnv_298_);
lean_dec(v_toBind_297_);
goto v___jp_301_;
}
v___jp_301_:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = lean_box(0);
v___x_303_ = lean_apply_1(v___f_295_, v___x_302_);
return v___x_303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3___boxed(lean_object* v___f_307_, lean_object* v_k_308_, lean_object* v_toBind_309_, lean_object* v_getEnv_310_, lean_object* v___f_311_, lean_object* v_____do__lift_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3(v___f_307_, v_k_308_, v_toBind_309_, v_getEnv_310_, v___f_311_, v_____do__lift_312_);
lean_dec_ref(v_____do__lift_312_);
lean_dec(v_k_308_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__4(lean_object* v_k_314_, lean_object* v___f_315_, lean_object* v_toBind_316_, lean_object* v_getEnv_317_, lean_object* v___f_318_, lean_object* v_toPure_319_, lean_object* v_____do__lift_320_){
_start:
{
uint8_t v___x_321_; 
lean_inc(v_k_314_);
v___x_321_ = l_Lean_Parser_isValidSyntaxNodeKind(v_____do__lift_320_, v_k_314_);
if (v___x_321_ == 0)
{
lean_object* v___f_322_; lean_object* v___x_323_; 
lean_dec(v_toPure_319_);
lean_inc(v_getEnv_317_);
lean_inc(v_toBind_316_);
v___f_322_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_322_, 0, v___f_315_);
lean_closure_set(v___f_322_, 1, v_k_314_);
lean_closure_set(v___f_322_, 2, v_toBind_316_);
lean_closure_set(v___f_322_, 3, v_getEnv_317_);
lean_closure_set(v___f_322_, 4, v___f_318_);
v___x_323_ = lean_apply_4(v_toBind_316_, lean_box(0), lean_box(0), v_getEnv_317_, v___f_322_);
return v___x_323_;
}
else
{
lean_object* v___x_324_; 
lean_dec(v___f_318_);
lean_dec(v_getEnv_317_);
lean_dec(v_toBind_316_);
lean_dec(v___f_315_);
v___x_324_ = lean_apply_2(v_toPure_319_, lean_box(0), v_k_314_);
return v___x_324_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg(lean_object* v_inst_325_, lean_object* v_inst_326_, lean_object* v_inst_327_, lean_object* v_k_328_){
_start:
{
lean_object* v_toApplicative_329_; lean_object* v_toBind_330_; lean_object* v_getEnv_331_; lean_object* v_toPure_332_; lean_object* v___f_333_; lean_object* v___f_334_; lean_object* v___f_335_; lean_object* v___x_336_; 
v_toApplicative_329_ = lean_ctor_get(v_inst_325_, 0);
v_toBind_330_ = lean_ctor_get(v_inst_325_, 1);
lean_inc_n(v_toBind_330_, 3);
v_getEnv_331_ = lean_ctor_get(v_inst_326_, 0);
lean_inc_n(v_getEnv_331_, 3);
lean_dec_ref(v_inst_326_);
v_toPure_332_ = lean_ctor_get(v_toApplicative_329_, 1);
lean_inc_n(v_toPure_332_, 2);
v___f_333_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_333_, 0, v_inst_325_);
lean_closure_set(v___f_333_, 1, v_inst_327_);
lean_inc_ref(v___f_333_);
lean_inc(v_k_328_);
v___f_334_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_334_, 0, v_k_328_);
lean_closure_set(v___f_334_, 1, v___f_333_);
lean_closure_set(v___f_334_, 2, v_toPure_332_);
lean_closure_set(v___f_334_, 3, v_toBind_330_);
lean_closure_set(v___f_334_, 4, v_getEnv_331_);
v___f_335_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__4), 7, 6);
lean_closure_set(v___f_335_, 0, v_k_328_);
lean_closure_set(v___f_335_, 1, v___f_333_);
lean_closure_set(v___f_335_, 2, v_toBind_330_);
lean_closure_set(v___f_335_, 3, v_getEnv_331_);
lean_closure_set(v___f_335_, 4, v___f_334_);
lean_closure_set(v___f_335_, 5, v_toPure_332_);
v___x_336_ = lean_apply_4(v_toBind_330_, lean_box(0), lean_box(0), v_getEnv_331_, v___f_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind(lean_object* v_m_337_, lean_object* v_inst_338_, lean_object* v_inst_339_, lean_object* v_inst_340_, lean_object* v_k_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lean_Elab_checkSyntaxNodeKind___redArg(v_inst_338_, v_inst_339_, v_inst_340_, v_k_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0___boxed(lean_object* v_inst_343_, lean_object* v_inst_344_, lean_object* v_inst_345_, lean_object* v_k_346_, lean_object* v_pre_347_, lean_object* v_x_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0(v_inst_343_, v_inst_344_, v_inst_345_, v_k_346_, v_pre_347_, v_x_348_);
lean_dec_ref(v_x_348_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg(lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_k_353_, lean_object* v_x_354_){
_start:
{
switch(lean_obj_tag(v_x_354_))
{
case 1:
{
lean_object* v_toMonadExceptOf_355_; lean_object* v_pre_356_; lean_object* v_tryCatch_357_; lean_object* v___f_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v_toMonadExceptOf_355_ = lean_ctor_get(v_inst_352_, 0);
v_pre_356_ = lean_ctor_get(v_x_354_, 0);
v_tryCatch_357_ = lean_ctor_get(v_toMonadExceptOf_355_, 1);
lean_inc(v_tryCatch_357_);
lean_inc(v_pre_356_);
lean_inc(v_k_353_);
lean_inc_ref(v_inst_352_);
lean_inc_ref(v_inst_351_);
lean_inc_ref(v_inst_350_);
v___f_358_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_358_, 0, v_inst_350_);
lean_closure_set(v___f_358_, 1, v_inst_351_);
lean_closure_set(v___f_358_, 2, v_inst_352_);
lean_closure_set(v___f_358_, 3, v_k_353_);
lean_closure_set(v___f_358_, 4, v_pre_356_);
v___x_359_ = l_Lean_Name_append(v_x_354_, v_k_353_);
v___x_360_ = l_Lean_Elab_checkSyntaxNodeKind___redArg(v_inst_350_, v_inst_351_, v_inst_352_, v___x_359_);
v___x_361_ = lean_apply_3(v_tryCatch_357_, lean_box(0), v___x_360_, v___f_358_);
return v___x_361_;
}
case 0:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lean_Elab_checkSyntaxNodeKind___redArg(v_inst_350_, v_inst_351_, v_inst_352_, v_k_353_);
return v___x_362_;
}
default: 
{
lean_object* v___x_363_; lean_object* v___x_364_; 
lean_dec(v_x_354_);
lean_dec(v_k_353_);
lean_dec_ref(v_inst_351_);
v___x_363_ = lean_obj_once(&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1, &l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1);
v___x_364_ = l_Lean_throwError___redArg(v_inst_350_, v_inst_352_, v___x_363_);
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0(lean_object* v_inst_365_, lean_object* v_inst_366_, lean_object* v_inst_367_, lean_object* v_k_368_, lean_object* v_pre_369_, lean_object* v_x_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg(v_inst_365_, v_inst_366_, v_inst_367_, v_k_368_, v_pre_369_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces(lean_object* v_m_372_, lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_inst_375_, lean_object* v_k_376_, lean_object* v_x_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg(v_inst_373_, v_inst_374_, v_inst_375_, v_k_376_, v_x_377_);
return v___x_378_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_379_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_382_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1);
v___x_383_ = lean_unsigned_to_nat(0u);
v___x_384_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
lean_ctor_set(v___x_384_, 2, v___x_383_);
lean_ctor_set(v___x_384_, 3, v___x_383_);
lean_ctor_set(v___x_384_, 4, v___x_382_);
lean_ctor_set(v___x_384_, 5, v___x_382_);
lean_ctor_set(v___x_384_, 6, v___x_382_);
lean_ctor_set(v___x_384_, 7, v___x_382_);
lean_ctor_set(v___x_384_, 8, v___x_382_);
lean_ctor_set(v___x_384_, 9, v___x_382_);
lean_ctor_set(v___x_384_, 10, v___x_382_);
return v___x_384_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_385_ = lean_unsigned_to_nat(32u);
v___x_386_ = lean_mk_empty_array_with_capacity(v___x_385_);
v___x_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
return v___x_387_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
size_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_388_ = ((size_t)5ULL);
v___x_389_ = lean_unsigned_to_nat(0u);
v___x_390_ = lean_unsigned_to_nat(32u);
v___x_391_ = lean_mk_empty_array_with_capacity(v___x_390_);
v___x_392_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3);
v___x_393_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v___x_391_);
lean_ctor_set(v___x_393_, 2, v___x_389_);
lean_ctor_set(v___x_393_, 3, v___x_389_);
lean_ctor_set_usize(v___x_393_, 4, v___x_388_);
return v___x_393_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_394_ = lean_box(1);
v___x_395_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4);
v___x_396_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1);
v___x_397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
lean_ctor_set(v___x_397_, 1, v___x_395_);
lean_ctor_set(v___x_397_, 2, v___x_394_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(lean_object* v_msgData_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v___x_402_; lean_object* v_toCold_403_; lean_object* v_env_404_; lean_object* v_options_405_; uint8_t v___x_406_; lean_object* v_env_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_402_ = lean_st_ref_get(v___y_400_);
v_toCold_403_ = lean_ctor_get(v___y_399_, 0);
v_env_404_ = lean_ctor_get(v___x_402_, 0);
lean_inc_ref(v_env_404_);
lean_dec(v___x_402_);
v_options_405_ = lean_ctor_get(v_toCold_403_, 2);
v___x_406_ = 0;
v_env_407_ = l_Lean_Environment_setRecordingDeps(v_env_404_, v___x_406_);
v___x_408_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2);
v___x_409_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5);
lean_inc_ref(v_options_405_);
v___x_410_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_410_, 0, v_env_407_);
lean_ctor_set(v___x_410_, 1, v___x_408_);
lean_ctor_set(v___x_410_, 2, v___x_409_);
lean_ctor_set(v___x_410_, 3, v_options_405_);
v___x_411_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set(v___x_411_, 1, v_msgData_398_);
v___x_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(v_msgData_413_, v___y_414_, v___y_415_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(lean_object* v_msg_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_ref_422_; lean_object* v___x_423_; lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_432_; 
v_ref_422_ = lean_ctor_get(v___y_419_, 2);
v___x_423_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(v_msg_418_, v___y_419_, v___y_420_);
v_a_424_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_432_ == 0)
{
v___x_426_ = v___x_423_;
v_isShared_427_ = v_isSharedCheck_432_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_423_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_432_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_428_; lean_object* v___x_430_; 
lean_inc(v_ref_422_);
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v_ref_422_);
lean_ctor_set(v___x_428_, 1, v_a_424_);
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 1);
lean_ctor_set(v___x_426_, 0, v___x_428_);
v___x_430_ = v___x_426_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_428_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg___boxed(lean_object* v_msg_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v_msg_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(lean_object* v_k_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v___y_443_; lean_object* v___y_444_; lean_object* v___x_447_; lean_object* v_env_448_; uint8_t v___x_449_; 
v___x_447_ = lean_st_ref_get(v___y_440_);
v_env_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc_ref(v_env_448_);
lean_dec(v___x_447_);
lean_inc(v_k_438_);
v___x_449_ = l_Lean_Parser_isValidSyntaxNodeKind(v_env_448_, v_k_438_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; lean_object* v_env_451_; uint8_t v_isExporting_452_; 
v___x_450_ = lean_st_ref_get(v___y_440_);
v_env_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc_ref(v_env_451_);
lean_dec(v___x_450_);
v_isExporting_452_ = lean_ctor_get_uint8(v_env_451_, sizeof(void*)*13);
lean_dec_ref(v_env_451_);
if (v_isExporting_452_ == 0)
{
uint8_t v___x_453_; 
v___x_453_ = l_Lean_isPrivateName(v_k_438_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; lean_object* v_env_455_; lean_object* v_k_456_; lean_object* v___x_457_; lean_object* v_env_458_; uint8_t v___x_459_; 
v___x_454_ = lean_st_ref_get(v___y_440_);
v_env_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc_ref(v_env_455_);
lean_dec(v___x_454_);
v_k_456_ = l_Lean_mkPrivateName(v_env_455_, v_k_438_);
lean_dec_ref(v_env_455_);
v___x_457_ = lean_st_ref_get(v___y_440_);
v_env_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc_ref(v_env_458_);
lean_dec(v___x_457_);
lean_inc(v_k_456_);
v___x_459_ = l_Lean_Parser_isValidSyntaxNodeKind(v_env_458_, v_k_456_);
if (v___x_459_ == 0)
{
lean_dec(v_k_456_);
v___y_443_ = v___y_439_;
v___y_444_ = v___y_440_;
goto v___jp_442_;
}
else
{
lean_object* v___x_460_; 
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v_k_456_);
return v___x_460_;
}
}
else
{
lean_dec(v_k_438_);
v___y_443_ = v___y_439_;
v___y_444_ = v___y_440_;
goto v___jp_442_;
}
}
else
{
lean_dec(v_k_438_);
v___y_443_ = v___y_439_;
v___y_444_ = v___y_440_;
goto v___jp_442_;
}
}
else
{
lean_object* v___x_461_; 
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v_k_438_);
return v___x_461_;
}
v___jp_442_:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = lean_obj_once(&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1, &l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1);
v___x_446_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v___x_445_, v___y_443_, v___y_444_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0___boxed(lean_object* v_k_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(v_k_462_, v___y_463_, v___y_464_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0(lean_object* v_k_467_, lean_object* v_x_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
switch(lean_obj_tag(v_x_468_))
{
case 1:
{
lean_object* v_pre_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_pre_472_ = lean_ctor_get(v_x_468_, 0);
lean_inc(v_pre_472_);
lean_inc(v_k_467_);
v___x_473_ = l_Lean_Name_append(v_x_468_, v_k_467_);
v___x_474_ = l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(v___x_473_, v___y_469_, v___y_470_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_dec(v_pre_472_);
lean_dec(v_k_467_);
return v___x_474_;
}
else
{
lean_object* v_a_475_; uint8_t v___x_476_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v___x_476_ = l_Lean_Exception_isInterrupt(v_a_475_);
if (v___x_476_ == 0)
{
uint8_t v___x_477_; 
lean_inc(v_a_475_);
v___x_477_ = l_Lean_Exception_isRuntime(v_a_475_);
if (v___x_477_ == 0)
{
lean_dec_ref_known(v___x_474_, 1);
v_x_468_ = v_pre_472_;
goto _start;
}
else
{
lean_dec(v_pre_472_);
lean_dec(v_k_467_);
return v___x_474_;
}
}
else
{
lean_dec(v_pre_472_);
lean_dec(v_k_467_);
return v___x_474_;
}
}
}
case 0:
{
lean_object* v___x_479_; 
v___x_479_ = l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(v_k_467_, v___y_469_, v___y_470_);
return v___x_479_;
}
default: 
{
lean_object* v___x_480_; lean_object* v___x_481_; 
lean_dec(v_x_468_);
lean_dec(v_k_467_);
v___x_480_ = lean_obj_once(&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1, &l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1);
v___x_481_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v___x_480_, v___y_469_, v___y_470_);
return v___x_481_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0___boxed(lean_object* v_k_482_, lean_object* v_x_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0(v_k_482_, v_x_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces(lean_object* v_k_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_toCold_492_; lean_object* v_currNamespace_493_; lean_object* v___x_494_; 
v_toCold_492_ = lean_ctor_get(v_a_489_, 0);
v_currNamespace_493_ = lean_ctor_get(v_toCold_492_, 4);
lean_inc(v_currNamespace_493_);
v___x_494_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0(v_k_488_, v_currNamespace_493_, v_a_489_, v_a_490_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces___boxed(lean_object* v_k_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces(v_k_495_, v_a_496_, v_a_497_);
lean_dec(v_a_497_);
lean_dec_ref(v_a_496_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1(lean_object* v_00_u03b1_500_, lean_object* v_msg_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v_msg_501_, v___y_502_, v___y_503_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___boxed(lean_object* v_00_u03b1_506_, lean_object* v_msg_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1(v_00_u03b1_506_, v_msg_507_, v___y_508_, v___y_509_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
return v_res_511_;
}
}
static lean_object* _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = ((lean_object*)(l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__0));
v___x_514_ = l_Lean_stringToMessageData(v___x_513_);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = ((lean_object*)(l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__2));
v___x_517_ = l_Lean_stringToMessageData(v___x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam(lean_object* v_defaultParserNamespace_518_, lean_object* v_stx_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = l_Lean_Attribute_Builtin_getId(v_stx_519_, v_a_520_, v_a_521_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_525_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc_n(v_a_524_, 2);
lean_dec_ref_known(v___x_523_, 1);
v___x_525_ = l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces(v_a_524_, v_a_520_, v_a_521_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_dec(v_a_524_);
lean_dec(v_defaultParserNamespace_518_);
return v___x_525_;
}
else
{
lean_object* v_a_526_; uint8_t v___x_527_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v___x_527_ = l_Lean_Exception_isInterrupt(v_a_526_);
if (v___x_527_ == 0)
{
uint8_t v___x_528_; 
lean_inc(v_a_526_);
v___x_528_ = l_Lean_Exception_isRuntime(v_a_526_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; lean_object* v___x_530_; 
lean_dec_ref_known(v___x_525_, 1);
lean_inc(v_a_524_);
v___x_529_ = l_Lean_Name_append(v_defaultParserNamespace_518_, v_a_524_);
v___x_530_ = l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(v___x_529_, v_a_520_, v_a_521_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_dec(v_a_524_);
return v___x_530_;
}
else
{
lean_object* v_a_531_; uint8_t v___x_532_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
v___x_532_ = l_Lean_Exception_isInterrupt(v_a_531_);
if (v___x_532_ == 0)
{
uint8_t v___x_533_; 
lean_inc(v_a_531_);
v___x_533_ = l_Lean_Exception_isRuntime(v_a_531_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
lean_dec_ref_known(v___x_530_, 1);
v___x_534_ = lean_obj_once(&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1, &l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1_once, _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1);
v___x_535_ = l_Lean_MessageData_ofName(v_a_524_);
v___x_536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = lean_obj_once(&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3, &l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3_once, _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3);
v___x_538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v___x_538_, v_a_520_, v_a_521_);
return v___x_539_;
}
else
{
lean_dec(v_a_524_);
return v___x_530_;
}
}
else
{
lean_dec(v_a_524_);
return v___x_530_;
}
}
}
else
{
lean_dec(v_a_524_);
lean_dec(v_defaultParserNamespace_518_);
return v___x_525_;
}
}
else
{
lean_dec(v_a_524_);
lean_dec(v_defaultParserNamespace_518_);
return v___x_525_;
}
}
}
else
{
lean_dec(v_defaultParserNamespace_518_);
return v___x_523_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___boxed(lean_object* v_defaultParserNamespace_540_, lean_object* v_stx_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lean_Elab_syntaxNodeKindOfAttrParam(v_defaultParserNamespace_540_, v_stx_541_, v_a_542_, v_a_543_);
lean_dec(v_a_543_);
lean_dec_ref(v_a_542_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe(lean_object* v_env_550_, lean_object* v_opts_551_, lean_object* v_constName_552_){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1));
v___x_554_ = l_Lean_Environment_evalConstCheck___redArg(v_env_550_, v_opts_551_, v___x_553_, v_constName_552_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___boxed(lean_object* v_env_555_, lean_object* v_opts_556_, lean_object* v_constName_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe(v_env_555_, v_opts_556_, v_constName_557_);
lean_dec_ref(v_opts_556_);
return v_res_558_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__10(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__8));
v___x_584_ = l_Lean_mkAtom(v___x_583_);
return v___x_584_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__11(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_585_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__10, &l_Lean_Elab_mkElabAttribute___auto__1___closed__10_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__10);
v___x_586_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_587_ = lean_array_push(v___x_586_, v___x_585_);
return v___x_587_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__16(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__15));
v___x_597_ = l_Lean_mkAtom(v___x_596_);
return v___x_597_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__17(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_598_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__16, &l_Lean_Elab_mkElabAttribute___auto__1___closed__16_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__16);
v___x_599_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_600_ = lean_array_push(v___x_599_, v___x_598_);
return v___x_600_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__18(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_601_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__17, &l_Lean_Elab_mkElabAttribute___auto__1___closed__17_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__17);
v___x_602_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__14));
v___x_603_ = lean_box(2);
v___x_604_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
lean_ctor_set(v___x_604_, 1, v___x_602_);
lean_ctor_set(v___x_604_, 2, v___x_601_);
return v___x_604_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__19(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_605_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__18, &l_Lean_Elab_mkElabAttribute___auto__1___closed__18_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__18);
v___x_606_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__11, &l_Lean_Elab_mkElabAttribute___auto__1___closed__11_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__11);
v___x_607_ = lean_array_push(v___x_606_, v___x_605_);
return v___x_607_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__20(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_608_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__19, &l_Lean_Elab_mkElabAttribute___auto__1___closed__19_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__19);
v___x_609_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__9));
v___x_610_ = lean_box(2);
v___x_611_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
lean_ctor_set(v___x_611_, 1, v___x_609_);
lean_ctor_set(v___x_611_, 2, v___x_608_);
return v___x_611_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__21(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_612_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__20, &l_Lean_Elab_mkElabAttribute___auto__1___closed__20_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__20);
v___x_613_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_614_ = lean_array_push(v___x_613_, v___x_612_);
return v___x_614_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__22(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_615_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__21, &l_Lean_Elab_mkElabAttribute___auto__1___closed__21_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__21);
v___x_616_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__7));
v___x_617_ = lean_box(2);
v___x_618_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___x_616_);
lean_ctor_set(v___x_618_, 2, v___x_615_);
return v___x_618_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__23(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__22, &l_Lean_Elab_mkElabAttribute___auto__1___closed__22_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__22);
v___x_620_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_621_ = lean_array_push(v___x_620_, v___x_619_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__24(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_622_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__23, &l_Lean_Elab_mkElabAttribute___auto__1___closed__23_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__23);
v___x_623_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__5));
v___x_624_ = lean_box(2);
v___x_625_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
lean_ctor_set(v___x_625_, 1, v___x_623_);
lean_ctor_set(v___x_625_, 2, v___x_622_);
return v___x_625_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__25(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__24, &l_Lean_Elab_mkElabAttribute___auto__1___closed__24_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__24);
v___x_627_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_628_ = lean_array_push(v___x_627_, v___x_626_);
return v___x_628_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__26(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_629_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__25, &l_Lean_Elab_mkElabAttribute___auto__1___closed__25_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__25);
v___x_630_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__2));
v___x_631_ = lean_box(2);
v___x_632_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v___x_630_);
lean_ctor_set(v___x_632_, 2, v___x_629_);
return v___x_632_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1(void){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__26, &l_Lean_Elab_mkElabAttribute___auto__1___closed__26_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__26);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__0(uint8_t v_builtin_634_, lean_object* v_declName_635_, lean_object* v_kind_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
if (v_builtin_634_ == 0)
{
lean_object* v___x_640_; lean_object* v___x_641_; 
lean_dec(v_declName_635_);
v___x_640_ = lean_box(0);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
else
{
lean_object* v___x_642_; 
v___x_642_ = l_Lean_declareBuiltinDocStringAndRanges(v_declName_635_, v___y_637_, v___y_638_);
return v___x_642_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__0___boxed(lean_object* v_builtin_643_, lean_object* v_declName_644_, lean_object* v_kind_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
uint8_t v_builtin_boxed_649_; lean_object* v_res_650_; 
v_builtin_boxed_649_ = lean_unbox(v_builtin_643_);
v_res_650_ = l_Lean_Elab_mkElabAttribute___redArg___lam__0(v_builtin_boxed_649_, v_declName_644_, v_kind_645_, v___y_646_, v___y_647_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec(v_kind_645_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___redArg(lean_object* v_t_651_, lean_object* v___y_652_){
_start:
{
lean_object* v___x_654_; lean_object* v_infoState_655_; uint8_t v_enabled_656_; 
v___x_654_ = lean_st_ref_get(v___y_652_);
v_infoState_655_ = lean_ctor_get(v___x_654_, 8);
lean_inc_ref(v_infoState_655_);
lean_dec(v___x_654_);
v_enabled_656_ = lean_ctor_get_uint8(v_infoState_655_, sizeof(void*)*3);
lean_dec_ref(v_infoState_655_);
if (v_enabled_656_ == 0)
{
lean_object* v___x_657_; lean_object* v___x_658_; 
lean_dec_ref(v_t_651_);
v___x_657_ = lean_box(0);
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
return v___x_658_;
}
else
{
lean_object* v___x_659_; lean_object* v_infoState_660_; lean_object* v_env_661_; lean_object* v_nextMacroScope_662_; lean_object* v_ngen_663_; lean_object* v_auxDeclNGen_664_; lean_object* v_traceState_665_; lean_object* v_cache_666_; lean_object* v_recordedDeps_667_; lean_object* v_messages_668_; lean_object* v_snapshotTasks_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_691_; 
v___x_659_ = lean_st_ref_take(v___y_652_);
v_infoState_660_ = lean_ctor_get(v___x_659_, 8);
v_env_661_ = lean_ctor_get(v___x_659_, 0);
v_nextMacroScope_662_ = lean_ctor_get(v___x_659_, 1);
v_ngen_663_ = lean_ctor_get(v___x_659_, 2);
v_auxDeclNGen_664_ = lean_ctor_get(v___x_659_, 3);
v_traceState_665_ = lean_ctor_get(v___x_659_, 4);
v_cache_666_ = lean_ctor_get(v___x_659_, 5);
v_recordedDeps_667_ = lean_ctor_get(v___x_659_, 6);
v_messages_668_ = lean_ctor_get(v___x_659_, 7);
v_snapshotTasks_669_ = lean_ctor_get(v___x_659_, 9);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_691_ == 0)
{
v___x_671_ = v___x_659_;
v_isShared_672_ = v_isSharedCheck_691_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_snapshotTasks_669_);
lean_inc(v_infoState_660_);
lean_inc(v_messages_668_);
lean_inc(v_recordedDeps_667_);
lean_inc(v_cache_666_);
lean_inc(v_traceState_665_);
lean_inc(v_auxDeclNGen_664_);
lean_inc(v_ngen_663_);
lean_inc(v_nextMacroScope_662_);
lean_inc(v_env_661_);
lean_dec(v___x_659_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_691_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
uint8_t v_enabled_673_; lean_object* v_assignment_674_; lean_object* v_lazyAssignment_675_; lean_object* v_trees_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_690_; 
v_enabled_673_ = lean_ctor_get_uint8(v_infoState_660_, sizeof(void*)*3);
v_assignment_674_ = lean_ctor_get(v_infoState_660_, 0);
v_lazyAssignment_675_ = lean_ctor_get(v_infoState_660_, 1);
v_trees_676_ = lean_ctor_get(v_infoState_660_, 2);
v_isSharedCheck_690_ = !lean_is_exclusive(v_infoState_660_);
if (v_isSharedCheck_690_ == 0)
{
v___x_678_ = v_infoState_660_;
v_isShared_679_ = v_isSharedCheck_690_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_trees_676_);
lean_inc(v_lazyAssignment_675_);
lean_inc(v_assignment_674_);
lean_dec(v_infoState_660_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_690_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_680_ = lean_box(0);
v___x_681_ = l_Lean_PersistentArray_push___redArg(v_trees_676_, v_t_651_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 2, v___x_681_);
v___x_683_ = v___x_678_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_assignment_674_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_lazyAssignment_675_);
lean_ctor_set(v_reuseFailAlloc_689_, 2, v___x_681_);
lean_ctor_set_uint8(v_reuseFailAlloc_689_, sizeof(void*)*3, v_enabled_673_);
v___x_683_ = v_reuseFailAlloc_689_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_685_; 
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 8, v___x_683_);
v___x_685_ = v___x_671_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_env_661_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_nextMacroScope_662_);
lean_ctor_set(v_reuseFailAlloc_688_, 2, v_ngen_663_);
lean_ctor_set(v_reuseFailAlloc_688_, 3, v_auxDeclNGen_664_);
lean_ctor_set(v_reuseFailAlloc_688_, 4, v_traceState_665_);
lean_ctor_set(v_reuseFailAlloc_688_, 5, v_cache_666_);
lean_ctor_set(v_reuseFailAlloc_688_, 6, v_recordedDeps_667_);
lean_ctor_set(v_reuseFailAlloc_688_, 7, v_messages_668_);
lean_ctor_set(v_reuseFailAlloc_688_, 8, v___x_683_);
lean_ctor_set(v_reuseFailAlloc_688_, 9, v_snapshotTasks_669_);
v___x_685_ = v_reuseFailAlloc_688_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_st_ref_put(v___y_652_, v___x_685_);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_680_);
return v___x_687_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___redArg___boxed(lean_object* v_t_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___redArg(v_t_692_, v___y_693_);
lean_dec(v___y_693_);
return v_res_695_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_unsigned_to_nat(32u);
v___x_697_ = lean_mk_empty_array_with_capacity(v___x_696_);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1(void){
_start:
{
size_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_699_ = ((size_t)5ULL);
v___x_700_ = lean_unsigned_to_nat(0u);
v___x_701_ = lean_unsigned_to_nat(32u);
v___x_702_ = lean_mk_empty_array_with_capacity(v___x_701_);
v___x_703_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0);
v___x_704_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_704_, 0, v___x_703_);
lean_ctor_set(v___x_704_, 1, v___x_702_);
lean_ctor_set(v___x_704_, 2, v___x_700_);
lean_ctor_set(v___x_704_, 3, v___x_700_);
lean_ctor_set_usize(v___x_704_, 4, v___x_699_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5(lean_object* v_t_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v___x_709_; lean_object* v_infoState_710_; uint8_t v_enabled_711_; 
v___x_709_ = lean_st_ref_get(v___y_707_);
v_infoState_710_ = lean_ctor_get(v___x_709_, 8);
lean_inc_ref(v_infoState_710_);
lean_dec(v___x_709_);
v_enabled_711_ = lean_ctor_get_uint8(v_infoState_710_, sizeof(void*)*3);
lean_dec_ref(v_infoState_710_);
if (v_enabled_711_ == 0)
{
lean_object* v___x_712_; lean_object* v___x_713_; 
lean_dec_ref(v_t_705_);
v___x_712_ = lean_box(0);
v___x_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
return v___x_713_;
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_714_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1);
v___x_715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_715_, 0, v_t_705_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
v___x_716_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___redArg(v___x_715_, v___y_707_);
return v___x_716_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___boxed(lean_object* v_t_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5(v_t_717_, v___y_718_, v___y_719_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
return v_res_721_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1(void){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__0));
v___x_724_ = l_Lean_stringToMessageData(v___x_723_);
return v___x_724_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__3(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__2));
v___x_727_ = l_Lean_stringToMessageData(v___x_726_);
return v___x_727_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__5(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__4));
v___x_730_ = l_Lean_stringToMessageData(v___x_729_);
return v___x_730_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__7(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__6));
v___x_733_ = l_Lean_stringToMessageData(v___x_732_);
return v___x_733_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__9(void){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__8));
v___x_736_ = l_Lean_stringToMessageData(v___x_735_);
return v___x_736_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__11(void){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__10));
v___x_739_ = l_Lean_stringToMessageData(v___x_738_);
return v___x_739_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__13(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__12));
v___x_742_ = l_Lean_stringToMessageData(v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(lean_object* v_msg_743_, lean_object* v_declHint_744_, lean_object* v___y_745_){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v_env_749_; uint8_t v___x_750_; 
v___x_747_ = lean_box(0);
v___x_748_ = lean_st_ref_get(v___y_745_);
v_env_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc_ref(v_env_749_);
lean_dec(v___x_748_);
v___x_750_ = l_Lean_Name_isAnonymous(v_declHint_744_);
if (v___x_750_ == 0)
{
uint8_t v_isExporting_751_; 
v_isExporting_751_ = lean_ctor_get_uint8(v_env_749_, sizeof(void*)*13);
if (v_isExporting_751_ == 0)
{
lean_object* v___x_752_; 
lean_dec_ref(v_env_749_);
lean_dec(v_declHint_744_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v_msg_743_);
return v___x_752_;
}
else
{
lean_object* v___x_753_; uint8_t v___x_754_; 
lean_inc_ref(v_env_749_);
v___x_753_ = l_Lean_Environment_setExporting(v_env_749_, v___x_750_);
lean_inc(v_declHint_744_);
lean_inc_ref(v___x_753_);
v___x_754_ = l_Lean_Environment_contains(v___x_753_, v_declHint_744_, v_isExporting_751_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; 
lean_dec_ref(v___x_753_);
lean_dec_ref(v_env_749_);
lean_dec(v_declHint_744_);
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v_msg_743_);
return v___x_755_;
}
else
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v_c_761_; lean_object* v___x_762_; 
v___x_756_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2);
v___x_757_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5);
v___x_758_ = l_Lean_Options_empty;
lean_inc_ref(v___x_753_);
v___x_759_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_759_, 0, v___x_753_);
lean_ctor_set(v___x_759_, 1, v___x_756_);
lean_ctor_set(v___x_759_, 2, v___x_757_);
lean_ctor_set(v___x_759_, 3, v___x_758_);
lean_inc(v_declHint_744_);
v___x_760_ = l_Lean_MessageData_ofConstName(v_declHint_744_, v___x_750_);
v_c_761_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_761_, 0, v___x_759_);
lean_ctor_set(v_c_761_, 1, v___x_760_);
v___x_762_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_753_, v_declHint_744_);
lean_dec_ref(v___x_753_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
lean_dec_ref(v_env_749_);
lean_dec(v_declHint_744_);
v___x_763_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1);
v___x_764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
lean_ctor_set(v___x_764_, 1, v_c_761_);
v___x_765_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__3);
v___x_766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = l_Lean_MessageData_note(v___x_766_);
v___x_768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_768_, 0, v_msg_743_);
lean_ctor_set(v___x_768_, 1, v___x_767_);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
else
{
lean_object* v_val_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_804_; 
v_val_770_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_804_ == 0)
{
v___x_772_ = v___x_762_;
v_isShared_773_ = v_isSharedCheck_804_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_val_770_);
lean_dec(v___x_762_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_804_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v_moduleNames_775_; lean_object* v_mod_776_; uint8_t v___x_777_; 
v___x_774_ = l_Lean_Environment_header(v_env_749_);
lean_dec_ref(v_env_749_);
v_moduleNames_775_ = lean_ctor_get(v___x_774_, 4);
lean_inc_ref(v_moduleNames_775_);
lean_dec_ref(v___x_774_);
v_mod_776_ = lean_array_get(v___x_747_, v_moduleNames_775_, v_val_770_);
lean_dec(v_val_770_);
lean_dec_ref(v_moduleNames_775_);
v___x_777_ = l_Lean_isPrivateName(v_declHint_744_);
lean_dec(v_declHint_744_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_778_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__5);
v___x_779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v_c_761_);
v___x_780_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__7);
v___x_781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_779_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = l_Lean_MessageData_ofName(v_mod_776_);
v___x_783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__9);
v___x_785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_783_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = l_Lean_MessageData_note(v___x_785_);
v___x_787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_787_, 0, v_msg_743_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
if (v_isShared_773_ == 0)
{
lean_ctor_set_tag(v___x_772_, 0);
lean_ctor_set(v___x_772_, 0, v___x_787_);
v___x_789_ = v___x_772_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
else
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_791_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__1);
v___x_792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
lean_ctor_set(v___x_792_, 1, v_c_761_);
v___x_793_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__11);
v___x_794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_794_, 0, v___x_792_);
lean_ctor_set(v___x_794_, 1, v___x_793_);
v___x_795_ = l_Lean_MessageData_ofName(v_mod_776_);
v___x_796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_794_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
v___x_797_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___closed__13);
v___x_798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_796_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = l_Lean_MessageData_note(v___x_798_);
v___x_800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_800_, 0, v_msg_743_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
if (v_isShared_773_ == 0)
{
lean_ctor_set_tag(v___x_772_, 0);
lean_ctor_set(v___x_772_, 0, v___x_800_);
v___x_802_ = v___x_772_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_805_; 
lean_dec_ref(v_env_749_);
lean_dec(v_declHint_744_);
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v_msg_743_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg___boxed(lean_object* v_msg_806_, lean_object* v_declHint_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(v_msg_806_, v_declHint_807_, v___y_808_);
lean_dec(v___y_808_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17(lean_object* v_msg_811_, lean_object* v_declHint_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v___x_816_; lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_826_; 
v___x_816_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(v_msg_811_, v_declHint_812_, v___y_814_);
v_a_817_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_826_ == 0)
{
v___x_819_ = v___x_816_;
v_isShared_820_ = v_isSharedCheck_826_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_816_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_826_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_824_; 
v___x_821_ = l_Lean_unknownIdentifierMessageTag;
v___x_822_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set(v___x_822_, 1, v_a_817_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_822_);
v___x_824_ = v___x_819_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17___boxed(lean_object* v_msg_827_, lean_object* v_declHint_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17(v_msg_827_, v_declHint_828_, v___y_829_, v___y_830_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___redArg(lean_object* v_ref_833_, lean_object* v_msg_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_toCold_838_; lean_object* v_currRecDepth_839_; lean_object* v_ref_840_; uint16_t v_optionFlags_841_; uint8_t v_suppressElabErrors_842_; uint8_t v_checkDeprecated_843_; uint8_t v_isRecordingDeps_844_; lean_object* v_ref_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_toCold_838_ = lean_ctor_get(v___y_835_, 0);
v_currRecDepth_839_ = lean_ctor_get(v___y_835_, 1);
v_ref_840_ = lean_ctor_get(v___y_835_, 2);
v_optionFlags_841_ = lean_ctor_get_uint16(v___y_835_, sizeof(void*)*3);
v_suppressElabErrors_842_ = lean_ctor_get_uint8(v___y_835_, sizeof(void*)*3 + 2);
v_checkDeprecated_843_ = lean_ctor_get_uint8(v___y_835_, sizeof(void*)*3 + 3);
v_isRecordingDeps_844_ = lean_ctor_get_uint8(v___y_835_, sizeof(void*)*3 + 4);
v_ref_845_ = l_Lean_replaceRef(v_ref_833_, v_ref_840_);
lean_inc(v_currRecDepth_839_);
lean_inc_ref(v_toCold_838_);
v___x_846_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_846_, 0, v_toCold_838_);
lean_ctor_set(v___x_846_, 1, v_currRecDepth_839_);
lean_ctor_set(v___x_846_, 2, v_ref_845_);
lean_ctor_set_uint16(v___x_846_, sizeof(void*)*3, v_optionFlags_841_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*3 + 2, v_suppressElabErrors_842_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*3 + 3, v_checkDeprecated_843_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*3 + 4, v_isRecordingDeps_844_);
v___x_847_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v_msg_834_, v___x_846_, v___y_836_);
lean_dec_ref_known(v___x_846_, 3);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___redArg___boxed(lean_object* v_ref_848_, lean_object* v_msg_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___redArg(v_ref_848_, v_msg_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v_ref_848_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___redArg(lean_object* v_ref_854_, lean_object* v_msg_855_, lean_object* v_declHint_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; lean_object* v_a_861_; lean_object* v___x_862_; 
v___x_860_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17(v_msg_855_, v_declHint_856_, v___y_857_, v___y_858_);
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref(v___x_860_);
v___x_862_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___redArg(v_ref_854_, v_a_861_, v___y_857_, v___y_858_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___redArg___boxed(lean_object* v_ref_863_, lean_object* v_msg_864_, lean_object* v_declHint_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___redArg(v_ref_863_, v_msg_864_, v_declHint_865_, v___y_866_, v___y_867_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v_ref_863_);
return v_res_869_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__1(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__0));
v___x_872_ = l_Lean_stringToMessageData(v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg(lean_object* v_ref_873_, lean_object* v_constName_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_878_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___closed__1);
v___x_879_ = 0;
lean_inc(v_constName_874_);
v___x_880_ = l_Lean_MessageData_ofConstName(v_constName_874_, v___x_879_);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_878_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = lean_obj_once(&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3, &l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3_once, _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_881_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___redArg(v_ref_873_, v___x_883_, v_constName_874_, v___y_875_, v___y_876_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg___boxed(lean_object* v_ref_885_, lean_object* v_constName_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg(v_ref_885_, v_constName_886_, v___y_887_, v___y_888_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v_ref_885_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___redArg(lean_object* v_constName_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v_ref_895_; lean_object* v___x_896_; 
v_ref_895_ = lean_ctor_get(v___y_892_, 2);
v___x_896_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg(v_ref_895_, v_constName_891_, v___y_892_, v___y_893_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___redArg___boxed(lean_object* v_constName_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___redArg(v_constName_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8(lean_object* v_constName_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v___x_906_; lean_object* v_env_907_; uint8_t v___x_908_; lean_object* v___x_909_; 
v___x_906_ = lean_st_ref_get(v___y_904_);
v_env_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc_ref(v_env_907_);
lean_dec(v___x_906_);
v___x_908_ = 0;
lean_inc(v_constName_902_);
v___x_909_ = l_Lean_Environment_findConstVal_x3f(v_env_907_, v_constName_902_, v___x_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v___x_910_; 
v___x_910_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___redArg(v_constName_902_, v___y_903_, v___y_904_);
return v___x_910_;
}
else
{
lean_object* v_val_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec(v_constName_902_);
v_val_911_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_909_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_val_911_);
lean_dec(v___x_909_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set_tag(v___x_913_, 0);
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_val_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8___boxed(lean_object* v_constName_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8(v_constName_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9(lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
if (lean_obj_tag(v_a_924_) == 0)
{
lean_object* v___x_926_; 
v___x_926_ = l_List_reverse___redArg(v_a_925_);
return v___x_926_;
}
else
{
lean_object* v_head_927_; lean_object* v_tail_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_937_; 
v_head_927_ = lean_ctor_get(v_a_924_, 0);
v_tail_928_ = lean_ctor_get(v_a_924_, 1);
v_isSharedCheck_937_ = !lean_is_exclusive(v_a_924_);
if (v_isSharedCheck_937_ == 0)
{
v___x_930_ = v_a_924_;
v_isShared_931_ = v_isSharedCheck_937_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_tail_928_);
lean_inc(v_head_927_);
lean_dec(v_a_924_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_937_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_932_ = l_Lean_mkLevelParam(v_head_927_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v_a_925_);
lean_ctor_set(v___x_930_, 0, v___x_932_);
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_a_925_);
v___x_934_ = v_reuseFailAlloc_936_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
v_a_924_ = v_tail_928_;
v_a_925_ = v___x_934_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4(lean_object* v_constName_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; 
lean_inc(v_constName_938_);
v___x_942_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8(v_constName_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_954_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_954_ == 0)
{
v___x_945_ = v___x_942_;
v_isShared_946_ = v_isSharedCheck_954_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_942_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_954_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v_levelParams_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_952_; 
v_levelParams_947_ = lean_ctor_get(v_a_943_, 1);
lean_inc(v_levelParams_947_);
lean_dec(v_a_943_);
v___x_948_ = lean_box(0);
v___x_949_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9(v_levelParams_947_, v___x_948_);
v___x_950_ = l_Lean_mkConst(v_constName_938_, v___x_949_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_950_);
v___x_952_ = v___x_945_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec(v_constName_938_);
v_a_955_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_942_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_942_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4___boxed(lean_object* v_constName_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4(v_constName_963_, v___y_964_, v___y_965_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1(lean_object* v_stx_968_, lean_object* v_n_969_, lean_object* v_expectedType_x3f_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4(v_n_969_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = lean_box(0);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
lean_ctor_set(v___x_977_, 1, v_stx_968_);
v___x_978_ = l_Lean_LocalContext_empty;
v___x_979_ = 0;
v___x_980_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_980_, 0, v___x_977_);
lean_ctor_set(v___x_980_, 1, v___x_978_);
lean_ctor_set(v___x_980_, 2, v_expectedType_x3f_970_);
lean_ctor_set(v___x_980_, 3, v_a_975_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*4, v___x_979_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*4 + 1, v___x_979_);
v___x_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
v___x_982_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5(v___x_981_, v___y_971_, v___y_972_);
return v___x_982_;
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_expectedType_x3f_970_);
lean_dec(v_stx_968_);
v_a_983_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_974_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_974_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1___boxed(lean_object* v_stx_991_, lean_object* v_n_992_, lean_object* v_expectedType_x3f_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1(v_stx_991_, v_n_992_, v_expectedType_x3f_993_, v___y_994_, v___y_995_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___lam__0(lean_object* v_addEntryFn_998_, lean_object* v_entry_999_, lean_object* v_s_1000_){
_start:
{
lean_object* v_importedEntries_1001_; lean_object* v_state_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1010_; 
v_importedEntries_1001_ = lean_ctor_get(v_s_1000_, 0);
v_state_1002_ = lean_ctor_get(v_s_1000_, 1);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1004_ = v_s_1000_;
v_isShared_1005_ = v_isSharedCheck_1010_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_state_1002_);
lean_inc(v_importedEntries_1001_);
lean_dec(v_s_1000_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1010_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v_state_1006_; lean_object* v___x_1008_; 
v_state_1006_ = lean_apply_2(v_addEntryFn_998_, v_state_1002_, v_entry_999_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 1, v_state_1006_);
v___x_1008_ = v___x_1004_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_importedEntries_1001_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_state_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(lean_object* v_keys_1011_, lean_object* v_i_1012_, lean_object* v_k_1013_){
_start:
{
lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = lean_array_get_size(v_keys_1011_);
v___x_1015_ = lean_nat_dec_lt(v_i_1012_, v___x_1014_);
if (v___x_1015_ == 0)
{
lean_dec(v_i_1012_);
return v___x_1015_;
}
else
{
lean_object* v_k_x27_1016_; uint8_t v___x_1017_; 
v_k_x27_1016_ = lean_array_fget_borrowed(v_keys_1011_, v_i_1012_);
v___x_1017_ = l_Lean_instBEqExtraModUse_beq(v_k_1013_, v_k_x27_1016_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_unsigned_to_nat(1u);
v___x_1019_ = lean_nat_add(v_i_1012_, v___x_1018_);
lean_dec(v_i_1012_);
v_i_1012_ = v___x_1019_;
goto _start;
}
else
{
lean_dec(v_i_1012_);
return v___x_1015_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg___boxed(lean_object* v_keys_1021_, lean_object* v_i_1022_, lean_object* v_k_1023_){
_start:
{
uint8_t v_res_1024_; lean_object* v_r_1025_; 
v_res_1024_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(v_keys_1021_, v_i_1022_, v_k_1023_);
lean_dec_ref(v_k_1023_);
lean_dec_ref(v_keys_1021_);
v_r_1025_ = lean_box(v_res_1024_);
return v_r_1025_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_1026_, size_t v_x_1027_, lean_object* v_x_1028_){
_start:
{
if (lean_obj_tag(v_x_1026_) == 0)
{
lean_object* v_es_1029_; lean_object* v___x_1030_; size_t v___x_1031_; size_t v___x_1032_; lean_object* v_j_1033_; lean_object* v___x_1034_; 
v_es_1029_ = lean_ctor_get(v_x_1026_, 0);
v___x_1030_ = lean_box(2);
v___x_1031_ = ((size_t)31ULL);
v___x_1032_ = lean_usize_land(v_x_1027_, v___x_1031_);
v_j_1033_ = lean_usize_to_nat(v___x_1032_);
v___x_1034_ = lean_array_get_borrowed(v___x_1030_, v_es_1029_, v_j_1033_);
lean_dec(v_j_1033_);
switch(lean_obj_tag(v___x_1034_))
{
case 0:
{
lean_object* v_key_1035_; uint8_t v___x_1036_; 
v_key_1035_ = lean_ctor_get(v___x_1034_, 0);
v___x_1036_ = l_Lean_instBEqExtraModUse_beq(v_x_1028_, v_key_1035_);
return v___x_1036_;
}
case 1:
{
lean_object* v_node_1037_; size_t v___x_1038_; size_t v___x_1039_; 
v_node_1037_ = lean_ctor_get(v___x_1034_, 0);
v___x_1038_ = ((size_t)5ULL);
v___x_1039_ = lean_usize_shift_right(v_x_1027_, v___x_1038_);
v_x_1026_ = v_node_1037_;
v_x_1027_ = v___x_1039_;
goto _start;
}
default: 
{
uint8_t v___x_1041_; 
v___x_1041_ = 0;
return v___x_1041_;
}
}
}
else
{
lean_object* v_ks_1042_; lean_object* v___x_1043_; uint8_t v___x_1044_; 
v_ks_1042_ = lean_ctor_get(v_x_1026_, 0);
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(v_ks_1042_, v___x_1043_, v_x_1028_);
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_1045_, lean_object* v_x_1046_, lean_object* v_x_1047_){
_start:
{
size_t v_x_6653__boxed_1048_; uint8_t v_res_1049_; lean_object* v_r_1050_; 
v_x_6653__boxed_1048_ = lean_unbox_usize(v_x_1046_);
lean_dec(v_x_1046_);
v_res_1049_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1045_, v_x_6653__boxed_1048_, v_x_1047_);
lean_dec_ref(v_x_1047_);
lean_dec_ref(v_x_1045_);
v_r_1050_ = lean_box(v_res_1049_);
return v_r_1050_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1051_, lean_object* v_x_1052_){
_start:
{
uint64_t v___x_1053_; size_t v___x_1054_; uint8_t v___x_1055_; 
v___x_1053_ = l_Lean_instHashableExtraModUse_hash(v_x_1052_);
v___x_1054_ = lean_uint64_to_usize(v___x_1053_);
v___x_1055_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1051_, v___x_1054_, v_x_1052_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1056_, lean_object* v_x_1057_){
_start:
{
uint8_t v_res_1058_; lean_object* v_r_1059_; 
v_res_1058_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(v_x_1056_, v_x_1057_);
lean_dec_ref(v_x_1057_);
lean_dec_ref(v_x_1056_);
v_r_1059_ = lean_box(v_res_1058_);
return v_r_1059_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1060_; double v___x_1061_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = lean_float_of_nat(v___x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2(lean_object* v_cls_1065_, lean_object* v_msg_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_ref_1070_; lean_object* v___x_1071_; lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1117_; 
v_ref_1070_ = lean_ctor_get(v___y_1067_, 2);
v___x_1071_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(v_msg_1066_, v___y_1067_, v___y_1068_);
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1074_ = v___x_1071_;
v_isShared_1075_ = v_isSharedCheck_1117_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1071_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1117_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1076_; lean_object* v_traceState_1077_; lean_object* v_env_1078_; lean_object* v_nextMacroScope_1079_; lean_object* v_ngen_1080_; lean_object* v_auxDeclNGen_1081_; lean_object* v_cache_1082_; lean_object* v_recordedDeps_1083_; lean_object* v_messages_1084_; lean_object* v_infoState_1085_; lean_object* v_snapshotTasks_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1116_; 
v___x_1076_ = lean_st_ref_take(v___y_1068_);
v_traceState_1077_ = lean_ctor_get(v___x_1076_, 4);
v_env_1078_ = lean_ctor_get(v___x_1076_, 0);
v_nextMacroScope_1079_ = lean_ctor_get(v___x_1076_, 1);
v_ngen_1080_ = lean_ctor_get(v___x_1076_, 2);
v_auxDeclNGen_1081_ = lean_ctor_get(v___x_1076_, 3);
v_cache_1082_ = lean_ctor_get(v___x_1076_, 5);
v_recordedDeps_1083_ = lean_ctor_get(v___x_1076_, 6);
v_messages_1084_ = lean_ctor_get(v___x_1076_, 7);
v_infoState_1085_ = lean_ctor_get(v___x_1076_, 8);
v_snapshotTasks_1086_ = lean_ctor_get(v___x_1076_, 9);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1088_ = v___x_1076_;
v_isShared_1089_ = v_isSharedCheck_1116_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_snapshotTasks_1086_);
lean_inc(v_infoState_1085_);
lean_inc(v_messages_1084_);
lean_inc(v_recordedDeps_1083_);
lean_inc(v_cache_1082_);
lean_inc(v_traceState_1077_);
lean_inc(v_auxDeclNGen_1081_);
lean_inc(v_ngen_1080_);
lean_inc(v_nextMacroScope_1079_);
lean_inc(v_env_1078_);
lean_dec(v___x_1076_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1116_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
uint64_t v_tid_1090_; lean_object* v_traces_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1115_; 
v_tid_1090_ = lean_ctor_get_uint64(v_traceState_1077_, sizeof(void*)*1);
v_traces_1091_ = lean_ctor_get(v_traceState_1077_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_traceState_1077_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1093_ = v_traceState_1077_;
v_isShared_1094_ = v_isSharedCheck_1115_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_traces_1091_);
lean_dec(v_traceState_1077_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1115_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; double v___x_1097_; uint8_t v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1095_ = lean_box(0);
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__0);
v___x_1098_ = 0;
v___x_1099_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__1));
v___x_1100_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1100_, 0, v_cls_1065_);
lean_ctor_set(v___x_1100_, 1, v___x_1096_);
lean_ctor_set(v___x_1100_, 2, v___x_1099_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*3, v___x_1097_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*3 + 8, v___x_1097_);
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*3 + 16, v___x_1098_);
v___x_1101_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__2));
v___x_1102_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1100_);
lean_ctor_set(v___x_1102_, 1, v_a_1072_);
lean_ctor_set(v___x_1102_, 2, v___x_1101_);
lean_inc(v_ref_1070_);
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v_ref_1070_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = l_Lean_PersistentArray_push___redArg(v_traces_1091_, v___x_1103_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1104_);
v___x_1106_ = v___x_1093_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1104_);
lean_ctor_set_uint64(v_reuseFailAlloc_1114_, sizeof(void*)*1, v_tid_1090_);
v___x_1106_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
lean_object* v___x_1108_; 
if (v_isShared_1089_ == 0)
{
lean_ctor_set(v___x_1088_, 4, v___x_1106_);
v___x_1108_ = v___x_1088_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_env_1078_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_nextMacroScope_1079_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v_ngen_1080_);
lean_ctor_set(v_reuseFailAlloc_1113_, 3, v_auxDeclNGen_1081_);
lean_ctor_set(v_reuseFailAlloc_1113_, 4, v___x_1106_);
lean_ctor_set(v_reuseFailAlloc_1113_, 5, v_cache_1082_);
lean_ctor_set(v_reuseFailAlloc_1113_, 6, v_recordedDeps_1083_);
lean_ctor_set(v_reuseFailAlloc_1113_, 7, v_messages_1084_);
lean_ctor_set(v_reuseFailAlloc_1113_, 8, v_infoState_1085_);
lean_ctor_set(v_reuseFailAlloc_1113_, 9, v_snapshotTasks_1086_);
v___x_1108_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1109_; lean_object* v___x_1111_; 
v___x_1109_ = lean_st_ref_put(v___y_1068_, v___x_1108_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 0, v___x_1095_);
v___x_1111_ = v___x_1074_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1095_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___boxed(lean_object* v_cls_1118_, lean_object* v_msg_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2(v_cls_1118_, v_msg_1119_, v___y_1120_, v___y_1121_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
return v_res_1123_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0);
v___x_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
return v___x_1125_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0);
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
return v___x_1127_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1128_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1133_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__5));
v___x_1134_ = l_Lean_stringToMessageData(v___x_1133_);
return v___x_1134_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__7));
v___x_1137_ = l_Lean_stringToMessageData(v___x_1136_);
return v___x_1137_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___closed__1));
v___x_1139_ = l_Lean_stringToMessageData(v___x_1138_);
return v___x_1139_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v_cls_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v_cls_1143_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4));
v___x_1144_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11));
v___x_1145_ = l_Lean_Name_append(v___x_1144_, v_cls_1143_);
return v___x_1145_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__13));
v___x_1148_ = l_Lean_stringToMessageData(v___x_1147_);
return v___x_1148_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__15));
v___x_1151_ = l_Lean_stringToMessageData(v___x_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(lean_object* v_mod_1156_, uint8_t v_isMeta_1157_, lean_object* v_hint_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v_env_1180_; uint8_t v_isExporting_1181_; lean_object* v_entry_1182_; lean_object* v___y_1184_; lean_object* v___x_1207_; lean_object* v_env_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1178_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2);
v___x_1179_ = lean_st_ref_get(v___y_1160_);
v_env_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc_ref(v_env_1180_);
lean_dec(v___x_1179_);
v_isExporting_1181_ = lean_ctor_get_uint8(v_env_1180_, sizeof(void*)*13);
lean_dec_ref(v_env_1180_);
lean_inc(v_mod_1156_);
v_entry_1182_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1182_, 0, v_mod_1156_);
lean_ctor_set_uint8(v_entry_1182_, sizeof(void*)*1, v_isExporting_1181_);
lean_ctor_set_uint8(v_entry_1182_, sizeof(void*)*1 + 1, v_isMeta_1157_);
v___x_1207_ = lean_st_ref_get(v___y_1160_);
v_env_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc_ref(v_env_1208_);
lean_dec(v___x_1207_);
v___x_1209_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1210_ = lean_box(1);
v___x_1211_ = lean_box(0);
v___x_1212_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1178_, v___x_1209_, v_env_1208_, v___x_1210_, v___x_1211_);
v___x_1213_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(v___x_1212_, v_entry_1182_);
lean_dec(v___x_1212_);
if (v___x_1213_ == 0)
{
lean_object* v_toCold_1214_; lean_object* v_options_1215_; uint8_t v_hasTrace_1216_; 
v_toCold_1214_ = lean_ctor_get(v___y_1159_, 0);
v_options_1215_ = lean_ctor_get(v_toCold_1214_, 2);
v_hasTrace_1216_ = lean_ctor_get_uint8(v_options_1215_, sizeof(void*)*1);
if (v_hasTrace_1216_ == 0)
{
lean_dec(v_hint_1158_);
lean_dec(v_mod_1156_);
v___y_1184_ = v___y_1160_;
goto v___jp_1183_;
}
else
{
lean_object* v_inheritedTraceOptions_1217_; lean_object* v_cls_1218_; lean_object* v___y_1220_; lean_object* v___y_1221_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v_inheritedTraceOptions_1217_ = lean_ctor_get(v_toCold_1214_, 11);
v_cls_1218_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4));
v___x_1238_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12);
v___x_1239_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1217_, v_options_1215_, v___x_1238_);
if (v___x_1239_ == 0)
{
lean_dec(v_hint_1158_);
lean_dec(v_mod_1156_);
v___y_1184_ = v___y_1160_;
goto v___jp_1183_;
}
else
{
lean_object* v___x_1240_; lean_object* v___y_1242_; 
v___x_1240_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14);
if (v_isExporting_1181_ == 0)
{
lean_object* v___x_1249_; 
v___x_1249_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__19));
v___y_1242_ = v___x_1249_;
goto v___jp_1241_;
}
else
{
lean_object* v___x_1250_; 
v___x_1250_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__20));
v___y_1242_ = v___x_1250_;
goto v___jp_1241_;
}
v___jp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
lean_inc_ref(v___y_1242_);
v___x_1243_ = l_Lean_stringToMessageData(v___y_1242_);
v___x_1244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1240_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___x_1245_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16);
v___x_1246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
if (v_isMeta_1157_ == 0)
{
lean_object* v___x_1247_; 
v___x_1247_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__17));
v___y_1225_ = v___x_1246_;
v___y_1226_ = v___x_1247_;
goto v___jp_1224_;
}
else
{
lean_object* v___x_1248_; 
v___x_1248_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__18));
v___y_1225_ = v___x_1246_;
v___y_1226_ = v___x_1248_;
goto v___jp_1224_;
}
}
}
v___jp_1219_:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___y_1220_);
lean_ctor_set(v___x_1222_, 1, v___y_1221_);
v___x_1223_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2(v_cls_1218_, v___x_1222_, v___y_1159_, v___y_1160_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_dec_ref_known(v___x_1223_, 1);
v___y_1184_ = v___y_1160_;
goto v___jp_1183_;
}
else
{
lean_dec_ref_known(v_entry_1182_, 1);
return v___x_1223_;
}
}
v___jp_1224_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; 
lean_inc_ref(v___y_1226_);
v___x_1227_ = l_Lean_stringToMessageData(v___y_1226_);
v___x_1228_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___y_1225_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6);
v___x_1230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1228_);
lean_ctor_set(v___x_1230_, 1, v___x_1229_);
v___x_1231_ = l_Lean_MessageData_ofName(v_mod_1156_);
v___x_1232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1230_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
v___x_1233_ = l_Lean_Name_isAnonymous(v_hint_1158_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1234_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8);
v___x_1235_ = l_Lean_MessageData_ofName(v_hint_1158_);
v___x_1236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1234_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v___y_1220_ = v___x_1232_;
v___y_1221_ = v___x_1236_;
goto v___jp_1219_;
}
else
{
lean_object* v___x_1237_; 
lean_dec(v_hint_1158_);
v___x_1237_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9);
v___y_1220_ = v___x_1232_;
v___y_1221_ = v___x_1237_;
goto v___jp_1219_;
}
}
}
}
else
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
lean_dec_ref_known(v_entry_1182_, 1);
lean_dec(v_hint_1158_);
lean_dec(v_mod_1156_);
v___x_1251_ = lean_box(0);
v___x_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
return v___x_1252_;
}
v___jp_1162_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1174_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1);
v___x_1175_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1175_, 0, v___y_1173_);
lean_ctor_set(v___x_1175_, 1, v___y_1166_);
lean_ctor_set(v___x_1175_, 2, v___y_1168_);
lean_ctor_set(v___x_1175_, 3, v___y_1171_);
lean_ctor_set(v___x_1175_, 4, v___y_1172_);
lean_ctor_set(v___x_1175_, 5, v___x_1174_);
lean_ctor_set(v___x_1175_, 6, v___y_1165_);
lean_ctor_set(v___x_1175_, 7, v___y_1164_);
lean_ctor_set(v___x_1175_, 8, v___y_1167_);
lean_ctor_set(v___x_1175_, 9, v___y_1170_);
v___x_1176_ = lean_st_ref_put(v___y_1163_, v___x_1175_);
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___y_1169_);
return v___x_1177_;
}
v___jp_1183_:
{
lean_object* v___x_1185_; lean_object* v_env_1186_; lean_object* v_nextMacroScope_1187_; lean_object* v_ngen_1188_; lean_object* v_auxDeclNGen_1189_; lean_object* v_traceState_1190_; lean_object* v_recordedDeps_1191_; lean_object* v_messages_1192_; lean_object* v_infoState_1193_; lean_object* v_snapshotTasks_1194_; lean_object* v___x_1195_; lean_object* v_toEnvExtension_1196_; lean_object* v_addEntryFn_1197_; lean_object* v_asyncMode_1198_; uint8_t v_logWrites_1199_; lean_object* v___x_1200_; lean_object* v___f_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; 
v___x_1185_ = lean_st_ref_take(v___y_1184_);
v_env_1186_ = lean_ctor_get(v___x_1185_, 0);
lean_inc_ref(v_env_1186_);
v_nextMacroScope_1187_ = lean_ctor_get(v___x_1185_, 1);
lean_inc(v_nextMacroScope_1187_);
v_ngen_1188_ = lean_ctor_get(v___x_1185_, 2);
lean_inc_ref(v_ngen_1188_);
v_auxDeclNGen_1189_ = lean_ctor_get(v___x_1185_, 3);
lean_inc_ref(v_auxDeclNGen_1189_);
v_traceState_1190_ = lean_ctor_get(v___x_1185_, 4);
lean_inc_ref(v_traceState_1190_);
v_recordedDeps_1191_ = lean_ctor_get(v___x_1185_, 6);
lean_inc_ref(v_recordedDeps_1191_);
v_messages_1192_ = lean_ctor_get(v___x_1185_, 7);
lean_inc_ref(v_messages_1192_);
v_infoState_1193_ = lean_ctor_get(v___x_1185_, 8);
lean_inc_ref(v_infoState_1193_);
v_snapshotTasks_1194_ = lean_ctor_get(v___x_1185_, 9);
lean_inc_ref(v_snapshotTasks_1194_);
lean_dec(v___x_1185_);
v___x_1195_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_1196_ = lean_ctor_get(v___x_1195_, 0);
v_addEntryFn_1197_ = lean_ctor_get(v___x_1195_, 3);
v_asyncMode_1198_ = lean_ctor_get(v_toEnvExtension_1196_, 2);
v_logWrites_1199_ = lean_ctor_get_uint8(v_toEnvExtension_1196_, sizeof(void*)*6);
v___x_1200_ = lean_box(0);
lean_inc(v_addEntryFn_1197_);
v___f_1201_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_1201_, 0, v_addEntryFn_1197_);
lean_closure_set(v___f_1201_, 1, v_entry_1182_);
v___x_1202_ = lean_box(0);
v___x_1203_ = 1;
if (v_logWrites_1199_ == 0)
{
lean_object* v___x_1204_; 
lean_inc_ref(v_toEnvExtension_1196_);
v___x_1204_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1196_, v_env_1186_, v___f_1201_, v_asyncMode_1198_, v___x_1202_, v___x_1203_);
v___y_1163_ = v___y_1184_;
v___y_1164_ = v_messages_1192_;
v___y_1165_ = v_recordedDeps_1191_;
v___y_1166_ = v_nextMacroScope_1187_;
v___y_1167_ = v_infoState_1193_;
v___y_1168_ = v_ngen_1188_;
v___y_1169_ = v___x_1200_;
v___y_1170_ = v_snapshotTasks_1194_;
v___y_1171_ = v_auxDeclNGen_1189_;
v___y_1172_ = v_traceState_1190_;
v___y_1173_ = v___x_1204_;
goto v___jp_1162_;
}
else
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_inc_ref_n(v_toEnvExtension_1196_, 2);
v___x_1205_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1196_, v_env_1186_);
lean_dec_ref(v_env_1186_);
v___x_1206_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1196_, v___x_1205_, v___f_1201_, v_asyncMode_1198_, v___x_1202_, v___x_1203_);
v___y_1163_ = v___y_1184_;
v___y_1164_ = v_messages_1192_;
v___y_1165_ = v_recordedDeps_1191_;
v___y_1166_ = v_nextMacroScope_1187_;
v___y_1167_ = v_infoState_1193_;
v___y_1168_ = v_ngen_1188_;
v___y_1169_ = v___x_1200_;
v___y_1170_ = v_snapshotTasks_1194_;
v___y_1171_ = v_auxDeclNGen_1189_;
v___y_1172_ = v_traceState_1190_;
v___y_1173_ = v___x_1206_;
goto v___jp_1162_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___boxed(lean_object* v_mod_1253_, lean_object* v_isMeta_1254_, lean_object* v_hint_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
uint8_t v_isMeta_boxed_1259_; lean_object* v_res_1260_; 
v_isMeta_boxed_1259_ = lean_unbox(v_isMeta_1254_);
v_res_1260_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(v_mod_1253_, v_isMeta_boxed_1259_, v_hint_1255_, v___y_1256_, v___y_1257_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1(lean_object* v___x_1261_, lean_object* v_declName_1262_, lean_object* v_as_1263_, size_t v_sz_1264_, size_t v_i_1265_, lean_object* v_b_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
uint8_t v___x_1270_; 
v___x_1270_ = lean_usize_dec_lt(v_i_1265_, v_sz_1264_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; 
lean_dec(v_declName_1262_);
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v_b_1266_);
return v___x_1271_;
}
else
{
lean_object* v___x_1272_; lean_object* v_modules_1273_; lean_object* v___x_1274_; lean_object* v_a_1275_; lean_object* v___x_1276_; lean_object* v_toImport_1277_; lean_object* v_module_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; lean_object* v___x_1281_; 
v___x_1272_ = l_Lean_Environment_header(v___x_1261_);
v_modules_1273_ = lean_ctor_get(v___x_1272_, 3);
lean_inc_ref(v_modules_1273_);
lean_dec_ref(v___x_1272_);
v___x_1274_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1275_ = lean_array_uget_borrowed(v_as_1263_, v_i_1265_);
v___x_1276_ = lean_array_get(v___x_1274_, v_modules_1273_, v_a_1275_);
lean_dec_ref(v_modules_1273_);
v_toImport_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc_ref(v_toImport_1277_);
lean_dec(v___x_1276_);
v_module_1278_ = lean_ctor_get(v_toImport_1277_, 0);
lean_inc(v_module_1278_);
lean_dec_ref(v_toImport_1277_);
v___x_1279_ = lean_box(0);
v___x_1280_ = 0;
lean_inc(v_declName_1262_);
v___x_1281_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(v_module_1278_, v___x_1280_, v_declName_1262_, v___y_1267_, v___y_1268_);
if (lean_obj_tag(v___x_1281_) == 0)
{
size_t v___x_1282_; size_t v___x_1283_; 
lean_dec_ref_known(v___x_1281_, 1);
v___x_1282_ = ((size_t)1ULL);
v___x_1283_ = lean_usize_add(v_i_1265_, v___x_1282_);
v_i_1265_ = v___x_1283_;
v_b_1266_ = v___x_1279_;
goto _start;
}
else
{
lean_dec(v_declName_1262_);
return v___x_1281_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1___boxed(lean_object* v___x_1285_, lean_object* v_declName_1286_, lean_object* v_as_1287_, lean_object* v_sz_1288_, lean_object* v_i_1289_, lean_object* v_b_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
size_t v_sz_boxed_1294_; size_t v_i_boxed_1295_; lean_object* v_res_1296_; 
v_sz_boxed_1294_ = lean_unbox_usize(v_sz_1288_);
lean_dec(v_sz_1288_);
v_i_boxed_1295_ = lean_unbox_usize(v_i_1289_);
lean_dec(v_i_1289_);
v_res_1296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1(v___x_1285_, v_declName_1286_, v_as_1287_, v_sz_boxed_1294_, v_i_boxed_1295_, v_b_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec_ref(v_as_1287_);
lean_dec_ref(v___x_1285_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___redArg(lean_object* v_a_1297_, lean_object* v_x_1298_){
_start:
{
if (lean_obj_tag(v_x_1298_) == 0)
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_box(0);
return v___x_1299_;
}
else
{
lean_object* v_key_1300_; lean_object* v_value_1301_; lean_object* v_tail_1302_; uint8_t v___x_1303_; 
v_key_1300_ = lean_ctor_get(v_x_1298_, 0);
v_value_1301_ = lean_ctor_get(v_x_1298_, 1);
v_tail_1302_ = lean_ctor_get(v_x_1298_, 2);
v___x_1303_ = lean_name_eq(v_key_1300_, v_a_1297_);
if (v___x_1303_ == 0)
{
v_x_1298_ = v_tail_1302_;
goto _start;
}
else
{
lean_object* v___x_1305_; 
lean_inc(v_value_1301_);
v___x_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1305_, 0, v_value_1301_);
return v___x_1305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_1306_, lean_object* v_x_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___redArg(v_a_1306_, v_x_1307_);
lean_dec(v_x_1307_);
lean_dec(v_a_1306_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(lean_object* v_m_1309_, lean_object* v_a_1310_){
_start:
{
lean_object* v_buckets_1311_; lean_object* v___x_1312_; uint64_t v___y_1314_; 
v_buckets_1311_ = lean_ctor_get(v_m_1309_, 1);
v___x_1312_ = lean_array_get_size(v_buckets_1311_);
if (lean_obj_tag(v_a_1310_) == 0)
{
uint64_t v___x_1328_; 
v___x_1328_ = 1723ULL;
v___y_1314_ = v___x_1328_;
goto v___jp_1313_;
}
else
{
uint64_t v_hash_1329_; 
v_hash_1329_ = lean_ctor_get_uint64(v_a_1310_, sizeof(void*)*2);
v___y_1314_ = v_hash_1329_;
goto v___jp_1313_;
}
v___jp_1313_:
{
uint64_t v___x_1315_; uint64_t v___x_1316_; uint64_t v_fold_1317_; uint64_t v___x_1318_; uint64_t v___x_1319_; uint64_t v___x_1320_; size_t v___x_1321_; size_t v___x_1322_; size_t v___x_1323_; size_t v___x_1324_; size_t v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1315_ = 32ULL;
v___x_1316_ = lean_uint64_shift_right(v___y_1314_, v___x_1315_);
v_fold_1317_ = lean_uint64_xor(v___y_1314_, v___x_1316_);
v___x_1318_ = 16ULL;
v___x_1319_ = lean_uint64_shift_right(v_fold_1317_, v___x_1318_);
v___x_1320_ = lean_uint64_xor(v_fold_1317_, v___x_1319_);
v___x_1321_ = lean_uint64_to_usize(v___x_1320_);
v___x_1322_ = lean_usize_of_nat(v___x_1312_);
v___x_1323_ = ((size_t)1ULL);
v___x_1324_ = lean_usize_sub(v___x_1322_, v___x_1323_);
v___x_1325_ = lean_usize_land(v___x_1321_, v___x_1324_);
v___x_1326_ = lean_array_uget_borrowed(v_buckets_1311_, v___x_1325_);
v___x_1327_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___redArg(v_a_1310_, v___x_1326_);
return v___x_1327_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg___boxed(lean_object* v_m_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(v_m_1330_, v_a_1331_);
lean_dec(v_a_1331_);
lean_dec_ref(v_m_1330_);
return v_res_1332_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0(lean_object* v_declName_1336_, uint8_t v_isMeta_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v_env_1346_; lean_object* v___y_1348_; lean_object* v___x_1361_; 
v___x_1341_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0);
v___x_1342_ = lean_st_ref_get(v___y_1339_);
v_env_1346_ = lean_ctor_get(v___x_1342_, 0);
lean_inc_ref(v_env_1346_);
lean_dec(v___x_1342_);
v___x_1361_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1346_, v_declName_1336_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_dec_ref(v_env_1346_);
lean_dec(v_declName_1336_);
goto v___jp_1343_;
}
else
{
lean_object* v_val_1362_; lean_object* v___x_1363_; lean_object* v_modules_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v_val_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_val_1362_);
lean_dec_ref_known(v___x_1361_, 1);
v___x_1363_ = l_Lean_Environment_header(v_env_1346_);
v_modules_1364_ = lean_ctor_get(v___x_1363_, 3);
lean_inc_ref(v_modules_1364_);
lean_dec_ref(v___x_1363_);
v___x_1365_ = lean_array_get_size(v_modules_1364_);
v___x_1366_ = lean_nat_dec_lt(v_val_1362_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_dec_ref(v_modules_1364_);
lean_dec(v_val_1362_);
lean_dec_ref(v_env_1346_);
lean_dec(v_declName_1336_);
goto v___jp_1343_;
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___y_1370_; 
v___x_1367_ = lean_array_fget(v_modules_1364_, v_val_1362_);
lean_dec(v_val_1362_);
lean_dec_ref(v_modules_1364_);
v___x_1368_ = lean_st_ref_get(v___y_1339_);
if (v_isMeta_1337_ == 0)
{
lean_dec(v___x_1368_);
v___y_1370_ = v_isMeta_1337_;
goto v___jp_1369_;
}
else
{
lean_object* v_env_1381_; uint8_t v___x_1382_; 
v_env_1381_ = lean_ctor_get(v___x_1368_, 0);
lean_inc_ref(v_env_1381_);
lean_dec(v___x_1368_);
lean_inc(v_declName_1336_);
v___x_1382_ = l_Lean_isMarkedMeta(v_env_1381_, v_declName_1336_);
if (v___x_1382_ == 0)
{
v___y_1370_ = v_isMeta_1337_;
goto v___jp_1369_;
}
else
{
uint8_t v___x_1383_; 
v___x_1383_ = 0;
v___y_1370_ = v___x_1383_;
goto v___jp_1369_;
}
}
v___jp_1369_:
{
lean_object* v_toImport_1371_; lean_object* v_module_1372_; lean_object* v___x_1373_; 
v_toImport_1371_ = lean_ctor_get(v___x_1367_, 0);
lean_inc_ref(v_toImport_1371_);
lean_dec(v___x_1367_);
v_module_1372_ = lean_ctor_get(v_toImport_1371_, 0);
lean_inc(v_module_1372_);
lean_dec_ref(v_toImport_1371_);
lean_inc(v_declName_1336_);
v___x_1373_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(v_module_1372_, v___y_1370_, v_declName_1336_, v___y_1338_, v___y_1339_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_dec_ref_known(v___x_1373_, 1);
v___x_1374_ = l_Lean_indirectModUseExt;
v___x_1375_ = lean_box(1);
v___x_1376_ = lean_box(0);
lean_inc_ref(v_env_1346_);
v___x_1377_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1341_, v___x_1374_, v_env_1346_, v___x_1375_, v___x_1376_);
v___x_1378_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(v___x_1377_, v_declName_1336_);
lean_dec(v___x_1377_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v___x_1379_; 
v___x_1379_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__1));
v___y_1348_ = v___x_1379_;
goto v___jp_1347_;
}
else
{
lean_object* v_val_1380_; 
v_val_1380_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_val_1380_);
lean_dec_ref_known(v___x_1378_, 1);
v___y_1348_ = v_val_1380_;
goto v___jp_1347_;
}
}
else
{
lean_dec_ref(v_env_1346_);
lean_dec(v_declName_1336_);
return v___x_1373_;
}
}
}
}
v___jp_1343_:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = lean_box(0);
v___x_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
return v___x_1345_;
}
v___jp_1347_:
{
lean_object* v___x_1349_; size_t v_sz_1350_; size_t v___x_1351_; lean_object* v___x_1352_; 
v___x_1349_ = lean_box(0);
v_sz_1350_ = lean_array_size(v___y_1348_);
v___x_1351_ = ((size_t)0ULL);
v___x_1352_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1(v_env_1346_, v_declName_1336_, v___y_1348_, v_sz_1350_, v___x_1351_, v___x_1349_, v___y_1338_, v___y_1339_);
lean_dec_ref(v___y_1348_);
lean_dec_ref(v_env_1346_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1359_ == 0)
{
lean_object* v_unused_1360_; 
v_unused_1360_ = lean_ctor_get(v___x_1352_, 0);
lean_dec(v_unused_1360_);
v___x_1354_ = v___x_1352_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_dec(v___x_1352_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1349_);
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v___x_1349_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
else
{
return v___x_1352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___boxed(lean_object* v_declName_1384_, lean_object* v_isMeta_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
uint8_t v_isMeta_boxed_1389_; lean_object* v_res_1390_; 
v_isMeta_boxed_1389_ = lean_unbox(v_isMeta_1385_);
v_res_1390_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0(v_declName_1384_, v_isMeta_boxed_1389_, v___y_1386_, v___y_1387_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__1(lean_object* v_parserNamespace_1391_, uint8_t v_x_1392_, lean_object* v_stx_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v___x_1397_; 
lean_inc(v_stx_1393_);
v___x_1397_ = l_Lean_Elab_syntaxNodeKindOfAttrParam(v_parserNamespace_1391_, v_stx_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1450_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1450_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1450_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; lean_object* v_env_1403_; uint8_t v___x_1404_; uint8_t v___x_1405_; 
v___x_1402_ = lean_st_ref_get(v___y_1395_);
v_env_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc_ref(v_env_1403_);
lean_dec(v___x_1402_);
v___x_1404_ = 1;
lean_inc(v_a_1398_);
v___x_1405_ = l_Lean_Environment_contains(v_env_1403_, v_a_1398_, v___x_1404_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1407_; 
lean_dec(v_stx_1393_);
if (v_isShared_1401_ == 0)
{
v___x_1407_ = v___x_1400_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_a_1398_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
else
{
uint8_t v___x_1409_; lean_object* v___x_1410_; 
lean_del_object(v___x_1400_);
v___x_1409_ = 0;
lean_inc(v_a_1398_);
v___x_1410_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0(v_a_1398_, v___x_1409_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1440_; 
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1440_ == 0)
{
lean_object* v_unused_1441_; 
v_unused_1441_ = lean_ctor_get(v___x_1410_, 0);
lean_dec(v_unused_1441_);
v___x_1412_ = v___x_1410_;
v_isShared_1413_ = v_isSharedCheck_1440_;
goto v_resetjp_1411_;
}
else
{
lean_dec(v___x_1410_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1440_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; lean_object* v_infoState_1415_; uint8_t v_enabled_1416_; 
v___x_1414_ = lean_st_ref_get(v___y_1395_);
v_infoState_1415_ = lean_ctor_get(v___x_1414_, 8);
lean_inc_ref(v_infoState_1415_);
lean_dec(v___x_1414_);
v_enabled_1416_ = lean_ctor_get_uint8(v_infoState_1415_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1415_);
if (v_enabled_1416_ == 0)
{
lean_object* v___x_1418_; 
lean_dec(v_stx_1393_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v_a_1398_);
v___x_1418_ = v___x_1412_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1398_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
else
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
lean_del_object(v___x_1412_);
v___x_1420_ = lean_unsigned_to_nat(1u);
v___x_1421_ = l_Lean_Syntax_getArg(v_stx_1393_, v___x_1420_);
lean_dec(v_stx_1393_);
v___x_1422_ = lean_box(0);
lean_inc(v_a_1398_);
v___x_1423_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1(v___x_1421_, v_a_1398_, v___x_1422_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1430_ == 0)
{
lean_object* v_unused_1431_; 
v_unused_1431_ = lean_ctor_get(v___x_1423_, 0);
lean_dec(v_unused_1431_);
v___x_1425_ = v___x_1423_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_dec(v___x_1423_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v_a_1398_);
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1398_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v_a_1398_);
v_a_1432_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1423_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1423_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_dec(v_a_1398_);
lean_dec(v_stx_1393_);
v_a_1442_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1410_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1410_);
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
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
}
}
else
{
lean_dec(v_stx_1393_);
return v___x_1397_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__1___boxed(lean_object* v_parserNamespace_1451_, lean_object* v_x_1452_, lean_object* v_stx_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
uint8_t v_x_7235__boxed_1457_; lean_object* v_res_1458_; 
v_x_7235__boxed_1457_ = lean_unbox(v_x_1452_);
v_res_1458_ = l_Lean_Elab_mkElabAttribute___redArg___lam__1(v_parserNamespace_1451_, v_x_7235__boxed_1457_, v_stx_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object* v_attrBuiltinName_1461_, lean_object* v_attrName_1462_, lean_object* v_parserNamespace_1463_, lean_object* v_typeName_1464_, lean_object* v_kind_1465_, lean_object* v_attrDeclName_1466_){
_start:
{
lean_object* v___f_1468_; lean_object* v___f_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___f_1468_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___redArg___closed__0));
v___f_1469_ = lean_alloc_closure((void*)(l_Lean_Elab_mkElabAttribute___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1469_, 0, v_parserNamespace_1463_);
v___x_1470_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___redArg___closed__1));
v___x_1471_ = lean_string_append(v_kind_1465_, v___x_1470_);
v___x_1472_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1472_, 0, v_attrBuiltinName_1461_);
lean_ctor_set(v___x_1472_, 1, v_attrName_1462_);
lean_ctor_set(v___x_1472_, 2, v___x_1471_);
lean_ctor_set(v___x_1472_, 3, v_typeName_1464_);
lean_ctor_set(v___x_1472_, 4, v___f_1469_);
lean_ctor_set(v___x_1472_, 5, v___f_1468_);
v___x_1473_ = l_Lean_KeyedDeclsAttribute_init___redArg(v___x_1472_, v_attrDeclName_1466_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___boxed(lean_object* v_attrBuiltinName_1474_, lean_object* v_attrName_1475_, lean_object* v_parserNamespace_1476_, lean_object* v_typeName_1477_, lean_object* v_kind_1478_, lean_object* v_attrDeclName_1479_, lean_object* v_a_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_Elab_mkElabAttribute___redArg(v_attrBuiltinName_1474_, v_attrName_1475_, v_parserNamespace_1476_, v_typeName_1477_, v_kind_1478_, v_attrDeclName_1479_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute(lean_object* v_00_u03b3_1482_, lean_object* v_attrBuiltinName_1483_, lean_object* v_attrName_1484_, lean_object* v_parserNamespace_1485_, lean_object* v_typeName_1486_, lean_object* v_kind_1487_, lean_object* v_attrDeclName_1488_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Lean_Elab_mkElabAttribute___redArg(v_attrBuiltinName_1483_, v_attrName_1484_, v_parserNamespace_1485_, v_typeName_1486_, v_kind_1487_, v_attrDeclName_1488_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___boxed(lean_object* v_00_u03b3_1491_, lean_object* v_attrBuiltinName_1492_, lean_object* v_attrName_1493_, lean_object* v_parserNamespace_1494_, lean_object* v_typeName_1495_, lean_object* v_kind_1496_, lean_object* v_attrDeclName_1497_, lean_object* v_a_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lean_Elab_mkElabAttribute(v_00_u03b3_1491_, v_attrBuiltinName_1492_, v_attrName_1493_, v_parserNamespace_1494_, v_typeName_1495_, v_kind_1496_, v_attrDeclName_1497_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2(lean_object* v_00_u03b2_1500_, lean_object* v_m_1501_, lean_object* v_a_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(v_m_1501_, v_a_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1504_, lean_object* v_m_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2(v_00_u03b2_1504_, v_m_1505_, v_a_1506_);
lean_dec(v_a_1506_);
lean_dec_ref(v_m_1505_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11(lean_object* v_t_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___redArg(v_t_1508_, v___y_1510_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11___boxed(lean_object* v_t_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__11(v_t_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
return v_res_1517_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1518_, lean_object* v_x_1519_, lean_object* v_x_1520_){
_start:
{
uint8_t v___x_1521_; 
v___x_1521_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(v_x_1519_, v_x_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1522_, lean_object* v_x_1523_, lean_object* v_x_1524_){
_start:
{
uint8_t v_res_1525_; lean_object* v_r_1526_; 
v_res_1525_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1(v_00_u03b2_1522_, v_x_1523_, v_x_1524_);
lean_dec_ref(v_x_1524_);
lean_dec_ref(v_x_1523_);
v_r_1526_ = lean_box(v_res_1525_);
return v_r_1526_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1527_, lean_object* v_a_1528_, lean_object* v_x_1529_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___redArg(v_a_1528_, v_x_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1531_, lean_object* v_a_1532_, lean_object* v_x_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__5(v_00_u03b2_1531_, v_a_1532_, v_x_1533_);
lean_dec(v_x_1533_);
lean_dec(v_a_1532_);
return v_res_1534_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1535_, lean_object* v_x_1536_, size_t v_x_1537_, lean_object* v_x_1538_){
_start:
{
uint8_t v___x_1539_; 
v___x_1539_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1536_, v_x_1537_, v_x_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1540_, lean_object* v_x_1541_, lean_object* v_x_1542_, lean_object* v_x_1543_){
_start:
{
size_t v_x_7405__boxed_1544_; uint8_t v_res_1545_; lean_object* v_r_1546_; 
v_x_7405__boxed_1544_ = lean_unbox_usize(v_x_1542_);
lean_dec(v_x_1542_);
v_res_1545_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1540_, v_x_1541_, v_x_7405__boxed_1544_, v_x_1543_);
lean_dec_ref(v_x_1543_);
lean_dec_ref(v_x_1541_);
v_r_1546_ = lean_box(v_res_1545_);
return v_r_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10(lean_object* v_00_u03b1_1547_, lean_object* v_constName_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___redArg(v_constName_1548_, v___y_1549_, v___y_1550_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10___boxed(lean_object* v_00_u03b1_1553_, lean_object* v_constName_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10(v_00_u03b1_1553_, v_constName_1554_, v___y_1555_, v___y_1556_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
return v_res_1558_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_1559_, lean_object* v_keys_1560_, lean_object* v_vals_1561_, lean_object* v_heq_1562_, lean_object* v_i_1563_, lean_object* v_k_1564_){
_start:
{
uint8_t v___x_1565_; 
v___x_1565_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(v_keys_1560_, v_i_1563_, v_k_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___boxed(lean_object* v_00_u03b2_1566_, lean_object* v_keys_1567_, lean_object* v_vals_1568_, lean_object* v_heq_1569_, lean_object* v_i_1570_, lean_object* v_k_1571_){
_start:
{
uint8_t v_res_1572_; lean_object* v_r_1573_; 
v_res_1572_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9(v_00_u03b2_1566_, v_keys_1567_, v_vals_1568_, v_heq_1569_, v_i_1570_, v_k_1571_);
lean_dec_ref(v_k_1571_);
lean_dec_ref(v_vals_1568_);
lean_dec_ref(v_keys_1567_);
v_r_1573_ = lean_box(v_res_1572_);
return v_r_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14(lean_object* v_00_u03b1_1574_, lean_object* v_ref_1575_, lean_object* v_constName_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___redArg(v_ref_1575_, v_constName_1576_, v___y_1577_, v___y_1578_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14___boxed(lean_object* v_00_u03b1_1581_, lean_object* v_ref_1582_, lean_object* v_constName_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14(v_00_u03b1_1581_, v_ref_1582_, v_constName_1583_, v___y_1584_, v___y_1585_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec(v_ref_1582_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16(lean_object* v_00_u03b1_1588_, lean_object* v_ref_1589_, lean_object* v_msg_1590_, lean_object* v_declHint_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___redArg(v_ref_1589_, v_msg_1590_, v_declHint_1591_, v___y_1592_, v___y_1593_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16___boxed(lean_object* v_00_u03b1_1596_, lean_object* v_ref_1597_, lean_object* v_msg_1598_, lean_object* v_declHint_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16(v_00_u03b1_1596_, v_ref_1597_, v_msg_1598_, v_declHint_1599_, v___y_1600_, v___y_1601_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec(v_ref_1597_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18(lean_object* v_msg_1604_, lean_object* v_declHint_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(v_msg_1604_, v_declHint_1605_, v___y_1607_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18___boxed(lean_object* v_msg_1610_, lean_object* v_declHint_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__17_spec__18(v_msg_1610_, v_declHint_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18(lean_object* v_00_u03b1_1616_, lean_object* v_ref_1617_, lean_object* v_msg_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___redArg(v_ref_1617_, v_msg_1618_, v___y_1619_, v___y_1620_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18___boxed(lean_object* v_00_u03b1_1623_, lean_object* v_ref_1624_, lean_object* v_msg_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__8_spec__10_spec__14_spec__16_spec__18(v_00_u03b1_1623_, v_ref_1624_, v_msg_1625_, v___y_1626_, v___y_1627_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v_ref_1624_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkMacroAttributeUnsafe(lean_object* v_ref_1640_){
_start:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1642_ = ((lean_object*)(l_Lean_Elab_mkMacroAttributeUnsafe___closed__1));
v___x_1643_ = ((lean_object*)(l_Lean_Elab_mkMacroAttributeUnsafe___closed__2));
v___x_1644_ = ((lean_object*)(l_Lean_Elab_mkMacroAttributeUnsafe___closed__3));
v___x_1645_ = lean_box(0);
v___x_1646_ = ((lean_object*)(l_Lean_Elab_mkMacroAttributeUnsafe___closed__5));
v___x_1647_ = l_Lean_Elab_mkElabAttribute___redArg(v___x_1642_, v___x_1644_, v___x_1645_, v___x_1646_, v___x_1643_, v_ref_1640_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___boxed(lean_object* v_ref_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lean_Elab_mkMacroAttributeUnsafe(v_ref_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_));
v___x_1658_ = l_Lean_Elab_mkMacroAttributeUnsafe(v___x_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2____boxed(lean_object* v_a_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_();
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1(){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1663_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_));
v___x_1664_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___closed__0));
v___x_1665_ = l_Lean_addBuiltinDocString(v___x_1663_, v___x_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___boxed(lean_object* v_a_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1();
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3(){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1694_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_));
v___x_1695_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__6));
v___x_1696_ = l_Lean_addBuiltinDeclarationRanges(v___x_1694_, v___x_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___boxed(lean_object* v_a_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3();
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(lean_object* v_toOLeanEntry_1699_, lean_object* v_a_1700_, lean_object* v_____r_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v_declName_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1715_; 
v_declName_1704_ = lean_ctor_get(v_toOLeanEntry_1699_, 1);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_toOLeanEntry_1699_);
if (v_isSharedCheck_1715_ == 0)
{
lean_object* v_unused_1716_; 
v_unused_1716_ = lean_ctor_get(v_toOLeanEntry_1699_, 0);
lean_dec(v_unused_1716_);
v___x_1706_ = v_toOLeanEntry_1699_;
v_isShared_1707_ = v_isSharedCheck_1715_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_declName_1704_);
lean_dec(v_toOLeanEntry_1699_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1715_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1708_; lean_object* v___x_1710_; 
v___x_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1708_, 0, v_a_1700_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 1, v___x_1708_);
lean_ctor_set(v___x_1706_, 0, v_declName_1704_);
v___x_1710_ = v___x_1706_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_declName_1704_);
lean_ctor_set(v_reuseFailAlloc_1714_, 1, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1710_);
v___x_1712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1711_);
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1712_);
lean_ctor_set(v___x_1713_, 1, v___y_1703_);
return v___x_1713_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0___boxed(lean_object* v_toOLeanEntry_1717_, lean_object* v_a_1718_, lean_object* v_____r_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(v_toOLeanEntry_1717_, v_a_1718_, v_____r_1719_, v___y_1720_, v___y_1721_);
lean_dec_ref(v___y_1720_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(lean_object* v_stx_1726_, lean_object* v_as_x27_1727_, lean_object* v_b_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
if (lean_obj_tag(v_as_x27_1727_) == 0)
{
lean_object* v___x_1731_; 
lean_dec(v_stx_1726_);
v___x_1731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1731_, 0, v_b_1728_);
lean_ctor_set(v___x_1731_, 1, v___y_1730_);
return v___x_1731_;
}
else
{
lean_object* v_head_1732_; lean_object* v_tail_1733_; lean_object* v_toOLeanEntry_1734_; uint8_t v_isBuiltin_1735_; lean_object* v_value_1736_; lean_object* v_macroScope_1737_; lean_object* v_traceMsgs_1738_; lean_object* v_expandedMacroDecls_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1804_; 
lean_dec_ref(v_b_1728_);
v_head_1732_ = lean_ctor_get(v_as_x27_1727_, 0);
v_tail_1733_ = lean_ctor_get(v_as_x27_1727_, 1);
v_toOLeanEntry_1734_ = lean_ctor_get(v_head_1732_, 0);
v_isBuiltin_1735_ = lean_ctor_get_uint8(v_head_1732_, sizeof(void*)*2);
v_value_1736_ = lean_ctor_get(v_head_1732_, 1);
v_macroScope_1737_ = lean_ctor_get(v___y_1730_, 0);
v_traceMsgs_1738_ = lean_ctor_get(v___y_1730_, 1);
v_expandedMacroDecls_1739_ = lean_ctor_get(v___y_1730_, 2);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___y_1730_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1741_ = v___y_1730_;
v_isShared_1742_ = v_isSharedCheck_1804_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_expandedMacroDecls_1739_);
lean_inc(v_traceMsgs_1738_);
lean_inc(v_macroScope_1737_);
lean_dec(v___y_1730_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1804_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v_methods_1743_; lean_object* v_quotContext_1744_; lean_object* v_currRecDepth_1745_; lean_object* v_maxRecDepth_1746_; lean_object* v_ref_1747_; lean_object* v___x_1748_; lean_object* v_a_1750_; lean_object* v_a_1751_; lean_object* v___x_1755_; lean_object* v_a_1757_; lean_object* v_a_1758_; lean_object* v___y_1765_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1774_; 
v_methods_1743_ = lean_ctor_get(v___y_1729_, 0);
v_quotContext_1744_ = lean_ctor_get(v___y_1729_, 1);
v_currRecDepth_1745_ = lean_ctor_get(v___y_1729_, 3);
v_maxRecDepth_1746_ = lean_ctor_get(v___y_1729_, 4);
v_ref_1747_ = lean_ctor_get(v___y_1729_, 5);
v___x_1748_ = lean_box(0);
v___x_1755_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0));
v___x_1771_ = lean_unsigned_to_nat(1u);
v___x_1772_ = lean_nat_add(v_macroScope_1737_, v___x_1771_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 0, v___x_1772_);
v___x_1774_ = v___x_1741_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1772_);
lean_ctor_set(v_reuseFailAlloc_1803_, 1, v_traceMsgs_1738_);
lean_ctor_set(v_reuseFailAlloc_1803_, 2, v_expandedMacroDecls_1739_);
v___x_1774_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1773_;
}
v___jp_1749_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1752_, 0, v_a_1750_);
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
lean_ctor_set(v___x_1753_, 1, v___x_1748_);
v___x_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
lean_ctor_set(v___x_1754_, 1, v_a_1751_);
return v___x_1754_;
}
v___jp_1756_:
{
if (lean_obj_tag(v_a_1757_) == 1)
{
v_as_x27_1727_ = v_tail_1733_;
v_b_1728_ = v___x_1755_;
v___y_1730_ = v_a_1758_;
goto _start;
}
else
{
lean_object* v_declName_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_dec(v_stx_1726_);
v_declName_1760_ = lean_ctor_get(v_toOLeanEntry_1734_, 1);
v___x_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1761_, 0, v_a_1757_);
lean_inc(v_declName_1760_);
v___x_1762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1762_, 0, v_declName_1760_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
v___x_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
v_a_1750_ = v___x_1763_;
v_a_1751_ = v_a_1758_;
goto v___jp_1749_;
}
}
v___jp_1764_:
{
lean_object* v_a_1766_; 
v_a_1766_ = lean_ctor_get(v___y_1765_, 0);
if (lean_obj_tag(v_a_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v_a_1768_; 
lean_inc_ref(v_a_1766_);
lean_dec(v_stx_1726_);
v_a_1767_ = lean_ctor_get(v___y_1765_, 1);
lean_inc(v_a_1767_);
lean_dec_ref(v___y_1765_);
v_a_1768_ = lean_ctor_get(v_a_1766_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v_a_1766_, 1);
v_a_1750_ = v_a_1768_;
v_a_1751_ = v_a_1767_;
goto v___jp_1749_;
}
else
{
lean_object* v_a_1769_; 
v_a_1769_ = lean_ctor_get(v___y_1765_, 1);
lean_inc(v_a_1769_);
lean_dec_ref(v___y_1765_);
v_as_x27_1727_ = v_tail_1733_;
v_b_1728_ = v___x_1755_;
v___y_1730_ = v_a_1769_;
goto _start;
}
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
lean_inc(v_ref_1747_);
lean_inc(v_maxRecDepth_1746_);
lean_inc(v_currRecDepth_1745_);
lean_inc(v_quotContext_1744_);
lean_inc(v_methods_1743_);
v___x_1775_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1775_, 0, v_methods_1743_);
lean_ctor_set(v___x_1775_, 1, v_quotContext_1744_);
lean_ctor_set(v___x_1775_, 2, v_macroScope_1737_);
lean_ctor_set(v___x_1775_, 3, v_currRecDepth_1745_);
lean_ctor_set(v___x_1775_, 4, v_maxRecDepth_1746_);
lean_ctor_set(v___x_1775_, 5, v_ref_1747_);
lean_inc(v_value_1736_);
lean_inc(v_stx_1726_);
v___x_1776_ = lean_apply_3(v_value_1736_, v_stx_1726_, v___x_1775_, v___x_1774_);
if (lean_obj_tag(v___x_1776_) == 0)
{
if (v_isBuiltin_1735_ == 0)
{
lean_object* v_a_1777_; lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1797_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 1);
v_a_1778_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1780_ = v___x_1776_;
v_isShared_1781_ = v_isSharedCheck_1797_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1777_);
lean_inc(v_a_1778_);
lean_dec(v___x_1776_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1797_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v_macroScope_1782_; lean_object* v_traceMsgs_1783_; lean_object* v_expandedMacroDecls_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1796_; 
v_macroScope_1782_ = lean_ctor_get(v_a_1777_, 0);
v_traceMsgs_1783_ = lean_ctor_get(v_a_1777_, 1);
v_expandedMacroDecls_1784_ = lean_ctor_get(v_a_1777_, 2);
v_isSharedCheck_1796_ = !lean_is_exclusive(v_a_1777_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1786_ = v_a_1777_;
v_isShared_1787_ = v_isSharedCheck_1796_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_expandedMacroDecls_1784_);
lean_inc(v_traceMsgs_1783_);
lean_inc(v_macroScope_1782_);
lean_dec(v_a_1777_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1796_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v_declName_1788_; lean_object* v___x_1790_; 
v_declName_1788_ = lean_ctor_get(v_toOLeanEntry_1734_, 1);
lean_inc(v_declName_1788_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set_tag(v___x_1780_, 1);
lean_ctor_set(v___x_1780_, 1, v_expandedMacroDecls_1784_);
lean_ctor_set(v___x_1780_, 0, v_declName_1788_);
v___x_1790_ = v___x_1780_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_declName_1788_);
lean_ctor_set(v_reuseFailAlloc_1795_, 1, v_expandedMacroDecls_1784_);
v___x_1790_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
lean_object* v___x_1792_; 
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 2, v___x_1790_);
v___x_1792_ = v___x_1786_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_macroScope_1782_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v_traceMsgs_1783_);
lean_ctor_set(v_reuseFailAlloc_1794_, 2, v___x_1790_);
v___x_1792_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
lean_object* v___x_1793_; 
lean_inc_ref(v_toOLeanEntry_1734_);
v___x_1793_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(v_toOLeanEntry_1734_, v_a_1778_, v___x_1748_, v___y_1729_, v___x_1792_);
v___y_1765_ = v___x_1793_;
goto v___jp_1764_;
}
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v_a_1799_; lean_object* v___x_1800_; 
v_a_1798_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1798_);
v_a_1799_ = lean_ctor_get(v___x_1776_, 1);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1776_, 2);
lean_inc_ref(v_toOLeanEntry_1734_);
v___x_1800_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(v_toOLeanEntry_1734_, v_a_1798_, v___x_1748_, v___y_1729_, v_a_1799_);
v___y_1765_ = v___x_1800_;
goto v___jp_1764_;
}
}
else
{
lean_object* v_a_1801_; lean_object* v_a_1802_; 
v_a_1801_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1801_);
v_a_1802_ = lean_ctor_get(v___x_1776_, 1);
lean_inc(v_a_1802_);
lean_dec_ref_known(v___x_1776_, 2);
v_a_1757_ = v_a_1801_;
v_a_1758_ = v_a_1802_;
goto v___jp_1756_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___boxed(lean_object* v_stx_1805_, lean_object* v_as_x27_1806_, lean_object* v_b_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(v_stx_1805_, v_as_x27_1806_, v_b_1807_, v___y_1808_, v___y_1809_);
lean_dec_ref(v___y_1808_);
lean_dec(v_as_x27_1806_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object* v_env_1811_, lean_object* v_stx_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v_a_1821_; lean_object* v_fst_1822_; 
v___x_1815_ = l_Lean_Elab_macroAttribute;
lean_inc(v_stx_1812_);
v___x_1816_ = l_Lean_Syntax_getKind(v_stx_1812_);
v___x_1817_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_1815_, v_env_1811_, v___x_1816_);
lean_dec(v___x_1816_);
v___x_1818_ = lean_box(0);
v___x_1819_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0));
v___x_1820_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(v_stx_1812_, v___x_1817_, v___x_1819_, v_a_1813_, v_a_1814_);
lean_dec(v___x_1817_);
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
v_fst_1822_ = lean_ctor_get(v_a_1821_, 0);
if (lean_obj_tag(v_fst_1822_) == 0)
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
v_a_1823_ = lean_ctor_get(v___x_1820_, 1);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1830_ == 0)
{
lean_object* v_unused_1831_; 
v_unused_1831_ = lean_ctor_get(v___x_1820_, 0);
lean_dec(v_unused_1831_);
v___x_1825_ = v___x_1820_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1820_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 0, v___x_1818_);
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v___x_1818_);
lean_ctor_set(v_reuseFailAlloc_1829_, 1, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1840_; 
lean_inc_ref(v_fst_1822_);
v_a_1832_ = lean_ctor_get(v___x_1820_, 1);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1840_ == 0)
{
lean_object* v_unused_1841_; 
v_unused_1841_ = lean_ctor_get(v___x_1820_, 0);
lean_dec(v_unused_1841_);
v___x_1834_ = v___x_1820_;
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1820_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v_val_1836_; lean_object* v___x_1838_; 
v_val_1836_ = lean_ctor_get(v_fst_1822_, 0);
lean_inc(v_val_1836_);
lean_dec_ref_known(v_fst_1822_, 1);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v_val_1836_);
v___x_1838_ = v___x_1834_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_val_1836_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_a_1832_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object* v_env_1842_, lean_object* v_stx_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1842_, v_stx_1843_, v_a_1844_, v_a_1845_);
lean_dec_ref(v_a_1844_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0(lean_object* v_stx_1847_, lean_object* v_as_1848_, lean_object* v_as_x27_1849_, lean_object* v_b_1850_, lean_object* v_a_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(v_stx_1847_, v_as_x27_1849_, v_b_1850_, v___y_1852_, v___y_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___boxed(lean_object* v_stx_1855_, lean_object* v_as_1856_, lean_object* v_as_x27_1857_, lean_object* v_b_1858_, lean_object* v_a_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0(v_stx_1855_, v_as_1856_, v_as_x27_1857_, v_b_1858_, v_a_1859_, v___y_1860_, v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v_as_x27_1857_);
lean_dec(v_as_1856_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg___lam__0(lean_object* v_setNextMacroScope_1863_, lean_object* v_inst_1864_, lean_object* v_s_1865_){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = lean_apply_1(v_setNextMacroScope_1863_, v_s_1865_);
v___x_1867_ = lean_apply_2(v_inst_1864_, lean_box(0), v___x_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg(lean_object* v_inst_1868_, lean_object* v_inst_1869_, lean_object* v_inst_1870_){
_start:
{
lean_object* v_getNextMacroScope_1871_; lean_object* v_setNextMacroScope_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1881_; 
v_getNextMacroScope_1871_ = lean_ctor_get(v_inst_1870_, 1);
v_setNextMacroScope_1872_ = lean_ctor_get(v_inst_1870_, 2);
v_isSharedCheck_1881_ = !lean_is_exclusive(v_inst_1870_);
if (v_isSharedCheck_1881_ == 0)
{
lean_object* v_unused_1882_; 
v_unused_1882_ = lean_ctor_get(v_inst_1870_, 0);
lean_dec(v_unused_1882_);
v___x_1874_ = v_inst_1870_;
v_isShared_1875_ = v_isSharedCheck_1881_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_setNextMacroScope_1872_);
lean_inc(v_getNextMacroScope_1871_);
lean_dec(v_inst_1870_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1881_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___f_1876_; lean_object* v___x_1877_; lean_object* v___x_1879_; 
lean_inc(v_inst_1868_);
v___f_1876_ = lean_alloc_closure((void*)(l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1876_, 0, v_setNextMacroScope_1872_);
lean_closure_set(v___f_1876_, 1, v_inst_1868_);
v___x_1877_ = lean_apply_2(v_inst_1868_, lean_box(0), v_getNextMacroScope_1871_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set(v___x_1874_, 2, v___f_1876_);
lean_ctor_set(v___x_1874_, 1, v___x_1877_);
lean_ctor_set(v___x_1874_, 0, v_inst_1869_);
v___x_1879_ = v___x_1874_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_inst_1869_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1880_, 2, v___f_1876_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation(lean_object* v_m_1883_, lean_object* v_n_1884_, lean_object* v_inst_1885_, lean_object* v_inst_1886_, lean_object* v_inst_1887_){
_start:
{
lean_object* v_getNextMacroScope_1888_; lean_object* v_setNextMacroScope_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1898_; 
v_getNextMacroScope_1888_ = lean_ctor_get(v_inst_1887_, 1);
v_setNextMacroScope_1889_ = lean_ctor_get(v_inst_1887_, 2);
v_isSharedCheck_1898_ = !lean_is_exclusive(v_inst_1887_);
if (v_isSharedCheck_1898_ == 0)
{
lean_object* v_unused_1899_; 
v_unused_1899_ = lean_ctor_get(v_inst_1887_, 0);
lean_dec(v_unused_1899_);
v___x_1891_ = v_inst_1887_;
v_isShared_1892_ = v_isSharedCheck_1898_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_setNextMacroScope_1889_);
lean_inc(v_getNextMacroScope_1888_);
lean_dec(v_inst_1887_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1898_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___f_1893_; lean_object* v___x_1894_; lean_object* v___x_1896_; 
lean_inc(v_inst_1885_);
v___f_1893_ = lean_alloc_closure((void*)(l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1893_, 0, v_setNextMacroScope_1889_);
lean_closure_set(v___f_1893_, 1, v_inst_1885_);
v___x_1894_ = lean_apply_2(v_inst_1885_, lean_box(0), v_getNextMacroScope_1888_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 2, v___f_1893_);
lean_ctor_set(v___x_1891_, 1, v___x_1894_);
lean_ctor_set(v___x_1891_, 0, v_inst_1886_);
v___x_1896_ = v___x_1891_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_inst_1886_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v___x_1894_);
lean_ctor_set(v_reuseFailAlloc_1897_, 2, v___f_1893_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___lam__0(lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v___x_1903_; lean_object* v_nextMacroScope_1904_; lean_object* v___x_1905_; 
v___x_1903_ = lean_st_ref_get(v___y_1901_);
v_nextMacroScope_1904_ = lean_ctor_get(v___x_1903_, 1);
lean_inc(v_nextMacroScope_1904_);
lean_dec(v___x_1903_);
v___x_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1905_, 0, v_nextMacroScope_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___lam__0___boxed(lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l_Lean_Elab_instMonadMacroAdapterCoreM___lam__0(v___y_1906_, v___y_1907_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___lam__1(lean_object* v_next_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v___x_1914_; lean_object* v_env_1915_; lean_object* v_ngen_1916_; lean_object* v_auxDeclNGen_1917_; lean_object* v_traceState_1918_; lean_object* v_cache_1919_; lean_object* v_recordedDeps_1920_; lean_object* v_messages_1921_; lean_object* v_infoState_1922_; lean_object* v_snapshotTasks_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1933_; 
v___x_1914_ = lean_st_ref_take(v___y_1912_);
v_env_1915_ = lean_ctor_get(v___x_1914_, 0);
v_ngen_1916_ = lean_ctor_get(v___x_1914_, 2);
v_auxDeclNGen_1917_ = lean_ctor_get(v___x_1914_, 3);
v_traceState_1918_ = lean_ctor_get(v___x_1914_, 4);
v_cache_1919_ = lean_ctor_get(v___x_1914_, 5);
v_recordedDeps_1920_ = lean_ctor_get(v___x_1914_, 6);
v_messages_1921_ = lean_ctor_get(v___x_1914_, 7);
v_infoState_1922_ = lean_ctor_get(v___x_1914_, 8);
v_snapshotTasks_1923_ = lean_ctor_get(v___x_1914_, 9);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1933_ == 0)
{
lean_object* v_unused_1934_; 
v_unused_1934_ = lean_ctor_get(v___x_1914_, 1);
lean_dec(v_unused_1934_);
v___x_1925_ = v___x_1914_;
v_isShared_1926_ = v_isSharedCheck_1933_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_snapshotTasks_1923_);
lean_inc(v_infoState_1922_);
lean_inc(v_messages_1921_);
lean_inc(v_recordedDeps_1920_);
lean_inc(v_cache_1919_);
lean_inc(v_traceState_1918_);
lean_inc(v_auxDeclNGen_1917_);
lean_inc(v_ngen_1916_);
lean_inc(v_env_1915_);
lean_dec(v___x_1914_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1933_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1927_ = lean_box(0);
if (v_isShared_1926_ == 0)
{
lean_ctor_set(v___x_1925_, 1, v_next_1910_);
v___x_1929_ = v___x_1925_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_env_1915_);
lean_ctor_set(v_reuseFailAlloc_1932_, 1, v_next_1910_);
lean_ctor_set(v_reuseFailAlloc_1932_, 2, v_ngen_1916_);
lean_ctor_set(v_reuseFailAlloc_1932_, 3, v_auxDeclNGen_1917_);
lean_ctor_set(v_reuseFailAlloc_1932_, 4, v_traceState_1918_);
lean_ctor_set(v_reuseFailAlloc_1932_, 5, v_cache_1919_);
lean_ctor_set(v_reuseFailAlloc_1932_, 6, v_recordedDeps_1920_);
lean_ctor_set(v_reuseFailAlloc_1932_, 7, v_messages_1921_);
lean_ctor_set(v_reuseFailAlloc_1932_, 8, v_infoState_1922_);
lean_ctor_set(v_reuseFailAlloc_1932_, 9, v_snapshotTasks_1923_);
v___x_1929_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1930_ = lean_st_ref_put(v___y_1912_, v___x_1929_);
v___x_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1927_);
return v___x_1931_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterCoreM___lam__1___boxed(lean_object* v_next_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_Lean_Elab_instMonadMacroAdapterCoreM___lam__1(v_next_1935_, v___y_1936_, v___y_1937_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
return v_res_1939_;
}
}
static lean_object* _init_l_Lean_Elab_instMonadMacroAdapterCoreM___closed__2(void){
_start:
{
lean_object* v___f_1942_; lean_object* v___f_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___f_1942_ = ((lean_object*)(l_Lean_Elab_instMonadMacroAdapterCoreM___closed__1));
v___f_1943_ = ((lean_object*)(l_Lean_Elab_instMonadMacroAdapterCoreM___closed__0));
v___x_1944_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1945_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1944_);
lean_ctor_set(v___x_1945_, 1, v___f_1943_);
lean_ctor_set(v___x_1945_, 2, v___f_1942_);
return v___x_1945_;
}
}
static lean_object* _init_l_Lean_Elab_instMonadMacroAdapterCoreM(void){
_start:
{
lean_object* v___x_1946_; 
v___x_1946_ = lean_obj_once(&l_Lean_Elab_instMonadMacroAdapterCoreM___closed__2, &l_Lean_Elab_instMonadMacroAdapterCoreM___closed__2_once, _init_l_Lean_Elab_instMonadMacroAdapterCoreM___closed__2);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__0(lean_object* v_toPure_1947_, lean_object* v_fst_1948_, lean_object* v_____do__lift_1949_, lean_object* v_____do__lift_1950_){
_start:
{
uint8_t v_hasTrace_1951_; 
v_hasTrace_1951_ = lean_ctor_get_uint8(v_____do__lift_1950_, sizeof(void*)*1);
if (v_hasTrace_1951_ == 0)
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
lean_dec(v_fst_1948_);
v___x_1952_ = lean_box(v_hasTrace_1951_);
v___x_1953_ = lean_apply_2(v_toPure_1947_, lean_box(0), v___x_1952_);
return v___x_1953_;
}
else
{
lean_object* v___x_1954_; lean_object* v___x_1955_; uint8_t v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1954_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11));
v___x_1955_ = l_Lean_Name_append(v___x_1954_, v_fst_1948_);
v___x_1956_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_1949_, v_____do__lift_1950_, v___x_1955_);
lean_dec(v___x_1955_);
v___x_1957_ = lean_box(v___x_1956_);
v___x_1958_ = lean_apply_2(v_toPure_1947_, lean_box(0), v___x_1957_);
return v___x_1958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__0___boxed(lean_object* v_toPure_1959_, lean_object* v_fst_1960_, lean_object* v_____do__lift_1961_, lean_object* v_____do__lift_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lean_Elab_liftMacroM___redArg___lam__0(v_toPure_1959_, v_fst_1960_, v_____do__lift_1961_, v_____do__lift_1962_);
lean_dec_ref(v_____do__lift_1962_);
lean_dec_ref(v_____do__lift_1961_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__1(lean_object* v_inst_1964_, lean_object* v_toPure_1965_, lean_object* v_fst_1966_, lean_object* v_toBind_1967_, lean_object* v_____do__lift_1968_){
_start:
{
lean_object* v_getOptionsUnrestricted_1969_; lean_object* v___f_1970_; lean_object* v___x_1971_; 
v_getOptionsUnrestricted_1969_ = lean_ctor_get(v_inst_1964_, 1);
lean_inc(v_getOptionsUnrestricted_1969_);
lean_dec_ref(v_inst_1964_);
v___f_1970_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1970_, 0, v_toPure_1965_);
lean_closure_set(v___f_1970_, 1, v_fst_1966_);
lean_closure_set(v___f_1970_, 2, v_____do__lift_1968_);
v___x_1971_ = lean_apply_4(v_toBind_1967_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_1969_, v___f_1970_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__2(lean_object* v_toPure_1972_, lean_object* v_snd_1973_, lean_object* v_inst_1974_, lean_object* v_inst_1975_, lean_object* v_toMonadRef_1976_, lean_object* v_inst_1977_, lean_object* v_fst_1978_, uint8_t v_____do__lift_1979_){
_start:
{
if (v_____do__lift_1979_ == 0)
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
lean_dec(v_fst_1978_);
lean_dec(v_inst_1977_);
lean_dec_ref(v_toMonadRef_1976_);
lean_dec_ref(v_inst_1975_);
lean_dec_ref(v_inst_1974_);
lean_dec_ref(v_snd_1973_);
v___x_1980_ = lean_box(0);
v___x_1981_ = lean_apply_2(v_toPure_1972_, lean_box(0), v___x_1980_);
return v___x_1981_;
}
else
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
lean_dec(v_toPure_1972_);
v___x_1982_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1982_, 0, v_snd_1973_);
v___x_1983_ = l_Lean_MessageData_ofFormat(v___x_1982_);
v___x_1984_ = l_Lean_addTrace___redArg(v_inst_1974_, v_inst_1975_, v_toMonadRef_1976_, v_inst_1977_, v_fst_1978_, v___x_1983_);
return v___x_1984_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__2___boxed(lean_object* v_toPure_1985_, lean_object* v_snd_1986_, lean_object* v_inst_1987_, lean_object* v_inst_1988_, lean_object* v_toMonadRef_1989_, lean_object* v_inst_1990_, lean_object* v_fst_1991_, lean_object* v_____do__lift_1992_){
_start:
{
uint8_t v_____do__lift_1482__boxed_1993_; lean_object* v_res_1994_; 
v_____do__lift_1482__boxed_1993_ = lean_unbox(v_____do__lift_1992_);
v_res_1994_ = l_Lean_Elab_liftMacroM___redArg___lam__2(v_toPure_1985_, v_snd_1986_, v_inst_1987_, v_inst_1988_, v_toMonadRef_1989_, v_inst_1990_, v_fst_1991_, v_____do__lift_1482__boxed_1993_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__3(lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_toPure_1997_, lean_object* v_toBind_1998_, lean_object* v_inst_1999_, lean_object* v_toMonadRef_2000_, lean_object* v_inst_2001_, lean_object* v_x_2002_){
_start:
{
lean_object* v_fst_2003_; lean_object* v_snd_2004_; lean_object* v_getInheritedTraceOptions_2005_; lean_object* v___f_2006_; lean_object* v___f_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v_fst_2003_ = lean_ctor_get(v_x_2002_, 0);
lean_inc_n(v_fst_2003_, 2);
v_snd_2004_ = lean_ctor_get(v_x_2002_, 1);
lean_inc(v_snd_2004_);
lean_dec_ref(v_x_2002_);
v_getInheritedTraceOptions_2005_ = lean_ctor_get(v_inst_1995_, 2);
lean_inc(v_getInheritedTraceOptions_2005_);
lean_inc_n(v_toBind_1998_, 2);
lean_inc(v_toPure_1997_);
v___f_2006_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2006_, 0, v_inst_1996_);
lean_closure_set(v___f_2006_, 1, v_toPure_1997_);
lean_closure_set(v___f_2006_, 2, v_fst_2003_);
lean_closure_set(v___f_2006_, 3, v_toBind_1998_);
v___f_2007_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_2007_, 0, v_toPure_1997_);
lean_closure_set(v___f_2007_, 1, v_snd_2004_);
lean_closure_set(v___f_2007_, 2, v_inst_1999_);
lean_closure_set(v___f_2007_, 3, v_inst_1995_);
lean_closure_set(v___f_2007_, 4, v_toMonadRef_2000_);
lean_closure_set(v___f_2007_, 5, v_inst_2001_);
lean_closure_set(v___f_2007_, 6, v_fst_2003_);
v___x_2008_ = lean_apply_4(v_toBind_1998_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_2005_, v___f_2006_);
v___x_2009_ = lean_apply_4(v_toBind_1998_, lean_box(0), lean_box(0), v___x_2008_, v___f_2007_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__4(lean_object* v_env_2010_, lean_object* v___x_2011_, lean_object* v___x_2012_, lean_object* v_stx_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_2010_, v_stx_2013_, v___y_2014_, v___y_2015_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2017_);
if (lean_obj_tag(v_a_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2026_; 
lean_dec(v___x_2012_);
lean_dec_ref(v___x_2011_);
v_a_2018_ = lean_ctor_get(v___x_2016_, 1);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2026_ == 0)
{
lean_object* v_unused_2027_; 
v_unused_2027_ = lean_ctor_get(v___x_2016_, 0);
lean_dec(v_unused_2027_);
v___x_2020_ = v___x_2016_;
v_isShared_2021_ = v_isSharedCheck_2026_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_2016_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2026_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2022_; lean_object* v___x_2024_; 
v___x_2022_ = lean_box(0);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 0, v___x_2022_);
v___x_2024_ = v___x_2020_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2022_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v_a_2018_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
else
{
lean_object* v_val_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2058_; 
v_val_2028_ = lean_ctor_get(v_a_2017_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v_a_2017_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2030_ = v_a_2017_;
v_isShared_2031_ = v_isSharedCheck_2058_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_val_2028_);
lean_dec(v_a_2017_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2058_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v_snd_2032_; 
v_snd_2032_ = lean_ctor_get(v_val_2028_, 1);
lean_inc(v_snd_2032_);
lean_dec(v_val_2028_);
if (lean_obj_tag(v_snd_2032_) == 0)
{
lean_object* v_a_2033_; lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2043_; 
lean_del_object(v___x_2030_);
v_a_2033_ = lean_ctor_get(v___x_2016_, 1);
lean_inc(v_a_2033_);
lean_dec_ref_known(v___x_2016_, 2);
v_a_2034_ = lean_ctor_get(v_snd_2032_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v_snd_2032_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2036_ = v_snd_2032_;
v_isShared_2037_ = v_isSharedCheck_2043_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v_snd_2032_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2043_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
lean_object* v___x_1224__overap_2040_; lean_object* v___x_2041_; 
v___x_1224__overap_2040_ = l_liftExcept___redArg(v___x_2011_, v___x_2012_, v___x_2039_);
lean_inc_ref(v___y_2014_);
v___x_2041_ = lean_apply_2(v___x_1224__overap_2040_, v___y_2014_, v_a_2033_);
return v___x_2041_;
}
}
}
else
{
lean_object* v_a_2044_; lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2057_; 
v_a_2044_ = lean_ctor_get(v___x_2016_, 1);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2016_, 2);
v_a_2045_ = lean_ctor_get(v_snd_2032_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_snd_2032_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2047_ = v_snd_2032_;
v_isShared_2048_ = v_isSharedCheck_2057_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v_snd_2032_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2057_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v_a_2045_);
v___x_2050_ = v___x_2030_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
lean_object* v___x_2052_; 
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v___x_2050_);
v___x_2052_ = v___x_2047_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
lean_object* v___x_1228__overap_2053_; lean_object* v___x_2054_; 
v___x_1228__overap_2053_ = l_liftExcept___redArg(v___x_2011_, v___x_2012_, v___x_2052_);
lean_inc_ref(v___y_2014_);
v___x_2054_ = lean_apply_2(v___x_1228__overap_2053_, v___y_2014_, v_a_2044_);
return v___x_2054_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2059_; lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_dec(v___x_2012_);
lean_dec_ref(v___x_2011_);
v_a_2059_ = lean_ctor_get(v___x_2016_, 0);
v_a_2060_ = lean_ctor_get(v___x_2016_, 1);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2016_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_inc(v_a_2059_);
lean_dec(v___x_2016_);
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
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2059_);
lean_ctor_set(v_reuseFailAlloc_2066_, 1, v_a_2060_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__4___boxed(lean_object* v_env_2068_, lean_object* v___x_2069_, lean_object* v___x_2070_, lean_object* v_stx_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lean_Elab_liftMacroM___redArg___lam__4(v_env_2068_, v___x_2069_, v___x_2070_, v_stx_2071_, v___y_2072_, v___y_2073_);
lean_dec_ref(v___y_2072_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__5(lean_object* v_env_2075_, lean_object* v_declName_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
uint8_t v___x_2079_; lean_object* v_env_2080_; lean_object* v___x_2081_; uint8_t v___x_2082_; uint8_t v___x_2083_; 
v___x_2079_ = 0;
v_env_2080_ = l_Lean_Environment_setExporting(v_env_2075_, v___x_2079_);
lean_inc(v_declName_2076_);
v___x_2081_ = l_Lean_mkPrivateName(v_env_2080_, v_declName_2076_);
v___x_2082_ = 1;
lean_inc_ref(v_env_2080_);
v___x_2083_ = l_Lean_Environment_contains(v_env_2080_, v___x_2081_, v___x_2082_);
if (v___x_2083_ == 0)
{
lean_object* v___x_2084_; uint8_t v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2084_ = l_Lean_privateToUserName(v_declName_2076_);
v___x_2085_ = l_Lean_Environment_contains(v_env_2080_, v___x_2084_, v___x_2082_);
v___x_2086_ = lean_box(v___x_2085_);
v___x_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
lean_ctor_set(v___x_2087_, 1, v___y_2078_);
return v___x_2087_;
}
else
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
lean_dec_ref(v_env_2080_);
lean_dec(v_declName_2076_);
v___x_2088_ = lean_box(v___x_2083_);
v___x_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
lean_ctor_set(v___x_2089_, 1, v___y_2078_);
return v___x_2089_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__5___boxed(lean_object* v_env_2090_, lean_object* v_declName_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = l_Lean_Elab_liftMacroM___redArg___lam__5(v_env_2090_, v_declName_2091_, v___y_2092_, v___y_2093_);
lean_dec_ref(v___y_2092_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__6(lean_object* v_env_2095_, lean_object* v_currNamespace_2096_, lean_object* v_openDecls_2097_, lean_object* v_n_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = l_Lean_ResolveName_resolveNamespace(v_env_2095_, v_currNamespace_2096_, v_openDecls_2097_, v_n_2098_);
v___x_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
lean_ctor_set(v___x_2102_, 1, v___y_2100_);
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__6___boxed(lean_object* v_env_2103_, lean_object* v_currNamespace_2104_, lean_object* v_openDecls_2105_, lean_object* v_n_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_Lean_Elab_liftMacroM___redArg___lam__6(v_env_2103_, v_currNamespace_2104_, v_openDecls_2105_, v_n_2106_, v___y_2107_, v___y_2108_);
lean_dec_ref(v___y_2107_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__7(lean_object* v_env_2110_, lean_object* v_opts_2111_, lean_object* v_currNamespace_2112_, lean_object* v_openDecls_2113_, lean_object* v_n_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = l_Lean_ResolveName_resolveGlobalName(v_env_2110_, v_opts_2111_, v_currNamespace_2112_, v_openDecls_2113_, v_n_2114_);
v___x_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
lean_ctor_set(v___x_2118_, 1, v___y_2116_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__7___boxed(lean_object* v_env_2119_, lean_object* v_opts_2120_, lean_object* v_currNamespace_2121_, lean_object* v_openDecls_2122_, lean_object* v_n_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lean_Elab_liftMacroM___redArg___lam__7(v_env_2119_, v_opts_2120_, v_currNamespace_2121_, v_openDecls_2122_, v_n_2123_, v___y_2124_, v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec_ref(v_opts_2120_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__8(lean_object* v_toPure_2127_, lean_object* v_a_2128_, lean_object* v_____r_2129_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = lean_apply_2(v_toPure_2127_, lean_box(0), v_a_2128_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__9(lean_object* v_traceMsgs_2131_, lean_object* v_inst_2132_, lean_object* v___f_2133_, lean_object* v_toBind_2134_, lean_object* v___f_2135_, lean_object* v_____r_2136_){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2137_ = l_List_reverse___redArg(v_traceMsgs_2131_);
v___x_2138_ = l_List_forM___redArg(v_inst_2132_, v___x_2137_, v___f_2133_);
v___x_2139_ = lean_apply_4(v_toBind_2134_, lean_box(0), lean_box(0), v___x_2138_, v___f_2135_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__10(lean_object* v_setNextMacroScope_2140_, lean_object* v_macroScope_2141_, lean_object* v_toBind_2142_, lean_object* v___f_2143_, lean_object* v_____s_2144_){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2145_ = lean_apply_1(v_setNextMacroScope_2140_, v_macroScope_2141_);
v___x_2146_ = lean_apply_4(v_toBind_2142_, lean_box(0), lean_box(0), v___x_2145_, v___f_2143_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__11(lean_object* v___x_2147_, lean_object* v_toPure_2148_, lean_object* v_____r_2149_){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2150_, 0, v___x_2147_);
v___x_2151_ = lean_apply_2(v_toPure_2148_, lean_box(0), v___x_2150_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__12(lean_object* v_inst_2152_, lean_object* v_inst_2153_, lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_toMonadRef_2156_, lean_object* v_inst_2157_, lean_object* v_toBind_2158_, lean_object* v___f_2159_, lean_object* v_a_2160_, lean_object* v_x_2161_, lean_object* v___y_2162_){
_start:
{
uint8_t v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2163_ = 1;
v___x_2164_ = l_Lean_recordExtraModUseFromDecl___redArg(v_inst_2152_, v_inst_2153_, v_inst_2154_, v_inst_2155_, v_toMonadRef_2156_, v_inst_2157_, v_a_2160_, v___x_2163_);
v___x_2165_ = lean_apply_4(v_toBind_2158_, lean_box(0), lean_box(0), v___x_2164_, v___f_2159_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13(lean_object* v_methods_2167_, lean_object* v_____do__lift_2168_, lean_object* v_____do__lift_2169_, lean_object* v_____do__lift_2170_, lean_object* v_____do__lift_2171_, lean_object* v_____do__lift_2172_, lean_object* v_x_2173_, lean_object* v_toPure_2174_, lean_object* v_inst_2175_, lean_object* v___f_2176_, lean_object* v_toBind_2177_, lean_object* v_setNextMacroScope_2178_, lean_object* v_inst_2179_, lean_object* v_inst_2180_, lean_object* v_inst_2181_, lean_object* v_toMonadRef_2182_, lean_object* v_inst_2183_, lean_object* v_inst_2184_, lean_object* v_toMonadExceptOf_2185_, lean_object* v_____do__lift_2186_){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2187_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2187_, 0, v_methods_2167_);
lean_ctor_set(v___x_2187_, 1, v_____do__lift_2168_);
lean_ctor_set(v___x_2187_, 2, v_____do__lift_2169_);
lean_ctor_set(v___x_2187_, 3, v_____do__lift_2170_);
lean_ctor_set(v___x_2187_, 4, v_____do__lift_2171_);
lean_ctor_set(v___x_2187_, 5, v_____do__lift_2172_);
v___x_2188_ = lean_box(0);
v___x_2189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2189_, 0, v_____do__lift_2186_);
lean_ctor_set(v___x_2189_, 1, v___x_2188_);
lean_ctor_set(v___x_2189_, 2, v___x_2188_);
v___x_2190_ = lean_apply_2(v_x_2173_, v___x_2187_, v___x_2189_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v_a_2191_; lean_object* v_a_2192_; lean_object* v_macroScope_2193_; lean_object* v_traceMsgs_2194_; lean_object* v_expandedMacroDecls_2195_; lean_object* v___f_2196_; lean_object* v___f_2197_; lean_object* v___f_2198_; lean_object* v___x_2199_; lean_object* v___f_2200_; lean_object* v___f_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
lean_dec_ref(v_toMonadExceptOf_2185_);
lean_dec_ref(v_inst_2184_);
v_a_2191_ = lean_ctor_get(v___x_2190_, 1);
lean_inc(v_a_2191_);
v_a_2192_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_a_2192_);
lean_dec_ref_known(v___x_2190_, 2);
v_macroScope_2193_ = lean_ctor_get(v_a_2191_, 0);
lean_inc(v_macroScope_2193_);
v_traceMsgs_2194_ = lean_ctor_get(v_a_2191_, 1);
lean_inc(v_traceMsgs_2194_);
v_expandedMacroDecls_2195_ = lean_ctor_get(v_a_2191_, 2);
lean_inc(v_expandedMacroDecls_2195_);
lean_dec(v_a_2191_);
lean_inc(v_toPure_2174_);
v___f_2196_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__8), 3, 2);
lean_closure_set(v___f_2196_, 0, v_toPure_2174_);
lean_closure_set(v___f_2196_, 1, v_a_2192_);
lean_inc_n(v_toBind_2177_, 3);
lean_inc_ref_n(v_inst_2175_, 2);
v___f_2197_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__9), 6, 5);
lean_closure_set(v___f_2197_, 0, v_traceMsgs_2194_);
lean_closure_set(v___f_2197_, 1, v_inst_2175_);
lean_closure_set(v___f_2197_, 2, v___f_2176_);
lean_closure_set(v___f_2197_, 3, v_toBind_2177_);
lean_closure_set(v___f_2197_, 4, v___f_2196_);
v___f_2198_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__10), 5, 4);
lean_closure_set(v___f_2198_, 0, v_setNextMacroScope_2178_);
lean_closure_set(v___f_2198_, 1, v_macroScope_2193_);
lean_closure_set(v___f_2198_, 2, v_toBind_2177_);
lean_closure_set(v___f_2198_, 3, v___f_2197_);
v___x_2199_ = lean_box(0);
v___f_2200_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__11), 3, 2);
lean_closure_set(v___f_2200_, 0, v___x_2199_);
lean_closure_set(v___f_2200_, 1, v_toPure_2174_);
v___f_2201_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__12), 11, 8);
lean_closure_set(v___f_2201_, 0, v_inst_2175_);
lean_closure_set(v___f_2201_, 1, v_inst_2179_);
lean_closure_set(v___f_2201_, 2, v_inst_2180_);
lean_closure_set(v___f_2201_, 3, v_inst_2181_);
lean_closure_set(v___f_2201_, 4, v_toMonadRef_2182_);
lean_closure_set(v___f_2201_, 5, v_inst_2183_);
lean_closure_set(v___f_2201_, 6, v_toBind_2177_);
lean_closure_set(v___f_2201_, 7, v___f_2200_);
v___x_2202_ = l_List_forIn_x27_loop___redArg(v_inst_2175_, v___f_2201_, v_expandedMacroDecls_2195_, v___x_2199_);
lean_dec(v_expandedMacroDecls_2195_);
v___x_2203_ = lean_apply_4(v_toBind_2177_, lean_box(0), lean_box(0), v___x_2202_, v___f_2198_);
return v___x_2203_;
}
else
{
lean_object* v_a_2204_; 
lean_dec(v_inst_2183_);
lean_dec_ref(v_toMonadRef_2182_);
lean_dec_ref(v_inst_2181_);
lean_dec_ref(v_inst_2180_);
lean_dec_ref(v_inst_2179_);
lean_dec(v_setNextMacroScope_2178_);
lean_dec(v_toBind_2177_);
lean_dec(v___f_2176_);
lean_dec(v_toPure_2174_);
v_a_2204_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_a_2204_);
lean_dec_ref_known(v___x_2190_, 2);
if (lean_obj_tag(v_a_2204_) == 0)
{
lean_object* v_a_2205_; lean_object* v_a_2206_; lean_object* v___x_2207_; uint8_t v___x_2208_; 
lean_dec_ref(v_toMonadExceptOf_2185_);
v_a_2205_ = lean_ctor_get(v_a_2204_, 0);
lean_inc(v_a_2205_);
v_a_2206_ = lean_ctor_get(v_a_2204_, 1);
lean_inc_ref(v_a_2206_);
lean_dec_ref_known(v_a_2204_, 2);
v___x_2207_ = ((lean_object*)(l_Lean_Elab_liftMacroM___redArg___lam__13___closed__0));
v___x_2208_ = lean_string_dec_eq(v_a_2206_, v___x_2207_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2209_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2209_, 0, v_a_2206_);
v___x_2210_ = l_Lean_MessageData_ofFormat(v___x_2209_);
v___x_2211_ = l_Lean_throwErrorAt___redArg(v_inst_2175_, v_inst_2184_, v_a_2205_, v___x_2210_);
return v___x_2211_;
}
else
{
lean_object* v___x_2212_; 
lean_dec_ref(v_a_2206_);
lean_dec_ref(v_inst_2175_);
v___x_2212_ = l_Lean_throwMaxRecDepthAt___redArg(v_inst_2184_, v_a_2205_);
return v___x_2212_;
}
}
else
{
lean_object* v___x_2213_; 
lean_dec_ref(v_inst_2184_);
lean_dec_ref(v_inst_2175_);
v___x_2213_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_2185_);
return v___x_2213_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_methods_2214_ = _args[0];
lean_object* v_____do__lift_2215_ = _args[1];
lean_object* v_____do__lift_2216_ = _args[2];
lean_object* v_____do__lift_2217_ = _args[3];
lean_object* v_____do__lift_2218_ = _args[4];
lean_object* v_____do__lift_2219_ = _args[5];
lean_object* v_x_2220_ = _args[6];
lean_object* v_toPure_2221_ = _args[7];
lean_object* v_inst_2222_ = _args[8];
lean_object* v___f_2223_ = _args[9];
lean_object* v_toBind_2224_ = _args[10];
lean_object* v_setNextMacroScope_2225_ = _args[11];
lean_object* v_inst_2226_ = _args[12];
lean_object* v_inst_2227_ = _args[13];
lean_object* v_inst_2228_ = _args[14];
lean_object* v_toMonadRef_2229_ = _args[15];
lean_object* v_inst_2230_ = _args[16];
lean_object* v_inst_2231_ = _args[17];
lean_object* v_toMonadExceptOf_2232_ = _args[18];
lean_object* v_____do__lift_2233_ = _args[19];
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_Elab_liftMacroM___redArg___lam__13(v_methods_2214_, v_____do__lift_2215_, v_____do__lift_2216_, v_____do__lift_2217_, v_____do__lift_2218_, v_____do__lift_2219_, v_x_2220_, v_toPure_2221_, v_inst_2222_, v___f_2223_, v_toBind_2224_, v_setNextMacroScope_2225_, v_inst_2226_, v_inst_2227_, v_inst_2228_, v_toMonadRef_2229_, v_inst_2230_, v_inst_2231_, v_toMonadExceptOf_2232_, v_____do__lift_2233_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__14(lean_object* v_methods_2235_, lean_object* v_____do__lift_2236_, lean_object* v_____do__lift_2237_, lean_object* v_____do__lift_2238_, lean_object* v_____do__lift_2239_, lean_object* v_x_2240_, lean_object* v_toPure_2241_, lean_object* v_inst_2242_, lean_object* v___f_2243_, lean_object* v_toBind_2244_, lean_object* v_setNextMacroScope_2245_, lean_object* v_inst_2246_, lean_object* v_inst_2247_, lean_object* v_inst_2248_, lean_object* v_toMonadRef_2249_, lean_object* v_inst_2250_, lean_object* v_inst_2251_, lean_object* v_toMonadExceptOf_2252_, lean_object* v_getNextMacroScope_2253_, lean_object* v_____do__lift_2254_){
_start:
{
lean_object* v___f_2255_; lean_object* v___x_2256_; 
lean_inc(v_toBind_2244_);
v___f_2255_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__13___boxed), 20, 19);
lean_closure_set(v___f_2255_, 0, v_methods_2235_);
lean_closure_set(v___f_2255_, 1, v_____do__lift_2236_);
lean_closure_set(v___f_2255_, 2, v_____do__lift_2237_);
lean_closure_set(v___f_2255_, 3, v_____do__lift_2238_);
lean_closure_set(v___f_2255_, 4, v_____do__lift_2254_);
lean_closure_set(v___f_2255_, 5, v_____do__lift_2239_);
lean_closure_set(v___f_2255_, 6, v_x_2240_);
lean_closure_set(v___f_2255_, 7, v_toPure_2241_);
lean_closure_set(v___f_2255_, 8, v_inst_2242_);
lean_closure_set(v___f_2255_, 9, v___f_2243_);
lean_closure_set(v___f_2255_, 10, v_toBind_2244_);
lean_closure_set(v___f_2255_, 11, v_setNextMacroScope_2245_);
lean_closure_set(v___f_2255_, 12, v_inst_2246_);
lean_closure_set(v___f_2255_, 13, v_inst_2247_);
lean_closure_set(v___f_2255_, 14, v_inst_2248_);
lean_closure_set(v___f_2255_, 15, v_toMonadRef_2249_);
lean_closure_set(v___f_2255_, 16, v_inst_2250_);
lean_closure_set(v___f_2255_, 17, v_inst_2251_);
lean_closure_set(v___f_2255_, 18, v_toMonadExceptOf_2252_);
v___x_2256_ = lean_apply_4(v_toBind_2244_, lean_box(0), lean_box(0), v_getNextMacroScope_2253_, v___f_2255_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__14___boxed(lean_object** _args){
lean_object* v_methods_2257_ = _args[0];
lean_object* v_____do__lift_2258_ = _args[1];
lean_object* v_____do__lift_2259_ = _args[2];
lean_object* v_____do__lift_2260_ = _args[3];
lean_object* v_____do__lift_2261_ = _args[4];
lean_object* v_x_2262_ = _args[5];
lean_object* v_toPure_2263_ = _args[6];
lean_object* v_inst_2264_ = _args[7];
lean_object* v___f_2265_ = _args[8];
lean_object* v_toBind_2266_ = _args[9];
lean_object* v_setNextMacroScope_2267_ = _args[10];
lean_object* v_inst_2268_ = _args[11];
lean_object* v_inst_2269_ = _args[12];
lean_object* v_inst_2270_ = _args[13];
lean_object* v_toMonadRef_2271_ = _args[14];
lean_object* v_inst_2272_ = _args[15];
lean_object* v_inst_2273_ = _args[16];
lean_object* v_toMonadExceptOf_2274_ = _args[17];
lean_object* v_getNextMacroScope_2275_ = _args[18];
lean_object* v_____do__lift_2276_ = _args[19];
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lean_Elab_liftMacroM___redArg___lam__14(v_methods_2257_, v_____do__lift_2258_, v_____do__lift_2259_, v_____do__lift_2260_, v_____do__lift_2261_, v_x_2262_, v_toPure_2263_, v_inst_2264_, v___f_2265_, v_toBind_2266_, v_setNextMacroScope_2267_, v_inst_2268_, v_inst_2269_, v_inst_2270_, v_toMonadRef_2271_, v_inst_2272_, v_inst_2273_, v_toMonadExceptOf_2274_, v_getNextMacroScope_2275_, v_____do__lift_2276_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__15(lean_object* v_methods_2278_, lean_object* v_____do__lift_2279_, lean_object* v_____do__lift_2280_, lean_object* v_____do__lift_2281_, lean_object* v_x_2282_, lean_object* v_toPure_2283_, lean_object* v_inst_2284_, lean_object* v___f_2285_, lean_object* v_toBind_2286_, lean_object* v_setNextMacroScope_2287_, lean_object* v_inst_2288_, lean_object* v_inst_2289_, lean_object* v_inst_2290_, lean_object* v_toMonadRef_2291_, lean_object* v_inst_2292_, lean_object* v_inst_2293_, lean_object* v_toMonadExceptOf_2294_, lean_object* v_getNextMacroScope_2295_, lean_object* v_getMaxRecDepth_2296_, lean_object* v_____do__lift_2297_){
_start:
{
lean_object* v___f_2298_; lean_object* v___x_2299_; 
lean_inc(v_toBind_2286_);
v___f_2298_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__14___boxed), 20, 19);
lean_closure_set(v___f_2298_, 0, v_methods_2278_);
lean_closure_set(v___f_2298_, 1, v_____do__lift_2279_);
lean_closure_set(v___f_2298_, 2, v_____do__lift_2280_);
lean_closure_set(v___f_2298_, 3, v_____do__lift_2297_);
lean_closure_set(v___f_2298_, 4, v_____do__lift_2281_);
lean_closure_set(v___f_2298_, 5, v_x_2282_);
lean_closure_set(v___f_2298_, 6, v_toPure_2283_);
lean_closure_set(v___f_2298_, 7, v_inst_2284_);
lean_closure_set(v___f_2298_, 8, v___f_2285_);
lean_closure_set(v___f_2298_, 9, v_toBind_2286_);
lean_closure_set(v___f_2298_, 10, v_setNextMacroScope_2287_);
lean_closure_set(v___f_2298_, 11, v_inst_2288_);
lean_closure_set(v___f_2298_, 12, v_inst_2289_);
lean_closure_set(v___f_2298_, 13, v_inst_2290_);
lean_closure_set(v___f_2298_, 14, v_toMonadRef_2291_);
lean_closure_set(v___f_2298_, 15, v_inst_2292_);
lean_closure_set(v___f_2298_, 16, v_inst_2293_);
lean_closure_set(v___f_2298_, 17, v_toMonadExceptOf_2294_);
lean_closure_set(v___f_2298_, 18, v_getNextMacroScope_2295_);
v___x_2299_ = lean_apply_4(v_toBind_2286_, lean_box(0), lean_box(0), v_getMaxRecDepth_2296_, v___f_2298_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__15___boxed(lean_object** _args){
lean_object* v_methods_2300_ = _args[0];
lean_object* v_____do__lift_2301_ = _args[1];
lean_object* v_____do__lift_2302_ = _args[2];
lean_object* v_____do__lift_2303_ = _args[3];
lean_object* v_x_2304_ = _args[4];
lean_object* v_toPure_2305_ = _args[5];
lean_object* v_inst_2306_ = _args[6];
lean_object* v___f_2307_ = _args[7];
lean_object* v_toBind_2308_ = _args[8];
lean_object* v_setNextMacroScope_2309_ = _args[9];
lean_object* v_inst_2310_ = _args[10];
lean_object* v_inst_2311_ = _args[11];
lean_object* v_inst_2312_ = _args[12];
lean_object* v_toMonadRef_2313_ = _args[13];
lean_object* v_inst_2314_ = _args[14];
lean_object* v_inst_2315_ = _args[15];
lean_object* v_toMonadExceptOf_2316_ = _args[16];
lean_object* v_getNextMacroScope_2317_ = _args[17];
lean_object* v_getMaxRecDepth_2318_ = _args[18];
lean_object* v_____do__lift_2319_ = _args[19];
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l_Lean_Elab_liftMacroM___redArg___lam__15(v_methods_2300_, v_____do__lift_2301_, v_____do__lift_2302_, v_____do__lift_2303_, v_x_2304_, v_toPure_2305_, v_inst_2306_, v___f_2307_, v_toBind_2308_, v_setNextMacroScope_2309_, v_inst_2310_, v_inst_2311_, v_inst_2312_, v_toMonadRef_2313_, v_inst_2314_, v_inst_2315_, v_toMonadExceptOf_2316_, v_getNextMacroScope_2317_, v_getMaxRecDepth_2318_, v_____do__lift_2319_);
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__16(lean_object* v_inst_2321_, lean_object* v_methods_2322_, lean_object* v_____do__lift_2323_, lean_object* v_____do__lift_2324_, lean_object* v_x_2325_, lean_object* v_toPure_2326_, lean_object* v_inst_2327_, lean_object* v___f_2328_, lean_object* v_toBind_2329_, lean_object* v_setNextMacroScope_2330_, lean_object* v_inst_2331_, lean_object* v_inst_2332_, lean_object* v_inst_2333_, lean_object* v_toMonadRef_2334_, lean_object* v_inst_2335_, lean_object* v_inst_2336_, lean_object* v_toMonadExceptOf_2337_, lean_object* v_getNextMacroScope_2338_, lean_object* v_____do__lift_2339_){
_start:
{
lean_object* v_getRecDepth_2340_; lean_object* v_getMaxRecDepth_2341_; lean_object* v___f_2342_; lean_object* v___x_2343_; 
v_getRecDepth_2340_ = lean_ctor_get(v_inst_2321_, 1);
lean_inc(v_getRecDepth_2340_);
v_getMaxRecDepth_2341_ = lean_ctor_get(v_inst_2321_, 2);
lean_inc(v_getMaxRecDepth_2341_);
lean_dec_ref(v_inst_2321_);
lean_inc(v_toBind_2329_);
v___f_2342_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__15___boxed), 20, 19);
lean_closure_set(v___f_2342_, 0, v_methods_2322_);
lean_closure_set(v___f_2342_, 1, v_____do__lift_2339_);
lean_closure_set(v___f_2342_, 2, v_____do__lift_2323_);
lean_closure_set(v___f_2342_, 3, v_____do__lift_2324_);
lean_closure_set(v___f_2342_, 4, v_x_2325_);
lean_closure_set(v___f_2342_, 5, v_toPure_2326_);
lean_closure_set(v___f_2342_, 6, v_inst_2327_);
lean_closure_set(v___f_2342_, 7, v___f_2328_);
lean_closure_set(v___f_2342_, 8, v_toBind_2329_);
lean_closure_set(v___f_2342_, 9, v_setNextMacroScope_2330_);
lean_closure_set(v___f_2342_, 10, v_inst_2331_);
lean_closure_set(v___f_2342_, 11, v_inst_2332_);
lean_closure_set(v___f_2342_, 12, v_inst_2333_);
lean_closure_set(v___f_2342_, 13, v_toMonadRef_2334_);
lean_closure_set(v___f_2342_, 14, v_inst_2335_);
lean_closure_set(v___f_2342_, 15, v_inst_2336_);
lean_closure_set(v___f_2342_, 16, v_toMonadExceptOf_2337_);
lean_closure_set(v___f_2342_, 17, v_getNextMacroScope_2338_);
lean_closure_set(v___f_2342_, 18, v_getMaxRecDepth_2341_);
v___x_2343_ = lean_apply_4(v_toBind_2329_, lean_box(0), lean_box(0), v_getRecDepth_2340_, v___f_2342_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__16___boxed(lean_object** _args){
lean_object* v_inst_2344_ = _args[0];
lean_object* v_methods_2345_ = _args[1];
lean_object* v_____do__lift_2346_ = _args[2];
lean_object* v_____do__lift_2347_ = _args[3];
lean_object* v_x_2348_ = _args[4];
lean_object* v_toPure_2349_ = _args[5];
lean_object* v_inst_2350_ = _args[6];
lean_object* v___f_2351_ = _args[7];
lean_object* v_toBind_2352_ = _args[8];
lean_object* v_setNextMacroScope_2353_ = _args[9];
lean_object* v_inst_2354_ = _args[10];
lean_object* v_inst_2355_ = _args[11];
lean_object* v_inst_2356_ = _args[12];
lean_object* v_toMonadRef_2357_ = _args[13];
lean_object* v_inst_2358_ = _args[14];
lean_object* v_inst_2359_ = _args[15];
lean_object* v_toMonadExceptOf_2360_ = _args[16];
lean_object* v_getNextMacroScope_2361_ = _args[17];
lean_object* v_____do__lift_2362_ = _args[18];
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_Elab_liftMacroM___redArg___lam__16(v_inst_2344_, v_methods_2345_, v_____do__lift_2346_, v_____do__lift_2347_, v_x_2348_, v_toPure_2349_, v_inst_2350_, v___f_2351_, v_toBind_2352_, v_setNextMacroScope_2353_, v_inst_2354_, v_inst_2355_, v_inst_2356_, v_toMonadRef_2357_, v_inst_2358_, v_inst_2359_, v_toMonadExceptOf_2360_, v_getNextMacroScope_2361_, v_____do__lift_2362_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__17(lean_object* v_inst_2364_, lean_object* v_methods_2365_, lean_object* v_____do__lift_2366_, lean_object* v_x_2367_, lean_object* v_toPure_2368_, lean_object* v_inst_2369_, lean_object* v___f_2370_, lean_object* v_toBind_2371_, lean_object* v_setNextMacroScope_2372_, lean_object* v_inst_2373_, lean_object* v_inst_2374_, lean_object* v_inst_2375_, lean_object* v_toMonadRef_2376_, lean_object* v_inst_2377_, lean_object* v_inst_2378_, lean_object* v_toMonadExceptOf_2379_, lean_object* v_getNextMacroScope_2380_, lean_object* v_getContext_2381_, lean_object* v_____do__lift_2382_){
_start:
{
lean_object* v___f_2383_; lean_object* v___x_2384_; 
lean_inc(v_toBind_2371_);
v___f_2383_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__16___boxed), 19, 18);
lean_closure_set(v___f_2383_, 0, v_inst_2364_);
lean_closure_set(v___f_2383_, 1, v_methods_2365_);
lean_closure_set(v___f_2383_, 2, v_____do__lift_2382_);
lean_closure_set(v___f_2383_, 3, v_____do__lift_2366_);
lean_closure_set(v___f_2383_, 4, v_x_2367_);
lean_closure_set(v___f_2383_, 5, v_toPure_2368_);
lean_closure_set(v___f_2383_, 6, v_inst_2369_);
lean_closure_set(v___f_2383_, 7, v___f_2370_);
lean_closure_set(v___f_2383_, 8, v_toBind_2371_);
lean_closure_set(v___f_2383_, 9, v_setNextMacroScope_2372_);
lean_closure_set(v___f_2383_, 10, v_inst_2373_);
lean_closure_set(v___f_2383_, 11, v_inst_2374_);
lean_closure_set(v___f_2383_, 12, v_inst_2375_);
lean_closure_set(v___f_2383_, 13, v_toMonadRef_2376_);
lean_closure_set(v___f_2383_, 14, v_inst_2377_);
lean_closure_set(v___f_2383_, 15, v_inst_2378_);
lean_closure_set(v___f_2383_, 16, v_toMonadExceptOf_2379_);
lean_closure_set(v___f_2383_, 17, v_getNextMacroScope_2380_);
v___x_2384_ = lean_apply_4(v_toBind_2371_, lean_box(0), lean_box(0), v_getContext_2381_, v___f_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__17___boxed(lean_object** _args){
lean_object* v_inst_2385_ = _args[0];
lean_object* v_methods_2386_ = _args[1];
lean_object* v_____do__lift_2387_ = _args[2];
lean_object* v_x_2388_ = _args[3];
lean_object* v_toPure_2389_ = _args[4];
lean_object* v_inst_2390_ = _args[5];
lean_object* v___f_2391_ = _args[6];
lean_object* v_toBind_2392_ = _args[7];
lean_object* v_setNextMacroScope_2393_ = _args[8];
lean_object* v_inst_2394_ = _args[9];
lean_object* v_inst_2395_ = _args[10];
lean_object* v_inst_2396_ = _args[11];
lean_object* v_toMonadRef_2397_ = _args[12];
lean_object* v_inst_2398_ = _args[13];
lean_object* v_inst_2399_ = _args[14];
lean_object* v_toMonadExceptOf_2400_ = _args[15];
lean_object* v_getNextMacroScope_2401_ = _args[16];
lean_object* v_getContext_2402_ = _args[17];
lean_object* v_____do__lift_2403_ = _args[18];
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Lean_Elab_liftMacroM___redArg___lam__17(v_inst_2385_, v_methods_2386_, v_____do__lift_2387_, v_x_2388_, v_toPure_2389_, v_inst_2390_, v___f_2391_, v_toBind_2392_, v_setNextMacroScope_2393_, v_inst_2394_, v_inst_2395_, v_inst_2396_, v_toMonadRef_2397_, v_inst_2398_, v_inst_2399_, v_toMonadExceptOf_2400_, v_getNextMacroScope_2401_, v_getContext_2402_, v_____do__lift_2403_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__18(lean_object* v_toMonadQuotation_2405_, lean_object* v_inst_2406_, lean_object* v_methods_2407_, lean_object* v_x_2408_, lean_object* v_toPure_2409_, lean_object* v_inst_2410_, lean_object* v___f_2411_, lean_object* v_toBind_2412_, lean_object* v_setNextMacroScope_2413_, lean_object* v_inst_2414_, lean_object* v_inst_2415_, lean_object* v_inst_2416_, lean_object* v_toMonadRef_2417_, lean_object* v_inst_2418_, lean_object* v_inst_2419_, lean_object* v_toMonadExceptOf_2420_, lean_object* v_getNextMacroScope_2421_, lean_object* v_____do__lift_2422_){
_start:
{
lean_object* v_getCurrMacroScope_2423_; lean_object* v_getContext_2424_; lean_object* v___f_2425_; lean_object* v___x_2426_; 
v_getCurrMacroScope_2423_ = lean_ctor_get(v_toMonadQuotation_2405_, 1);
lean_inc(v_getCurrMacroScope_2423_);
v_getContext_2424_ = lean_ctor_get(v_toMonadQuotation_2405_, 2);
lean_inc(v_getContext_2424_);
lean_dec_ref(v_toMonadQuotation_2405_);
lean_inc(v_toBind_2412_);
v___f_2425_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__17___boxed), 19, 18);
lean_closure_set(v___f_2425_, 0, v_inst_2406_);
lean_closure_set(v___f_2425_, 1, v_methods_2407_);
lean_closure_set(v___f_2425_, 2, v_____do__lift_2422_);
lean_closure_set(v___f_2425_, 3, v_x_2408_);
lean_closure_set(v___f_2425_, 4, v_toPure_2409_);
lean_closure_set(v___f_2425_, 5, v_inst_2410_);
lean_closure_set(v___f_2425_, 6, v___f_2411_);
lean_closure_set(v___f_2425_, 7, v_toBind_2412_);
lean_closure_set(v___f_2425_, 8, v_setNextMacroScope_2413_);
lean_closure_set(v___f_2425_, 9, v_inst_2414_);
lean_closure_set(v___f_2425_, 10, v_inst_2415_);
lean_closure_set(v___f_2425_, 11, v_inst_2416_);
lean_closure_set(v___f_2425_, 12, v_toMonadRef_2417_);
lean_closure_set(v___f_2425_, 13, v_inst_2418_);
lean_closure_set(v___f_2425_, 14, v_inst_2419_);
lean_closure_set(v___f_2425_, 15, v_toMonadExceptOf_2420_);
lean_closure_set(v___f_2425_, 16, v_getNextMacroScope_2421_);
lean_closure_set(v___f_2425_, 17, v_getContext_2424_);
v___x_2426_ = lean_apply_4(v_toBind_2412_, lean_box(0), lean_box(0), v_getCurrMacroScope_2423_, v___f_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__18___boxed(lean_object** _args){
lean_object* v_toMonadQuotation_2427_ = _args[0];
lean_object* v_inst_2428_ = _args[1];
lean_object* v_methods_2429_ = _args[2];
lean_object* v_x_2430_ = _args[3];
lean_object* v_toPure_2431_ = _args[4];
lean_object* v_inst_2432_ = _args[5];
lean_object* v___f_2433_ = _args[6];
lean_object* v_toBind_2434_ = _args[7];
lean_object* v_setNextMacroScope_2435_ = _args[8];
lean_object* v_inst_2436_ = _args[9];
lean_object* v_inst_2437_ = _args[10];
lean_object* v_inst_2438_ = _args[11];
lean_object* v_toMonadRef_2439_ = _args[12];
lean_object* v_inst_2440_ = _args[13];
lean_object* v_inst_2441_ = _args[14];
lean_object* v_toMonadExceptOf_2442_ = _args[15];
lean_object* v_getNextMacroScope_2443_ = _args[16];
lean_object* v_____do__lift_2444_ = _args[17];
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lean_Elab_liftMacroM___redArg___lam__18(v_toMonadQuotation_2427_, v_inst_2428_, v_methods_2429_, v_x_2430_, v_toPure_2431_, v_inst_2432_, v___f_2433_, v_toBind_2434_, v_setNextMacroScope_2435_, v_inst_2436_, v_inst_2437_, v_inst_2438_, v_toMonadRef_2439_, v_inst_2440_, v_inst_2441_, v_toMonadExceptOf_2442_, v_getNextMacroScope_2443_, v_____do__lift_2444_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__19(lean_object* v_toMonadRef_2446_, lean_object* v_env_2447_, lean_object* v_currNamespace_2448_, lean_object* v_opts_2449_, lean_object* v___x_2450_, lean_object* v___f_2451_, lean_object* v___f_2452_, lean_object* v_toMonadQuotation_2453_, lean_object* v_inst_2454_, lean_object* v_x_2455_, lean_object* v_toPure_2456_, lean_object* v_inst_2457_, lean_object* v___f_2458_, lean_object* v_toBind_2459_, lean_object* v_setNextMacroScope_2460_, lean_object* v_inst_2461_, lean_object* v_inst_2462_, lean_object* v_inst_2463_, lean_object* v_inst_2464_, lean_object* v_inst_2465_, lean_object* v_toMonadExceptOf_2466_, lean_object* v_getNextMacroScope_2467_, lean_object* v_openDecls_2468_){
_start:
{
lean_object* v_getRef_2469_; lean_object* v___f_2470_; lean_object* v___f_2471_; lean_object* v___x_2472_; lean_object* v_methods_2473_; lean_object* v___f_2474_; lean_object* v___x_2475_; 
v_getRef_2469_ = lean_ctor_get(v_toMonadRef_2446_, 0);
lean_inc(v_getRef_2469_);
lean_inc(v_openDecls_2468_);
lean_inc_n(v_currNamespace_2448_, 2);
lean_inc_ref(v_env_2447_);
v___f_2470_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__6___boxed), 6, 3);
lean_closure_set(v___f_2470_, 0, v_env_2447_);
lean_closure_set(v___f_2470_, 1, v_currNamespace_2448_);
lean_closure_set(v___f_2470_, 2, v_openDecls_2468_);
v___f_2471_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_2471_, 0, v_env_2447_);
lean_closure_set(v___f_2471_, 1, v_opts_2449_);
lean_closure_set(v___f_2471_, 2, v_currNamespace_2448_);
lean_closure_set(v___f_2471_, 3, v_openDecls_2468_);
v___x_2472_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 5);
lean_closure_set(v___x_2472_, 0, lean_box(0));
lean_closure_set(v___x_2472_, 1, lean_box(0));
lean_closure_set(v___x_2472_, 2, v___x_2450_);
lean_closure_set(v___x_2472_, 3, lean_box(0));
lean_closure_set(v___x_2472_, 4, v_currNamespace_2448_);
v_methods_2473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_2473_, 0, v___f_2451_);
lean_ctor_set(v_methods_2473_, 1, v___x_2472_);
lean_ctor_set(v_methods_2473_, 2, v___f_2452_);
lean_ctor_set(v_methods_2473_, 3, v___f_2470_);
lean_ctor_set(v_methods_2473_, 4, v___f_2471_);
lean_inc(v_toBind_2459_);
v___f_2474_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__18___boxed), 18, 17);
lean_closure_set(v___f_2474_, 0, v_toMonadQuotation_2453_);
lean_closure_set(v___f_2474_, 1, v_inst_2454_);
lean_closure_set(v___f_2474_, 2, v_methods_2473_);
lean_closure_set(v___f_2474_, 3, v_x_2455_);
lean_closure_set(v___f_2474_, 4, v_toPure_2456_);
lean_closure_set(v___f_2474_, 5, v_inst_2457_);
lean_closure_set(v___f_2474_, 6, v___f_2458_);
lean_closure_set(v___f_2474_, 7, v_toBind_2459_);
lean_closure_set(v___f_2474_, 8, v_setNextMacroScope_2460_);
lean_closure_set(v___f_2474_, 9, v_inst_2461_);
lean_closure_set(v___f_2474_, 10, v_inst_2462_);
lean_closure_set(v___f_2474_, 11, v_inst_2463_);
lean_closure_set(v___f_2474_, 12, v_toMonadRef_2446_);
lean_closure_set(v___f_2474_, 13, v_inst_2464_);
lean_closure_set(v___f_2474_, 14, v_inst_2465_);
lean_closure_set(v___f_2474_, 15, v_toMonadExceptOf_2466_);
lean_closure_set(v___f_2474_, 16, v_getNextMacroScope_2467_);
v___x_2475_ = lean_apply_4(v_toBind_2459_, lean_box(0), lean_box(0), v_getRef_2469_, v___f_2474_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_toMonadRef_2476_ = _args[0];
lean_object* v_env_2477_ = _args[1];
lean_object* v_currNamespace_2478_ = _args[2];
lean_object* v_opts_2479_ = _args[3];
lean_object* v___x_2480_ = _args[4];
lean_object* v___f_2481_ = _args[5];
lean_object* v___f_2482_ = _args[6];
lean_object* v_toMonadQuotation_2483_ = _args[7];
lean_object* v_inst_2484_ = _args[8];
lean_object* v_x_2485_ = _args[9];
lean_object* v_toPure_2486_ = _args[10];
lean_object* v_inst_2487_ = _args[11];
lean_object* v___f_2488_ = _args[12];
lean_object* v_toBind_2489_ = _args[13];
lean_object* v_setNextMacroScope_2490_ = _args[14];
lean_object* v_inst_2491_ = _args[15];
lean_object* v_inst_2492_ = _args[16];
lean_object* v_inst_2493_ = _args[17];
lean_object* v_inst_2494_ = _args[18];
lean_object* v_inst_2495_ = _args[19];
lean_object* v_toMonadExceptOf_2496_ = _args[20];
lean_object* v_getNextMacroScope_2497_ = _args[21];
lean_object* v_openDecls_2498_ = _args[22];
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_Elab_liftMacroM___redArg___lam__19(v_toMonadRef_2476_, v_env_2477_, v_currNamespace_2478_, v_opts_2479_, v___x_2480_, v___f_2481_, v___f_2482_, v_toMonadQuotation_2483_, v_inst_2484_, v_x_2485_, v_toPure_2486_, v_inst_2487_, v___f_2488_, v_toBind_2489_, v_setNextMacroScope_2490_, v_inst_2491_, v_inst_2492_, v_inst_2493_, v_inst_2494_, v_inst_2495_, v_toMonadExceptOf_2496_, v_getNextMacroScope_2497_, v_openDecls_2498_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__20(lean_object* v_toMonadRef_2500_, lean_object* v_env_2501_, lean_object* v_opts_2502_, lean_object* v___x_2503_, lean_object* v___f_2504_, lean_object* v___f_2505_, lean_object* v_toMonadQuotation_2506_, lean_object* v_inst_2507_, lean_object* v_x_2508_, lean_object* v_toPure_2509_, lean_object* v_inst_2510_, lean_object* v___f_2511_, lean_object* v_toBind_2512_, lean_object* v_setNextMacroScope_2513_, lean_object* v_inst_2514_, lean_object* v_inst_2515_, lean_object* v_inst_2516_, lean_object* v_inst_2517_, lean_object* v_inst_2518_, lean_object* v_toMonadExceptOf_2519_, lean_object* v_getNextMacroScope_2520_, lean_object* v_getOpenDecls_2521_, lean_object* v_currNamespace_2522_){
_start:
{
lean_object* v___f_2523_; lean_object* v___x_2524_; 
lean_inc(v_toBind_2512_);
v___f_2523_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__19___boxed), 23, 22);
lean_closure_set(v___f_2523_, 0, v_toMonadRef_2500_);
lean_closure_set(v___f_2523_, 1, v_env_2501_);
lean_closure_set(v___f_2523_, 2, v_currNamespace_2522_);
lean_closure_set(v___f_2523_, 3, v_opts_2502_);
lean_closure_set(v___f_2523_, 4, v___x_2503_);
lean_closure_set(v___f_2523_, 5, v___f_2504_);
lean_closure_set(v___f_2523_, 6, v___f_2505_);
lean_closure_set(v___f_2523_, 7, v_toMonadQuotation_2506_);
lean_closure_set(v___f_2523_, 8, v_inst_2507_);
lean_closure_set(v___f_2523_, 9, v_x_2508_);
lean_closure_set(v___f_2523_, 10, v_toPure_2509_);
lean_closure_set(v___f_2523_, 11, v_inst_2510_);
lean_closure_set(v___f_2523_, 12, v___f_2511_);
lean_closure_set(v___f_2523_, 13, v_toBind_2512_);
lean_closure_set(v___f_2523_, 14, v_setNextMacroScope_2513_);
lean_closure_set(v___f_2523_, 15, v_inst_2514_);
lean_closure_set(v___f_2523_, 16, v_inst_2515_);
lean_closure_set(v___f_2523_, 17, v_inst_2516_);
lean_closure_set(v___f_2523_, 18, v_inst_2517_);
lean_closure_set(v___f_2523_, 19, v_inst_2518_);
lean_closure_set(v___f_2523_, 20, v_toMonadExceptOf_2519_);
lean_closure_set(v___f_2523_, 21, v_getNextMacroScope_2520_);
v___x_2524_ = lean_apply_4(v_toBind_2512_, lean_box(0), lean_box(0), v_getOpenDecls_2521_, v___f_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__20___boxed(lean_object** _args){
lean_object* v_toMonadRef_2525_ = _args[0];
lean_object* v_env_2526_ = _args[1];
lean_object* v_opts_2527_ = _args[2];
lean_object* v___x_2528_ = _args[3];
lean_object* v___f_2529_ = _args[4];
lean_object* v___f_2530_ = _args[5];
lean_object* v_toMonadQuotation_2531_ = _args[6];
lean_object* v_inst_2532_ = _args[7];
lean_object* v_x_2533_ = _args[8];
lean_object* v_toPure_2534_ = _args[9];
lean_object* v_inst_2535_ = _args[10];
lean_object* v___f_2536_ = _args[11];
lean_object* v_toBind_2537_ = _args[12];
lean_object* v_setNextMacroScope_2538_ = _args[13];
lean_object* v_inst_2539_ = _args[14];
lean_object* v_inst_2540_ = _args[15];
lean_object* v_inst_2541_ = _args[16];
lean_object* v_inst_2542_ = _args[17];
lean_object* v_inst_2543_ = _args[18];
lean_object* v_toMonadExceptOf_2544_ = _args[19];
lean_object* v_getNextMacroScope_2545_ = _args[20];
lean_object* v_getOpenDecls_2546_ = _args[21];
lean_object* v_currNamespace_2547_ = _args[22];
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l_Lean_Elab_liftMacroM___redArg___lam__20(v_toMonadRef_2525_, v_env_2526_, v_opts_2527_, v___x_2528_, v___f_2529_, v___f_2530_, v_toMonadQuotation_2531_, v_inst_2532_, v_x_2533_, v_toPure_2534_, v_inst_2535_, v___f_2536_, v_toBind_2537_, v_setNextMacroScope_2538_, v_inst_2539_, v_inst_2540_, v_inst_2541_, v_inst_2542_, v_inst_2543_, v_toMonadExceptOf_2544_, v_getNextMacroScope_2545_, v_getOpenDecls_2546_, v_currNamespace_2547_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__21(lean_object* v_inst_2549_, lean_object* v_toMonadRef_2550_, lean_object* v_env_2551_, lean_object* v___x_2552_, lean_object* v___f_2553_, lean_object* v___f_2554_, lean_object* v_toMonadQuotation_2555_, lean_object* v_inst_2556_, lean_object* v_x_2557_, lean_object* v_toPure_2558_, lean_object* v_inst_2559_, lean_object* v___f_2560_, lean_object* v_toBind_2561_, lean_object* v_setNextMacroScope_2562_, lean_object* v_inst_2563_, lean_object* v_inst_2564_, lean_object* v_inst_2565_, lean_object* v_inst_2566_, lean_object* v_inst_2567_, lean_object* v_toMonadExceptOf_2568_, lean_object* v_getNextMacroScope_2569_, lean_object* v_opts_2570_){
_start:
{
lean_object* v_getCurrNamespace_2571_; lean_object* v_getOpenDecls_2572_; lean_object* v___f_2573_; lean_object* v___x_2574_; 
v_getCurrNamespace_2571_ = lean_ctor_get(v_inst_2549_, 0);
lean_inc(v_getCurrNamespace_2571_);
v_getOpenDecls_2572_ = lean_ctor_get(v_inst_2549_, 1);
lean_inc(v_getOpenDecls_2572_);
lean_dec_ref(v_inst_2549_);
lean_inc(v_toBind_2561_);
v___f_2573_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__20___boxed), 23, 22);
lean_closure_set(v___f_2573_, 0, v_toMonadRef_2550_);
lean_closure_set(v___f_2573_, 1, v_env_2551_);
lean_closure_set(v___f_2573_, 2, v_opts_2570_);
lean_closure_set(v___f_2573_, 3, v___x_2552_);
lean_closure_set(v___f_2573_, 4, v___f_2553_);
lean_closure_set(v___f_2573_, 5, v___f_2554_);
lean_closure_set(v___f_2573_, 6, v_toMonadQuotation_2555_);
lean_closure_set(v___f_2573_, 7, v_inst_2556_);
lean_closure_set(v___f_2573_, 8, v_x_2557_);
lean_closure_set(v___f_2573_, 9, v_toPure_2558_);
lean_closure_set(v___f_2573_, 10, v_inst_2559_);
lean_closure_set(v___f_2573_, 11, v___f_2560_);
lean_closure_set(v___f_2573_, 12, v_toBind_2561_);
lean_closure_set(v___f_2573_, 13, v_setNextMacroScope_2562_);
lean_closure_set(v___f_2573_, 14, v_inst_2563_);
lean_closure_set(v___f_2573_, 15, v_inst_2564_);
lean_closure_set(v___f_2573_, 16, v_inst_2565_);
lean_closure_set(v___f_2573_, 17, v_inst_2566_);
lean_closure_set(v___f_2573_, 18, v_inst_2567_);
lean_closure_set(v___f_2573_, 19, v_toMonadExceptOf_2568_);
lean_closure_set(v___f_2573_, 20, v_getNextMacroScope_2569_);
lean_closure_set(v___f_2573_, 21, v_getOpenDecls_2572_);
v___x_2574_ = lean_apply_4(v_toBind_2561_, lean_box(0), lean_box(0), v_getCurrNamespace_2571_, v___f_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__21___boxed(lean_object** _args){
lean_object* v_inst_2575_ = _args[0];
lean_object* v_toMonadRef_2576_ = _args[1];
lean_object* v_env_2577_ = _args[2];
lean_object* v___x_2578_ = _args[3];
lean_object* v___f_2579_ = _args[4];
lean_object* v___f_2580_ = _args[5];
lean_object* v_toMonadQuotation_2581_ = _args[6];
lean_object* v_inst_2582_ = _args[7];
lean_object* v_x_2583_ = _args[8];
lean_object* v_toPure_2584_ = _args[9];
lean_object* v_inst_2585_ = _args[10];
lean_object* v___f_2586_ = _args[11];
lean_object* v_toBind_2587_ = _args[12];
lean_object* v_setNextMacroScope_2588_ = _args[13];
lean_object* v_inst_2589_ = _args[14];
lean_object* v_inst_2590_ = _args[15];
lean_object* v_inst_2591_ = _args[16];
lean_object* v_inst_2592_ = _args[17];
lean_object* v_inst_2593_ = _args[18];
lean_object* v_toMonadExceptOf_2594_ = _args[19];
lean_object* v_getNextMacroScope_2595_ = _args[20];
lean_object* v_opts_2596_ = _args[21];
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l_Lean_Elab_liftMacroM___redArg___lam__21(v_inst_2575_, v_toMonadRef_2576_, v_env_2577_, v___x_2578_, v___f_2579_, v___f_2580_, v_toMonadQuotation_2581_, v_inst_2582_, v_x_2583_, v_toPure_2584_, v_inst_2585_, v___f_2586_, v_toBind_2587_, v_setNextMacroScope_2588_, v_inst_2589_, v_inst_2590_, v_inst_2591_, v_inst_2592_, v_inst_2593_, v_toMonadExceptOf_2594_, v_getNextMacroScope_2595_, v_opts_2596_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__22(lean_object* v_inst_2598_, lean_object* v___x_2599_, lean_object* v___x_2600_, lean_object* v_inst_2601_, lean_object* v_toMonadRef_2602_, lean_object* v___x_2603_, lean_object* v_toMonadQuotation_2604_, lean_object* v_inst_2605_, lean_object* v_x_2606_, lean_object* v_toPure_2607_, lean_object* v_inst_2608_, lean_object* v___f_2609_, lean_object* v_toBind_2610_, lean_object* v_setNextMacroScope_2611_, lean_object* v_inst_2612_, lean_object* v_inst_2613_, lean_object* v_inst_2614_, lean_object* v_inst_2615_, lean_object* v_toMonadExceptOf_2616_, lean_object* v_getNextMacroScope_2617_, lean_object* v_env_2618_){
_start:
{
lean_object* v_getOptions_2619_; lean_object* v___f_2620_; lean_object* v___f_2621_; lean_object* v___f_2622_; lean_object* v___x_2623_; 
v_getOptions_2619_ = lean_ctor_get(v_inst_2598_, 0);
lean_inc(v_getOptions_2619_);
lean_inc_ref_n(v_env_2618_, 2);
v___f_2620_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_2620_, 0, v_env_2618_);
lean_closure_set(v___f_2620_, 1, v___x_2599_);
lean_closure_set(v___f_2620_, 2, v___x_2600_);
v___f_2621_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__5___boxed), 4, 1);
lean_closure_set(v___f_2621_, 0, v_env_2618_);
lean_inc(v_toBind_2610_);
v___f_2622_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__21___boxed), 22, 21);
lean_closure_set(v___f_2622_, 0, v_inst_2601_);
lean_closure_set(v___f_2622_, 1, v_toMonadRef_2602_);
lean_closure_set(v___f_2622_, 2, v_env_2618_);
lean_closure_set(v___f_2622_, 3, v___x_2603_);
lean_closure_set(v___f_2622_, 4, v___f_2620_);
lean_closure_set(v___f_2622_, 5, v___f_2621_);
lean_closure_set(v___f_2622_, 6, v_toMonadQuotation_2604_);
lean_closure_set(v___f_2622_, 7, v_inst_2605_);
lean_closure_set(v___f_2622_, 8, v_x_2606_);
lean_closure_set(v___f_2622_, 9, v_toPure_2607_);
lean_closure_set(v___f_2622_, 10, v_inst_2608_);
lean_closure_set(v___f_2622_, 11, v___f_2609_);
lean_closure_set(v___f_2622_, 12, v_toBind_2610_);
lean_closure_set(v___f_2622_, 13, v_setNextMacroScope_2611_);
lean_closure_set(v___f_2622_, 14, v_inst_2612_);
lean_closure_set(v___f_2622_, 15, v_inst_2613_);
lean_closure_set(v___f_2622_, 16, v_inst_2598_);
lean_closure_set(v___f_2622_, 17, v_inst_2614_);
lean_closure_set(v___f_2622_, 18, v_inst_2615_);
lean_closure_set(v___f_2622_, 19, v_toMonadExceptOf_2616_);
lean_closure_set(v___f_2622_, 20, v_getNextMacroScope_2617_);
v___x_2623_ = lean_apply_4(v_toBind_2610_, lean_box(0), lean_box(0), v_getOptions_2619_, v___f_2622_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__22___boxed(lean_object** _args){
lean_object* v_inst_2624_ = _args[0];
lean_object* v___x_2625_ = _args[1];
lean_object* v___x_2626_ = _args[2];
lean_object* v_inst_2627_ = _args[3];
lean_object* v_toMonadRef_2628_ = _args[4];
lean_object* v___x_2629_ = _args[5];
lean_object* v_toMonadQuotation_2630_ = _args[6];
lean_object* v_inst_2631_ = _args[7];
lean_object* v_x_2632_ = _args[8];
lean_object* v_toPure_2633_ = _args[9];
lean_object* v_inst_2634_ = _args[10];
lean_object* v___f_2635_ = _args[11];
lean_object* v_toBind_2636_ = _args[12];
lean_object* v_setNextMacroScope_2637_ = _args[13];
lean_object* v_inst_2638_ = _args[14];
lean_object* v_inst_2639_ = _args[15];
lean_object* v_inst_2640_ = _args[16];
lean_object* v_inst_2641_ = _args[17];
lean_object* v_toMonadExceptOf_2642_ = _args[18];
lean_object* v_getNextMacroScope_2643_ = _args[19];
lean_object* v_env_2644_ = _args[20];
_start:
{
lean_object* v_res_2645_; 
v_res_2645_ = l_Lean_Elab_liftMacroM___redArg___lam__22(v_inst_2624_, v___x_2625_, v___x_2626_, v_inst_2627_, v_toMonadRef_2628_, v___x_2629_, v_toMonadQuotation_2630_, v_inst_2631_, v_x_2632_, v_toPure_2633_, v_inst_2634_, v___f_2635_, v_toBind_2636_, v_setNextMacroScope_2637_, v_inst_2638_, v_inst_2639_, v_inst_2640_, v_inst_2641_, v_toMonadExceptOf_2642_, v_getNextMacroScope_2643_, v_env_2644_);
return v_res_2645_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__10(void){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_EStateM_nonBacktrackable___redArg();
return v___x_2665_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__11(void){
_start:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; 
v___x_2666_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__10, &l_Lean_Elab_liftMacroM___redArg___closed__10_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__10);
v___x_2667_ = l_EStateM_instMonadExceptOfOfBacktrackable___redArg(v___x_2666_);
return v___x_2667_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__12(void){
_start:
{
lean_object* v___x_2668_; lean_object* v___f_2669_; 
v___x_2668_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__11, &l_Lean_Elab_liftMacroM___redArg___closed__11_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__11);
v___f_2669_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2669_, 0, v___x_2668_);
return v___f_2669_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__13(void){
_start:
{
lean_object* v___x_2670_; lean_object* v___f_2671_; 
v___x_2670_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__11, &l_Lean_Elab_liftMacroM___redArg___closed__11_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__11);
v___f_2671_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2671_, 0, v___x_2670_);
return v___f_2671_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__14(void){
_start:
{
lean_object* v___f_2672_; lean_object* v___f_2673_; lean_object* v___x_2674_; 
v___f_2672_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__13, &l_Lean_Elab_liftMacroM___redArg___closed__13_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__13);
v___f_2673_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__12, &l_Lean_Elab_liftMacroM___redArg___closed__12_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__12);
v___x_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2674_, 0, v___f_2673_);
lean_ctor_set(v___x_2674_, 1, v___f_2672_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg(lean_object* v_inst_2677_, lean_object* v_inst_2678_, lean_object* v_inst_2679_, lean_object* v_inst_2680_, lean_object* v_inst_2681_, lean_object* v_inst_2682_, lean_object* v_inst_2683_, lean_object* v_inst_2684_, lean_object* v_inst_2685_, lean_object* v_x_2686_){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v_toApplicative_2689_; lean_object* v_toBind_2690_; lean_object* v_getEnv_2691_; lean_object* v_toMonadExceptOf_2692_; lean_object* v_toMonadRef_2693_; lean_object* v_toMonadQuotation_2694_; lean_object* v_getNextMacroScope_2695_; lean_object* v_setNextMacroScope_2696_; lean_object* v_toPure_2697_; lean_object* v___x_2698_; lean_object* v___f_2699_; lean_object* v___f_2700_; lean_object* v___x_2701_; 
v___x_2687_ = ((lean_object*)(l_Lean_Elab_liftMacroM___redArg___closed__9));
v___x_2688_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__14, &l_Lean_Elab_liftMacroM___redArg___closed__14_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__14);
v_toApplicative_2689_ = lean_ctor_get(v_inst_2677_, 0);
v_toBind_2690_ = lean_ctor_get(v_inst_2677_, 1);
lean_inc_n(v_toBind_2690_, 3);
v_getEnv_2691_ = lean_ctor_get(v_inst_2679_, 0);
lean_inc(v_getEnv_2691_);
v_toMonadExceptOf_2692_ = lean_ctor_get(v_inst_2681_, 0);
lean_inc_ref(v_toMonadExceptOf_2692_);
v_toMonadRef_2693_ = lean_ctor_get(v_inst_2681_, 1);
lean_inc_ref_n(v_toMonadRef_2693_, 2);
v_toMonadQuotation_2694_ = lean_ctor_get(v_inst_2678_, 0);
lean_inc_ref(v_toMonadQuotation_2694_);
v_getNextMacroScope_2695_ = lean_ctor_get(v_inst_2678_, 1);
lean_inc(v_getNextMacroScope_2695_);
v_setNextMacroScope_2696_ = lean_ctor_get(v_inst_2678_, 2);
lean_inc(v_setNextMacroScope_2696_);
lean_dec_ref(v_inst_2678_);
v_toPure_2697_ = lean_ctor_get(v_toApplicative_2689_, 1);
lean_inc_n(v_toPure_2697_, 2);
v___x_2698_ = ((lean_object*)(l_Lean_Elab_liftMacroM___redArg___closed__15));
lean_inc(v_inst_2685_);
lean_inc_ref(v_inst_2677_);
lean_inc_ref(v_inst_2684_);
lean_inc_ref(v_inst_2683_);
v___f_2699_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__3), 8, 7);
lean_closure_set(v___f_2699_, 0, v_inst_2683_);
lean_closure_set(v___f_2699_, 1, v_inst_2684_);
lean_closure_set(v___f_2699_, 2, v_toPure_2697_);
lean_closure_set(v___f_2699_, 3, v_toBind_2690_);
lean_closure_set(v___f_2699_, 4, v_inst_2677_);
lean_closure_set(v___f_2699_, 5, v_toMonadRef_2693_);
lean_closure_set(v___f_2699_, 6, v_inst_2685_);
v___f_2700_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__22___boxed), 21, 20);
lean_closure_set(v___f_2700_, 0, v_inst_2684_);
lean_closure_set(v___f_2700_, 1, v___x_2688_);
lean_closure_set(v___f_2700_, 2, v___x_2698_);
lean_closure_set(v___f_2700_, 3, v_inst_2682_);
lean_closure_set(v___f_2700_, 4, v_toMonadRef_2693_);
lean_closure_set(v___f_2700_, 5, v___x_2687_);
lean_closure_set(v___f_2700_, 6, v_toMonadQuotation_2694_);
lean_closure_set(v___f_2700_, 7, v_inst_2680_);
lean_closure_set(v___f_2700_, 8, v_x_2686_);
lean_closure_set(v___f_2700_, 9, v_toPure_2697_);
lean_closure_set(v___f_2700_, 10, v_inst_2677_);
lean_closure_set(v___f_2700_, 11, v___f_2699_);
lean_closure_set(v___f_2700_, 12, v_toBind_2690_);
lean_closure_set(v___f_2700_, 13, v_setNextMacroScope_2696_);
lean_closure_set(v___f_2700_, 14, v_inst_2679_);
lean_closure_set(v___f_2700_, 15, v_inst_2683_);
lean_closure_set(v___f_2700_, 16, v_inst_2685_);
lean_closure_set(v___f_2700_, 17, v_inst_2681_);
lean_closure_set(v___f_2700_, 18, v_toMonadExceptOf_2692_);
lean_closure_set(v___f_2700_, 19, v_getNextMacroScope_2695_);
v___x_2701_ = lean_apply_4(v_toBind_2690_, lean_box(0), lean_box(0), v_getEnv_2691_, v___f_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM(lean_object* v_m_2702_, lean_object* v_00_u03b1_2703_, lean_object* v_inst_2704_, lean_object* v_inst_2705_, lean_object* v_inst_2706_, lean_object* v_inst_2707_, lean_object* v_inst_2708_, lean_object* v_inst_2709_, lean_object* v_inst_2710_, lean_object* v_inst_2711_, lean_object* v_inst_2712_, lean_object* v_inst_2713_, lean_object* v_x_2714_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Lean_Elab_liftMacroM___redArg(v_inst_2704_, v_inst_2705_, v_inst_2706_, v_inst_2707_, v_inst_2708_, v_inst_2709_, v_inst_2710_, v_inst_2711_, v_inst_2712_, v_x_2714_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___boxed(lean_object* v_m_2716_, lean_object* v_00_u03b1_2717_, lean_object* v_inst_2718_, lean_object* v_inst_2719_, lean_object* v_inst_2720_, lean_object* v_inst_2721_, lean_object* v_inst_2722_, lean_object* v_inst_2723_, lean_object* v_inst_2724_, lean_object* v_inst_2725_, lean_object* v_inst_2726_, lean_object* v_inst_2727_, lean_object* v_x_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lean_Elab_liftMacroM(v_m_2716_, v_00_u03b1_2717_, v_inst_2718_, v_inst_2719_, v_inst_2720_, v_inst_2721_, v_inst_2722_, v_inst_2723_, v_inst_2724_, v_inst_2725_, v_inst_2726_, v_inst_2727_, v_x_2728_);
lean_dec(v_inst_2727_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro___redArg(lean_object* v_inst_2730_, lean_object* v_inst_2731_, lean_object* v_inst_2732_, lean_object* v_inst_2733_, lean_object* v_inst_2734_, lean_object* v_inst_2735_, lean_object* v_inst_2736_, lean_object* v_inst_2737_, lean_object* v_inst_2738_, lean_object* v_x_2739_, lean_object* v_stx_2740_){
_start:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2741_ = lean_apply_1(v_x_2739_, v_stx_2740_);
v___x_2742_ = l_Lean_Elab_liftMacroM___redArg(v_inst_2730_, v_inst_2731_, v_inst_2732_, v_inst_2733_, v_inst_2734_, v_inst_2735_, v_inst_2736_, v_inst_2737_, v_inst_2738_, v___x_2741_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro(lean_object* v_m_2743_, lean_object* v_inst_2744_, lean_object* v_inst_2745_, lean_object* v_inst_2746_, lean_object* v_inst_2747_, lean_object* v_inst_2748_, lean_object* v_inst_2749_, lean_object* v_inst_2750_, lean_object* v_inst_2751_, lean_object* v_inst_2752_, lean_object* v_inst_2753_, lean_object* v_x_2754_, lean_object* v_stx_2755_){
_start:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2756_ = lean_apply_1(v_x_2754_, v_stx_2755_);
v___x_2757_ = l_Lean_Elab_liftMacroM___redArg(v_inst_2744_, v_inst_2745_, v_inst_2746_, v_inst_2747_, v_inst_2748_, v_inst_2749_, v_inst_2750_, v_inst_2751_, v_inst_2752_, v___x_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro___boxed(lean_object* v_m_2758_, lean_object* v_inst_2759_, lean_object* v_inst_2760_, lean_object* v_inst_2761_, lean_object* v_inst_2762_, lean_object* v_inst_2763_, lean_object* v_inst_2764_, lean_object* v_inst_2765_, lean_object* v_inst_2766_, lean_object* v_inst_2767_, lean_object* v_inst_2768_, lean_object* v_x_2769_, lean_object* v_stx_2770_){
_start:
{
lean_object* v_res_2771_; 
v_res_2771_ = l_Lean_Elab_adaptMacro(v_m_2758_, v_inst_2759_, v_inst_2760_, v_inst_2761_, v_inst_2762_, v_inst_2763_, v_inst_2764_, v_inst_2765_, v_inst_2766_, v_inst_2767_, v_inst_2768_, v_x_2769_, v_stx_2770_);
lean_dec(v_inst_2768_);
return v_res_2771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop(lean_object* v_baseName_2772_, lean_object* v_currNamespace_2773_, lean_object* v_idx_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_){
_start:
{
lean_object* v_name_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
lean_inc(v_idx_2774_);
lean_inc(v_baseName_2772_);
v_name_2777_ = lean_name_append_index_after(v_baseName_2772_, v_idx_2774_);
lean_inc(v_name_2777_);
lean_inc(v_currNamespace_2773_);
v___x_2778_ = l_Lean_Name_append(v_currNamespace_2773_, v_name_2777_);
v___x_2779_ = l_Lean_Macro_hasDecl(v___x_2778_, v_a_2775_, v_a_2776_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2780_; uint8_t v___x_2781_; 
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
v___x_2781_ = lean_unbox(v_a_2780_);
if (v___x_2781_ == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec(v_idx_2774_);
lean_dec(v_currNamespace_2773_);
lean_dec(v_baseName_2772_);
v_a_2782_ = lean_ctor_get(v___x_2779_, 1);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2789_ == 0)
{
lean_object* v_unused_2790_; 
v_unused_2790_ = lean_ctor_get(v___x_2779_, 0);
lean_dec(v_unused_2790_);
v___x_2784_ = v___x_2779_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2779_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 0, v_name_2777_);
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_name_2777_);
lean_ctor_set(v_reuseFailAlloc_2788_, 1, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
lean_dec(v_name_2777_);
v_a_2791_ = lean_ctor_get(v___x_2779_, 1);
lean_inc(v_a_2791_);
lean_dec_ref_known(v___x_2779_, 2);
v___x_2792_ = lean_unsigned_to_nat(1u);
v___x_2793_ = lean_nat_add(v_idx_2774_, v___x_2792_);
lean_dec(v_idx_2774_);
v_idx_2774_ = v___x_2793_;
v_a_2776_ = v_a_2791_;
goto _start;
}
}
else
{
lean_object* v_a_2795_; lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
lean_dec(v_name_2777_);
lean_dec(v_idx_2774_);
lean_dec(v_currNamespace_2773_);
lean_dec(v_baseName_2772_);
v_a_2795_ = lean_ctor_get(v___x_2779_, 0);
v_a_2796_ = lean_ctor_get(v___x_2779_, 1);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2779_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_inc(v_a_2795_);
lean_dec(v___x_2779_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2795_);
lean_ctor_set(v_reuseFailAlloc_2802_, 1, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop___boxed(lean_object* v_baseName_2804_, lean_object* v_currNamespace_2805_, lean_object* v_idx_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_){
_start:
{
lean_object* v_res_2809_; 
v_res_2809_ = l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop(v_baseName_2804_, v_currNamespace_2805_, v_idx_2806_, v_a_2807_, v_a_2808_);
lean_dec_ref(v_a_2807_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkUnusedBaseName(lean_object* v_baseName_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_){
_start:
{
lean_object* v___x_2813_; 
v___x_2813_ = l_Lean_Macro_getCurrNamespace(v_a_2811_, v_a_2812_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v_a_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc_n(v_a_2814_, 2);
v_a_2815_ = lean_ctor_get(v___x_2813_, 1);
lean_inc(v_a_2815_);
lean_dec_ref_known(v___x_2813_, 2);
lean_inc(v_baseName_2810_);
v___x_2816_ = l_Lean_Name_append(v_a_2814_, v_baseName_2810_);
v___x_2817_ = l_Lean_Macro_hasDecl(v___x_2816_, v_a_2811_, v_a_2815_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; uint8_t v___x_2819_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
v___x_2819_ = lean_unbox(v_a_2818_);
if (v___x_2819_ == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec(v_a_2814_);
v_a_2820_ = lean_ctor_get(v___x_2817_, 1);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2827_ == 0)
{
lean_object* v_unused_2828_; 
v_unused_2828_ = lean_ctor_get(v___x_2817_, 0);
lean_dec(v_unused_2828_);
v___x_2822_ = v___x_2817_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2817_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
lean_ctor_set(v___x_2822_, 0, v_baseName_2810_);
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_baseName_2810_);
lean_ctor_set(v_reuseFailAlloc_2826_, 1, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
else
{
lean_object* v_a_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v_a_2829_ = lean_ctor_get(v___x_2817_, 1);
lean_inc(v_a_2829_);
lean_dec_ref_known(v___x_2817_, 2);
v___x_2830_ = lean_unsigned_to_nat(1u);
v___x_2831_ = l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop(v_baseName_2810_, v_a_2814_, v___x_2830_, v_a_2811_, v_a_2829_);
return v___x_2831_;
}
}
else
{
lean_object* v_a_2832_; lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_dec(v_a_2814_);
lean_dec(v_baseName_2810_);
v_a_2832_ = lean_ctor_get(v___x_2817_, 0);
v_a_2833_ = lean_ctor_get(v___x_2817_, 1);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2817_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_inc(v_a_2832_);
lean_dec(v___x_2817_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2832_);
lean_ctor_set(v_reuseFailAlloc_2839_, 1, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
else
{
lean_dec(v_baseName_2810_);
return v___x_2813_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkUnusedBaseName___boxed(lean_object* v_baseName_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lean_Elab_mkUnusedBaseName(v_baseName_2841_, v_a_2842_, v_a_2843_);
lean_dec_ref(v_a_2842_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_findUnusedName_loop___redArg(lean_object* v_inst_2845_, lean_object* v_name_2846_, lean_object* v_avoid_2847_, lean_object* v_env_2848_, lean_object* v_idx_2849_){
_start:
{
lean_object* v_toApplicative_2850_; lean_object* v_toPure_2851_; lean_object* v_name_2852_; lean_object* v___x_2853_; uint8_t v___x_2854_; 
v_toApplicative_2850_ = lean_ctor_get(v_inst_2845_, 0);
v_toPure_2851_ = lean_ctor_get(v_toApplicative_2850_, 1);
lean_inc(v_idx_2849_);
lean_inc(v_name_2846_);
v_name_2852_ = lean_name_append_index_after(v_name_2846_, v_idx_2849_);
lean_inc_ref(v_avoid_2847_);
lean_inc(v_name_2852_);
lean_inc_ref(v_env_2848_);
v___x_2853_ = lean_apply_2(v_avoid_2847_, v_env_2848_, v_name_2852_);
v___x_2854_ = lean_unbox(v___x_2853_);
if (v___x_2854_ == 0)
{
lean_object* v___x_2855_; 
lean_inc(v_toPure_2851_);
lean_dec(v_idx_2849_);
lean_dec_ref(v_env_2848_);
lean_dec_ref(v_avoid_2847_);
lean_dec(v_name_2846_);
lean_dec_ref(v_inst_2845_);
v___x_2855_ = lean_apply_2(v_toPure_2851_, lean_box(0), v_name_2852_);
return v___x_2855_;
}
else
{
lean_object* v___x_2856_; lean_object* v___x_2857_; 
lean_dec(v_name_2852_);
v___x_2856_ = lean_unsigned_to_nat(1u);
v___x_2857_ = lean_nat_add(v_idx_2849_, v___x_2856_);
lean_dec(v_idx_2849_);
v_idx_2849_ = v___x_2857_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_findUnusedName_loop(lean_object* v_m_2859_, lean_object* v_inst_2860_, lean_object* v_name_2861_, lean_object* v_avoid_2862_, lean_object* v_env_2863_, lean_object* v_idx_2864_){
_start:
{
lean_object* v___x_2865_; 
v___x_2865_ = l___private_Lean_Elab_Util_0__Lean_Elab_findUnusedName_loop___redArg(v_inst_2860_, v_name_2861_, v_avoid_2862_, v_env_2863_, v_idx_2864_);
return v___x_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_findUnusedName___redArg___lam__0(lean_object* v_avoid_2866_, lean_object* v_name_2867_, lean_object* v_toPure_2868_, lean_object* v_inst_2869_, lean_object* v_env_2870_){
_start:
{
lean_object* v___x_2871_; uint8_t v___x_2872_; 
lean_inc_ref(v_avoid_2866_);
lean_inc(v_name_2867_);
lean_inc_ref(v_env_2870_);
v___x_2871_ = lean_apply_2(v_avoid_2866_, v_env_2870_, v_name_2867_);
v___x_2872_ = lean_unbox(v___x_2871_);
if (v___x_2872_ == 0)
{
lean_object* v___x_2873_; 
lean_dec_ref(v_env_2870_);
lean_dec_ref(v_inst_2869_);
lean_dec_ref(v_avoid_2866_);
v___x_2873_ = lean_apply_2(v_toPure_2868_, lean_box(0), v_name_2867_);
return v___x_2873_;
}
else
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
lean_dec(v_toPure_2868_);
v___x_2874_ = lean_unsigned_to_nat(1u);
v___x_2875_ = l___private_Lean_Elab_Util_0__Lean_Elab_findUnusedName_loop___redArg(v_inst_2869_, v_name_2867_, v_avoid_2866_, v_env_2870_, v___x_2874_);
return v___x_2875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_findUnusedName___redArg(lean_object* v_inst_2876_, lean_object* v_inst_2877_, lean_object* v_name_2878_, lean_object* v_avoid_2879_){
_start:
{
lean_object* v_toApplicative_2880_; lean_object* v_toBind_2881_; lean_object* v_getEnv_2882_; lean_object* v_toPure_2883_; lean_object* v___f_2884_; lean_object* v___x_2885_; 
v_toApplicative_2880_ = lean_ctor_get(v_inst_2876_, 0);
v_toBind_2881_ = lean_ctor_get(v_inst_2876_, 1);
lean_inc(v_toBind_2881_);
v_getEnv_2882_ = lean_ctor_get(v_inst_2877_, 0);
lean_inc(v_getEnv_2882_);
lean_dec_ref(v_inst_2877_);
v_toPure_2883_ = lean_ctor_get(v_toApplicative_2880_, 1);
lean_inc(v_toPure_2883_);
v___f_2884_ = lean_alloc_closure((void*)(l_Lean_Elab_findUnusedName___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2884_, 0, v_avoid_2879_);
lean_closure_set(v___f_2884_, 1, v_name_2878_);
lean_closure_set(v___f_2884_, 2, v_toPure_2883_);
lean_closure_set(v___f_2884_, 3, v_inst_2876_);
v___x_2885_ = lean_apply_4(v_toBind_2881_, lean_box(0), lean_box(0), v_getEnv_2882_, v___f_2884_);
return v___x_2885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_findUnusedName(lean_object* v_m_2886_, lean_object* v_inst_2887_, lean_object* v_inst_2888_, lean_object* v_name_2889_, lean_object* v_avoid_2890_){
_start:
{
lean_object* v___x_2891_; 
v___x_2891_ = l_Lean_Elab_findUnusedName___redArg(v_inst_2887_, v_inst_2888_, v_name_2889_, v_avoid_2890_);
return v___x_2891_;
}
}
static lean_object* _init_l_Lean_Elab_logException___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2893_ = ((lean_object*)(l_Lean_Elab_logException___redArg___lam__0___closed__0));
v___x_2894_ = l_Lean_stringToMessageData(v___x_2893_);
return v___x_2894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___redArg___lam__0(lean_object* v_inst_2895_, lean_object* v_inst_2896_, lean_object* v_inst_2897_, lean_object* v_inst_2898_, lean_object* v_name_2899_){
_start:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2900_ = lean_obj_once(&l_Lean_Elab_logException___redArg___lam__0___closed__1, &l_Lean_Elab_logException___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_logException___redArg___lam__0___closed__1);
v___x_2901_ = l_Lean_MessageData_ofName(v_name_2899_);
v___x_2902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2902_, 0, v___x_2900_);
lean_ctor_set(v___x_2902_, 1, v___x_2901_);
v___x_2903_ = l_Lean_logError___redArg(v_inst_2895_, v_inst_2896_, v_inst_2897_, v_inst_2898_, v___x_2902_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___redArg(lean_object* v_inst_2904_, lean_object* v_inst_2905_, lean_object* v_inst_2906_, lean_object* v_inst_2907_, lean_object* v_inst_2908_, lean_object* v_ex_2909_){
_start:
{
lean_object* v_toApplicative_2910_; lean_object* v_toBind_2911_; lean_object* v_toPure_2912_; 
v_toApplicative_2910_ = lean_ctor_get(v_inst_2904_, 0);
v_toBind_2911_ = lean_ctor_get(v_inst_2904_, 1);
v_toPure_2912_ = lean_ctor_get(v_toApplicative_2910_, 1);
if (lean_obj_tag(v_ex_2909_) == 0)
{
lean_object* v_ref_2916_; lean_object* v_msg_2917_; lean_object* v___x_2918_; 
lean_dec(v_inst_2908_);
v_ref_2916_ = lean_ctor_get(v_ex_2909_, 0);
lean_inc(v_ref_2916_);
v_msg_2917_ = lean_ctor_get(v_ex_2909_, 1);
lean_inc_ref(v_msg_2917_);
lean_dec_ref_known(v_ex_2909_, 2);
v___x_2918_ = l_Lean_logErrorAt___redArg(v_inst_2904_, v_inst_2905_, v_inst_2906_, v_inst_2907_, v_ref_2916_, v_msg_2917_);
return v___x_2918_;
}
else
{
lean_object* v_id_2919_; uint8_t v___x_2920_; 
lean_inc(v_toBind_2911_);
v_id_2919_ = lean_ctor_get(v_ex_2909_, 0);
lean_inc(v_id_2919_);
v___x_2920_ = l_Lean_Elab_isAbortExceptionId(v_id_2919_);
if (v___x_2920_ == 0)
{
uint8_t v___x_2921_; 
v___x_2921_ = l_Lean_Exception_isInterrupt(v_ex_2909_);
lean_dec_ref_known(v_ex_2909_, 2);
if (v___x_2921_ == 0)
{
lean_object* v___f_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v___f_2922_ = lean_alloc_closure((void*)(l_Lean_Elab_logException___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2922_, 0, v_inst_2904_);
lean_closure_set(v___f_2922_, 1, v_inst_2905_);
lean_closure_set(v___f_2922_, 2, v_inst_2906_);
lean_closure_set(v___f_2922_, 3, v_inst_2907_);
v___x_2923_ = lean_alloc_closure((void*)(l_Lean_InternalExceptionId_getName___boxed), 2, 1);
lean_closure_set(v___x_2923_, 0, v_id_2919_);
v___x_2924_ = lean_apply_2(v_inst_2908_, lean_box(0), v___x_2923_);
v___x_2925_ = lean_apply_4(v_toBind_2911_, lean_box(0), lean_box(0), v___x_2924_, v___f_2922_);
return v___x_2925_;
}
else
{
lean_inc(v_toPure_2912_);
lean_dec(v_id_2919_);
lean_dec(v_toBind_2911_);
lean_dec(v_inst_2908_);
lean_dec_ref(v_inst_2907_);
lean_dec(v_inst_2906_);
lean_dec_ref(v_inst_2905_);
lean_dec_ref(v_inst_2904_);
goto v___jp_2913_;
}
}
else
{
lean_inc(v_toPure_2912_);
lean_dec_ref_known(v_ex_2909_, 2);
lean_dec(v_id_2919_);
lean_dec(v_toBind_2911_);
lean_dec(v_inst_2908_);
lean_dec_ref(v_inst_2907_);
lean_dec(v_inst_2906_);
lean_dec_ref(v_inst_2905_);
lean_dec_ref(v_inst_2904_);
goto v___jp_2913_;
}
}
v___jp_2913_:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2914_ = lean_box(0);
v___x_2915_ = lean_apply_2(v_toPure_2912_, lean_box(0), v___x_2914_);
return v___x_2915_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException(lean_object* v_m_2926_, lean_object* v_inst_2927_, lean_object* v_inst_2928_, lean_object* v_inst_2929_, lean_object* v_inst_2930_, lean_object* v_inst_2931_, lean_object* v_ex_2932_){
_start:
{
lean_object* v___x_2933_; 
v___x_2933_ = l_Lean_Elab_logException___redArg(v_inst_2927_, v_inst_2928_, v_inst_2929_, v_inst_2930_, v_inst_2931_, v_ex_2932_);
return v___x_2933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___redArg___lam__0(lean_object* v_inst_2934_, lean_object* v_inst_2935_, lean_object* v_inst_2936_, lean_object* v_inst_2937_, lean_object* v_inst_2938_, lean_object* v_ex_2939_){
_start:
{
lean_object* v___x_2940_; 
v___x_2940_ = l_Lean_Elab_logException___redArg(v_inst_2934_, v_inst_2935_, v_inst_2936_, v_inst_2937_, v_inst_2938_, v_ex_2939_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___redArg(lean_object* v_inst_2941_, lean_object* v_inst_2942_, lean_object* v_inst_2943_, lean_object* v_inst_2944_, lean_object* v_inst_2945_, lean_object* v_inst_2946_, lean_object* v_x_2947_){
_start:
{
lean_object* v_tryCatch_2948_; lean_object* v___f_2949_; lean_object* v___x_2950_; 
v_tryCatch_2948_ = lean_ctor_get(v_inst_2943_, 1);
lean_inc(v_tryCatch_2948_);
lean_dec_ref(v_inst_2943_);
v___f_2949_ = lean_alloc_closure((void*)(l_Lean_Elab_withLogging___redArg___lam__0), 6, 5);
lean_closure_set(v___f_2949_, 0, v_inst_2941_);
lean_closure_set(v___f_2949_, 1, v_inst_2942_);
lean_closure_set(v___f_2949_, 2, v_inst_2944_);
lean_closure_set(v___f_2949_, 3, v_inst_2945_);
lean_closure_set(v___f_2949_, 4, v_inst_2946_);
v___x_2950_ = lean_apply_3(v_tryCatch_2948_, lean_box(0), v_x_2947_, v___f_2949_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging(lean_object* v_m_2951_, lean_object* v_inst_2952_, lean_object* v_inst_2953_, lean_object* v_inst_2954_, lean_object* v_inst_2955_, lean_object* v_inst_2956_, lean_object* v_inst_2957_, lean_object* v_x_2958_){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = l_Lean_Elab_withLogging___redArg(v_inst_2952_, v_inst_2953_, v_inst_2954_, v_inst_2955_, v_inst_2956_, v_inst_2957_, v_x_2958_);
return v___x_2959_;
}
}
static lean_object* _init_l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2961_ = ((lean_object*)(l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__0));
v___x_2962_ = l_Lean_stringToMessageData(v___x_2961_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0(lean_object* v_val_2963_, lean_object* v_ex_2964_, lean_object* v_toPure_2965_, lean_object* v_____do__lift_2966_){
_start:
{
lean_object* v_exPosition_2967_; lean_object* v_line_2968_; lean_object* v_column_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2989_; 
v_exPosition_2967_ = l_Lean_FileMap_toPosition(v_____do__lift_2966_, v_val_2963_);
v_line_2968_ = lean_ctor_get(v_exPosition_2967_, 0);
v_column_2969_ = lean_ctor_get(v_exPosition_2967_, 1);
v_isSharedCheck_2989_ = !lean_is_exclusive(v_exPosition_2967_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2971_ = v_exPosition_2967_;
v_isShared_2972_ = v_isSharedCheck_2989_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_column_2969_);
lean_inc(v_line_2968_);
lean_dec(v_exPosition_2967_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2989_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2978_; 
v___x_2973_ = l_Nat_reprFast(v_line_2968_);
v___x_2974_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
v___x_2975_ = l_Lean_MessageData_ofFormat(v___x_2974_);
v___x_2976_ = lean_obj_once(&l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1, &l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1);
if (v_isShared_2972_ == 0)
{
lean_ctor_set_tag(v___x_2971_, 7);
lean_ctor_set(v___x_2971_, 1, v___x_2976_);
lean_ctor_set(v___x_2971_, 0, v___x_2975_);
v___x_2978_ = v___x_2971_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2975_);
lean_ctor_set(v_reuseFailAlloc_2988_, 1, v___x_2976_);
v___x_2978_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2979_ = l_Nat_reprFast(v_column_2969_);
v___x_2980_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
v___x_2981_ = l_Lean_MessageData_ofFormat(v___x_2980_);
v___x_2982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2978_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16);
v___x_2984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2982_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
v___x_2985_ = l_Lean_Exception_toMessageData(v_ex_2964_);
v___x_2986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2984_);
lean_ctor_set(v___x_2986_, 1, v___x_2985_);
v___x_2987_ = lean_apply_2(v_toPure_2965_, lean_box(0), v___x_2986_);
return v___x_2987_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___boxed(lean_object* v_val_2990_, lean_object* v_ex_2991_, lean_object* v_toPure_2992_, lean_object* v_____do__lift_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0(v_val_2990_, v_ex_2991_, v_toPure_2992_, v_____do__lift_2993_);
lean_dec(v_val_2990_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1(lean_object* v_ex_2995_, lean_object* v_toPure_2996_, lean_object* v_toBind_2997_, lean_object* v_toMonadFileMap_2998_, lean_object* v_pos_2999_){
_start:
{
lean_object* v___x_3003_; uint8_t v___x_3004_; lean_object* v___x_3005_; 
v___x_3003_ = l_Lean_Exception_getRef(v_ex_2995_);
v___x_3004_ = 0;
v___x_3005_ = l_Lean_Syntax_getPos_x3f(v___x_3003_, v___x_3004_);
lean_dec(v___x_3003_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_dec(v_toMonadFileMap_2998_);
lean_dec(v_toBind_2997_);
goto v___jp_3000_;
}
else
{
lean_object* v_val_3006_; uint8_t v_decide_3007_; 
v_val_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_val_3006_);
lean_dec_ref_known(v___x_3005_, 1);
v_decide_3007_ = lean_nat_dec_eq(v_pos_2999_, v_val_3006_);
if (v_decide_3007_ == 0)
{
lean_object* v___f_3008_; lean_object* v___x_3009_; 
v___f_3008_ = lean_alloc_closure((void*)(l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3008_, 0, v_val_3006_);
lean_closure_set(v___f_3008_, 1, v_ex_2995_);
lean_closure_set(v___f_3008_, 2, v_toPure_2996_);
v___x_3009_ = lean_apply_4(v_toBind_2997_, lean_box(0), lean_box(0), v_toMonadFileMap_2998_, v___f_3008_);
return v___x_3009_;
}
else
{
lean_dec(v_val_3006_);
lean_dec(v_toMonadFileMap_2998_);
lean_dec(v_toBind_2997_);
goto v___jp_3000_;
}
}
v___jp_3000_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3001_ = l_Lean_Exception_toMessageData(v_ex_2995_);
v___x_3002_ = lean_apply_2(v_toPure_2996_, lean_box(0), v___x_3001_);
return v___x_3002_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1___boxed(lean_object* v_ex_3010_, lean_object* v_toPure_3011_, lean_object* v_toBind_3012_, lean_object* v_toMonadFileMap_3013_, lean_object* v_pos_3014_){
_start:
{
lean_object* v_res_3015_; 
v_res_3015_ = l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1(v_ex_3010_, v_toPure_3011_, v_toBind_3012_, v_toMonadFileMap_3013_, v_pos_3014_);
lean_dec(v_pos_3014_);
return v_res_3015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg(lean_object* v_inst_3016_, lean_object* v_inst_3017_, lean_object* v_ex_3018_){
_start:
{
lean_object* v_toApplicative_3019_; lean_object* v_toBind_3020_; lean_object* v_toPure_3021_; lean_object* v_toMonadFileMap_3022_; lean_object* v___x_3023_; lean_object* v___f_3024_; lean_object* v___x_3025_; 
v_toApplicative_3019_ = lean_ctor_get(v_inst_3016_, 0);
v_toBind_3020_ = lean_ctor_get(v_inst_3016_, 1);
lean_inc_n(v_toBind_3020_, 2);
v_toPure_3021_ = lean_ctor_get(v_toApplicative_3019_, 1);
lean_inc(v_toPure_3021_);
v_toMonadFileMap_3022_ = lean_ctor_get(v_inst_3017_, 0);
lean_inc(v_toMonadFileMap_3022_);
v___x_3023_ = l_Lean_getRefPos___redArg(v_inst_3016_, v_inst_3017_);
v___f_3024_ = lean_alloc_closure((void*)(l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3024_, 0, v_ex_3018_);
lean_closure_set(v___f_3024_, 1, v_toPure_3021_);
lean_closure_set(v___f_3024_, 2, v_toBind_3020_);
lean_closure_set(v___f_3024_, 3, v_toMonadFileMap_3022_);
v___x_3025_ = lean_apply_4(v_toBind_3020_, lean_box(0), lean_box(0), v___x_3023_, v___f_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData(lean_object* v_m_3026_, lean_object* v_inst_3027_, lean_object* v_inst_3028_, lean_object* v_ex_3029_){
_start:
{
lean_object* v___x_3030_; 
v___x_3030_ = l_Lean_Elab_nestedExceptionToMessageData___redArg(v_inst_3027_, v_inst_3028_, v_ex_3029_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__0(lean_object* v_inst_3031_, lean_object* v_inst_3032_, lean_object* v_x_3033_){
_start:
{
lean_object* v___x_3034_; 
v___x_3034_ = l_Lean_Elab_nestedExceptionToMessageData___redArg(v_inst_3031_, v_inst_3032_, v_x_3033_);
return v___x_3034_;
}
}
static lean_object* _init_l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3036_ = ((lean_object*)(l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__0));
v___x_3037_ = l_Lean_stringToMessageData(v___x_3036_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1(lean_object* v_msg_3038_, lean_object* v_inst_3039_, lean_object* v_inst_3040_, lean_object* v_____do__lift_3041_){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3042_ = lean_obj_once(&l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1, &l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1);
v___x_3043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3043_, 0, v_msg_3038_);
lean_ctor_set(v___x_3043_, 1, v___x_3042_);
v___x_3044_ = l_Lean_toMessageList(v_____do__lift_3041_);
v___x_3045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3043_);
lean_ctor_set(v___x_3045_, 1, v___x_3044_);
v___x_3046_ = l_Lean_throwError___redArg(v_inst_3039_, v_inst_3040_, v___x_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg(lean_object* v_inst_3047_, lean_object* v_inst_3048_, lean_object* v_inst_3049_, lean_object* v_msg_3050_, lean_object* v_exs_3051_){
_start:
{
lean_object* v_toBind_3052_; lean_object* v___f_3053_; lean_object* v___f_3054_; size_t v_sz_3055_; size_t v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
v_toBind_3052_ = lean_ctor_get(v_inst_3048_, 1);
lean_inc(v_toBind_3052_);
lean_inc_ref_n(v_inst_3048_, 2);
v___f_3053_ = lean_alloc_closure((void*)(l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3053_, 0, v_inst_3048_);
lean_closure_set(v___f_3053_, 1, v_inst_3049_);
v___f_3054_ = lean_alloc_closure((void*)(l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3054_, 0, v_msg_3050_);
lean_closure_set(v___f_3054_, 1, v_inst_3048_);
lean_closure_set(v___f_3054_, 2, v_inst_3047_);
v_sz_3055_ = lean_array_size(v_exs_3051_);
v___x_3056_ = ((size_t)0ULL);
v___x_3057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3048_, v___f_3053_, v_sz_3055_, v___x_3056_, v_exs_3051_);
v___x_3058_ = lean_apply_4(v_toBind_3052_, lean_box(0), lean_box(0), v___x_3057_, v___f_3054_);
return v___x_3058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors(lean_object* v_m_3059_, lean_object* v_00_u03b1_3060_, lean_object* v_inst_3061_, lean_object* v_inst_3062_, lean_object* v_inst_3063_, lean_object* v_msg_3064_, lean_object* v_exs_3065_){
_start:
{
lean_object* v___x_3066_; 
v___x_3066_ = l_Lean_Elab_throwErrorWithNestedErrors___redArg(v_inst_3061_, v_inst_3062_, v_inst_3063_, v_msg_3064_, v_exs_3065_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3133_; uint8_t v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3133_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_));
v___x_3134_ = 0;
v___x_3135_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_));
v___x_3136_ = l_Lean_registerTraceClass(v___x_3133_, v___x_3134_, v___x_3135_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
lean_dec_ref_known(v___x_3136_, 1);
v___x_3137_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_));
v___x_3138_ = l_Lean_registerTraceClass(v___x_3137_, v___x_3134_, v___x_3135_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v___x_3139_; uint8_t v___x_3140_; lean_object* v___x_3141_; 
lean_dec_ref_known(v___x_3138_, 1);
v___x_3139_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_));
v___x_3140_ = 1;
v___x_3141_ = l_Lean_registerTraceClass(v___x_3139_, v___x_3140_, v___x_3135_);
return v___x_3141_;
}
else
{
return v___x_3138_;
}
}
else
{
return v___x_3136_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2____boxed(lean_object* v_a_3142_){
_start:
{
lean_object* v_res_3143_; 
v_res_3143_ = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_();
return v_res_3143_;
}
}
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* runtime_initialize_Lean_KeyedDeclsAttribute(uint8_t builtin);
lean_object* runtime_initialize_Lean_BuiltinDocAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_KeyedDeclsAttribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_BuiltinDocAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_pp_macroStack = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_pp_macroStack);
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_macroAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_macroAttribute);
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instMonadMacroAdapterCoreM = _init_l_Lean_Elab_instMonadMacroAdapterCoreM();
lean_mark_persistent(l_Lean_Elab_instMonadMacroAdapterCoreM);
res = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_mkElabAttribute___auto__1 = _init_l_Lean_Elab_mkElabAttribute___auto__1();
lean_mark_persistent(l_Lean_Elab_mkElabAttribute___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* initialize_Lean_KeyedDeclsAttribute(uint8_t builtin);
lean_object* initialize_Lean_BuiltinDocAttr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Init_Prelude(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_KeyedDeclsAttribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_BuiltinDocAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Util(builtin);
}
#ifdef __cplusplus
}
#endif
