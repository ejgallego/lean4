// Lean compiler output
// Module: Lean.Linter.UnusedSimpArgs
// Imports: public import Lean.Elab.Command public import Lean.Elab.Tactic.Simp public import Lean.Linter.Util
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_linter_unusedSimpArgs;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_getSimpParams(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_setSimpParams(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
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
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_Elab_Tactic_instImpl_00___x40_Lean_Elab_Tactic_Simp_2597418670____hygCtx___hyg_9_;
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__0 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__1 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__1_value;
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "This simp argument is unused:"};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__2 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__2_value;
static lean_once_cell_t l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__3;
static const lean_array_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__4 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__4_value;
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Omit it from the simp argument list."};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__5 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__5_value;
static const lean_ctor_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__5_value)}};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__6 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__6_value;
static lean_once_cell_t l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__7;
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__8 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__8_value;
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__9 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__9_value;
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__10 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__10_value;
static const lean_ctor_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__10_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11_value;
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 260, .m_capacity = 260, .m_length = 255, .m_data = "Simp arguments with `←` have the additional effect of removing the other direction from the simp set, even if the simp argument itself is unused. If the hint above does not work, try replacing `←` with `-` to only get that effect and silence this warning."};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__12 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__12_value;
static lean_once_cell_t l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__13;
static lean_once_cell_t l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__14;
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Index "};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__15 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__15_value;
static lean_once_cell_t l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__16;
static const lean_string_object l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = " out of bounds for simp arguments of "};
static const lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__17 = (const lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__17_value;
static lean_once_cell_t l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__18;
LEAN_EXPORT lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_unusedSimpArgs_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_unusedSimpArgs_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_unusedSimpArgs_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_unusedSimpArgs_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Linter_unusedSimpArgs_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Linter_unusedSimpArgs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Simp argument mask size mismatch: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " vs. "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "simpAll"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(5, 49, 55, 92, 153, 191, 153, 249)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Elab.InfoTree.Util.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.InfoTree.Util"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7_spec__14(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_unusedSimpArgs___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_unusedSimpArgs___lam__0___closed__0;
static lean_once_cell_t l_Lean_Linter_unusedSimpArgs___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_unusedSimpArgs___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_unusedSimpArgs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_unusedSimpArgs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_unusedSimpArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_unusedSimpArgs___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_unusedSimpArgs___closed__0 = (const lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__0_value;
static const lean_string_object l_Lean_Linter_unusedSimpArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l_Lean_Linter_unusedSimpArgs___closed__1 = (const lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__1_value;
static const lean_string_object l_Lean_Linter_unusedSimpArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "unusedSimpArgs"};
static const lean_object* l_Lean_Linter_unusedSimpArgs___closed__2 = (const lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__2_value;
static const lean_ctor_object l_Lean_Linter_unusedSimpArgs___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_unusedSimpArgs___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__3_value_aux_0),((lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__1_value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_unusedSimpArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__3_value_aux_1),((lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__2_value),LEAN_SCALAR_PTR_LITERAL(106, 83, 85, 18, 196, 98, 191, 198)}};
static const lean_object* l_Lean_Linter_unusedSimpArgs___closed__3 = (const lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__3_value;
static const lean_ctor_object l_Lean_Linter_unusedSimpArgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__0_value),((lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__3_value)}};
static const lean_object* l_Lean_Linter_unusedSimpArgs___closed__4 = (const lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_unusedSimpArgs = (const lean_object*)&l_Lean_Linter_unusedSimpArgs___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_initFn_00___x40_Lean_Linter_UnusedSimpArgs_2198311501____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_initFn_00___x40_Lean_Linter_UnusedSimpArgs_2198311501____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___redArg(lean_object* v_upperBound_1_, lean_object* v_i_2_, lean_object* v_simpArgs_3_, lean_object* v_a_4_, lean_object* v_b_5_){
_start:
{
lean_object* v_a_8_; uint8_t v___x_12_; 
v___x_12_ = lean_nat_dec_lt(v_a_4_, v_upperBound_1_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; 
lean_dec(v_a_4_);
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v_b_5_);
return v___x_13_;
}
else
{
uint8_t v___x_14_; 
v___x_14_ = lean_nat_dec_eq(v_a_4_, v_i_2_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_array_fget_borrowed(v_simpArgs_3_, v_a_4_);
lean_inc(v___x_15_);
v___x_16_ = lean_array_push(v_b_5_, v___x_15_);
v_a_8_ = v___x_16_;
goto v___jp_7_;
}
else
{
v_a_8_ = v_b_5_;
goto v___jp_7_;
}
}
v___jp_7_:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_unsigned_to_nat(1u);
v___x_10_ = lean_nat_add(v_a_4_, v___x_9_);
lean_dec(v_a_4_);
v_a_4_ = v___x_10_;
v_b_5_ = v_a_8_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___redArg___boxed(lean_object* v_upperBound_17_, lean_object* v_i_18_, lean_object* v_simpArgs_19_, lean_object* v_a_20_, lean_object* v_b_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___redArg(v_upperBound_17_, v_i_18_, v_simpArgs_19_, v_a_20_, v_b_21_);
lean_dec_ref(v_simpArgs_19_);
lean_dec(v_i_18_);
lean_dec(v_upperBound_17_);
return v_res_23_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_24_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__0);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1);
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_28_);
lean_ctor_set(v___x_29_, 2, v___x_28_);
lean_ctor_set(v___x_29_, 3, v___x_28_);
lean_ctor_set(v___x_29_, 4, v___x_27_);
lean_ctor_set(v___x_29_, 5, v___x_27_);
lean_ctor_set(v___x_29_, 6, v___x_27_);
lean_ctor_set(v___x_29_, 7, v___x_27_);
lean_ctor_set(v___x_29_, 8, v___x_27_);
lean_ctor_set(v___x_29_, 9, v___x_27_);
lean_ctor_set(v___x_29_, 10, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__3(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_unsigned_to_nat(32u);
v___x_31_ = lean_mk_empty_array_with_capacity(v___x_30_);
v___x_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__4(void){
_start:
{
size_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_33_ = ((size_t)5ULL);
v___x_34_ = lean_unsigned_to_nat(0u);
v___x_35_ = lean_unsigned_to_nat(32u);
v___x_36_ = lean_mk_empty_array_with_capacity(v___x_35_);
v___x_37_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__3);
v___x_38_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
lean_ctor_set(v___x_38_, 2, v___x_34_);
lean_ctor_set(v___x_38_, 3, v___x_34_);
lean_ctor_set_usize(v___x_38_, 4, v___x_33_);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_39_ = lean_box(1);
v___x_40_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__4);
v___x_41_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__1);
v___x_42_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
lean_ctor_set(v___x_42_, 1, v___x_40_);
lean_ctor_set(v___x_42_, 2, v___x_39_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3(lean_object* v_msgData_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___x_47_; lean_object* v_toCold_48_; lean_object* v_env_49_; lean_object* v_options_50_; uint8_t v___x_51_; lean_object* v_env_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_47_ = lean_st_ref_get(v___y_45_);
v_toCold_48_ = lean_ctor_get(v___y_44_, 0);
v_env_49_ = lean_ctor_get(v___x_47_, 0);
lean_inc_ref(v_env_49_);
lean_dec(v___x_47_);
v_options_50_ = lean_ctor_get(v_toCold_48_, 2);
v___x_51_ = 0;
v_env_52_ = l_Lean_Environment_setRecordingDeps(v_env_49_, v___x_51_);
v___x_53_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2);
v___x_54_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5);
lean_inc_ref(v_options_50_);
v___x_55_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_55_, 0, v_env_52_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_54_);
lean_ctor_set(v___x_55_, 3, v_options_50_);
v___x_56_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v_msgData_43_);
v___x_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___boxed(lean_object* v_msgData_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3(v_msgData_58_, v___y_59_, v___y_60_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___redArg(lean_object* v_msg_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_ref_67_; lean_object* v___x_68_; lean_object* v_a_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_77_; 
v_ref_67_ = lean_ctor_get(v___y_64_, 2);
v___x_68_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3(v_msg_63_, v___y_64_, v___y_65_);
v_a_69_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_77_ == 0)
{
v___x_71_ = v___x_68_;
v_isShared_72_ = v_isSharedCheck_77_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_a_69_);
lean_dec(v___x_68_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_77_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_73_; lean_object* v___x_75_; 
lean_inc(v_ref_67_);
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v_ref_67_);
lean_ctor_set(v___x_73_, 1, v_a_69_);
if (v_isShared_72_ == 0)
{
lean_ctor_set_tag(v___x_71_, 1);
lean_ctor_set(v___x_71_, 0, v___x_73_);
v___x_75_ = v___x_71_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v___x_73_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___redArg___boxed(lean_object* v_msg_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___redArg(v_msg_78_, v___y_79_, v___y_80_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
return v_res_82_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0(uint8_t v___x_91_, lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_92_) == 1)
{
lean_object* v_pre_93_; 
v_pre_93_ = lean_ctor_get(v_x_92_, 0);
switch(lean_obj_tag(v_pre_93_))
{
case 1:
{
lean_object* v_pre_94_; 
v_pre_94_ = lean_ctor_get(v_pre_93_, 0);
switch(lean_obj_tag(v_pre_94_))
{
case 0:
{
lean_object* v_str_95_; lean_object* v_str_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v_str_95_ = lean_ctor_get(v_x_92_, 1);
v_str_96_ = lean_ctor_get(v_pre_93_, 1);
v___x_97_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_98_ = lean_string_dec_eq(v_str_96_, v___x_97_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_100_ = lean_string_dec_eq(v_str_96_, v___x_99_);
if (v___x_100_ == 0)
{
return v___x_100_;
}
else
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_102_ = lean_string_dec_eq(v_str_95_, v___x_101_);
return v___x_102_;
}
}
else
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_104_ = lean_string_dec_eq(v_str_95_, v___x_103_);
return v___x_104_;
}
}
case 1:
{
lean_object* v_pre_105_; 
v_pre_105_ = lean_ctor_get(v_pre_94_, 0);
if (lean_obj_tag(v_pre_105_) == 0)
{
lean_object* v_str_106_; lean_object* v_str_107_; lean_object* v_str_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v_str_106_ = lean_ctor_get(v_x_92_, 1);
v_str_107_ = lean_ctor_get(v_pre_93_, 1);
v_str_108_ = lean_ctor_get(v_pre_94_, 1);
v___x_109_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_110_ = lean_string_dec_eq(v_str_108_, v___x_109_);
if (v___x_110_ == 0)
{
return v___x_110_;
}
else
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_112_ = lean_string_dec_eq(v_str_107_, v___x_111_);
if (v___x_112_ == 0)
{
return v___x_112_;
}
else
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_114_ = lean_string_dec_eq(v_str_106_, v___x_113_);
return v___x_114_;
}
}
}
else
{
return v___x_91_;
}
}
default: 
{
return v___x_91_;
}
}
}
case 0:
{
lean_object* v_str_115_; lean_object* v___x_116_; uint8_t v___x_117_; 
v_str_115_ = lean_ctor_get(v_x_92_, 1);
v___x_116_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_117_ = lean_string_dec_eq(v_str_115_, v___x_116_);
return v___x_117_;
}
default: 
{
return v___x_91_;
}
}
}
else
{
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___x_118_, lean_object* v_x_119_){
_start:
{
uint8_t v___x_4881__boxed_120_; uint8_t v_res_121_; lean_object* v_r_122_; 
v___x_4881__boxed_120_ = lean_unbox(v___x_118_);
v_res_121_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___lam__0(v___x_4881__boxed_120_, v_x_119_);
lean_dec(v_x_119_);
v_r_122_ = lean_box(v_res_121_);
return v_r_122_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1_spec__5(lean_object* v_opts_123_, lean_object* v_opt_124_){
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
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_opts_133_, lean_object* v_opt_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1_spec__5(v_opts_133_, v_opt_134_);
lean_dec_ref(v_opt_134_);
lean_dec_ref(v_opts_133_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1(lean_object* v_ref_141_, lean_object* v_msgData_142_, uint8_t v_severity_143_, uint8_t v_isSilent_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___y_149_; lean_object* v___y_150_; uint8_t v___y_151_; lean_object* v___y_152_; lean_object* v___y_153_; uint8_t v___y_154_; lean_object* v___y_155_; lean_object* v_toCold_156_; lean_object* v___y_157_; lean_object* v___y_186_; lean_object* v___y_187_; lean_object* v___y_188_; uint8_t v___y_189_; uint8_t v___y_190_; lean_object* v___y_191_; uint8_t v___y_192_; lean_object* v___y_193_; uint8_t v___y_213_; lean_object* v___y_214_; lean_object* v___y_215_; lean_object* v___y_216_; uint8_t v___y_217_; uint8_t v___y_218_; lean_object* v___y_219_; uint8_t v___y_223_; uint8_t v___x_240_; uint8_t v___x_241_; 
v___x_240_ = 2;
v___x_241_ = l_Lean_instBEqMessageSeverity_beq(v_severity_143_, v___x_240_);
if (v___x_241_ == 0)
{
goto v___jp_233_;
}
else
{
uint8_t v___x_242_; 
lean_inc_ref(v_msgData_142_);
v___x_242_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_142_);
if (v___x_242_ == 0)
{
goto v___jp_233_;
}
else
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref(v_msgData_142_);
v___x_243_ = lean_box(0);
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
}
v___jp_148_:
{
lean_object* v_currNamespace_158_; lean_object* v_openDecls_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v_env_164_; lean_object* v_nextMacroScope_165_; lean_object* v_ngen_166_; lean_object* v_auxDeclNGen_167_; lean_object* v_traceState_168_; lean_object* v_cache_169_; lean_object* v_recordedDeps_170_; lean_object* v_messages_171_; lean_object* v_infoState_172_; lean_object* v_snapshotTasks_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_184_; 
v_currNamespace_158_ = lean_ctor_get(v_toCold_156_, 4);
v_openDecls_159_ = lean_ctor_get(v_toCold_156_, 5);
lean_inc(v_openDecls_159_);
lean_inc(v_currNamespace_158_);
v___x_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_160_, 0, v_currNamespace_158_);
lean_ctor_set(v___x_160_, 1, v_openDecls_159_);
v___x_161_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___y_150_);
lean_inc_ref(v___y_152_);
lean_inc_ref(v___y_155_);
v___x_162_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_162_, 0, v___y_155_);
lean_ctor_set(v___x_162_, 1, v___y_153_);
lean_ctor_set(v___x_162_, 2, v___y_149_);
lean_ctor_set(v___x_162_, 3, v___y_152_);
lean_ctor_set(v___x_162_, 4, v___x_161_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*5, v___y_154_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*5 + 1, v___y_151_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*5 + 2, v_isSilent_144_);
v___x_163_ = lean_st_ref_take(v___y_157_);
v_env_164_ = lean_ctor_get(v___x_163_, 0);
v_nextMacroScope_165_ = lean_ctor_get(v___x_163_, 1);
v_ngen_166_ = lean_ctor_get(v___x_163_, 2);
v_auxDeclNGen_167_ = lean_ctor_get(v___x_163_, 3);
v_traceState_168_ = lean_ctor_get(v___x_163_, 4);
v_cache_169_ = lean_ctor_get(v___x_163_, 5);
v_recordedDeps_170_ = lean_ctor_get(v___x_163_, 6);
v_messages_171_ = lean_ctor_get(v___x_163_, 7);
v_infoState_172_ = lean_ctor_get(v___x_163_, 8);
v_snapshotTasks_173_ = lean_ctor_get(v___x_163_, 9);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_184_ == 0)
{
v___x_175_ = v___x_163_;
v_isShared_176_ = v_isSharedCheck_184_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_snapshotTasks_173_);
lean_inc(v_infoState_172_);
lean_inc(v_messages_171_);
lean_inc(v_recordedDeps_170_);
lean_inc(v_cache_169_);
lean_inc(v_traceState_168_);
lean_inc(v_auxDeclNGen_167_);
lean_inc(v_ngen_166_);
lean_inc(v_nextMacroScope_165_);
lean_inc(v_env_164_);
lean_dec(v___x_163_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_184_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_177_ = lean_box(0);
v___x_178_ = l_Lean_MessageLog_add(v___x_162_, v_messages_171_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 7, v___x_178_);
v___x_180_ = v___x_175_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_env_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_nextMacroScope_165_);
lean_ctor_set(v_reuseFailAlloc_183_, 2, v_ngen_166_);
lean_ctor_set(v_reuseFailAlloc_183_, 3, v_auxDeclNGen_167_);
lean_ctor_set(v_reuseFailAlloc_183_, 4, v_traceState_168_);
lean_ctor_set(v_reuseFailAlloc_183_, 5, v_cache_169_);
lean_ctor_set(v_reuseFailAlloc_183_, 6, v_recordedDeps_170_);
lean_ctor_set(v_reuseFailAlloc_183_, 7, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_183_, 8, v_infoState_172_);
lean_ctor_set(v_reuseFailAlloc_183_, 9, v_snapshotTasks_173_);
v___x_180_ = v_reuseFailAlloc_183_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_st_ref_put(v___y_157_, v___x_180_);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_177_);
return v___x_182_;
}
}
}
v___jp_185_:
{
lean_object* v_fileName_194_; lean_object* v_fileMap_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_211_; 
v_fileName_194_ = lean_ctor_get(v___y_191_, 0);
v_fileMap_195_ = lean_ctor_get(v___y_191_, 1);
v___x_196_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_142_);
v___x_197_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3(v___x_196_, v___y_145_, v___y_146_);
v_a_198_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_211_ == 0)
{
v___x_200_ = v___x_197_;
v_isShared_201_ = v_isSharedCheck_211_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_197_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_211_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
lean_inc_ref_n(v_fileMap_195_, 2);
v___x_202_ = l_Lean_FileMap_toPosition(v_fileMap_195_, v___y_188_);
lean_dec(v___y_188_);
v___x_203_ = l_Lean_FileMap_toPosition(v_fileMap_195_, v___y_193_);
lean_dec(v___y_193_);
v___x_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
v___x_205_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___closed__0));
if (v___y_189_ == 0)
{
lean_del_object(v___x_200_);
v___y_149_ = v___x_204_;
v___y_150_ = v_a_198_;
v___y_151_ = v___y_190_;
v___y_152_ = v___x_205_;
v___y_153_ = v___x_202_;
v___y_154_ = v___y_192_;
v___y_155_ = v_fileName_194_;
v_toCold_156_ = v___y_186_;
v___y_157_ = v___y_146_;
goto v___jp_148_;
}
else
{
uint8_t v___x_206_; 
lean_inc(v_a_198_);
lean_inc_ref(v___y_187_);
v___x_206_ = l_Lean_MessageData_hasTag(v___y_187_, v_a_198_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v___x_209_; 
lean_dec_ref_known(v___x_204_, 1);
lean_dec_ref(v___x_202_);
lean_dec(v_a_198_);
v___x_207_ = lean_box(0);
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 0, v___x_207_);
v___x_209_ = v___x_200_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_207_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
else
{
lean_del_object(v___x_200_);
v___y_149_ = v___x_204_;
v___y_150_ = v_a_198_;
v___y_151_ = v___y_190_;
v___y_152_ = v___x_205_;
v___y_153_ = v___x_202_;
v___y_154_ = v___y_192_;
v___y_155_ = v_fileName_194_;
v_toCold_156_ = v___y_186_;
v___y_157_ = v___y_146_;
goto v___jp_148_;
}
}
}
}
v___jp_212_:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Syntax_getTailPos_x3f(v___y_215_, v___y_217_);
lean_dec(v___y_215_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_inc(v___y_219_);
v___y_186_ = v___y_214_;
v___y_187_ = v___y_216_;
v___y_188_ = v___y_219_;
v___y_189_ = v___y_213_;
v___y_190_ = v___y_218_;
v___y_191_ = v___y_214_;
v___y_192_ = v___y_217_;
v___y_193_ = v___y_219_;
goto v___jp_185_;
}
else
{
lean_object* v_val_221_; 
v_val_221_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_val_221_);
lean_dec_ref_known(v___x_220_, 1);
v___y_186_ = v___y_214_;
v___y_187_ = v___y_216_;
v___y_188_ = v___y_219_;
v___y_189_ = v___y_213_;
v___y_190_ = v___y_218_;
v___y_191_ = v___y_214_;
v___y_192_ = v___y_217_;
v___y_193_ = v_val_221_;
goto v___jp_185_;
}
}
v___jp_222_:
{
lean_object* v_toCold_224_; lean_object* v_ref_225_; uint8_t v_suppressElabErrors_226_; lean_object* v_ref_227_; uint8_t v___x_228_; lean_object* v___f_229_; lean_object* v___x_230_; 
v_toCold_224_ = lean_ctor_get(v___y_145_, 0);
v_ref_225_ = lean_ctor_get(v___y_145_, 2);
v_suppressElabErrors_226_ = lean_ctor_get_uint8(v___y_145_, sizeof(void*)*3 + 2);
v_ref_227_ = l_Lean_replaceRef(v_ref_141_, v_ref_225_);
v___x_228_ = 0;
v___f_229_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___closed__1));
v___x_230_ = l_Lean_Syntax_getPos_x3f(v_ref_227_, v___x_228_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v___x_231_; 
v___x_231_ = lean_unsigned_to_nat(0u);
v___y_213_ = v_suppressElabErrors_226_;
v___y_214_ = v_toCold_224_;
v___y_215_ = v_ref_227_;
v___y_216_ = v___f_229_;
v___y_217_ = v___x_228_;
v___y_218_ = v___y_223_;
v___y_219_ = v___x_231_;
goto v___jp_212_;
}
else
{
lean_object* v_val_232_; 
v_val_232_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_val_232_);
lean_dec_ref_known(v___x_230_, 1);
v___y_213_ = v_suppressElabErrors_226_;
v___y_214_ = v_toCold_224_;
v___y_215_ = v_ref_227_;
v___y_216_ = v___f_229_;
v___y_217_ = v___x_228_;
v___y_218_ = v___y_223_;
v___y_219_ = v_val_232_;
goto v___jp_212_;
}
}
v___jp_233_:
{
uint8_t v___x_234_; uint8_t v___x_235_; 
v___x_234_ = 1;
v___x_235_ = l_Lean_instBEqMessageSeverity_beq(v_severity_143_, v___x_234_);
if (v___x_235_ == 0)
{
v___y_223_ = v_severity_143_;
goto v___jp_222_;
}
else
{
lean_object* v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_236_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_145_);
v___x_237_ = l_Lean_warningAsError;
v___x_238_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1_spec__5(v___x_236_, v___x_237_);
lean_dec_ref(v___x_236_);
if (v___x_238_ == 0)
{
v___y_223_ = v_severity_143_;
goto v___jp_222_;
}
else
{
uint8_t v___x_239_; 
v___x_239_ = 2;
v___y_223_ = v___x_239_;
goto v___jp_222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_245_, lean_object* v_msgData_246_, lean_object* v_severity_247_, lean_object* v_isSilent_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
uint8_t v_severity_boxed_252_; uint8_t v_isSilent_boxed_253_; lean_object* v_res_254_; 
v_severity_boxed_252_ = lean_unbox(v_severity_247_);
v_isSilent_boxed_253_ = lean_unbox(v_isSilent_248_);
v_res_254_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1(v_ref_245_, v_msgData_246_, v_severity_boxed_252_, v_isSilent_boxed_253_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v_ref_245_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0(lean_object* v_ref_255_, lean_object* v_msgData_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
uint8_t v___x_260_; uint8_t v___x_261_; lean_object* v___x_262_; 
v___x_260_ = 1;
v___x_261_ = 0;
v___x_262_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1(v_ref_255_, v_msgData_256_, v___x_260_, v___x_261_, v___y_257_, v___y_258_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0___boxed(lean_object* v_ref_263_, lean_object* v_msgData_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0(v_ref_263_, v_msgData_264_, v___y_265_, v___y_266_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v_ref_263_);
return v_res_268_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__1(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__0));
v___x_271_ = l_Lean_stringToMessageData(v___x_270_);
return v___x_271_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__3(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__2));
v___x_274_ = l_Lean_stringToMessageData(v___x_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0(lean_object* v_linterOption_275_, lean_object* v_stx_276_, lean_object* v_msg_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_name_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_299_; 
v_name_281_ = lean_ctor_get(v_linterOption_275_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v_linterOption_275_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; 
v_unused_300_ = lean_ctor_get(v_linterOption_275_, 1);
lean_dec(v_unused_300_);
v___x_283_ = v_linterOption_275_;
v_isShared_284_ = v_isSharedCheck_299_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_name_281_);
lean_dec(v_linterOption_275_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_299_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_288_; 
v___x_285_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__1, &l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__1_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__1);
lean_inc(v_name_281_);
v___x_286_ = l_Lean_MessageData_ofName(v_name_281_);
if (v_isShared_284_ == 0)
{
lean_ctor_set_tag(v___x_283_, 7);
lean_ctor_set(v___x_283_, 1, v___x_286_);
lean_ctor_set(v___x_283_, 0, v___x_285_);
v___x_288_ = v___x_283_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v___x_286_);
v___x_288_ = v_reuseFailAlloc_298_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v_disable_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_289_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__3, &l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__3_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___closed__3);
v___x_290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v_disable_291_ = l_Lean_MessageData_note(v___x_290_);
v___x_292_ = l_Lean_Linter_linterMessageTag;
v___x_293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_293_, 0, v_msg_277_);
lean_ctor_set(v___x_293_, 1, v_disable_291_);
v___x_294_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_292_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_295_, 0, v_name_281_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
lean_inc(v_stx_276_);
v___x_296_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_296_, 0, v_stx_276_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0(v_stx_276_, v___x_296_, v___y_278_, v___y_279_);
lean_dec(v_stx_276_);
return v___x_297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0___boxed(lean_object* v_linterOption_301_, lean_object* v_stx_302_, lean_object* v_msg_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0(v_linterOption_301_, v_stx_302_, v_msg_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
return v_res_307_;
}
}
static lean_object* _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__3(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__2));
v___x_313_ = l_Lean_stringToMessageData(v___x_312_);
return v___x_313_;
}
}
static lean_object* _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__7(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = ((lean_object*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__6));
v___x_320_ = l_Lean_MessageData_ofFormat(v___x_319_);
return v___x_320_;
}
}
static lean_object* _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__13(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__12));
v___x_331_ = l_Lean_stringToMessageData(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__14(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_obj_once(&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__13, &l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__13_once, _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__13);
v___x_333_ = l_Lean_MessageData_note(v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__16(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__15));
v___x_336_ = l_Lean_stringToMessageData(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__18(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = ((lean_object*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__17));
v___x_339_ = l_Lean_stringToMessageData(v___x_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused(lean_object* v_stx_340_, lean_object* v_i_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
lean_object* v___y_346_; lean_object* v___y_347_; lean_object* v_hint_348_; lean_object* v___y_349_; lean_object* v___y_350_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_simpArgs_356_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_354_ = lean_box(0);
v___x_355_ = ((lean_object*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__1));
v_simpArgs_356_ = l_Lean_Elab_Tactic_getSimpParams(v_stx_340_);
v___x_407_ = lean_array_get_size(v_simpArgs_356_);
v___x_408_ = lean_nat_dec_lt(v_i_341_, v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
lean_dec_ref(v_simpArgs_356_);
v___x_409_ = lean_obj_once(&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__16, &l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__16_once, _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__16);
v___x_410_ = l_Nat_reprFast(v_i_341_);
v___x_411_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
v___x_412_ = l_Lean_MessageData_ofFormat(v___x_411_);
v___x_413_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_409_);
lean_ctor_set(v___x_413_, 1, v___x_412_);
v___x_414_ = lean_obj_once(&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__18, &l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__18_once, _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__18);
v___x_415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = l_Lean_MessageData_ofSyntax(v_stx_340_);
v___x_417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_415_);
lean_ctor_set(v___x_417_, 1, v___x_416_);
v___x_418_ = l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___redArg(v___x_417_, v_a_342_, v_a_343_);
return v___x_418_;
}
else
{
v___y_358_ = v_a_342_;
v___y_359_ = v_a_343_;
goto v___jp_357_;
}
v___jp_345_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_351_ = l_Lean_Elab_Tactic_linter_unusedSimpArgs;
v___x_352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_352_, 0, v___y_347_);
lean_ctor_set(v___x_352_, 1, v_hint_348_);
v___x_353_ = l_Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0(v___x_351_, v___y_346_, v___x_352_, v___y_349_, v___y_350_);
return v___x_353_;
}
v___jp_357_:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_argStx_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v_msg_366_; lean_object* v_otherArgs_367_; lean_object* v___x_368_; 
v___x_360_ = lean_array_get_size(v_simpArgs_356_);
v___x_361_ = lean_unsigned_to_nat(0u);
v_argStx_362_ = lean_array_get(v___x_354_, v_simpArgs_356_, v_i_341_);
v___x_363_ = lean_obj_once(&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__3, &l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__3_once, _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__3);
lean_inc(v_argStx_362_);
v___x_364_ = l_Lean_MessageData_ofSyntax(v_argStx_362_);
v___x_365_ = l_Lean_indentD(v___x_364_);
v_msg_366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msg_366_, 0, v___x_363_);
lean_ctor_set(v_msg_366_, 1, v___x_365_);
v_otherArgs_367_ = ((lean_object*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__4));
v___x_368_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___redArg(v___x_360_, v_i_341_, v_simpArgs_356_, v___x_361_, v_otherArgs_367_);
lean_dec_ref(v_simpArgs_356_);
lean_dec(v_i_341_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; uint8_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; lean_object* v___x_382_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_a_369_);
lean_dec_ref_known(v___x_368_, 1);
lean_inc(v_stx_340_);
v___x_370_ = l_Lean_Elab_Tactic_setSimpParams(v_stx_340_, v_a_369_);
lean_dec(v_a_369_);
v___x_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_355_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = lean_box(0);
v___x_373_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_373_, 0, v___x_371_);
lean_ctor_set(v___x_373_, 1, v___x_372_);
lean_ctor_set(v___x_373_, 2, v___x_372_);
lean_ctor_set(v___x_373_, 3, v___x_372_);
lean_ctor_set(v___x_373_, 4, v___x_372_);
lean_ctor_set(v___x_373_, 5, v___x_372_);
v___x_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_374_, 0, v_stx_340_);
v___x_375_ = 4;
v___x_376_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_376_, 0, v___x_373_);
lean_ctor_set(v___x_376_, 1, v___x_374_);
lean_ctor_set(v___x_376_, 2, v___x_372_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3, v___x_375_);
v___x_377_ = lean_obj_once(&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__7, &l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__7_once, _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__7);
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = lean_mk_empty_array_with_capacity(v___x_378_);
v___x_380_ = lean_array_push(v___x_379_, v___x_376_);
v___x_381_ = 0;
v___x_382_ = l_Lean_MessageData_hint(v___x_377_, v___x_380_, v___x_372_, v___x_372_, v___x_381_, v___y_358_, v___y_359_);
lean_dec_ref(v___x_380_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v_a_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; 
v_a_383_ = lean_ctor_get(v___x_382_, 0);
lean_inc(v_a_383_);
lean_dec_ref_known(v___x_382_, 1);
lean_inc(v_argStx_362_);
v___x_384_ = l_Lean_Syntax_getKind(v_argStx_362_);
v___x_385_ = ((lean_object*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__11));
v___x_386_ = lean_name_eq(v___x_384_, v___x_385_);
lean_dec(v___x_384_);
if (v___x_386_ == 0)
{
v___y_346_ = v_argStx_362_;
v___y_347_ = v_msg_366_;
v_hint_348_ = v_a_383_;
v___y_349_ = v___y_358_;
v___y_350_ = v___y_359_;
goto v___jp_345_;
}
else
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = l_Lean_Syntax_getArg(v_argStx_362_, v___x_378_);
v___x_388_ = l_Lean_Syntax_isNone(v___x_387_);
lean_dec(v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_obj_once(&l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__14, &l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__14_once, _init_l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___closed__14);
v___x_390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_390_, 0, v_a_383_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___y_346_ = v_argStx_362_;
v___y_347_ = v_msg_366_;
v_hint_348_ = v___x_390_;
v___y_349_ = v___y_358_;
v___y_350_ = v___y_359_;
goto v___jp_345_;
}
else
{
v___y_346_ = v_argStx_362_;
v___y_347_ = v_msg_366_;
v_hint_348_ = v_a_383_;
v___y_349_ = v___y_358_;
v___y_350_ = v___y_359_;
goto v___jp_345_;
}
}
}
else
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
lean_dec_ref_known(v_msg_366_, 2);
lean_dec(v_argStx_362_);
v_a_391_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___x_382_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_382_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec_ref_known(v_msg_366_, 2);
lean_dec(v_argStx_362_);
lean_dec(v_stx_340_);
v_a_399_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_368_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_368_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___boxed(lean_object* v_stx_419_, lean_object* v_i_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused(v_stx_419_, v_i_420_, v_a_421_, v_a_422_);
lean_dec(v_a_422_);
lean_dec_ref(v_a_421_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1(lean_object* v_upperBound_425_, lean_object* v_i_426_, lean_object* v_simpArgs_427_, lean_object* v_inst_428_, lean_object* v_R_429_, lean_object* v_a_430_, lean_object* v_b_431_, lean_object* v_c_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___redArg(v_upperBound_425_, v_i_426_, v_simpArgs_427_, v_a_430_, v_b_431_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1___boxed(lean_object* v_upperBound_437_, lean_object* v_i_438_, lean_object* v_simpArgs_439_, lean_object* v_inst_440_, lean_object* v_R_441_, lean_object* v_a_442_, lean_object* v_b_443_, lean_object* v_c_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__1(v_upperBound_437_, v_i_438_, v_simpArgs_439_, v_inst_440_, v_R_441_, v_a_442_, v_b_443_, v_c_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec_ref(v_simpArgs_439_);
lean_dec(v_i_438_);
lean_dec(v_upperBound_437_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2(lean_object* v_00_u03b1_449_, lean_object* v_msg_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___redArg(v_msg_450_, v___y_451_, v___y_452_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2___boxed(lean_object* v_00_u03b1_455_, lean_object* v_msg_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2(v_00_u03b1_455_, v_msg_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___redArg(lean_object* v_upperBound_461_, lean_object* v_snd_462_, lean_object* v_fst_463_, lean_object* v_a_464_, lean_object* v_b_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v_a_470_; uint8_t v___x_474_; 
v___x_474_ = lean_nat_dec_lt(v_a_464_, v_upperBound_461_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; 
lean_dec(v_a_464_);
lean_dec(v_fst_463_);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v_b_465_);
return v___x_475_;
}
else
{
uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_476_ = 0;
v___x_477_ = lean_box(0);
v___x_478_ = lean_box(v___x_476_);
v___x_479_ = lean_array_get(v___x_478_, v_snd_462_, v_a_464_);
lean_dec(v___x_478_);
v___x_480_ = lean_unbox(v___x_479_);
lean_dec(v___x_479_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; 
lean_inc(v_a_464_);
lean_inc(v_fst_463_);
v___x_481_ = lean_alloc_closure((void*)(l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused___boxed), 5, 2);
lean_closure_set(v___x_481_, 0, v_fst_463_);
lean_closure_set(v___x_481_, 1, v_a_464_);
v___x_482_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_481_, v___y_466_, v___y_467_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_dec_ref_known(v___x_482_, 1);
v_a_470_ = v___x_477_;
goto v___jp_469_;
}
else
{
lean_dec(v_a_464_);
lean_dec(v_fst_463_);
return v___x_482_;
}
}
else
{
v_a_470_ = v___x_477_;
goto v___jp_469_;
}
}
v___jp_469_:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_unsigned_to_nat(1u);
v___x_472_ = lean_nat_add(v_a_464_, v___x_471_);
lean_dec(v_a_464_);
v_a_464_ = v___x_472_;
v_b_465_ = v_a_470_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___redArg___boxed(lean_object* v_upperBound_483_, lean_object* v_snd_484_, lean_object* v_fst_485_, lean_object* v_a_486_, lean_object* v_b_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___redArg(v_upperBound_483_, v_snd_484_, v_fst_485_, v_a_486_, v_b_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec_ref(v_snd_484_);
lean_dec(v_upperBound_483_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__8(lean_object* v_as_492_, size_t v_sz_493_, size_t v_i_494_, lean_object* v_b_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
uint8_t v___x_499_; 
v___x_499_ = lean_usize_dec_lt(v_i_494_, v_sz_493_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; 
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v_b_495_);
return v___x_500_;
}
else
{
lean_object* v_a_501_; lean_object* v_snd_502_; lean_object* v_fst_503_; lean_object* v_snd_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_a_501_ = lean_array_uget_borrowed(v_as_492_, v_i_494_);
v_snd_502_ = lean_ctor_get(v_a_501_, 1);
v_fst_503_ = lean_ctor_get(v_snd_502_, 0);
v_snd_504_ = lean_ctor_get(v_snd_502_, 1);
v___x_505_ = lean_box(0);
v___x_506_ = lean_array_get_size(v_snd_504_);
v___x_507_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_503_);
v___x_508_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___redArg(v___x_506_, v_snd_504_, v_fst_503_, v___x_507_, v___x_505_, v___y_496_, v___y_497_);
if (lean_obj_tag(v___x_508_) == 0)
{
size_t v___x_509_; size_t v___x_510_; 
lean_dec_ref_known(v___x_508_, 1);
v___x_509_ = ((size_t)1ULL);
v___x_510_ = lean_usize_add(v_i_494_, v___x_509_);
v_i_494_ = v___x_510_;
v_b_495_ = v___x_505_;
goto _start;
}
else
{
return v___x_508_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__8___boxed(lean_object* v_as_512_, lean_object* v_sz_513_, lean_object* v_i_514_, lean_object* v_b_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
size_t v_sz_boxed_519_; size_t v_i_boxed_520_; lean_object* v_res_521_; 
v_sz_boxed_519_ = lean_unbox_usize(v_sz_513_);
lean_dec(v_sz_513_);
v_i_boxed_520_ = lean_unbox_usize(v_i_514_);
lean_dec(v_i_514_);
v_res_521_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__8(v_as_512_, v_sz_boxed_519_, v_i_boxed_520_, v_b_515_, v___y_516_, v___y_517_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
lean_dec_ref(v_as_512_);
return v_res_521_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___lam__0(lean_object* v_x1_522_, lean_object* v_x2_523_){
_start:
{
lean_object* v_fst_524_; lean_object* v_fst_525_; lean_object* v_start_526_; lean_object* v_start_527_; lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; 
v_fst_524_ = lean_ctor_get(v_x1_522_, 0);
v_fst_525_ = lean_ctor_get(v_x2_523_, 0);
v_start_526_ = lean_ctor_get(v_fst_524_, 0);
v_start_527_ = lean_ctor_get(v_fst_525_, 0);
v___x_528_ = lean_unsigned_to_nat(1u);
v___x_529_ = lean_nat_add(v_start_526_, v___x_528_);
v___x_530_ = lean_nat_dec_le(v___x_529_, v_start_527_);
lean_dec(v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___lam__0___boxed(lean_object* v_x1_531_, lean_object* v_x2_532_){
_start:
{
uint8_t v_res_533_; lean_object* v_r_534_; 
v_res_533_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___lam__0(v_x1_531_, v_x2_532_);
lean_dec_ref(v_x2_532_);
lean_dec_ref(v_x1_531_);
v_r_534_ = lean_box(v_res_533_);
return v_r_534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___redArg(lean_object* v_hi_535_, lean_object* v_pivot_536_, lean_object* v_as_537_, lean_object* v_i_538_, lean_object* v_k_539_){
_start:
{
uint8_t v___x_540_; 
v___x_540_ = lean_nat_dec_lt(v_k_539_, v_hi_535_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; 
lean_dec(v_k_539_);
v___x_541_ = lean_array_fswap(v_as_537_, v_i_538_, v_hi_535_);
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v_i_538_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
return v___x_542_;
}
else
{
lean_object* v___x_543_; lean_object* v_fst_544_; lean_object* v_fst_545_; lean_object* v_start_546_; lean_object* v_start_547_; lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_543_ = lean_array_fget_borrowed(v_as_537_, v_k_539_);
v_fst_544_ = lean_ctor_get(v___x_543_, 0);
v_fst_545_ = lean_ctor_get(v_pivot_536_, 0);
v_start_546_ = lean_ctor_get(v_fst_544_, 0);
v_start_547_ = lean_ctor_get(v_fst_545_, 0);
v___x_548_ = lean_unsigned_to_nat(1u);
v___x_549_ = lean_nat_add(v_start_546_, v___x_548_);
v___x_550_ = lean_nat_dec_le(v___x_549_, v_start_547_);
lean_dec(v___x_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; 
v___x_551_ = lean_nat_add(v_k_539_, v___x_548_);
lean_dec(v_k_539_);
v_k_539_ = v___x_551_;
goto _start;
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_553_ = lean_array_fswap(v_as_537_, v_i_538_, v_k_539_);
v___x_554_ = lean_nat_add(v_i_538_, v___x_548_);
lean_dec(v_i_538_);
v___x_555_ = lean_nat_add(v_k_539_, v___x_548_);
lean_dec(v_k_539_);
v_as_537_ = v___x_553_;
v_i_538_ = v___x_554_;
v_k_539_ = v___x_555_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___redArg___boxed(lean_object* v_hi_557_, lean_object* v_pivot_558_, lean_object* v_as_559_, lean_object* v_i_560_, lean_object* v_k_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___redArg(v_hi_557_, v_pivot_558_, v_as_559_, v_i_560_, v_k_561_);
lean_dec_ref(v_pivot_558_);
lean_dec(v_hi_557_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg(lean_object* v_n_563_, lean_object* v_as_564_, lean_object* v_lo_565_, lean_object* v_hi_566_){
_start:
{
lean_object* v___y_568_; uint8_t v___x_578_; 
v___x_578_ = lean_nat_dec_lt(v_lo_565_, v_hi_566_);
if (v___x_578_ == 0)
{
lean_dec(v_lo_565_);
return v_as_564_;
}
else
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v_mid_581_; lean_object* v___y_583_; lean_object* v___y_589_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_579_ = lean_nat_add(v_lo_565_, v_hi_566_);
v___x_580_ = lean_unsigned_to_nat(1u);
v_mid_581_ = lean_nat_shiftr(v___x_579_, v___x_580_);
lean_dec(v___x_579_);
v___x_594_ = lean_array_fget_borrowed(v_as_564_, v_mid_581_);
v___x_595_ = lean_array_fget_borrowed(v_as_564_, v_lo_565_);
v___x_596_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___lam__0(v___x_594_, v___x_595_);
if (v___x_596_ == 0)
{
v___y_589_ = v_as_564_;
goto v___jp_588_;
}
else
{
lean_object* v___x_597_; 
v___x_597_ = lean_array_fswap(v_as_564_, v_lo_565_, v_mid_581_);
v___y_589_ = v___x_597_;
goto v___jp_588_;
}
v___jp_582_:
{
lean_object* v___x_584_; lean_object* v___x_585_; uint8_t v___x_586_; 
v___x_584_ = lean_array_fget_borrowed(v___y_583_, v_mid_581_);
v___x_585_ = lean_array_fget_borrowed(v___y_583_, v_hi_566_);
v___x_586_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___lam__0(v___x_584_, v___x_585_);
if (v___x_586_ == 0)
{
lean_dec(v_mid_581_);
v___y_568_ = v___y_583_;
goto v___jp_567_;
}
else
{
lean_object* v___x_587_; 
v___x_587_ = lean_array_fswap(v___y_583_, v_mid_581_, v_hi_566_);
lean_dec(v_mid_581_);
v___y_568_ = v___x_587_;
goto v___jp_567_;
}
}
v___jp_588_:
{
lean_object* v___x_590_; lean_object* v___x_591_; uint8_t v___x_592_; 
v___x_590_ = lean_array_fget_borrowed(v___y_589_, v_hi_566_);
v___x_591_ = lean_array_fget_borrowed(v___y_589_, v_lo_565_);
v___x_592_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___lam__0(v___x_590_, v___x_591_);
if (v___x_592_ == 0)
{
v___y_583_ = v___y_589_;
goto v___jp_582_;
}
else
{
lean_object* v___x_593_; 
v___x_593_ = lean_array_fswap(v___y_589_, v_lo_565_, v_hi_566_);
v___y_583_ = v___x_593_;
goto v___jp_582_;
}
}
}
v___jp_567_:
{
lean_object* v_pivot_569_; lean_object* v___x_570_; lean_object* v_fst_571_; lean_object* v_snd_572_; uint8_t v___x_573_; 
v_pivot_569_ = lean_array_fget(v___y_568_, v_hi_566_);
lean_inc_n(v_lo_565_, 2);
v___x_570_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___redArg(v_hi_566_, v_pivot_569_, v___y_568_, v_lo_565_, v_lo_565_);
lean_dec(v_pivot_569_);
v_fst_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_fst_571_);
v_snd_572_ = lean_ctor_get(v___x_570_, 1);
lean_inc(v_snd_572_);
lean_dec_ref(v___x_570_);
v___x_573_ = lean_nat_dec_le(v_hi_566_, v_fst_571_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_574_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg(v_n_563_, v_snd_572_, v_lo_565_, v_fst_571_);
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = lean_nat_add(v_fst_571_, v___x_575_);
lean_dec(v_fst_571_);
v_as_564_ = v___x_574_;
v_lo_565_ = v___x_576_;
goto _start;
}
else
{
lean_dec(v_fst_571_);
lean_dec(v_lo_565_);
return v_snd_572_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg___boxed(lean_object* v_n_598_, lean_object* v_as_599_, lean_object* v_lo_600_, lean_object* v_hi_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg(v_n_598_, v_as_599_, v_lo_600_, v_hi_601_);
lean_dec(v_hi_601_);
lean_dec(v_n_598_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_unusedSimpArgs_spec__10(lean_object* v_x_603_, lean_object* v_x_604_){
_start:
{
if (lean_obj_tag(v_x_604_) == 0)
{
return v_x_603_;
}
else
{
lean_object* v_key_605_; lean_object* v_value_606_; lean_object* v_tail_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v_key_605_ = lean_ctor_get(v_x_604_, 0);
v_value_606_ = lean_ctor_get(v_x_604_, 1);
v_tail_607_ = lean_ctor_get(v_x_604_, 2);
lean_inc(v_value_606_);
lean_inc(v_key_605_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v_key_605_);
lean_ctor_set(v___x_608_, 1, v_value_606_);
v___x_609_ = lean_array_push(v_x_603_, v___x_608_);
v_x_603_ = v___x_609_;
v_x_604_ = v_tail_607_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_unusedSimpArgs_spec__10___boxed(lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_unusedSimpArgs_spec__10(v_x_611_, v_x_612_);
lean_dec(v_x_612_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_unusedSimpArgs_spec__11(lean_object* v_as_614_, size_t v_i_615_, size_t v_stop_616_, lean_object* v_b_617_){
_start:
{
uint8_t v___x_618_; 
v___x_618_ = lean_usize_dec_eq(v_i_615_, v_stop_616_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_620_; size_t v___x_621_; size_t v___x_622_; 
v___x_619_ = lean_array_uget_borrowed(v_as_614_, v_i_615_);
v___x_620_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_unusedSimpArgs_spec__10(v_b_617_, v___x_619_);
v___x_621_ = ((size_t)1ULL);
v___x_622_ = lean_usize_add(v_i_615_, v___x_621_);
v_i_615_ = v___x_622_;
v_b_617_ = v___x_620_;
goto _start;
}
else
{
return v_b_617_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_unusedSimpArgs_spec__11___boxed(lean_object* v_as_624_, lean_object* v_i_625_, lean_object* v_stop_626_, lean_object* v_b_627_){
_start:
{
size_t v_i_boxed_628_; size_t v_stop_boxed_629_; lean_object* v_res_630_; 
v_i_boxed_628_ = lean_unbox_usize(v_i_625_);
lean_dec(v_i_625_);
v_stop_boxed_629_ = lean_unbox_usize(v_stop_626_);
lean_dec(v_stop_626_);
v_res_630_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_unusedSimpArgs_spec__11(v_as_624_, v_i_boxed_628_, v_stop_boxed_629_, v_b_627_);
lean_dec_ref(v_as_624_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___redArg(lean_object* v_o_631_, lean_object* v___y_632_){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v_env_636_; lean_object* v___x_637_; lean_object* v_toEnvExtension_638_; lean_object* v_asyncMode_639_; lean_object* v___x_640_; uint8_t v___x_641_; lean_object* v___x_642_; lean_object* v_merged_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_651_; 
v___x_634_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_635_ = lean_st_ref_get(v___y_632_);
v_env_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc_ref(v_env_636_);
lean_dec(v___x_635_);
v___x_637_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_638_ = lean_ctor_get(v___x_637_, 0);
v_asyncMode_639_ = lean_ctor_get(v_toEnvExtension_638_, 2);
v___x_640_ = lean_box(0);
v___x_641_ = 0;
v___x_642_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_634_, v___x_637_, v_env_636_, v_asyncMode_639_, v___x_640_, v___x_641_);
v_merged_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_651_ == 0)
{
lean_object* v_unused_652_; 
v_unused_652_ = lean_ctor_get(v___x_642_, 1);
lean_dec(v_unused_652_);
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_merged_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v_merged_643_);
lean_ctor_set(v___x_645_, 0, v_o_631_);
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_o_631_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v_merged_643_);
v___x_648_ = v_reuseFailAlloc_650_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_649_; 
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
return v___x_649_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___redArg___boxed(lean_object* v_o_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___redArg(v_o_653_, v___y_654_);
lean_dec(v___y_654_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0(lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v_scopes_662_; lean_object* v___x_663_; lean_object* v_opts_664_; lean_object* v___x_665_; 
v___x_660_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_661_ = lean_st_ref_get(v___y_658_);
v_scopes_662_ = lean_ctor_get(v___x_661_, 2);
lean_inc(v_scopes_662_);
lean_dec(v___x_661_);
v___x_663_ = l_List_head_x21___redArg(v___x_660_, v_scopes_662_);
lean_dec(v_scopes_662_);
v_opts_664_ = lean_ctor_get(v___x_663_, 1);
lean_inc_ref(v_opts_664_);
lean_dec(v___x_663_);
v___x_665_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___redArg(v_opts_664_, v___y_658_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0___boxed(lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0(v___y_666_, v___y_667_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___redArg(lean_object* v_a_670_, lean_object* v_x_671_){
_start:
{
if (lean_obj_tag(v_x_671_) == 0)
{
lean_object* v___x_672_; 
v___x_672_ = lean_box(0);
return v___x_672_;
}
else
{
lean_object* v_key_673_; lean_object* v_value_674_; lean_object* v_tail_675_; uint8_t v___x_676_; 
v_key_673_ = lean_ctor_get(v_x_671_, 0);
v_value_674_ = lean_ctor_get(v_x_671_, 1);
v_tail_675_ = lean_ctor_get(v_x_671_, 2);
v___x_676_ = l_Lean_Syntax_instBEqRange_beq(v_key_673_, v_a_670_);
if (v___x_676_ == 0)
{
v_x_671_ = v_tail_675_;
goto _start;
}
else
{
lean_object* v___x_678_; 
lean_inc(v_value_674_);
v___x_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_678_, 0, v_value_674_);
return v___x_678_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___redArg___boxed(lean_object* v_a_679_, lean_object* v_x_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___redArg(v_a_679_, v_x_680_);
lean_dec(v_x_680_);
lean_dec_ref(v_a_679_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___redArg(lean_object* v_m_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_buckets_684_; lean_object* v___x_685_; uint64_t v___x_686_; uint64_t v___x_687_; uint64_t v___x_688_; uint64_t v_fold_689_; uint64_t v___x_690_; uint64_t v___x_691_; uint64_t v___x_692_; size_t v___x_693_; size_t v___x_694_; size_t v___x_695_; size_t v___x_696_; size_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v_buckets_684_ = lean_ctor_get(v_m_682_, 1);
v___x_685_ = lean_array_get_size(v_buckets_684_);
v___x_686_ = l_Lean_Syntax_instHashableRange_hash(v_a_683_);
v___x_687_ = 32ULL;
v___x_688_ = lean_uint64_shift_right(v___x_686_, v___x_687_);
v_fold_689_ = lean_uint64_xor(v___x_686_, v___x_688_);
v___x_690_ = 16ULL;
v___x_691_ = lean_uint64_shift_right(v_fold_689_, v___x_690_);
v___x_692_ = lean_uint64_xor(v_fold_689_, v___x_691_);
v___x_693_ = lean_uint64_to_usize(v___x_692_);
v___x_694_ = lean_usize_of_nat(v___x_685_);
v___x_695_ = ((size_t)1ULL);
v___x_696_ = lean_usize_sub(v___x_694_, v___x_695_);
v___x_697_ = lean_usize_land(v___x_693_, v___x_696_);
v___x_698_ = lean_array_uget_borrowed(v_buckets_684_, v___x_697_);
v___x_699_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___redArg(v_a_683_, v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___redArg___boxed(lean_object* v_m_700_, lean_object* v_a_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___redArg(v_m_700_, v_a_701_);
lean_dec_ref(v_a_701_);
lean_dec_ref(v_m_700_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Linter_unusedSimpArgs_spec__3(lean_object* v_as_703_, lean_object* v_bs_704_, lean_object* v_i_705_, lean_object* v_cs_706_){
_start:
{
uint8_t v___y_708_; lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = lean_array_get_size(v_as_703_);
v___x_715_ = lean_nat_dec_lt(v_i_705_, v___x_714_);
if (v___x_715_ == 0)
{
lean_dec(v_i_705_);
return v_cs_706_;
}
else
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = lean_array_get_size(v_bs_704_);
v___x_717_ = lean_nat_dec_lt(v_i_705_, v___x_716_);
if (v___x_717_ == 0)
{
lean_dec(v_i_705_);
return v_cs_706_;
}
else
{
lean_object* v_a_718_; uint8_t v___x_719_; 
v_a_718_ = lean_array_fget_borrowed(v_as_703_, v_i_705_);
v___x_719_ = lean_unbox(v_a_718_);
if (v___x_719_ == 0)
{
lean_object* v_b_720_; uint8_t v___x_721_; 
v_b_720_ = lean_array_fget_borrowed(v_bs_704_, v_i_705_);
v___x_721_ = lean_unbox(v_b_720_);
v___y_708_ = v___x_721_;
goto v___jp_707_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_unbox(v_a_718_);
v___y_708_ = v___x_722_;
goto v___jp_707_;
}
}
}
v___jp_707_:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_709_ = lean_unsigned_to_nat(1u);
v___x_710_ = lean_nat_add(v_i_705_, v___x_709_);
lean_dec(v_i_705_);
v___x_711_ = lean_box(v___y_708_);
v___x_712_ = lean_array_push(v_cs_706_, v___x_711_);
v_i_705_ = v___x_710_;
v_cs_706_ = v___x_712_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Linter_unusedSimpArgs_spec__3___boxed(lean_object* v_as_723_, lean_object* v_bs_724_, lean_object* v_i_725_, lean_object* v_cs_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Array_zipWithMAux___at___00Lean_Linter_unusedSimpArgs_spec__3(v_as_723_, v_bs_724_, v_i_725_, v_cs_726_);
lean_dec_ref(v_bs_724_);
lean_dec_ref(v_as_723_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___redArg(lean_object* v_msgData_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; lean_object* v_env_732_; uint8_t v___x_733_; lean_object* v_env_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v_scopes_737_; lean_object* v___x_738_; lean_object* v_opts_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_731_ = lean_st_ref_get(v___y_729_);
v_env_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_env_732_);
lean_dec(v___x_731_);
v___x_733_ = 0;
v_env_734_ = l_Lean_Environment_setRecordingDeps(v_env_732_, v___x_733_);
v___x_735_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_736_ = lean_st_ref_get(v___y_729_);
v_scopes_737_ = lean_ctor_get(v___x_736_, 2);
lean_inc(v_scopes_737_);
lean_dec(v___x_736_);
v___x_738_ = l_List_head_x21___redArg(v___x_735_, v_scopes_737_);
lean_dec(v_scopes_737_);
v_opts_739_ = lean_ctor_get(v___x_738_, 1);
lean_inc_ref(v_opts_739_);
lean_dec(v___x_738_);
v___x_740_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__2);
v___x_741_ = lean_unsigned_to_nat(32u);
v___x_742_ = lean_mk_empty_array_with_capacity(v___x_741_);
lean_dec_ref(v___x_742_);
v___x_743_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__2_spec__3___closed__5);
v___x_744_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_744_, 0, v_env_734_);
lean_ctor_set(v___x_744_, 1, v___x_740_);
lean_ctor_set(v___x_744_, 2, v___x_743_);
lean_ctor_set(v___x_744_, 3, v_opts_739_);
v___x_745_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
lean_ctor_set(v___x_745_, 1, v_msgData_728_);
v___x_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___redArg___boxed(lean_object* v_msgData_747_, lean_object* v___y_748_, lean_object* v___y_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___redArg(v_msgData_747_, v___y_748_);
lean_dec(v___y_748_);
return v_res_750_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_box(1);
v___x_752_ = l_Lean_MessageData_ofFormat(v___x_751_);
return v___x_752_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__3(void){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__2));
v___x_757_ = l_Lean_MessageData_ofFormat(v___x_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21(lean_object* v_x_758_, lean_object* v_x_759_){
_start:
{
if (lean_obj_tag(v_x_759_) == 0)
{
return v_x_758_;
}
else
{
lean_object* v_head_760_; lean_object* v_tail_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_783_; 
v_head_760_ = lean_ctor_get(v_x_759_, 0);
v_tail_761_ = lean_ctor_get(v_x_759_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v_x_759_);
if (v_isSharedCheck_783_ == 0)
{
v___x_763_ = v_x_759_;
v_isShared_764_ = v_isSharedCheck_783_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_tail_761_);
lean_inc(v_head_760_);
lean_dec(v_x_759_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_783_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v_before_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_781_; 
v_before_765_ = lean_ctor_get(v_head_760_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v_head_760_);
if (v_isSharedCheck_781_ == 0)
{
lean_object* v_unused_782_; 
v_unused_782_ = lean_ctor_get(v_head_760_, 1);
lean_dec(v_unused_782_);
v___x_767_ = v_head_760_;
v_isShared_768_ = v_isSharedCheck_781_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_before_765_);
lean_dec(v_head_760_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_781_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_769_; lean_object* v___x_771_; 
v___x_769_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0);
if (v_isShared_768_ == 0)
{
lean_ctor_set_tag(v___x_767_, 7);
lean_ctor_set(v___x_767_, 1, v___x_769_);
lean_ctor_set(v___x_767_, 0, v_x_758_);
v___x_771_ = v___x_767_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_x_758_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v___x_769_);
v___x_771_ = v_reuseFailAlloc_780_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_772_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__3);
if (v_isShared_764_ == 0)
{
lean_ctor_set_tag(v___x_763_, 7);
lean_ctor_set(v___x_763_, 1, v___x_772_);
lean_ctor_set(v___x_763_, 0, v___x_771_);
v___x_774_ = v___x_763_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v___x_772_);
v___x_774_ = v_reuseFailAlloc_779_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = l_Lean_MessageData_ofSyntax(v_before_765_);
v___x_776_ = l_Lean_indentD(v___x_775_);
v___x_777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_774_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
v_x_758_ = v___x_777_;
v_x_759_ = v_tail_761_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__1));
v___x_788_ = l_Lean_MessageData_ofFormat(v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg(lean_object* v_msgData_789_, lean_object* v_macroStack_790_, lean_object* v___y_791_){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v_scopes_795_; lean_object* v___x_796_; lean_object* v_opts_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_793_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_794_ = lean_st_ref_get(v___y_791_);
v_scopes_795_ = lean_ctor_get(v___x_794_, 2);
lean_inc(v_scopes_795_);
lean_dec(v___x_794_);
v___x_796_ = l_List_head_x21___redArg(v___x_793_, v_scopes_795_);
lean_dec(v_scopes_795_);
v_opts_797_ = lean_ctor_get(v___x_796_, 1);
lean_inc_ref(v_opts_797_);
lean_dec(v___x_796_);
v___x_798_ = l_Lean_Elab_pp_macroStack;
v___x_799_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_warnUnused_spec__0_spec__0_spec__1_spec__5(v_opts_797_, v___x_798_);
lean_dec_ref(v_opts_797_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; 
lean_dec(v_macroStack_790_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v_msgData_789_);
return v___x_800_;
}
else
{
if (lean_obj_tag(v_macroStack_790_) == 0)
{
lean_object* v___x_801_; 
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v_msgData_789_);
return v___x_801_;
}
else
{
lean_object* v_head_802_; lean_object* v_after_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_818_; 
v_head_802_ = lean_ctor_get(v_macroStack_790_, 0);
lean_inc(v_head_802_);
v_after_803_ = lean_ctor_get(v_head_802_, 1);
v_isSharedCheck_818_ = !lean_is_exclusive(v_head_802_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; 
v_unused_819_ = lean_ctor_get(v_head_802_, 0);
lean_dec(v_unused_819_);
v___x_805_ = v_head_802_;
v_isShared_806_ = v_isSharedCheck_818_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_after_803_);
lean_dec(v_head_802_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_818_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v___x_809_; 
v___x_807_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21___closed__0);
if (v_isShared_806_ == 0)
{
lean_ctor_set_tag(v___x_805_, 7);
lean_ctor_set(v___x_805_, 1, v___x_807_);
lean_ctor_set(v___x_805_, 0, v_msgData_789_);
v___x_809_ = v___x_805_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_msgData_789_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v___x_807_);
v___x_809_ = v_reuseFailAlloc_817_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v_msgData_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_810_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___closed__2);
v___x_811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_809_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = l_Lean_MessageData_ofSyntax(v_after_803_);
v___x_813_ = l_Lean_indentD(v___x_812_);
v_msgData_814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_814_, 0, v___x_811_);
lean_ctor_set(v_msgData_814_, 1, v___x_813_);
v___x_815_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12_spec__21(v_msgData_814_, v_macroStack_790_);
v___x_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
return v___x_816_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg___boxed(lean_object* v_msgData_820_, lean_object* v_macroStack_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg(v_msgData_820_, v_macroStack_821_, v___y_822_);
lean_dec(v___y_822_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___redArg(lean_object* v_msg_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_Elab_Command_getRef___redArg(v___y_826_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v_macroStack_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v_a_834_; lean_object* v___x_835_; lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_844_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v___x_829_, 1);
v_macroStack_831_ = lean_ctor_get(v___y_826_, 4);
v___x_832_ = l_Lean_Elab_getBetterRef(v_a_830_, v_macroStack_831_);
lean_dec(v_a_830_);
v___x_833_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___redArg(v_msg_825_, v___y_827_);
v_a_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_834_);
lean_dec_ref(v___x_833_);
lean_inc(v_macroStack_831_);
v___x_835_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg(v_a_834_, v_macroStack_831_, v___y_827_);
v_a_836_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_844_ == 0)
{
v___x_838_ = v___x_835_;
v_isShared_839_ = v_isSharedCheck_844_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_835_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_844_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_832_);
lean_ctor_set(v___x_840_, 1, v_a_836_);
if (v_isShared_839_ == 0)
{
lean_ctor_set_tag(v___x_838_, 1);
lean_ctor_set(v___x_838_, 0, v___x_840_);
v___x_842_ = v___x_838_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec_ref(v_msg_825_);
v_a_845_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_829_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_829_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___redArg___boxed(lean_object* v_msg_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___redArg(v_msg_853_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___redArg(lean_object* v_ref_858_, lean_object* v_msg_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_Lean_Elab_Command_getRef___redArg(v___y_860_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v_fileName_865_; lean_object* v_fileMap_866_; lean_object* v_currRecDepth_867_; lean_object* v_cmdPos_868_; lean_object* v_macroStack_869_; lean_object* v_quotContext_x3f_870_; lean_object* v_currMacroScope_871_; lean_object* v_snap_x3f_872_; lean_object* v_cancelTk_x3f_873_; uint8_t v_suppressElabErrors_874_; uint8_t v_checkDeprecated_875_; lean_object* v_ref_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v_fileName_865_ = lean_ctor_get(v___y_860_, 0);
v_fileMap_866_ = lean_ctor_get(v___y_860_, 1);
v_currRecDepth_867_ = lean_ctor_get(v___y_860_, 2);
v_cmdPos_868_ = lean_ctor_get(v___y_860_, 3);
v_macroStack_869_ = lean_ctor_get(v___y_860_, 4);
v_quotContext_x3f_870_ = lean_ctor_get(v___y_860_, 5);
v_currMacroScope_871_ = lean_ctor_get(v___y_860_, 6);
v_snap_x3f_872_ = lean_ctor_get(v___y_860_, 8);
v_cancelTk_x3f_873_ = lean_ctor_get(v___y_860_, 9);
v_suppressElabErrors_874_ = lean_ctor_get_uint8(v___y_860_, sizeof(void*)*10);
v_checkDeprecated_875_ = lean_ctor_get_uint8(v___y_860_, sizeof(void*)*10 + 1);
v_ref_876_ = l_Lean_replaceRef(v_ref_858_, v_a_864_);
lean_dec(v_a_864_);
lean_inc(v_cancelTk_x3f_873_);
lean_inc(v_snap_x3f_872_);
lean_inc(v_currMacroScope_871_);
lean_inc(v_quotContext_x3f_870_);
lean_inc(v_macroStack_869_);
lean_inc(v_cmdPos_868_);
lean_inc(v_currRecDepth_867_);
lean_inc_ref(v_fileMap_866_);
lean_inc_ref(v_fileName_865_);
v___x_877_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_877_, 0, v_fileName_865_);
lean_ctor_set(v___x_877_, 1, v_fileMap_866_);
lean_ctor_set(v___x_877_, 2, v_currRecDepth_867_);
lean_ctor_set(v___x_877_, 3, v_cmdPos_868_);
lean_ctor_set(v___x_877_, 4, v_macroStack_869_);
lean_ctor_set(v___x_877_, 5, v_quotContext_x3f_870_);
lean_ctor_set(v___x_877_, 6, v_currMacroScope_871_);
lean_ctor_set(v___x_877_, 7, v_ref_876_);
lean_ctor_set(v___x_877_, 8, v_snap_x3f_872_);
lean_ctor_set(v___x_877_, 9, v_cancelTk_x3f_873_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*10, v_suppressElabErrors_874_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*10 + 1, v_checkDeprecated_875_);
v___x_878_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___redArg(v_msg_859_, v___x_877_, v___y_861_);
lean_dec_ref_known(v___x_877_, 10);
return v___x_878_;
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
lean_dec_ref(v_msg_859_);
v_a_879_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_863_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_863_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
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
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___redArg___boxed(lean_object* v_ref_887_, lean_object* v_msg_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___redArg(v_ref_887_, v_msg_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v_ref_887_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4_spec__15___redArg(lean_object* v_x_893_, lean_object* v_x_894_){
_start:
{
if (lean_obj_tag(v_x_894_) == 0)
{
return v_x_893_;
}
else
{
lean_object* v_key_895_; lean_object* v_value_896_; lean_object* v_tail_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_920_; 
v_key_895_ = lean_ctor_get(v_x_894_, 0);
v_value_896_ = lean_ctor_get(v_x_894_, 1);
v_tail_897_ = lean_ctor_get(v_x_894_, 2);
v_isSharedCheck_920_ = !lean_is_exclusive(v_x_894_);
if (v_isSharedCheck_920_ == 0)
{
v___x_899_ = v_x_894_;
v_isShared_900_ = v_isSharedCheck_920_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_tail_897_);
lean_inc(v_value_896_);
lean_inc(v_key_895_);
lean_dec(v_x_894_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_920_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; uint64_t v___x_902_; uint64_t v___x_903_; uint64_t v___x_904_; uint64_t v_fold_905_; uint64_t v___x_906_; uint64_t v___x_907_; uint64_t v___x_908_; size_t v___x_909_; size_t v___x_910_; size_t v___x_911_; size_t v___x_912_; size_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_916_; 
v___x_901_ = lean_array_get_size(v_x_893_);
v___x_902_ = l_Lean_Syntax_instHashableRange_hash(v_key_895_);
v___x_903_ = 32ULL;
v___x_904_ = lean_uint64_shift_right(v___x_902_, v___x_903_);
v_fold_905_ = lean_uint64_xor(v___x_902_, v___x_904_);
v___x_906_ = 16ULL;
v___x_907_ = lean_uint64_shift_right(v_fold_905_, v___x_906_);
v___x_908_ = lean_uint64_xor(v_fold_905_, v___x_907_);
v___x_909_ = lean_uint64_to_usize(v___x_908_);
v___x_910_ = lean_usize_of_nat(v___x_901_);
v___x_911_ = ((size_t)1ULL);
v___x_912_ = lean_usize_sub(v___x_910_, v___x_911_);
v___x_913_ = lean_usize_land(v___x_909_, v___x_912_);
v___x_914_ = lean_array_uget_borrowed(v_x_893_, v___x_913_);
lean_inc(v___x_914_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 2, v___x_914_);
v___x_916_ = v___x_899_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_key_895_);
lean_ctor_set(v_reuseFailAlloc_919_, 1, v_value_896_);
lean_ctor_set(v_reuseFailAlloc_919_, 2, v___x_914_);
v___x_916_ = v_reuseFailAlloc_919_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
lean_object* v___x_917_; 
v___x_917_ = lean_array_uset(v_x_893_, v___x_913_, v___x_916_);
v_x_893_ = v___x_917_;
v_x_894_ = v_tail_897_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4___redArg(lean_object* v_i_921_, lean_object* v_source_922_, lean_object* v_target_923_){
_start:
{
lean_object* v___x_924_; uint8_t v___x_925_; 
v___x_924_ = lean_array_get_size(v_source_922_);
v___x_925_ = lean_nat_dec_lt(v_i_921_, v___x_924_);
if (v___x_925_ == 0)
{
lean_dec_ref(v_source_922_);
lean_dec(v_i_921_);
return v_target_923_;
}
else
{
lean_object* v_es_926_; lean_object* v___x_927_; lean_object* v_source_928_; lean_object* v_target_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_es_926_ = lean_array_fget(v_source_922_, v_i_921_);
v___x_927_ = lean_box(0);
v_source_928_ = lean_array_fset(v_source_922_, v_i_921_, v___x_927_);
v_target_929_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4_spec__15___redArg(v_target_923_, v_es_926_);
v___x_930_ = lean_unsigned_to_nat(1u);
v___x_931_ = lean_nat_add(v_i_921_, v___x_930_);
lean_dec(v_i_921_);
v_i_921_ = v___x_931_;
v_source_922_ = v_source_928_;
v_target_923_ = v_target_929_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3___redArg(lean_object* v_data_933_){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v_nbuckets_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_934_ = lean_array_get_size(v_data_933_);
v___x_935_ = lean_unsigned_to_nat(2u);
v_nbuckets_936_ = lean_nat_mul(v___x_934_, v___x_935_);
v___x_937_ = lean_unsigned_to_nat(0u);
v___x_938_ = lean_box(0);
v___x_939_ = lean_mk_array(v_nbuckets_936_, v___x_938_);
v___x_940_ = lean_array_propagate_mark(v_data_933_, v___x_939_);
v___x_941_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4___redArg(v___x_937_, v_data_933_, v___x_940_);
return v___x_941_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___redArg(lean_object* v_a_942_, lean_object* v_x_943_){
_start:
{
if (lean_obj_tag(v_x_943_) == 0)
{
uint8_t v___x_944_; 
v___x_944_ = 0;
return v___x_944_;
}
else
{
lean_object* v_key_945_; lean_object* v_tail_946_; uint8_t v___x_947_; 
v_key_945_ = lean_ctor_get(v_x_943_, 0);
v_tail_946_ = lean_ctor_get(v_x_943_, 2);
v___x_947_ = l_Lean_Syntax_instBEqRange_beq(v_key_945_, v_a_942_);
if (v___x_947_ == 0)
{
v_x_943_ = v_tail_946_;
goto _start;
}
else
{
return v___x_947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___redArg___boxed(lean_object* v_a_949_, lean_object* v_x_950_){
_start:
{
uint8_t v_res_951_; lean_object* v_r_952_; 
v_res_951_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___redArg(v_a_949_, v_x_950_);
lean_dec(v_x_950_);
lean_dec_ref(v_a_949_);
v_r_952_ = lean_box(v_res_951_);
return v_r_952_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__4___redArg(lean_object* v_a_953_, lean_object* v_b_954_, lean_object* v_x_955_){
_start:
{
if (lean_obj_tag(v_x_955_) == 0)
{
lean_dec(v_b_954_);
lean_dec_ref(v_a_953_);
return v_x_955_;
}
else
{
lean_object* v_key_956_; lean_object* v_value_957_; lean_object* v_tail_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_970_; 
v_key_956_ = lean_ctor_get(v_x_955_, 0);
v_value_957_ = lean_ctor_get(v_x_955_, 1);
v_tail_958_ = lean_ctor_get(v_x_955_, 2);
v_isSharedCheck_970_ = !lean_is_exclusive(v_x_955_);
if (v_isSharedCheck_970_ == 0)
{
v___x_960_ = v_x_955_;
v_isShared_961_ = v_isSharedCheck_970_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_tail_958_);
lean_inc(v_value_957_);
lean_inc(v_key_956_);
lean_dec(v_x_955_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_970_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
uint8_t v___x_962_; 
v___x_962_ = l_Lean_Syntax_instBEqRange_beq(v_key_956_, v_a_953_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_963_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__4___redArg(v_a_953_, v_b_954_, v_tail_958_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 2, v___x_963_);
v___x_965_ = v___x_960_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_key_956_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v_value_957_);
lean_ctor_set(v_reuseFailAlloc_966_, 2, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
else
{
lean_object* v___x_968_; 
lean_dec(v_value_957_);
lean_dec(v_key_956_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 1, v_b_954_);
lean_ctor_set(v___x_960_, 0, v_a_953_);
v___x_968_ = v___x_960_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_953_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_b_954_);
lean_ctor_set(v_reuseFailAlloc_969_, 2, v_tail_958_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1___redArg(lean_object* v_m_971_, lean_object* v_a_972_, lean_object* v_b_973_){
_start:
{
lean_object* v_size_974_; lean_object* v_buckets_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_1018_; 
v_size_974_ = lean_ctor_get(v_m_971_, 0);
v_buckets_975_ = lean_ctor_get(v_m_971_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_m_971_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_977_ = v_m_971_;
v_isShared_978_ = v_isSharedCheck_1018_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_buckets_975_);
lean_inc(v_size_974_);
lean_dec(v_m_971_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_1018_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; uint64_t v___x_980_; uint64_t v___x_981_; uint64_t v___x_982_; uint64_t v_fold_983_; uint64_t v___x_984_; uint64_t v___x_985_; uint64_t v___x_986_; size_t v___x_987_; size_t v___x_988_; size_t v___x_989_; size_t v___x_990_; size_t v___x_991_; lean_object* v_bkt_992_; uint8_t v___x_993_; 
v___x_979_ = lean_array_get_size(v_buckets_975_);
v___x_980_ = l_Lean_Syntax_instHashableRange_hash(v_a_972_);
v___x_981_ = 32ULL;
v___x_982_ = lean_uint64_shift_right(v___x_980_, v___x_981_);
v_fold_983_ = lean_uint64_xor(v___x_980_, v___x_982_);
v___x_984_ = 16ULL;
v___x_985_ = lean_uint64_shift_right(v_fold_983_, v___x_984_);
v___x_986_ = lean_uint64_xor(v_fold_983_, v___x_985_);
v___x_987_ = lean_uint64_to_usize(v___x_986_);
v___x_988_ = lean_usize_of_nat(v___x_979_);
v___x_989_ = ((size_t)1ULL);
v___x_990_ = lean_usize_sub(v___x_988_, v___x_989_);
v___x_991_ = lean_usize_land(v___x_987_, v___x_990_);
v_bkt_992_ = lean_array_uget_borrowed(v_buckets_975_, v___x_991_);
v___x_993_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___redArg(v_a_972_, v_bkt_992_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; lean_object* v_size_x27_995_; lean_object* v___x_996_; lean_object* v_buckets_x27_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; uint8_t v___x_1003_; 
v___x_994_ = lean_unsigned_to_nat(1u);
v_size_x27_995_ = lean_nat_add(v_size_974_, v___x_994_);
lean_dec(v_size_974_);
lean_inc(v_bkt_992_);
v___x_996_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_996_, 0, v_a_972_);
lean_ctor_set(v___x_996_, 1, v_b_973_);
lean_ctor_set(v___x_996_, 2, v_bkt_992_);
v_buckets_x27_997_ = lean_array_uset(v_buckets_975_, v___x_991_, v___x_996_);
v___x_998_ = lean_unsigned_to_nat(4u);
v___x_999_ = lean_nat_mul(v_size_x27_995_, v___x_998_);
v___x_1000_ = lean_unsigned_to_nat(3u);
v___x_1001_ = lean_nat_div(v___x_999_, v___x_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_array_get_size(v_buckets_x27_997_);
v___x_1003_ = lean_nat_dec_le(v___x_1001_, v___x_1002_);
lean_dec(v___x_1001_);
if (v___x_1003_ == 0)
{
lean_object* v_val_1004_; lean_object* v___x_1006_; 
v_val_1004_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3___redArg(v_buckets_x27_997_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 1, v_val_1004_);
lean_ctor_set(v___x_977_, 0, v_size_x27_995_);
v___x_1006_ = v___x_977_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_size_x27_995_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_val_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
else
{
lean_object* v___x_1009_; 
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 1, v_buckets_x27_997_);
lean_ctor_set(v___x_977_, 0, v_size_x27_995_);
v___x_1009_ = v___x_977_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_size_x27_995_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_buckets_x27_997_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
else
{
lean_object* v___x_1011_; lean_object* v_buckets_x27_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1016_; 
lean_inc(v_bkt_992_);
v___x_1011_ = lean_box(0);
v_buckets_x27_1012_ = lean_array_uset(v_buckets_975_, v___x_991_, v___x_1011_);
v___x_1013_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__4___redArg(v_a_972_, v_b_973_, v_bkt_992_);
v___x_1014_ = lean_array_uset(v_buckets_x27_1012_, v___x_991_, v___x_1013_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 1, v___x_1014_);
v___x_1016_ = v___x_977_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_size_974_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__1));
v___x_1023_ = l_Lean_stringToMessageData(v___x_1022_);
return v___x_1023_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__3));
v___x_1026_ = l_Lean_stringToMessageData(v___x_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1(lean_object* v___x_1039_, lean_object* v_val_1040_, lean_object* v_ci_1041_, lean_object* v_info_1042_, lean_object* v_x_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
if (lean_obj_tag(v_info_1042_) == 10)
{
lean_object* v_i_1047_; lean_object* v_stx_1048_; lean_object* v_value_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1143_; 
v_i_1047_ = lean_ctor_get(v_info_1042_, 0);
lean_inc_ref(v_i_1047_);
v_stx_1048_ = lean_ctor_get(v_i_1047_, 0);
v_value_1049_ = lean_ctor_get(v_i_1047_, 1);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_i_1047_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1051_ = v_i_1047_;
v_isShared_1052_ = v_isSharedCheck_1143_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_value_1049_);
lean_inc(v_stx_1048_);
lean_dec(v_i_1047_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1143_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1053_; 
v___x_1053_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_value_1049_, v___x_1039_);
lean_dec(v_value_1049_);
if (lean_obj_tag(v___x_1053_) == 1)
{
lean_object* v_val_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1133_; 
v_val_1054_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1056_ = v___x_1053_;
v_isShared_1057_ = v_isSharedCheck_1133_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_val_1054_);
lean_dec(v___x_1053_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1133_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lean_Elab_Info_range_x3f(v_info_1042_);
if (lean_obj_tag(v___x_1058_) == 1)
{
lean_object* v_val_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1128_; 
v_val_1059_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1061_ = v___x_1058_;
v_isShared_1062_ = v_isSharedCheck_1128_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_val_1059_);
lean_dec(v___x_1058_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1128_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v_maskAcc_1064_; lean_object* v___y_1075_; lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__6));
lean_inc(v_stx_1048_);
v___x_1116_ = l_Lean_Syntax_isOfKind(v_stx_1048_, v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___x_1117_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__8));
lean_inc(v_stx_1048_);
v___x_1118_ = l_Lean_Syntax_isOfKind(v_stx_1048_, v___x_1117_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1126_; 
lean_del_object(v___x_1061_);
lean_dec(v_val_1059_);
lean_del_object(v___x_1056_);
lean_dec(v_val_1054_);
lean_del_object(v___x_1051_);
lean_dec(v_stx_1048_);
v_isSharedCheck_1126_ = !lean_is_exclusive(v_info_1042_);
if (v_isSharedCheck_1126_ == 0)
{
lean_object* v_unused_1127_; 
v_unused_1127_ = lean_ctor_get(v_info_1042_, 0);
lean_dec(v_unused_1127_);
v___x_1120_ = v_info_1042_;
v_isShared_1121_ = v_isSharedCheck_1126_;
goto v_resetjp_1119_;
}
else
{
lean_dec(v_info_1042_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1126_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1122_; lean_object* v___x_1124_; 
v___x_1122_ = lean_box(0);
if (v_isShared_1121_ == 0)
{
lean_ctor_set_tag(v___x_1120_, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1122_);
v___x_1124_ = v___x_1120_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
else
{
goto v___jp_1079_;
}
}
else
{
goto v___jp_1079_;
}
v___jp_1063_:
{
lean_object* v___x_1065_; lean_object* v___x_1067_; 
v___x_1065_ = lean_st_ref_take(v_val_1040_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 1, v_maskAcc_1064_);
v___x_1067_ = v___x_1051_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_stx_1048_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_maskAcc_1064_);
v___x_1067_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1071_; 
v___x_1068_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1___redArg(v___x_1065_, v_val_1059_, v___x_1067_);
v___x_1069_ = lean_st_ref_put(v_val_1040_, v___x_1068_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set_tag(v___x_1061_, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1069_);
v___x_1071_ = v___x_1061_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
v___jp_1074_:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1076_ = lean_unsigned_to_nat(0u);
v___x_1077_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__0));
v___x_1078_ = l_Array_zipWithMAux___at___00Lean_Linter_unusedSimpArgs_spec__3(v_val_1054_, v___y_1075_, v___x_1076_, v___x_1077_);
lean_dec_ref(v___y_1075_);
lean_dec(v_val_1054_);
v_maskAcc_1064_ = v___x_1078_;
goto v___jp_1063_;
}
v___jp_1079_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_st_ref_get(v_val_1040_);
v___x_1081_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___redArg(v___x_1080_, v_val_1059_);
lean_dec(v___x_1080_);
if (lean_obj_tag(v___x_1081_) == 1)
{
lean_object* v_val_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1114_; 
v_val_1082_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1084_ = v___x_1081_;
v_isShared_1085_ = v_isSharedCheck_1114_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_val_1082_);
lean_dec(v___x_1081_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1114_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v_snd_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1112_; 
v_snd_1086_ = lean_ctor_get(v_val_1082_, 1);
v_isSharedCheck_1112_ = !lean_is_exclusive(v_val_1082_);
if (v_isSharedCheck_1112_ == 0)
{
lean_object* v_unused_1113_; 
v_unused_1113_ = lean_ctor_get(v_val_1082_, 0);
lean_dec(v_unused_1113_);
v___x_1088_ = v_val_1082_;
v_isShared_1089_ = v_isSharedCheck_1112_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_snd_1086_);
lean_dec(v_val_1082_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1112_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; uint8_t v___x_1092_; 
v___x_1090_ = lean_array_get_size(v_val_1054_);
v___x_1091_ = lean_array_get_size(v_snd_1086_);
v___x_1092_ = lean_nat_dec_eq(v___x_1090_, v___x_1091_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1093_ = l_Lean_Elab_Info_stx(v_info_1042_);
lean_dec_ref_known(v_info_1042_, 1);
v___x_1094_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__2);
v___x_1095_ = l_Nat_reprFast(v___x_1091_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set_tag(v___x_1084_, 3);
lean_ctor_set(v___x_1084_, 0, v___x_1095_);
v___x_1097_ = v___x_1084_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1098_ = l_Lean_MessageData_ofFormat(v___x_1097_);
if (v_isShared_1089_ == 0)
{
lean_ctor_set_tag(v___x_1088_, 7);
lean_ctor_set(v___x_1088_, 1, v___x_1098_);
lean_ctor_set(v___x_1088_, 0, v___x_1094_);
v___x_1100_ = v___x_1088_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1094_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v___x_1098_);
v___x_1100_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1101_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___closed__4);
v___x_1102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1100_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = l_Nat_reprFast(v___x_1090_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set_tag(v___x_1056_, 3);
lean_ctor_set(v___x_1056_, 0, v___x_1103_);
v___x_1105_ = v___x_1056_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1106_ = l_Lean_MessageData_ofFormat(v___x_1105_);
v___x_1107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1102_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___redArg(v___x_1093_, v___x_1107_, v___y_1044_, v___y_1045_);
lean_dec(v___x_1093_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_dec_ref_known(v___x_1108_, 1);
v___y_1075_ = v_snd_1086_;
goto v___jp_1074_;
}
else
{
lean_dec(v_snd_1086_);
lean_del_object(v___x_1061_);
lean_dec(v_val_1059_);
lean_dec(v_val_1054_);
lean_del_object(v___x_1051_);
lean_dec(v_stx_1048_);
return v___x_1108_;
}
}
}
}
}
else
{
lean_del_object(v___x_1088_);
lean_del_object(v___x_1084_);
lean_del_object(v___x_1056_);
lean_dec_ref_known(v_info_1042_, 1);
v___y_1075_ = v_snd_1086_;
goto v___jp_1074_;
}
}
}
}
else
{
lean_dec(v___x_1081_);
lean_del_object(v___x_1056_);
lean_dec_ref_known(v_info_1042_, 1);
v_maskAcc_1064_ = v_val_1054_;
goto v___jp_1063_;
}
}
}
}
else
{
lean_object* v___x_1129_; lean_object* v___x_1131_; 
lean_dec(v___x_1058_);
lean_dec(v_val_1054_);
lean_del_object(v___x_1051_);
lean_dec(v_stx_1048_);
lean_dec_ref_known(v_info_1042_, 1);
v___x_1129_ = lean_box(0);
if (v_isShared_1057_ == 0)
{
lean_ctor_set_tag(v___x_1056_, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1129_);
v___x_1131_ = v___x_1056_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
else
{
lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1141_; 
lean_dec(v___x_1053_);
lean_del_object(v___x_1051_);
lean_dec(v_stx_1048_);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_info_1042_);
if (v_isSharedCheck_1141_ == 0)
{
lean_object* v_unused_1142_; 
v_unused_1142_ = lean_ctor_get(v_info_1042_, 0);
lean_dec(v_unused_1142_);
v___x_1135_ = v_info_1042_;
v_isShared_1136_ = v_isSharedCheck_1141_;
goto v_resetjp_1134_;
}
else
{
lean_dec(v_info_1042_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1141_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1137_ = lean_box(0);
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1137_);
v___x_1139_ = v___x_1135_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
lean_dec_ref(v_info_1042_);
v___x_1144_ = lean_box(0);
v___x_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
return v___x_1145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___boxed(lean_object* v___x_1146_, lean_object* v_val_1147_, lean_object* v_ci_1148_, lean_object* v_info_1149_, lean_object* v_x_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1(v___x_1146_, v_val_1147_, v_ci_1148_, v_info_1149_, v_x_1150_, v___y_1151_, v___y_1152_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec_ref(v_x_1150_);
lean_dec_ref(v_ci_1148_);
lean_dec(v_val_1147_);
lean_dec(v___x_1146_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5___lam__0(lean_object* v_postNode_1155_, lean_object* v_ci_1156_, lean_object* v_i_1157_, lean_object* v_cs_1158_, lean_object* v_x_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v___x_1163_; 
lean_inc(v___y_1161_);
lean_inc_ref(v___y_1160_);
v___x_1163_ = lean_apply_6(v_postNode_1155_, v_ci_1156_, v_i_1157_, v_cs_1158_, v___y_1160_, v___y_1161_, lean_box(0));
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5___lam__0___boxed(lean_object* v_postNode_1164_, lean_object* v_ci_1165_, lean_object* v_i_1166_, lean_object* v_cs_1167_, lean_object* v_x_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5___lam__0(v_postNode_1164_, v_ci_1165_, v_i_1166_, v_cs_1167_, v_x_1168_, v___y_1169_, v___y_1170_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v_x_1168_);
return v_res_1172_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = l_instMonadEIO___redArg();
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg(lean_object* v_msg_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v_toApplicative_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1213_; 
v___x_1180_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__0, &l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__0);
v___x_1181_ = l_StateRefT_x27_instMonad___redArg(v___x_1180_);
v_toApplicative_1182_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1213_ == 0)
{
lean_object* v_unused_1214_; 
v_unused_1214_ = lean_ctor_get(v___x_1181_, 1);
lean_dec(v_unused_1214_);
v___x_1184_ = v___x_1181_;
v_isShared_1185_ = v_isSharedCheck_1213_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_toApplicative_1182_);
lean_dec(v___x_1181_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1213_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v_toFunctor_1186_; lean_object* v_toSeq_1187_; lean_object* v_toSeqLeft_1188_; lean_object* v_toSeqRight_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1211_; 
v_toFunctor_1186_ = lean_ctor_get(v_toApplicative_1182_, 0);
v_toSeq_1187_ = lean_ctor_get(v_toApplicative_1182_, 2);
v_toSeqLeft_1188_ = lean_ctor_get(v_toApplicative_1182_, 3);
v_toSeqRight_1189_ = lean_ctor_get(v_toApplicative_1182_, 4);
v_isSharedCheck_1211_ = !lean_is_exclusive(v_toApplicative_1182_);
if (v_isSharedCheck_1211_ == 0)
{
lean_object* v_unused_1212_; 
v_unused_1212_ = lean_ctor_get(v_toApplicative_1182_, 1);
lean_dec(v_unused_1212_);
v___x_1191_ = v_toApplicative_1182_;
v_isShared_1192_ = v_isSharedCheck_1211_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_toSeqRight_1189_);
lean_inc(v_toSeqLeft_1188_);
lean_inc(v_toSeq_1187_);
lean_inc(v_toFunctor_1186_);
lean_dec(v_toApplicative_1182_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1211_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___f_1193_; lean_object* v___f_1194_; lean_object* v___f_1195_; lean_object* v___f_1196_; lean_object* v___x_1197_; lean_object* v___f_1198_; lean_object* v___f_1199_; lean_object* v___f_1200_; lean_object* v___x_1202_; 
v___f_1193_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__1));
v___f_1194_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___closed__2));
lean_inc_ref(v_toFunctor_1186_);
v___f_1195_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1195_, 0, v_toFunctor_1186_);
v___f_1196_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1196_, 0, v_toFunctor_1186_);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___f_1195_);
lean_ctor_set(v___x_1197_, 1, v___f_1196_);
v___f_1198_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1198_, 0, v_toSeqRight_1189_);
v___f_1199_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1199_, 0, v_toSeqLeft_1188_);
v___f_1200_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1200_, 0, v_toSeq_1187_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 4, v___f_1198_);
lean_ctor_set(v___x_1191_, 3, v___f_1199_);
lean_ctor_set(v___x_1191_, 2, v___f_1200_);
lean_ctor_set(v___x_1191_, 1, v___f_1193_);
lean_ctor_set(v___x_1191_, 0, v___x_1197_);
v___x_1202_ = v___x_1191_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___x_1197_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v___f_1193_);
lean_ctor_set(v_reuseFailAlloc_1210_, 2, v___f_1200_);
lean_ctor_set(v_reuseFailAlloc_1210_, 3, v___f_1199_);
lean_ctor_set(v_reuseFailAlloc_1210_, 4, v___f_1198_);
v___x_1202_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1204_; 
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 1, v___f_1194_);
lean_ctor_set(v___x_1184_, 0, v___x_1202_);
v___x_1204_ = v___x_1184_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v___f_1194_);
v___x_1204_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_12770__overap_1207_; lean_object* v___x_1208_; 
v___x_1205_ = lean_box(0);
v___x_1206_ = l_instInhabitedOfMonad___redArg(v___x_1204_, v___x_1205_);
v___x_12770__overap_1207_ = lean_panic_fn_borrowed(v___x_1206_, v_msg_1176_);
lean_dec(v___x_1206_);
lean_inc(v___y_1178_);
lean_inc_ref(v___y_1177_);
v___x_1208_ = lean_apply_3(v___x_12770__overap_1207_, v___y_1177_, v___y_1178_, lean_box(0));
return v___x_1208_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg___boxed(lean_object* v_msg_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg(v_msg_1215_, v___y_1216_, v___y_1217_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
return v_res_1219_;
}
}
static lean_object* _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1223_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__2));
v___x_1224_ = lean_unsigned_to_nat(21u);
v___x_1225_ = lean_unsigned_to_nat(65u);
v___x_1226_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__1));
v___x_1227_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__0));
v___x_1228_ = l_mkPanicMessageWithDecl(v___x_1227_, v___x_1226_, v___x_1225_, v___x_1224_, v___x_1223_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg(lean_object* v_preNode_1229_, lean_object* v_postNode_1230_, lean_object* v_x_1231_, lean_object* v_x_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
switch(lean_obj_tag(v_x_1232_))
{
case 0:
{
lean_object* v_i_1236_; lean_object* v_t_1237_; lean_object* v___x_1238_; 
v_i_1236_ = lean_ctor_get(v_x_1232_, 0);
lean_inc_ref(v_i_1236_);
v_t_1237_ = lean_ctor_get(v_x_1232_, 1);
lean_inc_ref(v_t_1237_);
lean_dec_ref_known(v_x_1232_, 2);
v___x_1238_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_1236_, v_x_1231_);
v_x_1231_ = v___x_1238_;
v_x_1232_ = v_t_1237_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_1231_) == 0)
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec_ref_known(v_x_1232_, 2);
lean_dec_ref(v_postNode_1230_);
lean_dec_ref(v_preNode_1229_);
v___x_1240_ = lean_obj_once(&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__3, &l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__3_once, _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___closed__3);
v___x_1241_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg(v___x_1240_, v___y_1233_, v___y_1234_);
return v___x_1241_;
}
else
{
lean_object* v_i_1242_; lean_object* v_children_1243_; lean_object* v_val_1244_; lean_object* v___x_1245_; 
v_i_1242_ = lean_ctor_get(v_x_1232_, 0);
lean_inc_ref_n(v_i_1242_, 2);
v_children_1243_ = lean_ctor_get(v_x_1232_, 1);
lean_inc_ref_n(v_children_1243_, 2);
lean_dec_ref_known(v_x_1232_, 2);
v_val_1244_ = lean_ctor_get(v_x_1231_, 0);
lean_inc_n(v_val_1244_, 2);
lean_inc_ref(v_preNode_1229_);
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
v___x_1245_ = lean_apply_6(v_preNode_1229_, v_val_1244_, v_i_1242_, v_children_1243_, v___y_1233_, v___y_1234_, lean_box(0));
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; uint8_t v___x_1247_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
lean_dec_ref_known(v___x_1245_, 1);
v___x_1247_ = lean_unbox(v_a_1246_);
lean_dec(v_a_1246_);
if (v___x_1247_ == 0)
{
lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1272_; 
lean_dec_ref(v_preNode_1229_);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_x_1231_);
if (v_isSharedCheck_1272_ == 0)
{
lean_object* v_unused_1273_; 
v_unused_1273_ = lean_ctor_get(v_x_1231_, 0);
lean_dec(v_unused_1273_);
v___x_1249_ = v_x_1231_;
v_isShared_1250_ = v_isSharedCheck_1272_;
goto v_resetjp_1248_;
}
else
{
lean_dec(v_x_1231_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1272_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = lean_box(0);
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
v___x_1252_ = lean_apply_7(v_postNode_1230_, v_val_1244_, v_i_1242_, v_children_1243_, v___x_1251_, v___y_1233_, v___y_1234_, lean_box(0));
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1263_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1255_ = v___x_1252_;
v_isShared_1256_ = v_isSharedCheck_1263_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1252_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1263_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 0, v_a_1253_);
v___x_1258_ = v___x_1249_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1260_; 
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 0, v___x_1258_);
v___x_1260_ = v___x_1255_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_del_object(v___x_1249_);
v_a_1264_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1252_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1252_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
else
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1274_ = l_Lean_Elab_Info_updateContext_x3f(v_x_1231_, v_i_1242_);
v___x_1275_ = l_Lean_PersistentArray_toList___redArg(v_children_1243_);
v___x_1276_ = lean_box(0);
lean_inc_ref(v_postNode_1230_);
v___x_1277_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___redArg(v_preNode_1229_, v_postNode_1230_, v___x_1274_, v___x_1275_, v___x_1276_, v___y_1233_, v___y_1234_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1279_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1277_, 1);
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
v___x_1279_ = lean_apply_7(v_postNode_1230_, v_val_1244_, v_i_1242_, v_children_1243_, v_a_1278_, v___y_1233_, v___y_1234_, lean_box(0));
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1288_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1282_ = v___x_1279_;
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1279_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1286_; 
v___x_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1284_, 0, v_a_1280_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v___x_1284_);
v___x_1286_ = v___x_1282_;
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
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
v_a_1289_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1279_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1279_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
else
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec(v_val_1244_);
lean_dec_ref(v_children_1243_);
lean_dec_ref(v_i_1242_);
lean_dec_ref(v_postNode_1230_);
v_a_1297_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1277_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1277_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
}
}
else
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1312_; 
lean_dec(v_val_1244_);
lean_dec_ref(v_children_1243_);
lean_dec_ref(v_i_1242_);
lean_dec_ref_known(v_x_1231_, 1);
lean_dec_ref(v_postNode_1230_);
lean_dec_ref(v_preNode_1229_);
v_a_1305_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1307_ = v___x_1245_;
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1245_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1310_; 
if (v_isShared_1308_ == 0)
{
v___x_1310_ = v___x_1307_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_a_1305_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
}
}
default: 
{
lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1320_; 
lean_dec(v_x_1231_);
lean_dec_ref(v_postNode_1230_);
lean_dec_ref(v_preNode_1229_);
v_isSharedCheck_1320_ = !lean_is_exclusive(v_x_1232_);
if (v_isSharedCheck_1320_ == 0)
{
lean_object* v_unused_1321_; 
v_unused_1321_ = lean_ctor_get(v_x_1232_, 0);
lean_dec(v_unused_1321_);
v___x_1314_ = v_x_1232_;
v_isShared_1315_ = v_isSharedCheck_1320_;
goto v_resetjp_1313_;
}
else
{
lean_dec(v_x_1232_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1320_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1318_; 
v___x_1316_ = lean_box(0);
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1316_);
v___x_1318_ = v___x_1314_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1316_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___redArg(lean_object* v_preNode_1322_, lean_object* v_postNode_1323_, lean_object* v___x_1324_, lean_object* v_x_1325_, lean_object* v_x_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
if (lean_obj_tag(v_x_1325_) == 0)
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_dec(v___x_1324_);
lean_dec_ref(v_postNode_1323_);
lean_dec_ref(v_preNode_1322_);
v___x_1330_ = l_List_reverse___redArg(v_x_1326_);
v___x_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
return v___x_1331_;
}
else
{
lean_object* v_head_1332_; lean_object* v_tail_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1351_; 
v_head_1332_ = lean_ctor_get(v_x_1325_, 0);
v_tail_1333_ = lean_ctor_get(v_x_1325_, 1);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_x_1325_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1335_ = v_x_1325_;
v_isShared_1336_ = v_isSharedCheck_1351_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_tail_1333_);
lean_inc(v_head_1332_);
lean_dec(v_x_1325_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1351_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1337_; 
lean_inc(v___x_1324_);
lean_inc_ref(v_postNode_1323_);
lean_inc_ref(v_preNode_1322_);
v___x_1337_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg(v_preNode_1322_, v_postNode_1323_, v___x_1324_, v_head_1332_, v___y_1327_, v___y_1328_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1337_, 1);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 1, v_x_1326_);
lean_ctor_set(v___x_1335_, 0, v_a_1338_);
v___x_1340_ = v___x_1335_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1338_);
lean_ctor_set(v_reuseFailAlloc_1342_, 1, v_x_1326_);
v___x_1340_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
v_x_1325_ = v_tail_1333_;
v_x_1326_ = v___x_1340_;
goto _start;
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_del_object(v___x_1335_);
lean_dec(v_tail_1333_);
lean_dec(v_x_1326_);
lean_dec(v___x_1324_);
lean_dec_ref(v_postNode_1323_);
lean_dec_ref(v_preNode_1322_);
v_a_1343_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1337_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1337_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___redArg___boxed(lean_object* v_preNode_1352_, lean_object* v_postNode_1353_, lean_object* v___x_1354_, lean_object* v_x_1355_, lean_object* v_x_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___redArg(v_preNode_1352_, v_postNode_1353_, v___x_1354_, v_x_1355_, v_x_1356_, v___y_1357_, v___y_1358_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg___boxed(lean_object* v_preNode_1361_, lean_object* v_postNode_1362_, lean_object* v_x_1363_, lean_object* v_x_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg(v_preNode_1361_, v_postNode_1362_, v_x_1363_, v_x_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5(lean_object* v_preNode_1369_, lean_object* v_postNode_1370_, lean_object* v_ctx_x3f_1371_, lean_object* v_t_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v___f_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___f_1376_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1376_, 0, v_postNode_1370_);
v___x_1377_ = lean_box(0);
v___x_1378_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg(v_preNode_1369_, v___f_1376_, v_ctx_x3f_1371_, v_t_1372_, v___y_1373_, v___y_1374_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1385_; 
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1385_ == 0)
{
lean_object* v_unused_1386_; 
v_unused_1386_ = lean_ctor_get(v___x_1378_, 0);
lean_dec(v_unused_1386_);
v___x_1380_ = v___x_1378_;
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
else
{
lean_dec(v___x_1378_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 0, v___x_1377_);
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1377_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
else
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
v_a_1387_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1389_ = v___x_1378_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1378_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_a_1387_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5___boxed(lean_object* v_preNode_1395_, lean_object* v_postNode_1396_, lean_object* v_ctx_x3f_1397_, lean_object* v_t_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5(v_preNode_1395_, v_postNode_1396_, v_ctx_x3f_1397_, v_t_1398_, v___y_1399_, v___y_1400_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__0(uint8_t v___x_1403_, lean_object* v_x_1404_, lean_object* v_x_1405_, lean_object* v_x_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1410_ = lean_box(v___x_1403_);
v___x_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__0___boxed(lean_object* v___x_1412_, lean_object* v_x_1413_, lean_object* v_x_1414_, lean_object* v_x_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
uint8_t v___x_15081__boxed_1419_; lean_object* v_res_1420_; 
v___x_15081__boxed_1419_ = lean_unbox(v___x_1412_);
v_res_1420_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__0(v___x_15081__boxed_1419_, v_x_1413_, v_x_1414_, v_x_1415_, v___y_1416_, v___y_1417_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
lean_dec_ref(v_x_1415_);
lean_dec_ref(v_x_1414_);
lean_dec_ref(v_x_1413_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7_spec__14(uint8_t v___x_1421_, lean_object* v_val_1422_, lean_object* v_as_1423_, size_t v_sz_1424_, size_t v_i_1425_, lean_object* v_b_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
uint8_t v___x_1430_; 
v___x_1430_ = lean_usize_dec_lt(v_i_1425_, v_sz_1424_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; 
lean_dec(v_val_1422_);
v___x_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1431_, 0, v_b_1426_);
return v___x_1431_;
}
else
{
lean_object* v___x_1432_; lean_object* v___f_1433_; lean_object* v___x_1434_; lean_object* v___f_1435_; lean_object* v___x_1436_; lean_object* v_a_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1432_ = lean_box(v___x_1421_);
v___f_1433_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1433_, 0, v___x_1432_);
v___x_1434_ = l_Lean_Elab_Tactic_instImpl_00___x40_Lean_Elab_Tactic_Simp_2597418670____hygCtx___hyg_9_;
lean_inc(v_val_1422_);
v___f_1435_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___boxed), 8, 2);
lean_closure_set(v___f_1435_, 0, v___x_1434_);
lean_closure_set(v___f_1435_, 1, v_val_1422_);
v___x_1436_ = lean_box(0);
v_a_1437_ = lean_array_uget_borrowed(v_as_1423_, v_i_1425_);
v___x_1438_ = lean_box(0);
lean_inc(v_a_1437_);
v___x_1439_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5(v___f_1433_, v___f_1435_, v___x_1438_, v_a_1437_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1439_) == 0)
{
size_t v___x_1440_; size_t v___x_1441_; 
lean_dec_ref_known(v___x_1439_, 1);
v___x_1440_ = ((size_t)1ULL);
v___x_1441_ = lean_usize_add(v_i_1425_, v___x_1440_);
v_i_1425_ = v___x_1441_;
v_b_1426_ = v___x_1436_;
goto _start;
}
else
{
lean_dec(v_val_1422_);
return v___x_1439_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7_spec__14___boxed(lean_object* v___x_1443_, lean_object* v_val_1444_, lean_object* v_as_1445_, lean_object* v_sz_1446_, lean_object* v_i_1447_, lean_object* v_b_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
uint8_t v___x_15106__boxed_1452_; size_t v_sz_boxed_1453_; size_t v_i_boxed_1454_; lean_object* v_res_1455_; 
v___x_15106__boxed_1452_ = lean_unbox(v___x_1443_);
v_sz_boxed_1453_ = lean_unbox_usize(v_sz_1446_);
lean_dec(v_sz_1446_);
v_i_boxed_1454_ = lean_unbox_usize(v_i_1447_);
lean_dec(v_i_1447_);
v_res_1455_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7_spec__14(v___x_15106__boxed_1452_, v_val_1444_, v_as_1445_, v_sz_boxed_1453_, v_i_boxed_1454_, v_b_1448_, v___y_1449_, v___y_1450_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec_ref(v_as_1445_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7(uint8_t v___x_1456_, lean_object* v_val_1457_, lean_object* v_as_1458_, size_t v_sz_1459_, size_t v_i_1460_, lean_object* v_b_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
uint8_t v___x_1465_; 
v___x_1465_ = lean_usize_dec_lt(v_i_1460_, v_sz_1459_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; 
lean_dec(v_val_1457_);
v___x_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1466_, 0, v_b_1461_);
return v___x_1466_;
}
else
{
lean_object* v___x_1467_; lean_object* v___f_1468_; lean_object* v___x_1469_; lean_object* v___f_1470_; lean_object* v___x_1471_; lean_object* v_a_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1467_ = lean_box(v___x_1456_);
v___f_1468_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1468_, 0, v___x_1467_);
v___x_1469_ = l_Lean_Elab_Tactic_instImpl_00___x40_Lean_Elab_Tactic_Simp_2597418670____hygCtx___hyg_9_;
lean_inc(v_val_1457_);
v___f_1470_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___lam__1___boxed), 8, 2);
lean_closure_set(v___f_1470_, 0, v___x_1469_);
lean_closure_set(v___f_1470_, 1, v_val_1457_);
v___x_1471_ = lean_box(0);
v_a_1472_ = lean_array_uget_borrowed(v_as_1458_, v_i_1460_);
v___x_1473_ = lean_box(0);
lean_inc(v_a_1472_);
v___x_1474_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5(v___f_1468_, v___f_1470_, v___x_1473_, v_a_1472_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1474_) == 0)
{
size_t v___x_1475_; size_t v___x_1476_; lean_object* v___x_1477_; 
lean_dec_ref_known(v___x_1474_, 1);
v___x_1475_ = ((size_t)1ULL);
v___x_1476_ = lean_usize_add(v_i_1460_, v___x_1475_);
v___x_1477_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7_spec__14(v___x_1456_, v_val_1457_, v_as_1458_, v_sz_1459_, v___x_1476_, v___x_1471_, v___y_1462_, v___y_1463_);
return v___x_1477_;
}
else
{
lean_dec(v_val_1457_);
return v___x_1474_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7___boxed(lean_object* v___x_1478_, lean_object* v_val_1479_, lean_object* v_as_1480_, lean_object* v_sz_1481_, lean_object* v_i_1482_, lean_object* v_b_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_){
_start:
{
uint8_t v___x_15147__boxed_1487_; size_t v_sz_boxed_1488_; size_t v_i_boxed_1489_; lean_object* v_res_1490_; 
v___x_15147__boxed_1487_ = lean_unbox(v___x_1478_);
v_sz_boxed_1488_ = lean_unbox_usize(v_sz_1481_);
lean_dec(v_sz_1481_);
v_i_boxed_1489_ = lean_unbox_usize(v_i_1482_);
lean_dec(v_i_1482_);
v_res_1490_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7(v___x_15147__boxed_1487_, v_val_1479_, v_as_1480_, v_sz_boxed_1488_, v_i_boxed_1489_, v_b_1483_, v___y_1484_, v___y_1485_);
lean_dec(v___y_1485_);
lean_dec_ref(v___y_1484_);
lean_dec_ref(v_as_1480_);
return v_res_1490_;
}
}
static lean_object* _init_l_Lean_Linter_unusedSimpArgs___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_unsigned_to_nat(16u);
v___x_1493_ = lean_mk_array(v___x_1492_, v___x_1491_);
return v___x_1493_;
}
}
static lean_object* _init_l_Lean_Linter_unusedSimpArgs___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1494_ = lean_obj_once(&l_Lean_Linter_unusedSimpArgs___lam__0___closed__0, &l_Lean_Linter_unusedSimpArgs___lam__0___closed__0_once, _init_l_Lean_Linter_unusedSimpArgs___lam__0___closed__0);
v___x_1495_ = lean_unsigned_to_nat(0u);
v___x_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
lean_ctor_set(v___x_1496_, 1, v___x_1494_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_unusedSimpArgs___lam__0(lean_object* v_cmdStx_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v___x_1501_; lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1568_; 
v___x_1501_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0(v___y_1498_, v___y_1499_);
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1504_ = v___x_1501_;
v_isShared_1505_ = v_isSharedCheck_1568_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1501_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1568_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1506_; uint8_t v___x_1507_; 
v___x_1506_ = l_Lean_Elab_Tactic_linter_unusedSimpArgs;
v___x_1507_ = l_Lean_Linter_getLinterValue(v___x_1506_, v_a_1502_);
lean_dec(v_a_1502_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1508_; lean_object* v___x_1510_; 
v___x_1508_ = lean_box(0);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v___x_1508_);
v___x_1510_ = v___x_1504_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
else
{
uint8_t v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = 0;
v___x_1513_ = l_Lean_Syntax_getRange_x3f(v_cmdStx_1497_, v___x_1512_);
if (lean_obj_tag(v___x_1513_) == 1)
{
lean_object* v___x_1514_; lean_object* v_infoState_1515_; lean_object* v_trees_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; size_t v_sz_1522_; size_t v___x_1523_; lean_object* v___x_1524_; 
lean_dec_ref_known(v___x_1513_, 1);
lean_del_object(v___x_1504_);
v___x_1514_ = lean_st_ref_get(v___y_1499_);
v_infoState_1515_ = lean_ctor_get(v___x_1514_, 8);
lean_inc_ref(v_infoState_1515_);
lean_dec(v___x_1514_);
v_trees_1516_ = lean_ctor_get(v_infoState_1515_, 2);
lean_inc_ref(v_trees_1516_);
lean_dec_ref(v_infoState_1515_);
v___x_1517_ = l_Lean_PersistentArray_toArray___redArg(v_trees_1516_);
lean_dec_ref(v_trees_1516_);
v___x_1518_ = lean_unsigned_to_nat(0u);
v___x_1519_ = lean_obj_once(&l_Lean_Linter_unusedSimpArgs___lam__0___closed__1, &l_Lean_Linter_unusedSimpArgs___lam__0___closed__1_once, _init_l_Lean_Linter_unusedSimpArgs___lam__0___closed__1);
v___x_1520_ = lean_st_mk_ref(v___x_1519_);
v___x_1521_ = lean_box(0);
v_sz_1522_ = lean_array_size(v___x_1517_);
v___x_1523_ = ((size_t)0ULL);
lean_inc(v___x_1520_);
v___x_1524_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__7(v___x_1507_, v___x_1520_, v___x_1517_, v_sz_1522_, v___x_1523_, v___x_1521_, v___y_1498_, v___y_1499_);
lean_dec_ref(v___x_1517_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v___x_1525_; lean_object* v___y_1527_; lean_object* v___y_1539_; lean_object* v___y_1540_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1545_; lean_object* v___y_1546_; lean_object* v___y_1547_; lean_object* v___y_1548_; lean_object* v___y_1551_; lean_object* v_size_1557_; lean_object* v_buckets_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; uint8_t v___x_1561_; 
lean_dec_ref_known(v___x_1524_, 1);
v___x_1525_ = lean_st_ref_get(v___x_1520_);
lean_dec(v___x_1520_);
v_size_1557_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_size_1557_);
v_buckets_1558_ = lean_ctor_get(v___x_1525_, 1);
lean_inc_ref(v_buckets_1558_);
lean_dec(v___x_1525_);
v___x_1559_ = lean_mk_empty_array_with_capacity(v_size_1557_);
lean_dec(v_size_1557_);
v___x_1560_ = lean_array_get_size(v_buckets_1558_);
v___x_1561_ = lean_nat_dec_lt(v___x_1518_, v___x_1560_);
if (v___x_1561_ == 0)
{
lean_dec_ref(v_buckets_1558_);
v___y_1551_ = v___x_1559_;
goto v___jp_1550_;
}
else
{
size_t v___x_1562_; lean_object* v___x_1563_; 
v___x_1562_ = lean_usize_of_nat(v___x_1560_);
v___x_1563_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_unusedSimpArgs_spec__11(v_buckets_1558_, v___x_1523_, v___x_1562_, v___x_1559_);
lean_dec_ref(v_buckets_1558_);
v___y_1551_ = v___x_1563_;
goto v___jp_1550_;
}
v___jp_1526_:
{
size_t v_sz_1528_; lean_object* v___x_1529_; 
v_sz_1528_ = lean_array_size(v___y_1527_);
v___x_1529_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_unusedSimpArgs_spec__8(v___y_1527_, v_sz_1528_, v___x_1523_, v___x_1521_, v___y_1498_, v___y_1499_);
lean_dec_ref(v___y_1527_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1536_ == 0)
{
lean_object* v_unused_1537_; 
v_unused_1537_ = lean_ctor_get(v___x_1529_, 0);
lean_dec(v_unused_1537_);
v___x_1531_ = v___x_1529_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_dec(v___x_1529_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
lean_ctor_set(v___x_1531_, 0, v___x_1521_);
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1521_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
else
{
return v___x_1529_;
}
}
v___jp_1538_:
{
lean_object* v___x_1543_; 
v___x_1543_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg(v___y_1539_, v___y_1541_, v___y_1540_, v___y_1542_);
lean_dec(v___y_1542_);
lean_dec(v___y_1539_);
v___y_1527_ = v___x_1543_;
goto v___jp_1526_;
}
v___jp_1544_:
{
uint8_t v___x_1549_; 
v___x_1549_ = lean_nat_dec_le(v___y_1548_, v___y_1546_);
if (v___x_1549_ == 0)
{
lean_dec(v___y_1546_);
lean_inc(v___y_1548_);
v___y_1539_ = v___y_1545_;
v___y_1540_ = v___y_1548_;
v___y_1541_ = v___y_1547_;
v___y_1542_ = v___y_1548_;
goto v___jp_1538_;
}
else
{
v___y_1539_ = v___y_1545_;
v___y_1540_ = v___y_1548_;
v___y_1541_ = v___y_1547_;
v___y_1542_ = v___y_1546_;
goto v___jp_1538_;
}
}
v___jp_1550_:
{
lean_object* v___x_1552_; uint8_t v___x_1553_; 
v___x_1552_ = lean_array_get_size(v___y_1551_);
v___x_1553_ = lean_nat_dec_eq(v___x_1552_, v___x_1518_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; lean_object* v___x_1555_; uint8_t v___x_1556_; 
v___x_1554_ = lean_unsigned_to_nat(1u);
v___x_1555_ = lean_nat_sub(v___x_1552_, v___x_1554_);
v___x_1556_ = lean_nat_dec_le(v___x_1518_, v___x_1555_);
if (v___x_1556_ == 0)
{
lean_inc(v___x_1555_);
v___y_1545_ = v___x_1552_;
v___y_1546_ = v___x_1555_;
v___y_1547_ = v___y_1551_;
v___y_1548_ = v___x_1555_;
goto v___jp_1544_;
}
else
{
v___y_1545_ = v___x_1552_;
v___y_1546_ = v___x_1555_;
v___y_1547_ = v___y_1551_;
v___y_1548_ = v___x_1518_;
goto v___jp_1544_;
}
}
else
{
v___y_1527_ = v___y_1551_;
goto v___jp_1526_;
}
}
}
else
{
lean_dec(v___x_1520_);
return v___x_1524_;
}
}
else
{
lean_object* v___x_1564_; lean_object* v___x_1566_; 
lean_dec(v___x_1513_);
v___x_1564_ = lean_box(0);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v___x_1564_);
v___x_1566_ = v___x_1504_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v___x_1564_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_unusedSimpArgs___lam__0___boxed(lean_object* v_cmdStx_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l_Lean_Linter_unusedSimpArgs___lam__0(v_cmdStx_1569_, v___y_1570_, v___y_1571_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
lean_dec(v_cmdStx_1569_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0(lean_object* v_o_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___redArg(v_o_1585_, v___y_1587_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0___boxed(lean_object* v_o_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_unusedSimpArgs_spec__0_spec__0(v_o_1590_, v___y_1591_, v___y_1592_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1(lean_object* v_00_u03b2_1595_, lean_object* v_m_1596_, lean_object* v_a_1597_, lean_object* v_b_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1___redArg(v_m_1596_, v_a_1597_, v_b_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2(lean_object* v_00_u03b2_1600_, lean_object* v_m_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___redArg(v_m_1601_, v_a_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2___boxed(lean_object* v_00_u03b2_1604_, lean_object* v_m_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2(v_00_u03b2_1604_, v_m_1605_, v_a_1606_);
lean_dec_ref(v_a_1606_);
lean_dec_ref(v_m_1605_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4(lean_object* v_00_u03b1_1608_, lean_object* v_ref_1609_, lean_object* v_msg_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___redArg(v_ref_1609_, v_msg_1610_, v___y_1611_, v___y_1612_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4___boxed(lean_object* v_00_u03b1_1615_, lean_object* v_ref_1616_, lean_object* v_msg_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l_Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4(v_00_u03b1_1615_, v_ref_1616_, v_msg_1617_, v___y_1618_, v___y_1619_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v_ref_1616_);
return v_res_1621_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6(lean_object* v_upperBound_1622_, lean_object* v_snd_1623_, lean_object* v_fst_1624_, lean_object* v_inst_1625_, lean_object* v_R_1626_, lean_object* v_a_1627_, lean_object* v_b_1628_, lean_object* v_c_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v___x_1633_; 
v___x_1633_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___redArg(v_upperBound_1622_, v_snd_1623_, v_fst_1624_, v_a_1627_, v_b_1628_, v___y_1630_, v___y_1631_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6___boxed(lean_object* v_upperBound_1634_, lean_object* v_snd_1635_, lean_object* v_fst_1636_, lean_object* v_inst_1637_, lean_object* v_R_1638_, lean_object* v_a_1639_, lean_object* v_b_1640_, lean_object* v_c_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Linter_unusedSimpArgs_spec__6(v_upperBound_1634_, v_snd_1635_, v_fst_1636_, v_inst_1637_, v_R_1638_, v_a_1639_, v_b_1640_, v_c_1641_, v___y_1642_, v___y_1643_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec_ref(v_snd_1635_);
lean_dec(v_upperBound_1634_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9(lean_object* v_n_1646_, lean_object* v_as_1647_, lean_object* v_lo_1648_, lean_object* v_hi_1649_, lean_object* v_w_1650_, lean_object* v_hlo_1651_, lean_object* v_hhi_1652_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___redArg(v_n_1646_, v_as_1647_, v_lo_1648_, v_hi_1649_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9___boxed(lean_object* v_n_1654_, lean_object* v_as_1655_, lean_object* v_lo_1656_, lean_object* v_hi_1657_, lean_object* v_w_1658_, lean_object* v_hlo_1659_, lean_object* v_hhi_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9(v_n_1654_, v_as_1655_, v_lo_1656_, v_hi_1657_, v_w_1658_, v_hlo_1659_, v_hhi_1660_);
lean_dec(v_hi_1657_);
lean_dec(v_n_1654_);
return v_res_1661_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2(lean_object* v_00_u03b2_1662_, lean_object* v_a_1663_, lean_object* v_x_1664_){
_start:
{
uint8_t v___x_1665_; 
v___x_1665_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___redArg(v_a_1663_, v_x_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1666_, lean_object* v_a_1667_, lean_object* v_x_1668_){
_start:
{
uint8_t v_res_1669_; lean_object* v_r_1670_; 
v_res_1669_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__2(v_00_u03b2_1666_, v_a_1667_, v_x_1668_);
lean_dec(v_x_1668_);
lean_dec_ref(v_a_1667_);
v_r_1670_ = lean_box(v_res_1669_);
return v_r_1670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3(lean_object* v_00_u03b2_1671_, lean_object* v_data_1672_){
_start:
{
lean_object* v___x_1673_; 
v___x_1673_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3___redArg(v_data_1672_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__4(lean_object* v_00_u03b2_1674_, lean_object* v_a_1675_, lean_object* v_b_1676_, lean_object* v_x_1677_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__4___redArg(v_a_1675_, v_b_1676_, v_x_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6(lean_object* v_00_u03b2_1679_, lean_object* v_a_1680_, lean_object* v_x_1681_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___redArg(v_a_1680_, v_x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1683_, lean_object* v_a_1684_, lean_object* v_x_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_unusedSimpArgs_spec__2_spec__6(v_00_u03b2_1683_, v_a_1684_, v_x_1685_);
lean_dec(v_x_1685_);
lean_dec_ref(v_a_1684_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11(lean_object* v_msgData_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___redArg(v_msgData_1687_, v___y_1689_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11___boxed(lean_object* v_msgData_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__11(v_msgData_1692_, v___y_1693_, v___y_1694_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9(lean_object* v_00_u03b1_1697_, lean_object* v_msg_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v___x_1702_; 
v___x_1702_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___redArg(v_msg_1698_, v___y_1699_, v___y_1700_);
return v___x_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9___boxed(lean_object* v_00_u03b1_1703_, lean_object* v_msg_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9(v_00_u03b1_1703_, v_msg_1704_, v___y_1705_, v___y_1706_);
lean_dec(v___y_1706_);
lean_dec_ref(v___y_1705_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15(lean_object* v_00_u03b1_1709_, lean_object* v_msg_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___redArg(v_msg_1710_, v___y_1711_, v___y_1712_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15___boxed(lean_object* v_00_u03b1_1715_, lean_object* v_msg_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__15(v_00_u03b1_1715_, v_msg_1716_, v___y_1717_, v___y_1718_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11(lean_object* v_00_u03b1_1721_, lean_object* v_preNode_1722_, lean_object* v_postNode_1723_, lean_object* v_x_1724_, lean_object* v_x_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___redArg(v_preNode_1722_, v_postNode_1723_, v_x_1724_, v_x_1725_, v___y_1726_, v___y_1727_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11___boxed(lean_object* v_00_u03b1_1730_, lean_object* v_preNode_1731_, lean_object* v_postNode_1732_, lean_object* v_x_1733_, lean_object* v_x_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11(v_00_u03b1_1730_, v_preNode_1731_, v_postNode_1732_, v_x_1733_, v_x_1734_, v___y_1735_, v___y_1736_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17(lean_object* v_n_1739_, lean_object* v_lo_1740_, lean_object* v_hi_1741_, lean_object* v_hhi_1742_, lean_object* v_pivot_1743_, lean_object* v_as_1744_, lean_object* v_i_1745_, lean_object* v_k_1746_, lean_object* v_ilo_1747_, lean_object* v_ik_1748_, lean_object* v_w_1749_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___redArg(v_hi_1741_, v_pivot_1743_, v_as_1744_, v_i_1745_, v_k_1746_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17___boxed(lean_object* v_n_1751_, lean_object* v_lo_1752_, lean_object* v_hi_1753_, lean_object* v_hhi_1754_, lean_object* v_pivot_1755_, lean_object* v_as_1756_, lean_object* v_i_1757_, lean_object* v_k_1758_, lean_object* v_ilo_1759_, lean_object* v_ik_1760_, lean_object* v_w_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_unusedSimpArgs_spec__9_spec__17(v_n_1751_, v_lo_1752_, v_hi_1753_, v_hhi_1754_, v_pivot_1755_, v_as_1756_, v_i_1757_, v_k_1758_, v_ilo_1759_, v_ik_1760_, v_w_1761_);
lean_dec_ref(v_pivot_1755_);
lean_dec(v_hi_1753_);
lean_dec(v_lo_1752_);
lean_dec(v_n_1751_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1763_, lean_object* v_i_1764_, lean_object* v_source_1765_, lean_object* v_target_1766_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4___redArg(v_i_1764_, v_source_1765_, v_target_1766_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12(lean_object* v_msgData_1768_, lean_object* v_macroStack_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___redArg(v_msgData_1768_, v_macroStack_1769_, v___y_1771_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12___boxed(lean_object* v_msgData_1774_, lean_object* v_macroStack_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v_res_1779_; 
v_res_1779_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Linter_unusedSimpArgs_spec__4_spec__9_spec__12(v_msgData_1774_, v_macroStack_1775_, v___y_1776_, v___y_1777_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16(lean_object* v_00_u03b1_1780_, lean_object* v_preNode_1781_, lean_object* v_postNode_1782_, lean_object* v___x_1783_, lean_object* v_x_1784_, lean_object* v_x_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___redArg(v_preNode_1781_, v_postNode_1782_, v___x_1783_, v_x_1784_, v_x_1785_, v___y_1786_, v___y_1787_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16___boxed(lean_object* v_00_u03b1_1790_, lean_object* v_preNode_1791_, lean_object* v_postNode_1792_, lean_object* v___x_1793_, lean_object* v_x_1794_, lean_object* v_x_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_unusedSimpArgs_spec__5_spec__11_spec__16(v_00_u03b1_1790_, v_preNode_1791_, v_postNode_1792_, v___x_1793_, v_x_1794_, v_x_1795_, v___y_1796_, v___y_1797_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4_spec__15(lean_object* v_00_u03b2_1800_, lean_object* v_x_1801_, lean_object* v_x_1802_){
_start:
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_unusedSimpArgs_spec__1_spec__3_spec__4_spec__15___redArg(v_x_1801_, v_x_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_initFn_00___x40_Lean_Linter_UnusedSimpArgs_2198311501____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = ((lean_object*)(l_Lean_Linter_unusedSimpArgs));
v___x_1806_ = l_Lean_Elab_Command_addLinter(v___x_1805_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_initFn_00___x40_Lean_Linter_UnusedSimpArgs_2198311501____hygCtx___hyg_2____boxed(lean_object* v_a_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_initFn_00___x40_Lean_Linter_UnusedSimpArgs_2198311501____hygCtx___hyg_2_();
return v_res_1808_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_UnusedSimpArgs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_UnusedSimpArgs_0__Lean_Linter_initFn_00___x40_Lean_Linter_UnusedSimpArgs_2198311501____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_UnusedSimpArgs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Linter_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_UnusedSimpArgs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_UnusedSimpArgs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_UnusedSimpArgs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_UnusedSimpArgs(builtin);
}
#ifdef __cplusplus
}
#endif
