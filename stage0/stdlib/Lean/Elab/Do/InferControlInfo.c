// Lean compiler output
// Module: Lean.Elab.Do.InferControlInfo
// Imports: public import Lean.Elab.Term public import Lean.Elab.Do.ForwardSyntax meta import Lean.Parser.Do import Lean.Elab.Do.PatternVar
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_append(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Parser_Term_getDoElems(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getEntries___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_getLetPatDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getLetIdDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_Forward_matchApp_x3f(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_pure;
static lean_once_cell_t l_Lean_Elab_Do_ControlInfo_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlInfo_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_empty;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", reassigns: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofName, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = ", numRegularExits: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ",\n    noFallthrough: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ",\n    returnsEarly: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "breaks: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", continues: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value)} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "builtin_doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 75, 74, 17, 172, 74, 138, 206)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 182, 102, 169, 76, 87, 55, 254)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElem"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value),LEAN_SCALAR_PTR_LITERAL(208, 65, 144, 138, 55, 55, 217, 220)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ControlInfoHandler"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value),LEAN_SCALAR_PTR_LITERAL(18, 126, 127, 228, 104, 205, 61, 148)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "control info inference"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "controlInfoElemAttribute"};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 110, 218, 82, 47, 2, 10, 58)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoElemAttribute;
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 238, .m_capacity = 238, .m_length = 235, .m_data = "Registers a `ControlInfo` inference handler for the given `doElem` syntax node kind.\n\nA handler should have type `ControlInfoHandler` (i.e. `DoElem → TermElabM ControlInfo`).\nFor pure handlers, use `fun stx => return ControlInfo.pure`."};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(119) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(127) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(126) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(126) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value;
static const lean_ctor_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 165, 255, 22, 123, 199, 70, 61)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprPat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 152, 68, 102, 242, 224, 57, 35)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doForDecl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 147, 251, 147, 43, 72, 7, 132)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "No `ControlInfo` inference handler found for `"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "` in syntax "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "\nRegister a handler with `@[doElem_control_info "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]`."};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doBreak"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value),LEAN_SCALAR_PTR_LITERAL(100, 48, 134, 252, 224, 171, 60, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doContinue"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value),LEAN_SCALAR_PTR_LITERAL(99, 212, 187, 103, 216, 35, 231, 189)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doLetRec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value),LEAN_SCALAR_PTR_LITERAL(82, 47, 84, 182, 64, 225, 123, 219)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetElse"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value),LEAN_SCALAR_PTR_LITERAL(175, 153, 29, 134, 242, 228, 141, 99)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 158, 71, 138, 110, 159, 158, 208)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Not a let or reassignment declaration: "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value),LEAN_SCALAR_PTR_LITERAL(31, 163, 103, 78, 29, 183, 93, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doReassignArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value),LEAN_SCALAR_PTR_LITERAL(24, 63, 28, 32, 90, 193, 231, 114)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value),LEAN_SCALAR_PTR_LITERAL(133, 56, 102, 181, 14, 156, 21, 0)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doUnless"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value),LEAN_SCALAR_PTR_LITERAL(231, 120, 137, 73, 40, 67, 249, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doFor"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value),LEAN_SCALAR_PTR_LITERAL(164, 12, 178, 2, 144, 97, 71, 235)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doRepeat"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value),LEAN_SCALAR_PTR_LITERAL(27, 14, 140, 183, 155, 194, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doTry"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value),LEAN_SCALAR_PTR_LITERAL(183, 105, 89, 167, 131, 32, 5, 203)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doSkip"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InternalSyntax"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_3),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value),LEAN_SCALAR_PTR_LITERAL(125, 157, 182, 149, 109, 63, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doDbgTrace"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value),LEAN_SCALAR_PTR_LITERAL(34, 125, 157, 23, 122, 81, 121, 195)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value),LEAN_SCALAR_PTR_LITERAL(171, 15, 212, 125, 46, 208, 251, 33)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doDebugAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value),LEAN_SCALAR_PTR_LITERAL(219, 254, 62, 12, 192, 208, 196, 20)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doAssertion"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value),LEAN_SCALAR_PTR_LITERAL(144, 179, 243, 245, 156, 230, 227, 142)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doMatchExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value),LEAN_SCALAR_PTR_LITERAL(72, 0, 49, 218, 206, 236, 229, 165)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value),LEAN_SCALAR_PTR_LITERAL(68, 239, 85, 151, 235, 111, 29, 229)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doLetMetaExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value),LEAN_SCALAR_PTR_LITERAL(231, 210, 172, 145, 91, 221, 30, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "matchExprAlts"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value),LEAN_SCALAR_PTR_LITERAL(88, 158, 245, 158, 91, 207, 89, 187)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "matchExprElseAlt"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value),LEAN_SCALAR_PTR_LITERAL(249, 132, 98, 23, 98, 205, 167, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doCatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 196, 191, 146, 79, 230, 20, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "doCatchMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 106, 10, 98, 177, 11, 181, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Not a catch or catch match: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doFinally"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value),LEAN_SCALAR_PTR_LITERAL(94, 201, 209, 4, 148, 58, 33, 223)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doLoopDecreasing"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value),LEAN_SCALAR_PTR_LITERAL(0, 112, 64, 8, 91, 183, 41, 148)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doLoopInvariant"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value),LEAN_SCALAR_PTR_LITERAL(207, 155, 107, 150, 202, 64, 185, 181)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizingParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value),LEAN_SCALAR_PTR_LITERAL(147, 206, 52, 232, 193, 222, 34, 109)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "dependentParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value),LEAN_SCALAR_PTR_LITERAL(78, 215, 202, 78, 135, 250, 138, 86)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value),LEAN_SCALAR_PTR_LITERAL(205, 0, 127, 82, 201, 96, 42, 5)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doErasedArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value),LEAN_SCALAR_PTR_LITERAL(176, 216, 203, 158, 108, 103, 134, 112)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doErased"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value),LEAN_SCALAR_PTR_LITERAL(69, 69, 120, 16, 133, 86, 56, 26)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letRecDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value),LEAN_SCALAR_PTR_LITERAL(202, 48, 93, 231, 206, 172, 150, 190)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; uint8_t v___x_3_; lean_object* v___x_4_; 
v___x_1_ = l_Lean_NameSet_empty;
v___x_2_ = lean_unsigned_to_nat(1u);
v___x_3_ = 0;
v___x_4_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4_, 0, v___x_2_);
lean_ctor_set(v___x_4_, 1, v___x_1_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 1, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 2, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 3, v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Elab_Do_instInhabitedControlInfo_default;
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_pure(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0(void){
_start:
{
lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; lean_object* v___x_12_; 
v___x_8_ = l_Lean_NameSet_empty;
v___x_9_ = 1;
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = 0;
v___x_12_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_12_, 0, v___x_10_);
lean_ctor_set(v___x_12_, 1, v___x_8_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 1, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 2, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 3, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Elab_Do_ControlInfo_empty___closed__0, &l_Lean_Elab_Do_ControlInfo_empty___closed__0_once, _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object* v_a_14_, lean_object* v_b_15_){
_start:
{
uint8_t v_breaks_16_; uint8_t v_continues_17_; uint8_t v_returnsEarly_18_; uint8_t v_noFallthrough_19_; lean_object* v_reassigns_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_52_; 
v_breaks_16_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2);
v_continues_17_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 1);
v_returnsEarly_18_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 2);
v_noFallthrough_19_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 3);
v_reassigns_20_ = lean_ctor_get(v_a_14_, 1);
v_isSharedCheck_52_ = !lean_is_exclusive(v_a_14_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v_a_14_, 0);
lean_dec(v_unused_53_);
v___x_22_ = v_a_14_;
v_isShared_23_ = v_isSharedCheck_52_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_reassigns_20_);
lean_dec(v_a_14_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_52_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
uint8_t v___y_25_; uint8_t v___y_26_; uint8_t v___y_27_; lean_object* v___y_28_; lean_object* v___y_29_; uint8_t v___y_30_; uint8_t v___y_36_; uint8_t v___y_37_; uint8_t v___y_38_; uint8_t v___y_45_; uint8_t v___y_46_; uint8_t v___y_49_; 
if (v_breaks_16_ == 0)
{
uint8_t v_breaks_51_; 
v_breaks_51_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2);
v___y_49_ = v_breaks_51_;
goto v___jp_48_;
}
else
{
v___y_49_ = v_breaks_16_;
goto v___jp_48_;
}
v___jp_24_:
{
lean_object* v___x_31_; lean_object* v___x_33_; 
v___x_31_ = l_Lean_NameSet_append(v_reassigns_20_, v___y_29_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_31_);
lean_ctor_set(v___x_22_, 0, v___y_28_);
v___x_33_ = v___x_22_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v___y_28_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v___x_31_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2, v___y_26_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 1, v___y_27_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 2, v___y_25_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 3, v___y_30_);
return v___x_33_;
}
}
v___jp_35_:
{
if (v_noFallthrough_19_ == 0)
{
lean_object* v_numRegularExits_39_; uint8_t v_noFallthrough_40_; lean_object* v_reassigns_41_; 
v_numRegularExits_39_ = lean_ctor_get(v_b_15_, 0);
lean_inc(v_numRegularExits_39_);
v_noFallthrough_40_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 3);
v_reassigns_41_ = lean_ctor_get(v_b_15_, 1);
lean_inc(v_reassigns_41_);
lean_dec_ref(v_b_15_);
v___y_25_ = v___y_38_;
v___y_26_ = v___y_36_;
v___y_27_ = v___y_37_;
v___y_28_ = v_numRegularExits_39_;
v___y_29_ = v_reassigns_41_;
v___y_30_ = v_noFallthrough_40_;
goto v___jp_24_;
}
else
{
lean_object* v_numRegularExits_42_; lean_object* v_reassigns_43_; 
v_numRegularExits_42_ = lean_ctor_get(v_b_15_, 0);
lean_inc(v_numRegularExits_42_);
v_reassigns_43_ = lean_ctor_get(v_b_15_, 1);
lean_inc(v_reassigns_43_);
lean_dec_ref(v_b_15_);
v___y_25_ = v___y_38_;
v___y_26_ = v___y_36_;
v___y_27_ = v___y_37_;
v___y_28_ = v_numRegularExits_42_;
v___y_29_ = v_reassigns_43_;
v___y_30_ = v_noFallthrough_19_;
goto v___jp_24_;
}
}
v___jp_44_:
{
if (v_returnsEarly_18_ == 0)
{
uint8_t v_returnsEarly_47_; 
v_returnsEarly_47_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 2);
v___y_36_ = v___y_45_;
v___y_37_ = v___y_46_;
v___y_38_ = v_returnsEarly_47_;
goto v___jp_35_;
}
else
{
v___y_36_ = v___y_45_;
v___y_37_ = v___y_46_;
v___y_38_ = v_returnsEarly_18_;
goto v___jp_35_;
}
}
v___jp_48_:
{
if (v_continues_17_ == 0)
{
uint8_t v_continues_50_; 
v_continues_50_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 1);
v___y_45_ = v___y_49_;
v___y_46_ = v_continues_50_;
goto v___jp_44_;
}
else
{
v___y_45_ = v___y_49_;
v___y_46_ = v_continues_17_;
goto v___jp_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object* v_a_54_, lean_object* v_b_55_){
_start:
{
lean_object* v___y_57_; lean_object* v___y_58_; uint8_t v___y_59_; lean_object* v___y_60_; uint8_t v___y_61_; uint8_t v___y_62_; uint8_t v___y_63_; uint8_t v_breaks_66_; uint8_t v_continues_67_; uint8_t v_returnsEarly_68_; lean_object* v_numRegularExits_69_; uint8_t v_noFallthrough_70_; lean_object* v_reassigns_71_; uint8_t v___y_73_; uint8_t v___y_74_; uint8_t v___y_75_; uint8_t v___y_81_; uint8_t v___y_82_; uint8_t v___y_85_; 
v_breaks_66_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2);
v_continues_67_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 1);
v_returnsEarly_68_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 2);
v_numRegularExits_69_ = lean_ctor_get(v_a_54_, 0);
lean_inc(v_numRegularExits_69_);
v_noFallthrough_70_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 3);
v_reassigns_71_ = lean_ctor_get(v_a_54_, 1);
lean_inc(v_reassigns_71_);
lean_dec_ref(v_a_54_);
if (v_breaks_66_ == 0)
{
uint8_t v_breaks_87_; 
v_breaks_87_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2);
v___y_85_ = v_breaks_87_;
goto v___jp_84_;
}
else
{
v___y_85_ = v_breaks_66_;
goto v___jp_84_;
}
v___jp_56_:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = l_Lean_NameSet_append(v___y_57_, v___y_60_);
v___x_65_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_65_, 0, v___y_58_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2, v___y_59_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 1, v___y_62_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 2, v___y_61_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 3, v___y_63_);
return v___x_65_;
}
v___jp_72_:
{
lean_object* v_numRegularExits_76_; uint8_t v_noFallthrough_77_; lean_object* v_reassigns_78_; lean_object* v___x_79_; 
v_numRegularExits_76_ = lean_ctor_get(v_b_55_, 0);
lean_inc(v_numRegularExits_76_);
v_noFallthrough_77_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 3);
v_reassigns_78_ = lean_ctor_get(v_b_55_, 1);
lean_inc(v_reassigns_78_);
lean_dec_ref(v_b_55_);
v___x_79_ = lean_nat_add(v_numRegularExits_69_, v_numRegularExits_76_);
lean_dec(v_numRegularExits_76_);
lean_dec(v_numRegularExits_69_);
if (v_noFallthrough_70_ == 0)
{
v___y_57_ = v_reassigns_71_;
v___y_58_ = v___x_79_;
v___y_59_ = v___y_73_;
v___y_60_ = v_reassigns_78_;
v___y_61_ = v___y_75_;
v___y_62_ = v___y_74_;
v___y_63_ = v_noFallthrough_70_;
goto v___jp_56_;
}
else
{
v___y_57_ = v_reassigns_71_;
v___y_58_ = v___x_79_;
v___y_59_ = v___y_73_;
v___y_60_ = v_reassigns_78_;
v___y_61_ = v___y_75_;
v___y_62_ = v___y_74_;
v___y_63_ = v_noFallthrough_77_;
goto v___jp_56_;
}
}
v___jp_80_:
{
if (v_returnsEarly_68_ == 0)
{
uint8_t v_returnsEarly_83_; 
v_returnsEarly_83_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 2);
v___y_73_ = v___y_81_;
v___y_74_ = v___y_82_;
v___y_75_ = v_returnsEarly_83_;
goto v___jp_72_;
}
else
{
v___y_73_ = v___y_81_;
v___y_74_ = v___y_82_;
v___y_75_ = v_returnsEarly_68_;
goto v___jp_72_;
}
}
v___jp_84_:
{
if (v_continues_67_ == 0)
{
uint8_t v_continues_86_; 
v_continues_86_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 1);
v___y_81_ = v___y_85_;
v___y_82_ = v_continues_86_;
goto v___jp_80_;
}
else
{
v___y_81_ = v___y_85_;
v___y_82_ = v_continues_67_;
goto v___jp_80_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object* v_x1_88_, lean_object* v_x2_89_, lean_object* v_x3_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_91_, 0, v_x1_88_);
lean_ctor_set(v___x_91_, 1, v_x3_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0));
v___x_94_ = l_Lean_stringToMessageData(v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13));
v___x_117_ = l_Lean_stringToMessageData(v___x_116_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15));
v___x_120_ = l_Lean_stringToMessageData(v___x_119_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19));
v___x_125_ = l_Lean_stringToMessageData(v___x_124_);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21));
v___x_128_ = l_Lean_stringToMessageData(v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23));
v___x_131_ = l_Lean_stringToMessageData(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1(lean_object* v___f_132_, lean_object* v_info_133_){
_start:
{
lean_object* v___y_135_; lean_object* v___y_136_; lean_object* v___y_137_; uint8_t v_breaks_150_; uint8_t v_continues_151_; uint8_t v_returnsEarly_152_; lean_object* v_numRegularExits_153_; uint8_t v_noFallthrough_154_; lean_object* v_reassigns_155_; lean_object* v___y_157_; lean_object* v___y_158_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___x_182_; lean_object* v___y_184_; 
v_breaks_150_ = lean_ctor_get_uint8(v_info_133_, sizeof(void*)*2);
v_continues_151_ = lean_ctor_get_uint8(v_info_133_, sizeof(void*)*2 + 1);
v_returnsEarly_152_ = lean_ctor_get_uint8(v_info_133_, sizeof(void*)*2 + 2);
v_numRegularExits_153_ = lean_ctor_get(v_info_133_, 0);
lean_inc(v_numRegularExits_153_);
v_noFallthrough_154_ = lean_ctor_get_uint8(v_info_133_, sizeof(void*)*2 + 3);
v_reassigns_155_ = lean_ctor_get(v_info_133_, 1);
lean_inc(v_reassigns_155_);
lean_dec_ref(v_info_133_);
v___x_182_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22);
if (v_breaks_150_ == 0)
{
lean_object* v___x_192_; 
v___x_192_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_184_ = v___x_192_;
goto v___jp_183_;
}
else
{
lean_object* v___x_193_; 
v___x_193_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_184_ = v___x_193_;
goto v___jp_183_;
}
v___jp_134_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_inc_ref(v___y_137_);
v___x_138_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_138_, 0, v___y_137_);
v___x_139_ = l_Lean_MessageData_ofFormat(v___x_138_);
v___x_140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_140_, 0, v___y_136_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1);
v___x_142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = lean_box(0);
v___x_144_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11));
v___x_145_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_144_, v___f_132_, v___x_143_, v___y_135_);
v___x_146_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12));
v___x_147_ = l_List_mapTR_loop___redArg(v___x_146_, v___x_145_, v___x_143_);
v___x_148_ = l_Lean_MessageData_ofList(v___x_147_);
v___x_149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_142_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
return v___x_149_;
}
v___jp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
lean_inc_ref(v___y_158_);
v___x_159_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_159_, 0, v___y_158_);
v___x_160_ = l_Lean_MessageData_ofFormat(v___x_159_);
v___x_161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_161_, 0, v___y_157_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
v___x_162_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14);
v___x_163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = l_Nat_reprFast(v_numRegularExits_153_);
v___x_165_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
v___x_166_ = l_Lean_MessageData_ofFormat(v___x_165_);
v___x_167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_163_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16);
v___x_169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
if (v_noFallthrough_154_ == 0)
{
lean_object* v___x_170_; 
v___x_170_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_135_ = v_reassigns_155_;
v___y_136_ = v___x_169_;
v___y_137_ = v___x_170_;
goto v___jp_134_;
}
else
{
lean_object* v___x_171_; 
v___x_171_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_135_ = v_reassigns_155_;
v___y_136_ = v___x_169_;
v___y_137_ = v___x_171_;
goto v___jp_134_;
}
}
v___jp_172_:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
lean_inc_ref(v___y_174_);
v___x_175_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_175_, 0, v___y_174_);
v___x_176_ = l_Lean_MessageData_ofFormat(v___x_175_);
v___x_177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_177_, 0, v___y_173_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20);
v___x_179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
if (v_returnsEarly_152_ == 0)
{
lean_object* v___x_180_; 
v___x_180_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_157_ = v___x_179_;
v___y_158_ = v___x_180_;
goto v___jp_156_;
}
else
{
lean_object* v___x_181_; 
v___x_181_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_157_ = v___x_179_;
v___y_158_ = v___x_181_;
goto v___jp_156_;
}
}
v___jp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
lean_inc_ref(v___y_184_);
v___x_185_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_185_, 0, v___y_184_);
v___x_186_ = l_Lean_MessageData_ofFormat(v___x_185_);
v___x_187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_182_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24);
v___x_189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
if (v_continues_151_ == 0)
{
lean_object* v___x_190_; 
v___x_190_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_173_ = v___x_189_;
v___y_174_ = v___x_190_;
goto v___jp_172_;
}
else
{
lean_object* v___x_191_; 
v___x_191_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_173_ = v___x_189_;
v___y_174_ = v___x_191_;
goto v___jp_172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object* v_ref_222_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_224_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1));
v___x_225_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3));
v___x_226_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8));
v___x_227_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12));
v___x_228_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13));
v___x_229_ = l_Lean_Elab_mkElabAttribute___redArg(v___x_224_, v___x_225_, v___x_226_, v___x_227_, v___x_228_, v_ref_222_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object* v_ref_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v_ref_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_241_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2____boxed(lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1(){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0));
v___x_248_ = l_Lean_addBuiltinDocString(v___x_246_, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3(){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_278_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6));
v___x_279_ = l_Lean_addBuiltinDeclarationRanges(v___x_277_, v___x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(lean_object* v_msgData_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v___x_288_; lean_object* v_env_289_; uint8_t v___x_290_; lean_object* v_env_291_; lean_object* v___x_292_; lean_object* v_toCold_293_; lean_object* v_mctx_294_; lean_object* v_lctx_295_; lean_object* v_options_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_288_ = lean_st_ref_get(v___y_286_);
v_env_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc_ref(v_env_289_);
lean_dec(v___x_288_);
v___x_290_ = 0;
v_env_291_ = l_Lean_Environment_setRecordingDeps(v_env_289_, v___x_290_);
v___x_292_ = lean_st_ref_get(v___y_284_);
v_toCold_293_ = lean_ctor_get(v___y_285_, 0);
v_mctx_294_ = lean_ctor_get(v___x_292_, 0);
lean_inc_ref(v_mctx_294_);
lean_dec(v___x_292_);
v_lctx_295_ = lean_ctor_get(v___y_283_, 2);
v_options_296_ = lean_ctor_get(v_toCold_293_, 2);
lean_inc_ref(v_options_296_);
lean_inc_ref(v_lctx_295_);
v___x_297_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_297_, 0, v_env_291_);
lean_ctor_set(v___x_297_, 1, v_mctx_294_);
lean_ctor_set(v___x_297_, 2, v_lctx_295_);
lean_ctor_set(v___x_297_, 3, v_options_296_);
v___x_298_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v_msgData_282_);
v___x_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10___boxed(lean_object* v_msgData_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msgData_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
return v_res_306_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_box(1);
v___x_308_ = l_Lean_MessageData_ofFormat(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2));
v___x_313_ = l_Lean_MessageData_ofFormat(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
if (lean_obj_tag(v_x_315_) == 0)
{
return v_x_314_;
}
else
{
lean_object* v_head_316_; lean_object* v_tail_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_339_; 
v_head_316_ = lean_ctor_get(v_x_315_, 0);
v_tail_317_ = lean_ctor_get(v_x_315_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v_x_315_);
if (v_isSharedCheck_339_ == 0)
{
v___x_319_ = v_x_315_;
v_isShared_320_ = v_isSharedCheck_339_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_tail_317_);
lean_inc(v_head_316_);
lean_dec(v_x_315_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_339_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v_before_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_337_; 
v_before_321_ = lean_ctor_get(v_head_316_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v_head_316_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v_head_316_, 1);
lean_dec(v_unused_338_);
v___x_323_ = v_head_316_;
v_isShared_324_ = v_isSharedCheck_337_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_before_321_);
lean_dec(v_head_316_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_337_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_325_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0);
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 7);
lean_ctor_set(v___x_323_, 1, v___x_325_);
lean_ctor_set(v___x_323_, 0, v_x_314_);
v___x_327_ = v___x_323_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_x_314_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v___x_325_);
v___x_327_ = v_reuseFailAlloc_336_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; lean_object* v___x_330_; 
v___x_328_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3);
if (v_isShared_320_ == 0)
{
lean_ctor_set_tag(v___x_319_, 7);
lean_ctor_set(v___x_319_, 1, v___x_328_);
lean_ctor_set(v___x_319_, 0, v___x_327_);
v___x_330_ = v___x_319_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_327_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v___x_328_);
v___x_330_ = v_reuseFailAlloc_335_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = l_Lean_MessageData_ofSyntax(v_before_321_);
v___x_332_ = l_Lean_indentD(v___x_331_);
v___x_333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_330_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v_x_314_ = v___x_333_;
v_x_315_ = v_tail_317_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(lean_object* v_opts_340_, lean_object* v_opt_341_){
_start:
{
lean_object* v_name_342_; lean_object* v_defValue_343_; lean_object* v_map_344_; lean_object* v___x_345_; 
v_name_342_ = lean_ctor_get(v_opt_341_, 0);
v_defValue_343_ = lean_ctor_get(v_opt_341_, 1);
v_map_344_ = lean_ctor_get(v_opts_340_, 0);
v___x_345_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_344_, v_name_342_);
if (lean_obj_tag(v___x_345_) == 0)
{
uint8_t v___x_346_; 
v___x_346_ = lean_unbox(v_defValue_343_);
return v___x_346_;
}
else
{
lean_object* v_val_347_; 
v_val_347_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_val_347_);
lean_dec_ref_known(v___x_345_, 1);
if (lean_obj_tag(v_val_347_) == 1)
{
uint8_t v_v_348_; 
v_v_348_ = lean_ctor_get_uint8(v_val_347_, 0);
lean_dec_ref_known(v_val_347_, 0);
return v_v_348_;
}
else
{
uint8_t v___x_349_; 
lean_dec(v_val_347_);
v___x_349_ = lean_unbox(v_defValue_343_);
return v___x_349_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19___boxed(lean_object* v_opts_350_, lean_object* v_opt_351_){
_start:
{
uint8_t v_res_352_; lean_object* v_r_353_; 
v_res_352_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(v_opts_350_, v_opt_351_);
lean_dec_ref(v_opt_351_);
lean_dec_ref(v_opts_350_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1));
v___x_358_ = l_Lean_MessageData_ofFormat(v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(lean_object* v_msgData_359_, lean_object* v_macroStack_360_, lean_object* v___y_361_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_363_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_361_);
v___x_364_ = l_Lean_Elab_pp_macroStack;
v___x_365_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(v___x_363_, v___x_364_);
lean_dec_ref(v___x_363_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; 
lean_dec(v_macroStack_360_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v_msgData_359_);
return v___x_366_;
}
else
{
if (lean_obj_tag(v_macroStack_360_) == 0)
{
lean_object* v___x_367_; 
v___x_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_367_, 0, v_msgData_359_);
return v___x_367_;
}
else
{
lean_object* v_head_368_; lean_object* v_after_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_384_; 
v_head_368_ = lean_ctor_get(v_macroStack_360_, 0);
lean_inc(v_head_368_);
v_after_369_ = lean_ctor_get(v_head_368_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v_head_368_);
if (v_isSharedCheck_384_ == 0)
{
lean_object* v_unused_385_; 
v_unused_385_ = lean_ctor_get(v_head_368_, 0);
lean_dec(v_unused_385_);
v___x_371_ = v_head_368_;
v_isShared_372_ = v_isSharedCheck_384_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_after_369_);
lean_dec(v_head_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_384_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_373_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0);
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 7);
lean_ctor_set(v___x_371_, 1, v___x_373_);
lean_ctor_set(v___x_371_, 0, v_msgData_359_);
v___x_375_ = v___x_371_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_msgData_359_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v___x_373_);
v___x_375_ = v_reuseFailAlloc_383_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v_msgData_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_376_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2);
v___x_377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = l_Lean_MessageData_ofSyntax(v_after_369_);
v___x_379_ = l_Lean_indentD(v___x_378_);
v_msgData_380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_380_, 0, v___x_377_);
lean_ctor_set(v_msgData_380_, 1, v___x_379_);
v___x_381_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(v_msgData_380_, v_macroStack_360_);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
return v___x_382_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___boxed(lean_object* v_msgData_386_, lean_object* v_macroStack_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_msgData_386_, v_macroStack_387_, v___y_388_);
lean_dec_ref(v___y_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object* v_msg_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_ref_399_; lean_object* v_macroStack_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v_a_403_; lean_object* v___x_404_; lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_413_; 
v_ref_399_ = lean_ctor_get(v___y_396_, 2);
v_macroStack_400_ = lean_ctor_get(v___y_392_, 1);
v___x_401_ = l_Lean_Elab_getBetterRef(v_ref_399_, v_macroStack_400_);
v___x_402_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msg_391_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref(v___x_402_);
lean_inc(v_macroStack_400_);
v___x_404_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_a_403_, v_macroStack_400_, v___y_396_);
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_413_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_401_);
lean_ctor_set(v___x_409_, 1, v_a_405_);
if (v_isShared_408_ == 0)
{
lean_ctor_set_tag(v___x_407_, 1);
lean_ctor_set(v___x_407_, 0, v___x_409_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object* v_msg_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(lean_object* v_as_423_, size_t v_i_424_, size_t v_stop_425_, lean_object* v_b_426_){
_start:
{
uint8_t v___x_427_; 
v___x_427_ = lean_usize_dec_eq(v_i_424_, v_stop_425_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; size_t v___x_430_; size_t v___x_431_; 
v___x_428_ = lean_array_uget_borrowed(v_as_423_, v_i_424_);
lean_inc(v___x_428_);
v___x_429_ = l_Lean_NameSet_insert(v_b_426_, v___x_428_);
v___x_430_ = ((size_t)1ULL);
v___x_431_ = lean_usize_add(v_i_424_, v___x_430_);
v_i_424_ = v___x_431_;
v_b_426_ = v___x_429_;
goto _start;
}
else
{
return v_b_426_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21___boxed(lean_object* v_as_433_, lean_object* v_i_434_, lean_object* v_stop_435_, lean_object* v_b_436_){
_start:
{
size_t v_i_boxed_437_; size_t v_stop_boxed_438_; lean_object* v_res_439_; 
v_i_boxed_437_ = lean_unbox_usize(v_i_434_);
lean_dec(v_i_434_);
v_stop_boxed_438_ = lean_unbox_usize(v_stop_435_);
lean_dec(v_stop_435_);
v_res_439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v_as_433_, v_i_boxed_437_, v_stop_boxed_438_, v_b_436_);
lean_dec_ref(v_as_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(size_t v_sz_440_, size_t v_i_441_, lean_object* v_bs_442_){
_start:
{
uint8_t v___x_443_; 
v___x_443_ = lean_usize_dec_lt(v_i_441_, v_sz_440_);
if (v___x_443_ == 0)
{
return v_bs_442_;
}
else
{
lean_object* v_v_444_; lean_object* v___x_445_; lean_object* v_bs_x27_446_; lean_object* v___x_447_; size_t v___x_448_; size_t v___x_449_; lean_object* v___x_450_; 
v_v_444_ = lean_array_uget(v_bs_442_, v_i_441_);
v___x_445_ = lean_unsigned_to_nat(0u);
v_bs_x27_446_ = lean_array_uset(v_bs_442_, v_i_441_, v___x_445_);
v___x_447_ = l_Lean_TSyntax_getId(v_v_444_);
lean_dec(v_v_444_);
v___x_448_ = ((size_t)1ULL);
v___x_449_ = lean_usize_add(v_i_441_, v___x_448_);
v___x_450_ = lean_array_uset(v_bs_x27_446_, v_i_441_, v___x_447_);
v_i_441_ = v___x_449_;
v_bs_442_ = v___x_450_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20___boxed(lean_object* v_sz_452_, lean_object* v_i_453_, lean_object* v_bs_454_){
_start:
{
size_t v_sz_boxed_455_; size_t v_i_boxed_456_; lean_object* v_res_457_; 
v_sz_boxed_455_ = lean_unbox_usize(v_sz_452_);
lean_dec(v_sz_452_);
v_i_boxed_456_ = lean_unbox_usize(v_i_453_);
lean_dec(v_i_453_);
v_res_457_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(v_sz_boxed_455_, v_i_boxed_456_, v_bs_454_);
return v_res_457_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_458_ = lean_box(0);
v___x_459_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
lean_ctor_set(v___x_460_, 1, v___x_458_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg(){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg___closed__0);
v___x_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg___boxed(lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg();
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(size_t v_sz_466_, size_t v_i_467_, lean_object* v_bs_468_){
_start:
{
uint8_t v___x_469_; 
v___x_469_ = lean_usize_dec_lt(v_i_467_, v_sz_466_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; 
v___x_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_470_, 0, v_bs_468_);
return v___x_470_;
}
else
{
lean_object* v___x_471_; lean_object* v_bs_x27_472_; lean_object* v___x_473_; size_t v___x_474_; size_t v___x_475_; lean_object* v___x_476_; 
v___x_471_ = lean_unsigned_to_nat(0u);
v_bs_x27_472_ = lean_array_uset(v_bs_468_, v_i_467_, v___x_471_);
v___x_473_ = lean_box(0);
v___x_474_ = ((size_t)1ULL);
v___x_475_ = lean_usize_add(v_i_467_, v___x_474_);
v___x_476_ = lean_array_uset(v_bs_x27_472_, v_i_467_, v___x_473_);
v_i_467_ = v___x_475_;
v_bs_468_ = v___x_476_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object* v_sz_478_, lean_object* v_i_479_, lean_object* v_bs_480_){
_start:
{
size_t v_sz_boxed_481_; size_t v_i_boxed_482_; lean_object* v_res_483_; 
v_sz_boxed_481_ = lean_unbox_usize(v_sz_478_);
lean_dec(v_sz_478_);
v_i_boxed_482_ = lean_unbox_usize(v_i_479_);
lean_dec(v_i_479_);
v_res_483_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(v_sz_boxed_481_, v_i_boxed_482_, v_bs_480_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(uint8_t v___x_484_, uint8_t v___x_485_, lean_object* v_as_486_, size_t v_i_487_, size_t v_stop_488_, lean_object* v_b_489_){
_start:
{
lean_object* v___y_491_; uint8_t v___x_495_; 
v___x_495_ = lean_usize_dec_eq(v_i_487_, v_stop_488_);
if (v___x_495_ == 0)
{
lean_object* v_fst_496_; uint8_t v___x_497_; 
v_fst_496_ = lean_ctor_get(v_b_489_, 0);
v___x_497_ = lean_unbox(v_fst_496_);
if (v___x_497_ == 0)
{
lean_object* v_snd_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
v_snd_498_ = lean_ctor_get(v_b_489_, 1);
v_isSharedCheck_506_ = !lean_is_exclusive(v_b_489_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; 
v_unused_507_ = lean_ctor_get(v_b_489_, 0);
lean_dec(v_unused_507_);
v___x_500_ = v_b_489_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_snd_498_);
lean_dec(v_b_489_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = lean_box(v___x_484_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_502_);
v___x_504_ = v___x_500_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_snd_498_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
v___y_491_ = v___x_504_;
goto v___jp_490_;
}
}
}
else
{
lean_object* v_snd_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_518_; 
v_snd_508_ = lean_ctor_get(v_b_489_, 1);
v_isSharedCheck_518_ = !lean_is_exclusive(v_b_489_);
if (v_isSharedCheck_518_ == 0)
{
lean_object* v_unused_519_; 
v_unused_519_ = lean_ctor_get(v_b_489_, 0);
lean_dec(v_unused_519_);
v___x_510_ = v_b_489_;
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_snd_508_);
lean_dec(v_b_489_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v___x_512_ = lean_array_uget_borrowed(v_as_486_, v_i_487_);
lean_inc(v___x_512_);
v___x_513_ = lean_array_push(v_snd_508_, v___x_512_);
v___x_514_ = lean_box(v___x_485_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 1, v___x_513_);
lean_ctor_set(v___x_510_, 0, v___x_514_);
v___x_516_ = v___x_510_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v___x_513_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
v___y_491_ = v___x_516_;
goto v___jp_490_;
}
}
}
}
else
{
return v_b_489_;
}
v___jp_490_:
{
size_t v___x_492_; size_t v___x_493_; 
v___x_492_ = ((size_t)1ULL);
v___x_493_ = lean_usize_add(v_i_487_, v___x_492_);
v_i_487_ = v___x_493_;
v_b_489_ = v___y_491_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object* v___x_520_, lean_object* v___x_521_, lean_object* v_as_522_, lean_object* v_i_523_, lean_object* v_stop_524_, lean_object* v_b_525_){
_start:
{
uint8_t v___x_306434__boxed_526_; uint8_t v___x_306435__boxed_527_; size_t v_i_boxed_528_; size_t v_stop_boxed_529_; lean_object* v_res_530_; 
v___x_306434__boxed_526_ = lean_unbox(v___x_520_);
v___x_306435__boxed_527_ = lean_unbox(v___x_521_);
v_i_boxed_528_ = lean_unbox_usize(v_i_523_);
lean_dec(v_i_523_);
v_stop_boxed_529_ = lean_unbox_usize(v_stop_524_);
lean_dec(v_stop_524_);
v_res_530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_306434__boxed_526_, v___x_306435__boxed_527_, v_as_522_, v_i_boxed_528_, v_stop_boxed_529_, v_b_525_);
lean_dec_ref(v_as_522_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object* v_x_531_, lean_object* v___y_532_){
_start:
{
if (lean_obj_tag(v_x_531_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_534_; 
v_a_533_ = lean_ctor_get(v_x_531_, 0);
lean_inc(v_a_533_);
v___x_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_534_, 0, v_a_533_);
lean_ctor_set(v___x_534_, 1, v___y_532_);
return v___x_534_;
}
else
{
lean_object* v_a_535_; lean_object* v___x_536_; 
v_a_535_ = lean_ctor_get(v_x_531_, 0);
lean_inc(v_a_535_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_a_535_);
lean_ctor_set(v___x_536_, 1, v___y_532_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object* v_x_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_537_, v___y_538_);
lean_dec_ref(v_x_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(lean_object* v_env_540_, lean_object* v_stx_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_540_, v_stx_541_, v___y_542_, v___y_543_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
if (lean_obj_tag(v_a_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_554_; 
v_a_546_ = lean_ctor_get(v___x_544_, 1);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_554_ == 0)
{
lean_object* v_unused_555_; 
v_unused_555_ = lean_ctor_get(v___x_544_, 0);
lean_dec(v_unused_555_);
v___x_548_ = v___x_544_;
v_isShared_549_ = v_isSharedCheck_554_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_544_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_554_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_550_; lean_object* v___x_552_; 
v___x_550_ = lean_box(0);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_550_);
v___x_552_ = v___x_548_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_550_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_a_546_);
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
lean_object* v_val_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_584_; 
v_val_556_ = lean_ctor_get(v_a_545_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v_a_545_);
if (v_isSharedCheck_584_ == 0)
{
v___x_558_ = v_a_545_;
v_isShared_559_ = v_isSharedCheck_584_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_val_556_);
lean_dec(v_a_545_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_584_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_snd_560_; 
v_snd_560_ = lean_ctor_get(v_val_556_, 1);
lean_inc(v_snd_560_);
lean_dec(v_val_556_);
if (lean_obj_tag(v_snd_560_) == 0)
{
lean_object* v_a_561_; lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_570_; 
lean_del_object(v___x_558_);
v_a_561_ = lean_ctor_get(v___x_544_, 1);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_544_, 2);
v_a_562_ = lean_ctor_get(v_snd_560_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v_snd_560_);
if (v_isSharedCheck_570_ == 0)
{
v___x_564_ = v_snd_560_;
v_isShared_565_ = v_isSharedCheck_570_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v_snd_560_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_570_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_569_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; 
v___x_568_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_567_, v_a_561_);
lean_dec_ref(v___x_567_);
return v___x_568_;
}
}
}
else
{
lean_object* v_a_571_; lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_583_; 
v_a_571_ = lean_ctor_get(v___x_544_, 1);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_544_, 2);
v_a_572_ = lean_ctor_get(v_snd_560_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v_snd_560_);
if (v_isSharedCheck_583_ == 0)
{
v___x_574_ = v_snd_560_;
v_isShared_575_ = v_isSharedCheck_583_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v_snd_560_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_583_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 0, v_a_572_);
v___x_577_ = v___x_558_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_582_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_579_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_577_);
v___x_579_ = v___x_574_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_577_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_579_, v_a_571_);
lean_dec_ref(v___x_579_);
return v___x_580_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_585_; lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
v_a_585_ = lean_ctor_get(v___x_544_, 0);
v_a_586_ = lean_ctor_get(v___x_544_, 1);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_544_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_inc(v_a_585_);
lean_dec(v___x_544_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_585_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed(lean_object* v_env_594_, lean_object* v_stx_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(v_env_594_, v_stx_595_, v___y_596_, v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_598_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = l_Lean_maxRecDepthErrorMessage;
v___x_605_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
return v___x_605_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3);
v___x_607_ = l_Lean_MessageData_ofFormat(v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4);
v___x_609_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2));
v___x_610_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___x_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(lean_object* v_ref_611_){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_613_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5);
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v_ref_611_);
lean_ctor_set(v___x_614_, 1, v___x_613_);
v___x_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___boxed(lean_object* v_ref_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_ref_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(lean_object* v_env_619_, lean_object* v_declName_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
uint8_t v___x_623_; lean_object* v_env_624_; lean_object* v___x_625_; uint8_t v___x_626_; uint8_t v___x_627_; 
v___x_623_ = 0;
v_env_624_ = l_Lean_Environment_setExporting(v_env_619_, v___x_623_);
lean_inc(v_declName_620_);
v___x_625_ = l_Lean_mkPrivateName(v_env_624_, v_declName_620_);
v___x_626_ = 1;
lean_inc_ref(v_env_624_);
v___x_627_ = l_Lean_Environment_contains(v_env_624_, v___x_625_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; uint8_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_628_ = l_Lean_privateToUserName(v_declName_620_);
v___x_629_ = l_Lean_Environment_contains(v_env_624_, v___x_628_, v___x_626_);
v___x_630_ = lean_box(v___x_629_);
v___x_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
lean_ctor_set(v___x_631_, 1, v___y_622_);
return v___x_631_;
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec_ref(v_env_624_);
lean_dec(v_declName_620_);
v___x_632_ = lean_box(v___x_627_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
lean_ctor_set(v___x_633_, 1, v___y_622_);
return v___x_633_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed(lean_object* v_env_634_, lean_object* v_declName_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(v_env_634_, v_declName_635_, v___y_636_, v___y_637_);
lean_dec_ref(v___y_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(lean_object* v_ref_639_, lean_object* v_msg_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_toCold_648_; lean_object* v_currRecDepth_649_; lean_object* v_ref_650_; uint16_t v_optionFlags_651_; uint8_t v_suppressElabErrors_652_; uint8_t v_checkDeprecated_653_; uint8_t v_isRecordingDeps_654_; lean_object* v_ref_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v_toCold_648_ = lean_ctor_get(v___y_645_, 0);
v_currRecDepth_649_ = lean_ctor_get(v___y_645_, 1);
v_ref_650_ = lean_ctor_get(v___y_645_, 2);
v_optionFlags_651_ = lean_ctor_get_uint16(v___y_645_, sizeof(void*)*3);
v_suppressElabErrors_652_ = lean_ctor_get_uint8(v___y_645_, sizeof(void*)*3 + 2);
v_checkDeprecated_653_ = lean_ctor_get_uint8(v___y_645_, sizeof(void*)*3 + 3);
v_isRecordingDeps_654_ = lean_ctor_get_uint8(v___y_645_, sizeof(void*)*3 + 4);
v_ref_655_ = l_Lean_replaceRef(v_ref_639_, v_ref_650_);
lean_inc(v_currRecDepth_649_);
lean_inc_ref(v_toCold_648_);
v___x_656_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_656_, 0, v_toCold_648_);
lean_ctor_set(v___x_656_, 1, v_currRecDepth_649_);
lean_ctor_set(v___x_656_, 2, v_ref_655_);
lean_ctor_set_uint16(v___x_656_, sizeof(void*)*3, v_optionFlags_651_);
lean_ctor_set_uint8(v___x_656_, sizeof(void*)*3 + 2, v_suppressElabErrors_652_);
lean_ctor_set_uint8(v___x_656_, sizeof(void*)*3 + 3, v_checkDeprecated_653_);
lean_ctor_set_uint8(v___x_656_, sizeof(void*)*3 + 4, v_isRecordingDeps_654_);
v___x_657_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___x_656_, v___y_646_);
lean_dec_ref_known(v___x_656_, 3);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg___boxed(lean_object* v_ref_658_, lean_object* v_msg_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_ref_658_, v_msg_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v_ref_658_);
return v_res_667_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_668_; double v___x_669_; 
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = lean_float_of_nat(v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(lean_object* v_cls_673_, lean_object* v_msg_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v_ref_680_; lean_object* v___x_681_; lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_727_; 
v_ref_680_ = lean_ctor_get(v___y_677_, 2);
v___x_681_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msg_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
v_a_682_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_727_ == 0)
{
v___x_684_ = v___x_681_;
v_isShared_685_ = v_isSharedCheck_727_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_681_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_727_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; lean_object* v_traceState_687_; lean_object* v_env_688_; lean_object* v_nextMacroScope_689_; lean_object* v_ngen_690_; lean_object* v_auxDeclNGen_691_; lean_object* v_cache_692_; lean_object* v_recordedDeps_693_; lean_object* v_messages_694_; lean_object* v_infoState_695_; lean_object* v_snapshotTasks_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_726_; 
v___x_686_ = lean_st_ref_take(v___y_678_);
v_traceState_687_ = lean_ctor_get(v___x_686_, 4);
v_env_688_ = lean_ctor_get(v___x_686_, 0);
v_nextMacroScope_689_ = lean_ctor_get(v___x_686_, 1);
v_ngen_690_ = lean_ctor_get(v___x_686_, 2);
v_auxDeclNGen_691_ = lean_ctor_get(v___x_686_, 3);
v_cache_692_ = lean_ctor_get(v___x_686_, 5);
v_recordedDeps_693_ = lean_ctor_get(v___x_686_, 6);
v_messages_694_ = lean_ctor_get(v___x_686_, 7);
v_infoState_695_ = lean_ctor_get(v___x_686_, 8);
v_snapshotTasks_696_ = lean_ctor_get(v___x_686_, 9);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_726_ == 0)
{
v___x_698_ = v___x_686_;
v_isShared_699_ = v_isSharedCheck_726_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_snapshotTasks_696_);
lean_inc(v_infoState_695_);
lean_inc(v_messages_694_);
lean_inc(v_recordedDeps_693_);
lean_inc(v_cache_692_);
lean_inc(v_traceState_687_);
lean_inc(v_auxDeclNGen_691_);
lean_inc(v_ngen_690_);
lean_inc(v_nextMacroScope_689_);
lean_inc(v_env_688_);
lean_dec(v___x_686_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_726_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
uint64_t v_tid_700_; lean_object* v_traces_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_725_; 
v_tid_700_ = lean_ctor_get_uint64(v_traceState_687_, sizeof(void*)*1);
v_traces_701_ = lean_ctor_get(v_traceState_687_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v_traceState_687_);
if (v_isSharedCheck_725_ == 0)
{
v___x_703_ = v_traceState_687_;
v_isShared_704_ = v_isSharedCheck_725_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_traces_701_);
lean_dec(v_traceState_687_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_725_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_706_; double v___x_707_; uint8_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_705_ = lean_box(0);
v___x_706_ = lean_box(0);
v___x_707_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0);
v___x_708_ = 0;
v___x_709_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1));
v___x_710_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_710_, 0, v_cls_673_);
lean_ctor_set(v___x_710_, 1, v___x_706_);
lean_ctor_set(v___x_710_, 2, v___x_709_);
lean_ctor_set_float(v___x_710_, sizeof(void*)*3, v___x_707_);
lean_ctor_set_float(v___x_710_, sizeof(void*)*3 + 8, v___x_707_);
lean_ctor_set_uint8(v___x_710_, sizeof(void*)*3 + 16, v___x_708_);
v___x_711_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2));
v___x_712_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_712_, 0, v___x_710_);
lean_ctor_set(v___x_712_, 1, v_a_682_);
lean_ctor_set(v___x_712_, 2, v___x_711_);
lean_inc(v_ref_680_);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v_ref_680_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
v___x_714_ = l_Lean_PersistentArray_push___redArg(v_traces_701_, v___x_713_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_714_);
v___x_716_ = v___x_703_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_714_);
lean_ctor_set_uint64(v_reuseFailAlloc_724_, sizeof(void*)*1, v_tid_700_);
v___x_716_ = v_reuseFailAlloc_724_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_718_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 4, v___x_716_);
v___x_718_ = v___x_698_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_env_688_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_nextMacroScope_689_);
lean_ctor_set(v_reuseFailAlloc_723_, 2, v_ngen_690_);
lean_ctor_set(v_reuseFailAlloc_723_, 3, v_auxDeclNGen_691_);
lean_ctor_set(v_reuseFailAlloc_723_, 4, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_723_, 5, v_cache_692_);
lean_ctor_set(v_reuseFailAlloc_723_, 6, v_recordedDeps_693_);
lean_ctor_set(v_reuseFailAlloc_723_, 7, v_messages_694_);
lean_ctor_set(v_reuseFailAlloc_723_, 8, v_infoState_695_);
lean_ctor_set(v_reuseFailAlloc_723_, 9, v_snapshotTasks_696_);
v___x_718_ = v_reuseFailAlloc_723_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_719_ = lean_st_ref_put(v___y_678_, v___x_718_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 0, v___x_705_);
v___x_721_ = v___x_684_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_705_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___boxed(lean_object* v_cls_728_, lean_object* v_msg_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_728_, v_msg_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(lean_object* v_as_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
if (lean_obj_tag(v_as_739_) == 0)
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_box(0);
v___x_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
return v___x_748_;
}
else
{
lean_object* v_toCold_749_; lean_object* v_options_750_; uint8_t v_hasTrace_751_; 
v_toCold_749_ = lean_ctor_get(v___y_744_, 0);
v_options_750_ = lean_ctor_get(v_toCold_749_, 2);
v_hasTrace_751_ = lean_ctor_get_uint8(v_options_750_, sizeof(void*)*1);
if (v_hasTrace_751_ == 0)
{
lean_object* v_tail_752_; 
v_tail_752_ = lean_ctor_get(v_as_739_, 1);
lean_inc(v_tail_752_);
lean_dec_ref_known(v_as_739_, 2);
v_as_739_ = v_tail_752_;
goto _start;
}
else
{
lean_object* v_head_754_; lean_object* v_tail_755_; lean_object* v_fst_756_; lean_object* v_snd_757_; lean_object* v_inheritedTraceOptions_758_; lean_object* v___x_759_; lean_object* v___x_760_; uint8_t v___x_761_; 
v_head_754_ = lean_ctor_get(v_as_739_, 0);
lean_inc(v_head_754_);
v_tail_755_ = lean_ctor_get(v_as_739_, 1);
lean_inc(v_tail_755_);
lean_dec_ref_known(v_as_739_, 2);
v_fst_756_ = lean_ctor_get(v_head_754_, 0);
lean_inc_n(v_fst_756_, 2);
v_snd_757_ = lean_ctor_get(v_head_754_, 1);
lean_inc(v_snd_757_);
lean_dec(v_head_754_);
v_inheritedTraceOptions_758_ = lean_ctor_get(v_toCold_749_, 11);
v___x_759_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1));
v___x_760_ = l_Lean_Name_append(v___x_759_, v_fst_756_);
v___x_761_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_758_, v_options_750_, v___x_760_);
lean_dec(v___x_760_);
if (v___x_761_ == 0)
{
lean_dec(v_snd_757_);
lean_dec(v_fst_756_);
v_as_739_ = v_tail_755_;
goto _start;
}
else
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_763_, 0, v_snd_757_);
v___x_764_ = l_Lean_MessageData_ofFormat(v___x_763_);
v___x_765_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_fst_756_, v___x_764_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_dec_ref_known(v___x_765_, 1);
v_as_739_ = v_tail_755_;
goto _start;
}
else
{
lean_dec(v_tail_755_);
return v___x_765_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___boxed(lean_object* v_as_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(v_as_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(lean_object* v_a_776_, lean_object* v_x_777_){
_start:
{
if (lean_obj_tag(v_x_777_) == 0)
{
lean_object* v___x_778_; 
v___x_778_ = lean_box(0);
return v___x_778_;
}
else
{
lean_object* v_key_779_; lean_object* v_value_780_; lean_object* v_tail_781_; uint8_t v___x_782_; 
v_key_779_ = lean_ctor_get(v_x_777_, 0);
v_value_780_ = lean_ctor_get(v_x_777_, 1);
v_tail_781_ = lean_ctor_get(v_x_777_, 2);
v___x_782_ = lean_name_eq(v_key_779_, v_a_776_);
if (v___x_782_ == 0)
{
v_x_777_ = v_tail_781_;
goto _start;
}
else
{
lean_object* v___x_784_; 
lean_inc(v_value_780_);
v___x_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_784_, 0, v_value_780_);
return v___x_784_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg___boxed(lean_object* v_a_785_, lean_object* v_x_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_785_, v_x_786_);
lean_dec(v_x_786_);
lean_dec(v_a_785_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(lean_object* v_m_788_, lean_object* v_a_789_){
_start:
{
lean_object* v_buckets_790_; lean_object* v___x_791_; uint64_t v___y_793_; 
v_buckets_790_ = lean_ctor_get(v_m_788_, 1);
v___x_791_ = lean_array_get_size(v_buckets_790_);
if (lean_obj_tag(v_a_789_) == 0)
{
uint64_t v___x_807_; 
v___x_807_ = 1723ULL;
v___y_793_ = v___x_807_;
goto v___jp_792_;
}
else
{
uint64_t v_hash_808_; 
v_hash_808_ = lean_ctor_get_uint64(v_a_789_, sizeof(void*)*2);
v___y_793_ = v_hash_808_;
goto v___jp_792_;
}
v___jp_792_:
{
uint64_t v___x_794_; uint64_t v___x_795_; uint64_t v_fold_796_; uint64_t v___x_797_; uint64_t v___x_798_; uint64_t v___x_799_; size_t v___x_800_; size_t v___x_801_; size_t v___x_802_; size_t v___x_803_; size_t v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_794_ = 32ULL;
v___x_795_ = lean_uint64_shift_right(v___y_793_, v___x_794_);
v_fold_796_ = lean_uint64_xor(v___y_793_, v___x_795_);
v___x_797_ = 16ULL;
v___x_798_ = lean_uint64_shift_right(v_fold_796_, v___x_797_);
v___x_799_ = lean_uint64_xor(v_fold_796_, v___x_798_);
v___x_800_ = lean_uint64_to_usize(v___x_799_);
v___x_801_ = lean_usize_of_nat(v___x_791_);
v___x_802_ = ((size_t)1ULL);
v___x_803_ = lean_usize_sub(v___x_801_, v___x_802_);
v___x_804_ = lean_usize_land(v___x_800_, v___x_803_);
v___x_805_ = lean_array_uget_borrowed(v_buckets_790_, v___x_804_);
v___x_806_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_789_, v___x_805_);
return v___x_806_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg___boxed(lean_object* v_m_809_, lean_object* v_a_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v_m_809_, v_a_810_);
lean_dec(v_a_810_);
lean_dec_ref(v_m_809_);
return v_res_811_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___redArg(lean_object* v_keys_812_, lean_object* v_i_813_, lean_object* v_k_814_){
_start:
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = lean_array_get_size(v_keys_812_);
v___x_816_ = lean_nat_dec_lt(v_i_813_, v___x_815_);
if (v___x_816_ == 0)
{
lean_dec(v_i_813_);
return v___x_816_;
}
else
{
lean_object* v_k_x27_817_; uint8_t v___x_818_; 
v_k_x27_817_ = lean_array_fget_borrowed(v_keys_812_, v_i_813_);
v___x_818_ = l_Lean_instBEqExtraModUse_beq(v_k_814_, v_k_x27_817_);
if (v___x_818_ == 0)
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = lean_unsigned_to_nat(1u);
v___x_820_ = lean_nat_add(v_i_813_, v___x_819_);
lean_dec(v_i_813_);
v_i_813_ = v___x_820_;
goto _start;
}
else
{
lean_dec(v_i_813_);
return v___x_816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___redArg___boxed(lean_object* v_keys_822_, lean_object* v_i_823_, lean_object* v_k_824_){
_start:
{
uint8_t v_res_825_; lean_object* v_r_826_; 
v_res_825_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___redArg(v_keys_822_, v_i_823_, v_k_824_);
lean_dec_ref(v_k_824_);
lean_dec_ref(v_keys_822_);
v_r_826_ = lean_box(v_res_825_);
return v_r_826_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(lean_object* v_x_827_, size_t v_x_828_, lean_object* v_x_829_){
_start:
{
if (lean_obj_tag(v_x_827_) == 0)
{
lean_object* v_es_830_; lean_object* v___x_831_; size_t v___x_832_; size_t v___x_833_; lean_object* v_j_834_; lean_object* v___x_835_; 
v_es_830_ = lean_ctor_get(v_x_827_, 0);
v___x_831_ = lean_box(2);
v___x_832_ = ((size_t)31ULL);
v___x_833_ = lean_usize_land(v_x_828_, v___x_832_);
v_j_834_ = lean_usize_to_nat(v___x_833_);
v___x_835_ = lean_array_get_borrowed(v___x_831_, v_es_830_, v_j_834_);
lean_dec(v_j_834_);
switch(lean_obj_tag(v___x_835_))
{
case 0:
{
lean_object* v_key_836_; uint8_t v___x_837_; 
v_key_836_ = lean_ctor_get(v___x_835_, 0);
v___x_837_ = l_Lean_instBEqExtraModUse_beq(v_x_829_, v_key_836_);
return v___x_837_;
}
case 1:
{
lean_object* v_node_838_; size_t v___x_839_; size_t v___x_840_; 
v_node_838_ = lean_ctor_get(v___x_835_, 0);
v___x_839_ = ((size_t)5ULL);
v___x_840_ = lean_usize_shift_right(v_x_828_, v___x_839_);
v_x_827_ = v_node_838_;
v_x_828_ = v___x_840_;
goto _start;
}
default: 
{
uint8_t v___x_842_; 
v___x_842_ = 0;
return v___x_842_;
}
}
}
else
{
lean_object* v_ks_843_; lean_object* v___x_844_; uint8_t v___x_845_; 
v_ks_843_ = lean_ctor_get(v_x_827_, 0);
v___x_844_ = lean_unsigned_to_nat(0u);
v___x_845_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___redArg(v_ks_843_, v___x_844_, v_x_829_);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___boxed(lean_object* v_x_846_, lean_object* v_x_847_, lean_object* v_x_848_){
_start:
{
size_t v_x_306946__boxed_849_; uint8_t v_res_850_; lean_object* v_r_851_; 
v_x_306946__boxed_849_ = lean_unbox_usize(v_x_847_);
lean_dec(v_x_847_);
v_res_850_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(v_x_846_, v_x_306946__boxed_849_, v_x_848_);
lean_dec_ref(v_x_848_);
lean_dec_ref(v_x_846_);
v_r_851_ = lean_box(v_res_850_);
return v_r_851_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(lean_object* v_x_852_, lean_object* v_x_853_){
_start:
{
uint64_t v___x_854_; size_t v___x_855_; uint8_t v___x_856_; 
v___x_854_ = l_Lean_instHashableExtraModUse_hash(v_x_853_);
v___x_855_ = lean_uint64_to_usize(v___x_854_);
v___x_856_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(v_x_852_, v___x_855_, v_x_853_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg___boxed(lean_object* v_x_857_, lean_object* v_x_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(v_x_857_, v_x_858_);
lean_dec_ref(v_x_858_);
lean_dec_ref(v_x_857_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0(void){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_861_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__1(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0);
v___x_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__1);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___boxed(lean_object* v___dummy_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg();
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0(lean_object* v_addEntryFn_868_, lean_object* v_entry_869_, lean_object* v_s_870_){
_start:
{
lean_object* v_importedEntries_871_; lean_object* v_state_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_880_; 
v_importedEntries_871_ = lean_ctor_get(v_s_870_, 0);
v_state_872_ = lean_ctor_get(v_s_870_, 1);
v_isSharedCheck_880_ = !lean_is_exclusive(v_s_870_);
if (v_isSharedCheck_880_ == 0)
{
v___x_874_ = v_s_870_;
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_state_872_);
lean_inc(v_importedEntries_871_);
lean_dec(v_s_870_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v_state_876_; lean_object* v___x_878_; 
v_state_876_ = lean_apply_2(v_addEntryFn_868_, v_state_872_, v_entry_869_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v_state_876_);
v___x_878_ = v___x_874_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_importedEntries_871_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v_state_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0(void){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_881_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___closed__0);
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
return v___x_882_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
return v___x_884_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2(void){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg();
return v___x_885_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_886_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
return v___x_887_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_888_ = lean_unsigned_to_nat(0u);
v___x_889_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_890_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
lean_ctor_set(v___x_890_, 2, v___x_888_);
return v___x_890_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_891_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4);
v___x_892_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3);
v___x_893_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_894_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
v___x_895_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
lean_ctor_set(v___x_895_, 1, v___x_893_);
lean_ctor_set(v___x_895_, 2, v___x_892_);
lean_ctor_set(v___x_895_, 3, v___x_893_);
lean_ctor_set(v___x_895_, 4, v___x_893_);
lean_ctor_set(v___x_895_, 5, v___x_893_);
lean_ctor_set(v___x_895_, 6, v___x_893_);
lean_ctor_set(v___x_895_, 7, v___x_891_);
return v___x_895_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6(void){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_896_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9));
v___x_902_ = l_Lean_stringToMessageData(v___x_901_);
return v___x_902_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11));
v___x_905_ = l_Lean_stringToMessageData(v___x_904_);
return v___x_905_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1));
v___x_907_ = l_Lean_stringToMessageData(v___x_906_);
return v___x_907_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14(void){
_start:
{
lean_object* v_cls_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v_cls_908_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8));
v___x_909_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1));
v___x_910_ = l_Lean_Name_append(v___x_909_, v_cls_908_);
return v___x_910_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15));
v___x_913_ = l_Lean_stringToMessageData(v___x_912_);
return v___x_913_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_915_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17));
v___x_916_ = l_Lean_stringToMessageData(v___x_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(lean_object* v_mod_921_, uint8_t v_isMeta_922_, lean_object* v_hint_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___y_941_; lean_object* v___y_942_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_env_965_; uint8_t v_isExporting_966_; lean_object* v_entry_967_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___x_992_; lean_object* v_env_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v___x_963_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6);
v___x_964_ = lean_st_ref_get(v___y_929_);
v_env_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc_ref(v_env_965_);
lean_dec(v___x_964_);
v_isExporting_966_ = lean_ctor_get_uint8(v_env_965_, sizeof(void*)*13);
lean_dec_ref(v_env_965_);
lean_inc(v_mod_921_);
v_entry_967_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_967_, 0, v_mod_921_);
lean_ctor_set_uint8(v_entry_967_, sizeof(void*)*1, v_isExporting_966_);
lean_ctor_set_uint8(v_entry_967_, sizeof(void*)*1 + 1, v_isMeta_922_);
v___x_992_ = lean_st_ref_get(v___y_929_);
v_env_993_ = lean_ctor_get(v___x_992_, 0);
lean_inc_ref(v_env_993_);
lean_dec(v___x_992_);
v___x_994_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_995_ = lean_box(1);
v___x_996_ = lean_box(0);
v___x_997_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_963_, v___x_994_, v_env_993_, v___x_995_, v___x_996_);
v___x_998_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(v___x_997_, v_entry_967_);
lean_dec(v___x_997_);
if (v___x_998_ == 0)
{
lean_object* v_toCold_999_; lean_object* v_options_1000_; uint8_t v_hasTrace_1001_; 
v_toCold_999_ = lean_ctor_get(v___y_928_, 0);
v_options_1000_ = lean_ctor_get(v_toCold_999_, 2);
v_hasTrace_1001_ = lean_ctor_get_uint8(v_options_1000_, sizeof(void*)*1);
if (v_hasTrace_1001_ == 0)
{
lean_dec(v_hint_923_);
lean_dec(v_mod_921_);
v___y_969_ = v___y_927_;
v___y_970_ = v___y_929_;
goto v___jp_968_;
}
else
{
lean_object* v_inheritedTraceOptions_1002_; lean_object* v_cls_1003_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___x_1023_; uint8_t v___x_1024_; 
v_inheritedTraceOptions_1002_ = lean_ctor_get(v_toCold_999_, 11);
v_cls_1003_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8));
v___x_1023_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14);
v___x_1024_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1002_, v_options_1000_, v___x_1023_);
if (v___x_1024_ == 0)
{
lean_dec(v_hint_923_);
lean_dec(v_mod_921_);
v___y_969_ = v___y_927_;
v___y_970_ = v___y_929_;
goto v___jp_968_;
}
else
{
lean_object* v___x_1025_; lean_object* v___y_1027_; 
v___x_1025_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16);
if (v_isExporting_966_ == 0)
{
lean_object* v___x_1034_; 
v___x_1034_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__21));
v___y_1027_ = v___x_1034_;
goto v___jp_1026_;
}
else
{
lean_object* v___x_1035_; 
v___x_1035_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__22));
v___y_1027_ = v___x_1035_;
goto v___jp_1026_;
}
v___jp_1026_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
lean_inc_ref(v___y_1027_);
v___x_1028_ = l_Lean_stringToMessageData(v___y_1027_);
v___x_1029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1025_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18);
v___x_1031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1029_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
if (v_isMeta_922_ == 0)
{
lean_object* v___x_1032_; 
v___x_1032_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19));
v___y_1010_ = v___x_1031_;
v___y_1011_ = v___x_1032_;
goto v___jp_1009_;
}
else
{
lean_object* v___x_1033_; 
v___x_1033_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20));
v___y_1010_ = v___x_1031_;
v___y_1011_ = v___x_1033_;
goto v___jp_1009_;
}
}
}
v___jp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___y_1005_);
lean_ctor_set(v___x_1007_, 1, v___y_1006_);
v___x_1008_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_1003_, v___x_1007_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_dec_ref_known(v___x_1008_, 1);
v___y_969_ = v___y_927_;
v___y_970_ = v___y_929_;
goto v___jp_968_;
}
else
{
lean_dec_ref_known(v_entry_967_, 1);
return v___x_1008_;
}
}
v___jp_1009_:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
lean_inc_ref(v___y_1011_);
v___x_1012_ = l_Lean_stringToMessageData(v___y_1011_);
v___x_1013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___y_1010_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10);
v___x_1015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = l_Lean_MessageData_ofName(v_mod_921_);
v___x_1017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1015_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
v___x_1018_ = l_Lean_Name_isAnonymous(v_hint_923_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1019_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12);
v___x_1020_ = l_Lean_MessageData_ofName(v_hint_923_);
v___x_1021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1019_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___y_1005_ = v___x_1017_;
v___y_1006_ = v___x_1021_;
goto v___jp_1004_;
}
else
{
lean_object* v___x_1022_; 
lean_dec(v_hint_923_);
v___x_1022_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13);
v___y_1005_ = v___x_1017_;
v___y_1006_ = v___x_1022_;
goto v___jp_1004_;
}
}
}
}
else
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
lean_dec_ref_known(v_entry_967_, 1);
lean_dec(v_hint_923_);
lean_dec(v_mod_921_);
v___x_1036_ = lean_box(0);
v___x_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
return v___x_1037_;
}
v___jp_931_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_mctx_947_; lean_object* v_zetaDeltaFVarIds_948_; lean_object* v_postponed_949_; lean_object* v_diag_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_961_; 
v___x_943_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1);
v___x_944_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_944_, 0, v___y_942_);
lean_ctor_set(v___x_944_, 1, v___y_938_);
lean_ctor_set(v___x_944_, 2, v___y_933_);
lean_ctor_set(v___x_944_, 3, v___y_935_);
lean_ctor_set(v___x_944_, 4, v___y_937_);
lean_ctor_set(v___x_944_, 5, v___x_943_);
lean_ctor_set(v___x_944_, 6, v___y_932_);
lean_ctor_set(v___x_944_, 7, v___y_941_);
lean_ctor_set(v___x_944_, 8, v___y_940_);
lean_ctor_set(v___x_944_, 9, v___y_934_);
v___x_945_ = lean_st_ref_put(v___y_939_, v___x_944_);
v___x_946_ = lean_st_ref_take(v___y_936_);
v_mctx_947_ = lean_ctor_get(v___x_946_, 0);
v_zetaDeltaFVarIds_948_ = lean_ctor_get(v___x_946_, 2);
v_postponed_949_ = lean_ctor_get(v___x_946_, 3);
v_diag_950_ = lean_ctor_get(v___x_946_, 4);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; 
v_unused_962_ = lean_ctor_get(v___x_946_, 1);
lean_dec(v_unused_962_);
v___x_952_ = v___x_946_;
v_isShared_953_ = v_isSharedCheck_961_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_diag_950_);
lean_inc(v_postponed_949_);
lean_inc(v_zetaDeltaFVarIds_948_);
lean_inc(v_mctx_947_);
lean_dec(v___x_946_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_961_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_957_; 
v___x_954_ = lean_box(0);
v___x_955_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 1, v___x_955_);
v___x_957_ = v___x_952_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_mctx_947_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v___x_955_);
lean_ctor_set(v_reuseFailAlloc_960_, 2, v_zetaDeltaFVarIds_948_);
lean_ctor_set(v_reuseFailAlloc_960_, 3, v_postponed_949_);
lean_ctor_set(v_reuseFailAlloc_960_, 4, v_diag_950_);
v___x_957_ = v_reuseFailAlloc_960_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = lean_st_ref_put(v___y_936_, v___x_957_);
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_954_);
return v___x_959_;
}
}
}
v___jp_968_:
{
lean_object* v___x_971_; lean_object* v_env_972_; lean_object* v_nextMacroScope_973_; lean_object* v_ngen_974_; lean_object* v_auxDeclNGen_975_; lean_object* v_traceState_976_; lean_object* v_recordedDeps_977_; lean_object* v_messages_978_; lean_object* v_infoState_979_; lean_object* v_snapshotTasks_980_; lean_object* v___x_981_; lean_object* v_toEnvExtension_982_; lean_object* v_addEntryFn_983_; lean_object* v_asyncMode_984_; uint8_t v_logWrites_985_; lean_object* v___f_986_; lean_object* v___x_987_; uint8_t v___x_988_; 
v___x_971_ = lean_st_ref_take(v___y_970_);
v_env_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc_ref(v_env_972_);
v_nextMacroScope_973_ = lean_ctor_get(v___x_971_, 1);
lean_inc(v_nextMacroScope_973_);
v_ngen_974_ = lean_ctor_get(v___x_971_, 2);
lean_inc_ref(v_ngen_974_);
v_auxDeclNGen_975_ = lean_ctor_get(v___x_971_, 3);
lean_inc_ref(v_auxDeclNGen_975_);
v_traceState_976_ = lean_ctor_get(v___x_971_, 4);
lean_inc_ref(v_traceState_976_);
v_recordedDeps_977_ = lean_ctor_get(v___x_971_, 6);
lean_inc_ref(v_recordedDeps_977_);
v_messages_978_ = lean_ctor_get(v___x_971_, 7);
lean_inc_ref(v_messages_978_);
v_infoState_979_ = lean_ctor_get(v___x_971_, 8);
lean_inc_ref(v_infoState_979_);
v_snapshotTasks_980_ = lean_ctor_get(v___x_971_, 9);
lean_inc_ref(v_snapshotTasks_980_);
lean_dec(v___x_971_);
v___x_981_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_982_ = lean_ctor_get(v___x_981_, 0);
v_addEntryFn_983_ = lean_ctor_get(v___x_981_, 3);
v_asyncMode_984_ = lean_ctor_get(v_toEnvExtension_982_, 2);
v_logWrites_985_ = lean_ctor_get_uint8(v_toEnvExtension_982_, sizeof(void*)*6);
lean_inc(v_addEntryFn_983_);
v___f_986_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0), 3, 2);
lean_closure_set(v___f_986_, 0, v_addEntryFn_983_);
lean_closure_set(v___f_986_, 1, v_entry_967_);
v___x_987_ = lean_box(0);
v___x_988_ = 1;
if (v_logWrites_985_ == 0)
{
lean_object* v___x_989_; 
lean_inc_ref(v_toEnvExtension_982_);
v___x_989_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_982_, v_env_972_, v___f_986_, v_asyncMode_984_, v___x_987_, v___x_988_);
v___y_932_ = v_recordedDeps_977_;
v___y_933_ = v_ngen_974_;
v___y_934_ = v_snapshotTasks_980_;
v___y_935_ = v_auxDeclNGen_975_;
v___y_936_ = v___y_969_;
v___y_937_ = v_traceState_976_;
v___y_938_ = v_nextMacroScope_973_;
v___y_939_ = v___y_970_;
v___y_940_ = v_infoState_979_;
v___y_941_ = v_messages_978_;
v___y_942_ = v___x_989_;
goto v___jp_931_;
}
else
{
lean_object* v___x_990_; lean_object* v___x_991_; 
lean_inc_ref_n(v_toEnvExtension_982_, 2);
v___x_990_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_982_, v_env_972_);
lean_dec_ref(v_env_972_);
v___x_991_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_982_, v___x_990_, v___f_986_, v_asyncMode_984_, v___x_987_, v___x_988_);
v___y_932_ = v_recordedDeps_977_;
v___y_933_ = v_ngen_974_;
v___y_934_ = v_snapshotTasks_980_;
v___y_935_ = v_auxDeclNGen_975_;
v___y_936_ = v___y_969_;
v___y_937_ = v_traceState_976_;
v___y_938_ = v_nextMacroScope_973_;
v___y_939_ = v___y_970_;
v___y_940_ = v_infoState_979_;
v___y_941_ = v_messages_978_;
v___y_942_ = v___x_991_;
goto v___jp_931_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___boxed(lean_object* v_mod_1038_, lean_object* v_isMeta_1039_, lean_object* v_hint_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
uint8_t v_isMeta_boxed_1048_; lean_object* v_res_1049_; 
v_isMeta_boxed_1048_ = lean_unbox(v_isMeta_1039_);
v_res_1049_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_mod_1038_, v_isMeta_boxed_1048_, v_hint_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(lean_object* v___x_1050_, lean_object* v_declName_1051_, lean_object* v_as_1052_, size_t v_sz_1053_, size_t v_i_1054_, lean_object* v_b_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
uint8_t v___x_1063_; 
v___x_1063_ = lean_usize_dec_lt(v_i_1054_, v_sz_1053_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; 
lean_dec(v_declName_1051_);
v___x_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1064_, 0, v_b_1055_);
return v___x_1064_;
}
else
{
lean_object* v___x_1065_; lean_object* v_modules_1066_; lean_object* v___x_1067_; lean_object* v_a_1068_; lean_object* v___x_1069_; lean_object* v_toImport_1070_; lean_object* v_module_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; lean_object* v___x_1074_; 
v___x_1065_ = l_Lean_Environment_header(v___x_1050_);
v_modules_1066_ = lean_ctor_get(v___x_1065_, 3);
lean_inc_ref(v_modules_1066_);
lean_dec_ref(v___x_1065_);
v___x_1067_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1068_ = lean_array_uget_borrowed(v_as_1052_, v_i_1054_);
v___x_1069_ = lean_array_get(v___x_1067_, v_modules_1066_, v_a_1068_);
lean_dec_ref(v_modules_1066_);
v_toImport_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc_ref(v_toImport_1070_);
lean_dec(v___x_1069_);
v_module_1071_ = lean_ctor_get(v_toImport_1070_, 0);
lean_inc(v_module_1071_);
lean_dec_ref(v_toImport_1070_);
v___x_1072_ = lean_box(0);
v___x_1073_ = 0;
lean_inc(v_declName_1051_);
v___x_1074_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_module_1071_, v___x_1073_, v_declName_1051_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
if (lean_obj_tag(v___x_1074_) == 0)
{
size_t v___x_1075_; size_t v___x_1076_; 
lean_dec_ref_known(v___x_1074_, 1);
v___x_1075_ = ((size_t)1ULL);
v___x_1076_ = lean_usize_add(v_i_1054_, v___x_1075_);
v_i_1054_ = v___x_1076_;
v_b_1055_ = v___x_1072_;
goto _start;
}
else
{
lean_dec(v_declName_1051_);
return v___x_1074_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9___boxed(lean_object* v___x_1078_, lean_object* v_declName_1079_, lean_object* v_as_1080_, lean_object* v_sz_1081_, lean_object* v_i_1082_, lean_object* v_b_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
size_t v_sz_boxed_1091_; size_t v_i_boxed_1092_; lean_object* v_res_1093_; 
v_sz_boxed_1091_ = lean_unbox_usize(v_sz_1081_);
lean_dec(v_sz_1081_);
v_i_boxed_1092_ = lean_unbox_usize(v_i_1082_);
lean_dec(v_i_1082_);
v_res_1093_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(v___x_1078_, v_declName_1079_, v_as_1080_, v_sz_boxed_1091_, v_i_boxed_1092_, v_b_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec_ref(v_as_1080_);
lean_dec_ref(v___x_1078_);
return v_res_1093_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(lean_object* v_declName_1097_, uint8_t v_isMeta_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v_env_1111_; lean_object* v___y_1113_; lean_object* v___x_1126_; 
v___x_1106_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0);
v___x_1107_ = lean_st_ref_get(v___y_1104_);
v_env_1111_ = lean_ctor_get(v___x_1107_, 0);
lean_inc_ref(v_env_1111_);
lean_dec(v___x_1107_);
v___x_1126_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1111_, v_declName_1097_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_dec_ref(v_env_1111_);
lean_dec(v_declName_1097_);
goto v___jp_1108_;
}
else
{
lean_object* v_val_1127_; lean_object* v___x_1128_; lean_object* v_modules_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; 
v_val_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc(v_val_1127_);
lean_dec_ref_known(v___x_1126_, 1);
v___x_1128_ = l_Lean_Environment_header(v_env_1111_);
v_modules_1129_ = lean_ctor_get(v___x_1128_, 3);
lean_inc_ref(v_modules_1129_);
lean_dec_ref(v___x_1128_);
v___x_1130_ = lean_array_get_size(v_modules_1129_);
v___x_1131_ = lean_nat_dec_lt(v_val_1127_, v___x_1130_);
if (v___x_1131_ == 0)
{
lean_dec_ref(v_modules_1129_);
lean_dec(v_val_1127_);
lean_dec_ref(v_env_1111_);
lean_dec(v_declName_1097_);
goto v___jp_1108_;
}
else
{
lean_object* v___x_1132_; lean_object* v___x_1133_; uint8_t v___y_1135_; 
v___x_1132_ = lean_array_fget(v_modules_1129_, v_val_1127_);
lean_dec(v_val_1127_);
lean_dec_ref(v_modules_1129_);
v___x_1133_ = lean_st_ref_get(v___y_1104_);
if (v_isMeta_1098_ == 0)
{
lean_dec(v___x_1133_);
v___y_1135_ = v_isMeta_1098_;
goto v___jp_1134_;
}
else
{
lean_object* v_env_1146_; uint8_t v___x_1147_; 
v_env_1146_ = lean_ctor_get(v___x_1133_, 0);
lean_inc_ref(v_env_1146_);
lean_dec(v___x_1133_);
lean_inc(v_declName_1097_);
v___x_1147_ = l_Lean_isMarkedMeta(v_env_1146_, v_declName_1097_);
if (v___x_1147_ == 0)
{
v___y_1135_ = v_isMeta_1098_;
goto v___jp_1134_;
}
else
{
uint8_t v___x_1148_; 
v___x_1148_ = 0;
v___y_1135_ = v___x_1148_;
goto v___jp_1134_;
}
}
v___jp_1134_:
{
lean_object* v_toImport_1136_; lean_object* v_module_1137_; lean_object* v___x_1138_; 
v_toImport_1136_ = lean_ctor_get(v___x_1132_, 0);
lean_inc_ref(v_toImport_1136_);
lean_dec(v___x_1132_);
v_module_1137_ = lean_ctor_get(v_toImport_1136_, 0);
lean_inc(v_module_1137_);
lean_dec_ref(v_toImport_1136_);
lean_inc(v_declName_1097_);
v___x_1138_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_module_1137_, v___y_1135_, v_declName_1097_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
lean_dec_ref_known(v___x_1138_, 1);
v___x_1139_ = l_Lean_indirectModUseExt;
v___x_1140_ = lean_box(1);
v___x_1141_ = lean_box(0);
lean_inc_ref(v_env_1111_);
v___x_1142_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1106_, v___x_1139_, v_env_1111_, v___x_1140_, v___x_1141_);
v___x_1143_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v___x_1142_, v_declName_1097_);
lean_dec(v___x_1142_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v___x_1144_; 
v___x_1144_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1));
v___y_1113_ = v___x_1144_;
goto v___jp_1112_;
}
else
{
lean_object* v_val_1145_; 
v_val_1145_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_val_1145_);
lean_dec_ref_known(v___x_1143_, 1);
v___y_1113_ = v_val_1145_;
goto v___jp_1112_;
}
}
else
{
lean_dec_ref(v_env_1111_);
lean_dec(v_declName_1097_);
return v___x_1138_;
}
}
}
}
v___jp_1108_:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_box(0);
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
return v___x_1110_;
}
v___jp_1112_:
{
lean_object* v___x_1114_; size_t v_sz_1115_; size_t v___x_1116_; lean_object* v___x_1117_; 
v___x_1114_ = lean_box(0);
v_sz_1115_ = lean_array_size(v___y_1113_);
v___x_1116_ = ((size_t)0ULL);
v___x_1117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(v_env_1111_, v_declName_1097_, v___y_1113_, v_sz_1115_, v___x_1116_, v___x_1114_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec_ref(v___y_1113_);
lean_dec_ref(v_env_1111_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1124_ == 0)
{
lean_object* v_unused_1125_; 
v_unused_1125_ = lean_ctor_get(v___x_1117_, 0);
lean_dec(v_unused_1125_);
v___x_1119_ = v___x_1117_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_dec(v___x_1117_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 0, v___x_1114_);
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1114_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
else
{
return v___x_1117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___boxed(lean_object* v_declName_1149_, lean_object* v_isMeta_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
uint8_t v_isMeta_boxed_1158_; lean_object* v_res_1159_; 
v_isMeta_boxed_1158_ = lean_unbox(v_isMeta_1150_);
v_res_1159_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(v_declName_1149_, v_isMeta_boxed_1158_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(lean_object* v_as_x27_1160_, lean_object* v_b_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
if (lean_obj_tag(v_as_x27_1160_) == 0)
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1169_, 0, v_b_1161_);
return v___x_1169_;
}
else
{
lean_object* v_head_1170_; lean_object* v_tail_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; lean_object* v___x_1174_; 
v_head_1170_ = lean_ctor_get(v_as_x27_1160_, 0);
v_tail_1171_ = lean_ctor_get(v_as_x27_1160_, 1);
v___x_1172_ = lean_box(0);
v___x_1173_ = 1;
lean_inc(v_head_1170_);
v___x_1174_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(v_head_1170_, v___x_1173_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_dec_ref_known(v___x_1174_, 1);
v_as_x27_1160_ = v_tail_1171_;
v_b_1161_ = v___x_1172_;
goto _start;
}
else
{
return v___x_1174_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg___boxed(lean_object* v_as_x27_1176_, lean_object* v_b_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_as_x27_1176_, v_b_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v_as_x27_1176_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(lean_object* v_currNamespace_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v_currNamespace_1186_);
lean_ctor_set(v___x_1189_, 1, v___y_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed(lean_object* v_currNamespace_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(v_currNamespace_1190_, v___y_1191_, v___y_1192_);
lean_dec_ref(v___y_1191_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(lean_object* v_env_1194_, lean_object* v___x_1195_, lean_object* v_currNamespace_1196_, lean_object* v_openDecls_1197_, lean_object* v_n_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = l_Lean_ResolveName_resolveGlobalName(v_env_1194_, v___x_1195_, v_currNamespace_1196_, v_openDecls_1197_, v_n_1198_);
v___x_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
lean_ctor_set(v___x_1202_, 1, v___y_1200_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed(lean_object* v_env_1203_, lean_object* v___x_1204_, lean_object* v_currNamespace_1205_, lean_object* v_openDecls_1206_, lean_object* v_n_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(v_env_1203_, v___x_1204_, v_currNamespace_1205_, v_openDecls_1206_, v_n_1207_, v___y_1208_, v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec_ref(v___x_1204_);
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(lean_object* v_env_1211_, lean_object* v_currNamespace_1212_, lean_object* v_openDecls_1213_, lean_object* v_n_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = l_Lean_ResolveName_resolveNamespace(v_env_1211_, v_currNamespace_1212_, v_openDecls_1213_, v_n_1214_);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set(v___x_1218_, 1, v___y_1216_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed(lean_object* v_env_1219_, lean_object* v_currNamespace_1220_, lean_object* v_openDecls_1221_, lean_object* v_n_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(v_env_1219_, v_currNamespace_1220_, v_openDecls_1221_, v_n_1222_, v___y_1223_, v___y_1224_);
lean_dec_ref(v___y_1223_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object* v_x_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v___x_1235_; lean_object* v_toCold_1236_; lean_object* v_env_1237_; lean_object* v_currRecDepth_1238_; lean_object* v_ref_1239_; lean_object* v_maxRecDepth_1240_; lean_object* v_currNamespace_1241_; lean_object* v_openDecls_1242_; lean_object* v_quotContext_1243_; lean_object* v_currMacroScope_1244_; lean_object* v___f_1245_; lean_object* v___f_1246_; lean_object* v___x_1247_; lean_object* v___f_1248_; lean_object* v___f_1249_; lean_object* v___f_1250_; lean_object* v_methods_1251_; lean_object* v___x_1252_; lean_object* v_nextMacroScope_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1235_ = lean_st_ref_get(v___y_1233_);
v_toCold_1236_ = lean_ctor_get(v___y_1232_, 0);
v_env_1237_ = lean_ctor_get(v___x_1235_, 0);
lean_inc_ref_n(v_env_1237_, 4);
lean_dec(v___x_1235_);
v_currRecDepth_1238_ = lean_ctor_get(v___y_1232_, 1);
v_ref_1239_ = lean_ctor_get(v___y_1232_, 2);
v_maxRecDepth_1240_ = lean_ctor_get(v_toCold_1236_, 3);
v_currNamespace_1241_ = lean_ctor_get(v_toCold_1236_, 4);
v_openDecls_1242_ = lean_ctor_get(v_toCold_1236_, 5);
v_quotContext_1243_ = lean_ctor_get(v_toCold_1236_, 8);
v_currMacroScope_1244_ = lean_ctor_get(v_toCold_1236_, 9);
v___f_1245_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1245_, 0, v_env_1237_);
v___f_1246_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1246_, 0, v_env_1237_);
v___x_1247_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1232_);
lean_inc_n(v_currNamespace_1241_, 3);
v___f_1248_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1248_, 0, v_currNamespace_1241_);
lean_inc_n(v_openDecls_1242_, 2);
v___f_1249_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed), 7, 4);
lean_closure_set(v___f_1249_, 0, v_env_1237_);
lean_closure_set(v___f_1249_, 1, v___x_1247_);
lean_closure_set(v___f_1249_, 2, v_currNamespace_1241_);
lean_closure_set(v___f_1249_, 3, v_openDecls_1242_);
v___f_1250_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_1250_, 0, v_env_1237_);
lean_closure_set(v___f_1250_, 1, v_currNamespace_1241_);
lean_closure_set(v___f_1250_, 2, v_openDecls_1242_);
v_methods_1251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1251_, 0, v___f_1246_);
lean_ctor_set(v_methods_1251_, 1, v___f_1248_);
lean_ctor_set(v_methods_1251_, 2, v___f_1245_);
lean_ctor_set(v_methods_1251_, 3, v___f_1250_);
lean_ctor_set(v_methods_1251_, 4, v___f_1249_);
v___x_1252_ = lean_st_ref_get(v___y_1233_);
v_nextMacroScope_1253_ = lean_ctor_get(v___x_1252_, 1);
lean_inc(v_nextMacroScope_1253_);
lean_dec(v___x_1252_);
lean_inc(v_ref_1239_);
lean_inc(v_maxRecDepth_1240_);
lean_inc(v_currRecDepth_1238_);
lean_inc(v_currMacroScope_1244_);
lean_inc(v_quotContext_1243_);
v___x_1254_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1254_, 0, v_methods_1251_);
lean_ctor_set(v___x_1254_, 1, v_quotContext_1243_);
lean_ctor_set(v___x_1254_, 2, v_currMacroScope_1244_);
lean_ctor_set(v___x_1254_, 3, v_currRecDepth_1238_);
lean_ctor_set(v___x_1254_, 4, v_maxRecDepth_1240_);
lean_ctor_set(v___x_1254_, 5, v_ref_1239_);
v___x_1255_ = lean_box(0);
v___x_1256_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1256_, 0, v_nextMacroScope_1253_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
lean_ctor_set(v___x_1256_, 2, v___x_1255_);
v___x_1257_ = lean_apply_2(v_x_1227_, v___x_1254_, v___x_1256_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v_a_1259_; lean_object* v_macroScope_1260_; lean_object* v_traceMsgs_1261_; lean_object* v_expandedMacroDecls_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 1);
lean_inc(v_a_1258_);
v_a_1259_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1259_);
lean_dec_ref_known(v___x_1257_, 2);
v_macroScope_1260_ = lean_ctor_get(v_a_1258_, 0);
lean_inc(v_macroScope_1260_);
v_traceMsgs_1261_ = lean_ctor_get(v_a_1258_, 1);
lean_inc(v_traceMsgs_1261_);
v_expandedMacroDecls_1262_ = lean_ctor_get(v_a_1258_, 2);
lean_inc(v_expandedMacroDecls_1262_);
lean_dec(v_a_1258_);
v___x_1263_ = lean_box(0);
v___x_1264_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_expandedMacroDecls_1262_, v___x_1263_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v_expandedMacroDecls_1262_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v___x_1265_; lean_object* v_env_1266_; lean_object* v_ngen_1267_; lean_object* v_auxDeclNGen_1268_; lean_object* v_traceState_1269_; lean_object* v_cache_1270_; lean_object* v_recordedDeps_1271_; lean_object* v_messages_1272_; lean_object* v_infoState_1273_; lean_object* v_snapshotTasks_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref_known(v___x_1264_, 1);
v___x_1265_ = lean_st_ref_take(v___y_1233_);
v_env_1266_ = lean_ctor_get(v___x_1265_, 0);
v_ngen_1267_ = lean_ctor_get(v___x_1265_, 2);
v_auxDeclNGen_1268_ = lean_ctor_get(v___x_1265_, 3);
v_traceState_1269_ = lean_ctor_get(v___x_1265_, 4);
v_cache_1270_ = lean_ctor_get(v___x_1265_, 5);
v_recordedDeps_1271_ = lean_ctor_get(v___x_1265_, 6);
v_messages_1272_ = lean_ctor_get(v___x_1265_, 7);
v_infoState_1273_ = lean_ctor_get(v___x_1265_, 8);
v_snapshotTasks_1274_ = lean_ctor_get(v___x_1265_, 9);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; 
v_unused_1301_ = lean_ctor_get(v___x_1265_, 1);
lean_dec(v_unused_1301_);
v___x_1276_ = v___x_1265_;
v_isShared_1277_ = v_isSharedCheck_1300_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_snapshotTasks_1274_);
lean_inc(v_infoState_1273_);
lean_inc(v_messages_1272_);
lean_inc(v_recordedDeps_1271_);
lean_inc(v_cache_1270_);
lean_inc(v_traceState_1269_);
lean_inc(v_auxDeclNGen_1268_);
lean_inc(v_ngen_1267_);
lean_inc(v_env_1266_);
lean_dec(v___x_1265_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1300_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1279_; 
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 1, v_macroScope_1260_);
v___x_1279_ = v___x_1276_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_env_1266_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_macroScope_1260_);
lean_ctor_set(v_reuseFailAlloc_1299_, 2, v_ngen_1267_);
lean_ctor_set(v_reuseFailAlloc_1299_, 3, v_auxDeclNGen_1268_);
lean_ctor_set(v_reuseFailAlloc_1299_, 4, v_traceState_1269_);
lean_ctor_set(v_reuseFailAlloc_1299_, 5, v_cache_1270_);
lean_ctor_set(v_reuseFailAlloc_1299_, 6, v_recordedDeps_1271_);
lean_ctor_set(v_reuseFailAlloc_1299_, 7, v_messages_1272_);
lean_ctor_set(v_reuseFailAlloc_1299_, 8, v_infoState_1273_);
lean_ctor_set(v_reuseFailAlloc_1299_, 9, v_snapshotTasks_1274_);
v___x_1279_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1280_ = lean_st_ref_put(v___y_1233_, v___x_1279_);
v___x_1281_ = l_List_reverse___redArg(v_traceMsgs_1261_);
v___x_1282_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(v___x_1281_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1289_ == 0)
{
lean_object* v_unused_1290_; 
v_unused_1290_ = lean_ctor_get(v___x_1282_, 0);
lean_dec(v_unused_1290_);
v___x_1284_ = v___x_1282_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_dec(v___x_1282_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
lean_ctor_set(v___x_1284_, 0, v_a_1259_);
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1259_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_dec(v_a_1259_);
v_a_1291_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1282_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1282_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec(v_traceMsgs_1261_);
lean_dec(v_macroScope_1260_);
lean_dec(v_a_1259_);
v_a_1302_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1264_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1264_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_a_1310_; 
v_a_1310_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1257_, 2);
if (lean_obj_tag(v_a_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v_a_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; 
v_a_1311_ = lean_ctor_get(v_a_1310_, 0);
lean_inc(v_a_1311_);
v_a_1312_ = lean_ctor_get(v_a_1310_, 1);
lean_inc_ref(v_a_1312_);
lean_dec_ref_known(v_a_1310_, 2);
v___x_1313_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0));
v___x_1314_ = lean_string_dec_eq(v_a_1312_, v___x_1313_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1315_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1315_, 0, v_a_1312_);
v___x_1316_ = l_Lean_MessageData_ofFormat(v___x_1315_);
v___x_1317_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_a_1311_, v___x_1316_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v_a_1311_);
return v___x_1317_;
}
else
{
lean_object* v___x_1318_; 
lean_dec_ref(v_a_1312_);
v___x_1318_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_a_1311_);
return v___x_1318_;
}
}
else
{
lean_object* v___x_1319_; 
v___x_1319_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg();
return v___x_1319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object* v_x_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_x_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(size_t v_sz_1332_, size_t v_i_1333_, lean_object* v_bs_1334_){
_start:
{
uint8_t v___x_1335_; 
v___x_1335_ = lean_usize_dec_lt(v_i_1333_, v_sz_1332_);
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; 
v___x_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1336_, 0, v_bs_1334_);
return v___x_1336_;
}
else
{
lean_object* v_v_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; 
v_v_1337_ = lean_array_uget(v_bs_1334_, v_i_1333_);
v___x_1338_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1));
lean_inc(v_v_1337_);
v___x_1339_ = l_Lean_Syntax_isOfKind(v_v_1337_, v___x_1338_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; 
lean_dec(v_v_1337_);
lean_dec_ref(v_bs_1334_);
v___x_1340_ = lean_box(0);
return v___x_1340_;
}
else
{
lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = l_Lean_Syntax_getArg(v_v_1337_, v___x_1341_);
v___x_1343_ = l_Lean_Syntax_isOfKind(v___x_1342_, v___x_1338_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; 
lean_dec(v_v_1337_);
lean_dec_ref(v_bs_1334_);
v___x_1344_ = lean_box(0);
return v___x_1344_;
}
else
{
lean_object* v___x_1345_; lean_object* v_bs_x27_1346_; lean_object* v___x_1347_; size_t v___x_1348_; size_t v___x_1349_; lean_object* v___x_1350_; 
v___x_1345_ = lean_unsigned_to_nat(3u);
v_bs_x27_1346_ = lean_array_uset(v_bs_1334_, v_i_1333_, v___x_1341_);
v___x_1347_ = l_Lean_Syntax_getArg(v_v_1337_, v___x_1345_);
lean_dec(v_v_1337_);
v___x_1348_ = ((size_t)1ULL);
v___x_1349_ = lean_usize_add(v_i_1333_, v___x_1348_);
v___x_1350_ = lean_array_uset(v_bs_x27_1346_, v_i_1333_, v___x_1347_);
v_i_1333_ = v___x_1349_;
v_bs_1334_ = v___x_1350_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object* v_sz_1352_, lean_object* v_i_1353_, lean_object* v_bs_1354_){
_start:
{
size_t v_sz_boxed_1355_; size_t v_i_boxed_1356_; lean_object* v_res_1357_; 
v_sz_boxed_1355_ = lean_unbox_usize(v_sz_1352_);
lean_dec(v_sz_1352_);
v_i_boxed_1356_ = lean_unbox_usize(v_i_1353_);
lean_dec(v_i_1353_);
v_res_1357_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_sz_boxed_1355_, v_i_boxed_1356_, v_bs_1354_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(size_t v_sz_1370_, size_t v_i_1371_, lean_object* v_bs_1372_){
_start:
{
uint8_t v___x_1373_; 
v___x_1373_ = lean_usize_dec_lt(v_i_1371_, v_sz_1370_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1374_, 0, v_bs_1372_);
return v___x_1374_;
}
else
{
lean_object* v_v_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v_v_1375_ = lean_array_uget(v_bs_1372_, v_i_1371_);
v___x_1376_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1));
lean_inc(v_v_1375_);
v___x_1377_ = l_Lean_Syntax_isOfKind(v_v_1375_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; 
lean_dec(v_v_1375_);
lean_dec_ref(v_bs_1372_);
v___x_1378_ = lean_box(0);
return v___x_1378_;
}
else
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; uint8_t v___x_1382_; 
v___x_1379_ = lean_unsigned_to_nat(1u);
v___x_1380_ = l_Lean_Syntax_getArg(v_v_1375_, v___x_1379_);
v___x_1381_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3));
v___x_1382_ = l_Lean_Syntax_isOfKind(v___x_1380_, v___x_1381_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; 
lean_dec(v_v_1375_);
lean_dec_ref(v_bs_1372_);
v___x_1383_ = lean_box(0);
return v___x_1383_;
}
else
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v_bs_x27_1386_; lean_object* v___x_1387_; size_t v___x_1388_; size_t v___x_1389_; lean_object* v___x_1390_; 
v___x_1384_ = lean_unsigned_to_nat(3u);
v___x_1385_ = lean_unsigned_to_nat(0u);
v_bs_x27_1386_ = lean_array_uset(v_bs_1372_, v_i_1371_, v___x_1385_);
v___x_1387_ = l_Lean_Syntax_getArg(v_v_1375_, v___x_1384_);
lean_dec(v_v_1375_);
v___x_1388_ = ((size_t)1ULL);
v___x_1389_ = lean_usize_add(v_i_1371_, v___x_1388_);
v___x_1390_ = lean_array_uset(v_bs_x27_1386_, v_i_1371_, v___x_1387_);
v_i_1371_ = v___x_1389_;
v_bs_1372_ = v___x_1390_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object* v_sz_1392_, lean_object* v_i_1393_, lean_object* v_bs_1394_){
_start:
{
size_t v_sz_boxed_1395_; size_t v_i_boxed_1396_; lean_object* v_res_1397_; 
v_sz_boxed_1395_ = lean_unbox_usize(v_sz_1392_);
lean_dec(v_sz_1392_);
v_i_boxed_1396_ = lean_unbox_usize(v_i_1393_);
lean_dec(v_i_1393_);
v_res_1397_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v_sz_boxed_1395_, v_i_boxed_1396_, v_bs_1394_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(size_t v_sz_1404_, size_t v_i_1405_, lean_object* v_bs_1406_){
_start:
{
uint8_t v___x_1407_; 
v___x_1407_ = lean_usize_dec_lt(v_i_1405_, v_sz_1404_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1408_, 0, v_bs_1406_);
return v___x_1408_;
}
else
{
lean_object* v_v_1409_; lean_object* v___x_1410_; uint8_t v___x_1411_; 
v_v_1409_ = lean_array_uget(v_bs_1406_, v_i_1405_);
v___x_1410_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1));
lean_inc(v_v_1409_);
v___x_1411_ = l_Lean_Syntax_isOfKind(v_v_1409_, v___x_1410_);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; 
lean_dec(v_v_1409_);
lean_dec_ref(v_bs_1406_);
v___x_1412_ = lean_box(0);
return v___x_1412_;
}
else
{
lean_object* v___x_1413_; lean_object* v_bs_x27_1414_; lean_object* v___x_1421_; uint8_t v___x_1422_; 
v___x_1413_ = lean_unsigned_to_nat(0u);
v_bs_x27_1414_ = lean_array_uset(v_bs_1406_, v_i_1405_, v___x_1413_);
v___x_1421_ = l_Lean_Syntax_getArg(v_v_1409_, v___x_1413_);
lean_dec(v_v_1409_);
v___x_1422_ = l_Lean_Syntax_isNone(v___x_1421_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1423_ = lean_unsigned_to_nat(2u);
v___x_1424_ = l_Lean_Syntax_matchesNull(v___x_1421_, v___x_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; 
lean_dec_ref(v_bs_x27_1414_);
v___x_1425_ = lean_box(0);
return v___x_1425_;
}
else
{
goto v___jp_1415_;
}
}
else
{
lean_dec(v___x_1421_);
goto v___jp_1415_;
}
v___jp_1415_:
{
lean_object* v___x_1416_; size_t v___x_1417_; size_t v___x_1418_; lean_object* v___x_1419_; 
v___x_1416_ = lean_box(0);
v___x_1417_ = ((size_t)1ULL);
v___x_1418_ = lean_usize_add(v_i_1405_, v___x_1417_);
v___x_1419_ = lean_array_uset(v_bs_x27_1414_, v_i_1405_, v___x_1416_);
v_i_1405_ = v___x_1418_;
v_bs_1406_ = v___x_1419_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object* v_sz_1426_, lean_object* v_i_1427_, lean_object* v_bs_1428_){
_start:
{
size_t v_sz_boxed_1429_; size_t v_i_boxed_1430_; lean_object* v_res_1431_; 
v_sz_boxed_1429_ = lean_unbox_usize(v_sz_1426_);
lean_dec(v_sz_1426_);
v_i_boxed_1430_ = lean_unbox_usize(v_i_1427_);
lean_dec(v_i_1427_);
v_res_1431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_sz_boxed_1429_, v_i_boxed_1430_, v_bs_1428_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(size_t v_sz_1432_, size_t v_i_1433_, lean_object* v_bs_1434_){
_start:
{
uint8_t v___x_1435_; 
v___x_1435_ = lean_usize_dec_lt(v_i_1433_, v_sz_1432_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1436_, 0, v_bs_1434_);
return v___x_1436_;
}
else
{
lean_object* v_v_1437_; lean_object* v___x_1438_; lean_object* v_bs_x27_1439_; size_t v___x_1440_; size_t v___x_1441_; lean_object* v___x_1442_; 
v_v_1437_ = lean_array_uget(v_bs_1434_, v_i_1433_);
v___x_1438_ = lean_unsigned_to_nat(0u);
v_bs_x27_1439_ = lean_array_uset(v_bs_1434_, v_i_1433_, v___x_1438_);
v___x_1440_ = ((size_t)1ULL);
v___x_1441_ = lean_usize_add(v_i_1433_, v___x_1440_);
v___x_1442_ = lean_array_uset(v_bs_x27_1439_, v_i_1433_, v_v_1437_);
v_i_1433_ = v___x_1441_;
v_bs_1434_ = v___x_1442_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object* v_sz_1444_, lean_object* v_i_1445_, lean_object* v_bs_1446_){
_start:
{
size_t v_sz_boxed_1447_; size_t v_i_boxed_1448_; lean_object* v_res_1449_; 
v_sz_boxed_1447_ = lean_unbox_usize(v_sz_1444_);
lean_dec(v_sz_1444_);
v_i_boxed_1448_ = lean_unbox_usize(v_i_1445_);
lean_dec(v_i_1445_);
v_res_1449_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_sz_boxed_1447_, v_i_boxed_1448_, v_bs_1446_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object* v_00_u03b1_1450_, lean_object* v_x_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_1451_, v___y_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object* v_00_u03b1_1455_, lean_object* v_x_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(v_00_u03b1_1455_, v_x_1456_, v___y_1457_, v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec_ref(v_x_1456_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object* v_stx_1463_, lean_object* v_as_x27_1464_, lean_object* v_b_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
if (lean_obj_tag(v_as_x27_1464_) == 0)
{
lean_object* v___x_1473_; 
lean_dec(v_stx_1463_);
v___x_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1473_, 0, v_b_1465_);
return v___x_1473_;
}
else
{
lean_object* v_head_1474_; lean_object* v_tail_1475_; lean_object* v_value_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
lean_dec_ref(v_b_1465_);
v_head_1474_ = lean_ctor_get(v_as_x27_1464_, 0);
v_tail_1475_ = lean_ctor_get(v_as_x27_1464_, 1);
v_value_1476_ = lean_ctor_get(v_head_1474_, 1);
v___x_1477_ = lean_box(0);
v___x_1478_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_1479_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_value_1476_);
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
lean_inc(v___y_1467_);
lean_inc_ref(v___y_1466_);
lean_inc(v_stx_1463_);
v___x_1480_ = lean_apply_8(v_value_1476_, v_stx_1463_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, lean_box(0));
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1490_; 
lean_dec(v_stx_1463_);
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1483_ = v___x_1480_;
v_isShared_1484_ = v_isSharedCheck_1490_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1480_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1490_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1485_, 0, v_a_1481_);
v___x_1486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
lean_ctor_set(v___x_1486_, 1, v___x_1477_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v___x_1486_);
v___x_1488_ = v___x_1483_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1512_; 
v_a_1491_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1493_ = v___x_1480_;
v_isShared_1494_ = v_isSharedCheck_1512_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1480_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1512_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
uint8_t v___x_1495_; 
v___x_1495_ = l_Lean_Exception_isInterrupt(v_a_1491_);
if (v___x_1495_ == 0)
{
uint8_t v___x_1496_; 
lean_inc(v_a_1491_);
v___x_1496_ = l_Lean_Exception_isRuntime(v_a_1491_);
if (v___x_1496_ == 0)
{
if (lean_obj_tag(v_a_1491_) == 0)
{
lean_object* v___x_1498_; 
lean_dec(v_stx_1463_);
if (v_isShared_1494_ == 0)
{
v___x_1498_ = v___x_1493_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_a_1491_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
else
{
lean_object* v_id_1500_; uint8_t v___x_1501_; 
v_id_1500_ = lean_ctor_get(v_a_1491_, 0);
v___x_1501_ = l_Lean_instBEqInternalExceptionId_beq(v___x_1479_, v_id_1500_);
if (v___x_1501_ == 0)
{
lean_object* v___x_1503_; 
lean_dec(v_stx_1463_);
if (v_isShared_1494_ == 0)
{
v___x_1503_ = v___x_1493_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1491_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
else
{
lean_dec_ref_known(v_a_1491_, 2);
lean_del_object(v___x_1493_);
v_as_x27_1464_ = v_tail_1475_;
v_b_1465_ = v___x_1478_;
goto _start;
}
}
}
else
{
lean_object* v___x_1507_; 
lean_dec(v_stx_1463_);
if (v_isShared_1494_ == 0)
{
v___x_1507_ = v___x_1493_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_a_1491_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
else
{
lean_object* v___x_1510_; 
lean_dec(v_stx_1463_);
if (v_isShared_1494_ == 0)
{
v___x_1510_ = v___x_1493_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1491_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object* v_stx_1513_, lean_object* v_as_x27_1514_, lean_object* v_b_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_1513_, v_as_x27_1514_, v_b_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec(v_as_x27_1514_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object* v_reassigned_1526_, lean_object* v_rhs_x3f_1527_, lean_object* v_otherwise_x3f_1528_, lean_object* v_body_x3f_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
uint8_t v___y_1538_; lean_object* v___y_1539_; uint8_t v___y_1540_; uint8_t v___y_1541_; uint8_t v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1547_; lean_object* v___y_1548_; lean_object* v_body_1549_; lean_object* v___y_1567_; lean_object* v_otherwise_1568_; lean_object* v___y_1569_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; lean_object* v_rhs_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; 
if (lean_obj_tag(v_rhs_x3f_1527_) == 0)
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v_rhs_1580_ = v___x_1591_;
v___y_1581_ = v_a_1530_;
v___y_1582_ = v_a_1531_;
v___y_1583_ = v_a_1532_;
v___y_1584_ = v_a_1533_;
v___y_1585_ = v_a_1534_;
v___y_1586_ = v_a_1535_;
goto v___jp_1579_;
}
else
{
lean_object* v_val_1592_; lean_object* v___x_1593_; 
v_val_1592_ = lean_ctor_get(v_rhs_x3f_1527_, 0);
lean_inc(v_val_1592_);
lean_dec_ref_known(v_rhs_x3f_1527_, 1);
v___x_1593_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_val_1592_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v_rhs_1580_ = v_a_1594_;
v___y_1581_ = v_a_1530_;
v___y_1582_ = v_a_1531_;
v___y_1583_ = v_a_1532_;
v___y_1584_ = v_a_1533_;
v___y_1585_ = v_a_1534_;
v___y_1586_ = v_a_1535_;
goto v___jp_1579_;
}
else
{
lean_dec(v_body_x3f_1529_);
lean_dec(v_otherwise_x3f_1528_);
lean_dec_ref(v_reassigned_1526_);
return v___x_1593_;
}
}
v___jp_1537_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_1544_, 0, v___y_1539_);
lean_ctor_set(v___x_1544_, 1, v___y_1543_);
lean_ctor_set_uint8(v___x_1544_, sizeof(void*)*2, v___y_1538_);
lean_ctor_set_uint8(v___x_1544_, sizeof(void*)*2 + 1, v___y_1540_);
lean_ctor_set_uint8(v___x_1544_, sizeof(void*)*2 + 2, v___y_1542_);
lean_ctor_set_uint8(v___x_1544_, sizeof(void*)*2 + 3, v___y_1541_);
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
return v___x_1545_;
}
v___jp_1546_:
{
lean_object* v___x_1550_; lean_object* v_info_1551_; uint8_t v_breaks_1552_; uint8_t v_continues_1553_; uint8_t v_returnsEarly_1554_; lean_object* v_numRegularExits_1555_; uint8_t v_noFallthrough_1556_; lean_object* v_reassigns_1557_; size_t v_sz_1558_; size_t v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; uint8_t v___x_1563_; 
v___x_1550_ = l_Lean_Elab_Do_ControlInfo_alternative(v_body_1549_, v___y_1548_);
v_info_1551_ = l_Lean_Elab_Do_ControlInfo_sequence(v___y_1547_, v___x_1550_);
v_breaks_1552_ = lean_ctor_get_uint8(v_info_1551_, sizeof(void*)*2);
v_continues_1553_ = lean_ctor_get_uint8(v_info_1551_, sizeof(void*)*2 + 1);
v_returnsEarly_1554_ = lean_ctor_get_uint8(v_info_1551_, sizeof(void*)*2 + 2);
v_numRegularExits_1555_ = lean_ctor_get(v_info_1551_, 0);
lean_inc(v_numRegularExits_1555_);
v_noFallthrough_1556_ = lean_ctor_get_uint8(v_info_1551_, sizeof(void*)*2 + 3);
v_reassigns_1557_ = lean_ctor_get(v_info_1551_, 1);
lean_inc(v_reassigns_1557_);
lean_dec_ref(v_info_1551_);
v_sz_1558_ = lean_array_size(v_reassigned_1526_);
v___x_1559_ = ((size_t)0ULL);
v___x_1560_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(v_sz_1558_, v___x_1559_, v_reassigned_1526_);
v___x_1561_ = lean_unsigned_to_nat(0u);
v___x_1562_ = lean_array_get_size(v___x_1560_);
v___x_1563_ = lean_nat_dec_lt(v___x_1561_, v___x_1562_);
if (v___x_1563_ == 0)
{
lean_dec_ref(v___x_1560_);
v___y_1538_ = v_breaks_1552_;
v___y_1539_ = v_numRegularExits_1555_;
v___y_1540_ = v_continues_1553_;
v___y_1541_ = v_noFallthrough_1556_;
v___y_1542_ = v_returnsEarly_1554_;
v___y_1543_ = v_reassigns_1557_;
goto v___jp_1537_;
}
else
{
size_t v___x_1564_; lean_object* v___x_1565_; 
v___x_1564_ = lean_usize_of_nat(v___x_1562_);
v___x_1565_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v___x_1560_, v___x_1559_, v___x_1564_, v_reassigns_1557_);
lean_dec_ref(v___x_1560_);
v___y_1538_ = v_breaks_1552_;
v___y_1539_ = v_numRegularExits_1555_;
v___y_1540_ = v_continues_1553_;
v___y_1541_ = v_noFallthrough_1556_;
v___y_1542_ = v_returnsEarly_1554_;
v___y_1543_ = v___x_1565_;
goto v___jp_1537_;
}
}
v___jp_1566_:
{
if (lean_obj_tag(v_body_x3f_1529_) == 0)
{
lean_object* v___x_1575_; 
v___x_1575_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_1547_ = v___y_1567_;
v___y_1548_ = v_otherwise_1568_;
v_body_1549_ = v___x_1575_;
goto v___jp_1546_;
}
else
{
lean_object* v_val_1576_; lean_object* v___x_1577_; 
v_val_1576_ = lean_ctor_get(v_body_x3f_1529_, 0);
lean_inc(v_val_1576_);
lean_dec_ref_known(v_body_x3f_1529_, 1);
v___x_1577_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_1576_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
lean_dec_ref_known(v___x_1577_, 1);
v___y_1547_ = v___y_1567_;
v___y_1548_ = v_otherwise_1568_;
v_body_1549_ = v_a_1578_;
goto v___jp_1546_;
}
else
{
lean_dec_ref(v_otherwise_1568_);
lean_dec_ref(v___y_1567_);
lean_dec_ref(v_reassigned_1526_);
return v___x_1577_;
}
}
}
v___jp_1579_:
{
if (lean_obj_tag(v_otherwise_x3f_1528_) == 0)
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_1567_ = v_rhs_1580_;
v_otherwise_1568_ = v___x_1587_;
v___y_1569_ = v___y_1581_;
v___y_1570_ = v___y_1582_;
v___y_1571_ = v___y_1583_;
v___y_1572_ = v___y_1584_;
v___y_1573_ = v___y_1585_;
v___y_1574_ = v___y_1586_;
goto v___jp_1566_;
}
else
{
lean_object* v_val_1588_; lean_object* v___x_1589_; 
v_val_1588_ = lean_ctor_get(v_otherwise_x3f_1528_, 0);
lean_inc(v_val_1588_);
lean_dec_ref_known(v_otherwise_x3f_1528_, 1);
v___x_1589_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_1588_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1589_, 1);
v___y_1567_ = v_rhs_1580_;
v_otherwise_1568_ = v_a_1590_;
v___y_1569_ = v___y_1581_;
v___y_1570_ = v___y_1582_;
v___y_1571_ = v___y_1583_;
v___y_1572_ = v___y_1584_;
v___y_1573_ = v___y_1585_;
v___y_1574_ = v___y_1586_;
goto v___jp_1566_;
}
else
{
lean_dec_ref(v_rhs_1580_);
lean_dec(v_body_x3f_1529_);
lean_dec_ref(v_reassigned_1526_);
return v___x_1589_;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3(void){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1602_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2));
v___x_1603_ = l_Lean_stringToMessageData(v___x_1602_);
return v___x_1603_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4));
v___x_1606_ = l_Lean_stringToMessageData(v___x_1605_);
return v___x_1606_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7(void){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6));
v___x_1609_ = l_Lean_stringToMessageData(v___x_1608_);
return v___x_1609_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9(void){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8));
v___x_1612_ = l_Lean_stringToMessageData(v___x_1611_);
return v___x_1612_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5(void){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4));
v___x_1687_ = l_Lean_stringToMessageData(v___x_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t v_reassignment_1697_, lean_object* v_decl_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v_reassigns_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___x_1734_; uint8_t v___x_1735_; 
v___x_1734_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v_decl_1698_);
v___x_1735_ = l_Lean_Syntax_isOfKind(v_decl_1698_, v___x_1734_);
if (v___x_1735_ == 0)
{
lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v_decl_1698_);
v___x_1737_ = l_Lean_Syntax_isOfKind(v_decl_1698_, v___x_1736_);
if (v___x_1737_ == 0)
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1738_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1739_ = lean_box(0);
v___x_1740_ = l_Lean_Syntax_formatStx(v_decl_1698_, v___x_1739_, v___x_1737_);
v___x_1741_ = l_Std_Format_defWidth;
v___x_1742_ = lean_unsigned_to_nat(0u);
v___x_1743_ = l_Std_Format_pretty(v___x_1740_, v___x_1741_, v___x_1742_, v___x_1742_);
v___x_1744_ = l_Lean_stringToMessageData(v___x_1743_);
v___x_1745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1738_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
v___x_1746_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1745_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
return v___x_1746_;
}
else
{
lean_object* v___x_1747_; lean_object* v_pattern_1748_; lean_object* v___y_1750_; lean_object* v_otherwise_x3f_1751_; lean_object* v_body_x3f_x3f_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v_body_x3f_x3f_1773_; lean_object* v___y_1774_; lean_object* v___y_1775_; lean_object* v___y_1776_; lean_object* v___y_1777_; lean_object* v___y_1778_; lean_object* v___y_1779_; lean_object* v___x_1782_; lean_object* v___y_1784_; lean_object* v___y_1785_; lean_object* v___y_1786_; lean_object* v___y_1787_; lean_object* v___y_1788_; lean_object* v___y_1789_; lean_object* v___x_1821_; uint8_t v___x_1822_; 
v___x_1747_ = lean_unsigned_to_nat(0u);
v_pattern_1748_ = l_Lean_Syntax_getArg(v_decl_1698_, v___x_1747_);
v___x_1782_ = lean_unsigned_to_nat(1u);
v___x_1821_ = l_Lean_Syntax_getArg(v_decl_1698_, v___x_1782_);
v___x_1822_ = l_Lean_Syntax_isNone(v___x_1821_);
if (v___x_1822_ == 0)
{
uint8_t v___x_1823_; 
lean_inc(v___x_1821_);
v___x_1823_ = l_Lean_Syntax_matchesNull(v___x_1821_, v___x_1782_);
if (v___x_1823_ == 0)
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_dec(v___x_1821_);
lean_dec(v_pattern_1748_);
v___x_1824_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1825_ = lean_box(0);
v___x_1826_ = l_Lean_Syntax_formatStx(v_decl_1698_, v___x_1825_, v___x_1823_);
v___x_1827_ = l_Std_Format_defWidth;
v___x_1828_ = l_Std_Format_pretty(v___x_1826_, v___x_1827_, v___x_1747_, v___x_1747_);
v___x_1829_ = l_Lean_stringToMessageData(v___x_1828_);
v___x_1830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1824_);
lean_ctor_set(v___x_1830_, 1, v___x_1829_);
v___x_1831_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1830_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
return v___x_1831_;
}
else
{
lean_object* v___x_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1832_ = l_Lean_Syntax_getArg(v___x_1821_, v___x_1747_);
lean_dec(v___x_1821_);
v___x_1833_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_1834_ = l_Lean_Syntax_isOfKind(v___x_1832_, v___x_1833_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
lean_dec(v_pattern_1748_);
v___x_1835_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1836_ = lean_box(0);
v___x_1837_ = l_Lean_Syntax_formatStx(v_decl_1698_, v___x_1836_, v___x_1834_);
v___x_1838_ = l_Std_Format_defWidth;
v___x_1839_ = l_Std_Format_pretty(v___x_1837_, v___x_1838_, v___x_1747_, v___x_1747_);
v___x_1840_ = l_Lean_stringToMessageData(v___x_1839_);
v___x_1841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1835_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1841_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
return v___x_1842_;
}
else
{
v___y_1784_ = v_a_1699_;
v___y_1785_ = v_a_1700_;
v___y_1786_ = v_a_1701_;
v___y_1787_ = v_a_1702_;
v___y_1788_ = v_a_1703_;
v___y_1789_ = v_a_1704_;
goto v___jp_1783_;
}
}
}
else
{
lean_dec(v___x_1821_);
v___y_1784_ = v_a_1699_;
v___y_1785_ = v_a_1700_;
v___y_1786_ = v_a_1701_;
v___y_1787_ = v_a_1702_;
v___y_1788_ = v_a_1703_;
v___y_1789_ = v_a_1704_;
goto v___jp_1783_;
}
v___jp_1749_:
{
if (v_reassignment_1697_ == 0)
{
lean_object* v___x_1759_; 
lean_dec(v_pattern_1748_);
v___x_1759_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_1719_ = v___y_1750_;
v___y_1720_ = v_body_x3f_x3f_1752_;
v___y_1721_ = v_otherwise_x3f_1751_;
v_reassigns_1722_ = v___x_1759_;
v___y_1723_ = v___y_1753_;
v___y_1724_ = v___y_1754_;
v___y_1725_ = v___y_1755_;
v___y_1726_ = v___y_1756_;
v___y_1727_ = v___y_1757_;
v___y_1728_ = v___y_1758_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_1760_; 
v___x_1760_ = l_Lean_Elab_Do_getPatternVarsEx(v_pattern_1748_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1760_, 1);
v___y_1719_ = v___y_1750_;
v___y_1720_ = v_body_x3f_x3f_1752_;
v___y_1721_ = v_otherwise_x3f_1751_;
v_reassigns_1722_ = v_a_1761_;
v___y_1723_ = v___y_1753_;
v___y_1724_ = v___y_1754_;
v___y_1725_ = v___y_1755_;
v___y_1726_ = v___y_1756_;
v___y_1727_ = v___y_1757_;
v___y_1728_ = v___y_1758_;
goto v___jp_1718_;
}
else
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1769_; 
lean_dec(v_body_x3f_x3f_1752_);
lean_dec(v_otherwise_x3f_1751_);
lean_dec(v___y_1750_);
v_a_1762_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1764_ = v___x_1760_;
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1760_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1767_; 
if (v_isShared_1765_ == 0)
{
v___x_1767_ = v___x_1764_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1762_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
}
v___jp_1770_:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1780_, 0, v___y_1772_);
v___x_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1781_, 0, v_body_x3f_x3f_1773_);
v___y_1750_ = v___y_1771_;
v_otherwise_x3f_1751_ = v___x_1780_;
v_body_x3f_x3f_1752_ = v___x_1781_;
v___y_1753_ = v___y_1774_;
v___y_1754_ = v___y_1775_;
v___y_1755_ = v___y_1776_;
v___y_1756_ = v___y_1777_;
v___y_1757_ = v___y_1778_;
v___y_1758_ = v___y_1779_;
goto v___jp_1749_;
}
v___jp_1783_:
{
lean_object* v___x_1790_; lean_object* v_rhs_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; uint8_t v___x_1794_; 
v___x_1790_ = lean_unsigned_to_nat(3u);
v_rhs_1791_ = l_Lean_Syntax_getArg(v_decl_1698_, v___x_1790_);
v___x_1792_ = lean_unsigned_to_nat(4u);
v___x_1793_ = l_Lean_Syntax_getArg(v_decl_1698_, v___x_1792_);
v___x_1794_ = l_Lean_Syntax_isNone(v___x_1793_);
if (v___x_1794_ == 0)
{
uint8_t v___x_1795_; 
lean_inc(v___x_1793_);
v___x_1795_ = l_Lean_Syntax_matchesNull(v___x_1793_, v___x_1790_);
if (v___x_1795_ == 0)
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
lean_dec(v___x_1793_);
lean_dec(v_rhs_1791_);
lean_dec(v_pattern_1748_);
v___x_1796_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1797_ = lean_box(0);
v___x_1798_ = l_Lean_Syntax_formatStx(v_decl_1698_, v___x_1797_, v___x_1795_);
v___x_1799_ = l_Std_Format_defWidth;
v___x_1800_ = l_Std_Format_pretty(v___x_1798_, v___x_1799_, v___x_1747_, v___x_1747_);
v___x_1801_ = l_Lean_stringToMessageData(v___x_1800_);
v___x_1802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1796_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
v___x_1803_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1802_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
return v___x_1803_;
}
else
{
lean_object* v___x_1804_; lean_object* v_otherwise_x3f_1805_; lean_object* v___x_1806_; uint8_t v___x_1807_; 
v___x_1804_ = lean_unsigned_to_nat(2u);
v_otherwise_x3f_1805_ = l_Lean_Syntax_getArg(v___x_1793_, v___x_1782_);
v___x_1806_ = l_Lean_Syntax_getArg(v___x_1793_, v___x_1804_);
lean_dec(v___x_1793_);
v___x_1807_ = l_Lean_Syntax_isNone(v___x_1806_);
if (v___x_1807_ == 0)
{
uint8_t v___x_1808_; 
lean_inc(v___x_1806_);
v___x_1808_ = l_Lean_Syntax_matchesNull(v___x_1806_, v___x_1782_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
lean_dec(v___x_1806_);
lean_dec(v_otherwise_x3f_1805_);
lean_dec(v_rhs_1791_);
lean_dec(v_pattern_1748_);
v___x_1809_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1810_ = lean_box(0);
v___x_1811_ = l_Lean_Syntax_formatStx(v_decl_1698_, v___x_1810_, v___x_1808_);
v___x_1812_ = l_Std_Format_defWidth;
v___x_1813_ = l_Std_Format_pretty(v___x_1811_, v___x_1812_, v___x_1747_, v___x_1747_);
v___x_1814_ = l_Lean_stringToMessageData(v___x_1813_);
v___x_1815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1809_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
v___x_1816_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1815_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
return v___x_1816_;
}
else
{
lean_object* v_body_x3f_x3f_1817_; lean_object* v___x_1818_; 
lean_dec(v_decl_1698_);
v_body_x3f_x3f_1817_ = l_Lean_Syntax_getArg(v___x_1806_, v___x_1747_);
lean_dec(v___x_1806_);
v___x_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1818_, 0, v_body_x3f_x3f_1817_);
v___y_1771_ = v_rhs_1791_;
v___y_1772_ = v_otherwise_x3f_1805_;
v_body_x3f_x3f_1773_ = v___x_1818_;
v___y_1774_ = v___y_1784_;
v___y_1775_ = v___y_1785_;
v___y_1776_ = v___y_1786_;
v___y_1777_ = v___y_1787_;
v___y_1778_ = v___y_1788_;
v___y_1779_ = v___y_1789_;
goto v___jp_1770_;
}
}
else
{
lean_object* v___x_1819_; 
lean_dec(v___x_1806_);
lean_dec(v_decl_1698_);
v___x_1819_ = lean_box(0);
v___y_1771_ = v_rhs_1791_;
v___y_1772_ = v_otherwise_x3f_1805_;
v_body_x3f_x3f_1773_ = v___x_1819_;
v___y_1774_ = v___y_1784_;
v___y_1775_ = v___y_1785_;
v___y_1776_ = v___y_1786_;
v___y_1777_ = v___y_1787_;
v___y_1778_ = v___y_1788_;
v___y_1779_ = v___y_1789_;
goto v___jp_1770_;
}
}
}
else
{
lean_object* v___x_1820_; 
lean_dec(v___x_1793_);
lean_dec(v_decl_1698_);
v___x_1820_ = lean_box(0);
v___y_1750_ = v_rhs_1791_;
v_otherwise_x3f_1751_ = v___x_1820_;
v_body_x3f_x3f_1752_ = v___x_1820_;
v___y_1753_ = v___y_1784_;
v___y_1754_ = v___y_1785_;
v___y_1755_ = v___y_1786_;
v___y_1756_ = v___y_1787_;
v___y_1757_ = v___y_1788_;
v___y_1758_ = v___y_1789_;
goto v___jp_1749_;
}
}
}
}
else
{
lean_object* v___x_1843_; lean_object* v_x_1844_; lean_object* v___y_1846_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v___y_1849_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___x_1858_; uint8_t v___x_1859_; 
v___x_1843_ = lean_unsigned_to_nat(0u);
v_x_1844_ = l_Lean_Syntax_getArg(v_decl_1698_, v___x_1843_);
v___x_1858_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10));
lean_inc(v_x_1844_);
v___x_1859_ = l_Lean_Syntax_isOfKind(v_x_1844_, v___x_1858_);
if (v___x_1859_ == 0)
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
lean_dec(v_x_1844_);
v___x_1860_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1861_ = lean_box(0);
v___x_1862_ = l_Lean_Syntax_formatStx(v_decl_1698_, v___x_1861_, v___x_1859_);
v___x_1863_ = l_Std_Format_defWidth;
v___x_1864_ = l_Std_Format_pretty(v___x_1862_, v___x_1863_, v___x_1843_, v___x_1843_);
v___x_1865_ = l_Lean_stringToMessageData(v___x_1864_);
v___x_1866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1860_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
v___x_1867_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1866_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
return v___x_1867_;
}
else
{
lean_object* v___x_1868_; lean_object* v___x_1869_; uint8_t v___x_1870_; 
v___x_1868_ = lean_unsigned_to_nat(1u);
v___x_1869_ = l_Lean_Syntax_getArg(v_decl_1698_, v___x_1868_);
v___x_1870_ = l_Lean_Syntax_isNone(v___x_1869_);
if (v___x_1870_ == 0)
{
uint8_t v___x_1871_; 
lean_inc(v___x_1869_);
v___x_1871_ = l_Lean_Syntax_matchesNull(v___x_1869_, v___x_1868_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
lean_dec(v___x_1869_);
lean_dec(v_x_1844_);
v___x_1872_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1873_ = lean_box(0);
v___x_1874_ = l_Lean_Syntax_formatStx(v_decl_1698_, v___x_1873_, v___x_1871_);
v___x_1875_ = l_Std_Format_defWidth;
v___x_1876_ = l_Std_Format_pretty(v___x_1874_, v___x_1875_, v___x_1843_, v___x_1843_);
v___x_1877_ = l_Lean_stringToMessageData(v___x_1876_);
v___x_1878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1872_);
lean_ctor_set(v___x_1878_, 1, v___x_1877_);
v___x_1879_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1878_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
return v___x_1879_;
}
else
{
lean_object* v___x_1880_; lean_object* v___x_1881_; uint8_t v___x_1882_; 
v___x_1880_ = l_Lean_Syntax_getArg(v___x_1869_, v___x_1843_);
lean_dec(v___x_1869_);
v___x_1881_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_1882_ = l_Lean_Syntax_isOfKind(v___x_1880_, v___x_1881_);
if (v___x_1882_ == 0)
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_dec(v_x_1844_);
v___x_1883_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1884_ = lean_box(0);
v___x_1885_ = l_Lean_Syntax_formatStx(v_decl_1698_, v___x_1884_, v___x_1882_);
v___x_1886_ = l_Std_Format_defWidth;
v___x_1887_ = l_Std_Format_pretty(v___x_1885_, v___x_1886_, v___x_1843_, v___x_1843_);
v___x_1888_ = l_Lean_stringToMessageData(v___x_1887_);
v___x_1889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1883_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
v___x_1890_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1889_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
return v___x_1890_;
}
else
{
v___y_1846_ = v_a_1699_;
v___y_1847_ = v_a_1700_;
v___y_1848_ = v_a_1701_;
v___y_1849_ = v_a_1702_;
v___y_1850_ = v_a_1703_;
v___y_1851_ = v_a_1704_;
goto v___jp_1845_;
}
}
}
else
{
lean_dec(v___x_1869_);
v___y_1846_ = v_a_1699_;
v___y_1847_ = v_a_1700_;
v___y_1848_ = v_a_1701_;
v___y_1849_ = v_a_1702_;
v___y_1850_ = v_a_1703_;
v___y_1851_ = v_a_1704_;
goto v___jp_1845_;
}
}
v___jp_1845_:
{
lean_object* v___x_1852_; lean_object* v_rhs_1853_; 
v___x_1852_ = lean_unsigned_to_nat(3u);
v_rhs_1853_ = l_Lean_Syntax_getArg(v_decl_1698_, v___x_1852_);
lean_dec(v_decl_1698_);
if (v_reassignment_1697_ == 0)
{
lean_object* v___x_1854_; 
lean_dec(v_x_1844_);
v___x_1854_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_1707_ = v___y_1851_;
v___y_1708_ = v___y_1849_;
v___y_1709_ = v___y_1847_;
v___y_1710_ = v___y_1850_;
v___y_1711_ = v___y_1848_;
v___y_1712_ = v_rhs_1853_;
v___y_1713_ = v___y_1846_;
v___y_1714_ = v___x_1854_;
goto v___jp_1706_;
}
else
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1855_ = lean_unsigned_to_nat(1u);
v___x_1856_ = lean_mk_empty_array_with_capacity(v___x_1855_);
v___x_1857_ = lean_array_push(v___x_1856_, v_x_1844_);
v___y_1707_ = v___y_1851_;
v___y_1708_ = v___y_1849_;
v___y_1709_ = v___y_1847_;
v___y_1710_ = v___y_1850_;
v___y_1711_ = v___y_1848_;
v___y_1712_ = v_rhs_1853_;
v___y_1713_ = v___y_1846_;
v___y_1714_ = v___x_1857_;
goto v___jp_1706_;
}
}
}
v___jp_1706_:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1715_, 0, v___y_1712_);
v___x_1716_ = lean_box(0);
v___x_1717_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___y_1714_, v___x_1715_, v___x_1716_, v___x_1716_, v___y_1713_, v___y_1709_, v___y_1711_, v___y_1708_, v___y_1710_, v___y_1707_);
return v___x_1717_;
}
v___jp_1718_:
{
lean_object* v___x_1729_; 
v___x_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1729_, 0, v___y_1719_);
if (lean_obj_tag(v___y_1720_) == 0)
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_box(0);
v___x_1731_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_1722_, v___x_1729_, v___y_1721_, v___x_1730_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
return v___x_1731_;
}
else
{
lean_object* v_val_1732_; lean_object* v___x_1733_; 
v_val_1732_ = lean_ctor_get(v___y_1720_, 0);
lean_inc(v_val_1732_);
lean_dec_ref_known(v___y_1720_, 1);
v___x_1733_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_1722_, v___x_1729_, v___y_1721_, v_val_1732_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
return v___x_1733_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(lean_object* v_as_2016_, size_t v_sz_2017_, size_t v_i_2018_, lean_object* v_b_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_){
_start:
{
uint8_t v___x_2027_; 
v___x_2027_ = lean_usize_dec_lt(v_i_2018_, v_sz_2017_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2028_; 
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v_b_2019_);
return v___x_2028_;
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2030_; 
v_a_2029_ = lean_array_uget_borrowed(v_as_2016_, v_i_2018_);
lean_inc(v_a_2029_);
v___x_2030_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_a_2029_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; 
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
lean_inc(v_a_2031_);
lean_dec_ref_known(v___x_2030_, 1);
v___x_2032_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2031_, v_b_2019_);
v___x_2033_ = ((size_t)1ULL);
v___x_2034_ = lean_usize_add(v_i_2018_, v___x_2033_);
v_i_2018_ = v___x_2034_;
v_b_2019_ = v___x_2032_;
goto _start;
}
else
{
lean_dec_ref(v_b_2019_);
return v___x_2030_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5(void){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4));
v___x_2050_ = l_Lean_stringToMessageData(v___x_2049_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t v___x_2065_, lean_object* v_as_2066_, size_t v_sz_2067_, size_t v_i_2068_, lean_object* v_b_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v_a_2078_; uint8_t v___x_2082_; 
v___x_2082_ = lean_usize_dec_lt(v_i_2068_, v_sz_2067_);
if (v___x_2082_ == 0)
{
lean_object* v___x_2083_; 
v___x_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2083_, 0, v_b_2069_);
return v___x_2083_;
}
else
{
lean_object* v___x_2084_; lean_object* v_a_2085_; uint8_t v___x_2086_; 
v___x_2084_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1));
v_a_2085_ = lean_array_uget_borrowed(v_as_2066_, v_i_2068_);
lean_inc(v_a_2085_);
v___x_2086_ = l_Lean_Syntax_isOfKind(v_a_2085_, v___x_2084_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; 
v___x_2087_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg();
if (lean_obj_tag(v___x_2087_) == 0)
{
lean_dec_ref_known(v___x_2087_, 1);
v_a_2078_ = v_b_2069_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2095_; 
lean_dec_ref(v_b_2069_);
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2090_ = v___x_2087_;
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_2087_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_a_2088_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
else
{
lean_object* v___x_2096_; lean_object* v___y_2098_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; uint8_t v___x_2121_; 
v___x_2096_ = lean_unsigned_to_nat(3u);
v___x_2115_ = lean_unsigned_to_nat(1u);
v___x_2116_ = l_Lean_Syntax_getArg(v_a_2085_, v___x_2115_);
v___x_2117_ = l_Lean_Syntax_getArgs(v___x_2116_);
lean_dec(v___x_2116_);
v___x_2118_ = lean_unsigned_to_nat(0u);
v___x_2119_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_2120_ = lean_array_get_size(v___x_2117_);
v___x_2121_ = lean_nat_dec_lt(v___x_2118_, v___x_2120_);
if (v___x_2121_ == 0)
{
lean_dec_ref(v___x_2117_);
v___y_2098_ = v___x_2119_;
goto v___jp_2097_;
}
else
{
lean_object* v___x_2122_; lean_object* v___x_2123_; size_t v___x_2124_; size_t v___x_2125_; lean_object* v___x_2126_; lean_object* v_snd_2127_; 
v___x_2122_ = lean_box(v___x_2121_);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
lean_ctor_set(v___x_2123_, 1, v___x_2119_);
v___x_2124_ = ((size_t)0ULL);
v___x_2125_ = lean_usize_of_nat(v___x_2120_);
v___x_2126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2086_, v___x_2065_, v___x_2117_, v___x_2124_, v___x_2125_, v___x_2123_);
lean_dec_ref(v___x_2117_);
v_snd_2127_ = lean_ctor_get(v___x_2126_, 1);
lean_inc(v_snd_2127_);
lean_dec_ref(v___x_2126_);
v___y_2098_ = v_snd_2127_;
goto v___jp_2097_;
}
v___jp_2097_:
{
size_t v_sz_2099_; size_t v___x_2100_; lean_object* v___x_2101_; 
v_sz_2099_ = lean_array_size(v___y_2098_);
v___x_2100_ = ((size_t)0ULL);
v___x_2101_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(v_sz_2099_, v___x_2100_, v___y_2098_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v___x_2102_; 
v___x_2102_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg();
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_dec_ref_known(v___x_2102_, 1);
v_a_2078_ = v_b_2069_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec_ref(v_b_2069_);
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2102_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2102_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
else
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
lean_dec_ref_known(v___x_2101_, 1);
v___x_2111_ = l_Lean_Syntax_getArg(v_a_2085_, v___x_2096_);
v___x_2112_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2111_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2069_, v_a_2113_);
v_a_2078_ = v___x_2114_;
goto v___jp_2077_;
}
else
{
lean_dec_ref(v_b_2069_);
return v___x_2112_;
}
}
}
}
}
v___jp_2077_:
{
size_t v___x_2079_; size_t v___x_2080_; 
v___x_2079_ = ((size_t)1ULL);
v___x_2080_ = lean_usize_add(v_i_2068_, v___x_2079_);
v_i_2068_ = v___x_2080_;
v_b_2069_ = v_a_2078_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(lean_object* v_as_2128_, size_t v_sz_2129_, size_t v_i_2130_, lean_object* v_b_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v_a_2140_; uint8_t v___x_2144_; 
v___x_2144_ = lean_usize_dec_lt(v_i_2130_, v_sz_2129_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; 
v___x_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2145_, 0, v_b_2131_);
return v___x_2145_;
}
else
{
lean_object* v___x_2146_; lean_object* v_a_2147_; lean_object* v___y_2149_; lean_object* v___y_2150_; lean_object* v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___x_2160_; uint8_t v___x_2161_; 
v___x_2146_ = lean_unsigned_to_nat(0u);
v_a_2147_ = lean_array_uget_borrowed(v_as_2128_, v_i_2130_);
v___x_2160_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1));
lean_inc(v_a_2147_);
v___x_2161_ = l_Lean_Syntax_isOfKind(v_a_2147_, v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; uint8_t v___x_2163_; 
v___x_2162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3));
lean_inc(v_a_2147_);
v___x_2163_ = l_Lean_Syntax_isOfKind(v_a_2147_, v___x_2162_);
if (v___x_2163_ == 0)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2164_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2165_ = lean_box(0);
lean_inc(v_a_2147_);
v___x_2166_ = l_Lean_Syntax_formatStx(v_a_2147_, v___x_2165_, v___x_2163_);
v___x_2167_ = l_Std_Format_defWidth;
v___x_2168_ = l_Std_Format_pretty(v___x_2166_, v___x_2167_, v___x_2146_, v___x_2146_);
v___x_2169_ = l_Lean_stringToMessageData(v___x_2168_);
v___x_2170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2164_);
lean_ctor_set(v___x_2170_, 1, v___x_2169_);
v___x_2171_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2170_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_dec_ref_known(v___x_2171_, 1);
v_a_2140_ = v_b_2131_;
goto v___jp_2139_;
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec_ref(v_b_2131_);
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2171_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2171_);
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
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; uint8_t v___x_2183_; 
v___x_2180_ = lean_unsigned_to_nat(1u);
v___x_2181_ = l_Lean_Syntax_getArg(v_a_2147_, v___x_2180_);
v___x_2182_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7));
lean_inc(v___x_2181_);
v___x_2183_ = l_Lean_Syntax_isOfKind(v___x_2181_, v___x_2182_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
lean_dec(v___x_2181_);
v___x_2184_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2185_ = lean_box(0);
lean_inc(v_a_2147_);
v___x_2186_ = l_Lean_Syntax_formatStx(v_a_2147_, v___x_2185_, v___x_2183_);
v___x_2187_ = l_Std_Format_defWidth;
v___x_2188_ = l_Std_Format_pretty(v___x_2186_, v___x_2187_, v___x_2146_, v___x_2146_);
v___x_2189_ = l_Lean_stringToMessageData(v___x_2188_);
v___x_2190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2184_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
v___x_2191_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2190_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_dec_ref_known(v___x_2191_, 1);
v_a_2140_ = v_b_2131_;
goto v___jp_2139_;
}
else
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2199_; 
lean_dec_ref(v_b_2131_);
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2194_ = v___x_2191_;
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2191_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2197_; 
if (v_isShared_2195_ == 0)
{
v___x_2197_ = v___x_2194_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_a_2192_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
}
else
{
lean_object* v___x_2200_; lean_object* v___x_2201_; size_t v_sz_2202_; size_t v___x_2203_; lean_object* v___x_2204_; 
v___x_2200_ = l_Lean_Syntax_getArg(v___x_2181_, v___x_2146_);
lean_dec(v___x_2181_);
v___x_2201_ = l_Lean_Syntax_getArgs(v___x_2200_);
lean_dec(v___x_2200_);
v_sz_2202_ = lean_array_size(v___x_2201_);
v___x_2203_ = ((size_t)0ULL);
v___x_2204_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_2161_, v___x_2201_, v_sz_2202_, v___x_2203_, v_b_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
lean_dec_ref(v___x_2201_);
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v_a_2205_; 
v_a_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_a_2205_);
lean_dec_ref_known(v___x_2204_, 1);
v_a_2140_ = v_a_2205_;
goto v___jp_2139_;
}
else
{
return v___x_2204_;
}
}
}
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2207_; uint8_t v___x_2208_; 
v___x_2206_ = lean_unsigned_to_nat(2u);
v___x_2207_ = l_Lean_Syntax_getArg(v_a_2147_, v___x_2206_);
v___x_2208_ = l_Lean_Syntax_isNone(v___x_2207_);
if (v___x_2208_ == 0)
{
uint8_t v___x_2209_; 
v___x_2209_ = l_Lean_Syntax_matchesNull(v___x_2207_, v___x_2206_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2210_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2211_ = lean_box(0);
lean_inc(v_a_2147_);
v___x_2212_ = l_Lean_Syntax_formatStx(v_a_2147_, v___x_2211_, v___x_2209_);
v___x_2213_ = l_Std_Format_defWidth;
v___x_2214_ = l_Std_Format_pretty(v___x_2212_, v___x_2213_, v___x_2146_, v___x_2146_);
v___x_2215_ = l_Lean_stringToMessageData(v___x_2214_);
v___x_2216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2210_);
lean_ctor_set(v___x_2216_, 1, v___x_2215_);
v___x_2217_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2216_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_dec_ref_known(v___x_2217_, 1);
v_a_2140_ = v_b_2131_;
goto v___jp_2139_;
}
else
{
lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2225_; 
lean_dec_ref(v_b_2131_);
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2220_ = v___x_2217_;
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_dec(v___x_2217_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2218_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
else
{
v___y_2149_ = v___y_2132_;
v___y_2150_ = v___y_2133_;
v___y_2151_ = v___y_2134_;
v___y_2152_ = v___y_2135_;
v___y_2153_ = v___y_2136_;
v___y_2154_ = v___y_2137_;
goto v___jp_2148_;
}
}
else
{
lean_dec(v___x_2207_);
v___y_2149_ = v___y_2132_;
v___y_2150_ = v___y_2133_;
v___y_2151_ = v___y_2134_;
v___y_2152_ = v___y_2135_;
v___y_2153_ = v___y_2136_;
v___y_2154_ = v___y_2137_;
goto v___jp_2148_;
}
}
v___jp_2148_:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2155_ = lean_unsigned_to_nat(4u);
v___x_2156_ = l_Lean_Syntax_getArg(v_a_2147_, v___x_2155_);
v___x_2157_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2156_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2159_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
lean_inc(v_a_2158_);
lean_dec_ref_known(v___x_2157_, 1);
v___x_2159_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2158_, v_b_2131_);
v_a_2140_ = v___x_2159_;
goto v___jp_2139_;
}
else
{
lean_dec_ref(v_b_2131_);
return v___x_2157_;
}
}
}
v___jp_2139_:
{
size_t v___x_2141_; size_t v___x_2142_; 
v___x_2141_ = ((size_t)1ULL);
v___x_2142_ = lean_usize_add(v_i_2130_, v___x_2141_);
v_i_2130_ = v___x_2142_;
v_b_2131_ = v_a_2140_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object* v_stx_x3f_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_){
_start:
{
if (lean_obj_tag(v_stx_x3f_2226_) == 0)
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2234_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
return v___x_2235_;
}
else
{
lean_object* v_val_2236_; lean_object* v___x_2237_; 
v_val_2236_ = lean_ctor_get(v_stx_x3f_2226_, 0);
lean_inc(v_val_2236_);
lean_dec_ref_known(v_stx_x3f_2226_, 1);
v___x_2237_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2236_, v_a_2227_, v_a_2228_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
return v___x_2237_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(uint8_t v___x_2256_, lean_object* v_as_2257_, size_t v_sz_2258_, size_t v_i_2259_, lean_object* v_b_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v_a_2269_; uint8_t v___x_2273_; 
v___x_2273_ = lean_usize_dec_lt(v_i_2259_, v_sz_2258_);
if (v___x_2273_ == 0)
{
lean_object* v___x_2274_; 
v___x_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2274_, 0, v_b_2260_);
return v___x_2274_;
}
else
{
lean_object* v___x_2275_; lean_object* v_a_2276_; uint8_t v___x_2277_; 
v___x_2275_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1));
v_a_2276_ = lean_array_uget_borrowed(v_as_2257_, v_i_2259_);
lean_inc(v_a_2276_);
v___x_2277_ = l_Lean_Syntax_isOfKind(v_a_2276_, v___x_2275_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; 
v___x_2278_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg();
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_dec_ref_known(v___x_2278_, 1);
v_a_2269_ = v_b_2260_;
goto v___jp_2268_;
}
else
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2286_; 
lean_dec_ref(v_b_2260_);
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2281_ = v___x_2278_;
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2278_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
else
{
lean_object* v___x_2287_; lean_object* v___y_2289_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; uint8_t v___x_2312_; 
v___x_2287_ = lean_unsigned_to_nat(3u);
v___x_2306_ = lean_unsigned_to_nat(1u);
v___x_2307_ = l_Lean_Syntax_getArg(v_a_2276_, v___x_2306_);
v___x_2308_ = l_Lean_Syntax_getArgs(v___x_2307_);
lean_dec(v___x_2307_);
v___x_2309_ = lean_unsigned_to_nat(0u);
v___x_2310_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_2311_ = lean_array_get_size(v___x_2308_);
v___x_2312_ = lean_nat_dec_lt(v___x_2309_, v___x_2311_);
if (v___x_2312_ == 0)
{
lean_dec_ref(v___x_2308_);
v___y_2289_ = v___x_2310_;
goto v___jp_2288_;
}
else
{
lean_object* v___x_2313_; lean_object* v___x_2314_; size_t v___x_2315_; size_t v___x_2316_; lean_object* v___x_2317_; lean_object* v_snd_2318_; 
v___x_2313_ = lean_box(v___x_2312_);
v___x_2314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
lean_ctor_set(v___x_2314_, 1, v___x_2310_);
v___x_2315_ = ((size_t)0ULL);
v___x_2316_ = lean_usize_of_nat(v___x_2311_);
v___x_2317_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2277_, v___x_2256_, v___x_2308_, v___x_2315_, v___x_2316_, v___x_2314_);
lean_dec_ref(v___x_2308_);
v_snd_2318_ = lean_ctor_get(v___x_2317_, 1);
lean_inc(v_snd_2318_);
lean_dec_ref(v___x_2317_);
v___y_2289_ = v_snd_2318_;
goto v___jp_2288_;
}
v___jp_2288_:
{
size_t v_sz_2290_; size_t v___x_2291_; lean_object* v___x_2292_; 
v_sz_2290_ = lean_array_size(v___y_2289_);
v___x_2291_ = ((size_t)0ULL);
v___x_2292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(v_sz_2290_, v___x_2291_, v___y_2289_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v___x_2293_; 
v___x_2293_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg();
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_dec_ref_known(v___x_2293_, 1);
v_a_2269_ = v_b_2260_;
goto v___jp_2268_;
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
lean_dec_ref(v_b_2260_);
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2293_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2293_);
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
else
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
lean_dec_ref_known(v___x_2292_, 1);
v___x_2302_ = l_Lean_Syntax_getArg(v_a_2276_, v___x_2287_);
v___x_2303_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2302_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2305_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v___x_2303_, 1);
v___x_2305_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2260_, v_a_2304_);
v_a_2269_ = v___x_2305_;
goto v___jp_2268_;
}
else
{
lean_dec_ref(v_b_2260_);
return v___x_2303_;
}
}
}
}
}
v___jp_2268_:
{
size_t v___x_2270_; size_t v___x_2271_; 
v___x_2270_ = ((size_t)1ULL);
v___x_2271_ = lean_usize_add(v_i_2259_, v___x_2270_);
v_i_2259_ = v___x_2271_;
v_b_2260_ = v_a_2269_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object* v_stx_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v___y_2376_; lean_object* v___y_2377_; lean_object* v___y_2378_; lean_object* v___y_2379_; lean_object* v___y_2380_; lean_object* v___y_2381_; lean_object* v___y_2382_; lean_object* v___y_2383_; lean_object* v___y_2389_; lean_object* v_bodyInfo_2390_; lean_object* v___y_2397_; lean_object* v_bodyInfo_2398_; lean_object* v___x_2401_; lean_object* v_env_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2401_ = lean_st_ref_get(v_a_2373_);
v_env_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc_ref(v_env_2402_);
lean_dec(v___x_2401_);
lean_inc(v_stx_2367_);
v___x_2403_ = lean_alloc_closure((void*)(l_Lean_Elab_expandMacroImpl_x3f___boxed), 4, 2);
lean_closure_set(v___x_2403_, 0, v_env_2402_);
lean_closure_set(v___x_2403_, 1, v_stx_2367_);
v___x_2404_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_2403_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_5112_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_5112_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_5112_ == 0)
{
v___x_2407_ = v___x_2404_;
v_isShared_2408_ = v_isSharedCheck_5112_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2404_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_5112_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
if (lean_obj_tag(v_a_2405_) == 1)
{
lean_object* v_val_2409_; lean_object* v_snd_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
lean_del_object(v___x_2407_);
lean_dec(v_stx_2367_);
v_val_2409_ = lean_ctor_get(v_a_2405_, 0);
lean_inc(v_val_2409_);
lean_dec_ref_known(v_a_2405_, 1);
v_snd_2410_ = lean_ctor_get(v_val_2409_, 1);
lean_inc(v_snd_2410_);
lean_dec(v_val_2409_);
v___x_2411_ = lean_alloc_closure((void*)(l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed), 4, 2);
lean_closure_set(v___x_2411_, 0, lean_box(0));
lean_closure_set(v___x_2411_, 1, v_snd_2410_);
v___x_2412_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_2411_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2413_);
lean_dec_ref_known(v___x_2412_, 1);
v_stx_2367_ = v_a_2413_;
goto _start;
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
v_a_2415_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2412_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2412_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
else
{
lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___x_2605_; uint8_t v___x_2606_; 
lean_dec(v_a_2405_);
v___x_2605_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13));
lean_inc(v_stx_2367_);
v___x_2606_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2605_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2607_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15));
lean_inc(v_stx_2367_);
v___x_2608_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; uint8_t v___x_2610_; 
v___x_2609_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17));
lean_inc(v_stx_2367_);
v___x_2610_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2609_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; uint8_t v___x_2612_; 
v___x_2611_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19));
lean_inc(v_stx_2367_);
v___x_2612_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2611_);
if (v___x_2612_ == 0)
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2613_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21));
lean_inc(v_stx_2367_);
v___x_2614_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2613_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2615_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23));
lean_inc(v_stx_2367_);
v___x_2616_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2615_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; uint8_t v___x_2618_; 
lean_del_object(v___x_2407_);
v___x_2617_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25));
lean_inc(v_stx_2367_);
v___x_2618_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2617_);
if (v___x_2618_ == 0)
{
lean_object* v___x_2619_; uint8_t v___x_2620_; 
v___x_2619_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27));
lean_inc(v_stx_2367_);
v___x_2620_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2619_);
if (v___x_2620_ == 0)
{
lean_object* v___x_2621_; uint8_t v___x_2622_; lean_object* v___y_2624_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; 
v___x_2621_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29));
lean_inc(v_stx_2367_);
v___x_2622_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2621_);
if (v___x_2622_ == 0)
{
lean_object* v___x_2683_; uint8_t v___x_2684_; 
v___x_2683_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31));
lean_inc(v_stx_2367_);
v___x_2684_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2683_);
if (v___x_2684_ == 0)
{
lean_object* v___x_2685_; uint8_t v___x_2686_; 
v___x_2685_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33));
lean_inc(v_stx_2367_);
v___x_2686_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2685_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; uint8_t v___x_2688_; 
v___x_2687_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35));
lean_inc(v_stx_2367_);
v___x_2688_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2687_);
if (v___x_2688_ == 0)
{
lean_object* v___x_2689_; uint8_t v___x_2690_; 
v___x_2689_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37));
lean_inc(v_stx_2367_);
v___x_2690_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2689_);
if (v___x_2690_ == 0)
{
lean_object* v___x_2691_; uint8_t v___x_2692_; 
v___x_2691_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39));
lean_inc(v_stx_2367_);
v___x_2692_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2691_);
if (v___x_2692_ == 0)
{
lean_object* v___x_2693_; uint8_t v___x_2694_; 
v___x_2693_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41));
lean_inc(v_stx_2367_);
v___x_2694_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2693_);
if (v___x_2694_ == 0)
{
lean_object* v___x_2695_; uint8_t v___x_2696_; 
v___x_2695_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43));
lean_inc(v_stx_2367_);
v___x_2696_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2695_);
if (v___x_2696_ == 0)
{
lean_object* v___x_2697_; uint8_t v___x_2698_; lean_object* v___y_2700_; lean_object* v___y_2701_; uint8_t v___y_2702_; uint8_t v___y_2703_; 
v___x_2697_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45));
lean_inc(v_stx_2367_);
v___x_2698_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2697_);
if (v___x_2698_ == 0)
{
lean_object* v___x_2706_; uint8_t v___x_2707_; 
v___x_2706_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47));
lean_inc(v_stx_2367_);
v___x_2707_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2706_);
if (v___x_2707_ == 0)
{
lean_object* v___x_2708_; uint8_t v___x_2709_; 
v___x_2708_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49));
lean_inc(v_stx_2367_);
v___x_2709_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2708_);
if (v___x_2709_ == 0)
{
lean_object* v___x_2710_; uint8_t v___x_2711_; 
v___x_2710_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52));
lean_inc(v_stx_2367_);
v___x_2711_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2710_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2712_; uint8_t v___x_2713_; 
v___x_2712_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54));
lean_inc(v_stx_2367_);
v___x_2713_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2712_);
if (v___x_2713_ == 0)
{
lean_object* v___x_2714_; uint8_t v___x_2715_; 
v___x_2714_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56));
lean_inc(v_stx_2367_);
v___x_2715_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2714_);
if (v___x_2715_ == 0)
{
lean_object* v___x_2716_; uint8_t v___x_2717_; 
v___x_2716_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58));
lean_inc(v_stx_2367_);
v___x_2717_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2716_);
if (v___x_2717_ == 0)
{
lean_object* v___x_2718_; uint8_t v___x_2719_; 
v___x_2718_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60));
lean_inc(v_stx_2367_);
v___x_2719_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2718_);
if (v___x_2719_ == 0)
{
lean_object* v___x_2720_; uint8_t v___x_2721_; 
v___x_2720_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62));
lean_inc(v_stx_2367_);
v___x_2721_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2720_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2722_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64));
lean_inc(v_stx_2367_);
v___x_2723_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2722_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; uint8_t v___x_2725_; 
v___x_2724_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66));
lean_inc(v_stx_2367_);
v___x_2725_ = l_Lean_Syntax_isOfKind(v_stx_2367_, v___x_2724_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v_env_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; 
lean_inc_n(v_stx_2367_, 2);
v___x_2726_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2727_ = lean_st_ref_get(v_a_2373_);
v_env_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc_ref(v_env_2728_);
lean_dec(v___x_2727_);
v___x_2729_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2730_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2729_, v_env_2728_, v___x_2726_);
v___x_2731_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2732_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2730_, v___x_2731_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_2730_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2763_; 
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2763_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2763_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v_fst_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2761_; 
v_fst_2737_ = lean_ctor_get(v_a_2733_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v_a_2733_);
if (v_isSharedCheck_2761_ == 0)
{
lean_object* v_unused_2762_; 
v_unused_2762_ = lean_ctor_get(v_a_2733_, 1);
lean_dec(v_unused_2762_);
v___x_2739_ = v_a_2733_;
v_isShared_2740_ = v_isSharedCheck_2761_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_fst_2737_);
lean_dec(v_a_2733_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2761_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
if (lean_obj_tag(v_fst_2737_) == 0)
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2744_; 
lean_del_object(v___x_2735_);
v___x_2741_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2742_ = l_Lean_MessageData_ofName(v___x_2726_);
lean_inc_ref(v___x_2742_);
if (v_isShared_2740_ == 0)
{
lean_ctor_set_tag(v___x_2739_, 7);
lean_ctor_set(v___x_2739_, 1, v___x_2742_);
lean_ctor_set(v___x_2739_, 0, v___x_2741_);
v___x_2744_ = v___x_2739_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v___x_2741_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v___x_2742_);
v___x_2744_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2745_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2744_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_2748_ = l_Lean_indentD(v___x_2747_);
v___x_2749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2746_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
v___x_2750_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2749_);
lean_ctor_set(v___x_2751_, 1, v___x_2750_);
v___x_2752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
lean_ctor_set(v___x_2752_, 1, v___x_2742_);
v___x_2753_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2752_);
lean_ctor_set(v___x_2754_, 1, v___x_2753_);
v___x_2755_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2754_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_2755_;
}
}
else
{
lean_object* v_val_2757_; lean_object* v___x_2759_; 
lean_del_object(v___x_2739_);
lean_dec(v___x_2726_);
lean_dec(v_stx_2367_);
v_val_2757_ = lean_ctor_get(v_fst_2737_, 0);
lean_inc(v_val_2757_);
lean_dec_ref_known(v_fst_2737_, 1);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v_val_2757_);
v___x_2759_ = v___x_2735_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_val_2757_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec(v___x_2726_);
lean_dec(v_stx_2367_);
v_a_2764_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2732_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2732_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
else
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___y_2776_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2772_ = lean_unsigned_to_nat(1u);
v___x_2773_ = lean_unsigned_to_nat(5u);
v___x_2774_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2773_);
v___x_2785_ = lean_unsigned_to_nat(6u);
v___x_2786_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2785_);
lean_dec(v_stx_2367_);
v___x_2787_ = l_Lean_Syntax_getOptional_x3f(v___x_2786_);
lean_dec(v___x_2786_);
if (lean_obj_tag(v___x_2787_) == 0)
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_box(0);
v___y_2776_ = v___x_2788_;
goto v___jp_2775_;
}
else
{
lean_object* v_val_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
v_val_2789_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___x_2787_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_val_2789_);
lean_dec(v___x_2787_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_val_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
v___y_2776_ = v___x_2794_;
goto v___jp_2775_;
}
}
}
v___jp_2775_:
{
lean_object* v___x_2777_; 
v___x_2777_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2774_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2777_) == 0)
{
if (lean_obj_tag(v___y_2776_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
lean_inc(v_a_2778_);
lean_dec_ref_known(v___x_2777_, 1);
v___x_2779_ = l_Lean_NameSet_empty;
v___x_2780_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2780_, 0, v___x_2772_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
lean_ctor_set_uint8(v___x_2780_, sizeof(void*)*2, v___x_2723_);
lean_ctor_set_uint8(v___x_2780_, sizeof(void*)*2 + 1, v___x_2723_);
lean_ctor_set_uint8(v___x_2780_, sizeof(void*)*2 + 2, v___x_2723_);
lean_ctor_set_uint8(v___x_2780_, sizeof(void*)*2 + 3, v___x_2723_);
v___y_2389_ = v_a_2778_;
v_bodyInfo_2390_ = v___x_2780_;
goto v___jp_2388_;
}
else
{
lean_object* v_a_2781_; lean_object* v_val_2782_; lean_object* v___x_2783_; 
v_a_2781_ = lean_ctor_get(v___x_2777_, 0);
lean_inc(v_a_2781_);
lean_dec_ref_known(v___x_2777_, 1);
v_val_2782_ = lean_ctor_get(v___y_2776_, 0);
lean_inc(v_val_2782_);
lean_dec_ref_known(v___y_2776_, 1);
v___x_2783_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2782_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_a_2784_);
lean_dec_ref_known(v___x_2783_, 1);
v___y_2389_ = v_a_2781_;
v_bodyInfo_2390_ = v_a_2784_;
goto v___jp_2388_;
}
else
{
lean_dec(v_a_2781_);
return v___x_2783_;
}
}
}
else
{
lean_dec(v___y_2776_);
return v___x_2777_;
}
}
}
}
else
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___y_2801_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2797_ = lean_unsigned_to_nat(1u);
v___x_2798_ = lean_unsigned_to_nat(5u);
v___x_2799_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2798_);
v___x_2810_ = lean_unsigned_to_nat(6u);
v___x_2811_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2810_);
lean_dec(v_stx_2367_);
v___x_2812_ = l_Lean_Syntax_getOptional_x3f(v___x_2811_);
lean_dec(v___x_2811_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v___x_2813_; 
v___x_2813_ = lean_box(0);
v___y_2801_ = v___x_2813_;
goto v___jp_2800_;
}
else
{
lean_object* v_val_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
v_val_2814_ = lean_ctor_get(v___x_2812_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2812_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2812_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_val_2814_);
lean_dec(v___x_2812_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_val_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
v___y_2801_ = v___x_2819_;
goto v___jp_2800_;
}
}
}
v___jp_2800_:
{
lean_object* v___x_2802_; 
v___x_2802_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2799_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2802_) == 0)
{
if (lean_obj_tag(v___y_2801_) == 0)
{
lean_object* v_a_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___x_2804_ = l_Lean_NameSet_empty;
v___x_2805_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2805_, 0, v___x_2797_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
lean_ctor_set_uint8(v___x_2805_, sizeof(void*)*2, v___x_2721_);
lean_ctor_set_uint8(v___x_2805_, sizeof(void*)*2 + 1, v___x_2721_);
lean_ctor_set_uint8(v___x_2805_, sizeof(void*)*2 + 2, v___x_2721_);
lean_ctor_set_uint8(v___x_2805_, sizeof(void*)*2 + 3, v___x_2721_);
v___y_2397_ = v_a_2803_;
v_bodyInfo_2398_ = v___x_2805_;
goto v___jp_2396_;
}
else
{
lean_object* v_a_2806_; lean_object* v_val_2807_; lean_object* v___x_2808_; 
v_a_2806_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2802_, 1);
v_val_2807_ = lean_ctor_get(v___y_2801_, 0);
lean_inc(v_val_2807_);
lean_dec_ref_known(v___y_2801_, 1);
v___x_2808_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2807_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2808_, 1);
v___y_2397_ = v_a_2806_;
v_bodyInfo_2398_ = v_a_2809_;
goto v___jp_2396_;
}
else
{
lean_dec(v_a_2806_);
return v___x_2808_;
}
}
}
else
{
lean_dec(v___y_2801_);
return v___x_2802_;
}
}
}
}
else
{
lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___x_3037_; uint8_t v___x_3038_; 
v___x_2822_ = lean_unsigned_to_nat(0u);
v___x_2823_ = lean_unsigned_to_nat(1u);
v___x_3037_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2823_);
v___x_3038_ = l_Lean_Syntax_isNone(v___x_3037_);
if (v___x_3038_ == 0)
{
lean_object* v___x_3039_; uint8_t v___x_3040_; 
v___x_3039_ = lean_unsigned_to_nat(5u);
v___x_3040_ = l_Lean_Syntax_matchesNull(v___x_3037_, v___x_3039_);
if (v___x_3040_ == 0)
{
lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v_env_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
lean_inc_n(v_stx_2367_, 2);
v___x_3041_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3042_ = lean_st_ref_get(v_a_2373_);
v_env_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc_ref(v_env_3043_);
lean_dec(v___x_3042_);
v___x_3044_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3045_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3044_, v_env_3043_, v___x_3041_);
v___x_3046_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3047_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3045_, v___x_3046_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3045_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3078_; 
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3050_ = v___x_3047_;
v_isShared_3051_ = v_isSharedCheck_3078_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_3047_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3078_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v_fst_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3076_; 
v_fst_3052_ = lean_ctor_get(v_a_3048_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v_a_3048_);
if (v_isSharedCheck_3076_ == 0)
{
lean_object* v_unused_3077_; 
v_unused_3077_ = lean_ctor_get(v_a_3048_, 1);
lean_dec(v_unused_3077_);
v___x_3054_ = v_a_3048_;
v_isShared_3055_ = v_isSharedCheck_3076_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_fst_3052_);
lean_dec(v_a_3048_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3076_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
if (lean_obj_tag(v_fst_3052_) == 0)
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3059_; 
lean_del_object(v___x_3050_);
v___x_3056_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3057_ = l_Lean_MessageData_ofName(v___x_3041_);
lean_inc_ref(v___x_3057_);
if (v_isShared_3055_ == 0)
{
lean_ctor_set_tag(v___x_3054_, 7);
lean_ctor_set(v___x_3054_, 1, v___x_3057_);
lean_ctor_set(v___x_3054_, 0, v___x_3056_);
v___x_3059_ = v___x_3054_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v___x_3056_);
lean_ctor_set(v_reuseFailAlloc_3071_, 1, v___x_3057_);
v___x_3059_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3060_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3059_);
lean_ctor_set(v___x_3061_, 1, v___x_3060_);
v___x_3062_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3063_ = l_Lean_indentD(v___x_3062_);
v___x_3064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3064_, 0, v___x_3061_);
lean_ctor_set(v___x_3064_, 1, v___x_3063_);
v___x_3065_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3064_);
lean_ctor_set(v___x_3066_, 1, v___x_3065_);
v___x_3067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3066_);
lean_ctor_set(v___x_3067_, 1, v___x_3057_);
v___x_3068_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3067_);
lean_ctor_set(v___x_3069_, 1, v___x_3068_);
v___x_3070_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3069_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3070_;
}
}
else
{
lean_object* v_val_3072_; lean_object* v___x_3074_; 
lean_del_object(v___x_3054_);
lean_dec(v___x_3041_);
lean_dec(v_stx_2367_);
v_val_3072_ = lean_ctor_get(v_fst_3052_, 0);
lean_inc(v_val_3072_);
lean_dec_ref_known(v_fst_3052_, 1);
if (v_isShared_3051_ == 0)
{
lean_ctor_set(v___x_3050_, 0, v_val_3072_);
v___x_3074_ = v___x_3050_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_val_3072_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
}
else
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
lean_dec(v___x_3041_);
lean_dec(v_stx_2367_);
v_a_3079_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___x_3047_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3047_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
else
{
v___y_2825_ = v_a_2368_;
v___y_2826_ = v_a_2369_;
v___y_2827_ = v_a_2370_;
v___y_2828_ = v_a_2371_;
v___y_2829_ = v_a_2372_;
v___y_2830_ = v_a_2373_;
goto v___jp_2824_;
}
}
else
{
lean_dec(v___x_3037_);
v___y_2825_ = v_a_2368_;
v___y_2826_ = v_a_2369_;
v___y_2827_ = v_a_2370_;
v___y_2828_ = v_a_2371_;
v___y_2829_ = v_a_2372_;
v___y_2830_ = v_a_2373_;
goto v___jp_2824_;
}
v___jp_2824_:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; 
v___x_2831_ = lean_unsigned_to_nat(4u);
v___x_2832_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2831_);
v___x_2833_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68));
lean_inc(v___x_2832_);
v___x_2834_ = l_Lean_Syntax_isOfKind(v___x_2832_, v___x_2833_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v_env_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
lean_dec(v___x_2832_);
lean_inc_n(v_stx_2367_, 2);
v___x_2835_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2836_ = lean_st_ref_get(v___y_2830_);
v_env_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc_ref(v_env_2837_);
lean_dec(v___x_2836_);
v___x_2838_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2839_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2838_, v_env_2837_, v___x_2835_);
v___x_2840_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2841_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2839_, v___x_2840_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___x_2839_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2872_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2844_ = v___x_2841_;
v_isShared_2845_ = v_isSharedCheck_2872_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2841_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2872_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v_fst_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2870_; 
v_fst_2846_ = lean_ctor_get(v_a_2842_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v_a_2842_);
if (v_isSharedCheck_2870_ == 0)
{
lean_object* v_unused_2871_; 
v_unused_2871_ = lean_ctor_get(v_a_2842_, 1);
lean_dec(v_unused_2871_);
v___x_2848_ = v_a_2842_;
v_isShared_2849_ = v_isSharedCheck_2870_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_fst_2846_);
lean_dec(v_a_2842_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2870_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
if (lean_obj_tag(v_fst_2846_) == 0)
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2853_; 
lean_del_object(v___x_2844_);
v___x_2850_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2851_ = l_Lean_MessageData_ofName(v___x_2835_);
lean_inc_ref(v___x_2851_);
if (v_isShared_2849_ == 0)
{
lean_ctor_set_tag(v___x_2848_, 7);
lean_ctor_set(v___x_2848_, 1, v___x_2851_);
lean_ctor_set(v___x_2848_, 0, v___x_2850_);
v___x_2853_ = v___x_2848_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2850_);
lean_ctor_set(v_reuseFailAlloc_2865_, 1, v___x_2851_);
v___x_2853_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2854_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2853_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_2857_ = l_Lean_indentD(v___x_2856_);
v___x_2858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2855_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2858_);
lean_ctor_set(v___x_2860_, 1, v___x_2859_);
v___x_2861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2860_);
lean_ctor_set(v___x_2861_, 1, v___x_2851_);
v___x_2862_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2863_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2861_);
lean_ctor_set(v___x_2863_, 1, v___x_2862_);
v___x_2864_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2863_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
return v___x_2864_;
}
}
else
{
lean_object* v_val_2866_; lean_object* v___x_2868_; 
lean_del_object(v___x_2848_);
lean_dec(v___x_2835_);
lean_dec(v_stx_2367_);
v_val_2866_ = lean_ctor_get(v_fst_2846_, 0);
lean_inc(v_val_2866_);
lean_dec_ref_known(v_fst_2846_, 1);
if (v_isShared_2845_ == 0)
{
lean_ctor_set(v___x_2844_, 0, v_val_2866_);
v___x_2868_ = v___x_2844_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_val_2866_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_dec(v___x_2835_);
lean_dec(v_stx_2367_);
v_a_2873_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2841_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2841_);
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
else
{
lean_object* v___x_2881_; lean_object* v___x_2882_; size_t v_sz_2883_; size_t v___x_2884_; lean_object* v___x_2885_; 
v___x_2881_ = l_Lean_Syntax_getArg(v___x_2832_, v___x_2822_);
v___x_2882_ = l_Lean_Syntax_getArgs(v___x_2881_);
lean_dec(v___x_2881_);
v_sz_2883_ = lean_array_size(v___x_2882_);
v___x_2884_ = ((size_t)0ULL);
v___x_2885_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v_sz_2883_, v___x_2884_, v___x_2882_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v_env_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
lean_dec(v___x_2832_);
lean_inc_n(v_stx_2367_, 2);
v___x_2886_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2887_ = lean_st_ref_get(v___y_2830_);
v_env_2888_ = lean_ctor_get(v___x_2887_, 0);
lean_inc_ref(v_env_2888_);
lean_dec(v___x_2887_);
v___x_2889_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2890_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2889_, v_env_2888_, v___x_2886_);
v___x_2891_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2892_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2890_, v___x_2891_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___x_2890_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2923_; 
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2895_ = v___x_2892_;
v_isShared_2896_ = v_isSharedCheck_2923_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2892_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2923_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v_fst_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2921_; 
v_fst_2897_ = lean_ctor_get(v_a_2893_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v_a_2893_);
if (v_isSharedCheck_2921_ == 0)
{
lean_object* v_unused_2922_; 
v_unused_2922_ = lean_ctor_get(v_a_2893_, 1);
lean_dec(v_unused_2922_);
v___x_2899_ = v_a_2893_;
v_isShared_2900_ = v_isSharedCheck_2921_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_fst_2897_);
lean_dec(v_a_2893_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2921_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
if (lean_obj_tag(v_fst_2897_) == 0)
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
lean_del_object(v___x_2895_);
v___x_2901_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2902_ = l_Lean_MessageData_ofName(v___x_2886_);
lean_inc_ref(v___x_2902_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set_tag(v___x_2899_, 7);
lean_ctor_set(v___x_2899_, 1, v___x_2902_);
lean_ctor_set(v___x_2899_, 0, v___x_2901_);
v___x_2904_ = v___x_2899_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v___x_2901_);
lean_ctor_set(v_reuseFailAlloc_2916_, 1, v___x_2902_);
v___x_2904_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2905_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2904_);
lean_ctor_set(v___x_2906_, 1, v___x_2905_);
v___x_2907_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_2908_ = l_Lean_indentD(v___x_2907_);
v___x_2909_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2906_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2909_);
lean_ctor_set(v___x_2911_, 1, v___x_2910_);
v___x_2912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
lean_ctor_set(v___x_2912_, 1, v___x_2902_);
v___x_2913_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2912_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
v___x_2915_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2914_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
return v___x_2915_;
}
}
else
{
lean_object* v_val_2917_; lean_object* v___x_2919_; 
lean_del_object(v___x_2899_);
lean_dec(v___x_2886_);
lean_dec(v_stx_2367_);
v_val_2917_ = lean_ctor_get(v_fst_2897_, 0);
lean_inc(v_val_2917_);
lean_dec_ref_known(v_fst_2897_, 1);
if (v_isShared_2896_ == 0)
{
lean_ctor_set(v___x_2895_, 0, v_val_2917_);
v___x_2919_ = v___x_2895_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_val_2917_);
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
else
{
lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2931_; 
lean_dec(v___x_2886_);
lean_dec(v_stx_2367_);
v_a_2924_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2926_ = v___x_2892_;
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___x_2892_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2929_; 
if (v_isShared_2927_ == 0)
{
v___x_2929_ = v___x_2926_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2924_);
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
else
{
lean_object* v_val_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; uint8_t v___x_2935_; 
v_val_2932_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_val_2932_);
lean_dec_ref_known(v___x_2885_, 1);
v___x_2933_ = l_Lean_Syntax_getArg(v___x_2832_, v___x_2823_);
lean_dec(v___x_2832_);
v___x_2934_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70));
lean_inc(v___x_2933_);
v___x_2935_ = l_Lean_Syntax_isOfKind(v___x_2933_, v___x_2934_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v_env_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
lean_dec(v___x_2933_);
lean_dec(v_val_2932_);
lean_inc_n(v_stx_2367_, 2);
v___x_2936_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2937_ = lean_st_ref_get(v___y_2830_);
v_env_2938_ = lean_ctor_get(v___x_2937_, 0);
lean_inc_ref(v_env_2938_);
lean_dec(v___x_2937_);
v___x_2939_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2940_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2939_, v_env_2938_, v___x_2936_);
v___x_2941_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2942_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2940_, v___x_2941_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___x_2940_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2973_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2945_ = v___x_2942_;
v_isShared_2946_ = v_isSharedCheck_2973_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2942_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2973_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v_fst_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2971_; 
v_fst_2947_ = lean_ctor_get(v_a_2943_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v_a_2943_);
if (v_isSharedCheck_2971_ == 0)
{
lean_object* v_unused_2972_; 
v_unused_2972_ = lean_ctor_get(v_a_2943_, 1);
lean_dec(v_unused_2972_);
v___x_2949_ = v_a_2943_;
v_isShared_2950_ = v_isSharedCheck_2971_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_fst_2947_);
lean_dec(v_a_2943_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2971_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
if (lean_obj_tag(v_fst_2947_) == 0)
{
lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2954_; 
lean_del_object(v___x_2945_);
v___x_2951_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2952_ = l_Lean_MessageData_ofName(v___x_2936_);
lean_inc_ref(v___x_2952_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set_tag(v___x_2949_, 7);
lean_ctor_set(v___x_2949_, 1, v___x_2952_);
lean_ctor_set(v___x_2949_, 0, v___x_2951_);
v___x_2954_ = v___x_2949_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v___x_2951_);
lean_ctor_set(v_reuseFailAlloc_2966_, 1, v___x_2952_);
v___x_2954_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2955_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2954_);
lean_ctor_set(v___x_2956_, 1, v___x_2955_);
v___x_2957_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_2958_ = l_Lean_indentD(v___x_2957_);
v___x_2959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2956_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
v___x_2960_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2959_);
lean_ctor_set(v___x_2961_, 1, v___x_2960_);
v___x_2962_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
lean_ctor_set(v___x_2962_, 1, v___x_2952_);
v___x_2963_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2962_);
lean_ctor_set(v___x_2964_, 1, v___x_2963_);
v___x_2965_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2964_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
return v___x_2965_;
}
}
else
{
lean_object* v_val_2967_; lean_object* v___x_2969_; 
lean_del_object(v___x_2949_);
lean_dec(v___x_2936_);
lean_dec(v_stx_2367_);
v_val_2967_ = lean_ctor_get(v_fst_2947_, 0);
lean_inc(v_val_2967_);
lean_dec_ref_known(v_fst_2947_, 1);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 0, v_val_2967_);
v___x_2969_ = v___x_2945_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_val_2967_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec(v___x_2936_);
lean_dec(v_stx_2367_);
v_a_2974_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2942_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2942_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
else
{
lean_object* v___x_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; 
v___x_2982_ = l_Lean_Syntax_getArg(v___x_2933_, v___x_2823_);
v___x_2983_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
v___x_2984_ = l_Lean_Syntax_isOfKind(v___x_2982_, v___x_2983_);
if (v___x_2984_ == 0)
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v_env_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
lean_dec(v___x_2933_);
lean_dec(v_val_2932_);
lean_inc_n(v_stx_2367_, 2);
v___x_2985_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2986_ = lean_st_ref_get(v___y_2830_);
v_env_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc_ref(v_env_2987_);
lean_dec(v___x_2986_);
v___x_2988_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2989_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2988_, v_env_2987_, v___x_2985_);
v___x_2990_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2991_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2989_, v___x_2990_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___x_2989_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3022_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_2994_ = v___x_2991_;
v_isShared_2995_ = v_isSharedCheck_3022_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2991_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3022_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v_fst_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3020_; 
v_fst_2996_ = lean_ctor_get(v_a_2992_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v_a_2992_);
if (v_isSharedCheck_3020_ == 0)
{
lean_object* v_unused_3021_; 
v_unused_3021_ = lean_ctor_get(v_a_2992_, 1);
lean_dec(v_unused_3021_);
v___x_2998_ = v_a_2992_;
v_isShared_2999_ = v_isSharedCheck_3020_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_fst_2996_);
lean_dec(v_a_2992_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3020_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
if (lean_obj_tag(v_fst_2996_) == 0)
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3003_; 
lean_del_object(v___x_2994_);
v___x_3000_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3001_ = l_Lean_MessageData_ofName(v___x_2985_);
lean_inc_ref(v___x_3001_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set_tag(v___x_2998_, 7);
lean_ctor_set(v___x_2998_, 1, v___x_3001_);
lean_ctor_set(v___x_2998_, 0, v___x_3000_);
v___x_3003_ = v___x_2998_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_3000_);
lean_ctor_set(v_reuseFailAlloc_3015_, 1, v___x_3001_);
v___x_3003_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3004_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3005_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3005_, 0, v___x_3003_);
lean_ctor_set(v___x_3005_, 1, v___x_3004_);
v___x_3006_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3007_ = l_Lean_indentD(v___x_3006_);
v___x_3008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3005_);
lean_ctor_set(v___x_3008_, 1, v___x_3007_);
v___x_3009_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3008_);
lean_ctor_set(v___x_3010_, 1, v___x_3009_);
v___x_3011_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3011_, 0, v___x_3010_);
lean_ctor_set(v___x_3011_, 1, v___x_3001_);
v___x_3012_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3011_);
lean_ctor_set(v___x_3013_, 1, v___x_3012_);
v___x_3014_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3013_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
return v___x_3014_;
}
}
else
{
lean_object* v_val_3016_; lean_object* v___x_3018_; 
lean_del_object(v___x_2998_);
lean_dec(v___x_2985_);
lean_dec(v_stx_2367_);
v_val_3016_ = lean_ctor_get(v_fst_2996_, 0);
lean_inc(v_val_3016_);
lean_dec_ref_known(v_fst_2996_, 1);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v_val_3016_);
v___x_3018_ = v___x_2994_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_val_3016_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
}
}
else
{
lean_object* v_a_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3030_; 
lean_dec(v___x_2985_);
lean_dec(v_stx_2367_);
v_a_3023_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3025_ = v___x_2991_;
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_a_3023_);
lean_dec(v___x_2991_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3028_; 
if (v_isShared_3026_ == 0)
{
v___x_3028_ = v___x_3025_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_a_3023_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
}
else
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
lean_dec(v_stx_2367_);
v___x_3031_ = lean_unsigned_to_nat(3u);
v___x_3032_ = l_Lean_Syntax_getArg(v___x_2933_, v___x_3031_);
lean_dec(v___x_2933_);
v___x_3033_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3032_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_object* v_a_3034_; size_t v_sz_3035_; lean_object* v___x_3036_; 
v_a_3034_ = lean_ctor_get(v___x_3033_, 0);
lean_inc(v_a_3034_);
lean_dec_ref_known(v___x_3033_, 1);
v_sz_3035_ = lean_array_size(v_val_2932_);
v___x_3036_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_val_2932_, v_sz_3035_, v___x_2884_, v_a_3034_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v_val_2932_);
return v___x_3036_;
}
else
{
lean_dec(v_val_2932_);
return v___x_3033_;
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
lean_object* v___x_3087_; lean_object* v___x_3088_; 
lean_dec(v_stx_2367_);
v___x_3087_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3087_);
return v___x_3088_;
}
}
else
{
lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_dec(v_stx_2367_);
v___x_3089_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
return v___x_3090_;
}
}
else
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
lean_dec(v_stx_2367_);
v___x_3091_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
return v___x_3092_;
}
}
else
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_dec(v_stx_2367_);
v___x_3093_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3094_, 0, v___x_3093_);
return v___x_3094_;
}
}
else
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
lean_dec(v_stx_2367_);
v___x_3095_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
return v___x_3096_;
}
}
else
{
lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; size_t v_sz_3100_; size_t v___x_3101_; lean_object* v___x_3102_; 
v___x_3097_ = lean_unsigned_to_nat(2u);
v___x_3098_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3097_);
v___x_3099_ = l_Lean_Syntax_getArgs(v___x_3098_);
lean_dec(v___x_3098_);
v_sz_3100_ = lean_array_size(v___x_3099_);
v___x_3101_ = ((size_t)0ULL);
v___x_3102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_sz_3100_, v___x_3101_, v___x_3099_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v_env_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; 
lean_inc_n(v_stx_2367_, 2);
v___x_3103_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3104_ = lean_st_ref_get(v_a_2373_);
v_env_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc_ref(v_env_3105_);
lean_dec(v___x_3104_);
v___x_3106_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3107_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3106_, v_env_3105_, v___x_3103_);
v___x_3108_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3109_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3107_, v___x_3108_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3107_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3140_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3112_ = v___x_3109_;
v_isShared_3113_ = v_isSharedCheck_3140_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3109_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3140_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v_fst_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3138_; 
v_fst_3114_ = lean_ctor_get(v_a_3110_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v_a_3110_);
if (v_isSharedCheck_3138_ == 0)
{
lean_object* v_unused_3139_; 
v_unused_3139_ = lean_ctor_get(v_a_3110_, 1);
lean_dec(v_unused_3139_);
v___x_3116_ = v_a_3110_;
v_isShared_3117_ = v_isSharedCheck_3138_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_fst_3114_);
lean_dec(v_a_3110_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3138_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
if (lean_obj_tag(v_fst_3114_) == 0)
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3121_; 
lean_del_object(v___x_3112_);
v___x_3118_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3119_ = l_Lean_MessageData_ofName(v___x_3103_);
lean_inc_ref(v___x_3119_);
if (v_isShared_3117_ == 0)
{
lean_ctor_set_tag(v___x_3116_, 7);
lean_ctor_set(v___x_3116_, 1, v___x_3119_);
lean_ctor_set(v___x_3116_, 0, v___x_3118_);
v___x_3121_ = v___x_3116_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v___x_3118_);
lean_ctor_set(v_reuseFailAlloc_3133_, 1, v___x_3119_);
v___x_3121_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3122_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3121_);
lean_ctor_set(v___x_3123_, 1, v___x_3122_);
v___x_3124_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3125_ = l_Lean_indentD(v___x_3124_);
v___x_3126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3123_);
lean_ctor_set(v___x_3126_, 1, v___x_3125_);
v___x_3127_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3126_);
lean_ctor_set(v___x_3128_, 1, v___x_3127_);
v___x_3129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3128_);
lean_ctor_set(v___x_3129_, 1, v___x_3119_);
v___x_3130_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3129_);
lean_ctor_set(v___x_3131_, 1, v___x_3130_);
v___x_3132_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3131_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3132_;
}
}
else
{
lean_object* v_val_3134_; lean_object* v___x_3136_; 
lean_del_object(v___x_3116_);
lean_dec(v___x_3103_);
lean_dec(v_stx_2367_);
v_val_3134_ = lean_ctor_get(v_fst_3114_, 0);
lean_inc(v_val_3134_);
lean_dec_ref_known(v_fst_3114_, 1);
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v_val_3134_);
v___x_3136_ = v___x_3112_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_val_3134_);
v___x_3136_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
return v___x_3136_;
}
}
}
}
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
lean_dec(v___x_3103_);
lean_dec(v_stx_2367_);
v_a_3141_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3143_ = v___x_3109_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3109_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
}
else
{
lean_object* v_val_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3283_; 
v_val_3149_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3151_ = v___x_3102_;
v_isShared_3152_ = v_isSharedCheck_3283_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_val_3149_);
lean_dec(v___x_3102_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3283_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v_finSeq_x3f_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___x_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; 
v___x_3153_ = lean_unsigned_to_nat(1u);
v___x_3154_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3153_);
v___x_3178_ = lean_unsigned_to_nat(3u);
v___x_3179_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3178_);
v___x_3180_ = l_Lean_Syntax_isNone(v___x_3179_);
if (v___x_3180_ == 0)
{
uint8_t v___x_3181_; 
lean_inc(v___x_3179_);
v___x_3181_ = l_Lean_Syntax_matchesNull(v___x_3179_, v___x_3153_);
if (v___x_3181_ == 0)
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v_env_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
lean_dec(v___x_3179_);
lean_dec(v___x_3154_);
lean_del_object(v___x_3151_);
lean_dec(v_val_3149_);
lean_inc_n(v_stx_2367_, 2);
v___x_3182_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3183_ = lean_st_ref_get(v_a_2373_);
v_env_3184_ = lean_ctor_get(v___x_3183_, 0);
lean_inc_ref(v_env_3184_);
lean_dec(v___x_3183_);
v___x_3185_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3186_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3185_, v_env_3184_, v___x_3182_);
v___x_3187_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3188_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3186_, v___x_3187_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3186_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3219_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3188_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3191_ = v___x_3188_;
v_isShared_3192_ = v_isSharedCheck_3219_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v___x_3188_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3219_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v_fst_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3217_; 
v_fst_3193_ = lean_ctor_get(v_a_3189_, 0);
v_isSharedCheck_3217_ = !lean_is_exclusive(v_a_3189_);
if (v_isSharedCheck_3217_ == 0)
{
lean_object* v_unused_3218_; 
v_unused_3218_ = lean_ctor_get(v_a_3189_, 1);
lean_dec(v_unused_3218_);
v___x_3195_ = v_a_3189_;
v_isShared_3196_ = v_isSharedCheck_3217_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_fst_3193_);
lean_dec(v_a_3189_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3217_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
if (lean_obj_tag(v_fst_3193_) == 0)
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3200_; 
lean_del_object(v___x_3191_);
v___x_3197_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3198_ = l_Lean_MessageData_ofName(v___x_3182_);
lean_inc_ref(v___x_3198_);
if (v_isShared_3196_ == 0)
{
lean_ctor_set_tag(v___x_3195_, 7);
lean_ctor_set(v___x_3195_, 1, v___x_3198_);
lean_ctor_set(v___x_3195_, 0, v___x_3197_);
v___x_3200_ = v___x_3195_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v___x_3197_);
lean_ctor_set(v_reuseFailAlloc_3212_, 1, v___x_3198_);
v___x_3200_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3201_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3200_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
v___x_3203_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3204_ = l_Lean_indentD(v___x_3203_);
v___x_3205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3202_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
v___x_3206_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3205_);
lean_ctor_set(v___x_3207_, 1, v___x_3206_);
v___x_3208_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
lean_ctor_set(v___x_3208_, 1, v___x_3198_);
v___x_3209_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3208_);
lean_ctor_set(v___x_3210_, 1, v___x_3209_);
v___x_3211_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3210_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3211_;
}
}
else
{
lean_object* v_val_3213_; lean_object* v___x_3215_; 
lean_del_object(v___x_3195_);
lean_dec(v___x_3182_);
lean_dec(v_stx_2367_);
v_val_3213_ = lean_ctor_get(v_fst_3193_, 0);
lean_inc(v_val_3213_);
lean_dec_ref_known(v_fst_3193_, 1);
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 0, v_val_3213_);
v___x_3215_ = v___x_3191_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_val_3213_);
v___x_3215_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
return v___x_3215_;
}
}
}
}
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3227_; 
lean_dec(v___x_3182_);
lean_dec(v_stx_2367_);
v_a_3220_ = lean_ctor_get(v___x_3188_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3188_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3222_ = v___x_3188_;
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3188_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3220_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
else
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; uint8_t v___x_3231_; 
v___x_3228_ = lean_unsigned_to_nat(0u);
v___x_3229_ = l_Lean_Syntax_getArg(v___x_3179_, v___x_3228_);
lean_dec(v___x_3179_);
v___x_3230_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74));
lean_inc(v___x_3229_);
v___x_3231_ = l_Lean_Syntax_isOfKind(v___x_3229_, v___x_3230_);
if (v___x_3231_ == 0)
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v_env_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
lean_dec(v___x_3229_);
lean_dec(v___x_3154_);
lean_del_object(v___x_3151_);
lean_dec(v_val_3149_);
lean_inc_n(v_stx_2367_, 2);
v___x_3232_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3233_ = lean_st_ref_get(v_a_2373_);
v_env_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc_ref(v_env_3234_);
lean_dec(v___x_3233_);
v___x_3235_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3236_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3235_, v_env_3234_, v___x_3232_);
v___x_3237_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3238_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3236_, v___x_3237_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3236_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3269_; 
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3241_ = v___x_3238_;
v_isShared_3242_ = v_isSharedCheck_3269_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3238_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3269_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v_fst_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3267_; 
v_fst_3243_ = lean_ctor_get(v_a_3239_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v_a_3239_);
if (v_isSharedCheck_3267_ == 0)
{
lean_object* v_unused_3268_; 
v_unused_3268_ = lean_ctor_get(v_a_3239_, 1);
lean_dec(v_unused_3268_);
v___x_3245_ = v_a_3239_;
v_isShared_3246_ = v_isSharedCheck_3267_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_fst_3243_);
lean_dec(v_a_3239_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3267_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
if (lean_obj_tag(v_fst_3243_) == 0)
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3250_; 
lean_del_object(v___x_3241_);
v___x_3247_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3248_ = l_Lean_MessageData_ofName(v___x_3232_);
lean_inc_ref(v___x_3248_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set_tag(v___x_3245_, 7);
lean_ctor_set(v___x_3245_, 1, v___x_3248_);
lean_ctor_set(v___x_3245_, 0, v___x_3247_);
v___x_3250_ = v___x_3245_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3262_, 1, v___x_3248_);
v___x_3250_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3251_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3250_);
lean_ctor_set(v___x_3252_, 1, v___x_3251_);
v___x_3253_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3254_ = l_Lean_indentD(v___x_3253_);
v___x_3255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3252_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___x_3256_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3255_);
lean_ctor_set(v___x_3257_, 1, v___x_3256_);
v___x_3258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3257_);
lean_ctor_set(v___x_3258_, 1, v___x_3248_);
v___x_3259_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3258_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
v___x_3261_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3260_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3261_;
}
}
else
{
lean_object* v_val_3263_; lean_object* v___x_3265_; 
lean_del_object(v___x_3245_);
lean_dec(v___x_3232_);
lean_dec(v_stx_2367_);
v_val_3263_ = lean_ctor_get(v_fst_3243_, 0);
lean_inc(v_val_3263_);
lean_dec_ref_known(v_fst_3243_, 1);
if (v_isShared_3242_ == 0)
{
lean_ctor_set(v___x_3241_, 0, v_val_3263_);
v___x_3265_ = v___x_3241_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_val_3263_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
}
}
else
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3277_; 
lean_dec(v___x_3232_);
lean_dec(v_stx_2367_);
v_a_3270_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3272_ = v___x_3238_;
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_3238_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3275_; 
if (v_isShared_3273_ == 0)
{
v___x_3275_ = v___x_3272_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3270_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
}
else
{
lean_object* v___x_3278_; lean_object* v___x_3280_; 
lean_dec(v_stx_2367_);
v___x_3278_ = l_Lean_Syntax_getArg(v___x_3229_, v___x_3153_);
lean_dec(v___x_3229_);
if (v_isShared_3152_ == 0)
{
lean_ctor_set(v___x_3151_, 0, v___x_3278_);
v___x_3280_ = v___x_3151_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3278_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
v_finSeq_x3f_3156_ = v___x_3280_;
v___y_3157_ = v_a_2368_;
v___y_3158_ = v_a_2369_;
v___y_3159_ = v_a_2370_;
v___y_3160_ = v_a_2371_;
v___y_3161_ = v_a_2372_;
v___y_3162_ = v_a_2373_;
goto v___jp_3155_;
}
}
}
}
else
{
lean_object* v___x_3282_; 
lean_dec(v___x_3179_);
lean_del_object(v___x_3151_);
lean_dec(v_stx_2367_);
v___x_3282_ = lean_box(0);
v_finSeq_x3f_3156_ = v___x_3282_;
v___y_3157_ = v_a_2368_;
v___y_3158_ = v_a_2369_;
v___y_3159_ = v_a_2370_;
v___y_3160_ = v_a_2371_;
v___y_3161_ = v_a_2372_;
v___y_3162_ = v_a_2373_;
goto v___jp_3155_;
}
v___jp_3155_:
{
lean_object* v___x_3163_; 
v___x_3163_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3154_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; size_t v_sz_3165_; lean_object* v___x_3166_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3164_);
lean_dec_ref_known(v___x_3163_, 1);
v_sz_3165_ = lean_array_size(v_val_3149_);
v___x_3166_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v_val_3149_, v_sz_3165_, v___x_3101_, v_a_3164_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
lean_dec(v_val_3149_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v___x_3168_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
lean_dec_ref_known(v___x_3166_, 1);
v___x_3168_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_finSeq_x3f_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3177_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3177_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3177_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3173_; lean_object* v___x_3175_; 
v___x_3173_ = l_Lean_Elab_Do_ControlInfo_sequence(v_a_3167_, v_a_3169_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3173_);
v___x_3175_ = v___x_3171_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v___x_3173_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
}
}
}
else
{
lean_dec(v_a_3167_);
return v___x_3168_;
}
}
else
{
lean_dec(v_finSeq_x3f_3156_);
return v___x_3166_;
}
}
else
{
lean_dec(v_finSeq_x3f_3156_);
lean_dec(v_val_3149_);
return v___x_3163_;
}
}
}
}
}
}
else
{
lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___y_3287_; lean_object* v___y_3288_; lean_object* v___y_3289_; lean_object* v___y_3290_; lean_object* v___y_3291_; lean_object* v___y_3292_; lean_object* v___y_3303_; lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___x_3408_; uint8_t v___x_3409_; 
v___x_3284_ = lean_unsigned_to_nat(0u);
v___x_3285_ = lean_unsigned_to_nat(1u);
v___x_3408_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3285_);
v___x_3409_ = l_Lean_Syntax_isNone(v___x_3408_);
if (v___x_3409_ == 0)
{
uint8_t v___x_3410_; 
lean_inc(v___x_3408_);
v___x_3410_ = l_Lean_Syntax_matchesNull(v___x_3408_, v___x_3285_);
if (v___x_3410_ == 0)
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v_env_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; 
lean_dec(v___x_3408_);
lean_inc_n(v_stx_2367_, 2);
v___x_3411_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3412_ = lean_st_ref_get(v_a_2373_);
v_env_3413_ = lean_ctor_get(v___x_3412_, 0);
lean_inc_ref(v_env_3413_);
lean_dec(v___x_3412_);
v___x_3414_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3415_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3414_, v_env_3413_, v___x_3411_);
v___x_3416_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3417_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3415_, v___x_3416_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3415_);
if (lean_obj_tag(v___x_3417_) == 0)
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3448_; 
v_a_3418_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3420_ = v___x_3417_;
v_isShared_3421_ = v_isSharedCheck_3448_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3417_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3448_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v_fst_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3446_; 
v_fst_3422_ = lean_ctor_get(v_a_3418_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v_a_3418_);
if (v_isSharedCheck_3446_ == 0)
{
lean_object* v_unused_3447_; 
v_unused_3447_ = lean_ctor_get(v_a_3418_, 1);
lean_dec(v_unused_3447_);
v___x_3424_ = v_a_3418_;
v_isShared_3425_ = v_isSharedCheck_3446_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_fst_3422_);
lean_dec(v_a_3418_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3446_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
if (lean_obj_tag(v_fst_3422_) == 0)
{
lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3429_; 
lean_del_object(v___x_3420_);
v___x_3426_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3427_ = l_Lean_MessageData_ofName(v___x_3411_);
lean_inc_ref(v___x_3427_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set_tag(v___x_3424_, 7);
lean_ctor_set(v___x_3424_, 1, v___x_3427_);
lean_ctor_set(v___x_3424_, 0, v___x_3426_);
v___x_3429_ = v___x_3424_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v___x_3426_);
lean_ctor_set(v_reuseFailAlloc_3441_, 1, v___x_3427_);
v___x_3429_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3430_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3429_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
v___x_3432_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3433_ = l_Lean_indentD(v___x_3432_);
v___x_3434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3431_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
v___x_3435_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3434_);
lean_ctor_set(v___x_3436_, 1, v___x_3435_);
v___x_3437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3436_);
lean_ctor_set(v___x_3437_, 1, v___x_3427_);
v___x_3438_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3437_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3439_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3440_;
}
}
else
{
lean_object* v_val_3442_; lean_object* v___x_3444_; 
lean_del_object(v___x_3424_);
lean_dec(v___x_3411_);
lean_dec(v_stx_2367_);
v_val_3442_ = lean_ctor_get(v_fst_3422_, 0);
lean_inc(v_val_3442_);
lean_dec_ref_known(v_fst_3422_, 1);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 0, v_val_3442_);
v___x_3444_ = v___x_3420_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_val_3442_);
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
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
lean_dec(v___x_3411_);
lean_dec(v_stx_2367_);
v_a_3449_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3417_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3417_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
else
{
lean_object* v___x_3457_; lean_object* v___x_3458_; uint8_t v___x_3459_; 
v___x_3457_ = l_Lean_Syntax_getArg(v___x_3408_, v___x_3284_);
lean_dec(v___x_3408_);
v___x_3458_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78));
v___x_3459_ = l_Lean_Syntax_isOfKind(v___x_3457_, v___x_3458_);
if (v___x_3459_ == 0)
{
lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v_env_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
lean_inc_n(v_stx_2367_, 2);
v___x_3460_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3461_ = lean_st_ref_get(v_a_2373_);
v_env_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc_ref(v_env_3462_);
lean_dec(v___x_3461_);
v___x_3463_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3464_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3463_, v_env_3462_, v___x_3460_);
v___x_3465_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3466_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3464_, v___x_3465_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3464_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3497_; 
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3469_ = v___x_3466_;
v_isShared_3470_ = v_isSharedCheck_3497_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3466_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3497_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v_fst_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3495_; 
v_fst_3471_ = lean_ctor_get(v_a_3467_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v_a_3467_);
if (v_isSharedCheck_3495_ == 0)
{
lean_object* v_unused_3496_; 
v_unused_3496_ = lean_ctor_get(v_a_3467_, 1);
lean_dec(v_unused_3496_);
v___x_3473_ = v_a_3467_;
v_isShared_3474_ = v_isSharedCheck_3495_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_fst_3471_);
lean_dec(v_a_3467_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3495_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
if (lean_obj_tag(v_fst_3471_) == 0)
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3478_; 
lean_del_object(v___x_3469_);
v___x_3475_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3476_ = l_Lean_MessageData_ofName(v___x_3460_);
lean_inc_ref(v___x_3476_);
if (v_isShared_3474_ == 0)
{
lean_ctor_set_tag(v___x_3473_, 7);
lean_ctor_set(v___x_3473_, 1, v___x_3476_);
lean_ctor_set(v___x_3473_, 0, v___x_3475_);
v___x_3478_ = v___x_3473_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v___x_3475_);
lean_ctor_set(v_reuseFailAlloc_3490_, 1, v___x_3476_);
v___x_3478_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3479_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3478_);
lean_ctor_set(v___x_3480_, 1, v___x_3479_);
v___x_3481_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3482_ = l_Lean_indentD(v___x_3481_);
v___x_3483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3480_);
lean_ctor_set(v___x_3483_, 1, v___x_3482_);
v___x_3484_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3485_, 0, v___x_3483_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
v___x_3486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3485_);
lean_ctor_set(v___x_3486_, 1, v___x_3476_);
v___x_3487_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3486_);
lean_ctor_set(v___x_3488_, 1, v___x_3487_);
v___x_3489_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3488_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3489_;
}
}
else
{
lean_object* v_val_3491_; lean_object* v___x_3493_; 
lean_del_object(v___x_3473_);
lean_dec(v___x_3460_);
lean_dec(v_stx_2367_);
v_val_3491_ = lean_ctor_get(v_fst_3471_, 0);
lean_inc(v_val_3491_);
lean_dec_ref_known(v_fst_3471_, 1);
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 0, v_val_3491_);
v___x_3493_ = v___x_3469_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_val_3491_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
}
}
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
lean_dec(v___x_3460_);
lean_dec(v_stx_2367_);
v_a_3498_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v___x_3466_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_3466_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_a_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
else
{
v___y_3303_ = v_a_2368_;
v___y_3304_ = v_a_2369_;
v___y_3305_ = v_a_2370_;
v___y_3306_ = v_a_2371_;
v___y_3307_ = v_a_2372_;
v___y_3308_ = v_a_2373_;
goto v___jp_3302_;
}
}
}
else
{
lean_dec(v___x_3408_);
v___y_3303_ = v_a_2368_;
v___y_3304_ = v_a_2369_;
v___y_3305_ = v_a_2370_;
v___y_3306_ = v_a_2371_;
v___y_3307_ = v_a_2372_;
v___y_3308_ = v_a_2373_;
goto v___jp_3302_;
}
v___jp_3286_:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3293_ = lean_unsigned_to_nat(3u);
v___x_3294_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3293_);
lean_dec(v_stx_2367_);
v___x_3295_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3294_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_);
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_object* v_a_3296_; uint8_t v_breaks_3297_; 
v_a_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_a_3296_);
lean_dec_ref_known(v___x_3295_, 1);
v_breaks_3297_ = lean_ctor_get_uint8(v_a_3296_, sizeof(void*)*2);
if (v_breaks_3297_ == 0)
{
uint8_t v_returnsEarly_3298_; lean_object* v_reassigns_3299_; 
v_returnsEarly_3298_ = lean_ctor_get_uint8(v_a_3296_, sizeof(void*)*2 + 2);
v_reassigns_3299_ = lean_ctor_get(v_a_3296_, 1);
lean_inc(v_reassigns_3299_);
lean_dec(v_a_3296_);
v___y_2700_ = v_reassigns_3299_;
v___y_2701_ = v___x_3284_;
v___y_2702_ = v_returnsEarly_3298_;
v___y_2703_ = v___x_2707_;
goto v___jp_2699_;
}
else
{
uint8_t v_returnsEarly_3300_; lean_object* v_reassigns_3301_; 
v_returnsEarly_3300_ = lean_ctor_get_uint8(v_a_3296_, sizeof(void*)*2 + 2);
v_reassigns_3301_ = lean_ctor_get(v_a_3296_, 1);
lean_inc(v_reassigns_3301_);
lean_dec(v_a_3296_);
v___y_2700_ = v_reassigns_3301_;
v___y_2701_ = v___x_3285_;
v___y_2702_ = v_returnsEarly_3300_;
v___y_2703_ = v___x_2698_;
goto v___jp_2699_;
}
}
else
{
return v___x_3295_;
}
}
v___jp_3302_:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; uint8_t v___x_3311_; 
v___x_3309_ = lean_unsigned_to_nat(2u);
v___x_3310_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3309_);
v___x_3311_ = l_Lean_Syntax_isNone(v___x_3310_);
if (v___x_3311_ == 0)
{
uint8_t v___x_3312_; 
lean_inc(v___x_3310_);
v___x_3312_ = l_Lean_Syntax_matchesNull(v___x_3310_, v___x_3285_);
if (v___x_3312_ == 0)
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v_env_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
lean_dec(v___x_3310_);
lean_inc_n(v_stx_2367_, 2);
v___x_3313_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3314_ = lean_st_ref_get(v___y_3308_);
v_env_3315_ = lean_ctor_get(v___x_3314_, 0);
lean_inc_ref(v_env_3315_);
lean_dec(v___x_3314_);
v___x_3316_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3317_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3316_, v_env_3315_, v___x_3313_);
v___x_3318_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3319_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3317_, v___x_3318_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
lean_dec(v___x_3317_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_object* v_a_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3350_; 
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3322_ = v___x_3319_;
v_isShared_3323_ = v_isSharedCheck_3350_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_a_3320_);
lean_dec(v___x_3319_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3350_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
lean_object* v_fst_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3348_; 
v_fst_3324_ = lean_ctor_get(v_a_3320_, 0);
v_isSharedCheck_3348_ = !lean_is_exclusive(v_a_3320_);
if (v_isSharedCheck_3348_ == 0)
{
lean_object* v_unused_3349_; 
v_unused_3349_ = lean_ctor_get(v_a_3320_, 1);
lean_dec(v_unused_3349_);
v___x_3326_ = v_a_3320_;
v_isShared_3327_ = v_isSharedCheck_3348_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_fst_3324_);
lean_dec(v_a_3320_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3348_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
if (lean_obj_tag(v_fst_3324_) == 0)
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3331_; 
lean_del_object(v___x_3322_);
v___x_3328_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3329_ = l_Lean_MessageData_ofName(v___x_3313_);
lean_inc_ref(v___x_3329_);
if (v_isShared_3327_ == 0)
{
lean_ctor_set_tag(v___x_3326_, 7);
lean_ctor_set(v___x_3326_, 1, v___x_3329_);
lean_ctor_set(v___x_3326_, 0, v___x_3328_);
v___x_3331_ = v___x_3326_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v___x_3328_);
lean_ctor_set(v_reuseFailAlloc_3343_, 1, v___x_3329_);
v___x_3331_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; 
v___x_3332_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3331_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3335_ = l_Lean_indentD(v___x_3334_);
v___x_3336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3333_);
lean_ctor_set(v___x_3336_, 1, v___x_3335_);
v___x_3337_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3336_);
lean_ctor_set(v___x_3338_, 1, v___x_3337_);
v___x_3339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v___x_3329_);
v___x_3340_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3339_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3341_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
return v___x_3342_;
}
}
else
{
lean_object* v_val_3344_; lean_object* v___x_3346_; 
lean_del_object(v___x_3326_);
lean_dec(v___x_3313_);
lean_dec(v_stx_2367_);
v_val_3344_ = lean_ctor_get(v_fst_3324_, 0);
lean_inc(v_val_3344_);
lean_dec_ref_known(v_fst_3324_, 1);
if (v_isShared_3323_ == 0)
{
lean_ctor_set(v___x_3322_, 0, v_val_3344_);
v___x_3346_ = v___x_3322_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_val_3344_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
}
}
else
{
lean_object* v_a_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3358_; 
lean_dec(v___x_3313_);
lean_dec(v_stx_2367_);
v_a_3351_ = lean_ctor_get(v___x_3319_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3353_ = v___x_3319_;
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_a_3351_);
lean_dec(v___x_3319_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3356_; 
if (v_isShared_3354_ == 0)
{
v___x_3356_ = v___x_3353_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_a_3351_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
}
}
else
{
lean_object* v___x_3359_; lean_object* v___x_3360_; uint8_t v___x_3361_; 
v___x_3359_ = l_Lean_Syntax_getArg(v___x_3310_, v___x_3284_);
lean_dec(v___x_3310_);
v___x_3360_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76));
v___x_3361_ = l_Lean_Syntax_isOfKind(v___x_3359_, v___x_3360_);
if (v___x_3361_ == 0)
{
lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v_env_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_inc_n(v_stx_2367_, 2);
v___x_3362_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3363_ = lean_st_ref_get(v___y_3308_);
v_env_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc_ref(v_env_3364_);
lean_dec(v___x_3363_);
v___x_3365_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3366_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3365_, v_env_3364_, v___x_3362_);
v___x_3367_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3368_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3366_, v___x_3367_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
lean_dec(v___x_3366_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3399_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3371_ = v___x_3368_;
v_isShared_3372_ = v_isSharedCheck_3399_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3368_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3399_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v_fst_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3397_; 
v_fst_3373_ = lean_ctor_get(v_a_3369_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v_a_3369_);
if (v_isSharedCheck_3397_ == 0)
{
lean_object* v_unused_3398_; 
v_unused_3398_ = lean_ctor_get(v_a_3369_, 1);
lean_dec(v_unused_3398_);
v___x_3375_ = v_a_3369_;
v_isShared_3376_ = v_isSharedCheck_3397_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_fst_3373_);
lean_dec(v_a_3369_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3397_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
if (lean_obj_tag(v_fst_3373_) == 0)
{
lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3380_; 
lean_del_object(v___x_3371_);
v___x_3377_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3378_ = l_Lean_MessageData_ofName(v___x_3362_);
lean_inc_ref(v___x_3378_);
if (v_isShared_3376_ == 0)
{
lean_ctor_set_tag(v___x_3375_, 7);
lean_ctor_set(v___x_3375_, 1, v___x_3378_);
lean_ctor_set(v___x_3375_, 0, v___x_3377_);
v___x_3380_ = v___x_3375_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3377_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v___x_3378_);
v___x_3380_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3381_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3380_);
lean_ctor_set(v___x_3382_, 1, v___x_3381_);
v___x_3383_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3384_ = l_Lean_indentD(v___x_3383_);
v___x_3385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3382_);
lean_ctor_set(v___x_3385_, 1, v___x_3384_);
v___x_3386_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3385_);
lean_ctor_set(v___x_3387_, 1, v___x_3386_);
v___x_3388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
lean_ctor_set(v___x_3388_, 1, v___x_3378_);
v___x_3389_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3388_);
lean_ctor_set(v___x_3390_, 1, v___x_3389_);
v___x_3391_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3390_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
return v___x_3391_;
}
}
else
{
lean_object* v_val_3393_; lean_object* v___x_3395_; 
lean_del_object(v___x_3375_);
lean_dec(v___x_3362_);
lean_dec(v_stx_2367_);
v_val_3393_ = lean_ctor_get(v_fst_3373_, 0);
lean_inc(v_val_3393_);
lean_dec_ref_known(v_fst_3373_, 1);
if (v_isShared_3372_ == 0)
{
lean_ctor_set(v___x_3371_, 0, v_val_3393_);
v___x_3395_ = v___x_3371_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_val_3393_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
}
}
else
{
lean_object* v_a_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3407_; 
lean_dec(v___x_3362_);
lean_dec(v_stx_2367_);
v_a_3400_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3407_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3402_ = v___x_3368_;
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_a_3400_);
lean_dec(v___x_3368_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v___x_3405_; 
if (v_isShared_3403_ == 0)
{
v___x_3405_ = v___x_3402_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_a_3400_);
v___x_3405_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
return v___x_3405_;
}
}
}
}
else
{
v___y_3287_ = v___y_3303_;
v___y_3288_ = v___y_3304_;
v___y_3289_ = v___y_3305_;
v___y_3290_ = v___y_3306_;
v___y_3291_ = v___y_3307_;
v___y_3292_ = v___y_3308_;
goto v___jp_3286_;
}
}
}
else
{
lean_dec(v___x_3310_);
v___y_3287_ = v___y_3303_;
v___y_3288_ = v___y_3304_;
v___y_3289_ = v___y_3305_;
v___y_3290_ = v___y_3306_;
v___y_3291_ = v___y_3307_;
v___y_3292_ = v___y_3308_;
goto v___jp_3286_;
}
}
}
}
else
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; lean_object* v___y_3540_; lean_object* v___y_3541_; lean_object* v___y_3542_; lean_object* v___y_3643_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; uint8_t v___x_3796_; 
v___x_3506_ = lean_unsigned_to_nat(0u);
v___x_3507_ = lean_unsigned_to_nat(1u);
v___x_3792_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3507_);
v___x_3793_ = l_Lean_Syntax_getArgs(v___x_3792_);
lean_dec(v___x_3792_);
v___x_3794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_3795_ = lean_array_get_size(v___x_3793_);
v___x_3796_ = lean_nat_dec_lt(v___x_3506_, v___x_3795_);
if (v___x_3796_ == 0)
{
lean_dec_ref(v___x_3793_);
v___y_3643_ = v___x_3794_;
goto v___jp_3642_;
}
else
{
lean_object* v___x_3797_; lean_object* v___x_3798_; size_t v___x_3799_; size_t v___x_3800_; lean_object* v___x_3801_; lean_object* v_snd_3802_; 
v___x_3797_ = lean_box(v___x_3796_);
v___x_3798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3797_);
lean_ctor_set(v___x_3798_, 1, v___x_3794_);
v___x_3799_ = ((size_t)0ULL);
v___x_3800_ = lean_usize_of_nat(v___x_3795_);
v___x_3801_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2698_, v___x_2696_, v___x_3793_, v___x_3799_, v___x_3800_, v___x_3798_);
lean_dec_ref(v___x_3793_);
v_snd_3802_ = lean_ctor_get(v___x_3801_, 1);
lean_inc(v_snd_3802_);
lean_dec_ref(v___x_3801_);
v___y_3643_ = v_snd_3802_;
goto v___jp_3642_;
}
v___jp_3508_:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3515_ = lean_unsigned_to_nat(5u);
v___x_3516_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3515_);
lean_dec(v_stx_2367_);
v___x_3517_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3516_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_);
if (lean_obj_tag(v___x_3517_) == 0)
{
lean_object* v_a_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3535_; 
v_a_3518_ = lean_ctor_get(v___x_3517_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3517_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3520_ = v___x_3517_;
v_isShared_3521_ = v_isSharedCheck_3535_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_a_3518_);
lean_dec(v___x_3517_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3535_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
uint8_t v_returnsEarly_3522_; lean_object* v_reassigns_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3533_; 
v_returnsEarly_3522_ = lean_ctor_get_uint8(v_a_3518_, sizeof(void*)*2 + 2);
v_reassigns_3523_ = lean_ctor_get(v_a_3518_, 1);
v_isSharedCheck_3533_ = !lean_is_exclusive(v_a_3518_);
if (v_isSharedCheck_3533_ == 0)
{
lean_object* v_unused_3534_; 
v_unused_3534_ = lean_ctor_get(v_a_3518_, 0);
lean_dec(v_unused_3534_);
v___x_3525_ = v_a_3518_;
v_isShared_3526_ = v_isSharedCheck_3533_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_reassigns_3523_);
lean_dec(v_a_3518_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3533_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3528_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 0, v___x_3507_);
v___x_3528_ = v___x_3525_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v___x_3507_);
lean_ctor_set(v_reuseFailAlloc_3532_, 1, v_reassigns_3523_);
lean_ctor_set_uint8(v_reuseFailAlloc_3532_, sizeof(void*)*2 + 2, v_returnsEarly_3522_);
v___x_3528_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
lean_object* v___x_3530_; 
lean_ctor_set_uint8(v___x_3528_, sizeof(void*)*2, v___x_2696_);
lean_ctor_set_uint8(v___x_3528_, sizeof(void*)*2 + 1, v___x_2696_);
lean_ctor_set_uint8(v___x_3528_, sizeof(void*)*2 + 3, v___x_2696_);
if (v_isShared_3521_ == 0)
{
lean_ctor_set(v___x_3520_, 0, v___x_3528_);
v___x_3530_ = v___x_3520_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
}
else
{
return v___x_3517_;
}
}
v___jp_3536_:
{
lean_object* v___x_3543_; lean_object* v___x_3544_; uint8_t v___x_3545_; 
v___x_3543_ = lean_unsigned_to_nat(3u);
v___x_3544_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3543_);
v___x_3545_ = l_Lean_Syntax_isNone(v___x_3544_);
if (v___x_3545_ == 0)
{
uint8_t v___x_3546_; 
lean_inc(v___x_3544_);
v___x_3546_ = l_Lean_Syntax_matchesNull(v___x_3544_, v___x_3507_);
if (v___x_3546_ == 0)
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v_env_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
lean_dec(v___x_3544_);
lean_inc_n(v_stx_2367_, 2);
v___x_3547_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3548_ = lean_st_ref_get(v___y_3542_);
v_env_3549_ = lean_ctor_get(v___x_3548_, 0);
lean_inc_ref(v_env_3549_);
lean_dec(v___x_3548_);
v___x_3550_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3551_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3550_, v_env_3549_, v___x_3547_);
v___x_3552_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3553_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3551_, v___x_3552_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_);
lean_dec(v___x_3551_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3584_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3556_ = v___x_3553_;
v_isShared_3557_ = v_isSharedCheck_3584_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3553_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3584_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v_fst_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3582_; 
v_fst_3558_ = lean_ctor_get(v_a_3554_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_a_3554_);
if (v_isSharedCheck_3582_ == 0)
{
lean_object* v_unused_3583_; 
v_unused_3583_ = lean_ctor_get(v_a_3554_, 1);
lean_dec(v_unused_3583_);
v___x_3560_ = v_a_3554_;
v_isShared_3561_ = v_isSharedCheck_3582_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_fst_3558_);
lean_dec(v_a_3554_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3582_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
if (lean_obj_tag(v_fst_3558_) == 0)
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3565_; 
lean_del_object(v___x_3556_);
v___x_3562_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3563_ = l_Lean_MessageData_ofName(v___x_3547_);
lean_inc_ref(v___x_3563_);
if (v_isShared_3561_ == 0)
{
lean_ctor_set_tag(v___x_3560_, 7);
lean_ctor_set(v___x_3560_, 1, v___x_3563_);
lean_ctor_set(v___x_3560_, 0, v___x_3562_);
v___x_3565_ = v___x_3560_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v___x_3562_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v___x_3563_);
v___x_3565_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3566_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3567_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3565_);
lean_ctor_set(v___x_3567_, 1, v___x_3566_);
v___x_3568_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3569_ = l_Lean_indentD(v___x_3568_);
v___x_3570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3567_);
lean_ctor_set(v___x_3570_, 1, v___x_3569_);
v___x_3571_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3570_);
lean_ctor_set(v___x_3572_, 1, v___x_3571_);
v___x_3573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
lean_ctor_set(v___x_3573_, 1, v___x_3563_);
v___x_3574_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3573_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v___x_3576_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3575_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_);
return v___x_3576_;
}
}
else
{
lean_object* v_val_3578_; lean_object* v___x_3580_; 
lean_del_object(v___x_3560_);
lean_dec(v___x_3547_);
lean_dec(v_stx_2367_);
v_val_3578_ = lean_ctor_get(v_fst_3558_, 0);
lean_inc(v_val_3578_);
lean_dec_ref_known(v_fst_3558_, 1);
if (v_isShared_3557_ == 0)
{
lean_ctor_set(v___x_3556_, 0, v_val_3578_);
v___x_3580_ = v___x_3556_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_val_3578_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
}
else
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3592_; 
lean_dec(v___x_3547_);
lean_dec(v_stx_2367_);
v_a_3585_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3587_ = v___x_3553_;
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v___x_3553_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3590_; 
if (v_isShared_3588_ == 0)
{
v___x_3590_ = v___x_3587_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_a_3585_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
}
else
{
lean_object* v___x_3593_; lean_object* v___x_3594_; uint8_t v___x_3595_; 
v___x_3593_ = l_Lean_Syntax_getArg(v___x_3544_, v___x_3506_);
lean_dec(v___x_3544_);
v___x_3594_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76));
v___x_3595_ = l_Lean_Syntax_isOfKind(v___x_3593_, v___x_3594_);
if (v___x_3595_ == 0)
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v_env_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
lean_inc_n(v_stx_2367_, 2);
v___x_3596_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3597_ = lean_st_ref_get(v___y_3542_);
v_env_3598_ = lean_ctor_get(v___x_3597_, 0);
lean_inc_ref(v_env_3598_);
lean_dec(v___x_3597_);
v___x_3599_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3600_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3599_, v_env_3598_, v___x_3596_);
v___x_3601_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3602_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3600_, v___x_3601_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_);
lean_dec(v___x_3600_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3633_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3605_ = v___x_3602_;
v_isShared_3606_ = v_isSharedCheck_3633_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3602_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3633_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v_fst_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3631_; 
v_fst_3607_ = lean_ctor_get(v_a_3603_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v_a_3603_);
if (v_isSharedCheck_3631_ == 0)
{
lean_object* v_unused_3632_; 
v_unused_3632_ = lean_ctor_get(v_a_3603_, 1);
lean_dec(v_unused_3632_);
v___x_3609_ = v_a_3603_;
v_isShared_3610_ = v_isSharedCheck_3631_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_fst_3607_);
lean_dec(v_a_3603_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3631_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
if (lean_obj_tag(v_fst_3607_) == 0)
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3614_; 
lean_del_object(v___x_3605_);
v___x_3611_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3612_ = l_Lean_MessageData_ofName(v___x_3596_);
lean_inc_ref(v___x_3612_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set_tag(v___x_3609_, 7);
lean_ctor_set(v___x_3609_, 1, v___x_3612_);
lean_ctor_set(v___x_3609_, 0, v___x_3611_);
v___x_3614_ = v___x_3609_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v___x_3611_);
lean_ctor_set(v_reuseFailAlloc_3626_, 1, v___x_3612_);
v___x_3614_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3615_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3616_, 0, v___x_3614_);
lean_ctor_set(v___x_3616_, 1, v___x_3615_);
v___x_3617_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3618_ = l_Lean_indentD(v___x_3617_);
v___x_3619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3616_);
lean_ctor_set(v___x_3619_, 1, v___x_3618_);
v___x_3620_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3619_);
lean_ctor_set(v___x_3621_, 1, v___x_3620_);
v___x_3622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3621_);
lean_ctor_set(v___x_3622_, 1, v___x_3612_);
v___x_3623_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3622_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3624_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_);
return v___x_3625_;
}
}
else
{
lean_object* v_val_3627_; lean_object* v___x_3629_; 
lean_del_object(v___x_3609_);
lean_dec(v___x_3596_);
lean_dec(v_stx_2367_);
v_val_3627_ = lean_ctor_get(v_fst_3607_, 0);
lean_inc(v_val_3627_);
lean_dec_ref_known(v_fst_3607_, 1);
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 0, v_val_3627_);
v___x_3629_ = v___x_3605_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_val_3627_);
v___x_3629_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
return v___x_3629_;
}
}
}
}
}
else
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
lean_dec(v___x_3596_);
lean_dec(v_stx_2367_);
v_a_3634_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3602_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v___x_3602_);
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
else
{
v___y_3509_ = v___y_3537_;
v___y_3510_ = v___y_3538_;
v___y_3511_ = v___y_3539_;
v___y_3512_ = v___y_3540_;
v___y_3513_ = v___y_3541_;
v___y_3514_ = v___y_3542_;
goto v___jp_3508_;
}
}
}
else
{
lean_dec(v___x_3544_);
v___y_3509_ = v___y_3537_;
v___y_3510_ = v___y_3538_;
v___y_3511_ = v___y_3539_;
v___y_3512_ = v___y_3540_;
v___y_3513_ = v___y_3541_;
v___y_3514_ = v___y_3542_;
goto v___jp_3508_;
}
}
v___jp_3642_:
{
size_t v_sz_3644_; size_t v___x_3645_; lean_object* v___x_3646_; 
v_sz_3644_ = lean_array_size(v___y_3643_);
v___x_3645_ = ((size_t)0ULL);
v___x_3646_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_sz_3644_, v___x_3645_, v___y_3643_);
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v_env_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
lean_inc_n(v_stx_2367_, 2);
v___x_3647_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3648_ = lean_st_ref_get(v_a_2373_);
v_env_3649_ = lean_ctor_get(v___x_3648_, 0);
lean_inc_ref(v_env_3649_);
lean_dec(v___x_3648_);
v___x_3650_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3651_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3650_, v_env_3649_, v___x_3647_);
v___x_3652_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3653_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3651_, v___x_3652_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3651_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3684_; 
v_a_3654_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3656_ = v___x_3653_;
v_isShared_3657_ = v_isSharedCheck_3684_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3653_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3684_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v_fst_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3682_; 
v_fst_3658_ = lean_ctor_get(v_a_3654_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v_a_3654_);
if (v_isSharedCheck_3682_ == 0)
{
lean_object* v_unused_3683_; 
v_unused_3683_ = lean_ctor_get(v_a_3654_, 1);
lean_dec(v_unused_3683_);
v___x_3660_ = v_a_3654_;
v_isShared_3661_ = v_isSharedCheck_3682_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_fst_3658_);
lean_dec(v_a_3654_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3682_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
if (lean_obj_tag(v_fst_3658_) == 0)
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3665_; 
lean_del_object(v___x_3656_);
v___x_3662_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3663_ = l_Lean_MessageData_ofName(v___x_3647_);
lean_inc_ref(v___x_3663_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set_tag(v___x_3660_, 7);
lean_ctor_set(v___x_3660_, 1, v___x_3663_);
lean_ctor_set(v___x_3660_, 0, v___x_3662_);
v___x_3665_ = v___x_3660_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3662_);
lean_ctor_set(v_reuseFailAlloc_3677_, 1, v___x_3663_);
v___x_3665_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3666_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3665_);
lean_ctor_set(v___x_3667_, 1, v___x_3666_);
v___x_3668_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3669_ = l_Lean_indentD(v___x_3668_);
v___x_3670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3667_);
lean_ctor_set(v___x_3670_, 1, v___x_3669_);
v___x_3671_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3670_);
lean_ctor_set(v___x_3672_, 1, v___x_3671_);
v___x_3673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3673_, 0, v___x_3672_);
lean_ctor_set(v___x_3673_, 1, v___x_3663_);
v___x_3674_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3673_);
lean_ctor_set(v___x_3675_, 1, v___x_3674_);
v___x_3676_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3675_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3676_;
}
}
else
{
lean_object* v_val_3678_; lean_object* v___x_3680_; 
lean_del_object(v___x_3660_);
lean_dec(v___x_3647_);
lean_dec(v_stx_2367_);
v_val_3678_ = lean_ctor_get(v_fst_3658_, 0);
lean_inc(v_val_3678_);
lean_dec_ref_known(v_fst_3658_, 1);
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 0, v_val_3678_);
v___x_3680_ = v___x_3656_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_val_3678_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
}
else
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
lean_dec(v___x_3647_);
lean_dec(v_stx_2367_);
v_a_3685_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3687_ = v___x_3653_;
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3653_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3685_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
else
{
lean_object* v___x_3693_; lean_object* v___x_3694_; uint8_t v___x_3695_; 
lean_dec_ref_known(v___x_3646_, 1);
v___x_3693_ = lean_unsigned_to_nat(2u);
v___x_3694_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3693_);
v___x_3695_ = l_Lean_Syntax_isNone(v___x_3694_);
if (v___x_3695_ == 0)
{
uint8_t v___x_3696_; 
lean_inc(v___x_3694_);
v___x_3696_ = l_Lean_Syntax_matchesNull(v___x_3694_, v___x_3507_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v_env_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
lean_dec(v___x_3694_);
lean_inc_n(v_stx_2367_, 2);
v___x_3697_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3698_ = lean_st_ref_get(v_a_2373_);
v_env_3699_ = lean_ctor_get(v___x_3698_, 0);
lean_inc_ref(v_env_3699_);
lean_dec(v___x_3698_);
v___x_3700_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3701_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3700_, v_env_3699_, v___x_3697_);
v___x_3702_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3703_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3701_, v___x_3702_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3701_);
if (lean_obj_tag(v___x_3703_) == 0)
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3734_; 
v_a_3704_ = lean_ctor_get(v___x_3703_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3703_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3706_ = v___x_3703_;
v_isShared_3707_ = v_isSharedCheck_3734_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3703_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3734_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v_fst_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3732_; 
v_fst_3708_ = lean_ctor_get(v_a_3704_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_a_3704_);
if (v_isSharedCheck_3732_ == 0)
{
lean_object* v_unused_3733_; 
v_unused_3733_ = lean_ctor_get(v_a_3704_, 1);
lean_dec(v_unused_3733_);
v___x_3710_ = v_a_3704_;
v_isShared_3711_ = v_isSharedCheck_3732_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_fst_3708_);
lean_dec(v_a_3704_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3732_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
if (lean_obj_tag(v_fst_3708_) == 0)
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3715_; 
lean_del_object(v___x_3706_);
v___x_3712_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3713_ = l_Lean_MessageData_ofName(v___x_3697_);
lean_inc_ref(v___x_3713_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set_tag(v___x_3710_, 7);
lean_ctor_set(v___x_3710_, 1, v___x_3713_);
lean_ctor_set(v___x_3710_, 0, v___x_3712_);
v___x_3715_ = v___x_3710_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3712_);
lean_ctor_set(v_reuseFailAlloc_3727_, 1, v___x_3713_);
v___x_3715_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___x_3716_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3715_);
lean_ctor_set(v___x_3717_, 1, v___x_3716_);
v___x_3718_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3719_ = l_Lean_indentD(v___x_3718_);
v___x_3720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3720_, 0, v___x_3717_);
lean_ctor_set(v___x_3720_, 1, v___x_3719_);
v___x_3721_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3720_);
lean_ctor_set(v___x_3722_, 1, v___x_3721_);
v___x_3723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3722_);
lean_ctor_set(v___x_3723_, 1, v___x_3713_);
v___x_3724_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3723_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
v___x_3726_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3725_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3726_;
}
}
else
{
lean_object* v_val_3728_; lean_object* v___x_3730_; 
lean_del_object(v___x_3710_);
lean_dec(v___x_3697_);
lean_dec(v_stx_2367_);
v_val_3728_ = lean_ctor_get(v_fst_3708_, 0);
lean_inc(v_val_3728_);
lean_dec_ref_known(v_fst_3708_, 1);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 0, v_val_3728_);
v___x_3730_ = v___x_3706_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v_val_3728_);
v___x_3730_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
return v___x_3730_;
}
}
}
}
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec(v___x_3697_);
lean_dec(v_stx_2367_);
v_a_3735_ = lean_ctor_get(v___x_3703_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3703_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3703_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3703_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3735_);
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
else
{
lean_object* v___x_3743_; lean_object* v___x_3744_; uint8_t v___x_3745_; 
v___x_3743_ = l_Lean_Syntax_getArg(v___x_3694_, v___x_3506_);
lean_dec(v___x_3694_);
v___x_3744_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78));
v___x_3745_ = l_Lean_Syntax_isOfKind(v___x_3743_, v___x_3744_);
if (v___x_3745_ == 0)
{
lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v_env_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
lean_inc_n(v_stx_2367_, 2);
v___x_3746_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3747_ = lean_st_ref_get(v_a_2373_);
v_env_3748_ = lean_ctor_get(v___x_3747_, 0);
lean_inc_ref(v_env_3748_);
lean_dec(v___x_3747_);
v___x_3749_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3750_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3749_, v_env_3748_, v___x_3746_);
v___x_3751_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3752_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3750_, v___x_3751_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3750_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3783_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3755_ = v___x_3752_;
v_isShared_3756_ = v_isSharedCheck_3783_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_a_3753_);
lean_dec(v___x_3752_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3783_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v_fst_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3781_; 
v_fst_3757_ = lean_ctor_get(v_a_3753_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v_a_3753_);
if (v_isSharedCheck_3781_ == 0)
{
lean_object* v_unused_3782_; 
v_unused_3782_ = lean_ctor_get(v_a_3753_, 1);
lean_dec(v_unused_3782_);
v___x_3759_ = v_a_3753_;
v_isShared_3760_ = v_isSharedCheck_3781_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_fst_3757_);
lean_dec(v_a_3753_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3781_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
if (lean_obj_tag(v_fst_3757_) == 0)
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3764_; 
lean_del_object(v___x_3755_);
v___x_3761_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3762_ = l_Lean_MessageData_ofName(v___x_3746_);
lean_inc_ref(v___x_3762_);
if (v_isShared_3760_ == 0)
{
lean_ctor_set_tag(v___x_3759_, 7);
lean_ctor_set(v___x_3759_, 1, v___x_3762_);
lean_ctor_set(v___x_3759_, 0, v___x_3761_);
v___x_3764_ = v___x_3759_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v___x_3761_);
lean_ctor_set(v_reuseFailAlloc_3776_, 1, v___x_3762_);
v___x_3764_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3765_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3764_);
lean_ctor_set(v___x_3766_, 1, v___x_3765_);
v___x_3767_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3768_ = l_Lean_indentD(v___x_3767_);
v___x_3769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3766_);
lean_ctor_set(v___x_3769_, 1, v___x_3768_);
v___x_3770_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3769_);
lean_ctor_set(v___x_3771_, 1, v___x_3770_);
v___x_3772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3771_);
lean_ctor_set(v___x_3772_, 1, v___x_3762_);
v___x_3773_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3774_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3772_);
lean_ctor_set(v___x_3774_, 1, v___x_3773_);
v___x_3775_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3774_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3775_;
}
}
else
{
lean_object* v_val_3777_; lean_object* v___x_3779_; 
lean_del_object(v___x_3759_);
lean_dec(v___x_3746_);
lean_dec(v_stx_2367_);
v_val_3777_ = lean_ctor_get(v_fst_3757_, 0);
lean_inc(v_val_3777_);
lean_dec_ref_known(v_fst_3757_, 1);
if (v_isShared_3756_ == 0)
{
lean_ctor_set(v___x_3755_, 0, v_val_3777_);
v___x_3779_ = v___x_3755_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_val_3777_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
return v___x_3779_;
}
}
}
}
}
else
{
lean_object* v_a_3784_; lean_object* v___x_3786_; uint8_t v_isShared_3787_; uint8_t v_isSharedCheck_3791_; 
lean_dec(v___x_3746_);
lean_dec(v_stx_2367_);
v_a_3784_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3786_ = v___x_3752_;
v_isShared_3787_ = v_isSharedCheck_3791_;
goto v_resetjp_3785_;
}
else
{
lean_inc(v_a_3784_);
lean_dec(v___x_3752_);
v___x_3786_ = lean_box(0);
v_isShared_3787_ = v_isSharedCheck_3791_;
goto v_resetjp_3785_;
}
v_resetjp_3785_:
{
lean_object* v___x_3789_; 
if (v_isShared_3787_ == 0)
{
v___x_3789_ = v___x_3786_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_a_3784_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
return v___x_3789_;
}
}
}
}
else
{
v___y_3537_ = v_a_2368_;
v___y_3538_ = v_a_2369_;
v___y_3539_ = v_a_2370_;
v___y_3540_ = v_a_2371_;
v___y_3541_ = v_a_2372_;
v___y_3542_ = v_a_2373_;
goto v___jp_3536_;
}
}
}
else
{
lean_dec(v___x_3694_);
v___y_3537_ = v_a_2368_;
v___y_3538_ = v_a_2369_;
v___y_3539_ = v_a_2370_;
v___y_3540_ = v_a_2371_;
v___y_3541_ = v_a_2372_;
v___y_3542_ = v_a_2373_;
goto v___jp_3536_;
}
}
}
}
v___jp_2699_:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2704_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2704_, 0, v___y_2701_);
lean_ctor_set(v___x_2704_, 1, v___y_2700_);
lean_ctor_set_uint8(v___x_2704_, sizeof(void*)*2, v___x_2698_);
lean_ctor_set_uint8(v___x_2704_, sizeof(void*)*2 + 1, v___x_2698_);
lean_ctor_set_uint8(v___x_2704_, sizeof(void*)*2 + 2, v___y_2702_);
lean_ctor_set_uint8(v___x_2704_, sizeof(void*)*2 + 3, v___y_2703_);
v___x_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2704_);
return v___x_2705_;
}
}
else
{
lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3803_ = lean_unsigned_to_nat(1u);
v___x_3804_ = lean_unsigned_to_nat(3u);
v___x_3805_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3804_);
lean_dec(v_stx_2367_);
v___x_3806_ = l_Lean_NameSet_empty;
v___x_3807_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_3807_, 0, v___x_3803_);
lean_ctor_set(v___x_3807_, 1, v___x_3806_);
lean_ctor_set_uint8(v___x_3807_, sizeof(void*)*2, v___x_2694_);
lean_ctor_set_uint8(v___x_3807_, sizeof(void*)*2 + 1, v___x_2694_);
lean_ctor_set_uint8(v___x_3807_, sizeof(void*)*2 + 2, v___x_2694_);
lean_ctor_set_uint8(v___x_3807_, sizeof(void*)*2 + 3, v___x_2694_);
v___x_3808_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3805_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_3808_) == 0)
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3817_; 
v_a_3809_ = lean_ctor_get(v___x_3808_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3808_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3811_ = v___x_3808_;
v_isShared_3812_ = v_isSharedCheck_3817_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v___x_3808_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3817_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3813_; lean_object* v___x_3815_; 
v___x_3813_ = l_Lean_Elab_Do_ControlInfo_alternative(v___x_3807_, v_a_3809_);
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 0, v___x_3813_);
v___x_3815_ = v___x_3811_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v___x_3813_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
else
{
lean_dec_ref_known(v___x_3807_, 2);
return v___x_3808_;
}
}
}
else
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; size_t v_sz_3821_; size_t v___x_3822_; lean_object* v___x_3823_; 
v___x_3818_ = lean_unsigned_to_nat(4u);
v___x_3819_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3818_);
v___x_3820_ = l_Lean_Syntax_getArgs(v___x_3819_);
lean_dec(v___x_3819_);
v_sz_3821_ = lean_array_size(v___x_3820_);
v___x_3822_ = ((size_t)0ULL);
v___x_3823_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_sz_3821_, v___x_3822_, v___x_3820_);
if (lean_obj_tag(v___x_3823_) == 0)
{
lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v_env_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; 
lean_inc_n(v_stx_2367_, 2);
v___x_3824_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3825_ = lean_st_ref_get(v_a_2373_);
v_env_3826_ = lean_ctor_get(v___x_3825_, 0);
lean_inc_ref(v_env_3826_);
lean_dec(v___x_3825_);
v___x_3827_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3828_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3827_, v_env_3826_, v___x_3824_);
v___x_3829_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3830_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3828_, v___x_3829_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3828_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v_a_3831_; lean_object* v___x_3833_; uint8_t v_isShared_3834_; uint8_t v_isSharedCheck_3861_; 
v_a_3831_ = lean_ctor_get(v___x_3830_, 0);
v_isSharedCheck_3861_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3833_ = v___x_3830_;
v_isShared_3834_ = v_isSharedCheck_3861_;
goto v_resetjp_3832_;
}
else
{
lean_inc(v_a_3831_);
lean_dec(v___x_3830_);
v___x_3833_ = lean_box(0);
v_isShared_3834_ = v_isSharedCheck_3861_;
goto v_resetjp_3832_;
}
v_resetjp_3832_:
{
lean_object* v_fst_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3859_; 
v_fst_3835_ = lean_ctor_get(v_a_3831_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v_a_3831_);
if (v_isSharedCheck_3859_ == 0)
{
lean_object* v_unused_3860_; 
v_unused_3860_ = lean_ctor_get(v_a_3831_, 1);
lean_dec(v_unused_3860_);
v___x_3837_ = v_a_3831_;
v_isShared_3838_ = v_isSharedCheck_3859_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_fst_3835_);
lean_dec(v_a_3831_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3859_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
if (lean_obj_tag(v_fst_3835_) == 0)
{
lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3842_; 
lean_del_object(v___x_3833_);
v___x_3839_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3840_ = l_Lean_MessageData_ofName(v___x_3824_);
lean_inc_ref(v___x_3840_);
if (v_isShared_3838_ == 0)
{
lean_ctor_set_tag(v___x_3837_, 7);
lean_ctor_set(v___x_3837_, 1, v___x_3840_);
lean_ctor_set(v___x_3837_, 0, v___x_3839_);
v___x_3842_ = v___x_3837_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3839_);
lean_ctor_set(v_reuseFailAlloc_3854_, 1, v___x_3840_);
v___x_3842_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; 
v___x_3843_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3844_, 0, v___x_3842_);
lean_ctor_set(v___x_3844_, 1, v___x_3843_);
v___x_3845_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3846_ = l_Lean_indentD(v___x_3845_);
v___x_3847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3844_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
v___x_3848_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3847_);
lean_ctor_set(v___x_3849_, 1, v___x_3848_);
v___x_3850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3849_);
lean_ctor_set(v___x_3850_, 1, v___x_3840_);
v___x_3851_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3852_, 0, v___x_3850_);
lean_ctor_set(v___x_3852_, 1, v___x_3851_);
v___x_3853_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3852_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3853_;
}
}
else
{
lean_object* v_val_3855_; lean_object* v___x_3857_; 
lean_del_object(v___x_3837_);
lean_dec(v___x_3824_);
lean_dec(v_stx_2367_);
v_val_3855_ = lean_ctor_get(v_fst_3835_, 0);
lean_inc(v_val_3855_);
lean_dec_ref_known(v_fst_3835_, 1);
if (v_isShared_3834_ == 0)
{
lean_ctor_set(v___x_3833_, 0, v_val_3855_);
v___x_3857_ = v___x_3833_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_val_3855_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
lean_dec(v___x_3824_);
lean_dec(v_stx_2367_);
v_a_3862_ = lean_ctor_get(v___x_3830_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3830_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3830_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
else
{
lean_object* v_val_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3957_; 
v_val_3870_ = lean_ctor_get(v___x_3823_, 0);
v_isSharedCheck_3957_ = !lean_is_exclusive(v___x_3823_);
if (v_isSharedCheck_3957_ == 0)
{
v___x_3872_ = v___x_3823_;
v_isShared_3873_ = v_isSharedCheck_3957_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_val_3870_);
lean_dec(v___x_3823_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3957_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v_elseSeq_x3f_3877_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___y_3883_; lean_object* v___x_3900_; lean_object* v___x_3901_; uint8_t v___x_3902_; 
v___x_3874_ = lean_unsigned_to_nat(3u);
v___x_3875_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3874_);
v___x_3900_ = lean_unsigned_to_nat(5u);
v___x_3901_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3900_);
v___x_3902_ = l_Lean_Syntax_isNone(v___x_3901_);
if (v___x_3902_ == 0)
{
lean_object* v___x_3903_; uint8_t v___x_3904_; 
v___x_3903_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3901_);
v___x_3904_ = l_Lean_Syntax_matchesNull(v___x_3901_, v___x_3903_);
if (v___x_3904_ == 0)
{
lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v_env_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; 
lean_dec(v___x_3901_);
lean_dec(v___x_3875_);
lean_del_object(v___x_3872_);
lean_dec(v_val_3870_);
lean_inc_n(v_stx_2367_, 2);
v___x_3905_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3906_ = lean_st_ref_get(v_a_2373_);
v_env_3907_ = lean_ctor_get(v___x_3906_, 0);
lean_inc_ref(v_env_3907_);
lean_dec(v___x_3906_);
v___x_3908_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3909_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3908_, v_env_3907_, v___x_3905_);
v___x_3910_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3911_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3909_, v___x_3910_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_3909_);
if (lean_obj_tag(v___x_3911_) == 0)
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3942_; 
v_a_3912_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3914_ = v___x_3911_;
v_isShared_3915_ = v_isSharedCheck_3942_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3911_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3942_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v_fst_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3940_; 
v_fst_3916_ = lean_ctor_get(v_a_3912_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_a_3912_);
if (v_isSharedCheck_3940_ == 0)
{
lean_object* v_unused_3941_; 
v_unused_3941_ = lean_ctor_get(v_a_3912_, 1);
lean_dec(v_unused_3941_);
v___x_3918_ = v_a_3912_;
v_isShared_3919_ = v_isSharedCheck_3940_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_fst_3916_);
lean_dec(v_a_3912_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3940_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
if (lean_obj_tag(v_fst_3916_) == 0)
{
lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3923_; 
lean_del_object(v___x_3914_);
v___x_3920_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3921_ = l_Lean_MessageData_ofName(v___x_3905_);
lean_inc_ref(v___x_3921_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set_tag(v___x_3918_, 7);
lean_ctor_set(v___x_3918_, 1, v___x_3921_);
lean_ctor_set(v___x_3918_, 0, v___x_3920_);
v___x_3923_ = v___x_3918_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v___x_3920_);
lean_ctor_set(v_reuseFailAlloc_3935_, 1, v___x_3921_);
v___x_3923_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3924_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3923_);
lean_ctor_set(v___x_3925_, 1, v___x_3924_);
v___x_3926_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3927_ = l_Lean_indentD(v___x_3926_);
v___x_3928_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3925_);
lean_ctor_set(v___x_3928_, 1, v___x_3927_);
v___x_3929_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3928_);
lean_ctor_set(v___x_3930_, 1, v___x_3929_);
v___x_3931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
lean_ctor_set(v___x_3931_, 1, v___x_3921_);
v___x_3932_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3931_);
lean_ctor_set(v___x_3933_, 1, v___x_3932_);
v___x_3934_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3933_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_3934_;
}
}
else
{
lean_object* v_val_3936_; lean_object* v___x_3938_; 
lean_del_object(v___x_3918_);
lean_dec(v___x_3905_);
lean_dec(v_stx_2367_);
v_val_3936_ = lean_ctor_get(v_fst_3916_, 0);
lean_inc(v_val_3936_);
lean_dec_ref_known(v_fst_3916_, 1);
if (v_isShared_3915_ == 0)
{
lean_ctor_set(v___x_3914_, 0, v_val_3936_);
v___x_3938_ = v___x_3914_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_val_3936_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
}
else
{
lean_object* v_a_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3950_; 
lean_dec(v___x_3905_);
lean_dec(v_stx_2367_);
v_a_3943_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3945_ = v___x_3911_;
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_a_3943_);
lean_dec(v___x_3911_);
v___x_3945_ = lean_box(0);
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
v_resetjp_3944_:
{
lean_object* v___x_3948_; 
if (v_isShared_3946_ == 0)
{
v___x_3948_ = v___x_3945_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3943_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
return v___x_3948_;
}
}
}
}
else
{
lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3954_; 
lean_dec(v_stx_2367_);
v___x_3951_ = lean_unsigned_to_nat(1u);
v___x_3952_ = l_Lean_Syntax_getArg(v___x_3901_, v___x_3951_);
lean_dec(v___x_3901_);
if (v_isShared_3873_ == 0)
{
lean_ctor_set(v___x_3872_, 0, v___x_3952_);
v___x_3954_ = v___x_3872_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v___x_3952_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
v_elseSeq_x3f_3877_ = v___x_3954_;
v___y_3878_ = v_a_2368_;
v___y_3879_ = v_a_2369_;
v___y_3880_ = v_a_2370_;
v___y_3881_ = v_a_2371_;
v___y_3882_ = v_a_2372_;
v___y_3883_ = v_a_2373_;
goto v___jp_3876_;
}
}
}
else
{
lean_object* v___x_3956_; 
lean_dec(v___x_3901_);
lean_del_object(v___x_3872_);
lean_dec(v_stx_2367_);
v___x_3956_ = lean_box(0);
v_elseSeq_x3f_3877_ = v___x_3956_;
v___y_3878_ = v_a_2368_;
v___y_3879_ = v_a_2369_;
v___y_3880_ = v_a_2370_;
v___y_3881_ = v_a_2371_;
v___y_3882_ = v_a_2372_;
v___y_3883_ = v_a_2373_;
goto v___jp_3876_;
}
v___jp_3876_:
{
lean_object* v___x_3884_; 
v___x_3884_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_elseSeq_x3f_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_);
if (lean_obj_tag(v___x_3884_) == 0)
{
lean_object* v_a_3885_; lean_object* v___x_3886_; size_t v_sz_3887_; lean_object* v___x_3888_; 
v_a_3885_ = lean_ctor_get(v___x_3884_, 0);
lean_inc(v_a_3885_);
lean_dec_ref_known(v___x_3884_, 1);
v___x_3886_ = l_Array_reverse___redArg(v_val_3870_);
v_sz_3887_ = lean_array_size(v___x_3886_);
v___x_3888_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v___x_3886_, v_sz_3887_, v___x_3822_, v_a_3885_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_);
lean_dec_ref(v___x_3886_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v_a_3889_; lean_object* v___x_3890_; 
v_a_3889_ = lean_ctor_get(v___x_3888_, 0);
lean_inc(v_a_3889_);
lean_dec_ref_known(v___x_3888_, 1);
v___x_3890_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3875_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_);
if (lean_obj_tag(v___x_3890_) == 0)
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3899_; 
v_a_3891_ = lean_ctor_get(v___x_3890_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3890_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3893_ = v___x_3890_;
v_isShared_3894_ = v_isSharedCheck_3899_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v___x_3890_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3899_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3895_; lean_object* v___x_3897_; 
v___x_3895_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_3891_, v_a_3889_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 0, v___x_3895_);
v___x_3897_ = v___x_3893_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v___x_3895_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
}
else
{
lean_dec(v_a_3889_);
return v___x_3890_;
}
}
else
{
lean_dec(v___x_3875_);
return v___x_3888_;
}
}
else
{
lean_dec(v___x_3875_);
lean_dec(v_val_3870_);
return v___x_3884_;
}
}
}
}
}
}
else
{
lean_object* v___x_3958_; lean_object* v___y_3960_; lean_object* v___y_3961_; lean_object* v___y_3962_; lean_object* v___y_3963_; lean_object* v___y_3964_; lean_object* v___y_3965_; lean_object* v___x_4022_; lean_object* v___y_4024_; lean_object* v___y_4025_; lean_object* v___y_4026_; lean_object* v___y_4027_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___x_4129_; uint8_t v___x_4130_; 
v___x_3958_ = lean_unsigned_to_nat(0u);
v___x_4022_ = lean_unsigned_to_nat(1u);
v___x_4129_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4022_);
v___x_4130_ = l_Lean_Syntax_isNone(v___x_4129_);
if (v___x_4130_ == 0)
{
uint8_t v___x_4131_; 
lean_inc(v___x_4129_);
v___x_4131_ = l_Lean_Syntax_matchesNull(v___x_4129_, v___x_4022_);
if (v___x_4131_ == 0)
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v_env_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; 
lean_dec(v___x_4129_);
lean_inc_n(v_stx_2367_, 2);
v___x_4132_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4133_ = lean_st_ref_get(v_a_2373_);
v_env_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc_ref(v_env_4134_);
lean_dec(v___x_4133_);
v___x_4135_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4136_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4135_, v_env_4134_, v___x_4132_);
v___x_4137_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4138_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4136_, v___x_4137_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4136_);
if (lean_obj_tag(v___x_4138_) == 0)
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4169_; 
v_a_4139_ = lean_ctor_get(v___x_4138_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v___x_4138_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4141_ = v___x_4138_;
v_isShared_4142_ = v_isSharedCheck_4169_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v___x_4138_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4169_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v_fst_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4167_; 
v_fst_4143_ = lean_ctor_get(v_a_4139_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_a_4139_);
if (v_isSharedCheck_4167_ == 0)
{
lean_object* v_unused_4168_; 
v_unused_4168_ = lean_ctor_get(v_a_4139_, 1);
lean_dec(v_unused_4168_);
v___x_4145_ = v_a_4139_;
v_isShared_4146_ = v_isSharedCheck_4167_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_fst_4143_);
lean_dec(v_a_4139_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4167_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
if (lean_obj_tag(v_fst_4143_) == 0)
{
lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4150_; 
lean_del_object(v___x_4141_);
v___x_4147_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4148_ = l_Lean_MessageData_ofName(v___x_4132_);
lean_inc_ref(v___x_4148_);
if (v_isShared_4146_ == 0)
{
lean_ctor_set_tag(v___x_4145_, 7);
lean_ctor_set(v___x_4145_, 1, v___x_4148_);
lean_ctor_set(v___x_4145_, 0, v___x_4147_);
v___x_4150_ = v___x_4145_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v___x_4147_);
lean_ctor_set(v_reuseFailAlloc_4162_, 1, v___x_4148_);
v___x_4150_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
v___x_4151_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4152_, 0, v___x_4150_);
lean_ctor_set(v___x_4152_, 1, v___x_4151_);
v___x_4153_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4154_ = l_Lean_indentD(v___x_4153_);
v___x_4155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4152_);
lean_ctor_set(v___x_4155_, 1, v___x_4154_);
v___x_4156_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4157_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4157_, 0, v___x_4155_);
lean_ctor_set(v___x_4157_, 1, v___x_4156_);
v___x_4158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4157_);
lean_ctor_set(v___x_4158_, 1, v___x_4148_);
v___x_4159_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4160_, 0, v___x_4158_);
lean_ctor_set(v___x_4160_, 1, v___x_4159_);
v___x_4161_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4160_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4161_;
}
}
else
{
lean_object* v_val_4163_; lean_object* v___x_4165_; 
lean_del_object(v___x_4145_);
lean_dec(v___x_4132_);
lean_dec(v_stx_2367_);
v_val_4163_ = lean_ctor_get(v_fst_4143_, 0);
lean_inc(v_val_4163_);
lean_dec_ref_known(v_fst_4143_, 1);
if (v_isShared_4142_ == 0)
{
lean_ctor_set(v___x_4141_, 0, v_val_4163_);
v___x_4165_ = v___x_4141_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_val_4163_);
v___x_4165_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
return v___x_4165_;
}
}
}
}
}
else
{
lean_object* v_a_4170_; lean_object* v___x_4172_; uint8_t v_isShared_4173_; uint8_t v_isSharedCheck_4177_; 
lean_dec(v___x_4132_);
lean_dec(v_stx_2367_);
v_a_4170_ = lean_ctor_get(v___x_4138_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4138_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4172_ = v___x_4138_;
v_isShared_4173_ = v_isSharedCheck_4177_;
goto v_resetjp_4171_;
}
else
{
lean_inc(v_a_4170_);
lean_dec(v___x_4138_);
v___x_4172_ = lean_box(0);
v_isShared_4173_ = v_isSharedCheck_4177_;
goto v_resetjp_4171_;
}
v_resetjp_4171_:
{
lean_object* v___x_4175_; 
if (v_isShared_4173_ == 0)
{
v___x_4175_ = v___x_4172_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v_a_4170_);
v___x_4175_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
return v___x_4175_;
}
}
}
}
else
{
lean_object* v___x_4178_; lean_object* v___x_4179_; uint8_t v___x_4180_; 
v___x_4178_ = l_Lean_Syntax_getArg(v___x_4129_, v___x_3958_);
lean_dec(v___x_4129_);
v___x_4179_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82));
v___x_4180_ = l_Lean_Syntax_isOfKind(v___x_4178_, v___x_4179_);
if (v___x_4180_ == 0)
{
lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v_env_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4181_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4182_ = lean_st_ref_get(v_a_2373_);
v_env_4183_ = lean_ctor_get(v___x_4182_, 0);
lean_inc_ref(v_env_4183_);
lean_dec(v___x_4182_);
v___x_4184_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4185_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4184_, v_env_4183_, v___x_4181_);
v___x_4186_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4187_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4185_, v___x_4186_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4185_);
if (lean_obj_tag(v___x_4187_) == 0)
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4218_; 
v_a_4188_ = lean_ctor_get(v___x_4187_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4187_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4190_ = v___x_4187_;
v_isShared_4191_ = v_isSharedCheck_4218_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v___x_4187_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4218_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v_fst_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4216_; 
v_fst_4192_ = lean_ctor_get(v_a_4188_, 0);
v_isSharedCheck_4216_ = !lean_is_exclusive(v_a_4188_);
if (v_isSharedCheck_4216_ == 0)
{
lean_object* v_unused_4217_; 
v_unused_4217_ = lean_ctor_get(v_a_4188_, 1);
lean_dec(v_unused_4217_);
v___x_4194_ = v_a_4188_;
v_isShared_4195_ = v_isSharedCheck_4216_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_fst_4192_);
lean_dec(v_a_4188_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4216_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
if (lean_obj_tag(v_fst_4192_) == 0)
{
lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4199_; 
lean_del_object(v___x_4190_);
v___x_4196_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4197_ = l_Lean_MessageData_ofName(v___x_4181_);
lean_inc_ref(v___x_4197_);
if (v_isShared_4195_ == 0)
{
lean_ctor_set_tag(v___x_4194_, 7);
lean_ctor_set(v___x_4194_, 1, v___x_4197_);
lean_ctor_set(v___x_4194_, 0, v___x_4196_);
v___x_4199_ = v___x_4194_;
goto v_reusejp_4198_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v___x_4196_);
lean_ctor_set(v_reuseFailAlloc_4211_, 1, v___x_4197_);
v___x_4199_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4198_;
}
v_reusejp_4198_:
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4200_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4201_, 0, v___x_4199_);
lean_ctor_set(v___x_4201_, 1, v___x_4200_);
v___x_4202_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4203_ = l_Lean_indentD(v___x_4202_);
v___x_4204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4201_);
lean_ctor_set(v___x_4204_, 1, v___x_4203_);
v___x_4205_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4206_, 0, v___x_4204_);
lean_ctor_set(v___x_4206_, 1, v___x_4205_);
v___x_4207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4207_, 0, v___x_4206_);
lean_ctor_set(v___x_4207_, 1, v___x_4197_);
v___x_4208_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4207_);
lean_ctor_set(v___x_4209_, 1, v___x_4208_);
v___x_4210_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4209_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4210_;
}
}
else
{
lean_object* v_val_4212_; lean_object* v___x_4214_; 
lean_del_object(v___x_4194_);
lean_dec(v___x_4181_);
lean_dec(v_stx_2367_);
v_val_4212_ = lean_ctor_get(v_fst_4192_, 0);
lean_inc(v_val_4212_);
lean_dec_ref_known(v_fst_4192_, 1);
if (v_isShared_4191_ == 0)
{
lean_ctor_set(v___x_4190_, 0, v_val_4212_);
v___x_4214_ = v___x_4190_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_val_4212_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
}
}
}
else
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4226_; 
lean_dec(v___x_4181_);
lean_dec(v_stx_2367_);
v_a_4219_ = lean_ctor_get(v___x_4187_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4187_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4221_ = v___x_4187_;
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4187_);
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
else
{
v___y_4024_ = v_a_2368_;
v___y_4025_ = v_a_2369_;
v___y_4026_ = v_a_2370_;
v___y_4027_ = v_a_2371_;
v___y_4028_ = v_a_2372_;
v___y_4029_ = v_a_2373_;
goto v___jp_4023_;
}
}
}
else
{
lean_dec(v___x_4129_);
v___y_4024_ = v_a_2368_;
v___y_4025_ = v_a_2369_;
v___y_4026_ = v_a_2370_;
v___y_4027_ = v_a_2371_;
v___y_4028_ = v_a_2372_;
v___y_4029_ = v_a_2373_;
goto v___jp_4023_;
}
v___jp_3959_:
{
lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; uint8_t v___x_3969_; 
v___x_3966_ = lean_unsigned_to_nat(6u);
v___x_3967_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_3966_);
v___x_3968_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7));
lean_inc(v___x_3967_);
v___x_3969_ = l_Lean_Syntax_isOfKind(v___x_3967_, v___x_3968_);
if (v___x_3969_ == 0)
{
lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v_env_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; 
lean_dec(v___x_3967_);
lean_inc_n(v_stx_2367_, 2);
v___x_3970_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_3971_ = lean_st_ref_get(v___y_3965_);
v_env_3972_ = lean_ctor_get(v___x_3971_, 0);
lean_inc_ref(v_env_3972_);
lean_dec(v___x_3971_);
v___x_3973_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3974_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3973_, v_env_3972_, v___x_3970_);
v___x_3975_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3976_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_3974_, v___x_3975_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_);
lean_dec(v___x_3974_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_4007_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
v_isSharedCheck_4007_ = !lean_is_exclusive(v___x_3976_);
if (v_isSharedCheck_4007_ == 0)
{
v___x_3979_ = v___x_3976_;
v_isShared_3980_ = v_isSharedCheck_4007_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3976_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_4007_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v_fst_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_4005_; 
v_fst_3981_ = lean_ctor_get(v_a_3977_, 0);
v_isSharedCheck_4005_ = !lean_is_exclusive(v_a_3977_);
if (v_isSharedCheck_4005_ == 0)
{
lean_object* v_unused_4006_; 
v_unused_4006_ = lean_ctor_get(v_a_3977_, 1);
lean_dec(v_unused_4006_);
v___x_3983_ = v_a_3977_;
v_isShared_3984_ = v_isSharedCheck_4005_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_fst_3981_);
lean_dec(v_a_3977_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_4005_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
if (lean_obj_tag(v_fst_3981_) == 0)
{
lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3988_; 
lean_del_object(v___x_3979_);
v___x_3985_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3986_ = l_Lean_MessageData_ofName(v___x_3970_);
lean_inc_ref(v___x_3986_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set_tag(v___x_3983_, 7);
lean_ctor_set(v___x_3983_, 1, v___x_3986_);
lean_ctor_set(v___x_3983_, 0, v___x_3985_);
v___x_3988_ = v___x_3983_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v___x_3985_);
lean_ctor_set(v_reuseFailAlloc_4000_, 1, v___x_3986_);
v___x_3988_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v___x_3989_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3988_);
lean_ctor_set(v___x_3990_, 1, v___x_3989_);
v___x_3991_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_3992_ = l_Lean_indentD(v___x_3991_);
v___x_3993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3993_, 0, v___x_3990_);
lean_ctor_set(v___x_3993_, 1, v___x_3992_);
v___x_3994_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3993_);
lean_ctor_set(v___x_3995_, 1, v___x_3994_);
v___x_3996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3996_, 0, v___x_3995_);
lean_ctor_set(v___x_3996_, 1, v___x_3986_);
v___x_3997_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3996_);
lean_ctor_set(v___x_3998_, 1, v___x_3997_);
v___x_3999_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3998_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_);
return v___x_3999_;
}
}
else
{
lean_object* v_val_4001_; lean_object* v___x_4003_; 
lean_del_object(v___x_3983_);
lean_dec(v___x_3970_);
lean_dec(v_stx_2367_);
v_val_4001_ = lean_ctor_get(v_fst_3981_, 0);
lean_inc(v_val_4001_);
lean_dec_ref_known(v_fst_3981_, 1);
if (v_isShared_3980_ == 0)
{
lean_ctor_set(v___x_3979_, 0, v_val_4001_);
v___x_4003_ = v___x_3979_;
goto v_reusejp_4002_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v_val_4001_);
v___x_4003_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4002_;
}
v_reusejp_4002_:
{
return v___x_4003_;
}
}
}
}
}
else
{
lean_object* v_a_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4015_; 
lean_dec(v___x_3970_);
lean_dec(v_stx_2367_);
v_a_4008_ = lean_ctor_get(v___x_3976_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v___x_3976_);
if (v_isSharedCheck_4015_ == 0)
{
v___x_4010_ = v___x_3976_;
v_isShared_4011_ = v_isSharedCheck_4015_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_a_4008_);
lean_dec(v___x_3976_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4015_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___x_4013_; 
if (v_isShared_4011_ == 0)
{
v___x_4013_ = v___x_4010_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v_a_4008_);
v___x_4013_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
return v___x_4013_;
}
}
}
}
else
{
lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; size_t v_sz_4019_; size_t v___x_4020_; lean_object* v___x_4021_; 
lean_dec(v_stx_2367_);
v___x_4016_ = l_Lean_Syntax_getArg(v___x_3967_, v___x_3958_);
lean_dec(v___x_3967_);
v___x_4017_ = l_Lean_Syntax_getArgs(v___x_4016_);
lean_dec(v___x_4016_);
v___x_4018_ = l_Lean_Elab_Do_ControlInfo_empty;
v_sz_4019_ = lean_array_size(v___x_4017_);
v___x_4020_ = ((size_t)0ULL);
v___x_4021_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v___x_2690_, v___x_4017_, v_sz_4019_, v___x_4020_, v___x_4018_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_);
lean_dec_ref(v___x_4017_);
return v___x_4021_;
}
}
v___jp_4023_:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; uint8_t v___x_4032_; 
v___x_4030_ = lean_unsigned_to_nat(2u);
v___x_4031_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4030_);
v___x_4032_ = l_Lean_Syntax_isNone(v___x_4031_);
if (v___x_4032_ == 0)
{
uint8_t v___x_4033_; 
lean_inc(v___x_4031_);
v___x_4033_ = l_Lean_Syntax_matchesNull(v___x_4031_, v___x_4022_);
if (v___x_4033_ == 0)
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v_env_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
lean_dec(v___x_4031_);
lean_inc_n(v_stx_2367_, 2);
v___x_4034_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4035_ = lean_st_ref_get(v___y_4029_);
v_env_4036_ = lean_ctor_get(v___x_4035_, 0);
lean_inc_ref(v_env_4036_);
lean_dec(v___x_4035_);
v___x_4037_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4038_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4037_, v_env_4036_, v___x_4034_);
v___x_4039_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4040_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4038_, v___x_4039_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
lean_dec(v___x_4038_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4071_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4043_ = v___x_4040_;
v_isShared_4044_ = v_isSharedCheck_4071_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4040_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4071_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v_fst_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4069_; 
v_fst_4045_ = lean_ctor_get(v_a_4041_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v_a_4041_);
if (v_isSharedCheck_4069_ == 0)
{
lean_object* v_unused_4070_; 
v_unused_4070_ = lean_ctor_get(v_a_4041_, 1);
lean_dec(v_unused_4070_);
v___x_4047_ = v_a_4041_;
v_isShared_4048_ = v_isSharedCheck_4069_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_fst_4045_);
lean_dec(v_a_4041_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4069_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
if (lean_obj_tag(v_fst_4045_) == 0)
{
lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4052_; 
lean_del_object(v___x_4043_);
v___x_4049_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4050_ = l_Lean_MessageData_ofName(v___x_4034_);
lean_inc_ref(v___x_4050_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set_tag(v___x_4047_, 7);
lean_ctor_set(v___x_4047_, 1, v___x_4050_);
lean_ctor_set(v___x_4047_, 0, v___x_4049_);
v___x_4052_ = v___x_4047_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v___x_4049_);
lean_ctor_set(v_reuseFailAlloc_4064_, 1, v___x_4050_);
v___x_4052_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4053_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4054_, 0, v___x_4052_);
lean_ctor_set(v___x_4054_, 1, v___x_4053_);
v___x_4055_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4056_ = l_Lean_indentD(v___x_4055_);
v___x_4057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4057_, 0, v___x_4054_);
lean_ctor_set(v___x_4057_, 1, v___x_4056_);
v___x_4058_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4057_);
lean_ctor_set(v___x_4059_, 1, v___x_4058_);
v___x_4060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4059_);
lean_ctor_set(v___x_4060_, 1, v___x_4050_);
v___x_4061_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4060_);
lean_ctor_set(v___x_4062_, 1, v___x_4061_);
v___x_4063_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4062_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
return v___x_4063_;
}
}
else
{
lean_object* v_val_4065_; lean_object* v___x_4067_; 
lean_del_object(v___x_4047_);
lean_dec(v___x_4034_);
lean_dec(v_stx_2367_);
v_val_4065_ = lean_ctor_get(v_fst_4045_, 0);
lean_inc(v_val_4065_);
lean_dec_ref_known(v_fst_4045_, 1);
if (v_isShared_4044_ == 0)
{
lean_ctor_set(v___x_4043_, 0, v_val_4065_);
v___x_4067_ = v___x_4043_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_val_4065_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
return v___x_4067_;
}
}
}
}
}
else
{
lean_object* v_a_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4079_; 
lean_dec(v___x_4034_);
lean_dec(v_stx_2367_);
v_a_4072_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4074_ = v___x_4040_;
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_a_4072_);
lean_dec(v___x_4040_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_a_4072_);
v___x_4077_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
return v___x_4077_;
}
}
}
}
else
{
lean_object* v___x_4080_; lean_object* v___x_4081_; uint8_t v___x_4082_; 
v___x_4080_ = l_Lean_Syntax_getArg(v___x_4031_, v___x_3958_);
lean_dec(v___x_4031_);
v___x_4081_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80));
v___x_4082_ = l_Lean_Syntax_isOfKind(v___x_4080_, v___x_4081_);
if (v___x_4082_ == 0)
{
lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v_env_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4083_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4084_ = lean_st_ref_get(v___y_4029_);
v_env_4085_ = lean_ctor_get(v___x_4084_, 0);
lean_inc_ref(v_env_4085_);
lean_dec(v___x_4084_);
v___x_4086_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4087_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4086_, v_env_4085_, v___x_4083_);
v___x_4088_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4089_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4087_, v___x_4088_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
lean_dec(v___x_4087_);
if (lean_obj_tag(v___x_4089_) == 0)
{
lean_object* v_a_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4120_; 
v_a_4090_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4092_ = v___x_4089_;
v_isShared_4093_ = v_isSharedCheck_4120_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_a_4090_);
lean_dec(v___x_4089_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4120_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v_fst_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4118_; 
v_fst_4094_ = lean_ctor_get(v_a_4090_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v_a_4090_);
if (v_isSharedCheck_4118_ == 0)
{
lean_object* v_unused_4119_; 
v_unused_4119_ = lean_ctor_get(v_a_4090_, 1);
lean_dec(v_unused_4119_);
v___x_4096_ = v_a_4090_;
v_isShared_4097_ = v_isSharedCheck_4118_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_fst_4094_);
lean_dec(v_a_4090_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4118_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
if (lean_obj_tag(v_fst_4094_) == 0)
{
lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4101_; 
lean_del_object(v___x_4092_);
v___x_4098_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4099_ = l_Lean_MessageData_ofName(v___x_4083_);
lean_inc_ref(v___x_4099_);
if (v_isShared_4097_ == 0)
{
lean_ctor_set_tag(v___x_4096_, 7);
lean_ctor_set(v___x_4096_, 1, v___x_4099_);
lean_ctor_set(v___x_4096_, 0, v___x_4098_);
v___x_4101_ = v___x_4096_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v___x_4098_);
lean_ctor_set(v_reuseFailAlloc_4113_, 1, v___x_4099_);
v___x_4101_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4102_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4101_);
lean_ctor_set(v___x_4103_, 1, v___x_4102_);
v___x_4104_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4105_ = l_Lean_indentD(v___x_4104_);
v___x_4106_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4103_);
lean_ctor_set(v___x_4106_, 1, v___x_4105_);
v___x_4107_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4108_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4106_);
lean_ctor_set(v___x_4108_, 1, v___x_4107_);
v___x_4109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4108_);
lean_ctor_set(v___x_4109_, 1, v___x_4099_);
v___x_4110_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4109_);
lean_ctor_set(v___x_4111_, 1, v___x_4110_);
v___x_4112_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4111_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
return v___x_4112_;
}
}
else
{
lean_object* v_val_4114_; lean_object* v___x_4116_; 
lean_del_object(v___x_4096_);
lean_dec(v___x_4083_);
lean_dec(v_stx_2367_);
v_val_4114_ = lean_ctor_get(v_fst_4094_, 0);
lean_inc(v_val_4114_);
lean_dec_ref_known(v_fst_4094_, 1);
if (v_isShared_4093_ == 0)
{
lean_ctor_set(v___x_4092_, 0, v_val_4114_);
v___x_4116_ = v___x_4092_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_val_4114_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
}
else
{
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4128_; 
lean_dec(v___x_4083_);
lean_dec(v_stx_2367_);
v_a_4121_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4123_ = v___x_4089_;
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4089_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4126_; 
if (v_isShared_4124_ == 0)
{
v___x_4126_ = v___x_4123_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4121_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
return v___x_4126_;
}
}
}
}
else
{
v___y_3960_ = v___y_4024_;
v___y_3961_ = v___y_4025_;
v___y_3962_ = v___y_4026_;
v___y_3963_ = v___y_4027_;
v___y_3964_ = v___y_4028_;
v___y_3965_ = v___y_4029_;
goto v___jp_3959_;
}
}
}
else
{
lean_dec(v___x_4031_);
v___y_3960_ = v___y_4024_;
v___y_3961_ = v___y_4025_;
v___y_3962_ = v___y_4026_;
v___y_3963_ = v___y_4027_;
v___y_3964_ = v___y_4028_;
v___y_3965_ = v___y_4029_;
goto v___jp_3959_;
}
}
}
}
else
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; uint8_t v___x_4230_; 
v___x_4227_ = lean_unsigned_to_nat(0u);
v___x_4228_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4227_);
v___x_4229_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v___x_4228_);
v___x_4230_ = l_Lean_Syntax_isOfKind(v___x_4228_, v___x_4229_);
if (v___x_4230_ == 0)
{
lean_object* v___x_4231_; uint8_t v___x_4232_; 
v___x_4231_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v___x_4228_);
v___x_4232_ = l_Lean_Syntax_isOfKind(v___x_4228_, v___x_4231_);
if (v___x_4232_ == 0)
{
lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v_env_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; 
lean_dec(v___x_4228_);
lean_inc_n(v_stx_2367_, 2);
v___x_4233_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4234_ = lean_st_ref_get(v_a_2373_);
v_env_4235_ = lean_ctor_get(v___x_4234_, 0);
lean_inc_ref(v_env_4235_);
lean_dec(v___x_4234_);
v___x_4236_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4237_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4236_, v_env_4235_, v___x_4233_);
v___x_4238_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4239_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4237_, v___x_4238_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4237_);
if (lean_obj_tag(v___x_4239_) == 0)
{
lean_object* v_a_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4270_; 
v_a_4240_ = lean_ctor_get(v___x_4239_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4239_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4242_ = v___x_4239_;
v_isShared_4243_ = v_isSharedCheck_4270_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_a_4240_);
lean_dec(v___x_4239_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4270_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v_fst_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4268_; 
v_fst_4244_ = lean_ctor_get(v_a_4240_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v_a_4240_);
if (v_isSharedCheck_4268_ == 0)
{
lean_object* v_unused_4269_; 
v_unused_4269_ = lean_ctor_get(v_a_4240_, 1);
lean_dec(v_unused_4269_);
v___x_4246_ = v_a_4240_;
v_isShared_4247_ = v_isSharedCheck_4268_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_fst_4244_);
lean_dec(v_a_4240_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4268_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
if (lean_obj_tag(v_fst_4244_) == 0)
{
lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4251_; 
lean_del_object(v___x_4242_);
v___x_4248_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4249_ = l_Lean_MessageData_ofName(v___x_4233_);
lean_inc_ref(v___x_4249_);
if (v_isShared_4247_ == 0)
{
lean_ctor_set_tag(v___x_4246_, 7);
lean_ctor_set(v___x_4246_, 1, v___x_4249_);
lean_ctor_set(v___x_4246_, 0, v___x_4248_);
v___x_4251_ = v___x_4246_;
goto v_reusejp_4250_;
}
else
{
lean_object* v_reuseFailAlloc_4263_; 
v_reuseFailAlloc_4263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4263_, 0, v___x_4248_);
lean_ctor_set(v_reuseFailAlloc_4263_, 1, v___x_4249_);
v___x_4251_ = v_reuseFailAlloc_4263_;
goto v_reusejp_4250_;
}
v_reusejp_4250_:
{
lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; 
v___x_4252_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4253_, 0, v___x_4251_);
lean_ctor_set(v___x_4253_, 1, v___x_4252_);
v___x_4254_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4255_ = l_Lean_indentD(v___x_4254_);
v___x_4256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4256_, 0, v___x_4253_);
lean_ctor_set(v___x_4256_, 1, v___x_4255_);
v___x_4257_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4256_);
lean_ctor_set(v___x_4258_, 1, v___x_4257_);
v___x_4259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4259_, 0, v___x_4258_);
lean_ctor_set(v___x_4259_, 1, v___x_4249_);
v___x_4260_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4261_, 0, v___x_4259_);
lean_ctor_set(v___x_4261_, 1, v___x_4260_);
v___x_4262_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4261_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4262_;
}
}
else
{
lean_object* v_val_4264_; lean_object* v___x_4266_; 
lean_del_object(v___x_4246_);
lean_dec(v___x_4233_);
lean_dec(v_stx_2367_);
v_val_4264_ = lean_ctor_get(v_fst_4244_, 0);
lean_inc(v_val_4264_);
lean_dec_ref_known(v_fst_4244_, 1);
if (v_isShared_4243_ == 0)
{
lean_ctor_set(v___x_4242_, 0, v_val_4264_);
v___x_4266_ = v___x_4242_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_val_4264_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
}
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4278_; 
lean_dec(v___x_4233_);
lean_dec(v_stx_2367_);
v_a_4271_ = lean_ctor_get(v___x_4239_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4239_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4273_ = v___x_4239_;
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4239_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4276_; 
if (v_isShared_4274_ == 0)
{
v___x_4276_ = v___x_4273_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4271_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
return v___x_4276_;
}
}
}
}
else
{
lean_object* v___x_4279_; 
lean_dec(v_stx_2367_);
v___x_4279_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_4232_, v___x_4228_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4279_;
}
}
else
{
lean_object* v___x_4280_; 
lean_dec(v_stx_2367_);
v___x_4280_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_4230_, v___x_4228_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4280_;
}
}
}
else
{
lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; uint8_t v___x_4284_; 
v___x_4281_ = lean_unsigned_to_nat(0u);
v___x_4282_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4281_);
v___x_4283_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84));
lean_inc(v___x_4282_);
v___x_4284_ = l_Lean_Syntax_isOfKind(v___x_4282_, v___x_4283_);
if (v___x_4284_ == 0)
{
lean_object* v___x_4285_; uint8_t v___x_4286_; 
v___x_4285_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86));
lean_inc(v___x_4282_);
v___x_4286_ = l_Lean_Syntax_isOfKind(v___x_4282_, v___x_4285_);
if (v___x_4286_ == 0)
{
lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v_env_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; 
lean_dec(v___x_4282_);
lean_inc_n(v_stx_2367_, 2);
v___x_4287_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4288_ = lean_st_ref_get(v_a_2373_);
v_env_4289_ = lean_ctor_get(v___x_4288_, 0);
lean_inc_ref(v_env_4289_);
lean_dec(v___x_4288_);
v___x_4290_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4291_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4290_, v_env_4289_, v___x_4287_);
v___x_4292_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4293_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4291_, v___x_4292_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4291_);
if (lean_obj_tag(v___x_4293_) == 0)
{
lean_object* v_a_4294_; lean_object* v___x_4296_; uint8_t v_isShared_4297_; uint8_t v_isSharedCheck_4324_; 
v_a_4294_ = lean_ctor_get(v___x_4293_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v___x_4293_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4296_ = v___x_4293_;
v_isShared_4297_ = v_isSharedCheck_4324_;
goto v_resetjp_4295_;
}
else
{
lean_inc(v_a_4294_);
lean_dec(v___x_4293_);
v___x_4296_ = lean_box(0);
v_isShared_4297_ = v_isSharedCheck_4324_;
goto v_resetjp_4295_;
}
v_resetjp_4295_:
{
lean_object* v_fst_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4322_; 
v_fst_4298_ = lean_ctor_get(v_a_4294_, 0);
v_isSharedCheck_4322_ = !lean_is_exclusive(v_a_4294_);
if (v_isSharedCheck_4322_ == 0)
{
lean_object* v_unused_4323_; 
v_unused_4323_ = lean_ctor_get(v_a_4294_, 1);
lean_dec(v_unused_4323_);
v___x_4300_ = v_a_4294_;
v_isShared_4301_ = v_isSharedCheck_4322_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_fst_4298_);
lean_dec(v_a_4294_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4322_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
if (lean_obj_tag(v_fst_4298_) == 0)
{
lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4305_; 
lean_del_object(v___x_4296_);
v___x_4302_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4303_ = l_Lean_MessageData_ofName(v___x_4287_);
lean_inc_ref(v___x_4303_);
if (v_isShared_4301_ == 0)
{
lean_ctor_set_tag(v___x_4300_, 7);
lean_ctor_set(v___x_4300_, 1, v___x_4303_);
lean_ctor_set(v___x_4300_, 0, v___x_4302_);
v___x_4305_ = v___x_4300_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v___x_4302_);
lean_ctor_set(v_reuseFailAlloc_4317_, 1, v___x_4303_);
v___x_4305_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
v___x_4306_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4307_, 0, v___x_4305_);
lean_ctor_set(v___x_4307_, 1, v___x_4306_);
v___x_4308_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4309_ = l_Lean_indentD(v___x_4308_);
v___x_4310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4310_, 0, v___x_4307_);
lean_ctor_set(v___x_4310_, 1, v___x_4309_);
v___x_4311_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4310_);
lean_ctor_set(v___x_4312_, 1, v___x_4311_);
v___x_4313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4313_, 0, v___x_4312_);
lean_ctor_set(v___x_4313_, 1, v___x_4303_);
v___x_4314_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4315_, 0, v___x_4313_);
lean_ctor_set(v___x_4315_, 1, v___x_4314_);
v___x_4316_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4315_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4316_;
}
}
else
{
lean_object* v_val_4318_; lean_object* v___x_4320_; 
lean_del_object(v___x_4300_);
lean_dec(v___x_4287_);
lean_dec(v_stx_2367_);
v_val_4318_ = lean_ctor_get(v_fst_4298_, 0);
lean_inc(v_val_4318_);
lean_dec_ref_known(v_fst_4298_, 1);
if (v_isShared_4297_ == 0)
{
lean_ctor_set(v___x_4296_, 0, v_val_4318_);
v___x_4320_ = v___x_4296_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_val_4318_);
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
else
{
lean_object* v_a_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4332_; 
lean_dec(v___x_4287_);
lean_dec(v_stx_2367_);
v_a_4325_ = lean_ctor_get(v___x_4293_, 0);
v_isSharedCheck_4332_ = !lean_is_exclusive(v___x_4293_);
if (v_isSharedCheck_4332_ == 0)
{
v___x_4327_ = v___x_4293_;
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_a_4325_);
lean_dec(v___x_4293_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4331_; 
v_reuseFailAlloc_4331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4331_, 0, v_a_4325_);
v___x_4330_ = v_reuseFailAlloc_4331_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
return v___x_4330_;
}
}
}
}
else
{
lean_object* v___x_4333_; 
lean_dec(v_stx_2367_);
v___x_4333_ = l_Lean_Elab_Do_getLetPatDeclVars(v___x_4282_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4282_);
if (lean_obj_tag(v___x_4333_) == 0)
{
lean_object* v_a_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
v_a_4334_ = lean_ctor_get(v___x_4333_, 0);
lean_inc(v_a_4334_);
lean_dec_ref_known(v___x_4333_, 1);
v___x_4335_ = lean_box(0);
v___x_4336_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4334_, v___x_4335_, v___x_4335_, v___x_4335_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4336_;
}
else
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4344_; 
v_a_4337_ = lean_ctor_get(v___x_4333_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4333_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4339_ = v___x_4333_;
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4333_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
}
}
else
{
lean_object* v___x_4345_; 
lean_dec(v_stx_2367_);
v___x_4345_ = l_Lean_Elab_Do_getLetIdDeclVars(v___x_4282_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4282_);
if (lean_obj_tag(v___x_4345_) == 0)
{
lean_object* v_a_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; 
v_a_4346_ = lean_ctor_get(v___x_4345_, 0);
lean_inc(v_a_4346_);
lean_dec_ref_known(v___x_4345_, 1);
v___x_4347_ = lean_box(0);
v___x_4348_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4346_, v___x_4347_, v___x_4347_, v___x_4347_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4348_;
}
else
{
lean_object* v_a_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4356_; 
v_a_4349_ = lean_ctor_get(v___x_4345_, 0);
v_isSharedCheck_4356_ = !lean_is_exclusive(v___x_4345_);
if (v_isSharedCheck_4356_ == 0)
{
v___x_4351_ = v___x_4345_;
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_a_4349_);
lean_dec(v___x_4345_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4354_; 
if (v_isShared_4352_ == 0)
{
v___x_4354_ = v___x_4351_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v_a_4349_);
v___x_4354_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
return v___x_4354_;
}
}
}
}
}
}
else
{
lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; uint8_t v___x_4360_; 
v___x_4357_ = lean_unsigned_to_nat(0u);
v___x_4358_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4357_);
v___x_4359_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88));
lean_inc(v___x_4358_);
v___x_4360_ = l_Lean_Syntax_isOfKind(v___x_4358_, v___x_4359_);
if (v___x_4360_ == 0)
{
lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v_env_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; 
lean_dec(v___x_4358_);
lean_inc_n(v_stx_2367_, 2);
v___x_4361_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4362_ = lean_st_ref_get(v_a_2373_);
v_env_4363_ = lean_ctor_get(v___x_4362_, 0);
lean_inc_ref(v_env_4363_);
lean_dec(v___x_4362_);
v___x_4364_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4365_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4364_, v_env_4363_, v___x_4361_);
v___x_4366_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4367_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4365_, v___x_4366_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4365_);
if (lean_obj_tag(v___x_4367_) == 0)
{
lean_object* v_a_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4398_; 
v_a_4368_ = lean_ctor_get(v___x_4367_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4367_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4370_ = v___x_4367_;
v_isShared_4371_ = v_isSharedCheck_4398_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_a_4368_);
lean_dec(v___x_4367_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4398_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v_fst_4372_; lean_object* v___x_4374_; uint8_t v_isShared_4375_; uint8_t v_isSharedCheck_4396_; 
v_fst_4372_ = lean_ctor_get(v_a_4368_, 0);
v_isSharedCheck_4396_ = !lean_is_exclusive(v_a_4368_);
if (v_isSharedCheck_4396_ == 0)
{
lean_object* v_unused_4397_; 
v_unused_4397_ = lean_ctor_get(v_a_4368_, 1);
lean_dec(v_unused_4397_);
v___x_4374_ = v_a_4368_;
v_isShared_4375_ = v_isSharedCheck_4396_;
goto v_resetjp_4373_;
}
else
{
lean_inc(v_fst_4372_);
lean_dec(v_a_4368_);
v___x_4374_ = lean_box(0);
v_isShared_4375_ = v_isSharedCheck_4396_;
goto v_resetjp_4373_;
}
v_resetjp_4373_:
{
if (lean_obj_tag(v_fst_4372_) == 0)
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4379_; 
lean_del_object(v___x_4370_);
v___x_4376_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4377_ = l_Lean_MessageData_ofName(v___x_4361_);
lean_inc_ref(v___x_4377_);
if (v_isShared_4375_ == 0)
{
lean_ctor_set_tag(v___x_4374_, 7);
lean_ctor_set(v___x_4374_, 1, v___x_4377_);
lean_ctor_set(v___x_4374_, 0, v___x_4376_);
v___x_4379_ = v___x_4374_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v___x_4376_);
lean_ctor_set(v_reuseFailAlloc_4391_, 1, v___x_4377_);
v___x_4379_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; 
v___x_4380_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4381_, 0, v___x_4379_);
lean_ctor_set(v___x_4381_, 1, v___x_4380_);
v___x_4382_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4383_ = l_Lean_indentD(v___x_4382_);
v___x_4384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4384_, 0, v___x_4381_);
lean_ctor_set(v___x_4384_, 1, v___x_4383_);
v___x_4385_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4386_, 0, v___x_4384_);
lean_ctor_set(v___x_4386_, 1, v___x_4385_);
v___x_4387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4387_, 0, v___x_4386_);
lean_ctor_set(v___x_4387_, 1, v___x_4377_);
v___x_4388_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4389_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4389_, 0, v___x_4387_);
lean_ctor_set(v___x_4389_, 1, v___x_4388_);
v___x_4390_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4389_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4390_;
}
}
else
{
lean_object* v_val_4392_; lean_object* v___x_4394_; 
lean_del_object(v___x_4374_);
lean_dec(v___x_4361_);
lean_dec(v_stx_2367_);
v_val_4392_ = lean_ctor_get(v_fst_4372_, 0);
lean_inc(v_val_4392_);
lean_dec_ref_known(v_fst_4372_, 1);
if (v_isShared_4371_ == 0)
{
lean_ctor_set(v___x_4370_, 0, v_val_4392_);
v___x_4394_ = v___x_4370_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v_val_4392_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
}
}
}
}
}
else
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
lean_dec(v___x_4361_);
lean_dec(v_stx_2367_);
v_a_4399_ = lean_ctor_get(v___x_4367_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4367_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4367_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4367_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
else
{
lean_object* v___x_4407_; lean_object* v___y_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v___x_4513_; uint8_t v___x_4514_; 
v___x_4407_ = lean_unsigned_to_nat(1u);
v___x_4513_ = l_Lean_Syntax_getArg(v___x_4358_, v___x_4407_);
lean_dec(v___x_4358_);
v___x_4514_ = l_Lean_Syntax_isNone(v___x_4513_);
if (v___x_4514_ == 0)
{
uint8_t v___x_4515_; 
v___x_4515_ = l_Lean_Syntax_matchesNull(v___x_4513_, v___x_4407_);
if (v___x_4515_ == 0)
{
lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v_env_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4516_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4517_ = lean_st_ref_get(v_a_2373_);
v_env_4518_ = lean_ctor_get(v___x_4517_, 0);
lean_inc_ref(v_env_4518_);
lean_dec(v___x_4517_);
v___x_4519_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4520_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4519_, v_env_4518_, v___x_4516_);
v___x_4521_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4522_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4520_, v___x_4521_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4520_);
if (lean_obj_tag(v___x_4522_) == 0)
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4553_; 
v_a_4523_ = lean_ctor_get(v___x_4522_, 0);
v_isSharedCheck_4553_ = !lean_is_exclusive(v___x_4522_);
if (v_isSharedCheck_4553_ == 0)
{
v___x_4525_ = v___x_4522_;
v_isShared_4526_ = v_isSharedCheck_4553_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v___x_4522_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4553_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v_fst_4527_; lean_object* v___x_4529_; uint8_t v_isShared_4530_; uint8_t v_isSharedCheck_4551_; 
v_fst_4527_ = lean_ctor_get(v_a_4523_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v_a_4523_);
if (v_isSharedCheck_4551_ == 0)
{
lean_object* v_unused_4552_; 
v_unused_4552_ = lean_ctor_get(v_a_4523_, 1);
lean_dec(v_unused_4552_);
v___x_4529_ = v_a_4523_;
v_isShared_4530_ = v_isSharedCheck_4551_;
goto v_resetjp_4528_;
}
else
{
lean_inc(v_fst_4527_);
lean_dec(v_a_4523_);
v___x_4529_ = lean_box(0);
v_isShared_4530_ = v_isSharedCheck_4551_;
goto v_resetjp_4528_;
}
v_resetjp_4528_:
{
if (lean_obj_tag(v_fst_4527_) == 0)
{
lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4534_; 
lean_del_object(v___x_4525_);
v___x_4531_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4532_ = l_Lean_MessageData_ofName(v___x_4516_);
lean_inc_ref(v___x_4532_);
if (v_isShared_4530_ == 0)
{
lean_ctor_set_tag(v___x_4529_, 7);
lean_ctor_set(v___x_4529_, 1, v___x_4532_);
lean_ctor_set(v___x_4529_, 0, v___x_4531_);
v___x_4534_ = v___x_4529_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v___x_4531_);
lean_ctor_set(v_reuseFailAlloc_4546_, 1, v___x_4532_);
v___x_4534_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; 
v___x_4535_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4534_);
lean_ctor_set(v___x_4536_, 1, v___x_4535_);
v___x_4537_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4538_ = l_Lean_indentD(v___x_4537_);
v___x_4539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4539_, 0, v___x_4536_);
lean_ctor_set(v___x_4539_, 1, v___x_4538_);
v___x_4540_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4541_, 0, v___x_4539_);
lean_ctor_set(v___x_4541_, 1, v___x_4540_);
v___x_4542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4541_);
lean_ctor_set(v___x_4542_, 1, v___x_4532_);
v___x_4543_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4544_, 0, v___x_4542_);
lean_ctor_set(v___x_4544_, 1, v___x_4543_);
v___x_4545_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4544_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4545_;
}
}
else
{
lean_object* v_val_4547_; lean_object* v___x_4549_; 
lean_del_object(v___x_4529_);
lean_dec(v___x_4516_);
lean_dec(v_stx_2367_);
v_val_4547_ = lean_ctor_get(v_fst_4527_, 0);
lean_inc(v_val_4547_);
lean_dec_ref_known(v_fst_4527_, 1);
if (v_isShared_4526_ == 0)
{
lean_ctor_set(v___x_4525_, 0, v_val_4547_);
v___x_4549_ = v___x_4525_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_val_4547_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
return v___x_4549_;
}
}
}
}
}
else
{
lean_object* v_a_4554_; lean_object* v___x_4556_; uint8_t v_isShared_4557_; uint8_t v_isSharedCheck_4561_; 
lean_dec(v___x_4516_);
lean_dec(v_stx_2367_);
v_a_4554_ = lean_ctor_get(v___x_4522_, 0);
v_isSharedCheck_4561_ = !lean_is_exclusive(v___x_4522_);
if (v_isSharedCheck_4561_ == 0)
{
v___x_4556_ = v___x_4522_;
v_isShared_4557_ = v_isSharedCheck_4561_;
goto v_resetjp_4555_;
}
else
{
lean_inc(v_a_4554_);
lean_dec(v___x_4522_);
v___x_4556_ = lean_box(0);
v_isShared_4557_ = v_isSharedCheck_4561_;
goto v_resetjp_4555_;
}
v_resetjp_4555_:
{
lean_object* v___x_4559_; 
if (v_isShared_4557_ == 0)
{
v___x_4559_ = v___x_4556_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4560_; 
v_reuseFailAlloc_4560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4560_, 0, v_a_4554_);
v___x_4559_ = v_reuseFailAlloc_4560_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
return v___x_4559_;
}
}
}
}
else
{
v___y_4409_ = v_a_2368_;
v___y_4410_ = v_a_2369_;
v___y_4411_ = v_a_2370_;
v___y_4412_ = v_a_2371_;
v___y_4413_ = v_a_2372_;
v___y_4414_ = v_a_2373_;
goto v___jp_4408_;
}
}
else
{
lean_dec(v___x_4513_);
v___y_4409_ = v_a_2368_;
v___y_4410_ = v_a_2369_;
v___y_4411_ = v_a_2370_;
v___y_4412_ = v_a_2371_;
v___y_4413_ = v_a_2372_;
v___y_4414_ = v_a_2373_;
goto v___jp_4408_;
}
v___jp_4408_:
{
lean_object* v___x_4415_; lean_object* v___x_4416_; uint8_t v___x_4417_; 
v___x_4415_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4407_);
v___x_4416_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90));
lean_inc(v___x_4415_);
v___x_4417_ = l_Lean_Syntax_isOfKind(v___x_4415_, v___x_4416_);
if (v___x_4417_ == 0)
{
lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v_env_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; 
lean_dec(v___x_4415_);
lean_inc_n(v_stx_2367_, 2);
v___x_4418_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4419_ = lean_st_ref_get(v___y_4414_);
v_env_4420_ = lean_ctor_get(v___x_4419_, 0);
lean_inc_ref(v_env_4420_);
lean_dec(v___x_4419_);
v___x_4421_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4422_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4421_, v_env_4420_, v___x_4418_);
v___x_4423_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4424_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4422_, v___x_4423_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
lean_dec(v___x_4422_);
if (lean_obj_tag(v___x_4424_) == 0)
{
lean_object* v_a_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4455_; 
v_a_4425_ = lean_ctor_get(v___x_4424_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4424_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4427_ = v___x_4424_;
v_isShared_4428_ = v_isSharedCheck_4455_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_a_4425_);
lean_dec(v___x_4424_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4455_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v_fst_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4453_; 
v_fst_4429_ = lean_ctor_get(v_a_4425_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v_a_4425_);
if (v_isSharedCheck_4453_ == 0)
{
lean_object* v_unused_4454_; 
v_unused_4454_ = lean_ctor_get(v_a_4425_, 1);
lean_dec(v_unused_4454_);
v___x_4431_ = v_a_4425_;
v_isShared_4432_ = v_isSharedCheck_4453_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_fst_4429_);
lean_dec(v_a_4425_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4453_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
if (lean_obj_tag(v_fst_4429_) == 0)
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4436_; 
lean_del_object(v___x_4427_);
v___x_4433_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4434_ = l_Lean_MessageData_ofName(v___x_4418_);
lean_inc_ref(v___x_4434_);
if (v_isShared_4432_ == 0)
{
lean_ctor_set_tag(v___x_4431_, 7);
lean_ctor_set(v___x_4431_, 1, v___x_4434_);
lean_ctor_set(v___x_4431_, 0, v___x_4433_);
v___x_4436_ = v___x_4431_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v___x_4433_);
lean_ctor_set(v_reuseFailAlloc_4448_, 1, v___x_4434_);
v___x_4436_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
v___x_4437_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4436_);
lean_ctor_set(v___x_4438_, 1, v___x_4437_);
v___x_4439_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4440_ = l_Lean_indentD(v___x_4439_);
v___x_4441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4438_);
lean_ctor_set(v___x_4441_, 1, v___x_4440_);
v___x_4442_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4441_);
lean_ctor_set(v___x_4443_, 1, v___x_4442_);
v___x_4444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4444_, 0, v___x_4443_);
lean_ctor_set(v___x_4444_, 1, v___x_4434_);
v___x_4445_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4444_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
v___x_4447_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4446_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
return v___x_4447_;
}
}
else
{
lean_object* v_val_4449_; lean_object* v___x_4451_; 
lean_del_object(v___x_4431_);
lean_dec(v___x_4418_);
lean_dec(v_stx_2367_);
v_val_4449_ = lean_ctor_get(v_fst_4429_, 0);
lean_inc(v_val_4449_);
lean_dec_ref_known(v_fst_4429_, 1);
if (v_isShared_4428_ == 0)
{
lean_ctor_set(v___x_4427_, 0, v_val_4449_);
v___x_4451_ = v___x_4427_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_val_4449_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
return v___x_4451_;
}
}
}
}
}
else
{
lean_object* v_a_4456_; lean_object* v___x_4458_; uint8_t v_isShared_4459_; uint8_t v_isSharedCheck_4463_; 
lean_dec(v___x_4418_);
lean_dec(v_stx_2367_);
v_a_4456_ = lean_ctor_get(v___x_4424_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v___x_4424_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4458_ = v___x_4424_;
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
else
{
lean_inc(v_a_4456_);
lean_dec(v___x_4424_);
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
else
{
lean_object* v___x_4464_; uint8_t v___x_4465_; 
v___x_4464_ = l_Lean_Syntax_getArg(v___x_4415_, v___x_4407_);
lean_dec(v___x_4415_);
v___x_4465_ = l_Lean_Syntax_isNone(v___x_4464_);
if (v___x_4465_ == 0)
{
uint8_t v___x_4466_; 
v___x_4466_ = l_Lean_Syntax_matchesNull(v___x_4464_, v___x_4407_);
if (v___x_4466_ == 0)
{
lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v_env_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4467_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4468_ = lean_st_ref_get(v___y_4414_);
v_env_4469_ = lean_ctor_get(v___x_4468_, 0);
lean_inc_ref(v_env_4469_);
lean_dec(v___x_4468_);
v___x_4470_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4471_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4470_, v_env_4469_, v___x_4467_);
v___x_4472_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4473_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4471_, v___x_4472_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
lean_dec(v___x_4471_);
if (lean_obj_tag(v___x_4473_) == 0)
{
lean_object* v_a_4474_; lean_object* v___x_4476_; uint8_t v_isShared_4477_; uint8_t v_isSharedCheck_4504_; 
v_a_4474_ = lean_ctor_get(v___x_4473_, 0);
v_isSharedCheck_4504_ = !lean_is_exclusive(v___x_4473_);
if (v_isSharedCheck_4504_ == 0)
{
v___x_4476_ = v___x_4473_;
v_isShared_4477_ = v_isSharedCheck_4504_;
goto v_resetjp_4475_;
}
else
{
lean_inc(v_a_4474_);
lean_dec(v___x_4473_);
v___x_4476_ = lean_box(0);
v_isShared_4477_ = v_isSharedCheck_4504_;
goto v_resetjp_4475_;
}
v_resetjp_4475_:
{
lean_object* v_fst_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4502_; 
v_fst_4478_ = lean_ctor_get(v_a_4474_, 0);
v_isSharedCheck_4502_ = !lean_is_exclusive(v_a_4474_);
if (v_isSharedCheck_4502_ == 0)
{
lean_object* v_unused_4503_; 
v_unused_4503_ = lean_ctor_get(v_a_4474_, 1);
lean_dec(v_unused_4503_);
v___x_4480_ = v_a_4474_;
v_isShared_4481_ = v_isSharedCheck_4502_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_fst_4478_);
lean_dec(v_a_4474_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4502_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
if (lean_obj_tag(v_fst_4478_) == 0)
{
lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4485_; 
lean_del_object(v___x_4476_);
v___x_4482_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4483_ = l_Lean_MessageData_ofName(v___x_4467_);
lean_inc_ref(v___x_4483_);
if (v_isShared_4481_ == 0)
{
lean_ctor_set_tag(v___x_4480_, 7);
lean_ctor_set(v___x_4480_, 1, v___x_4483_);
lean_ctor_set(v___x_4480_, 0, v___x_4482_);
v___x_4485_ = v___x_4480_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4497_, 1, v___x_4483_);
v___x_4485_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___x_4486_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4487_, 0, v___x_4485_);
lean_ctor_set(v___x_4487_, 1, v___x_4486_);
v___x_4488_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4489_ = l_Lean_indentD(v___x_4488_);
v___x_4490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4490_, 0, v___x_4487_);
lean_ctor_set(v___x_4490_, 1, v___x_4489_);
v___x_4491_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4492_, 0, v___x_4490_);
lean_ctor_set(v___x_4492_, 1, v___x_4491_);
v___x_4493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4492_);
lean_ctor_set(v___x_4493_, 1, v___x_4483_);
v___x_4494_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4495_, 0, v___x_4493_);
lean_ctor_set(v___x_4495_, 1, v___x_4494_);
v___x_4496_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4495_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
return v___x_4496_;
}
}
else
{
lean_object* v_val_4498_; lean_object* v___x_4500_; 
lean_del_object(v___x_4480_);
lean_dec(v___x_4467_);
lean_dec(v_stx_2367_);
v_val_4498_ = lean_ctor_get(v_fst_4478_, 0);
lean_inc(v_val_4498_);
lean_dec_ref_known(v_fst_4478_, 1);
if (v_isShared_4477_ == 0)
{
lean_ctor_set(v___x_4476_, 0, v_val_4498_);
v___x_4500_ = v___x_4476_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v_val_4498_);
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
}
else
{
lean_object* v_a_4505_; lean_object* v___x_4507_; uint8_t v_isShared_4508_; uint8_t v_isSharedCheck_4512_; 
lean_dec(v___x_4467_);
lean_dec(v_stx_2367_);
v_a_4505_ = lean_ctor_get(v___x_4473_, 0);
v_isSharedCheck_4512_ = !lean_is_exclusive(v___x_4473_);
if (v_isSharedCheck_4512_ == 0)
{
v___x_4507_ = v___x_4473_;
v_isShared_4508_ = v_isSharedCheck_4512_;
goto v_resetjp_4506_;
}
else
{
lean_inc(v_a_4505_);
lean_dec(v___x_4473_);
v___x_4507_ = lean_box(0);
v_isShared_4508_ = v_isSharedCheck_4512_;
goto v_resetjp_4506_;
}
v_resetjp_4506_:
{
lean_object* v___x_4510_; 
if (v_isShared_4508_ == 0)
{
v___x_4510_ = v___x_4507_;
goto v_reusejp_4509_;
}
else
{
lean_object* v_reuseFailAlloc_4511_; 
v_reuseFailAlloc_4511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4511_, 0, v_a_4505_);
v___x_4510_ = v_reuseFailAlloc_4511_;
goto v_reusejp_4509_;
}
v_reusejp_4509_:
{
return v___x_4510_;
}
}
}
}
else
{
lean_dec(v_stx_2367_);
goto v___jp_2393_;
}
}
else
{
lean_dec(v___x_4464_);
lean_dec(v_stx_2367_);
goto v___jp_2393_;
}
}
}
}
}
}
else
{
lean_object* v___x_4562_; lean_object* v___x_4563_; uint8_t v___x_4564_; 
v___x_4562_ = lean_unsigned_to_nat(1u);
v___x_4563_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4562_);
v___x_4564_ = l_Lean_Syntax_isNone(v___x_4563_);
if (v___x_4564_ == 0)
{
uint8_t v___x_4565_; 
v___x_4565_ = l_Lean_Syntax_matchesNull(v___x_4563_, v___x_4562_);
if (v___x_4565_ == 0)
{
lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v_env_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4566_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4567_ = lean_st_ref_get(v_a_2373_);
v_env_4568_ = lean_ctor_get(v___x_4567_, 0);
lean_inc_ref(v_env_4568_);
lean_dec(v___x_4567_);
v___x_4569_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4570_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4569_, v_env_4568_, v___x_4566_);
v___x_4571_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4572_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4570_, v___x_4571_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4570_);
if (lean_obj_tag(v___x_4572_) == 0)
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4603_; 
v_a_4573_ = lean_ctor_get(v___x_4572_, 0);
v_isSharedCheck_4603_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4603_ == 0)
{
v___x_4575_ = v___x_4572_;
v_isShared_4576_ = v_isSharedCheck_4603_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v___x_4572_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4603_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v_fst_4577_; lean_object* v___x_4579_; uint8_t v_isShared_4580_; uint8_t v_isSharedCheck_4601_; 
v_fst_4577_ = lean_ctor_get(v_a_4573_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v_a_4573_);
if (v_isSharedCheck_4601_ == 0)
{
lean_object* v_unused_4602_; 
v_unused_4602_ = lean_ctor_get(v_a_4573_, 1);
lean_dec(v_unused_4602_);
v___x_4579_ = v_a_4573_;
v_isShared_4580_ = v_isSharedCheck_4601_;
goto v_resetjp_4578_;
}
else
{
lean_inc(v_fst_4577_);
lean_dec(v_a_4573_);
v___x_4579_ = lean_box(0);
v_isShared_4580_ = v_isSharedCheck_4601_;
goto v_resetjp_4578_;
}
v_resetjp_4578_:
{
if (lean_obj_tag(v_fst_4577_) == 0)
{
lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4584_; 
lean_del_object(v___x_4575_);
v___x_4581_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4582_ = l_Lean_MessageData_ofName(v___x_4566_);
lean_inc_ref(v___x_4582_);
if (v_isShared_4580_ == 0)
{
lean_ctor_set_tag(v___x_4579_, 7);
lean_ctor_set(v___x_4579_, 1, v___x_4582_);
lean_ctor_set(v___x_4579_, 0, v___x_4581_);
v___x_4584_ = v___x_4579_;
goto v_reusejp_4583_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v___x_4581_);
lean_ctor_set(v_reuseFailAlloc_4596_, 1, v___x_4582_);
v___x_4584_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4583_;
}
v_reusejp_4583_:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; 
v___x_4585_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4586_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4586_, 0, v___x_4584_);
lean_ctor_set(v___x_4586_, 1, v___x_4585_);
v___x_4587_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4588_ = l_Lean_indentD(v___x_4587_);
v___x_4589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4589_, 0, v___x_4586_);
lean_ctor_set(v___x_4589_, 1, v___x_4588_);
v___x_4590_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4591_, 0, v___x_4589_);
lean_ctor_set(v___x_4591_, 1, v___x_4590_);
v___x_4592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4592_, 0, v___x_4591_);
lean_ctor_set(v___x_4592_, 1, v___x_4582_);
v___x_4593_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4594_, 0, v___x_4592_);
lean_ctor_set(v___x_4594_, 1, v___x_4593_);
v___x_4595_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4594_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4595_;
}
}
else
{
lean_object* v_val_4597_; lean_object* v___x_4599_; 
lean_del_object(v___x_4579_);
lean_dec(v___x_4566_);
lean_dec(v_stx_2367_);
v_val_4597_ = lean_ctor_get(v_fst_4577_, 0);
lean_inc(v_val_4597_);
lean_dec_ref_known(v_fst_4577_, 1);
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 0, v_val_4597_);
v___x_4599_ = v___x_4575_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_val_4597_);
v___x_4599_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
return v___x_4599_;
}
}
}
}
}
else
{
lean_object* v_a_4604_; lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4611_; 
lean_dec(v___x_4566_);
lean_dec(v_stx_2367_);
v_a_4604_ = lean_ctor_get(v___x_4572_, 0);
v_isSharedCheck_4611_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4611_ == 0)
{
v___x_4606_ = v___x_4572_;
v_isShared_4607_ = v_isSharedCheck_4611_;
goto v_resetjp_4605_;
}
else
{
lean_inc(v_a_4604_);
lean_dec(v___x_4572_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4611_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v___x_4609_; 
if (v_isShared_4607_ == 0)
{
v___x_4609_ = v___x_4606_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4610_; 
v_reuseFailAlloc_4610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4610_, 0, v_a_4604_);
v___x_4609_ = v_reuseFailAlloc_4610_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
return v___x_4609_;
}
}
}
}
else
{
v___y_2624_ = v_a_2368_;
v___y_2625_ = v_a_2369_;
v___y_2626_ = v_a_2370_;
v___y_2627_ = v_a_2371_;
v___y_2628_ = v_a_2372_;
v___y_2629_ = v_a_2373_;
goto v___jp_2623_;
}
}
else
{
lean_dec(v___x_4563_);
v___y_2624_ = v_a_2368_;
v___y_2625_ = v_a_2369_;
v___y_2626_ = v_a_2370_;
v___y_2627_ = v_a_2371_;
v___y_2628_ = v_a_2372_;
v___y_2629_ = v_a_2373_;
goto v___jp_2623_;
}
}
}
else
{
lean_object* v___x_4612_; lean_object* v___x_4613_; uint8_t v___x_4614_; 
v___x_4612_ = lean_unsigned_to_nat(1u);
v___x_4613_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4612_);
v___x_4614_ = l_Lean_Syntax_isNone(v___x_4613_);
if (v___x_4614_ == 0)
{
uint8_t v___x_4615_; 
v___x_4615_ = l_Lean_Syntax_matchesNull(v___x_4613_, v___x_4612_);
if (v___x_4615_ == 0)
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v_env_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4616_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4617_ = lean_st_ref_get(v_a_2373_);
v_env_4618_ = lean_ctor_get(v___x_4617_, 0);
lean_inc_ref(v_env_4618_);
lean_dec(v___x_4617_);
v___x_4619_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4620_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4619_, v_env_4618_, v___x_4616_);
v___x_4621_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4622_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4620_, v___x_4621_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4620_);
if (lean_obj_tag(v___x_4622_) == 0)
{
lean_object* v_a_4623_; lean_object* v___x_4625_; uint8_t v_isShared_4626_; uint8_t v_isSharedCheck_4653_; 
v_a_4623_ = lean_ctor_get(v___x_4622_, 0);
v_isSharedCheck_4653_ = !lean_is_exclusive(v___x_4622_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4625_ = v___x_4622_;
v_isShared_4626_ = v_isSharedCheck_4653_;
goto v_resetjp_4624_;
}
else
{
lean_inc(v_a_4623_);
lean_dec(v___x_4622_);
v___x_4625_ = lean_box(0);
v_isShared_4626_ = v_isSharedCheck_4653_;
goto v_resetjp_4624_;
}
v_resetjp_4624_:
{
lean_object* v_fst_4627_; lean_object* v___x_4629_; uint8_t v_isShared_4630_; uint8_t v_isSharedCheck_4651_; 
v_fst_4627_ = lean_ctor_get(v_a_4623_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v_a_4623_);
if (v_isSharedCheck_4651_ == 0)
{
lean_object* v_unused_4652_; 
v_unused_4652_ = lean_ctor_get(v_a_4623_, 1);
lean_dec(v_unused_4652_);
v___x_4629_ = v_a_4623_;
v_isShared_4630_ = v_isSharedCheck_4651_;
goto v_resetjp_4628_;
}
else
{
lean_inc(v_fst_4627_);
lean_dec(v_a_4623_);
v___x_4629_ = lean_box(0);
v_isShared_4630_ = v_isSharedCheck_4651_;
goto v_resetjp_4628_;
}
v_resetjp_4628_:
{
if (lean_obj_tag(v_fst_4627_) == 0)
{
lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4634_; 
lean_del_object(v___x_4625_);
v___x_4631_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4632_ = l_Lean_MessageData_ofName(v___x_4616_);
lean_inc_ref(v___x_4632_);
if (v_isShared_4630_ == 0)
{
lean_ctor_set_tag(v___x_4629_, 7);
lean_ctor_set(v___x_4629_, 1, v___x_4632_);
lean_ctor_set(v___x_4629_, 0, v___x_4631_);
v___x_4634_ = v___x_4629_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v___x_4631_);
lean_ctor_set(v_reuseFailAlloc_4646_, 1, v___x_4632_);
v___x_4634_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v___x_4635_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4634_);
lean_ctor_set(v___x_4636_, 1, v___x_4635_);
v___x_4637_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4638_ = l_Lean_indentD(v___x_4637_);
v___x_4639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4639_, 0, v___x_4636_);
lean_ctor_set(v___x_4639_, 1, v___x_4638_);
v___x_4640_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4639_);
lean_ctor_set(v___x_4641_, 1, v___x_4640_);
v___x_4642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4642_, 0, v___x_4641_);
lean_ctor_set(v___x_4642_, 1, v___x_4632_);
v___x_4643_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4644_, 0, v___x_4642_);
lean_ctor_set(v___x_4644_, 1, v___x_4643_);
v___x_4645_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4644_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4645_;
}
}
else
{
lean_object* v_val_4647_; lean_object* v___x_4649_; 
lean_del_object(v___x_4629_);
lean_dec(v___x_4616_);
lean_dec(v_stx_2367_);
v_val_4647_ = lean_ctor_get(v_fst_4627_, 0);
lean_inc(v_val_4647_);
lean_dec_ref_known(v_fst_4627_, 1);
if (v_isShared_4626_ == 0)
{
lean_ctor_set(v___x_4625_, 0, v_val_4647_);
v___x_4649_ = v___x_4625_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v_val_4647_);
v___x_4649_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
return v___x_4649_;
}
}
}
}
}
else
{
lean_object* v_a_4654_; lean_object* v___x_4656_; uint8_t v_isShared_4657_; uint8_t v_isSharedCheck_4661_; 
lean_dec(v___x_4616_);
lean_dec(v_stx_2367_);
v_a_4654_ = lean_ctor_get(v___x_4622_, 0);
v_isSharedCheck_4661_ = !lean_is_exclusive(v___x_4622_);
if (v_isSharedCheck_4661_ == 0)
{
v___x_4656_ = v___x_4622_;
v_isShared_4657_ = v_isSharedCheck_4661_;
goto v_resetjp_4655_;
}
else
{
lean_inc(v_a_4654_);
lean_dec(v___x_4622_);
v___x_4656_ = lean_box(0);
v_isShared_4657_ = v_isSharedCheck_4661_;
goto v_resetjp_4655_;
}
v_resetjp_4655_:
{
lean_object* v___x_4659_; 
if (v_isShared_4657_ == 0)
{
v___x_4659_ = v___x_4656_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v_a_4654_);
v___x_4659_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
return v___x_4659_;
}
}
}
}
else
{
v___y_2424_ = v_a_2368_;
v___y_2425_ = v_a_2369_;
v___y_2426_ = v_a_2370_;
v___y_2427_ = v_a_2371_;
v___y_2428_ = v_a_2372_;
v___y_2429_ = v_a_2373_;
goto v___jp_2423_;
}
}
else
{
lean_dec(v___x_4613_);
v___y_2424_ = v_a_2368_;
v___y_2425_ = v_a_2369_;
v___y_2426_ = v_a_2370_;
v___y_2427_ = v_a_2371_;
v___y_2428_ = v_a_2372_;
v___y_2429_ = v_a_2373_;
goto v___jp_2423_;
}
}
v___jp_2623_:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; uint8_t v___x_2633_; 
v___x_2630_ = lean_unsigned_to_nat(2u);
v___x_2631_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2630_);
v___x_2632_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2633_ = l_Lean_Syntax_isOfKind(v___x_2631_, v___x_2632_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v_env_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
lean_inc_n(v_stx_2367_, 2);
v___x_2634_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2635_ = lean_st_ref_get(v___y_2629_);
v_env_2636_ = lean_ctor_get(v___x_2635_, 0);
lean_inc_ref(v_env_2636_);
lean_dec(v___x_2635_);
v___x_2637_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2638_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2637_, v_env_2636_, v___x_2634_);
v___x_2639_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2640_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2638_, v___x_2639_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
lean_dec(v___x_2638_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2671_; 
v_a_2641_ = lean_ctor_get(v___x_2640_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2643_ = v___x_2640_;
v_isShared_2644_ = v_isSharedCheck_2671_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v___x_2640_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2671_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v_fst_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2669_; 
v_fst_2645_ = lean_ctor_get(v_a_2641_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v_a_2641_);
if (v_isSharedCheck_2669_ == 0)
{
lean_object* v_unused_2670_; 
v_unused_2670_ = lean_ctor_get(v_a_2641_, 1);
lean_dec(v_unused_2670_);
v___x_2647_ = v_a_2641_;
v_isShared_2648_ = v_isSharedCheck_2669_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_fst_2645_);
lean_dec(v_a_2641_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2669_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
if (lean_obj_tag(v_fst_2645_) == 0)
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2652_; 
lean_del_object(v___x_2643_);
v___x_2649_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2650_ = l_Lean_MessageData_ofName(v___x_2634_);
lean_inc_ref(v___x_2650_);
if (v_isShared_2648_ == 0)
{
lean_ctor_set_tag(v___x_2647_, 7);
lean_ctor_set(v___x_2647_, 1, v___x_2650_);
lean_ctor_set(v___x_2647_, 0, v___x_2649_);
v___x_2652_ = v___x_2647_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v___x_2649_);
lean_ctor_set(v_reuseFailAlloc_2664_, 1, v___x_2650_);
v___x_2652_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2653_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2652_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_2656_ = l_Lean_indentD(v___x_2655_);
v___x_2657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2654_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2659_, 0, v___x_2657_);
lean_ctor_set(v___x_2659_, 1, v___x_2658_);
v___x_2660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2659_);
lean_ctor_set(v___x_2660_, 1, v___x_2650_);
v___x_2661_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2660_);
lean_ctor_set(v___x_2662_, 1, v___x_2661_);
v___x_2663_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2662_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
return v___x_2663_;
}
}
else
{
lean_object* v_val_2665_; lean_object* v___x_2667_; 
lean_del_object(v___x_2647_);
lean_dec(v___x_2634_);
lean_dec(v_stx_2367_);
v_val_2665_ = lean_ctor_get(v_fst_2645_, 0);
lean_inc(v_val_2665_);
lean_dec_ref_known(v_fst_2645_, 1);
if (v_isShared_2644_ == 0)
{
lean_ctor_set(v___x_2643_, 0, v_val_2665_);
v___x_2667_ = v___x_2643_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_val_2665_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v___x_2634_);
lean_dec(v_stx_2367_);
v_a_2672_ = lean_ctor_get(v___x_2640_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2640_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2640_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
else
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2680_ = lean_unsigned_to_nat(3u);
v___x_2681_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2680_);
lean_dec(v_stx_2367_);
v___x_2682_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2622_, v___x_2681_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
return v___x_2682_;
}
}
}
else
{
lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; uint8_t v___x_4665_; 
v___x_4662_ = lean_unsigned_to_nat(0u);
v___x_4663_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4662_);
v___x_4664_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1));
v___x_4665_ = l_Lean_Syntax_isOfKind(v___x_4663_, v___x_4664_);
if (v___x_4665_ == 0)
{
lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v_env_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4666_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4667_ = lean_st_ref_get(v_a_2373_);
v_env_4668_ = lean_ctor_get(v___x_4667_, 0);
lean_inc_ref(v_env_4668_);
lean_dec(v___x_4667_);
v___x_4669_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4670_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4669_, v_env_4668_, v___x_4666_);
v___x_4671_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4672_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4670_, v___x_4671_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4670_);
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4703_; 
v_a_4673_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4675_ = v___x_4672_;
v_isShared_4676_ = v_isSharedCheck_4703_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4672_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4703_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v_fst_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4701_; 
v_fst_4677_ = lean_ctor_get(v_a_4673_, 0);
v_isSharedCheck_4701_ = !lean_is_exclusive(v_a_4673_);
if (v_isSharedCheck_4701_ == 0)
{
lean_object* v_unused_4702_; 
v_unused_4702_ = lean_ctor_get(v_a_4673_, 1);
lean_dec(v_unused_4702_);
v___x_4679_ = v_a_4673_;
v_isShared_4680_ = v_isSharedCheck_4701_;
goto v_resetjp_4678_;
}
else
{
lean_inc(v_fst_4677_);
lean_dec(v_a_4673_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4701_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
if (lean_obj_tag(v_fst_4677_) == 0)
{
lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4684_; 
lean_del_object(v___x_4675_);
v___x_4681_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4682_ = l_Lean_MessageData_ofName(v___x_4666_);
lean_inc_ref(v___x_4682_);
if (v_isShared_4680_ == 0)
{
lean_ctor_set_tag(v___x_4679_, 7);
lean_ctor_set(v___x_4679_, 1, v___x_4682_);
lean_ctor_set(v___x_4679_, 0, v___x_4681_);
v___x_4684_ = v___x_4679_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v___x_4681_);
lean_ctor_set(v_reuseFailAlloc_4696_, 1, v___x_4682_);
v___x_4684_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; 
v___x_4685_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4686_, 0, v___x_4684_);
lean_ctor_set(v___x_4686_, 1, v___x_4685_);
v___x_4687_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4688_ = l_Lean_indentD(v___x_4687_);
v___x_4689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4689_, 0, v___x_4686_);
lean_ctor_set(v___x_4689_, 1, v___x_4688_);
v___x_4690_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4691_, 0, v___x_4689_);
lean_ctor_set(v___x_4691_, 1, v___x_4690_);
v___x_4692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4692_, 0, v___x_4691_);
lean_ctor_set(v___x_4692_, 1, v___x_4682_);
v___x_4693_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4694_, 0, v___x_4692_);
lean_ctor_set(v___x_4694_, 1, v___x_4693_);
v___x_4695_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4694_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4695_;
}
}
else
{
lean_object* v_val_4697_; lean_object* v___x_4699_; 
lean_del_object(v___x_4679_);
lean_dec(v___x_4666_);
lean_dec(v_stx_2367_);
v_val_4697_ = lean_ctor_get(v_fst_4677_, 0);
lean_inc(v_val_4697_);
lean_dec_ref_known(v_fst_4677_, 1);
if (v_isShared_4676_ == 0)
{
lean_ctor_set(v___x_4675_, 0, v_val_4697_);
v___x_4699_ = v___x_4675_;
goto v_reusejp_4698_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v_val_4697_);
v___x_4699_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4698_;
}
v_reusejp_4698_:
{
return v___x_4699_;
}
}
}
}
}
else
{
lean_object* v_a_4704_; lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4711_; 
lean_dec(v___x_4666_);
lean_dec(v_stx_2367_);
v_a_4704_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4711_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4711_ == 0)
{
v___x_4706_ = v___x_4672_;
v_isShared_4707_ = v_isSharedCheck_4711_;
goto v_resetjp_4705_;
}
else
{
lean_inc(v_a_4704_);
lean_dec(v___x_4672_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4711_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
lean_object* v___x_4709_; 
if (v_isShared_4707_ == 0)
{
v___x_4709_ = v___x_4706_;
goto v_reusejp_4708_;
}
else
{
lean_object* v_reuseFailAlloc_4710_; 
v_reuseFailAlloc_4710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4710_, 0, v_a_4704_);
v___x_4709_ = v_reuseFailAlloc_4710_;
goto v_reusejp_4708_;
}
v_reusejp_4708_:
{
return v___x_4709_;
}
}
}
}
else
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; uint8_t v___x_4715_; 
v___x_4712_ = lean_unsigned_to_nat(1u);
v___x_4713_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4712_);
v___x_4714_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92));
lean_inc(v___x_4713_);
v___x_4715_ = l_Lean_Syntax_isOfKind(v___x_4713_, v___x_4714_);
if (v___x_4715_ == 0)
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v_env_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; 
lean_dec(v___x_4713_);
lean_inc_n(v_stx_2367_, 2);
v___x_4716_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4717_ = lean_st_ref_get(v_a_2373_);
v_env_4718_ = lean_ctor_get(v___x_4717_, 0);
lean_inc_ref(v_env_4718_);
lean_dec(v___x_4717_);
v___x_4719_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4720_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4719_, v_env_4718_, v___x_4716_);
v___x_4721_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4722_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4720_, v___x_4721_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4720_);
if (lean_obj_tag(v___x_4722_) == 0)
{
lean_object* v_a_4723_; lean_object* v___x_4725_; uint8_t v_isShared_4726_; uint8_t v_isSharedCheck_4753_; 
v_a_4723_ = lean_ctor_get(v___x_4722_, 0);
v_isSharedCheck_4753_ = !lean_is_exclusive(v___x_4722_);
if (v_isSharedCheck_4753_ == 0)
{
v___x_4725_ = v___x_4722_;
v_isShared_4726_ = v_isSharedCheck_4753_;
goto v_resetjp_4724_;
}
else
{
lean_inc(v_a_4723_);
lean_dec(v___x_4722_);
v___x_4725_ = lean_box(0);
v_isShared_4726_ = v_isSharedCheck_4753_;
goto v_resetjp_4724_;
}
v_resetjp_4724_:
{
lean_object* v_fst_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4751_; 
v_fst_4727_ = lean_ctor_get(v_a_4723_, 0);
v_isSharedCheck_4751_ = !lean_is_exclusive(v_a_4723_);
if (v_isSharedCheck_4751_ == 0)
{
lean_object* v_unused_4752_; 
v_unused_4752_ = lean_ctor_get(v_a_4723_, 1);
lean_dec(v_unused_4752_);
v___x_4729_ = v_a_4723_;
v_isShared_4730_ = v_isSharedCheck_4751_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_fst_4727_);
lean_dec(v_a_4723_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4751_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
if (lean_obj_tag(v_fst_4727_) == 0)
{
lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4734_; 
lean_del_object(v___x_4725_);
v___x_4731_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4732_ = l_Lean_MessageData_ofName(v___x_4716_);
lean_inc_ref(v___x_4732_);
if (v_isShared_4730_ == 0)
{
lean_ctor_set_tag(v___x_4729_, 7);
lean_ctor_set(v___x_4729_, 1, v___x_4732_);
lean_ctor_set(v___x_4729_, 0, v___x_4731_);
v___x_4734_ = v___x_4729_;
goto v_reusejp_4733_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v___x_4731_);
lean_ctor_set(v_reuseFailAlloc_4746_, 1, v___x_4732_);
v___x_4734_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4733_;
}
v_reusejp_4733_:
{
lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
v___x_4735_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4736_, 0, v___x_4734_);
lean_ctor_set(v___x_4736_, 1, v___x_4735_);
v___x_4737_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4738_ = l_Lean_indentD(v___x_4737_);
v___x_4739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4739_, 0, v___x_4736_);
lean_ctor_set(v___x_4739_, 1, v___x_4738_);
v___x_4740_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4741_, 0, v___x_4739_);
lean_ctor_set(v___x_4741_, 1, v___x_4740_);
v___x_4742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4742_, 0, v___x_4741_);
lean_ctor_set(v___x_4742_, 1, v___x_4732_);
v___x_4743_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4744_, 0, v___x_4742_);
lean_ctor_set(v___x_4744_, 1, v___x_4743_);
v___x_4745_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4744_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4745_;
}
}
else
{
lean_object* v_val_4747_; lean_object* v___x_4749_; 
lean_del_object(v___x_4729_);
lean_dec(v___x_4716_);
lean_dec(v_stx_2367_);
v_val_4747_ = lean_ctor_get(v_fst_4727_, 0);
lean_inc(v_val_4747_);
lean_dec_ref_known(v_fst_4727_, 1);
if (v_isShared_4726_ == 0)
{
lean_ctor_set(v___x_4725_, 0, v_val_4747_);
v___x_4749_ = v___x_4725_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_val_4747_);
v___x_4749_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
return v___x_4749_;
}
}
}
}
}
else
{
lean_object* v_a_4754_; lean_object* v___x_4756_; uint8_t v_isShared_4757_; uint8_t v_isSharedCheck_4761_; 
lean_dec(v___x_4716_);
lean_dec(v_stx_2367_);
v_a_4754_ = lean_ctor_get(v___x_4722_, 0);
v_isSharedCheck_4761_ = !lean_is_exclusive(v___x_4722_);
if (v_isSharedCheck_4761_ == 0)
{
v___x_4756_ = v___x_4722_;
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
else
{
lean_inc(v_a_4754_);
lean_dec(v___x_4722_);
v___x_4756_ = lean_box(0);
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
v_resetjp_4755_:
{
lean_object* v___x_4759_; 
if (v_isShared_4757_ == 0)
{
v___x_4759_ = v___x_4756_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_a_4754_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
return v___x_4759_;
}
}
}
}
else
{
lean_object* v___x_4762_; uint8_t v___x_4763_; 
v___x_4762_ = l_Lean_Syntax_getArg(v___x_4713_, v___x_4662_);
lean_dec(v___x_4713_);
lean_inc(v___x_4762_);
v___x_4763_ = l_Lean_Syntax_matchesNull(v___x_4762_, v___x_4712_);
if (v___x_4763_ == 0)
{
lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v_env_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; 
lean_dec(v___x_4762_);
lean_inc_n(v_stx_2367_, 2);
v___x_4764_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4765_ = lean_st_ref_get(v_a_2373_);
v_env_4766_ = lean_ctor_get(v___x_4765_, 0);
lean_inc_ref(v_env_4766_);
lean_dec(v___x_4765_);
v___x_4767_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4768_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4767_, v_env_4766_, v___x_4764_);
v___x_4769_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4770_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4768_, v___x_4769_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4768_);
if (lean_obj_tag(v___x_4770_) == 0)
{
lean_object* v_a_4771_; lean_object* v___x_4773_; uint8_t v_isShared_4774_; uint8_t v_isSharedCheck_4801_; 
v_a_4771_ = lean_ctor_get(v___x_4770_, 0);
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4770_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4773_ = v___x_4770_;
v_isShared_4774_ = v_isSharedCheck_4801_;
goto v_resetjp_4772_;
}
else
{
lean_inc(v_a_4771_);
lean_dec(v___x_4770_);
v___x_4773_ = lean_box(0);
v_isShared_4774_ = v_isSharedCheck_4801_;
goto v_resetjp_4772_;
}
v_resetjp_4772_:
{
lean_object* v_fst_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4799_; 
v_fst_4775_ = lean_ctor_get(v_a_4771_, 0);
v_isSharedCheck_4799_ = !lean_is_exclusive(v_a_4771_);
if (v_isSharedCheck_4799_ == 0)
{
lean_object* v_unused_4800_; 
v_unused_4800_ = lean_ctor_get(v_a_4771_, 1);
lean_dec(v_unused_4800_);
v___x_4777_ = v_a_4771_;
v_isShared_4778_ = v_isSharedCheck_4799_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_fst_4775_);
lean_dec(v_a_4771_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4799_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
if (lean_obj_tag(v_fst_4775_) == 0)
{
lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4782_; 
lean_del_object(v___x_4773_);
v___x_4779_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4780_ = l_Lean_MessageData_ofName(v___x_4764_);
lean_inc_ref(v___x_4780_);
if (v_isShared_4778_ == 0)
{
lean_ctor_set_tag(v___x_4777_, 7);
lean_ctor_set(v___x_4777_, 1, v___x_4780_);
lean_ctor_set(v___x_4777_, 0, v___x_4779_);
v___x_4782_ = v___x_4777_;
goto v_reusejp_4781_;
}
else
{
lean_object* v_reuseFailAlloc_4794_; 
v_reuseFailAlloc_4794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4794_, 0, v___x_4779_);
lean_ctor_set(v_reuseFailAlloc_4794_, 1, v___x_4780_);
v___x_4782_ = v_reuseFailAlloc_4794_;
goto v_reusejp_4781_;
}
v_reusejp_4781_:
{
lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v___x_4783_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4784_, 0, v___x_4782_);
lean_ctor_set(v___x_4784_, 1, v___x_4783_);
v___x_4785_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4786_ = l_Lean_indentD(v___x_4785_);
v___x_4787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4787_, 0, v___x_4784_);
lean_ctor_set(v___x_4787_, 1, v___x_4786_);
v___x_4788_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4789_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4789_, 0, v___x_4787_);
lean_ctor_set(v___x_4789_, 1, v___x_4788_);
v___x_4790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4790_, 0, v___x_4789_);
lean_ctor_set(v___x_4790_, 1, v___x_4780_);
v___x_4791_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4792_, 0, v___x_4790_);
lean_ctor_set(v___x_4792_, 1, v___x_4791_);
v___x_4793_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4792_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4793_;
}
}
else
{
lean_object* v_val_4795_; lean_object* v___x_4797_; 
lean_del_object(v___x_4777_);
lean_dec(v___x_4764_);
lean_dec(v_stx_2367_);
v_val_4795_ = lean_ctor_get(v_fst_4775_, 0);
lean_inc(v_val_4795_);
lean_dec_ref_known(v_fst_4775_, 1);
if (v_isShared_4774_ == 0)
{
lean_ctor_set(v___x_4773_, 0, v_val_4795_);
v___x_4797_ = v___x_4773_;
goto v_reusejp_4796_;
}
else
{
lean_object* v_reuseFailAlloc_4798_; 
v_reuseFailAlloc_4798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4798_, 0, v_val_4795_);
v___x_4797_ = v_reuseFailAlloc_4798_;
goto v_reusejp_4796_;
}
v_reusejp_4796_:
{
return v___x_4797_;
}
}
}
}
}
else
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4809_; 
lean_dec(v___x_4764_);
lean_dec(v_stx_2367_);
v_a_4802_ = lean_ctor_get(v___x_4770_, 0);
v_isSharedCheck_4809_ = !lean_is_exclusive(v___x_4770_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4804_ = v___x_4770_;
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v___x_4770_);
v___x_4804_ = lean_box(0);
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
v_resetjp_4803_:
{
lean_object* v___x_4807_; 
if (v_isShared_4805_ == 0)
{
v___x_4807_ = v___x_4804_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v_a_4802_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
}
else
{
lean_object* v___x_4810_; lean_object* v___x_4811_; uint8_t v___x_4812_; 
v___x_4810_ = l_Lean_Syntax_getArg(v___x_4762_, v___x_4662_);
lean_dec(v___x_4762_);
v___x_4811_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94));
v___x_4812_ = l_Lean_Syntax_isOfKind(v___x_4810_, v___x_4811_);
if (v___x_4812_ == 0)
{
lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v_env_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4813_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4814_ = lean_st_ref_get(v_a_2373_);
v_env_4815_ = lean_ctor_get(v___x_4814_, 0);
lean_inc_ref(v_env_4815_);
lean_dec(v___x_4814_);
v___x_4816_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4817_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4816_, v_env_4815_, v___x_4813_);
v___x_4818_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4819_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4817_, v___x_4818_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4817_);
if (lean_obj_tag(v___x_4819_) == 0)
{
lean_object* v_a_4820_; lean_object* v___x_4822_; uint8_t v_isShared_4823_; uint8_t v_isSharedCheck_4850_; 
v_a_4820_ = lean_ctor_get(v___x_4819_, 0);
v_isSharedCheck_4850_ = !lean_is_exclusive(v___x_4819_);
if (v_isSharedCheck_4850_ == 0)
{
v___x_4822_ = v___x_4819_;
v_isShared_4823_ = v_isSharedCheck_4850_;
goto v_resetjp_4821_;
}
else
{
lean_inc(v_a_4820_);
lean_dec(v___x_4819_);
v___x_4822_ = lean_box(0);
v_isShared_4823_ = v_isSharedCheck_4850_;
goto v_resetjp_4821_;
}
v_resetjp_4821_:
{
lean_object* v_fst_4824_; lean_object* v___x_4826_; uint8_t v_isShared_4827_; uint8_t v_isSharedCheck_4848_; 
v_fst_4824_ = lean_ctor_get(v_a_4820_, 0);
v_isSharedCheck_4848_ = !lean_is_exclusive(v_a_4820_);
if (v_isSharedCheck_4848_ == 0)
{
lean_object* v_unused_4849_; 
v_unused_4849_ = lean_ctor_get(v_a_4820_, 1);
lean_dec(v_unused_4849_);
v___x_4826_ = v_a_4820_;
v_isShared_4827_ = v_isSharedCheck_4848_;
goto v_resetjp_4825_;
}
else
{
lean_inc(v_fst_4824_);
lean_dec(v_a_4820_);
v___x_4826_ = lean_box(0);
v_isShared_4827_ = v_isSharedCheck_4848_;
goto v_resetjp_4825_;
}
v_resetjp_4825_:
{
if (lean_obj_tag(v_fst_4824_) == 0)
{
lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4831_; 
lean_del_object(v___x_4822_);
v___x_4828_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4829_ = l_Lean_MessageData_ofName(v___x_4813_);
lean_inc_ref(v___x_4829_);
if (v_isShared_4827_ == 0)
{
lean_ctor_set_tag(v___x_4826_, 7);
lean_ctor_set(v___x_4826_, 1, v___x_4829_);
lean_ctor_set(v___x_4826_, 0, v___x_4828_);
v___x_4831_ = v___x_4826_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v___x_4828_);
lean_ctor_set(v_reuseFailAlloc_4843_, 1, v___x_4829_);
v___x_4831_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; 
v___x_4832_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4831_);
lean_ctor_set(v___x_4833_, 1, v___x_4832_);
v___x_4834_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4835_ = l_Lean_indentD(v___x_4834_);
v___x_4836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4836_, 0, v___x_4833_);
lean_ctor_set(v___x_4836_, 1, v___x_4835_);
v___x_4837_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4838_, 0, v___x_4836_);
lean_ctor_set(v___x_4838_, 1, v___x_4837_);
v___x_4839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4839_, 0, v___x_4838_);
lean_ctor_set(v___x_4839_, 1, v___x_4829_);
v___x_4840_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4841_, 0, v___x_4839_);
lean_ctor_set(v___x_4841_, 1, v___x_4840_);
v___x_4842_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4841_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4842_;
}
}
else
{
lean_object* v_val_4844_; lean_object* v___x_4846_; 
lean_del_object(v___x_4826_);
lean_dec(v___x_4813_);
lean_dec(v_stx_2367_);
v_val_4844_ = lean_ctor_get(v_fst_4824_, 0);
lean_inc(v_val_4844_);
lean_dec_ref_known(v_fst_4824_, 1);
if (v_isShared_4823_ == 0)
{
lean_ctor_set(v___x_4822_, 0, v_val_4844_);
v___x_4846_ = v___x_4822_;
goto v_reusejp_4845_;
}
else
{
lean_object* v_reuseFailAlloc_4847_; 
v_reuseFailAlloc_4847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4847_, 0, v_val_4844_);
v___x_4846_ = v_reuseFailAlloc_4847_;
goto v_reusejp_4845_;
}
v_reusejp_4845_:
{
return v___x_4846_;
}
}
}
}
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4858_; 
lean_dec(v___x_4813_);
lean_dec(v_stx_2367_);
v_a_4851_ = lean_ctor_get(v___x_4819_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4819_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4853_ = v___x_4819_;
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4819_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v___x_4856_; 
if (v_isShared_4854_ == 0)
{
v___x_4856_ = v___x_4853_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v_a_4851_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
return v___x_4856_;
}
}
}
}
else
{
lean_object* v___x_4859_; lean_object* v___x_4860_; 
lean_dec(v_stx_2367_);
v___x_4859_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_4860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4860_, 0, v___x_4859_);
return v___x_4860_;
}
}
}
}
}
}
else
{
lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; uint8_t v___x_4864_; 
v___x_4861_ = lean_unsigned_to_nat(1u);
v___x_4862_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4861_);
v___x_4863_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_4864_ = l_Lean_Syntax_isOfKind(v___x_4862_, v___x_4863_);
if (v___x_4864_ == 0)
{
lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v_env_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4865_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4866_ = lean_st_ref_get(v_a_2373_);
v_env_4867_ = lean_ctor_get(v___x_4866_, 0);
lean_inc_ref(v_env_4867_);
lean_dec(v___x_4866_);
v___x_4868_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4869_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4868_, v_env_4867_, v___x_4865_);
v___x_4870_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4871_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4869_, v___x_4870_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4869_);
if (lean_obj_tag(v___x_4871_) == 0)
{
lean_object* v_a_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4902_; 
v_a_4872_ = lean_ctor_get(v___x_4871_, 0);
v_isSharedCheck_4902_ = !lean_is_exclusive(v___x_4871_);
if (v_isSharedCheck_4902_ == 0)
{
v___x_4874_ = v___x_4871_;
v_isShared_4875_ = v_isSharedCheck_4902_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_a_4872_);
lean_dec(v___x_4871_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4902_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v_fst_4876_; lean_object* v___x_4878_; uint8_t v_isShared_4879_; uint8_t v_isSharedCheck_4900_; 
v_fst_4876_ = lean_ctor_get(v_a_4872_, 0);
v_isSharedCheck_4900_ = !lean_is_exclusive(v_a_4872_);
if (v_isSharedCheck_4900_ == 0)
{
lean_object* v_unused_4901_; 
v_unused_4901_ = lean_ctor_get(v_a_4872_, 1);
lean_dec(v_unused_4901_);
v___x_4878_ = v_a_4872_;
v_isShared_4879_ = v_isSharedCheck_4900_;
goto v_resetjp_4877_;
}
else
{
lean_inc(v_fst_4876_);
lean_dec(v_a_4872_);
v___x_4878_ = lean_box(0);
v_isShared_4879_ = v_isSharedCheck_4900_;
goto v_resetjp_4877_;
}
v_resetjp_4877_:
{
if (lean_obj_tag(v_fst_4876_) == 0)
{
lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4883_; 
lean_del_object(v___x_4874_);
v___x_4880_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4881_ = l_Lean_MessageData_ofName(v___x_4865_);
lean_inc_ref(v___x_4881_);
if (v_isShared_4879_ == 0)
{
lean_ctor_set_tag(v___x_4878_, 7);
lean_ctor_set(v___x_4878_, 1, v___x_4881_);
lean_ctor_set(v___x_4878_, 0, v___x_4880_);
v___x_4883_ = v___x_4878_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v___x_4880_);
lean_ctor_set(v_reuseFailAlloc_4895_, 1, v___x_4881_);
v___x_4883_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; 
v___x_4884_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4885_, 0, v___x_4883_);
lean_ctor_set(v___x_4885_, 1, v___x_4884_);
v___x_4886_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4887_ = l_Lean_indentD(v___x_4886_);
v___x_4888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4888_, 0, v___x_4885_);
lean_ctor_set(v___x_4888_, 1, v___x_4887_);
v___x_4889_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4890_, 0, v___x_4888_);
lean_ctor_set(v___x_4890_, 1, v___x_4889_);
v___x_4891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4891_, 0, v___x_4890_);
lean_ctor_set(v___x_4891_, 1, v___x_4881_);
v___x_4892_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4893_, 0, v___x_4891_);
lean_ctor_set(v___x_4893_, 1, v___x_4892_);
v___x_4894_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4893_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4894_;
}
}
else
{
lean_object* v_val_4896_; lean_object* v___x_4898_; 
lean_del_object(v___x_4878_);
lean_dec(v___x_4865_);
lean_dec(v_stx_2367_);
v_val_4896_ = lean_ctor_get(v_fst_4876_, 0);
lean_inc(v_val_4896_);
lean_dec_ref_known(v_fst_4876_, 1);
if (v_isShared_4875_ == 0)
{
lean_ctor_set(v___x_4874_, 0, v_val_4896_);
v___x_4898_ = v___x_4874_;
goto v_reusejp_4897_;
}
else
{
lean_object* v_reuseFailAlloc_4899_; 
v_reuseFailAlloc_4899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4899_, 0, v_val_4896_);
v___x_4898_ = v_reuseFailAlloc_4899_;
goto v_reusejp_4897_;
}
v_reusejp_4897_:
{
return v___x_4898_;
}
}
}
}
}
else
{
lean_object* v_a_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4910_; 
lean_dec(v___x_4865_);
lean_dec(v_stx_2367_);
v_a_4903_ = lean_ctor_get(v___x_4871_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4871_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4905_ = v___x_4871_;
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_a_4903_);
lean_dec(v___x_4871_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4908_; 
if (v_isShared_4906_ == 0)
{
v___x_4908_ = v___x_4905_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v_a_4903_);
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
else
{
lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; uint8_t v___x_4914_; 
v___x_4911_ = lean_unsigned_to_nat(2u);
v___x_4912_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4911_);
v___x_4913_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11));
v___x_4914_ = l_Lean_Syntax_isOfKind(v___x_4912_, v___x_4913_);
if (v___x_4914_ == 0)
{
lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v_env_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; 
lean_inc_n(v_stx_2367_, 2);
v___x_4915_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4916_ = lean_st_ref_get(v_a_2373_);
v_env_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc_ref(v_env_4917_);
lean_dec(v___x_4916_);
v___x_4918_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4919_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4918_, v_env_4917_, v___x_4915_);
v___x_4920_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4921_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4919_, v___x_4920_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4919_);
if (lean_obj_tag(v___x_4921_) == 0)
{
lean_object* v_a_4922_; lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4952_; 
v_a_4922_ = lean_ctor_get(v___x_4921_, 0);
v_isSharedCheck_4952_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4952_ == 0)
{
v___x_4924_ = v___x_4921_;
v_isShared_4925_ = v_isSharedCheck_4952_;
goto v_resetjp_4923_;
}
else
{
lean_inc(v_a_4922_);
lean_dec(v___x_4921_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4952_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
lean_object* v_fst_4926_; lean_object* v___x_4928_; uint8_t v_isShared_4929_; uint8_t v_isSharedCheck_4950_; 
v_fst_4926_ = lean_ctor_get(v_a_4922_, 0);
v_isSharedCheck_4950_ = !lean_is_exclusive(v_a_4922_);
if (v_isSharedCheck_4950_ == 0)
{
lean_object* v_unused_4951_; 
v_unused_4951_ = lean_ctor_get(v_a_4922_, 1);
lean_dec(v_unused_4951_);
v___x_4928_ = v_a_4922_;
v_isShared_4929_ = v_isSharedCheck_4950_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_fst_4926_);
lean_dec(v_a_4922_);
v___x_4928_ = lean_box(0);
v_isShared_4929_ = v_isSharedCheck_4950_;
goto v_resetjp_4927_;
}
v_resetjp_4927_:
{
if (lean_obj_tag(v_fst_4926_) == 0)
{
lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4933_; 
lean_del_object(v___x_4924_);
v___x_4930_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4931_ = l_Lean_MessageData_ofName(v___x_4915_);
lean_inc_ref(v___x_4931_);
if (v_isShared_4929_ == 0)
{
lean_ctor_set_tag(v___x_4928_, 7);
lean_ctor_set(v___x_4928_, 1, v___x_4931_);
lean_ctor_set(v___x_4928_, 0, v___x_4930_);
v___x_4933_ = v___x_4928_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v___x_4930_);
lean_ctor_set(v_reuseFailAlloc_4945_, 1, v___x_4931_);
v___x_4933_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; 
v___x_4934_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4935_, 0, v___x_4933_);
lean_ctor_set(v___x_4935_, 1, v___x_4934_);
v___x_4936_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4937_ = l_Lean_indentD(v___x_4936_);
v___x_4938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4938_, 0, v___x_4935_);
lean_ctor_set(v___x_4938_, 1, v___x_4937_);
v___x_4939_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4940_, 0, v___x_4938_);
lean_ctor_set(v___x_4940_, 1, v___x_4939_);
v___x_4941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4941_, 0, v___x_4940_);
lean_ctor_set(v___x_4941_, 1, v___x_4931_);
v___x_4942_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4943_, 0, v___x_4941_);
lean_ctor_set(v___x_4943_, 1, v___x_4942_);
v___x_4944_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4943_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4944_;
}
}
else
{
lean_object* v_val_4946_; lean_object* v___x_4948_; 
lean_del_object(v___x_4928_);
lean_dec(v___x_4915_);
lean_dec(v_stx_2367_);
v_val_4946_ = lean_ctor_get(v_fst_4926_, 0);
lean_inc(v_val_4946_);
lean_dec_ref_known(v_fst_4926_, 1);
if (v_isShared_4925_ == 0)
{
lean_ctor_set(v___x_4924_, 0, v_val_4946_);
v___x_4948_ = v___x_4924_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v_val_4946_);
v___x_4948_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
return v___x_4948_;
}
}
}
}
}
else
{
lean_object* v_a_4953_; lean_object* v___x_4955_; uint8_t v_isShared_4956_; uint8_t v_isSharedCheck_4960_; 
lean_dec(v___x_4915_);
lean_dec(v_stx_2367_);
v_a_4953_ = lean_ctor_get(v___x_4921_, 0);
v_isSharedCheck_4960_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4960_ == 0)
{
v___x_4955_ = v___x_4921_;
v_isShared_4956_ = v_isSharedCheck_4960_;
goto v_resetjp_4954_;
}
else
{
lean_inc(v_a_4953_);
lean_dec(v___x_4921_);
v___x_4955_ = lean_box(0);
v_isShared_4956_ = v_isSharedCheck_4960_;
goto v_resetjp_4954_;
}
v_resetjp_4954_:
{
lean_object* v___x_4958_; 
if (v_isShared_4956_ == 0)
{
v___x_4958_ = v___x_4955_;
goto v_reusejp_4957_;
}
else
{
lean_object* v_reuseFailAlloc_4959_; 
v_reuseFailAlloc_4959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4959_, 0, v_a_4953_);
v___x_4958_ = v_reuseFailAlloc_4959_;
goto v_reusejp_4957_;
}
v_reusejp_4957_:
{
return v___x_4958_;
}
}
}
}
else
{
lean_object* v___x_4961_; lean_object* v___x_4962_; 
lean_dec(v_stx_2367_);
v___x_4961_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_4962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4962_, 0, v___x_4961_);
return v___x_4962_;
}
}
}
}
else
{
lean_object* v___x_4963_; lean_object* v___x_4964_; uint8_t v___x_4965_; 
v___x_4963_ = lean_unsigned_to_nat(1u);
v___x_4964_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_4963_);
v___x_4965_ = l_Lean_Syntax_isNone(v___x_4964_);
if (v___x_4965_ == 0)
{
uint8_t v___x_4966_; 
v___x_4966_ = l_Lean_Syntax_matchesNull(v___x_4964_, v___x_4963_);
if (v___x_4966_ == 0)
{
lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v_env_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; 
lean_del_object(v___x_2407_);
lean_inc_n(v_stx_2367_, 2);
v___x_4967_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_4968_ = lean_st_ref_get(v_a_2373_);
v_env_4969_ = lean_ctor_get(v___x_4968_, 0);
lean_inc_ref(v_env_4969_);
lean_dec(v___x_4968_);
v___x_4970_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4971_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4970_, v_env_4969_, v___x_4967_);
v___x_4972_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4973_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_4971_, v___x_4972_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_4971_);
if (lean_obj_tag(v___x_4973_) == 0)
{
lean_object* v_a_4974_; lean_object* v___x_4976_; uint8_t v_isShared_4977_; uint8_t v_isSharedCheck_5004_; 
v_a_4974_ = lean_ctor_get(v___x_4973_, 0);
v_isSharedCheck_5004_ = !lean_is_exclusive(v___x_4973_);
if (v_isSharedCheck_5004_ == 0)
{
v___x_4976_ = v___x_4973_;
v_isShared_4977_ = v_isSharedCheck_5004_;
goto v_resetjp_4975_;
}
else
{
lean_inc(v_a_4974_);
lean_dec(v___x_4973_);
v___x_4976_ = lean_box(0);
v_isShared_4977_ = v_isSharedCheck_5004_;
goto v_resetjp_4975_;
}
v_resetjp_4975_:
{
lean_object* v_fst_4978_; lean_object* v___x_4980_; uint8_t v_isShared_4981_; uint8_t v_isSharedCheck_5002_; 
v_fst_4978_ = lean_ctor_get(v_a_4974_, 0);
v_isSharedCheck_5002_ = !lean_is_exclusive(v_a_4974_);
if (v_isSharedCheck_5002_ == 0)
{
lean_object* v_unused_5003_; 
v_unused_5003_ = lean_ctor_get(v_a_4974_, 1);
lean_dec(v_unused_5003_);
v___x_4980_ = v_a_4974_;
v_isShared_4981_ = v_isSharedCheck_5002_;
goto v_resetjp_4979_;
}
else
{
lean_inc(v_fst_4978_);
lean_dec(v_a_4974_);
v___x_4980_ = lean_box(0);
v_isShared_4981_ = v_isSharedCheck_5002_;
goto v_resetjp_4979_;
}
v_resetjp_4979_:
{
if (lean_obj_tag(v_fst_4978_) == 0)
{
lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4985_; 
lean_del_object(v___x_4976_);
v___x_4982_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4983_ = l_Lean_MessageData_ofName(v___x_4967_);
lean_inc_ref(v___x_4983_);
if (v_isShared_4981_ == 0)
{
lean_ctor_set_tag(v___x_4980_, 7);
lean_ctor_set(v___x_4980_, 1, v___x_4983_);
lean_ctor_set(v___x_4980_, 0, v___x_4982_);
v___x_4985_ = v___x_4980_;
goto v_reusejp_4984_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v___x_4982_);
lean_ctor_set(v_reuseFailAlloc_4997_, 1, v___x_4983_);
v___x_4985_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4984_;
}
v_reusejp_4984_:
{
lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; 
v___x_4986_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4987_, 0, v___x_4985_);
lean_ctor_set(v___x_4987_, 1, v___x_4986_);
v___x_4988_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_4989_ = l_Lean_indentD(v___x_4988_);
v___x_4990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4990_, 0, v___x_4987_);
lean_ctor_set(v___x_4990_, 1, v___x_4989_);
v___x_4991_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4990_);
lean_ctor_set(v___x_4992_, 1, v___x_4991_);
v___x_4993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4993_, 0, v___x_4992_);
lean_ctor_set(v___x_4993_, 1, v___x_4983_);
v___x_4994_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4995_, 0, v___x_4993_);
lean_ctor_set(v___x_4995_, 1, v___x_4994_);
v___x_4996_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4995_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_4996_;
}
}
else
{
lean_object* v_val_4998_; lean_object* v___x_5000_; 
lean_del_object(v___x_4980_);
lean_dec(v___x_4967_);
lean_dec(v_stx_2367_);
v_val_4998_ = lean_ctor_get(v_fst_4978_, 0);
lean_inc(v_val_4998_);
lean_dec_ref_known(v_fst_4978_, 1);
if (v_isShared_4977_ == 0)
{
lean_ctor_set(v___x_4976_, 0, v_val_4998_);
v___x_5000_ = v___x_4976_;
goto v_reusejp_4999_;
}
else
{
lean_object* v_reuseFailAlloc_5001_; 
v_reuseFailAlloc_5001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5001_, 0, v_val_4998_);
v___x_5000_ = v_reuseFailAlloc_5001_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
return v___x_5000_;
}
}
}
}
}
else
{
lean_object* v_a_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5012_; 
lean_dec(v___x_4967_);
lean_dec(v_stx_2367_);
v_a_5005_ = lean_ctor_get(v___x_4973_, 0);
v_isSharedCheck_5012_ = !lean_is_exclusive(v___x_4973_);
if (v_isSharedCheck_5012_ == 0)
{
v___x_5007_ = v___x_4973_;
v_isShared_5008_ = v_isSharedCheck_5012_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_a_5005_);
lean_dec(v___x_4973_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5012_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5010_; 
if (v_isShared_5008_ == 0)
{
v___x_5010_ = v___x_5007_;
goto v_reusejp_5009_;
}
else
{
lean_object* v_reuseFailAlloc_5011_; 
v_reuseFailAlloc_5011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5011_, 0, v_a_5005_);
v___x_5010_ = v_reuseFailAlloc_5011_;
goto v_reusejp_5009_;
}
v_reusejp_5009_:
{
return v___x_5010_;
}
}
}
}
else
{
v___y_2495_ = v_a_2368_;
v___y_2496_ = v_a_2369_;
v___y_2497_ = v_a_2370_;
v___y_2498_ = v_a_2371_;
v___y_2499_ = v_a_2372_;
v___y_2500_ = v_a_2373_;
goto v___jp_2494_;
}
}
else
{
lean_dec(v___x_4964_);
v___y_2495_ = v_a_2368_;
v___y_2496_ = v_a_2369_;
v___y_2497_ = v_a_2370_;
v___y_2498_ = v_a_2371_;
v___y_2499_ = v_a_2372_;
v___y_2500_ = v_a_2373_;
goto v___jp_2494_;
}
}
}
else
{
lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; 
lean_del_object(v___x_2407_);
v___x_5013_ = lean_unsigned_to_nat(1u);
v___x_5014_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_5013_);
lean_dec(v_stx_2367_);
v___x_5015_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5014_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_5015_;
}
}
else
{
lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; 
lean_del_object(v___x_2407_);
v___x_5016_ = lean_unsigned_to_nat(0u);
v___x_5017_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_5016_);
lean_dec(v_stx_2367_);
v___x_5018_ = l_Lean_Elab_Do_Forward_matchApp_x3f(v___x_5017_);
if (lean_obj_tag(v___x_5018_) == 1)
{
lean_object* v_val_5019_; lean_object* v_snd_5020_; lean_object* v_body_5021_; lean_object* v___x_5022_; 
v_val_5019_ = lean_ctor_get(v___x_5018_, 0);
lean_inc(v_val_5019_);
lean_dec_ref_known(v___x_5018_, 1);
v_snd_5020_ = lean_ctor_get(v_val_5019_, 1);
lean_inc(v_snd_5020_);
lean_dec(v_val_5019_);
v_body_5021_ = lean_ctor_get(v_snd_5020_, 1);
lean_inc(v_body_5021_);
lean_dec(v_snd_5020_);
v___x_5022_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_body_5021_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_5022_) == 0)
{
lean_object* v_a_5023_; lean_object* v___x_5025_; uint8_t v_isShared_5026_; uint8_t v_isSharedCheck_5043_; 
v_a_5023_ = lean_ctor_get(v___x_5022_, 0);
v_isSharedCheck_5043_ = !lean_is_exclusive(v___x_5022_);
if (v_isSharedCheck_5043_ == 0)
{
v___x_5025_ = v___x_5022_;
v_isShared_5026_ = v_isSharedCheck_5043_;
goto v_resetjp_5024_;
}
else
{
lean_inc(v_a_5023_);
lean_dec(v___x_5022_);
v___x_5025_ = lean_box(0);
v_isShared_5026_ = v_isSharedCheck_5043_;
goto v_resetjp_5024_;
}
v_resetjp_5024_:
{
uint8_t v_breaks_5027_; uint8_t v_continues_5028_; uint8_t v_returnsEarly_5029_; lean_object* v_reassigns_5030_; lean_object* v___x_5032_; uint8_t v_isShared_5033_; uint8_t v_isSharedCheck_5041_; 
v_breaks_5027_ = lean_ctor_get_uint8(v_a_5023_, sizeof(void*)*2);
v_continues_5028_ = lean_ctor_get_uint8(v_a_5023_, sizeof(void*)*2 + 1);
v_returnsEarly_5029_ = lean_ctor_get_uint8(v_a_5023_, sizeof(void*)*2 + 2);
v_reassigns_5030_ = lean_ctor_get(v_a_5023_, 1);
v_isSharedCheck_5041_ = !lean_is_exclusive(v_a_5023_);
if (v_isSharedCheck_5041_ == 0)
{
lean_object* v_unused_5042_; 
v_unused_5042_ = lean_ctor_get(v_a_5023_, 0);
lean_dec(v_unused_5042_);
v___x_5032_ = v_a_5023_;
v_isShared_5033_ = v_isSharedCheck_5041_;
goto v_resetjp_5031_;
}
else
{
lean_inc(v_reassigns_5030_);
lean_dec(v_a_5023_);
v___x_5032_ = lean_box(0);
v_isShared_5033_ = v_isSharedCheck_5041_;
goto v_resetjp_5031_;
}
v_resetjp_5031_:
{
lean_object* v___x_5034_; lean_object* v___x_5036_; 
v___x_5034_ = lean_unsigned_to_nat(1u);
if (v_isShared_5033_ == 0)
{
lean_ctor_set(v___x_5032_, 0, v___x_5034_);
v___x_5036_ = v___x_5032_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v___x_5034_);
lean_ctor_set(v_reuseFailAlloc_5040_, 1, v_reassigns_5030_);
lean_ctor_set_uint8(v_reuseFailAlloc_5040_, sizeof(void*)*2, v_breaks_5027_);
lean_ctor_set_uint8(v_reuseFailAlloc_5040_, sizeof(void*)*2 + 1, v_continues_5028_);
lean_ctor_set_uint8(v_reuseFailAlloc_5040_, sizeof(void*)*2 + 2, v_returnsEarly_5029_);
v___x_5036_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
lean_object* v___x_5038_; 
lean_ctor_set_uint8(v___x_5036_, sizeof(void*)*2 + 3, v___x_2610_);
if (v_isShared_5026_ == 0)
{
lean_ctor_set(v___x_5025_, 0, v___x_5036_);
v___x_5038_ = v___x_5025_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v___x_5036_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
return v___x_5038_;
}
}
}
}
}
else
{
return v___x_5022_;
}
}
else
{
lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; 
lean_dec(v___x_5018_);
v___x_5044_ = lean_unsigned_to_nat(1u);
v___x_5045_ = l_Lean_NameSet_empty;
v___x_5046_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5046_, 0, v___x_5044_);
lean_ctor_set(v___x_5046_, 1, v___x_5045_);
lean_ctor_set_uint8(v___x_5046_, sizeof(void*)*2, v___x_2610_);
lean_ctor_set_uint8(v___x_5046_, sizeof(void*)*2 + 1, v___x_2610_);
lean_ctor_set_uint8(v___x_5046_, sizeof(void*)*2 + 2, v___x_2610_);
lean_ctor_set_uint8(v___x_5046_, sizeof(void*)*2 + 3, v___x_2610_);
v___x_5047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5047_, 0, v___x_5046_);
return v___x_5047_;
}
}
}
else
{
lean_object* v___x_5048_; lean_object* v___x_5053_; lean_object* v___x_5054_; uint8_t v___x_5055_; 
lean_del_object(v___x_2407_);
v___x_5048_ = lean_unsigned_to_nat(0u);
v___x_5053_ = lean_unsigned_to_nat(1u);
v___x_5054_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_5053_);
v___x_5055_ = l_Lean_Syntax_isNone(v___x_5054_);
if (v___x_5055_ == 0)
{
uint8_t v___x_5056_; 
v___x_5056_ = l_Lean_Syntax_matchesNull(v___x_5054_, v___x_5053_);
if (v___x_5056_ == 0)
{
lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v_env_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; 
lean_inc_n(v_stx_2367_, 2);
v___x_5057_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_5058_ = lean_st_ref_get(v_a_2373_);
v_env_5059_ = lean_ctor_get(v___x_5058_, 0);
lean_inc_ref(v_env_5059_);
lean_dec(v___x_5058_);
v___x_5060_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5061_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5060_, v_env_5059_, v___x_5057_);
v___x_5062_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_5063_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_5061_, v___x_5062_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v___x_5061_);
if (lean_obj_tag(v___x_5063_) == 0)
{
lean_object* v_a_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5094_; 
v_a_5064_ = lean_ctor_get(v___x_5063_, 0);
v_isSharedCheck_5094_ = !lean_is_exclusive(v___x_5063_);
if (v_isSharedCheck_5094_ == 0)
{
v___x_5066_ = v___x_5063_;
v_isShared_5067_ = v_isSharedCheck_5094_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_a_5064_);
lean_dec(v___x_5063_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5094_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v_fst_5068_; lean_object* v___x_5070_; uint8_t v_isShared_5071_; uint8_t v_isSharedCheck_5092_; 
v_fst_5068_ = lean_ctor_get(v_a_5064_, 0);
v_isSharedCheck_5092_ = !lean_is_exclusive(v_a_5064_);
if (v_isSharedCheck_5092_ == 0)
{
lean_object* v_unused_5093_; 
v_unused_5093_ = lean_ctor_get(v_a_5064_, 1);
lean_dec(v_unused_5093_);
v___x_5070_ = v_a_5064_;
v_isShared_5071_ = v_isSharedCheck_5092_;
goto v_resetjp_5069_;
}
else
{
lean_inc(v_fst_5068_);
lean_dec(v_a_5064_);
v___x_5070_ = lean_box(0);
v_isShared_5071_ = v_isSharedCheck_5092_;
goto v_resetjp_5069_;
}
v_resetjp_5069_:
{
if (lean_obj_tag(v_fst_5068_) == 0)
{
lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5075_; 
lean_del_object(v___x_5066_);
v___x_5072_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5073_ = l_Lean_MessageData_ofName(v___x_5057_);
lean_inc_ref(v___x_5073_);
if (v_isShared_5071_ == 0)
{
lean_ctor_set_tag(v___x_5070_, 7);
lean_ctor_set(v___x_5070_, 1, v___x_5073_);
lean_ctor_set(v___x_5070_, 0, v___x_5072_);
v___x_5075_ = v___x_5070_;
goto v_reusejp_5074_;
}
else
{
lean_object* v_reuseFailAlloc_5087_; 
v_reuseFailAlloc_5087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5087_, 0, v___x_5072_);
lean_ctor_set(v_reuseFailAlloc_5087_, 1, v___x_5073_);
v___x_5075_ = v_reuseFailAlloc_5087_;
goto v_reusejp_5074_;
}
v_reusejp_5074_:
{
lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; 
v___x_5076_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5077_, 0, v___x_5075_);
lean_ctor_set(v___x_5077_, 1, v___x_5076_);
v___x_5078_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_5079_ = l_Lean_indentD(v___x_5078_);
v___x_5080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5080_, 0, v___x_5077_);
lean_ctor_set(v___x_5080_, 1, v___x_5079_);
v___x_5081_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5082_, 0, v___x_5080_);
lean_ctor_set(v___x_5082_, 1, v___x_5081_);
v___x_5083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5083_, 0, v___x_5082_);
lean_ctor_set(v___x_5083_, 1, v___x_5073_);
v___x_5084_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5085_, 0, v___x_5083_);
lean_ctor_set(v___x_5085_, 1, v___x_5084_);
v___x_5086_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5085_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_5086_;
}
}
else
{
lean_object* v_val_5088_; lean_object* v___x_5090_; 
lean_del_object(v___x_5070_);
lean_dec(v___x_5057_);
lean_dec(v_stx_2367_);
v_val_5088_ = lean_ctor_get(v_fst_5068_, 0);
lean_inc(v_val_5088_);
lean_dec_ref_known(v_fst_5068_, 1);
if (v_isShared_5067_ == 0)
{
lean_ctor_set(v___x_5066_, 0, v_val_5088_);
v___x_5090_ = v___x_5066_;
goto v_reusejp_5089_;
}
else
{
lean_object* v_reuseFailAlloc_5091_; 
v_reuseFailAlloc_5091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5091_, 0, v_val_5088_);
v___x_5090_ = v_reuseFailAlloc_5091_;
goto v_reusejp_5089_;
}
v_reusejp_5089_:
{
return v___x_5090_;
}
}
}
}
}
else
{
lean_object* v_a_5095_; lean_object* v___x_5097_; uint8_t v_isShared_5098_; uint8_t v_isSharedCheck_5102_; 
lean_dec(v___x_5057_);
lean_dec(v_stx_2367_);
v_a_5095_ = lean_ctor_get(v___x_5063_, 0);
v_isSharedCheck_5102_ = !lean_is_exclusive(v___x_5063_);
if (v_isSharedCheck_5102_ == 0)
{
v___x_5097_ = v___x_5063_;
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
else
{
lean_inc(v_a_5095_);
lean_dec(v___x_5063_);
v___x_5097_ = lean_box(0);
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
v_resetjp_5096_:
{
lean_object* v___x_5100_; 
if (v_isShared_5098_ == 0)
{
v___x_5100_ = v___x_5097_;
goto v_reusejp_5099_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v_a_5095_);
v___x_5100_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5099_;
}
v_reusejp_5099_:
{
return v___x_5100_;
}
}
}
}
else
{
lean_dec(v_stx_2367_);
goto v___jp_5049_;
}
}
else
{
lean_dec(v___x_5054_);
lean_dec(v_stx_2367_);
goto v___jp_5049_;
}
v___jp_5049_:
{
lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; 
v___x_5050_ = l_Lean_NameSet_empty;
v___x_5051_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5051_, 0, v___x_5048_);
lean_ctor_set(v___x_5051_, 1, v___x_5050_);
lean_ctor_set_uint8(v___x_5051_, sizeof(void*)*2, v___x_2608_);
lean_ctor_set_uint8(v___x_5051_, sizeof(void*)*2 + 1, v___x_2608_);
lean_ctor_set_uint8(v___x_5051_, sizeof(void*)*2 + 2, v___x_2610_);
lean_ctor_set_uint8(v___x_5051_, sizeof(void*)*2 + 3, v___x_2610_);
v___x_5052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5052_, 0, v___x_5051_);
return v___x_5052_;
}
}
}
else
{
lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; 
lean_del_object(v___x_2407_);
lean_dec(v_stx_2367_);
v___x_5103_ = lean_unsigned_to_nat(0u);
v___x_5104_ = l_Lean_NameSet_empty;
v___x_5105_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5105_, 0, v___x_5103_);
lean_ctor_set(v___x_5105_, 1, v___x_5104_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*2, v___x_2606_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*2 + 1, v___x_2608_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*2 + 2, v___x_2606_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*2 + 3, v___x_2608_);
v___x_5106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5106_, 0, v___x_5105_);
return v___x_5106_;
}
}
else
{
lean_object* v___x_5107_; uint8_t v___x_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; 
lean_del_object(v___x_2407_);
lean_dec(v_stx_2367_);
v___x_5107_ = lean_unsigned_to_nat(0u);
v___x_5108_ = 0;
v___x_5109_ = l_Lean_NameSet_empty;
v___x_5110_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5110_, 0, v___x_5107_);
lean_ctor_set(v___x_5110_, 1, v___x_5109_);
lean_ctor_set_uint8(v___x_5110_, sizeof(void*)*2, v___x_2606_);
lean_ctor_set_uint8(v___x_5110_, sizeof(void*)*2 + 1, v___x_5108_);
lean_ctor_set_uint8(v___x_5110_, sizeof(void*)*2 + 2, v___x_5108_);
lean_ctor_set_uint8(v___x_5110_, sizeof(void*)*2 + 3, v___x_2606_);
v___x_5111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5111_, 0, v___x_5110_);
return v___x_5111_;
}
v___jp_2423_:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; uint8_t v___x_2433_; 
v___x_2430_ = lean_unsigned_to_nat(2u);
v___x_2431_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2430_);
v___x_2432_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2433_ = l_Lean_Syntax_isOfKind(v___x_2431_, v___x_2432_);
if (v___x_2433_ == 0)
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v_env_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
lean_inc_n(v_stx_2367_, 2);
v___x_2434_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2435_ = lean_st_ref_get(v___y_2429_);
v_env_2436_ = lean_ctor_get(v___x_2435_, 0);
lean_inc_ref(v_env_2436_);
lean_dec(v___x_2435_);
v___x_2437_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2438_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2437_, v_env_2436_, v___x_2434_);
v___x_2439_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2440_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2438_, v___x_2439_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
lean_dec(v___x_2438_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2471_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2443_ = v___x_2440_;
v_isShared_2444_ = v_isSharedCheck_2471_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2440_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2471_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v_fst_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2469_; 
v_fst_2445_ = lean_ctor_get(v_a_2441_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v_a_2441_);
if (v_isSharedCheck_2469_ == 0)
{
lean_object* v_unused_2470_; 
v_unused_2470_ = lean_ctor_get(v_a_2441_, 1);
lean_dec(v_unused_2470_);
v___x_2447_ = v_a_2441_;
v_isShared_2448_ = v_isSharedCheck_2469_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_fst_2445_);
lean_dec(v_a_2441_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2469_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
if (lean_obj_tag(v_fst_2445_) == 0)
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2452_; 
lean_del_object(v___x_2443_);
v___x_2449_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2450_ = l_Lean_MessageData_ofName(v___x_2434_);
lean_inc_ref(v___x_2450_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set_tag(v___x_2447_, 7);
lean_ctor_set(v___x_2447_, 1, v___x_2450_);
lean_ctor_set(v___x_2447_, 0, v___x_2449_);
v___x_2452_ = v___x_2447_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2449_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v___x_2450_);
v___x_2452_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2453_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2452_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
v___x_2455_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_2456_ = l_Lean_indentD(v___x_2455_);
v___x_2457_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2454_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
v___x_2458_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2457_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
v___x_2460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2459_);
lean_ctor_set(v___x_2460_, 1, v___x_2450_);
v___x_2461_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2460_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
v___x_2463_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2462_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
return v___x_2463_;
}
}
else
{
lean_object* v_val_2465_; lean_object* v___x_2467_; 
lean_del_object(v___x_2447_);
lean_dec(v___x_2434_);
lean_dec(v_stx_2367_);
v_val_2465_ = lean_ctor_get(v_fst_2445_, 0);
lean_inc(v_val_2465_);
lean_dec_ref_known(v_fst_2445_, 1);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 0, v_val_2465_);
v___x_2467_ = v___x_2443_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_val_2465_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec(v___x_2434_);
lean_dec(v_stx_2367_);
v_a_2472_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2440_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2440_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
else
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2480_ = lean_unsigned_to_nat(7u);
v___x_2481_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2480_);
v___x_2482_ = lean_unsigned_to_nat(8u);
v___x_2483_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2482_);
lean_dec(v_stx_2367_);
v___x_2484_ = l_Lean_Syntax_getOptional_x3f(v___x_2483_);
lean_dec(v___x_2483_);
if (lean_obj_tag(v___x_2484_) == 0)
{
lean_object* v___x_2485_; 
v___x_2485_ = lean_box(0);
v___y_2376_ = v___y_2426_;
v___y_2377_ = v___y_2428_;
v___y_2378_ = v___y_2427_;
v___y_2379_ = v___y_2425_;
v___y_2380_ = v___y_2424_;
v___y_2381_ = v___y_2429_;
v___y_2382_ = v___x_2481_;
v___y_2383_ = v___x_2485_;
goto v___jp_2375_;
}
else
{
lean_object* v_val_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
v_val_2486_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2484_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_val_2486_);
lean_dec(v___x_2484_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_val_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
v___y_2376_ = v___y_2426_;
v___y_2377_ = v___y_2428_;
v___y_2378_ = v___y_2427_;
v___y_2379_ = v___y_2425_;
v___y_2380_ = v___y_2424_;
v___y_2381_ = v___y_2429_;
v___y_2382_ = v___x_2481_;
v___y_2383_ = v___x_2491_;
goto v___jp_2375_;
}
}
}
}
}
v___jp_2494_:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; uint8_t v___x_2504_; 
v___x_2501_ = lean_unsigned_to_nat(2u);
v___x_2502_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2501_);
v___x_2503_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2504_ = l_Lean_Syntax_isOfKind(v___x_2502_, v___x_2503_);
if (v___x_2504_ == 0)
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v_env_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
lean_del_object(v___x_2407_);
lean_inc_n(v_stx_2367_, 2);
v___x_2505_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2506_ = lean_st_ref_get(v___y_2500_);
v_env_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc_ref(v_env_2507_);
lean_dec(v___x_2506_);
v___x_2508_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2509_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2508_, v_env_2507_, v___x_2505_);
v___x_2510_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2511_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2509_, v___x_2510_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
lean_dec(v___x_2509_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2542_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2542_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2542_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v_fst_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2540_; 
v_fst_2516_ = lean_ctor_get(v_a_2512_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v_a_2512_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v_a_2512_, 1);
lean_dec(v_unused_2541_);
v___x_2518_ = v_a_2512_;
v_isShared_2519_ = v_isSharedCheck_2540_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_fst_2516_);
lean_dec(v_a_2512_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2540_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
if (lean_obj_tag(v_fst_2516_) == 0)
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2523_; 
lean_del_object(v___x_2514_);
v___x_2520_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2521_ = l_Lean_MessageData_ofName(v___x_2505_);
lean_inc_ref(v___x_2521_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set_tag(v___x_2518_, 7);
lean_ctor_set(v___x_2518_, 1, v___x_2521_);
lean_ctor_set(v___x_2518_, 0, v___x_2520_);
v___x_2523_ = v___x_2518_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v___x_2520_);
lean_ctor_set(v_reuseFailAlloc_2535_, 1, v___x_2521_);
v___x_2523_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2524_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2523_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_2527_ = l_Lean_indentD(v___x_2526_);
v___x_2528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2528_, 0, v___x_2525_);
lean_ctor_set(v___x_2528_, 1, v___x_2527_);
v___x_2529_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2528_);
lean_ctor_set(v___x_2530_, 1, v___x_2529_);
v___x_2531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
lean_ctor_set(v___x_2531_, 1, v___x_2521_);
v___x_2532_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2531_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
v___x_2534_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2533_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
return v___x_2534_;
}
}
else
{
lean_object* v_val_2536_; lean_object* v___x_2538_; 
lean_del_object(v___x_2518_);
lean_dec(v___x_2505_);
lean_dec(v_stx_2367_);
v_val_2536_ = lean_ctor_get(v_fst_2516_, 0);
lean_inc(v_val_2536_);
lean_dec_ref_known(v_fst_2516_, 1);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 0, v_val_2536_);
v___x_2538_ = v___x_2514_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_val_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec(v___x_2505_);
lean_dec(v_stx_2367_);
v_a_2543_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2511_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2511_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
else
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; uint8_t v___x_2554_; 
v___x_2551_ = lean_unsigned_to_nat(3u);
v___x_2552_ = l_Lean_Syntax_getArg(v_stx_2367_, v___x_2551_);
v___x_2553_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11));
v___x_2554_ = l_Lean_Syntax_isOfKind(v___x_2552_, v___x_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v_env_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
lean_del_object(v___x_2407_);
lean_inc_n(v_stx_2367_, 2);
v___x_2555_ = l_Lean_Syntax_getKind(v_stx_2367_);
v___x_2556_ = lean_st_ref_get(v___y_2500_);
v_env_2557_ = lean_ctor_get(v___x_2556_, 0);
lean_inc_ref(v_env_2557_);
lean_dec(v___x_2556_);
v___x_2558_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2559_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2558_, v_env_2557_, v___x_2555_);
v___x_2560_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2561_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2367_, v___x_2559_, v___x_2560_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
lean_dec(v___x_2559_);
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2592_; 
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2564_ = v___x_2561_;
v_isShared_2565_ = v_isSharedCheck_2592_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2561_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2592_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v_fst_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2590_; 
v_fst_2566_ = lean_ctor_get(v_a_2562_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v_a_2562_);
if (v_isSharedCheck_2590_ == 0)
{
lean_object* v_unused_2591_; 
v_unused_2591_ = lean_ctor_get(v_a_2562_, 1);
lean_dec(v_unused_2591_);
v___x_2568_ = v_a_2562_;
v_isShared_2569_ = v_isSharedCheck_2590_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_fst_2566_);
lean_dec(v_a_2562_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2590_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
if (lean_obj_tag(v_fst_2566_) == 0)
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2573_; 
lean_del_object(v___x_2564_);
v___x_2570_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2571_ = l_Lean_MessageData_ofName(v___x_2555_);
lean_inc_ref(v___x_2571_);
if (v_isShared_2569_ == 0)
{
lean_ctor_set_tag(v___x_2568_, 7);
lean_ctor_set(v___x_2568_, 1, v___x_2571_);
lean_ctor_set(v___x_2568_, 0, v___x_2570_);
v___x_2573_ = v___x_2568_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v___x_2570_);
lean_ctor_set(v_reuseFailAlloc_2585_, 1, v___x_2571_);
v___x_2573_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2574_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2573_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = l_Lean_MessageData_ofSyntax(v_stx_2367_);
v___x_2577_ = l_Lean_indentD(v___x_2576_);
v___x_2578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2575_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2578_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2580_);
lean_ctor_set(v___x_2581_, 1, v___x_2571_);
v___x_2582_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2581_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2583_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
return v___x_2584_;
}
}
else
{
lean_object* v_val_2586_; lean_object* v___x_2588_; 
lean_del_object(v___x_2568_);
lean_dec(v___x_2555_);
lean_dec(v_stx_2367_);
v_val_2586_ = lean_ctor_get(v_fst_2566_, 0);
lean_inc(v_val_2586_);
lean_dec_ref_known(v_fst_2566_, 1);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 0, v_val_2586_);
v___x_2588_ = v___x_2564_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_val_2586_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec(v___x_2555_);
lean_dec(v_stx_2367_);
v_a_2593_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2561_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2561_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
else
{
lean_object* v___x_2601_; lean_object* v___x_2603_; 
lean_dec(v_stx_2367_);
v___x_2601_ = l_Lean_Elab_Do_ControlInfo_pure;
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 0, v___x_2601_);
v___x_2603_ = v___x_2407_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v___x_2601_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5113_; lean_object* v___x_5115_; uint8_t v_isShared_5116_; uint8_t v_isSharedCheck_5120_; 
lean_dec(v_stx_2367_);
v_a_5113_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_5120_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_5120_ == 0)
{
v___x_5115_ = v___x_2404_;
v_isShared_5116_ = v_isSharedCheck_5120_;
goto v_resetjp_5114_;
}
else
{
lean_inc(v_a_5113_);
lean_dec(v___x_2404_);
v___x_5115_ = lean_box(0);
v_isShared_5116_ = v_isSharedCheck_5120_;
goto v_resetjp_5114_;
}
v_resetjp_5114_:
{
lean_object* v___x_5118_; 
if (v_isShared_5116_ == 0)
{
v___x_5118_ = v___x_5115_;
goto v_reusejp_5117_;
}
else
{
lean_object* v_reuseFailAlloc_5119_; 
v_reuseFailAlloc_5119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5119_, 0, v_a_5113_);
v___x_5118_ = v_reuseFailAlloc_5119_;
goto v_reusejp_5117_;
}
v_reusejp_5117_:
{
return v___x_5118_;
}
}
}
v___jp_2375_:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2384_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___x_2385_ = lean_box(0);
v___x_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___y_2382_);
v___x_2387_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___x_2384_, v___x_2385_, v___x_2386_, v___y_2383_, v___y_2380_, v___y_2379_, v___y_2376_, v___y_2378_, v___y_2377_, v___y_2381_);
return v___x_2387_;
}
v___jp_2388_:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2391_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_2389_, v_bodyInfo_2390_);
v___x_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2391_);
return v___x_2392_;
}
v___jp_2393_:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
return v___x_2395_;
}
v___jp_2396_:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2399_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_2397_, v_bodyInfo_2398_);
v___x_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2400_, 0, v___x_2399_);
return v___x_2400_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(lean_object* v_as_5121_, size_t v_sz_5122_, size_t v_i_5123_, lean_object* v_b_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_){
_start:
{
uint8_t v___x_5132_; 
v___x_5132_ = lean_usize_dec_lt(v_i_5123_, v_sz_5122_);
if (v___x_5132_ == 0)
{
lean_object* v___x_5133_; 
v___x_5133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5133_, 0, v_b_5124_);
return v___x_5133_;
}
else
{
lean_object* v_a_5134_; lean_object* v___x_5135_; 
v_a_5134_ = lean_array_uget_borrowed(v_as_5121_, v_i_5123_);
lean_inc(v_a_5134_);
v___x_5135_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_a_5134_, v___y_5125_, v___y_5126_, v___y_5127_, v___y_5128_, v___y_5129_, v___y_5130_);
if (lean_obj_tag(v___x_5135_) == 0)
{
lean_object* v_a_5136_; lean_object* v___x_5137_; size_t v___x_5138_; size_t v___x_5139_; 
v_a_5136_ = lean_ctor_get(v___x_5135_, 0);
lean_inc(v_a_5136_);
lean_dec_ref_known(v___x_5135_, 1);
v___x_5137_ = l_Lean_Elab_Do_ControlInfo_sequence(v_b_5124_, v_a_5136_);
v___x_5138_ = ((size_t)1ULL);
v___x_5139_ = lean_usize_add(v_i_5123_, v___x_5138_);
v_i_5123_ = v___x_5139_;
v_b_5124_ = v___x_5137_;
goto _start;
}
else
{
lean_dec_ref(v_b_5124_);
return v___x_5135_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object* v_stx_5141_, lean_object* v_a_5142_, lean_object* v_a_5143_, lean_object* v_a_5144_, lean_object* v_a_5145_, lean_object* v_a_5146_, lean_object* v_a_5147_){
_start:
{
lean_object* v_info_5149_; lean_object* v___x_5150_; size_t v_sz_5151_; size_t v___x_5152_; lean_object* v___x_5153_; 
v_info_5149_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_5150_ = l_Lean_Parser_Term_getDoElems(v_stx_5141_);
v_sz_5151_ = lean_array_size(v___x_5150_);
v___x_5152_ = ((size_t)0ULL);
v___x_5153_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(v___x_5150_, v_sz_5151_, v___x_5152_, v_info_5149_, v_a_5142_, v_a_5143_, v_a_5144_, v_a_5145_, v_a_5146_, v_a_5147_);
lean_dec_ref(v___x_5150_);
return v___x_5153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object* v_stx_5154_, lean_object* v_a_5155_, lean_object* v_a_5156_, lean_object* v_a_5157_, lean_object* v_a_5158_, lean_object* v_a_5159_, lean_object* v_a_5160_, lean_object* v_a_5161_){
_start:
{
lean_object* v_res_5162_; 
v_res_5162_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_stx_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_, v_a_5159_, v_a_5160_);
lean_dec(v_a_5160_);
lean_dec_ref(v_a_5159_);
lean_dec(v_a_5158_);
lean_dec_ref(v_a_5157_);
lean_dec(v_a_5156_);
lean_dec_ref(v_a_5155_);
return v_res_5162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object* v_stx_x3f_5163_, lean_object* v_a_5164_, lean_object* v_a_5165_, lean_object* v_a_5166_, lean_object* v_a_5167_, lean_object* v_a_5168_, lean_object* v_a_5169_, lean_object* v_a_5170_){
_start:
{
lean_object* v_res_5171_; 
v_res_5171_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_stx_x3f_5163_, v_a_5164_, v_a_5165_, v_a_5166_, v_a_5167_, v_a_5168_, v_a_5169_);
lean_dec(v_a_5169_);
lean_dec_ref(v_a_5168_);
lean_dec(v_a_5167_);
lean_dec_ref(v_a_5166_);
lean_dec(v_a_5165_);
lean_dec_ref(v_a_5164_);
return v_res_5171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object* v_as_5172_, lean_object* v_sz_5173_, lean_object* v_i_5174_, lean_object* v_b_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_){
_start:
{
size_t v_sz_boxed_5183_; size_t v_i_boxed_5184_; lean_object* v_res_5185_; 
v_sz_boxed_5183_ = lean_unbox_usize(v_sz_5173_);
lean_dec(v_sz_5173_);
v_i_boxed_5184_ = lean_unbox_usize(v_i_5174_);
lean_dec(v_i_5174_);
v_res_5185_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_as_5172_, v_sz_boxed_5183_, v_i_boxed_5184_, v_b_5175_, v___y_5176_, v___y_5177_, v___y_5178_, v___y_5179_, v___y_5180_, v___y_5181_);
lean_dec(v___y_5181_);
lean_dec_ref(v___y_5180_);
lean_dec(v___y_5179_);
lean_dec_ref(v___y_5178_);
lean_dec(v___y_5177_);
lean_dec_ref(v___y_5176_);
lean_dec_ref(v_as_5172_);
return v_res_5185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17___boxed(lean_object* v_as_5186_, lean_object* v_sz_5187_, lean_object* v_i_5188_, lean_object* v_b_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_){
_start:
{
size_t v_sz_boxed_5197_; size_t v_i_boxed_5198_; lean_object* v_res_5199_; 
v_sz_boxed_5197_ = lean_unbox_usize(v_sz_5187_);
lean_dec(v_sz_5187_);
v_i_boxed_5198_ = lean_unbox_usize(v_i_5188_);
lean_dec(v_i_5188_);
v_res_5199_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(v_as_5186_, v_sz_boxed_5197_, v_i_boxed_5198_, v_b_5189_, v___y_5190_, v___y_5191_, v___y_5192_, v___y_5193_, v___y_5194_, v___y_5195_);
lean_dec(v___y_5195_);
lean_dec_ref(v___y_5194_);
lean_dec(v___y_5193_);
lean_dec_ref(v___y_5192_);
lean_dec(v___y_5191_);
lean_dec_ref(v___y_5190_);
lean_dec_ref(v_as_5186_);
return v_res_5199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object* v_reassigned_5200_, lean_object* v_rhs_x3f_5201_, lean_object* v_otherwise_x3f_5202_, lean_object* v_body_x3f_5203_, lean_object* v_a_5204_, lean_object* v_a_5205_, lean_object* v_a_5206_, lean_object* v_a_5207_, lean_object* v_a_5208_, lean_object* v_a_5209_, lean_object* v_a_5210_){
_start:
{
lean_object* v_res_5211_; 
v_res_5211_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigned_5200_, v_rhs_x3f_5201_, v_otherwise_x3f_5202_, v_body_x3f_5203_, v_a_5204_, v_a_5205_, v_a_5206_, v_a_5207_, v_a_5208_, v_a_5209_);
lean_dec(v_a_5209_);
lean_dec_ref(v_a_5208_);
lean_dec(v_a_5207_);
lean_dec_ref(v_a_5206_);
lean_dec(v_a_5205_);
lean_dec_ref(v_a_5204_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object* v___x_5212_, lean_object* v_as_5213_, lean_object* v_sz_5214_, lean_object* v_i_5215_, lean_object* v_b_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_){
_start:
{
uint8_t v___x_309281__boxed_5224_; size_t v_sz_boxed_5225_; size_t v_i_boxed_5226_; lean_object* v_res_5227_; 
v___x_309281__boxed_5224_ = lean_unbox(v___x_5212_);
v_sz_boxed_5225_ = lean_unbox_usize(v_sz_5214_);
lean_dec(v_sz_5214_);
v_i_boxed_5226_ = lean_unbox_usize(v_i_5215_);
lean_dec(v_i_5215_);
v_res_5227_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_309281__boxed_5224_, v_as_5213_, v_sz_boxed_5225_, v_i_boxed_5226_, v_b_5216_, v___y_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_);
lean_dec(v___y_5222_);
lean_dec_ref(v___y_5221_);
lean_dec(v___y_5220_);
lean_dec_ref(v___y_5219_);
lean_dec(v___y_5218_);
lean_dec_ref(v___y_5217_);
lean_dec_ref(v_as_5213_);
return v_res_5227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object* v___x_5228_, lean_object* v_as_5229_, lean_object* v_sz_5230_, lean_object* v_i_5231_, lean_object* v_b_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_){
_start:
{
uint8_t v___x_309328__boxed_5240_; size_t v_sz_boxed_5241_; size_t v_i_boxed_5242_; lean_object* v_res_5243_; 
v___x_309328__boxed_5240_ = lean_unbox(v___x_5228_);
v_sz_boxed_5241_ = lean_unbox_usize(v_sz_5230_);
lean_dec(v_sz_5230_);
v_i_boxed_5242_ = lean_unbox_usize(v_i_5231_);
lean_dec(v_i_5231_);
v_res_5243_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v___x_309328__boxed_5240_, v_as_5229_, v_sz_boxed_5241_, v_i_boxed_5242_, v_b_5232_, v___y_5233_, v___y_5234_, v___y_5235_, v___y_5236_, v___y_5237_, v___y_5238_);
lean_dec(v___y_5238_);
lean_dec_ref(v___y_5237_);
lean_dec(v___y_5236_);
lean_dec_ref(v___y_5235_);
lean_dec(v___y_5234_);
lean_dec_ref(v___y_5233_);
lean_dec_ref(v_as_5229_);
return v_res_5243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object* v_as_5244_, lean_object* v_sz_5245_, lean_object* v_i_5246_, lean_object* v_b_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_){
_start:
{
size_t v_sz_boxed_5255_; size_t v_i_boxed_5256_; lean_object* v_res_5257_; 
v_sz_boxed_5255_ = lean_unbox_usize(v_sz_5245_);
lean_dec(v_sz_5245_);
v_i_boxed_5256_ = lean_unbox_usize(v_i_5246_);
lean_dec(v_i_5246_);
v_res_5257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v_as_5244_, v_sz_boxed_5255_, v_i_boxed_5256_, v_b_5247_, v___y_5248_, v___y_5249_, v___y_5250_, v___y_5251_, v___y_5252_, v___y_5253_);
lean_dec(v___y_5253_);
lean_dec_ref(v___y_5252_);
lean_dec(v___y_5251_);
lean_dec_ref(v___y_5250_);
lean_dec(v___y_5249_);
lean_dec_ref(v___y_5248_);
lean_dec_ref(v_as_5244_);
return v_res_5257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object* v_reassignment_5258_, lean_object* v_decl_5259_, lean_object* v_a_5260_, lean_object* v_a_5261_, lean_object* v_a_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_){
_start:
{
uint8_t v_reassignment_boxed_5267_; lean_object* v_res_5268_; 
v_reassignment_boxed_5267_ = lean_unbox(v_reassignment_5258_);
v_res_5268_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v_reassignment_boxed_5267_, v_decl_5259_, v_a_5260_, v_a_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_);
lean_dec(v_a_5265_);
lean_dec_ref(v_a_5264_);
lean_dec(v_a_5263_);
lean_dec_ref(v_a_5262_);
lean_dec(v_a_5261_);
lean_dec_ref(v_a_5260_);
return v_res_5268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object* v_stx_5269_, lean_object* v_a_5270_, lean_object* v_a_5271_, lean_object* v_a_5272_, lean_object* v_a_5273_, lean_object* v_a_5274_, lean_object* v_a_5275_, lean_object* v_a_5276_){
_start:
{
lean_object* v_res_5277_; 
v_res_5277_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_stx_5269_, v_a_5270_, v_a_5271_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_);
lean_dec(v_a_5275_);
lean_dec_ref(v_a_5274_);
lean_dec(v_a_5273_);
lean_dec_ref(v_a_5272_);
lean_dec(v_a_5271_);
lean_dec_ref(v_a_5270_);
return v_res_5277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(lean_object* v_00_u03b1_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_){
_start:
{
lean_object* v___x_5286_; 
v___x_5286_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___redArg();
return v___x_5286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object* v_00_u03b1_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_){
_start:
{
lean_object* v_res_5295_; 
v_res_5295_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_00_u03b1_5287_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_, v___y_5292_, v___y_5293_);
lean_dec(v___y_5293_);
lean_dec_ref(v___y_5292_);
lean_dec(v___y_5291_);
lean_dec_ref(v___y_5290_);
lean_dec(v___y_5289_);
lean_dec_ref(v___y_5288_);
return v_res_5295_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(lean_object* v_00_u03b1_5296_, lean_object* v_ref_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_){
_start:
{
lean_object* v___x_5305_; 
v___x_5305_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_ref_5297_);
return v___x_5305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___boxed(lean_object* v_00_u03b1_5306_, lean_object* v_ref_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_){
_start:
{
lean_object* v_res_5315_; 
v_res_5315_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(v_00_u03b1_5306_, v_ref_5307_, v___y_5308_, v___y_5309_, v___y_5310_, v___y_5311_, v___y_5312_, v___y_5313_);
lean_dec(v___y_5313_);
lean_dec_ref(v___y_5312_);
lean_dec(v___y_5311_);
lean_dec_ref(v___y_5310_);
lean_dec(v___y_5309_);
lean_dec_ref(v___y_5308_);
return v_res_5315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object* v_00_u03b1_5316_, lean_object* v_x_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_){
_start:
{
lean_object* v___x_5325_; 
v___x_5325_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_x_5317_, v___y_5318_, v___y_5319_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_);
return v___x_5325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object* v_00_u03b1_5326_, lean_object* v_x_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_){
_start:
{
lean_object* v_res_5335_; 
v_res_5335_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(v_00_u03b1_5326_, v_x_5327_, v___y_5328_, v___y_5329_, v___y_5330_, v___y_5331_, v___y_5332_, v___y_5333_);
lean_dec(v___y_5333_);
lean_dec_ref(v___y_5332_);
lean_dec(v___y_5331_);
lean_dec_ref(v___y_5330_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
return v_res_5335_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object* v_stx_5336_, lean_object* v_as_5337_, lean_object* v_as_x27_5338_, lean_object* v_b_5339_, lean_object* v_a_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_){
_start:
{
lean_object* v___x_5348_; 
v___x_5348_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_5336_, v_as_x27_5338_, v_b_5339_, v___y_5341_, v___y_5342_, v___y_5343_, v___y_5344_, v___y_5345_, v___y_5346_);
return v___x_5348_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object* v_stx_5349_, lean_object* v_as_5350_, lean_object* v_as_x27_5351_, lean_object* v_b_5352_, lean_object* v_a_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_){
_start:
{
lean_object* v_res_5361_; 
v_res_5361_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(v_stx_5349_, v_as_5350_, v_as_x27_5351_, v_b_5352_, v_a_5353_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v___y_5359_);
lean_dec(v___y_5359_);
lean_dec_ref(v___y_5358_);
lean_dec(v___y_5357_);
lean_dec_ref(v___y_5356_);
lean_dec(v___y_5355_);
lean_dec_ref(v___y_5354_);
lean_dec(v_as_x27_5351_);
lean_dec(v_as_5350_);
return v_res_5361_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object* v_00_u03b1_5362_, lean_object* v_msg_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_){
_start:
{
lean_object* v___x_5371_; 
v___x_5371_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_, v___y_5369_);
return v___x_5371_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object* v_00_u03b1_5372_, lean_object* v_msg_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_){
_start:
{
lean_object* v_res_5381_; 
v_res_5381_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(v_00_u03b1_5372_, v_msg_5373_, v___y_5374_, v___y_5375_, v___y_5376_, v___y_5377_, v___y_5378_, v___y_5379_);
lean_dec(v___y_5379_);
lean_dec_ref(v___y_5378_);
lean_dec(v___y_5377_);
lean_dec_ref(v___y_5376_);
lean_dec(v___y_5375_);
lean_dec_ref(v___y_5374_);
return v_res_5381_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(lean_object* v_cls_5382_, lean_object* v_msg_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_){
_start:
{
lean_object* v___x_5391_; 
v___x_5391_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_5382_, v_msg_5383_, v___y_5386_, v___y_5387_, v___y_5388_, v___y_5389_);
return v___x_5391_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___boxed(lean_object* v_cls_5392_, lean_object* v_msg_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_){
_start:
{
lean_object* v_res_5401_; 
v_res_5401_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(v_cls_5392_, v_msg_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_, v___y_5399_);
lean_dec(v___y_5399_);
lean_dec_ref(v___y_5398_);
lean_dec(v___y_5397_);
lean_dec_ref(v___y_5396_);
lean_dec(v___y_5395_);
lean_dec_ref(v___y_5394_);
return v_res_5401_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(lean_object* v_as_5402_, lean_object* v_as_x27_5403_, lean_object* v_b_5404_, lean_object* v_a_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_){
_start:
{
lean_object* v___x_5413_; 
v___x_5413_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_as_x27_5403_, v_b_5404_, v___y_5406_, v___y_5407_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_);
return v___x_5413_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___boxed(lean_object* v_as_5414_, lean_object* v_as_x27_5415_, lean_object* v_b_5416_, lean_object* v_a_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_){
_start:
{
lean_object* v_res_5425_; 
v_res_5425_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(v_as_5414_, v_as_x27_5415_, v_b_5416_, v_a_5417_, v___y_5418_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
lean_dec(v___y_5423_);
lean_dec_ref(v___y_5422_);
lean_dec(v___y_5421_);
lean_dec_ref(v___y_5420_);
lean_dec(v___y_5419_);
lean_dec_ref(v___y_5418_);
lean_dec(v_as_x27_5415_);
lean_dec(v_as_5414_);
return v_res_5425_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(lean_object* v_00_u03b1_5426_, lean_object* v_ref_5427_, lean_object* v_msg_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_){
_start:
{
lean_object* v___x_5436_; 
v___x_5436_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_ref_5427_, v_msg_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_, v___y_5434_);
return v___x_5436_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5437_, lean_object* v_ref_5438_, lean_object* v_msg_5439_, lean_object* v___y_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_, lean_object* v___y_5445_, lean_object* v___y_5446_){
_start:
{
lean_object* v_res_5447_; 
v_res_5447_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(v_00_u03b1_5437_, v_ref_5438_, v_msg_5439_, v___y_5440_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_);
lean_dec(v___y_5445_);
lean_dec_ref(v___y_5444_);
lean_dec(v___y_5443_);
lean_dec_ref(v___y_5442_);
lean_dec(v___y_5441_);
lean_dec_ref(v___y_5440_);
lean_dec(v_ref_5438_);
return v_res_5447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(lean_object* v_msgData_5448_, lean_object* v_macroStack_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_){
_start:
{
lean_object* v___x_5457_; 
v___x_5457_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_msgData_5448_, v_macroStack_5449_, v___y_5454_);
return v___x_5457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___boxed(lean_object* v_msgData_5458_, lean_object* v_macroStack_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v_res_5467_; 
v_res_5467_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(v_msgData_5458_, v_macroStack_5459_, v___y_5460_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_);
lean_dec(v___y_5465_);
lean_dec_ref(v___y_5464_);
lean_dec(v___y_5463_);
lean_dec_ref(v___y_5462_);
lean_dec(v___y_5461_);
lean_dec_ref(v___y_5460_);
return v_res_5467_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(lean_object* v_00_u03b2_5468_, lean_object* v_m_5469_, lean_object* v_a_5470_){
_start:
{
lean_object* v___x_5471_; 
v___x_5471_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v_m_5469_, v_a_5470_);
return v___x_5471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___boxed(lean_object* v_00_u03b2_5472_, lean_object* v_m_5473_, lean_object* v_a_5474_){
_start:
{
lean_object* v_res_5475_; 
v_res_5475_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(v_00_u03b2_5472_, v_m_5473_, v_a_5474_);
lean_dec(v_a_5474_);
lean_dec_ref(v_m_5473_);
return v_res_5475_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(lean_object* v_00_u03b2_5476_){
_start:
{
lean_object* v___x_5477_; 
v___x_5477_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
return v___x_5477_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(){
_start:
{
lean_object* v___x_5479_; 
v___x_5479_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
return v___x_5479_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg___boxed(lean_object* v___dummy_5480_){
_start:
{
lean_object* v_res_5481_; 
v_res_5481_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg();
return v_res_5481_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(lean_object* v_00_u03b2_5482_){
_start:
{
lean_object* v___x_5483_; 
v___x_5483_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
return v___x_5483_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27(lean_object* v_00_u03b2_5484_, lean_object* v_x_5485_, lean_object* v_x_5486_){
_start:
{
uint8_t v___x_5487_; 
v___x_5487_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(v_x_5485_, v_x_5486_);
return v___x_5487_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___boxed(lean_object* v_00_u03b2_5488_, lean_object* v_x_5489_, lean_object* v_x_5490_){
_start:
{
uint8_t v_res_5491_; lean_object* v_r_5492_; 
v_res_5491_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27(v_00_u03b2_5488_, v_x_5489_, v_x_5490_);
lean_dec_ref(v_x_5490_);
lean_dec_ref(v_x_5489_);
v_r_5492_ = lean_box(v_res_5491_);
return v_r_5492_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(lean_object* v_00_u03b2_5493_, lean_object* v_a_5494_, lean_object* v_x_5495_){
_start:
{
lean_object* v___x_5496_; 
v___x_5496_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_5494_, v_x_5495_);
return v___x_5496_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___boxed(lean_object* v_00_u03b2_5497_, lean_object* v_a_5498_, lean_object* v_x_5499_){
_start:
{
lean_object* v_res_5500_; 
v_res_5500_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(v_00_u03b2_5497_, v_a_5498_, v_x_5499_);
lean_dec(v_x_5499_);
lean_dec(v_a_5498_);
return v_res_5500_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34(lean_object* v_00_u03b2_5501_, lean_object* v_x_5502_, size_t v_x_5503_, lean_object* v_x_5504_){
_start:
{
uint8_t v___x_5505_; 
v___x_5505_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(v_x_5502_, v_x_5503_, v_x_5504_);
return v___x_5505_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___boxed(lean_object* v_00_u03b2_5506_, lean_object* v_x_5507_, lean_object* v_x_5508_, lean_object* v_x_5509_){
_start:
{
size_t v_x_316344__boxed_5510_; uint8_t v_res_5511_; lean_object* v_r_5512_; 
v_x_316344__boxed_5510_ = lean_unbox_usize(v_x_5508_);
lean_dec(v_x_5508_);
v_res_5511_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34(v_00_u03b2_5506_, v_x_5507_, v_x_316344__boxed_5510_, v_x_5509_);
lean_dec_ref(v_x_5509_);
lean_dec_ref(v_x_5507_);
v_r_5512_ = lean_box(v_res_5511_);
return v_r_5512_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38(lean_object* v_00_u03b2_5513_, lean_object* v_keys_5514_, lean_object* v_vals_5515_, lean_object* v_heq_5516_, lean_object* v_i_5517_, lean_object* v_k_5518_){
_start:
{
uint8_t v___x_5519_; 
v___x_5519_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___redArg(v_keys_5514_, v_i_5517_, v_k_5518_);
return v___x_5519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38___boxed(lean_object* v_00_u03b2_5520_, lean_object* v_keys_5521_, lean_object* v_vals_5522_, lean_object* v_heq_5523_, lean_object* v_i_5524_, lean_object* v_k_5525_){
_start:
{
uint8_t v_res_5526_; lean_object* v_r_5527_; 
v_res_5526_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34_spec__38(v_00_u03b2_5520_, v_keys_5521_, v_vals_5522_, v_heq_5523_, v_i_5524_, v_k_5525_);
lean_dec_ref(v_k_5525_);
lean_dec_ref(v_vals_5522_);
lean_dec_ref(v_keys_5521_);
v_r_5527_ = lean_box(v_res_5526_);
return v_r_5527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object* v_doSeq_5528_, lean_object* v_a_5529_, lean_object* v_a_5530_, lean_object* v_a_5531_, lean_object* v_a_5532_, lean_object* v_a_5533_, lean_object* v_a_5534_){
_start:
{
lean_object* v___x_5536_; 
v___x_5536_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_doSeq_5528_, v_a_5529_, v_a_5530_, v_a_5531_, v_a_5532_, v_a_5533_, v_a_5534_);
return v___x_5536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object* v_doSeq_5537_, lean_object* v_a_5538_, lean_object* v_a_5539_, lean_object* v_a_5540_, lean_object* v_a_5541_, lean_object* v_a_5542_, lean_object* v_a_5543_, lean_object* v_a_5544_){
_start:
{
lean_object* v_res_5545_; 
v_res_5545_ = l_Lean_Elab_Do_inferControlInfoSeq(v_doSeq_5537_, v_a_5538_, v_a_5539_, v_a_5540_, v_a_5541_, v_a_5542_, v_a_5543_);
lean_dec(v_a_5543_);
lean_dec_ref(v_a_5542_);
lean_dec(v_a_5541_);
lean_dec_ref(v_a_5540_);
lean_dec(v_a_5539_);
lean_dec_ref(v_a_5538_);
return v_res_5545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object* v_doElem_5546_, lean_object* v_a_5547_, lean_object* v_a_5548_, lean_object* v_a_5549_, lean_object* v_a_5550_, lean_object* v_a_5551_, lean_object* v_a_5552_){
_start:
{
lean_object* v___x_5554_; 
v___x_5554_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_doElem_5546_, v_a_5547_, v_a_5548_, v_a_5549_, v_a_5550_, v_a_5551_, v_a_5552_);
return v___x_5554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object* v_doElem_5555_, lean_object* v_a_5556_, lean_object* v_a_5557_, lean_object* v_a_5558_, lean_object* v_a_5559_, lean_object* v_a_5560_, lean_object* v_a_5561_, lean_object* v_a_5562_){
_start:
{
lean_object* v_res_5563_; 
v_res_5563_ = l_Lean_Elab_Do_inferControlInfoElem(v_doElem_5555_, v_a_5556_, v_a_5557_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_);
lean_dec(v_a_5561_);
lean_dec_ref(v_a_5560_);
lean_dec(v_a_5559_);
lean_dec_ref(v_a_5558_);
lean_dec(v_a_5557_);
lean_dec_ref(v_a_5556_);
return v_res_5563_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_ForwardSyntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_ForwardSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Do_instInhabitedControlInfo_default = _init_l_Lean_Elab_Do_instInhabitedControlInfo_default();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo_default);
l_Lean_Elab_Do_instInhabitedControlInfo = _init_l_Lean_Elab_Do_instInhabitedControlInfo();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo);
l_Lean_Elab_Do_ControlInfo_pure = _init_l_Lean_Elab_Do_ControlInfo_pure();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_pure);
l_Lean_Elab_Do_ControlInfo_empty = _init_l_Lean_Elab_Do_ControlInfo_empty();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_empty);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Do_controlInfoElemAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Do_controlInfoElemAttribute);
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_ForwardSyntax(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_ForwardSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Do_InferControlInfo(builtin);
}
#ifdef __cplusplus
}
#endif
