// Lean compiler output
// Module: Lean.Elab.PreDefinition.TerminationHint
// Imports: public import Lean.Parser.Term meta import Lean.Parser.Term import Init.Omega
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getNumHeadLambdas(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
static const lean_array_object l_Lean_Elab_instInhabitedTerminationBy_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedTerminationBy_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedTerminationBy_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedTerminationBy_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedTerminationBy_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_instInhabitedTerminationBy_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedTerminationBy_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedTerminationBy_default = (const lean_object*)&l_Lean_Elab_instInhabitedTerminationBy_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedTerminationBy = (const lean_object*)&l_Lean_Elab_instInhabitedTerminationBy_default___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedDecreasingBy_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instInhabitedDecreasingBy_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedDecreasingBy_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedDecreasingBy_default = (const lean_object*)&l_Lean_Elab_instInhabitedDecreasingBy_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedDecreasingBy = (const lean_object*)&l_Lean_Elab_instInhabitedDecreasingBy_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_partialFixpoint_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_partialFixpoint_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_partialFixpoint_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_partialFixpoint_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedPartialFixpointType_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedPartialFixpointType;
static const lean_ctor_object l_Lean_Elab_instInhabitedPartialFixpoint_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_instInhabitedPartialFixpoint_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedPartialFixpoint_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedPartialFixpoint_default = (const lean_object*)&l_Lean_Elab_instInhabitedPartialFixpoint_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedPartialFixpoint = (const lean_object*)&l_Lean_Elab_instInhabitedPartialFixpoint_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedTerminationHints_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 8, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_instInhabitedTerminationHints_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedTerminationHints_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedTerminationHints_default = (const lean_object*)&l_Lean_Elab_instInhabitedTerminationHints_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedTerminationHints = (const lean_object*)&l_Lean_Elab_instInhabitedTerminationHints_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Elab_isInductiveFixpoint(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_isInductiveFixpoint___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_isCoinductiveFixpoint(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_isCoinductiveFixpoint___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_isPartialFixpoint(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_isPartialFixpoint___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_isLatticeTheoretic(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_isLatticeTheoretic___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Lean_Elab_TerminationHints_none = (const lean_object*)&l_Lean_Elab_instInhabitedTerminationHints_default___closed__0_value;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_TerminationHints_ensureNone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unused termination hints, function is "};
static const lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__0 = (const lean_object*)&l_Lean_Elab_TerminationHints_ensureNone___closed__0_value;
static lean_once_cell_t l_Lean_Elab_TerminationHints_ensureNone___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__1;
static const lean_string_object l_Lean_Elab_TerminationHints_ensureNone___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "unused `partial_fixpoint`, function is "};
static const lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__2 = (const lean_object*)&l_Lean_Elab_TerminationHints_ensureNone___closed__2_value;
static lean_once_cell_t l_Lean_Elab_TerminationHints_ensureNone___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__3;
static const lean_string_object l_Lean_Elab_TerminationHints_ensureNone___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "unused `coinductive_fixpoint`, function is "};
static const lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__4 = (const lean_object*)&l_Lean_Elab_TerminationHints_ensureNone___closed__4_value;
static lean_once_cell_t l_Lean_Elab_TerminationHints_ensureNone___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__5;
static const lean_string_object l_Lean_Elab_TerminationHints_ensureNone___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "unused `inductive_fixpoint`, function is "};
static const lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__6 = (const lean_object*)&l_Lean_Elab_TerminationHints_ensureNone___closed__6_value;
static lean_once_cell_t l_Lean_Elab_TerminationHints_ensureNone___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__7;
static const lean_string_object l_Lean_Elab_TerminationHints_ensureNone___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "unused `decreasing_by`, function is "};
static const lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__8 = (const lean_object*)&l_Lean_Elab_TerminationHints_ensureNone___closed__8_value;
static lean_once_cell_t l_Lean_Elab_TerminationHints_ensureNone___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__9;
static const lean_string_object l_Lean_Elab_TerminationHints_ensureNone___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "unused `termination_by`, function is "};
static const lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__10 = (const lean_object*)&l_Lean_Elab_TerminationHints_ensureNone___closed__10_value;
static lean_once_cell_t l_Lean_Elab_TerminationHints_ensureNone___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__11;
static const lean_string_object l_Lean_Elab_TerminationHints_ensureNone___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unused `termination_by\?`, function is "};
static const lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__12 = (const lean_object*)&l_Lean_Elab_TerminationHints_ensureNone___closed__12_value;
static lean_once_cell_t l_Lean_Elab_TerminationHints_ensureNone___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationHints_ensureNone___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_ensureNone(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_ensureNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_TerminationHints_isNotNone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_isNotNone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_rememberExtraParams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_rememberExtraParams___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " parameters"};
static const lean_object* l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "one parameter"};
static const lean_object* l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_TerminationBy_checkVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = " bound in `termination_by`, but the body of "};
static const lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__0 = (const lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__0_value;
static lean_once_cell_t l_Lean_Elab_TerminationBy_checkVars___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__1;
static const lean_string_object l_Lean_Elab_TerminationBy_checkVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " only binds "};
static const lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__2 = (const lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__2_value;
static lean_once_cell_t l_Lean_Elab_TerminationBy_checkVars___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__3;
static const lean_string_object l_Lean_Elab_TerminationBy_checkVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__4 = (const lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__4_value;
static lean_once_cell_t l_Lean_Elab_TerminationBy_checkVars___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__5;
static const lean_string_object l_Lean_Elab_TerminationBy_checkVars___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__6 = (const lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__6_value;
static const lean_ctor_object l_Lean_Elab_TerminationBy_checkVars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__7 = (const lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__7_value;
static const lean_string_object l_Lean_Elab_TerminationBy_checkVars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = " (Since Lean v4.6.0, the `termination_by` clause no longer "};
static const lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__8 = (const lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__8_value;
static lean_once_cell_t l_Lean_Elab_TerminationBy_checkVars___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__9;
static const lean_string_object l_Lean_Elab_TerminationBy_checkVars___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "expects the function name here.)"};
static const lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__10 = (const lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__10_value;
static const lean_ctor_object l_Lean_Elab_TerminationBy_checkVars___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__10_value)}};
static const lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__11 = (const lean_object*)&l_Lean_Elab_TerminationBy_checkVars___closed__11_value;
static lean_once_cell_t l_Lean_Elab_TerminationBy_checkVars___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_TerminationBy_checkVars___closed__12;
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationBy_checkVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationBy_checkVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "decreasingBy"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unexpected `decreasing_by` syntax"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "partialFixpoint"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__0 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__0_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "coinductiveFixpoint"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__1 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__1_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "inductiveFixpoint"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__2 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "terminationBy"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__0 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__0_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "terminationBy\?"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__1 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__1_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "unexpected `termination_by` syntax"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__2 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "no extra parameters bounds, please omit the `=>`"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__4 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__4_value;
static lean_once_cell_t l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__4_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Unexpected Termination.suffix syntax: "};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_elabTerminationHints___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " of kind "};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__6_value;
static const lean_closure_object l_Lean_Elab_elabTerminationHints___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_elabTerminationHints___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__1_value),LEAN_SCALAR_PTR_LITERAL(224, 143, 0, 201, 195, 223, 93, 180)}};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lean_Elab_elabTerminationHints___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 199, 246, 58, 76, 113, 58, 46)}};
static const lean_object* l_Lean_Elab_elabTerminationHints___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_elabTerminationHints___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorIdx___impl(uint8_t v_x_13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_box(v_x_13_);
v___x_15_ = lean_obj_tag_nat(v___x_14_);
lean_dec(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorIdx___impl___boxed(lean_object* v_x_16_){
_start:
{
uint8_t v_x_4__boxed_17_; lean_object* v_res_18_; 
v_x_4__boxed_17_ = lean_unbox(v_x_16_);
v_res_18_ = l_Lean_Elab_PartialFixpointType_ctorIdx___impl(v_x_4__boxed_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorElim___redArg(lean_object* v_k_19_){
_start:
{
lean_inc(v_k_19_);
return v_k_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorElim___redArg___boxed(lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Elab_PartialFixpointType_ctorElim___redArg(v_k_20_);
lean_dec(v_k_20_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorElim(lean_object* v_motive_22_, lean_object* v_ctorIdx_23_, uint8_t v_t_24_, lean_object* v_h_25_, lean_object* v_k_26_){
_start:
{
lean_inc(v_k_26_);
return v_k_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_ctorElim___boxed(lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
uint8_t v_t_boxed_32_; lean_object* v_res_33_; 
v_t_boxed_32_ = lean_unbox(v_t_29_);
v_res_33_ = l_Lean_Elab_PartialFixpointType_ctorElim(v_motive_27_, v_ctorIdx_28_, v_t_boxed_32_, v_h_30_, v_k_31_);
lean_dec(v_k_31_);
lean_dec(v_ctorIdx_28_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_partialFixpoint_elim___redArg(lean_object* v_partialFixpoint_34_){
_start:
{
lean_inc(v_partialFixpoint_34_);
return v_partialFixpoint_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_partialFixpoint_elim___redArg___boxed(lean_object* v_partialFixpoint_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Elab_PartialFixpointType_partialFixpoint_elim___redArg(v_partialFixpoint_35_);
lean_dec(v_partialFixpoint_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_partialFixpoint_elim(lean_object* v_motive_37_, uint8_t v_t_38_, lean_object* v_h_39_, lean_object* v_partialFixpoint_40_){
_start:
{
lean_inc(v_partialFixpoint_40_);
return v_partialFixpoint_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_partialFixpoint_elim___boxed(lean_object* v_motive_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_partialFixpoint_44_){
_start:
{
uint8_t v_t_boxed_45_; lean_object* v_res_46_; 
v_t_boxed_45_ = lean_unbox(v_t_42_);
v_res_46_ = l_Lean_Elab_PartialFixpointType_partialFixpoint_elim(v_motive_41_, v_t_boxed_45_, v_h_43_, v_partialFixpoint_44_);
lean_dec(v_partialFixpoint_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim___redArg(lean_object* v_coinductiveFixpoint_47_){
_start:
{
lean_inc(v_coinductiveFixpoint_47_);
return v_coinductiveFixpoint_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim___redArg___boxed(lean_object* v_coinductiveFixpoint_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim___redArg(v_coinductiveFixpoint_48_);
lean_dec(v_coinductiveFixpoint_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim(lean_object* v_motive_50_, uint8_t v_t_51_, lean_object* v_h_52_, lean_object* v_coinductiveFixpoint_53_){
_start:
{
lean_inc(v_coinductiveFixpoint_53_);
return v_coinductiveFixpoint_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim___boxed(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_coinductiveFixpoint_57_){
_start:
{
uint8_t v_t_boxed_58_; lean_object* v_res_59_; 
v_t_boxed_58_ = lean_unbox(v_t_55_);
v_res_59_ = l_Lean_Elab_PartialFixpointType_coinductiveFixpoint_elim(v_motive_54_, v_t_boxed_58_, v_h_56_, v_coinductiveFixpoint_57_);
lean_dec(v_coinductiveFixpoint_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim___redArg(lean_object* v_inductiveFixpoint_60_){
_start:
{
lean_inc(v_inductiveFixpoint_60_);
return v_inductiveFixpoint_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim___redArg___boxed(lean_object* v_inductiveFixpoint_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim___redArg(v_inductiveFixpoint_61_);
lean_dec(v_inductiveFixpoint_61_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim(lean_object* v_motive_63_, uint8_t v_t_64_, lean_object* v_h_65_, lean_object* v_inductiveFixpoint_66_){
_start:
{
lean_inc(v_inductiveFixpoint_66_);
return v_inductiveFixpoint_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim___boxed(lean_object* v_motive_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_inductiveFixpoint_70_){
_start:
{
uint8_t v_t_boxed_71_; lean_object* v_res_72_; 
v_t_boxed_71_ = lean_unbox(v_t_68_);
v_res_72_ = l_Lean_Elab_PartialFixpointType_inductiveFixpoint_elim(v_motive_67_, v_t_boxed_71_, v_h_69_, v_inductiveFixpoint_70_);
lean_dec(v_inductiveFixpoint_70_);
return v_res_72_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedPartialFixpointType_default(void){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = 0;
return v___x_73_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedPartialFixpointType(void){
_start:
{
uint8_t v___x_74_; 
v___x_74_ = 0;
return v___x_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_isInductiveFixpoint(uint8_t v_x_88_){
_start:
{
if (v_x_88_ == 2)
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_isInductiveFixpoint___boxed(lean_object* v_x_91_){
_start:
{
uint8_t v_x_17__boxed_92_; uint8_t v_res_93_; lean_object* v_r_94_; 
v_x_17__boxed_92_ = lean_unbox(v_x_91_);
v_res_93_ = l_Lean_Elab_isInductiveFixpoint(v_x_17__boxed_92_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_isCoinductiveFixpoint(uint8_t v_x_95_){
_start:
{
if (v_x_95_ == 1)
{
uint8_t v___x_96_; 
v___x_96_ = 1;
return v___x_96_;
}
else
{
uint8_t v___x_97_; 
v___x_97_ = 0;
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_isCoinductiveFixpoint___boxed(lean_object* v_x_98_){
_start:
{
uint8_t v_x_17__boxed_99_; uint8_t v_res_100_; lean_object* v_r_101_; 
v_x_17__boxed_99_ = lean_unbox(v_x_98_);
v_res_100_ = l_Lean_Elab_isCoinductiveFixpoint(v_x_17__boxed_99_);
v_r_101_ = lean_box(v_res_100_);
return v_r_101_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_isPartialFixpoint(uint8_t v_x_102_){
_start:
{
if (v_x_102_ == 0)
{
uint8_t v___x_103_; 
v___x_103_ = 1;
return v___x_103_;
}
else
{
uint8_t v___x_104_; 
v___x_104_ = 0;
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_isPartialFixpoint___boxed(lean_object* v_x_105_){
_start:
{
uint8_t v_x_17__boxed_106_; uint8_t v_res_107_; lean_object* v_r_108_; 
v_x_17__boxed_106_ = lean_unbox(v_x_105_);
v_res_107_ = l_Lean_Elab_isPartialFixpoint(v_x_17__boxed_106_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_isLatticeTheoretic(uint8_t v_p_109_){
_start:
{
uint8_t v___x_110_; 
v___x_110_ = l_Lean_Elab_isInductiveFixpoint(v_p_109_);
if (v___x_110_ == 0)
{
uint8_t v___x_111_; 
v___x_111_ = l_Lean_Elab_isCoinductiveFixpoint(v_p_109_);
return v___x_111_;
}
else
{
return v___x_110_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_isLatticeTheoretic___boxed(lean_object* v_p_112_){
_start:
{
uint8_t v_p_boxed_113_; uint8_t v_res_114_; lean_object* v_r_115_; 
v_p_boxed_113_ = lean_unbox(v_p_112_);
v_res_114_ = l_Lean_Elab_isLatticeTheoretic(v_p_boxed_113_);
v_r_115_ = lean_box(v_res_114_);
return v_r_115_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_117_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__0);
v___x_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
return v___x_119_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1);
v___x_121_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
lean_ctor_set(v___x_122_, 2, v___x_121_);
lean_ctor_set(v___x_122_, 3, v___x_121_);
lean_ctor_set(v___x_122_, 4, v___x_120_);
lean_ctor_set(v___x_122_, 5, v___x_120_);
lean_ctor_set(v___x_122_, 6, v___x_120_);
lean_ctor_set(v___x_122_, 7, v___x_120_);
lean_ctor_set(v___x_122_, 8, v___x_120_);
lean_ctor_set(v___x_122_, 9, v___x_120_);
lean_ctor_set(v___x_122_, 10, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_unsigned_to_nat(32u);
v___x_124_ = lean_mk_empty_array_with_capacity(v___x_123_);
v___x_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
size_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_126_ = ((size_t)5ULL);
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = lean_unsigned_to_nat(32u);
v___x_129_ = lean_mk_empty_array_with_capacity(v___x_128_);
v___x_130_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__3);
v___x_131_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___x_129_);
lean_ctor_set(v___x_131_, 2, v___x_127_);
lean_ctor_set(v___x_131_, 3, v___x_127_);
lean_ctor_set_usize(v___x_131_, 4, v___x_126_);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_132_ = lean_box(1);
v___x_133_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__4);
v___x_134_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__1);
v___x_135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
lean_ctor_set(v___x_135_, 2, v___x_132_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1(lean_object* v_msgData_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v___x_140_; lean_object* v_toCold_141_; lean_object* v_env_142_; lean_object* v_options_143_; uint8_t v___x_144_; lean_object* v_env_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_140_ = lean_st_ref_get(v___y_138_);
v_toCold_141_ = lean_ctor_get(v___y_137_, 0);
v_env_142_ = lean_ctor_get(v___x_140_, 0);
lean_inc_ref(v_env_142_);
lean_dec(v___x_140_);
v_options_143_ = lean_ctor_get(v_toCold_141_, 2);
v___x_144_ = 0;
v_env_145_ = l_Lean_Environment_setRecordingDeps(v_env_142_, v___x_144_);
v___x_146_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__2);
v___x_147_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___closed__5);
lean_inc_ref(v_options_143_);
v___x_148_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_148_, 0, v_env_145_);
lean_ctor_set(v___x_148_, 1, v___x_146_);
lean_ctor_set(v___x_148_, 2, v___x_147_);
lean_ctor_set(v___x_148_, 3, v_options_143_);
v___x_149_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
lean_ctor_set(v___x_149_, 1, v_msgData_136_);
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1(v_msgData_151_, v___y_152_, v___y_153_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
return v_res_155_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0(uint8_t v___x_164_, lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_165_) == 1)
{
lean_object* v_pre_166_; 
v_pre_166_ = lean_ctor_get(v_x_165_, 0);
switch(lean_obj_tag(v_pre_166_))
{
case 1:
{
lean_object* v_pre_167_; 
v_pre_167_ = lean_ctor_get(v_pre_166_, 0);
switch(lean_obj_tag(v_pre_167_))
{
case 0:
{
lean_object* v_str_168_; lean_object* v_str_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v_str_168_ = lean_ctor_get(v_x_165_, 1);
v_str_169_ = lean_ctor_get(v_pre_166_, 1);
v___x_170_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__0));
v___x_171_ = lean_string_dec_eq(v_str_169_, v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_172_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__1));
v___x_173_ = lean_string_dec_eq(v_str_169_, v___x_172_);
if (v___x_173_ == 0)
{
return v___x_173_;
}
else
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__2));
v___x_175_ = lean_string_dec_eq(v_str_168_, v___x_174_);
return v___x_175_;
}
}
else
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__3));
v___x_177_ = lean_string_dec_eq(v_str_168_, v___x_176_);
return v___x_177_;
}
}
case 1:
{
lean_object* v_pre_178_; 
v_pre_178_ = lean_ctor_get(v_pre_167_, 0);
if (lean_obj_tag(v_pre_178_) == 0)
{
lean_object* v_str_179_; lean_object* v_str_180_; lean_object* v_str_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v_str_179_ = lean_ctor_get(v_x_165_, 1);
v_str_180_ = lean_ctor_get(v_pre_166_, 1);
v_str_181_ = lean_ctor_get(v_pre_167_, 1);
v___x_182_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__4));
v___x_183_ = lean_string_dec_eq(v_str_181_, v___x_182_);
if (v___x_183_ == 0)
{
return v___x_183_;
}
else
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__5));
v___x_185_ = lean_string_dec_eq(v_str_180_, v___x_184_);
if (v___x_185_ == 0)
{
return v___x_185_;
}
else
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__6));
v___x_187_ = lean_string_dec_eq(v_str_179_, v___x_186_);
return v___x_187_;
}
}
}
else
{
return v___x_164_;
}
}
default: 
{
return v___x_164_;
}
}
}
case 0:
{
lean_object* v_str_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v_str_188_ = lean_ctor_get(v_x_165_, 1);
v___x_189_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___closed__7));
v___x_190_ = lean_string_dec_eq(v_str_188_, v___x_189_);
return v___x_190_;
}
default: 
{
return v___x_164_;
}
}
}
else
{
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0___boxed(lean_object* v___x_191_, lean_object* v_x_192_){
_start:
{
uint8_t v___x_3363__boxed_193_; uint8_t v_res_194_; lean_object* v_r_195_; 
v___x_3363__boxed_193_ = lean_unbox(v___x_191_);
v_res_194_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___lam__0(v___x_3363__boxed_193_, v_x_192_);
lean_dec(v_x_192_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__2(lean_object* v_opts_196_, lean_object* v_opt_197_){
_start:
{
lean_object* v_name_198_; lean_object* v_defValue_199_; lean_object* v_map_200_; lean_object* v___x_201_; 
v_name_198_ = lean_ctor_get(v_opt_197_, 0);
v_defValue_199_ = lean_ctor_get(v_opt_197_, 1);
v_map_200_ = lean_ctor_get(v_opts_196_, 0);
v___x_201_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_200_, v_name_198_);
if (lean_obj_tag(v___x_201_) == 0)
{
uint8_t v___x_202_; 
v___x_202_ = lean_unbox(v_defValue_199_);
return v___x_202_;
}
else
{
lean_object* v_val_203_; 
v_val_203_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_val_203_);
lean_dec_ref_known(v___x_201_, 1);
if (lean_obj_tag(v_val_203_) == 1)
{
uint8_t v_v_204_; 
v_v_204_ = lean_ctor_get_uint8(v_val_203_, 0);
lean_dec_ref_known(v_val_203_, 0);
return v_v_204_;
}
else
{
uint8_t v___x_205_; 
lean_dec(v_val_203_);
v___x_205_ = lean_unbox(v_defValue_199_);
return v___x_205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__2___boxed(lean_object* v_opts_206_, lean_object* v_opt_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__2(v_opts_206_, v_opt_207_);
lean_dec_ref(v_opt_207_);
lean_dec_ref(v_opts_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0(lean_object* v_ref_214_, lean_object* v_msgData_215_, uint8_t v_severity_216_, uint8_t v_isSilent_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
uint8_t v___y_222_; lean_object* v___y_223_; lean_object* v___y_224_; lean_object* v___y_225_; uint8_t v___y_226_; lean_object* v___y_227_; lean_object* v___y_228_; lean_object* v_toCold_229_; lean_object* v___y_230_; lean_object* v___y_259_; lean_object* v___y_260_; uint8_t v___y_261_; uint8_t v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; uint8_t v___y_265_; lean_object* v___y_266_; uint8_t v___y_286_; lean_object* v___y_287_; uint8_t v___y_288_; lean_object* v___y_289_; lean_object* v___y_290_; uint8_t v___y_291_; lean_object* v___y_292_; uint8_t v___y_296_; uint8_t v___x_313_; uint8_t v___x_314_; 
v___x_313_ = 2;
v___x_314_ = l_Lean_instBEqMessageSeverity_beq(v_severity_216_, v___x_313_);
if (v___x_314_ == 0)
{
goto v___jp_306_;
}
else
{
uint8_t v___x_315_; 
lean_inc_ref(v_msgData_215_);
v___x_315_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_215_);
if (v___x_315_ == 0)
{
goto v___jp_306_;
}
else
{
lean_object* v___x_316_; lean_object* v___x_317_; 
lean_dec_ref(v_msgData_215_);
v___x_316_ = lean_box(0);
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
}
v___jp_221_:
{
lean_object* v_currNamespace_231_; lean_object* v_openDecls_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v_env_237_; lean_object* v_nextMacroScope_238_; lean_object* v_ngen_239_; lean_object* v_auxDeclNGen_240_; lean_object* v_traceState_241_; lean_object* v_cache_242_; lean_object* v_recordedDeps_243_; lean_object* v_messages_244_; lean_object* v_infoState_245_; lean_object* v_snapshotTasks_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_257_; 
v_currNamespace_231_ = lean_ctor_get(v_toCold_229_, 4);
v_openDecls_232_ = lean_ctor_get(v_toCold_229_, 5);
lean_inc(v_openDecls_232_);
lean_inc(v_currNamespace_231_);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v_currNamespace_231_);
lean_ctor_set(v___x_233_, 1, v_openDecls_232_);
v___x_234_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___y_223_);
lean_inc_ref(v___y_225_);
lean_inc_ref(v___y_227_);
v___x_235_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_235_, 0, v___y_227_);
lean_ctor_set(v___x_235_, 1, v___y_224_);
lean_ctor_set(v___x_235_, 2, v___y_228_);
lean_ctor_set(v___x_235_, 3, v___y_225_);
lean_ctor_set(v___x_235_, 4, v___x_234_);
lean_ctor_set_uint8(v___x_235_, sizeof(void*)*5, v___y_222_);
lean_ctor_set_uint8(v___x_235_, sizeof(void*)*5 + 1, v___y_226_);
lean_ctor_set_uint8(v___x_235_, sizeof(void*)*5 + 2, v_isSilent_217_);
v___x_236_ = lean_st_ref_take(v___y_230_);
v_env_237_ = lean_ctor_get(v___x_236_, 0);
v_nextMacroScope_238_ = lean_ctor_get(v___x_236_, 1);
v_ngen_239_ = lean_ctor_get(v___x_236_, 2);
v_auxDeclNGen_240_ = lean_ctor_get(v___x_236_, 3);
v_traceState_241_ = lean_ctor_get(v___x_236_, 4);
v_cache_242_ = lean_ctor_get(v___x_236_, 5);
v_recordedDeps_243_ = lean_ctor_get(v___x_236_, 6);
v_messages_244_ = lean_ctor_get(v___x_236_, 7);
v_infoState_245_ = lean_ctor_get(v___x_236_, 8);
v_snapshotTasks_246_ = lean_ctor_get(v___x_236_, 9);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_257_ == 0)
{
v___x_248_ = v___x_236_;
v_isShared_249_ = v_isSharedCheck_257_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_snapshotTasks_246_);
lean_inc(v_infoState_245_);
lean_inc(v_messages_244_);
lean_inc(v_recordedDeps_243_);
lean_inc(v_cache_242_);
lean_inc(v_traceState_241_);
lean_inc(v_auxDeclNGen_240_);
lean_inc(v_ngen_239_);
lean_inc(v_nextMacroScope_238_);
lean_inc(v_env_237_);
lean_dec(v___x_236_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_257_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_250_ = lean_box(0);
v___x_251_ = l_Lean_MessageLog_add(v___x_235_, v_messages_244_);
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 7, v___x_251_);
v___x_253_ = v___x_248_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_env_237_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v_nextMacroScope_238_);
lean_ctor_set(v_reuseFailAlloc_256_, 2, v_ngen_239_);
lean_ctor_set(v_reuseFailAlloc_256_, 3, v_auxDeclNGen_240_);
lean_ctor_set(v_reuseFailAlloc_256_, 4, v_traceState_241_);
lean_ctor_set(v_reuseFailAlloc_256_, 5, v_cache_242_);
lean_ctor_set(v_reuseFailAlloc_256_, 6, v_recordedDeps_243_);
lean_ctor_set(v_reuseFailAlloc_256_, 7, v___x_251_);
lean_ctor_set(v_reuseFailAlloc_256_, 8, v_infoState_245_);
lean_ctor_set(v_reuseFailAlloc_256_, 9, v_snapshotTasks_246_);
v___x_253_ = v_reuseFailAlloc_256_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_st_ref_put(v___y_230_, v___x_253_);
v___x_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_250_);
return v___x_255_;
}
}
}
v___jp_258_:
{
lean_object* v_fileName_267_; lean_object* v_fileMap_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_284_; 
v_fileName_267_ = lean_ctor_get(v___y_263_, 0);
v_fileMap_268_ = lean_ctor_get(v___y_263_, 1);
v___x_269_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_215_);
v___x_270_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__1(v___x_269_, v___y_218_, v___y_219_);
v_a_271_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_284_ == 0)
{
v___x_273_ = v___x_270_;
v_isShared_274_ = v_isSharedCheck_284_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_270_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_284_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
lean_inc_ref_n(v_fileMap_268_, 2);
v___x_275_ = l_Lean_FileMap_toPosition(v_fileMap_268_, v___y_264_);
lean_dec(v___y_264_);
v___x_276_ = l_Lean_FileMap_toPosition(v_fileMap_268_, v___y_266_);
lean_dec(v___y_266_);
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
v___x_278_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___closed__0));
if (v___y_262_ == 0)
{
lean_del_object(v___x_273_);
v___y_222_ = v___y_261_;
v___y_223_ = v_a_271_;
v___y_224_ = v___x_275_;
v___y_225_ = v___x_278_;
v___y_226_ = v___y_265_;
v___y_227_ = v_fileName_267_;
v___y_228_ = v___x_277_;
v_toCold_229_ = v___y_259_;
v___y_230_ = v___y_219_;
goto v___jp_221_;
}
else
{
uint8_t v___x_279_; 
lean_inc(v_a_271_);
lean_inc_ref(v___y_260_);
v___x_279_ = l_Lean_MessageData_hasTag(v___y_260_, v_a_271_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_282_; 
lean_dec_ref_known(v___x_277_, 1);
lean_dec_ref(v___x_275_);
lean_dec(v_a_271_);
v___x_280_ = lean_box(0);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_280_);
v___x_282_ = v___x_273_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
else
{
lean_del_object(v___x_273_);
v___y_222_ = v___y_261_;
v___y_223_ = v_a_271_;
v___y_224_ = v___x_275_;
v___y_225_ = v___x_278_;
v___y_226_ = v___y_265_;
v___y_227_ = v_fileName_267_;
v___y_228_ = v___x_277_;
v_toCold_229_ = v___y_259_;
v___y_230_ = v___y_219_;
goto v___jp_221_;
}
}
}
}
v___jp_285_:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lean_Syntax_getTailPos_x3f(v___y_290_, v___y_286_);
lean_dec(v___y_290_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_inc(v___y_292_);
v___y_259_ = v___y_287_;
v___y_260_ = v___y_289_;
v___y_261_ = v___y_286_;
v___y_262_ = v___y_288_;
v___y_263_ = v___y_287_;
v___y_264_ = v___y_292_;
v___y_265_ = v___y_291_;
v___y_266_ = v___y_292_;
goto v___jp_258_;
}
else
{
lean_object* v_val_294_; 
v_val_294_ = lean_ctor_get(v___x_293_, 0);
lean_inc(v_val_294_);
lean_dec_ref_known(v___x_293_, 1);
v___y_259_ = v___y_287_;
v___y_260_ = v___y_289_;
v___y_261_ = v___y_286_;
v___y_262_ = v___y_288_;
v___y_263_ = v___y_287_;
v___y_264_ = v___y_292_;
v___y_265_ = v___y_291_;
v___y_266_ = v_val_294_;
goto v___jp_258_;
}
}
v___jp_295_:
{
lean_object* v_toCold_297_; lean_object* v_ref_298_; uint8_t v_suppressElabErrors_299_; lean_object* v_ref_300_; uint8_t v___x_301_; lean_object* v___f_302_; lean_object* v___x_303_; 
v_toCold_297_ = lean_ctor_get(v___y_218_, 0);
v_ref_298_ = lean_ctor_get(v___y_218_, 2);
v_suppressElabErrors_299_ = lean_ctor_get_uint8(v___y_218_, sizeof(void*)*3 + 2);
v_ref_300_ = l_Lean_replaceRef(v_ref_214_, v_ref_298_);
v___x_301_ = 0;
v___f_302_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___closed__1));
v___x_303_ = l_Lean_Syntax_getPos_x3f(v_ref_300_, v___x_301_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v___x_304_; 
v___x_304_ = lean_unsigned_to_nat(0u);
v___y_286_ = v___x_301_;
v___y_287_ = v_toCold_297_;
v___y_288_ = v_suppressElabErrors_299_;
v___y_289_ = v___f_302_;
v___y_290_ = v_ref_300_;
v___y_291_ = v___y_296_;
v___y_292_ = v___x_304_;
goto v___jp_285_;
}
else
{
lean_object* v_val_305_; 
v_val_305_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_val_305_);
lean_dec_ref_known(v___x_303_, 1);
v___y_286_ = v___x_301_;
v___y_287_ = v_toCold_297_;
v___y_288_ = v_suppressElabErrors_299_;
v___y_289_ = v___f_302_;
v___y_290_ = v_ref_300_;
v___y_291_ = v___y_296_;
v___y_292_ = v_val_305_;
goto v___jp_285_;
}
}
v___jp_306_:
{
uint8_t v___x_307_; uint8_t v___x_308_; 
v___x_307_ = 1;
v___x_308_ = l_Lean_instBEqMessageSeverity_beq(v_severity_216_, v___x_307_);
if (v___x_308_ == 0)
{
v___y_296_ = v_severity_216_;
goto v___jp_295_;
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_309_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_218_);
v___x_310_ = l_Lean_warningAsError;
v___x_311_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0_spec__2(v___x_309_, v___x_310_);
lean_dec_ref(v___x_309_);
if (v___x_311_ == 0)
{
v___y_296_ = v_severity_216_;
goto v___jp_295_;
}
else
{
uint8_t v___x_312_; 
v___x_312_ = 2;
v___y_296_ = v___x_312_;
goto v___jp_295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0___boxed(lean_object* v_ref_318_, lean_object* v_msgData_319_, lean_object* v_severity_320_, lean_object* v_isSilent_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
uint8_t v_severity_boxed_325_; uint8_t v_isSilent_boxed_326_; lean_object* v_res_327_; 
v_severity_boxed_325_ = lean_unbox(v_severity_320_);
v_isSilent_boxed_326_ = lean_unbox(v_isSilent_321_);
v_res_327_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0(v_ref_318_, v_msgData_319_, v_severity_boxed_325_, v_isSilent_boxed_326_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec(v_ref_318_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(lean_object* v_ref_328_, lean_object* v_msgData_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
uint8_t v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; 
v___x_333_ = 1;
v___x_334_ = 0;
v___x_335_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0_spec__0(v_ref_328_, v_msgData_329_, v___x_333_, v___x_334_, v___y_330_, v___y_331_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0___boxed(lean_object* v_ref_336_, lean_object* v_msgData_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(v_ref_336_, v_msgData_337_, v___y_338_, v___y_339_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v_ref_336_);
return v_res_341_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationHints_ensureNone___closed__1(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = ((lean_object*)(l_Lean_Elab_TerminationHints_ensureNone___closed__0));
v___x_344_ = l_Lean_stringToMessageData(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationHints_ensureNone___closed__3(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = ((lean_object*)(l_Lean_Elab_TerminationHints_ensureNone___closed__2));
v___x_347_ = l_Lean_stringToMessageData(v___x_346_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationHints_ensureNone___closed__5(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(l_Lean_Elab_TerminationHints_ensureNone___closed__4));
v___x_350_ = l_Lean_stringToMessageData(v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationHints_ensureNone___closed__7(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(l_Lean_Elab_TerminationHints_ensureNone___closed__6));
v___x_353_ = l_Lean_stringToMessageData(v___x_352_);
return v___x_353_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationHints_ensureNone___closed__9(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = ((lean_object*)(l_Lean_Elab_TerminationHints_ensureNone___closed__8));
v___x_356_ = l_Lean_stringToMessageData(v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationHints_ensureNone___closed__11(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = ((lean_object*)(l_Lean_Elab_TerminationHints_ensureNone___closed__10));
v___x_359_ = l_Lean_stringToMessageData(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationHints_ensureNone___closed__13(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = ((lean_object*)(l_Lean_Elab_TerminationHints_ensureNone___closed__12));
v___x_362_ = l_Lean_stringToMessageData(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_ensureNone(lean_object* v_hints_363_, lean_object* v_reason_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_ref_368_; lean_object* v_terminationBy_x3f_x3f_369_; lean_object* v_terminationBy_x3f_370_; lean_object* v_partialFixpoint_x3f_371_; lean_object* v_decreasingBy_x3f_372_; uint8_t v_warnIfRedundant_373_; lean_object* v___y_375_; lean_object* v___y_376_; 
v_ref_368_ = lean_ctor_get(v_hints_363_, 0);
lean_inc(v_ref_368_);
v_terminationBy_x3f_x3f_369_ = lean_ctor_get(v_hints_363_, 1);
lean_inc(v_terminationBy_x3f_x3f_369_);
v_terminationBy_x3f_370_ = lean_ctor_get(v_hints_363_, 2);
lean_inc(v_terminationBy_x3f_370_);
v_partialFixpoint_x3f_371_ = lean_ctor_get(v_hints_363_, 3);
lean_inc(v_partialFixpoint_x3f_371_);
v_decreasingBy_x3f_372_ = lean_ctor_get(v_hints_363_, 4);
lean_inc(v_decreasingBy_x3f_372_);
v_warnIfRedundant_373_ = lean_ctor_get_uint8(v_hints_363_, sizeof(void*)*6);
lean_dec_ref(v_hints_363_);
if (v_warnIfRedundant_373_ == 0)
{
lean_object* v___x_381_; lean_object* v___x_382_; 
lean_dec(v_decreasingBy_x3f_372_);
lean_dec(v_partialFixpoint_x3f_371_);
lean_dec(v_terminationBy_x3f_370_);
lean_dec(v_terminationBy_x3f_x3f_369_);
lean_dec(v_ref_368_);
lean_dec_ref(v_reason_364_);
v___x_381_ = lean_box(0);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
return v___x_382_;
}
else
{
if (lean_obj_tag(v_terminationBy_x3f_x3f_369_) == 0)
{
if (lean_obj_tag(v_terminationBy_x3f_370_) == 0)
{
if (lean_obj_tag(v_decreasingBy_x3f_372_) == 0)
{
lean_dec(v_ref_368_);
if (lean_obj_tag(v_partialFixpoint_x3f_371_) == 0)
{
lean_object* v___x_383_; lean_object* v___x_384_; 
lean_dec_ref(v_reason_364_);
v___x_383_ = lean_box(0);
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
return v___x_384_;
}
else
{
lean_object* v_val_385_; uint8_t v_fixpointType_386_; 
v_val_385_ = lean_ctor_get(v_partialFixpoint_x3f_371_, 0);
lean_inc(v_val_385_);
lean_dec_ref_known(v_partialFixpoint_x3f_371_, 1);
v_fixpointType_386_ = lean_ctor_get_uint8(v_val_385_, sizeof(void*)*2);
switch(v_fixpointType_386_)
{
case 0:
{
lean_object* v_ref_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_ref_387_ = lean_ctor_get(v_val_385_, 0);
lean_inc(v_ref_387_);
lean_dec(v_val_385_);
v___x_388_ = lean_obj_once(&l_Lean_Elab_TerminationHints_ensureNone___closed__3, &l_Lean_Elab_TerminationHints_ensureNone___closed__3_once, _init_l_Lean_Elab_TerminationHints_ensureNone___closed__3);
v___x_389_ = l_Lean_stringToMessageData(v_reason_364_);
v___x_390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_388_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(v_ref_387_, v___x_390_, v_a_365_, v_a_366_);
lean_dec(v_ref_387_);
return v___x_391_;
}
case 1:
{
lean_object* v_ref_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_ref_392_ = lean_ctor_get(v_val_385_, 0);
lean_inc(v_ref_392_);
lean_dec(v_val_385_);
v___x_393_ = lean_obj_once(&l_Lean_Elab_TerminationHints_ensureNone___closed__5, &l_Lean_Elab_TerminationHints_ensureNone___closed__5_once, _init_l_Lean_Elab_TerminationHints_ensureNone___closed__5);
v___x_394_ = l_Lean_stringToMessageData(v_reason_364_);
v___x_395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_393_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(v_ref_392_, v___x_395_, v_a_365_, v_a_366_);
lean_dec(v_ref_392_);
return v___x_396_;
}
default: 
{
lean_object* v_ref_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_ref_397_ = lean_ctor_get(v_val_385_, 0);
lean_inc(v_ref_397_);
lean_dec(v_val_385_);
v___x_398_ = lean_obj_once(&l_Lean_Elab_TerminationHints_ensureNone___closed__7, &l_Lean_Elab_TerminationHints_ensureNone___closed__7_once, _init_l_Lean_Elab_TerminationHints_ensureNone___closed__7);
v___x_399_ = l_Lean_stringToMessageData(v_reason_364_);
v___x_400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(v_ref_397_, v___x_400_, v_a_365_, v_a_366_);
lean_dec(v_ref_397_);
return v___x_401_;
}
}
}
}
else
{
if (lean_obj_tag(v_partialFixpoint_x3f_371_) == 0)
{
lean_object* v_val_402_; lean_object* v_ref_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_413_; 
lean_dec(v_ref_368_);
v_val_402_ = lean_ctor_get(v_decreasingBy_x3f_372_, 0);
lean_inc(v_val_402_);
lean_dec_ref_known(v_decreasingBy_x3f_372_, 1);
v_ref_403_ = lean_ctor_get(v_val_402_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v_val_402_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; 
v_unused_414_ = lean_ctor_get(v_val_402_, 1);
lean_dec(v_unused_414_);
v___x_405_ = v_val_402_;
v_isShared_406_ = v_isSharedCheck_413_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_ref_403_);
lean_dec(v_val_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_413_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_407_ = lean_obj_once(&l_Lean_Elab_TerminationHints_ensureNone___closed__9, &l_Lean_Elab_TerminationHints_ensureNone___closed__9_once, _init_l_Lean_Elab_TerminationHints_ensureNone___closed__9);
v___x_408_ = l_Lean_stringToMessageData(v_reason_364_);
if (v_isShared_406_ == 0)
{
lean_ctor_set_tag(v___x_405_, 7);
lean_ctor_set(v___x_405_, 1, v___x_408_);
lean_ctor_set(v___x_405_, 0, v___x_407_);
v___x_410_ = v___x_405_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v___x_408_);
v___x_410_ = v_reuseFailAlloc_412_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(v_ref_403_, v___x_410_, v_a_365_, v_a_366_);
lean_dec(v_ref_403_);
return v___x_411_;
}
}
}
else
{
lean_dec_ref_known(v_decreasingBy_x3f_372_, 1);
lean_dec(v_partialFixpoint_x3f_371_);
v___y_375_ = v_a_365_;
v___y_376_ = v_a_366_;
goto v___jp_374_;
}
}
}
else
{
if (lean_obj_tag(v_decreasingBy_x3f_372_) == 0)
{
if (lean_obj_tag(v_partialFixpoint_x3f_371_) == 0)
{
lean_object* v_val_415_; lean_object* v_ref_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
lean_dec(v_ref_368_);
v_val_415_ = lean_ctor_get(v_terminationBy_x3f_370_, 0);
lean_inc(v_val_415_);
lean_dec_ref_known(v_terminationBy_x3f_370_, 1);
v_ref_416_ = lean_ctor_get(v_val_415_, 0);
lean_inc(v_ref_416_);
lean_dec(v_val_415_);
v___x_417_ = lean_obj_once(&l_Lean_Elab_TerminationHints_ensureNone___closed__11, &l_Lean_Elab_TerminationHints_ensureNone___closed__11_once, _init_l_Lean_Elab_TerminationHints_ensureNone___closed__11);
v___x_418_ = l_Lean_stringToMessageData(v_reason_364_);
v___x_419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_417_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(v_ref_416_, v___x_419_, v_a_365_, v_a_366_);
lean_dec(v_ref_416_);
return v___x_420_;
}
else
{
lean_dec_ref_known(v_terminationBy_x3f_370_, 1);
lean_dec(v_partialFixpoint_x3f_371_);
v___y_375_ = v_a_365_;
v___y_376_ = v_a_366_;
goto v___jp_374_;
}
}
else
{
lean_dec_ref_known(v_terminationBy_x3f_370_, 1);
lean_dec(v_decreasingBy_x3f_372_);
lean_dec(v_partialFixpoint_x3f_371_);
v___y_375_ = v_a_365_;
v___y_376_ = v_a_366_;
goto v___jp_374_;
}
}
}
else
{
if (lean_obj_tag(v_terminationBy_x3f_370_) == 0)
{
if (lean_obj_tag(v_decreasingBy_x3f_372_) == 0)
{
if (lean_obj_tag(v_partialFixpoint_x3f_371_) == 0)
{
lean_object* v_val_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
lean_dec(v_ref_368_);
v_val_421_ = lean_ctor_get(v_terminationBy_x3f_x3f_369_, 0);
lean_inc(v_val_421_);
lean_dec_ref_known(v_terminationBy_x3f_x3f_369_, 1);
v___x_422_ = lean_obj_once(&l_Lean_Elab_TerminationHints_ensureNone___closed__13, &l_Lean_Elab_TerminationHints_ensureNone___closed__13_once, _init_l_Lean_Elab_TerminationHints_ensureNone___closed__13);
v___x_423_ = l_Lean_stringToMessageData(v_reason_364_);
v___x_424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set(v___x_424_, 1, v___x_423_);
v___x_425_ = l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(v_val_421_, v___x_424_, v_a_365_, v_a_366_);
lean_dec(v_val_421_);
return v___x_425_;
}
else
{
lean_dec_ref_known(v_terminationBy_x3f_x3f_369_, 1);
lean_dec(v_partialFixpoint_x3f_371_);
v___y_375_ = v_a_365_;
v___y_376_ = v_a_366_;
goto v___jp_374_;
}
}
else
{
lean_dec_ref_known(v_terminationBy_x3f_x3f_369_, 1);
lean_dec(v_decreasingBy_x3f_372_);
lean_dec(v_partialFixpoint_x3f_371_);
v___y_375_ = v_a_365_;
v___y_376_ = v_a_366_;
goto v___jp_374_;
}
}
else
{
lean_dec_ref_known(v_terminationBy_x3f_x3f_369_, 1);
lean_dec(v_decreasingBy_x3f_372_);
lean_dec(v_partialFixpoint_x3f_371_);
lean_dec(v_terminationBy_x3f_370_);
v___y_375_ = v_a_365_;
v___y_376_ = v_a_366_;
goto v___jp_374_;
}
}
}
v___jp_374_:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_377_ = lean_obj_once(&l_Lean_Elab_TerminationHints_ensureNone___closed__1, &l_Lean_Elab_TerminationHints_ensureNone___closed__1_once, _init_l_Lean_Elab_TerminationHints_ensureNone___closed__1);
v___x_378_ = l_Lean_stringToMessageData(v_reason_364_);
v___x_379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_377_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = l_Lean_logWarningAt___at___00Lean_Elab_TerminationHints_ensureNone_spec__0(v_ref_368_, v___x_379_, v___y_375_, v___y_376_);
lean_dec(v_ref_368_);
return v___x_380_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_ensureNone___boxed(lean_object* v_hints_426_, lean_object* v_reason_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Elab_TerminationHints_ensureNone(v_hints_426_, v_reason_427_, v_a_428_, v_a_429_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
return v_res_431_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_TerminationHints_isNotNone(lean_object* v_hints_432_){
_start:
{
lean_object* v_terminationBy_x3f_x3f_433_; 
v_terminationBy_x3f_x3f_433_ = lean_ctor_get(v_hints_432_, 1);
if (lean_obj_tag(v_terminationBy_x3f_x3f_433_) == 0)
{
lean_object* v_terminationBy_x3f_434_; 
v_terminationBy_x3f_434_ = lean_ctor_get(v_hints_432_, 2);
if (lean_obj_tag(v_terminationBy_x3f_434_) == 0)
{
lean_object* v_decreasingBy_x3f_435_; 
v_decreasingBy_x3f_435_ = lean_ctor_get(v_hints_432_, 4);
if (lean_obj_tag(v_decreasingBy_x3f_435_) == 0)
{
lean_object* v_partialFixpoint_x3f_436_; 
v_partialFixpoint_x3f_436_ = lean_ctor_get(v_hints_432_, 3);
if (lean_obj_tag(v_partialFixpoint_x3f_436_) == 0)
{
uint8_t v___x_437_; 
v___x_437_ = 0;
return v___x_437_;
}
else
{
uint8_t v___x_438_; 
v___x_438_ = 1;
return v___x_438_;
}
}
else
{
uint8_t v___x_439_; 
v___x_439_ = 1;
return v___x_439_;
}
}
else
{
uint8_t v___x_440_; 
v___x_440_ = 1;
return v___x_440_;
}
}
else
{
uint8_t v___x_441_; 
v___x_441_ = 1;
return v___x_441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_isNotNone___boxed(lean_object* v_hints_442_){
_start:
{
uint8_t v_res_443_; lean_object* v_r_444_; 
v_res_443_ = l_Lean_Elab_TerminationHints_isNotNone(v_hints_442_);
lean_dec_ref(v_hints_442_);
v_r_444_ = lean_box(v_res_443_);
return v_r_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_rememberExtraParams(lean_object* v_headerParams_445_, lean_object* v_hints_446_, lean_object* v_value_447_){
_start:
{
lean_object* v_ref_448_; lean_object* v_terminationBy_x3f_x3f_449_; lean_object* v_terminationBy_x3f_450_; lean_object* v_partialFixpoint_x3f_451_; lean_object* v_decreasingBy_x3f_452_; uint8_t v_warnIfRedundant_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_462_; 
v_ref_448_ = lean_ctor_get(v_hints_446_, 0);
v_terminationBy_x3f_x3f_449_ = lean_ctor_get(v_hints_446_, 1);
v_terminationBy_x3f_450_ = lean_ctor_get(v_hints_446_, 2);
v_partialFixpoint_x3f_451_ = lean_ctor_get(v_hints_446_, 3);
v_decreasingBy_x3f_452_ = lean_ctor_get(v_hints_446_, 4);
v_warnIfRedundant_453_ = lean_ctor_get_uint8(v_hints_446_, sizeof(void*)*6);
v_isSharedCheck_462_ = !lean_is_exclusive(v_hints_446_);
if (v_isSharedCheck_462_ == 0)
{
lean_object* v_unused_463_; 
v_unused_463_ = lean_ctor_get(v_hints_446_, 5);
lean_dec(v_unused_463_);
v___x_455_ = v_hints_446_;
v_isShared_456_ = v_isSharedCheck_462_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_decreasingBy_x3f_452_);
lean_inc(v_partialFixpoint_x3f_451_);
lean_inc(v_terminationBy_x3f_450_);
lean_inc(v_terminationBy_x3f_x3f_449_);
lean_inc(v_ref_448_);
lean_dec(v_hints_446_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_462_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_457_ = l_Lean_Expr_getNumHeadLambdas(v_value_447_);
v___x_458_ = lean_nat_sub(v___x_457_, v_headerParams_445_);
lean_dec(v___x_457_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 5, v___x_458_);
v___x_460_ = v___x_455_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_ref_448_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_terminationBy_x3f_x3f_449_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_terminationBy_x3f_450_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v_partialFixpoint_x3f_451_);
lean_ctor_set(v_reuseFailAlloc_461_, 4, v_decreasingBy_x3f_452_);
lean_ctor_set(v_reuseFailAlloc_461_, 5, v___x_458_);
lean_ctor_set_uint8(v_reuseFailAlloc_461_, sizeof(void*)*6, v_warnIfRedundant_453_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationHints_rememberExtraParams___boxed(lean_object* v_headerParams_464_, lean_object* v_hints_465_, lean_object* v_value_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lean_Elab_TerminationHints_rememberExtraParams(v_headerParams_464_, v_hints_465_, v_value_466_);
lean_dec_ref(v_value_466_);
lean_dec(v_headerParams_464_);
return v_res_467_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__1(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__0));
v___x_470_ = l_Lean_stringToMessageData(v___x_469_);
return v___x_470_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__4(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__3));
v___x_475_ = l_Lean_MessageData_ofFormat(v___x_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters(lean_object* v_a_476_){
_start:
{
lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_477_ = lean_unsigned_to_nat(1u);
v___x_478_ = lean_nat_dec_eq(v_a_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_479_ = l_Nat_reprFast(v_a_476_);
v___x_480_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
v___x_481_ = l_Lean_MessageData_ofFormat(v___x_480_);
v___x_482_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__1, &l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__1);
v___x_483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
return v___x_483_;
}
else
{
lean_object* v___x_484_; 
lean_dec(v_a_476_);
v___x_484_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__4, &l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters___closed__4);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0_spec__1(lean_object* v_msgData_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v___x_491_; lean_object* v_env_492_; uint8_t v___x_493_; lean_object* v_env_494_; lean_object* v___x_495_; lean_object* v_toCold_496_; lean_object* v_mctx_497_; lean_object* v_lctx_498_; lean_object* v_options_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_491_ = lean_st_ref_get(v___y_489_);
v_env_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc_ref(v_env_492_);
lean_dec(v___x_491_);
v___x_493_ = 0;
v_env_494_ = l_Lean_Environment_setRecordingDeps(v_env_492_, v___x_493_);
v___x_495_ = lean_st_ref_get(v___y_487_);
v_toCold_496_ = lean_ctor_get(v___y_488_, 0);
v_mctx_497_ = lean_ctor_get(v___x_495_, 0);
lean_inc_ref(v_mctx_497_);
lean_dec(v___x_495_);
v_lctx_498_ = lean_ctor_get(v___y_486_, 2);
v_options_499_ = lean_ctor_get(v_toCold_496_, 2);
lean_inc_ref(v_options_499_);
lean_inc_ref(v_lctx_498_);
v___x_500_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_500_, 0, v_env_494_);
lean_ctor_set(v___x_500_, 1, v_mctx_497_);
lean_ctor_set(v___x_500_, 2, v_lctx_498_);
lean_ctor_set(v___x_500_, 3, v_options_499_);
v___x_501_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v_msgData_485_);
v___x_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0_spec__1(v_msgData_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___redArg(lean_object* v_msg_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_ref_516_; lean_object* v___x_517_; lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_526_; 
v_ref_516_ = lean_ctor_get(v___y_513_, 2);
v___x_517_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0_spec__1(v_msg_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
v_a_518_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_526_ == 0)
{
v___x_520_ = v___x_517_;
v_isShared_521_ = v_isSharedCheck_526_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_517_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_526_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_522_; lean_object* v___x_524_; 
lean_inc(v_ref_516_);
v___x_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_522_, 0, v_ref_516_);
lean_ctor_set(v___x_522_, 1, v_a_518_);
if (v_isShared_521_ == 0)
{
lean_ctor_set_tag(v___x_520_, 1);
lean_ctor_set(v___x_520_, 0, v___x_522_);
v___x_524_ = v___x_520_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___redArg___boxed(lean_object* v_msg_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___redArg(v_msg_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg(lean_object* v_ref_534_, lean_object* v_msg_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_toCold_541_; lean_object* v_currRecDepth_542_; lean_object* v_ref_543_; uint16_t v_optionFlags_544_; uint8_t v_suppressElabErrors_545_; uint8_t v_checkDeprecated_546_; uint8_t v_isRecordingDeps_547_; lean_object* v_ref_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v_toCold_541_ = lean_ctor_get(v___y_538_, 0);
v_currRecDepth_542_ = lean_ctor_get(v___y_538_, 1);
v_ref_543_ = lean_ctor_get(v___y_538_, 2);
v_optionFlags_544_ = lean_ctor_get_uint16(v___y_538_, sizeof(void*)*3);
v_suppressElabErrors_545_ = lean_ctor_get_uint8(v___y_538_, sizeof(void*)*3 + 2);
v_checkDeprecated_546_ = lean_ctor_get_uint8(v___y_538_, sizeof(void*)*3 + 3);
v_isRecordingDeps_547_ = lean_ctor_get_uint8(v___y_538_, sizeof(void*)*3 + 4);
v_ref_548_ = l_Lean_replaceRef(v_ref_534_, v_ref_543_);
lean_inc(v_currRecDepth_542_);
lean_inc_ref(v_toCold_541_);
v___x_549_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_549_, 0, v_toCold_541_);
lean_ctor_set(v___x_549_, 1, v_currRecDepth_542_);
lean_ctor_set(v___x_549_, 2, v_ref_548_);
lean_ctor_set_uint16(v___x_549_, sizeof(void*)*3, v_optionFlags_544_);
lean_ctor_set_uint8(v___x_549_, sizeof(void*)*3 + 2, v_suppressElabErrors_545_);
lean_ctor_set_uint8(v___x_549_, sizeof(void*)*3 + 3, v_checkDeprecated_546_);
lean_ctor_set_uint8(v___x_549_, sizeof(void*)*3 + 4, v_isRecordingDeps_547_);
v___x_550_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___redArg(v_msg_535_, v___y_536_, v___y_537_, v___x_549_, v___y_539_);
lean_dec_ref_known(v___x_549_, 3);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg___boxed(lean_object* v_ref_551_, lean_object* v_msg_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg(v_ref_551_, v_msg_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v_ref_551_);
return v_res_558_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationBy_checkVars___closed__1(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = ((lean_object*)(l_Lean_Elab_TerminationBy_checkVars___closed__0));
v___x_561_ = l_Lean_stringToMessageData(v___x_560_);
return v___x_561_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationBy_checkVars___closed__3(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = ((lean_object*)(l_Lean_Elab_TerminationBy_checkVars___closed__2));
v___x_564_ = l_Lean_stringToMessageData(v___x_563_);
return v___x_564_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationBy_checkVars___closed__5(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(l_Lean_Elab_TerminationBy_checkVars___closed__4));
v___x_567_ = l_Lean_stringToMessageData(v___x_566_);
return v___x_567_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationBy_checkVars___closed__9(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = ((lean_object*)(l_Lean_Elab_TerminationBy_checkVars___closed__8));
v___x_573_ = l_Lean_stringToMessageData(v___x_572_);
return v___x_573_;
}
}
static lean_object* _init_l_Lean_Elab_TerminationBy_checkVars___closed__12(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = ((lean_object*)(l_Lean_Elab_TerminationBy_checkVars___closed__11));
v___x_578_ = l_Lean_MessageData_ofFormat(v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationBy_checkVars(lean_object* v_funName_579_, lean_object* v_extraParams_580_, lean_object* v_tb_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
uint8_t v_synthetic_587_; 
v_synthetic_587_ = lean_ctor_get_uint8(v_tb_581_, sizeof(void*)*3 + 1);
if (v_synthetic_587_ == 0)
{
lean_object* v_ref_588_; lean_object* v_vars_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v_ref_588_ = lean_ctor_get(v_tb_581_, 0);
v_vars_589_ = lean_ctor_get(v_tb_581_, 1);
v___x_590_ = lean_array_get_size(v_vars_589_);
v___x_591_ = lean_nat_dec_lt(v_extraParams_580_, v___x_590_);
if (v___x_591_ == 0)
{
lean_object* v___x_592_; lean_object* v___x_593_; 
lean_dec(v_extraParams_580_);
lean_dec(v_funName_579_);
v___x_592_ = lean_box(0);
v___x_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
return v___x_593_;
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_msg_604_; lean_object* v___x_605_; lean_object* v_ident_606_; lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_594_ = l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters(v___x_590_);
v___x_595_ = lean_obj_once(&l_Lean_Elab_TerminationBy_checkVars___closed__1, &l_Lean_Elab_TerminationBy_checkVars___closed__1_once, _init_l_Lean_Elab_TerminationBy_checkVars___closed__1);
v___x_596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
lean_inc(v_funName_579_);
v___x_597_ = l_Lean_MessageData_ofName(v_funName_579_);
v___x_598_ = lean_obj_once(&l_Lean_Elab_TerminationBy_checkVars___closed__3, &l_Lean_Elab_TerminationBy_checkVars___closed__3_once, _init_l_Lean_Elab_TerminationBy_checkVars___closed__3);
v___x_599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_597_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = l___private_Lean_Elab_PreDefinition_TerminationHint_0__Lean_Elab_TerminationBy_checkVars_parameters(v_extraParams_580_);
v___x_601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_599_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
v___x_602_ = lean_obj_once(&l_Lean_Elab_TerminationBy_checkVars___closed__5, &l_Lean_Elab_TerminationBy_checkVars___closed__5_once, _init_l_Lean_Elab_TerminationBy_checkVars___closed__5);
v___x_603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_601_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
v_msg_604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msg_604_, 0, v___x_596_);
lean_ctor_set(v_msg_604_, 1, v___x_603_);
v___x_605_ = lean_unsigned_to_nat(0u);
v_ident_606_ = lean_array_fget_borrowed(v_vars_589_, v___x_605_);
v___x_607_ = ((lean_object*)(l_Lean_Elab_TerminationBy_checkVars___closed__7));
lean_inc(v_ident_606_);
v___x_608_ = l_Lean_Syntax_isOfKind(v_ident_606_, v___x_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; 
lean_dec(v_funName_579_);
v___x_609_ = l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg(v_ref_588_, v_msg_604_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_609_;
}
else
{
lean_object* v___x_610_; uint8_t v___x_611_; 
v___x_610_ = l_Lean_TSyntax_getId(v_ident_606_);
v___x_611_ = l_Lean_Name_isSuffixOf(v___x_610_, v_funName_579_);
lean_dec(v_funName_579_);
lean_dec(v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; 
v___x_612_ = l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg(v_ref_588_, v_msg_604_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_612_;
}
else
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v_msg_616_; lean_object* v___x_617_; 
v___x_613_ = lean_obj_once(&l_Lean_Elab_TerminationBy_checkVars___closed__9, &l_Lean_Elab_TerminationBy_checkVars___closed__9_once, _init_l_Lean_Elab_TerminationBy_checkVars___closed__9);
v___x_614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_614_, 0, v_msg_604_);
lean_ctor_set(v___x_614_, 1, v___x_613_);
v___x_615_ = lean_obj_once(&l_Lean_Elab_TerminationBy_checkVars___closed__12, &l_Lean_Elab_TerminationBy_checkVars___closed__12_once, _init_l_Lean_Elab_TerminationBy_checkVars___closed__12);
v_msg_616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msg_616_, 0, v___x_614_);
lean_ctor_set(v_msg_616_, 1, v___x_615_);
v___x_617_ = l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg(v_ref_588_, v_msg_616_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_617_;
}
}
}
}
else
{
lean_object* v___x_618_; lean_object* v___x_619_; 
lean_dec(v_extraParams_580_);
lean_dec(v_funName_579_);
v___x_618_ = lean_box(0);
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TerminationBy_checkVars___boxed(lean_object* v_funName_620_, lean_object* v_extraParams_621_, lean_object* v_tb_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_Elab_TerminationBy_checkVars(v_funName_620_, v_extraParams_621_, v_tb_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
lean_dec(v_a_626_);
lean_dec_ref(v_a_625_);
lean_dec(v_a_624_);
lean_dec_ref(v_a_623_);
lean_dec_ref(v_tb_622_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0(lean_object* v_00_u03b1_629_, lean_object* v_ref_630_, lean_object* v_msg_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___redArg(v_ref_630_, v_msg_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0___boxed(lean_object* v_00_u03b1_638_, lean_object* v_ref_639_, lean_object* v_msg_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0(v_00_u03b1_638_, v_ref_639_, v_msg_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v_ref_639_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0(lean_object* v_00_u03b1_647_, lean_object* v_msg_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___redArg(v_msg_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0___boxed(lean_object* v_00_u03b1_655_, lean_object* v_msg_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_TerminationBy_checkVars_spec__0_spec__0(v_00_u03b1_655_, v_msg_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__0(lean_object* v_val_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_664_, 0, v_val_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__1(lean_object* v_stx_665_, lean_object* v_terminationBy_x3f_x3f_666_, lean_object* v_terminationBy_x3f_667_, lean_object* v_partialFixpoint_x3f_668_, lean_object* v___x_669_, uint8_t v___x_670_, lean_object* v_toPure_671_, lean_object* v_decreasingBy_x3f_672_){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_673_, 0, v_stx_665_);
lean_ctor_set(v___x_673_, 1, v_terminationBy_x3f_x3f_666_);
lean_ctor_set(v___x_673_, 2, v_terminationBy_x3f_667_);
lean_ctor_set(v___x_673_, 3, v_partialFixpoint_x3f_668_);
lean_ctor_set(v___x_673_, 4, v_decreasingBy_x3f_672_);
lean_ctor_set(v___x_673_, 5, v___x_669_);
lean_ctor_set_uint8(v___x_673_, sizeof(void*)*6, v___x_670_);
v___x_674_ = lean_apply_2(v_toPure_671_, lean_box(0), v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__1___boxed(lean_object* v_stx_675_, lean_object* v_terminationBy_x3f_x3f_676_, lean_object* v_terminationBy_x3f_677_, lean_object* v_partialFixpoint_x3f_678_, lean_object* v___x_679_, lean_object* v___x_680_, lean_object* v_toPure_681_, lean_object* v_decreasingBy_x3f_682_){
_start:
{
uint8_t v___x_6488__boxed_683_; lean_object* v_res_684_; 
v___x_6488__boxed_683_ = lean_unbox(v___x_680_);
v_res_684_ = l_Lean_Elab_elabTerminationHints___redArg___lam__1(v_stx_675_, v_terminationBy_x3f_x3f_676_, v_terminationBy_x3f_677_, v_partialFixpoint_x3f_678_, v___x_679_, v___x_6488__boxed_683_, v_toPure_681_, v_decreasingBy_x3f_682_);
return v_res_684_;
}
}
static lean_object* _init_l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__1));
v___x_688_ = l_Lean_stringToMessageData(v___x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__2(lean_object* v_stx_689_, lean_object* v_terminationBy_x3f_x3f_690_, lean_object* v_terminationBy_x3f_691_, lean_object* v___x_692_, uint8_t v___x_693_, lean_object* v_toPure_694_, lean_object* v_d_x3f_695_, lean_object* v_toBind_696_, lean_object* v_toFunctor_697_, lean_object* v___f_698_, lean_object* v___x_699_, lean_object* v___x_700_, lean_object* v___x_701_, lean_object* v_inst_702_, lean_object* v_inst_703_, lean_object* v___x_704_, lean_object* v_partialFixpoint_x3f_705_){
_start:
{
lean_object* v___x_706_; lean_object* v___f_707_; 
v___x_706_ = lean_box(v___x_693_);
lean_inc(v_toPure_694_);
v___f_707_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_707_, 0, v_stx_689_);
lean_closure_set(v___f_707_, 1, v_terminationBy_x3f_x3f_690_);
lean_closure_set(v___f_707_, 2, v_terminationBy_x3f_691_);
lean_closure_set(v___f_707_, 3, v_partialFixpoint_x3f_705_);
lean_closure_set(v___f_707_, 4, v___x_692_);
lean_closure_set(v___f_707_, 5, v___x_706_);
lean_closure_set(v___f_707_, 6, v_toPure_694_);
if (lean_obj_tag(v_d_x3f_695_) == 0)
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
lean_dec_ref(v_inst_703_);
lean_dec_ref(v_inst_702_);
lean_dec_ref(v___x_701_);
lean_dec_ref(v___x_700_);
lean_dec_ref(v___x_699_);
lean_dec_ref(v___f_698_);
lean_dec_ref(v_toFunctor_697_);
v___x_708_ = lean_box(0);
v___x_709_ = lean_apply_2(v_toPure_694_, lean_box(0), v___x_708_);
v___x_710_ = lean_apply_4(v_toBind_696_, lean_box(0), lean_box(0), v___x_709_, v___f_707_);
return v___x_710_;
}
else
{
lean_object* v_val_711_; lean_object* v_map_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_730_; 
v_val_711_ = lean_ctor_get(v_d_x3f_695_, 0);
lean_inc(v_val_711_);
lean_dec_ref_known(v_d_x3f_695_, 1);
v_map_712_ = lean_ctor_get(v_toFunctor_697_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_toFunctor_697_);
if (v_isSharedCheck_730_ == 0)
{
lean_object* v_unused_731_; 
v_unused_731_ = lean_ctor_get(v_toFunctor_697_, 1);
lean_dec(v_unused_731_);
v___x_714_ = v_toFunctor_697_;
v_isShared_715_ = v_isSharedCheck_730_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_map_712_);
lean_dec(v_toFunctor_697_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_730_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___y_717_; lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_720_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__0));
v___x_721_ = l_Lean_Name_mkStr4(v___x_699_, v___x_700_, v___x_701_, v___x_720_);
lean_inc(v_val_711_);
v___x_722_ = l_Lean_Syntax_isOfKind(v_val_711_, v___x_721_);
lean_dec(v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; lean_object* v___x_724_; 
lean_del_object(v___x_714_);
lean_dec(v_toPure_694_);
v___x_723_ = lean_obj_once(&l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__2, &l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__2_once, _init_l_Lean_Elab_elabTerminationHints___redArg___lam__2___closed__2);
v___x_724_ = l_Lean_throwErrorAt___redArg(v_inst_702_, v_inst_703_, v_val_711_, v___x_723_);
v___y_717_ = v___x_724_;
goto v___jp_716_;
}
else
{
lean_object* v_tactic_725_; lean_object* v___x_727_; 
lean_dec_ref(v_inst_703_);
lean_dec_ref(v_inst_702_);
v_tactic_725_ = l_Lean_Syntax_getArg(v_val_711_, v___x_704_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 1, v_tactic_725_);
lean_ctor_set(v___x_714_, 0, v_val_711_);
v___x_727_ = v___x_714_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_val_711_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_tactic_725_);
v___x_727_ = v_reuseFailAlloc_729_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_728_; 
v___x_728_ = lean_apply_2(v_toPure_694_, lean_box(0), v___x_727_);
v___y_717_ = v___x_728_;
goto v___jp_716_;
}
}
v___jp_716_:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_apply_4(v_map_712_, lean_box(0), lean_box(0), v___f_698_, v___y_717_);
v___x_719_ = lean_apply_4(v_toBind_696_, lean_box(0), lean_box(0), v___x_718_, v___f_707_);
return v___x_719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__2___boxed(lean_object** _args){
lean_object* v_stx_732_ = _args[0];
lean_object* v_terminationBy_x3f_x3f_733_ = _args[1];
lean_object* v_terminationBy_x3f_734_ = _args[2];
lean_object* v___x_735_ = _args[3];
lean_object* v___x_736_ = _args[4];
lean_object* v_toPure_737_ = _args[5];
lean_object* v_d_x3f_738_ = _args[6];
lean_object* v_toBind_739_ = _args[7];
lean_object* v_toFunctor_740_ = _args[8];
lean_object* v___f_741_ = _args[9];
lean_object* v___x_742_ = _args[10];
lean_object* v___x_743_ = _args[11];
lean_object* v___x_744_ = _args[12];
lean_object* v_inst_745_ = _args[13];
lean_object* v_inst_746_ = _args[14];
lean_object* v___x_747_ = _args[15];
lean_object* v_partialFixpoint_x3f_748_ = _args[16];
_start:
{
uint8_t v___x_6506__boxed_749_; lean_object* v_res_750_; 
v___x_6506__boxed_749_ = lean_unbox(v___x_736_);
v_res_750_ = l_Lean_Elab_elabTerminationHints___redArg___lam__2(v_stx_732_, v_terminationBy_x3f_x3f_733_, v_terminationBy_x3f_734_, v___x_735_, v___x_6506__boxed_749_, v_toPure_737_, v_d_x3f_738_, v_toBind_739_, v_toFunctor_740_, v___f_741_, v___x_742_, v___x_743_, v___x_744_, v_inst_745_, v_inst_746_, v___x_747_, v_partialFixpoint_x3f_748_);
lean_dec(v___x_747_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__3(lean_object* v___f_751_, lean_object* v_partialFixpoint_x3f_752_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = lean_apply_1(v___f_751_, v_partialFixpoint_x3f_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__11(lean_object* v_stx_757_, lean_object* v_terminationBy_x3f_x3f_758_, lean_object* v___x_759_, uint8_t v___x_760_, lean_object* v_toPure_761_, lean_object* v_d_x3f_762_, lean_object* v_toBind_763_, lean_object* v_toFunctor_764_, lean_object* v___f_765_, lean_object* v___x_766_, lean_object* v___x_767_, lean_object* v___x_768_, lean_object* v_inst_769_, lean_object* v_inst_770_, lean_object* v___x_771_, lean_object* v_t_x3f_772_, lean_object* v_terminationBy_x3f_773_){
_start:
{
lean_object* v___x_774_; lean_object* v___f_775_; 
v___x_774_ = lean_box(v___x_760_);
lean_inc(v___x_771_);
lean_inc_ref(v___x_768_);
lean_inc_ref(v___x_767_);
lean_inc_ref(v___x_766_);
lean_inc(v_toBind_763_);
lean_inc(v_toPure_761_);
v___f_775_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__2___boxed), 17, 16);
lean_closure_set(v___f_775_, 0, v_stx_757_);
lean_closure_set(v___f_775_, 1, v_terminationBy_x3f_x3f_758_);
lean_closure_set(v___f_775_, 2, v_terminationBy_x3f_773_);
lean_closure_set(v___f_775_, 3, v___x_759_);
lean_closure_set(v___f_775_, 4, v___x_774_);
lean_closure_set(v___f_775_, 5, v_toPure_761_);
lean_closure_set(v___f_775_, 6, v_d_x3f_762_);
lean_closure_set(v___f_775_, 7, v_toBind_763_);
lean_closure_set(v___f_775_, 8, v_toFunctor_764_);
lean_closure_set(v___f_775_, 9, v___f_765_);
lean_closure_set(v___f_775_, 10, v___x_766_);
lean_closure_set(v___f_775_, 11, v___x_767_);
lean_closure_set(v___f_775_, 12, v___x_768_);
lean_closure_set(v___f_775_, 13, v_inst_769_);
lean_closure_set(v___f_775_, 14, v_inst_770_);
lean_closure_set(v___f_775_, 15, v___x_771_);
if (lean_obj_tag(v_t_x3f_772_) == 1)
{
lean_object* v_val_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_853_; 
v_val_776_ = lean_ctor_get(v_t_x3f_772_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v_t_x3f_772_);
if (v_isSharedCheck_853_ == 0)
{
v___x_778_ = v_t_x3f_772_;
v_isShared_779_ = v_isSharedCheck_853_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_val_776_);
lean_dec(v_t_x3f_772_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_853_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_780_; lean_object* v___x_781_; uint8_t v___x_782_; 
v___x_780_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__0));
lean_inc_ref(v___x_768_);
lean_inc_ref(v___x_767_);
lean_inc_ref(v___x_766_);
v___x_781_ = l_Lean_Name_mkStr4(v___x_766_, v___x_767_, v___x_768_, v___x_780_);
lean_inc(v_val_776_);
v___x_782_ = l_Lean_Syntax_isOfKind(v_val_776_, v___x_781_);
lean_dec(v___x_781_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_783_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__1));
lean_inc_ref(v___x_768_);
lean_inc_ref(v___x_767_);
lean_inc_ref(v___x_766_);
v___x_784_ = l_Lean_Name_mkStr4(v___x_766_, v___x_767_, v___x_768_, v___x_783_);
lean_inc(v_val_776_);
v___x_785_ = l_Lean_Syntax_isOfKind(v_val_776_, v___x_784_);
lean_dec(v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; lean_object* v___x_787_; uint8_t v___x_788_; 
v___x_786_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__2));
v___x_787_ = l_Lean_Name_mkStr4(v___x_766_, v___x_767_, v___x_768_, v___x_786_);
lean_inc(v_val_776_);
v___x_788_ = l_Lean_Syntax_isOfKind(v_val_776_, v___x_787_);
lean_dec(v___x_787_);
if (v___x_788_ == 0)
{
lean_object* v___f_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
lean_del_object(v___x_778_);
lean_dec(v_val_776_);
lean_dec(v___x_771_);
v___f_789_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__3), 2, 1);
lean_closure_set(v___f_789_, 0, v___f_775_);
v___x_790_ = lean_box(0);
v___x_791_ = lean_apply_2(v_toPure_761_, lean_box(0), v___x_790_);
v___x_792_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_791_, v___f_789_);
return v___x_792_;
}
else
{
lean_object* v___f_793_; lean_object* v_term_x3f_795_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___f_793_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__3), 2, 1);
lean_closure_set(v___f_793_, 0, v___f_775_);
v___x_803_ = l_Lean_Syntax_getArg(v_val_776_, v___x_771_);
v___x_804_ = l_Lean_Syntax_isNone(v___x_803_);
if (v___x_804_ == 0)
{
lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_803_);
v___x_806_ = l_Lean_Syntax_matchesNull(v___x_803_, v___x_805_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
lean_dec(v___x_803_);
lean_del_object(v___x_778_);
lean_dec(v_val_776_);
lean_dec(v___x_771_);
v___x_807_ = lean_box(0);
v___x_808_ = lean_apply_2(v_toPure_761_, lean_box(0), v___x_807_);
v___x_809_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_808_, v___f_793_);
return v___x_809_;
}
else
{
lean_object* v_term_x3f_810_; lean_object* v___x_811_; 
v_term_x3f_810_ = l_Lean_Syntax_getArg(v___x_803_, v___x_771_);
lean_dec(v___x_771_);
lean_dec(v___x_803_);
v___x_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_811_, 0, v_term_x3f_810_);
v_term_x3f_795_ = v___x_811_;
goto v___jp_794_;
}
}
else
{
lean_object* v___x_812_; 
lean_dec(v___x_803_);
lean_dec(v___x_771_);
v___x_812_ = lean_box(0);
v_term_x3f_795_ = v___x_812_;
goto v___jp_794_;
}
v___jp_794_:
{
uint8_t v___x_796_; lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_796_ = 2;
v___x_797_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_797_, 0, v_val_776_);
lean_ctor_set(v___x_797_, 1, v_term_x3f_795_);
lean_ctor_set_uint8(v___x_797_, sizeof(void*)*2, v___x_796_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 0, v___x_797_);
v___x_799_ = v___x_778_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_797_);
v___x_799_ = v_reuseFailAlloc_802_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_800_ = lean_apply_2(v_toPure_761_, lean_box(0), v___x_799_);
v___x_801_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_800_, v___f_793_);
return v___x_801_;
}
}
}
}
else
{
lean_object* v___f_813_; lean_object* v_term_x3f_815_; lean_object* v___x_823_; uint8_t v___x_824_; 
lean_dec_ref(v___x_768_);
lean_dec_ref(v___x_767_);
lean_dec_ref(v___x_766_);
v___f_813_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__3), 2, 1);
lean_closure_set(v___f_813_, 0, v___f_775_);
v___x_823_ = l_Lean_Syntax_getArg(v_val_776_, v___x_771_);
v___x_824_ = l_Lean_Syntax_isNone(v___x_823_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_823_);
v___x_826_ = l_Lean_Syntax_matchesNull(v___x_823_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
lean_dec(v___x_823_);
lean_del_object(v___x_778_);
lean_dec(v_val_776_);
lean_dec(v___x_771_);
v___x_827_ = lean_box(0);
v___x_828_ = lean_apply_2(v_toPure_761_, lean_box(0), v___x_827_);
v___x_829_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_828_, v___f_813_);
return v___x_829_;
}
else
{
lean_object* v_term_x3f_830_; lean_object* v___x_831_; 
v_term_x3f_830_ = l_Lean_Syntax_getArg(v___x_823_, v___x_771_);
lean_dec(v___x_771_);
lean_dec(v___x_823_);
v___x_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_831_, 0, v_term_x3f_830_);
v_term_x3f_815_ = v___x_831_;
goto v___jp_814_;
}
}
else
{
lean_object* v___x_832_; 
lean_dec(v___x_823_);
lean_dec(v___x_771_);
v___x_832_ = lean_box(0);
v_term_x3f_815_ = v___x_832_;
goto v___jp_814_;
}
v___jp_814_:
{
uint8_t v___x_816_; lean_object* v___x_817_; lean_object* v___x_819_; 
v___x_816_ = 1;
v___x_817_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_817_, 0, v_val_776_);
lean_ctor_set(v___x_817_, 1, v_term_x3f_815_);
lean_ctor_set_uint8(v___x_817_, sizeof(void*)*2, v___x_816_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 0, v___x_817_);
v___x_819_ = v___x_778_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_817_);
v___x_819_ = v_reuseFailAlloc_822_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = lean_apply_2(v_toPure_761_, lean_box(0), v___x_819_);
v___x_821_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_820_, v___f_813_);
return v___x_821_;
}
}
}
}
else
{
lean_object* v___f_833_; lean_object* v_term_x3f_835_; lean_object* v___x_843_; uint8_t v___x_844_; 
lean_dec_ref(v___x_768_);
lean_dec_ref(v___x_767_);
lean_dec_ref(v___x_766_);
v___f_833_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__3), 2, 1);
lean_closure_set(v___f_833_, 0, v___f_775_);
v___x_843_ = l_Lean_Syntax_getArg(v_val_776_, v___x_771_);
v___x_844_ = l_Lean_Syntax_isNone(v___x_843_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; uint8_t v___x_846_; 
v___x_845_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_843_);
v___x_846_ = l_Lean_Syntax_matchesNull(v___x_843_, v___x_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
lean_dec(v___x_843_);
lean_del_object(v___x_778_);
lean_dec(v_val_776_);
lean_dec(v___x_771_);
v___x_847_ = lean_box(0);
v___x_848_ = lean_apply_2(v_toPure_761_, lean_box(0), v___x_847_);
v___x_849_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_848_, v___f_833_);
return v___x_849_;
}
else
{
lean_object* v_term_x3f_850_; lean_object* v___x_851_; 
v_term_x3f_850_ = l_Lean_Syntax_getArg(v___x_843_, v___x_771_);
lean_dec(v___x_771_);
lean_dec(v___x_843_);
v___x_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_851_, 0, v_term_x3f_850_);
v_term_x3f_835_ = v___x_851_;
goto v___jp_834_;
}
}
else
{
lean_object* v___x_852_; 
lean_dec(v___x_843_);
lean_dec(v___x_771_);
v___x_852_ = lean_box(0);
v_term_x3f_835_ = v___x_852_;
goto v___jp_834_;
}
v___jp_834_:
{
uint8_t v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_836_ = 0;
v___x_837_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_837_, 0, v_val_776_);
lean_ctor_set(v___x_837_, 1, v_term_x3f_835_);
lean_ctor_set_uint8(v___x_837_, sizeof(void*)*2, v___x_836_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 0, v___x_837_);
v___x_839_ = v___x_778_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_837_);
v___x_839_ = v_reuseFailAlloc_842_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_apply_2(v_toPure_761_, lean_box(0), v___x_839_);
v___x_841_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_840_, v___f_833_);
return v___x_841_;
}
}
}
}
}
else
{
lean_object* v___f_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
lean_dec(v_t_x3f_772_);
lean_dec(v___x_771_);
lean_dec_ref(v___x_768_);
lean_dec_ref(v___x_767_);
lean_dec_ref(v___x_766_);
v___f_854_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__3), 2, 1);
lean_closure_set(v___f_854_, 0, v___f_775_);
v___x_855_ = lean_box(0);
v___x_856_ = lean_apply_2(v_toPure_761_, lean_box(0), v___x_855_);
v___x_857_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_856_, v___f_854_);
return v___x_857_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_stx_858_ = _args[0];
lean_object* v_terminationBy_x3f_x3f_859_ = _args[1];
lean_object* v___x_860_ = _args[2];
lean_object* v___x_861_ = _args[3];
lean_object* v_toPure_862_ = _args[4];
lean_object* v_d_x3f_863_ = _args[5];
lean_object* v_toBind_864_ = _args[6];
lean_object* v_toFunctor_865_ = _args[7];
lean_object* v___f_866_ = _args[8];
lean_object* v___x_867_ = _args[9];
lean_object* v___x_868_ = _args[10];
lean_object* v___x_869_ = _args[11];
lean_object* v_inst_870_ = _args[12];
lean_object* v_inst_871_ = _args[13];
lean_object* v___x_872_ = _args[14];
lean_object* v_t_x3f_873_ = _args[15];
lean_object* v_terminationBy_x3f_874_ = _args[16];
_start:
{
uint8_t v___x_6595__boxed_875_; lean_object* v_res_876_; 
v___x_6595__boxed_875_ = lean_unbox(v___x_861_);
v_res_876_ = l_Lean_Elab_elabTerminationHints___redArg___lam__11(v_stx_858_, v_terminationBy_x3f_x3f_859_, v___x_860_, v___x_6595__boxed_875_, v_toPure_862_, v_d_x3f_863_, v_toBind_864_, v_toFunctor_865_, v___f_866_, v___x_867_, v___x_868_, v___x_869_, v_inst_870_, v_inst_871_, v___x_872_, v_t_x3f_873_, v_terminationBy_x3f_874_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__4(lean_object* v___f_877_, lean_object* v_terminationBy_x3f_878_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = lean_apply_1(v___f_877_, v_terminationBy_x3f_878_);
return v___x_879_;
}
}
static lean_object* _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__2));
v___x_884_ = l_Lean_stringToMessageData(v___x_883_);
return v___x_884_;
}
}
static lean_object* _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__5(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__4));
v___x_887_ = l_Lean_stringToMessageData(v___x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19(lean_object* v_stx_888_, lean_object* v___x_889_, uint8_t v___x_890_, lean_object* v_toPure_891_, lean_object* v_d_x3f_892_, lean_object* v_toBind_893_, lean_object* v_toFunctor_894_, lean_object* v___f_895_, lean_object* v___x_896_, lean_object* v___x_897_, lean_object* v___x_898_, lean_object* v_inst_899_, lean_object* v_inst_900_, lean_object* v___x_901_, lean_object* v_t_x3f_902_, lean_object* v_terminationBy_x3f_x3f_903_){
_start:
{
lean_object* v___x_904_; lean_object* v___f_905_; 
v___x_904_ = lean_box(v___x_890_);
lean_inc(v_t_x3f_902_);
lean_inc(v___x_901_);
lean_inc_ref(v_inst_900_);
lean_inc_ref(v_inst_899_);
lean_inc_ref(v___x_898_);
lean_inc_ref(v___x_897_);
lean_inc_ref(v___x_896_);
lean_inc(v_toBind_893_);
lean_inc(v_toPure_891_);
lean_inc(v___x_889_);
v___f_905_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__11___boxed), 17, 16);
lean_closure_set(v___f_905_, 0, v_stx_888_);
lean_closure_set(v___f_905_, 1, v_terminationBy_x3f_x3f_903_);
lean_closure_set(v___f_905_, 2, v___x_889_);
lean_closure_set(v___f_905_, 3, v___x_904_);
lean_closure_set(v___f_905_, 4, v_toPure_891_);
lean_closure_set(v___f_905_, 5, v_d_x3f_892_);
lean_closure_set(v___f_905_, 6, v_toBind_893_);
lean_closure_set(v___f_905_, 7, v_toFunctor_894_);
lean_closure_set(v___f_905_, 8, v___f_895_);
lean_closure_set(v___f_905_, 9, v___x_896_);
lean_closure_set(v___f_905_, 10, v___x_897_);
lean_closure_set(v___f_905_, 11, v___x_898_);
lean_closure_set(v___f_905_, 12, v_inst_899_);
lean_closure_set(v___f_905_, 13, v_inst_900_);
lean_closure_set(v___f_905_, 14, v___x_901_);
lean_closure_set(v___f_905_, 15, v_t_x3f_902_);
if (lean_obj_tag(v_t_x3f_902_) == 1)
{
lean_object* v_val_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_1018_; 
v_val_906_ = lean_ctor_get(v_t_x3f_902_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_t_x3f_902_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_908_ = v_t_x3f_902_;
v_isShared_909_ = v_isSharedCheck_1018_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_val_906_);
lean_dec(v_t_x3f_902_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_1018_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_910_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__0));
lean_inc_ref(v___x_898_);
lean_inc_ref(v___x_897_);
lean_inc_ref(v___x_896_);
v___x_911_ = l_Lean_Name_mkStr4(v___x_896_, v___x_897_, v___x_898_, v___x_910_);
lean_inc(v_val_906_);
v___x_912_ = l_Lean_Syntax_isOfKind(v_val_906_, v___x_911_);
lean_dec(v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; lean_object* v___x_914_; uint8_t v___x_915_; 
lean_del_object(v___x_908_);
lean_dec(v___x_889_);
v___x_913_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__1));
lean_inc_ref(v___x_898_);
lean_inc_ref(v___x_897_);
lean_inc_ref(v___x_896_);
v___x_914_ = l_Lean_Name_mkStr4(v___x_896_, v___x_897_, v___x_898_, v___x_913_);
lean_inc(v_val_906_);
v___x_915_ = l_Lean_Syntax_isOfKind(v_val_906_, v___x_914_);
lean_dec(v___x_914_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_916_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__0));
lean_inc_ref(v___x_898_);
lean_inc_ref(v___x_897_);
lean_inc_ref(v___x_896_);
v___x_917_ = l_Lean_Name_mkStr4(v___x_896_, v___x_897_, v___x_898_, v___x_916_);
lean_inc(v_val_906_);
v___x_918_ = l_Lean_Syntax_isOfKind(v_val_906_, v___x_917_);
lean_dec(v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_919_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__1));
lean_inc_ref(v___x_898_);
lean_inc_ref(v___x_897_);
lean_inc_ref(v___x_896_);
v___x_920_ = l_Lean_Name_mkStr4(v___x_896_, v___x_897_, v___x_898_, v___x_919_);
lean_inc(v_val_906_);
v___x_921_ = l_Lean_Syntax_isOfKind(v_val_906_, v___x_920_);
lean_dec(v___x_920_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_922_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___lam__11___closed__2));
v___x_923_ = l_Lean_Name_mkStr4(v___x_896_, v___x_897_, v___x_898_, v___x_922_);
lean_inc(v_val_906_);
v___x_924_ = l_Lean_Syntax_isOfKind(v_val_906_, v___x_923_);
lean_dec(v___x_923_);
if (v___x_924_ == 0)
{
lean_object* v___f_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
lean_dec(v___x_901_);
lean_dec(v_toPure_891_);
v___f_925_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__4), 2, 1);
lean_closure_set(v___f_925_, 0, v___f_905_);
v___x_926_ = lean_obj_once(&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3, &l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3_once, _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3);
v___x_927_ = l_Lean_throwErrorAt___redArg(v_inst_899_, v_inst_900_, v_val_906_, v___x_926_);
v___x_928_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_927_, v___f_925_);
return v___x_928_;
}
else
{
lean_object* v___f_929_; lean_object* v___x_934_; uint8_t v___x_935_; 
v___f_929_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__4), 2, 1);
lean_closure_set(v___f_929_, 0, v___f_905_);
v___x_934_ = l_Lean_Syntax_getArg(v_val_906_, v___x_901_);
lean_dec(v___x_901_);
v___x_935_ = l_Lean_Syntax_isNone(v___x_934_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_936_ = lean_unsigned_to_nat(2u);
v___x_937_ = l_Lean_Syntax_matchesNull(v___x_934_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
lean_dec(v_toPure_891_);
v___x_938_ = lean_obj_once(&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3, &l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3_once, _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3);
v___x_939_ = l_Lean_throwErrorAt___redArg(v_inst_899_, v_inst_900_, v_val_906_, v___x_938_);
v___x_940_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_939_, v___f_929_);
return v___x_940_;
}
else
{
lean_dec(v_val_906_);
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
goto v___jp_930_;
}
}
else
{
lean_dec(v___x_934_);
lean_dec(v_val_906_);
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
goto v___jp_930_;
}
v___jp_930_:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_931_ = lean_box(0);
v___x_932_ = lean_apply_2(v_toPure_891_, lean_box(0), v___x_931_);
v___x_933_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_932_, v___f_929_);
return v___x_933_;
}
}
}
else
{
lean_object* v___f_941_; lean_object* v___x_946_; uint8_t v___x_947_; 
lean_dec_ref(v___x_898_);
lean_dec_ref(v___x_897_);
lean_dec_ref(v___x_896_);
v___f_941_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__4), 2, 1);
lean_closure_set(v___f_941_, 0, v___f_905_);
v___x_946_ = l_Lean_Syntax_getArg(v_val_906_, v___x_901_);
lean_dec(v___x_901_);
v___x_947_ = l_Lean_Syntax_isNone(v___x_946_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_948_ = lean_unsigned_to_nat(2u);
v___x_949_ = l_Lean_Syntax_matchesNull(v___x_946_, v___x_948_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
lean_dec(v_toPure_891_);
v___x_950_ = lean_obj_once(&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3, &l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3_once, _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3);
v___x_951_ = l_Lean_throwErrorAt___redArg(v_inst_899_, v_inst_900_, v_val_906_, v___x_950_);
v___x_952_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_951_, v___f_941_);
return v___x_952_;
}
else
{
lean_dec(v_val_906_);
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
goto v___jp_942_;
}
}
else
{
lean_dec(v___x_946_);
lean_dec(v_val_906_);
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
goto v___jp_942_;
}
v___jp_942_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_943_ = lean_box(0);
v___x_944_ = lean_apply_2(v_toPure_891_, lean_box(0), v___x_943_);
v___x_945_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_944_, v___f_941_);
return v___x_945_;
}
}
}
else
{
lean_object* v___f_953_; lean_object* v___x_958_; uint8_t v___x_959_; 
lean_dec_ref(v___x_898_);
lean_dec_ref(v___x_897_);
lean_dec_ref(v___x_896_);
v___f_953_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__4), 2, 1);
lean_closure_set(v___f_953_, 0, v___f_905_);
v___x_958_ = l_Lean_Syntax_getArg(v_val_906_, v___x_901_);
lean_dec(v___x_901_);
v___x_959_ = l_Lean_Syntax_isNone(v___x_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; uint8_t v___x_961_; 
v___x_960_ = lean_unsigned_to_nat(2u);
v___x_961_ = l_Lean_Syntax_matchesNull(v___x_958_, v___x_960_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec(v_toPure_891_);
v___x_962_ = lean_obj_once(&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3, &l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3_once, _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3);
v___x_963_ = l_Lean_throwErrorAt___redArg(v_inst_899_, v_inst_900_, v_val_906_, v___x_962_);
v___x_964_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_963_, v___f_953_);
return v___x_964_;
}
else
{
lean_dec(v_val_906_);
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
goto v___jp_954_;
}
}
else
{
lean_dec(v___x_958_);
lean_dec(v_val_906_);
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
goto v___jp_954_;
}
v___jp_954_:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_955_ = lean_box(0);
v___x_956_ = lean_apply_2(v_toPure_891_, lean_box(0), v___x_955_);
v___x_957_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_956_, v___f_953_);
return v___x_957_;
}
}
}
else
{
lean_object* v___f_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v_val_906_);
lean_dec(v___x_901_);
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
lean_dec_ref(v___x_898_);
lean_dec_ref(v___x_897_);
lean_dec_ref(v___x_896_);
v___f_965_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__4), 2, 1);
lean_closure_set(v___f_965_, 0, v___f_905_);
v___x_966_ = lean_box(0);
v___x_967_ = lean_apply_2(v_toPure_891_, lean_box(0), v___x_966_);
v___x_968_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_967_, v___f_965_);
return v___x_968_;
}
}
else
{
lean_object* v___f_969_; lean_object* v___y_971_; uint8_t v___y_972_; lean_object* v___y_973_; uint8_t v___y_974_; uint8_t v___y_982_; lean_object* v___y_983_; uint8_t v___y_984_; lean_object* v_s_991_; lean_object* v___x_1009_; uint8_t v___x_1010_; 
lean_dec_ref(v___x_898_);
lean_dec_ref(v___x_897_);
lean_dec_ref(v___x_896_);
v___f_969_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__4), 2, 1);
lean_closure_set(v___f_969_, 0, v___f_905_);
v___x_1009_ = l_Lean_Syntax_getArg(v_val_906_, v___x_901_);
v___x_1010_ = l_Lean_Syntax_isNone(v___x_1009_);
if (v___x_1010_ == 0)
{
uint8_t v___x_1011_; 
lean_inc(v___x_1009_);
v___x_1011_ = l_Lean_Syntax_matchesNull(v___x_1009_, v___x_901_);
lean_dec(v___x_901_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
lean_dec(v___x_1009_);
lean_del_object(v___x_908_);
lean_dec(v_toPure_891_);
lean_dec(v___x_889_);
v___x_1012_ = lean_obj_once(&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3, &l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3_once, _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3);
v___x_1013_ = l_Lean_throwErrorAt___redArg(v_inst_899_, v_inst_900_, v_val_906_, v___x_1012_);
v___x_1014_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_1013_, v___f_969_);
return v___x_1014_;
}
else
{
lean_object* v_s_1015_; lean_object* v___x_1016_; 
v_s_1015_ = l_Lean_Syntax_getArg(v___x_1009_, v___x_889_);
lean_dec(v___x_1009_);
v___x_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1016_, 0, v_s_1015_);
v_s_991_ = v___x_1016_;
goto v___jp_990_;
}
}
else
{
lean_object* v___x_1017_; 
lean_dec(v___x_1009_);
lean_dec(v___x_901_);
v___x_1017_ = lean_box(0);
v_s_991_ = v___x_1017_;
goto v___jp_990_;
}
v___jp_970_:
{
lean_object* v___x_975_; lean_object* v___x_977_; 
v___x_975_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_975_, 0, v_val_906_);
lean_ctor_set(v___x_975_, 1, v___y_971_);
lean_ctor_set(v___x_975_, 2, v___y_973_);
lean_ctor_set_uint8(v___x_975_, sizeof(void*)*3, v___y_974_);
lean_ctor_set_uint8(v___x_975_, sizeof(void*)*3 + 1, v___y_972_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_975_);
v___x_977_ = v___x_908_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_975_);
v___x_977_ = v_reuseFailAlloc_980_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = lean_apply_2(v_toPure_891_, lean_box(0), v___x_977_);
v___x_979_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_978_, v___f_969_);
return v___x_979_;
}
}
v___jp_981_:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_985_ = lean_mk_empty_array_with_capacity(v___x_889_);
lean_dec(v___x_889_);
v___x_986_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_986_, 0, v_val_906_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
lean_ctor_set(v___x_986_, 2, v___y_983_);
lean_ctor_set_uint8(v___x_986_, sizeof(void*)*3, v___y_984_);
lean_ctor_set_uint8(v___x_986_, sizeof(void*)*3 + 1, v___y_982_);
v___x_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
v___x_988_ = lean_apply_2(v_toPure_891_, lean_box(0), v___x_987_);
v___x_989_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_988_, v___f_969_);
return v___x_989_;
}
v___jp_990_:
{
lean_object* v___x_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_992_ = lean_unsigned_to_nat(2u);
v___x_993_ = l_Lean_Syntax_getArg(v_val_906_, v___x_992_);
lean_inc(v___x_993_);
v___x_994_ = l_Lean_Syntax_matchesNull(v___x_993_, v___x_992_);
if (v___x_994_ == 0)
{
uint8_t v___x_995_; 
lean_del_object(v___x_908_);
v___x_995_ = l_Lean_Syntax_matchesNull(v___x_993_, v___x_889_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
lean_dec(v_s_991_);
lean_dec(v_toPure_891_);
lean_dec(v___x_889_);
v___x_996_ = lean_obj_once(&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3, &l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3_once, _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__3);
v___x_997_ = l_Lean_throwErrorAt___redArg(v_inst_899_, v_inst_900_, v_val_906_, v___x_996_);
v___x_998_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_997_, v___f_969_);
return v___x_998_;
}
else
{
lean_object* v___x_999_; lean_object* v_body_1000_; 
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
v___x_999_ = lean_unsigned_to_nat(3u);
v_body_1000_ = l_Lean_Syntax_getArg(v_val_906_, v___x_999_);
if (lean_obj_tag(v_s_991_) == 0)
{
v___y_982_ = v___x_994_;
v___y_983_ = v_body_1000_;
v___y_984_ = v___x_994_;
goto v___jp_981_;
}
else
{
lean_dec_ref_known(v_s_991_, 1);
v___y_982_ = v___x_994_;
v___y_983_ = v_body_1000_;
v___y_984_ = v___x_995_;
goto v___jp_981_;
}
}
}
else
{
lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_1001_ = l_Lean_Syntax_getArg(v___x_993_, v___x_889_);
lean_dec(v___x_993_);
lean_inc(v___x_1001_);
v___x_1002_ = l_Lean_Syntax_matchesNull(v___x_1001_, v___x_889_);
lean_dec(v___x_889_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; lean_object* v_body_1004_; lean_object* v_vars_1005_; 
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
v___x_1003_ = lean_unsigned_to_nat(3u);
v_body_1004_ = l_Lean_Syntax_getArg(v_val_906_, v___x_1003_);
v_vars_1005_ = l_Lean_Syntax_getArgs(v___x_1001_);
lean_dec(v___x_1001_);
if (lean_obj_tag(v_s_991_) == 0)
{
v___y_971_ = v_vars_1005_;
v___y_972_ = v___x_1002_;
v___y_973_ = v_body_1004_;
v___y_974_ = v___x_1002_;
goto v___jp_970_;
}
else
{
lean_dec_ref_known(v_s_991_, 1);
v___y_971_ = v_vars_1005_;
v___y_972_ = v___x_1002_;
v___y_973_ = v_body_1004_;
v___y_974_ = v___x_994_;
goto v___jp_970_;
}
}
else
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_dec(v___x_1001_);
lean_dec(v_s_991_);
lean_del_object(v___x_908_);
lean_dec(v_toPure_891_);
v___x_1006_ = lean_obj_once(&l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__5, &l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__5_once, _init_l_Lean_Elab_elabTerminationHints___redArg___lam__19___closed__5);
v___x_1007_ = l_Lean_throwErrorAt___redArg(v_inst_899_, v_inst_900_, v_val_906_, v___x_1006_);
v___x_1008_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_1007_, v___f_969_);
return v___x_1008_;
}
}
}
}
}
}
else
{
lean_object* v___f_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_dec(v_t_x3f_902_);
lean_dec(v___x_901_);
lean_dec_ref(v_inst_900_);
lean_dec_ref(v_inst_899_);
lean_dec_ref(v___x_898_);
lean_dec_ref(v___x_897_);
lean_dec_ref(v___x_896_);
lean_dec(v___x_889_);
v___f_1019_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__4), 2, 1);
lean_closure_set(v___f_1019_, 0, v___f_905_);
v___x_1020_ = lean_box(0);
v___x_1021_ = lean_apply_2(v_toPure_891_, lean_box(0), v___x_1020_);
v___x_1022_ = lean_apply_4(v_toBind_893_, lean_box(0), lean_box(0), v___x_1021_, v___f_1019_);
return v___x_1022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__19___boxed(lean_object* v_stx_1023_, lean_object* v___x_1024_, lean_object* v___x_1025_, lean_object* v_toPure_1026_, lean_object* v_d_x3f_1027_, lean_object* v_toBind_1028_, lean_object* v_toFunctor_1029_, lean_object* v___f_1030_, lean_object* v___x_1031_, lean_object* v___x_1032_, lean_object* v___x_1033_, lean_object* v_inst_1034_, lean_object* v_inst_1035_, lean_object* v___x_1036_, lean_object* v_t_x3f_1037_, lean_object* v_terminationBy_x3f_x3f_1038_){
_start:
{
uint8_t v___x_6819__boxed_1039_; lean_object* v_res_1040_; 
v___x_6819__boxed_1039_ = lean_unbox(v___x_1025_);
v_res_1040_ = l_Lean_Elab_elabTerminationHints___redArg___lam__19(v_stx_1023_, v___x_1024_, v___x_6819__boxed_1039_, v_toPure_1026_, v_d_x3f_1027_, v_toBind_1028_, v_toFunctor_1029_, v___f_1030_, v___x_1031_, v___x_1032_, v___x_1033_, v_inst_1034_, v_inst_1035_, v___x_1036_, v_t_x3f_1037_, v_terminationBy_x3f_x3f_1038_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg___lam__5(lean_object* v___f_1041_, lean_object* v_terminationBy_x3f_x3f_1042_){
_start:
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_apply_1(v___f_1041_, v_terminationBy_x3f_x3f_1042_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints___redArg(lean_object* v_inst_1066_, lean_object* v_inst_1067_, lean_object* v_stx_1068_){
_start:
{
if (lean_obj_tag(v_stx_1068_) == 0)
{
lean_object* v_toApplicative_1069_; lean_object* v_toPure_1070_; uint8_t v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v_toApplicative_1069_ = lean_ctor_get(v_inst_1066_, 0);
lean_inc_ref(v_toApplicative_1069_);
lean_dec_ref(v_inst_1067_);
lean_dec_ref(v_inst_1066_);
v_toPure_1070_ = lean_ctor_get(v_toApplicative_1069_, 1);
lean_inc(v_toPure_1070_);
lean_dec_ref(v_toApplicative_1069_);
v___x_1071_ = 1;
v___x_1072_ = lean_unsigned_to_nat(0u);
v___x_1073_ = lean_box(0);
v___x_1074_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1074_, 0, v_stx_1068_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
lean_ctor_set(v___x_1074_, 2, v___x_1073_);
lean_ctor_set(v___x_1074_, 3, v___x_1073_);
lean_ctor_set(v___x_1074_, 4, v___x_1073_);
lean_ctor_set(v___x_1074_, 5, v___x_1072_);
lean_ctor_set_uint8(v___x_1074_, sizeof(void*)*6, v___x_1071_);
v___x_1075_ = lean_apply_2(v_toPure_1070_, lean_box(0), v___x_1074_);
return v___x_1075_;
}
else
{
lean_object* v_toApplicative_1076_; lean_object* v_toBind_1077_; lean_object* v_toFunctor_1078_; lean_object* v_toPure_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; uint8_t v___x_1084_; 
v_toApplicative_1076_ = lean_ctor_get(v_inst_1066_, 0);
v_toBind_1077_ = lean_ctor_get(v_inst_1066_, 1);
v_toFunctor_1078_ = lean_ctor_get(v_toApplicative_1076_, 0);
v_toPure_1079_ = lean_ctor_get(v_toApplicative_1076_, 1);
v___x_1080_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__0));
v___x_1081_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__1));
v___x_1082_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__2));
v___x_1083_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__4));
lean_inc(v_stx_1068_);
v___x_1084_ = l_Lean_Syntax_isOfKind(v_stx_1068_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1085_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__5));
v___x_1086_ = lean_box(0);
lean_inc_n(v_stx_1068_, 2);
v___x_1087_ = l_Lean_Syntax_formatStx(v_stx_1068_, v___x_1086_, v___x_1084_);
v___x_1088_ = l_Std_Format_defWidth;
v___x_1089_ = lean_unsigned_to_nat(0u);
v___x_1090_ = l_Std_Format_pretty(v___x_1087_, v___x_1088_, v___x_1089_, v___x_1089_);
v___x_1091_ = lean_string_append(v___x_1085_, v___x_1090_);
lean_dec_ref(v___x_1090_);
v___x_1092_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__6));
v___x_1093_ = lean_string_append(v___x_1091_, v___x_1092_);
v___x_1094_ = l_Lean_Syntax_getKind(v_stx_1068_);
v___x_1095_ = 1;
v___x_1096_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1094_, v___x_1095_);
v___x_1097_ = lean_string_append(v___x_1093_, v___x_1096_);
lean_dec_ref(v___x_1096_);
v___x_1098_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
v___x_1099_ = l_Lean_MessageData_ofFormat(v___x_1098_);
v___x_1100_ = l_Lean_throwErrorAt___redArg(v_inst_1066_, v_inst_1067_, v_stx_1068_, v___x_1099_);
return v___x_1100_;
}
else
{
lean_object* v___f_1101_; lean_object* v___x_1102_; lean_object* v___y_1104_; lean_object* v___y_1105_; lean_object* v_d_x3f_1106_; lean_object* v_t_x3f_1131_; lean_object* v___x_1169_; uint8_t v___x_1170_; 
v___f_1101_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__7));
v___x_1102_ = lean_unsigned_to_nat(0u);
v___x_1169_ = l_Lean_Syntax_getArg(v_stx_1068_, v___x_1102_);
v___x_1170_ = l_Lean_Syntax_isNone(v___x_1169_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1169_);
v___x_1172_ = l_Lean_Syntax_matchesNull(v___x_1169_, v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
lean_dec(v___x_1169_);
v___x_1173_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__5));
v___x_1174_ = lean_box(0);
lean_inc_n(v_stx_1068_, 2);
v___x_1175_ = l_Lean_Syntax_formatStx(v_stx_1068_, v___x_1174_, v___x_1172_);
v___x_1176_ = l_Std_Format_defWidth;
v___x_1177_ = l_Std_Format_pretty(v___x_1175_, v___x_1176_, v___x_1102_, v___x_1102_);
v___x_1178_ = lean_string_append(v___x_1173_, v___x_1177_);
lean_dec_ref(v___x_1177_);
v___x_1179_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__6));
v___x_1180_ = lean_string_append(v___x_1178_, v___x_1179_);
v___x_1181_ = l_Lean_Syntax_getKind(v_stx_1068_);
v___x_1182_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1181_, v___x_1084_);
v___x_1183_ = lean_string_append(v___x_1180_, v___x_1182_);
lean_dec_ref(v___x_1182_);
v___x_1184_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
v___x_1185_ = l_Lean_MessageData_ofFormat(v___x_1184_);
v___x_1186_ = l_Lean_throwErrorAt___redArg(v_inst_1066_, v_inst_1067_, v_stx_1068_, v___x_1185_);
return v___x_1186_;
}
else
{
lean_object* v_t_x3f_1187_; lean_object* v___x_1188_; 
v_t_x3f_1187_ = l_Lean_Syntax_getArg(v___x_1169_, v___x_1102_);
lean_dec(v___x_1169_);
v___x_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_t_x3f_1187_);
v_t_x3f_1131_ = v___x_1188_;
goto v___jp_1130_;
}
}
else
{
lean_object* v___x_1189_; 
lean_dec(v___x_1169_);
v___x_1189_ = lean_box(0);
v_t_x3f_1131_ = v___x_1189_;
goto v___jp_1130_;
}
v___jp_1103_:
{
lean_object* v___x_1107_; lean_object* v___f_1108_; 
v___x_1107_ = lean_box(v___x_1084_);
lean_inc(v___y_1105_);
lean_inc(v_toBind_1077_);
lean_inc(v_toPure_1079_);
v___f_1108_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__19___boxed), 16, 15);
lean_closure_set(v___f_1108_, 0, v_stx_1068_);
lean_closure_set(v___f_1108_, 1, v___x_1102_);
lean_closure_set(v___f_1108_, 2, v___x_1107_);
lean_closure_set(v___f_1108_, 3, v_toPure_1079_);
lean_closure_set(v___f_1108_, 4, v_d_x3f_1106_);
lean_closure_set(v___f_1108_, 5, v_toBind_1077_);
lean_closure_set(v___f_1108_, 6, v_toFunctor_1078_);
lean_closure_set(v___f_1108_, 7, v___f_1101_);
lean_closure_set(v___f_1108_, 8, v___x_1080_);
lean_closure_set(v___f_1108_, 9, v___x_1081_);
lean_closure_set(v___f_1108_, 10, v___x_1082_);
lean_closure_set(v___f_1108_, 11, v_inst_1066_);
lean_closure_set(v___f_1108_, 12, v_inst_1067_);
lean_closure_set(v___f_1108_, 13, v___y_1104_);
lean_closure_set(v___f_1108_, 14, v___y_1105_);
if (lean_obj_tag(v___y_1105_) == 1)
{
lean_object* v_val_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1125_; 
v_val_1109_ = lean_ctor_get(v___y_1105_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___y_1105_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1111_ = v___y_1105_;
v_isShared_1112_ = v_isSharedCheck_1125_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_val_1109_);
lean_dec(v___y_1105_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1125_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1113_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__8));
lean_inc(v_val_1109_);
v___x_1114_ = l_Lean_Syntax_isOfKind(v_val_1109_, v___x_1113_);
if (v___x_1114_ == 0)
{
lean_object* v___f_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_del_object(v___x_1111_);
lean_dec(v_val_1109_);
v___f_1115_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1115_, 0, v___f_1108_);
v___x_1116_ = lean_box(0);
v___x_1117_ = lean_apply_2(v_toPure_1079_, lean_box(0), v___x_1116_);
v___x_1118_ = lean_apply_4(v_toBind_1077_, lean_box(0), lean_box(0), v___x_1117_, v___f_1115_);
return v___x_1118_;
}
else
{
lean_object* v___f_1119_; lean_object* v___x_1121_; 
v___f_1119_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1119_, 0, v___f_1108_);
if (v_isShared_1112_ == 0)
{
v___x_1121_ = v___x_1111_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_val_1109_);
v___x_1121_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = lean_apply_2(v_toPure_1079_, lean_box(0), v___x_1121_);
v___x_1123_ = lean_apply_4(v_toBind_1077_, lean_box(0), lean_box(0), v___x_1122_, v___f_1119_);
return v___x_1123_;
}
}
}
}
else
{
lean_object* v___f_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_dec(v___y_1105_);
v___f_1126_ = lean_alloc_closure((void*)(l_Lean_Elab_elabTerminationHints___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1126_, 0, v___f_1108_);
v___x_1127_ = lean_box(0);
v___x_1128_ = lean_apply_2(v_toPure_1079_, lean_box(0), v___x_1127_);
v___x_1129_ = lean_apply_4(v_toBind_1077_, lean_box(0), lean_box(0), v___x_1128_, v___f_1126_);
return v___x_1129_;
}
}
v___jp_1130_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1132_ = lean_unsigned_to_nat(1u);
v___x_1133_ = l_Lean_Syntax_getArg(v_stx_1068_, v___x_1132_);
v___x_1134_ = l_Lean_Syntax_isNone(v___x_1133_);
if (v___x_1134_ == 0)
{
uint8_t v___x_1135_; 
lean_inc(v___x_1133_);
v___x_1135_ = l_Lean_Syntax_matchesNull(v___x_1133_, v___x_1132_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
lean_dec(v___x_1133_);
lean_dec(v_t_x3f_1131_);
v___x_1136_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__5));
v___x_1137_ = lean_box(0);
lean_inc_n(v_stx_1068_, 2);
v___x_1138_ = l_Lean_Syntax_formatStx(v_stx_1068_, v___x_1137_, v___x_1135_);
v___x_1139_ = l_Std_Format_defWidth;
v___x_1140_ = l_Std_Format_pretty(v___x_1138_, v___x_1139_, v___x_1102_, v___x_1102_);
v___x_1141_ = lean_string_append(v___x_1136_, v___x_1140_);
lean_dec_ref(v___x_1140_);
v___x_1142_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__6));
v___x_1143_ = lean_string_append(v___x_1141_, v___x_1142_);
v___x_1144_ = l_Lean_Syntax_getKind(v_stx_1068_);
v___x_1145_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1144_, v___x_1084_);
v___x_1146_ = lean_string_append(v___x_1143_, v___x_1145_);
lean_dec_ref(v___x_1145_);
v___x_1147_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
v___x_1148_ = l_Lean_MessageData_ofFormat(v___x_1147_);
v___x_1149_ = l_Lean_throwErrorAt___redArg(v_inst_1066_, v_inst_1067_, v_stx_1068_, v___x_1148_);
return v___x_1149_;
}
else
{
lean_object* v_d_x3f_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; 
v_d_x3f_1150_ = l_Lean_Syntax_getArg(v___x_1133_, v___x_1102_);
lean_dec(v___x_1133_);
v___x_1151_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__9));
lean_inc(v_d_x3f_1150_);
v___x_1152_ = l_Lean_Syntax_isOfKind(v_d_x3f_1150_, v___x_1151_);
if (v___x_1152_ == 0)
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
lean_dec(v_d_x3f_1150_);
lean_dec(v_t_x3f_1131_);
v___x_1153_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__5));
v___x_1154_ = lean_box(0);
lean_inc_n(v_stx_1068_, 2);
v___x_1155_ = l_Lean_Syntax_formatStx(v_stx_1068_, v___x_1154_, v___x_1152_);
v___x_1156_ = l_Std_Format_defWidth;
v___x_1157_ = l_Std_Format_pretty(v___x_1155_, v___x_1156_, v___x_1102_, v___x_1102_);
v___x_1158_ = lean_string_append(v___x_1153_, v___x_1157_);
lean_dec_ref(v___x_1157_);
v___x_1159_ = ((lean_object*)(l_Lean_Elab_elabTerminationHints___redArg___closed__6));
v___x_1160_ = lean_string_append(v___x_1158_, v___x_1159_);
v___x_1161_ = l_Lean_Syntax_getKind(v_stx_1068_);
v___x_1162_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1161_, v___x_1135_);
v___x_1163_ = lean_string_append(v___x_1160_, v___x_1162_);
lean_dec_ref(v___x_1162_);
v___x_1164_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
v___x_1165_ = l_Lean_MessageData_ofFormat(v___x_1164_);
v___x_1166_ = l_Lean_throwErrorAt___redArg(v_inst_1066_, v_inst_1067_, v_stx_1068_, v___x_1165_);
return v___x_1166_;
}
else
{
lean_object* v___x_1167_; 
lean_inc(v_toPure_1079_);
lean_inc_ref(v_toFunctor_1078_);
lean_inc(v_toBind_1077_);
v___x_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1167_, 0, v_d_x3f_1150_);
v___y_1104_ = v___x_1132_;
v___y_1105_ = v_t_x3f_1131_;
v_d_x3f_1106_ = v___x_1167_;
goto v___jp_1103_;
}
}
}
else
{
lean_object* v___x_1168_; 
lean_inc(v_toPure_1079_);
lean_inc_ref(v_toFunctor_1078_);
lean_inc(v_toBind_1077_);
lean_dec(v___x_1133_);
v___x_1168_ = lean_box(0);
v___y_1104_ = v___x_1132_;
v___y_1105_ = v_t_x3f_1131_;
v_d_x3f_1106_ = v___x_1168_;
goto v___jp_1103_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabTerminationHints(lean_object* v_m_1190_, lean_object* v_inst_1191_, lean_object* v_inst_1192_, lean_object* v_stx_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_Elab_elabTerminationHints___redArg(v_inst_1191_, v_inst_1192_, v_stx_1193_);
return v___x_1194_;
}
}
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_TerminationHint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedPartialFixpointType_default = _init_l_Lean_Elab_instInhabitedPartialFixpointType_default();
l_Lean_Elab_instInhabitedPartialFixpointType = _init_l_Lean_Elab_instInhabitedPartialFixpointType();
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_TerminationHint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_TerminationHint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_TerminationHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_TerminationHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_TerminationHint(builtin);
}
#ifdef __cplusplus
}
#endif
