// Lean compiler output
// Module: Lean.Linter.TacticTypeCheck
// Imports: import Lean.Elab.Command import Lean.Linter.Util import Lean.Meta.Check import Lean.Meta.Diagnostics
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
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
uint8_t l_Lean_Meta_isInstanceCore(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_diagnostics;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "tacticCheckInstances"};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(62, 15, 63, 147, 29, 186, 208, 53)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "enable the linter that type-checks every tactic goal at `.implicit` transparency"};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(196, 60, 89, 104, 222, 184, 104, 61)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__11_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TacticTypeCheck"};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__11_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__11_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__12_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__11_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(49, 102, 193, 192, 84, 254, 215, 146)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__12_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__12_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__13_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__12_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(116, 222, 67, 228, 15, 224, 52, 25)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__13_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__13_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__14_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__13_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(117, 55, 50, 200, 193, 197, 82, 26)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__14_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__14_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__15_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__14_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(55, 246, 95, 93, 100, 71, 27, 119)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__15_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__15_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__16_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__15_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(54, 8, 58, 244, 180, 197, 6, 42)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__16_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__16_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__17_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__16_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(18, 81, 58, 124, 13, 242, 246, 48)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__17_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__17_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_linter_tacticCheckInstances;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___boxed(lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = " tactic goal is not type-correct at `.implicit` transparency; "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__1;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = " some of the following as `@[implicit_reducible]`:"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__3;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__4;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nFull error:"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__5_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__6;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "initial"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__7_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "consider using propositional rewriting or marking"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__8_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__8_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__9_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__10;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "consider rephrasing the goal or marking"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__11 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__11_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__11_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__12 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__12_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__13;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__14;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__15;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__0_value;
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "produced"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Elab.InfoTree.Util.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.InfoTree.Util"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__0 = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__15_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(167, 120, 193, 102, 53, 18, 184, 230)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__1 = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__1_value;
static const lean_ctor_object l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__0_value),((lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__1_value)}};
static const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__2 = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances = (const lean_object*)&l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_490307252____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_490307252____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_));
v___x_78_ = ((lean_object*)(l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_));
v___x_79_ = ((lean_object*)(l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn___closed__17_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_));
v___x_80_ = l_Lean_Option_register___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4__spec__0(v___x_77_, v___x_78_, v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4____boxed(lean_object* v_a_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_();
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___redArg(lean_object* v_e_83_, lean_object* v___y_84_){
_start:
{
uint8_t v___x_86_; 
v___x_86_ = l_Lean_Expr_hasMVar(v_e_83_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v_e_83_);
return v___x_87_;
}
else
{
lean_object* v___x_88_; lean_object* v_mctx_89_; lean_object* v___x_90_; lean_object* v_fst_91_; lean_object* v_snd_92_; lean_object* v___x_93_; lean_object* v_cache_94_; lean_object* v_zetaDeltaFVarIds_95_; lean_object* v_postponed_96_; lean_object* v_diag_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_106_; 
v___x_88_ = lean_st_ref_get(v___y_84_);
v_mctx_89_ = lean_ctor_get(v___x_88_, 0);
lean_inc_ref(v_mctx_89_);
lean_dec(v___x_88_);
v___x_90_ = l_Lean_instantiateMVarsCore(v_mctx_89_, v_e_83_);
v_fst_91_ = lean_ctor_get(v___x_90_, 0);
lean_inc(v_fst_91_);
v_snd_92_ = lean_ctor_get(v___x_90_, 1);
lean_inc(v_snd_92_);
lean_dec_ref(v___x_90_);
v___x_93_ = lean_st_ref_take(v___y_84_);
v_cache_94_ = lean_ctor_get(v___x_93_, 1);
v_zetaDeltaFVarIds_95_ = lean_ctor_get(v___x_93_, 2);
v_postponed_96_ = lean_ctor_get(v___x_93_, 3);
v_diag_97_ = lean_ctor_get(v___x_93_, 4);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v___x_93_, 0);
lean_dec(v_unused_107_);
v___x_99_ = v___x_93_;
v_isShared_100_ = v_isSharedCheck_106_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_diag_97_);
lean_inc(v_postponed_96_);
lean_inc(v_zetaDeltaFVarIds_95_);
lean_inc(v_cache_94_);
lean_dec(v___x_93_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_106_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 0, v_snd_92_);
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_snd_92_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v_cache_94_);
lean_ctor_set(v_reuseFailAlloc_105_, 2, v_zetaDeltaFVarIds_95_);
lean_ctor_set(v_reuseFailAlloc_105_, 3, v_postponed_96_);
lean_ctor_set(v_reuseFailAlloc_105_, 4, v_diag_97_);
v___x_102_ = v_reuseFailAlloc_105_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_st_ref_put(v___y_84_, v___x_102_);
v___x_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_104_, 0, v_fst_91_);
return v___x_104_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___redArg___boxed(lean_object* v_e_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___redArg(v_e_108_, v___y_109_);
lean_dec(v___y_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1(lean_object* v_e_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___redArg(v_e_112_, v___y_114_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___boxed(lean_object* v_e_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1(v_e_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__2(lean_object* v_opts_126_, lean_object* v_opt_127_){
_start:
{
lean_object* v_name_128_; lean_object* v_defValue_129_; lean_object* v_map_130_; lean_object* v___x_131_; 
v_name_128_ = lean_ctor_get(v_opt_127_, 0);
v_defValue_129_ = lean_ctor_get(v_opt_127_, 1);
v_map_130_ = lean_ctor_get(v_opts_126_, 0);
v___x_131_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_130_, v_name_128_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_inc(v_defValue_129_);
return v_defValue_129_;
}
else
{
lean_object* v_val_132_; 
v_val_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_val_132_);
lean_dec_ref_known(v___x_131_, 1);
if (lean_obj_tag(v_val_132_) == 3)
{
lean_object* v_v_133_; 
v_v_133_ = lean_ctor_get(v_val_132_, 0);
lean_inc(v_v_133_);
lean_dec_ref_known(v_val_132_, 1);
return v_v_133_;
}
else
{
lean_dec(v_val_132_);
lean_inc(v_defValue_129_);
return v_defValue_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__2___boxed(lean_object* v_opts_134_, lean_object* v_opt_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_Option_get___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__2(v_opts_134_, v_opt_135_);
lean_dec_ref(v_opt_135_);
lean_dec_ref(v_opts_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___redArg(lean_object* v_lctx_137_, lean_object* v_localInsts_138_, lean_object* v_x_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_137_, v_localInsts_138_, v_x_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
if (lean_obj_tag(v___x_145_) == 0)
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
v_a_146_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v___x_145_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_145_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
v_a_154_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v___x_145_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_145_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___redArg___boxed(lean_object* v_lctx_162_, lean_object* v_localInsts_163_, lean_object* v_x_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___redArg(v_lctx_162_, v_localInsts_163_, v_x_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7(lean_object* v_00_u03b1_171_, lean_object* v_lctx_172_, lean_object* v_localInsts_173_, lean_object* v_x_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___redArg(v_lctx_172_, v_localInsts_173_, v_x_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___boxed(lean_object* v_00_u03b1_181_, lean_object* v_lctx_182_, lean_object* v_localInsts_183_, lean_object* v_x_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7(v_00_u03b1_181_, v_lctx_182_, v_localInsts_183_, v_x_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
return v_res_190_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0_spec__0(lean_object* v_opts_191_, lean_object* v_opt_192_){
_start:
{
lean_object* v_name_193_; lean_object* v_defValue_194_; lean_object* v_map_195_; lean_object* v___x_196_; 
v_name_193_ = lean_ctor_get(v_opt_192_, 0);
v_defValue_194_ = lean_ctor_get(v_opt_192_, 1);
v_map_195_ = lean_ctor_get(v_opts_191_, 0);
v___x_196_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_195_, v_name_193_);
if (lean_obj_tag(v___x_196_) == 0)
{
uint8_t v___x_197_; 
v___x_197_ = lean_unbox(v_defValue_194_);
return v___x_197_;
}
else
{
lean_object* v_val_198_; 
v_val_198_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_val_198_);
lean_dec_ref_known(v___x_196_, 1);
if (lean_obj_tag(v_val_198_) == 1)
{
uint8_t v_v_199_; 
v_v_199_ = lean_ctor_get_uint8(v_val_198_, 0);
lean_dec_ref_known(v_val_198_, 0);
return v_v_199_;
}
else
{
uint8_t v___x_200_; 
lean_dec(v_val_198_);
v___x_200_ = lean_unbox(v_defValue_194_);
return v___x_200_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0_spec__0___boxed(lean_object* v_opts_201_, lean_object* v_opt_202_){
_start:
{
uint8_t v_res_203_; lean_object* v_r_204_; 
v_res_203_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0_spec__0(v_opts_201_, v_opt_202_);
lean_dec_ref(v_opt_202_);
lean_dec_ref(v_opts_201_);
v_r_204_ = lean_box(v_res_203_);
return v_r_204_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0(uint8_t v___x_206_, lean_object* v_x_207_){
_start:
{
if (lean_obj_tag(v_x_207_) == 1)
{
lean_object* v_pre_208_; 
v_pre_208_ = lean_ctor_get(v_x_207_, 0);
if (lean_obj_tag(v_pre_208_) == 0)
{
lean_object* v_str_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_str_209_ = lean_ctor_get(v_x_207_, 1);
v___x_210_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0___closed__0));
v___x_211_ = lean_string_dec_eq(v_str_209_, v___x_210_);
return v___x_211_;
}
else
{
return v___x_206_;
}
}
else
{
return v___x_206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0___boxed(lean_object* v___x_212_, lean_object* v_x_213_){
_start:
{
uint8_t v___x_27466__boxed_214_; uint8_t v_res_215_; lean_object* v_r_216_; 
v___x_27466__boxed_214_ = lean_unbox(v___x_212_);
v_res_215_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___lam__0(v___x_27466__boxed_214_, v_x_213_);
lean_dec(v_x_213_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0(void){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_217_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__2(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1);
v___x_221_ = lean_unsigned_to_nat(0u);
v___x_222_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
lean_ctor_set(v___x_222_, 2, v___x_221_);
lean_ctor_set(v___x_222_, 3, v___x_221_);
lean_ctor_set(v___x_222_, 4, v___x_220_);
lean_ctor_set(v___x_222_, 5, v___x_220_);
lean_ctor_set(v___x_222_, 6, v___x_220_);
lean_ctor_set(v___x_222_, 7, v___x_220_);
lean_ctor_set(v___x_222_, 8, v___x_220_);
lean_ctor_set(v___x_222_, 9, v___x_220_);
lean_ctor_set(v___x_222_, 10, v___x_220_);
return v___x_222_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__3(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = lean_unsigned_to_nat(32u);
v___x_224_ = lean_mk_empty_array_with_capacity(v___x_223_);
v___x_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4(void){
_start:
{
size_t v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_226_ = ((size_t)5ULL);
v___x_227_ = lean_unsigned_to_nat(0u);
v___x_228_ = lean_unsigned_to_nat(32u);
v___x_229_ = lean_mk_empty_array_with_capacity(v___x_228_);
v___x_230_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__3);
v___x_231_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v___x_229_);
lean_ctor_set(v___x_231_, 2, v___x_227_);
lean_ctor_set(v___x_231_, 3, v___x_227_);
lean_ctor_set_usize(v___x_231_, 4, v___x_226_);
return v___x_231_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__5(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_232_ = lean_box(1);
v___x_233_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4);
v___x_234_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__1);
v___x_235_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v___x_233_);
lean_ctor_set(v___x_235_, 2, v___x_232_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg(lean_object* v_msgData_236_, lean_object* v___y_237_){
_start:
{
lean_object* v___x_239_; lean_object* v_env_240_; uint8_t v___x_241_; lean_object* v_env_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v_scopes_245_; lean_object* v___x_246_; lean_object* v_opts_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_239_ = lean_st_ref_get(v___y_237_);
v_env_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc_ref(v_env_240_);
lean_dec(v___x_239_);
v___x_241_ = 0;
v_env_242_ = l_Lean_Environment_setRecordingDeps(v_env_240_, v___x_241_);
v___x_243_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_244_ = lean_st_ref_get(v___y_237_);
v_scopes_245_ = lean_ctor_get(v___x_244_, 2);
lean_inc(v_scopes_245_);
lean_dec(v___x_244_);
v___x_246_ = l_List_head_x21___redArg(v___x_243_, v_scopes_245_);
lean_dec(v_scopes_245_);
v_opts_247_ = lean_ctor_get(v___x_246_, 1);
lean_inc_ref(v_opts_247_);
lean_dec(v___x_246_);
v___x_248_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__2);
v___x_249_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__5);
v___x_250_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_250_, 0, v_env_242_);
lean_ctor_set(v___x_250_, 1, v___x_248_);
lean_ctor_set(v___x_250_, 2, v___x_249_);
lean_ctor_set(v___x_250_, 3, v_opts_247_);
v___x_251_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v_msgData_236_);
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___boxed(lean_object* v_msgData_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg(v_msgData_253_, v___y_254_);
lean_dec(v___y_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20(lean_object* v_ref_261_, lean_object* v_msgData_262_, uint8_t v_severity_263_, uint8_t v_isSilent_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v___y_269_; uint8_t v___y_270_; lean_object* v___y_271_; uint8_t v___y_272_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___y_275_; lean_object* v___y_276_; lean_object* v___y_334_; uint8_t v___y_335_; lean_object* v___y_336_; uint8_t v___y_337_; lean_object* v___y_338_; lean_object* v___y_359_; lean_object* v___y_360_; uint8_t v___y_361_; uint8_t v___y_362_; lean_object* v___y_363_; uint8_t v___y_367_; uint8_t v___x_395_; uint8_t v___x_396_; 
v___x_395_ = 2;
v___x_396_ = l_Lean_instBEqMessageSeverity_beq(v_severity_263_, v___x_395_);
if (v___x_396_ == 0)
{
goto v___jp_384_;
}
else
{
uint8_t v___x_397_; 
lean_inc_ref(v_msgData_262_);
v___x_397_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_262_);
if (v___x_397_ == 0)
{
goto v___jp_384_;
}
else
{
lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec_ref(v_msgData_262_);
v___x_398_ = lean_box(0);
v___x_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
return v___x_399_;
}
}
v___jp_268_:
{
lean_object* v___x_277_; 
v___x_277_ = l_Lean_Elab_Command_getScope___redArg(v___y_276_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; lean_object* v_currNamespace_279_; lean_object* v___x_280_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_a_278_);
lean_dec_ref_known(v___x_277_, 1);
v_currNamespace_279_ = lean_ctor_get(v_a_278_, 2);
lean_inc(v_currNamespace_279_);
lean_dec(v_a_278_);
v___x_280_ = l_Lean_Elab_Command_getScope___redArg(v___y_276_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_316_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_316_ == 0)
{
v___x_283_ = v___x_280_;
v_isShared_284_ = v_isSharedCheck_316_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_316_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v_openDecls_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_env_290_; lean_object* v_messages_291_; lean_object* v_scopes_292_; lean_object* v_usedQuotCtxts_293_; lean_object* v_nextMacroScope_294_; lean_object* v_maxRecDepth_295_; lean_object* v_ngen_296_; lean_object* v_auxDeclNGen_297_; lean_object* v_infoState_298_; lean_object* v_traceState_299_; lean_object* v_snapshotTasks_300_; lean_object* v_prevLinterStates_301_; lean_object* v_codeQualityEntryTasks_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_315_; 
v_openDecls_285_ = lean_ctor_get(v_a_281_, 3);
lean_inc(v_openDecls_285_);
lean_dec(v_a_281_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v_currNamespace_279_);
lean_ctor_set(v___x_286_, 1, v_openDecls_285_);
v___x_287_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___y_274_);
lean_inc_ref(v___y_269_);
lean_inc_ref(v___y_271_);
v___x_288_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_288_, 0, v___y_271_);
lean_ctor_set(v___x_288_, 1, v___y_275_);
lean_ctor_set(v___x_288_, 2, v___y_273_);
lean_ctor_set(v___x_288_, 3, v___y_269_);
lean_ctor_set(v___x_288_, 4, v___x_287_);
lean_ctor_set_uint8(v___x_288_, sizeof(void*)*5, v___y_272_);
lean_ctor_set_uint8(v___x_288_, sizeof(void*)*5 + 1, v___y_270_);
lean_ctor_set_uint8(v___x_288_, sizeof(void*)*5 + 2, v_isSilent_264_);
v___x_289_ = lean_st_ref_take(v___y_276_);
v_env_290_ = lean_ctor_get(v___x_289_, 0);
v_messages_291_ = lean_ctor_get(v___x_289_, 1);
v_scopes_292_ = lean_ctor_get(v___x_289_, 2);
v_usedQuotCtxts_293_ = lean_ctor_get(v___x_289_, 3);
v_nextMacroScope_294_ = lean_ctor_get(v___x_289_, 4);
v_maxRecDepth_295_ = lean_ctor_get(v___x_289_, 5);
v_ngen_296_ = lean_ctor_get(v___x_289_, 6);
v_auxDeclNGen_297_ = lean_ctor_get(v___x_289_, 7);
v_infoState_298_ = lean_ctor_get(v___x_289_, 8);
v_traceState_299_ = lean_ctor_get(v___x_289_, 9);
v_snapshotTasks_300_ = lean_ctor_get(v___x_289_, 10);
v_prevLinterStates_301_ = lean_ctor_get(v___x_289_, 11);
v_codeQualityEntryTasks_302_ = lean_ctor_get(v___x_289_, 12);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_315_ == 0)
{
v___x_304_ = v___x_289_;
v_isShared_305_ = v_isSharedCheck_315_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_codeQualityEntryTasks_302_);
lean_inc(v_prevLinterStates_301_);
lean_inc(v_snapshotTasks_300_);
lean_inc(v_traceState_299_);
lean_inc(v_infoState_298_);
lean_inc(v_auxDeclNGen_297_);
lean_inc(v_ngen_296_);
lean_inc(v_maxRecDepth_295_);
lean_inc(v_nextMacroScope_294_);
lean_inc(v_usedQuotCtxts_293_);
lean_inc(v_scopes_292_);
lean_inc(v_messages_291_);
lean_inc(v_env_290_);
lean_dec(v___x_289_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_315_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_306_ = lean_box(0);
v___x_307_ = l_Lean_MessageLog_add(v___x_288_, v_messages_291_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 1, v___x_307_);
v___x_309_ = v___x_304_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_env_290_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_314_, 2, v_scopes_292_);
lean_ctor_set(v_reuseFailAlloc_314_, 3, v_usedQuotCtxts_293_);
lean_ctor_set(v_reuseFailAlloc_314_, 4, v_nextMacroScope_294_);
lean_ctor_set(v_reuseFailAlloc_314_, 5, v_maxRecDepth_295_);
lean_ctor_set(v_reuseFailAlloc_314_, 6, v_ngen_296_);
lean_ctor_set(v_reuseFailAlloc_314_, 7, v_auxDeclNGen_297_);
lean_ctor_set(v_reuseFailAlloc_314_, 8, v_infoState_298_);
lean_ctor_set(v_reuseFailAlloc_314_, 9, v_traceState_299_);
lean_ctor_set(v_reuseFailAlloc_314_, 10, v_snapshotTasks_300_);
lean_ctor_set(v_reuseFailAlloc_314_, 11, v_prevLinterStates_301_);
lean_ctor_set(v_reuseFailAlloc_314_, 12, v_codeQualityEntryTasks_302_);
v___x_309_ = v_reuseFailAlloc_314_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_310_ = lean_st_ref_put(v___y_276_, v___x_309_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_306_);
v___x_312_ = v___x_283_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_306_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
lean_dec(v_currNamespace_279_);
lean_dec_ref(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
v_a_317_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_280_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_280_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec_ref(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
v_a_325_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_277_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_277_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
v___jp_333_:
{
lean_object* v_fileName_339_; lean_object* v_fileMap_340_; uint8_t v_suppressElabErrors_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_357_; 
v_fileName_339_ = lean_ctor_get(v___y_265_, 0);
v_fileMap_340_ = lean_ctor_get(v___y_265_, 1);
v_suppressElabErrors_341_ = lean_ctor_get_uint8(v___y_265_, sizeof(void*)*10);
v___x_342_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_262_);
v___x_343_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg(v___x_342_, v___y_266_);
v_a_344_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_357_ == 0)
{
v___x_346_ = v___x_343_;
v_isShared_347_ = v_isSharedCheck_357_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_343_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_357_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
lean_inc_ref_n(v_fileMap_340_, 2);
v___x_348_ = l_Lean_FileMap_toPosition(v_fileMap_340_, v___y_336_);
lean_dec(v___y_336_);
v___x_349_ = l_Lean_FileMap_toPosition(v_fileMap_340_, v___y_338_);
lean_dec(v___y_338_);
v___x_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
v___x_351_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___closed__0));
if (v_suppressElabErrors_341_ == 0)
{
lean_del_object(v___x_346_);
v___y_269_ = v___x_351_;
v___y_270_ = v___y_335_;
v___y_271_ = v_fileName_339_;
v___y_272_ = v___y_337_;
v___y_273_ = v___x_350_;
v___y_274_ = v_a_344_;
v___y_275_ = v___x_348_;
v___y_276_ = v___y_266_;
goto v___jp_268_;
}
else
{
uint8_t v___x_352_; 
lean_inc(v_a_344_);
lean_inc_ref(v___y_334_);
v___x_352_ = l_Lean_MessageData_hasTag(v___y_334_, v_a_344_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_355_; 
lean_dec_ref_known(v___x_350_, 1);
lean_dec_ref(v___x_348_);
lean_dec(v_a_344_);
v___x_353_ = lean_box(0);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v___x_353_);
v___x_355_ = v___x_346_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
else
{
lean_del_object(v___x_346_);
v___y_269_ = v___x_351_;
v___y_270_ = v___y_335_;
v___y_271_ = v_fileName_339_;
v___y_272_ = v___y_337_;
v___y_273_ = v___x_350_;
v___y_274_ = v_a_344_;
v___y_275_ = v___x_348_;
v___y_276_ = v___y_266_;
goto v___jp_268_;
}
}
}
}
v___jp_358_:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Syntax_getTailPos_x3f(v___y_359_, v___y_361_);
lean_dec(v___y_359_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_inc(v___y_363_);
v___y_334_ = v___y_360_;
v___y_335_ = v___y_362_;
v___y_336_ = v___y_363_;
v___y_337_ = v___y_361_;
v___y_338_ = v___y_363_;
goto v___jp_333_;
}
else
{
lean_object* v_val_365_; 
v_val_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_val_365_);
lean_dec_ref_known(v___x_364_, 1);
v___y_334_ = v___y_360_;
v___y_335_ = v___y_362_;
v___y_336_ = v___y_363_;
v___y_337_ = v___y_361_;
v___y_338_ = v_val_365_;
goto v___jp_333_;
}
}
v___jp_366_:
{
lean_object* v___x_368_; 
v___x_368_ = l_Lean_Elab_Command_getRef___redArg(v___y_265_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v_ref_370_; uint8_t v___x_371_; lean_object* v___f_372_; lean_object* v___x_373_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_a_369_);
lean_dec_ref_known(v___x_368_, 1);
v_ref_370_ = l_Lean_replaceRef(v_ref_261_, v_a_369_);
lean_dec(v_a_369_);
v___x_371_ = 0;
v___f_372_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___closed__1));
v___x_373_ = l_Lean_Syntax_getPos_x3f(v_ref_370_, v___x_371_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v___x_374_; 
v___x_374_ = lean_unsigned_to_nat(0u);
v___y_359_ = v_ref_370_;
v___y_360_ = v___f_372_;
v___y_361_ = v___x_371_;
v___y_362_ = v___y_367_;
v___y_363_ = v___x_374_;
goto v___jp_358_;
}
else
{
lean_object* v_val_375_; 
v_val_375_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_val_375_);
lean_dec_ref_known(v___x_373_, 1);
v___y_359_ = v_ref_370_;
v___y_360_ = v___f_372_;
v___y_361_ = v___x_371_;
v___y_362_ = v___y_367_;
v___y_363_ = v_val_375_;
goto v___jp_358_;
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec_ref(v_msgData_262_);
v_a_376_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_368_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_368_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
v___jp_384_:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v_scopes_387_; lean_object* v___x_388_; lean_object* v_opts_389_; uint8_t v___x_390_; uint8_t v___x_391_; 
v___x_385_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_386_ = lean_st_ref_get(v___y_266_);
v_scopes_387_ = lean_ctor_get(v___x_386_, 2);
lean_inc(v_scopes_387_);
lean_dec(v___x_386_);
v___x_388_ = l_List_head_x21___redArg(v___x_385_, v_scopes_387_);
lean_dec(v_scopes_387_);
v_opts_389_ = lean_ctor_get(v___x_388_, 1);
lean_inc_ref(v_opts_389_);
lean_dec(v___x_388_);
v___x_390_ = 1;
v___x_391_ = l_Lean_instBEqMessageSeverity_beq(v_severity_263_, v___x_390_);
if (v___x_391_ == 0)
{
lean_dec_ref(v_opts_389_);
v___y_367_ = v_severity_263_;
goto v___jp_366_;
}
else
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = l_Lean_warningAsError;
v___x_393_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0_spec__0(v_opts_389_, v___x_392_);
lean_dec_ref(v_opts_389_);
if (v___x_393_ == 0)
{
v___y_367_ = v_severity_263_;
goto v___jp_366_;
}
else
{
uint8_t v___x_394_; 
v___x_394_ = 2;
v___y_367_ = v___x_394_;
goto v___jp_366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20___boxed(lean_object* v_ref_400_, lean_object* v_msgData_401_, lean_object* v_severity_402_, lean_object* v_isSilent_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
uint8_t v_severity_boxed_407_; uint8_t v_isSilent_boxed_408_; lean_object* v_res_409_; 
v_severity_boxed_407_ = lean_unbox(v_severity_402_);
v_isSilent_boxed_408_ = lean_unbox(v_isSilent_403_);
v_res_409_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20(v_ref_400_, v_msgData_401_, v_severity_boxed_407_, v_isSilent_boxed_408_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v_ref_400_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15(lean_object* v_ref_410_, lean_object* v_msgData_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
uint8_t v___x_415_; uint8_t v___x_416_; lean_object* v___x_417_; 
v___x_415_ = 1;
v___x_416_ = 0;
v___x_417_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20(v_ref_410_, v_msgData_411_, v___x_415_, v___x_416_, v___y_412_, v___y_413_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15___boxed(lean_object* v_ref_418_, lean_object* v_msgData_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15(v_ref_418_, v_msgData_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v_ref_418_);
return v_res_423_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__1(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__0));
v___x_426_ = l_Lean_stringToMessageData(v___x_425_);
return v___x_426_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__3(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__2));
v___x_429_ = l_Lean_stringToMessageData(v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9(lean_object* v_linterOption_430_, lean_object* v_stx_431_, lean_object* v_msg_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_name_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_454_; 
v_name_436_ = lean_ctor_get(v_linterOption_430_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v_linterOption_430_);
if (v_isSharedCheck_454_ == 0)
{
lean_object* v_unused_455_; 
v_unused_455_ = lean_ctor_get(v_linterOption_430_, 1);
lean_dec(v_unused_455_);
v___x_438_ = v_linterOption_430_;
v_isShared_439_ = v_isSharedCheck_454_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_name_436_);
lean_dec(v_linterOption_430_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_454_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_440_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__1, &l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__1_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__1);
lean_inc(v_name_436_);
v___x_441_ = l_Lean_MessageData_ofName(v_name_436_);
if (v_isShared_439_ == 0)
{
lean_ctor_set_tag(v___x_438_, 7);
lean_ctor_set(v___x_438_, 1, v___x_441_);
lean_ctor_set(v___x_438_, 0, v___x_440_);
v___x_443_ = v___x_438_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_440_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v___x_441_);
v___x_443_ = v_reuseFailAlloc_453_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v_disable_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_444_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__3, &l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__3_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___closed__3);
v___x_445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_443_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v_disable_446_ = l_Lean_MessageData_note(v___x_445_);
v___x_447_ = l_Lean_Linter_linterMessageTag;
v___x_448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_448_, 0, v_msg_432_);
lean_ctor_set(v___x_448_, 1, v_disable_446_);
v___x_449_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_447_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
v___x_450_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_450_, 0, v_name_436_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
lean_inc(v_stx_431_);
v___x_451_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_451_, 0, v_stx_431_);
lean_ctor_set(v___x_451_, 1, v___x_450_);
v___x_452_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15(v_stx_431_, v___x_451_, v___y_433_, v___y_434_);
lean_dec(v_stx_431_);
return v___x_452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9___boxed(lean_object* v_linterOption_456_, lean_object* v_stx_457_, lean_object* v_msg_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9(v_linterOption_456_, v_stx_457_, v_msg_458_, v___y_459_, v___y_460_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11(lean_object* v_o_465_, lean_object* v_k_466_, uint8_t v_v_467_){
_start:
{
lean_object* v_map_468_; uint8_t v_hasTrace_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_483_; 
v_map_468_ = lean_ctor_get(v_o_465_, 0);
v_hasTrace_469_ = lean_ctor_get_uint8(v_o_465_, sizeof(void*)*1);
v_isSharedCheck_483_ = !lean_is_exclusive(v_o_465_);
if (v_isSharedCheck_483_ == 0)
{
v___x_471_ = v_o_465_;
v_isShared_472_ = v_isSharedCheck_483_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_map_468_);
lean_dec(v_o_465_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_483_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_473_, 0, v_v_467_);
lean_inc(v_k_466_);
v___x_474_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_466_, v___x_473_, v_map_468_);
if (v_hasTrace_469_ == 0)
{
lean_object* v___x_475_; uint8_t v___x_476_; lean_object* v___x_478_; 
v___x_475_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11___closed__0));
v___x_476_ = l_Lean_Name_isPrefixOf(v___x_475_, v_k_466_);
lean_dec(v_k_466_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_474_);
v___x_478_ = v___x_471_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_474_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_ctor_set_uint8(v___x_478_, sizeof(void*)*1, v___x_476_);
return v___x_478_;
}
}
else
{
lean_object* v___x_481_; 
lean_dec(v_k_466_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_474_);
v___x_481_ = v___x_471_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_482_, sizeof(void*)*1, v_hasTrace_469_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11___boxed(lean_object* v_o_484_, lean_object* v_k_485_, lean_object* v_v_486_){
_start:
{
uint8_t v_v_boxed_487_; lean_object* v_res_488_; 
v_v_boxed_487_ = lean_unbox(v_v_486_);
v_res_488_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11(v_o_484_, v_k_485_, v_v_boxed_487_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6(lean_object* v_opts_489_, lean_object* v_opt_490_, uint8_t v_val_491_){
_start:
{
lean_object* v_name_492_; lean_object* v___x_493_; 
v_name_492_ = lean_ctor_get(v_opt_490_, 0);
lean_inc(v_name_492_);
lean_dec_ref(v_opt_490_);
v___x_493_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6_spec__11(v_opts_489_, v_name_492_, v_val_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6___boxed(lean_object* v_opts_494_, lean_object* v_opt_495_, lean_object* v_val_496_){
_start:
{
uint8_t v_val_boxed_497_; lean_object* v_res_498_; 
v_val_boxed_497_ = lean_unbox(v_val_496_);
v_res_498_ = l_Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6(v_opts_494_, v_opt_495_, v_val_boxed_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___redArg(lean_object* v_keys_499_, lean_object* v_vals_500_, lean_object* v_i_501_, lean_object* v_k_502_){
_start:
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = lean_array_get_size(v_keys_499_);
v___x_504_ = lean_nat_dec_lt(v_i_501_, v___x_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_dec(v_i_501_);
v___x_505_ = lean_box(0);
return v___x_505_;
}
else
{
lean_object* v_k_x27_506_; uint8_t v___x_507_; 
v_k_x27_506_ = lean_array_fget_borrowed(v_keys_499_, v_i_501_);
v___x_507_ = lean_name_eq(v_k_502_, v_k_x27_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_unsigned_to_nat(1u);
v___x_509_ = lean_nat_add(v_i_501_, v___x_508_);
lean_dec(v_i_501_);
v_i_501_ = v___x_509_;
goto _start;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_array_fget_borrowed(v_vals_500_, v_i_501_);
lean_dec(v_i_501_);
lean_inc(v___x_511_);
v___x_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___redArg___boxed(lean_object* v_keys_513_, lean_object* v_vals_514_, lean_object* v_i_515_, lean_object* v_k_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___redArg(v_keys_513_, v_vals_514_, v_i_515_, v_k_516_);
lean_dec(v_k_516_);
lean_dec_ref(v_vals_514_);
lean_dec_ref(v_keys_513_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___redArg(lean_object* v_x_518_, size_t v_x_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v_es_521_; lean_object* v___x_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v_j_525_; lean_object* v___x_526_; 
v_es_521_ = lean_ctor_get(v_x_518_, 0);
v___x_522_ = lean_box(2);
v___x_523_ = ((size_t)31ULL);
v___x_524_ = lean_usize_land(v_x_519_, v___x_523_);
v_j_525_ = lean_usize_to_nat(v___x_524_);
v___x_526_ = lean_array_get_borrowed(v___x_522_, v_es_521_, v_j_525_);
lean_dec(v_j_525_);
switch(lean_obj_tag(v___x_526_))
{
case 0:
{
lean_object* v_key_527_; lean_object* v_val_528_; uint8_t v___x_529_; 
v_key_527_ = lean_ctor_get(v___x_526_, 0);
v_val_528_ = lean_ctor_get(v___x_526_, 1);
v___x_529_ = lean_name_eq(v_x_520_, v_key_527_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
v___x_530_ = lean_box(0);
return v___x_530_;
}
else
{
lean_object* v___x_531_; 
lean_inc(v_val_528_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_val_528_);
return v___x_531_;
}
}
case 1:
{
lean_object* v_node_532_; size_t v___x_533_; size_t v___x_534_; 
v_node_532_ = lean_ctor_get(v___x_526_, 0);
v___x_533_ = ((size_t)5ULL);
v___x_534_ = lean_usize_shift_right(v_x_519_, v___x_533_);
v_x_518_ = v_node_532_;
v_x_519_ = v___x_534_;
goto _start;
}
default: 
{
lean_object* v___x_536_; 
v___x_536_ = lean_box(0);
return v___x_536_;
}
}
}
else
{
lean_object* v_ks_537_; lean_object* v_vs_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_ks_537_ = lean_ctor_get(v_x_518_, 0);
v_vs_538_ = lean_ctor_get(v_x_518_, 1);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___redArg(v_ks_537_, v_vs_538_, v___x_539_, v_x_520_);
return v___x_540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
size_t v_x_27966__boxed_544_; lean_object* v_res_545_; 
v_x_27966__boxed_544_ = lean_unbox_usize(v_x_542_);
lean_dec(v_x_542_);
v_res_545_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___redArg(v_x_541_, v_x_27966__boxed_544_, v_x_543_);
lean_dec(v_x_543_);
lean_dec_ref(v_x_541_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___redArg(lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
uint64_t v___y_549_; 
if (lean_obj_tag(v_x_547_) == 0)
{
uint64_t v___x_552_; 
v___x_552_ = 1723ULL;
v___y_549_ = v___x_552_;
goto v___jp_548_;
}
else
{
uint64_t v_hash_553_; 
v_hash_553_ = lean_ctor_get_uint64(v_x_547_, sizeof(void*)*2);
v___y_549_ = v_hash_553_;
goto v___jp_548_;
}
v___jp_548_:
{
size_t v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_uint64_to_usize(v___y_549_);
v___x_551_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___redArg(v_x_546_, v___x_550_, v_x_547_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___redArg___boxed(lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___redArg(v_x_554_, v_x_555_);
lean_dec(v_x_555_);
lean_dec_ref(v_x_554_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18_spec__24___redArg(lean_object* v_x_557_, lean_object* v_x_558_, lean_object* v_x_559_, lean_object* v_x_560_){
_start:
{
lean_object* v_ks_561_; lean_object* v_vs_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_586_; 
v_ks_561_ = lean_ctor_get(v_x_557_, 0);
v_vs_562_ = lean_ctor_get(v_x_557_, 1);
v_isSharedCheck_586_ = !lean_is_exclusive(v_x_557_);
if (v_isSharedCheck_586_ == 0)
{
v___x_564_ = v_x_557_;
v_isShared_565_ = v_isSharedCheck_586_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_vs_562_);
lean_inc(v_ks_561_);
lean_dec(v_x_557_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_586_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_566_ = lean_array_get_size(v_ks_561_);
v___x_567_ = lean_nat_dec_lt(v_x_558_, v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_571_; 
lean_dec(v_x_558_);
v___x_568_ = lean_array_push(v_ks_561_, v_x_559_);
v___x_569_ = lean_array_push(v_vs_562_, v_x_560_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_569_);
lean_ctor_set(v___x_564_, 0, v___x_568_);
v___x_571_ = v___x_564_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v___x_569_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
else
{
lean_object* v_k_x27_573_; uint8_t v___x_574_; 
v_k_x27_573_ = lean_array_fget_borrowed(v_ks_561_, v_x_558_);
v___x_574_ = lean_name_eq(v_x_559_, v_k_x27_573_);
if (v___x_574_ == 0)
{
lean_object* v___x_576_; 
if (v_isShared_565_ == 0)
{
v___x_576_ = v___x_564_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_ks_561_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_vs_562_);
v___x_576_ = v_reuseFailAlloc_580_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_unsigned_to_nat(1u);
v___x_578_ = lean_nat_add(v_x_558_, v___x_577_);
lean_dec(v_x_558_);
v_x_557_ = v___x_576_;
v_x_558_ = v___x_578_;
goto _start;
}
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_581_ = lean_array_fset(v_ks_561_, v_x_558_, v_x_559_);
v___x_582_ = lean_array_fset(v_vs_562_, v_x_558_, v_x_560_);
lean_dec(v_x_558_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_582_);
lean_ctor_set(v___x_564_, 0, v___x_581_);
v___x_584_ = v___x_564_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18___redArg(lean_object* v_n_587_, lean_object* v_k_588_, lean_object* v_v_589_){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_unsigned_to_nat(0u);
v___x_591_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18_spec__24___redArg(v_n_587_, v___x_590_, v_k_588_, v_v_589_);
return v___x_591_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg(lean_object* v_x_593_, size_t v_x_594_, size_t v_x_595_, lean_object* v_x_596_, lean_object* v_x_597_){
_start:
{
if (lean_obj_tag(v_x_593_) == 0)
{
lean_object* v_es_598_; size_t v___x_599_; size_t v___x_600_; lean_object* v_j_601_; lean_object* v___x_602_; uint8_t v___x_603_; 
v_es_598_ = lean_ctor_get(v_x_593_, 0);
v___x_599_ = ((size_t)31ULL);
v___x_600_ = lean_usize_land(v_x_594_, v___x_599_);
v_j_601_ = lean_usize_to_nat(v___x_600_);
v___x_602_ = lean_array_get_size(v_es_598_);
v___x_603_ = lean_nat_dec_lt(v_j_601_, v___x_602_);
if (v___x_603_ == 0)
{
lean_dec(v_j_601_);
lean_dec(v_x_597_);
lean_dec(v_x_596_);
return v_x_593_;
}
else
{
lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_642_; 
lean_inc_ref(v_es_598_);
v_isSharedCheck_642_ = !lean_is_exclusive(v_x_593_);
if (v_isSharedCheck_642_ == 0)
{
lean_object* v_unused_643_; 
v_unused_643_ = lean_ctor_get(v_x_593_, 0);
lean_dec(v_unused_643_);
v___x_605_ = v_x_593_;
v_isShared_606_ = v_isSharedCheck_642_;
goto v_resetjp_604_;
}
else
{
lean_dec(v_x_593_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_642_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v_v_607_; lean_object* v___x_608_; lean_object* v_xs_x27_609_; lean_object* v___y_611_; 
v_v_607_ = lean_array_fget(v_es_598_, v_j_601_);
v___x_608_ = lean_box(0);
v_xs_x27_609_ = lean_array_fset(v_es_598_, v_j_601_, v___x_608_);
switch(lean_obj_tag(v_v_607_))
{
case 0:
{
lean_object* v_key_616_; lean_object* v_val_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_627_; 
v_key_616_ = lean_ctor_get(v_v_607_, 0);
v_val_617_ = lean_ctor_get(v_v_607_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v_v_607_);
if (v_isSharedCheck_627_ == 0)
{
v___x_619_ = v_v_607_;
v_isShared_620_ = v_isSharedCheck_627_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_val_617_);
lean_inc(v_key_616_);
lean_dec(v_v_607_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_627_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
uint8_t v___x_621_; 
v___x_621_ = lean_name_eq(v_x_596_, v_key_616_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_623_; 
lean_del_object(v___x_619_);
v___x_622_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_616_, v_val_617_, v_x_596_, v_x_597_);
v___x_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
v___y_611_ = v___x_623_;
goto v___jp_610_;
}
else
{
lean_object* v___x_625_; 
lean_dec(v_val_617_);
lean_dec(v_key_616_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v_x_597_);
lean_ctor_set(v___x_619_, 0, v_x_596_);
v___x_625_ = v___x_619_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_x_596_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_x_597_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
v___y_611_ = v___x_625_;
goto v___jp_610_;
}
}
}
}
case 1:
{
lean_object* v_node_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_640_; 
v_node_628_ = lean_ctor_get(v_v_607_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v_v_607_);
if (v_isSharedCheck_640_ == 0)
{
v___x_630_ = v_v_607_;
v_isShared_631_ = v_isSharedCheck_640_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_node_628_);
lean_dec(v_v_607_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_640_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
size_t v___x_632_; size_t v___x_633_; size_t v___x_634_; size_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_632_ = ((size_t)5ULL);
v___x_633_ = lean_usize_shift_right(v_x_594_, v___x_632_);
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_add(v_x_595_, v___x_634_);
v___x_636_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg(v_node_628_, v___x_633_, v___x_635_, v_x_596_, v_x_597_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 0, v___x_636_);
v___x_638_ = v___x_630_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
v___y_611_ = v___x_638_;
goto v___jp_610_;
}
}
}
default: 
{
lean_object* v___x_641_; 
v___x_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_641_, 0, v_x_596_);
lean_ctor_set(v___x_641_, 1, v_x_597_);
v___y_611_ = v___x_641_;
goto v___jp_610_;
}
}
v___jp_610_:
{
lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_612_ = lean_array_fset(v_xs_x27_609_, v_j_601_, v___y_611_);
lean_dec(v_j_601_);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 0, v___x_612_);
v___x_614_ = v___x_605_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
}
else
{
lean_object* v_ks_644_; lean_object* v_vs_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_663_; 
v_ks_644_ = lean_ctor_get(v_x_593_, 0);
v_vs_645_ = lean_ctor_get(v_x_593_, 1);
v_isSharedCheck_663_ = !lean_is_exclusive(v_x_593_);
if (v_isSharedCheck_663_ == 0)
{
v___x_647_ = v_x_593_;
v_isShared_648_ = v_isSharedCheck_663_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_vs_645_);
lean_inc(v_ks_644_);
lean_dec(v_x_593_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_663_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_ks_644_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v_vs_645_);
v___x_650_ = v_reuseFailAlloc_662_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v_newNode_651_; size_t v___x_652_; uint8_t v___x_653_; 
v_newNode_651_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18___redArg(v___x_650_, v_x_596_, v_x_597_);
v___x_652_ = ((size_t)7ULL);
v___x_653_ = lean_usize_dec_le(v___x_652_, v_x_595_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v___x_654_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_651_);
v___x_655_ = lean_unsigned_to_nat(4u);
v___x_656_ = lean_nat_dec_lt(v___x_654_, v___x_655_);
lean_dec(v___x_654_);
if (v___x_656_ == 0)
{
lean_object* v_ks_657_; lean_object* v_vs_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v_ks_657_ = lean_ctor_get(v_newNode_651_, 0);
lean_inc_ref(v_ks_657_);
v_vs_658_ = lean_ctor_get(v_newNode_651_, 1);
lean_inc_ref(v_vs_658_);
lean_dec_ref(v_newNode_651_);
v___x_659_ = lean_unsigned_to_nat(0u);
v___x_660_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg___closed__0);
v___x_661_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___redArg(v_x_595_, v_ks_657_, v_vs_658_, v___x_659_, v___x_660_);
lean_dec_ref(v_vs_658_);
lean_dec_ref(v_ks_657_);
return v___x_661_;
}
else
{
return v_newNode_651_;
}
}
else
{
return v_newNode_651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___redArg(size_t v_depth_664_, lean_object* v_keys_665_, lean_object* v_vals_666_, lean_object* v_i_667_, lean_object* v_entries_668_){
_start:
{
lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_669_ = lean_array_get_size(v_keys_665_);
v___x_670_ = lean_nat_dec_lt(v_i_667_, v___x_669_);
if (v___x_670_ == 0)
{
lean_dec(v_i_667_);
return v_entries_668_;
}
else
{
lean_object* v_k_671_; lean_object* v_v_672_; uint64_t v___y_674_; 
v_k_671_ = lean_array_fget_borrowed(v_keys_665_, v_i_667_);
v_v_672_ = lean_array_fget_borrowed(v_vals_666_, v_i_667_);
if (lean_obj_tag(v_k_671_) == 0)
{
uint64_t v___x_685_; 
v___x_685_ = 1723ULL;
v___y_674_ = v___x_685_;
goto v___jp_673_;
}
else
{
uint64_t v_hash_686_; 
v_hash_686_ = lean_ctor_get_uint64(v_k_671_, sizeof(void*)*2);
v___y_674_ = v_hash_686_;
goto v___jp_673_;
}
v___jp_673_:
{
size_t v_h_675_; size_t v___x_676_; lean_object* v___x_677_; size_t v___x_678_; size_t v___x_679_; size_t v___x_680_; size_t v_h_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_h_675_ = lean_uint64_to_usize(v___y_674_);
v___x_676_ = ((size_t)5ULL);
v___x_677_ = lean_unsigned_to_nat(1u);
v___x_678_ = ((size_t)1ULL);
v___x_679_ = lean_usize_sub(v_depth_664_, v___x_678_);
v___x_680_ = lean_usize_mul(v___x_676_, v___x_679_);
v_h_681_ = lean_usize_shift_right(v_h_675_, v___x_680_);
v___x_682_ = lean_nat_add(v_i_667_, v___x_677_);
lean_dec(v_i_667_);
lean_inc(v_v_672_);
lean_inc(v_k_671_);
v___x_683_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg(v_entries_668_, v_h_681_, v_depth_664_, v_k_671_, v_v_672_);
v_i_667_ = v___x_682_;
v_entries_668_ = v___x_683_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___redArg___boxed(lean_object* v_depth_687_, lean_object* v_keys_688_, lean_object* v_vals_689_, lean_object* v_i_690_, lean_object* v_entries_691_){
_start:
{
size_t v_depth_boxed_692_; lean_object* v_res_693_; 
v_depth_boxed_692_ = lean_unbox_usize(v_depth_687_);
lean_dec(v_depth_687_);
v_res_693_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___redArg(v_depth_boxed_692_, v_keys_688_, v_vals_689_, v_i_690_, v_entries_691_);
lean_dec_ref(v_vals_689_);
lean_dec_ref(v_keys_688_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_x_694_, lean_object* v_x_695_, lean_object* v_x_696_, lean_object* v_x_697_, lean_object* v_x_698_){
_start:
{
size_t v_x_28107__boxed_699_; size_t v_x_28108__boxed_700_; lean_object* v_res_701_; 
v_x_28107__boxed_699_ = lean_unbox_usize(v_x_695_);
lean_dec(v_x_695_);
v_x_28108__boxed_700_ = lean_unbox_usize(v_x_696_);
lean_dec(v_x_696_);
v_res_701_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg(v_x_694_, v_x_28107__boxed_699_, v_x_28108__boxed_700_, v_x_697_, v_x_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5___redArg(lean_object* v_x_702_, lean_object* v_x_703_, lean_object* v_x_704_){
_start:
{
uint64_t v___y_706_; 
if (lean_obj_tag(v_x_703_) == 0)
{
uint64_t v___x_710_; 
v___x_710_ = 1723ULL;
v___y_706_ = v___x_710_;
goto v___jp_705_;
}
else
{
uint64_t v_hash_711_; 
v_hash_711_ = lean_ctor_get_uint64(v_x_703_, sizeof(void*)*2);
v___y_706_ = v_hash_711_;
goto v___jp_705_;
}
v___jp_705_:
{
size_t v___x_707_; size_t v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_uint64_to_usize(v___y_706_);
v___x_708_ = ((size_t)1ULL);
v___x_709_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg(v_x_702_, v___x_707_, v___x_708_, v_x_703_, v_x_704_);
return v___x_709_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___lam__0(lean_object* v_oldCounters_712_, lean_object* v_x_713_, lean_object* v_____s_714_){
_start:
{
lean_object* v_fst_715_; lean_object* v_snd_716_; lean_object* v___x_717_; 
v_fst_715_ = lean_ctor_get(v_x_713_, 0);
lean_inc(v_fst_715_);
v_snd_716_ = lean_ctor_get(v_x_713_, 1);
lean_inc(v_snd_716_);
lean_dec_ref(v_x_713_);
v___x_717_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___redArg(v_oldCounters_712_, v_fst_715_);
if (lean_obj_tag(v___x_717_) == 1)
{
lean_object* v_val_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_727_; 
v_val_718_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_727_ == 0)
{
v___x_720_ = v___x_717_;
v_isShared_721_ = v_isSharedCheck_727_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_val_718_);
lean_dec(v___x_717_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_727_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_722_; lean_object* v_result_723_; lean_object* v___x_725_; 
v___x_722_ = lean_nat_sub(v_snd_716_, v_val_718_);
lean_dec(v_val_718_);
lean_dec(v_snd_716_);
v_result_723_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5___redArg(v_____s_714_, v_fst_715_, v___x_722_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 0, v_result_723_);
v___x_725_ = v___x_720_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_result_723_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
else
{
lean_object* v_result_728_; lean_object* v___x_729_; 
lean_dec(v___x_717_);
v_result_728_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5___redArg(v_____s_714_, v_fst_715_, v_snd_716_);
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v_result_728_);
return v___x_729_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___lam__0___boxed(lean_object* v_oldCounters_730_, lean_object* v_x_731_, lean_object* v_____s_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___lam__0(v_oldCounters_730_, v_x_731_, v_____s_732_);
lean_dec_ref(v_oldCounters_730_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg___lam__0(lean_object* v_f_734_, lean_object* v_s_735_, lean_object* v_a_736_, lean_object* v_b_737_){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v_a_736_);
lean_ctor_set(v___x_738_, 1, v_b_737_);
v___x_739_ = lean_apply_2(v_f_734_, v___x_738_, v_s_735_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_739_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_739_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
v_a_748_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_739_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_739_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___redArg(lean_object* v_f_756_, lean_object* v_keys_757_, lean_object* v_vals_758_, lean_object* v_i_759_, lean_object* v_acc_760_){
_start:
{
lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_761_ = lean_array_get_size(v_keys_757_);
v___x_762_ = lean_nat_dec_lt(v_i_759_, v___x_761_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; 
lean_dec(v_i_759_);
lean_dec_ref(v_f_756_);
v___x_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_763_, 0, v_acc_760_);
return v___x_763_;
}
else
{
lean_object* v_k_764_; lean_object* v_v_765_; lean_object* v___x_766_; 
v_k_764_ = lean_array_fget_borrowed(v_keys_757_, v_i_759_);
v_v_765_ = lean_array_fget_borrowed(v_vals_758_, v_i_759_);
lean_inc_ref(v_f_756_);
lean_inc(v_v_765_);
lean_inc(v_k_764_);
v___x_766_ = lean_apply_3(v_f_756_, v_acc_760_, v_k_764_, v_v_765_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_dec(v_i_759_);
lean_dec_ref(v_f_756_);
return v___x_766_;
}
else
{
lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = lean_unsigned_to_nat(1u);
v___x_769_ = lean_nat_add(v_i_759_, v___x_768_);
lean_dec(v_i_759_);
v_i_759_ = v___x_769_;
v_acc_760_ = v_a_767_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___redArg___boxed(lean_object* v_f_771_, lean_object* v_keys_772_, lean_object* v_vals_773_, lean_object* v_i_774_, lean_object* v_acc_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___redArg(v_f_771_, v_keys_772_, v_vals_773_, v_i_774_, v_acc_775_);
lean_dec_ref(v_vals_773_);
lean_dec_ref(v_keys_772_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___redArg(lean_object* v_f_777_, lean_object* v_as_778_, size_t v_i_779_, size_t v_stop_780_, lean_object* v_b_781_){
_start:
{
lean_object* v_a_783_; lean_object* v___y_788_; uint8_t v___x_790_; 
v___x_790_ = lean_usize_dec_eq(v_i_779_, v_stop_780_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lean_array_uget_borrowed(v_as_778_, v_i_779_);
switch(lean_obj_tag(v___x_791_))
{
case 0:
{
lean_object* v_key_792_; lean_object* v_val_793_; lean_object* v___x_794_; 
v_key_792_ = lean_ctor_get(v___x_791_, 0);
v_val_793_ = lean_ctor_get(v___x_791_, 1);
lean_inc_ref(v_f_777_);
lean_inc(v_val_793_);
lean_inc(v_key_792_);
v___x_794_ = lean_apply_3(v_f_777_, v_b_781_, v_key_792_, v_val_793_);
v___y_788_ = v___x_794_;
goto v___jp_787_;
}
case 1:
{
lean_object* v_node_795_; lean_object* v___x_796_; 
v_node_795_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_node_795_);
lean_inc_ref(v_f_777_);
v___x_796_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22___redArg(v_f_777_, v_node_795_, v_b_781_);
v___y_788_ = v___x_796_;
goto v___jp_787_;
}
default: 
{
v_a_783_ = v_b_781_;
goto v___jp_782_;
}
}
}
else
{
lean_object* v___x_797_; 
lean_dec_ref(v_f_777_);
v___x_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_797_, 0, v_b_781_);
return v___x_797_;
}
v___jp_782_:
{
size_t v___x_784_; size_t v___x_785_; 
v___x_784_ = ((size_t)1ULL);
v___x_785_ = lean_usize_add(v_i_779_, v___x_784_);
v_i_779_ = v___x_785_;
v_b_781_ = v_a_783_;
goto _start;
}
v___jp_787_:
{
if (lean_obj_tag(v___y_788_) == 0)
{
lean_dec_ref(v_f_777_);
return v___y_788_;
}
else
{
lean_object* v_a_789_; 
v_a_789_ = lean_ctor_get(v___y_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___y_788_, 1);
v_a_783_ = v_a_789_;
goto v___jp_782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22___redArg(lean_object* v_f_798_, lean_object* v_x_799_, lean_object* v_x_800_){
_start:
{
if (lean_obj_tag(v_x_799_) == 0)
{
lean_object* v_es_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_814_; 
v_es_801_ = lean_ctor_get(v_x_799_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v_x_799_);
if (v_isSharedCheck_814_ == 0)
{
v___x_803_ = v_x_799_;
v_isShared_804_ = v_isSharedCheck_814_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_es_801_);
lean_dec(v_x_799_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_814_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_array_get_size(v_es_801_);
v___x_807_ = lean_nat_dec_lt(v___x_805_, v___x_806_);
if (v___x_807_ == 0)
{
lean_object* v___x_809_; 
lean_dec_ref(v_es_801_);
lean_dec_ref(v_f_798_);
if (v_isShared_804_ == 0)
{
lean_ctor_set_tag(v___x_803_, 1);
lean_ctor_set(v___x_803_, 0, v_x_800_);
v___x_809_ = v___x_803_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_x_800_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
else
{
size_t v___x_811_; size_t v___x_812_; lean_object* v___x_813_; 
lean_del_object(v___x_803_);
v___x_811_ = ((size_t)0ULL);
v___x_812_ = lean_usize_of_nat(v___x_806_);
v___x_813_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___redArg(v_f_798_, v_es_801_, v___x_811_, v___x_812_, v_x_800_);
lean_dec_ref(v_es_801_);
return v___x_813_;
}
}
}
else
{
lean_object* v_ks_815_; lean_object* v_vs_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_ks_815_ = lean_ctor_get(v_x_799_, 0);
lean_inc_ref(v_ks_815_);
v_vs_816_ = lean_ctor_get(v_x_799_, 1);
lean_inc_ref(v_vs_816_);
lean_dec_ref_known(v_x_799_, 2);
v___x_817_ = lean_unsigned_to_nat(0u);
v___x_818_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___redArg(v_f_798_, v_ks_815_, v_vs_816_, v___x_817_, v_x_800_);
lean_dec_ref(v_vs_816_);
lean_dec_ref(v_ks_815_);
return v___x_818_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___redArg___boxed(lean_object* v_f_819_, lean_object* v_as_820_, lean_object* v_i_821_, lean_object* v_stop_822_, lean_object* v_b_823_){
_start:
{
size_t v_i_boxed_824_; size_t v_stop_boxed_825_; lean_object* v_res_826_; 
v_i_boxed_824_ = lean_unbox_usize(v_i_821_);
lean_dec(v_i_821_);
v_stop_boxed_825_ = lean_unbox_usize(v_stop_822_);
lean_dec(v_stop_822_);
v_res_826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___redArg(v_f_819_, v_as_820_, v_i_boxed_824_, v_stop_boxed_825_, v_b_823_);
lean_dec_ref(v_as_820_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg(lean_object* v_map_827_, lean_object* v_init_828_, lean_object* v_f_829_){
_start:
{
lean_object* v___f_830_; lean_object* v___x_831_; lean_object* v_a_832_; 
v___f_830_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg___lam__0), 4, 1);
lean_closure_set(v___f_830_, 0, v_f_829_);
lean_inc_ref(v_map_827_);
v___x_831_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22___redArg(v___f_830_, v_map_827_, v_init_828_);
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref(v___x_831_);
return v_a_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg___boxed(lean_object* v_map_833_, lean_object* v_init_834_, lean_object* v_f_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg(v_map_833_, v_init_834_, v_f_835_);
lean_dec_ref(v_map_833_);
return v_res_836_;
}
}
static lean_object* _init_l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___closed__0(void){
_start:
{
lean_object* v___x_837_; lean_object* v_result_838_; 
v___x_837_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0);
v_result_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_result_838_, 0, v___x_837_);
return v_result_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3(lean_object* v_newCounters_839_, lean_object* v_oldCounters_840_){
_start:
{
lean_object* v___f_841_; lean_object* v_result_842_; lean_object* v___x_843_; 
v___f_841_ = lean_alloc_closure((void*)(l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_841_, 0, v_oldCounters_840_);
v_result_842_ = lean_obj_once(&l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___closed__0, &l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___closed__0_once, _init_l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___closed__0);
v___x_843_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg(v_newCounters_839_, v_result_842_, v___f_841_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3___boxed(lean_object* v_newCounters_844_, lean_object* v_oldCounters_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3(v_newCounters_844_, v_oldCounters_845_);
lean_dec_ref(v_newCounters_844_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__5(lean_object* v___x_847_, lean_object* v_a_848_, lean_object* v_a_849_){
_start:
{
if (lean_obj_tag(v_a_848_) == 0)
{
lean_object* v___x_850_; 
lean_dec_ref(v___x_847_);
v___x_850_ = lean_array_to_list(v_a_849_);
return v___x_850_;
}
else
{
lean_object* v_head_851_; lean_object* v_tail_852_; lean_object* v_fst_853_; lean_object* v_snd_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
v_head_851_ = lean_ctor_get(v_a_848_, 0);
lean_inc(v_head_851_);
v_tail_852_ = lean_ctor_get(v_a_848_, 1);
lean_inc(v_tail_852_);
lean_dec_ref_known(v_a_848_, 2);
v_fst_853_ = lean_ctor_get(v_head_851_, 0);
lean_inc(v_fst_853_);
v_snd_854_ = lean_ctor_get(v_head_851_, 1);
lean_inc(v_snd_854_);
lean_dec(v_head_851_);
v___x_855_ = lean_unsigned_to_nat(0u);
v___x_856_ = lean_nat_dec_lt(v___x_855_, v_snd_854_);
lean_dec(v_snd_854_);
if (v___x_856_ == 0)
{
lean_dec(v_fst_853_);
v_a_848_ = v_tail_852_;
goto _start;
}
else
{
uint8_t v___x_858_; 
lean_inc(v_fst_853_);
lean_inc_ref(v___x_847_);
v___x_858_ = l_Lean_getReducibilityStatusCore(v___x_847_, v_fst_853_);
if (v___x_858_ == 1)
{
uint8_t v___x_859_; 
lean_inc_ref(v___x_847_);
v___x_859_ = l_Lean_Meta_isInstanceCore(v___x_847_, v_fst_853_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = l_Lean_MessageData_ofConstName(v_fst_853_, v___x_859_);
v___x_861_ = lean_array_push(v_a_849_, v___x_860_);
v_a_848_ = v_tail_852_;
v_a_849_ = v___x_861_;
goto _start;
}
else
{
lean_dec(v_fst_853_);
v_a_848_ = v_tail_852_;
goto _start;
}
}
else
{
lean_dec(v_fst_853_);
v_a_848_ = v_tail_852_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg___lam__0(lean_object* v_f_865_, lean_object* v_x1_866_, lean_object* v_x2_867_, lean_object* v_x3_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = lean_apply_3(v_f_865_, v_x1_866_, v_x2_867_, v_x3_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___redArg(lean_object* v_f_870_, lean_object* v_keys_871_, lean_object* v_vals_872_, lean_object* v_i_873_, lean_object* v_acc_874_){
_start:
{
lean_object* v___x_875_; uint8_t v___x_876_; 
v___x_875_ = lean_array_get_size(v_keys_871_);
v___x_876_ = lean_nat_dec_lt(v_i_873_, v___x_875_);
if (v___x_876_ == 0)
{
lean_dec(v_i_873_);
lean_dec(v_f_870_);
return v_acc_874_;
}
else
{
lean_object* v_k_877_; lean_object* v_v_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v_k_877_ = lean_array_fget_borrowed(v_keys_871_, v_i_873_);
v_v_878_ = lean_array_fget_borrowed(v_vals_872_, v_i_873_);
lean_inc(v_f_870_);
lean_inc(v_v_878_);
lean_inc(v_k_877_);
v___x_879_ = lean_apply_3(v_f_870_, v_acc_874_, v_k_877_, v_v_878_);
v___x_880_ = lean_unsigned_to_nat(1u);
v___x_881_ = lean_nat_add(v_i_873_, v___x_880_);
lean_dec(v_i_873_);
v_i_873_ = v___x_881_;
v_acc_874_ = v___x_879_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___redArg___boxed(lean_object* v_f_883_, lean_object* v_keys_884_, lean_object* v_vals_885_, lean_object* v_i_886_, lean_object* v_acc_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___redArg(v_f_883_, v_keys_884_, v_vals_885_, v_i_886_, v_acc_887_);
lean_dec_ref(v_vals_885_);
lean_dec_ref(v_keys_884_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___redArg(lean_object* v_f_889_, lean_object* v_as_890_, size_t v_i_891_, size_t v_stop_892_, lean_object* v_b_893_){
_start:
{
lean_object* v___y_895_; uint8_t v___x_899_; 
v___x_899_ = lean_usize_dec_eq(v_i_891_, v_stop_892_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; 
v___x_900_ = lean_array_uget_borrowed(v_as_890_, v_i_891_);
switch(lean_obj_tag(v___x_900_))
{
case 0:
{
lean_object* v_key_901_; lean_object* v_val_902_; lean_object* v___x_903_; 
v_key_901_ = lean_ctor_get(v___x_900_, 0);
v_val_902_ = lean_ctor_get(v___x_900_, 1);
lean_inc(v_f_889_);
lean_inc(v_val_902_);
lean_inc(v_key_901_);
v___x_903_ = lean_apply_3(v_f_889_, v_b_893_, v_key_901_, v_val_902_);
v___y_895_ = v___x_903_;
goto v___jp_894_;
}
case 1:
{
lean_object* v_node_904_; lean_object* v___x_905_; 
v_node_904_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_f_889_);
v___x_905_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg(v_f_889_, v_node_904_, v_b_893_);
v___y_895_ = v___x_905_;
goto v___jp_894_;
}
default: 
{
v___y_895_ = v_b_893_;
goto v___jp_894_;
}
}
}
else
{
lean_dec(v_f_889_);
return v_b_893_;
}
v___jp_894_:
{
size_t v___x_896_; size_t v___x_897_; 
v___x_896_ = ((size_t)1ULL);
v___x_897_ = lean_usize_add(v_i_891_, v___x_896_);
v_i_891_ = v___x_897_;
v_b_893_ = v___y_895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg(lean_object* v_f_906_, lean_object* v_x_907_, lean_object* v_x_908_){
_start:
{
if (lean_obj_tag(v_x_907_) == 0)
{
lean_object* v_es_909_; lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v_es_909_ = lean_ctor_get(v_x_907_, 0);
v___x_910_ = lean_unsigned_to_nat(0u);
v___x_911_ = lean_array_get_size(v_es_909_);
v___x_912_ = lean_nat_dec_lt(v___x_910_, v___x_911_);
if (v___x_912_ == 0)
{
lean_dec(v_f_906_);
return v_x_908_;
}
else
{
size_t v___x_913_; size_t v___x_914_; lean_object* v___x_915_; 
v___x_913_ = ((size_t)0ULL);
v___x_914_ = lean_usize_of_nat(v___x_911_);
v___x_915_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___redArg(v_f_906_, v_es_909_, v___x_913_, v___x_914_, v_x_908_);
return v___x_915_;
}
}
else
{
lean_object* v_ks_916_; lean_object* v_vs_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v_ks_916_ = lean_ctor_get(v_x_907_, 0);
v_vs_917_ = lean_ctor_get(v_x_907_, 1);
v___x_918_ = lean_unsigned_to_nat(0u);
v___x_919_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___redArg(v_f_906_, v_ks_916_, v_vs_917_, v___x_918_, v_x_908_);
return v___x_919_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg___boxed(lean_object* v_f_920_, lean_object* v_x_921_, lean_object* v_x_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg(v_f_920_, v_x_921_, v_x_922_);
lean_dec_ref(v_x_921_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___redArg___boxed(lean_object* v_f_924_, lean_object* v_as_925_, lean_object* v_i_926_, lean_object* v_stop_927_, lean_object* v_b_928_){
_start:
{
size_t v_i_boxed_929_; size_t v_stop_boxed_930_; lean_object* v_res_931_; 
v_i_boxed_929_ = lean_unbox_usize(v_i_926_);
lean_dec(v_i_926_);
v_stop_boxed_930_ = lean_unbox_usize(v_stop_927_);
lean_dec(v_stop_927_);
v_res_931_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___redArg(v_f_924_, v_as_925_, v_i_boxed_929_, v_stop_boxed_930_, v_b_928_);
lean_dec_ref(v_as_925_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg(lean_object* v_map_932_, lean_object* v_f_933_, lean_object* v_init_934_){
_start:
{
lean_object* v___f_935_; lean_object* v___x_936_; 
v___f_935_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg___lam__0), 4, 1);
lean_closure_set(v___f_935_, 0, v_f_933_);
v___x_936_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg(v___f_935_, v_map_932_, v_init_934_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg___boxed(lean_object* v_map_937_, lean_object* v_f_938_, lean_object* v_init_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg(v_map_937_, v_f_938_, v_init_939_);
lean_dec_ref(v_map_937_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___lam__0(lean_object* v_ps_941_, lean_object* v_k_942_, lean_object* v_v_943_){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_944_, 0, v_k_942_);
lean_ctor_set(v___x_944_, 1, v_v_943_);
v___x_945_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
lean_ctor_set(v___x_945_, 1, v_ps_941_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg(lean_object* v_m_947_){
_start:
{
lean_object* v___f_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___f_948_ = ((lean_object*)(l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___closed__0));
v___x_949_ = lean_box(0);
v___x_950_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg(v_m_947_, v___f_948_, v___x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg___boxed(lean_object* v_m_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg(v_m_951_);
lean_dec_ref(v_m_951_);
return v_res_952_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__0));
v___x_955_ = l_Lean_stringToMessageData(v___x_954_);
return v___x_955_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__2));
v___x_958_ = l_Lean_stringToMessageData(v___x_957_);
return v___x_958_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_959_ = lean_box(1);
v___x_960_ = l_Lean_MessageData_ofFormat(v___x_959_);
return v___x_960_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__5));
v___x_963_ = l_Lean_stringToMessageData(v___x_962_);
return v___x_963_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__10(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__9));
v___x_969_ = l_Lean_MessageData_ofFormat(v___x_968_);
return v___x_969_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__13(void){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_973_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__12));
v___x_974_ = l_Lean_MessageData_ofFormat(v___x_973_);
return v___x_974_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__14(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0);
v___x_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
return v___x_976_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__15(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__14, &l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__14_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__14);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0(lean_object* v_kind_979_, lean_object* v_a_980_, uint8_t v___x_981_, lean_object* v_diag_982_, lean_object* v___x_983_, uint8_t v_a_984_, uint8_t v_val_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; lean_object* v___y_1013_; uint16_t v___y_1014_; lean_object* v_fileName_1015_; lean_object* v_fileMap_1016_; lean_object* v_currNamespace_1017_; lean_object* v_openDecls_1018_; lean_object* v_initHeartbeats_1019_; lean_object* v_maxHeartbeats_1020_; lean_object* v_quotContext_1021_; lean_object* v_currMacroScope_1022_; lean_object* v_cancelTk_x3f_1023_; lean_object* v_inheritedTraceOptions_1024_; lean_object* v_currRecDepth_1025_; lean_object* v_ref_1026_; uint8_t v_suppressElabErrors_1027_; uint8_t v_checkDeprecated_1028_; uint8_t v_isRecordingDeps_1029_; lean_object* v___y_1030_; lean_object* v_toCold_1112_; lean_object* v_currRecDepth_1113_; lean_object* v_ref_1114_; uint8_t v_suppressElabErrors_1115_; uint8_t v_checkDeprecated_1116_; uint8_t v_isRecordingDeps_1117_; lean_object* v_fileName_1118_; lean_object* v_fileMap_1119_; lean_object* v_options_1120_; lean_object* v_currNamespace_1121_; lean_object* v_openDecls_1122_; lean_object* v_initHeartbeats_1123_; lean_object* v_maxHeartbeats_1124_; lean_object* v_quotContext_1125_; lean_object* v_currMacroScope_1126_; lean_object* v_cancelTk_x3f_1127_; lean_object* v_inheritedTraceOptions_1128_; lean_object* v___y_1130_; lean_object* v_nextMacroScope_1131_; lean_object* v_ngen_1132_; lean_object* v_auxDeclNGen_1133_; lean_object* v_traceState_1134_; lean_object* v_recordedDeps_1135_; lean_object* v_messages_1136_; lean_object* v_infoState_1137_; lean_object* v_snapshotTasks_1138_; uint16_t v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1145_; uint16_t v___y_1146_; uint8_t v___y_1147_; lean_object* v___y_1165_; 
v_toCold_1112_ = lean_ctor_get(v___y_988_, 0);
v_currRecDepth_1113_ = lean_ctor_get(v___y_988_, 1);
v_ref_1114_ = lean_ctor_get(v___y_988_, 2);
v_suppressElabErrors_1115_ = lean_ctor_get_uint8(v___y_988_, sizeof(void*)*3 + 2);
v_checkDeprecated_1116_ = lean_ctor_get_uint8(v___y_988_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1117_ = lean_ctor_get_uint8(v___y_988_, sizeof(void*)*3 + 4);
v_fileName_1118_ = lean_ctor_get(v_toCold_1112_, 0);
v_fileMap_1119_ = lean_ctor_get(v_toCold_1112_, 1);
v_options_1120_ = lean_ctor_get(v_toCold_1112_, 2);
v_currNamespace_1121_ = lean_ctor_get(v_toCold_1112_, 4);
v_openDecls_1122_ = lean_ctor_get(v_toCold_1112_, 5);
v_initHeartbeats_1123_ = lean_ctor_get(v_toCold_1112_, 6);
v_maxHeartbeats_1124_ = lean_ctor_get(v_toCold_1112_, 7);
v_quotContext_1125_ = lean_ctor_get(v_toCold_1112_, 8);
v_currMacroScope_1126_ = lean_ctor_get(v_toCold_1112_, 9);
v_cancelTk_x3f_1127_ = lean_ctor_get(v_toCold_1112_, 10);
v_inheritedTraceOptions_1128_ = lean_ctor_get(v_toCold_1112_, 11);
if (v_isRecordingDeps_1117_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = l_Lean_diagnostics;
lean_inc_ref(v_options_1120_);
v___x_1175_ = l_Lean_Option_set___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__6(v_options_1120_, v___x_1174_, v_a_984_);
v___y_1165_ = v___x_1175_;
goto v___jp_1164_;
}
else
{
lean_object* v___x_1176_; 
lean_inc_ref(v_options_1120_);
v___x_1176_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_1120_);
v___y_1165_ = v___x_1176_;
goto v___jp_1164_;
}
v___jp_991_:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_995_ = l_Lean_stringToMessageData(v_kind_979_);
v___x_996_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__1);
v___x_997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
lean_inc_ref(v___y_994_);
v___x_998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
lean_ctor_set(v___x_998_, 1, v___y_994_);
v___x_999_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__3);
v___x_1000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__4);
v___x_1002_ = l_Lean_MessageData_joinSep(v___y_992_, v___x_1001_);
v___x_1003_ = l_Lean_indentD(v___x_1002_);
v___x_1004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1000_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__6);
v___x_1006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = l_Lean_Exception_toMessageData(v___y_993_);
v___x_1008_ = l_Lean_indentD(v___x_1007_);
v___x_1009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1006_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
return v___x_1011_;
}
v___jp_1012_:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1031_ = l_Lean_maxRecDepth;
v___x_1032_ = l_Lean_Option_get___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__2(v___y_1013_, v___x_1031_);
v___x_1033_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1033_, 0, v_fileName_1015_);
lean_ctor_set(v___x_1033_, 1, v_fileMap_1016_);
lean_ctor_set(v___x_1033_, 2, v___y_1013_);
lean_ctor_set(v___x_1033_, 3, v___x_1032_);
lean_ctor_set(v___x_1033_, 4, v_currNamespace_1017_);
lean_ctor_set(v___x_1033_, 5, v_openDecls_1018_);
lean_ctor_set(v___x_1033_, 6, v_initHeartbeats_1019_);
lean_ctor_set(v___x_1033_, 7, v_maxHeartbeats_1020_);
lean_ctor_set(v___x_1033_, 8, v_quotContext_1021_);
lean_ctor_set(v___x_1033_, 9, v_currMacroScope_1022_);
lean_ctor_set(v___x_1033_, 10, v_cancelTk_x3f_1023_);
lean_ctor_set(v___x_1033_, 11, v_inheritedTraceOptions_1024_);
lean_inc(v_ref_1026_);
lean_inc(v_currRecDepth_1025_);
v___x_1034_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
lean_ctor_set(v___x_1034_, 1, v_currRecDepth_1025_);
lean_ctor_set(v___x_1034_, 2, v_ref_1026_);
lean_ctor_set_uint16(v___x_1034_, sizeof(void*)*3, v___y_1014_);
lean_ctor_set_uint8(v___x_1034_, sizeof(void*)*3 + 2, v_suppressElabErrors_1027_);
lean_ctor_set_uint8(v___x_1034_, sizeof(void*)*3 + 3, v_checkDeprecated_1028_);
lean_ctor_set_uint8(v___x_1034_, sizeof(void*)*3 + 4, v_isRecordingDeps_1029_);
lean_inc_ref(v_a_980_);
v___x_1035_ = l_Lean_Meta_check(v_a_980_, v___x_981_, v___y_986_, v___y_987_, v___x_1034_, v___y_1030_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v___x_1036_; lean_object* v_diag_1037_; lean_object* v_unfoldCounter_1038_; lean_object* v___x_1039_; lean_object* v_mctx_1040_; lean_object* v_cache_1041_; lean_object* v_zetaDeltaFVarIds_1042_; lean_object* v_postponed_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1093_; 
lean_dec_ref_known(v___x_1035_, 1);
v___x_1036_ = lean_st_ref_get(v___y_987_);
v_diag_1037_ = lean_ctor_get(v___x_1036_, 4);
lean_inc_ref(v_diag_1037_);
lean_dec(v___x_1036_);
v_unfoldCounter_1038_ = lean_ctor_get(v_diag_1037_, 0);
lean_inc_ref(v_unfoldCounter_1038_);
lean_dec_ref(v_diag_1037_);
v___x_1039_ = lean_st_ref_take(v___y_987_);
v_mctx_1040_ = lean_ctor_get(v___x_1039_, 0);
v_cache_1041_ = lean_ctor_get(v___x_1039_, 1);
v_zetaDeltaFVarIds_1042_ = lean_ctor_get(v___x_1039_, 2);
v_postponed_1043_ = lean_ctor_get(v___x_1039_, 3);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1093_ == 0)
{
lean_object* v_unused_1094_; 
v_unused_1094_ = lean_ctor_get(v___x_1039_, 4);
lean_dec(v_unused_1094_);
v___x_1045_ = v___x_1039_;
v_isShared_1046_ = v_isSharedCheck_1093_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_postponed_1043_);
lean_inc(v_zetaDeltaFVarIds_1042_);
lean_inc(v_cache_1041_);
lean_inc(v_mctx_1040_);
lean_dec(v___x_1039_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1093_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 4, v_diag_982_);
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_mctx_1040_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_cache_1041_);
lean_ctor_set(v_reuseFailAlloc_1092_, 2, v_zetaDeltaFVarIds_1042_);
lean_ctor_set(v_reuseFailAlloc_1092_, 3, v_postponed_1043_);
lean_ctor_set(v_reuseFailAlloc_1092_, 4, v_diag_982_);
v___x_1048_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1049_; uint8_t v___x_1050_; lean_object* v___x_1051_; 
v___x_1049_ = lean_st_ref_put(v___y_987_, v___x_1048_);
v___x_1050_ = 5;
v___x_1051_ = l_Lean_Meta_check(v_a_980_, v___x_1050_, v___y_986_, v___y_987_, v___x_1034_, v___y_1030_);
lean_dec_ref_known(v___x_1034_, 3);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1059_; 
lean_dec_ref(v_unfoldCounter_1038_);
lean_dec_ref(v_kind_979_);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1059_ == 0)
{
lean_object* v_unused_1060_; 
v_unused_1060_ = lean_ctor_get(v___x_1051_, 0);
lean_dec(v_unused_1060_);
v___x_1053_ = v___x_1051_;
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
else
{
lean_dec(v___x_1051_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
v___x_1055_ = lean_box(0);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1055_);
v___x_1057_ = v___x_1053_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1091_; 
v_a_1061_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1063_ = v___x_1051_;
v_isShared_1064_ = v_isSharedCheck_1091_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1051_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1091_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
uint8_t v___x_1065_; 
v___x_1065_ = l_Lean_Exception_isInterrupt(v_a_1061_);
if (v___x_1065_ == 0)
{
uint8_t v___x_1066_; 
lean_inc(v_a_1061_);
v___x_1066_ = l_Lean_Exception_isRuntime(v_a_1061_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; lean_object* v_diag_1068_; lean_object* v_unfoldCounter_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v_env_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; 
v___x_1067_ = lean_st_ref_get(v___y_987_);
v_diag_1068_ = lean_ctor_get(v___x_1067_, 4);
lean_inc_ref(v_diag_1068_);
lean_dec(v___x_1067_);
v_unfoldCounter_1069_ = lean_ctor_get(v_diag_1068_, 0);
lean_inc_ref(v_unfoldCounter_1069_);
lean_dec_ref(v_diag_1068_);
v___x_1070_ = l_Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3(v_unfoldCounter_1038_, v_unfoldCounter_1069_);
lean_dec_ref(v_unfoldCounter_1038_);
v___x_1071_ = lean_st_ref_get(v___y_1030_);
v_env_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc_ref(v_env_1072_);
lean_dec(v___x_1071_);
v___x_1073_ = l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg(v___x_1070_);
lean_dec_ref(v___x_1070_);
v___x_1074_ = lean_mk_empty_array_with_capacity(v___x_983_);
v___x_1075_ = l_List_filterMapTR_go___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__5(v_env_1072_, v___x_1073_, v___x_1074_);
v___x_1076_ = l_List_isEmpty___redArg(v___x_1075_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; uint8_t v___x_1078_; 
lean_del_object(v___x_1063_);
v___x_1077_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__7));
v___x_1078_ = lean_string_dec_eq(v_kind_979_, v___x_1077_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__10, &l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__10_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__10);
v___y_992_ = v___x_1075_;
v___y_993_ = v_a_1061_;
v___y_994_ = v___x_1079_;
goto v___jp_991_;
}
else
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__13, &l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__13_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__13);
v___y_992_ = v___x_1075_;
v___y_993_ = v_a_1061_;
v___y_994_ = v___x_1080_;
goto v___jp_991_;
}
}
else
{
lean_object* v___x_1081_; lean_object* v___x_1083_; 
lean_dec(v___x_1075_);
lean_dec(v_a_1061_);
lean_dec_ref(v_kind_979_);
v___x_1081_ = lean_box(0);
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1081_);
v___x_1083_ = v___x_1063_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1081_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
else
{
lean_object* v___x_1086_; 
lean_dec_ref(v_unfoldCounter_1038_);
lean_dec_ref(v_kind_979_);
if (v_isShared_1064_ == 0)
{
v___x_1086_ = v___x_1063_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_a_1061_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
else
{
lean_object* v___x_1089_; 
lean_dec_ref(v_unfoldCounter_1038_);
lean_dec_ref(v_kind_979_);
if (v_isShared_1064_ == 0)
{
v___x_1089_ = v___x_1063_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1061_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1111_; 
lean_dec_ref_known(v___x_1034_, 3);
lean_dec_ref(v_diag_982_);
lean_dec_ref(v_a_980_);
lean_dec_ref(v_kind_979_);
v_a_1095_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1097_ = v___x_1035_;
v_isShared_1098_ = v_isSharedCheck_1111_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1035_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1111_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
uint8_t v___x_1099_; 
v___x_1099_ = l_Lean_Exception_isInterrupt(v_a_1095_);
if (v___x_1099_ == 0)
{
uint8_t v___x_1100_; 
lean_inc(v_a_1095_);
v___x_1100_ = l_Lean_Exception_isRuntime(v_a_1095_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1103_; 
lean_dec(v_a_1095_);
v___x_1101_ = lean_box(0);
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1101_);
v___x_1103_ = v___x_1097_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v___x_1101_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
else
{
lean_object* v___x_1106_; 
if (v_isShared_1098_ == 0)
{
v___x_1106_ = v___x_1097_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1095_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
else
{
lean_object* v___x_1109_; 
if (v_isShared_1098_ == 0)
{
v___x_1109_ = v___x_1097_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1095_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
}
v___jp_1129_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__15, &l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__15_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__15);
v___x_1142_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1142_, 0, v___y_1140_);
lean_ctor_set(v___x_1142_, 1, v_nextMacroScope_1131_);
lean_ctor_set(v___x_1142_, 2, v_ngen_1132_);
lean_ctor_set(v___x_1142_, 3, v_auxDeclNGen_1133_);
lean_ctor_set(v___x_1142_, 4, v_traceState_1134_);
lean_ctor_set(v___x_1142_, 5, v___x_1141_);
lean_ctor_set(v___x_1142_, 6, v_recordedDeps_1135_);
lean_ctor_set(v___x_1142_, 7, v_messages_1136_);
lean_ctor_set(v___x_1142_, 8, v_infoState_1137_);
lean_ctor_set(v___x_1142_, 9, v_snapshotTasks_1138_);
v___x_1143_ = lean_st_ref_put(v___y_989_, v___x_1142_);
lean_inc_ref(v_inheritedTraceOptions_1128_);
lean_inc(v_cancelTk_x3f_1127_);
lean_inc(v_currMacroScope_1126_);
lean_inc(v_quotContext_1125_);
lean_inc(v_maxHeartbeats_1124_);
lean_inc(v_initHeartbeats_1123_);
lean_inc(v_openDecls_1122_);
lean_inc(v_currNamespace_1121_);
lean_inc_ref(v_fileMap_1119_);
lean_inc_ref(v_fileName_1118_);
v___y_1013_ = v___y_1130_;
v___y_1014_ = v___y_1139_;
v_fileName_1015_ = v_fileName_1118_;
v_fileMap_1016_ = v_fileMap_1119_;
v_currNamespace_1017_ = v_currNamespace_1121_;
v_openDecls_1018_ = v_openDecls_1122_;
v_initHeartbeats_1019_ = v_initHeartbeats_1123_;
v_maxHeartbeats_1020_ = v_maxHeartbeats_1124_;
v_quotContext_1021_ = v_quotContext_1125_;
v_currMacroScope_1022_ = v_currMacroScope_1126_;
v_cancelTk_x3f_1023_ = v_cancelTk_x3f_1127_;
v_inheritedTraceOptions_1024_ = v_inheritedTraceOptions_1128_;
v_currRecDepth_1025_ = v_currRecDepth_1113_;
v_ref_1026_ = v_ref_1114_;
v_suppressElabErrors_1027_ = v_suppressElabErrors_1115_;
v_checkDeprecated_1028_ = v_checkDeprecated_1116_;
v_isRecordingDeps_1029_ = v_isRecordingDeps_1117_;
v___y_1030_ = v___y_989_;
goto v___jp_1012_;
}
v___jp_1144_:
{
if (v___y_1147_ == 0)
{
lean_object* v___x_1148_; lean_object* v_env_1149_; lean_object* v_nextMacroScope_1150_; lean_object* v_ngen_1151_; lean_object* v_auxDeclNGen_1152_; lean_object* v_traceState_1153_; lean_object* v_recordedDeps_1154_; lean_object* v_messages_1155_; lean_object* v_infoState_1156_; lean_object* v_snapshotTasks_1157_; uint16_t v___x_1158_; uint16_t v___x_1159_; uint16_t v___x_1160_; uint8_t v___x_1161_; 
v___x_1148_ = lean_st_ref_take(v___y_989_);
v_env_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc_ref(v_env_1149_);
v_nextMacroScope_1150_ = lean_ctor_get(v___x_1148_, 1);
lean_inc(v_nextMacroScope_1150_);
v_ngen_1151_ = lean_ctor_get(v___x_1148_, 2);
lean_inc_ref(v_ngen_1151_);
v_auxDeclNGen_1152_ = lean_ctor_get(v___x_1148_, 3);
lean_inc_ref(v_auxDeclNGen_1152_);
v_traceState_1153_ = lean_ctor_get(v___x_1148_, 4);
lean_inc_ref(v_traceState_1153_);
v_recordedDeps_1154_ = lean_ctor_get(v___x_1148_, 6);
lean_inc_ref(v_recordedDeps_1154_);
v_messages_1155_ = lean_ctor_get(v___x_1148_, 7);
lean_inc_ref(v_messages_1155_);
v_infoState_1156_ = lean_ctor_get(v___x_1148_, 8);
lean_inc_ref(v_infoState_1156_);
v_snapshotTasks_1157_ = lean_ctor_get(v___x_1148_, 9);
lean_inc_ref(v_snapshotTasks_1157_);
lean_dec(v___x_1148_);
v___x_1158_ = 512;
v___x_1159_ = lean_uint16_land(v___y_1146_, v___x_1158_);
v___x_1160_ = 0;
v___x_1161_ = lean_uint16_dec_eq(v___x_1159_, v___x_1160_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_Kernel_enableDiag(v_env_1149_, v_a_984_);
v___y_1130_ = v___y_1145_;
v_nextMacroScope_1131_ = v_nextMacroScope_1150_;
v_ngen_1132_ = v_ngen_1151_;
v_auxDeclNGen_1133_ = v_auxDeclNGen_1152_;
v_traceState_1134_ = v_traceState_1153_;
v_recordedDeps_1135_ = v_recordedDeps_1154_;
v_messages_1136_ = v_messages_1155_;
v_infoState_1137_ = v_infoState_1156_;
v_snapshotTasks_1138_ = v_snapshotTasks_1157_;
v___y_1139_ = v___y_1146_;
v___y_1140_ = v___x_1162_;
goto v___jp_1129_;
}
else
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_Kernel_enableDiag(v_env_1149_, v___y_1147_);
v___y_1130_ = v___y_1145_;
v_nextMacroScope_1131_ = v_nextMacroScope_1150_;
v_ngen_1132_ = v_ngen_1151_;
v_auxDeclNGen_1133_ = v_auxDeclNGen_1152_;
v_traceState_1134_ = v_traceState_1153_;
v_recordedDeps_1135_ = v_recordedDeps_1154_;
v_messages_1136_ = v_messages_1155_;
v_infoState_1137_ = v_infoState_1156_;
v_snapshotTasks_1138_ = v_snapshotTasks_1157_;
v___y_1139_ = v___y_1146_;
v___y_1140_ = v___x_1163_;
goto v___jp_1129_;
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_1128_);
lean_inc(v_cancelTk_x3f_1127_);
lean_inc(v_currMacroScope_1126_);
lean_inc(v_quotContext_1125_);
lean_inc(v_maxHeartbeats_1124_);
lean_inc(v_initHeartbeats_1123_);
lean_inc(v_openDecls_1122_);
lean_inc(v_currNamespace_1121_);
lean_inc_ref(v_fileMap_1119_);
lean_inc_ref(v_fileName_1118_);
v___y_1013_ = v___y_1145_;
v___y_1014_ = v___y_1146_;
v_fileName_1015_ = v_fileName_1118_;
v_fileMap_1016_ = v_fileMap_1119_;
v_currNamespace_1017_ = v_currNamespace_1121_;
v_openDecls_1018_ = v_openDecls_1122_;
v_initHeartbeats_1019_ = v_initHeartbeats_1123_;
v_maxHeartbeats_1020_ = v_maxHeartbeats_1124_;
v_quotContext_1021_ = v_quotContext_1125_;
v_currMacroScope_1022_ = v_currMacroScope_1126_;
v_cancelTk_x3f_1023_ = v_cancelTk_x3f_1127_;
v_inheritedTraceOptions_1024_ = v_inheritedTraceOptions_1128_;
v_currRecDepth_1025_ = v_currRecDepth_1113_;
v_ref_1026_ = v_ref_1114_;
v_suppressElabErrors_1027_ = v_suppressElabErrors_1115_;
v_checkDeprecated_1028_ = v_checkDeprecated_1116_;
v_isRecordingDeps_1029_ = v_isRecordingDeps_1117_;
v___y_1030_ = v___y_989_;
goto v___jp_1012_;
}
}
v___jp_1164_:
{
uint16_t v___x_1166_; lean_object* v___x_1167_; lean_object* v_env_1168_; uint8_t v___x_1169_; uint16_t v___x_1170_; uint16_t v___x_1171_; uint16_t v___x_1172_; uint8_t v___x_1173_; 
v___x_1166_ = l_Lean_OptionFlags_ofOptions(v___y_1165_);
v___x_1167_ = lean_st_ref_get(v___y_989_);
v_env_1168_ = lean_ctor_get(v___x_1167_, 0);
lean_inc_ref(v_env_1168_);
lean_dec(v___x_1167_);
v___x_1169_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1168_);
lean_dec_ref(v_env_1168_);
v___x_1170_ = 512;
v___x_1171_ = lean_uint16_land(v___x_1166_, v___x_1170_);
v___x_1172_ = 0;
v___x_1173_ = lean_uint16_dec_eq(v___x_1171_, v___x_1172_);
if (v___x_1173_ == 0)
{
v___y_1145_ = v___y_1165_;
v___y_1146_ = v___x_1166_;
v___y_1147_ = v___x_1169_;
goto v___jp_1144_;
}
else
{
if (v___x_1169_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_1128_);
lean_inc(v_cancelTk_x3f_1127_);
lean_inc(v_currMacroScope_1126_);
lean_inc(v_quotContext_1125_);
lean_inc(v_maxHeartbeats_1124_);
lean_inc(v_initHeartbeats_1123_);
lean_inc(v_openDecls_1122_);
lean_inc(v_currNamespace_1121_);
lean_inc_ref(v_fileMap_1119_);
lean_inc_ref(v_fileName_1118_);
v___y_1013_ = v___y_1165_;
v___y_1014_ = v___x_1166_;
v_fileName_1015_ = v_fileName_1118_;
v_fileMap_1016_ = v_fileMap_1119_;
v_currNamespace_1017_ = v_currNamespace_1121_;
v_openDecls_1018_ = v_openDecls_1122_;
v_initHeartbeats_1019_ = v_initHeartbeats_1123_;
v_maxHeartbeats_1020_ = v_maxHeartbeats_1124_;
v_quotContext_1021_ = v_quotContext_1125_;
v_currMacroScope_1022_ = v_currMacroScope_1126_;
v_cancelTk_x3f_1023_ = v_cancelTk_x3f_1127_;
v_inheritedTraceOptions_1024_ = v_inheritedTraceOptions_1128_;
v_currRecDepth_1025_ = v_currRecDepth_1113_;
v_ref_1026_ = v_ref_1114_;
v_suppressElabErrors_1027_ = v_suppressElabErrors_1115_;
v_checkDeprecated_1028_ = v_checkDeprecated_1116_;
v_isRecordingDeps_1029_ = v_isRecordingDeps_1117_;
v___y_1030_ = v___y_989_;
goto v___jp_1012_;
}
else
{
v___y_1145_ = v___y_1165_;
v___y_1146_ = v___x_1166_;
v___y_1147_ = v_val_985_;
goto v___jp_1144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___boxed(lean_object* v_kind_1177_, lean_object* v_a_1178_, lean_object* v___x_1179_, lean_object* v_diag_1180_, lean_object* v___x_1181_, lean_object* v_a_1182_, lean_object* v_val_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
uint8_t v___x_28632__boxed_1189_; uint8_t v_a_28634__boxed_1190_; uint8_t v_val_28635__boxed_1191_; lean_object* v_res_1192_; 
v___x_28632__boxed_1189_ = lean_unbox(v___x_1179_);
v_a_28634__boxed_1190_ = lean_unbox(v_a_1182_);
v_val_28635__boxed_1191_ = lean_unbox(v_val_1183_);
v_res_1192_ = l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0(v_kind_1177_, v_a_1178_, v___x_28632__boxed_1189_, v_diag_1180_, v___x_1181_, v_a_28634__boxed_1190_, v_val_28635__boxed_1191_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___x_1181_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg(lean_object* v_kind_1198_, uint8_t v_a_1199_, uint8_t v_val_1200_, lean_object* v_as_x27_1201_, lean_object* v_b_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
if (lean_obj_tag(v_as_x27_1201_) == 0)
{
lean_object* v___x_1208_; 
lean_dec_ref(v_kind_1198_);
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v_b_1202_);
return v___x_1208_;
}
else
{
lean_object* v_head_1209_; lean_object* v_tail_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v_mctx_1214_; lean_object* v___x_1215_; 
lean_dec_ref(v_b_1202_);
v_head_1209_ = lean_ctor_get(v_as_x27_1201_, 0);
v_tail_1210_ = lean_ctor_get(v_as_x27_1201_, 1);
v___x_1211_ = lean_box(0);
v___x_1212_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__0));
v___x_1213_ = lean_st_ref_get(v___y_1204_);
v_mctx_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc_ref(v_mctx_1214_);
lean_dec(v___x_1213_);
v___x_1215_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_1214_, v_head_1209_);
lean_dec_ref(v_mctx_1214_);
if (lean_obj_tag(v___x_1215_) == 1)
{
lean_object* v_val_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1269_; 
v_val_1216_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1218_ = v___x_1215_;
v_isShared_1219_ = v_isSharedCheck_1269_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_val_1216_);
lean_dec(v___x_1215_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1269_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v_lctx_1220_; lean_object* v_type_1221_; lean_object* v___x_1222_; lean_object* v_a_1223_; lean_object* v___x_1224_; lean_object* v_diag_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___f_1232_; lean_object* v___x_1233_; 
v_lctx_1220_ = lean_ctor_get(v_val_1216_, 1);
lean_inc_ref(v_lctx_1220_);
v_type_1221_ = lean_ctor_get(v_val_1216_, 2);
lean_inc_ref(v_type_1221_);
lean_dec(v_val_1216_);
v___x_1222_ = l_Lean_instantiateMVars___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__1___redArg(v_type_1221_, v___y_1204_);
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_a_1223_);
lean_dec_ref(v___x_1222_);
v___x_1224_ = lean_st_ref_get(v___y_1204_);
v_diag_1225_ = lean_ctor_get(v___x_1224_, 4);
lean_inc_ref_n(v_diag_1225_, 2);
lean_dec(v___x_1224_);
v___x_1226_ = lean_unsigned_to_nat(0u);
v___x_1227_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__1));
v___x_1228_ = 1;
v___x_1229_ = lean_box(v___x_1228_);
v___x_1230_ = lean_box(v_a_1199_);
v___x_1231_ = lean_box(v_val_1200_);
lean_inc_ref(v_kind_1198_);
v___f_1232_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___boxed), 12, 7);
lean_closure_set(v___f_1232_, 0, v_kind_1198_);
lean_closure_set(v___f_1232_, 1, v_a_1223_);
lean_closure_set(v___f_1232_, 2, v___x_1229_);
lean_closure_set(v___f_1232_, 3, v_diag_1225_);
lean_closure_set(v___f_1232_, 4, v___x_1226_);
lean_closure_set(v___f_1232_, 5, v___x_1230_);
lean_closure_set(v___f_1232_, 6, v___x_1231_);
v___x_1233_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__7___redArg(v_lctx_1220_, v___x_1227_, v___f_1232_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1260_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1236_ = v___x_1233_;
v_isShared_1237_ = v_isSharedCheck_1260_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1233_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1260_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v_mctx_1239_; lean_object* v_cache_1240_; lean_object* v_zetaDeltaFVarIds_1241_; lean_object* v_postponed_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1258_; 
v___x_1238_ = lean_st_ref_take(v___y_1204_);
v_mctx_1239_ = lean_ctor_get(v___x_1238_, 0);
v_cache_1240_ = lean_ctor_get(v___x_1238_, 1);
v_zetaDeltaFVarIds_1241_ = lean_ctor_get(v___x_1238_, 2);
v_postponed_1242_ = lean_ctor_get(v___x_1238_, 3);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1258_ == 0)
{
lean_object* v_unused_1259_; 
v_unused_1259_ = lean_ctor_get(v___x_1238_, 4);
lean_dec(v_unused_1259_);
v___x_1244_ = v___x_1238_;
v_isShared_1245_ = v_isSharedCheck_1258_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_postponed_1242_);
lean_inc(v_zetaDeltaFVarIds_1241_);
lean_inc(v_cache_1240_);
lean_inc(v_mctx_1239_);
lean_dec(v___x_1238_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1258_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 4, v_diag_1225_);
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_mctx_1239_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_cache_1240_);
lean_ctor_set(v_reuseFailAlloc_1257_, 2, v_zetaDeltaFVarIds_1241_);
lean_ctor_set(v_reuseFailAlloc_1257_, 3, v_postponed_1242_);
lean_ctor_set(v_reuseFailAlloc_1257_, 4, v_diag_1225_);
v___x_1247_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_st_ref_put(v___y_1204_, v___x_1247_);
if (lean_obj_tag(v_a_1234_) == 1)
{
lean_object* v___x_1250_; 
lean_dec_ref(v_kind_1198_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 0, v_a_1234_);
v___x_1250_ = v___x_1218_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1234_);
v___x_1250_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; lean_object* v___x_1253_; 
v___x_1251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___x_1211_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 0, v___x_1251_);
v___x_1253_ = v___x_1236_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1251_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
else
{
lean_del_object(v___x_1236_);
lean_dec(v_a_1234_);
lean_del_object(v___x_1218_);
v_as_x27_1201_ = v_tail_1210_;
v_b_1202_ = v___x_1212_;
goto _start;
}
}
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec_ref(v_diag_1225_);
lean_del_object(v___x_1218_);
lean_dec_ref(v_kind_1198_);
v_a_1261_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1233_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1233_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
else
{
lean_dec(v___x_1215_);
v_as_x27_1201_ = v_tail_1210_;
v_b_1202_ = v___x_1212_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___boxed(lean_object* v_kind_1271_, lean_object* v_a_1272_, lean_object* v_val_1273_, lean_object* v_as_x27_1274_, lean_object* v_b_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
uint8_t v_a_28953__boxed_1281_; uint8_t v_val_28954__boxed_1282_; lean_object* v_res_1283_; 
v_a_28953__boxed_1281_ = lean_unbox(v_a_1272_);
v_val_28954__boxed_1282_ = lean_unbox(v_val_1273_);
v_res_1283_ = l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg(v_kind_1271_, v_a_28953__boxed_1281_, v_val_28954__boxed_1282_, v_as_x27_1274_, v_b_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v_as_x27_1274_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__1(uint8_t v_a_1284_, uint8_t v_val_1285_, lean_object* v_kind_1286_, lean_object* v_goals_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1293_ = lean_box(0);
v___x_1294_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___closed__0));
v___x_1295_ = l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg(v_kind_1286_, v_a_1284_, v_val_1285_, v_goals_1287_, v___x_1294_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1308_; 
v_a_1296_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1298_ = v___x_1295_;
v_isShared_1299_ = v_isSharedCheck_1308_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1295_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1308_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v_fst_1300_; 
v_fst_1300_ = lean_ctor_get(v_a_1296_, 0);
lean_inc(v_fst_1300_);
lean_dec(v_a_1296_);
if (lean_obj_tag(v_fst_1300_) == 0)
{
lean_object* v___x_1302_; 
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 0, v___x_1293_);
v___x_1302_ = v___x_1298_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v___x_1293_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
else
{
lean_object* v_val_1304_; lean_object* v___x_1306_; 
v_val_1304_ = lean_ctor_get(v_fst_1300_, 0);
lean_inc(v_val_1304_);
lean_dec_ref_known(v_fst_1300_, 1);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 0, v_val_1304_);
v___x_1306_ = v___x_1298_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_val_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
v_a_1309_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1295_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1295_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__1___boxed(lean_object* v_a_1317_, lean_object* v_val_1318_, lean_object* v_kind_1319_, lean_object* v_goals_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
uint8_t v_a_29094__boxed_1326_; uint8_t v_val_29095__boxed_1327_; lean_object* v_res_1328_; 
v_a_29094__boxed_1326_ = lean_unbox(v_a_1317_);
v_val_29095__boxed_1327_ = lean_unbox(v_val_1318_);
v_res_1328_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__1(v_a_29094__boxed_1326_, v_val_29095__boxed_1327_, v_kind_1319_, v_goals_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v_goals_1320_);
return v_res_1328_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__0(void){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__0);
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
return v___x_1330_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1331_ = lean_box(1);
v___x_1332_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg___closed__4);
v___x_1333_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__0);
v___x_1334_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
lean_ctor_set(v___x_1334_, 1, v___x_1332_);
lean_ctor_set(v___x_1334_, 2, v___x_1331_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2(lean_object* v_val_1336_, uint8_t v_a_1337_, lean_object* v___x_1338_, lean_object* v_ci_1339_, lean_object* v_info_1340_, lean_object* v_x_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_a_1346_; lean_object* v___x_1353_; uint8_t v___x_1354_; 
v___x_1353_ = lean_st_ref_get(v_val_1336_);
v___x_1354_ = lean_unbox(v___x_1353_);
if (v___x_1354_ == 0)
{
if (lean_obj_tag(v_info_1340_) == 0)
{
lean_object* v_toCommandContextInfo_1355_; lean_object* v_i_1356_; lean_object* v_parentDecl_x3f_1357_; lean_object* v_autoImplicits_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1416_; 
v_toCommandContextInfo_1355_ = lean_ctor_get(v_ci_1339_, 0);
lean_inc_ref(v_toCommandContextInfo_1355_);
v_i_1356_ = lean_ctor_get(v_info_1340_, 0);
lean_inc_ref(v_i_1356_);
lean_dec_ref_known(v_info_1340_, 1);
v_parentDecl_x3f_1357_ = lean_ctor_get(v_ci_1339_, 1);
v_autoImplicits_1358_ = lean_ctor_get(v_ci_1339_, 2);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_ci_1339_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; 
v_unused_1417_ = lean_ctor_get(v_ci_1339_, 0);
lean_dec(v_unused_1417_);
v___x_1360_ = v_ci_1339_;
v_isShared_1361_ = v_isSharedCheck_1416_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_autoImplicits_1358_);
lean_inc(v_parentDecl_x3f_1357_);
lean_dec(v_ci_1339_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1416_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v_env_1362_; lean_object* v_cmdEnv_x3f_1363_; lean_object* v_fileMap_1364_; lean_object* v_options_1365_; lean_object* v_currNamespace_1366_; lean_object* v_openDecls_1367_; lean_object* v_ngen_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1414_; 
v_env_1362_ = lean_ctor_get(v_toCommandContextInfo_1355_, 0);
v_cmdEnv_x3f_1363_ = lean_ctor_get(v_toCommandContextInfo_1355_, 1);
v_fileMap_1364_ = lean_ctor_get(v_toCommandContextInfo_1355_, 2);
v_options_1365_ = lean_ctor_get(v_toCommandContextInfo_1355_, 4);
v_currNamespace_1366_ = lean_ctor_get(v_toCommandContextInfo_1355_, 5);
v_openDecls_1367_ = lean_ctor_get(v_toCommandContextInfo_1355_, 6);
v_ngen_1368_ = lean_ctor_get(v_toCommandContextInfo_1355_, 7);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_toCommandContextInfo_1355_);
if (v_isSharedCheck_1414_ == 0)
{
lean_object* v_unused_1415_; 
v_unused_1415_ = lean_ctor_get(v_toCommandContextInfo_1355_, 3);
lean_dec(v_unused_1415_);
v___x_1370_ = v_toCommandContextInfo_1355_;
v_isShared_1371_ = v_isSharedCheck_1414_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_ngen_1368_);
lean_inc(v_openDecls_1367_);
lean_inc(v_currNamespace_1366_);
lean_inc(v_options_1365_);
lean_inc(v_fileMap_1364_);
lean_inc(v_cmdEnv_x3f_1363_);
lean_inc(v_env_1362_);
lean_dec(v_toCommandContextInfo_1355_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1414_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v_toElabInfo_1372_; lean_object* v_mctxBefore_1373_; lean_object* v_goalsBefore_1374_; lean_object* v_mctxAfter_1375_; lean_object* v_goalsAfter_1376_; lean_object* v_val_1378_; lean_object* v___x_1384_; 
v_toElabInfo_1372_ = lean_ctor_get(v_i_1356_, 0);
lean_inc_ref(v_toElabInfo_1372_);
v_mctxBefore_1373_ = lean_ctor_get(v_i_1356_, 1);
lean_inc_ref(v_mctxBefore_1373_);
v_goalsBefore_1374_ = lean_ctor_get(v_i_1356_, 2);
lean_inc(v_goalsBefore_1374_);
v_mctxAfter_1375_ = lean_ctor_get(v_i_1356_, 3);
lean_inc_ref(v_mctxAfter_1375_);
v_goalsAfter_1376_ = lean_ctor_get(v_i_1356_, 4);
lean_inc(v_goalsAfter_1376_);
lean_dec_ref(v_i_1356_);
lean_inc_ref(v_ngen_1368_);
lean_inc(v_openDecls_1367_);
lean_inc(v_currNamespace_1366_);
lean_inc_ref(v_options_1365_);
lean_inc_ref(v_fileMap_1364_);
lean_inc(v_cmdEnv_x3f_1363_);
lean_inc_ref(v_env_1362_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 3, v_mctxBefore_1373_);
v___x_1384_ = v___x_1370_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_env_1362_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v_cmdEnv_x3f_1363_);
lean_ctor_set(v_reuseFailAlloc_1413_, 2, v_fileMap_1364_);
lean_ctor_set(v_reuseFailAlloc_1413_, 3, v_mctxBefore_1373_);
lean_ctor_set(v_reuseFailAlloc_1413_, 4, v_options_1365_);
lean_ctor_set(v_reuseFailAlloc_1413_, 5, v_currNamespace_1366_);
lean_ctor_set(v_reuseFailAlloc_1413_, 6, v_openDecls_1367_);
lean_ctor_set(v_reuseFailAlloc_1413_, 7, v_ngen_1368_);
v___x_1384_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1383_;
}
v___jp_1377_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v_stx_1381_; lean_object* v___x_1382_; 
v___x_1379_ = lean_box(v_a_1337_);
v___x_1380_ = lean_st_ref_swap(v_val_1336_, v___x_1379_);
lean_dec(v___x_1380_);
v_stx_1381_ = lean_ctor_get(v_toElabInfo_1372_, 1);
lean_inc(v_stx_1381_);
lean_dec_ref(v_toElabInfo_1372_);
v___x_1382_ = l_Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9(v___x_1338_, v_stx_1381_, v_val_1378_, v___y_1342_, v___y_1343_);
return v___x_1382_;
}
v_reusejp_1383_:
{
lean_object* v___x_1386_; 
lean_inc_ref(v_autoImplicits_1358_);
lean_inc(v_parentDecl_x3f_1357_);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 0, v___x_1384_);
v___x_1386_ = v___x_1360_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_parentDecl_x3f_1357_);
lean_ctor_set(v_reuseFailAlloc_1412_, 2, v_autoImplicits_1358_);
v___x_1386_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1387_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1387_, 0, v_env_1362_);
lean_ctor_set(v___x_1387_, 1, v_cmdEnv_x3f_1363_);
lean_ctor_set(v___x_1387_, 2, v_fileMap_1364_);
lean_ctor_set(v___x_1387_, 3, v_mctxAfter_1375_);
lean_ctor_set(v___x_1387_, 4, v_options_1365_);
lean_ctor_set(v___x_1387_, 5, v_currNamespace_1366_);
lean_ctor_set(v___x_1387_, 6, v_openDecls_1367_);
lean_ctor_set(v___x_1387_, 7, v_ngen_1368_);
v___x_1388_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
lean_ctor_set(v___x_1388_, 1, v_parentDecl_x3f_1357_);
lean_ctor_set(v___x_1388_, 2, v_autoImplicits_1358_);
v___x_1389_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__1);
v___x_1390_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg___lam__0___closed__7));
v___x_1391_ = lean_box(v_a_1337_);
lean_inc(v___x_1353_);
v___x_1392_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__1___boxed), 9, 4);
lean_closure_set(v___x_1392_, 0, v___x_1391_);
lean_closure_set(v___x_1392_, 1, v___x_1353_);
lean_closure_set(v___x_1392_, 2, v___x_1390_);
lean_closure_set(v___x_1392_, 3, v_goalsBefore_1374_);
v___x_1393_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v___x_1386_, v___x_1389_, v___x_1392_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___x_1393_, 1);
if (lean_obj_tag(v_a_1394_) == 0)
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1395_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___closed__2));
v___x_1396_ = lean_box(v_a_1337_);
v___x_1397_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__1___boxed), 9, 4);
lean_closure_set(v___x_1397_, 0, v___x_1396_);
lean_closure_set(v___x_1397_, 1, v___x_1353_);
lean_closure_set(v___x_1397_, 2, v___x_1395_);
lean_closure_set(v___x_1397_, 3, v_goalsAfter_1376_);
v___x_1398_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v___x_1388_, v___x_1389_, v___x_1397_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1408_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1401_ = v___x_1398_;
v_isShared_1402_ = v_isSharedCheck_1408_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1398_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1408_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
if (lean_obj_tag(v_a_1399_) == 1)
{
lean_object* v_val_1403_; 
lean_del_object(v___x_1401_);
v_val_1403_ = lean_ctor_get(v_a_1399_, 0);
lean_inc(v_val_1403_);
lean_dec_ref_known(v_a_1399_, 1);
v_val_1378_ = v_val_1403_;
goto v___jp_1377_;
}
else
{
lean_object* v___x_1404_; lean_object* v___x_1406_; 
lean_dec(v_a_1399_);
lean_dec_ref(v_toElabInfo_1372_);
lean_dec_ref(v___x_1338_);
v___x_1404_ = lean_box(0);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 0, v___x_1404_);
v___x_1406_ = v___x_1401_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1404_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
else
{
lean_object* v_a_1409_; 
lean_dec_ref(v_toElabInfo_1372_);
lean_dec_ref(v___x_1338_);
v_a_1409_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1398_, 1);
v_a_1346_ = v_a_1409_;
goto v___jp_1345_;
}
}
else
{
lean_object* v_val_1410_; 
lean_dec_ref_known(v___x_1388_, 3);
lean_dec(v_goalsAfter_1376_);
lean_dec(v___x_1353_);
v_val_1410_ = lean_ctor_get(v_a_1394_, 0);
lean_inc(v_val_1410_);
lean_dec_ref_known(v_a_1394_, 1);
v_val_1378_ = v_val_1410_;
goto v___jp_1377_;
}
}
else
{
lean_object* v_a_1411_; 
lean_dec_ref_known(v___x_1388_, 3);
lean_dec(v_goalsAfter_1376_);
lean_dec_ref(v_toElabInfo_1372_);
lean_dec(v___x_1353_);
lean_dec_ref(v___x_1338_);
v_a_1411_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1393_, 1);
v_a_1346_ = v_a_1411_;
goto v___jp_1345_;
}
}
}
}
}
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_dec(v___x_1353_);
lean_dec_ref(v_info_1340_);
lean_dec_ref(v_ci_1339_);
lean_dec_ref(v___x_1338_);
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
}
else
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
lean_dec(v___x_1353_);
lean_dec_ref(v_info_1340_);
lean_dec_ref(v_ci_1339_);
lean_dec_ref(v___x_1338_);
v___x_1420_ = lean_box(0);
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
return v___x_1421_;
}
v___jp_1345_:
{
lean_object* v_ref_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v_ref_1347_ = lean_ctor_get(v___y_1342_, 7);
v___x_1348_ = lean_io_error_to_string(v_a_1346_);
v___x_1349_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
v___x_1350_ = l_Lean_MessageData_ofFormat(v___x_1349_);
lean_inc(v_ref_1347_);
v___x_1351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1351_, 0, v_ref_1347_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
return v___x_1352_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___boxed(lean_object* v_val_1422_, lean_object* v_a_1423_, lean_object* v___x_1424_, lean_object* v_ci_1425_, lean_object* v_info_1426_, lean_object* v_x_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
uint8_t v_a_29189__boxed_1431_; lean_object* v_res_1432_; 
v_a_29189__boxed_1431_ = lean_unbox(v_a_1423_);
v_res_1432_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2(v_val_1422_, v_a_29189__boxed_1431_, v___x_1424_, v_ci_1425_, v_info_1426_, v_x_1427_, v___y_1428_, v___y_1429_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
lean_dec_ref(v_x_1427_);
lean_dec(v_val_1422_);
return v_res_1432_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__0(void){
_start:
{
lean_object* v___x_1433_; 
v___x_1433_ = l_instMonadEIO___redArg();
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg(lean_object* v_msg_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v_toApplicative_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1473_; 
v___x_1440_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__0, &l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__0);
v___x_1441_ = l_StateRefT_x27_instMonad___redArg(v___x_1440_);
v_toApplicative_1442_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1473_ == 0)
{
lean_object* v_unused_1474_; 
v_unused_1474_ = lean_ctor_get(v___x_1441_, 1);
lean_dec(v_unused_1474_);
v___x_1444_ = v___x_1441_;
v_isShared_1445_ = v_isSharedCheck_1473_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_toApplicative_1442_);
lean_dec(v___x_1441_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1473_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v_toFunctor_1446_; lean_object* v_toSeq_1447_; lean_object* v_toSeqLeft_1448_; lean_object* v_toSeqRight_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1471_; 
v_toFunctor_1446_ = lean_ctor_get(v_toApplicative_1442_, 0);
v_toSeq_1447_ = lean_ctor_get(v_toApplicative_1442_, 2);
v_toSeqLeft_1448_ = lean_ctor_get(v_toApplicative_1442_, 3);
v_toSeqRight_1449_ = lean_ctor_get(v_toApplicative_1442_, 4);
v_isSharedCheck_1471_ = !lean_is_exclusive(v_toApplicative_1442_);
if (v_isSharedCheck_1471_ == 0)
{
lean_object* v_unused_1472_; 
v_unused_1472_ = lean_ctor_get(v_toApplicative_1442_, 1);
lean_dec(v_unused_1472_);
v___x_1451_ = v_toApplicative_1442_;
v_isShared_1452_ = v_isSharedCheck_1471_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_toSeqRight_1449_);
lean_inc(v_toSeqLeft_1448_);
lean_inc(v_toSeq_1447_);
lean_inc(v_toFunctor_1446_);
lean_dec(v_toApplicative_1442_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1471_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___f_1453_; lean_object* v___f_1454_; lean_object* v___f_1455_; lean_object* v___f_1456_; lean_object* v___x_1457_; lean_object* v___f_1458_; lean_object* v___f_1459_; lean_object* v___f_1460_; lean_object* v___x_1462_; 
v___f_1453_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__1));
v___f_1454_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___closed__2));
lean_inc_ref(v_toFunctor_1446_);
v___f_1455_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1455_, 0, v_toFunctor_1446_);
v___f_1456_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1456_, 0, v_toFunctor_1446_);
v___x_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___f_1455_);
lean_ctor_set(v___x_1457_, 1, v___f_1456_);
v___f_1458_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1458_, 0, v_toSeqRight_1449_);
v___f_1459_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1459_, 0, v_toSeqLeft_1448_);
v___f_1460_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1460_, 0, v_toSeq_1447_);
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 4, v___f_1458_);
lean_ctor_set(v___x_1451_, 3, v___f_1459_);
lean_ctor_set(v___x_1451_, 2, v___f_1460_);
lean_ctor_set(v___x_1451_, 1, v___f_1453_);
lean_ctor_set(v___x_1451_, 0, v___x_1457_);
v___x_1462_ = v___x_1451_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1457_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v___f_1453_);
lean_ctor_set(v_reuseFailAlloc_1470_, 2, v___f_1460_);
lean_ctor_set(v_reuseFailAlloc_1470_, 3, v___f_1459_);
lean_ctor_set(v_reuseFailAlloc_1470_, 4, v___f_1458_);
v___x_1462_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
lean_object* v___x_1464_; 
if (v_isShared_1445_ == 0)
{
lean_ctor_set(v___x_1444_, 1, v___f_1454_);
lean_ctor_set(v___x_1444_, 0, v___x_1462_);
v___x_1464_ = v___x_1444_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v___f_1454_);
v___x_1464_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_24468__overap_1467_; lean_object* v___x_1468_; 
v___x_1465_ = lean_box(0);
v___x_1466_ = l_instInhabitedOfMonad___redArg(v___x_1464_, v___x_1465_);
v___x_24468__overap_1467_ = lean_panic_fn_borrowed(v___x_1466_, v_msg_1436_);
lean_dec(v___x_1466_);
lean_inc(v___y_1438_);
lean_inc_ref(v___y_1437_);
v___x_1468_ = lean_apply_3(v___x_24468__overap_1467_, v___y_1437_, v___y_1438_, lean_box(0));
return v___x_1468_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg___boxed(lean_object* v_msg_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg(v_msg_1475_, v___y_1476_, v___y_1477_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
return v_res_1479_;
}
}
static lean_object* _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__3(void){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1483_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__2));
v___x_1484_ = lean_unsigned_to_nat(21u);
v___x_1485_ = lean_unsigned_to_nat(65u);
v___x_1486_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__1));
v___x_1487_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__0));
v___x_1488_ = l_mkPanicMessageWithDecl(v___x_1487_, v___x_1486_, v___x_1485_, v___x_1484_, v___x_1483_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg(lean_object* v_preNode_1489_, lean_object* v_postNode_1490_, lean_object* v_x_1491_, lean_object* v_x_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_){
_start:
{
switch(lean_obj_tag(v_x_1492_))
{
case 0:
{
lean_object* v_i_1496_; lean_object* v_t_1497_; lean_object* v___x_1498_; 
v_i_1496_ = lean_ctor_get(v_x_1492_, 0);
lean_inc_ref(v_i_1496_);
v_t_1497_ = lean_ctor_get(v_x_1492_, 1);
lean_inc_ref(v_t_1497_);
lean_dec_ref_known(v_x_1492_, 2);
v___x_1498_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_1496_, v_x_1491_);
v_x_1491_ = v___x_1498_;
v_x_1492_ = v_t_1497_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_1491_) == 0)
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_dec_ref_known(v_x_1492_, 2);
lean_dec_ref(v_postNode_1490_);
lean_dec_ref(v_preNode_1489_);
v___x_1500_ = lean_obj_once(&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__3, &l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__3_once, _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___closed__3);
v___x_1501_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg(v___x_1500_, v___y_1493_, v___y_1494_);
return v___x_1501_;
}
else
{
lean_object* v_i_1502_; lean_object* v_children_1503_; lean_object* v_val_1504_; lean_object* v___x_1505_; 
v_i_1502_ = lean_ctor_get(v_x_1492_, 0);
lean_inc_ref_n(v_i_1502_, 2);
v_children_1503_ = lean_ctor_get(v_x_1492_, 1);
lean_inc_ref_n(v_children_1503_, 2);
lean_dec_ref_known(v_x_1492_, 2);
v_val_1504_ = lean_ctor_get(v_x_1491_, 0);
lean_inc_n(v_val_1504_, 2);
lean_inc_ref(v_preNode_1489_);
lean_inc(v___y_1494_);
lean_inc_ref(v___y_1493_);
v___x_1505_ = lean_apply_6(v_preNode_1489_, v_val_1504_, v_i_1502_, v_children_1503_, v___y_1493_, v___y_1494_, lean_box(0));
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; uint8_t v___x_1507_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
v___x_1507_ = lean_unbox(v_a_1506_);
lean_dec(v_a_1506_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1532_; 
lean_dec_ref(v_preNode_1489_);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_x_1491_);
if (v_isSharedCheck_1532_ == 0)
{
lean_object* v_unused_1533_; 
v_unused_1533_ = lean_ctor_get(v_x_1491_, 0);
lean_dec(v_unused_1533_);
v___x_1509_ = v_x_1491_;
v_isShared_1510_ = v_isSharedCheck_1532_;
goto v_resetjp_1508_;
}
else
{
lean_dec(v_x_1491_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1532_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1511_ = lean_box(0);
lean_inc(v___y_1494_);
lean_inc_ref(v___y_1493_);
v___x_1512_ = lean_apply_7(v_postNode_1490_, v_val_1504_, v_i_1502_, v_children_1503_, v___x_1511_, v___y_1493_, v___y_1494_, lean_box(0));
if (lean_obj_tag(v___x_1512_) == 0)
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1523_; 
v_a_1513_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1515_ = v___x_1512_;
v_isShared_1516_ = v_isSharedCheck_1523_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1512_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1523_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v_a_1513_);
v___x_1518_ = v___x_1509_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
lean_object* v___x_1520_; 
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 0, v___x_1518_);
v___x_1520_ = v___x_1515_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
else
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
lean_del_object(v___x_1509_);
v_a_1524_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1512_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1512_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
}
else
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1534_ = l_Lean_Elab_Info_updateContext_x3f(v_x_1491_, v_i_1502_);
v___x_1535_ = l_Lean_PersistentArray_toList___redArg(v_children_1503_);
v___x_1536_ = lean_box(0);
lean_inc_ref(v_postNode_1490_);
v___x_1537_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___redArg(v_preNode_1489_, v_postNode_1490_, v___x_1534_, v___x_1535_, v___x_1536_, v___y_1493_, v___y_1494_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1539_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1537_, 1);
lean_inc(v___y_1494_);
lean_inc_ref(v___y_1493_);
v___x_1539_ = lean_apply_7(v_postNode_1490_, v_val_1504_, v_i_1502_, v_children_1503_, v_a_1538_, v___y_1493_, v___y_1494_, lean_box(0));
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1548_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1542_ = v___x_1539_;
v_isShared_1543_ = v_isSharedCheck_1548_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1539_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1548_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1544_; lean_object* v___x_1546_; 
v___x_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1544_, 0, v_a_1540_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1544_);
v___x_1546_ = v___x_1542_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
v_a_1549_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1539_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1539_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
lean_dec(v_val_1504_);
lean_dec_ref(v_children_1503_);
lean_dec_ref(v_i_1502_);
lean_dec_ref(v_postNode_1490_);
v_a_1557_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1537_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1537_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec(v_val_1504_);
lean_dec_ref(v_children_1503_);
lean_dec_ref_known(v_x_1491_, 1);
lean_dec_ref(v_i_1502_);
lean_dec_ref(v_postNode_1490_);
lean_dec_ref(v_preNode_1489_);
v_a_1565_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1505_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1505_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
}
default: 
{
lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1580_; 
lean_dec(v_x_1491_);
lean_dec_ref(v_postNode_1490_);
lean_dec_ref(v_preNode_1489_);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_x_1492_);
if (v_isSharedCheck_1580_ == 0)
{
lean_object* v_unused_1581_; 
v_unused_1581_ = lean_ctor_get(v_x_1492_, 0);
lean_dec(v_unused_1581_);
v___x_1574_ = v_x_1492_;
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
else
{
lean_dec(v_x_1492_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1576_; lean_object* v___x_1578_; 
v___x_1576_ = lean_box(0);
if (v_isShared_1575_ == 0)
{
lean_ctor_set_tag(v___x_1574_, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1576_);
v___x_1578_ = v___x_1574_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1576_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___redArg(lean_object* v_preNode_1582_, lean_object* v_postNode_1583_, lean_object* v___x_1584_, lean_object* v_x_1585_, lean_object* v_x_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
if (lean_obj_tag(v_x_1585_) == 0)
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
lean_dec(v___x_1584_);
lean_dec_ref(v_postNode_1583_);
lean_dec_ref(v_preNode_1582_);
v___x_1590_ = l_List_reverse___redArg(v_x_1586_);
v___x_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
return v___x_1591_;
}
else
{
lean_object* v_head_1592_; lean_object* v_tail_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1611_; 
v_head_1592_ = lean_ctor_get(v_x_1585_, 0);
v_tail_1593_ = lean_ctor_get(v_x_1585_, 1);
v_isSharedCheck_1611_ = !lean_is_exclusive(v_x_1585_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1595_ = v_x_1585_;
v_isShared_1596_ = v_isSharedCheck_1611_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_tail_1593_);
lean_inc(v_head_1592_);
lean_dec(v_x_1585_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1611_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1597_; 
lean_inc(v___x_1584_);
lean_inc_ref(v_postNode_1583_);
lean_inc_ref(v_preNode_1582_);
v___x_1597_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg(v_preNode_1582_, v_postNode_1583_, v___x_1584_, v_head_1592_, v___y_1587_, v___y_1588_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v___x_1600_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v___x_1597_, 1);
if (v_isShared_1596_ == 0)
{
lean_ctor_set(v___x_1595_, 1, v_x_1586_);
lean_ctor_set(v___x_1595_, 0, v_a_1598_);
v___x_1600_ = v___x_1595_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1598_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_x_1586_);
v___x_1600_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
v_x_1585_ = v_tail_1593_;
v_x_1586_ = v___x_1600_;
goto _start;
}
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
lean_del_object(v___x_1595_);
lean_dec(v_tail_1593_);
lean_dec(v_x_1586_);
lean_dec(v___x_1584_);
lean_dec_ref(v_postNode_1583_);
lean_dec_ref(v_preNode_1582_);
v_a_1603_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1597_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1597_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1603_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___redArg___boxed(lean_object* v_preNode_1612_, lean_object* v_postNode_1613_, lean_object* v___x_1614_, lean_object* v_x_1615_, lean_object* v_x_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___redArg(v_preNode_1612_, v_postNode_1613_, v___x_1614_, v_x_1615_, v_x_1616_, v___y_1617_, v___y_1618_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg___boxed(lean_object* v_preNode_1621_, lean_object* v_postNode_1622_, lean_object* v_x_1623_, lean_object* v_x_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg(v_preNode_1621_, v_postNode_1622_, v_x_1623_, v_x_1624_, v___y_1625_, v___y_1626_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10___lam__0(lean_object* v_postNode_1629_, lean_object* v_ci_1630_, lean_object* v_i_1631_, lean_object* v_cs_1632_, lean_object* v_x_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1637_; 
lean_inc(v___y_1635_);
lean_inc_ref(v___y_1634_);
v___x_1637_ = lean_apply_6(v_postNode_1629_, v_ci_1630_, v_i_1631_, v_cs_1632_, v___y_1634_, v___y_1635_, lean_box(0));
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10___lam__0___boxed(lean_object* v_postNode_1638_, lean_object* v_ci_1639_, lean_object* v_i_1640_, lean_object* v_cs_1641_, lean_object* v_x_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10___lam__0(v_postNode_1638_, v_ci_1639_, v_i_1640_, v_cs_1641_, v_x_1642_, v___y_1643_, v___y_1644_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec(v_x_1642_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10(lean_object* v_preNode_1647_, lean_object* v_postNode_1648_, lean_object* v_ctx_x3f_1649_, lean_object* v_t_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v___f_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___f_1654_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1654_, 0, v_postNode_1648_);
v___x_1655_ = lean_box(0);
v___x_1656_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg(v_preNode_1647_, v___f_1654_, v_ctx_x3f_1649_, v_t_1650_, v___y_1651_, v___y_1652_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1663_ == 0)
{
lean_object* v_unused_1664_; 
v_unused_1664_ = lean_ctor_get(v___x_1656_, 0);
lean_dec(v_unused_1664_);
v___x_1658_ = v___x_1656_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_dec(v___x_1656_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 0, v___x_1655_);
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1655_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
v_a_1665_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1656_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1656_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10___boxed(lean_object* v_preNode_1673_, lean_object* v_postNode_1674_, lean_object* v_ctx_x3f_1675_, lean_object* v_t_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10(v_preNode_1673_, v_postNode_1674_, v_ctx_x3f_1675_, v_t_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__0(uint8_t v_a_1681_, lean_object* v_x_1682_, lean_object* v_x_1683_, lean_object* v_x_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1688_ = lean_box(v_a_1681_);
v___x_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__0___boxed(lean_object* v_a_1690_, lean_object* v_x_1691_, lean_object* v_x_1692_, lean_object* v_x_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_){
_start:
{
uint8_t v_a_29751__boxed_1697_; lean_object* v_res_1698_; 
v_a_29751__boxed_1697_ = lean_unbox(v_a_1690_);
v_res_1698_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__0(v_a_29751__boxed_1697_, v_x_1691_, v_x_1692_, v_x_1693_, v___y_1694_, v___y_1695_);
lean_dec(v___y_1695_);
lean_dec_ref(v___y_1694_);
lean_dec_ref(v_x_1693_);
lean_dec_ref(v_x_1692_);
lean_dec_ref(v_x_1691_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11(uint8_t v_a_1699_, lean_object* v_val_1700_, lean_object* v_as_1701_, size_t v_sz_1702_, size_t v_i_1703_, lean_object* v_b_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
uint8_t v___x_1708_; 
v___x_1708_ = lean_usize_dec_lt(v_i_1703_, v_sz_1702_);
if (v___x_1708_ == 0)
{
lean_object* v___x_1709_; 
lean_dec(v_val_1700_);
v___x_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1709_, 0, v_b_1704_);
return v___x_1709_;
}
else
{
lean_object* v___x_1710_; lean_object* v___f_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___f_1714_; lean_object* v___x_1715_; lean_object* v_a_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1710_ = lean_box(v_a_1699_);
v___f_1711_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1711_, 0, v___x_1710_);
v___x_1712_ = l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_linter_tacticCheckInstances;
v___x_1713_ = lean_box(v_a_1699_);
lean_inc(v_val_1700_);
v___f_1714_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___lam__2___boxed), 9, 3);
lean_closure_set(v___f_1714_, 0, v_val_1700_);
lean_closure_set(v___f_1714_, 1, v___x_1713_);
lean_closure_set(v___f_1714_, 2, v___x_1712_);
v___x_1715_ = lean_box(0);
v_a_1716_ = lean_array_uget_borrowed(v_as_1701_, v_i_1703_);
v___x_1717_ = lean_box(0);
lean_inc(v_a_1716_);
v___x_1718_ = l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10(v___f_1711_, v___f_1714_, v___x_1717_, v_a_1716_, v___y_1705_, v___y_1706_);
if (lean_obj_tag(v___x_1718_) == 0)
{
size_t v___x_1719_; size_t v___x_1720_; 
lean_dec_ref_known(v___x_1718_, 1);
v___x_1719_ = ((size_t)1ULL);
v___x_1720_ = lean_usize_add(v_i_1703_, v___x_1719_);
v_i_1703_ = v___x_1720_;
v_b_1704_ = v___x_1715_;
goto _start;
}
else
{
lean_dec(v_val_1700_);
return v___x_1718_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11___boxed(lean_object* v_a_1722_, lean_object* v_val_1723_, lean_object* v_as_1724_, lean_object* v_sz_1725_, lean_object* v_i_1726_, lean_object* v_b_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
uint8_t v_a_29776__boxed_1731_; size_t v_sz_boxed_1732_; size_t v_i_boxed_1733_; lean_object* v_res_1734_; 
v_a_29776__boxed_1731_ = lean_unbox(v_a_1722_);
v_sz_boxed_1732_ = lean_unbox_usize(v_sz_1725_);
lean_dec(v_sz_1725_);
v_i_boxed_1733_ = lean_unbox_usize(v_i_1726_);
lean_dec(v_i_1726_);
v_res_1734_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11(v_a_29776__boxed_1731_, v_val_1723_, v_as_1724_, v_sz_boxed_1732_, v_i_boxed_1733_, v_b_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
lean_dec_ref(v_as_1724_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___redArg(lean_object* v_opt_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v_scopes_1740_; lean_object* v___x_1741_; lean_object* v_opts_1742_; uint8_t v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1738_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1739_ = lean_st_ref_get(v___y_1736_);
v_scopes_1740_ = lean_ctor_get(v___x_1739_, 2);
lean_inc(v_scopes_1740_);
lean_dec(v___x_1739_);
v___x_1741_ = l_List_head_x21___redArg(v___x_1738_, v_scopes_1740_);
lean_dec(v_scopes_1740_);
v_opts_1742_ = lean_ctor_get(v___x_1741_, 1);
lean_inc_ref(v_opts_1742_);
lean_dec(v___x_1741_);
v___x_1743_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0_spec__0(v_opts_1742_, v_opt_1735_);
lean_dec_ref(v_opts_1742_);
v___x_1744_ = lean_box(v___x_1743_);
v___x_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___redArg___boxed(lean_object* v_opt_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___redArg(v_opt_1746_, v___y_1747_);
lean_dec(v___y_1747_);
lean_dec_ref(v_opt_1746_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___lam__0(lean_object* v___cmdStx_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1785_; 
v___x_1754_ = l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_linter_tacticCheckInstances;
v___x_1755_ = l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___redArg(v___x_1754_, v___y_1752_);
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1758_ = v___x_1755_;
v_isShared_1759_ = v_isSharedCheck_1785_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1755_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1785_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
uint8_t v___x_1760_; 
v___x_1760_ = lean_unbox(v_a_1756_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; lean_object* v___x_1763_; 
lean_dec(v_a_1756_);
v___x_1761_ = lean_box(0);
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 0, v___x_1761_);
v___x_1763_ = v___x_1758_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
else
{
lean_object* v___x_1765_; lean_object* v_infoState_1766_; lean_object* v_trees_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; size_t v_sz_1773_; size_t v___x_1774_; uint8_t v___x_1775_; lean_object* v___x_1776_; 
lean_del_object(v___x_1758_);
v___x_1765_ = lean_st_ref_get(v___y_1752_);
v_infoState_1766_ = lean_ctor_get(v___x_1765_, 8);
lean_inc_ref(v_infoState_1766_);
lean_dec(v___x_1765_);
v_trees_1767_ = lean_ctor_get(v_infoState_1766_, 2);
lean_inc_ref(v_trees_1767_);
lean_dec_ref(v_infoState_1766_);
v___x_1768_ = l_Lean_PersistentArray_toArray___redArg(v_trees_1767_);
lean_dec_ref(v_trees_1767_);
v___x_1769_ = 0;
v___x_1770_ = lean_box(v___x_1769_);
v___x_1771_ = lean_st_mk_ref(v___x_1770_);
v___x_1772_ = lean_box(0);
v_sz_1773_ = lean_array_size(v___x_1768_);
v___x_1774_ = ((size_t)0ULL);
v___x_1775_ = lean_unbox(v_a_1756_);
lean_dec(v_a_1756_);
v___x_1776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__11(v___x_1775_, v___x_1771_, v___x_1768_, v_sz_1773_, v___x_1774_, v___x_1772_, v___y_1751_, v___y_1752_);
lean_dec_ref(v___x_1768_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1783_ == 0)
{
lean_object* v_unused_1784_; 
v_unused_1784_ = lean_ctor_get(v___x_1776_, 0);
lean_dec(v_unused_1784_);
v___x_1778_ = v___x_1776_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_dec(v___x_1776_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1772_);
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1772_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
else
{
return v___x_1776_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___lam__0___boxed(lean_object* v___cmdStx_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances___lam__0(v___cmdStx_1786_, v___y_1787_, v___y_1788_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
lean_dec(v___cmdStx_1786_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0(lean_object* v_opt_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_){
_start:
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___redArg(v_opt_1799_, v___y_1801_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0___boxed(lean_object* v_opt_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lean_Option_getM___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__0(v_opt_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec_ref(v_opt_1804_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4(lean_object* v_00_u03b2_1809_, lean_object* v_m_1810_){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___redArg(v_m_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4___boxed(lean_object* v_00_u03b2_1812_, lean_object* v_m_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4(v_00_u03b2_1812_, v_m_1813_);
lean_dec_ref(v_m_1813_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8(lean_object* v_kind_1815_, uint8_t v_a_1816_, uint8_t v_val_1817_, lean_object* v_as_1818_, lean_object* v_as_x27_1819_, lean_object* v_b_1820_, lean_object* v_a_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___redArg(v_kind_1815_, v_a_1816_, v_val_1817_, v_as_x27_1819_, v_b_1820_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8___boxed(lean_object* v_kind_1828_, lean_object* v_a_1829_, lean_object* v_val_1830_, lean_object* v_as_1831_, lean_object* v_as_x27_1832_, lean_object* v_b_1833_, lean_object* v_a_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
uint8_t v_a_29969__boxed_1840_; uint8_t v_val_29970__boxed_1841_; lean_object* v_res_1842_; 
v_a_29969__boxed_1840_ = lean_unbox(v_a_1829_);
v_val_29970__boxed_1841_ = lean_unbox(v_val_1830_);
v_res_1842_ = l_List_forIn_x27_loop___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__8(v_kind_1828_, v_a_29969__boxed_1840_, v_val_29970__boxed_1841_, v_as_1831_, v_as_x27_1832_, v_b_1833_, v_a_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v_as_x27_1832_);
lean_dec(v_as_1831_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4(lean_object* v_00_u03b2_1843_, lean_object* v_x_1844_, lean_object* v_x_1845_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___redArg(v_x_1844_, v_x_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1847_, lean_object* v_x_1848_, lean_object* v_x_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4(v_00_u03b2_1847_, v_x_1848_, v_x_1849_);
lean_dec(v_x_1849_);
lean_dec_ref(v_x_1848_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5(lean_object* v_00_u03b2_1851_, lean_object* v_x_1852_, lean_object* v_x_1853_, lean_object* v_x_1854_){
_start:
{
lean_object* v___x_1855_; 
v___x_1855_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5___redArg(v_x_1852_, v_x_1853_, v_x_1854_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6(lean_object* v_00_u03c3_1856_, lean_object* v_00_u03b2_1857_, lean_object* v_map_1858_, lean_object* v_init_1859_, lean_object* v_f_1860_){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___redArg(v_map_1858_, v_init_1859_, v_f_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6___boxed(lean_object* v_00_u03c3_1862_, lean_object* v_00_u03b2_1863_, lean_object* v_map_1864_, lean_object* v_init_1865_, lean_object* v_f_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6(v_00_u03c3_1862_, v_00_u03b2_1863_, v_map_1864_, v_init_1865_, v_f_1866_);
lean_dec_ref(v_map_1864_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8(lean_object* v_00_u03c3_1868_, lean_object* v_00_u03b2_1869_, lean_object* v_map_1870_, lean_object* v_f_1871_, lean_object* v_init_1872_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___redArg(v_map_1870_, v_f_1871_, v_init_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8___boxed(lean_object* v_00_u03c3_1874_, lean_object* v_00_u03b2_1875_, lean_object* v_map_1876_, lean_object* v_f_1877_, lean_object* v_init_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8(v_00_u03c3_1874_, v_00_u03b2_1875_, v_map_1876_, v_f_1877_, v_init_1878_);
lean_dec_ref(v_map_1876_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23(lean_object* v_00_u03b1_1880_, lean_object* v_msg_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___redArg(v_msg_1881_, v___y_1882_, v___y_1883_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23___boxed(lean_object* v_00_u03b1_1886_, lean_object* v_msg_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__23(v_00_u03b1_1886_, v_msg_1887_, v___y_1888_, v___y_1889_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17(lean_object* v_00_u03b1_1892_, lean_object* v_preNode_1893_, lean_object* v_postNode_1894_, lean_object* v_x_1895_, lean_object* v_x_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v___x_1900_; 
v___x_1900_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___redArg(v_preNode_1893_, v_postNode_1894_, v_x_1895_, v_x_1896_, v___y_1897_, v___y_1898_);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17___boxed(lean_object* v_00_u03b1_1901_, lean_object* v_preNode_1902_, lean_object* v_postNode_1903_, lean_object* v_x_1904_, lean_object* v_x_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17(v_00_u03b1_1901_, v_preNode_1902_, v_postNode_1903_, v_x_1904_, v_x_1905_, v___y_1906_, v___y_1907_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_1910_, lean_object* v_x_1911_, size_t v_x_1912_, lean_object* v_x_1913_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___redArg(v_x_1911_, v_x_1912_, v_x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_1915_, lean_object* v_x_1916_, lean_object* v_x_1917_, lean_object* v_x_1918_){
_start:
{
size_t v_x_30044__boxed_1919_; lean_object* v_res_1920_; 
v_x_30044__boxed_1919_ = lean_unbox_usize(v_x_1917_);
lean_dec(v_x_1917_);
v_res_1920_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6(v_00_u03b2_1915_, v_x_1916_, v_x_30044__boxed_1919_, v_x_1918_);
lean_dec(v_x_1918_);
lean_dec_ref(v_x_1916_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_1921_, lean_object* v_x_1922_, size_t v_x_1923_, size_t v_x_1924_, lean_object* v_x_1925_, lean_object* v_x_1926_){
_start:
{
lean_object* v___x_1927_; 
v___x_1927_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___redArg(v_x_1922_, v_x_1923_, v_x_1924_, v_x_1925_, v_x_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1928_, lean_object* v_x_1929_, lean_object* v_x_1930_, lean_object* v_x_1931_, lean_object* v_x_1932_, lean_object* v_x_1933_){
_start:
{
size_t v_x_30055__boxed_1934_; size_t v_x_30056__boxed_1935_; lean_object* v_res_1936_; 
v_x_30055__boxed_1934_ = lean_unbox_usize(v_x_1930_);
lean_dec(v_x_1930_);
v_x_30056__boxed_1935_ = lean_unbox_usize(v_x_1931_);
lean_dec(v_x_1931_);
v_res_1936_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8(v_00_u03b2_1928_, v_x_1929_, v_x_30055__boxed_1934_, v_x_30056__boxed_1935_, v_x_1932_, v_x_1933_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10___redArg(lean_object* v_map_1937_, lean_object* v_f_1938_, lean_object* v_init_1939_){
_start:
{
lean_object* v___x_1940_; 
v___x_1940_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22___redArg(v_f_1938_, v_map_1937_, v_init_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10(lean_object* v_00_u03c3_1941_, lean_object* v_00_u03c3_1942_, lean_object* v_00_u03b2_1943_, lean_object* v_map_1944_, lean_object* v_f_1945_, lean_object* v_init_1946_){
_start:
{
lean_object* v___x_1947_; 
v___x_1947_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22___redArg(v_f_1945_, v_map_1944_, v_init_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13___redArg(lean_object* v_map_1948_, lean_object* v_f_1949_, lean_object* v_init_1950_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg(v_f_1949_, v_map_1948_, v_init_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13___redArg___boxed(lean_object* v_map_1952_, lean_object* v_f_1953_, lean_object* v_init_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13___redArg(v_map_1952_, v_f_1953_, v_init_1954_);
lean_dec_ref(v_map_1952_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13(lean_object* v_00_u03c3_1956_, lean_object* v_00_u03b2_1957_, lean_object* v_map_1958_, lean_object* v_f_1959_, lean_object* v_init_1960_){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg(v_f_1959_, v_map_1958_, v_init_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13___boxed(lean_object* v_00_u03c3_1962_, lean_object* v_00_u03b2_1963_, lean_object* v_map_1964_, lean_object* v_f_1965_, lean_object* v_init_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13(v_00_u03c3_1962_, v_00_u03b2_1963_, v_map_1964_, v_f_1965_, v_init_1966_);
lean_dec_ref(v_map_1964_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28(lean_object* v_msgData_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v___x_1972_; 
v___x_1972_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___redArg(v_msgData_1968_, v___y_1970_);
return v___x_1972_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28___boxed(lean_object* v_msgData_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__9_spec__15_spec__20_spec__28(v_msgData_1973_, v___y_1974_, v___y_1975_);
lean_dec(v___y_1975_);
lean_dec_ref(v___y_1974_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24(lean_object* v_00_u03b1_1978_, lean_object* v_preNode_1979_, lean_object* v_postNode_1980_, lean_object* v___x_1981_, lean_object* v_x_1982_, lean_object* v_x_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v___x_1987_; 
v___x_1987_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___redArg(v_preNode_1979_, v_postNode_1980_, v___x_1981_, v_x_1982_, v_x_1983_, v___y_1984_, v___y_1985_);
return v___x_1987_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24___boxed(lean_object* v_00_u03b1_1988_, lean_object* v_preNode_1989_, lean_object* v_postNode_1990_, lean_object* v___x_1991_, lean_object* v_x_1992_, lean_object* v_x_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__10_spec__17_spec__24(v_00_u03b1_1988_, v_preNode_1989_, v_postNode_1990_, v___x_1991_, v_x_1992_, v_x_1993_, v___y_1994_, v___y_1995_);
lean_dec(v___y_1995_);
lean_dec_ref(v___y_1994_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15(lean_object* v_00_u03b2_1998_, lean_object* v_keys_1999_, lean_object* v_vals_2000_, lean_object* v_heq_2001_, lean_object* v_i_2002_, lean_object* v_k_2003_){
_start:
{
lean_object* v___x_2004_; 
v___x_2004_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___redArg(v_keys_1999_, v_vals_2000_, v_i_2002_, v_k_2003_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15___boxed(lean_object* v_00_u03b2_2005_, lean_object* v_keys_2006_, lean_object* v_vals_2007_, lean_object* v_heq_2008_, lean_object* v_i_2009_, lean_object* v_k_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__4_spec__6_spec__15(v_00_u03b2_2005_, v_keys_2006_, v_vals_2007_, v_heq_2008_, v_i_2009_, v_k_2010_);
lean_dec(v_k_2010_);
lean_dec_ref(v_vals_2007_);
lean_dec_ref(v_keys_2006_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18(lean_object* v_00_u03b2_2012_, lean_object* v_n_2013_, lean_object* v_k_2014_, lean_object* v_v_2015_){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18___redArg(v_n_2013_, v_k_2014_, v_v_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19(lean_object* v_00_u03b2_2017_, size_t v_depth_2018_, lean_object* v_keys_2019_, lean_object* v_vals_2020_, lean_object* v_heq_2021_, lean_object* v_i_2022_, lean_object* v_entries_2023_){
_start:
{
lean_object* v___x_2024_; 
v___x_2024_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___redArg(v_depth_2018_, v_keys_2019_, v_vals_2020_, v_i_2022_, v_entries_2023_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19___boxed(lean_object* v_00_u03b2_2025_, lean_object* v_depth_2026_, lean_object* v_keys_2027_, lean_object* v_vals_2028_, lean_object* v_heq_2029_, lean_object* v_i_2030_, lean_object* v_entries_2031_){
_start:
{
size_t v_depth_boxed_2032_; lean_object* v_res_2033_; 
v_depth_boxed_2032_ = lean_unbox_usize(v_depth_2026_);
lean_dec(v_depth_2026_);
v_res_2033_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__19(v_00_u03b2_2025_, v_depth_boxed_2032_, v_keys_2027_, v_vals_2028_, v_heq_2029_, v_i_2030_, v_entries_2031_);
lean_dec_ref(v_vals_2028_);
lean_dec_ref(v_keys_2027_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22(lean_object* v_00_u03c3_2034_, lean_object* v_00_u03c3_2035_, lean_object* v_00_u03b1_2036_, lean_object* v_00_u03b2_2037_, lean_object* v_f_2038_, lean_object* v_x_2039_, lean_object* v_x_2040_){
_start:
{
lean_object* v___x_2041_; 
v___x_2041_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22___redArg(v_f_2038_, v_x_2039_, v_x_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25(lean_object* v_00_u03c3_2042_, lean_object* v_00_u03b1_2043_, lean_object* v_00_u03b2_2044_, lean_object* v_f_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___redArg(v_f_2045_, v_x_2046_, v_x_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25___boxed(lean_object* v_00_u03c3_2049_, lean_object* v_00_u03b1_2050_, lean_object* v_00_u03b2_2051_, lean_object* v_f_2052_, lean_object* v_x_2053_, lean_object* v_x_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25(v_00_u03c3_2049_, v_00_u03b1_2050_, v_00_u03b2_2051_, v_f_2052_, v_x_2053_, v_x_2054_);
lean_dec_ref(v_x_2053_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18_spec__24(lean_object* v_00_u03b2_2056_, lean_object* v_x_2057_, lean_object* v_x_2058_, lean_object* v_x_2059_, lean_object* v_x_2060_){
_start:
{
lean_object* v___x_2061_; 
v___x_2061_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__5_spec__8_spec__18_spec__24___redArg(v_x_2057_, v_x_2058_, v_x_2059_, v_x_2060_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28(lean_object* v_00_u03b1_2062_, lean_object* v_00_u03b2_2063_, lean_object* v_00_u03c3_2064_, lean_object* v_00_u03c3_2065_, lean_object* v_f_2066_, lean_object* v_as_2067_, size_t v_i_2068_, size_t v_stop_2069_, lean_object* v_b_2070_){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___redArg(v_f_2066_, v_as_2067_, v_i_2068_, v_stop_2069_, v_b_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28___boxed(lean_object* v_00_u03b1_2072_, lean_object* v_00_u03b2_2073_, lean_object* v_00_u03c3_2074_, lean_object* v_00_u03c3_2075_, lean_object* v_f_2076_, lean_object* v_as_2077_, lean_object* v_i_2078_, lean_object* v_stop_2079_, lean_object* v_b_2080_){
_start:
{
size_t v_i_boxed_2081_; size_t v_stop_boxed_2082_; lean_object* v_res_2083_; 
v_i_boxed_2081_ = lean_unbox_usize(v_i_2078_);
lean_dec(v_i_2078_);
v_stop_boxed_2082_ = lean_unbox_usize(v_stop_2079_);
lean_dec(v_stop_2079_);
v_res_2083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__28(v_00_u03b1_2072_, v_00_u03b2_2073_, v_00_u03c3_2074_, v_00_u03c3_2075_, v_f_2076_, v_as_2077_, v_i_boxed_2081_, v_stop_boxed_2082_, v_b_2080_);
lean_dec_ref(v_as_2077_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29(lean_object* v_00_u03c3_2084_, lean_object* v_00_u03c3_2085_, lean_object* v_00_u03b1_2086_, lean_object* v_00_u03b2_2087_, lean_object* v_f_2088_, lean_object* v_keys_2089_, lean_object* v_vals_2090_, lean_object* v_heq_2091_, lean_object* v_i_2092_, lean_object* v_acc_2093_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___redArg(v_f_2088_, v_keys_2089_, v_vals_2090_, v_i_2092_, v_acc_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29___boxed(lean_object* v_00_u03c3_2095_, lean_object* v_00_u03c3_2096_, lean_object* v_00_u03b1_2097_, lean_object* v_00_u03b2_2098_, lean_object* v_f_2099_, lean_object* v_keys_2100_, lean_object* v_vals_2101_, lean_object* v_heq_2102_, lean_object* v_i_2103_, lean_object* v_acc_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_subCounters___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__3_spec__6_spec__10_spec__22_spec__29(v_00_u03c3_2095_, v_00_u03c3_2096_, v_00_u03b1_2097_, v_00_u03b2_2098_, v_f_2099_, v_keys_2100_, v_vals_2101_, v_heq_2102_, v_i_2103_, v_acc_2104_);
lean_dec_ref(v_vals_2101_);
lean_dec_ref(v_keys_2100_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32(lean_object* v_00_u03b1_2106_, lean_object* v_00_u03b2_2107_, lean_object* v_00_u03c3_2108_, lean_object* v_f_2109_, lean_object* v_as_2110_, size_t v_i_2111_, size_t v_stop_2112_, lean_object* v_b_2113_){
_start:
{
lean_object* v___x_2114_; 
v___x_2114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___redArg(v_f_2109_, v_as_2110_, v_i_2111_, v_stop_2112_, v_b_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32___boxed(lean_object* v_00_u03b1_2115_, lean_object* v_00_u03b2_2116_, lean_object* v_00_u03c3_2117_, lean_object* v_f_2118_, lean_object* v_as_2119_, lean_object* v_i_2120_, lean_object* v_stop_2121_, lean_object* v_b_2122_){
_start:
{
size_t v_i_boxed_2123_; size_t v_stop_boxed_2124_; lean_object* v_res_2125_; 
v_i_boxed_2123_ = lean_unbox_usize(v_i_2120_);
lean_dec(v_i_2120_);
v_stop_boxed_2124_ = lean_unbox_usize(v_stop_2121_);
lean_dec(v_stop_2121_);
v_res_2125_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__32(v_00_u03b1_2115_, v_00_u03b2_2116_, v_00_u03c3_2117_, v_f_2118_, v_as_2119_, v_i_boxed_2123_, v_stop_boxed_2124_, v_b_2122_);
lean_dec_ref(v_as_2119_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33(lean_object* v_00_u03c3_2126_, lean_object* v_00_u03b1_2127_, lean_object* v_00_u03b2_2128_, lean_object* v_f_2129_, lean_object* v_keys_2130_, lean_object* v_vals_2131_, lean_object* v_heq_2132_, lean_object* v_i_2133_, lean_object* v_acc_2134_){
_start:
{
lean_object* v___x_2135_; 
v___x_2135_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___redArg(v_f_2129_, v_keys_2130_, v_vals_2131_, v_i_2133_, v_acc_2134_);
return v___x_2135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33___boxed(lean_object* v_00_u03c3_2136_, lean_object* v_00_u03b1_2137_, lean_object* v_00_u03b2_2138_, lean_object* v_f_2139_, lean_object* v_keys_2140_, lean_object* v_vals_2141_, lean_object* v_heq_2142_, lean_object* v_i_2143_, lean_object* v_acc_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances_spec__4_spec__8_spec__13_spec__25_spec__33(v_00_u03c3_2136_, v_00_u03b1_2137_, v_00_u03b2_2138_, v_f_2139_, v_keys_2140_, v_vals_2141_, v_heq_2142_, v_i_2143_, v_acc_2144_);
lean_dec_ref(v_vals_2141_);
lean_dec_ref(v_keys_2140_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_490307252____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2147_ = ((lean_object*)(l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_tacticCheckInstances));
v___x_2148_ = l_Lean_Elab_Command_addLinter(v___x_2147_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_490307252____hygCtx___hyg_2____boxed(lean_object* v_a_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_490307252____hygCtx___hyg_2_();
return v_res_2150_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Diagnostics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_TacticTypeCheck(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_2385551297____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_linter_tacticCheckInstances = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_linter_tacticCheckInstances);
lean_dec_ref(res);
res = l___private_Lean_Linter_TacticTypeCheck_0__Lean_Linter_initFn_00___x40_Lean_Linter_TacticTypeCheck_490307252____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_TacticTypeCheck(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Meta_Diagnostics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_TacticTypeCheck(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_TacticTypeCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_TacticTypeCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_TacticTypeCheck(builtin);
}
#ifdef __cplusplus
}
#endif
