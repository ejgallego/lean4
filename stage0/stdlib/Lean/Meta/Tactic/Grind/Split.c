// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Split
// Imports: public import Lean.Meta.Tactic.Grind.Action public import Lean.Meta.Tactic.Grind.Anchor import Lean.Meta.Tactic.Grind.Intro import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Tactic.Grind.CasesMatch import Lean.Meta.Tactic.Grind.Internalize import Init.Data.List.MapIdx import Init.Grind.Util import Init.Omega
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_isMatcherAppCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Grind_saveCases___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_isCond(lean_object*);
uint8_t l_Lean_Meta_Grind_isIte(lean_object*);
uint8_t l_Lean_Meta_Grind_isDIte(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_condCondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_isMorallyIff(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_casesMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_source(lean_object*);
lean_object* l_Lean_Meta_Grind_saveSplitDiagInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markCaseSplitAsResolved(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Meta_Grind_isEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isResolvedCaseSplit___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Goal_isCongruent(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Meta_Grind_Action_assertAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_checkMaxCaseSplit___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_getGeneration___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_cheapCasesOnly___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_getAnchorRefs___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_AnchorRef_matches(lean_object*, uint64_t);
lean_object* l_Lean_Meta_Grind_SplitInfo_getExpr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_andThen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_mkAuxMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t l_Lean_Meta_Grind_SplitInfo_beq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg(lean_object*, uint64_t, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getHoistedDecls___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Meta_Grind_mkHoistedDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_setIntroBase(lean_object*, uint64_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_getProofInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_getNumHeadLambdas(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_checkSeqAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_saveState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkHoistedDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assignFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_withHoistedDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getGeneration(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_resolved_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_resolved_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_notReady_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_notReady_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ready_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ready_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedSplitStatus_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedSplitStatus;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqSplitStatus_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqSplitStatus_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instBEqSplitStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instBEqSplitStatus_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instBEqSplitStatus___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instBEqSplitStatus___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instBEqSplitStatus = (const lean_object*)&l_Lean_Meta_Grind_instBEqSplitStatus___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Grind.SplitStatus.notReady"};
static const lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Grind.SplitStatus.resolved"};
static const lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5;
static const lean_string_object l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.Grind.SplitStatus.ready"};
static const lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instReprSplitStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instReprSplitStatus_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instReprSplitStatus___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instReprSplitStatus = (const lean_object*)&l_Lean_Meta_Grind_instReprSplitStatus___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___boxed(lean_object**);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "cannot perform case-split on "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = ", unexpected type"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "split"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__5_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__6_value),LEAN_SCALAR_PTR_LITERAL(26, 217, 152, 239, 89, 139, 148, 201)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "split resolved: "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__13_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__15_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__17_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__0;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__6_value),LEAN_SCALAR_PTR_LITERAL(5, 59, 213, 47, 128, 196, 59, 0)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "may be irrelevant\na: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__4;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\nb: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__6;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "\neq: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__7 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__8;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\narg_a: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__9 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__9_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__10;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\narg_b: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__11 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__11_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__12;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ", gen: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__13 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__13_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__14;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkSplitInfoArgStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkSplitInfoArgStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkSplitStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkSplitStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_none_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_none_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_some_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_some_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs_spec__0(uint64_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checking: "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "em"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__2_value),LEAN_SCALAR_PTR_LITERAL(150, 105, 99, 67, 143, 55, 153, 109)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "of_eq_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__2_value),LEAN_SCALAR_PTR_LITERAL(111, 180, 29, 33, 135, 171, 75, 7)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "of_eq_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__5_value),LEAN_SCALAR_PTR_LITERAL(115, 242, 111, 233, 108, 43, 191, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "or_of_and_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__8_value),LEAN_SCALAR_PTR_LITERAL(64, 20, 245, 101, 69, 170, 96, 179)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor = (const lean_object*)&l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSplitCandidateAnchors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSplitCandidateAnchors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___redArg(uint64_t, uint64_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_mkSplitAnchorRefInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkSplitAnchorRefInfo___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkSplitAnchorRefInfo___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkSplitAnchorRefInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkSplitAnchorRefInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0(uint64_t, uint64_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 233, 158, 17, 45, 135, 214, 137)}};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "grind_ref__/__"};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(163, 78, 76, 1, 128, 192, 165, 233)}};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grind_ref_"};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(236, 234, 46, 225, 9, 69, 165, 154)}};
static const lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 82, 43, 49, 91, 105, 112, 84)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__5_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_lambdaBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_lambdaBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "next"};
static const lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__0 = (const lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__0_value;
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value_aux_3),((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(122, 67, 127, 148, 132, 17, 131, 108)}};
static const lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1 = (const lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1_value;
static const lean_string_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 7, .m_data = "grind·_"};
static const lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__2 = (const lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__2_value;
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value_aux_3),((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(27, 208, 22, 131, 194, 122, 241, 171)}};
static const lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3 = (const lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3_value;
static const lean_string_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSeq"};
static const lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__4 = (const lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__4_value;
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value_aux_3),((lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(158, 229, 98, 59, 247, 194, 34, 174)}};
static const lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5 = (const lean_object*)&l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5_value;
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 96, 222, 221, 183, 249, 85, 65)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grind_<;>_"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 7, 229, 204, 205, 179, 221, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<;>"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Action_isSorryAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l_Lean_Meta_Grind_Action_isSorryAlt___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_isSorryAlt___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_isSorryAlt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 71, 141, 15, 124, 86, 0, 175)}};
static const lean_object* l_Lean_Meta_Grind_Action_isSorryAlt___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_isSorryAlt___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Action_isSorryAlt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_isSorryAlt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ", generation: "};
static const lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lean_Meta_Grind_Action_splitCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lean_Meta_Grind_Action_splitCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___closed__0_value;
static const lean_array_object l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Action_splitNext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_splitNext___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Action_splitNext___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_splitNext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Meta_Grind_SplitStatus_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 2)
{
lean_object* v_numCases_7_; uint8_t v_isRec_8_; uint8_t v_tryPostpone_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v_numCases_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_numCases_7_);
v_isRec_8_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*1);
v_tryPostpone_9_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*1 + 1);
lean_dec_ref_known(v_t_5_, 1);
v___x_10_ = lean_box(v_isRec_8_);
v___x_11_ = lean_box(v_tryPostpone_9_);
v___x_12_ = lean_apply_3(v_k_6_, v_numCases_7_, v___x_10_, v___x_11_);
return v___x_12_;
}
else
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_Grind_SplitStatus_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_resolved_elim___redArg(lean_object* v_t_25_, lean_object* v_resolved_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(v_t_25_, v_resolved_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_resolved_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_resolved_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(v_t_29_, v_resolved_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_notReady_elim___redArg(lean_object* v_t_33_, lean_object* v_notReady_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(v_t_33_, v_notReady_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_notReady_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_notReady_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(v_t_37_, v_notReady_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ready_elim___redArg(lean_object* v_t_41_, lean_object* v_ready_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(v_t_41_, v_ready_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitStatus_ready_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_ready_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_Meta_Grind_SplitStatus_ctorElim___redArg(v_t_45_, v_ready_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedSplitStatus_default(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_box(0);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedSplitStatus(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_box(0);
return v___x_50_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqSplitStatus_beq(lean_object* v_x_51_, lean_object* v_x_52_){
_start:
{
switch(lean_obj_tag(v_x_51_))
{
case 0:
{
if (lean_obj_tag(v_x_52_) == 0)
{
uint8_t v___x_53_; 
v___x_53_ = 1;
return v___x_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = 0;
return v___x_54_;
}
}
case 1:
{
if (lean_obj_tag(v_x_52_) == 1)
{
uint8_t v___x_55_; 
v___x_55_ = 1;
return v___x_55_;
}
else
{
uint8_t v___x_56_; 
v___x_56_ = 0;
return v___x_56_;
}
}
default: 
{
if (lean_obj_tag(v_x_52_) == 2)
{
lean_object* v_numCases_57_; uint8_t v_isRec_58_; uint8_t v_tryPostpone_59_; lean_object* v_numCases_60_; uint8_t v_isRec_61_; uint8_t v_tryPostpone_62_; uint8_t v___y_64_; uint8_t v___x_65_; 
v_numCases_57_ = lean_ctor_get(v_x_51_, 0);
v_isRec_58_ = lean_ctor_get_uint8(v_x_51_, sizeof(void*)*1);
v_tryPostpone_59_ = lean_ctor_get_uint8(v_x_51_, sizeof(void*)*1 + 1);
v_numCases_60_ = lean_ctor_get(v_x_52_, 0);
v_isRec_61_ = lean_ctor_get_uint8(v_x_52_, sizeof(void*)*1);
v_tryPostpone_62_ = lean_ctor_get_uint8(v_x_52_, sizeof(void*)*1 + 1);
v___x_65_ = lean_nat_dec_eq(v_numCases_57_, v_numCases_60_);
if (v___x_65_ == 0)
{
return v___x_65_;
}
else
{
if (v_isRec_61_ == 0)
{
if (v_isRec_58_ == 0)
{
v___y_64_ = v___x_65_;
goto v___jp_63_;
}
else
{
return v_isRec_61_;
}
}
else
{
if (v_isRec_58_ == 0)
{
return v_isRec_58_;
}
else
{
v___y_64_ = v_isRec_58_;
goto v___jp_63_;
}
}
}
v___jp_63_:
{
if (v_tryPostpone_62_ == 0)
{
if (v_tryPostpone_59_ == 0)
{
return v___y_64_;
}
else
{
return v_tryPostpone_62_;
}
}
else
{
return v_tryPostpone_59_;
}
}
}
else
{
uint8_t v___x_66_; 
v___x_66_ = 0;
return v___x_66_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqSplitStatus_beq___boxed(lean_object* v_x_67_, lean_object* v_x_68_){
_start:
{
uint8_t v_res_69_; lean_object* v_r_70_; 
v_res_69_ = l_Lean_Meta_Grind_instBEqSplitStatus_beq(v_x_67_, v_x_68_);
lean_dec(v_x_68_);
lean_dec(v_x_67_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_unsigned_to_nat(2u);
v___x_80_ = lean_nat_to_int(v___x_79_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_unsigned_to_nat(1u);
v___x_82_ = lean_nat_to_int(v___x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr(lean_object* v_x_89_, lean_object* v_prec_90_){
_start:
{
lean_object* v___y_92_; lean_object* v___y_99_; 
switch(lean_obj_tag(v_x_89_))
{
case 0:
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = lean_unsigned_to_nat(1024u);
v___x_106_ = lean_nat_dec_le(v___x_105_, v_prec_90_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4, &l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4_once, _init_l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4);
v___y_99_ = v___x_107_;
goto v___jp_98_;
}
else
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5, &l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5_once, _init_l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5);
v___y_99_ = v___x_108_;
goto v___jp_98_;
}
}
case 1:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_unsigned_to_nat(1024u);
v___x_110_ = lean_nat_dec_le(v___x_109_, v_prec_90_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4, &l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4_once, _init_l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4);
v___y_92_ = v___x_111_;
goto v___jp_91_;
}
else
{
lean_object* v___x_112_; 
v___x_112_ = lean_obj_once(&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5, &l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5_once, _init_l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5);
v___y_92_ = v___x_112_;
goto v___jp_91_;
}
}
default: 
{
lean_object* v_numCases_113_; uint8_t v_isRec_114_; uint8_t v_tryPostpone_115_; lean_object* v___y_117_; lean_object* v___x_133_; uint8_t v___x_134_; 
v_numCases_113_ = lean_ctor_get(v_x_89_, 0);
lean_inc(v_numCases_113_);
v_isRec_114_ = lean_ctor_get_uint8(v_x_89_, sizeof(void*)*1);
v_tryPostpone_115_ = lean_ctor_get_uint8(v_x_89_, sizeof(void*)*1 + 1);
lean_dec_ref_known(v_x_89_, 1);
v___x_133_ = lean_unsigned_to_nat(1024u);
v___x_134_ = lean_nat_dec_le(v___x_133_, v_prec_90_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4, &l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4_once, _init_l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__4);
v___y_117_ = v___x_135_;
goto v___jp_116_;
}
else
{
lean_object* v___x_136_; 
v___x_136_ = lean_obj_once(&l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5, &l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5_once, _init_l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__5);
v___y_117_ = v___x_136_;
goto v___jp_116_;
}
v___jp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_118_ = lean_box(1);
v___x_119_ = ((lean_object*)(l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__8));
v___x_120_ = l_Nat_reprFast(v_numCases_113_);
v___x_121_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___x_118_);
v___x_124_ = l_Bool_repr___redArg(v_isRec_114_);
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_118_);
v___x_127_ = l_Bool_repr___redArg(v_tryPostpone_115_);
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
lean_inc(v___y_117_);
v___x_129_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_129_, 0, v___y_117_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = 0;
v___x_131_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_131_, 0, v___x_129_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*1, v___x_130_);
v___x_132_ = l_Repr_addAppParen(v___x_131_, v_prec_90_);
return v___x_132_;
}
}
}
v___jp_91_:
{
lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_93_ = ((lean_object*)(l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__1));
lean_inc(v___y_92_);
v___x_94_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_94_, 0, v___y_92_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = 0;
v___x_96_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_96_, 0, v___x_94_);
lean_ctor_set_uint8(v___x_96_, sizeof(void*)*1, v___x_95_);
v___x_97_ = l_Repr_addAppParen(v___x_96_, v_prec_90_);
return v___x_97_;
}
v___jp_98_:
{
lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_100_ = ((lean_object*)(l_Lean_Meta_Grind_instReprSplitStatus_repr___closed__3));
lean_inc(v___y_99_);
v___x_101_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_101_, 0, v___y_99_);
lean_ctor_set(v___x_101_, 1, v___x_100_);
v___x_102_ = 0;
v___x_103_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_103_, 0, v___x_101_);
lean_ctor_set_uint8(v___x_103_, sizeof(void*)*1, v___x_102_);
v___x_104_ = l_Repr_addAppParen(v___x_103_, v_prec_90_);
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprSplitStatus_repr___boxed(lean_object* v_x_137_, lean_object* v_prec_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Meta_Grind_instReprSplitStatus_repr(v_x_137_, v_prec_138_);
lean_dec(v_prec_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___redArg(lean_object* v_c_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
lean_object* v___x_153_; 
lean_inc_ref(v_c_142_);
v___x_153_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_c_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v_a_154_; uint8_t v___x_155_; 
v_a_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_a_154_);
lean_dec_ref_known(v___x_153_, 1);
v___x_155_ = lean_unbox(v_a_154_);
lean_dec(v_a_154_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
v___x_156_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_c_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
if (lean_obj_tag(v___x_156_) == 0)
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_169_; 
v_a_157_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_169_ == 0)
{
v___x_159_ = v___x_156_;
v_isShared_160_ = v_isSharedCheck_169_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_156_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_169_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
uint8_t v___x_161_; 
v___x_161_ = lean_unbox(v_a_157_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; uint8_t v___x_164_; uint8_t v___x_165_; lean_object* v___x_167_; 
v___x_162_ = lean_unsigned_to_nat(2u);
v___x_163_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_163_, 0, v___x_162_);
v___x_164_ = lean_unbox(v_a_157_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*1, v___x_164_);
v___x_165_ = lean_unbox(v_a_157_);
lean_dec(v_a_157_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*1 + 1, v___x_165_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 0, v___x_163_);
v___x_167_ = v___x_159_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_163_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
else
{
lean_del_object(v___x_159_);
lean_dec(v_a_157_);
goto v___jp_150_;
}
}
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
v_a_170_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_156_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_156_);
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
else
{
lean_dec_ref(v_c_142_);
goto v___jp_150_;
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
lean_dec_ref(v_c_142_);
v_a_178_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_153_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_153_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
v___jp_150_:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_box(0);
v___x_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___redArg___boxed(lean_object* v_c_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___redArg(v_c_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec_ref(v_a_188_);
lean_dec(v_a_187_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus(lean_object* v_c_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___redArg(v_c_195_, v_a_196_, v_a_200_, v_a_202_, v_a_203_, v_a_204_, v_a_205_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___boxed(lean_object* v_c_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus(v_c_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_);
lean_dec(v_a_218_);
lean_dec_ref(v_a_217_);
lean_dec(v_a_216_);
lean_dec_ref(v_a_215_);
lean_dec(v_a_214_);
lean_dec_ref(v_a_213_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
lean_dec(v_a_209_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___redArg(lean_object* v_e_221_, lean_object* v_a_222_, lean_object* v_b_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v___x_234_; 
lean_inc_ref(v_e_221_);
v___x_234_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_221_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; uint8_t v___x_236_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_a_235_);
lean_dec_ref_known(v___x_234_, 1);
v___x_236_ = lean_unbox(v_a_235_);
lean_dec(v_a_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; 
lean_dec_ref(v_b_223_);
lean_dec_ref(v_a_222_);
v___x_237_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_221_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_251_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_251_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_251_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_251_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
uint8_t v___x_242_; 
v___x_242_ = lean_unbox(v_a_238_);
lean_dec(v_a_238_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_245_; 
v___x_243_ = lean_box(1);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_243_);
v___x_245_ = v___x_240_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_243_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
else
{
lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_247_ = lean_box(0);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_247_);
v___x_249_ = v___x_240_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
v_a_252_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_237_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_237_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
else
{
lean_object* v___x_260_; 
lean_dec_ref(v_e_221_);
v___x_260_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_a_222_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; uint8_t v___x_262_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_a_261_);
lean_dec_ref_known(v___x_260_, 1);
v___x_262_ = lean_unbox(v_a_261_);
lean_dec(v_a_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_b_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_276_; 
v_a_264_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_276_ == 0)
{
v___x_266_ = v___x_263_;
v_isShared_267_ = v_isSharedCheck_276_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_276_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
uint8_t v___x_268_; 
v___x_268_ = lean_unbox(v_a_264_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; uint8_t v___x_272_; lean_object* v___x_274_; 
v___x_269_ = lean_unsigned_to_nat(2u);
v___x_270_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_270_, 0, v___x_269_);
v___x_271_ = lean_unbox(v_a_264_);
lean_ctor_set_uint8(v___x_270_, sizeof(void*)*1, v___x_271_);
v___x_272_ = lean_unbox(v_a_264_);
lean_dec(v_a_264_);
lean_ctor_set_uint8(v___x_270_, sizeof(void*)*1 + 1, v___x_272_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v___x_270_);
v___x_274_ = v___x_266_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_270_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_a_264_);
goto v___jp_231_;
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
v_a_277_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_263_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_263_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
else
{
lean_dec_ref(v_b_223_);
goto v___jp_231_;
}
}
else
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
lean_dec_ref(v_b_223_);
v_a_285_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_260_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_260_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
}
}
else
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
lean_dec_ref(v_b_223_);
lean_dec_ref(v_a_222_);
lean_dec_ref(v_e_221_);
v_a_293_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_234_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_234_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_296_ == 0)
{
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_293_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
v___jp_231_:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_box(0);
v___x_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___redArg___boxed(lean_object* v_e_301_, lean_object* v_a_302_, lean_object* v_b_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___redArg(v_e_301_, v_a_302_, v_b_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_);
lean_dec(v_a_309_);
lean_dec_ref(v_a_308_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus(lean_object* v_e_312_, lean_object* v_a_313_, lean_object* v_b_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___redArg(v_e_312_, v_a_313_, v_b_314_, v_a_315_, v_a_319_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___boxed(lean_object* v_e_327_, lean_object* v_a_328_, lean_object* v_b_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus(v_e_327_, v_a_328_, v_b_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
lean_dec(v_a_331_);
lean_dec(v_a_330_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___redArg(lean_object* v_e_342_, lean_object* v_a_343_, lean_object* v_b_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v___x_355_; 
lean_inc_ref(v_e_342_);
v___x_355_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_342_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; uint8_t v___x_357_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_355_, 1);
v___x_357_ = lean_unbox(v_a_356_);
lean_dec(v_a_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_342_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_401_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_401_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_401_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_401_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
uint8_t v___x_363_; 
v___x_363_ = lean_unbox(v_a_359_);
lean_dec(v_a_359_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_366_; 
lean_dec_ref(v_b_344_);
lean_dec_ref(v_a_343_);
v___x_364_ = lean_box(1);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_364_);
v___x_366_ = v___x_361_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
else
{
lean_object* v___x_368_; 
lean_del_object(v___x_361_);
v___x_368_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_a_343_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; uint8_t v___x_370_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_a_369_);
lean_dec_ref_known(v___x_368_, 1);
v___x_370_ = lean_unbox(v_a_369_);
lean_dec(v_a_369_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_b_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_384_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_384_ == 0)
{
v___x_374_ = v___x_371_;
v_isShared_375_ = v_isSharedCheck_384_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_371_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_384_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
uint8_t v___x_376_; 
v___x_376_ = lean_unbox(v_a_372_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; lean_object* v___x_378_; uint8_t v___x_379_; uint8_t v___x_380_; lean_object* v___x_382_; 
v___x_377_ = lean_unsigned_to_nat(2u);
v___x_378_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_378_, 0, v___x_377_);
v___x_379_ = lean_unbox(v_a_372_);
lean_ctor_set_uint8(v___x_378_, sizeof(void*)*1, v___x_379_);
v___x_380_ = lean_unbox(v_a_372_);
lean_dec(v_a_372_);
lean_ctor_set_uint8(v___x_378_, sizeof(void*)*1 + 1, v___x_380_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_378_);
v___x_382_ = v___x_374_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_378_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
else
{
lean_del_object(v___x_374_);
lean_dec(v_a_372_);
goto v___jp_352_;
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
v_a_385_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_371_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_371_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
else
{
lean_dec_ref(v_b_344_);
goto v___jp_352_;
}
}
else
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_400_; 
lean_dec_ref(v_b_344_);
v_a_393_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_400_ == 0)
{
v___x_395_ = v___x_368_;
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_368_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_396_ == 0)
{
v___x_398_ = v___x_395_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_a_393_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec_ref(v_b_344_);
lean_dec_ref(v_a_343_);
v_a_402_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_358_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_358_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
else
{
lean_dec_ref(v_b_344_);
lean_dec_ref(v_a_343_);
lean_dec_ref(v_e_342_);
goto v___jp_352_;
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
lean_dec_ref(v_b_344_);
lean_dec_ref(v_a_343_);
lean_dec_ref(v_e_342_);
v_a_410_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_355_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_355_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
v___jp_352_:
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_box(0);
v___x_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___redArg___boxed(lean_object* v_e_418_, lean_object* v_a_419_, lean_object* v_b_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___redArg(v_e_418_, v_a_419_, v_b_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec(v_a_421_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus(lean_object* v_e_429_, lean_object* v_a_430_, lean_object* v_b_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___redArg(v_e_429_, v_a_430_, v_b_431_, v_a_432_, v_a_436_, v_a_438_, v_a_439_, v_a_440_, v_a_441_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___boxed(lean_object* v_e_444_, lean_object* v_a_445_, lean_object* v_b_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus(v_e_444_, v_a_445_, v_b_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
lean_dec(v_a_452_);
lean_dec_ref(v_a_451_);
lean_dec(v_a_450_);
lean_dec_ref(v_a_449_);
lean_dec(v_a_448_);
lean_dec(v_a_447_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___redArg(lean_object* v_e_459_, lean_object* v_a_460_, lean_object* v_b_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_){
_start:
{
uint8_t v_a_470_; uint8_t v_a_503_; lean_object* v___x_535_; 
lean_inc_ref(v_e_459_);
v___x_535_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_459_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; uint8_t v___x_537_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = lean_unbox(v_a_536_);
lean_dec(v_a_536_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_459_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_570_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_570_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_570_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_570_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
uint8_t v___x_543_; 
v___x_543_ = lean_unbox(v_a_539_);
lean_dec(v_a_539_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; lean_object* v___x_546_; 
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
v___x_544_ = lean_box(1);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_544_);
v___x_546_ = v___x_541_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
else
{
lean_object* v___x_548_; 
lean_del_object(v___x_541_);
lean_inc_ref(v_a_460_);
v___x_548_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_a_460_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; uint8_t v___x_550_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_548_, 1);
v___x_550_ = lean_unbox(v_a_549_);
lean_dec(v_a_549_);
if (v___x_550_ == 0)
{
goto v___jp_477_;
}
else
{
lean_object* v___x_551_; 
lean_inc_ref(v_b_461_);
v___x_551_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_b_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; uint8_t v___x_553_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v___x_551_, 1);
v___x_553_ = lean_unbox(v_a_552_);
lean_dec(v_a_552_);
if (v___x_553_ == 0)
{
goto v___jp_477_;
}
else
{
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
goto v___jp_474_;
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
v_a_554_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_551_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_551_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
v_a_562_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_548_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_548_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
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
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
v_a_571_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_538_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_538_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
else
{
lean_object* v___x_579_; 
lean_dec_ref(v_e_459_);
lean_inc_ref(v_a_460_);
v___x_579_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_a_460_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; uint8_t v___x_581_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_580_);
lean_dec_ref_known(v___x_579_, 1);
v___x_581_ = lean_unbox(v_a_580_);
lean_dec(v_a_580_);
if (v___x_581_ == 0)
{
goto v___jp_510_;
}
else
{
lean_object* v___x_582_; 
lean_inc_ref(v_b_461_);
v___x_582_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_b_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; uint8_t v___x_584_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_582_, 1);
v___x_584_ = lean_unbox(v_a_583_);
lean_dec(v_a_583_);
if (v___x_584_ == 0)
{
goto v___jp_510_;
}
else
{
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
goto v___jp_507_;
}
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
v_a_585_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_582_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_582_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
v_a_593_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_579_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_579_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
lean_dec_ref(v_b_461_);
lean_dec_ref(v_a_460_);
lean_dec_ref(v_e_459_);
v_a_601_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_535_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_535_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
v___jp_469_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_unsigned_to_nat(2u);
v___x_472_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_472_, 0, v___x_471_);
lean_ctor_set_uint8(v___x_472_, sizeof(void*)*1, v_a_470_);
lean_ctor_set_uint8(v___x_472_, sizeof(void*)*1 + 1, v_a_470_);
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
v___jp_474_:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_box(0);
v___x_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
v___jp_477_:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_a_460_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; uint8_t v___x_480_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
lean_dec_ref_known(v___x_478_, 1);
v___x_480_ = lean_unbox(v_a_479_);
if (v___x_480_ == 0)
{
uint8_t v___x_481_; 
lean_dec_ref(v_b_461_);
v___x_481_ = lean_unbox(v_a_479_);
lean_dec(v_a_479_);
v_a_470_ = v___x_481_;
goto v___jp_469_;
}
else
{
lean_object* v___x_482_; 
lean_dec(v_a_479_);
v___x_482_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_b_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; uint8_t v___x_484_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
v___x_484_ = lean_unbox(v_a_483_);
if (v___x_484_ == 0)
{
uint8_t v___x_485_; 
v___x_485_ = lean_unbox(v_a_483_);
lean_dec(v_a_483_);
v_a_470_ = v___x_485_;
goto v___jp_469_;
}
else
{
lean_dec(v_a_483_);
goto v___jp_474_;
}
}
else
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
v_a_486_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v___x_482_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v___x_482_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_a_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
}
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_dec_ref(v_b_461_);
v_a_494_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_478_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___x_478_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
v___jp_502_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_unsigned_to_nat(2u);
v___x_505_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_505_, 0, v___x_504_);
lean_ctor_set_uint8(v___x_505_, sizeof(void*)*1, v_a_503_);
lean_ctor_set_uint8(v___x_505_, sizeof(void*)*1 + 1, v_a_503_);
v___x_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
return v___x_506_;
}
v___jp_507_:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_box(0);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
v___jp_510_:
{
lean_object* v___x_511_; 
v___x_511_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_a_460_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; uint8_t v___x_513_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
lean_dec_ref_known(v___x_511_, 1);
v___x_513_ = lean_unbox(v_a_512_);
if (v___x_513_ == 0)
{
uint8_t v___x_514_; 
lean_dec_ref(v_b_461_);
v___x_514_ = lean_unbox(v_a_512_);
lean_dec(v_a_512_);
v_a_503_ = v___x_514_;
goto v___jp_502_;
}
else
{
lean_object* v___x_515_; 
lean_dec(v_a_512_);
v___x_515_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_b_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; uint8_t v___x_517_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = lean_unbox(v_a_516_);
if (v___x_517_ == 0)
{
uint8_t v___x_518_; 
v___x_518_ = lean_unbox(v_a_516_);
lean_dec(v_a_516_);
v_a_503_ = v___x_518_;
goto v___jp_502_;
}
else
{
lean_dec(v_a_516_);
goto v___jp_507_;
}
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
v_a_519_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_515_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_515_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
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
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_dec_ref(v_b_461_);
v_a_527_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_511_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_511_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___redArg___boxed(lean_object* v_e_609_, lean_object* v_a_610_, lean_object* v_b_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___redArg(v_e_609_, v_a_610_, v_b_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_616_);
lean_dec(v_a_615_);
lean_dec_ref(v_a_614_);
lean_dec_ref(v_a_613_);
lean_dec(v_a_612_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus(lean_object* v_e_620_, lean_object* v_a_621_, lean_object* v_b_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___redArg(v_e_620_, v_a_621_, v_b_622_, v_a_623_, v_a_627_, v_a_629_, v_a_630_, v_a_631_, v_a_632_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___boxed(lean_object* v_e_635_, lean_object* v_a_636_, lean_object* v_b_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus(v_e_635_, v_a_636_, v_b_637_, v_a_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_);
lean_dec(v_a_647_);
lean_dec_ref(v_a_646_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
lean_dec(v_a_643_);
lean_dec_ref(v_a_642_);
lean_dec(v_a_641_);
lean_dec_ref(v_a_640_);
lean_dec(v_a_639_);
lean_dec(v_a_638_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit___lam__0(lean_object* v_c_650_, uint8_t v_d_651_, lean_object* v_a_652_, lean_object* v_x_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
if (v_d_651_ == 0)
{
lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_665_ = lean_st_ref_get(v___y_654_);
v___x_666_ = l_Lean_Expr_isApp(v_a_652_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; 
lean_dec(v___x_665_);
lean_dec_ref(v_a_652_);
lean_dec_ref(v_c_650_);
v___x_667_ = lean_box(v___x_666_);
v___x_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
return v___x_668_;
}
else
{
uint8_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_669_ = l_Lean_Meta_Grind_Goal_isCongruent(v___x_665_, v_c_650_, v_a_652_);
lean_dec(v___x_665_);
v___x_670_ = lean_box(v___x_669_);
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
return v___x_671_;
}
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec_ref(v_a_652_);
lean_dec_ref(v_c_650_);
v___x_672_ = lean_box(v_d_651_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit___lam__0___boxed(lean_object* v_c_674_, lean_object* v_d_675_, lean_object* v_a_676_, lean_object* v_x_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
uint8_t v_d_boxed_689_; lean_object* v_res_690_; 
v_d_boxed_689_ = lean_unbox(v_d_675_);
v_res_690_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit___lam__0(v_c_674_, v_d_boxed_689_, v_a_676_, v_x_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec(v___y_678_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___redArg(lean_object* v_f_691_, lean_object* v_keys_692_, lean_object* v_vals_693_, lean_object* v_i_694_, lean_object* v_acc_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_707_ = lean_array_get_size(v_keys_692_);
v___x_708_ = lean_nat_dec_lt(v_i_694_, v___x_707_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; 
lean_dec(v_i_694_);
lean_dec_ref(v_f_691_);
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v_acc_695_);
return v___x_709_;
}
else
{
lean_object* v_k_710_; lean_object* v_v_711_; lean_object* v___x_712_; 
v_k_710_ = lean_array_fget_borrowed(v_keys_692_, v_i_694_);
v_v_711_ = lean_array_fget_borrowed(v_vals_693_, v_i_694_);
lean_inc_ref(v_f_691_);
lean_inc(v___y_705_);
lean_inc_ref(v___y_704_);
lean_inc(v___y_703_);
lean_inc_ref(v___y_702_);
lean_inc(v___y_701_);
lean_inc_ref(v___y_700_);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
lean_inc(v___y_697_);
lean_inc(v___y_696_);
lean_inc(v_v_711_);
lean_inc(v_k_710_);
v___x_712_ = lean_apply_14(v_f_691_, v_acc_695_, v_k_710_, v_v_711_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, lean_box(0));
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = lean_unsigned_to_nat(1u);
v___x_715_ = lean_nat_add(v_i_694_, v___x_714_);
lean_dec(v_i_694_);
v_i_694_ = v___x_715_;
v_acc_695_ = v_a_713_;
goto _start;
}
else
{
lean_dec(v_i_694_);
lean_dec_ref(v_f_691_);
return v___x_712_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_f_717_, lean_object* v_keys_718_, lean_object* v_vals_719_, lean_object* v_i_720_, lean_object* v_acc_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___redArg(v_f_717_, v_keys_718_, v_vals_719_, v_i_720_, v_acc_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v_vals_719_);
lean_dec_ref(v_keys_718_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___redArg(lean_object* v_f_734_, lean_object* v_as_735_, size_t v_i_736_, size_t v_stop_737_, lean_object* v_b_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
lean_object* v_a_751_; lean_object* v___y_756_; uint8_t v___x_758_; 
v___x_758_ = lean_usize_dec_eq(v_i_736_, v_stop_737_);
if (v___x_758_ == 0)
{
lean_object* v___x_759_; 
v___x_759_ = lean_array_uget_borrowed(v_as_735_, v_i_736_);
switch(lean_obj_tag(v___x_759_))
{
case 0:
{
lean_object* v_key_760_; lean_object* v_val_761_; lean_object* v___x_762_; 
v_key_760_ = lean_ctor_get(v___x_759_, 0);
v_val_761_ = lean_ctor_get(v___x_759_, 1);
lean_inc_ref(v_f_734_);
lean_inc(v___y_748_);
lean_inc_ref(v___y_747_);
lean_inc(v___y_746_);
lean_inc_ref(v___y_745_);
lean_inc(v___y_744_);
lean_inc_ref(v___y_743_);
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_740_);
lean_inc(v___y_739_);
lean_inc(v_val_761_);
lean_inc(v_key_760_);
v___x_762_ = lean_apply_14(v_f_734_, v_b_738_, v_key_760_, v_val_761_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, lean_box(0));
v___y_756_ = v___x_762_;
goto v___jp_755_;
}
case 1:
{
lean_object* v_node_763_; lean_object* v___x_764_; 
v_node_763_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_node_763_);
lean_inc_ref(v_f_734_);
v___x_764_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg(v_f_734_, v_node_763_, v_b_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_);
v___y_756_ = v___x_764_;
goto v___jp_755_;
}
default: 
{
v_a_751_ = v_b_738_;
goto v___jp_750_;
}
}
}
else
{
lean_object* v___x_765_; 
lean_dec_ref(v_f_734_);
v___x_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_765_, 0, v_b_738_);
return v___x_765_;
}
v___jp_750_:
{
size_t v___x_752_; size_t v___x_753_; 
v___x_752_ = ((size_t)1ULL);
v___x_753_ = lean_usize_add(v_i_736_, v___x_752_);
v_i_736_ = v___x_753_;
v_b_738_ = v_a_751_;
goto _start;
}
v___jp_755_:
{
if (lean_obj_tag(v___y_756_) == 0)
{
lean_object* v_a_757_; 
v_a_757_ = lean_ctor_get(v___y_756_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___y_756_, 1);
v_a_751_ = v_a_757_;
goto v___jp_750_;
}
else
{
lean_dec_ref(v_f_734_);
return v___y_756_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg(lean_object* v_f_766_, lean_object* v_x_767_, lean_object* v_x_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
if (lean_obj_tag(v_x_767_) == 0)
{
lean_object* v_es_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_793_; 
v_es_780_ = lean_ctor_get(v_x_767_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_767_);
if (v_isSharedCheck_793_ == 0)
{
v___x_782_ = v_x_767_;
v_isShared_783_ = v_isSharedCheck_793_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_es_780_);
lean_dec(v_x_767_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_793_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_784_; lean_object* v___x_785_; uint8_t v___x_786_; 
v___x_784_ = lean_unsigned_to_nat(0u);
v___x_785_ = lean_array_get_size(v_es_780_);
v___x_786_ = lean_nat_dec_lt(v___x_784_, v___x_785_);
if (v___x_786_ == 0)
{
lean_object* v___x_788_; 
lean_dec_ref(v_es_780_);
lean_dec_ref(v_f_766_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v_x_768_);
v___x_788_ = v___x_782_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_x_768_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
else
{
size_t v___x_790_; size_t v___x_791_; lean_object* v___x_792_; 
lean_del_object(v___x_782_);
v___x_790_ = ((size_t)0ULL);
v___x_791_ = lean_usize_of_nat(v___x_785_);
v___x_792_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___redArg(v_f_766_, v_es_780_, v___x_790_, v___x_791_, v_x_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec_ref(v_es_780_);
return v___x_792_;
}
}
}
else
{
lean_object* v_ks_794_; lean_object* v_vs_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v_ks_794_ = lean_ctor_get(v_x_767_, 0);
lean_inc_ref(v_ks_794_);
v_vs_795_ = lean_ctor_get(v_x_767_, 1);
lean_inc_ref(v_vs_795_);
lean_dec_ref_known(v_x_767_, 2);
v___x_796_ = lean_unsigned_to_nat(0u);
v___x_797_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___redArg(v_f_766_, v_ks_794_, v_vs_795_, v___x_796_, v_x_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec_ref(v_vs_795_);
lean_dec_ref(v_ks_794_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg___boxed(lean_object* v_f_798_, lean_object* v_x_799_, lean_object* v_x_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg(v_f_798_, v_x_799_, v_x_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec(v___y_801_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_813_, lean_object* v_as_814_, lean_object* v_i_815_, lean_object* v_stop_816_, lean_object* v_b_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
size_t v_i_boxed_829_; size_t v_stop_boxed_830_; lean_object* v_res_831_; 
v_i_boxed_829_ = lean_unbox_usize(v_i_815_);
lean_dec(v_i_815_);
v_stop_boxed_830_ = lean_unbox_usize(v_stop_816_);
lean_dec(v_stop_816_);
v_res_831_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___redArg(v_f_813_, v_as_814_, v_i_boxed_829_, v_stop_boxed_830_, v_b_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v_as_814_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit(lean_object* v_c_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_){
_start:
{
uint8_t v___x_844_; 
v___x_844_ = l_Lean_Expr_isApp(v_c_832_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; lean_object* v___x_846_; 
lean_dec_ref(v_c_832_);
v___x_845_ = lean_box(v___x_844_);
v___x_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
else
{
lean_object* v___f_847_; lean_object* v___x_848_; lean_object* v_toGoalState_849_; lean_object* v_split_850_; lean_object* v_resolved_851_; uint8_t v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___f_847_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit___lam__0___boxed), 15, 1);
lean_closure_set(v___f_847_, 0, v_c_832_);
v___x_848_ = lean_st_ref_get(v_a_833_);
v_toGoalState_849_ = lean_ctor_get(v___x_848_, 0);
lean_inc_ref(v_toGoalState_849_);
lean_dec(v___x_848_);
v_split_850_ = lean_ctor_get(v_toGoalState_849_, 16);
lean_inc_ref(v_split_850_);
lean_dec_ref(v_toGoalState_849_);
v_resolved_851_ = lean_ctor_get(v_split_850_, 2);
lean_inc_ref(v_resolved_851_);
lean_dec_ref(v_split_850_);
v___x_852_ = 0;
v___x_853_ = lean_box(v___x_852_);
v___x_854_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg(v___f_847_, v_resolved_851_, v___x_853_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_);
return v___x_854_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit___boxed(lean_object* v_c_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit(v_c_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, v_a_865_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
lean_dec(v_a_861_);
lean_dec_ref(v_a_860_);
lean_dec(v_a_859_);
lean_dec_ref(v_a_858_);
lean_dec(v_a_857_);
lean_dec(v_a_856_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0___redArg(lean_object* v_map_868_, lean_object* v_f_869_, lean_object* v_init_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg(v_f_869_, v_map_868_, v_init_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0___redArg___boxed(lean_object* v_map_883_, lean_object* v_f_884_, lean_object* v_init_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0___redArg(v_map_883_, v_f_884_, v_init_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec(v___y_886_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0(lean_object* v_00_u03c3_898_, lean_object* v_00_u03b2_899_, lean_object* v_map_900_, lean_object* v_f_901_, lean_object* v_init_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg(v_f_901_, v_map_900_, v_init_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0___boxed(lean_object* v_00_u03c3_915_, lean_object* v_00_u03b2_916_, lean_object* v_map_917_, lean_object* v_f_918_, lean_object* v_init_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0(v_00_u03c3_915_, v_00_u03b2_916_, v_map_917_, v_f_918_, v_init_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec(v___y_920_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0(lean_object* v_00_u03c3_932_, lean_object* v_00_u03b1_933_, lean_object* v_00_u03b2_934_, lean_object* v_f_935_, lean_object* v_x_936_, lean_object* v_x_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___redArg(v_f_935_, v_x_936_, v_x_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0___boxed(lean_object** _args){
lean_object* v_00_u03c3_950_ = _args[0];
lean_object* v_00_u03b1_951_ = _args[1];
lean_object* v_00_u03b2_952_ = _args[2];
lean_object* v_f_953_ = _args[3];
lean_object* v_x_954_ = _args[4];
lean_object* v_x_955_ = _args[5];
lean_object* v___y_956_ = _args[6];
lean_object* v___y_957_ = _args[7];
lean_object* v___y_958_ = _args[8];
lean_object* v___y_959_ = _args[9];
lean_object* v___y_960_ = _args[10];
lean_object* v___y_961_ = _args[11];
lean_object* v___y_962_ = _args[12];
lean_object* v___y_963_ = _args[13];
lean_object* v___y_964_ = _args[14];
lean_object* v___y_965_ = _args[15];
lean_object* v___y_966_ = _args[16];
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0(v_00_u03c3_950_, v_00_u03b1_951_, v_00_u03b2_952_, v_f_953_, v_x_954_, v_x_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec(v___y_956_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_968_, lean_object* v_00_u03b2_969_, lean_object* v_00_u03c3_970_, lean_object* v_f_971_, lean_object* v_as_972_, size_t v_i_973_, size_t v_stop_974_, lean_object* v_b_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___redArg(v_f_971_, v_as_972_, v_i_973_, v_stop_974_, v_b_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1___boxed(lean_object** _args){
lean_object* v_00_u03b1_988_ = _args[0];
lean_object* v_00_u03b2_989_ = _args[1];
lean_object* v_00_u03c3_990_ = _args[2];
lean_object* v_f_991_ = _args[3];
lean_object* v_as_992_ = _args[4];
lean_object* v_i_993_ = _args[5];
lean_object* v_stop_994_ = _args[6];
lean_object* v_b_995_ = _args[7];
lean_object* v___y_996_ = _args[8];
lean_object* v___y_997_ = _args[9];
lean_object* v___y_998_ = _args[10];
lean_object* v___y_999_ = _args[11];
lean_object* v___y_1000_ = _args[12];
lean_object* v___y_1001_ = _args[13];
lean_object* v___y_1002_ = _args[14];
lean_object* v___y_1003_ = _args[15];
lean_object* v___y_1004_ = _args[16];
lean_object* v___y_1005_ = _args[17];
lean_object* v___y_1006_ = _args[18];
_start:
{
size_t v_i_boxed_1007_; size_t v_stop_boxed_1008_; lean_object* v_res_1009_; 
v_i_boxed_1007_ = lean_unbox_usize(v_i_993_);
lean_dec(v_i_993_);
v_stop_boxed_1008_ = lean_unbox_usize(v_stop_994_);
lean_dec(v_stop_994_);
v_res_1009_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__1(v_00_u03b1_988_, v_00_u03b2_989_, v_00_u03c3_990_, v_f_991_, v_as_992_, v_i_boxed_1007_, v_stop_boxed_1008_, v_b_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v_as_992_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2(lean_object* v_00_u03c3_1010_, lean_object* v_00_u03b1_1011_, lean_object* v_00_u03b2_1012_, lean_object* v_f_1013_, lean_object* v_keys_1014_, lean_object* v_vals_1015_, lean_object* v_heq_1016_, lean_object* v_i_1017_, lean_object* v_acc_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___redArg(v_f_1013_, v_keys_1014_, v_vals_1015_, v_i_1017_, v_acc_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2___boxed(lean_object** _args){
lean_object* v_00_u03c3_1031_ = _args[0];
lean_object* v_00_u03b1_1032_ = _args[1];
lean_object* v_00_u03b2_1033_ = _args[2];
lean_object* v_f_1034_ = _args[3];
lean_object* v_keys_1035_ = _args[4];
lean_object* v_vals_1036_ = _args[5];
lean_object* v_heq_1037_ = _args[6];
lean_object* v_i_1038_ = _args[7];
lean_object* v_acc_1039_ = _args[8];
lean_object* v___y_1040_ = _args[9];
lean_object* v___y_1041_ = _args[10];
lean_object* v___y_1042_ = _args[11];
lean_object* v___y_1043_ = _args[12];
lean_object* v___y_1044_ = _args[13];
lean_object* v___y_1045_ = _args[14];
lean_object* v___y_1046_ = _args[15];
lean_object* v___y_1047_ = _args[16];
lean_object* v___y_1048_ = _args[17];
lean_object* v___y_1049_ = _args[18];
lean_object* v___y_1050_ = _args[19];
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit_spec__0_spec__0_spec__2(v_00_u03c3_1031_, v_00_u03b1_1032_, v_00_u03b2_1033_, v_f_1034_, v_keys_1035_, v_vals_1036_, v_heq_1037_, v_i_1038_, v_acc_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec(v___y_1040_);
lean_dec_ref(v_vals_1036_);
lean_dec_ref(v_keys_1035_);
return v_res_1051_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1052_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
return v___x_1054_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1055_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1056_ = lean_unsigned_to_nat(0u);
v___x_1057_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
lean_ctor_set(v___x_1057_, 2, v___x_1056_);
lean_ctor_set(v___x_1057_, 3, v___x_1056_);
lean_ctor_set(v___x_1057_, 4, v___x_1055_);
lean_ctor_set(v___x_1057_, 5, v___x_1055_);
lean_ctor_set(v___x_1057_, 6, v___x_1055_);
lean_ctor_set(v___x_1057_, 7, v___x_1055_);
lean_ctor_set(v___x_1057_, 8, v___x_1055_);
lean_ctor_set(v___x_1057_, 9, v___x_1055_);
lean_ctor_set(v___x_1057_, 10, v___x_1055_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = lean_unsigned_to_nat(32u);
v___x_1059_ = lean_mk_empty_array_with_capacity(v___x_1058_);
v___x_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1061_ = ((size_t)5ULL);
v___x_1062_ = lean_unsigned_to_nat(0u);
v___x_1063_ = lean_unsigned_to_nat(32u);
v___x_1064_ = lean_mk_empty_array_with_capacity(v___x_1063_);
v___x_1065_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_1066_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
lean_ctor_set(v___x_1066_, 1, v___x_1064_);
lean_ctor_set(v___x_1066_, 2, v___x_1062_);
lean_ctor_set(v___x_1066_, 3, v___x_1062_);
lean_ctor_set_usize(v___x_1066_, 4, v___x_1061_);
return v___x_1066_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1067_ = lean_box(1);
v___x_1068_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_1069_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1070_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
lean_ctor_set(v___x_1070_, 1, v___x_1068_);
lean_ctor_set(v___x_1070_, 2, v___x_1067_);
return v___x_1070_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6));
v___x_1073_ = l_Lean_stringToMessageData(v___x_1072_);
return v___x_1073_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8));
v___x_1076_ = l_Lean_stringToMessageData(v___x_1075_);
return v___x_1076_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10));
v___x_1079_ = l_Lean_stringToMessageData(v___x_1078_);
return v___x_1079_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12));
v___x_1082_ = l_Lean_stringToMessageData(v___x_1081_);
return v___x_1082_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14));
v___x_1085_ = l_Lean_stringToMessageData(v___x_1084_);
return v___x_1085_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16));
v___x_1088_ = l_Lean_stringToMessageData(v___x_1087_);
return v___x_1088_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__18));
v___x_1091_ = l_Lean_stringToMessageData(v___x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_1092_, lean_object* v_declHint_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v_env_1098_; uint8_t v___x_1099_; 
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_st_ref_get(v___y_1094_);
v_env_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc_ref(v_env_1098_);
lean_dec(v___x_1097_);
v___x_1099_ = l_Lean_Name_isAnonymous(v_declHint_1093_);
if (v___x_1099_ == 0)
{
uint8_t v_isExporting_1100_; 
v_isExporting_1100_ = lean_ctor_get_uint8(v_env_1098_, sizeof(void*)*13);
if (v_isExporting_1100_ == 0)
{
lean_object* v___x_1101_; 
lean_dec_ref(v_env_1098_);
lean_dec(v_declHint_1093_);
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_msg_1092_);
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; uint8_t v___x_1103_; 
lean_inc_ref(v_env_1098_);
v___x_1102_ = l_Lean_Environment_setExporting(v_env_1098_, v___x_1099_);
lean_inc(v_declHint_1093_);
lean_inc_ref(v___x_1102_);
v___x_1103_ = l_Lean_Environment_contains(v___x_1102_, v_declHint_1093_, v_isExporting_1100_);
if (v___x_1103_ == 0)
{
lean_object* v___x_1104_; 
lean_dec_ref(v___x_1102_);
lean_dec_ref(v_env_1098_);
lean_dec(v_declHint_1093_);
v___x_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1104_, 0, v_msg_1092_);
return v___x_1104_;
}
else
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v_c_1110_; lean_object* v___x_1111_; 
v___x_1105_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2);
v___x_1106_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_1107_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1102_);
v___x_1108_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1102_);
lean_ctor_set(v___x_1108_, 1, v___x_1105_);
lean_ctor_set(v___x_1108_, 2, v___x_1106_);
lean_ctor_set(v___x_1108_, 3, v___x_1107_);
lean_inc(v_declHint_1093_);
v___x_1109_ = l_Lean_MessageData_ofConstName(v_declHint_1093_, v___x_1099_);
v_c_1110_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1110_, 0, v___x_1108_);
lean_ctor_set(v_c_1110_, 1, v___x_1109_);
v___x_1111_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1102_, v_declHint_1093_);
lean_dec_ref(v___x_1102_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_dec_ref(v_env_1098_);
lean_dec(v_declHint_1093_);
v___x_1112_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v_c_1110_);
v___x_1114_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9);
v___x_1115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = l_Lean_MessageData_note(v___x_1115_);
v___x_1117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1117_, 0, v_msg_1092_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
return v___x_1118_;
}
else
{
lean_object* v_val_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1153_; 
v_val_1119_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1121_ = v___x_1111_;
v_isShared_1122_ = v_isSharedCheck_1153_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_val_1119_);
lean_dec(v___x_1111_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1153_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1123_; lean_object* v_moduleNames_1124_; lean_object* v_mod_1125_; uint8_t v___x_1126_; 
v___x_1123_ = l_Lean_Environment_header(v_env_1098_);
lean_dec_ref(v_env_1098_);
v_moduleNames_1124_ = lean_ctor_get(v___x_1123_, 4);
lean_inc_ref(v_moduleNames_1124_);
lean_dec_ref(v___x_1123_);
v_mod_1125_ = lean_array_get(v___x_1096_, v_moduleNames_1124_, v_val_1119_);
lean_dec(v_val_1119_);
lean_dec_ref(v_moduleNames_1124_);
v___x_1126_ = l_Lean_isPrivateName(v_declHint_1093_);
lean_dec(v_declHint_1093_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1127_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11);
v___x_1128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
lean_ctor_set(v___x_1128_, 1, v_c_1110_);
v___x_1129_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13);
v___x_1130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1128_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = l_Lean_MessageData_ofName(v_mod_1125_);
v___x_1132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15);
v___x_1134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = l_Lean_MessageData_note(v___x_1134_);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v_msg_1092_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
if (v_isShared_1122_ == 0)
{
lean_ctor_set_tag(v___x_1121_, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1136_);
v___x_1138_ = v___x_1121_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
else
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1151_; 
v___x_1140_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
lean_ctor_set(v___x_1141_, 1, v_c_1110_);
v___x_1142_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17);
v___x_1143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = l_Lean_MessageData_ofName(v_mod_1125_);
v___x_1145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1143_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
v___x_1146_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19);
v___x_1147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = l_Lean_MessageData_note(v___x_1147_);
v___x_1149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1149_, 0, v_msg_1092_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
if (v_isShared_1122_ == 0)
{
lean_ctor_set_tag(v___x_1121_, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1149_);
v___x_1151_ = v___x_1121_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v___x_1149_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1154_; 
lean_dec_ref(v_env_1098_);
lean_dec(v_declHint_1093_);
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_msg_1092_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_1155_, lean_object* v_declHint_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1155_, v_declHint_1156_, v___y_1157_);
lean_dec(v___y_1157_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_msg_1160_, lean_object* v_declHint_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v___x_1173_; lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1183_; 
v___x_1173_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1160_, v_declHint_1161_, v___y_1171_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
v___x_1178_ = l_Lean_unknownIdentifierMessageTag;
v___x_1179_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v_a_1174_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v___x_1179_);
v___x_1181_ = v___x_1176_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object* v_msg_1184_, lean_object* v_declHint_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_1184_, v_declHint_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec(v___y_1186_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1_spec__2(lean_object* v_msgData_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___x_1204_; lean_object* v_env_1205_; uint8_t v___x_1206_; lean_object* v_env_1207_; lean_object* v___x_1208_; lean_object* v_toCold_1209_; lean_object* v_mctx_1210_; lean_object* v_lctx_1211_; lean_object* v_options_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1204_ = lean_st_ref_get(v___y_1202_);
v_env_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc_ref(v_env_1205_);
lean_dec(v___x_1204_);
v___x_1206_ = 0;
v_env_1207_ = l_Lean_Environment_setRecordingDeps(v_env_1205_, v___x_1206_);
v___x_1208_ = lean_st_ref_get(v___y_1200_);
v_toCold_1209_ = lean_ctor_get(v___y_1201_, 0);
v_mctx_1210_ = lean_ctor_get(v___x_1208_, 0);
lean_inc_ref(v_mctx_1210_);
lean_dec(v___x_1208_);
v_lctx_1211_ = lean_ctor_get(v___y_1199_, 2);
v_options_1212_ = lean_ctor_get(v_toCold_1209_, 2);
lean_inc_ref(v_options_1212_);
lean_inc_ref(v_lctx_1211_);
v___x_1213_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1213_, 0, v_env_1207_);
lean_ctor_set(v___x_1213_, 1, v_mctx_1210_);
lean_ctor_set(v___x_1213_, 2, v_lctx_1211_);
lean_ctor_set(v___x_1213_, 3, v_options_1212_);
v___x_1214_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
lean_ctor_set(v___x_1214_, 1, v_msgData_1198_);
v___x_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1_spec__2___boxed(lean_object* v_msgData_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1_spec__2(v_msgData_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object* v_msg_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v_ref_1229_; lean_object* v___x_1230_; lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1239_; 
v_ref_1229_ = lean_ctor_get(v___y_1226_, 2);
v___x_1230_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1_spec__2(v_msg_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1233_ = v___x_1230_;
v_isShared_1234_ = v_isSharedCheck_1239_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_dec(v___x_1230_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1239_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
lean_inc(v_ref_1229_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v_ref_1229_);
lean_ctor_set(v___x_1235_, 1, v_a_1231_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set_tag(v___x_1233_, 1);
lean_ctor_set(v___x_1233_, 0, v___x_1235_);
v___x_1237_ = v___x_1233_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_msg_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_msg_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_1247_, lean_object* v_msg_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v_toCold_1260_; lean_object* v_currRecDepth_1261_; lean_object* v_ref_1262_; uint16_t v_optionFlags_1263_; uint8_t v_suppressElabErrors_1264_; uint8_t v_checkDeprecated_1265_; uint8_t v_isRecordingDeps_1266_; lean_object* v_ref_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_toCold_1260_ = lean_ctor_get(v___y_1257_, 0);
v_currRecDepth_1261_ = lean_ctor_get(v___y_1257_, 1);
v_ref_1262_ = lean_ctor_get(v___y_1257_, 2);
v_optionFlags_1263_ = lean_ctor_get_uint16(v___y_1257_, sizeof(void*)*3);
v_suppressElabErrors_1264_ = lean_ctor_get_uint8(v___y_1257_, sizeof(void*)*3 + 2);
v_checkDeprecated_1265_ = lean_ctor_get_uint8(v___y_1257_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1266_ = lean_ctor_get_uint8(v___y_1257_, sizeof(void*)*3 + 4);
v_ref_1267_ = l_Lean_replaceRef(v_ref_1247_, v_ref_1262_);
lean_inc(v_currRecDepth_1261_);
lean_inc_ref(v_toCold_1260_);
v___x_1268_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1268_, 0, v_toCold_1260_);
lean_ctor_set(v___x_1268_, 1, v_currRecDepth_1261_);
lean_ctor_set(v___x_1268_, 2, v_ref_1267_);
lean_ctor_set_uint16(v___x_1268_, sizeof(void*)*3, v_optionFlags_1263_);
lean_ctor_set_uint8(v___x_1268_, sizeof(void*)*3 + 2, v_suppressElabErrors_1264_);
lean_ctor_set_uint8(v___x_1268_, sizeof(void*)*3 + 3, v_checkDeprecated_1265_);
lean_ctor_set_uint8(v___x_1268_, sizeof(void*)*3 + 4, v_isRecordingDeps_1266_);
v___x_1269_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_msg_1248_, v___y_1255_, v___y_1256_, v___x_1268_, v___y_1258_);
lean_dec_ref_known(v___x_1268_, 3);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1270_, lean_object* v_msg_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1270_, v_msg_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec(v_ref_1270_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_1284_, lean_object* v_msg_1285_, lean_object* v_declHint_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; lean_object* v_a_1299_; lean_object* v___x_1300_; 
v___x_1298_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_1285_, v_declHint_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref(v___x_1298_);
v___x_1300_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1284_, v_a_1299_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1301_, lean_object* v_msg_1302_, lean_object* v_declHint_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1301_, v_msg_1302_, v_declHint_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec(v_ref_1301_);
return v_res_1315_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1318_ = l_Lean_stringToMessageData(v___x_1317_);
return v___x_1318_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_1321_ = l_Lean_stringToMessageData(v___x_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1322_, lean_object* v_constName_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v___x_1335_; uint8_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1335_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1336_ = 0;
lean_inc(v_constName_1323_);
v___x_1337_ = l_Lean_MessageData_ofConstName(v_constName_1323_, v___x_1336_);
v___x_1338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1335_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_1340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1322_, v___x_1340_, v_constName_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1342_, lean_object* v_constName_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg(v_ref_1342_, v_constName_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec(v_ref_1342_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___redArg(lean_object* v_constName_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_ref_1368_; lean_object* v___x_1369_; 
v_ref_1368_ = lean_ctor_get(v___y_1365_, 2);
v___x_1369_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg(v_ref_1368_, v_constName_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___redArg(v_constName_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
lean_dec(v___y_1371_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0(lean_object* v_constName_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v___x_1395_; lean_object* v_env_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; 
v___x_1395_ = lean_st_ref_get(v___y_1393_);
v_env_1396_ = lean_ctor_get(v___x_1395_, 0);
lean_inc_ref(v_env_1396_);
lean_dec(v___x_1395_);
v___x_1397_ = 0;
lean_inc(v_constName_1383_);
v___x_1398_ = l_Lean_Environment_find_x3f(v_env_1396_, v_constName_1383_, v___x_1397_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v___x_1399_; 
v___x_1399_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___redArg(v_constName_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
return v___x_1399_;
}
else
{
lean_object* v_val_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1407_; 
lean_dec(v_constName_1383_);
v_val_1400_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1402_ = v___x_1398_;
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_val_1400_);
lean_dec(v___x_1398_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1405_; 
if (v_isShared_1403_ == 0)
{
lean_ctor_set_tag(v___x_1402_, 0);
v___x_1405_ = v___x_1402_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_val_1400_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0___boxed(lean_object* v_constName_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0(v_constName_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v___y_1410_);
lean_dec(v___y_1409_);
return v_res_1420_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1421_; double v___x_1422_; 
v___x_1421_ = lean_unsigned_to_nat(0u);
v___x_1422_ = lean_float_of_nat(v___x_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg(lean_object* v_cls_1426_, lean_object* v_msg_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v_ref_1433_; lean_object* v___x_1434_; lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1480_; 
v_ref_1433_ = lean_ctor_get(v___y_1430_, 2);
v___x_1434_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1_spec__2(v_msg_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_);
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1480_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1480_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v_traceState_1440_; lean_object* v_env_1441_; lean_object* v_nextMacroScope_1442_; lean_object* v_ngen_1443_; lean_object* v_auxDeclNGen_1444_; lean_object* v_cache_1445_; lean_object* v_recordedDeps_1446_; lean_object* v_messages_1447_; lean_object* v_infoState_1448_; lean_object* v_snapshotTasks_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1479_; 
v___x_1439_ = lean_st_ref_take(v___y_1431_);
v_traceState_1440_ = lean_ctor_get(v___x_1439_, 4);
v_env_1441_ = lean_ctor_get(v___x_1439_, 0);
v_nextMacroScope_1442_ = lean_ctor_get(v___x_1439_, 1);
v_ngen_1443_ = lean_ctor_get(v___x_1439_, 2);
v_auxDeclNGen_1444_ = lean_ctor_get(v___x_1439_, 3);
v_cache_1445_ = lean_ctor_get(v___x_1439_, 5);
v_recordedDeps_1446_ = lean_ctor_get(v___x_1439_, 6);
v_messages_1447_ = lean_ctor_get(v___x_1439_, 7);
v_infoState_1448_ = lean_ctor_get(v___x_1439_, 8);
v_snapshotTasks_1449_ = lean_ctor_get(v___x_1439_, 9);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1451_ = v___x_1439_;
v_isShared_1452_ = v_isSharedCheck_1479_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_snapshotTasks_1449_);
lean_inc(v_infoState_1448_);
lean_inc(v_messages_1447_);
lean_inc(v_recordedDeps_1446_);
lean_inc(v_cache_1445_);
lean_inc(v_traceState_1440_);
lean_inc(v_auxDeclNGen_1444_);
lean_inc(v_ngen_1443_);
lean_inc(v_nextMacroScope_1442_);
lean_inc(v_env_1441_);
lean_dec(v___x_1439_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1479_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
uint64_t v_tid_1453_; lean_object* v_traces_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1478_; 
v_tid_1453_ = lean_ctor_get_uint64(v_traceState_1440_, sizeof(void*)*1);
v_traces_1454_ = lean_ctor_get(v_traceState_1440_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v_traceState_1440_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1456_ = v_traceState_1440_;
v_isShared_1457_ = v_isSharedCheck_1478_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_traces_1454_);
lean_dec(v_traceState_1440_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1478_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; double v___x_1460_; uint8_t v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1469_; 
v___x_1458_ = lean_box(0);
v___x_1459_ = lean_box(0);
v___x_1460_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__0);
v___x_1461_ = 0;
v___x_1462_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__1));
v___x_1463_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1463_, 0, v_cls_1426_);
lean_ctor_set(v___x_1463_, 1, v___x_1459_);
lean_ctor_set(v___x_1463_, 2, v___x_1462_);
lean_ctor_set_float(v___x_1463_, sizeof(void*)*3, v___x_1460_);
lean_ctor_set_float(v___x_1463_, sizeof(void*)*3 + 8, v___x_1460_);
lean_ctor_set_uint8(v___x_1463_, sizeof(void*)*3 + 16, v___x_1461_);
v___x_1464_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___closed__2));
v___x_1465_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v_a_1435_);
lean_ctor_set(v___x_1465_, 2, v___x_1464_);
lean_inc(v_ref_1433_);
v___x_1466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1466_, 0, v_ref_1433_);
lean_ctor_set(v___x_1466_, 1, v___x_1465_);
v___x_1467_ = l_Lean_PersistentArray_push___redArg(v_traces_1454_, v___x_1466_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set(v___x_1456_, 0, v___x_1467_);
v___x_1469_ = v___x_1456_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1467_);
lean_ctor_set_uint64(v_reuseFailAlloc_1477_, sizeof(void*)*1, v_tid_1453_);
v___x_1469_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
lean_object* v___x_1471_; 
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 4, v___x_1469_);
v___x_1471_ = v___x_1451_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_env_1441_);
lean_ctor_set(v_reuseFailAlloc_1476_, 1, v_nextMacroScope_1442_);
lean_ctor_set(v_reuseFailAlloc_1476_, 2, v_ngen_1443_);
lean_ctor_set(v_reuseFailAlloc_1476_, 3, v_auxDeclNGen_1444_);
lean_ctor_set(v_reuseFailAlloc_1476_, 4, v___x_1469_);
lean_ctor_set(v_reuseFailAlloc_1476_, 5, v_cache_1445_);
lean_ctor_set(v_reuseFailAlloc_1476_, 6, v_recordedDeps_1446_);
lean_ctor_set(v_reuseFailAlloc_1476_, 7, v_messages_1447_);
lean_ctor_set(v_reuseFailAlloc_1476_, 8, v_infoState_1448_);
lean_ctor_set(v_reuseFailAlloc_1476_, 9, v_snapshotTasks_1449_);
v___x_1471_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
lean_object* v___x_1472_; lean_object* v___x_1474_; 
v___x_1472_ = lean_st_ref_put(v___y_1431_, v___x_1471_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1458_);
v___x_1474_ = v___x_1437_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1458_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg___boxed(lean_object* v_cls_1481_, lean_object* v_msg_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg(v_cls_1481_, v_msg_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
return v_res_1488_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__1(void){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__0));
v___x_1491_ = l_Lean_stringToMessageData(v___x_1490_);
return v___x_1491_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__3(void){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__2));
v___x_1494_ = l_Lean_stringToMessageData(v___x_1493_);
return v___x_1494_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10(void){
_start:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1505_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7));
v___x_1506_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__9));
v___x_1507_ = l_Lean_Name_append(v___x_1506_, v___x_1505_);
return v___x_1507_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__12(void){
_start:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1509_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__11));
v___x_1510_ = l_Lean_stringToMessageData(v___x_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus(lean_object* v_e_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1546_; lean_object* v___y_1547_; uint8_t v___y_1555_; lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v___y_1560_; lean_object* v___y_1561_; lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1661_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___x_1803_; 
lean_inc_ref(v_e_1520_);
v___x_1803_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1520_, v_a_1528_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1832_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1806_ = v___x_1803_;
v_isShared_1807_ = v_isSharedCheck_1832_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1803_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1832_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1808_; uint8_t v___x_1809_; 
v___x_1808_ = l_Lean_Expr_cleanupAnnotations(v_a_1804_);
lean_dec(v_a_1804_);
v___x_1809_ = l_Lean_Expr_isApp(v___x_1808_);
if (v___x_1809_ == 0)
{
lean_dec_ref(v___x_1808_);
lean_del_object(v___x_1806_);
v___y_1661_ = v_a_1521_;
v___y_1662_ = v_a_1522_;
v___y_1663_ = v_a_1523_;
v___y_1664_ = v_a_1524_;
v___y_1665_ = v_a_1525_;
v___y_1666_ = v_a_1526_;
v___y_1667_ = v_a_1527_;
v___y_1668_ = v_a_1528_;
v___y_1669_ = v_a_1529_;
v___y_1670_ = v_a_1530_;
goto v___jp_1660_;
}
else
{
lean_object* v___x_1810_; uint8_t v___x_1811_; 
v___x_1810_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1808_);
v___x_1811_ = l_Lean_Expr_isApp(v___x_1810_);
if (v___x_1811_ == 0)
{
lean_dec_ref(v___x_1810_);
lean_dec_ref(v___x_1808_);
lean_del_object(v___x_1806_);
v___y_1661_ = v_a_1521_;
v___y_1662_ = v_a_1522_;
v___y_1663_ = v_a_1523_;
v___y_1664_ = v_a_1524_;
v___y_1665_ = v_a_1525_;
v___y_1666_ = v_a_1526_;
v___y_1667_ = v_a_1527_;
v___y_1668_ = v_a_1528_;
v___y_1669_ = v_a_1529_;
v___y_1670_ = v_a_1530_;
goto v___jp_1660_;
}
else
{
lean_object* v_arg_1812_; lean_object* v_arg_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; 
v_arg_1812_ = lean_ctor_get(v___x_1808_, 1);
lean_inc_ref(v_arg_1812_);
lean_dec_ref(v___x_1808_);
v_arg_1813_ = lean_ctor_get(v___x_1810_, 1);
lean_inc_ref(v_arg_1813_);
v___x_1814_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1810_);
lean_dec_ref(v___x_1810_);
v___x_1815_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__14));
v___x_1816_ = l_Lean_Expr_isConstOf(v___x_1814_, v___x_1815_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1817_; uint8_t v___x_1818_; 
v___x_1817_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__16));
v___x_1818_ = l_Lean_Expr_isConstOf(v___x_1814_, v___x_1817_);
if (v___x_1818_ == 0)
{
uint8_t v___x_1819_; 
v___x_1819_ = l_Lean_Expr_isApp(v___x_1814_);
if (v___x_1819_ == 0)
{
lean_dec_ref(v___x_1814_);
lean_dec_ref(v_arg_1813_);
lean_dec_ref(v_arg_1812_);
lean_del_object(v___x_1806_);
v___y_1661_ = v_a_1521_;
v___y_1662_ = v_a_1522_;
v___y_1663_ = v_a_1523_;
v___y_1664_ = v_a_1524_;
v___y_1665_ = v_a_1525_;
v___y_1666_ = v_a_1526_;
v___y_1667_ = v_a_1527_;
v___y_1668_ = v_a_1528_;
v___y_1669_ = v_a_1529_;
v___y_1670_ = v_a_1530_;
goto v___jp_1660_;
}
else
{
lean_object* v___x_1820_; lean_object* v___x_1821_; uint8_t v___x_1822_; 
v___x_1820_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1814_);
lean_dec_ref(v___x_1814_);
v___x_1821_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__18));
v___x_1822_ = l_Lean_Expr_isConstOf(v___x_1820_, v___x_1821_);
lean_dec_ref(v___x_1820_);
if (v___x_1822_ == 0)
{
lean_dec_ref(v_arg_1813_);
lean_dec_ref(v_arg_1812_);
lean_del_object(v___x_1806_);
v___y_1661_ = v_a_1521_;
v___y_1662_ = v_a_1522_;
v___y_1663_ = v_a_1523_;
v___y_1664_ = v_a_1524_;
v___y_1665_ = v_a_1525_;
v___y_1666_ = v_a_1526_;
v___y_1667_ = v_a_1527_;
v___y_1668_ = v_a_1528_;
v___y_1669_ = v_a_1529_;
v___y_1670_ = v_a_1530_;
goto v___jp_1660_;
}
else
{
uint8_t v___x_1823_; 
v___x_1823_ = l_Lean_Meta_Grind_isMorallyIff(v_e_1520_);
if (v___x_1823_ == 0)
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1827_; 
lean_dec_ref(v_arg_1813_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_e_1520_);
v___x_1824_ = lean_unsigned_to_nat(2u);
v___x_1825_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
lean_ctor_set_uint8(v___x_1825_, sizeof(void*)*1, v___x_1823_);
lean_ctor_set_uint8(v___x_1825_, sizeof(void*)*1 + 1, v___x_1823_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 0, v___x_1825_);
v___x_1827_ = v___x_1806_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v___x_1825_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
else
{
lean_object* v___x_1829_; 
lean_del_object(v___x_1806_);
v___x_1829_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIffStatus___redArg(v_e_1520_, v_arg_1813_, v_arg_1812_, v_a_1521_, v_a_1525_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_);
return v___x_1829_;
}
}
}
}
else
{
lean_object* v___x_1830_; 
lean_dec_ref(v___x_1814_);
lean_del_object(v___x_1806_);
v___x_1830_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDisjunctStatus___redArg(v_e_1520_, v_arg_1813_, v_arg_1812_, v_a_1521_, v_a_1525_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_);
return v___x_1830_;
}
}
else
{
lean_object* v___x_1831_; 
lean_dec_ref(v___x_1814_);
lean_del_object(v___x_1806_);
v___x_1831_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkConjunctStatus___redArg(v_e_1520_, v_arg_1813_, v_arg_1812_, v_a_1521_, v_a_1525_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_);
return v___x_1831_;
}
}
}
}
}
else
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1840_; 
lean_dec_ref(v_e_1520_);
v_a_1833_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1835_ = v___x_1803_;
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1803_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
v___jp_1532_:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_box(0);
v___x_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
return v___x_1534_;
}
v___jp_1535_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = lean_box(0);
v___x_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1536_);
return v___x_1537_;
}
v___jp_1538_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1539_ = lean_box(0);
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1539_);
return v___x_1540_;
}
v___jp_1541_:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1548_ = lean_unsigned_to_nat(1u);
v___x_1549_ = l_Lean_Expr_getAppNumArgs(v_e_1520_);
v___x_1550_ = lean_nat_sub(v___x_1549_, v___x_1548_);
lean_dec(v___x_1549_);
v___x_1551_ = lean_nat_sub(v___x_1550_, v___x_1548_);
lean_dec(v___x_1550_);
v___x_1552_ = l_Lean_Expr_getRevArg_x21(v_e_1520_, v___x_1551_);
lean_dec_ref(v_e_1520_);
v___x_1553_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___redArg(v___x_1552_, v___y_1542_, v___y_1546_, v___y_1547_, v___y_1543_, v___y_1544_, v___y_1545_);
return v___x_1553_;
}
v___jp_1554_:
{
uint8_t v___x_1566_; 
v___x_1566_ = l_Lean_Expr_isFVar(v_e_1520_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
lean_dec_ref(v_e_1520_);
v___x_1567_ = lean_box(1);
v___x_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
return v___x_1568_;
}
else
{
lean_object* v___x_1569_; 
lean_inc(v___y_1565_);
lean_inc_ref(v___y_1564_);
lean_inc(v___y_1563_);
lean_inc_ref(v___y_1562_);
lean_inc_ref(v_e_1520_);
v___x_1569_ = lean_infer_type(v_e_1520_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v___x_1571_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
lean_inc(v_a_1570_);
lean_dec_ref_known(v___x_1569_, 1);
v___x_1571_ = l_Lean_Meta_whnfD(v_a_1570_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v_a_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc_n(v_a_1572_, 2);
lean_dec_ref_known(v___x_1571_, 1);
v___x_1573_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__1, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__1);
v___x_1574_ = l_Lean_MessageData_ofExpr(v_e_1520_);
v___x_1575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1573_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__3, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__3);
v___x_1577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = l_Lean_indentExpr(v_a_1572_);
v___x_1579_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1577_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
v___x_1580_ = l_Lean_Expr_getAppFn(v_a_1572_);
lean_dec(v_a_1572_);
if (lean_obj_tag(v___x_1580_) == 4)
{
lean_object* v_declName_1581_; lean_object* v___x_1582_; 
v_declName_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_declName_1581_);
lean_dec_ref_known(v___x_1580_, 2);
v___x_1582_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0(v_declName_1581_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1615_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1585_ = v___x_1582_;
v_isShared_1586_ = v_isSharedCheck_1615_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1582_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1615_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
if (lean_obj_tag(v_a_1583_) == 5)
{
lean_object* v_val_1587_; lean_object* v_ctors_1588_; uint8_t v_isRec_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
lean_dec_ref_known(v___x_1579_, 2);
v_val_1587_ = lean_ctor_get(v_a_1583_, 0);
lean_inc_ref(v_val_1587_);
lean_dec_ref_known(v_a_1583_, 1);
v_ctors_1588_ = lean_ctor_get(v_val_1587_, 4);
lean_inc(v_ctors_1588_);
v_isRec_1589_ = lean_ctor_get_uint8(v_val_1587_, sizeof(void*)*6);
lean_dec_ref(v_val_1587_);
v___x_1590_ = l_List_lengthTR___redArg(v_ctors_1588_);
lean_dec(v_ctors_1588_);
v___x_1591_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
lean_ctor_set_uint8(v___x_1591_, sizeof(void*)*1, v_isRec_1589_);
lean_ctor_set_uint8(v___x_1591_, sizeof(void*)*1 + 1, v___y_1555_);
if (v_isShared_1586_ == 0)
{
lean_ctor_set(v___x_1585_, 0, v___x_1591_);
v___x_1593_ = v___x_1585_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
else
{
lean_object* v___x_1595_; 
lean_del_object(v___x_1585_);
lean_dec(v_a_1583_);
v___x_1595_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_1560_);
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v_a_1596_; uint8_t v_verbose_1597_; 
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
lean_inc(v_a_1596_);
lean_dec_ref_known(v___x_1595_, 1);
v_verbose_1597_ = lean_ctor_get_uint8(v_a_1596_, 0);
lean_dec(v_a_1596_);
if (v_verbose_1597_ == 0)
{
lean_dec_ref_known(v___x_1579_, 2);
goto v___jp_1535_;
}
else
{
lean_object* v___x_1598_; 
v___x_1598_ = l_Lean_Meta_Sym_reportIssue(v___x_1579_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_dec_ref_known(v___x_1598_, 1);
goto v___jp_1535_;
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1598_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1598_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec_ref_known(v___x_1579_, 2);
v_a_1607_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1595_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1595_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
lean_dec_ref_known(v___x_1579_, 2);
v_a_1616_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1582_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1582_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
else
{
lean_object* v___x_1624_; 
lean_dec_ref(v___x_1580_);
v___x_1624_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_1560_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; uint8_t v_verbose_1626_; 
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_a_1625_);
lean_dec_ref_known(v___x_1624_, 1);
v_verbose_1626_ = lean_ctor_get_uint8(v_a_1625_, 0);
lean_dec(v_a_1625_);
if (v_verbose_1626_ == 0)
{
lean_dec_ref_known(v___x_1579_, 2);
goto v___jp_1538_;
}
else
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_Meta_Sym_reportIssue(v___x_1579_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_dec_ref_known(v___x_1627_, 1);
goto v___jp_1538_;
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1627_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1627_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec_ref_known(v___x_1579_, 2);
v_a_1636_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1624_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1624_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
lean_dec_ref(v_e_1520_);
v_a_1644_ = lean_ctor_get(v___x_1571_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1571_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1571_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1571_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
else
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
lean_dec_ref(v_e_1520_);
v_a_1652_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v___x_1569_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1569_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1655_ == 0)
{
v___x_1657_ = v___x_1654_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1652_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
}
}
v___jp_1660_:
{
uint8_t v___x_1671_; 
v___x_1671_ = l_Lean_Meta_Grind_isCond(v_e_1520_);
if (v___x_1671_ == 0)
{
uint8_t v___x_1672_; 
v___x_1672_ = l_Lean_Meta_Grind_isIte(v_e_1520_);
if (v___x_1672_ == 0)
{
uint8_t v___x_1673_; 
v___x_1673_ = l_Lean_Meta_Grind_isDIte(v_e_1520_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lean_Meta_Grind_isResolvedCaseSplit___redArg(v_e_1520_, v___y_1661_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; uint8_t v___x_1676_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
lean_inc(v_a_1675_);
lean_dec_ref_known(v___x_1674_, 1);
v___x_1676_ = lean_unbox(v_a_1675_);
lean_dec(v_a_1675_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; 
lean_inc_ref(v_e_1520_);
v___x_1677_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_isCongrToPrevSplit(v_e_1520_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1737_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1680_ = v___x_1677_;
v_isShared_1681_ = v_isSharedCheck_1737_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1677_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1737_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
uint8_t v___x_1682_; 
v___x_1682_ = lean_unbox(v_a_1678_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; lean_object* v_env_1684_; lean_object* v___x_1685_; 
v___x_1683_ = lean_st_ref_get(v___y_1670_);
v_env_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc_ref(v_env_1684_);
lean_dec(v___x_1683_);
v___x_1685_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_1684_, v_e_1520_);
if (lean_obj_tag(v___x_1685_) == 1)
{
lean_object* v_val_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; uint8_t v___x_1690_; lean_object* v___x_1692_; 
lean_dec_ref(v_e_1520_);
v_val_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_val_1686_);
lean_dec_ref_known(v___x_1685_, 1);
v___x_1687_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_1686_);
lean_dec(v_val_1686_);
v___x_1688_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
v___x_1689_ = lean_unbox(v_a_1678_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*1, v___x_1689_);
v___x_1690_ = lean_unbox(v_a_1678_);
lean_dec(v_a_1678_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*1 + 1, v___x_1690_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1688_);
v___x_1692_ = v___x_1680_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v___x_1688_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
else
{
lean_object* v___x_1694_; 
lean_dec(v___x_1685_);
lean_del_object(v___x_1680_);
v___x_1694_ = l_Lean_Expr_getAppFn(v_e_1520_);
if (lean_obj_tag(v___x_1694_) == 4)
{
lean_object* v_declName_1695_; lean_object* v___x_1696_; 
v_declName_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_declName_1695_);
lean_dec_ref_known(v___x_1694_, 2);
v___x_1696_ = l_Lean_Meta_isInductivePredicate_x3f(v_declName_1695_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1697_; 
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_a_1697_);
lean_dec_ref_known(v___x_1696_, 1);
if (lean_obj_tag(v_a_1697_) == 1)
{
lean_object* v_val_1698_; lean_object* v___x_1699_; 
v_val_1698_ = lean_ctor_get(v_a_1697_, 0);
lean_inc(v_val_1698_);
lean_dec_ref_known(v_a_1697_, 1);
lean_inc_ref(v_e_1520_);
v___x_1699_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_1520_, v___y_1661_, v___y_1665_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1714_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1702_ = v___x_1699_;
v_isShared_1703_ = v_isSharedCheck_1714_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1699_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1714_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
uint8_t v___x_1704_; 
v___x_1704_ = lean_unbox(v_a_1700_);
lean_dec(v_a_1700_);
if (v___x_1704_ == 0)
{
uint8_t v___x_1705_; 
lean_del_object(v___x_1702_);
lean_dec(v_val_1698_);
v___x_1705_ = lean_unbox(v_a_1678_);
lean_dec(v_a_1678_);
v___y_1555_ = v___x_1705_;
v___y_1556_ = v___y_1661_;
v___y_1557_ = v___y_1662_;
v___y_1558_ = v___y_1663_;
v___y_1559_ = v___y_1664_;
v___y_1560_ = v___y_1665_;
v___y_1561_ = v___y_1666_;
v___y_1562_ = v___y_1667_;
v___y_1563_ = v___y_1668_;
v___y_1564_ = v___y_1669_;
v___y_1565_ = v___y_1670_;
goto v___jp_1554_;
}
else
{
lean_object* v_ctors_1706_; uint8_t v_isRec_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; uint8_t v___x_1710_; lean_object* v___x_1712_; 
lean_dec_ref(v_e_1520_);
v_ctors_1706_ = lean_ctor_get(v_val_1698_, 4);
lean_inc(v_ctors_1706_);
v_isRec_1707_ = lean_ctor_get_uint8(v_val_1698_, sizeof(void*)*6);
lean_dec(v_val_1698_);
v___x_1708_ = l_List_lengthTR___redArg(v_ctors_1706_);
lean_dec(v_ctors_1706_);
v___x_1709_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
lean_ctor_set_uint8(v___x_1709_, sizeof(void*)*1, v_isRec_1707_);
v___x_1710_ = lean_unbox(v_a_1678_);
lean_dec(v_a_1678_);
lean_ctor_set_uint8(v___x_1709_, sizeof(void*)*1 + 1, v___x_1710_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 0, v___x_1709_);
v___x_1712_ = v___x_1702_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v___x_1709_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
else
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1722_; 
lean_dec(v_val_1698_);
lean_dec(v_a_1678_);
lean_dec_ref(v_e_1520_);
v_a_1715_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1717_ = v___x_1699_;
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1699_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1720_; 
if (v_isShared_1718_ == 0)
{
v___x_1720_ = v___x_1717_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v_a_1715_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
}
else
{
uint8_t v___x_1723_; 
lean_dec(v_a_1697_);
v___x_1723_ = lean_unbox(v_a_1678_);
lean_dec(v_a_1678_);
v___y_1555_ = v___x_1723_;
v___y_1556_ = v___y_1661_;
v___y_1557_ = v___y_1662_;
v___y_1558_ = v___y_1663_;
v___y_1559_ = v___y_1664_;
v___y_1560_ = v___y_1665_;
v___y_1561_ = v___y_1666_;
v___y_1562_ = v___y_1667_;
v___y_1563_ = v___y_1668_;
v___y_1564_ = v___y_1669_;
v___y_1565_ = v___y_1670_;
goto v___jp_1554_;
}
}
else
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1731_; 
lean_dec(v_a_1678_);
lean_dec_ref(v_e_1520_);
v_a_1724_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1726_ = v___x_1696_;
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1696_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1729_; 
if (v_isShared_1727_ == 0)
{
v___x_1729_ = v___x_1726_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1724_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
}
else
{
uint8_t v___x_1732_; 
lean_dec_ref(v___x_1694_);
v___x_1732_ = lean_unbox(v_a_1678_);
lean_dec(v_a_1678_);
v___y_1555_ = v___x_1732_;
v___y_1556_ = v___y_1661_;
v___y_1557_ = v___y_1662_;
v___y_1558_ = v___y_1663_;
v___y_1559_ = v___y_1664_;
v___y_1560_ = v___y_1665_;
v___y_1561_ = v___y_1666_;
v___y_1562_ = v___y_1667_;
v___y_1563_ = v___y_1668_;
v___y_1564_ = v___y_1669_;
v___y_1565_ = v___y_1670_;
goto v___jp_1554_;
}
}
}
else
{
lean_object* v___x_1733_; lean_object* v___x_1735_; 
lean_dec(v_a_1678_);
lean_dec_ref(v_e_1520_);
v___x_1733_ = lean_box(0);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1733_);
v___x_1735_ = v___x_1680_;
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
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
lean_dec_ref(v_e_1520_);
v_a_1738_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1677_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1677_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_toCold_1746_; lean_object* v_options_1747_; uint8_t v_hasTrace_1748_; 
v_toCold_1746_ = lean_ctor_get(v___y_1669_, 0);
v_options_1747_ = lean_ctor_get(v_toCold_1746_, 2);
v_hasTrace_1748_ = lean_ctor_get_uint8(v_options_1747_, sizeof(void*)*1);
if (v_hasTrace_1748_ == 0)
{
lean_dec_ref(v_e_1520_);
goto v___jp_1532_;
}
else
{
lean_object* v_inheritedTraceOptions_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v_inheritedTraceOptions_1749_ = lean_ctor_get(v_toCold_1746_, 11);
v___x_1750_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7));
v___x_1751_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10);
v___x_1752_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1749_, v_options_1747_, v___x_1751_);
if (v___x_1752_ == 0)
{
lean_dec_ref(v_e_1520_);
goto v___jp_1532_;
}
else
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lean_Meta_Grind_updateLastTag(v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec_ref_known(v___x_1753_, 1);
v___x_1754_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__12, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__12);
v___x_1755_ = l_Lean_MessageData_ofExpr(v_e_1520_);
v___x_1756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1754_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
v___x_1757_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg(v___x_1750_, v___x_1756_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_dec_ref_known(v___x_1757_, 1);
goto v___jp_1532_;
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1757_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1757_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
else
{
lean_object* v_a_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1773_; 
lean_dec_ref(v_e_1520_);
v_a_1766_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1768_ = v___x_1753_;
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_a_1766_);
lean_dec(v___x_1753_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1771_; 
if (v_isShared_1769_ == 0)
{
v___x_1771_ = v___x_1768_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_a_1766_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1781_; 
lean_dec_ref(v_e_1520_);
v_a_1774_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1776_ = v___x_1674_;
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v___x_1674_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1774_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
}
else
{
v___y_1542_ = v___y_1661_;
v___y_1543_ = v___y_1668_;
v___y_1544_ = v___y_1669_;
v___y_1545_ = v___y_1670_;
v___y_1546_ = v___y_1665_;
v___y_1547_ = v___y_1667_;
goto v___jp_1541_;
}
}
else
{
v___y_1542_ = v___y_1661_;
v___y_1543_ = v___y_1668_;
v___y_1544_ = v___y_1669_;
v___y_1545_ = v___y_1670_;
v___y_1546_ = v___y_1665_;
v___y_1547_ = v___y_1667_;
goto v___jp_1541_;
}
}
else
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Lean_Meta_Grind_condCondition(v_e_1520_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; lean_object* v___x_1784_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
lean_inc(v_a_1783_);
lean_dec_ref_known(v___x_1782_, 1);
v___x_1784_ = l_Lean_Meta_Sym_shareCommon(v_a_1783_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; lean_object* v___x_1786_; 
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_a_1785_);
lean_dec_ref_known(v___x_1784_, 1);
v___x_1786_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkIteCondStatus___redArg(v_a_1785_, v___y_1661_, v___y_1665_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
return v___x_1786_;
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
v_a_1787_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1784_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1784_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
v_a_1795_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1782_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1782_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___boxed(lean_object* v_e_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus(v_e_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_);
lean_dec(v_a_1851_);
lean_dec_ref(v_a_1850_);
lean_dec(v_a_1849_);
lean_dec_ref(v_a_1848_);
lean_dec(v_a_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
lean_dec(v_a_1843_);
lean_dec(v_a_1842_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1(lean_object* v_cls_1854_, lean_object* v_msg_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg(v_cls_1854_, v_msg_1855_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___boxed(lean_object* v_cls_1868_, lean_object* v_msg_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1(v_cls_1868_, v_msg_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec(v___y_1870_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0(lean_object* v_00_u03b1_1882_, lean_object* v_constName_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___redArg(v_constName_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1896_, lean_object* v_constName_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0(v_00_u03b1_1896_, v_constName_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
lean_dec(v___y_1898_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1910_, lean_object* v_ref_1911_, lean_object* v_constName_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___redArg(v_ref_1911_, v_constName_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1925_, lean_object* v_ref_1926_, lean_object* v_constName_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1(v_00_u03b1_1925_, v_ref_1926_, v_constName_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec(v_ref_1926_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_1940_, lean_object* v_ref_1941_, lean_object* v_msg_1942_, lean_object* v_declHint_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v___x_1955_; 
v___x_1955_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1941_, v_msg_1942_, v_declHint_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1956_, lean_object* v_ref_1957_, lean_object* v_msg_1958_, lean_object* v_declHint_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_1956_, v_ref_1957_, v_msg_1958_, v_declHint_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec(v___y_1960_);
lean_dec(v_ref_1957_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_msg_1972_, lean_object* v_declHint_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_){
_start:
{
lean_object* v___x_1985_; 
v___x_1985_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1972_, v_declHint_1973_, v___y_1983_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_1986_, lean_object* v_declHint_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
lean_object* v_res_1999_; 
v_res_1999_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(v_msg_1986_, v_declHint_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
lean_dec(v___y_1995_);
lean_dec_ref(v___y_1994_);
lean_dec(v___y_1993_);
lean_dec_ref(v___y_1992_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec(v___y_1989_);
lean_dec(v___y_1988_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_2000_, lean_object* v_ref_2001_, lean_object* v_msg_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v___x_2014_; 
v___x_2014_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2001_, v_msg_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_);
return v___x_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_2015_, lean_object* v_ref_2016_, lean_object* v_msg_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_){
_start:
{
lean_object* v_res_2029_; 
v_res_2029_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_2015_, v_ref_2016_, v_msg_2017_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v___y_2023_);
lean_dec_ref(v___y_2022_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
lean_dec(v___y_2019_);
lean_dec(v___y_2018_);
lean_dec(v_ref_2016_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object* v_00_u03b1_2030_, lean_object* v_msg_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_msg_2031_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b1_2044_, lean_object* v_msg_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v_res_2057_; 
v_res_2057_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(v_00_u03b1_2044_, v_msg_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
lean_dec(v___y_2053_);
lean_dec_ref(v___y_2052_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v___y_2047_);
lean_dec(v___y_2046_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___redArg(lean_object* v_a_2058_, lean_object* v_x_2059_){
_start:
{
if (lean_obj_tag(v_x_2059_) == 0)
{
lean_object* v___x_2060_; 
v___x_2060_ = lean_box(0);
return v___x_2060_;
}
else
{
lean_object* v_key_2061_; lean_object* v_value_2062_; lean_object* v_tail_2063_; lean_object* v_fst_2064_; lean_object* v_snd_2065_; lean_object* v_fst_2066_; lean_object* v_snd_2067_; uint8_t v___x_2068_; 
v_key_2061_ = lean_ctor_get(v_x_2059_, 0);
v_value_2062_ = lean_ctor_get(v_x_2059_, 1);
v_tail_2063_ = lean_ctor_get(v_x_2059_, 2);
v_fst_2064_ = lean_ctor_get(v_key_2061_, 0);
v_snd_2065_ = lean_ctor_get(v_key_2061_, 1);
v_fst_2066_ = lean_ctor_get(v_a_2058_, 0);
v_snd_2067_ = lean_ctor_get(v_a_2058_, 1);
v___x_2068_ = lean_expr_eqv(v_fst_2064_, v_fst_2066_);
if (v___x_2068_ == 0)
{
v_x_2059_ = v_tail_2063_;
goto _start;
}
else
{
uint8_t v___x_2070_; 
v___x_2070_ = lean_expr_eqv(v_snd_2065_, v_snd_2067_);
if (v___x_2070_ == 0)
{
v_x_2059_ = v_tail_2063_;
goto _start;
}
else
{
lean_object* v___x_2072_; 
lean_inc(v_value_2062_);
v___x_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2072_, 0, v_value_2062_);
return v___x_2072_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___redArg___boxed(lean_object* v_a_2073_, lean_object* v_x_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___redArg(v_a_2073_, v_x_2074_);
lean_dec(v_x_2074_);
lean_dec_ref(v_a_2073_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___redArg(lean_object* v_m_2076_, lean_object* v_a_2077_){
_start:
{
lean_object* v_buckets_2078_; lean_object* v_fst_2079_; lean_object* v_snd_2080_; lean_object* v___x_2081_; uint64_t v___x_2082_; uint64_t v___x_2083_; uint64_t v___x_2084_; uint64_t v___x_2085_; uint64_t v___x_2086_; uint64_t v_fold_2087_; uint64_t v___x_2088_; uint64_t v___x_2089_; uint64_t v___x_2090_; size_t v___x_2091_; size_t v___x_2092_; size_t v___x_2093_; size_t v___x_2094_; size_t v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_buckets_2078_ = lean_ctor_get(v_m_2076_, 1);
v_fst_2079_ = lean_ctor_get(v_a_2077_, 0);
v_snd_2080_ = lean_ctor_get(v_a_2077_, 1);
v___x_2081_ = lean_array_get_size(v_buckets_2078_);
v___x_2082_ = l_Lean_Expr_hash(v_fst_2079_);
v___x_2083_ = l_Lean_Expr_hash(v_snd_2080_);
v___x_2084_ = lean_uint64_mix_hash(v___x_2082_, v___x_2083_);
v___x_2085_ = 32ULL;
v___x_2086_ = lean_uint64_shift_right(v___x_2084_, v___x_2085_);
v_fold_2087_ = lean_uint64_xor(v___x_2084_, v___x_2086_);
v___x_2088_ = 16ULL;
v___x_2089_ = lean_uint64_shift_right(v_fold_2087_, v___x_2088_);
v___x_2090_ = lean_uint64_xor(v_fold_2087_, v___x_2089_);
v___x_2091_ = lean_uint64_to_usize(v___x_2090_);
v___x_2092_ = lean_usize_of_nat(v___x_2081_);
v___x_2093_ = ((size_t)1ULL);
v___x_2094_ = lean_usize_sub(v___x_2092_, v___x_2093_);
v___x_2095_ = lean_usize_land(v___x_2091_, v___x_2094_);
v___x_2096_ = lean_array_uget_borrowed(v_buckets_2078_, v___x_2095_);
v___x_2097_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___redArg(v_a_2077_, v___x_2096_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___redArg___boxed(lean_object* v_m_2098_, lean_object* v_a_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___redArg(v_m_2098_, v_a_2099_);
lean_dec_ref(v_a_2099_);
lean_dec_ref(v_m_2098_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__1(uint8_t v_a_2101_, uint8_t v___x_2102_, lean_object* v_fst_2103_, lean_object* v_snd_2104_, lean_object* v___x_2105_, lean_object* v_____r_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2118_ = lean_unsigned_to_nat(2u);
v___x_2119_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
lean_ctor_set_uint8(v___x_2119_, sizeof(void*)*1, v_a_2101_);
lean_ctor_set_uint8(v___x_2119_, sizeof(void*)*1 + 1, v___x_2102_);
v___x_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v_fst_2103_);
lean_ctor_set(v___x_2121_, 1, v_snd_2104_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2105_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2120_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
v___x_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2124_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__1___boxed(lean_object** _args){
lean_object* v_a_2126_ = _args[0];
lean_object* v___x_2127_ = _args[1];
lean_object* v_fst_2128_ = _args[2];
lean_object* v_snd_2129_ = _args[3];
lean_object* v___x_2130_ = _args[4];
lean_object* v_____r_2131_ = _args[5];
lean_object* v___y_2132_ = _args[6];
lean_object* v___y_2133_ = _args[7];
lean_object* v___y_2134_ = _args[8];
lean_object* v___y_2135_ = _args[9];
lean_object* v___y_2136_ = _args[10];
lean_object* v___y_2137_ = _args[11];
lean_object* v___y_2138_ = _args[12];
lean_object* v___y_2139_ = _args[13];
lean_object* v___y_2140_ = _args[14];
lean_object* v___y_2141_ = _args[15];
lean_object* v___y_2142_ = _args[16];
_start:
{
uint8_t v_a_39044__boxed_2143_; uint8_t v___x_39045__boxed_2144_; lean_object* v_res_2145_; 
v_a_39044__boxed_2143_ = lean_unbox(v_a_2126_);
v___x_39045__boxed_2144_ = lean_unbox(v___x_2127_);
v_res_2145_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__1(v_a_39044__boxed_2143_, v___x_39045__boxed_2144_, v_fst_2128_, v_snd_2129_, v___x_2130_, v_____r_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec(v___y_2132_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__0(lean_object* v_fst_2146_, lean_object* v_snd_2147_, lean_object* v___x_2148_, lean_object* v___x_2149_, lean_object* v_____r_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2162_ = l_Lean_Expr_appFn_x21(v_fst_2146_);
v___x_2163_ = l_Lean_Expr_appFn_x21(v_snd_2147_);
v___x_2164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2162_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
v___x_2165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2148_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2149_);
lean_ctor_set(v___x_2166_, 1, v___x_2165_);
v___x_2167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
return v___x_2168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__0___boxed(lean_object* v_fst_2169_, lean_object* v_snd_2170_, lean_object* v___x_2171_, lean_object* v___x_2172_, lean_object* v_____r_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__0(v_fst_2169_, v_snd_2170_, v___x_2171_, v___x_2172_, v_____r_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec(v___y_2181_);
lean_dec_ref(v___y_2180_);
lean_dec(v___y_2179_);
lean_dec_ref(v___y_2178_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec(v___y_2174_);
lean_dec(v_snd_2170_);
lean_dec(v_fst_2169_);
return v_res_2185_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2186_; lean_object* v___f_2187_; 
v___x_2186_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_2187_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2187_, 0, v___x_2186_);
return v___f_2187_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2191_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__1));
v___x_2192_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__9));
v___x_2193_ = l_Lean_Name_append(v___x_2192_, v___x_2191_);
return v___x_2193_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2195_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__3));
v___x_2196_ = l_Lean_stringToMessageData(v___x_2195_);
return v___x_2196_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2198_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__5));
v___x_2199_ = l_Lean_stringToMessageData(v___x_2198_);
return v___x_2199_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__7));
v___x_2202_ = l_Lean_stringToMessageData(v___x_2201_);
return v___x_2202_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__10(void){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__9));
v___x_2205_ = l_Lean_stringToMessageData(v___x_2204_);
return v___x_2205_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__12(void){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2207_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__11));
v___x_2208_ = l_Lean_stringToMessageData(v___x_2207_);
return v___x_2208_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__14(void){
_start:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2210_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__13));
v___x_2211_ = l_Lean_stringToMessageData(v___x_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg(lean_object* v___y_2212_, lean_object* v_eq_2213_, lean_object* v_a_2214_, lean_object* v_b_2215_, lean_object* v_a_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_){
_start:
{
lean_object* v___y_2229_; lean_object* v_snd_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2371_; 
v_snd_2249_ = lean_ctor_get(v_a_2216_, 1);
v_isSharedCheck_2371_ = !lean_is_exclusive(v_a_2216_);
if (v_isSharedCheck_2371_ == 0)
{
lean_object* v_unused_2372_; 
v_unused_2372_ = lean_ctor_get(v_a_2216_, 0);
lean_dec(v_unused_2372_);
v___x_2251_ = v_a_2216_;
v_isShared_2252_ = v_isSharedCheck_2371_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_snd_2249_);
lean_dec(v_a_2216_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2371_;
goto v_resetjp_2250_;
}
v___jp_2228_:
{
if (lean_obj_tag(v___y_2229_) == 0)
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2240_; 
v_a_2230_ = lean_ctor_get(v___y_2229_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___y_2229_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2232_ = v___y_2229_;
v_isShared_2233_ = v_isSharedCheck_2240_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___y_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2240_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
if (lean_obj_tag(v_a_2230_) == 0)
{
lean_object* v_a_2234_; lean_object* v___x_2236_; 
lean_dec_ref(v_b_2215_);
lean_dec_ref(v_a_2214_);
lean_dec_ref(v_eq_2213_);
lean_dec(v___y_2212_);
v_a_2234_ = lean_ctor_get(v_a_2230_, 0);
lean_inc(v_a_2234_);
lean_dec_ref_known(v_a_2230_, 1);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v_a_2234_);
v___x_2236_ = v___x_2232_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
else
{
lean_object* v_a_2238_; 
lean_del_object(v___x_2232_);
v_a_2238_ = lean_ctor_get(v_a_2230_, 0);
lean_inc(v_a_2238_);
lean_dec_ref_known(v_a_2230_, 1);
v_a_2216_ = v_a_2238_;
goto _start;
}
}
}
else
{
lean_object* v_a_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2248_; 
lean_dec_ref(v_b_2215_);
lean_dec_ref(v_a_2214_);
lean_dec_ref(v_eq_2213_);
lean_dec(v___y_2212_);
v_a_2241_ = lean_ctor_get(v___y_2229_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___y_2229_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2243_ = v___y_2229_;
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_a_2241_);
lean_dec(v___y_2229_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2246_; 
if (v_isShared_2244_ == 0)
{
v___x_2246_ = v___x_2243_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2247_; 
v_reuseFailAlloc_2247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2247_, 0, v_a_2241_);
v___x_2246_ = v_reuseFailAlloc_2247_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
return v___x_2246_;
}
}
}
}
v_resetjp_2250_:
{
lean_object* v_snd_2253_; lean_object* v_fst_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2370_; 
v_snd_2253_ = lean_ctor_get(v_snd_2249_, 1);
v_fst_2254_ = lean_ctor_get(v_snd_2249_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_snd_2249_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2256_ = v_snd_2249_;
v_isShared_2257_ = v_isSharedCheck_2370_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_snd_2253_);
lean_inc(v_fst_2254_);
lean_dec(v_snd_2249_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2370_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v_fst_2258_; lean_object* v_snd_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2369_; 
v_fst_2258_ = lean_ctor_get(v_snd_2253_, 0);
v_snd_2259_ = lean_ctor_get(v_snd_2253_, 1);
v_isSharedCheck_2369_ = !lean_is_exclusive(v_snd_2253_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2261_ = v_snd_2253_;
v_isShared_2262_ = v_isSharedCheck_2369_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_snd_2259_);
lean_inc(v_fst_2258_);
lean_dec(v_snd_2253_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2369_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
uint8_t v___y_2264_; uint8_t v___x_2278_; 
v___x_2278_ = l_Lean_Expr_isApp(v_fst_2258_);
if (v___x_2278_ == 0)
{
lean_dec_ref(v_b_2215_);
lean_dec_ref(v_a_2214_);
lean_dec_ref(v_eq_2213_);
lean_dec(v___y_2212_);
v___y_2264_ = v___x_2278_;
goto v___jp_2263_;
}
else
{
uint8_t v___x_2279_; 
v___x_2279_ = l_Lean_Expr_isApp(v_snd_2259_);
if (v___x_2279_ == 0)
{
lean_dec_ref(v_b_2215_);
lean_dec_ref(v_a_2214_);
lean_dec_ref(v_eq_2213_);
lean_dec(v___y_2212_);
v___y_2264_ = v___x_2279_;
goto v___jp_2263_;
}
else
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___f_2283_; uint8_t v___x_2284_; 
lean_del_object(v___x_2261_);
lean_del_object(v___x_2256_);
lean_del_object(v___x_2251_);
v___x_2280_ = lean_box(0);
v___x_2281_ = lean_unsigned_to_nat(1u);
v___x_2282_ = lean_nat_sub(v_fst_2254_, v___x_2281_);
lean_dec(v_fst_2254_);
v___f_2283_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__0);
lean_inc(v___y_2212_);
lean_inc(v___x_2282_);
v___x_2284_ = l_List_elem___redArg(v___f_2283_, v___x_2282_, v___y_2212_);
if (v___x_2284_ == 0)
{
lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2285_ = l_Lean_Expr_appArg_x21(v_fst_2258_);
v___x_2286_ = l_Lean_Expr_appArg_x21(v_snd_2259_);
v___x_2287_ = l_Lean_Meta_Grind_isEqv___redArg(v___x_2285_, v___x_2286_, v___y_2217_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; uint8_t v___x_2289_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v___x_2287_, 1);
v___x_2289_ = lean_unbox(v_a_2288_);
if (v___x_2289_ == 0)
{
lean_object* v_toCold_2290_; lean_object* v_options_2291_; lean_object* v_inheritedTraceOptions_2292_; uint8_t v_hasTrace_2293_; 
v_toCold_2290_ = lean_ctor_get(v___y_2225_, 0);
v_options_2291_ = lean_ctor_get(v_toCold_2290_, 2);
v_inheritedTraceOptions_2292_ = lean_ctor_get(v_toCold_2290_, 11);
v_hasTrace_2293_ = lean_ctor_get_uint8(v_options_2291_, sizeof(void*)*1);
if (v_hasTrace_2293_ == 0)
{
lean_dec_ref(v___x_2286_);
lean_dec_ref(v___x_2285_);
goto v___jp_2294_;
}
else
{
lean_object* v___x_2298_; lean_object* v___x_2299_; uint8_t v___x_2300_; 
v___x_2298_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__1));
v___x_2299_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2);
v___x_2300_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2292_, v_options_2291_, v___x_2299_);
if (v___x_2300_ == 0)
{
lean_dec_ref(v___x_2286_);
lean_dec_ref(v___x_2285_);
goto v___jp_2294_;
}
else
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Lean_Meta_Grind_updateLastTag(v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v___x_2302_; 
lean_dec_ref_known(v___x_2301_, 1);
v___x_2302_ = l_Lean_Meta_Grind_getGeneration___redArg(v_eq_2213_, v___y_2217_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v_a_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
lean_inc(v_a_2303_);
lean_dec_ref_known(v___x_2302_, 1);
v___x_2304_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__4);
lean_inc_ref(v_a_2214_);
v___x_2305_ = l_Lean_MessageData_ofExpr(v_a_2214_);
v___x_2306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2304_);
lean_ctor_set(v___x_2306_, 1, v___x_2305_);
v___x_2307_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__6);
v___x_2308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2306_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
lean_inc_ref(v_b_2215_);
v___x_2309_ = l_Lean_MessageData_ofExpr(v_b_2215_);
v___x_2310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2308_);
lean_ctor_set(v___x_2310_, 1, v___x_2309_);
v___x_2311_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__8, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__8_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__8);
v___x_2312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2310_);
lean_ctor_set(v___x_2312_, 1, v___x_2311_);
lean_inc_ref(v_eq_2213_);
v___x_2313_ = l_Lean_MessageData_ofExpr(v_eq_2213_);
v___x_2314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2312_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__10, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__10_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__10);
v___x_2316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2314_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = l_Lean_MessageData_ofExpr(v___x_2285_);
v___x_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__12, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__12_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__12);
v___x_2320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2318_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = l_Lean_MessageData_ofExpr(v___x_2286_);
v___x_2322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2320_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
v___x_2323_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__14, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__14_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__14);
v___x_2324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2322_);
lean_ctor_set(v___x_2324_, 1, v___x_2323_);
v___x_2325_ = l_Nat_reprFast(v_a_2303_);
v___x_2326_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2325_);
v___x_2327_ = l_Lean_MessageData_ofFormat(v___x_2326_);
v___x_2328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2324_);
lean_ctor_set(v___x_2328_, 1, v___x_2327_);
v___x_2329_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg(v___x_2298_, v___x_2328_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
if (lean_obj_tag(v___x_2329_) == 0)
{
lean_object* v_a_2330_; uint8_t v___x_2331_; lean_object* v___x_2332_; 
v_a_2330_ = lean_ctor_get(v___x_2329_, 0);
lean_inc(v_a_2330_);
lean_dec_ref_known(v___x_2329_, 1);
v___x_2331_ = lean_unbox(v_a_2288_);
lean_dec(v_a_2288_);
v___x_2332_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__1(v___x_2331_, v___x_2279_, v_fst_2258_, v_snd_2259_, v___x_2282_, v_a_2330_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
v___y_2229_ = v___x_2332_;
goto v___jp_2228_;
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2340_; 
lean_dec(v_a_2288_);
lean_dec(v___x_2282_);
lean_dec(v_snd_2259_);
lean_dec(v_fst_2258_);
lean_dec_ref(v_b_2215_);
lean_dec_ref(v_a_2214_);
lean_dec_ref(v_eq_2213_);
lean_dec(v___y_2212_);
v_a_2333_ = lean_ctor_get(v___x_2329_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2329_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2335_ = v___x_2329_;
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_dec(v___x_2329_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2338_; 
if (v_isShared_2336_ == 0)
{
v___x_2338_ = v___x_2335_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_a_2333_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
}
}
}
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2348_; 
lean_dec(v_a_2288_);
lean_dec_ref(v___x_2286_);
lean_dec_ref(v___x_2285_);
lean_dec(v___x_2282_);
lean_dec(v_snd_2259_);
lean_dec(v_fst_2258_);
lean_dec_ref(v_b_2215_);
lean_dec_ref(v_a_2214_);
lean_dec_ref(v_eq_2213_);
lean_dec(v___y_2212_);
v_a_2341_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2343_ = v___x_2302_;
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2302_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2341_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_dec(v_a_2288_);
lean_dec_ref(v___x_2286_);
lean_dec_ref(v___x_2285_);
lean_dec(v___x_2282_);
lean_dec(v_snd_2259_);
lean_dec(v_fst_2258_);
lean_dec_ref(v_b_2215_);
lean_dec_ref(v_a_2214_);
lean_dec_ref(v_eq_2213_);
lean_dec(v___y_2212_);
v_a_2349_ = lean_ctor_get(v___x_2301_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2301_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2301_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
}
v___jp_2294_:
{
lean_object* v___x_2295_; uint8_t v___x_2296_; lean_object* v___x_2297_; 
v___x_2295_ = lean_box(0);
v___x_2296_ = lean_unbox(v_a_2288_);
lean_dec(v_a_2288_);
v___x_2297_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__1(v___x_2296_, v___x_2279_, v_fst_2258_, v_snd_2259_, v___x_2282_, v___x_2295_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
v___y_2229_ = v___x_2297_;
goto v___jp_2228_;
}
}
else
{
lean_object* v___x_2357_; lean_object* v___x_2358_; 
lean_dec(v_a_2288_);
lean_dec_ref(v___x_2286_);
lean_dec_ref(v___x_2285_);
v___x_2357_ = lean_box(0);
v___x_2358_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__0(v_fst_2258_, v_snd_2259_, v___x_2282_, v___x_2280_, v___x_2357_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v_snd_2259_);
lean_dec(v_fst_2258_);
v___y_2229_ = v___x_2358_;
goto v___jp_2228_;
}
}
else
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2366_; 
lean_dec_ref(v___x_2286_);
lean_dec_ref(v___x_2285_);
lean_dec(v___x_2282_);
lean_dec(v_snd_2259_);
lean_dec(v_fst_2258_);
lean_dec_ref(v_b_2215_);
lean_dec_ref(v_a_2214_);
lean_dec_ref(v_eq_2213_);
lean_dec(v___y_2212_);
v_a_2359_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2361_ = v___x_2287_;
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___x_2287_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2362_ == 0)
{
v___x_2364_ = v___x_2361_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_a_2359_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
else
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2367_ = lean_box(0);
v___x_2368_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___lam__0(v_fst_2258_, v_snd_2259_, v___x_2282_, v___x_2280_, v___x_2367_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v_snd_2259_);
lean_dec(v_fst_2258_);
v___y_2229_ = v___x_2368_;
goto v___jp_2228_;
}
}
}
v___jp_2263_:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2269_; 
v___x_2265_ = lean_unsigned_to_nat(2u);
v___x_2266_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
lean_ctor_set_uint8(v___x_2266_, sizeof(void*)*1, v___y_2264_);
lean_ctor_set_uint8(v___x_2266_, sizeof(void*)*1 + 1, v___y_2264_);
v___x_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
if (v_isShared_2262_ == 0)
{
v___x_2269_ = v___x_2261_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_fst_2258_);
lean_ctor_set(v_reuseFailAlloc_2277_, 1, v_snd_2259_);
v___x_2269_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2271_; 
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 1, v___x_2269_);
v___x_2271_ = v___x_2256_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_fst_2254_);
lean_ctor_set(v_reuseFailAlloc_2276_, 1, v___x_2269_);
v___x_2271_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v___x_2273_; 
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v___x_2271_);
lean_ctor_set(v___x_2251_, 0, v___x_2267_);
v___x_2273_ = v___x_2251_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2267_);
lean_ctor_set(v_reuseFailAlloc_2275_, 1, v___x_2271_);
v___x_2273_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
lean_object* v___x_2274_; 
v___x_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2273_);
return v___x_2274_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___boxed(lean_object* v___y_2373_, lean_object* v_eq_2374_, lean_object* v_a_2375_, lean_object* v_b_2376_, lean_object* v_a_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg(v___y_2373_, v_eq_2374_, v_a_2375_, v_b_2376_, v_a_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
lean_dec(v___y_2387_);
lean_dec_ref(v___y_2386_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec(v___y_2378_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkSplitInfoArgStatus(lean_object* v_a_2390_, lean_object* v_b_2391_, lean_object* v_eq_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v___x_2407_; 
lean_inc_ref(v_eq_2392_);
v___x_2407_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_eq_2392_, v_a_2393_, v_a_2397_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; uint8_t v___x_2409_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v___x_2409_ = lean_unbox(v_a_2408_);
lean_dec(v_a_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; 
lean_inc_ref(v_eq_2392_);
v___x_2410_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_eq_2392_, v_a_2393_, v_a_2397_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; uint8_t v___x_2412_; 
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v___x_2410_, 1);
v___x_2412_ = lean_unbox(v_a_2411_);
if (v___x_2412_ == 0)
{
lean_object* v___x_2413_; lean_object* v___y_2415_; lean_object* v_toGoalState_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2459_; 
v___x_2413_ = lean_st_ref_get(v_a_2393_);
v_toGoalState_2447_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2459_ == 0)
{
lean_object* v_unused_2460_; 
v_unused_2460_ = lean_ctor_get(v___x_2413_, 1);
lean_dec(v_unused_2460_);
v___x_2449_ = v___x_2413_;
v_isShared_2450_ = v_isSharedCheck_2459_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_toGoalState_2447_);
lean_dec(v___x_2413_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2459_;
goto v_resetjp_2448_;
}
v___jp_2414_:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2416_ = l_Lean_Expr_getAppNumArgs(v_a_2390_);
v___x_2417_ = lean_box(0);
lean_inc_ref(v_b_2391_);
lean_inc_ref(v_a_2390_);
v___x_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2418_, 0, v_a_2390_);
lean_ctor_set(v___x_2418_, 1, v_b_2391_);
v___x_2419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2416_);
lean_ctor_set(v___x_2419_, 1, v___x_2418_);
v___x_2420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2417_);
lean_ctor_set(v___x_2420_, 1, v___x_2419_);
v___x_2421_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg(v___y_2415_, v_eq_2392_, v_a_2390_, v_b_2391_, v___x_2420_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2438_; 
v_a_2422_ = lean_ctor_get(v___x_2421_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2424_ = v___x_2421_;
v_isShared_2425_ = v_isSharedCheck_2438_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2421_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2438_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v_fst_2426_; 
v_fst_2426_ = lean_ctor_get(v_a_2422_, 0);
lean_inc(v_fst_2426_);
lean_dec(v_a_2422_);
if (lean_obj_tag(v_fst_2426_) == 0)
{
lean_object* v___x_2427_; lean_object* v___x_2428_; uint8_t v___x_2429_; uint8_t v___x_2430_; lean_object* v___x_2432_; 
v___x_2427_ = lean_unsigned_to_nat(2u);
v___x_2428_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_2428_, 0, v___x_2427_);
v___x_2429_ = lean_unbox(v_a_2411_);
lean_ctor_set_uint8(v___x_2428_, sizeof(void*)*1, v___x_2429_);
v___x_2430_ = lean_unbox(v_a_2411_);
lean_dec(v_a_2411_);
lean_ctor_set_uint8(v___x_2428_, sizeof(void*)*1 + 1, v___x_2430_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set(v___x_2424_, 0, v___x_2428_);
v___x_2432_ = v___x_2424_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v___x_2428_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
else
{
lean_object* v_val_2434_; lean_object* v___x_2436_; 
lean_dec(v_a_2411_);
v_val_2434_ = lean_ctor_get(v_fst_2426_, 0);
lean_inc(v_val_2434_);
lean_dec_ref_known(v_fst_2426_, 1);
if (v_isShared_2425_ == 0)
{
lean_ctor_set(v___x_2424_, 0, v_val_2434_);
v___x_2436_ = v___x_2424_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_val_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_dec(v_a_2411_);
v_a_2439_ = lean_ctor_get(v___x_2421_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2421_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2421_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
}
v_resetjp_2448_:
{
lean_object* v_split_2451_; lean_object* v_argPosMap_2452_; lean_object* v___x_2454_; 
v_split_2451_ = lean_ctor_get(v_toGoalState_2447_, 16);
lean_inc_ref(v_split_2451_);
lean_dec_ref(v_toGoalState_2447_);
v_argPosMap_2452_ = lean_ctor_get(v_split_2451_, 5);
lean_inc_ref(v_argPosMap_2452_);
lean_dec_ref(v_split_2451_);
lean_inc_ref(v_b_2391_);
lean_inc_ref(v_a_2390_);
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 1, v_b_2391_);
lean_ctor_set(v___x_2449_, 0, v_a_2390_);
v___x_2454_ = v___x_2449_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2390_);
lean_ctor_set(v_reuseFailAlloc_2458_, 1, v_b_2391_);
v___x_2454_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
lean_object* v___x_2455_; 
v___x_2455_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___redArg(v_argPosMap_2452_, v___x_2454_);
lean_dec_ref(v___x_2454_);
lean_dec_ref(v_argPosMap_2452_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v___x_2456_; 
v___x_2456_ = lean_box(0);
v___y_2415_ = v___x_2456_;
goto v___jp_2414_;
}
else
{
lean_object* v_val_2457_; 
v_val_2457_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_val_2457_);
lean_dec_ref_known(v___x_2455_, 1);
v___y_2415_ = v_val_2457_;
goto v___jp_2414_;
}
}
}
}
else
{
lean_dec(v_a_2411_);
lean_dec_ref(v_eq_2392_);
lean_dec_ref(v_b_2391_);
lean_dec_ref(v_a_2390_);
goto v___jp_2404_;
}
}
else
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2468_; 
lean_dec_ref(v_eq_2392_);
lean_dec_ref(v_b_2391_);
lean_dec_ref(v_a_2390_);
v_a_2461_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2463_ = v___x_2410_;
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2410_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2466_; 
if (v_isShared_2464_ == 0)
{
v___x_2466_ = v___x_2463_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_a_2461_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
}
else
{
lean_dec_ref(v_eq_2392_);
lean_dec_ref(v_b_2391_);
lean_dec_ref(v_a_2390_);
goto v___jp_2404_;
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
lean_dec_ref(v_eq_2392_);
lean_dec_ref(v_b_2391_);
lean_dec_ref(v_a_2390_);
v_a_2469_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2407_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2407_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
v___jp_2404_:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2405_ = lean_box(0);
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2405_);
return v___x_2406_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkSplitInfoArgStatus___boxed(lean_object* v_a_2477_, lean_object* v_b_2478_, lean_object* v_eq_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Lean_Meta_Grind_checkSplitInfoArgStatus(v_a_2477_, v_b_2478_, v_eq_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_, v_a_2488_, v_a_2489_);
lean_dec(v_a_2489_);
lean_dec_ref(v_a_2488_);
lean_dec(v_a_2487_);
lean_dec_ref(v_a_2486_);
lean_dec(v_a_2485_);
lean_dec_ref(v_a_2484_);
lean_dec(v_a_2483_);
lean_dec_ref(v_a_2482_);
lean_dec(v_a_2481_);
lean_dec(v_a_2480_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0(lean_object* v___y_2492_, lean_object* v_eq_2493_, lean_object* v_a_2494_, lean_object* v_b_2495_, lean_object* v_inst_2496_, lean_object* v_a_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
lean_object* v___x_2509_; 
v___x_2509_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg(v___y_2492_, v_eq_2493_, v_a_2494_, v_b_2495_, v_a_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___boxed(lean_object** _args){
lean_object* v___y_2510_ = _args[0];
lean_object* v_eq_2511_ = _args[1];
lean_object* v_a_2512_ = _args[2];
lean_object* v_b_2513_ = _args[3];
lean_object* v_inst_2514_ = _args[4];
lean_object* v_a_2515_ = _args[5];
lean_object* v___y_2516_ = _args[6];
lean_object* v___y_2517_ = _args[7];
lean_object* v___y_2518_ = _args[8];
lean_object* v___y_2519_ = _args[9];
lean_object* v___y_2520_ = _args[10];
lean_object* v___y_2521_ = _args[11];
lean_object* v___y_2522_ = _args[12];
lean_object* v___y_2523_ = _args[13];
lean_object* v___y_2524_ = _args[14];
lean_object* v___y_2525_ = _args[15];
lean_object* v___y_2526_ = _args[16];
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0(v___y_2510_, v_eq_2511_, v_a_2512_, v_b_2513_, v_inst_2514_, v_a_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec(v___y_2521_);
lean_dec_ref(v___y_2520_);
lean_dec(v___y_2519_);
lean_dec_ref(v___y_2518_);
lean_dec(v___y_2517_);
lean_dec(v___y_2516_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1(lean_object* v_00_u03b2_2528_, lean_object* v_m_2529_, lean_object* v_a_2530_){
_start:
{
lean_object* v___x_2531_; 
v___x_2531_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___redArg(v_m_2529_, v_a_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1___boxed(lean_object* v_00_u03b2_2532_, lean_object* v_m_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1(v_00_u03b2_2532_, v_m_2533_, v_a_2534_);
lean_dec_ref(v_a_2534_);
lean_dec_ref(v_m_2533_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1(lean_object* v_00_u03b2_2536_, lean_object* v_a_2537_, lean_object* v_x_2538_){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___redArg(v_a_2537_, v_x_2538_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2540_, lean_object* v_a_2541_, lean_object* v_x_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__1_spec__1(v_00_u03b2_2540_, v_a_2541_, v_x_2542_);
lean_dec(v_x_2542_);
lean_dec_ref(v_a_2541_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___redArg(lean_object* v_imp_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_){
_start:
{
uint8_t v___y_2553_; lean_object* v___x_2560_; 
lean_inc_ref(v_imp_2544_);
v___x_2560_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_imp_2544_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; uint8_t v___x_2562_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2561_);
lean_dec_ref_known(v___x_2560_, 1);
v___x_2562_ = lean_unbox(v_a_2561_);
lean_dec(v_a_2561_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; 
v___x_2563_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_imp_2544_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2577_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2566_ = v___x_2563_;
v_isShared_2567_ = v_isSharedCheck_2577_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2563_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2577_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
uint8_t v___x_2568_; 
v___x_2568_ = lean_unbox(v_a_2564_);
lean_dec(v_a_2564_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; lean_object* v___x_2571_; 
v___x_2569_ = lean_box(1);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v___x_2569_);
v___x_2571_ = v___x_2566_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v___x_2569_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
else
{
lean_object* v___x_2573_; lean_object* v___x_2575_; 
v___x_2573_ = lean_box(0);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v___x_2573_);
v___x_2575_ = v___x_2566_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v___x_2573_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
else
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2585_; 
v_a_2578_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2580_ = v___x_2563_;
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v___x_2563_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2583_; 
if (v_isShared_2581_ == 0)
{
v___x_2583_ = v___x_2580_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_a_2578_);
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
lean_object* v_binderType_2586_; lean_object* v_body_2587_; lean_object* v___x_2588_; 
v_binderType_2586_ = lean_ctor_get(v_imp_2544_, 1);
lean_inc_ref_n(v_binderType_2586_, 2);
v_body_2587_ = lean_ctor_get(v_imp_2544_, 2);
lean_inc_ref(v_body_2587_);
lean_dec_ref(v_imp_2544_);
v___x_2588_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_binderType_2586_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; uint8_t v___x_2590_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2588_, 1);
v___x_2590_ = lean_unbox(v_a_2589_);
lean_dec(v_a_2589_);
if (v___x_2590_ == 0)
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_binderType_2586_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_a_2592_; uint8_t v___x_2593_; 
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_a_2592_);
lean_dec_ref_known(v___x_2591_, 1);
v___x_2593_ = lean_unbox(v_a_2592_);
if (v___x_2593_ == 0)
{
uint8_t v___x_2594_; 
v___x_2594_ = l_Lean_Expr_hasLooseBVars(v_body_2587_);
if (v___x_2594_ == 0)
{
lean_object* v___x_2595_; 
lean_inc_ref(v_body_2587_);
v___x_2595_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_body_2587_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v_a_2596_; uint8_t v___x_2597_; 
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2595_, 1);
v___x_2597_ = lean_unbox(v_a_2596_);
lean_dec(v_a_2596_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; 
v___x_2598_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_body_2587_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; uint8_t v___x_2600_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2598_, 1);
v___x_2600_ = lean_unbox(v_a_2599_);
lean_dec(v_a_2599_);
if (v___x_2600_ == 0)
{
uint8_t v___x_2601_; 
v___x_2601_ = lean_unbox(v_a_2592_);
lean_dec(v_a_2592_);
v___y_2553_ = v___x_2601_;
goto v___jp_2552_;
}
else
{
lean_dec(v_a_2592_);
goto v___jp_2557_;
}
}
else
{
lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2609_; 
lean_dec(v_a_2592_);
v_a_2602_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2604_ = v___x_2598_;
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_dec(v___x_2598_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2607_; 
if (v_isShared_2605_ == 0)
{
v___x_2607_ = v___x_2604_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2602_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
}
else
{
lean_dec(v_a_2592_);
lean_dec_ref(v_body_2587_);
goto v___jp_2557_;
}
}
else
{
lean_object* v_a_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2617_; 
lean_dec(v_a_2592_);
lean_dec_ref(v_body_2587_);
v_a_2610_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2612_ = v___x_2595_;
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_a_2610_);
lean_dec(v___x_2595_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v___x_2615_; 
if (v_isShared_2613_ == 0)
{
v___x_2615_ = v___x_2612_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_a_2610_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
}
else
{
uint8_t v___x_2618_; 
lean_dec_ref(v_body_2587_);
v___x_2618_ = lean_unbox(v_a_2592_);
lean_dec(v_a_2592_);
v___y_2553_ = v___x_2618_;
goto v___jp_2552_;
}
}
else
{
lean_dec(v_a_2592_);
lean_dec_ref(v_body_2587_);
goto v___jp_2557_;
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec_ref(v_body_2587_);
v_a_2619_ = lean_ctor_get(v___x_2591_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2591_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2591_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
else
{
lean_dec_ref(v_body_2587_);
lean_dec_ref(v_binderType_2586_);
goto v___jp_2557_;
}
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2634_; 
lean_dec_ref(v_body_2587_);
lean_dec_ref(v_binderType_2586_);
v_a_2627_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2588_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2588_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2632_; 
if (v_isShared_2630_ == 0)
{
v___x_2632_ = v___x_2629_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2627_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
}
else
{
lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2642_; 
lean_dec_ref(v_imp_2544_);
v_a_2635_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2637_ = v___x_2560_;
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v___x_2560_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2640_; 
if (v_isShared_2638_ == 0)
{
v___x_2640_ = v___x_2637_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_a_2635_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
}
v___jp_2552_:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2554_ = lean_unsigned_to_nat(2u);
v___x_2555_ = lean_alloc_ctor(2, 1, 2);
lean_ctor_set(v___x_2555_, 0, v___x_2554_);
lean_ctor_set_uint8(v___x_2555_, sizeof(void*)*1, v___y_2553_);
lean_ctor_set_uint8(v___x_2555_, sizeof(void*)*1 + 1, v___y_2553_);
v___x_2556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2555_);
return v___x_2556_;
}
v___jp_2557_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = lean_box(0);
v___x_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
return v___x_2559_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___redArg___boxed(lean_object* v_imp_2643_, lean_object* v_a_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___redArg(v_imp_2643_, v_a_2644_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_);
lean_dec(v_a_2649_);
lean_dec_ref(v_a_2648_);
lean_dec(v_a_2647_);
lean_dec_ref(v_a_2646_);
lean_dec_ref(v_a_2645_);
lean_dec(v_a_2644_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus(lean_object* v_imp_2652_, lean_object* v_h_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___redArg(v_imp_2652_, v_a_2654_, v_a_2658_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___boxed(lean_object* v_imp_2666_, lean_object* v_h_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus(v_imp_2666_, v_h_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_, v_a_2676_, v_a_2677_);
lean_dec(v_a_2677_);
lean_dec_ref(v_a_2676_);
lean_dec(v_a_2675_);
lean_dec_ref(v_a_2674_);
lean_dec(v_a_2673_);
lean_dec_ref(v_a_2672_);
lean_dec(v_a_2671_);
lean_dec_ref(v_a_2670_);
lean_dec(v_a_2669_);
lean_dec(v_a_2668_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkSplitStatus(lean_object* v_s_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_, lean_object* v_a_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_, lean_object* v_a_2690_){
_start:
{
switch(lean_obj_tag(v_s_2680_))
{
case 0:
{
lean_object* v_e_2692_; lean_object* v___x_2693_; 
v_e_2692_ = lean_ctor_get(v_s_2680_, 0);
lean_inc_ref(v_e_2692_);
lean_dec_ref_known(v_s_2680_, 2);
v___x_2693_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus(v_e_2692_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_, v_a_2687_, v_a_2688_, v_a_2689_, v_a_2690_);
return v___x_2693_;
}
case 1:
{
lean_object* v_e_2694_; lean_object* v___x_2695_; 
v_e_2694_ = lean_ctor_get(v_s_2680_, 0);
lean_inc_ref(v_e_2694_);
lean_dec_ref_known(v_s_2680_, 2);
v___x_2695_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkForallStatus___redArg(v_e_2694_, v_a_2681_, v_a_2685_, v_a_2687_, v_a_2688_, v_a_2689_, v_a_2690_);
return v___x_2695_;
}
default: 
{
lean_object* v_a_2696_; lean_object* v_b_2697_; lean_object* v_eq_2698_; lean_object* v___x_2699_; 
v_a_2696_ = lean_ctor_get(v_s_2680_, 0);
lean_inc_ref(v_a_2696_);
v_b_2697_ = lean_ctor_get(v_s_2680_, 1);
lean_inc_ref(v_b_2697_);
v_eq_2698_ = lean_ctor_get(v_s_2680_, 3);
lean_inc_ref(v_eq_2698_);
lean_dec_ref_known(v_s_2680_, 5);
v___x_2699_ = l_Lean_Meta_Grind_checkSplitInfoArgStatus(v_a_2696_, v_b_2697_, v_eq_2698_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_, v_a_2687_, v_a_2688_, v_a_2689_, v_a_2690_);
return v___x_2699_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkSplitStatus___boxed(lean_object* v_s_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Lean_Meta_Grind_checkSplitStatus(v_s_2700_, v_a_2701_, v_a_2702_, v_a_2703_, v_a_2704_, v_a_2705_, v_a_2706_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_);
lean_dec(v_a_2710_);
lean_dec_ref(v_a_2709_);
lean_dec(v_a_2708_);
lean_dec_ref(v_a_2707_);
lean_dec(v_a_2706_);
lean_dec_ref(v_a_2705_);
lean_dec(v_a_2704_);
lean_dec_ref(v_a_2703_);
lean_dec(v_a_2702_);
lean_dec(v_a_2701_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorIdx___impl(lean_object* v_x_2713_){
_start:
{
lean_object* v___x_2714_; 
v___x_2714_ = lean_obj_tag_nat(v_x_2713_);
return v___x_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorIdx___impl___boxed(lean_object* v_x_2715_){
_start:
{
lean_object* v_res_2716_; 
v_res_2716_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorIdx___impl(v_x_2715_);
lean_dec(v_x_2715_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___redArg(lean_object* v_t_2717_, lean_object* v_k_2718_){
_start:
{
if (lean_obj_tag(v_t_2717_) == 0)
{
return v_k_2718_;
}
else
{
lean_object* v_c_2719_; lean_object* v_numCases_2720_; uint8_t v_isRec_2721_; uint8_t v_tryPostpone_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v_c_2719_ = lean_ctor_get(v_t_2717_, 0);
lean_inc_ref(v_c_2719_);
v_numCases_2720_ = lean_ctor_get(v_t_2717_, 1);
lean_inc(v_numCases_2720_);
v_isRec_2721_ = lean_ctor_get_uint8(v_t_2717_, sizeof(void*)*2);
v_tryPostpone_2722_ = lean_ctor_get_uint8(v_t_2717_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_t_2717_, 2);
v___x_2723_ = lean_box(v_isRec_2721_);
v___x_2724_ = lean_box(v_tryPostpone_2722_);
v___x_2725_ = lean_apply_4(v_k_2718_, v_c_2719_, v_numCases_2720_, v___x_2723_, v___x_2724_);
return v___x_2725_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim(lean_object* v_motive_2726_, lean_object* v_ctorIdx_2727_, lean_object* v_t_2728_, lean_object* v_h_2729_, lean_object* v_k_2730_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___redArg(v_t_2728_, v_k_2730_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___boxed(lean_object* v_motive_2732_, lean_object* v_ctorIdx_2733_, lean_object* v_t_2734_, lean_object* v_h_2735_, lean_object* v_k_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim(v_motive_2732_, v_ctorIdx_2733_, v_t_2734_, v_h_2735_, v_k_2736_);
lean_dec(v_ctorIdx_2733_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_none_elim___redArg(lean_object* v_t_2738_, lean_object* v_none_2739_){
_start:
{
lean_object* v___x_2740_; 
v___x_2740_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___redArg(v_t_2738_, v_none_2739_);
return v___x_2740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_none_elim(lean_object* v_motive_2741_, lean_object* v_t_2742_, lean_object* v_h_2743_, lean_object* v_none_2744_){
_start:
{
lean_object* v___x_2745_; 
v___x_2745_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___redArg(v_t_2742_, v_none_2744_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_some_elim___redArg(lean_object* v_t_2746_, lean_object* v_some_2747_){
_start:
{
lean_object* v___x_2748_; 
v___x_2748_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___redArg(v_t_2746_, v_some_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_some_elim(lean_object* v_motive_2749_, lean_object* v_t_2750_, lean_object* v_h_2751_, lean_object* v_some_2752_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_SplitCandidate_ctorElim___redArg(v_t_2750_, v_some_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs_spec__0(uint64_t v_a_2754_, lean_object* v_as_2755_, size_t v_i_2756_, size_t v_stop_2757_){
_start:
{
uint8_t v___x_2758_; 
v___x_2758_ = lean_usize_dec_eq(v_i_2756_, v_stop_2757_);
if (v___x_2758_ == 0)
{
lean_object* v___x_2759_; uint8_t v___x_2760_; 
v___x_2759_ = lean_array_uget_borrowed(v_as_2755_, v_i_2756_);
v___x_2760_ = l_Lean_Meta_Grind_AnchorRef_matches(v___x_2759_, v_a_2754_);
if (v___x_2760_ == 0)
{
size_t v___x_2761_; size_t v___x_2762_; 
v___x_2761_ = ((size_t)1ULL);
v___x_2762_ = lean_usize_add(v_i_2756_, v___x_2761_);
v_i_2756_ = v___x_2762_;
goto _start;
}
else
{
return v___x_2760_;
}
}
else
{
uint8_t v___x_2764_; 
v___x_2764_ = 0;
return v___x_2764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs_spec__0___boxed(lean_object* v_a_2765_, lean_object* v_as_2766_, lean_object* v_i_2767_, lean_object* v_stop_2768_){
_start:
{
uint64_t v_a_2505__boxed_2769_; size_t v_i_boxed_2770_; size_t v_stop_boxed_2771_; uint8_t v_res_2772_; lean_object* v_r_2773_; 
v_a_2505__boxed_2769_ = lean_unbox_uint64(v_a_2765_);
lean_dec_ref(v_a_2765_);
v_i_boxed_2770_ = lean_unbox_usize(v_i_2767_);
lean_dec(v_i_2767_);
v_stop_boxed_2771_ = lean_unbox_usize(v_stop_2768_);
lean_dec(v_stop_2768_);
v_res_2772_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs_spec__0(v_a_2505__boxed_2769_, v_as_2766_, v_i_boxed_2770_, v_stop_boxed_2771_);
lean_dec_ref(v_as_2766_);
v_r_2773_ = lean_box(v_res_2772_);
return v_r_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs(lean_object* v_c_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_){
_start:
{
lean_object* v___x_2785_; 
v___x_2785_ = l_Lean_Meta_Grind_getAnchorRefs___redArg(v_a_2776_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2829_; 
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2788_ = v___x_2785_;
v_isShared_2789_ = v_isSharedCheck_2829_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2785_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2829_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
if (lean_obj_tag(v_a_2786_) == 1)
{
lean_object* v_val_2790_; lean_object* v___x_2791_; 
lean_del_object(v___x_2788_);
v_val_2790_ = lean_ctor_get(v_a_2786_, 0);
lean_inc(v_val_2790_);
lean_dec_ref_known(v_a_2786_, 1);
v___x_2791_ = l_Lean_Meta_Grind_SplitInfo_getAnchor(v_c_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_, v_a_2782_, v_a_2783_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2815_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2794_ = v___x_2791_;
v_isShared_2795_ = v_isSharedCheck_2815_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2791_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2815_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; uint8_t v___x_2798_; 
v___x_2796_ = lean_unsigned_to_nat(0u);
v___x_2797_ = lean_array_get_size(v_val_2790_);
v___x_2798_ = lean_nat_dec_lt(v___x_2796_, v___x_2797_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2799_; lean_object* v___x_2801_; 
lean_dec(v_a_2792_);
lean_dec(v_val_2790_);
v___x_2799_ = lean_box(v___x_2798_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v___x_2799_);
v___x_2801_ = v___x_2794_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v___x_2799_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
else
{
if (v___x_2798_ == 0)
{
lean_object* v___x_2803_; lean_object* v___x_2805_; 
lean_dec(v_a_2792_);
lean_dec(v_val_2790_);
v___x_2803_ = lean_box(v___x_2798_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v___x_2803_);
v___x_2805_ = v___x_2794_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2806_; 
v_reuseFailAlloc_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2806_, 0, v___x_2803_);
v___x_2805_ = v_reuseFailAlloc_2806_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
return v___x_2805_;
}
}
else
{
size_t v___x_2807_; size_t v___x_2808_; uint64_t v___x_2809_; uint8_t v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2813_; 
v___x_2807_ = ((size_t)0ULL);
v___x_2808_ = lean_usize_of_nat(v___x_2797_);
v___x_2809_ = lean_unbox_uint64(v_a_2792_);
lean_dec(v_a_2792_);
v___x_2810_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs_spec__0(v___x_2809_, v_val_2790_, v___x_2807_, v___x_2808_);
lean_dec(v_val_2790_);
v___x_2811_ = lean_box(v___x_2810_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v___x_2811_);
v___x_2813_ = v___x_2794_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2811_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
}
else
{
lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2823_; 
lean_dec(v_val_2790_);
v_a_2816_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2818_ = v___x_2791_;
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2791_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2821_; 
if (v_isShared_2819_ == 0)
{
v___x_2821_ = v___x_2818_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2816_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
}
}
else
{
uint8_t v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2827_; 
lean_dec(v_a_2786_);
v___x_2824_ = 1;
v___x_2825_ = lean_box(v___x_2824_);
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 0, v___x_2825_);
v___x_2827_ = v___x_2788_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v___x_2825_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2837_; 
v_a_2830_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2832_ = v___x_2785_;
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v___x_2785_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
if (v_isShared_2833_ == 0)
{
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2830_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs___boxed(lean_object* v_c_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs(v_c_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_, v_a_2846_, v_a_2847_);
lean_dec(v_a_2847_);
lean_dec_ref(v_a_2846_);
lean_dec(v_a_2845_);
lean_dec_ref(v_a_2844_);
lean_dec(v_a_2843_);
lean_dec_ref(v_a_2842_);
lean_dec(v_a_2841_);
lean_dec_ref(v_a_2840_);
lean_dec(v_a_2839_);
lean_dec_ref(v_c_2838_);
return v_res_2849_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__1(void){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__0));
v___x_2852_ = l_Lean_stringToMessageData(v___x_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go(lean_object* v_cs_2853_, lean_object* v_c_x3f_2854_, lean_object* v_cs_x27_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_){
_start:
{
if (lean_obj_tag(v_cs_2853_) == 0)
{
lean_object* v___x_2867_; lean_object* v_toGoalState_2868_; lean_object* v_split_2869_; lean_object* v_mvarId_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2987_; 
v___x_2867_ = lean_st_ref_take(v_a_2856_);
v_toGoalState_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc_ref(v_toGoalState_2868_);
v_split_2869_ = lean_ctor_get(v_toGoalState_2868_, 16);
lean_inc_ref(v_split_2869_);
v_mvarId_2870_ = lean_ctor_get(v___x_2867_, 1);
v_isSharedCheck_2987_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_2987_ == 0)
{
lean_object* v_unused_2988_; 
v_unused_2988_ = lean_ctor_get(v___x_2867_, 0);
lean_dec(v_unused_2988_);
v___x_2872_ = v___x_2867_;
v_isShared_2873_ = v_isSharedCheck_2987_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_mvarId_2870_);
lean_dec(v___x_2867_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2987_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v_nextDeclIdx_2874_; lean_object* v_enodeMap_2875_; lean_object* v_exprs_2876_; lean_object* v_parents_2877_; lean_object* v_condParents_2878_; lean_object* v_congrTable_2879_; lean_object* v_appMap_2880_; lean_object* v_indicesFound_2881_; lean_object* v_toProcess_2882_; lean_object* v_internalizing_2883_; uint8_t v_inconsistent_2884_; lean_object* v_nextIdx_2885_; lean_object* v_newRawFacts_2886_; lean_object* v_facts_2887_; lean_object* v_extThms_2888_; lean_object* v_ematch_2889_; lean_object* v_inj_2890_; lean_object* v_clean_2891_; lean_object* v_sstates_2892_; lean_object* v_goalStack_2893_; uint64_t v_introBase_2894_; lean_object* v_numIntros_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2985_; 
v_nextDeclIdx_2874_ = lean_ctor_get(v_toGoalState_2868_, 0);
v_enodeMap_2875_ = lean_ctor_get(v_toGoalState_2868_, 1);
v_exprs_2876_ = lean_ctor_get(v_toGoalState_2868_, 2);
v_parents_2877_ = lean_ctor_get(v_toGoalState_2868_, 3);
v_condParents_2878_ = lean_ctor_get(v_toGoalState_2868_, 4);
v_congrTable_2879_ = lean_ctor_get(v_toGoalState_2868_, 5);
v_appMap_2880_ = lean_ctor_get(v_toGoalState_2868_, 6);
v_indicesFound_2881_ = lean_ctor_get(v_toGoalState_2868_, 7);
v_toProcess_2882_ = lean_ctor_get(v_toGoalState_2868_, 8);
v_internalizing_2883_ = lean_ctor_get(v_toGoalState_2868_, 9);
v_inconsistent_2884_ = lean_ctor_get_uint8(v_toGoalState_2868_, sizeof(void*)*21 + 8);
v_nextIdx_2885_ = lean_ctor_get(v_toGoalState_2868_, 10);
v_newRawFacts_2886_ = lean_ctor_get(v_toGoalState_2868_, 11);
v_facts_2887_ = lean_ctor_get(v_toGoalState_2868_, 12);
v_extThms_2888_ = lean_ctor_get(v_toGoalState_2868_, 13);
v_ematch_2889_ = lean_ctor_get(v_toGoalState_2868_, 14);
v_inj_2890_ = lean_ctor_get(v_toGoalState_2868_, 15);
v_clean_2891_ = lean_ctor_get(v_toGoalState_2868_, 17);
v_sstates_2892_ = lean_ctor_get(v_toGoalState_2868_, 18);
v_goalStack_2893_ = lean_ctor_get(v_toGoalState_2868_, 19);
v_introBase_2894_ = lean_ctor_get_uint64(v_toGoalState_2868_, sizeof(void*)*21);
v_numIntros_2895_ = lean_ctor_get(v_toGoalState_2868_, 20);
v_isSharedCheck_2985_ = !lean_is_exclusive(v_toGoalState_2868_);
if (v_isSharedCheck_2985_ == 0)
{
lean_object* v_unused_2986_; 
v_unused_2986_ = lean_ctor_get(v_toGoalState_2868_, 16);
lean_dec(v_unused_2986_);
v___x_2897_ = v_toGoalState_2868_;
v_isShared_2898_ = v_isSharedCheck_2985_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_numIntros_2895_);
lean_inc(v_goalStack_2893_);
lean_inc(v_sstates_2892_);
lean_inc(v_clean_2891_);
lean_inc(v_inj_2890_);
lean_inc(v_ematch_2889_);
lean_inc(v_extThms_2888_);
lean_inc(v_facts_2887_);
lean_inc(v_newRawFacts_2886_);
lean_inc(v_nextIdx_2885_);
lean_inc(v_internalizing_2883_);
lean_inc(v_toProcess_2882_);
lean_inc(v_indicesFound_2881_);
lean_inc(v_appMap_2880_);
lean_inc(v_congrTable_2879_);
lean_inc(v_condParents_2878_);
lean_inc(v_parents_2877_);
lean_inc(v_exprs_2876_);
lean_inc(v_enodeMap_2875_);
lean_inc(v_nextDeclIdx_2874_);
lean_dec(v_toGoalState_2868_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2985_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v_added_2899_; lean_object* v_resolved_2900_; lean_object* v_trace_2901_; lean_object* v_lookaheads_2902_; lean_object* v_argPosMap_2903_; lean_object* v_argsAt_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2983_; 
v_added_2899_ = lean_ctor_get(v_split_2869_, 1);
v_resolved_2900_ = lean_ctor_get(v_split_2869_, 2);
v_trace_2901_ = lean_ctor_get(v_split_2869_, 3);
v_lookaheads_2902_ = lean_ctor_get(v_split_2869_, 4);
v_argPosMap_2903_ = lean_ctor_get(v_split_2869_, 5);
v_argsAt_2904_ = lean_ctor_get(v_split_2869_, 6);
v_isSharedCheck_2983_ = !lean_is_exclusive(v_split_2869_);
if (v_isSharedCheck_2983_ == 0)
{
lean_object* v_unused_2984_; 
v_unused_2984_ = lean_ctor_get(v_split_2869_, 0);
lean_dec(v_unused_2984_);
v___x_2906_ = v_split_2869_;
v_isShared_2907_ = v_isSharedCheck_2983_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_argsAt_2904_);
lean_inc(v_argPosMap_2903_);
lean_inc(v_lookaheads_2902_);
lean_inc(v_trace_2901_);
lean_inc(v_resolved_2900_);
lean_inc(v_added_2899_);
lean_dec(v_split_2869_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2983_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2908_; lean_object* v___x_2910_; 
v___x_2908_ = l_List_reverse___redArg(v_cs_x27_2855_);
if (v_isShared_2907_ == 0)
{
lean_ctor_set(v___x_2906_, 0, v___x_2908_);
v___x_2910_ = v___x_2906_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2908_);
lean_ctor_set(v_reuseFailAlloc_2982_, 1, v_added_2899_);
lean_ctor_set(v_reuseFailAlloc_2982_, 2, v_resolved_2900_);
lean_ctor_set(v_reuseFailAlloc_2982_, 3, v_trace_2901_);
lean_ctor_set(v_reuseFailAlloc_2982_, 4, v_lookaheads_2902_);
lean_ctor_set(v_reuseFailAlloc_2982_, 5, v_argPosMap_2903_);
lean_ctor_set(v_reuseFailAlloc_2982_, 6, v_argsAt_2904_);
v___x_2910_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2912_; 
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 16, v___x_2910_);
v___x_2912_ = v___x_2897_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_nextDeclIdx_2874_);
lean_ctor_set(v_reuseFailAlloc_2981_, 1, v_enodeMap_2875_);
lean_ctor_set(v_reuseFailAlloc_2981_, 2, v_exprs_2876_);
lean_ctor_set(v_reuseFailAlloc_2981_, 3, v_parents_2877_);
lean_ctor_set(v_reuseFailAlloc_2981_, 4, v_condParents_2878_);
lean_ctor_set(v_reuseFailAlloc_2981_, 5, v_congrTable_2879_);
lean_ctor_set(v_reuseFailAlloc_2981_, 6, v_appMap_2880_);
lean_ctor_set(v_reuseFailAlloc_2981_, 7, v_indicesFound_2881_);
lean_ctor_set(v_reuseFailAlloc_2981_, 8, v_toProcess_2882_);
lean_ctor_set(v_reuseFailAlloc_2981_, 9, v_internalizing_2883_);
lean_ctor_set(v_reuseFailAlloc_2981_, 10, v_nextIdx_2885_);
lean_ctor_set(v_reuseFailAlloc_2981_, 11, v_newRawFacts_2886_);
lean_ctor_set(v_reuseFailAlloc_2981_, 12, v_facts_2887_);
lean_ctor_set(v_reuseFailAlloc_2981_, 13, v_extThms_2888_);
lean_ctor_set(v_reuseFailAlloc_2981_, 14, v_ematch_2889_);
lean_ctor_set(v_reuseFailAlloc_2981_, 15, v_inj_2890_);
lean_ctor_set(v_reuseFailAlloc_2981_, 16, v___x_2910_);
lean_ctor_set(v_reuseFailAlloc_2981_, 17, v_clean_2891_);
lean_ctor_set(v_reuseFailAlloc_2981_, 18, v_sstates_2892_);
lean_ctor_set(v_reuseFailAlloc_2981_, 19, v_goalStack_2893_);
lean_ctor_set(v_reuseFailAlloc_2981_, 20, v_numIntros_2895_);
lean_ctor_set_uint8(v_reuseFailAlloc_2981_, sizeof(void*)*21 + 8, v_inconsistent_2884_);
lean_ctor_set_uint64(v_reuseFailAlloc_2981_, sizeof(void*)*21, v_introBase_2894_);
v___x_2912_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
lean_object* v___x_2914_; 
if (v_isShared_2873_ == 0)
{
lean_ctor_set(v___x_2872_, 0, v___x_2912_);
v___x_2914_ = v___x_2872_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v___x_2912_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v_mvarId_2870_);
v___x_2914_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
lean_object* v___x_2915_; 
v___x_2915_ = lean_st_ref_put(v_a_2856_, v___x_2914_);
if (lean_obj_tag(v_c_x3f_2854_) == 1)
{
lean_object* v___x_2916_; lean_object* v_toGoalState_2917_; lean_object* v_ematch_2918_; lean_object* v_mvarId_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2977_; 
v___x_2916_ = lean_st_ref_take(v_a_2856_);
v_toGoalState_2917_ = lean_ctor_get(v___x_2916_, 0);
lean_inc_ref(v_toGoalState_2917_);
v_ematch_2918_ = lean_ctor_get(v_toGoalState_2917_, 14);
lean_inc_ref(v_ematch_2918_);
v_mvarId_2919_ = lean_ctor_get(v___x_2916_, 1);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2977_ == 0)
{
lean_object* v_unused_2978_; 
v_unused_2978_ = lean_ctor_get(v___x_2916_, 0);
lean_dec(v_unused_2978_);
v___x_2921_ = v___x_2916_;
v_isShared_2922_ = v_isSharedCheck_2977_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_mvarId_2919_);
lean_dec(v___x_2916_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2977_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v_nextDeclIdx_2923_; lean_object* v_enodeMap_2924_; lean_object* v_exprs_2925_; lean_object* v_parents_2926_; lean_object* v_condParents_2927_; lean_object* v_congrTable_2928_; lean_object* v_appMap_2929_; lean_object* v_indicesFound_2930_; lean_object* v_toProcess_2931_; lean_object* v_internalizing_2932_; uint8_t v_inconsistent_2933_; lean_object* v_nextIdx_2934_; lean_object* v_newRawFacts_2935_; lean_object* v_facts_2936_; lean_object* v_extThms_2937_; lean_object* v_inj_2938_; lean_object* v_split_2939_; lean_object* v_clean_2940_; lean_object* v_sstates_2941_; lean_object* v_goalStack_2942_; uint64_t v_introBase_2943_; lean_object* v_numIntros_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2975_; 
v_nextDeclIdx_2923_ = lean_ctor_get(v_toGoalState_2917_, 0);
v_enodeMap_2924_ = lean_ctor_get(v_toGoalState_2917_, 1);
v_exprs_2925_ = lean_ctor_get(v_toGoalState_2917_, 2);
v_parents_2926_ = lean_ctor_get(v_toGoalState_2917_, 3);
v_condParents_2927_ = lean_ctor_get(v_toGoalState_2917_, 4);
v_congrTable_2928_ = lean_ctor_get(v_toGoalState_2917_, 5);
v_appMap_2929_ = lean_ctor_get(v_toGoalState_2917_, 6);
v_indicesFound_2930_ = lean_ctor_get(v_toGoalState_2917_, 7);
v_toProcess_2931_ = lean_ctor_get(v_toGoalState_2917_, 8);
v_internalizing_2932_ = lean_ctor_get(v_toGoalState_2917_, 9);
v_inconsistent_2933_ = lean_ctor_get_uint8(v_toGoalState_2917_, sizeof(void*)*21 + 8);
v_nextIdx_2934_ = lean_ctor_get(v_toGoalState_2917_, 10);
v_newRawFacts_2935_ = lean_ctor_get(v_toGoalState_2917_, 11);
v_facts_2936_ = lean_ctor_get(v_toGoalState_2917_, 12);
v_extThms_2937_ = lean_ctor_get(v_toGoalState_2917_, 13);
v_inj_2938_ = lean_ctor_get(v_toGoalState_2917_, 15);
v_split_2939_ = lean_ctor_get(v_toGoalState_2917_, 16);
v_clean_2940_ = lean_ctor_get(v_toGoalState_2917_, 17);
v_sstates_2941_ = lean_ctor_get(v_toGoalState_2917_, 18);
v_goalStack_2942_ = lean_ctor_get(v_toGoalState_2917_, 19);
v_introBase_2943_ = lean_ctor_get_uint64(v_toGoalState_2917_, sizeof(void*)*21);
v_numIntros_2944_ = lean_ctor_get(v_toGoalState_2917_, 20);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_toGoalState_2917_);
if (v_isSharedCheck_2975_ == 0)
{
lean_object* v_unused_2976_; 
v_unused_2976_ = lean_ctor_get(v_toGoalState_2917_, 14);
lean_dec(v_unused_2976_);
v___x_2946_ = v_toGoalState_2917_;
v_isShared_2947_ = v_isSharedCheck_2975_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_numIntros_2944_);
lean_inc(v_goalStack_2942_);
lean_inc(v_sstates_2941_);
lean_inc(v_clean_2940_);
lean_inc(v_split_2939_);
lean_inc(v_inj_2938_);
lean_inc(v_extThms_2937_);
lean_inc(v_facts_2936_);
lean_inc(v_newRawFacts_2935_);
lean_inc(v_nextIdx_2934_);
lean_inc(v_internalizing_2932_);
lean_inc(v_toProcess_2931_);
lean_inc(v_indicesFound_2930_);
lean_inc(v_appMap_2929_);
lean_inc(v_congrTable_2928_);
lean_inc(v_condParents_2927_);
lean_inc(v_parents_2926_);
lean_inc(v_exprs_2925_);
lean_inc(v_enodeMap_2924_);
lean_inc(v_nextDeclIdx_2923_);
lean_dec(v_toGoalState_2917_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2975_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v_thmMap_2948_; lean_object* v_gmt_2949_; lean_object* v_thms_2950_; lean_object* v_newThms_2951_; lean_object* v_numInstances_2952_; lean_object* v_numDelayedInstances_2953_; lean_object* v_preInstances_2954_; lean_object* v_nextThmIdx_2955_; lean_object* v_matchEqNames_2956_; lean_object* v_delayedThmInsts_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2973_; 
v_thmMap_2948_ = lean_ctor_get(v_ematch_2918_, 0);
v_gmt_2949_ = lean_ctor_get(v_ematch_2918_, 1);
v_thms_2950_ = lean_ctor_get(v_ematch_2918_, 2);
v_newThms_2951_ = lean_ctor_get(v_ematch_2918_, 3);
v_numInstances_2952_ = lean_ctor_get(v_ematch_2918_, 4);
v_numDelayedInstances_2953_ = lean_ctor_get(v_ematch_2918_, 5);
v_preInstances_2954_ = lean_ctor_get(v_ematch_2918_, 7);
v_nextThmIdx_2955_ = lean_ctor_get(v_ematch_2918_, 8);
v_matchEqNames_2956_ = lean_ctor_get(v_ematch_2918_, 9);
v_delayedThmInsts_2957_ = lean_ctor_get(v_ematch_2918_, 10);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_ematch_2918_);
if (v_isSharedCheck_2973_ == 0)
{
lean_object* v_unused_2974_; 
v_unused_2974_ = lean_ctor_get(v_ematch_2918_, 6);
lean_dec(v_unused_2974_);
v___x_2959_ = v_ematch_2918_;
v_isShared_2960_ = v_isSharedCheck_2973_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_delayedThmInsts_2957_);
lean_inc(v_matchEqNames_2956_);
lean_inc(v_nextThmIdx_2955_);
lean_inc(v_preInstances_2954_);
lean_inc(v_numDelayedInstances_2953_);
lean_inc(v_numInstances_2952_);
lean_inc(v_newThms_2951_);
lean_inc(v_thms_2950_);
lean_inc(v_gmt_2949_);
lean_inc(v_thmMap_2948_);
lean_dec(v_ematch_2918_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2973_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v___x_2963_; 
v___x_2961_ = lean_unsigned_to_nat(0u);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 6, v___x_2961_);
v___x_2963_ = v___x_2959_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_thmMap_2948_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v_gmt_2949_);
lean_ctor_set(v_reuseFailAlloc_2972_, 2, v_thms_2950_);
lean_ctor_set(v_reuseFailAlloc_2972_, 3, v_newThms_2951_);
lean_ctor_set(v_reuseFailAlloc_2972_, 4, v_numInstances_2952_);
lean_ctor_set(v_reuseFailAlloc_2972_, 5, v_numDelayedInstances_2953_);
lean_ctor_set(v_reuseFailAlloc_2972_, 6, v___x_2961_);
lean_ctor_set(v_reuseFailAlloc_2972_, 7, v_preInstances_2954_);
lean_ctor_set(v_reuseFailAlloc_2972_, 8, v_nextThmIdx_2955_);
lean_ctor_set(v_reuseFailAlloc_2972_, 9, v_matchEqNames_2956_);
lean_ctor_set(v_reuseFailAlloc_2972_, 10, v_delayedThmInsts_2957_);
v___x_2963_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
lean_object* v___x_2965_; 
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 14, v___x_2963_);
v___x_2965_ = v___x_2946_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_nextDeclIdx_2923_);
lean_ctor_set(v_reuseFailAlloc_2971_, 1, v_enodeMap_2924_);
lean_ctor_set(v_reuseFailAlloc_2971_, 2, v_exprs_2925_);
lean_ctor_set(v_reuseFailAlloc_2971_, 3, v_parents_2926_);
lean_ctor_set(v_reuseFailAlloc_2971_, 4, v_condParents_2927_);
lean_ctor_set(v_reuseFailAlloc_2971_, 5, v_congrTable_2928_);
lean_ctor_set(v_reuseFailAlloc_2971_, 6, v_appMap_2929_);
lean_ctor_set(v_reuseFailAlloc_2971_, 7, v_indicesFound_2930_);
lean_ctor_set(v_reuseFailAlloc_2971_, 8, v_toProcess_2931_);
lean_ctor_set(v_reuseFailAlloc_2971_, 9, v_internalizing_2932_);
lean_ctor_set(v_reuseFailAlloc_2971_, 10, v_nextIdx_2934_);
lean_ctor_set(v_reuseFailAlloc_2971_, 11, v_newRawFacts_2935_);
lean_ctor_set(v_reuseFailAlloc_2971_, 12, v_facts_2936_);
lean_ctor_set(v_reuseFailAlloc_2971_, 13, v_extThms_2937_);
lean_ctor_set(v_reuseFailAlloc_2971_, 14, v___x_2963_);
lean_ctor_set(v_reuseFailAlloc_2971_, 15, v_inj_2938_);
lean_ctor_set(v_reuseFailAlloc_2971_, 16, v_split_2939_);
lean_ctor_set(v_reuseFailAlloc_2971_, 17, v_clean_2940_);
lean_ctor_set(v_reuseFailAlloc_2971_, 18, v_sstates_2941_);
lean_ctor_set(v_reuseFailAlloc_2971_, 19, v_goalStack_2942_);
lean_ctor_set(v_reuseFailAlloc_2971_, 20, v_numIntros_2944_);
lean_ctor_set_uint8(v_reuseFailAlloc_2971_, sizeof(void*)*21 + 8, v_inconsistent_2933_);
lean_ctor_set_uint64(v_reuseFailAlloc_2971_, sizeof(void*)*21, v_introBase_2943_);
v___x_2965_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2967_; 
if (v_isShared_2922_ == 0)
{
lean_ctor_set(v___x_2921_, 0, v___x_2965_);
v___x_2967_ = v___x_2921_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v___x_2965_);
lean_ctor_set(v_reuseFailAlloc_2970_, 1, v_mvarId_2919_);
v___x_2967_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___x_2968_ = lean_st_ref_put(v_a_2856_, v___x_2967_);
v___x_2969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2969_, 0, v_c_x3f_2854_);
return v___x_2969_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2979_, 0, v_c_x3f_2854_);
return v___x_2979_;
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
lean_object* v_head_2989_; lean_object* v_tail_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3206_; 
v_head_2989_ = lean_ctor_get(v_cs_2853_, 0);
v_tail_2990_ = lean_ctor_get(v_cs_2853_, 1);
v_isSharedCheck_3206_ = !lean_is_exclusive(v_cs_2853_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_2992_ = v_cs_2853_;
v_isShared_2993_ = v_isSharedCheck_3206_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_tail_2990_);
lean_inc(v_head_2989_);
lean_dec(v_cs_2853_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3206_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; uint8_t v___y_3019_; uint8_t v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; uint8_t v___y_3037_; uint8_t v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v___y_3068_; lean_object* v___y_3069_; lean_object* v___y_3070_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; uint8_t v___y_3076_; uint8_t v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; uint8_t v___y_3093_; uint8_t v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; uint8_t v___y_3099_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; uint8_t v___y_3111_; uint8_t v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; uint8_t v___y_3116_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v___y_3133_; lean_object* v___y_3134_; lean_object* v___y_3135_; lean_object* v___y_3136_; lean_object* v___x_3165_; 
v___x_3165_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkAnchorRefs(v_head_2989_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_, v_a_2864_, v_a_2865_);
if (lean_obj_tag(v___x_3165_) == 0)
{
lean_object* v_a_3166_; uint8_t v___x_3167_; 
v_a_3166_ = lean_ctor_get(v___x_3165_, 0);
lean_inc(v_a_3166_);
lean_dec_ref_known(v___x_3165_, 1);
v___x_3167_ = lean_unbox(v_a_3166_);
lean_dec(v_a_3166_);
if (v___x_3167_ == 0)
{
lean_del_object(v___x_2992_);
lean_dec(v_head_2989_);
v_cs_2853_ = v_tail_2990_;
goto _start;
}
else
{
lean_object* v_toCold_3169_; lean_object* v_options_3170_; uint8_t v_hasTrace_3171_; 
v_toCold_3169_ = lean_ctor_get(v_a_2864_, 0);
v_options_3170_ = lean_ctor_get(v_toCold_3169_, 2);
v_hasTrace_3171_ = lean_ctor_get_uint8(v_options_3170_, sizeof(void*)*1);
if (v_hasTrace_3171_ == 0)
{
v___y_3127_ = v_a_2856_;
v___y_3128_ = v_a_2857_;
v___y_3129_ = v_a_2858_;
v___y_3130_ = v_a_2859_;
v___y_3131_ = v_a_2860_;
v___y_3132_ = v_a_2861_;
v___y_3133_ = v_a_2862_;
v___y_3134_ = v_a_2863_;
v___y_3135_ = v_a_2864_;
v___y_3136_ = v_a_2865_;
goto v___jp_3126_;
}
else
{
lean_object* v_inheritedTraceOptions_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; uint8_t v___x_3175_; 
v_inheritedTraceOptions_3172_ = lean_ctor_get(v_toCold_3169_, 11);
v___x_3173_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__7));
v___x_3174_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__10);
v___x_3175_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3172_, v_options_3170_, v___x_3174_);
if (v___x_3175_ == 0)
{
v___y_3127_ = v_a_2856_;
v___y_3128_ = v_a_2857_;
v___y_3129_ = v_a_2858_;
v___y_3130_ = v_a_2859_;
v___y_3131_ = v_a_2860_;
v___y_3132_ = v_a_2861_;
v___y_3133_ = v_a_2862_;
v___y_3134_ = v_a_2863_;
v___y_3135_ = v_a_2864_;
v___y_3136_ = v_a_2865_;
goto v___jp_3126_;
}
else
{
lean_object* v___x_3176_; 
v___x_3176_ = l_Lean_Meta_Grind_updateLastTag(v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_, v_a_2864_, v_a_2865_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
lean_dec_ref_known(v___x_3176_, 1);
v___x_3177_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___closed__1);
v___x_3178_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v_head_2989_);
v___x_3179_ = l_Lean_MessageData_ofExpr(v___x_3178_);
v___x_3180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3177_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
v___x_3181_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg(v___x_3173_, v___x_3180_, v_a_2862_, v_a_2863_, v_a_2864_, v_a_2865_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_dec_ref_known(v___x_3181_, 1);
v___y_3127_ = v_a_2856_;
v___y_3128_ = v_a_2857_;
v___y_3129_ = v_a_2858_;
v___y_3130_ = v_a_2859_;
v___y_3131_ = v_a_2860_;
v___y_3132_ = v_a_2861_;
v___y_3133_ = v_a_2862_;
v___y_3134_ = v_a_2863_;
v___y_3135_ = v_a_2864_;
v___y_3136_ = v_a_2865_;
goto v___jp_3126_;
}
else
{
lean_object* v_a_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
lean_del_object(v___x_2992_);
lean_dec(v_tail_2990_);
lean_dec(v_head_2989_);
lean_dec(v_cs_x27_2855_);
lean_dec(v_c_x3f_2854_);
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3181_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3184_ = v___x_3181_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_a_3182_);
lean_dec(v___x_3181_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_a_3182_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
else
{
lean_object* v_a_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3197_; 
lean_del_object(v___x_2992_);
lean_dec(v_tail_2990_);
lean_dec(v_head_2989_);
lean_dec(v_cs_x27_2855_);
lean_dec(v_c_x3f_2854_);
v_a_3190_ = lean_ctor_get(v___x_3176_, 0);
v_isSharedCheck_3197_ = !lean_is_exclusive(v___x_3176_);
if (v_isSharedCheck_3197_ == 0)
{
v___x_3192_ = v___x_3176_;
v_isShared_3193_ = v_isSharedCheck_3197_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_a_3190_);
lean_dec(v___x_3176_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3197_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___x_3195_; 
if (v_isShared_3193_ == 0)
{
v___x_3195_ = v___x_3192_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v_a_3190_);
v___x_3195_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
return v___x_3195_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3205_; 
lean_del_object(v___x_2992_);
lean_dec(v_tail_2990_);
lean_dec(v_head_2989_);
lean_dec(v_cs_x27_2855_);
lean_dec(v_c_x3f_2854_);
v_a_3198_ = lean_ctor_get(v___x_3165_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3165_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3200_ = v___x_3165_;
v_isShared_3201_ = v_isSharedCheck_3205_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_a_3198_);
lean_dec(v___x_3165_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3205_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3203_; 
if (v_isShared_3201_ == 0)
{
v___x_3203_ = v___x_3200_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v_a_3198_);
v___x_3203_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
return v___x_3203_;
}
}
}
v___jp_2994_:
{
lean_object* v___x_3006_; 
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 1, v_cs_x27_2855_);
v___x_3006_ = v___x_2992_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_head_2989_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v_cs_x27_2855_);
v___x_3006_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
v_cs_2853_ = v_tail_2990_;
v_cs_x27_2855_ = v___x_3006_;
v_a_2856_ = v___y_2995_;
v_a_2857_ = v___y_2996_;
v_a_2858_ = v___y_2997_;
v_a_2859_ = v___y_2998_;
v_a_2860_ = v___y_2999_;
v_a_2861_ = v___y_3000_;
v_a_2862_ = v___y_3001_;
v_a_2863_ = v___y_3002_;
v_a_2864_ = v___y_3003_;
v_a_2865_ = v___y_3004_;
goto _start;
}
}
v___jp_3009_:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3024_, 0, v_head_2989_);
lean_ctor_set(v___x_3024_, 1, v___y_3012_);
lean_ctor_set_uint8(v___x_3024_, sizeof(void*)*2, v___y_3019_);
lean_ctor_set_uint8(v___x_3024_, sizeof(void*)*2 + 1, v___y_3020_);
v___x_3025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___y_3016_);
lean_ctor_set(v___x_3025_, 1, v_cs_x27_2855_);
v_cs_2853_ = v_tail_2990_;
v_c_x3f_2854_ = v___x_3024_;
v_cs_x27_2855_ = v___x_3025_;
v_a_2856_ = v___y_3021_;
v_a_2857_ = v___y_3010_;
v_a_2858_ = v___y_3017_;
v_a_2859_ = v___y_3018_;
v_a_2860_ = v___y_3023_;
v_a_2861_ = v___y_3011_;
v_a_2862_ = v___y_3013_;
v_a_2863_ = v___y_3015_;
v_a_2864_ = v___y_3014_;
v_a_2865_ = v___y_3022_;
goto _start;
}
v___jp_3027_:
{
lean_object* v___x_3043_; 
v___x_3043_ = l_Lean_Meta_Grind_SplitInfo_getGeneration___redArg(v_head_2989_, v___y_3039_);
if (lean_obj_tag(v___x_3043_) == 0)
{
lean_object* v_a_3044_; lean_object* v___x_3045_; 
v_a_3044_ = lean_ctor_get(v___x_3043_, 0);
lean_inc(v_a_3044_);
lean_dec_ref_known(v___x_3043_, 1);
v___x_3045_ = l_Lean_Meta_Grind_SplitInfo_getGeneration___redArg(v___y_3034_, v___y_3039_);
if (lean_obj_tag(v___x_3045_) == 0)
{
lean_object* v_a_3046_; uint8_t v___x_3047_; 
v_a_3046_ = lean_ctor_get(v___x_3045_, 0);
lean_inc(v_a_3046_);
lean_dec_ref_known(v___x_3045_, 1);
v___x_3047_ = lean_nat_dec_lt(v_a_3044_, v_a_3046_);
lean_dec(v_a_3046_);
lean_dec(v_a_3044_);
if (v___x_3047_ == 0)
{
uint8_t v___x_3048_; 
v___x_3048_ = lean_nat_dec_lt(v___y_3030_, v___y_3041_);
lean_dec(v___y_3041_);
if (v___x_3048_ == 0)
{
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3030_);
v___y_2995_ = v___y_3039_;
v___y_2996_ = v___y_3028_;
v___y_2997_ = v___y_3035_;
v___y_2998_ = v___y_3036_;
v___y_2999_ = v___y_3042_;
v___y_3000_ = v___y_3029_;
v___y_3001_ = v___y_3031_;
v___y_3002_ = v___y_3033_;
v___y_3003_ = v___y_3032_;
v___y_3004_ = v___y_3040_;
goto v___jp_2994_;
}
else
{
lean_del_object(v___x_2992_);
lean_dec(v_c_x3f_2854_);
v___y_3010_ = v___y_3028_;
v___y_3011_ = v___y_3029_;
v___y_3012_ = v___y_3030_;
v___y_3013_ = v___y_3031_;
v___y_3014_ = v___y_3032_;
v___y_3015_ = v___y_3033_;
v___y_3016_ = v___y_3034_;
v___y_3017_ = v___y_3035_;
v___y_3018_ = v___y_3036_;
v___y_3019_ = v___y_3038_;
v___y_3020_ = v___y_3037_;
v___y_3021_ = v___y_3039_;
v___y_3022_ = v___y_3040_;
v___y_3023_ = v___y_3042_;
goto v___jp_3009_;
}
}
else
{
lean_dec(v___y_3041_);
lean_del_object(v___x_2992_);
lean_dec(v_c_x3f_2854_);
v___y_3010_ = v___y_3028_;
v___y_3011_ = v___y_3029_;
v___y_3012_ = v___y_3030_;
v___y_3013_ = v___y_3031_;
v___y_3014_ = v___y_3032_;
v___y_3015_ = v___y_3033_;
v___y_3016_ = v___y_3034_;
v___y_3017_ = v___y_3035_;
v___y_3018_ = v___y_3036_;
v___y_3019_ = v___y_3038_;
v___y_3020_ = v___y_3037_;
v___y_3021_ = v___y_3039_;
v___y_3022_ = v___y_3040_;
v___y_3023_ = v___y_3042_;
goto v___jp_3009_;
}
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_dec(v_a_3044_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3030_);
lean_del_object(v___x_2992_);
lean_dec(v_tail_2990_);
lean_dec(v_head_2989_);
lean_dec(v_cs_x27_2855_);
lean_dec(v_c_x3f_2854_);
v_a_3049_ = lean_ctor_get(v___x_3045_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3051_ = v___x_3045_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_3045_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3030_);
lean_del_object(v___x_2992_);
lean_dec(v_tail_2990_);
lean_dec(v_head_2989_);
lean_dec(v_cs_x27_2855_);
lean_dec(v_c_x3f_2854_);
v_a_3057_ = lean_ctor_get(v___x_3043_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3043_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_3043_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_3043_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
v___jp_3065_:
{
lean_object* v___x_3081_; uint8_t v___x_3082_; 
v___x_3081_ = lean_unsigned_to_nat(1u);
v___x_3082_ = lean_nat_dec_lt(v___x_3081_, v___y_3080_);
if (v___x_3082_ == 0)
{
v___y_3028_ = v___y_3066_;
v___y_3029_ = v___y_3067_;
v___y_3030_ = v___y_3068_;
v___y_3031_ = v___y_3069_;
v___y_3032_ = v___y_3070_;
v___y_3033_ = v___y_3071_;
v___y_3034_ = v___y_3072_;
v___y_3035_ = v___y_3073_;
v___y_3036_ = v___y_3074_;
v___y_3037_ = v___y_3076_;
v___y_3038_ = v___y_3077_;
v___y_3039_ = v___y_3075_;
v___y_3040_ = v___y_3078_;
v___y_3041_ = v___y_3080_;
v___y_3042_ = v___y_3079_;
goto v___jp_3027_;
}
else
{
lean_dec(v___y_3080_);
lean_del_object(v___x_2992_);
lean_dec(v_c_x3f_2854_);
v___y_3010_ = v___y_3066_;
v___y_3011_ = v___y_3067_;
v___y_3012_ = v___y_3068_;
v___y_3013_ = v___y_3069_;
v___y_3014_ = v___y_3070_;
v___y_3015_ = v___y_3071_;
v___y_3016_ = v___y_3072_;
v___y_3017_ = v___y_3073_;
v___y_3018_ = v___y_3074_;
v___y_3019_ = v___y_3077_;
v___y_3020_ = v___y_3076_;
v___y_3021_ = v___y_3075_;
v___y_3022_ = v___y_3078_;
v___y_3023_ = v___y_3079_;
goto v___jp_3009_;
}
}
v___jp_3083_:
{
lean_object* v___x_3100_; uint8_t v___x_3101_; 
v___x_3100_ = lean_unsigned_to_nat(1u);
v___x_3101_ = lean_nat_dec_eq(v___y_3086_, v___x_3100_);
if (v___x_3101_ == 0)
{
v___y_3028_ = v___y_3084_;
v___y_3029_ = v___y_3085_;
v___y_3030_ = v___y_3086_;
v___y_3031_ = v___y_3087_;
v___y_3032_ = v___y_3088_;
v___y_3033_ = v___y_3089_;
v___y_3034_ = v___y_3090_;
v___y_3035_ = v___y_3091_;
v___y_3036_ = v___y_3092_;
v___y_3037_ = v___y_3093_;
v___y_3038_ = v___y_3094_;
v___y_3039_ = v___y_3095_;
v___y_3040_ = v___y_3096_;
v___y_3041_ = v___y_3098_;
v___y_3042_ = v___y_3097_;
goto v___jp_3027_;
}
else
{
if (v___y_3094_ == 0)
{
v___y_3066_ = v___y_3084_;
v___y_3067_ = v___y_3085_;
v___y_3068_ = v___y_3086_;
v___y_3069_ = v___y_3087_;
v___y_3070_ = v___y_3088_;
v___y_3071_ = v___y_3089_;
v___y_3072_ = v___y_3090_;
v___y_3073_ = v___y_3091_;
v___y_3074_ = v___y_3092_;
v___y_3075_ = v___y_3095_;
v___y_3076_ = v___y_3093_;
v___y_3077_ = v___y_3094_;
v___y_3078_ = v___y_3096_;
v___y_3079_ = v___y_3097_;
v___y_3080_ = v___y_3098_;
goto v___jp_3065_;
}
else
{
if (v___y_3099_ == 0)
{
v___y_3028_ = v___y_3084_;
v___y_3029_ = v___y_3085_;
v___y_3030_ = v___y_3086_;
v___y_3031_ = v___y_3087_;
v___y_3032_ = v___y_3088_;
v___y_3033_ = v___y_3089_;
v___y_3034_ = v___y_3090_;
v___y_3035_ = v___y_3091_;
v___y_3036_ = v___y_3092_;
v___y_3037_ = v___y_3093_;
v___y_3038_ = v___y_3094_;
v___y_3039_ = v___y_3095_;
v___y_3040_ = v___y_3096_;
v___y_3041_ = v___y_3098_;
v___y_3042_ = v___y_3097_;
goto v___jp_3027_;
}
else
{
v___y_3066_ = v___y_3084_;
v___y_3067_ = v___y_3085_;
v___y_3068_ = v___y_3086_;
v___y_3069_ = v___y_3087_;
v___y_3070_ = v___y_3088_;
v___y_3071_ = v___y_3089_;
v___y_3072_ = v___y_3090_;
v___y_3073_ = v___y_3091_;
v___y_3074_ = v___y_3092_;
v___y_3075_ = v___y_3095_;
v___y_3076_ = v___y_3093_;
v___y_3077_ = v___y_3094_;
v___y_3078_ = v___y_3096_;
v___y_3079_ = v___y_3097_;
v___y_3080_ = v___y_3098_;
goto v___jp_3065_;
}
}
}
}
v___jp_3102_:
{
if (lean_obj_tag(v_c_x3f_2854_) == 0)
{
lean_object* v___x_3117_; 
lean_del_object(v___x_2992_);
v___x_3117_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3117_, 0, v_head_2989_);
lean_ctor_set(v___x_3117_, 1, v___y_3105_);
lean_ctor_set_uint8(v___x_3117_, sizeof(void*)*2, v___y_3111_);
lean_ctor_set_uint8(v___x_3117_, sizeof(void*)*2 + 1, v___y_3112_);
v_cs_2853_ = v_tail_2990_;
v_c_x3f_2854_ = v___x_3117_;
v_a_2856_ = v___y_3113_;
v_a_2857_ = v___y_3103_;
v_a_2858_ = v___y_3109_;
v_a_2859_ = v___y_3110_;
v_a_2860_ = v___y_3115_;
v_a_2861_ = v___y_3104_;
v_a_2862_ = v___y_3106_;
v_a_2863_ = v___y_3108_;
v_a_2864_ = v___y_3107_;
v_a_2865_ = v___y_3114_;
goto _start;
}
else
{
uint8_t v_tryPostpone_3119_; 
v_tryPostpone_3119_ = lean_ctor_get_uint8(v_c_x3f_2854_, sizeof(void*)*2 + 1);
if (v_tryPostpone_3119_ == 0)
{
if (v___y_3112_ == 0)
{
lean_object* v_c_3120_; lean_object* v_numCases_3121_; 
v_c_3120_ = lean_ctor_get(v_c_x3f_2854_, 0);
v_numCases_3121_ = lean_ctor_get(v_c_x3f_2854_, 1);
lean_inc(v_numCases_3121_);
lean_inc_ref(v_c_3120_);
v___y_3084_ = v___y_3103_;
v___y_3085_ = v___y_3104_;
v___y_3086_ = v___y_3105_;
v___y_3087_ = v___y_3106_;
v___y_3088_ = v___y_3107_;
v___y_3089_ = v___y_3108_;
v___y_3090_ = v_c_3120_;
v___y_3091_ = v___y_3109_;
v___y_3092_ = v___y_3110_;
v___y_3093_ = v___y_3112_;
v___y_3094_ = v___y_3111_;
v___y_3095_ = v___y_3113_;
v___y_3096_ = v___y_3114_;
v___y_3097_ = v___y_3115_;
v___y_3098_ = v_numCases_3121_;
v___y_3099_ = v___y_3112_;
goto v___jp_3083_;
}
else
{
lean_dec(v___y_3105_);
v___y_2995_ = v___y_3113_;
v___y_2996_ = v___y_3103_;
v___y_2997_ = v___y_3109_;
v___y_2998_ = v___y_3110_;
v___y_2999_ = v___y_3115_;
v___y_3000_ = v___y_3104_;
v___y_3001_ = v___y_3106_;
v___y_3002_ = v___y_3108_;
v___y_3003_ = v___y_3107_;
v___y_3004_ = v___y_3114_;
goto v___jp_2994_;
}
}
else
{
if (v___y_3112_ == 0)
{
lean_object* v_c_3122_; 
lean_del_object(v___x_2992_);
v_c_3122_ = lean_ctor_get(v_c_x3f_2854_, 0);
lean_inc_ref(v_c_3122_);
lean_dec_ref_known(v_c_x3f_2854_, 2);
v___y_3010_ = v___y_3103_;
v___y_3011_ = v___y_3104_;
v___y_3012_ = v___y_3105_;
v___y_3013_ = v___y_3106_;
v___y_3014_ = v___y_3107_;
v___y_3015_ = v___y_3108_;
v___y_3016_ = v_c_3122_;
v___y_3017_ = v___y_3109_;
v___y_3018_ = v___y_3110_;
v___y_3019_ = v___y_3111_;
v___y_3020_ = v___y_3112_;
v___y_3021_ = v___y_3113_;
v___y_3022_ = v___y_3114_;
v___y_3023_ = v___y_3115_;
goto v___jp_3009_;
}
else
{
if (v___y_3116_ == 0)
{
lean_object* v_c_3123_; lean_object* v_numCases_3124_; 
v_c_3123_ = lean_ctor_get(v_c_x3f_2854_, 0);
v_numCases_3124_ = lean_ctor_get(v_c_x3f_2854_, 1);
lean_inc(v_numCases_3124_);
lean_inc_ref(v_c_3123_);
v___y_3084_ = v___y_3103_;
v___y_3085_ = v___y_3104_;
v___y_3086_ = v___y_3105_;
v___y_3087_ = v___y_3106_;
v___y_3088_ = v___y_3107_;
v___y_3089_ = v___y_3108_;
v___y_3090_ = v_c_3123_;
v___y_3091_ = v___y_3109_;
v___y_3092_ = v___y_3110_;
v___y_3093_ = v___y_3112_;
v___y_3094_ = v___y_3111_;
v___y_3095_ = v___y_3113_;
v___y_3096_ = v___y_3114_;
v___y_3097_ = v___y_3115_;
v___y_3098_ = v_numCases_3124_;
v___y_3099_ = v___y_3116_;
goto v___jp_3083_;
}
else
{
lean_object* v_c_3125_; 
lean_del_object(v___x_2992_);
v_c_3125_ = lean_ctor_get(v_c_x3f_2854_, 0);
lean_inc_ref(v_c_3125_);
lean_dec_ref_known(v_c_x3f_2854_, 2);
v___y_3010_ = v___y_3103_;
v___y_3011_ = v___y_3104_;
v___y_3012_ = v___y_3105_;
v___y_3013_ = v___y_3106_;
v___y_3014_ = v___y_3107_;
v___y_3015_ = v___y_3108_;
v___y_3016_ = v_c_3125_;
v___y_3017_ = v___y_3109_;
v___y_3018_ = v___y_3110_;
v___y_3019_ = v___y_3111_;
v___y_3020_ = v___y_3112_;
v___y_3021_ = v___y_3113_;
v___y_3022_ = v___y_3114_;
v___y_3023_ = v___y_3115_;
goto v___jp_3009_;
}
}
}
}
}
v___jp_3126_:
{
lean_object* v___x_3137_; 
lean_inc(v_head_2989_);
v___x_3137_ = l_Lean_Meta_Grind_checkSplitStatus(v_head_2989_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3137_, 1);
switch(lean_obj_tag(v_a_3138_))
{
case 0:
{
lean_del_object(v___x_2992_);
lean_dec(v_head_2989_);
v_cs_2853_ = v_tail_2990_;
v_a_2856_ = v___y_3127_;
v_a_2857_ = v___y_3128_;
v_a_2858_ = v___y_3129_;
v_a_2859_ = v___y_3130_;
v_a_2860_ = v___y_3131_;
v_a_2861_ = v___y_3132_;
v_a_2862_ = v___y_3133_;
v_a_2863_ = v___y_3134_;
v_a_2864_ = v___y_3135_;
v_a_2865_ = v___y_3136_;
goto _start;
}
case 1:
{
v___y_2995_ = v___y_3127_;
v___y_2996_ = v___y_3128_;
v___y_2997_ = v___y_3129_;
v___y_2998_ = v___y_3130_;
v___y_2999_ = v___y_3131_;
v___y_3000_ = v___y_3132_;
v___y_3001_ = v___y_3133_;
v___y_3002_ = v___y_3134_;
v___y_3003_ = v___y_3135_;
v___y_3004_ = v___y_3136_;
goto v___jp_2994_;
}
default: 
{
lean_object* v_numCases_3140_; uint8_t v_isRec_3141_; uint8_t v_tryPostpone_3142_; lean_object* v___x_3143_; 
v_numCases_3140_ = lean_ctor_get(v_a_3138_, 0);
lean_inc(v_numCases_3140_);
v_isRec_3141_ = lean_ctor_get_uint8(v_a_3138_, sizeof(void*)*1);
v_tryPostpone_3142_ = lean_ctor_get_uint8(v_a_3138_, sizeof(void*)*1 + 1);
lean_dec_ref_known(v_a_3138_, 1);
v___x_3143_ = l_Lean_Meta_Grind_cheapCasesOnly___redArg(v___y_3129_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; uint8_t v___x_3145_; 
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3143_, 1);
v___x_3145_ = lean_unbox(v_a_3144_);
if (v___x_3145_ == 0)
{
uint8_t v___x_3146_; 
v___x_3146_ = lean_unbox(v_a_3144_);
lean_dec(v_a_3144_);
v___y_3103_ = v___y_3128_;
v___y_3104_ = v___y_3132_;
v___y_3105_ = v_numCases_3140_;
v___y_3106_ = v___y_3133_;
v___y_3107_ = v___y_3135_;
v___y_3108_ = v___y_3134_;
v___y_3109_ = v___y_3129_;
v___y_3110_ = v___y_3130_;
v___y_3111_ = v_isRec_3141_;
v___y_3112_ = v_tryPostpone_3142_;
v___y_3113_ = v___y_3127_;
v___y_3114_ = v___y_3136_;
v___y_3115_ = v___y_3131_;
v___y_3116_ = v___x_3146_;
goto v___jp_3102_;
}
else
{
lean_object* v___x_3147_; uint8_t v___x_3148_; 
lean_dec(v_a_3144_);
v___x_3147_ = lean_unsigned_to_nat(1u);
v___x_3148_ = lean_nat_dec_lt(v___x_3147_, v_numCases_3140_);
if (v___x_3148_ == 0)
{
v___y_3103_ = v___y_3128_;
v___y_3104_ = v___y_3132_;
v___y_3105_ = v_numCases_3140_;
v___y_3106_ = v___y_3133_;
v___y_3107_ = v___y_3135_;
v___y_3108_ = v___y_3134_;
v___y_3109_ = v___y_3129_;
v___y_3110_ = v___y_3130_;
v___y_3111_ = v_isRec_3141_;
v___y_3112_ = v_tryPostpone_3142_;
v___y_3113_ = v___y_3127_;
v___y_3114_ = v___y_3136_;
v___y_3115_ = v___y_3131_;
v___y_3116_ = v___x_3148_;
goto v___jp_3102_;
}
else
{
lean_dec(v_numCases_3140_);
v___y_2995_ = v___y_3127_;
v___y_2996_ = v___y_3128_;
v___y_2997_ = v___y_3129_;
v___y_2998_ = v___y_3130_;
v___y_2999_ = v___y_3131_;
v___y_3000_ = v___y_3132_;
v___y_3001_ = v___y_3133_;
v___y_3002_ = v___y_3134_;
v___y_3003_ = v___y_3135_;
v___y_3004_ = v___y_3136_;
goto v___jp_2994_;
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v_numCases_3140_);
lean_del_object(v___x_2992_);
lean_dec(v_tail_2990_);
lean_dec(v_head_2989_);
lean_dec(v_cs_x27_2855_);
lean_dec(v_c_x3f_2854_);
v_a_3149_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3143_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3143_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
lean_del_object(v___x_2992_);
lean_dec(v_tail_2990_);
lean_dec(v_head_2989_);
lean_dec(v_cs_x27_2855_);
lean_dec(v_c_x3f_2854_);
v_a_3157_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3159_ = v___x_3137_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3137_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go___boxed(lean_object* v_cs_3207_, lean_object* v_c_x3f_3208_, lean_object* v_cs_x27_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_, lean_object* v_a_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_){
_start:
{
lean_object* v_res_3221_; 
v_res_3221_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go(v_cs_3207_, v_c_x3f_3208_, v_cs_x27_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_, v_a_3215_, v_a_3216_, v_a_3217_, v_a_3218_, v_a_3219_);
lean_dec(v_a_3219_);
lean_dec_ref(v_a_3218_);
lean_dec(v_a_3217_);
lean_dec_ref(v_a_3216_);
lean_dec(v_a_3215_);
lean_dec_ref(v_a_3214_);
lean_dec(v_a_3213_);
lean_dec_ref(v_a_3212_);
lean_dec(v_a_3211_);
lean_dec(v_a_3210_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f(lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_){
_start:
{
lean_object* v___x_3236_; 
v___x_3236_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_3222_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; uint8_t v___x_3238_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc(v_a_3237_);
lean_dec_ref_known(v___x_3236_, 1);
v___x_3238_ = lean_unbox(v_a_3237_);
lean_dec(v_a_3237_);
if (v___x_3238_ == 0)
{
lean_object* v___x_3239_; 
v___x_3239_ = l_Lean_Meta_Grind_checkMaxCaseSplit___redArg(v_a_3224_, v_a_3225_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; uint8_t v___x_3241_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref_known(v___x_3239_, 1);
v___x_3241_ = lean_unbox(v_a_3240_);
lean_dec(v_a_3240_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v_toGoalState_3243_; lean_object* v_split_3244_; lean_object* v_candidates_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3242_ = lean_st_ref_get(v_a_3222_);
v_toGoalState_3243_ = lean_ctor_get(v___x_3242_, 0);
lean_inc_ref(v_toGoalState_3243_);
lean_dec(v___x_3242_);
v_split_3244_ = lean_ctor_get(v_toGoalState_3243_, 16);
lean_inc_ref(v_split_3244_);
lean_dec_ref(v_toGoalState_3243_);
v_candidates_3245_ = lean_ctor_get(v_split_3244_, 0);
lean_inc(v_candidates_3245_);
lean_dec_ref(v_split_3244_);
v___x_3246_ = lean_box(0);
v___x_3247_ = lean_box(0);
v___x_3248_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f_go(v_candidates_3245_, v___x_3246_, v___x_3247_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_, v_a_3231_);
return v___x_3248_;
}
else
{
goto v___jp_3233_;
}
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
v_a_3249_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3239_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3239_);
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
else
{
goto v___jp_3233_;
}
}
else
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3264_; 
v_a_3257_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3264_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3259_ = v___x_3236_;
v_isShared_3260_ = v_isSharedCheck_3264_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v___x_3236_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3264_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3262_; 
if (v_isShared_3260_ == 0)
{
v___x_3262_ = v___x_3259_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3263_; 
v_reuseFailAlloc_3263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3263_, 0, v_a_3257_);
v___x_3262_ = v_reuseFailAlloc_3263_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
return v___x_3262_;
}
}
}
v___jp_3233_:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = lean_box(0);
v___x_3235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3234_);
return v___x_3235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f___boxed(lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f(v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_, v_a_3269_, v_a_3270_, v_a_3271_, v_a_3272_, v_a_3273_, v_a_3274_);
lean_dec(v_a_3274_);
lean_dec_ref(v_a_3273_);
lean_dec(v_a_3272_);
lean_dec_ref(v_a_3271_);
lean_dec(v_a_3270_);
lean_dec_ref(v_a_3269_);
lean_dec(v_a_3268_);
lean_dec_ref(v_a_3267_);
lean_dec(v_a_3266_);
lean_dec(v_a_3265_);
return v_res_3276_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__4(void){
_start:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3284_ = lean_box(0);
v___x_3285_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__3));
v___x_3286_ = l_Lean_mkConst(v___x_3285_, v___x_3284_);
return v___x_3286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM(lean_object* v_c_3287_){
_start:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3288_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__4, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM___closed__4);
v___x_3289_ = l_Lean_Expr_app___override(v___x_3288_, v_c_3287_);
return v___x_3289_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__4(void){
_start:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3298_ = lean_box(0);
v___x_3299_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__3));
v___x_3300_ = l_Lean_mkConst(v___x_3299_, v___x_3298_);
return v___x_3300_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__7(void){
_start:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3306_ = lean_box(0);
v___x_3307_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__6));
v___x_3308_ = l_Lean_mkConst(v___x_3307_, v___x_3306_);
return v___x_3308_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__10(void){
_start:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3314_ = lean_box(0);
v___x_3315_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__9));
v___x_3316_ = l_Lean_mkConst(v___x_3315_, v___x_3314_);
return v___x_3316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor(lean_object* v_c_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___x_3391_; 
lean_inc_ref(v_c_3317_);
v___x_3391_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_c_3317_, v_a_3325_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3464_; 
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3394_ = v___x_3391_;
v_isShared_3395_ = v_isSharedCheck_3464_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3391_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3464_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3396_; uint8_t v___x_3397_; 
v___x_3396_ = l_Lean_Expr_cleanupAnnotations(v_a_3392_);
lean_dec(v_a_3392_);
v___x_3397_ = l_Lean_Expr_isApp(v___x_3396_);
if (v___x_3397_ == 0)
{
lean_dec_ref(v___x_3396_);
lean_del_object(v___x_3394_);
v___y_3338_ = v_a_3318_;
v___y_3339_ = v_a_3319_;
v___y_3340_ = v_a_3320_;
v___y_3341_ = v_a_3321_;
v___y_3342_ = v_a_3322_;
v___y_3343_ = v_a_3323_;
v___y_3344_ = v_a_3324_;
v___y_3345_ = v_a_3325_;
v___y_3346_ = v_a_3326_;
v___y_3347_ = v_a_3327_;
goto v___jp_3337_;
}
else
{
lean_object* v_arg_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
v_arg_3398_ = lean_ctor_get(v___x_3396_, 1);
lean_inc_ref(v_arg_3398_);
v___x_3399_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3396_);
lean_dec_ref(v___x_3396_);
v___x_3400_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__1));
v___x_3401_ = l_Lean_Expr_isConstOf(v___x_3399_, v___x_3400_);
if (v___x_3401_ == 0)
{
uint8_t v___x_3402_; 
v___x_3402_ = l_Lean_Expr_isApp(v___x_3399_);
if (v___x_3402_ == 0)
{
lean_dec_ref(v___x_3399_);
lean_dec_ref(v_arg_3398_);
lean_del_object(v___x_3394_);
v___y_3338_ = v_a_3318_;
v___y_3339_ = v_a_3319_;
v___y_3340_ = v_a_3320_;
v___y_3341_ = v_a_3321_;
v___y_3342_ = v_a_3322_;
v___y_3343_ = v_a_3323_;
v___y_3344_ = v_a_3324_;
v___y_3345_ = v_a_3325_;
v___y_3346_ = v_a_3326_;
v___y_3347_ = v_a_3327_;
goto v___jp_3337_;
}
else
{
lean_object* v_arg_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; uint8_t v___x_3406_; 
v_arg_3403_ = lean_ctor_get(v___x_3399_, 1);
lean_inc_ref(v_arg_3403_);
v___x_3404_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3399_);
lean_dec_ref(v___x_3399_);
v___x_3405_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__14));
v___x_3406_ = l_Lean_Expr_isConstOf(v___x_3404_, v___x_3405_);
if (v___x_3406_ == 0)
{
uint8_t v___x_3407_; 
v___x_3407_ = l_Lean_Expr_isApp(v___x_3404_);
if (v___x_3407_ == 0)
{
lean_dec_ref(v___x_3404_);
lean_dec_ref(v_arg_3403_);
lean_dec_ref(v_arg_3398_);
lean_del_object(v___x_3394_);
v___y_3338_ = v_a_3318_;
v___y_3339_ = v_a_3319_;
v___y_3340_ = v_a_3320_;
v___y_3341_ = v_a_3321_;
v___y_3342_ = v_a_3322_;
v___y_3343_ = v_a_3323_;
v___y_3344_ = v_a_3324_;
v___y_3345_ = v_a_3325_;
v___y_3346_ = v_a_3326_;
v___y_3347_ = v_a_3327_;
goto v___jp_3337_;
}
else
{
lean_object* v___x_3408_; lean_object* v___x_3409_; uint8_t v___x_3410_; 
v___x_3408_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3404_);
lean_dec_ref(v___x_3404_);
v___x_3409_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus___closed__18));
v___x_3410_ = l_Lean_Expr_isConstOf(v___x_3408_, v___x_3409_);
lean_dec_ref(v___x_3408_);
if (v___x_3410_ == 0)
{
lean_dec_ref(v_arg_3403_);
lean_dec_ref(v_arg_3398_);
lean_del_object(v___x_3394_);
v___y_3338_ = v_a_3318_;
v___y_3339_ = v_a_3319_;
v___y_3340_ = v_a_3320_;
v___y_3341_ = v_a_3321_;
v___y_3342_ = v_a_3322_;
v___y_3343_ = v_a_3323_;
v___y_3344_ = v_a_3324_;
v___y_3345_ = v_a_3325_;
v___y_3346_ = v_a_3326_;
v___y_3347_ = v_a_3327_;
goto v___jp_3337_;
}
else
{
uint8_t v___x_3411_; 
v___x_3411_ = l_Lean_Meta_Grind_isMorallyIff(v_c_3317_);
if (v___x_3411_ == 0)
{
lean_object* v___x_3412_; lean_object* v___x_3414_; 
lean_dec_ref(v_arg_3403_);
lean_dec_ref(v_arg_3398_);
v___x_3412_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM(v_c_3317_);
if (v_isShared_3395_ == 0)
{
lean_ctor_set(v___x_3394_, 0, v___x_3412_);
v___x_3414_ = v___x_3394_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3412_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
else
{
lean_object* v___x_3416_; 
lean_del_object(v___x_3394_);
lean_inc_ref(v_c_3317_);
v___x_3416_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_c_3317_, v_a_3318_, v_a_3322_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; uint8_t v___x_3418_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3416_, 1);
v___x_3418_ = lean_unbox(v_a_3417_);
lean_dec(v_a_3417_);
if (v___x_3418_ == 0)
{
lean_object* v___x_3419_; 
v___x_3419_ = l_Lean_Meta_Grind_mkEqFalseProof(v_c_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3429_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3422_ = v___x_3419_;
v_isShared_3423_ = v_isSharedCheck_3429_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3419_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3429_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3427_; 
v___x_3424_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__4, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__4);
v___x_3425_ = l_Lean_mkApp3(v___x_3424_, v_arg_3403_, v_arg_3398_, v_a_3420_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v___x_3425_);
v___x_3427_ = v___x_3422_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v___x_3425_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
else
{
lean_dec_ref(v_arg_3403_);
lean_dec_ref(v_arg_3398_);
return v___x_3419_;
}
}
else
{
lean_object* v___x_3430_; 
v___x_3430_ = l_Lean_Meta_Grind_mkEqTrueProof(v_c_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3440_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3433_ = v___x_3430_;
v_isShared_3434_ = v_isSharedCheck_3440_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3440_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3438_; 
v___x_3435_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__7, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__7);
v___x_3436_ = l_Lean_mkApp3(v___x_3435_, v_arg_3403_, v_arg_3398_, v_a_3431_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3436_);
v___x_3438_ = v___x_3433_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v___x_3436_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
else
{
lean_dec_ref(v_arg_3403_);
lean_dec_ref(v_arg_3398_);
return v___x_3430_;
}
}
}
else
{
lean_object* v_a_3441_; lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3448_; 
lean_dec_ref(v_arg_3403_);
lean_dec_ref(v_arg_3398_);
lean_dec_ref(v_c_3317_);
v_a_3441_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3443_ = v___x_3416_;
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
else
{
lean_inc(v_a_3441_);
lean_dec(v___x_3416_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3446_; 
if (v_isShared_3444_ == 0)
{
v___x_3446_ = v___x_3443_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_a_3441_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
return v___x_3446_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3449_; 
lean_dec_ref(v___x_3404_);
lean_del_object(v___x_3394_);
v___x_3449_ = l_Lean_Meta_Grind_mkEqFalseProof(v_c_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_a_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3459_; 
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3452_ = v___x_3449_;
v_isShared_3453_ = v_isSharedCheck_3459_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_a_3450_);
lean_dec(v___x_3449_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3459_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3457_; 
v___x_3454_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__10, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___closed__10);
v___x_3455_ = l_Lean_mkApp3(v___x_3454_, v_arg_3403_, v_arg_3398_, v_a_3450_);
if (v_isShared_3453_ == 0)
{
lean_ctor_set(v___x_3452_, 0, v___x_3455_);
v___x_3457_ = v___x_3452_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v___x_3455_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
else
{
lean_dec_ref(v_arg_3403_);
lean_dec_ref(v_arg_3398_);
return v___x_3449_;
}
}
}
}
else
{
lean_object* v___x_3460_; lean_object* v___x_3462_; 
lean_dec_ref(v___x_3399_);
lean_dec_ref(v_c_3317_);
v___x_3460_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM(v_arg_3398_);
if (v_isShared_3395_ == 0)
{
lean_ctor_set(v___x_3394_, 0, v___x_3460_);
v___x_3462_ = v___x_3394_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3460_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
}
}
else
{
lean_dec_ref(v_c_3317_);
return v___x_3391_;
}
v___jp_3329_:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3330_ = lean_unsigned_to_nat(1u);
v___x_3331_ = l_Lean_Expr_getAppNumArgs(v_c_3317_);
v___x_3332_ = lean_nat_sub(v___x_3331_, v___x_3330_);
lean_dec(v___x_3331_);
v___x_3333_ = lean_nat_sub(v___x_3332_, v___x_3330_);
lean_dec(v___x_3332_);
v___x_3334_ = l_Lean_Expr_getRevArg_x21(v_c_3317_, v___x_3333_);
lean_dec_ref(v_c_3317_);
v___x_3335_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM(v___x_3334_);
v___x_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
return v___x_3336_;
}
v___jp_3337_:
{
uint8_t v___x_3348_; 
v___x_3348_ = l_Lean_Meta_Grind_isCond(v_c_3317_);
if (v___x_3348_ == 0)
{
uint8_t v___x_3349_; 
v___x_3349_ = l_Lean_Meta_Grind_isIte(v_c_3317_);
if (v___x_3349_ == 0)
{
uint8_t v___x_3350_; 
v___x_3350_ = l_Lean_Meta_Grind_isDIte(v_c_3317_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; 
lean_inc_ref(v_c_3317_);
v___x_3351_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_c_3317_, v___y_3338_, v___y_3342_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3370_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3370_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3354_ = v___x_3351_;
v_isShared_3355_ = v_isSharedCheck_3370_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3351_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3370_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
uint8_t v___x_3356_; 
v___x_3356_ = lean_unbox(v_a_3352_);
lean_dec(v_a_3352_);
if (v___x_3356_ == 0)
{
lean_object* v___x_3358_; 
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 0, v_c_3317_);
v___x_3358_ = v___x_3354_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_c_3317_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
else
{
lean_object* v___x_3360_; 
lean_del_object(v___x_3354_);
lean_inc_ref(v_c_3317_);
v___x_3360_ = l_Lean_Meta_Grind_mkEqTrueProof(v_c_3317_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3369_; 
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3363_ = v___x_3360_;
v_isShared_3364_ = v_isSharedCheck_3369_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3360_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3369_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3365_; lean_object* v___x_3367_; 
v___x_3365_ = l_Lean_Meta_mkOfEqTrueCore(v_c_3317_, v_a_3361_);
if (v_isShared_3364_ == 0)
{
lean_ctor_set(v___x_3363_, 0, v___x_3365_);
v___x_3367_ = v___x_3363_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v___x_3365_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
else
{
lean_dec_ref(v_c_3317_);
return v___x_3360_;
}
}
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_dec_ref(v_c_3317_);
v_a_3371_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3351_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3351_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
else
{
goto v___jp_3329_;
}
}
else
{
goto v___jp_3329_;
}
}
else
{
lean_object* v___x_3379_; 
v___x_3379_ = l_Lean_Meta_Grind_condCondition(v_c_3317_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; lean_object* v___x_3381_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
v___x_3381_ = l_Lean_Meta_Sym_shareCommon(v_a_3380_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3390_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3384_ = v___x_3381_;
v_isShared_3385_ = v_isSharedCheck_3390_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3381_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3390_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3386_; lean_object* v___x_3388_; 
v___x_3386_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM(v_a_3382_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3386_);
v___x_3388_ = v___x_3384_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v___x_3386_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
return v___x_3388_;
}
}
}
else
{
return v___x_3381_;
}
}
else
{
return v___x_3379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor___boxed(lean_object* v_c_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_, lean_object* v_a_3476_){
_start:
{
lean_object* v_res_3477_; 
v_res_3477_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor(v_c_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
lean_dec(v_a_3475_);
lean_dec_ref(v_a_3474_);
lean_dec(v_a_3473_);
lean_dec_ref(v_a_3472_);
lean_dec(v_a_3471_);
lean_dec_ref(v_a_3470_);
lean_dec(v_a_3469_);
lean_dec_ref(v_a_3468_);
lean_dec(v_a_3467_);
lean_dec(v_a_3466_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___redArg(lean_object* v_mvarId_3478_, lean_object* v_major_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_){
_start:
{
lean_object* v___x_3487_; 
v___x_3487_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_3480_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v_a_3488_; uint8_t v_trace_3489_; 
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3488_);
lean_dec_ref_known(v___x_3487_, 1);
v_trace_3489_ = lean_ctor_get_uint8(v_a_3488_, sizeof(void*)*18);
lean_dec(v_a_3488_);
if (v_trace_3489_ == 0)
{
lean_object* v___x_3490_; 
v___x_3490_ = l_Lean_Meta_Grind_cases(v_mvarId_3478_, v_major_3479_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_);
return v___x_3490_;
}
else
{
lean_object* v___x_3491_; 
lean_inc(v_a_3485_);
lean_inc_ref(v_a_3484_);
lean_inc(v_a_3483_);
lean_inc_ref(v_a_3482_);
lean_inc_ref(v_major_3479_);
v___x_3491_ = lean_infer_type(v_major_3479_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; lean_object* v___x_3493_; 
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v___x_3493_ = l_Lean_Meta_whnfD(v_a_3492_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_);
if (lean_obj_tag(v___x_3493_) == 0)
{
lean_object* v_a_3494_; lean_object* v___x_3495_; 
v_a_3494_ = lean_ctor_get(v___x_3493_, 0);
lean_inc(v_a_3494_);
lean_dec_ref_known(v___x_3493_, 1);
v___x_3495_ = l_Lean_Expr_getAppFn(v_a_3494_);
lean_dec(v_a_3494_);
if (lean_obj_tag(v___x_3495_) == 4)
{
lean_object* v_declName_3496_; lean_object* v___x_3497_; 
v_declName_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_declName_3496_);
lean_dec_ref_known(v___x_3495_, 2);
v___x_3497_ = l_Lean_Meta_Grind_saveCases___redArg(v_declName_3496_, v_a_3481_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v___x_3498_; 
lean_dec_ref_known(v___x_3497_, 1);
v___x_3498_ = l_Lean_Meta_Grind_cases(v_mvarId_3478_, v_major_3479_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_);
return v___x_3498_;
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3506_; 
lean_dec_ref(v_major_3479_);
lean_dec(v_mvarId_3478_);
v_a_3499_ = lean_ctor_get(v___x_3497_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___x_3497_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3501_ = v___x_3497_;
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_a_3499_);
lean_dec(v___x_3497_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3504_; 
if (v_isShared_3502_ == 0)
{
v___x_3504_ = v___x_3501_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_a_3499_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
}
}
else
{
lean_object* v___x_3507_; 
lean_dec_ref(v___x_3495_);
v___x_3507_ = l_Lean_Meta_Grind_cases(v_mvarId_3478_, v_major_3479_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_);
return v___x_3507_;
}
}
else
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3515_; 
lean_dec_ref(v_major_3479_);
lean_dec(v_mvarId_3478_);
v_a_3508_ = lean_ctor_get(v___x_3493_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3493_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3510_ = v___x_3493_;
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3493_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3513_; 
if (v_isShared_3511_ == 0)
{
v___x_3513_ = v___x_3510_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3508_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
}
else
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
lean_dec_ref(v_major_3479_);
lean_dec(v_mvarId_3478_);
v_a_3516_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3491_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v___x_3491_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
}
}
}
}
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3531_; 
lean_dec_ref(v_major_3479_);
lean_dec(v_mvarId_3478_);
v_a_3524_ = lean_ctor_get(v___x_3487_, 0);
v_isSharedCheck_3531_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3531_ == 0)
{
v___x_3526_ = v___x_3487_;
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3487_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3529_; 
if (v_isShared_3527_ == 0)
{
v___x_3529_ = v___x_3526_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_a_3524_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___redArg___boxed(lean_object* v_mvarId_3532_, lean_object* v_major_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___redArg(v_mvarId_3532_, v_major_3533_, v_a_3534_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_);
lean_dec(v_a_3539_);
lean_dec_ref(v_a_3538_);
lean_dec(v_a_3537_);
lean_dec_ref(v_a_3536_);
lean_dec(v_a_3535_);
lean_dec_ref(v_a_3534_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace(lean_object* v_mvarId_3542_, lean_object* v_major_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_){
_start:
{
lean_object* v___x_3555_; 
v___x_3555_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___redArg(v_mvarId_3542_, v_major_3543_, v_a_3546_, v_a_3547_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___boxed(lean_object* v_mvarId_3556_, lean_object* v_major_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_){
_start:
{
lean_object* v_res_3569_; 
v_res_3569_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace(v_mvarId_3556_, v_major_3557_, v_a_3558_, v_a_3559_, v_a_3560_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_);
lean_dec(v_a_3567_);
lean_dec_ref(v_a_3566_);
lean_dec(v_a_3565_);
lean_dec_ref(v_a_3564_);
lean_dec(v_a_3563_);
lean_dec_ref(v_a_3562_);
lean_dec(v_a_3561_);
lean_dec_ref(v_a_3560_);
lean_dec(v_a_3559_);
lean_dec(v_a_3558_);
return v_res_3569_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___lam__0(lean_object* v_e_3570_){
_start:
{
uint64_t v_anchor_3571_; 
v_anchor_3571_ = lean_ctor_get_uint64(v_e_3570_, sizeof(void*)*3);
return v_anchor_3571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___lam__0___boxed(lean_object* v_e_3572_){
_start:
{
uint64_t v_res_3573_; lean_object* v_r_3574_; 
v_res_3573_ = l_Lean_Meta_Grind_instHasAnchorSplitCandidateWithAnchor___lam__0(v_e_3572_);
lean_dec_ref(v_e_3572_);
v_r_3574_ = lean_box_uint64(v_res_3573_);
return v_r_3574_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___redArg(uint64_t v_a_3577_, lean_object* v_x_3578_){
_start:
{
if (lean_obj_tag(v_x_3578_) == 0)
{
lean_object* v___x_3579_; 
v___x_3579_ = lean_box(0);
return v___x_3579_;
}
else
{
lean_object* v_key_3580_; lean_object* v_value_3581_; lean_object* v_tail_3582_; uint64_t v___x_3583_; uint8_t v___x_3584_; 
v_key_3580_ = lean_ctor_get(v_x_3578_, 0);
v_value_3581_ = lean_ctor_get(v_x_3578_, 1);
v_tail_3582_ = lean_ctor_get(v_x_3578_, 2);
v___x_3583_ = lean_unbox_uint64(v_key_3580_);
v___x_3584_ = lean_uint64_dec_eq(v___x_3583_, v_a_3577_);
if (v___x_3584_ == 0)
{
v_x_3578_ = v_tail_3582_;
goto _start;
}
else
{
lean_object* v___x_3586_; 
lean_inc(v_value_3581_);
v___x_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3586_, 0, v_value_3581_);
return v___x_3586_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_a_3587_, lean_object* v_x_3588_){
_start:
{
uint64_t v_a_boxed_3589_; lean_object* v_res_3590_; 
v_a_boxed_3589_ = lean_unbox_uint64(v_a_3587_);
lean_dec_ref(v_a_3587_);
v_res_3590_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___redArg(v_a_boxed_3589_, v_x_3588_);
lean_dec(v_x_3588_);
return v_res_3590_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___redArg(lean_object* v_m_3591_, uint64_t v_a_3592_){
_start:
{
lean_object* v_buckets_3593_; lean_object* v___x_3594_; uint64_t v___x_3595_; uint64_t v___x_3596_; uint64_t v_fold_3597_; uint64_t v___x_3598_; uint64_t v___x_3599_; uint64_t v___x_3600_; size_t v___x_3601_; size_t v___x_3602_; size_t v___x_3603_; size_t v___x_3604_; size_t v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v_buckets_3593_ = lean_ctor_get(v_m_3591_, 1);
v___x_3594_ = lean_array_get_size(v_buckets_3593_);
v___x_3595_ = 32ULL;
v___x_3596_ = lean_uint64_shift_right(v_a_3592_, v___x_3595_);
v_fold_3597_ = lean_uint64_xor(v_a_3592_, v___x_3596_);
v___x_3598_ = 16ULL;
v___x_3599_ = lean_uint64_shift_right(v_fold_3597_, v___x_3598_);
v___x_3600_ = lean_uint64_xor(v_fold_3597_, v___x_3599_);
v___x_3601_ = lean_uint64_to_usize(v___x_3600_);
v___x_3602_ = lean_usize_of_nat(v___x_3594_);
v___x_3603_ = ((size_t)1ULL);
v___x_3604_ = lean_usize_sub(v___x_3602_, v___x_3603_);
v___x_3605_ = lean_usize_land(v___x_3601_, v___x_3604_);
v___x_3606_ = lean_array_uget_borrowed(v_buckets_3593_, v___x_3605_);
v___x_3607_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___redArg(v_a_3592_, v___x_3606_);
return v___x_3607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_m_3608_, lean_object* v_a_3609_){
_start:
{
uint64_t v_a_boxed_3610_; lean_object* v_res_3611_; 
v_a_boxed_3610_ = lean_unbox_uint64(v_a_3609_);
lean_dec_ref(v_a_3609_);
v_res_3611_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___redArg(v_m_3608_, v_a_boxed_3610_);
lean_dec_ref(v_m_3608_);
return v_res_3611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8_spec__10___redArg(lean_object* v_x_3612_, lean_object* v_x_3613_){
_start:
{
if (lean_obj_tag(v_x_3613_) == 0)
{
return v_x_3612_;
}
else
{
lean_object* v_key_3614_; lean_object* v_value_3615_; lean_object* v_tail_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3640_; 
v_key_3614_ = lean_ctor_get(v_x_3613_, 0);
v_value_3615_ = lean_ctor_get(v_x_3613_, 1);
v_tail_3616_ = lean_ctor_get(v_x_3613_, 2);
v_isSharedCheck_3640_ = !lean_is_exclusive(v_x_3613_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3618_ = v_x_3613_;
v_isShared_3619_ = v_isSharedCheck_3640_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_tail_3616_);
lean_inc(v_value_3615_);
lean_inc(v_key_3614_);
lean_dec(v_x_3613_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3640_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3620_; uint64_t v___x_3621_; uint64_t v___x_3622_; uint64_t v___x_3623_; uint64_t v___x_3624_; uint64_t v_fold_3625_; uint64_t v___x_3626_; uint64_t v___x_3627_; uint64_t v___x_3628_; size_t v___x_3629_; size_t v___x_3630_; size_t v___x_3631_; size_t v___x_3632_; size_t v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3636_; 
v___x_3620_ = lean_array_get_size(v_x_3612_);
v___x_3621_ = 32ULL;
v___x_3622_ = lean_unbox_uint64(v_key_3614_);
v___x_3623_ = lean_uint64_shift_right(v___x_3622_, v___x_3621_);
v___x_3624_ = lean_unbox_uint64(v_key_3614_);
v_fold_3625_ = lean_uint64_xor(v___x_3624_, v___x_3623_);
v___x_3626_ = 16ULL;
v___x_3627_ = lean_uint64_shift_right(v_fold_3625_, v___x_3626_);
v___x_3628_ = lean_uint64_xor(v_fold_3625_, v___x_3627_);
v___x_3629_ = lean_uint64_to_usize(v___x_3628_);
v___x_3630_ = lean_usize_of_nat(v___x_3620_);
v___x_3631_ = ((size_t)1ULL);
v___x_3632_ = lean_usize_sub(v___x_3630_, v___x_3631_);
v___x_3633_ = lean_usize_land(v___x_3629_, v___x_3632_);
v___x_3634_ = lean_array_uget_borrowed(v_x_3612_, v___x_3633_);
lean_inc(v___x_3634_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 2, v___x_3634_);
v___x_3636_ = v___x_3618_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_key_3614_);
lean_ctor_set(v_reuseFailAlloc_3639_, 1, v_value_3615_);
lean_ctor_set(v_reuseFailAlloc_3639_, 2, v___x_3634_);
v___x_3636_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
lean_object* v___x_3637_; 
v___x_3637_ = lean_array_uset(v_x_3612_, v___x_3633_, v___x_3636_);
v_x_3612_ = v___x_3637_;
v_x_3613_ = v_tail_3616_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8___redArg(lean_object* v_i_3641_, lean_object* v_source_3642_, lean_object* v_target_3643_){
_start:
{
lean_object* v___x_3644_; uint8_t v___x_3645_; 
v___x_3644_ = lean_array_get_size(v_source_3642_);
v___x_3645_ = lean_nat_dec_lt(v_i_3641_, v___x_3644_);
if (v___x_3645_ == 0)
{
lean_dec_ref(v_source_3642_);
lean_dec(v_i_3641_);
return v_target_3643_;
}
else
{
lean_object* v_es_3646_; lean_object* v___x_3647_; lean_object* v_source_3648_; lean_object* v_target_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; 
v_es_3646_ = lean_array_fget(v_source_3642_, v_i_3641_);
v___x_3647_ = lean_box(0);
v_source_3648_ = lean_array_fset(v_source_3642_, v_i_3641_, v___x_3647_);
v_target_3649_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8_spec__10___redArg(v_target_3643_, v_es_3646_);
v___x_3650_ = lean_unsigned_to_nat(1u);
v___x_3651_ = lean_nat_add(v_i_3641_, v___x_3650_);
lean_dec(v_i_3641_);
v_i_3641_ = v___x_3651_;
v_source_3642_ = v_source_3648_;
v_target_3643_ = v_target_3649_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_data_3653_){
_start:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v_nbuckets_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3654_ = lean_array_get_size(v_data_3653_);
v___x_3655_ = lean_unsigned_to_nat(2u);
v_nbuckets_3656_ = lean_nat_mul(v___x_3654_, v___x_3655_);
v___x_3657_ = lean_unsigned_to_nat(0u);
v___x_3658_ = lean_box(0);
v___x_3659_ = lean_mk_array(v_nbuckets_3656_, v___x_3658_);
v___x_3660_ = lean_array_propagate_mark(v_data_3653_, v___x_3659_);
v___x_3661_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8___redArg(v___x_3657_, v_data_3653_, v___x_3660_);
return v___x_3661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___redArg(uint64_t v_a_3662_, lean_object* v_b_3663_, lean_object* v_x_3664_){
_start:
{
if (lean_obj_tag(v_x_3664_) == 0)
{
lean_dec(v_b_3663_);
return v_x_3664_;
}
else
{
lean_object* v_key_3665_; lean_object* v_value_3666_; lean_object* v_tail_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3681_; 
v_key_3665_ = lean_ctor_get(v_x_3664_, 0);
v_value_3666_ = lean_ctor_get(v_x_3664_, 1);
v_tail_3667_ = lean_ctor_get(v_x_3664_, 2);
v_isSharedCheck_3681_ = !lean_is_exclusive(v_x_3664_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3669_ = v_x_3664_;
v_isShared_3670_ = v_isSharedCheck_3681_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_tail_3667_);
lean_inc(v_value_3666_);
lean_inc(v_key_3665_);
lean_dec(v_x_3664_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3681_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
uint64_t v___x_3671_; uint8_t v___x_3672_; 
v___x_3671_ = lean_unbox_uint64(v_key_3665_);
v___x_3672_ = lean_uint64_dec_eq(v___x_3671_, v_a_3662_);
if (v___x_3672_ == 0)
{
lean_object* v___x_3673_; lean_object* v___x_3675_; 
v___x_3673_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___redArg(v_a_3662_, v_b_3663_, v_tail_3667_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 2, v___x_3673_);
v___x_3675_ = v___x_3669_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_key_3665_);
lean_ctor_set(v_reuseFailAlloc_3676_, 1, v_value_3666_);
lean_ctor_set(v_reuseFailAlloc_3676_, 2, v___x_3673_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
else
{
lean_object* v___x_3677_; lean_object* v___x_3679_; 
lean_dec(v_value_3666_);
lean_dec(v_key_3665_);
v___x_3677_ = lean_box_uint64(v_a_3662_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 1, v_b_3663_);
lean_ctor_set(v___x_3669_, 0, v___x_3677_);
v___x_3679_ = v___x_3669_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v___x_3677_);
lean_ctor_set(v_reuseFailAlloc_3680_, 1, v_b_3663_);
lean_ctor_set(v_reuseFailAlloc_3680_, 2, v_tail_3667_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_a_3682_, lean_object* v_b_3683_, lean_object* v_x_3684_){
_start:
{
uint64_t v_a_boxed_3685_; lean_object* v_res_3686_; 
v_a_boxed_3685_ = lean_unbox_uint64(v_a_3682_);
lean_dec_ref(v_a_3682_);
v_res_3686_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___redArg(v_a_boxed_3685_, v_b_3683_, v_x_3684_);
return v_res_3686_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___redArg(uint64_t v_a_3687_, lean_object* v_x_3688_){
_start:
{
if (lean_obj_tag(v_x_3688_) == 0)
{
uint8_t v___x_3689_; 
v___x_3689_ = 0;
return v___x_3689_;
}
else
{
lean_object* v_key_3690_; lean_object* v_tail_3691_; uint64_t v___x_3692_; uint8_t v___x_3693_; 
v_key_3690_ = lean_ctor_get(v_x_3688_, 0);
v_tail_3691_ = lean_ctor_get(v_x_3688_, 2);
v___x_3692_ = lean_unbox_uint64(v_key_3690_);
v___x_3693_ = lean_uint64_dec_eq(v___x_3692_, v_a_3687_);
if (v___x_3693_ == 0)
{
v_x_3688_ = v_tail_3691_;
goto _start;
}
else
{
return v___x_3693_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_a_3695_, lean_object* v_x_3696_){
_start:
{
uint64_t v_a_boxed_3697_; uint8_t v_res_3698_; lean_object* v_r_3699_; 
v_a_boxed_3697_ = lean_unbox_uint64(v_a_3695_);
lean_dec_ref(v_a_3695_);
v_res_3698_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___redArg(v_a_boxed_3697_, v_x_3696_);
lean_dec(v_x_3696_);
v_r_3699_ = lean_box(v_res_3698_);
return v_r_3699_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___redArg(lean_object* v_m_3700_, uint64_t v_a_3701_, lean_object* v_b_3702_){
_start:
{
lean_object* v_size_3703_; lean_object* v_buckets_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3747_; 
v_size_3703_ = lean_ctor_get(v_m_3700_, 0);
v_buckets_3704_ = lean_ctor_get(v_m_3700_, 1);
v_isSharedCheck_3747_ = !lean_is_exclusive(v_m_3700_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3706_ = v_m_3700_;
v_isShared_3707_ = v_isSharedCheck_3747_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_buckets_3704_);
lean_inc(v_size_3703_);
lean_dec(v_m_3700_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3747_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3708_; uint64_t v___x_3709_; uint64_t v___x_3710_; uint64_t v_fold_3711_; uint64_t v___x_3712_; uint64_t v___x_3713_; uint64_t v___x_3714_; size_t v___x_3715_; size_t v___x_3716_; size_t v___x_3717_; size_t v___x_3718_; size_t v___x_3719_; lean_object* v_bkt_3720_; uint8_t v___x_3721_; 
v___x_3708_ = lean_array_get_size(v_buckets_3704_);
v___x_3709_ = 32ULL;
v___x_3710_ = lean_uint64_shift_right(v_a_3701_, v___x_3709_);
v_fold_3711_ = lean_uint64_xor(v_a_3701_, v___x_3710_);
v___x_3712_ = 16ULL;
v___x_3713_ = lean_uint64_shift_right(v_fold_3711_, v___x_3712_);
v___x_3714_ = lean_uint64_xor(v_fold_3711_, v___x_3713_);
v___x_3715_ = lean_uint64_to_usize(v___x_3714_);
v___x_3716_ = lean_usize_of_nat(v___x_3708_);
v___x_3717_ = ((size_t)1ULL);
v___x_3718_ = lean_usize_sub(v___x_3716_, v___x_3717_);
v___x_3719_ = lean_usize_land(v___x_3715_, v___x_3718_);
v_bkt_3720_ = lean_array_uget_borrowed(v_buckets_3704_, v___x_3719_);
v___x_3721_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___redArg(v_a_3701_, v_bkt_3720_);
if (v___x_3721_ == 0)
{
lean_object* v___x_3722_; lean_object* v_size_x27_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v_buckets_x27_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; uint8_t v___x_3732_; 
v___x_3722_ = lean_unsigned_to_nat(1u);
v_size_x27_3723_ = lean_nat_add(v_size_3703_, v___x_3722_);
lean_dec(v_size_3703_);
v___x_3724_ = lean_box_uint64(v_a_3701_);
lean_inc(v_bkt_3720_);
v___x_3725_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3724_);
lean_ctor_set(v___x_3725_, 1, v_b_3702_);
lean_ctor_set(v___x_3725_, 2, v_bkt_3720_);
v_buckets_x27_3726_ = lean_array_uset(v_buckets_3704_, v___x_3719_, v___x_3725_);
v___x_3727_ = lean_unsigned_to_nat(4u);
v___x_3728_ = lean_nat_mul(v_size_x27_3723_, v___x_3727_);
v___x_3729_ = lean_unsigned_to_nat(3u);
v___x_3730_ = lean_nat_div(v___x_3728_, v___x_3729_);
lean_dec(v___x_3728_);
v___x_3731_ = lean_array_get_size(v_buckets_x27_3726_);
v___x_3732_ = lean_nat_dec_le(v___x_3730_, v___x_3731_);
lean_dec(v___x_3730_);
if (v___x_3732_ == 0)
{
lean_object* v_val_3733_; lean_object* v___x_3735_; 
v_val_3733_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7___redArg(v_buckets_x27_3726_);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 1, v_val_3733_);
lean_ctor_set(v___x_3706_, 0, v_size_x27_3723_);
v___x_3735_ = v___x_3706_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_size_x27_3723_);
lean_ctor_set(v_reuseFailAlloc_3736_, 1, v_val_3733_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
else
{
lean_object* v___x_3738_; 
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 1, v_buckets_x27_3726_);
lean_ctor_set(v___x_3706_, 0, v_size_x27_3723_);
v___x_3738_ = v___x_3706_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v_size_x27_3723_);
lean_ctor_set(v_reuseFailAlloc_3739_, 1, v_buckets_x27_3726_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
return v___x_3738_;
}
}
}
else
{
lean_object* v___x_3740_; lean_object* v_buckets_x27_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3745_; 
lean_inc(v_bkt_3720_);
v___x_3740_ = lean_box(0);
v_buckets_x27_3741_ = lean_array_uset(v_buckets_3704_, v___x_3719_, v___x_3740_);
v___x_3742_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___redArg(v_a_3701_, v_b_3702_, v_bkt_3720_);
v___x_3743_ = lean_array_uset(v_buckets_x27_3741_, v___x_3719_, v___x_3742_);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 1, v___x_3743_);
v___x_3745_ = v___x_3706_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_size_3703_);
lean_ctor_set(v_reuseFailAlloc_3746_, 1, v___x_3743_);
v___x_3745_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
return v___x_3745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_m_3748_, lean_object* v_a_3749_, lean_object* v_b_3750_){
_start:
{
uint64_t v_a_boxed_3751_; lean_object* v_res_3752_; 
v_a_boxed_3751_ = lean_unbox_uint64(v_a_3749_);
lean_dec_ref(v_a_3749_);
v_res_3752_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___redArg(v_m_3748_, v_a_boxed_3751_, v_b_3750_);
return v_res_3752_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3753_ = lean_box(0);
v___x_3754_ = lean_unsigned_to_nat(16u);
v___x_3755_ = lean_mk_array(v___x_3754_, v___x_3753_);
return v___x_3755_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v_found_3758_; 
v___x_3756_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__0, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__0);
v___x_3757_ = lean_unsigned_to_nat(0u);
v_found_3758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_found_3758_, 0, v___x_3757_);
lean_ctor_set(v_found_3758_, 1, v___x_3756_);
return v_found_3758_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v_found_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; 
v_found_3759_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__1, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__1);
v___x_3760_ = lean_box(0);
v___x_3761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3760_);
lean_ctor_set(v___x_3761_, 1, v_found_3759_);
return v___x_3761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__5(lean_object* v_shift_3762_, lean_object* v_numDigits_3763_, lean_object* v_es_3764_, lean_object* v_as_3765_, size_t v_sz_3766_, size_t v_i_3767_, lean_object* v_b_3768_){
_start:
{
lean_object* v_a_3770_; uint8_t v___x_3774_; 
v___x_3774_ = lean_usize_dec_lt(v_i_3767_, v_sz_3766_);
if (v___x_3774_ == 0)
{
return v_b_3768_;
}
else
{
lean_object* v_snd_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3809_; 
v_snd_3775_ = lean_ctor_get(v_b_3768_, 1);
v_isSharedCheck_3809_ = !lean_is_exclusive(v_b_3768_);
if (v_isSharedCheck_3809_ == 0)
{
lean_object* v_unused_3810_; 
v_unused_3810_ = lean_ctor_get(v_b_3768_, 0);
lean_dec(v_unused_3810_);
v___x_3777_ = v_b_3768_;
v_isShared_3778_ = v_isSharedCheck_3809_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_snd_3775_);
lean_dec(v_b_3768_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3809_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v_a_3779_; uint64_t v_anchor_3780_; lean_object* v___x_3781_; uint64_t v___x_3782_; uint64_t v___x_3783_; lean_object* v___x_3784_; 
v_a_3779_ = lean_array_uget_borrowed(v_as_3765_, v_i_3767_);
v_anchor_3780_ = lean_ctor_get_uint64(v_a_3779_, sizeof(void*)*3);
v___x_3781_ = lean_box(0);
v___x_3782_ = lean_uint64_of_nat(v_shift_3762_);
v___x_3783_ = lean_uint64_shift_right(v_anchor_3780_, v___x_3782_);
v___x_3784_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___redArg(v_snd_3775_, v___x_3783_);
if (lean_obj_tag(v___x_3784_) == 1)
{
lean_object* v_val_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3803_; 
v_val_3785_ = lean_ctor_get(v___x_3784_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3787_ = v___x_3784_;
v_isShared_3788_ = v_isSharedCheck_3803_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_val_3785_);
lean_dec(v___x_3784_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3803_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
uint64_t v___x_3789_; uint8_t v___x_3790_; 
v___x_3789_ = lean_unbox_uint64(v_val_3785_);
lean_dec(v_val_3785_);
v___x_3790_ = lean_uint64_dec_eq(v___x_3789_, v_anchor_3780_);
if (v___x_3790_ == 0)
{
lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3795_; 
v___x_3791_ = lean_unsigned_to_nat(1u);
v___x_3792_ = lean_nat_add(v_numDigits_3763_, v___x_3791_);
v___x_3793_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2(v_es_3764_, v___x_3792_);
lean_dec(v___x_3792_);
if (v_isShared_3788_ == 0)
{
lean_ctor_set(v___x_3787_, 0, v___x_3793_);
v___x_3795_ = v___x_3787_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v___x_3793_);
v___x_3795_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
lean_object* v___x_3797_; 
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v___x_3795_);
v___x_3797_ = v___x_3777_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v___x_3795_);
lean_ctor_set(v_reuseFailAlloc_3798_, 1, v_snd_3775_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
}
else
{
lean_object* v___x_3801_; 
lean_del_object(v___x_3787_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v___x_3781_);
v___x_3801_ = v___x_3777_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v___x_3781_);
lean_ctor_set(v_reuseFailAlloc_3802_, 1, v_snd_3775_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
v_a_3770_ = v___x_3801_;
goto v___jp_3769_;
}
}
}
}
else
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3807_; 
lean_dec(v___x_3784_);
v___x_3804_ = lean_box_uint64(v_anchor_3780_);
v___x_3805_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___redArg(v_snd_3775_, v___x_3783_, v___x_3804_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 1, v___x_3805_);
lean_ctor_set(v___x_3777_, 0, v___x_3781_);
v___x_3807_ = v___x_3777_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v___x_3781_);
lean_ctor_set(v_reuseFailAlloc_3808_, 1, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
v_a_3770_ = v___x_3807_;
goto v___jp_3769_;
}
}
}
}
v___jp_3769_:
{
size_t v___x_3771_; size_t v___x_3772_; 
v___x_3771_ = ((size_t)1ULL);
v___x_3772_ = lean_usize_add(v_i_3767_, v___x_3771_);
v_i_3767_ = v___x_3772_;
v_b_3768_ = v_a_3770_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2(lean_object* v_es_3811_, lean_object* v_numDigits_3812_){
_start:
{
lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; uint8_t v___x_3816_; 
v___x_3813_ = lean_unsigned_to_nat(4u);
v___x_3814_ = lean_nat_mul(v___x_3813_, v_numDigits_3812_);
v___x_3815_ = lean_unsigned_to_nat(64u);
v___x_3816_ = lean_nat_dec_lt(v___x_3814_, v___x_3815_);
if (v___x_3816_ == 0)
{
lean_dec(v___x_3814_);
lean_inc(v_numDigits_3812_);
return v_numDigits_3812_;
}
else
{
lean_object* v_shift_3817_; lean_object* v___x_3818_; size_t v_sz_3819_; size_t v___x_3820_; lean_object* v___x_3821_; lean_object* v_fst_3822_; 
v_shift_3817_ = lean_nat_sub(v___x_3815_, v___x_3814_);
lean_dec(v___x_3814_);
v___x_3818_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__2, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___closed__2);
v_sz_3819_ = lean_array_size(v_es_3811_);
v___x_3820_ = ((size_t)0ULL);
v___x_3821_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__5(v_shift_3817_, v_numDigits_3812_, v_es_3811_, v_es_3811_, v_sz_3819_, v___x_3820_, v___x_3818_);
lean_dec(v_shift_3817_);
v_fst_3822_ = lean_ctor_get(v___x_3821_, 0);
lean_inc(v_fst_3822_);
lean_dec_ref(v___x_3821_);
if (lean_obj_tag(v_fst_3822_) == 0)
{
lean_inc(v_numDigits_3812_);
return v_numDigits_3812_;
}
else
{
lean_object* v_val_3823_; 
v_val_3823_ = lean_ctor_get(v_fst_3822_, 0);
lean_inc(v_val_3823_);
lean_dec_ref_known(v_fst_3822_, 1);
return v_val_3823_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2___boxed(lean_object* v_es_3824_, lean_object* v_numDigits_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2(v_es_3824_, v_numDigits_3825_);
lean_dec(v_numDigits_3825_);
lean_dec_ref(v_es_3824_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__5___boxed(lean_object* v_shift_3827_, lean_object* v_numDigits_3828_, lean_object* v_es_3829_, lean_object* v_as_3830_, lean_object* v_sz_3831_, lean_object* v_i_3832_, lean_object* v_b_3833_){
_start:
{
size_t v_sz_boxed_3834_; size_t v_i_boxed_3835_; lean_object* v_res_3836_; 
v_sz_boxed_3834_ = lean_unbox_usize(v_sz_3831_);
lean_dec(v_sz_3831_);
v_i_boxed_3835_ = lean_unbox_usize(v_i_3832_);
lean_dec(v_i_3832_);
v_res_3836_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__5(v_shift_3827_, v_numDigits_3828_, v_es_3829_, v_as_3830_, v_sz_boxed_3834_, v_i_boxed_3835_, v_b_3833_);
lean_dec_ref(v_as_3830_);
lean_dec_ref(v_es_3829_);
lean_dec(v_numDigits_3828_);
lean_dec(v_shift_3827_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1(lean_object* v_es_3837_){
_start:
{
lean_object* v___x_3838_; lean_object* v___x_3839_; 
v___x_3838_ = lean_unsigned_to_nat(4u);
v___x_3839_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2(v_es_3837_, v___x_3838_);
return v___x_3839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1___boxed(lean_object* v_es_3840_){
_start:
{
lean_object* v_res_3841_; 
v_res_3841_ = l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1(v_es_3840_);
lean_dec_ref(v_es_3840_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0_spec__0(lean_object* v_filter_3842_, lean_object* v_as_3843_, size_t v_i_3844_, size_t v_stop_3845_, lean_object* v_b_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
lean_object* v_a_3859_; uint8_t v___x_3863_; 
v___x_3863_ = lean_usize_dec_eq(v_i_3844_, v_stop_3845_);
if (v___x_3863_ == 0)
{
lean_object* v___x_3864_; lean_object* v_e_3865_; lean_object* v___x_3866_; 
v___x_3864_ = lean_array_uget_borrowed(v_as_3843_, v_i_3844_);
v_e_3865_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v___x_3864_);
v___x_3866_ = l_Lean_Meta_Grind_SplitInfo_getAnchor(v___x_3864_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_);
if (lean_obj_tag(v___x_3866_) == 0)
{
lean_object* v_a_3867_; lean_object* v___x_3868_; 
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
lean_inc(v_a_3867_);
lean_dec_ref_known(v___x_3866_, 1);
lean_inc(v___x_3864_);
v___x_3868_ = l_Lean_Meta_Grind_checkSplitStatus(v___x_3864_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_);
if (lean_obj_tag(v___x_3868_) == 0)
{
lean_object* v_a_3869_; 
v_a_3869_ = lean_ctor_get(v___x_3868_, 0);
lean_inc(v_a_3869_);
lean_dec_ref_known(v___x_3868_, 1);
if (lean_obj_tag(v_a_3869_) == 2)
{
lean_object* v_numCases_3870_; uint8_t v_isRec_3871_; lean_object* v___x_3872_; 
v_numCases_3870_ = lean_ctor_get(v_a_3869_, 0);
lean_inc(v_numCases_3870_);
v_isRec_3871_ = lean_ctor_get_uint8(v_a_3869_, sizeof(void*)*1);
lean_dec_ref_known(v_a_3869_, 1);
lean_inc_ref(v_filter_3842_);
lean_inc(v___y_3856_);
lean_inc_ref(v___y_3855_);
lean_inc(v___y_3854_);
lean_inc_ref(v___y_3853_);
lean_inc(v___y_3852_);
lean_inc_ref(v___y_3851_);
lean_inc(v___y_3850_);
lean_inc_ref(v___y_3849_);
lean_inc(v___y_3848_);
lean_inc(v___y_3847_);
lean_inc_ref(v_e_3865_);
v___x_3872_ = lean_apply_12(v_filter_3842_, v_e_3865_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_, lean_box(0));
if (lean_obj_tag(v___x_3872_) == 0)
{
lean_object* v_a_3873_; uint8_t v___x_3874_; 
v_a_3873_ = lean_ctor_get(v___x_3872_, 0);
lean_inc(v_a_3873_);
lean_dec_ref_known(v___x_3872_, 1);
v___x_3874_ = lean_unbox(v_a_3873_);
lean_dec(v_a_3873_);
if (v___x_3874_ == 0)
{
lean_dec(v_numCases_3870_);
lean_dec(v_a_3867_);
lean_dec_ref(v_e_3865_);
v_a_3859_ = v_b_3846_;
goto v___jp_3858_;
}
else
{
lean_object* v___x_3875_; uint64_t v___x_3876_; lean_object* v___x_3877_; 
lean_inc(v___x_3864_);
v___x_3875_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_3875_, 0, v___x_3864_);
lean_ctor_set(v___x_3875_, 1, v_numCases_3870_);
lean_ctor_set(v___x_3875_, 2, v_e_3865_);
lean_ctor_set_uint8(v___x_3875_, sizeof(void*)*3 + 8, v_isRec_3871_);
v___x_3876_ = lean_unbox_uint64(v_a_3867_);
lean_dec(v_a_3867_);
lean_ctor_set_uint64(v___x_3875_, sizeof(void*)*3, v___x_3876_);
v___x_3877_ = lean_array_push(v_b_3846_, v___x_3875_);
v_a_3859_ = v___x_3877_;
goto v___jp_3858_;
}
}
else
{
lean_object* v_a_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3885_; 
lean_dec(v_numCases_3870_);
lean_dec(v_a_3867_);
lean_dec_ref(v_e_3865_);
lean_dec_ref(v_b_3846_);
lean_dec_ref(v_filter_3842_);
v_a_3878_ = lean_ctor_get(v___x_3872_, 0);
v_isSharedCheck_3885_ = !lean_is_exclusive(v___x_3872_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3880_ = v___x_3872_;
v_isShared_3881_ = v_isSharedCheck_3885_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_a_3878_);
lean_dec(v___x_3872_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3885_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3883_; 
if (v_isShared_3881_ == 0)
{
v___x_3883_ = v___x_3880_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_a_3878_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
return v___x_3883_;
}
}
}
}
else
{
lean_dec(v_a_3869_);
lean_dec(v_a_3867_);
lean_dec_ref(v_e_3865_);
v_a_3859_ = v_b_3846_;
goto v___jp_3858_;
}
}
else
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3893_; 
lean_dec(v_a_3867_);
lean_dec_ref(v_e_3865_);
lean_dec_ref(v_b_3846_);
lean_dec_ref(v_filter_3842_);
v_a_3886_ = lean_ctor_get(v___x_3868_, 0);
v_isSharedCheck_3893_ = !lean_is_exclusive(v___x_3868_);
if (v_isSharedCheck_3893_ == 0)
{
v___x_3888_ = v___x_3868_;
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v___x_3868_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3891_; 
if (v_isShared_3889_ == 0)
{
v___x_3891_ = v___x_3888_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v_a_3886_);
v___x_3891_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
return v___x_3891_;
}
}
}
}
else
{
lean_object* v_a_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3901_; 
lean_dec_ref(v_e_3865_);
lean_dec_ref(v_b_3846_);
lean_dec_ref(v_filter_3842_);
v_a_3894_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3901_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3901_ == 0)
{
v___x_3896_ = v___x_3866_;
v_isShared_3897_ = v_isSharedCheck_3901_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_a_3894_);
lean_dec(v___x_3866_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3901_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3899_; 
if (v_isShared_3897_ == 0)
{
v___x_3899_ = v___x_3896_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v_a_3894_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
return v___x_3899_;
}
}
}
}
else
{
lean_object* v___x_3902_; 
lean_dec_ref(v_filter_3842_);
v___x_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3902_, 0, v_b_3846_);
return v___x_3902_;
}
v___jp_3858_:
{
size_t v___x_3860_; size_t v___x_3861_; 
v___x_3860_ = ((size_t)1ULL);
v___x_3861_ = lean_usize_add(v_i_3844_, v___x_3860_);
v_i_3844_ = v___x_3861_;
v_b_3846_ = v_a_3859_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0_spec__0___boxed(lean_object* v_filter_3903_, lean_object* v_as_3904_, lean_object* v_i_3905_, lean_object* v_stop_3906_, lean_object* v_b_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_){
_start:
{
size_t v_i_boxed_3919_; size_t v_stop_boxed_3920_; lean_object* v_res_3921_; 
v_i_boxed_3919_ = lean_unbox_usize(v_i_3905_);
lean_dec(v_i_3905_);
v_stop_boxed_3920_ = lean_unbox_usize(v_stop_3906_);
lean_dec(v_stop_3906_);
v_res_3921_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0_spec__0(v_filter_3903_, v_as_3904_, v_i_boxed_3919_, v_stop_boxed_3920_, v_b_3907_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
lean_dec(v___y_3909_);
lean_dec(v___y_3908_);
lean_dec_ref(v_as_3904_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0(lean_object* v_filter_3924_, lean_object* v_as_3925_, lean_object* v_start_3926_, lean_object* v_stop_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_){
_start:
{
lean_object* v___x_3939_; uint8_t v___x_3940_; 
v___x_3939_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0___closed__0));
v___x_3940_ = lean_nat_dec_lt(v_start_3926_, v_stop_3927_);
if (v___x_3940_ == 0)
{
lean_object* v___x_3941_; 
lean_dec_ref(v_filter_3924_);
v___x_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3939_);
return v___x_3941_;
}
else
{
lean_object* v___x_3942_; uint8_t v___x_3943_; 
v___x_3942_ = lean_array_get_size(v_as_3925_);
v___x_3943_ = lean_nat_dec_le(v_stop_3927_, v___x_3942_);
if (v___x_3943_ == 0)
{
uint8_t v___x_3944_; 
v___x_3944_ = lean_nat_dec_lt(v_start_3926_, v___x_3942_);
if (v___x_3944_ == 0)
{
lean_object* v___x_3945_; 
lean_dec_ref(v_filter_3924_);
v___x_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3939_);
return v___x_3945_;
}
else
{
size_t v___x_3946_; size_t v___x_3947_; lean_object* v___x_3948_; 
v___x_3946_ = lean_usize_of_nat(v_start_3926_);
v___x_3947_ = lean_usize_of_nat(v___x_3942_);
v___x_3948_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0_spec__0(v_filter_3924_, v_as_3925_, v___x_3946_, v___x_3947_, v___x_3939_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_);
return v___x_3948_;
}
}
else
{
size_t v___x_3949_; size_t v___x_3950_; lean_object* v___x_3951_; 
v___x_3949_ = lean_usize_of_nat(v_start_3926_);
v___x_3950_ = lean_usize_of_nat(v_stop_3927_);
v___x_3951_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0_spec__0(v_filter_3924_, v_as_3925_, v___x_3949_, v___x_3950_, v___x_3939_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_);
return v___x_3951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0___boxed(lean_object* v_filter_3952_, lean_object* v_as_3953_, lean_object* v_start_3954_, lean_object* v_stop_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_){
_start:
{
lean_object* v_res_3967_; 
v_res_3967_ = l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0(v_filter_3952_, v_as_3953_, v_start_3954_, v_stop_3955_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_);
lean_dec(v___y_3965_);
lean_dec_ref(v___y_3964_);
lean_dec(v___y_3963_);
lean_dec_ref(v___y_3962_);
lean_dec(v___y_3961_);
lean_dec_ref(v___y_3960_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
lean_dec(v___y_3957_);
lean_dec(v___y_3956_);
lean_dec(v_stop_3955_);
lean_dec(v_start_3954_);
lean_dec_ref(v_as_3953_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSplitCandidateAnchors(lean_object* v_filter_3968_, lean_object* v_candidates_x3f_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_){
_start:
{
lean_object* v_candidates_3982_; lean_object* v___y_3983_; lean_object* v___y_3984_; lean_object* v___y_3985_; lean_object* v___y_3986_; lean_object* v___y_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___y_3990_; lean_object* v___y_3991_; lean_object* v___y_3992_; 
if (lean_obj_tag(v_candidates_x3f_3969_) == 0)
{
lean_object* v___x_4015_; lean_object* v_toGoalState_4016_; lean_object* v_split_4017_; lean_object* v_candidates_4018_; 
v___x_4015_ = lean_st_ref_get(v_a_3970_);
v_toGoalState_4016_ = lean_ctor_get(v___x_4015_, 0);
lean_inc_ref(v_toGoalState_4016_);
lean_dec(v___x_4015_);
v_split_4017_ = lean_ctor_get(v_toGoalState_4016_, 16);
lean_inc_ref(v_split_4017_);
lean_dec_ref(v_toGoalState_4016_);
v_candidates_4018_ = lean_ctor_get(v_split_4017_, 0);
lean_inc(v_candidates_4018_);
lean_dec_ref(v_split_4017_);
v_candidates_3982_ = v_candidates_4018_;
v___y_3983_ = v_a_3970_;
v___y_3984_ = v_a_3971_;
v___y_3985_ = v_a_3972_;
v___y_3986_ = v_a_3973_;
v___y_3987_ = v_a_3974_;
v___y_3988_ = v_a_3975_;
v___y_3989_ = v_a_3976_;
v___y_3990_ = v_a_3977_;
v___y_3991_ = v_a_3978_;
v___y_3992_ = v_a_3979_;
goto v___jp_3981_;
}
else
{
lean_object* v_val_4019_; 
v_val_4019_ = lean_ctor_get(v_candidates_x3f_3969_, 0);
lean_inc(v_val_4019_);
lean_dec_ref_known(v_candidates_x3f_3969_, 1);
v_candidates_3982_ = v_val_4019_;
v___y_3983_ = v_a_3970_;
v___y_3984_ = v_a_3971_;
v___y_3985_ = v_a_3972_;
v___y_3986_ = v_a_3973_;
v___y_3987_ = v_a_3974_;
v___y_3988_ = v_a_3975_;
v___y_3989_ = v_a_3976_;
v___y_3990_ = v_a_3977_;
v___y_3991_ = v_a_3978_;
v___y_3992_ = v_a_3979_;
goto v___jp_3981_;
}
v___jp_3981_:
{
lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3993_ = lean_array_mk(v_candidates_3982_);
v___x_3994_ = lean_unsigned_to_nat(0u);
v___x_3995_ = lean_array_get_size(v___x_3993_);
v___x_3996_ = l_Array_filterMapM___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__0(v_filter_3968_, v___x_3993_, v___x_3994_, v___x_3995_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_);
lean_dec_ref(v___x_3993_);
if (lean_obj_tag(v___x_3996_) == 0)
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4006_; 
v_a_3997_ = lean_ctor_get(v___x_3996_, 0);
v_isSharedCheck_4006_ = !lean_is_exclusive(v___x_3996_);
if (v_isSharedCheck_4006_ == 0)
{
v___x_3999_ = v___x_3996_;
v_isShared_4000_ = v_isSharedCheck_4006_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v___x_3996_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4006_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4004_; 
v___x_4001_ = l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1(v_a_3997_);
v___x_4002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4002_, 0, v_a_3997_);
lean_ctor_set(v___x_4002_, 1, v___x_4001_);
if (v_isShared_4000_ == 0)
{
lean_ctor_set(v___x_3999_, 0, v___x_4002_);
v___x_4004_ = v___x_3999_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v___x_4002_);
v___x_4004_ = v_reuseFailAlloc_4005_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
return v___x_4004_;
}
}
}
else
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4014_; 
v_a_4007_ = lean_ctor_get(v___x_3996_, 0);
v_isSharedCheck_4014_ = !lean_is_exclusive(v___x_3996_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4009_ = v___x_3996_;
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v___x_3996_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4012_; 
if (v_isShared_4010_ == 0)
{
v___x_4012_ = v___x_4009_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_a_4007_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSplitCandidateAnchors___boxed(lean_object* v_filter_4020_, lean_object* v_candidates_x3f_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_){
_start:
{
lean_object* v_res_4033_; 
v_res_4033_ = l_Lean_Meta_Grind_getSplitCandidateAnchors(v_filter_4020_, v_candidates_x3f_4021_, v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
lean_dec(v_a_4031_);
lean_dec_ref(v_a_4030_);
lean_dec(v_a_4029_);
lean_dec_ref(v_a_4028_);
lean_dec(v_a_4027_);
lean_dec_ref(v_a_4026_);
lean_dec(v_a_4025_);
lean_dec_ref(v_a_4024_);
lean_dec(v_a_4023_);
lean_dec(v_a_4022_);
return v_res_4033_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_4034_, lean_object* v_m_4035_, uint64_t v_a_4036_){
_start:
{
lean_object* v___x_4037_; 
v___x_4037_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___redArg(v_m_4035_, v_a_4036_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_4038_, lean_object* v_m_4039_, lean_object* v_a_4040_){
_start:
{
uint64_t v_a_boxed_4041_; lean_object* v_res_4042_; 
v_a_boxed_4041_ = lean_unbox_uint64(v_a_4040_);
lean_dec_ref(v_a_4040_);
v_res_4042_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3(v_00_u03b2_4038_, v_m_4039_, v_a_boxed_4041_);
lean_dec_ref(v_m_4039_);
return v_res_4042_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_4043_, lean_object* v_m_4044_, uint64_t v_a_4045_, lean_object* v_b_4046_){
_start:
{
lean_object* v___x_4047_; 
v___x_4047_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___redArg(v_m_4044_, v_a_4045_, v_b_4046_);
return v___x_4047_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_4048_, lean_object* v_m_4049_, lean_object* v_a_4050_, lean_object* v_b_4051_){
_start:
{
uint64_t v_a_boxed_4052_; lean_object* v_res_4053_; 
v_a_boxed_4052_ = lean_unbox_uint64(v_a_4050_);
lean_dec_ref(v_a_4050_);
v_res_4053_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4(v_00_u03b2_4048_, v_m_4049_, v_a_boxed_4052_, v_b_4051_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_4054_, uint64_t v_a_4055_, lean_object* v_x_4056_){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___redArg(v_a_4055_, v_x_4056_);
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_4058_, lean_object* v_a_4059_, lean_object* v_x_4060_){
_start:
{
uint64_t v_a_boxed_4061_; lean_object* v_res_4062_; 
v_a_boxed_4061_ = lean_unbox_uint64(v_a_4059_);
lean_dec_ref(v_a_4059_);
v_res_4062_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__3_spec__4(v_00_u03b2_4058_, v_a_boxed_4061_, v_x_4060_);
lean_dec(v_x_4060_);
return v_res_4062_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_4063_, uint64_t v_a_4064_, lean_object* v_x_4065_){
_start:
{
uint8_t v___x_4066_; 
v___x_4066_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___redArg(v_a_4064_, v_x_4065_);
return v___x_4066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4067_, lean_object* v_a_4068_, lean_object* v_x_4069_){
_start:
{
uint64_t v_a_boxed_4070_; uint8_t v_res_4071_; lean_object* v_r_4072_; 
v_a_boxed_4070_ = lean_unbox_uint64(v_a_4068_);
lean_dec_ref(v_a_4068_);
v_res_4071_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__6(v_00_u03b2_4067_, v_a_boxed_4070_, v_x_4069_);
lean_dec(v_x_4069_);
v_r_4072_ = lean_box(v_res_4071_);
return v_r_4072_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_4073_, lean_object* v_data_4074_){
_start:
{
lean_object* v___x_4075_; 
v___x_4075_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7___redArg(v_data_4074_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_4076_, uint64_t v_a_4077_, lean_object* v_b_4078_, lean_object* v_x_4079_){
_start:
{
lean_object* v___x_4080_; 
v___x_4080_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___redArg(v_a_4077_, v_b_4078_, v_x_4079_);
return v___x_4080_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_4081_, lean_object* v_a_4082_, lean_object* v_b_4083_, lean_object* v_x_4084_){
_start:
{
uint64_t v_a_boxed_4085_; lean_object* v_res_4086_; 
v_a_boxed_4085_ = lean_unbox_uint64(v_a_4082_);
lean_dec_ref(v_a_4082_);
v_res_4086_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__8(v_00_u03b2_4081_, v_a_boxed_4085_, v_b_4083_, v_x_4084_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8(lean_object* v_00_u03b2_4087_, lean_object* v_i_4088_, lean_object* v_source_4089_, lean_object* v_target_4090_){
_start:
{
lean_object* v___x_4091_; 
v___x_4091_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8___redArg(v_i_4088_, v_source_4089_, v_target_4090_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8_spec__10(lean_object* v_00_u03b2_4092_, lean_object* v_x_4093_, lean_object* v_x_4094_){
_start:
{
lean_object* v___x_4095_; 
v___x_4095_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00Lean_Meta_Grind_getSplitCandidateAnchors_spec__1_spec__2_spec__4_spec__7_spec__8_spec__10___redArg(v_x_4093_, v_x_4094_);
return v___x_4095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo___lam__0(lean_object* v_x_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_){
_start:
{
uint8_t v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v___x_4108_ = 1;
v___x_4109_ = lean_box(v___x_4108_);
v___x_4110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4110_, 0, v___x_4109_);
return v___x_4110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo___lam__0___boxed(lean_object* v_x_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l_Lean_Meta_Grind_mkSplitAnchorRefInfo___lam__0(v_x_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_, v___y_4121_);
lean_dec(v___y_4121_);
lean_dec_ref(v___y_4120_);
lean_dec(v___y_4119_);
lean_dec_ref(v___y_4118_);
lean_dec(v___y_4117_);
lean_dec_ref(v___y_4116_);
lean_dec(v___y_4115_);
lean_dec_ref(v___y_4114_);
lean_dec(v___y_4113_);
lean_dec(v___y_4112_);
lean_dec_ref(v_x_4111_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___redArg(uint64_t v___x_4124_, uint64_t v_a_4125_, lean_object* v_c_4126_, lean_object* v_numDigits_4127_, lean_object* v_as_4128_, size_t v_sz_4129_, size_t v_i_4130_, lean_object* v_b_4131_){
_start:
{
lean_object* v_a_4134_; uint8_t v___x_4138_; 
v___x_4138_ = lean_usize_dec_lt(v_i_4130_, v_sz_4129_);
if (v___x_4138_ == 0)
{
lean_object* v___x_4139_; 
lean_dec(v_numDigits_4127_);
v___x_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4139_, 0, v_b_4131_);
return v___x_4139_;
}
else
{
lean_object* v_snd_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4166_; 
v_snd_4140_ = lean_ctor_get(v_b_4131_, 1);
v_isSharedCheck_4166_ = !lean_is_exclusive(v_b_4131_);
if (v_isSharedCheck_4166_ == 0)
{
lean_object* v_unused_4167_; 
v_unused_4167_ = lean_ctor_get(v_b_4131_, 0);
lean_dec(v_unused_4167_);
v___x_4142_ = v_b_4131_;
v_isShared_4143_ = v_isSharedCheck_4166_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_snd_4140_);
lean_dec(v_b_4131_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4166_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v_a_4144_; lean_object* v_c_4145_; uint64_t v_anchor_4146_; lean_object* v___x_4147_; uint64_t v___x_4148_; uint64_t v___x_4149_; uint8_t v___x_4150_; 
v_a_4144_ = lean_array_uget_borrowed(v_as_4128_, v_i_4130_);
v_c_4145_ = lean_ctor_get(v_a_4144_, 0);
v_anchor_4146_ = lean_ctor_get_uint64(v_a_4144_, sizeof(void*)*3);
v___x_4147_ = lean_box(0);
v___x_4148_ = lean_uint64_shift_right(v_anchor_4146_, v___x_4124_);
v___x_4149_ = lean_uint64_shift_right(v_a_4125_, v___x_4124_);
v___x_4150_ = lean_uint64_dec_eq(v___x_4148_, v___x_4149_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4152_; 
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v___x_4147_);
v___x_4152_ = v___x_4142_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v___x_4147_);
lean_ctor_set(v_reuseFailAlloc_4153_, 1, v_snd_4140_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
v_a_4134_ = v___x_4152_;
goto v___jp_4133_;
}
}
else
{
uint8_t v___x_4154_; 
v___x_4154_ = l_Lean_Meta_Grind_SplitInfo_beq(v_c_4145_, v_c_4126_);
if (v___x_4154_ == 0)
{
lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4158_; 
v___x_4155_ = lean_unsigned_to_nat(1u);
v___x_4156_ = lean_nat_add(v_snd_4140_, v___x_4155_);
lean_dec(v_snd_4140_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 1, v___x_4156_);
lean_ctor_set(v___x_4142_, 0, v___x_4147_);
v___x_4158_ = v___x_4142_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v___x_4147_);
lean_ctor_set(v_reuseFailAlloc_4159_, 1, v___x_4156_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
v_a_4134_ = v___x_4158_;
goto v___jp_4133_;
}
}
else
{
lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4163_; 
lean_inc(v_snd_4140_);
v___x_4160_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_4160_, 0, v_numDigits_4127_);
lean_ctor_set(v___x_4160_, 1, v_snd_4140_);
lean_ctor_set_uint64(v___x_4160_, sizeof(void*)*2, v_a_4125_);
v___x_4161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4161_, 0, v___x_4160_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v___x_4161_);
v___x_4163_ = v___x_4142_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v___x_4161_);
lean_ctor_set(v_reuseFailAlloc_4165_, 1, v_snd_4140_);
v___x_4163_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
lean_object* v___x_4164_; 
v___x_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4164_, 0, v___x_4163_);
return v___x_4164_;
}
}
}
}
}
v___jp_4133_:
{
size_t v___x_4135_; size_t v___x_4136_; 
v___x_4135_ = ((size_t)1ULL);
v___x_4136_ = lean_usize_add(v_i_4130_, v___x_4135_);
v_i_4130_ = v___x_4136_;
v_b_4131_ = v_a_4134_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___redArg___boxed(lean_object* v___x_4168_, lean_object* v_a_4169_, lean_object* v_c_4170_, lean_object* v_numDigits_4171_, lean_object* v_as_4172_, lean_object* v_sz_4173_, lean_object* v_i_4174_, lean_object* v_b_4175_, lean_object* v___y_4176_){
_start:
{
uint64_t v___x_7934__boxed_4177_; uint64_t v_a_7935__boxed_4178_; size_t v_sz_boxed_4179_; size_t v_i_boxed_4180_; lean_object* v_res_4181_; 
v___x_7934__boxed_4177_ = lean_unbox_uint64(v___x_4168_);
lean_dec_ref(v___x_4168_);
v_a_7935__boxed_4178_ = lean_unbox_uint64(v_a_4169_);
lean_dec_ref(v_a_4169_);
v_sz_boxed_4179_ = lean_unbox_usize(v_sz_4173_);
lean_dec(v_sz_4173_);
v_i_boxed_4180_ = lean_unbox_usize(v_i_4174_);
lean_dec(v_i_4174_);
v_res_4181_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___redArg(v___x_7934__boxed_4177_, v_a_7935__boxed_4178_, v_c_4170_, v_numDigits_4171_, v_as_4172_, v_sz_boxed_4179_, v_i_boxed_4180_, v_b_4175_);
lean_dec_ref(v_as_4172_);
lean_dec_ref(v_c_4170_);
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo(lean_object* v_c_4186_, lean_object* v_candidates_x3f_4187_, lean_object* v_a_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_){
_start:
{
lean_object* v___f_4199_; lean_object* v___x_4200_; 
v___f_4199_ = ((lean_object*)(l_Lean_Meta_Grind_mkSplitAnchorRefInfo___closed__0));
v___x_4200_ = l_Lean_Meta_Grind_getSplitCandidateAnchors(v___f_4199_, v_candidates_x3f_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_, v_a_4192_, v_a_4193_, v_a_4194_, v_a_4195_, v_a_4196_, v_a_4197_);
if (lean_obj_tag(v___x_4200_) == 0)
{
lean_object* v_a_4201_; lean_object* v_candidates_4202_; lean_object* v_numDigits_4203_; lean_object* v___x_4204_; 
v_a_4201_ = lean_ctor_get(v___x_4200_, 0);
lean_inc(v_a_4201_);
lean_dec_ref_known(v___x_4200_, 1);
v_candidates_4202_ = lean_ctor_get(v_a_4201_, 0);
lean_inc_ref(v_candidates_4202_);
v_numDigits_4203_ = lean_ctor_get(v_a_4201_, 1);
lean_inc(v_numDigits_4203_);
lean_dec(v_a_4201_);
v___x_4204_ = l_Lean_Meta_Grind_SplitInfo_getAnchor(v_c_4186_, v_a_4189_, v_a_4190_, v_a_4191_, v_a_4192_, v_a_4193_, v_a_4194_, v_a_4195_, v_a_4196_, v_a_4197_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; uint64_t v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; size_t v_sz_4213_; size_t v___x_4214_; uint64_t v___x_4215_; lean_object* v___x_4216_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
lean_inc(v_a_4205_);
lean_dec_ref_known(v___x_4204_, 1);
v___x_4206_ = lean_unsigned_to_nat(64u);
v___x_4207_ = lean_unsigned_to_nat(4u);
v___x_4208_ = lean_nat_mul(v___x_4207_, v_numDigits_4203_);
v___x_4209_ = lean_nat_sub(v___x_4206_, v___x_4208_);
lean_dec(v___x_4208_);
v___x_4210_ = lean_uint64_of_nat(v___x_4209_);
lean_dec(v___x_4209_);
v___x_4211_ = lean_unsigned_to_nat(0u);
v___x_4212_ = ((lean_object*)(l_Lean_Meta_Grind_mkSplitAnchorRefInfo___closed__1));
v_sz_4213_ = lean_array_size(v_candidates_4202_);
v___x_4214_ = ((size_t)0ULL);
v___x_4215_ = lean_unbox_uint64(v_a_4205_);
lean_inc(v_numDigits_4203_);
v___x_4216_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___redArg(v___x_4210_, v___x_4215_, v_c_4186_, v_numDigits_4203_, v_candidates_4202_, v_sz_4213_, v___x_4214_, v___x_4212_);
lean_dec_ref(v_candidates_4202_);
if (lean_obj_tag(v___x_4216_) == 0)
{
lean_object* v_a_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4231_; 
v_a_4217_ = lean_ctor_get(v___x_4216_, 0);
v_isSharedCheck_4231_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4231_ == 0)
{
v___x_4219_ = v___x_4216_;
v_isShared_4220_ = v_isSharedCheck_4231_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_a_4217_);
lean_dec(v___x_4216_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4231_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v_fst_4221_; 
v_fst_4221_ = lean_ctor_get(v_a_4217_, 0);
lean_inc(v_fst_4221_);
lean_dec(v_a_4217_);
if (lean_obj_tag(v_fst_4221_) == 0)
{
lean_object* v___x_4222_; uint64_t v___x_4223_; lean_object* v___x_4225_; 
v___x_4222_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_4222_, 0, v_numDigits_4203_);
lean_ctor_set(v___x_4222_, 1, v___x_4211_);
v___x_4223_ = lean_unbox_uint64(v_a_4205_);
lean_dec(v_a_4205_);
lean_ctor_set_uint64(v___x_4222_, sizeof(void*)*2, v___x_4223_);
if (v_isShared_4220_ == 0)
{
lean_ctor_set(v___x_4219_, 0, v___x_4222_);
v___x_4225_ = v___x_4219_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v___x_4222_);
v___x_4225_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
return v___x_4225_;
}
}
else
{
lean_object* v_val_4227_; lean_object* v___x_4229_; 
lean_dec(v_a_4205_);
lean_dec(v_numDigits_4203_);
v_val_4227_ = lean_ctor_get(v_fst_4221_, 0);
lean_inc(v_val_4227_);
lean_dec_ref_known(v_fst_4221_, 1);
if (v_isShared_4220_ == 0)
{
lean_ctor_set(v___x_4219_, 0, v_val_4227_);
v___x_4229_ = v___x_4219_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4230_; 
v_reuseFailAlloc_4230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4230_, 0, v_val_4227_);
v___x_4229_ = v_reuseFailAlloc_4230_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
return v___x_4229_;
}
}
}
}
else
{
lean_object* v_a_4232_; lean_object* v___x_4234_; uint8_t v_isShared_4235_; uint8_t v_isSharedCheck_4239_; 
lean_dec(v_a_4205_);
lean_dec(v_numDigits_4203_);
v_a_4232_ = lean_ctor_get(v___x_4216_, 0);
v_isSharedCheck_4239_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4239_ == 0)
{
v___x_4234_ = v___x_4216_;
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
else
{
lean_inc(v_a_4232_);
lean_dec(v___x_4216_);
v___x_4234_ = lean_box(0);
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
v_resetjp_4233_:
{
lean_object* v___x_4237_; 
if (v_isShared_4235_ == 0)
{
v___x_4237_ = v___x_4234_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v_a_4232_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
return v___x_4237_;
}
}
}
}
else
{
lean_object* v_a_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4247_; 
lean_dec(v_numDigits_4203_);
lean_dec_ref(v_candidates_4202_);
v_a_4240_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4242_ = v___x_4204_;
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_a_4240_);
lean_dec(v___x_4204_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4245_; 
if (v_isShared_4243_ == 0)
{
v___x_4245_ = v___x_4242_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_a_4240_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
}
}
else
{
lean_object* v_a_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4255_; 
v_a_4248_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4255_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4255_ == 0)
{
v___x_4250_ = v___x_4200_;
v_isShared_4251_ = v_isSharedCheck_4255_;
goto v_resetjp_4249_;
}
else
{
lean_inc(v_a_4248_);
lean_dec(v___x_4200_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4255_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
lean_object* v___x_4253_; 
if (v_isShared_4251_ == 0)
{
v___x_4253_ = v___x_4250_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4254_; 
v_reuseFailAlloc_4254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4254_, 0, v_a_4248_);
v___x_4253_ = v_reuseFailAlloc_4254_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
return v___x_4253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkSplitAnchorRefInfo___boxed(lean_object* v_c_4256_, lean_object* v_candidates_x3f_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_, lean_object* v_a_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_){
_start:
{
lean_object* v_res_4269_; 
v_res_4269_ = l_Lean_Meta_Grind_mkSplitAnchorRefInfo(v_c_4256_, v_candidates_x3f_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_);
lean_dec(v_a_4267_);
lean_dec_ref(v_a_4266_);
lean_dec(v_a_4265_);
lean_dec_ref(v_a_4264_);
lean_dec(v_a_4263_);
lean_dec_ref(v_a_4262_);
lean_dec(v_a_4261_);
lean_dec_ref(v_a_4260_);
lean_dec(v_a_4259_);
lean_dec(v_a_4258_);
lean_dec_ref(v_c_4256_);
return v_res_4269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0(uint64_t v___x_4270_, uint64_t v_a_4271_, lean_object* v_c_4272_, lean_object* v_numDigits_4273_, lean_object* v_as_4274_, size_t v_sz_4275_, size_t v_i_4276_, lean_object* v_b_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v___x_4289_; 
v___x_4289_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___redArg(v___x_4270_, v_a_4271_, v_c_4272_, v_numDigits_4273_, v_as_4274_, v_sz_4275_, v_i_4276_, v_b_4277_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0___boxed(lean_object** _args){
lean_object* v___x_4290_ = _args[0];
lean_object* v_a_4291_ = _args[1];
lean_object* v_c_4292_ = _args[2];
lean_object* v_numDigits_4293_ = _args[3];
lean_object* v_as_4294_ = _args[4];
lean_object* v_sz_4295_ = _args[5];
lean_object* v_i_4296_ = _args[6];
lean_object* v_b_4297_ = _args[7];
lean_object* v___y_4298_ = _args[8];
lean_object* v___y_4299_ = _args[9];
lean_object* v___y_4300_ = _args[10];
lean_object* v___y_4301_ = _args[11];
lean_object* v___y_4302_ = _args[12];
lean_object* v___y_4303_ = _args[13];
lean_object* v___y_4304_ = _args[14];
lean_object* v___y_4305_ = _args[15];
lean_object* v___y_4306_ = _args[16];
lean_object* v___y_4307_ = _args[17];
lean_object* v___y_4308_ = _args[18];
_start:
{
uint64_t v___x_8133__boxed_4309_; uint64_t v_a_8134__boxed_4310_; size_t v_sz_boxed_4311_; size_t v_i_boxed_4312_; lean_object* v_res_4313_; 
v___x_8133__boxed_4309_ = lean_unbox_uint64(v___x_4290_);
lean_dec_ref(v___x_4290_);
v_a_8134__boxed_4310_ = lean_unbox_uint64(v_a_4291_);
lean_dec_ref(v_a_4291_);
v_sz_boxed_4311_ = lean_unbox_usize(v_sz_4295_);
lean_dec(v_sz_4295_);
v_i_boxed_4312_ = lean_unbox_usize(v_i_4296_);
lean_dec(v_i_4296_);
v_res_4313_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mkSplitAnchorRefInfo_spec__0(v___x_8133__boxed_4309_, v_a_8134__boxed_4310_, v_c_4292_, v_numDigits_4293_, v_as_4294_, v_sz_boxed_4311_, v_i_boxed_4312_, v_b_4297_, v___y_4298_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4302_);
lean_dec(v___y_4301_);
lean_dec_ref(v___y_4300_);
lean_dec(v___y_4299_);
lean_dec(v___y_4298_);
lean_dec_ref(v_as_4294_);
lean_dec_ref(v_c_4292_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg(lean_object* v_info_4338_, lean_object* v_a_4339_){
_start:
{
lean_object* v_numDigits_4341_; uint64_t v_anchor_4342_; lean_object* v_ordinal_4343_; lean_object* v___x_4344_; 
v_numDigits_4341_ = lean_ctor_get(v_info_4338_, 0);
v_anchor_4342_ = lean_ctor_get_uint64(v_info_4338_, sizeof(void*)*2);
v_ordinal_4343_ = lean_ctor_get(v_info_4338_, 1);
v___x_4344_ = l_Lean_Meta_Grind_mkAnchorSyntax___redArg(v_numDigits_4341_, v_anchor_4342_, v_a_4339_);
if (lean_obj_tag(v___x_4344_) == 0)
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4381_; 
v_a_4345_ = lean_ctor_get(v___x_4344_, 0);
v_isSharedCheck_4381_ = !lean_is_exclusive(v___x_4344_);
if (v_isSharedCheck_4381_ == 0)
{
v___x_4347_ = v___x_4344_;
v_isShared_4348_ = v_isSharedCheck_4381_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v___x_4344_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4381_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4349_; uint8_t v___x_4350_; 
v___x_4349_ = lean_unsigned_to_nat(0u);
v___x_4350_ = lean_nat_dec_eq(v_ordinal_4343_, v___x_4349_);
if (v___x_4350_ == 0)
{
lean_object* v_ref_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4367_; 
v_ref_4351_ = lean_ctor_get(v_a_4339_, 2);
v___x_4352_ = l_Lean_SourceInfo_fromRef(v_ref_4351_, v___x_4350_);
v___x_4353_ = ((lean_object*)(l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__2));
v___x_4354_ = ((lean_object*)(l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3));
lean_inc_n(v___x_4352_, 3);
v___x_4355_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4355_, 0, v___x_4352_);
lean_ctor_set(v___x_4355_, 1, v___x_4353_);
v___x_4356_ = ((lean_object*)(l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__5));
v___x_4357_ = ((lean_object*)(l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__6));
v___x_4358_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4358_, 0, v___x_4352_);
lean_ctor_set(v___x_4358_, 1, v___x_4357_);
v___x_4359_ = lean_unsigned_to_nat(1u);
v___x_4360_ = lean_nat_add(v_ordinal_4343_, v___x_4359_);
v___x_4361_ = l_Nat_reprFast(v___x_4360_);
v___x_4362_ = lean_box(2);
v___x_4363_ = l_Lean_Syntax_mkNumLit(v___x_4361_, v___x_4362_);
v___x_4364_ = l_Lean_Syntax_node3(v___x_4352_, v___x_4356_, v_a_4345_, v___x_4358_, v___x_4363_);
v___x_4365_ = l_Lean_Syntax_node2(v___x_4352_, v___x_4354_, v___x_4355_, v___x_4364_);
if (v_isShared_4348_ == 0)
{
lean_ctor_set(v___x_4347_, 0, v___x_4365_);
v___x_4367_ = v___x_4347_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v___x_4365_);
v___x_4367_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
return v___x_4367_;
}
}
else
{
lean_object* v_ref_4369_; uint8_t v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4379_; 
v_ref_4369_ = lean_ctor_get(v_a_4339_, 2);
v___x_4370_ = 0;
v___x_4371_ = l_Lean_SourceInfo_fromRef(v_ref_4369_, v___x_4370_);
v___x_4372_ = ((lean_object*)(l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__2));
v___x_4373_ = ((lean_object*)(l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__3));
lean_inc_n(v___x_4371_, 2);
v___x_4374_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4371_);
lean_ctor_set(v___x_4374_, 1, v___x_4372_);
v___x_4375_ = ((lean_object*)(l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___closed__8));
v___x_4376_ = l_Lean_Syntax_node1(v___x_4371_, v___x_4375_, v_a_4345_);
v___x_4377_ = l_Lean_Syntax_node2(v___x_4371_, v___x_4373_, v___x_4374_, v___x_4376_);
if (v_isShared_4348_ == 0)
{
lean_ctor_set(v___x_4347_, 0, v___x_4377_);
v___x_4379_ = v___x_4347_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v___x_4377_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
return v___x_4379_;
}
}
}
}
else
{
return v___x_4344_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg___boxed(lean_object* v_info_4382_, lean_object* v_a_4383_, lean_object* v_a_4384_){
_start:
{
lean_object* v_res_4385_; 
v_res_4385_ = l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg(v_info_4382_, v_a_4383_);
lean_dec_ref(v_a_4383_);
lean_dec_ref(v_info_4382_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax(lean_object* v_info_4386_, lean_object* v_a_4387_, lean_object* v_a_4388_){
_start:
{
lean_object* v___x_4390_; 
v___x_4390_ = l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg(v_info_4386_, v_a_4387_);
return v___x_4390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___boxed(lean_object* v_info_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_){
_start:
{
lean_object* v_res_4395_; 
v_res_4395_ = l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax(v_info_4391_, v_a_4392_, v_a_4393_);
lean_dec(v_a_4393_);
lean_dec_ref(v_a_4392_);
lean_dec_ref(v_info_4391_);
return v_res_4395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go(lean_object* v_proof_4408_, lean_object* v_a_4409_, lean_object* v_a_4410_, lean_object* v_a_4411_, lean_object* v_a_4412_){
_start:
{
lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v_p_4427_; lean_object* v___x_4430_; 
lean_inc_ref(v_proof_4408_);
v___x_4430_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_proof_4408_, v_a_4410_);
if (lean_obj_tag(v___x_4430_) == 0)
{
lean_object* v_a_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4457_; 
v_a_4431_ = lean_ctor_get(v___x_4430_, 0);
v_isSharedCheck_4457_ = !lean_is_exclusive(v___x_4430_);
if (v_isSharedCheck_4457_ == 0)
{
v___x_4433_ = v___x_4430_;
v_isShared_4434_ = v_isSharedCheck_4457_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_a_4431_);
lean_dec(v___x_4430_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4457_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v___x_4435_; uint8_t v___x_4436_; 
v___x_4435_ = l_Lean_Expr_cleanupAnnotations(v_a_4431_);
lean_dec(v_a_4431_);
v___x_4436_ = l_Lean_Expr_isApp(v___x_4435_);
if (v___x_4436_ == 0)
{
lean_dec_ref(v___x_4435_);
lean_del_object(v___x_4433_);
v___y_4415_ = v_a_4409_;
v___y_4416_ = v_a_4410_;
v___y_4417_ = v_a_4411_;
v___y_4418_ = v_a_4412_;
goto v___jp_4414_;
}
else
{
lean_object* v___x_4437_; uint8_t v___x_4438_; 
v___x_4437_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4435_);
v___x_4438_ = l_Lean_Expr_isApp(v___x_4437_);
if (v___x_4438_ == 0)
{
lean_dec_ref(v___x_4437_);
lean_dec_ref(v___x_4435_);
lean_del_object(v___x_4433_);
v___y_4415_ = v_a_4409_;
v___y_4416_ = v_a_4410_;
v___y_4417_ = v_a_4411_;
v___y_4418_ = v_a_4412_;
goto v___jp_4414_;
}
else
{
lean_object* v_arg_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; uint8_t v___x_4442_; 
v_arg_4439_ = lean_ctor_get(v___x_4435_, 1);
lean_inc_ref(v_arg_4439_);
lean_dec_ref(v___x_4435_);
v___x_4440_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4437_);
v___x_4441_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__1));
v___x_4442_ = l_Lean_Expr_isConstOf(v___x_4440_, v___x_4441_);
if (v___x_4442_ == 0)
{
lean_object* v___x_4443_; uint8_t v___x_4444_; 
lean_dec_ref(v___x_4437_);
lean_del_object(v___x_4433_);
v___x_4443_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__4));
v___x_4444_ = l_Lean_Expr_isConstOf(v___x_4440_, v___x_4443_);
if (v___x_4444_ == 0)
{
lean_object* v___x_4445_; uint8_t v___x_4446_; 
v___x_4445_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__6));
v___x_4446_ = l_Lean_Expr_isConstOf(v___x_4440_, v___x_4445_);
lean_dec_ref(v___x_4440_);
if (v___x_4446_ == 0)
{
lean_dec_ref(v_arg_4439_);
v___y_4415_ = v_a_4409_;
v___y_4416_ = v_a_4410_;
v___y_4417_ = v_a_4411_;
v___y_4418_ = v_a_4412_;
goto v___jp_4414_;
}
else
{
lean_dec_ref(v_proof_4408_);
v_p_4427_ = v_arg_4439_;
goto v___jp_4426_;
}
}
else
{
lean_dec_ref(v___x_4440_);
lean_dec_ref(v_proof_4408_);
v_p_4427_ = v_arg_4439_;
goto v___jp_4426_;
}
}
else
{
lean_object* v_arg_4447_; uint8_t v___x_4448_; 
lean_dec_ref(v___x_4440_);
lean_dec_ref(v_proof_4408_);
v_arg_4447_ = lean_ctor_get(v___x_4437_, 1);
lean_inc_ref(v_arg_4447_);
lean_dec_ref(v___x_4437_);
v___x_4448_ = l_Lean_Expr_isFalse(v_arg_4447_);
lean_dec_ref(v_arg_4447_);
if (v___x_4448_ == 0)
{
lean_object* v___x_4449_; lean_object* v___x_4451_; 
lean_dec_ref(v_arg_4439_);
v___x_4449_ = lean_box(0);
if (v_isShared_4434_ == 0)
{
lean_ctor_set(v___x_4433_, 0, v___x_4449_);
v___x_4451_ = v___x_4433_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v___x_4449_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
return v___x_4451_;
}
}
else
{
lean_object* v___x_4453_; lean_object* v___x_4455_; 
v___x_4453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4453_, 0, v_arg_4439_);
if (v_isShared_4434_ == 0)
{
lean_ctor_set(v___x_4433_, 0, v___x_4453_);
v___x_4455_ = v___x_4433_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v___x_4453_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
return v___x_4455_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4465_; 
lean_dec_ref(v_proof_4408_);
v_a_4458_ = lean_ctor_get(v___x_4430_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v___x_4430_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4460_ = v___x_4430_;
v_isShared_4461_ = v_isSharedCheck_4465_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_a_4458_);
lean_dec(v___x_4430_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4465_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v___x_4463_; 
if (v_isShared_4461_ == 0)
{
v___x_4463_ = v___x_4460_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v_a_4458_);
v___x_4463_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
return v___x_4463_;
}
}
}
v___jp_4414_:
{
if (lean_obj_tag(v_proof_4408_) == 6)
{
lean_object* v_body_4419_; uint8_t v___x_4420_; 
v_body_4419_ = lean_ctor_get(v_proof_4408_, 2);
lean_inc_ref(v_body_4419_);
lean_dec_ref_known(v_proof_4408_, 3);
v___x_4420_ = l_Lean_Expr_hasLooseBVars(v_body_4419_);
if (v___x_4420_ == 0)
{
v_proof_4408_ = v_body_4419_;
v_a_4409_ = v___y_4415_;
v_a_4410_ = v___y_4416_;
v_a_4411_ = v___y_4417_;
v_a_4412_ = v___y_4418_;
goto _start;
}
else
{
lean_object* v___x_4422_; lean_object* v___x_4423_; 
lean_dec_ref(v_body_4419_);
v___x_4422_ = lean_box(0);
v___x_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4422_);
return v___x_4423_;
}
}
else
{
lean_object* v___x_4424_; lean_object* v___x_4425_; 
lean_dec_ref(v_proof_4408_);
v___x_4424_ = lean_box(0);
v___x_4425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4424_);
return v___x_4425_;
}
}
v___jp_4426_:
{
lean_object* v___x_4428_; lean_object* v___x_4429_; 
v___x_4428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4428_, 0, v_p_4427_);
v___x_4429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4429_, 0, v___x_4428_);
return v___x_4429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___boxed(lean_object* v_proof_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_, lean_object* v_a_4470_, lean_object* v_a_4471_){
_start:
{
lean_object* v_res_4472_; 
v_res_4472_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go(v_proof_4466_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_);
lean_dec(v_a_4470_);
lean_dec_ref(v_a_4469_);
lean_dec(v_a_4468_);
lean_dec_ref(v_a_4467_);
return v_res_4472_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___redArg(lean_object* v_e_4473_, lean_object* v___y_4474_){
_start:
{
uint8_t v___x_4476_; 
v___x_4476_ = l_Lean_Expr_hasMVar(v_e_4473_);
if (v___x_4476_ == 0)
{
lean_object* v___x_4477_; 
v___x_4477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4477_, 0, v_e_4473_);
return v___x_4477_;
}
else
{
lean_object* v___x_4478_; lean_object* v_mctx_4479_; lean_object* v___x_4480_; lean_object* v_fst_4481_; lean_object* v_snd_4482_; lean_object* v___x_4483_; lean_object* v_cache_4484_; lean_object* v_zetaDeltaFVarIds_4485_; lean_object* v_postponed_4486_; lean_object* v_diag_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4496_; 
v___x_4478_ = lean_st_ref_get(v___y_4474_);
v_mctx_4479_ = lean_ctor_get(v___x_4478_, 0);
lean_inc_ref(v_mctx_4479_);
lean_dec(v___x_4478_);
v___x_4480_ = l_Lean_instantiateMVarsCore(v_mctx_4479_, v_e_4473_);
v_fst_4481_ = lean_ctor_get(v___x_4480_, 0);
lean_inc(v_fst_4481_);
v_snd_4482_ = lean_ctor_get(v___x_4480_, 1);
lean_inc(v_snd_4482_);
lean_dec_ref(v___x_4480_);
v___x_4483_ = lean_st_ref_take(v___y_4474_);
v_cache_4484_ = lean_ctor_get(v___x_4483_, 1);
v_zetaDeltaFVarIds_4485_ = lean_ctor_get(v___x_4483_, 2);
v_postponed_4486_ = lean_ctor_get(v___x_4483_, 3);
v_diag_4487_ = lean_ctor_get(v___x_4483_, 4);
v_isSharedCheck_4496_ = !lean_is_exclusive(v___x_4483_);
if (v_isSharedCheck_4496_ == 0)
{
lean_object* v_unused_4497_; 
v_unused_4497_ = lean_ctor_get(v___x_4483_, 0);
lean_dec(v_unused_4497_);
v___x_4489_ = v___x_4483_;
v_isShared_4490_ = v_isSharedCheck_4496_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_diag_4487_);
lean_inc(v_postponed_4486_);
lean_inc(v_zetaDeltaFVarIds_4485_);
lean_inc(v_cache_4484_);
lean_dec(v___x_4483_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4496_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v___x_4492_; 
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v_snd_4482_);
v___x_4492_ = v___x_4489_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_snd_4482_);
lean_ctor_set(v_reuseFailAlloc_4495_, 1, v_cache_4484_);
lean_ctor_set(v_reuseFailAlloc_4495_, 2, v_zetaDeltaFVarIds_4485_);
lean_ctor_set(v_reuseFailAlloc_4495_, 3, v_postponed_4486_);
lean_ctor_set(v_reuseFailAlloc_4495_, 4, v_diag_4487_);
v___x_4492_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4493_ = lean_st_ref_put(v___y_4474_, v___x_4492_);
v___x_4494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4494_, 0, v_fst_4481_);
return v___x_4494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___redArg___boxed(lean_object* v_e_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_){
_start:
{
lean_object* v_res_4501_; 
v_res_4501_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___redArg(v_e_4498_, v___y_4499_);
lean_dec(v___y_4499_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0(lean_object* v_e_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v___x_4508_; 
v___x_4508_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___redArg(v_e_4502_, v___y_4504_);
return v___x_4508_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___boxed(lean_object* v_e_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_){
_start:
{
lean_object* v_res_4515_; 
v_res_4515_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0(v_e_4509_, v___y_4510_, v___y_4511_, v___y_4512_, v___y_4513_);
lean_dec(v___y_4513_);
lean_dec_ref(v___y_4512_);
lean_dec(v___y_4511_);
lean_dec_ref(v___y_4510_);
return v_res_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___redArg(lean_object* v_mvarId_4516_, lean_object* v_x_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_){
_start:
{
lean_object* v___x_4523_; 
v___x_4523_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4516_, v_x_4517_, v___y_4518_, v___y_4519_, v___y_4520_, v___y_4521_);
if (lean_obj_tag(v___x_4523_) == 0)
{
lean_object* v_a_4524_; lean_object* v___x_4526_; uint8_t v_isShared_4527_; uint8_t v_isSharedCheck_4531_; 
v_a_4524_ = lean_ctor_get(v___x_4523_, 0);
v_isSharedCheck_4531_ = !lean_is_exclusive(v___x_4523_);
if (v_isSharedCheck_4531_ == 0)
{
v___x_4526_ = v___x_4523_;
v_isShared_4527_ = v_isSharedCheck_4531_;
goto v_resetjp_4525_;
}
else
{
lean_inc(v_a_4524_);
lean_dec(v___x_4523_);
v___x_4526_ = lean_box(0);
v_isShared_4527_ = v_isSharedCheck_4531_;
goto v_resetjp_4525_;
}
v_resetjp_4525_:
{
lean_object* v___x_4529_; 
if (v_isShared_4527_ == 0)
{
v___x_4529_ = v___x_4526_;
goto v_reusejp_4528_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v_a_4524_);
v___x_4529_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4528_;
}
v_reusejp_4528_:
{
return v___x_4529_;
}
}
}
else
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4539_; 
v_a_4532_ = lean_ctor_get(v___x_4523_, 0);
v_isSharedCheck_4539_ = !lean_is_exclusive(v___x_4523_);
if (v_isSharedCheck_4539_ == 0)
{
v___x_4534_ = v___x_4523_;
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4523_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v___x_4537_; 
if (v_isShared_4535_ == 0)
{
v___x_4537_ = v___x_4534_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v_a_4532_);
v___x_4537_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
return v___x_4537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___redArg___boxed(lean_object* v_mvarId_4540_, lean_object* v_x_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_){
_start:
{
lean_object* v_res_4547_; 
v_res_4547_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___redArg(v_mvarId_4540_, v_x_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
lean_dec(v___y_4545_);
lean_dec_ref(v___y_4544_);
lean_dec(v___y_4543_);
lean_dec_ref(v___y_4542_);
return v_res_4547_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1(lean_object* v_00_u03b1_4548_, lean_object* v_mvarId_4549_, lean_object* v_x_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_){
_start:
{
lean_object* v___x_4556_; 
v___x_4556_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___redArg(v_mvarId_4549_, v_x_4550_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_);
return v___x_4556_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___boxed(lean_object* v_00_u03b1_4557_, lean_object* v_mvarId_4558_, lean_object* v_x_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_){
_start:
{
lean_object* v_res_4565_; 
v_res_4565_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1(v_00_u03b1_4557_, v_mvarId_4558_, v_x_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_);
lean_dec(v___y_4563_);
lean_dec_ref(v___y_4562_);
lean_dec(v___y_4561_);
lean_dec_ref(v___y_4560_);
return v_res_4565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f___lam__0(lean_object* v___x_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_){
_start:
{
lean_object* v___x_4572_; lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4583_; 
v___x_4572_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__0___redArg(v___x_4566_, v___y_4568_);
v_a_4573_ = lean_ctor_get(v___x_4572_, 0);
v_isSharedCheck_4583_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4583_ == 0)
{
v___x_4575_ = v___x_4572_;
v_isShared_4576_ = v_isSharedCheck_4583_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v___x_4572_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4583_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
uint8_t v___x_4577_; 
v___x_4577_ = l_Lean_Expr_hasSyntheticSorry(v_a_4573_);
if (v___x_4577_ == 0)
{
lean_object* v___x_4578_; 
lean_del_object(v___x_4575_);
v___x_4578_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go(v_a_4573_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
return v___x_4578_;
}
else
{
lean_object* v___x_4579_; lean_object* v___x_4581_; 
lean_dec(v_a_4573_);
v___x_4579_ = lean_box(0);
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 0, v___x_4579_);
v___x_4581_ = v___x_4575_;
goto v_reusejp_4580_;
}
else
{
lean_object* v_reuseFailAlloc_4582_; 
v_reuseFailAlloc_4582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4582_, 0, v___x_4579_);
v___x_4581_ = v_reuseFailAlloc_4582_;
goto v_reusejp_4580_;
}
v_reusejp_4580_:
{
return v___x_4581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f___lam__0___boxed(lean_object* v___x_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f___lam__0(v___x_4584_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_);
lean_dec(v___y_4588_);
lean_dec_ref(v___y_4587_);
lean_dec(v___y_4586_);
lean_dec_ref(v___y_4585_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(lean_object* v_mvarId_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_){
_start:
{
lean_object* v___x_4597_; lean_object* v___f_4598_; lean_object* v___x_4599_; 
lean_inc(v_mvarId_4591_);
v___x_4597_ = l_Lean_mkMVar(v_mvarId_4591_);
v___f_4598_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4598_, 0, v___x_4597_);
v___x_4599_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_spec__1___redArg(v_mvarId_4591_, v___f_4598_, v_a_4592_, v_a_4593_, v_a_4594_, v_a_4595_);
return v___x_4599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f___boxed(lean_object* v_mvarId_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_){
_start:
{
lean_object* v_res_4606_; 
v_res_4606_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(v_mvarId_4600_, v_a_4601_, v_a_4602_, v_a_4603_, v_a_4604_);
lean_dec(v_a_4604_);
lean_dec_ref(v_a_4603_);
lean_dec(v_a_4602_);
lean_dec_ref(v_a_4601_);
return v_res_4606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback___redArg(lean_object* v_mvarId_4607_, lean_object* v_a_4608_, lean_object* v_a_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_){
_start:
{
lean_object* v___x_4613_; 
v___x_4613_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(v_mvarId_4607_, v_a_4608_, v_a_4609_, v_a_4610_, v_a_4611_);
return v___x_4613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback___redArg___boxed(lean_object* v_mvarId_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_){
_start:
{
lean_object* v_res_4620_; 
v_res_4620_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback___redArg(v_mvarId_4614_, v_a_4615_, v_a_4616_, v_a_4617_, v_a_4618_);
lean_dec(v_a_4618_);
lean_dec_ref(v_a_4617_);
lean_dec(v_a_4616_);
lean_dec_ref(v_a_4615_);
return v_res_4620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback(lean_object* v_mvarId_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_, lean_object* v_a_4629_, lean_object* v_a_4630_){
_start:
{
lean_object* v___x_4632_; 
v___x_4632_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(v_mvarId_4621_, v_a_4627_, v_a_4628_, v_a_4629_, v_a_4630_);
return v___x_4632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback___boxed(lean_object* v_mvarId_4633_, lean_object* v_a_4634_, lean_object* v_a_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_fallback(v_mvarId_4633_, v_a_4634_, v_a_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_, v_a_4642_);
lean_dec(v_a_4642_);
lean_dec_ref(v_a_4641_);
lean_dec(v_a_4640_);
lean_dec_ref(v_a_4639_);
lean_dec(v_a_4638_);
lean_dec_ref(v_a_4637_);
lean_dec(v_a_4636_);
lean_dec_ref(v_a_4635_);
lean_dec(v_a_4634_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_lambdaBody(lean_object* v_a_4645_, lean_object* v_a_4646_){
_start:
{
lean_object* v_zero_4647_; uint8_t v_isZero_4648_; 
v_zero_4647_ = lean_unsigned_to_nat(0u);
v_isZero_4648_ = lean_nat_dec_eq(v_a_4645_, v_zero_4647_);
if (v_isZero_4648_ == 0)
{
if (lean_obj_tag(v_a_4646_) == 6)
{
lean_object* v_body_4649_; lean_object* v_one_4650_; lean_object* v_n_4651_; 
v_body_4649_ = lean_ctor_get(v_a_4646_, 2);
v_one_4650_ = lean_unsigned_to_nat(1u);
v_n_4651_ = lean_nat_sub(v_a_4645_, v_one_4650_);
lean_dec(v_a_4645_);
v_a_4645_ = v_n_4651_;
v_a_4646_ = v_body_4649_;
goto _start;
}
else
{
lean_dec(v_a_4645_);
lean_inc_ref(v_a_4646_);
return v_a_4646_;
}
}
else
{
lean_dec(v_a_4645_);
lean_inc_ref(v_a_4646_);
return v_a_4646_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_lambdaBody___boxed(lean_object* v_a_4653_, lean_object* v_a_4654_){
_start:
{
lean_object* v_res_4655_; 
v_res_4655_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_lambdaBody(v_a_4653_, v_a_4654_);
lean_dec_ref(v_a_4654_);
return v_res_4655_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___redArg(lean_object* v_mvarId_4656_, lean_object* v___y_4657_){
_start:
{
lean_object* v___x_4659_; lean_object* v_mctx_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4659_ = lean_st_ref_get(v___y_4657_);
v_mctx_4660_ = lean_ctor_get(v___x_4659_, 0);
lean_inc_ref(v_mctx_4660_);
lean_dec(v___x_4659_);
v___x_4661_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_4660_, v_mvarId_4656_);
lean_dec_ref(v_mctx_4660_);
v___x_4662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4662_, 0, v___x_4661_);
return v___x_4662_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___redArg___boxed(lean_object* v_mvarId_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_){
_start:
{
lean_object* v_res_4666_; 
v_res_4666_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___redArg(v_mvarId_4663_, v___y_4664_);
lean_dec(v___y_4664_);
lean_dec(v_mvarId_4663_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1(lean_object* v_mvarId_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_){
_start:
{
lean_object* v___x_4678_; 
v___x_4678_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___redArg(v_mvarId_4667_, v___y_4674_);
return v___x_4678_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___boxed(lean_object* v_mvarId_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_){
_start:
{
lean_object* v_res_4690_; 
v_res_4690_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1(v_mvarId_4679_, v___y_4680_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_);
lean_dec(v___y_4688_);
lean_dec_ref(v___y_4687_);
lean_dec(v___y_4686_);
lean_dec_ref(v___y_4685_);
lean_dec(v___y_4684_);
lean_dec_ref(v___y_4683_);
lean_dec(v___y_4682_);
lean_dec_ref(v___y_4681_);
lean_dec(v___y_4680_);
lean_dec(v_mvarId_4679_);
return v_res_4690_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___redArg(lean_object* v_mvarId_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v___x_4694_; lean_object* v_mctx_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; 
v___x_4694_ = lean_st_ref_get(v___y_4692_);
v_mctx_4695_ = lean_ctor_get(v___x_4694_, 0);
lean_inc_ref(v_mctx_4695_);
lean_dec(v___x_4694_);
v___x_4696_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_4695_, v_mvarId_4691_);
lean_dec_ref(v_mctx_4695_);
v___x_4697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4697_, 0, v___x_4696_);
return v___x_4697_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___redArg___boxed(lean_object* v_mvarId_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_){
_start:
{
lean_object* v_res_4701_; 
v_res_4701_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___redArg(v_mvarId_4698_, v___y_4699_);
lean_dec(v___y_4699_);
lean_dec(v_mvarId_4698_);
return v_res_4701_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4(lean_object* v_mvarId_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_){
_start:
{
lean_object* v___x_4713_; 
v___x_4713_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___redArg(v_mvarId_4702_, v___y_4709_);
return v___x_4713_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___boxed(lean_object* v_mvarId_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
lean_object* v_res_4725_; 
v_res_4725_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4(v_mvarId_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_);
lean_dec(v___y_4723_);
lean_dec_ref(v___y_4722_);
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4720_);
lean_dec(v___y_4719_);
lean_dec_ref(v___y_4718_);
lean_dec(v___y_4717_);
lean_dec_ref(v___y_4716_);
lean_dec(v___y_4715_);
lean_dec(v_mvarId_4714_);
return v_res_4725_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__0(lean_object* v___x_4726_, lean_object* v_x_4727_){
_start:
{
if (lean_obj_tag(v_x_4727_) == 0)
{
uint8_t v___x_4728_; 
v___x_4728_ = 1;
return v___x_4728_;
}
else
{
lean_object* v_head_4729_; lean_object* v_tail_4730_; lean_object* v_fst_4731_; lean_object* v_snd_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; uint8_t v___x_4737_; 
v_head_4729_ = lean_ctor_get(v_x_4727_, 0);
v_tail_4730_ = lean_ctor_get(v_x_4727_, 1);
v_fst_4731_ = lean_ctor_get(v_head_4729_, 0);
v_snd_4732_ = lean_ctor_get(v_head_4729_, 1);
v___x_4733_ = lean_unsigned_to_nat(1u);
v___x_4734_ = lean_nat_sub(v___x_4726_, v___x_4733_);
v___x_4735_ = lean_nat_sub(v___x_4734_, v_snd_4732_);
lean_dec(v___x_4734_);
v___x_4736_ = l_Lean_mkBVar(v___x_4735_);
v___x_4737_ = lean_expr_eqv(v_fst_4731_, v___x_4736_);
lean_dec_ref(v___x_4736_);
if (v___x_4737_ == 0)
{
return v___x_4737_;
}
else
{
v_x_4727_ = v_tail_4730_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__0___boxed(lean_object* v___x_4739_, lean_object* v_x_4740_){
_start:
{
uint8_t v_res_4741_; lean_object* v_r_4742_; 
v_res_4741_ = l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__0(v___x_4739_, v_x_4740_);
lean_dec(v_x_4740_);
lean_dec(v___x_4739_);
v_r_4742_ = lean_box(v_res_4741_);
return v_r_4742_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___redArg(lean_object* v_k_4743_, lean_object* v_t_4744_){
_start:
{
if (lean_obj_tag(v_t_4744_) == 0)
{
lean_object* v_k_4745_; lean_object* v_l_4746_; lean_object* v_r_4747_; uint8_t v___x_4748_; 
v_k_4745_ = lean_ctor_get(v_t_4744_, 1);
v_l_4746_ = lean_ctor_get(v_t_4744_, 3);
v_r_4747_ = lean_ctor_get(v_t_4744_, 4);
v___x_4748_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4743_, v_k_4745_);
switch(v___x_4748_)
{
case 0:
{
v_t_4744_ = v_l_4746_;
goto _start;
}
case 1:
{
uint8_t v___x_4750_; 
v___x_4750_ = 1;
return v___x_4750_;
}
default: 
{
v_t_4744_ = v_r_4747_;
goto _start;
}
}
}
else
{
uint8_t v___x_4752_; 
v___x_4752_ = 0;
return v___x_4752_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___redArg___boxed(lean_object* v_k_4753_, lean_object* v_t_4754_){
_start:
{
uint8_t v_res_4755_; lean_object* v_r_4756_; 
v_res_4755_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___redArg(v_k_4753_, v_t_4754_);
lean_dec(v_t_4754_);
lean_dec(v_k_4753_);
v_r_4756_ = lean_box(v_res_4755_);
return v_r_4756_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__3(lean_object* v_a_4757_, lean_object* v_as_4758_, size_t v_i_4759_, size_t v_stop_4760_){
_start:
{
uint8_t v___x_4761_; 
v___x_4761_ = lean_usize_dec_eq(v_i_4759_, v_stop_4760_);
if (v___x_4761_ == 0)
{
lean_object* v_fvars_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; uint8_t v___x_4765_; 
v_fvars_4762_ = lean_ctor_get(v_a_4757_, 0);
v___x_4763_ = lean_array_uget_borrowed(v_as_4758_, v_i_4759_);
v___x_4764_ = l_Lean_Expr_fvarId_x21(v___x_4763_);
v___x_4765_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___redArg(v___x_4764_, v_fvars_4762_);
lean_dec(v___x_4764_);
if (v___x_4765_ == 0)
{
size_t v___x_4766_; size_t v___x_4767_; 
v___x_4766_ = ((size_t)1ULL);
v___x_4767_ = lean_usize_add(v_i_4759_, v___x_4766_);
v_i_4759_ = v___x_4767_;
goto _start;
}
else
{
return v___x_4765_;
}
}
else
{
uint8_t v___x_4769_; 
v___x_4769_ = 0;
return v___x_4769_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__3___boxed(lean_object* v_a_4770_, lean_object* v_as_4771_, lean_object* v_i_4772_, lean_object* v_stop_4773_){
_start:
{
size_t v_i_boxed_4774_; size_t v_stop_boxed_4775_; uint8_t v_res_4776_; lean_object* v_r_4777_; 
v_i_boxed_4774_ = lean_unbox_usize(v_i_4772_);
lean_dec(v_i_4772_);
v_stop_boxed_4775_ = lean_unbox_usize(v_stop_4773_);
lean_dec(v_stop_4773_);
v_res_4776_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__3(v_a_4770_, v_as_4771_, v_i_boxed_4774_, v_stop_boxed_4775_);
lean_dec_ref(v_as_4771_);
lean_dec_ref(v_a_4770_);
v_r_4777_ = lean_box(v_res_4776_);
return v_r_4777_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0(void){
_start:
{
lean_object* v___x_4778_; lean_object* v_dummy_4779_; 
v___x_4778_ = lean_box(0);
v_dummy_4779_ = l_Lean_Expr_sort___override(v___x_4778_);
return v_dummy_4779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go(lean_object* v_mvarId_4780_, lean_object* v_proof_4781_, lean_object* v_a_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_, lean_object* v_a_4786_, lean_object* v_a_4787_, lean_object* v_a_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_){
_start:
{
lean_object* v_p_4793_; lean_object* v_proof_4796_; lean_object* v___y_4798_; lean_object* v___y_4799_; lean_object* v___y_4800_; lean_object* v___y_4801_; lean_object* v___y_4802_; lean_object* v___y_4803_; lean_object* v___y_4804_; lean_object* v___y_4805_; lean_object* v___y_4806_; lean_object* v___y_4874_; lean_object* v___y_4875_; lean_object* v___y_4876_; lean_object* v___y_4877_; lean_object* v___y_4878_; lean_object* v___y_4879_; lean_object* v___y_4880_; lean_object* v___y_4881_; lean_object* v___y_4882_; lean_object* v___x_4919_; 
v_proof_4796_ = l_Lean_Expr_headBeta(v_proof_4781_);
v___x_4919_ = l_Lean_Expr_getAppFn(v_proof_4796_);
if (lean_obj_tag(v___x_4919_) == 2)
{
lean_object* v_mvarId_4920_; lean_object* v___x_4921_; 
v_mvarId_4920_ = lean_ctor_get(v___x_4919_, 0);
lean_inc(v_mvarId_4920_);
lean_dec_ref_known(v___x_4919_, 1);
v___x_4921_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__4___redArg(v_mvarId_4920_, v_a_4788_);
lean_dec(v_mvarId_4920_);
if (lean_obj_tag(v___x_4921_) == 0)
{
lean_object* v_a_4922_; 
v_a_4922_ = lean_ctor_get(v___x_4921_, 0);
lean_inc(v_a_4922_);
lean_dec_ref_known(v___x_4921_, 1);
if (lean_obj_tag(v_a_4922_) == 1)
{
lean_object* v_val_4923_; lean_object* v_dummy_4924_; lean_object* v_nargs_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; 
v_val_4923_ = lean_ctor_get(v_a_4922_, 0);
lean_inc(v_val_4923_);
lean_dec_ref_known(v_a_4922_, 1);
v_dummy_4924_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0);
v_nargs_4925_ = l_Lean_Expr_getAppNumArgs(v_proof_4796_);
lean_inc(v_nargs_4925_);
v___x_4926_ = lean_mk_array(v_nargs_4925_, v_dummy_4924_);
v___x_4927_ = lean_unsigned_to_nat(1u);
v___x_4928_ = lean_nat_sub(v_nargs_4925_, v___x_4927_);
lean_dec(v_nargs_4925_);
v___x_4929_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_proof_4796_, v___x_4926_, v___x_4928_);
v___x_4930_ = l_Lean_Expr_beta(v_val_4923_, v___x_4929_);
v_proof_4781_ = v___x_4930_;
goto _start;
}
else
{
lean_dec(v_a_4922_);
v___y_4874_ = v_a_4782_;
v___y_4875_ = v_a_4783_;
v___y_4876_ = v_a_4784_;
v___y_4877_ = v_a_4785_;
v___y_4878_ = v_a_4786_;
v___y_4879_ = v_a_4787_;
v___y_4880_ = v_a_4788_;
v___y_4881_ = v_a_4789_;
v___y_4882_ = v_a_4790_;
goto v___jp_4873_;
}
}
else
{
lean_dec_ref(v_proof_4796_);
lean_dec(v_mvarId_4780_);
return v___x_4921_;
}
}
else
{
lean_dec_ref(v___x_4919_);
v___y_4874_ = v_a_4782_;
v___y_4875_ = v_a_4783_;
v___y_4876_ = v_a_4784_;
v___y_4877_ = v_a_4785_;
v___y_4878_ = v_a_4786_;
v___y_4879_ = v_a_4787_;
v___y_4880_ = v_a_4788_;
v___y_4881_ = v_a_4789_;
v___y_4882_ = v_a_4790_;
goto v___jp_4873_;
}
v___jp_4792_:
{
lean_object* v___x_4794_; lean_object* v___x_4795_; 
v___x_4794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4794_, 0, v_p_4793_);
v___x_4795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4795_, 0, v___x_4794_);
return v___x_4795_;
}
v___jp_4797_:
{
if (lean_obj_tag(v_proof_4796_) == 6)
{
lean_object* v___x_4807_; lean_object* v___x_4808_; uint8_t v___x_4809_; 
v___x_4807_ = l_Lean_Expr_getNumHeadLambdas(v_proof_4796_);
lean_inc(v___x_4807_);
v___x_4808_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_lambdaBody(v___x_4807_, v_proof_4796_);
lean_dec_ref_known(v_proof_4796_, 3);
v___x_4809_ = l_Lean_Expr_hasLooseBVars(v___x_4808_);
if (v___x_4809_ == 0)
{
lean_dec(v___x_4807_);
v_proof_4781_ = v___x_4808_;
v_a_4782_ = v___y_4798_;
v_a_4783_ = v___y_4799_;
v_a_4784_ = v___y_4800_;
v_a_4785_ = v___y_4801_;
v_a_4786_ = v___y_4802_;
v_a_4787_ = v___y_4803_;
v_a_4788_ = v___y_4804_;
v_a_4789_ = v___y_4805_;
v_a_4790_ = v___y_4806_;
goto _start;
}
else
{
lean_object* v___x_4811_; 
v___x_4811_ = l_Lean_Expr_getAppFn(v___x_4808_);
if (lean_obj_tag(v___x_4811_) == 2)
{
lean_object* v_mvarId_4812_; lean_object* v_dummy_4813_; lean_object* v_nargs_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; uint8_t v___x_4820_; 
v_mvarId_4812_ = lean_ctor_get(v___x_4811_, 0);
lean_inc(v_mvarId_4812_);
lean_dec_ref_known(v___x_4811_, 1);
v_dummy_4813_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___closed__0);
v_nargs_4814_ = l_Lean_Expr_getAppNumArgs(v___x_4808_);
lean_inc(v_nargs_4814_);
v___x_4815_ = lean_mk_array(v_nargs_4814_, v_dummy_4813_);
v___x_4816_ = lean_unsigned_to_nat(1u);
v___x_4817_ = lean_nat_sub(v_nargs_4814_, v___x_4816_);
lean_dec(v_nargs_4814_);
v___x_4818_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_4808_, v___x_4815_, v___x_4817_);
v___x_4819_ = lean_array_get_size(v___x_4818_);
v___x_4820_ = lean_nat_dec_eq(v___x_4819_, v___x_4807_);
if (v___x_4820_ == 0)
{
lean_object* v___x_4821_; 
lean_dec_ref(v___x_4818_);
lean_dec(v_mvarId_4812_);
lean_dec(v___x_4807_);
v___x_4821_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(v_mvarId_4780_, v___y_4803_, v___y_4804_, v___y_4805_, v___y_4806_);
return v___x_4821_;
}
else
{
lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; uint8_t v___x_4825_; 
v___x_4822_ = lean_array_to_list(v___x_4818_);
v___x_4823_ = lean_unsigned_to_nat(0u);
v___x_4824_ = l_List_zipIdxTR___redArg(v___x_4822_, v___x_4823_);
v___x_4825_ = l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__0(v___x_4807_, v___x_4824_);
lean_dec(v___x_4824_);
if (v___x_4825_ == 0)
{
lean_object* v___x_4826_; 
lean_dec(v_mvarId_4812_);
lean_dec(v___x_4807_);
v___x_4826_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(v_mvarId_4780_, v___y_4803_, v___y_4804_, v___y_4805_, v___y_4806_);
return v___x_4826_;
}
else
{
lean_object* v___x_4827_; 
v___x_4827_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__1___redArg(v_mvarId_4812_, v___y_4804_);
lean_dec(v_mvarId_4812_);
if (lean_obj_tag(v___x_4827_) == 0)
{
lean_object* v_a_4828_; 
v_a_4828_ = lean_ctor_get(v___x_4827_, 0);
lean_inc(v_a_4828_);
lean_dec_ref_known(v___x_4827_, 1);
if (lean_obj_tag(v_a_4828_) == 1)
{
lean_object* v_val_4829_; lean_object* v_fvars_4830_; lean_object* v_mvarIdPending_4831_; lean_object* v___x_4832_; uint8_t v___x_4833_; 
v_val_4829_ = lean_ctor_get(v_a_4828_, 0);
lean_inc(v_val_4829_);
lean_dec_ref_known(v_a_4828_, 1);
v_fvars_4830_ = lean_ctor_get(v_val_4829_, 0);
lean_inc_ref(v_fvars_4830_);
v_mvarIdPending_4831_ = lean_ctor_get(v_val_4829_, 1);
lean_inc(v_mvarIdPending_4831_);
lean_dec(v_val_4829_);
v___x_4832_ = lean_array_get_size(v_fvars_4830_);
v___x_4833_ = lean_nat_dec_eq(v___x_4832_, v___x_4807_);
lean_dec(v___x_4807_);
if (v___x_4833_ == 0)
{
lean_object* v___x_4834_; 
lean_dec(v_mvarIdPending_4831_);
lean_dec_ref(v_fvars_4830_);
v___x_4834_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(v_mvarId_4780_, v___y_4803_, v___y_4804_, v___y_4805_, v___y_4806_);
return v___x_4834_;
}
else
{
lean_object* v___x_4835_; lean_object* v___x_4836_; 
v___x_4835_ = l_Lean_mkMVar(v_mvarIdPending_4831_);
lean_inc_ref(v___x_4835_);
v___x_4836_ = l_Lean_Meta_Grind_getProofInfo(v___x_4835_, v___y_4798_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_, v___y_4805_, v___y_4806_);
if (lean_obj_tag(v___x_4836_) == 0)
{
lean_object* v_a_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4852_; 
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4852_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4839_ = v___x_4836_;
v_isShared_4840_ = v_isSharedCheck_4852_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_a_4837_);
lean_dec(v___x_4836_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4852_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
uint8_t v___x_4841_; 
v___x_4841_ = lean_nat_dec_lt(v___x_4823_, v___x_4832_);
if (v___x_4841_ == 0)
{
lean_del_object(v___x_4839_);
lean_dec(v_a_4837_);
lean_dec_ref(v_fvars_4830_);
v_proof_4781_ = v___x_4835_;
v_a_4782_ = v___y_4798_;
v_a_4783_ = v___y_4799_;
v_a_4784_ = v___y_4800_;
v_a_4785_ = v___y_4801_;
v_a_4786_ = v___y_4802_;
v_a_4787_ = v___y_4803_;
v_a_4788_ = v___y_4804_;
v_a_4789_ = v___y_4805_;
v_a_4790_ = v___y_4806_;
goto _start;
}
else
{
if (v___x_4841_ == 0)
{
lean_del_object(v___x_4839_);
lean_dec(v_a_4837_);
lean_dec_ref(v_fvars_4830_);
v_proof_4781_ = v___x_4835_;
v_a_4782_ = v___y_4798_;
v_a_4783_ = v___y_4799_;
v_a_4784_ = v___y_4800_;
v_a_4785_ = v___y_4801_;
v_a_4786_ = v___y_4802_;
v_a_4787_ = v___y_4803_;
v_a_4788_ = v___y_4804_;
v_a_4789_ = v___y_4805_;
v_a_4790_ = v___y_4806_;
goto _start;
}
else
{
size_t v___x_4844_; size_t v___x_4845_; uint8_t v___x_4846_; 
v___x_4844_ = ((size_t)0ULL);
v___x_4845_ = lean_usize_of_nat(v___x_4832_);
v___x_4846_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__3(v_a_4837_, v_fvars_4830_, v___x_4844_, v___x_4845_);
lean_dec_ref(v_fvars_4830_);
lean_dec(v_a_4837_);
if (v___x_4846_ == 0)
{
lean_del_object(v___x_4839_);
v_proof_4781_ = v___x_4835_;
v_a_4782_ = v___y_4798_;
v_a_4783_ = v___y_4799_;
v_a_4784_ = v___y_4800_;
v_a_4785_ = v___y_4801_;
v_a_4786_ = v___y_4802_;
v_a_4787_ = v___y_4803_;
v_a_4788_ = v___y_4804_;
v_a_4789_ = v___y_4805_;
v_a_4790_ = v___y_4806_;
goto _start;
}
else
{
lean_object* v___x_4848_; lean_object* v___x_4850_; 
lean_dec_ref(v___x_4835_);
lean_dec(v_mvarId_4780_);
v___x_4848_ = lean_box(0);
if (v_isShared_4840_ == 0)
{
lean_ctor_set(v___x_4839_, 0, v___x_4848_);
v___x_4850_ = v___x_4839_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v___x_4848_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
return v___x_4850_;
}
}
}
}
}
}
else
{
lean_object* v_a_4853_; lean_object* v___x_4855_; uint8_t v_isShared_4856_; uint8_t v_isSharedCheck_4860_; 
lean_dec_ref(v___x_4835_);
lean_dec_ref(v_fvars_4830_);
lean_dec(v_mvarId_4780_);
v_a_4853_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4860_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4860_ == 0)
{
v___x_4855_ = v___x_4836_;
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
else
{
lean_inc(v_a_4853_);
lean_dec(v___x_4836_);
v___x_4855_ = lean_box(0);
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
v_resetjp_4854_:
{
lean_object* v___x_4858_; 
if (v_isShared_4856_ == 0)
{
v___x_4858_ = v___x_4855_;
goto v_reusejp_4857_;
}
else
{
lean_object* v_reuseFailAlloc_4859_; 
v_reuseFailAlloc_4859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4859_, 0, v_a_4853_);
v___x_4858_ = v_reuseFailAlloc_4859_;
goto v_reusejp_4857_;
}
v_reusejp_4857_:
{
return v___x_4858_;
}
}
}
}
}
else
{
lean_object* v___x_4861_; 
lean_dec(v_a_4828_);
lean_dec(v___x_4807_);
v___x_4861_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(v_mvarId_4780_, v___y_4803_, v___y_4804_, v___y_4805_, v___y_4806_);
return v___x_4861_;
}
}
else
{
lean_object* v_a_4862_; lean_object* v___x_4864_; uint8_t v_isShared_4865_; uint8_t v_isSharedCheck_4869_; 
lean_dec(v___x_4807_);
lean_dec(v_mvarId_4780_);
v_a_4862_ = lean_ctor_get(v___x_4827_, 0);
v_isSharedCheck_4869_ = !lean_is_exclusive(v___x_4827_);
if (v_isSharedCheck_4869_ == 0)
{
v___x_4864_ = v___x_4827_;
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
else
{
lean_inc(v_a_4862_);
lean_dec(v___x_4827_);
v___x_4864_ = lean_box(0);
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
v_resetjp_4863_:
{
lean_object* v___x_4867_; 
if (v_isShared_4865_ == 0)
{
v___x_4867_ = v___x_4864_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v_a_4862_);
v___x_4867_ = v_reuseFailAlloc_4868_;
goto v_reusejp_4866_;
}
v_reusejp_4866_:
{
return v___x_4867_;
}
}
}
}
}
}
else
{
lean_object* v___x_4870_; 
lean_dec_ref(v___x_4811_);
lean_dec_ref(v___x_4808_);
lean_dec(v___x_4807_);
v___x_4870_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f(v_mvarId_4780_, v___y_4803_, v___y_4804_, v___y_4805_, v___y_4806_);
return v___x_4870_;
}
}
}
else
{
lean_object* v___x_4871_; lean_object* v___x_4872_; 
lean_dec_ref(v_proof_4796_);
lean_dec(v_mvarId_4780_);
v___x_4871_ = lean_box(0);
v___x_4872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4872_, 0, v___x_4871_);
return v___x_4872_;
}
}
v___jp_4873_:
{
lean_object* v___x_4883_; 
lean_inc_ref(v_proof_4796_);
v___x_4883_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_proof_4796_, v___y_4880_);
if (lean_obj_tag(v___x_4883_) == 0)
{
lean_object* v_a_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4910_; 
v_a_4884_ = lean_ctor_get(v___x_4883_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4883_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4886_ = v___x_4883_;
v_isShared_4887_ = v_isSharedCheck_4910_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_a_4884_);
lean_dec(v___x_4883_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4910_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v___x_4888_; uint8_t v___x_4889_; 
v___x_4888_ = l_Lean_Expr_cleanupAnnotations(v_a_4884_);
lean_dec(v_a_4884_);
v___x_4889_ = l_Lean_Expr_isApp(v___x_4888_);
if (v___x_4889_ == 0)
{
lean_dec_ref(v___x_4888_);
lean_del_object(v___x_4886_);
v___y_4798_ = v___y_4874_;
v___y_4799_ = v___y_4875_;
v___y_4800_ = v___y_4876_;
v___y_4801_ = v___y_4877_;
v___y_4802_ = v___y_4878_;
v___y_4803_ = v___y_4879_;
v___y_4804_ = v___y_4880_;
v___y_4805_ = v___y_4881_;
v___y_4806_ = v___y_4882_;
goto v___jp_4797_;
}
else
{
lean_object* v___x_4890_; uint8_t v___x_4891_; 
v___x_4890_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4888_);
v___x_4891_ = l_Lean_Expr_isApp(v___x_4890_);
if (v___x_4891_ == 0)
{
lean_dec_ref(v___x_4890_);
lean_dec_ref(v___x_4888_);
lean_del_object(v___x_4886_);
v___y_4798_ = v___y_4874_;
v___y_4799_ = v___y_4875_;
v___y_4800_ = v___y_4876_;
v___y_4801_ = v___y_4877_;
v___y_4802_ = v___y_4878_;
v___y_4803_ = v___y_4879_;
v___y_4804_ = v___y_4880_;
v___y_4805_ = v___y_4881_;
v___y_4806_ = v___y_4882_;
goto v___jp_4797_;
}
else
{
lean_object* v_arg_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; uint8_t v___x_4895_; 
v_arg_4892_ = lean_ctor_get(v___x_4888_, 1);
lean_inc_ref(v_arg_4892_);
lean_dec_ref(v___x_4888_);
v___x_4893_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4890_);
v___x_4894_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__1));
v___x_4895_ = l_Lean_Expr_isConstOf(v___x_4893_, v___x_4894_);
if (v___x_4895_ == 0)
{
lean_object* v___x_4896_; uint8_t v___x_4897_; 
lean_dec_ref(v___x_4890_);
lean_del_object(v___x_4886_);
v___x_4896_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__4));
v___x_4897_ = l_Lean_Expr_isConstOf(v___x_4893_, v___x_4896_);
if (v___x_4897_ == 0)
{
lean_object* v___x_4898_; uint8_t v___x_4899_; 
v___x_4898_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProofEager_x3f_go___closed__6));
v___x_4899_ = l_Lean_Expr_isConstOf(v___x_4893_, v___x_4898_);
lean_dec_ref(v___x_4893_);
if (v___x_4899_ == 0)
{
lean_dec_ref(v_arg_4892_);
v___y_4798_ = v___y_4874_;
v___y_4799_ = v___y_4875_;
v___y_4800_ = v___y_4876_;
v___y_4801_ = v___y_4877_;
v___y_4802_ = v___y_4878_;
v___y_4803_ = v___y_4879_;
v___y_4804_ = v___y_4880_;
v___y_4805_ = v___y_4881_;
v___y_4806_ = v___y_4882_;
goto v___jp_4797_;
}
else
{
lean_dec_ref(v_proof_4796_);
lean_dec(v_mvarId_4780_);
v_p_4793_ = v_arg_4892_;
goto v___jp_4792_;
}
}
else
{
lean_dec_ref(v___x_4893_);
lean_dec_ref(v_proof_4796_);
lean_dec(v_mvarId_4780_);
v_p_4793_ = v_arg_4892_;
goto v___jp_4792_;
}
}
else
{
lean_object* v_arg_4900_; uint8_t v___x_4901_; 
lean_dec_ref(v___x_4893_);
lean_dec_ref(v_proof_4796_);
lean_dec(v_mvarId_4780_);
v_arg_4900_ = lean_ctor_get(v___x_4890_, 1);
lean_inc_ref(v_arg_4900_);
lean_dec_ref(v___x_4890_);
v___x_4901_ = l_Lean_Expr_isFalse(v_arg_4900_);
lean_dec_ref(v_arg_4900_);
if (v___x_4901_ == 0)
{
lean_object* v___x_4902_; lean_object* v___x_4904_; 
lean_dec_ref(v_arg_4892_);
v___x_4902_ = lean_box(0);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 0, v___x_4902_);
v___x_4904_ = v___x_4886_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v___x_4902_);
v___x_4904_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
return v___x_4904_;
}
}
else
{
lean_object* v___x_4906_; lean_object* v___x_4908_; 
v___x_4906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4906_, 0, v_arg_4892_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 0, v___x_4906_);
v___x_4908_ = v___x_4886_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v___x_4906_);
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
}
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
lean_dec_ref(v_proof_4796_);
lean_dec(v_mvarId_4780_);
v_a_4911_ = lean_ctor_get(v___x_4883_, 0);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4883_);
if (v_isSharedCheck_4918_ == 0)
{
v___x_4913_ = v___x_4883_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4883_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_a_4911_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
return v___x_4916_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go___boxed(lean_object* v_mvarId_4932_, lean_object* v_proof_4933_, lean_object* v_a_4934_, lean_object* v_a_4935_, lean_object* v_a_4936_, lean_object* v_a_4937_, lean_object* v_a_4938_, lean_object* v_a_4939_, lean_object* v_a_4940_, lean_object* v_a_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_){
_start:
{
lean_object* v_res_4944_; 
v_res_4944_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go(v_mvarId_4932_, v_proof_4933_, v_a_4934_, v_a_4935_, v_a_4936_, v_a_4937_, v_a_4938_, v_a_4939_, v_a_4940_, v_a_4941_, v_a_4942_);
lean_dec(v_a_4942_);
lean_dec_ref(v_a_4941_);
lean_dec(v_a_4940_);
lean_dec_ref(v_a_4939_);
lean_dec(v_a_4938_);
lean_dec_ref(v_a_4937_);
lean_dec(v_a_4936_);
lean_dec_ref(v_a_4935_);
lean_dec(v_a_4934_);
return v_res_4944_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2(lean_object* v_00_u03b2_4945_, lean_object* v_k_4946_, lean_object* v_t_4947_){
_start:
{
uint8_t v___x_4948_; 
v___x_4948_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___redArg(v_k_4946_, v_t_4947_);
return v___x_4948_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2___boxed(lean_object* v_00_u03b2_4949_, lean_object* v_k_4950_, lean_object* v_t_4951_){
_start:
{
uint8_t v_res_4952_; lean_object* v_r_4953_; 
v_res_4952_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go_spec__2(v_00_u03b2_4949_, v_k_4950_, v_t_4951_);
lean_dec(v_t_4951_);
lean_dec(v_k_4950_);
v_r_4953_ = lean_box(v_res_4952_);
return v_r_4953_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg___lam__0(lean_object* v_x_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_){
_start:
{
lean_object* v___x_4965_; 
lean_inc(v___y_4959_);
lean_inc_ref(v___y_4958_);
lean_inc(v___y_4957_);
lean_inc_ref(v___y_4956_);
lean_inc(v___y_4955_);
v___x_4965_ = lean_apply_10(v_x_4954_, v___y_4955_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_, v___y_4960_, v___y_4961_, v___y_4962_, v___y_4963_, lean_box(0));
return v___x_4965_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg___lam__0___boxed(lean_object* v_x_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_){
_start:
{
lean_object* v_res_4977_; 
v_res_4977_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg___lam__0(v_x_4966_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_, v___y_4974_, v___y_4975_);
lean_dec(v___y_4971_);
lean_dec_ref(v___y_4970_);
lean_dec(v___y_4969_);
lean_dec_ref(v___y_4968_);
lean_dec(v___y_4967_);
return v_res_4977_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(lean_object* v_mvarId_4978_, lean_object* v_x_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_){
_start:
{
lean_object* v___f_4990_; lean_object* v___x_4991_; 
lean_inc(v___y_4984_);
lean_inc_ref(v___y_4983_);
lean_inc(v___y_4982_);
lean_inc_ref(v___y_4981_);
lean_inc(v___y_4980_);
v___f_4990_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_4990_, 0, v_x_4979_);
lean_closure_set(v___f_4990_, 1, v___y_4980_);
lean_closure_set(v___f_4990_, 2, v___y_4981_);
lean_closure_set(v___f_4990_, 3, v___y_4982_);
lean_closure_set(v___f_4990_, 4, v___y_4983_);
lean_closure_set(v___f_4990_, 5, v___y_4984_);
v___x_4991_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4978_, v___f_4990_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_);
if (lean_obj_tag(v___x_4991_) == 0)
{
return v___x_4991_;
}
else
{
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_4999_; 
v_a_4992_ = lean_ctor_get(v___x_4991_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4991_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4994_ = v___x_4991_;
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v___x_4991_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4997_; 
if (v_isShared_4995_ == 0)
{
v___x_4997_ = v___x_4994_;
goto v_reusejp_4996_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_a_4992_);
v___x_4997_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4996_;
}
v_reusejp_4996_:
{
return v___x_4997_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_5000_, lean_object* v_x_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
lean_object* v_res_5012_; 
v_res_5012_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(v_mvarId_5000_, v_x_5001_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
lean_dec(v___y_5010_);
lean_dec_ref(v___y_5009_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
lean_dec(v___y_5006_);
lean_dec_ref(v___y_5005_);
lean_dec(v___y_5004_);
lean_dec_ref(v___y_5003_);
lean_dec(v___y_5002_);
return v_res_5012_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0(lean_object* v_00_u03b1_5013_, lean_object* v_mvarId_5014_, lean_object* v_x_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_){
_start:
{
lean_object* v___x_5026_; 
v___x_5026_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(v_mvarId_5014_, v_x_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_);
return v___x_5026_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___boxed(lean_object* v_00_u03b1_5027_, lean_object* v_mvarId_5028_, lean_object* v_x_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0(v_00_u03b1_5027_, v_mvarId_5028_, v_x_5029_, v___y_5030_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_, v___y_5035_, v___y_5036_, v___y_5037_, v___y_5038_);
lean_dec(v___y_5038_);
lean_dec_ref(v___y_5037_);
lean_dec(v___y_5036_);
lean_dec_ref(v___y_5035_);
lean_dec(v___y_5034_);
lean_dec_ref(v___y_5033_);
lean_dec(v___y_5032_);
lean_dec_ref(v___y_5031_);
lean_dec(v___y_5030_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f___lam__0(lean_object* v___x_5041_, lean_object* v_mvarId_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_){
_start:
{
lean_object* v___x_5053_; 
lean_inc_ref(v___x_5041_);
v___x_5053_ = l_Lean_Meta_Grind_getProofInfo(v___x_5041_, v___y_5043_, v___y_5044_, v___y_5045_, v___y_5046_, v___y_5047_, v___y_5048_, v___y_5049_, v___y_5050_, v___y_5051_);
if (lean_obj_tag(v___x_5053_) == 0)
{
lean_object* v_a_5054_; lean_object* v___x_5056_; uint8_t v_isShared_5057_; uint8_t v_isSharedCheck_5066_; 
v_a_5054_ = lean_ctor_get(v___x_5053_, 0);
v_isSharedCheck_5066_ = !lean_is_exclusive(v___x_5053_);
if (v_isSharedCheck_5066_ == 0)
{
v___x_5056_ = v___x_5053_;
v_isShared_5057_ = v_isSharedCheck_5066_;
goto v_resetjp_5055_;
}
else
{
lean_inc(v_a_5054_);
lean_dec(v___x_5053_);
v___x_5056_ = lean_box(0);
v_isShared_5057_ = v_isSharedCheck_5066_;
goto v_resetjp_5055_;
}
v_resetjp_5055_:
{
uint8_t v_hasSorry_5063_; 
v_hasSorry_5063_ = lean_ctor_get_uint8(v_a_5054_, sizeof(void*)*1);
if (v_hasSorry_5063_ == 0)
{
uint8_t v_hasUnassigned_5064_; 
v_hasUnassigned_5064_ = lean_ctor_get_uint8(v_a_5054_, sizeof(void*)*1 + 1);
lean_dec(v_a_5054_);
if (v_hasUnassigned_5064_ == 0)
{
lean_object* v___x_5065_; 
lean_del_object(v___x_5056_);
v___x_5065_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_go(v_mvarId_5042_, v___x_5041_, v___y_5043_, v___y_5044_, v___y_5045_, v___y_5046_, v___y_5047_, v___y_5048_, v___y_5049_, v___y_5050_, v___y_5051_);
return v___x_5065_;
}
else
{
lean_dec(v_mvarId_5042_);
lean_dec_ref(v___x_5041_);
goto v___jp_5058_;
}
}
else
{
lean_dec(v_a_5054_);
lean_dec(v_mvarId_5042_);
lean_dec_ref(v___x_5041_);
goto v___jp_5058_;
}
v___jp_5058_:
{
lean_object* v___x_5059_; lean_object* v___x_5061_; 
v___x_5059_ = lean_box(0);
if (v_isShared_5057_ == 0)
{
lean_ctor_set(v___x_5056_, 0, v___x_5059_);
v___x_5061_ = v___x_5056_;
goto v_reusejp_5060_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v___x_5059_);
v___x_5061_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5060_;
}
v_reusejp_5060_:
{
return v___x_5061_;
}
}
}
}
else
{
lean_object* v_a_5067_; lean_object* v___x_5069_; uint8_t v_isShared_5070_; uint8_t v_isSharedCheck_5074_; 
lean_dec(v_mvarId_5042_);
lean_dec_ref(v___x_5041_);
v_a_5067_ = lean_ctor_get(v___x_5053_, 0);
v_isSharedCheck_5074_ = !lean_is_exclusive(v___x_5053_);
if (v_isSharedCheck_5074_ == 0)
{
v___x_5069_ = v___x_5053_;
v_isShared_5070_ = v_isSharedCheck_5074_;
goto v_resetjp_5068_;
}
else
{
lean_inc(v_a_5067_);
lean_dec(v___x_5053_);
v___x_5069_ = lean_box(0);
v_isShared_5070_ = v_isSharedCheck_5074_;
goto v_resetjp_5068_;
}
v_resetjp_5068_:
{
lean_object* v___x_5072_; 
if (v_isShared_5070_ == 0)
{
v___x_5072_ = v___x_5069_;
goto v_reusejp_5071_;
}
else
{
lean_object* v_reuseFailAlloc_5073_; 
v_reuseFailAlloc_5073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5073_, 0, v_a_5067_);
v___x_5072_ = v_reuseFailAlloc_5073_;
goto v_reusejp_5071_;
}
v_reusejp_5071_:
{
return v___x_5072_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f___lam__0___boxed(lean_object* v___x_5075_, lean_object* v_mvarId_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_){
_start:
{
lean_object* v_res_5087_; 
v_res_5087_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f___lam__0(v___x_5075_, v_mvarId_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_, v___y_5083_, v___y_5084_, v___y_5085_);
lean_dec(v___y_5085_);
lean_dec_ref(v___y_5084_);
lean_dec(v___y_5083_);
lean_dec_ref(v___y_5082_);
lean_dec(v___y_5081_);
lean_dec_ref(v___y_5080_);
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
return v_res_5087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f(lean_object* v_mvarId_5088_, lean_object* v_a_5089_, lean_object* v_a_5090_, lean_object* v_a_5091_, lean_object* v_a_5092_, lean_object* v_a_5093_, lean_object* v_a_5094_, lean_object* v_a_5095_, lean_object* v_a_5096_, lean_object* v_a_5097_){
_start:
{
lean_object* v___x_5099_; lean_object* v___f_5100_; lean_object* v___x_5101_; 
lean_inc_n(v_mvarId_5088_, 2);
v___x_5099_ = l_Lean_mkMVar(v_mvarId_5088_);
v___f_5100_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f___lam__0___boxed), 12, 2);
lean_closure_set(v___f_5100_, 0, v___x_5099_);
lean_closure_set(v___f_5100_, 1, v_mvarId_5088_);
v___x_5101_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(v_mvarId_5088_, v___f_5100_, v_a_5089_, v_a_5090_, v_a_5091_, v_a_5092_, v_a_5093_, v_a_5094_, v_a_5095_, v_a_5096_, v_a_5097_);
return v___x_5101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f___boxed(lean_object* v_mvarId_5102_, lean_object* v_a_5103_, lean_object* v_a_5104_, lean_object* v_a_5105_, lean_object* v_a_5106_, lean_object* v_a_5107_, lean_object* v_a_5108_, lean_object* v_a_5109_, lean_object* v_a_5110_, lean_object* v_a_5111_, lean_object* v_a_5112_){
_start:
{
lean_object* v_res_5113_; 
v_res_5113_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f(v_mvarId_5102_, v_a_5103_, v_a_5104_, v_a_5105_, v_a_5106_, v_a_5107_, v_a_5108_, v_a_5109_, v_a_5110_, v_a_5111_);
lean_dec(v_a_5111_);
lean_dec_ref(v_a_5110_);
lean_dec(v_a_5109_);
lean_dec_ref(v_a_5108_);
lean_dec(v_a_5107_);
lean_dec_ref(v_a_5106_);
lean_dec(v_a_5105_);
lean_dec_ref(v_a_5104_);
lean_dec(v_a_5103_);
return v_res_5113_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0(lean_object* v_x_5135_){
_start:
{
if (lean_obj_tag(v_x_5135_) == 0)
{
uint8_t v___x_5136_; 
v___x_5136_ = 1;
return v___x_5136_;
}
else
{
lean_object* v_head_5137_; lean_object* v_tail_5138_; lean_object* v___x_5139_; uint8_t v___x_5140_; 
v_head_5137_ = lean_ctor_get(v_x_5135_, 0);
lean_inc_n(v_head_5137_, 2);
v_tail_5138_ = lean_ctor_get(v_x_5135_, 1);
lean_inc(v_tail_5138_);
lean_dec_ref_known(v_x_5135_, 2);
v___x_5139_ = ((lean_object*)(l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__1));
v___x_5140_ = l_Lean_Syntax_isOfKind(v_head_5137_, v___x_5139_);
if (v___x_5140_ == 0)
{
lean_object* v___x_5141_; uint8_t v___x_5142_; 
v___x_5141_ = ((lean_object*)(l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__3));
lean_inc(v_head_5137_);
v___x_5142_ = l_Lean_Syntax_isOfKind(v_head_5137_, v___x_5141_);
if (v___x_5142_ == 0)
{
lean_dec(v_head_5137_);
v_x_5135_ = v_tail_5138_;
goto _start;
}
else
{
lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; uint8_t v___x_5147_; 
v___x_5144_ = lean_unsigned_to_nat(1u);
v___x_5145_ = l_Lean_Syntax_getArg(v_head_5137_, v___x_5144_);
lean_dec(v_head_5137_);
v___x_5146_ = ((lean_object*)(l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5));
v___x_5147_ = l_Lean_Syntax_isOfKind(v___x_5145_, v___x_5146_);
if (v___x_5147_ == 0)
{
v_x_5135_ = v_tail_5138_;
goto _start;
}
else
{
lean_dec(v_tail_5138_);
return v___x_5140_;
}
}
}
else
{
lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; uint8_t v___x_5152_; 
v___x_5149_ = lean_unsigned_to_nat(3u);
v___x_5150_ = l_Lean_Syntax_getArg(v_head_5137_, v___x_5149_);
lean_dec(v_head_5137_);
v___x_5151_ = ((lean_object*)(l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___closed__5));
v___x_5152_ = l_Lean_Syntax_isOfKind(v___x_5150_, v___x_5151_);
if (v___x_5152_ == 0)
{
v_x_5135_ = v_tail_5138_;
goto _start;
}
else
{
uint8_t v___x_5154_; 
lean_dec(v_tail_5138_);
v___x_5154_ = 0;
return v___x_5154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0___boxed(lean_object* v_x_5155_){
_start:
{
uint8_t v_res_5156_; lean_object* v_r_5157_; 
v_res_5156_ = l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0(v_x_5155_);
v_r_5157_ = lean_box(v_res_5156_);
return v_r_5157_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq(lean_object* v_seq_5158_){
_start:
{
uint8_t v___x_5159_; 
v___x_5159_ = l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0(v_seq_5158_);
return v___x_5159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq___boxed(lean_object* v_seq_5160_){
_start:
{
uint8_t v_res_5161_; lean_object* v_r_5162_; 
v_res_5161_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq(v_seq_5160_);
v_r_5162_ = lean_box(v_res_5161_);
return v_r_5162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg(lean_object* v_seq_5178_, lean_object* v_a_5179_){
_start:
{
if (lean_obj_tag(v_seq_5178_) == 0)
{
lean_object* v_ref_5181_; uint8_t v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; 
v_ref_5181_ = lean_ctor_get(v_a_5179_, 2);
v___x_5182_ = 0;
v___x_5183_ = l_Lean_SourceInfo_fromRef(v_ref_5181_, v___x_5182_);
v___x_5184_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__0));
v___x_5185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__1));
lean_inc(v___x_5183_);
v___x_5186_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5186_, 0, v___x_5183_);
lean_ctor_set(v___x_5186_, 1, v___x_5184_);
v___x_5187_ = l_Lean_Syntax_node1(v___x_5183_, v___x_5185_, v___x_5186_);
v___x_5188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5188_, 0, v___x_5187_);
return v___x_5188_;
}
else
{
lean_object* v_tail_5189_; 
v_tail_5189_ = lean_ctor_get(v_seq_5178_, 1);
if (lean_obj_tag(v_tail_5189_) == 0)
{
lean_object* v_head_5190_; lean_object* v___x_5191_; 
v_head_5190_ = lean_ctor_get(v_seq_5178_, 0);
lean_inc(v_head_5190_);
lean_dec_ref_known(v_seq_5178_, 2);
v___x_5191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5191_, 0, v_head_5190_);
return v___x_5191_;
}
else
{
lean_object* v_head_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5214_; 
lean_inc(v_tail_5189_);
v_head_5192_ = lean_ctor_get(v_seq_5178_, 0);
v_isSharedCheck_5214_ = !lean_is_exclusive(v_seq_5178_);
if (v_isSharedCheck_5214_ == 0)
{
lean_object* v_unused_5215_; 
v_unused_5215_ = lean_ctor_get(v_seq_5178_, 1);
lean_dec(v_unused_5215_);
v___x_5194_ = v_seq_5178_;
v_isShared_5195_ = v_isSharedCheck_5214_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_head_5192_);
lean_dec(v_seq_5178_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5214_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v___x_5196_; lean_object* v_a_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5213_; 
v___x_5196_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg(v_tail_5189_, v_a_5179_);
v_a_5197_ = lean_ctor_get(v___x_5196_, 0);
v_isSharedCheck_5213_ = !lean_is_exclusive(v___x_5196_);
if (v_isSharedCheck_5213_ == 0)
{
v___x_5199_ = v___x_5196_;
v_isShared_5200_ = v_isSharedCheck_5213_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_a_5197_);
lean_dec(v___x_5196_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5213_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v_ref_5201_; uint8_t v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5207_; 
v_ref_5201_ = lean_ctor_get(v_a_5179_, 2);
v___x_5202_ = 0;
v___x_5203_ = l_Lean_SourceInfo_fromRef(v_ref_5201_, v___x_5202_);
v___x_5204_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3));
v___x_5205_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__4));
lean_inc(v___x_5203_);
if (v_isShared_5195_ == 0)
{
lean_ctor_set_tag(v___x_5194_, 2);
lean_ctor_set(v___x_5194_, 1, v___x_5205_);
lean_ctor_set(v___x_5194_, 0, v___x_5203_);
v___x_5207_ = v___x_5194_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5212_; 
v_reuseFailAlloc_5212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5212_, 0, v___x_5203_);
lean_ctor_set(v_reuseFailAlloc_5212_, 1, v___x_5205_);
v___x_5207_ = v_reuseFailAlloc_5212_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
lean_object* v___x_5208_; lean_object* v___x_5210_; 
v___x_5208_ = l_Lean_Syntax_node3(v___x_5203_, v___x_5204_, v_head_5192_, v___x_5207_, v_a_5197_);
if (v_isShared_5200_ == 0)
{
lean_ctor_set(v___x_5199_, 0, v___x_5208_);
v___x_5210_ = v___x_5199_;
goto v_reusejp_5209_;
}
else
{
lean_object* v_reuseFailAlloc_5211_; 
v_reuseFailAlloc_5211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5211_, 0, v___x_5208_);
v___x_5210_ = v_reuseFailAlloc_5211_;
goto v_reusejp_5209_;
}
v_reusejp_5209_:
{
return v___x_5210_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___boxed(lean_object* v_seq_5216_, lean_object* v_a_5217_, lean_object* v_a_5218_){
_start:
{
lean_object* v_res_5219_; 
v_res_5219_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg(v_seq_5216_, v_a_5217_);
lean_dec_ref(v_a_5217_);
return v_res_5219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq(lean_object* v_seq_5220_, lean_object* v_a_5221_, lean_object* v_a_5222_){
_start:
{
lean_object* v___x_5224_; 
v___x_5224_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg(v_seq_5220_, v_a_5221_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___boxed(lean_object* v_seq_5225_, lean_object* v_a_5226_, lean_object* v_a_5227_, lean_object* v_a_5228_){
_start:
{
lean_object* v_res_5229_; 
v_res_5229_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq(v_seq_5225_, v_a_5226_, v_a_5227_);
lean_dec(v_a_5227_);
lean_dec_ref(v_a_5226_);
return v_res_5229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___redArg(lean_object* v_cases_5230_, lean_object* v_seq_5231_, lean_object* v_a_5232_){
_start:
{
if (lean_obj_tag(v_seq_5231_) == 0)
{
lean_object* v___x_5234_; 
v___x_5234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5234_, 0, v_cases_5230_);
return v___x_5234_;
}
else
{
lean_object* v___x_5235_; lean_object* v_a_5236_; lean_object* v___x_5238_; uint8_t v_isShared_5239_; uint8_t v_isSharedCheck_5250_; 
v___x_5235_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg(v_seq_5231_, v_a_5232_);
v_a_5236_ = lean_ctor_get(v___x_5235_, 0);
v_isSharedCheck_5250_ = !lean_is_exclusive(v___x_5235_);
if (v_isSharedCheck_5250_ == 0)
{
v___x_5238_ = v___x_5235_;
v_isShared_5239_ = v_isSharedCheck_5250_;
goto v_resetjp_5237_;
}
else
{
lean_inc(v_a_5236_);
lean_dec(v___x_5235_);
v___x_5238_ = lean_box(0);
v_isShared_5239_ = v_isSharedCheck_5250_;
goto v_resetjp_5237_;
}
v_resetjp_5237_:
{
lean_object* v_ref_5240_; uint8_t v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5248_; 
v_ref_5240_ = lean_ctor_get(v_a_5232_, 2);
v___x_5241_ = 0;
v___x_5242_ = l_Lean_SourceInfo_fromRef(v_ref_5240_, v___x_5241_);
v___x_5243_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__3));
v___x_5244_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkAndThenSeq___redArg___closed__4));
lean_inc(v___x_5242_);
v___x_5245_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5245_, 0, v___x_5242_);
lean_ctor_set(v___x_5245_, 1, v___x_5244_);
v___x_5246_ = l_Lean_Syntax_node3(v___x_5242_, v___x_5243_, v_cases_5230_, v___x_5245_, v_a_5236_);
if (v_isShared_5239_ == 0)
{
lean_ctor_set(v___x_5238_, 0, v___x_5246_);
v___x_5248_ = v___x_5238_;
goto v_reusejp_5247_;
}
else
{
lean_object* v_reuseFailAlloc_5249_; 
v_reuseFailAlloc_5249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5249_, 0, v___x_5246_);
v___x_5248_ = v_reuseFailAlloc_5249_;
goto v_reusejp_5247_;
}
v_reusejp_5247_:
{
return v___x_5248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___redArg___boxed(lean_object* v_cases_5251_, lean_object* v_seq_5252_, lean_object* v_a_5253_, lean_object* v_a_5254_){
_start:
{
lean_object* v_res_5255_; 
v_res_5255_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___redArg(v_cases_5251_, v_seq_5252_, v_a_5253_);
lean_dec_ref(v_a_5253_);
return v_res_5255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen(lean_object* v_cases_5256_, lean_object* v_seq_5257_, lean_object* v_a_5258_, lean_object* v_a_5259_){
_start:
{
lean_object* v___x_5261_; 
v___x_5261_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___redArg(v_cases_5256_, v_seq_5257_, v_a_5258_);
return v___x_5261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___boxed(lean_object* v_cases_5262_, lean_object* v_seq_5263_, lean_object* v_a_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_){
_start:
{
lean_object* v_res_5267_; 
v_res_5267_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen(v_cases_5262_, v_seq_5263_, v_a_5264_, v_a_5265_);
lean_dec(v_a_5265_);
lean_dec_ref(v_a_5264_);
return v_res_5267_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__0(lean_object* v_x_5268_, lean_object* v_x_5269_){
_start:
{
if (lean_obj_tag(v_x_5268_) == 0)
{
if (lean_obj_tag(v_x_5269_) == 0)
{
uint8_t v___x_5270_; 
v___x_5270_ = 1;
return v___x_5270_;
}
else
{
uint8_t v___x_5271_; 
v___x_5271_ = 0;
return v___x_5271_;
}
}
else
{
if (lean_obj_tag(v_x_5269_) == 0)
{
uint8_t v___x_5272_; 
v___x_5272_ = 0;
return v___x_5272_;
}
else
{
lean_object* v_head_5273_; lean_object* v_tail_5274_; lean_object* v_head_5275_; lean_object* v_tail_5276_; uint8_t v___x_5277_; 
v_head_5273_ = lean_ctor_get(v_x_5268_, 0);
v_tail_5274_ = lean_ctor_get(v_x_5268_, 1);
v_head_5275_ = lean_ctor_get(v_x_5269_, 0);
v_tail_5276_ = lean_ctor_get(v_x_5269_, 1);
v___x_5277_ = l_Lean_Syntax_structEq(v_head_5273_, v_head_5275_);
if (v___x_5277_ == 0)
{
return v___x_5277_;
}
else
{
v_x_5268_ = v_tail_5274_;
v_x_5269_ = v_tail_5276_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__0___boxed(lean_object* v_x_5279_, lean_object* v_x_5280_){
_start:
{
uint8_t v_res_5281_; lean_object* v_r_5282_; 
v_res_5281_ = l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__0(v_x_5279_, v_x_5280_);
lean_dec(v_x_5280_);
lean_dec(v_x_5279_);
v_r_5282_ = lean_box(v_res_5281_);
return v_r_5282_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__1(lean_object* v_alt_5283_, lean_object* v___x_5284_, lean_object* v_as_5285_, size_t v_i_5286_, size_t v_stop_5287_){
_start:
{
uint8_t v___x_5292_; 
v___x_5292_ = lean_usize_dec_eq(v_i_5286_, v_stop_5287_);
if (v___x_5292_ == 0)
{
lean_object* v___x_5293_; uint8_t v___x_5294_; 
v___x_5293_ = lean_array_uget_borrowed(v_as_5285_, v_i_5286_);
v___x_5294_ = l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__0(v___x_5293_, v_alt_5283_);
if (v___x_5294_ == 0)
{
lean_object* v___x_5295_; uint8_t v___x_5296_; 
v___x_5295_ = lean_unsigned_to_nat(0u);
v___x_5296_ = lean_nat_dec_lt(v___x_5295_, v___x_5284_);
if (v___x_5296_ == 0)
{
goto v___jp_5288_;
}
else
{
return v___x_5296_;
}
}
else
{
goto v___jp_5288_;
}
}
else
{
uint8_t v___x_5297_; 
v___x_5297_ = 0;
return v___x_5297_;
}
v___jp_5288_:
{
size_t v___x_5289_; size_t v___x_5290_; 
v___x_5289_ = ((size_t)1ULL);
v___x_5290_ = lean_usize_add(v_i_5286_, v___x_5289_);
v_i_5286_ = v___x_5290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__1___boxed(lean_object* v_alt_5298_, lean_object* v___x_5299_, lean_object* v_as_5300_, lean_object* v_i_5301_, lean_object* v_stop_5302_){
_start:
{
size_t v_i_boxed_5303_; size_t v_stop_boxed_5304_; uint8_t v_res_5305_; lean_object* v_r_5306_; 
v_i_boxed_5303_ = lean_unbox_usize(v_i_5301_);
lean_dec(v_i_5301_);
v_stop_boxed_5304_ = lean_unbox_usize(v_stop_5302_);
lean_dec(v_stop_5302_);
v_res_5305_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__1(v_alt_5298_, v___x_5299_, v_as_5300_, v_i_boxed_5303_, v_stop_boxed_5304_);
lean_dec_ref(v_as_5300_);
lean_dec(v___x_5299_);
lean_dec(v_alt_5298_);
v_r_5306_ = lean_box(v_res_5305_);
return v_r_5306_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts(lean_object* v_alts_5307_){
_start:
{
lean_object* v___x_5308_; lean_object* v___x_5309_; uint8_t v___x_5310_; 
v___x_5308_ = lean_unsigned_to_nat(0u);
v___x_5309_ = lean_array_get_size(v_alts_5307_);
v___x_5310_ = lean_nat_dec_lt(v___x_5308_, v___x_5309_);
if (v___x_5310_ == 0)
{
uint8_t v___x_5311_; 
v___x_5311_ = 1;
return v___x_5311_;
}
else
{
lean_object* v_alt_5312_; uint8_t v___x_5313_; 
v_alt_5312_ = lean_array_fget_borrowed(v_alts_5307_, v___x_5308_);
lean_inc(v_alt_5312_);
v___x_5313_ = l_List_all___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleSeq_spec__0(v_alt_5312_);
if (v___x_5313_ == 0)
{
return v___x_5313_;
}
else
{
if (v___x_5310_ == 0)
{
return v___x_5310_;
}
else
{
size_t v___x_5314_; size_t v___x_5315_; uint8_t v___x_5316_; 
v___x_5314_ = ((size_t)0ULL);
v___x_5315_ = lean_usize_of_nat(v___x_5309_);
v___x_5316_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts_spec__1(v_alt_5312_, v___x_5309_, v_alts_5307_, v___x_5314_, v___x_5315_);
if (v___x_5316_ == 0)
{
return v___x_5310_;
}
else
{
uint8_t v___x_5317_; 
v___x_5317_ = 0;
return v___x_5317_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts___boxed(lean_object* v_alts_5318_){
_start:
{
uint8_t v_res_5319_; lean_object* v_r_5320_; 
v_res_5319_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts(v_alts_5318_);
lean_dec_ref(v_alts_5318_);
v_r_5320_ = lean_box(v_res_5319_);
return v_r_5320_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Action_isSorryAlt(lean_object* v_alt_5328_){
_start:
{
if (lean_obj_tag(v_alt_5328_) == 1)
{
lean_object* v_tail_5329_; 
v_tail_5329_ = lean_ctor_get(v_alt_5328_, 1);
if (lean_obj_tag(v_tail_5329_) == 0)
{
lean_object* v_head_5330_; lean_object* v___x_5331_; uint8_t v___x_5332_; 
v_head_5330_ = lean_ctor_get(v_alt_5328_, 0);
lean_inc(v_head_5330_);
lean_dec_ref_known(v_alt_5328_, 2);
v___x_5331_ = ((lean_object*)(l_Lean_Meta_Grind_Action_isSorryAlt___closed__1));
v___x_5332_ = l_Lean_Syntax_isOfKind(v_head_5330_, v___x_5331_);
return v___x_5332_;
}
else
{
uint8_t v___x_5333_; 
lean_dec_ref_known(v_alt_5328_, 2);
v___x_5333_ = 0;
return v___x_5333_;
}
}
else
{
uint8_t v___x_5334_; 
lean_dec(v_alt_5328_);
v___x_5334_ = 0;
return v___x_5334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_isSorryAlt___boxed(lean_object* v_alt_5335_){
_start:
{
uint8_t v_res_5336_; lean_object* v_r_5337_; 
v_res_5336_ = l_Lean_Meta_Grind_Action_isSorryAlt(v_alt_5335_);
v_r_5337_ = lean_box(v_res_5336_);
return v_r_5337_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___redArg(lean_object* v_x_5338_, lean_object* v_x_5339_, lean_object* v___y_5340_){
_start:
{
if (lean_obj_tag(v_x_5338_) == 0)
{
lean_object* v___x_5342_; lean_object* v___x_5343_; 
v___x_5342_ = l_List_reverse___redArg(v_x_5339_);
v___x_5343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5343_, 0, v___x_5342_);
return v___x_5343_;
}
else
{
lean_object* v_head_5344_; lean_object* v_tail_5345_; lean_object* v___x_5347_; uint8_t v_isShared_5348_; uint8_t v_isSharedCheck_5363_; 
v_head_5344_ = lean_ctor_get(v_x_5338_, 0);
v_tail_5345_ = lean_ctor_get(v_x_5338_, 1);
v_isSharedCheck_5363_ = !lean_is_exclusive(v_x_5338_);
if (v_isSharedCheck_5363_ == 0)
{
v___x_5347_ = v_x_5338_;
v_isShared_5348_ = v_isSharedCheck_5363_;
goto v_resetjp_5346_;
}
else
{
lean_inc(v_tail_5345_);
lean_inc(v_head_5344_);
lean_dec(v_x_5338_);
v___x_5347_ = lean_box(0);
v_isShared_5348_ = v_isSharedCheck_5363_;
goto v_resetjp_5346_;
}
v_resetjp_5346_:
{
lean_object* v___x_5349_; 
v___x_5349_ = l_Lean_Meta_Grind_Action_mkGrindNext___redArg(v_head_5344_, v___y_5340_);
if (lean_obj_tag(v___x_5349_) == 0)
{
lean_object* v_a_5350_; lean_object* v___x_5352_; 
v_a_5350_ = lean_ctor_get(v___x_5349_, 0);
lean_inc(v_a_5350_);
lean_dec_ref_known(v___x_5349_, 1);
if (v_isShared_5348_ == 0)
{
lean_ctor_set(v___x_5347_, 1, v_x_5339_);
lean_ctor_set(v___x_5347_, 0, v_a_5350_);
v___x_5352_ = v___x_5347_;
goto v_reusejp_5351_;
}
else
{
lean_object* v_reuseFailAlloc_5354_; 
v_reuseFailAlloc_5354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5354_, 0, v_a_5350_);
lean_ctor_set(v_reuseFailAlloc_5354_, 1, v_x_5339_);
v___x_5352_ = v_reuseFailAlloc_5354_;
goto v_reusejp_5351_;
}
v_reusejp_5351_:
{
v_x_5338_ = v_tail_5345_;
v_x_5339_ = v___x_5352_;
goto _start;
}
}
else
{
lean_object* v_a_5355_; lean_object* v___x_5357_; uint8_t v_isShared_5358_; uint8_t v_isSharedCheck_5362_; 
lean_del_object(v___x_5347_);
lean_dec(v_tail_5345_);
lean_dec(v_x_5339_);
v_a_5355_ = lean_ctor_get(v___x_5349_, 0);
v_isSharedCheck_5362_ = !lean_is_exclusive(v___x_5349_);
if (v_isSharedCheck_5362_ == 0)
{
v___x_5357_ = v___x_5349_;
v_isShared_5358_ = v_isSharedCheck_5362_;
goto v_resetjp_5356_;
}
else
{
lean_inc(v_a_5355_);
lean_dec(v___x_5349_);
v___x_5357_ = lean_box(0);
v_isShared_5358_ = v_isSharedCheck_5362_;
goto v_resetjp_5356_;
}
v_resetjp_5356_:
{
lean_object* v___x_5360_; 
if (v_isShared_5358_ == 0)
{
v___x_5360_ = v___x_5357_;
goto v_reusejp_5359_;
}
else
{
lean_object* v_reuseFailAlloc_5361_; 
v_reuseFailAlloc_5361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5361_, 0, v_a_5355_);
v___x_5360_ = v_reuseFailAlloc_5361_;
goto v_reusejp_5359_;
}
v_reusejp_5359_:
{
return v___x_5360_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___redArg___boxed(lean_object* v_x_5364_, lean_object* v_x_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_){
_start:
{
lean_object* v_res_5368_; 
v_res_5368_ = l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___redArg(v_x_5364_, v_x_5365_, v___y_5366_);
lean_dec_ref(v___y_5366_);
return v_res_5368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq(lean_object* v_cases_5369_, lean_object* v_alts_5370_, uint8_t v_compress_5371_, lean_object* v_a_5372_, lean_object* v_a_5373_){
_start:
{
lean_object* v_seq_5376_; 
if (v_compress_5371_ == 0)
{
goto v___jp_5379_;
}
else
{
uint8_t v___x_5389_; 
v___x_5389_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_isCompressibleAlts(v_alts_5370_);
if (v___x_5389_ == 0)
{
goto v___jp_5379_;
}
else
{
lean_object* v___x_5390_; lean_object* v___x_5391_; uint8_t v___x_5392_; 
v___x_5390_ = lean_unsigned_to_nat(0u);
v___x_5391_ = lean_array_get_size(v_alts_5370_);
v___x_5392_ = lean_nat_dec_lt(v___x_5390_, v___x_5391_);
if (v___x_5392_ == 0)
{
lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; 
lean_dec_ref(v_alts_5370_);
v___x_5393_ = lean_box(0);
v___x_5394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5394_, 0, v_cases_5369_);
lean_ctor_set(v___x_5394_, 1, v___x_5393_);
v___x_5395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5395_, 0, v___x_5394_);
return v___x_5395_;
}
else
{
lean_object* v___x_5396_; lean_object* v_firstAlt_5397_; uint8_t v___x_5398_; 
v___x_5396_ = lean_box(0);
v_firstAlt_5397_ = lean_array_get(v___x_5396_, v_alts_5370_, v___x_5390_);
lean_dec_ref(v_alts_5370_);
lean_inc(v_firstAlt_5397_);
v___x_5398_ = l_Lean_Meta_Grind_Action_isSorryAlt(v_firstAlt_5397_);
if (v___x_5398_ == 0)
{
lean_object* v___x_5399_; lean_object* v_a_5400_; lean_object* v___x_5402_; uint8_t v_isShared_5403_; uint8_t v_isSharedCheck_5408_; 
v___x_5399_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesAndThen___redArg(v_cases_5369_, v_firstAlt_5397_, v_a_5372_);
v_a_5400_ = lean_ctor_get(v___x_5399_, 0);
v_isSharedCheck_5408_ = !lean_is_exclusive(v___x_5399_);
if (v_isSharedCheck_5408_ == 0)
{
v___x_5402_ = v___x_5399_;
v_isShared_5403_ = v_isSharedCheck_5408_;
goto v_resetjp_5401_;
}
else
{
lean_inc(v_a_5400_);
lean_dec(v___x_5399_);
v___x_5402_ = lean_box(0);
v_isShared_5403_ = v_isSharedCheck_5408_;
goto v_resetjp_5401_;
}
v_resetjp_5401_:
{
lean_object* v___x_5404_; lean_object* v___x_5406_; 
v___x_5404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5404_, 0, v_a_5400_);
lean_ctor_set(v___x_5404_, 1, v___x_5396_);
if (v_isShared_5403_ == 0)
{
lean_ctor_set(v___x_5402_, 0, v___x_5404_);
v___x_5406_ = v___x_5402_;
goto v_reusejp_5405_;
}
else
{
lean_object* v_reuseFailAlloc_5407_; 
v_reuseFailAlloc_5407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5407_, 0, v___x_5404_);
v___x_5406_ = v_reuseFailAlloc_5407_;
goto v_reusejp_5405_;
}
v_reusejp_5405_:
{
return v___x_5406_;
}
}
}
else
{
lean_object* v___x_5409_; 
lean_dec(v_cases_5369_);
v___x_5409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5409_, 0, v_firstAlt_5397_);
return v___x_5409_;
}
}
}
}
v___jp_5375_:
{
lean_object* v___x_5377_; lean_object* v___x_5378_; 
v___x_5377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5377_, 0, v_cases_5369_);
lean_ctor_set(v___x_5377_, 1, v_seq_5376_);
v___x_5378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5378_, 0, v___x_5377_);
return v___x_5378_;
}
v___jp_5379_:
{
lean_object* v___x_5380_; lean_object* v___x_5381_; uint8_t v___x_5382_; 
v___x_5380_ = lean_array_get_size(v_alts_5370_);
v___x_5381_ = lean_unsigned_to_nat(1u);
v___x_5382_ = lean_nat_dec_eq(v___x_5380_, v___x_5381_);
if (v___x_5382_ == 0)
{
lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; 
v___x_5383_ = lean_array_to_list(v_alts_5370_);
v___x_5384_ = lean_box(0);
v___x_5385_ = l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___redArg(v___x_5383_, v___x_5384_, v_a_5372_);
if (lean_obj_tag(v___x_5385_) == 0)
{
lean_object* v_a_5386_; 
v_a_5386_ = lean_ctor_get(v___x_5385_, 0);
lean_inc(v_a_5386_);
lean_dec_ref_known(v___x_5385_, 1);
v_seq_5376_ = v_a_5386_;
goto v___jp_5375_;
}
else
{
lean_dec(v_cases_5369_);
return v___x_5385_;
}
}
else
{
lean_object* v___x_5387_; lean_object* v___x_5388_; 
v___x_5387_ = lean_unsigned_to_nat(0u);
v___x_5388_ = lean_array_fget(v_alts_5370_, v___x_5387_);
lean_dec_ref(v_alts_5370_);
v_seq_5376_ = v___x_5388_;
goto v___jp_5375_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq___boxed(lean_object* v_cases_5410_, lean_object* v_alts_5411_, lean_object* v_compress_5412_, lean_object* v_a_5413_, lean_object* v_a_5414_, lean_object* v_a_5415_){
_start:
{
uint8_t v_compress_boxed_5416_; lean_object* v_res_5417_; 
v_compress_boxed_5416_ = lean_unbox(v_compress_5412_);
v_res_5417_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq(v_cases_5410_, v_alts_5411_, v_compress_boxed_5416_, v_a_5413_, v_a_5414_);
lean_dec(v_a_5414_);
lean_dec_ref(v_a_5413_);
return v_res_5417_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0(lean_object* v_x_5418_, lean_object* v_x_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_){
_start:
{
lean_object* v___x_5423_; 
v___x_5423_ = l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___redArg(v_x_5418_, v_x_5419_, v___y_5420_);
return v___x_5423_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0___boxed(lean_object* v_x_5424_, lean_object* v_x_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_){
_start:
{
lean_object* v_res_5429_; 
v_res_5429_ = l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq_spec__0(v_x_5424_, v_x_5425_, v___y_5426_, v___y_5427_);
lean_dec(v___y_5427_);
lean_dec_ref(v___y_5426_);
return v_res_5429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___redArg(lean_object* v_e_5430_, lean_object* v___y_5431_){
_start:
{
lean_object* v___x_5433_; lean_object* v_env_5434_; uint8_t v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; 
v___x_5433_ = lean_st_ref_get(v___y_5431_);
v_env_5434_ = lean_ctor_get(v___x_5433_, 0);
lean_inc_ref(v_env_5434_);
lean_dec(v___x_5433_);
v___x_5435_ = l_Lean_Meta_isMatcherAppCore(v_env_5434_, v_e_5430_);
v___x_5436_ = lean_box(v___x_5435_);
v___x_5437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5437_, 0, v___x_5436_);
return v___x_5437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___redArg___boxed(lean_object* v_e_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___redArg(v_e_5438_, v___y_5439_);
lean_dec(v___y_5439_);
lean_dec_ref(v_e_5438_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0(lean_object* v_e_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_, lean_object* v___y_5445_, lean_object* v___y_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_){
_start:
{
lean_object* v___x_5454_; 
v___x_5454_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___redArg(v_e_5442_, v___y_5452_);
return v___x_5454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___boxed(lean_object* v_e_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v_res_5467_; 
v_res_5467_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0(v_e_5455_, v___y_5456_, v___y_5457_, v___y_5458_, v___y_5459_, v___y_5460_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_);
lean_dec(v___y_5465_);
lean_dec_ref(v___y_5464_);
lean_dec(v___y_5463_);
lean_dec_ref(v___y_5462_);
lean_dec(v___y_5461_);
lean_dec_ref(v___y_5460_);
lean_dec(v___y_5459_);
lean_dec_ref(v___y_5458_);
lean_dec(v___y_5457_);
lean_dec(v___y_5456_);
lean_dec_ref(v_e_5455_);
return v_res_5467_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5469_; lean_object* v___x_5470_; 
v___x_5469_ = ((lean_object*)(l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__0));
v___x_5470_ = l_Lean_stringToMessageData(v___x_5469_);
return v___x_5470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0(lean_object* v___x_5471_, lean_object* v_c_5472_, lean_object* v_a_5473_, lean_object* v_numCases_5474_, uint8_t v_isRec_5475_, lean_object* v_anchorInfo_x3f_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_, lean_object* v___y_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_){
_start:
{
lean_object* v_mvarIds_5489_; lean_object* v___x_5539_; 
v___x_5539_ = l_Lean_Meta_Grind_getGeneration___redArg(v___x_5471_, v___y_5477_);
if (lean_obj_tag(v___x_5539_) == 0)
{
lean_object* v_a_5540_; lean_object* v___y_5542_; lean_object* v___x_5597_; uint8_t v___x_5598_; 
v_a_5540_ = lean_ctor_get(v___x_5539_, 0);
lean_inc(v_a_5540_);
lean_dec_ref_known(v___x_5539_, 1);
v___x_5597_ = lean_unsigned_to_nat(1u);
v___x_5598_ = lean_nat_dec_lt(v___x_5597_, v_numCases_5474_);
if (v___x_5598_ == 0)
{
if (v_isRec_5475_ == 0)
{
lean_inc(v_a_5540_);
v___y_5542_ = v_a_5540_;
goto v___jp_5541_;
}
else
{
goto v___jp_5594_;
}
}
else
{
goto v___jp_5594_;
}
v___jp_5541_:
{
lean_object* v___x_5543_; lean_object* v___x_5544_; 
v___x_5543_ = l_Lean_Meta_Grind_SplitInfo_source(v_c_5472_);
lean_inc_ref(v___x_5471_);
v___x_5544_ = l_Lean_Meta_Grind_saveSplitDiagInfo___redArg(v___x_5471_, v___y_5542_, v_numCases_5474_, v___x_5543_, v___y_5480_, v___y_5483_, v___y_5485_);
if (lean_obj_tag(v___x_5544_) == 0)
{
lean_object* v___x_5545_; 
lean_dec_ref_known(v___x_5544_, 1);
lean_inc_ref(v___x_5471_);
v___x_5545_ = l_Lean_Meta_Grind_markCaseSplitAsResolved(v___x_5471_, v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_, v___y_5481_, v___y_5482_, v___y_5483_, v___y_5484_, v___y_5485_, v___y_5486_);
if (lean_obj_tag(v___x_5545_) == 0)
{
lean_object* v_toCold_5546_; lean_object* v_options_5547_; uint8_t v_hasTrace_5548_; 
lean_dec_ref_known(v___x_5545_, 1);
v_toCold_5546_ = lean_ctor_get(v___y_5485_, 0);
v_options_5547_ = lean_ctor_get(v_toCold_5546_, 2);
v_hasTrace_5548_ = lean_ctor_get_uint8(v_options_5547_, sizeof(void*)*1);
if (v_hasTrace_5548_ == 0)
{
lean_dec(v_a_5540_);
goto v___jp_5492_;
}
else
{
lean_object* v_inheritedTraceOptions_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; uint8_t v___x_5552_; 
v_inheritedTraceOptions_5549_ = lean_ctor_get(v_toCold_5546_, 11);
v___x_5550_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__1));
v___x_5551_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_checkSplitInfoArgStatus_spec__0___redArg___closed__2);
v___x_5552_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5549_, v_options_5547_, v___x_5551_);
if (v___x_5552_ == 0)
{
lean_dec(v_a_5540_);
goto v___jp_5492_;
}
else
{
lean_object* v___x_5553_; 
v___x_5553_ = l_Lean_Meta_Grind_updateLastTag(v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_, v___y_5481_, v___y_5482_, v___y_5483_, v___y_5484_, v___y_5485_, v___y_5486_);
if (lean_obj_tag(v___x_5553_) == 0)
{
lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; 
lean_dec_ref_known(v___x_5553_, 1);
lean_inc_ref(v___x_5471_);
v___x_5554_ = l_Lean_MessageData_ofExpr(v___x_5471_);
v___x_5555_ = lean_obj_once(&l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__1, &l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___closed__1);
v___x_5556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5556_, 0, v___x_5554_);
lean_ctor_set(v___x_5556_, 1, v___x_5555_);
v___x_5557_ = l_Nat_reprFast(v_a_5540_);
v___x_5558_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5558_, 0, v___x_5557_);
v___x_5559_ = l_Lean_MessageData_ofFormat(v___x_5558_);
v___x_5560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5560_, 0, v___x_5556_);
lean_ctor_set(v___x_5560_, 1, v___x_5559_);
v___x_5561_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_checkDefaultSplitStatus_spec__1___redArg(v___x_5550_, v___x_5560_, v___y_5483_, v___y_5484_, v___y_5485_, v___y_5486_);
if (lean_obj_tag(v___x_5561_) == 0)
{
lean_dec_ref_known(v___x_5561_, 1);
goto v___jp_5492_;
}
else
{
lean_object* v_a_5562_; lean_object* v___x_5564_; uint8_t v_isShared_5565_; uint8_t v_isSharedCheck_5569_; 
lean_dec(v_anchorInfo_x3f_5476_);
lean_dec(v_a_5473_);
lean_dec_ref(v_c_5472_);
lean_dec_ref(v___x_5471_);
v_a_5562_ = lean_ctor_get(v___x_5561_, 0);
v_isSharedCheck_5569_ = !lean_is_exclusive(v___x_5561_);
if (v_isSharedCheck_5569_ == 0)
{
v___x_5564_ = v___x_5561_;
v_isShared_5565_ = v_isSharedCheck_5569_;
goto v_resetjp_5563_;
}
else
{
lean_inc(v_a_5562_);
lean_dec(v___x_5561_);
v___x_5564_ = lean_box(0);
v_isShared_5565_ = v_isSharedCheck_5569_;
goto v_resetjp_5563_;
}
v_resetjp_5563_:
{
lean_object* v___x_5567_; 
if (v_isShared_5565_ == 0)
{
v___x_5567_ = v___x_5564_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v_a_5562_);
v___x_5567_ = v_reuseFailAlloc_5568_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
return v___x_5567_;
}
}
}
}
else
{
lean_object* v_a_5570_; lean_object* v___x_5572_; uint8_t v_isShared_5573_; uint8_t v_isSharedCheck_5577_; 
lean_dec(v_a_5540_);
lean_dec(v_anchorInfo_x3f_5476_);
lean_dec(v_a_5473_);
lean_dec_ref(v_c_5472_);
lean_dec_ref(v___x_5471_);
v_a_5570_ = lean_ctor_get(v___x_5553_, 0);
v_isSharedCheck_5577_ = !lean_is_exclusive(v___x_5553_);
if (v_isSharedCheck_5577_ == 0)
{
v___x_5572_ = v___x_5553_;
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
else
{
lean_inc(v_a_5570_);
lean_dec(v___x_5553_);
v___x_5572_ = lean_box(0);
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
v_resetjp_5571_:
{
lean_object* v___x_5575_; 
if (v_isShared_5573_ == 0)
{
v___x_5575_ = v___x_5572_;
goto v_reusejp_5574_;
}
else
{
lean_object* v_reuseFailAlloc_5576_; 
v_reuseFailAlloc_5576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5576_, 0, v_a_5570_);
v___x_5575_ = v_reuseFailAlloc_5576_;
goto v_reusejp_5574_;
}
v_reusejp_5574_:
{
return v___x_5575_;
}
}
}
}
}
}
else
{
lean_object* v_a_5578_; lean_object* v___x_5580_; uint8_t v_isShared_5581_; uint8_t v_isSharedCheck_5585_; 
lean_dec(v_a_5540_);
lean_dec(v_anchorInfo_x3f_5476_);
lean_dec(v_a_5473_);
lean_dec_ref(v_c_5472_);
lean_dec_ref(v___x_5471_);
v_a_5578_ = lean_ctor_get(v___x_5545_, 0);
v_isSharedCheck_5585_ = !lean_is_exclusive(v___x_5545_);
if (v_isSharedCheck_5585_ == 0)
{
v___x_5580_ = v___x_5545_;
v_isShared_5581_ = v_isSharedCheck_5585_;
goto v_resetjp_5579_;
}
else
{
lean_inc(v_a_5578_);
lean_dec(v___x_5545_);
v___x_5580_ = lean_box(0);
v_isShared_5581_ = v_isSharedCheck_5585_;
goto v_resetjp_5579_;
}
v_resetjp_5579_:
{
lean_object* v___x_5583_; 
if (v_isShared_5581_ == 0)
{
v___x_5583_ = v___x_5580_;
goto v_reusejp_5582_;
}
else
{
lean_object* v_reuseFailAlloc_5584_; 
v_reuseFailAlloc_5584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5584_, 0, v_a_5578_);
v___x_5583_ = v_reuseFailAlloc_5584_;
goto v_reusejp_5582_;
}
v_reusejp_5582_:
{
return v___x_5583_;
}
}
}
}
else
{
lean_object* v_a_5586_; lean_object* v___x_5588_; uint8_t v_isShared_5589_; uint8_t v_isSharedCheck_5593_; 
lean_dec(v_a_5540_);
lean_dec(v_anchorInfo_x3f_5476_);
lean_dec(v_a_5473_);
lean_dec_ref(v_c_5472_);
lean_dec_ref(v___x_5471_);
v_a_5586_ = lean_ctor_get(v___x_5544_, 0);
v_isSharedCheck_5593_ = !lean_is_exclusive(v___x_5544_);
if (v_isSharedCheck_5593_ == 0)
{
v___x_5588_ = v___x_5544_;
v_isShared_5589_ = v_isSharedCheck_5593_;
goto v_resetjp_5587_;
}
else
{
lean_inc(v_a_5586_);
lean_dec(v___x_5544_);
v___x_5588_ = lean_box(0);
v_isShared_5589_ = v_isSharedCheck_5593_;
goto v_resetjp_5587_;
}
v_resetjp_5587_:
{
lean_object* v___x_5591_; 
if (v_isShared_5589_ == 0)
{
v___x_5591_ = v___x_5588_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5592_; 
v_reuseFailAlloc_5592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5592_, 0, v_a_5586_);
v___x_5591_ = v_reuseFailAlloc_5592_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
return v___x_5591_;
}
}
}
}
v___jp_5594_:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; 
v___x_5595_ = lean_unsigned_to_nat(1u);
v___x_5596_ = lean_nat_add(v_a_5540_, v___x_5595_);
v___y_5542_ = v___x_5596_;
goto v___jp_5541_;
}
}
else
{
lean_object* v_a_5599_; lean_object* v___x_5601_; uint8_t v_isShared_5602_; uint8_t v_isSharedCheck_5606_; 
lean_dec(v_anchorInfo_x3f_5476_);
lean_dec(v_numCases_5474_);
lean_dec(v_a_5473_);
lean_dec_ref(v_c_5472_);
lean_dec_ref(v___x_5471_);
v_a_5599_ = lean_ctor_get(v___x_5539_, 0);
v_isSharedCheck_5606_ = !lean_is_exclusive(v___x_5539_);
if (v_isSharedCheck_5606_ == 0)
{
v___x_5601_ = v___x_5539_;
v_isShared_5602_ = v_isSharedCheck_5606_;
goto v_resetjp_5600_;
}
else
{
lean_inc(v_a_5599_);
lean_dec(v___x_5539_);
v___x_5601_ = lean_box(0);
v_isShared_5602_ = v_isSharedCheck_5606_;
goto v_resetjp_5600_;
}
v_resetjp_5600_:
{
lean_object* v___x_5604_; 
if (v_isShared_5602_ == 0)
{
v___x_5604_ = v___x_5601_;
goto v_reusejp_5603_;
}
else
{
lean_object* v_reuseFailAlloc_5605_; 
v_reuseFailAlloc_5605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5605_, 0, v_a_5599_);
v___x_5604_ = v_reuseFailAlloc_5605_;
goto v_reusejp_5603_;
}
v_reusejp_5603_:
{
return v___x_5604_;
}
}
}
v___jp_5488_:
{
lean_object* v___x_5490_; lean_object* v___x_5491_; 
v___x_5490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5490_, 0, v_mvarIds_5489_);
lean_ctor_set(v___x_5490_, 1, v_anchorInfo_x3f_5476_);
v___x_5491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5491_, 0, v___x_5490_);
return v___x_5491_;
}
v___jp_5492_:
{
lean_object* v___x_5493_; 
v___x_5493_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_Grind_Action_splitCore_spec__0___redArg(v___x_5471_, v___y_5486_);
if (lean_obj_tag(v_c_5472_) == 1)
{
lean_object* v_e_5494_; lean_object* v_binderType_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; 
lean_dec_ref(v___x_5493_);
lean_dec_ref(v___x_5471_);
v_e_5494_ = lean_ctor_get(v_c_5472_, 0);
lean_inc_ref(v_e_5494_);
lean_dec_ref_known(v_c_5472_, 2);
v_binderType_5495_ = lean_ctor_get(v_e_5494_, 1);
lean_inc_ref(v_binderType_5495_);
lean_dec_ref(v_e_5494_);
v___x_5496_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkGrindEM(v_binderType_5495_);
v___x_5497_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___redArg(v_a_5473_, v___x_5496_, v___y_5479_, v___y_5480_, v___y_5483_, v___y_5484_, v___y_5485_, v___y_5486_);
if (lean_obj_tag(v___x_5497_) == 0)
{
lean_object* v_a_5498_; 
v_a_5498_ = lean_ctor_get(v___x_5497_, 0);
lean_inc(v_a_5498_);
lean_dec_ref_known(v___x_5497_, 1);
v_mvarIds_5489_ = v_a_5498_;
goto v___jp_5488_;
}
else
{
lean_object* v_a_5499_; lean_object* v___x_5501_; uint8_t v_isShared_5502_; uint8_t v_isSharedCheck_5506_; 
lean_dec(v_anchorInfo_x3f_5476_);
v_a_5499_ = lean_ctor_get(v___x_5497_, 0);
v_isSharedCheck_5506_ = !lean_is_exclusive(v___x_5497_);
if (v_isSharedCheck_5506_ == 0)
{
v___x_5501_ = v___x_5497_;
v_isShared_5502_ = v_isSharedCheck_5506_;
goto v_resetjp_5500_;
}
else
{
lean_inc(v_a_5499_);
lean_dec(v___x_5497_);
v___x_5501_ = lean_box(0);
v_isShared_5502_ = v_isSharedCheck_5506_;
goto v_resetjp_5500_;
}
v_resetjp_5500_:
{
lean_object* v___x_5504_; 
if (v_isShared_5502_ == 0)
{
v___x_5504_ = v___x_5501_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5505_; 
v_reuseFailAlloc_5505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5505_, 0, v_a_5499_);
v___x_5504_ = v_reuseFailAlloc_5505_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
return v___x_5504_;
}
}
}
}
else
{
lean_object* v_a_5507_; uint8_t v___x_5508_; 
lean_dec_ref(v_c_5472_);
v_a_5507_ = lean_ctor_get(v___x_5493_, 0);
lean_inc(v_a_5507_);
lean_dec_ref(v___x_5493_);
v___x_5508_ = lean_unbox(v_a_5507_);
lean_dec(v_a_5507_);
if (v___x_5508_ == 0)
{
lean_object* v___x_5509_; 
v___x_5509_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_mkCasesMajor(v___x_5471_, v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_, v___y_5481_, v___y_5482_, v___y_5483_, v___y_5484_, v___y_5485_, v___y_5486_);
if (lean_obj_tag(v___x_5509_) == 0)
{
lean_object* v_a_5510_; lean_object* v___x_5511_; 
v_a_5510_ = lean_ctor_get(v___x_5509_, 0);
lean_inc(v_a_5510_);
lean_dec_ref_known(v___x_5509_, 1);
v___x_5511_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_casesWithTrace___redArg(v_a_5473_, v_a_5510_, v___y_5479_, v___y_5480_, v___y_5483_, v___y_5484_, v___y_5485_, v___y_5486_);
if (lean_obj_tag(v___x_5511_) == 0)
{
lean_object* v_a_5512_; 
v_a_5512_ = lean_ctor_get(v___x_5511_, 0);
lean_inc(v_a_5512_);
lean_dec_ref_known(v___x_5511_, 1);
v_mvarIds_5489_ = v_a_5512_;
goto v___jp_5488_;
}
else
{
lean_object* v_a_5513_; lean_object* v___x_5515_; uint8_t v_isShared_5516_; uint8_t v_isSharedCheck_5520_; 
lean_dec(v_anchorInfo_x3f_5476_);
v_a_5513_ = lean_ctor_get(v___x_5511_, 0);
v_isSharedCheck_5520_ = !lean_is_exclusive(v___x_5511_);
if (v_isSharedCheck_5520_ == 0)
{
v___x_5515_ = v___x_5511_;
v_isShared_5516_ = v_isSharedCheck_5520_;
goto v_resetjp_5514_;
}
else
{
lean_inc(v_a_5513_);
lean_dec(v___x_5511_);
v___x_5515_ = lean_box(0);
v_isShared_5516_ = v_isSharedCheck_5520_;
goto v_resetjp_5514_;
}
v_resetjp_5514_:
{
lean_object* v___x_5518_; 
if (v_isShared_5516_ == 0)
{
v___x_5518_ = v___x_5515_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v_a_5513_);
v___x_5518_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
return v___x_5518_;
}
}
}
}
else
{
lean_object* v_a_5521_; lean_object* v___x_5523_; uint8_t v_isShared_5524_; uint8_t v_isSharedCheck_5528_; 
lean_dec(v_anchorInfo_x3f_5476_);
lean_dec(v_a_5473_);
v_a_5521_ = lean_ctor_get(v___x_5509_, 0);
v_isSharedCheck_5528_ = !lean_is_exclusive(v___x_5509_);
if (v_isSharedCheck_5528_ == 0)
{
v___x_5523_ = v___x_5509_;
v_isShared_5524_ = v_isSharedCheck_5528_;
goto v_resetjp_5522_;
}
else
{
lean_inc(v_a_5521_);
lean_dec(v___x_5509_);
v___x_5523_ = lean_box(0);
v_isShared_5524_ = v_isSharedCheck_5528_;
goto v_resetjp_5522_;
}
v_resetjp_5522_:
{
lean_object* v___x_5526_; 
if (v_isShared_5524_ == 0)
{
v___x_5526_ = v___x_5523_;
goto v_reusejp_5525_;
}
else
{
lean_object* v_reuseFailAlloc_5527_; 
v_reuseFailAlloc_5527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5527_, 0, v_a_5521_);
v___x_5526_ = v_reuseFailAlloc_5527_;
goto v_reusejp_5525_;
}
v_reusejp_5525_:
{
return v___x_5526_;
}
}
}
}
else
{
lean_object* v___x_5529_; 
v___x_5529_ = l_Lean_Meta_Grind_casesMatch(v_a_5473_, v___x_5471_, v___y_5483_, v___y_5484_, v___y_5485_, v___y_5486_);
if (lean_obj_tag(v___x_5529_) == 0)
{
lean_object* v_a_5530_; 
v_a_5530_ = lean_ctor_get(v___x_5529_, 0);
lean_inc(v_a_5530_);
lean_dec_ref_known(v___x_5529_, 1);
v_mvarIds_5489_ = v_a_5530_;
goto v___jp_5488_;
}
else
{
lean_object* v_a_5531_; lean_object* v___x_5533_; uint8_t v_isShared_5534_; uint8_t v_isSharedCheck_5538_; 
lean_dec(v_anchorInfo_x3f_5476_);
v_a_5531_ = lean_ctor_get(v___x_5529_, 0);
v_isSharedCheck_5538_ = !lean_is_exclusive(v___x_5529_);
if (v_isSharedCheck_5538_ == 0)
{
v___x_5533_ = v___x_5529_;
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
else
{
lean_inc(v_a_5531_);
lean_dec(v___x_5529_);
v___x_5533_ = lean_box(0);
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
v_resetjp_5532_:
{
lean_object* v___x_5536_; 
if (v_isShared_5534_ == 0)
{
v___x_5536_ = v___x_5533_;
goto v_reusejp_5535_;
}
else
{
lean_object* v_reuseFailAlloc_5537_; 
v_reuseFailAlloc_5537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5537_, 0, v_a_5531_);
v___x_5536_ = v_reuseFailAlloc_5537_;
goto v_reusejp_5535_;
}
v_reusejp_5535_:
{
return v___x_5536_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_5607_ = _args[0];
lean_object* v_c_5608_ = _args[1];
lean_object* v_a_5609_ = _args[2];
lean_object* v_numCases_5610_ = _args[3];
lean_object* v_isRec_5611_ = _args[4];
lean_object* v_anchorInfo_x3f_5612_ = _args[5];
lean_object* v___y_5613_ = _args[6];
lean_object* v___y_5614_ = _args[7];
lean_object* v___y_5615_ = _args[8];
lean_object* v___y_5616_ = _args[9];
lean_object* v___y_5617_ = _args[10];
lean_object* v___y_5618_ = _args[11];
lean_object* v___y_5619_ = _args[12];
lean_object* v___y_5620_ = _args[13];
lean_object* v___y_5621_ = _args[14];
lean_object* v___y_5622_ = _args[15];
lean_object* v___y_5623_ = _args[16];
_start:
{
uint8_t v_isRec_boxed_5624_; lean_object* v_res_5625_; 
v_isRec_boxed_5624_ = lean_unbox(v_isRec_5611_);
v_res_5625_ = l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0(v___x_5607_, v_c_5608_, v_a_5609_, v_numCases_5610_, v_isRec_boxed_5624_, v_anchorInfo_x3f_5612_, v___y_5613_, v___y_5614_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_, v___y_5622_);
lean_dec(v___y_5622_);
lean_dec_ref(v___y_5621_);
lean_dec(v___y_5620_);
lean_dec_ref(v___y_5619_);
lean_dec(v___y_5618_);
lean_dec_ref(v___y_5617_);
lean_dec(v___y_5616_);
lean_dec_ref(v___y_5615_);
lean_dec(v___y_5614_);
lean_dec(v___y_5613_);
return v_res_5625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__1(lean_object* v_goal_5626_, uint8_t v_trace_5627_, lean_object* v___f_5628_, lean_object* v_c_5629_, lean_object* v_candidates_x3f_5630_, lean_object* v___y_5631_, lean_object* v___y_5632_, lean_object* v___y_5633_, lean_object* v___y_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_, lean_object* v___y_5637_, lean_object* v___y_5638_, lean_object* v___y_5639_){
_start:
{
lean_object* v___x_5641_; lean_object* v___y_5643_; 
v___x_5641_ = lean_st_mk_ref(v_goal_5626_);
if (v_trace_5627_ == 0)
{
lean_object* v___x_5662_; lean_object* v___x_5663_; 
lean_dec(v_candidates_x3f_5630_);
v___x_5662_ = lean_box(0);
lean_inc(v___x_5641_);
v___x_5663_ = lean_apply_12(v___f_5628_, v___x_5662_, v___x_5641_, v___y_5631_, v___y_5632_, v___y_5633_, v___y_5634_, v___y_5635_, v___y_5636_, v___y_5637_, v___y_5638_, v___y_5639_, lean_box(0));
v___y_5643_ = v___x_5663_;
goto v___jp_5642_;
}
else
{
lean_object* v___x_5664_; 
v___x_5664_ = l_Lean_Meta_Grind_mkSplitAnchorRefInfo(v_c_5629_, v_candidates_x3f_5630_, v___x_5641_, v___y_5631_, v___y_5632_, v___y_5633_, v___y_5634_, v___y_5635_, v___y_5636_, v___y_5637_, v___y_5638_, v___y_5639_);
if (lean_obj_tag(v___x_5664_) == 0)
{
lean_object* v_a_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; 
v_a_5665_ = lean_ctor_get(v___x_5664_, 0);
lean_inc(v_a_5665_);
lean_dec_ref_known(v___x_5664_, 1);
v___x_5666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5666_, 0, v_a_5665_);
lean_inc(v___x_5641_);
v___x_5667_ = lean_apply_12(v___f_5628_, v___x_5666_, v___x_5641_, v___y_5631_, v___y_5632_, v___y_5633_, v___y_5634_, v___y_5635_, v___y_5636_, v___y_5637_, v___y_5638_, v___y_5639_, lean_box(0));
v___y_5643_ = v___x_5667_;
goto v___jp_5642_;
}
else
{
lean_object* v_a_5668_; lean_object* v___x_5670_; uint8_t v_isShared_5671_; uint8_t v_isSharedCheck_5675_; 
lean_dec(v___x_5641_);
lean_dec(v___y_5639_);
lean_dec_ref(v___y_5638_);
lean_dec(v___y_5637_);
lean_dec_ref(v___y_5636_);
lean_dec(v___y_5635_);
lean_dec_ref(v___y_5634_);
lean_dec(v___y_5633_);
lean_dec_ref(v___y_5632_);
lean_dec(v___y_5631_);
lean_dec_ref(v___f_5628_);
v_a_5668_ = lean_ctor_get(v___x_5664_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5664_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5670_ = v___x_5664_;
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
else
{
lean_inc(v_a_5668_);
lean_dec(v___x_5664_);
v___x_5670_ = lean_box(0);
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
v_resetjp_5669_:
{
lean_object* v___x_5673_; 
if (v_isShared_5671_ == 0)
{
v___x_5673_ = v___x_5670_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v_a_5668_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
v___jp_5642_:
{
if (lean_obj_tag(v___y_5643_) == 0)
{
lean_object* v_a_5644_; lean_object* v___x_5646_; uint8_t v_isShared_5647_; uint8_t v_isSharedCheck_5653_; 
v_a_5644_ = lean_ctor_get(v___y_5643_, 0);
v_isSharedCheck_5653_ = !lean_is_exclusive(v___y_5643_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5646_ = v___y_5643_;
v_isShared_5647_ = v_isSharedCheck_5653_;
goto v_resetjp_5645_;
}
else
{
lean_inc(v_a_5644_);
lean_dec(v___y_5643_);
v___x_5646_ = lean_box(0);
v_isShared_5647_ = v_isSharedCheck_5653_;
goto v_resetjp_5645_;
}
v_resetjp_5645_:
{
lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5651_; 
v___x_5648_ = lean_st_ref_get(v___x_5641_);
lean_dec(v___x_5641_);
v___x_5649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5649_, 0, v_a_5644_);
lean_ctor_set(v___x_5649_, 1, v___x_5648_);
if (v_isShared_5647_ == 0)
{
lean_ctor_set(v___x_5646_, 0, v___x_5649_);
v___x_5651_ = v___x_5646_;
goto v_reusejp_5650_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v___x_5649_);
v___x_5651_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5650_;
}
v_reusejp_5650_:
{
return v___x_5651_;
}
}
}
else
{
lean_object* v_a_5654_; lean_object* v___x_5656_; uint8_t v_isShared_5657_; uint8_t v_isSharedCheck_5661_; 
lean_dec(v___x_5641_);
v_a_5654_ = lean_ctor_get(v___y_5643_, 0);
v_isSharedCheck_5661_ = !lean_is_exclusive(v___y_5643_);
if (v_isSharedCheck_5661_ == 0)
{
v___x_5656_ = v___y_5643_;
v_isShared_5657_ = v_isSharedCheck_5661_;
goto v_resetjp_5655_;
}
else
{
lean_inc(v_a_5654_);
lean_dec(v___y_5643_);
v___x_5656_ = lean_box(0);
v_isShared_5657_ = v_isSharedCheck_5661_;
goto v_resetjp_5655_;
}
v_resetjp_5655_:
{
lean_object* v___x_5659_; 
if (v_isShared_5657_ == 0)
{
v___x_5659_ = v___x_5656_;
goto v_reusejp_5658_;
}
else
{
lean_object* v_reuseFailAlloc_5660_; 
v_reuseFailAlloc_5660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5660_, 0, v_a_5654_);
v___x_5659_ = v_reuseFailAlloc_5660_;
goto v_reusejp_5658_;
}
v_reusejp_5658_:
{
return v___x_5659_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__1___boxed(lean_object* v_goal_5676_, lean_object* v_trace_5677_, lean_object* v___f_5678_, lean_object* v_c_5679_, lean_object* v_candidates_x3f_5680_, lean_object* v___y_5681_, lean_object* v___y_5682_, lean_object* v___y_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_){
_start:
{
uint8_t v_trace_boxed_5691_; lean_object* v_res_5692_; 
v_trace_boxed_5691_ = lean_unbox(v_trace_5677_);
v_res_5692_ = l_Lean_Meta_Grind_Action_splitCore___redArg___lam__1(v_goal_5676_, v_trace_boxed_5691_, v___f_5678_, v_c_5679_, v_candidates_x3f_5680_, v___y_5681_, v___y_5682_, v___y_5683_, v___y_5684_, v___y_5685_, v___y_5686_, v___y_5687_, v___y_5688_, v___y_5689_);
lean_dec_ref(v_c_5679_);
return v_res_5692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__2(lean_object* v_snd_5693_, lean_object* v_a_5694_, lean_object* v___y_5695_, lean_object* v___y_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_, lean_object* v___y_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_, lean_object* v___y_5703_){
_start:
{
lean_object* v___x_5705_; 
v___x_5705_ = l_Lean_Meta_Grind_getHoistedDecls___redArg(v_snd_5693_, v___y_5697_);
if (lean_obj_tag(v___x_5705_) == 0)
{
lean_object* v_a_5706_; lean_object* v___x_5707_; 
v_a_5706_ = lean_ctor_get(v___x_5705_, 0);
lean_inc(v_a_5706_);
lean_dec_ref_known(v___x_5705_, 1);
lean_inc(v_a_5694_);
v___x_5707_ = l_Lean_MVarId_getType(v_a_5694_, v___y_5700_, v___y_5701_, v___y_5702_, v___y_5703_);
if (lean_obj_tag(v___x_5707_) == 0)
{
lean_object* v_a_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; 
v_a_5708_ = lean_ctor_get(v___x_5707_, 0);
lean_inc(v_a_5708_);
lean_dec_ref_known(v___x_5707_, 1);
v___x_5709_ = l_Lean_mkMVar(v_a_5694_);
v___x_5710_ = l_Lean_Meta_Grind_mkHoistedDecls(v_a_5706_, v___x_5709_, v_a_5708_, v___y_5695_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_, v___y_5700_, v___y_5701_, v___y_5702_, v___y_5703_);
return v___x_5710_;
}
else
{
lean_dec(v_a_5706_);
lean_dec(v_a_5694_);
return v___x_5707_;
}
}
else
{
lean_object* v_a_5711_; lean_object* v___x_5713_; uint8_t v_isShared_5714_; uint8_t v_isSharedCheck_5718_; 
lean_dec(v_a_5694_);
v_a_5711_ = lean_ctor_get(v___x_5705_, 0);
v_isSharedCheck_5718_ = !lean_is_exclusive(v___x_5705_);
if (v_isSharedCheck_5718_ == 0)
{
v___x_5713_ = v___x_5705_;
v_isShared_5714_ = v_isSharedCheck_5718_;
goto v_resetjp_5712_;
}
else
{
lean_inc(v_a_5711_);
lean_dec(v___x_5705_);
v___x_5713_ = lean_box(0);
v_isShared_5714_ = v_isSharedCheck_5718_;
goto v_resetjp_5712_;
}
v_resetjp_5712_:
{
lean_object* v___x_5716_; 
if (v_isShared_5714_ == 0)
{
v___x_5716_ = v___x_5713_;
goto v_reusejp_5715_;
}
else
{
lean_object* v_reuseFailAlloc_5717_; 
v_reuseFailAlloc_5717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5717_, 0, v_a_5711_);
v___x_5716_ = v_reuseFailAlloc_5717_;
goto v_reusejp_5715_;
}
v_reusejp_5715_:
{
return v___x_5716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__2___boxed(lean_object* v_snd_5719_, lean_object* v_a_5720_, lean_object* v___y_5721_, lean_object* v___y_5722_, lean_object* v___y_5723_, lean_object* v___y_5724_, lean_object* v___y_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_){
_start:
{
lean_object* v_res_5731_; 
v_res_5731_ = l_Lean_Meta_Grind_Action_splitCore___redArg___lam__2(v_snd_5719_, v_a_5720_, v___y_5721_, v___y_5722_, v___y_5723_, v___y_5724_, v___y_5725_, v___y_5726_, v___y_5727_, v___y_5728_, v___y_5729_);
lean_dec(v___y_5729_);
lean_dec_ref(v___y_5728_);
lean_dec(v___y_5727_);
lean_dec_ref(v___y_5726_);
lean_dec(v___y_5725_);
lean_dec_ref(v___y_5724_);
lean_dec(v___y_5723_);
lean_dec_ref(v___y_5722_);
lean_dec(v___y_5721_);
lean_dec_ref(v_snd_5719_);
return v_res_5731_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; 
v___x_5734_ = lean_box(0);
v___x_5735_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__0));
v___x_5736_ = l_Lean_mkConst(v___x_5735_, v___x_5734_);
return v___x_5736_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1(lean_object* v___x_5737_, lean_object* v_snd_5738_, lean_object* v___x_5739_, lean_object* v_i_5740_, lean_object* v_falseProof_5741_, lean_object* v_seq_5742_, lean_object* v___y_5743_, lean_object* v___y_5744_, lean_object* v___y_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
lean_object* v___x_5753_; lean_object* v_congrThms_5754_; lean_object* v_simp_5755_; lean_object* v_symSimp_5756_; lean_object* v_symDSimp_5757_; lean_object* v_lastTag_5758_; lean_object* v_counters_5759_; lean_object* v_splitDiags_5760_; lean_object* v_ematchDiags_5761_; lean_object* v_lawfulEqCmpMap_5762_; lean_object* v_reflCmpMap_5763_; lean_object* v_anchors_5764_; lean_object* v_fvarAnchors_5765_; lean_object* v_instanceMap_5766_; lean_object* v_hoistedDecls_5767_; lean_object* v_proofInfos_5768_; lean_object* v_numBranches_5769_; lean_object* v___x_5771_; uint8_t v_isShared_5772_; uint8_t v_isSharedCheck_5822_; 
v___x_5753_ = lean_st_ref_take(v___y_5745_);
v_congrThms_5754_ = lean_ctor_get(v___x_5753_, 0);
v_simp_5755_ = lean_ctor_get(v___x_5753_, 1);
v_symSimp_5756_ = lean_ctor_get(v___x_5753_, 2);
v_symDSimp_5757_ = lean_ctor_get(v___x_5753_, 3);
v_lastTag_5758_ = lean_ctor_get(v___x_5753_, 4);
v_counters_5759_ = lean_ctor_get(v___x_5753_, 5);
v_splitDiags_5760_ = lean_ctor_get(v___x_5753_, 6);
v_ematchDiags_5761_ = lean_ctor_get(v___x_5753_, 7);
v_lawfulEqCmpMap_5762_ = lean_ctor_get(v___x_5753_, 8);
v_reflCmpMap_5763_ = lean_ctor_get(v___x_5753_, 9);
v_anchors_5764_ = lean_ctor_get(v___x_5753_, 10);
v_fvarAnchors_5765_ = lean_ctor_get(v___x_5753_, 11);
v_instanceMap_5766_ = lean_ctor_get(v___x_5753_, 12);
v_hoistedDecls_5767_ = lean_ctor_get(v___x_5753_, 13);
v_proofInfos_5768_ = lean_ctor_get(v___x_5753_, 14);
v_numBranches_5769_ = lean_ctor_get(v___x_5753_, 15);
v_isSharedCheck_5822_ = !lean_is_exclusive(v___x_5753_);
if (v_isSharedCheck_5822_ == 0)
{
v___x_5771_ = v___x_5753_;
v_isShared_5772_ = v_isSharedCheck_5822_;
goto v_resetjp_5770_;
}
else
{
lean_inc(v_numBranches_5769_);
lean_inc(v_proofInfos_5768_);
lean_inc(v_hoistedDecls_5767_);
lean_inc(v_instanceMap_5766_);
lean_inc(v_fvarAnchors_5765_);
lean_inc(v_anchors_5764_);
lean_inc(v_reflCmpMap_5763_);
lean_inc(v_lawfulEqCmpMap_5762_);
lean_inc(v_ematchDiags_5761_);
lean_inc(v_splitDiags_5760_);
lean_inc(v_counters_5759_);
lean_inc(v_lastTag_5758_);
lean_inc(v_symDSimp_5757_);
lean_inc(v_symSimp_5756_);
lean_inc(v_simp_5755_);
lean_inc(v_congrThms_5754_);
lean_dec(v___x_5753_);
v___x_5771_ = lean_box(0);
v_isShared_5772_ = v_isSharedCheck_5822_;
goto v_resetjp_5770_;
}
v_resetjp_5770_:
{
lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5776_; lean_object* v___x_5778_; 
v___x_5773_ = lean_unsigned_to_nat(1u);
v___x_5774_ = lean_nat_sub(v___x_5737_, v___x_5773_);
v___x_5775_ = lean_nat_sub(v___x_5774_, v_i_5740_);
lean_dec(v___x_5774_);
v___x_5776_ = lean_nat_sub(v_numBranches_5769_, v___x_5775_);
lean_dec(v___x_5775_);
lean_dec(v_numBranches_5769_);
if (v_isShared_5772_ == 0)
{
lean_ctor_set(v___x_5771_, 15, v___x_5776_);
v___x_5778_ = v___x_5771_;
goto v_reusejp_5777_;
}
else
{
lean_object* v_reuseFailAlloc_5821_; 
v_reuseFailAlloc_5821_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_5821_, 0, v_congrThms_5754_);
lean_ctor_set(v_reuseFailAlloc_5821_, 1, v_simp_5755_);
lean_ctor_set(v_reuseFailAlloc_5821_, 2, v_symSimp_5756_);
lean_ctor_set(v_reuseFailAlloc_5821_, 3, v_symDSimp_5757_);
lean_ctor_set(v_reuseFailAlloc_5821_, 4, v_lastTag_5758_);
lean_ctor_set(v_reuseFailAlloc_5821_, 5, v_counters_5759_);
lean_ctor_set(v_reuseFailAlloc_5821_, 6, v_splitDiags_5760_);
lean_ctor_set(v_reuseFailAlloc_5821_, 7, v_ematchDiags_5761_);
lean_ctor_set(v_reuseFailAlloc_5821_, 8, v_lawfulEqCmpMap_5762_);
lean_ctor_set(v_reuseFailAlloc_5821_, 9, v_reflCmpMap_5763_);
lean_ctor_set(v_reuseFailAlloc_5821_, 10, v_anchors_5764_);
lean_ctor_set(v_reuseFailAlloc_5821_, 11, v_fvarAnchors_5765_);
lean_ctor_set(v_reuseFailAlloc_5821_, 12, v_instanceMap_5766_);
lean_ctor_set(v_reuseFailAlloc_5821_, 13, v_hoistedDecls_5767_);
lean_ctor_set(v_reuseFailAlloc_5821_, 14, v_proofInfos_5768_);
lean_ctor_set(v_reuseFailAlloc_5821_, 15, v___x_5776_);
v___x_5778_ = v_reuseFailAlloc_5821_;
goto v_reusejp_5777_;
}
v_reusejp_5777_:
{
lean_object* v___x_5779_; lean_object* v___x_5780_; 
v___x_5779_ = lean_st_ref_put(v___y_5745_, v___x_5778_);
v___x_5780_ = l_Lean_Meta_Grind_getHoistedDecls___redArg(v_snd_5738_, v___y_5745_);
if (lean_obj_tag(v___x_5780_) == 0)
{
lean_object* v_a_5781_; lean_object* v_mvarId_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; 
v_a_5781_ = lean_ctor_get(v___x_5780_, 0);
lean_inc(v_a_5781_);
lean_dec_ref_known(v___x_5780_, 1);
v_mvarId_5782_ = lean_ctor_get(v_snd_5738_, 1);
lean_inc(v_mvarId_5782_);
lean_dec_ref(v_snd_5738_);
v___x_5783_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1, &l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1);
v___x_5784_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkHoistedDecls___boxed), 13, 3);
lean_closure_set(v___x_5784_, 0, v_a_5781_);
lean_closure_set(v___x_5784_, 1, v_falseProof_5741_);
lean_closure_set(v___x_5784_, 2, v___x_5783_);
v___x_5785_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(v_mvarId_5782_, v___x_5784_, v___y_5743_, v___y_5744_, v___y_5745_, v___y_5746_, v___y_5747_, v___y_5748_, v___y_5749_, v___y_5750_, v___y_5751_);
if (lean_obj_tag(v___x_5785_) == 0)
{
lean_object* v_a_5786_; lean_object* v___x_5787_; 
v_a_5786_ = lean_ctor_get(v___x_5785_, 0);
lean_inc(v_a_5786_);
lean_dec_ref_known(v___x_5785_, 1);
v___x_5787_ = l_Lean_MVarId_assignFalseProof(v___x_5739_, v_a_5786_, v___y_5748_, v___y_5749_, v___y_5750_, v___y_5751_);
if (lean_obj_tag(v___x_5787_) == 0)
{
lean_object* v___x_5789_; uint8_t v_isShared_5790_; uint8_t v_isSharedCheck_5795_; 
v_isSharedCheck_5795_ = !lean_is_exclusive(v___x_5787_);
if (v_isSharedCheck_5795_ == 0)
{
lean_object* v_unused_5796_; 
v_unused_5796_ = lean_ctor_get(v___x_5787_, 0);
lean_dec(v_unused_5796_);
v___x_5789_ = v___x_5787_;
v_isShared_5790_ = v_isSharedCheck_5795_;
goto v_resetjp_5788_;
}
else
{
lean_dec(v___x_5787_);
v___x_5789_ = lean_box(0);
v_isShared_5790_ = v_isSharedCheck_5795_;
goto v_resetjp_5788_;
}
v_resetjp_5788_:
{
lean_object* v___x_5791_; lean_object* v___x_5793_; 
v___x_5791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5791_, 0, v_seq_5742_);
if (v_isShared_5790_ == 0)
{
lean_ctor_set(v___x_5789_, 0, v___x_5791_);
v___x_5793_ = v___x_5789_;
goto v_reusejp_5792_;
}
else
{
lean_object* v_reuseFailAlloc_5794_; 
v_reuseFailAlloc_5794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5794_, 0, v___x_5791_);
v___x_5793_ = v_reuseFailAlloc_5794_;
goto v_reusejp_5792_;
}
v_reusejp_5792_:
{
return v___x_5793_;
}
}
}
else
{
lean_object* v_a_5797_; lean_object* v___x_5799_; uint8_t v_isShared_5800_; uint8_t v_isSharedCheck_5804_; 
lean_dec(v_seq_5742_);
v_a_5797_ = lean_ctor_get(v___x_5787_, 0);
v_isSharedCheck_5804_ = !lean_is_exclusive(v___x_5787_);
if (v_isSharedCheck_5804_ == 0)
{
v___x_5799_ = v___x_5787_;
v_isShared_5800_ = v_isSharedCheck_5804_;
goto v_resetjp_5798_;
}
else
{
lean_inc(v_a_5797_);
lean_dec(v___x_5787_);
v___x_5799_ = lean_box(0);
v_isShared_5800_ = v_isSharedCheck_5804_;
goto v_resetjp_5798_;
}
v_resetjp_5798_:
{
lean_object* v___x_5802_; 
if (v_isShared_5800_ == 0)
{
v___x_5802_ = v___x_5799_;
goto v_reusejp_5801_;
}
else
{
lean_object* v_reuseFailAlloc_5803_; 
v_reuseFailAlloc_5803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5803_, 0, v_a_5797_);
v___x_5802_ = v_reuseFailAlloc_5803_;
goto v_reusejp_5801_;
}
v_reusejp_5801_:
{
return v___x_5802_;
}
}
}
}
else
{
lean_object* v_a_5805_; lean_object* v___x_5807_; uint8_t v_isShared_5808_; uint8_t v_isSharedCheck_5812_; 
lean_dec(v_seq_5742_);
lean_dec(v___x_5739_);
v_a_5805_ = lean_ctor_get(v___x_5785_, 0);
v_isSharedCheck_5812_ = !lean_is_exclusive(v___x_5785_);
if (v_isSharedCheck_5812_ == 0)
{
v___x_5807_ = v___x_5785_;
v_isShared_5808_ = v_isSharedCheck_5812_;
goto v_resetjp_5806_;
}
else
{
lean_inc(v_a_5805_);
lean_dec(v___x_5785_);
v___x_5807_ = lean_box(0);
v_isShared_5808_ = v_isSharedCheck_5812_;
goto v_resetjp_5806_;
}
v_resetjp_5806_:
{
lean_object* v___x_5810_; 
if (v_isShared_5808_ == 0)
{
v___x_5810_ = v___x_5807_;
goto v_reusejp_5809_;
}
else
{
lean_object* v_reuseFailAlloc_5811_; 
v_reuseFailAlloc_5811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5811_, 0, v_a_5805_);
v___x_5810_ = v_reuseFailAlloc_5811_;
goto v_reusejp_5809_;
}
v_reusejp_5809_:
{
return v___x_5810_;
}
}
}
}
else
{
lean_object* v_a_5813_; lean_object* v___x_5815_; uint8_t v_isShared_5816_; uint8_t v_isSharedCheck_5820_; 
lean_dec(v_seq_5742_);
lean_dec_ref(v_falseProof_5741_);
lean_dec(v___x_5739_);
lean_dec_ref(v_snd_5738_);
v_a_5813_ = lean_ctor_get(v___x_5780_, 0);
v_isSharedCheck_5820_ = !lean_is_exclusive(v___x_5780_);
if (v_isSharedCheck_5820_ == 0)
{
v___x_5815_ = v___x_5780_;
v_isShared_5816_ = v_isSharedCheck_5820_;
goto v_resetjp_5814_;
}
else
{
lean_inc(v_a_5813_);
lean_dec(v___x_5780_);
v___x_5815_ = lean_box(0);
v_isShared_5816_ = v_isSharedCheck_5820_;
goto v_resetjp_5814_;
}
v_resetjp_5814_:
{
lean_object* v___x_5818_; 
if (v_isShared_5816_ == 0)
{
v___x_5818_ = v___x_5815_;
goto v_reusejp_5817_;
}
else
{
lean_object* v_reuseFailAlloc_5819_; 
v_reuseFailAlloc_5819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5819_, 0, v_a_5813_);
v___x_5818_ = v_reuseFailAlloc_5819_;
goto v_reusejp_5817_;
}
v_reusejp_5817_:
{
return v___x_5818_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___boxed(lean_object* v___x_5823_, lean_object* v_snd_5824_, lean_object* v___x_5825_, lean_object* v_i_5826_, lean_object* v_falseProof_5827_, lean_object* v_seq_5828_, lean_object* v___y_5829_, lean_object* v___y_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_, lean_object* v___y_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_, lean_object* v___y_5836_, lean_object* v___y_5837_, lean_object* v___y_5838_){
_start:
{
lean_object* v_res_5839_; 
v_res_5839_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1(v___x_5823_, v_snd_5824_, v___x_5825_, v_i_5826_, v_falseProof_5827_, v_seq_5828_, v___y_5829_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_, v___y_5835_, v___y_5836_, v___y_5837_);
lean_dec(v___y_5837_);
lean_dec_ref(v___y_5836_);
lean_dec(v___y_5835_);
lean_dec_ref(v___y_5834_);
lean_dec(v___y_5833_);
lean_dec_ref(v___y_5832_);
lean_dec(v___y_5831_);
lean_dec_ref(v___y_5830_);
lean_dec(v___y_5829_);
lean_dec(v_i_5826_);
lean_dec(v___x_5823_);
return v_res_5839_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__1(lean_object* v___x_5840_, lean_object* v_a_5841_, lean_object* v_a_5842_){
_start:
{
if (lean_obj_tag(v_a_5841_) == 0)
{
lean_object* v___x_5843_; 
v___x_5843_ = l_List_reverse___redArg(v_a_5842_);
return v___x_5843_;
}
else
{
lean_object* v_head_5844_; lean_object* v_toGoalState_5845_; lean_object* v_tail_5846_; lean_object* v___x_5848_; uint8_t v_isShared_5849_; uint8_t v_isSharedCheck_5896_; 
v_head_5844_ = lean_ctor_get(v_a_5841_, 0);
lean_inc(v_head_5844_);
v_toGoalState_5845_ = lean_ctor_get(v_head_5844_, 0);
lean_inc_ref(v_toGoalState_5845_);
v_tail_5846_ = lean_ctor_get(v_a_5841_, 1);
v_isSharedCheck_5896_ = !lean_is_exclusive(v_a_5841_);
if (v_isSharedCheck_5896_ == 0)
{
lean_object* v_unused_5897_; 
v_unused_5897_ = lean_ctor_get(v_a_5841_, 0);
lean_dec(v_unused_5897_);
v___x_5848_ = v_a_5841_;
v_isShared_5849_ = v_isSharedCheck_5896_;
goto v_resetjp_5847_;
}
else
{
lean_inc(v_tail_5846_);
lean_dec(v_a_5841_);
v___x_5848_ = lean_box(0);
v_isShared_5849_ = v_isSharedCheck_5896_;
goto v_resetjp_5847_;
}
v_resetjp_5847_:
{
lean_object* v_mvarId_5850_; lean_object* v___x_5852_; uint8_t v_isShared_5853_; uint8_t v_isSharedCheck_5894_; 
v_mvarId_5850_ = lean_ctor_get(v_head_5844_, 1);
v_isSharedCheck_5894_ = !lean_is_exclusive(v_head_5844_);
if (v_isSharedCheck_5894_ == 0)
{
lean_object* v_unused_5895_; 
v_unused_5895_ = lean_ctor_get(v_head_5844_, 0);
lean_dec(v_unused_5895_);
v___x_5852_ = v_head_5844_;
v_isShared_5853_ = v_isSharedCheck_5894_;
goto v_resetjp_5851_;
}
else
{
lean_inc(v_mvarId_5850_);
lean_dec(v_head_5844_);
v___x_5852_ = lean_box(0);
v_isShared_5853_ = v_isSharedCheck_5894_;
goto v_resetjp_5851_;
}
v_resetjp_5851_:
{
lean_object* v_nextDeclIdx_5854_; lean_object* v_enodeMap_5855_; lean_object* v_exprs_5856_; lean_object* v_parents_5857_; lean_object* v_condParents_5858_; lean_object* v_congrTable_5859_; lean_object* v_appMap_5860_; lean_object* v_indicesFound_5861_; lean_object* v_toProcess_5862_; lean_object* v_internalizing_5863_; uint8_t v_inconsistent_5864_; lean_object* v_nextIdx_5865_; lean_object* v_newRawFacts_5866_; lean_object* v_facts_5867_; lean_object* v_extThms_5868_; lean_object* v_ematch_5869_; lean_object* v_inj_5870_; lean_object* v_split_5871_; lean_object* v_clean_5872_; lean_object* v_sstates_5873_; lean_object* v_goalStack_5874_; uint64_t v_introBase_5875_; lean_object* v_numIntros_5876_; lean_object* v___x_5878_; uint8_t v_isShared_5879_; uint8_t v_isSharedCheck_5893_; 
v_nextDeclIdx_5854_ = lean_ctor_get(v_toGoalState_5845_, 0);
v_enodeMap_5855_ = lean_ctor_get(v_toGoalState_5845_, 1);
v_exprs_5856_ = lean_ctor_get(v_toGoalState_5845_, 2);
v_parents_5857_ = lean_ctor_get(v_toGoalState_5845_, 3);
v_condParents_5858_ = lean_ctor_get(v_toGoalState_5845_, 4);
v_congrTable_5859_ = lean_ctor_get(v_toGoalState_5845_, 5);
v_appMap_5860_ = lean_ctor_get(v_toGoalState_5845_, 6);
v_indicesFound_5861_ = lean_ctor_get(v_toGoalState_5845_, 7);
v_toProcess_5862_ = lean_ctor_get(v_toGoalState_5845_, 8);
v_internalizing_5863_ = lean_ctor_get(v_toGoalState_5845_, 9);
v_inconsistent_5864_ = lean_ctor_get_uint8(v_toGoalState_5845_, sizeof(void*)*21 + 8);
v_nextIdx_5865_ = lean_ctor_get(v_toGoalState_5845_, 10);
v_newRawFacts_5866_ = lean_ctor_get(v_toGoalState_5845_, 11);
v_facts_5867_ = lean_ctor_get(v_toGoalState_5845_, 12);
v_extThms_5868_ = lean_ctor_get(v_toGoalState_5845_, 13);
v_ematch_5869_ = lean_ctor_get(v_toGoalState_5845_, 14);
v_inj_5870_ = lean_ctor_get(v_toGoalState_5845_, 15);
v_split_5871_ = lean_ctor_get(v_toGoalState_5845_, 16);
v_clean_5872_ = lean_ctor_get(v_toGoalState_5845_, 17);
v_sstates_5873_ = lean_ctor_get(v_toGoalState_5845_, 18);
v_goalStack_5874_ = lean_ctor_get(v_toGoalState_5845_, 19);
v_introBase_5875_ = lean_ctor_get_uint64(v_toGoalState_5845_, sizeof(void*)*21);
v_numIntros_5876_ = lean_ctor_get(v_toGoalState_5845_, 20);
v_isSharedCheck_5893_ = !lean_is_exclusive(v_toGoalState_5845_);
if (v_isSharedCheck_5893_ == 0)
{
v___x_5878_ = v_toGoalState_5845_;
v_isShared_5879_ = v_isSharedCheck_5893_;
goto v_resetjp_5877_;
}
else
{
lean_inc(v_numIntros_5876_);
lean_inc(v_goalStack_5874_);
lean_inc(v_sstates_5873_);
lean_inc(v_clean_5872_);
lean_inc(v_split_5871_);
lean_inc(v_inj_5870_);
lean_inc(v_ematch_5869_);
lean_inc(v_extThms_5868_);
lean_inc(v_facts_5867_);
lean_inc(v_newRawFacts_5866_);
lean_inc(v_nextIdx_5865_);
lean_inc(v_internalizing_5863_);
lean_inc(v_toProcess_5862_);
lean_inc(v_indicesFound_5861_);
lean_inc(v_appMap_5860_);
lean_inc(v_congrTable_5859_);
lean_inc(v_condParents_5858_);
lean_inc(v_parents_5857_);
lean_inc(v_exprs_5856_);
lean_inc(v_enodeMap_5855_);
lean_inc(v_nextDeclIdx_5854_);
lean_dec(v_toGoalState_5845_);
v___x_5878_ = lean_box(0);
v_isShared_5879_ = v_isSharedCheck_5893_;
goto v_resetjp_5877_;
}
v_resetjp_5877_:
{
lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5884_; 
v___x_5880_ = lean_unsigned_to_nat(0u);
v___x_5881_ = lean_array_get_size(v___x_5840_);
v___x_5882_ = l_Array_extract___redArg(v_goalStack_5874_, v___x_5880_, v___x_5881_);
lean_dec_ref(v_goalStack_5874_);
if (v_isShared_5879_ == 0)
{
lean_ctor_set(v___x_5878_, 19, v___x_5882_);
v___x_5884_ = v___x_5878_;
goto v_reusejp_5883_;
}
else
{
lean_object* v_reuseFailAlloc_5892_; 
v_reuseFailAlloc_5892_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_5892_, 0, v_nextDeclIdx_5854_);
lean_ctor_set(v_reuseFailAlloc_5892_, 1, v_enodeMap_5855_);
lean_ctor_set(v_reuseFailAlloc_5892_, 2, v_exprs_5856_);
lean_ctor_set(v_reuseFailAlloc_5892_, 3, v_parents_5857_);
lean_ctor_set(v_reuseFailAlloc_5892_, 4, v_condParents_5858_);
lean_ctor_set(v_reuseFailAlloc_5892_, 5, v_congrTable_5859_);
lean_ctor_set(v_reuseFailAlloc_5892_, 6, v_appMap_5860_);
lean_ctor_set(v_reuseFailAlloc_5892_, 7, v_indicesFound_5861_);
lean_ctor_set(v_reuseFailAlloc_5892_, 8, v_toProcess_5862_);
lean_ctor_set(v_reuseFailAlloc_5892_, 9, v_internalizing_5863_);
lean_ctor_set(v_reuseFailAlloc_5892_, 10, v_nextIdx_5865_);
lean_ctor_set(v_reuseFailAlloc_5892_, 11, v_newRawFacts_5866_);
lean_ctor_set(v_reuseFailAlloc_5892_, 12, v_facts_5867_);
lean_ctor_set(v_reuseFailAlloc_5892_, 13, v_extThms_5868_);
lean_ctor_set(v_reuseFailAlloc_5892_, 14, v_ematch_5869_);
lean_ctor_set(v_reuseFailAlloc_5892_, 15, v_inj_5870_);
lean_ctor_set(v_reuseFailAlloc_5892_, 16, v_split_5871_);
lean_ctor_set(v_reuseFailAlloc_5892_, 17, v_clean_5872_);
lean_ctor_set(v_reuseFailAlloc_5892_, 18, v_sstates_5873_);
lean_ctor_set(v_reuseFailAlloc_5892_, 19, v___x_5882_);
lean_ctor_set(v_reuseFailAlloc_5892_, 20, v_numIntros_5876_);
lean_ctor_set_uint8(v_reuseFailAlloc_5892_, sizeof(void*)*21 + 8, v_inconsistent_5864_);
lean_ctor_set_uint64(v_reuseFailAlloc_5892_, sizeof(void*)*21, v_introBase_5875_);
v___x_5884_ = v_reuseFailAlloc_5892_;
goto v_reusejp_5883_;
}
v_reusejp_5883_:
{
lean_object* v___x_5886_; 
if (v_isShared_5853_ == 0)
{
lean_ctor_set(v___x_5852_, 0, v___x_5884_);
v___x_5886_ = v___x_5852_;
goto v_reusejp_5885_;
}
else
{
lean_object* v_reuseFailAlloc_5891_; 
v_reuseFailAlloc_5891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5891_, 0, v___x_5884_);
lean_ctor_set(v_reuseFailAlloc_5891_, 1, v_mvarId_5850_);
v___x_5886_ = v_reuseFailAlloc_5891_;
goto v_reusejp_5885_;
}
v_reusejp_5885_:
{
lean_object* v___x_5888_; 
if (v_isShared_5849_ == 0)
{
lean_ctor_set(v___x_5848_, 1, v_a_5842_);
lean_ctor_set(v___x_5848_, 0, v___x_5886_);
v___x_5888_ = v___x_5848_;
goto v_reusejp_5887_;
}
else
{
lean_object* v_reuseFailAlloc_5890_; 
v_reuseFailAlloc_5890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5890_, 0, v___x_5886_);
lean_ctor_set(v_reuseFailAlloc_5890_, 1, v_a_5842_);
v___x_5888_ = v_reuseFailAlloc_5890_;
goto v_reusejp_5887_;
}
v_reusejp_5887_:
{
v_a_5841_ = v_tail_5846_;
v_a_5842_ = v___x_5888_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__1___boxed(lean_object* v___x_5898_, lean_object* v_a_5899_, lean_object* v_a_5900_){
_start:
{
lean_object* v_res_5901_; 
v_res_5901_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__1(v___x_5898_, v_a_5899_, v_a_5900_);
lean_dec_ref(v___x_5898_);
return v_res_5901_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__0(lean_object* v___x_5902_, lean_object* v_gs_5903_){
_start:
{
lean_object* v___x_5904_; lean_object* v___x_5905_; 
v___x_5904_ = lean_box(0);
v___x_5905_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__1(v___x_5902_, v_gs_5903_, v___x_5904_);
return v___x_5905_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__0___boxed(lean_object* v___x_5906_, lean_object* v_gs_5907_){
_start:
{
lean_object* v_res_5908_; 
v_res_5908_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__0(v___x_5906_, v_gs_5907_);
lean_dec_ref(v___x_5906_);
return v_res_5908_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg(lean_object* v_kp_5909_, lean_object* v_a_5910_, lean_object* v_goal_5911_, lean_object* v___x_5912_, lean_object* v_snd_5913_, lean_object* v___x_5914_, uint8_t v_stopAtFirstFailure_5915_, lean_object* v___x_5916_, lean_object* v_as_x27_5917_, lean_object* v_b_5918_, lean_object* v___y_5919_, lean_object* v___y_5920_, lean_object* v___y_5921_, lean_object* v___y_5922_, lean_object* v___y_5923_, lean_object* v___y_5924_, lean_object* v___y_5925_, lean_object* v___y_5926_, lean_object* v___y_5927_){
_start:
{
if (lean_obj_tag(v_as_x27_5917_) == 0)
{
lean_object* v___x_5929_; 
lean_dec(v___x_5914_);
lean_dec_ref(v_snd_5913_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
v___x_5929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5929_, 0, v_b_5918_);
return v___x_5929_;
}
else
{
lean_object* v_snd_5930_; lean_object* v___x_5932_; uint8_t v_isShared_5933_; uint8_t v_isSharedCheck_6211_; 
v_snd_5930_ = lean_ctor_get(v_b_5918_, 1);
v_isSharedCheck_6211_ = !lean_is_exclusive(v_b_5918_);
if (v_isSharedCheck_6211_ == 0)
{
lean_object* v_unused_6212_; 
v_unused_6212_ = lean_ctor_get(v_b_5918_, 0);
lean_dec(v_unused_6212_);
v___x_5932_ = v_b_5918_;
v_isShared_5933_ = v_isSharedCheck_6211_;
goto v_resetjp_5931_;
}
else
{
lean_inc(v_snd_5930_);
lean_dec(v_b_5918_);
v___x_5932_ = lean_box(0);
v_isShared_5933_ = v_isSharedCheck_6211_;
goto v_resetjp_5931_;
}
v_resetjp_5931_:
{
lean_object* v_snd_5934_; lean_object* v_snd_5935_; lean_object* v_snd_5936_; lean_object* v_head_5937_; lean_object* v_tail_5938_; lean_object* v_fst_5939_; lean_object* v___x_5941_; uint8_t v_isShared_5942_; uint8_t v_isSharedCheck_6209_; 
v_snd_5934_ = lean_ctor_get(v_snd_5930_, 1);
lean_inc(v_snd_5934_);
v_snd_5935_ = lean_ctor_get(v_snd_5934_, 1);
lean_inc(v_snd_5935_);
v_snd_5936_ = lean_ctor_get(v_snd_5935_, 1);
lean_inc(v_snd_5936_);
v_head_5937_ = lean_ctor_get(v_as_x27_5917_, 0);
v_tail_5938_ = lean_ctor_get(v_as_x27_5917_, 1);
v_fst_5939_ = lean_ctor_get(v_snd_5930_, 0);
v_isSharedCheck_6209_ = !lean_is_exclusive(v_snd_5930_);
if (v_isSharedCheck_6209_ == 0)
{
lean_object* v_unused_6210_; 
v_unused_6210_ = lean_ctor_get(v_snd_5930_, 1);
lean_dec(v_unused_6210_);
v___x_5941_ = v_snd_5930_;
v_isShared_5942_ = v_isSharedCheck_6209_;
goto v_resetjp_5940_;
}
else
{
lean_inc(v_fst_5939_);
lean_dec(v_snd_5930_);
v___x_5941_ = lean_box(0);
v_isShared_5942_ = v_isSharedCheck_6209_;
goto v_resetjp_5940_;
}
v_resetjp_5940_:
{
lean_object* v_fst_5943_; lean_object* v___x_5945_; uint8_t v_isShared_5946_; uint8_t v_isSharedCheck_6207_; 
v_fst_5943_ = lean_ctor_get(v_snd_5934_, 0);
v_isSharedCheck_6207_ = !lean_is_exclusive(v_snd_5934_);
if (v_isSharedCheck_6207_ == 0)
{
lean_object* v_unused_6208_; 
v_unused_6208_ = lean_ctor_get(v_snd_5934_, 1);
lean_dec(v_unused_6208_);
v___x_5945_ = v_snd_5934_;
v_isShared_5946_ = v_isSharedCheck_6207_;
goto v_resetjp_5944_;
}
else
{
lean_inc(v_fst_5943_);
lean_dec(v_snd_5934_);
v___x_5945_ = lean_box(0);
v_isShared_5946_ = v_isSharedCheck_6207_;
goto v_resetjp_5944_;
}
v_resetjp_5944_:
{
lean_object* v_fst_5947_; lean_object* v___x_5949_; uint8_t v_isShared_5950_; uint8_t v_isSharedCheck_6205_; 
v_fst_5947_ = lean_ctor_get(v_snd_5935_, 0);
v_isSharedCheck_6205_ = !lean_is_exclusive(v_snd_5935_);
if (v_isSharedCheck_6205_ == 0)
{
lean_object* v_unused_6206_; 
v_unused_6206_ = lean_ctor_get(v_snd_5935_, 1);
lean_dec(v_unused_6206_);
v___x_5949_ = v_snd_5935_;
v_isShared_5950_ = v_isSharedCheck_6205_;
goto v_resetjp_5948_;
}
else
{
lean_inc(v_fst_5947_);
lean_dec(v_snd_5935_);
v___x_5949_ = lean_box(0);
v_isShared_5950_ = v_isSharedCheck_6205_;
goto v_resetjp_5948_;
}
v_resetjp_5948_:
{
lean_object* v_start_5951_; lean_object* v_stop_5952_; lean_object* v_step_5953_; lean_object* v___x_5954_; uint8_t v___x_5955_; 
v_start_5951_ = lean_ctor_get(v_snd_5936_, 0);
v_stop_5952_ = lean_ctor_get(v_snd_5936_, 1);
v_step_5953_ = lean_ctor_get(v_snd_5936_, 2);
v___x_5954_ = lean_box(0);
v___x_5955_ = lean_nat_dec_lt(v_start_5951_, v_stop_5952_);
if (v___x_5955_ == 0)
{
lean_object* v___x_5957_; 
lean_dec(v___x_5914_);
lean_dec_ref(v_snd_5913_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
if (v_isShared_5950_ == 0)
{
v___x_5957_ = v___x_5949_;
goto v_reusejp_5956_;
}
else
{
lean_object* v_reuseFailAlloc_5968_; 
v_reuseFailAlloc_5968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5968_, 0, v_fst_5947_);
lean_ctor_set(v_reuseFailAlloc_5968_, 1, v_snd_5936_);
v___x_5957_ = v_reuseFailAlloc_5968_;
goto v_reusejp_5956_;
}
v_reusejp_5956_:
{
lean_object* v___x_5959_; 
if (v_isShared_5946_ == 0)
{
lean_ctor_set(v___x_5945_, 1, v___x_5957_);
v___x_5959_ = v___x_5945_;
goto v_reusejp_5958_;
}
else
{
lean_object* v_reuseFailAlloc_5967_; 
v_reuseFailAlloc_5967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5967_, 0, v_fst_5943_);
lean_ctor_set(v_reuseFailAlloc_5967_, 1, v___x_5957_);
v___x_5959_ = v_reuseFailAlloc_5967_;
goto v_reusejp_5958_;
}
v_reusejp_5958_:
{
lean_object* v___x_5961_; 
if (v_isShared_5942_ == 0)
{
lean_ctor_set(v___x_5941_, 1, v___x_5959_);
v___x_5961_ = v___x_5941_;
goto v_reusejp_5960_;
}
else
{
lean_object* v_reuseFailAlloc_5966_; 
v_reuseFailAlloc_5966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5966_, 0, v_fst_5939_);
lean_ctor_set(v_reuseFailAlloc_5966_, 1, v___x_5959_);
v___x_5961_ = v_reuseFailAlloc_5966_;
goto v_reusejp_5960_;
}
v_reusejp_5960_:
{
lean_object* v___x_5963_; 
if (v_isShared_5933_ == 0)
{
lean_ctor_set(v___x_5932_, 1, v___x_5961_);
lean_ctor_set(v___x_5932_, 0, v___x_5954_);
v___x_5963_ = v___x_5932_;
goto v_reusejp_5962_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v___x_5954_);
lean_ctor_set(v_reuseFailAlloc_5965_, 1, v___x_5961_);
v___x_5963_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5962_;
}
v_reusejp_5962_:
{
lean_object* v___x_5964_; 
v___x_5964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5964_, 0, v___x_5963_);
return v___x_5964_;
}
}
}
}
}
else
{
lean_object* v___x_5970_; uint8_t v_isShared_5971_; uint8_t v_isSharedCheck_6201_; 
lean_inc(v_step_5953_);
lean_inc(v_stop_5952_);
lean_inc(v_start_5951_);
v_isSharedCheck_6201_ = !lean_is_exclusive(v_snd_5936_);
if (v_isSharedCheck_6201_ == 0)
{
lean_object* v_unused_6202_; lean_object* v_unused_6203_; lean_object* v_unused_6204_; 
v_unused_6202_ = lean_ctor_get(v_snd_5936_, 2);
lean_dec(v_unused_6202_);
v_unused_6203_ = lean_ctor_get(v_snd_5936_, 1);
lean_dec(v_unused_6203_);
v_unused_6204_ = lean_ctor_get(v_snd_5936_, 0);
lean_dec(v_unused_6204_);
v___x_5970_ = v_snd_5936_;
v_isShared_5971_ = v_isSharedCheck_6201_;
goto v_resetjp_5969_;
}
else
{
lean_dec(v_snd_5936_);
v___x_5970_ = lean_box(0);
v_isShared_5971_ = v_isSharedCheck_6201_;
goto v_resetjp_5969_;
}
v_resetjp_5969_:
{
lean_object* v___x_5972_; lean_object* v___x_5974_; 
v___x_5972_ = lean_nat_add(v_start_5951_, v_step_5953_);
if (v_isShared_5971_ == 0)
{
lean_ctor_set(v___x_5970_, 0, v___x_5972_);
v___x_5974_ = v___x_5970_;
goto v_reusejp_5973_;
}
else
{
lean_object* v_reuseFailAlloc_6200_; 
v_reuseFailAlloc_6200_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6200_, 0, v___x_5972_);
lean_ctor_set(v_reuseFailAlloc_6200_, 1, v_stop_5952_);
lean_ctor_set(v_reuseFailAlloc_6200_, 2, v_step_5953_);
v___x_5974_ = v_reuseFailAlloc_6200_;
goto v_reusejp_5973_;
}
v_reusejp_5973_:
{
lean_object* v___x_5975_; 
lean_inc_ref(v_kp_5909_);
lean_inc(v___y_5927_);
lean_inc_ref(v___y_5926_);
lean_inc(v___y_5925_);
lean_inc_ref(v___y_5924_);
lean_inc(v___y_5923_);
lean_inc_ref(v___y_5922_);
lean_inc(v___y_5921_);
lean_inc_ref(v___y_5920_);
lean_inc(v___y_5919_);
lean_inc(v_head_5937_);
v___x_5975_ = lean_apply_11(v_kp_5909_, v_head_5937_, v___y_5919_, v___y_5920_, v___y_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_, v___y_5926_, v___y_5927_, lean_box(0));
if (lean_obj_tag(v___x_5975_) == 0)
{
lean_object* v_a_5976_; lean_object* v___x_5978_; uint8_t v_isShared_5979_; uint8_t v_isSharedCheck_6191_; 
v_a_5976_ = lean_ctor_get(v___x_5975_, 0);
v_isSharedCheck_6191_ = !lean_is_exclusive(v___x_5975_);
if (v_isSharedCheck_6191_ == 0)
{
v___x_5978_ = v___x_5975_;
v_isShared_5979_ = v_isSharedCheck_6191_;
goto v_resetjp_5977_;
}
else
{
lean_inc(v_a_5976_);
lean_dec(v___x_5975_);
v___x_5978_ = lean_box(0);
v_isShared_5979_ = v_isSharedCheck_6191_;
goto v_resetjp_5977_;
}
v_resetjp_5977_:
{
if (lean_obj_tag(v_a_5976_) == 0)
{
lean_object* v_seq_5980_; lean_object* v_ncb_x3f_5982_; lean_object* v_mvarId_6011_; lean_object* v___x_6012_; 
lean_del_object(v___x_5978_);
v_seq_5980_ = lean_ctor_get(v_a_5976_, 0);
lean_inc(v_seq_5980_);
lean_dec_ref_known(v_a_5976_, 1);
v_mvarId_6011_ = lean_ctor_get(v_head_5937_, 1);
lean_inc(v_mvarId_6011_);
v___x_6012_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f(v_mvarId_6011_, v___y_5919_, v___y_5920_, v___y_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_, v___y_5926_, v___y_5927_);
if (lean_obj_tag(v___x_6012_) == 0)
{
lean_object* v_a_6013_; 
v_a_6013_ = lean_ctor_get(v___x_6012_, 0);
lean_inc(v_a_6013_);
lean_dec_ref_known(v___x_6012_, 1);
if (lean_obj_tag(v_a_6013_) == 1)
{
lean_object* v_val_6014_; lean_object* v___x_6016_; uint8_t v_isShared_6017_; uint8_t v_isSharedCheck_6069_; 
v_val_6014_ = lean_ctor_get(v_a_6013_, 0);
v_isSharedCheck_6069_ = !lean_is_exclusive(v_a_6013_);
if (v_isSharedCheck_6069_ == 0)
{
v___x_6016_ = v_a_6013_;
v_isShared_6017_ = v_isSharedCheck_6069_;
goto v_resetjp_6015_;
}
else
{
lean_inc(v_val_6014_);
lean_dec(v_a_6013_);
v___x_6016_ = lean_box(0);
v_isShared_6017_ = v_isSharedCheck_6069_;
goto v_resetjp_6015_;
}
v_resetjp_6015_:
{
lean_object* v___x_6018_; 
lean_inc(v_seq_5980_);
lean_inc_ref(v_goal_5911_);
lean_inc(v_a_5910_);
v___x_6018_ = l_Lean_Meta_Grind_Action_checkSeqAt(v_a_5910_, v_goal_5911_, v_seq_5980_, v___y_5919_, v___y_5920_, v___y_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_, v___y_5926_, v___y_5927_);
if (lean_obj_tag(v___x_6018_) == 0)
{
lean_object* v_a_6019_; uint8_t v___x_6020_; 
v_a_6019_ = lean_ctor_get(v___x_6018_, 0);
lean_inc(v_a_6019_);
lean_dec_ref_known(v___x_6018_, 1);
v___x_6020_ = lean_unbox(v_a_6019_);
lean_dec(v_a_6019_);
if (v___x_6020_ == 0)
{
if (lean_obj_tag(v_fst_5947_) == 0)
{
lean_object* v___x_6021_; 
v___x_6021_ = l_Lean_Meta_Grind_saveState___redArg(v___y_5921_, v___y_5925_, v___y_5927_);
if (lean_obj_tag(v___x_6021_) == 0)
{
lean_object* v_a_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6027_; 
v_a_6022_ = lean_ctor_get(v___x_6021_, 0);
lean_inc(v_a_6022_);
lean_dec_ref_known(v___x_6021_, 1);
lean_inc(v_seq_5980_);
v___x_6023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6023_, 0, v_val_6014_);
lean_ctor_set(v___x_6023_, 1, v_seq_5980_);
v___x_6024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6024_, 0, v_start_5951_);
lean_ctor_set(v___x_6024_, 1, v___x_6023_);
v___x_6025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6025_, 0, v_a_6022_);
lean_ctor_set(v___x_6025_, 1, v___x_6024_);
if (v_isShared_6017_ == 0)
{
lean_ctor_set(v___x_6016_, 0, v___x_6025_);
v___x_6027_ = v___x_6016_;
goto v_reusejp_6026_;
}
else
{
lean_object* v_reuseFailAlloc_6028_; 
v_reuseFailAlloc_6028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6028_, 0, v___x_6025_);
v___x_6027_ = v_reuseFailAlloc_6028_;
goto v_reusejp_6026_;
}
v_reusejp_6026_:
{
v_ncb_x3f_5982_ = v___x_6027_;
goto v___jp_5981_;
}
}
else
{
lean_object* v_a_6029_; lean_object* v___x_6031_; uint8_t v_isShared_6032_; uint8_t v_isSharedCheck_6036_; 
lean_del_object(v___x_6016_);
lean_dec(v_val_6014_);
lean_dec(v_seq_5980_);
lean_dec_ref(v___x_5974_);
lean_dec(v_start_5951_);
lean_del_object(v___x_5949_);
lean_del_object(v___x_5945_);
lean_dec(v_fst_5943_);
lean_del_object(v___x_5941_);
lean_dec(v_fst_5939_);
lean_del_object(v___x_5932_);
lean_dec(v___x_5914_);
lean_dec_ref(v_snd_5913_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
v_a_6029_ = lean_ctor_get(v___x_6021_, 0);
v_isSharedCheck_6036_ = !lean_is_exclusive(v___x_6021_);
if (v_isSharedCheck_6036_ == 0)
{
v___x_6031_ = v___x_6021_;
v_isShared_6032_ = v_isSharedCheck_6036_;
goto v_resetjp_6030_;
}
else
{
lean_inc(v_a_6029_);
lean_dec(v___x_6021_);
v___x_6031_ = lean_box(0);
v_isShared_6032_ = v_isSharedCheck_6036_;
goto v_resetjp_6030_;
}
v_resetjp_6030_:
{
lean_object* v___x_6034_; 
if (v_isShared_6032_ == 0)
{
v___x_6034_ = v___x_6031_;
goto v_reusejp_6033_;
}
else
{
lean_object* v_reuseFailAlloc_6035_; 
v_reuseFailAlloc_6035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6035_, 0, v_a_6029_);
v___x_6034_ = v_reuseFailAlloc_6035_;
goto v_reusejp_6033_;
}
v_reusejp_6033_:
{
return v___x_6034_;
}
}
}
}
else
{
lean_del_object(v___x_6016_);
lean_dec(v_val_6014_);
lean_dec(v_start_5951_);
v_ncb_x3f_5982_ = v_fst_5947_;
goto v___jp_5981_;
}
}
else
{
lean_object* v___x_6037_; 
lean_del_object(v___x_5949_);
lean_del_object(v___x_5945_);
lean_del_object(v___x_5941_);
lean_del_object(v___x_5932_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
v___x_6037_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1(v___x_5912_, v_snd_5913_, v___x_5914_, v_start_5951_, v_val_6014_, v_seq_5980_, v___y_5919_, v___y_5920_, v___y_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_, v___y_5926_, v___y_5927_);
lean_dec(v_start_5951_);
if (lean_obj_tag(v___x_6037_) == 0)
{
lean_object* v_a_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6052_; 
v_a_6038_ = lean_ctor_get(v___x_6037_, 0);
v_isSharedCheck_6052_ = !lean_is_exclusive(v___x_6037_);
if (v_isSharedCheck_6052_ == 0)
{
v___x_6040_ = v___x_6037_;
v_isShared_6041_ = v_isSharedCheck_6052_;
goto v_resetjp_6039_;
}
else
{
lean_inc(v_a_6038_);
lean_dec(v___x_6037_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6052_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v___x_6043_; 
if (v_isShared_6017_ == 0)
{
lean_ctor_set(v___x_6016_, 0, v_a_6038_);
v___x_6043_ = v___x_6016_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6051_; 
v_reuseFailAlloc_6051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6051_, 0, v_a_6038_);
v___x_6043_ = v_reuseFailAlloc_6051_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; lean_object* v___x_6049_; 
v___x_6044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6044_, 0, v_fst_5947_);
lean_ctor_set(v___x_6044_, 1, v___x_5974_);
v___x_6045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6045_, 0, v_fst_5943_);
lean_ctor_set(v___x_6045_, 1, v___x_6044_);
v___x_6046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6046_, 0, v_fst_5939_);
lean_ctor_set(v___x_6046_, 1, v___x_6045_);
v___x_6047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6047_, 0, v___x_6043_);
lean_ctor_set(v___x_6047_, 1, v___x_6046_);
if (v_isShared_6041_ == 0)
{
lean_ctor_set(v___x_6040_, 0, v___x_6047_);
v___x_6049_ = v___x_6040_;
goto v_reusejp_6048_;
}
else
{
lean_object* v_reuseFailAlloc_6050_; 
v_reuseFailAlloc_6050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6050_, 0, v___x_6047_);
v___x_6049_ = v_reuseFailAlloc_6050_;
goto v_reusejp_6048_;
}
v_reusejp_6048_:
{
return v___x_6049_;
}
}
}
}
else
{
lean_object* v_a_6053_; lean_object* v___x_6055_; uint8_t v_isShared_6056_; uint8_t v_isSharedCheck_6060_; 
lean_del_object(v___x_6016_);
lean_dec_ref(v___x_5974_);
lean_dec(v_fst_5947_);
lean_dec(v_fst_5943_);
lean_dec(v_fst_5939_);
v_a_6053_ = lean_ctor_get(v___x_6037_, 0);
v_isSharedCheck_6060_ = !lean_is_exclusive(v___x_6037_);
if (v_isSharedCheck_6060_ == 0)
{
v___x_6055_ = v___x_6037_;
v_isShared_6056_ = v_isSharedCheck_6060_;
goto v_resetjp_6054_;
}
else
{
lean_inc(v_a_6053_);
lean_dec(v___x_6037_);
v___x_6055_ = lean_box(0);
v_isShared_6056_ = v_isSharedCheck_6060_;
goto v_resetjp_6054_;
}
v_resetjp_6054_:
{
lean_object* v___x_6058_; 
if (v_isShared_6056_ == 0)
{
v___x_6058_ = v___x_6055_;
goto v_reusejp_6057_;
}
else
{
lean_object* v_reuseFailAlloc_6059_; 
v_reuseFailAlloc_6059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6059_, 0, v_a_6053_);
v___x_6058_ = v_reuseFailAlloc_6059_;
goto v_reusejp_6057_;
}
v_reusejp_6057_:
{
return v___x_6058_;
}
}
}
}
}
else
{
lean_object* v_a_6061_; lean_object* v___x_6063_; uint8_t v_isShared_6064_; uint8_t v_isSharedCheck_6068_; 
lean_del_object(v___x_6016_);
lean_dec(v_val_6014_);
lean_dec(v_seq_5980_);
lean_dec_ref(v___x_5974_);
lean_dec(v_start_5951_);
lean_del_object(v___x_5949_);
lean_dec(v_fst_5947_);
lean_del_object(v___x_5945_);
lean_dec(v_fst_5943_);
lean_del_object(v___x_5941_);
lean_dec(v_fst_5939_);
lean_del_object(v___x_5932_);
lean_dec(v___x_5914_);
lean_dec_ref(v_snd_5913_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
v_a_6061_ = lean_ctor_get(v___x_6018_, 0);
v_isSharedCheck_6068_ = !lean_is_exclusive(v___x_6018_);
if (v_isSharedCheck_6068_ == 0)
{
v___x_6063_ = v___x_6018_;
v_isShared_6064_ = v_isSharedCheck_6068_;
goto v_resetjp_6062_;
}
else
{
lean_inc(v_a_6061_);
lean_dec(v___x_6018_);
v___x_6063_ = lean_box(0);
v_isShared_6064_ = v_isSharedCheck_6068_;
goto v_resetjp_6062_;
}
v_resetjp_6062_:
{
lean_object* v___x_6066_; 
if (v_isShared_6064_ == 0)
{
v___x_6066_ = v___x_6063_;
goto v_reusejp_6065_;
}
else
{
lean_object* v_reuseFailAlloc_6067_; 
v_reuseFailAlloc_6067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6067_, 0, v_a_6061_);
v___x_6066_ = v_reuseFailAlloc_6067_;
goto v_reusejp_6065_;
}
v_reusejp_6065_:
{
return v___x_6066_;
}
}
}
}
}
else
{
uint8_t v___x_6070_; 
lean_dec(v_a_6013_);
lean_dec(v_start_5951_);
lean_del_object(v___x_5949_);
lean_del_object(v___x_5945_);
lean_del_object(v___x_5941_);
lean_del_object(v___x_5932_);
v___x_6070_ = l_List_isEmpty___redArg(v_seq_5980_);
if (v___x_6070_ == 0)
{
lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; 
v___x_6071_ = lean_array_push(v_fst_5939_, v_seq_5980_);
v___x_6072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6072_, 0, v_fst_5947_);
lean_ctor_set(v___x_6072_, 1, v___x_5974_);
v___x_6073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6073_, 0, v_fst_5943_);
lean_ctor_set(v___x_6073_, 1, v___x_6072_);
v___x_6074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6074_, 0, v___x_6071_);
lean_ctor_set(v___x_6074_, 1, v___x_6073_);
v___x_6075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6075_, 0, v___x_5954_);
lean_ctor_set(v___x_6075_, 1, v___x_6074_);
v_as_x27_5917_ = v_tail_5938_;
v_b_5918_ = v___x_6075_;
goto _start;
}
else
{
lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; 
lean_dec(v_seq_5980_);
v___x_6077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6077_, 0, v_fst_5947_);
lean_ctor_set(v___x_6077_, 1, v___x_5974_);
v___x_6078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6078_, 0, v_fst_5943_);
lean_ctor_set(v___x_6078_, 1, v___x_6077_);
v___x_6079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6079_, 0, v_fst_5939_);
lean_ctor_set(v___x_6079_, 1, v___x_6078_);
v___x_6080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6080_, 0, v___x_5954_);
lean_ctor_set(v___x_6080_, 1, v___x_6079_);
v_as_x27_5917_ = v_tail_5938_;
v_b_5918_ = v___x_6080_;
goto _start;
}
}
}
else
{
lean_object* v_a_6082_; lean_object* v___x_6084_; uint8_t v_isShared_6085_; uint8_t v_isSharedCheck_6089_; 
lean_dec(v_seq_5980_);
lean_dec_ref(v___x_5974_);
lean_dec(v_start_5951_);
lean_del_object(v___x_5949_);
lean_dec(v_fst_5947_);
lean_del_object(v___x_5945_);
lean_dec(v_fst_5943_);
lean_del_object(v___x_5941_);
lean_dec(v_fst_5939_);
lean_del_object(v___x_5932_);
lean_dec(v___x_5914_);
lean_dec_ref(v_snd_5913_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
v_a_6082_ = lean_ctor_get(v___x_6012_, 0);
v_isSharedCheck_6089_ = !lean_is_exclusive(v___x_6012_);
if (v_isSharedCheck_6089_ == 0)
{
v___x_6084_ = v___x_6012_;
v_isShared_6085_ = v_isSharedCheck_6089_;
goto v_resetjp_6083_;
}
else
{
lean_inc(v_a_6082_);
lean_dec(v___x_6012_);
v___x_6084_ = lean_box(0);
v_isShared_6085_ = v_isSharedCheck_6089_;
goto v_resetjp_6083_;
}
v_resetjp_6083_:
{
lean_object* v___x_6087_; 
if (v_isShared_6085_ == 0)
{
v___x_6087_ = v___x_6084_;
goto v_reusejp_6086_;
}
else
{
lean_object* v_reuseFailAlloc_6088_; 
v_reuseFailAlloc_6088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6088_, 0, v_a_6082_);
v___x_6087_ = v_reuseFailAlloc_6088_;
goto v_reusejp_6086_;
}
v_reusejp_6086_:
{
return v___x_6087_;
}
}
}
v___jp_5981_:
{
uint8_t v___x_5983_; 
v___x_5983_ = l_List_isEmpty___redArg(v_seq_5980_);
if (v___x_5983_ == 0)
{
lean_object* v___x_5984_; lean_object* v___x_5986_; 
v___x_5984_ = lean_array_push(v_fst_5939_, v_seq_5980_);
if (v_isShared_5950_ == 0)
{
lean_ctor_set(v___x_5949_, 1, v___x_5974_);
lean_ctor_set(v___x_5949_, 0, v_ncb_x3f_5982_);
v___x_5986_ = v___x_5949_;
goto v_reusejp_5985_;
}
else
{
lean_object* v_reuseFailAlloc_5997_; 
v_reuseFailAlloc_5997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5997_, 0, v_ncb_x3f_5982_);
lean_ctor_set(v_reuseFailAlloc_5997_, 1, v___x_5974_);
v___x_5986_ = v_reuseFailAlloc_5997_;
goto v_reusejp_5985_;
}
v_reusejp_5985_:
{
lean_object* v___x_5988_; 
if (v_isShared_5946_ == 0)
{
lean_ctor_set(v___x_5945_, 1, v___x_5986_);
v___x_5988_ = v___x_5945_;
goto v_reusejp_5987_;
}
else
{
lean_object* v_reuseFailAlloc_5996_; 
v_reuseFailAlloc_5996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5996_, 0, v_fst_5943_);
lean_ctor_set(v_reuseFailAlloc_5996_, 1, v___x_5986_);
v___x_5988_ = v_reuseFailAlloc_5996_;
goto v_reusejp_5987_;
}
v_reusejp_5987_:
{
lean_object* v___x_5990_; 
if (v_isShared_5942_ == 0)
{
lean_ctor_set(v___x_5941_, 1, v___x_5988_);
lean_ctor_set(v___x_5941_, 0, v___x_5984_);
v___x_5990_ = v___x_5941_;
goto v_reusejp_5989_;
}
else
{
lean_object* v_reuseFailAlloc_5995_; 
v_reuseFailAlloc_5995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5995_, 0, v___x_5984_);
lean_ctor_set(v_reuseFailAlloc_5995_, 1, v___x_5988_);
v___x_5990_ = v_reuseFailAlloc_5995_;
goto v_reusejp_5989_;
}
v_reusejp_5989_:
{
lean_object* v___x_5992_; 
if (v_isShared_5933_ == 0)
{
lean_ctor_set(v___x_5932_, 1, v___x_5990_);
lean_ctor_set(v___x_5932_, 0, v___x_5954_);
v___x_5992_ = v___x_5932_;
goto v_reusejp_5991_;
}
else
{
lean_object* v_reuseFailAlloc_5994_; 
v_reuseFailAlloc_5994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5994_, 0, v___x_5954_);
lean_ctor_set(v_reuseFailAlloc_5994_, 1, v___x_5990_);
v___x_5992_ = v_reuseFailAlloc_5994_;
goto v_reusejp_5991_;
}
v_reusejp_5991_:
{
v_as_x27_5917_ = v_tail_5938_;
v_b_5918_ = v___x_5992_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_5999_; 
lean_dec(v_seq_5980_);
if (v_isShared_5950_ == 0)
{
lean_ctor_set(v___x_5949_, 1, v___x_5974_);
lean_ctor_set(v___x_5949_, 0, v_ncb_x3f_5982_);
v___x_5999_ = v___x_5949_;
goto v_reusejp_5998_;
}
else
{
lean_object* v_reuseFailAlloc_6010_; 
v_reuseFailAlloc_6010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6010_, 0, v_ncb_x3f_5982_);
lean_ctor_set(v_reuseFailAlloc_6010_, 1, v___x_5974_);
v___x_5999_ = v_reuseFailAlloc_6010_;
goto v_reusejp_5998_;
}
v_reusejp_5998_:
{
lean_object* v___x_6001_; 
if (v_isShared_5946_ == 0)
{
lean_ctor_set(v___x_5945_, 1, v___x_5999_);
v___x_6001_ = v___x_5945_;
goto v_reusejp_6000_;
}
else
{
lean_object* v_reuseFailAlloc_6009_; 
v_reuseFailAlloc_6009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6009_, 0, v_fst_5943_);
lean_ctor_set(v_reuseFailAlloc_6009_, 1, v___x_5999_);
v___x_6001_ = v_reuseFailAlloc_6009_;
goto v_reusejp_6000_;
}
v_reusejp_6000_:
{
lean_object* v___x_6003_; 
if (v_isShared_5942_ == 0)
{
lean_ctor_set(v___x_5941_, 1, v___x_6001_);
v___x_6003_ = v___x_5941_;
goto v_reusejp_6002_;
}
else
{
lean_object* v_reuseFailAlloc_6008_; 
v_reuseFailAlloc_6008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6008_, 0, v_fst_5939_);
lean_ctor_set(v_reuseFailAlloc_6008_, 1, v___x_6001_);
v___x_6003_ = v_reuseFailAlloc_6008_;
goto v_reusejp_6002_;
}
v_reusejp_6002_:
{
lean_object* v___x_6005_; 
if (v_isShared_5933_ == 0)
{
lean_ctor_set(v___x_5932_, 1, v___x_6003_);
lean_ctor_set(v___x_5932_, 0, v___x_5954_);
v___x_6005_ = v___x_5932_;
goto v_reusejp_6004_;
}
else
{
lean_object* v_reuseFailAlloc_6007_; 
v_reuseFailAlloc_6007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6007_, 0, v___x_5954_);
lean_ctor_set(v_reuseFailAlloc_6007_, 1, v___x_6003_);
v___x_6005_ = v_reuseFailAlloc_6007_;
goto v_reusejp_6004_;
}
v_reusejp_6004_:
{
v_as_x27_5917_ = v_tail_5938_;
v_b_5918_ = v___x_6005_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_dec(v_start_5951_);
if (lean_obj_tag(v_fst_5947_) == 1)
{
lean_object* v_val_6090_; lean_object* v_snd_6091_; lean_object* v_snd_6092_; lean_object* v_fst_6093_; lean_object* v___x_6095_; uint8_t v_isShared_6096_; uint8_t v_isSharedCheck_6148_; 
lean_dec_ref_known(v_a_5976_, 1);
lean_del_object(v___x_5978_);
lean_del_object(v___x_5945_);
lean_del_object(v___x_5941_);
lean_del_object(v___x_5932_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
v_val_6090_ = lean_ctor_get(v_fst_5947_, 0);
lean_inc(v_val_6090_);
v_snd_6091_ = lean_ctor_get(v_val_6090_, 1);
lean_inc(v_snd_6091_);
v_snd_6092_ = lean_ctor_get(v_snd_6091_, 1);
lean_inc(v_snd_6092_);
v_fst_6093_ = lean_ctor_get(v_val_6090_, 0);
v_isSharedCheck_6148_ = !lean_is_exclusive(v_val_6090_);
if (v_isSharedCheck_6148_ == 0)
{
lean_object* v_unused_6149_; 
v_unused_6149_ = lean_ctor_get(v_val_6090_, 1);
lean_dec(v_unused_6149_);
v___x_6095_ = v_val_6090_;
v_isShared_6096_ = v_isSharedCheck_6148_;
goto v_resetjp_6094_;
}
else
{
lean_inc(v_fst_6093_);
lean_dec(v_val_6090_);
v___x_6095_ = lean_box(0);
v_isShared_6096_ = v_isSharedCheck_6148_;
goto v_resetjp_6094_;
}
v_resetjp_6094_:
{
lean_object* v_fst_6097_; lean_object* v___x_6099_; uint8_t v_isShared_6100_; uint8_t v_isSharedCheck_6146_; 
v_fst_6097_ = lean_ctor_get(v_snd_6091_, 0);
v_isSharedCheck_6146_ = !lean_is_exclusive(v_snd_6091_);
if (v_isSharedCheck_6146_ == 0)
{
lean_object* v_unused_6147_; 
v_unused_6147_ = lean_ctor_get(v_snd_6091_, 1);
lean_dec(v_unused_6147_);
v___x_6099_ = v_snd_6091_;
v_isShared_6100_ = v_isSharedCheck_6146_;
goto v_resetjp_6098_;
}
else
{
lean_inc(v_fst_6097_);
lean_dec(v_snd_6091_);
v___x_6099_ = lean_box(0);
v_isShared_6100_ = v_isSharedCheck_6146_;
goto v_resetjp_6098_;
}
v_resetjp_6098_:
{
lean_object* v_fst_6101_; lean_object* v_snd_6102_; lean_object* v___x_6104_; uint8_t v_isShared_6105_; uint8_t v_isSharedCheck_6145_; 
v_fst_6101_ = lean_ctor_get(v_snd_6092_, 0);
v_snd_6102_ = lean_ctor_get(v_snd_6092_, 1);
v_isSharedCheck_6145_ = !lean_is_exclusive(v_snd_6092_);
if (v_isSharedCheck_6145_ == 0)
{
v___x_6104_ = v_snd_6092_;
v_isShared_6105_ = v_isSharedCheck_6145_;
goto v_resetjp_6103_;
}
else
{
lean_inc(v_snd_6102_);
lean_inc(v_fst_6101_);
lean_dec(v_snd_6092_);
v___x_6104_ = lean_box(0);
v_isShared_6105_ = v_isSharedCheck_6145_;
goto v_resetjp_6103_;
}
v_resetjp_6103_:
{
lean_object* v___x_6106_; 
v___x_6106_ = l_Lean_Meta_Grind_SavedState_restore___redArg(v_fst_6093_, v___y_5921_, v___y_5925_, v___y_5927_);
if (lean_obj_tag(v___x_6106_) == 0)
{
lean_object* v___x_6107_; 
lean_dec_ref_known(v___x_6106_, 1);
v___x_6107_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1(v___x_5912_, v_snd_5913_, v___x_5914_, v_fst_6097_, v_fst_6101_, v_snd_6102_, v___y_5919_, v___y_5920_, v___y_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_, v___y_5926_, v___y_5927_);
lean_dec(v_fst_6097_);
if (lean_obj_tag(v___x_6107_) == 0)
{
lean_object* v_a_6108_; lean_object* v___x_6110_; uint8_t v_isShared_6111_; uint8_t v_isSharedCheck_6128_; 
v_a_6108_ = lean_ctor_get(v___x_6107_, 0);
v_isSharedCheck_6128_ = !lean_is_exclusive(v___x_6107_);
if (v_isSharedCheck_6128_ == 0)
{
v___x_6110_ = v___x_6107_;
v_isShared_6111_ = v_isSharedCheck_6128_;
goto v_resetjp_6109_;
}
else
{
lean_inc(v_a_6108_);
lean_dec(v___x_6107_);
v___x_6110_ = lean_box(0);
v_isShared_6111_ = v_isSharedCheck_6128_;
goto v_resetjp_6109_;
}
v_resetjp_6109_:
{
lean_object* v___x_6112_; lean_object* v___x_6114_; 
v___x_6112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6112_, 0, v_a_6108_);
if (v_isShared_6105_ == 0)
{
lean_ctor_set(v___x_6104_, 1, v___x_5974_);
lean_ctor_set(v___x_6104_, 0, v_fst_5947_);
v___x_6114_ = v___x_6104_;
goto v_reusejp_6113_;
}
else
{
lean_object* v_reuseFailAlloc_6127_; 
v_reuseFailAlloc_6127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6127_, 0, v_fst_5947_);
lean_ctor_set(v_reuseFailAlloc_6127_, 1, v___x_5974_);
v___x_6114_ = v_reuseFailAlloc_6127_;
goto v_reusejp_6113_;
}
v_reusejp_6113_:
{
lean_object* v___x_6116_; 
if (v_isShared_6100_ == 0)
{
lean_ctor_set(v___x_6099_, 1, v___x_6114_);
lean_ctor_set(v___x_6099_, 0, v_fst_5943_);
v___x_6116_ = v___x_6099_;
goto v_reusejp_6115_;
}
else
{
lean_object* v_reuseFailAlloc_6126_; 
v_reuseFailAlloc_6126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6126_, 0, v_fst_5943_);
lean_ctor_set(v_reuseFailAlloc_6126_, 1, v___x_6114_);
v___x_6116_ = v_reuseFailAlloc_6126_;
goto v_reusejp_6115_;
}
v_reusejp_6115_:
{
lean_object* v___x_6118_; 
if (v_isShared_6096_ == 0)
{
lean_ctor_set(v___x_6095_, 1, v___x_6116_);
lean_ctor_set(v___x_6095_, 0, v_fst_5939_);
v___x_6118_ = v___x_6095_;
goto v_reusejp_6117_;
}
else
{
lean_object* v_reuseFailAlloc_6125_; 
v_reuseFailAlloc_6125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6125_, 0, v_fst_5939_);
lean_ctor_set(v_reuseFailAlloc_6125_, 1, v___x_6116_);
v___x_6118_ = v_reuseFailAlloc_6125_;
goto v_reusejp_6117_;
}
v_reusejp_6117_:
{
lean_object* v___x_6120_; 
if (v_isShared_5950_ == 0)
{
lean_ctor_set(v___x_5949_, 1, v___x_6118_);
lean_ctor_set(v___x_5949_, 0, v___x_6112_);
v___x_6120_ = v___x_5949_;
goto v_reusejp_6119_;
}
else
{
lean_object* v_reuseFailAlloc_6124_; 
v_reuseFailAlloc_6124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6124_, 0, v___x_6112_);
lean_ctor_set(v_reuseFailAlloc_6124_, 1, v___x_6118_);
v___x_6120_ = v_reuseFailAlloc_6124_;
goto v_reusejp_6119_;
}
v_reusejp_6119_:
{
lean_object* v___x_6122_; 
if (v_isShared_6111_ == 0)
{
lean_ctor_set(v___x_6110_, 0, v___x_6120_);
v___x_6122_ = v___x_6110_;
goto v_reusejp_6121_;
}
else
{
lean_object* v_reuseFailAlloc_6123_; 
v_reuseFailAlloc_6123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6123_, 0, v___x_6120_);
v___x_6122_ = v_reuseFailAlloc_6123_;
goto v_reusejp_6121_;
}
v_reusejp_6121_:
{
return v___x_6122_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6129_; lean_object* v___x_6131_; uint8_t v_isShared_6132_; uint8_t v_isSharedCheck_6136_; 
lean_del_object(v___x_6104_);
lean_del_object(v___x_6099_);
lean_del_object(v___x_6095_);
lean_dec_ref_known(v_fst_5947_, 1);
lean_dec_ref(v___x_5974_);
lean_del_object(v___x_5949_);
lean_dec(v_fst_5943_);
lean_dec(v_fst_5939_);
v_a_6129_ = lean_ctor_get(v___x_6107_, 0);
v_isSharedCheck_6136_ = !lean_is_exclusive(v___x_6107_);
if (v_isSharedCheck_6136_ == 0)
{
v___x_6131_ = v___x_6107_;
v_isShared_6132_ = v_isSharedCheck_6136_;
goto v_resetjp_6130_;
}
else
{
lean_inc(v_a_6129_);
lean_dec(v___x_6107_);
v___x_6131_ = lean_box(0);
v_isShared_6132_ = v_isSharedCheck_6136_;
goto v_resetjp_6130_;
}
v_resetjp_6130_:
{
lean_object* v___x_6134_; 
if (v_isShared_6132_ == 0)
{
v___x_6134_ = v___x_6131_;
goto v_reusejp_6133_;
}
else
{
lean_object* v_reuseFailAlloc_6135_; 
v_reuseFailAlloc_6135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6135_, 0, v_a_6129_);
v___x_6134_ = v_reuseFailAlloc_6135_;
goto v_reusejp_6133_;
}
v_reusejp_6133_:
{
return v___x_6134_;
}
}
}
}
else
{
lean_object* v_a_6137_; lean_object* v___x_6139_; uint8_t v_isShared_6140_; uint8_t v_isSharedCheck_6144_; 
lean_del_object(v___x_6104_);
lean_dec(v_snd_6102_);
lean_dec(v_fst_6101_);
lean_del_object(v___x_6099_);
lean_dec(v_fst_6097_);
lean_del_object(v___x_6095_);
lean_dec_ref_known(v_fst_5947_, 1);
lean_dec_ref(v___x_5974_);
lean_del_object(v___x_5949_);
lean_dec(v_fst_5943_);
lean_dec(v_fst_5939_);
lean_dec(v___x_5914_);
lean_dec_ref(v_snd_5913_);
v_a_6137_ = lean_ctor_get(v___x_6106_, 0);
v_isSharedCheck_6144_ = !lean_is_exclusive(v___x_6106_);
if (v_isSharedCheck_6144_ == 0)
{
v___x_6139_ = v___x_6106_;
v_isShared_6140_ = v_isSharedCheck_6144_;
goto v_resetjp_6138_;
}
else
{
lean_inc(v_a_6137_);
lean_dec(v___x_6106_);
v___x_6139_ = lean_box(0);
v_isShared_6140_ = v_isSharedCheck_6144_;
goto v_resetjp_6138_;
}
v_resetjp_6138_:
{
lean_object* v___x_6142_; 
if (v_isShared_6140_ == 0)
{
v___x_6142_ = v___x_6139_;
goto v_reusejp_6141_;
}
else
{
lean_object* v_reuseFailAlloc_6143_; 
v_reuseFailAlloc_6143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6143_, 0, v_a_6137_);
v___x_6142_ = v_reuseFailAlloc_6143_;
goto v_reusejp_6141_;
}
v_reusejp_6141_:
{
return v___x_6142_;
}
}
}
}
}
}
}
else
{
if (v_stopAtFirstFailure_5915_ == 0)
{
lean_object* v_gs_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6154_; 
lean_del_object(v___x_5978_);
v_gs_6150_ = lean_ctor_get(v_a_5976_, 0);
lean_inc(v_gs_6150_);
lean_dec_ref_known(v_a_5976_, 1);
v___x_6151_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__0(v___x_5916_, v_gs_6150_);
v___x_6152_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_fst_5943_, v___x_6151_);
if (v_isShared_5950_ == 0)
{
lean_ctor_set(v___x_5949_, 1, v___x_5974_);
v___x_6154_ = v___x_5949_;
goto v_reusejp_6153_;
}
else
{
lean_object* v_reuseFailAlloc_6165_; 
v_reuseFailAlloc_6165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6165_, 0, v_fst_5947_);
lean_ctor_set(v_reuseFailAlloc_6165_, 1, v___x_5974_);
v___x_6154_ = v_reuseFailAlloc_6165_;
goto v_reusejp_6153_;
}
v_reusejp_6153_:
{
lean_object* v___x_6156_; 
if (v_isShared_5946_ == 0)
{
lean_ctor_set(v___x_5945_, 1, v___x_6154_);
lean_ctor_set(v___x_5945_, 0, v___x_6152_);
v___x_6156_ = v___x_5945_;
goto v_reusejp_6155_;
}
else
{
lean_object* v_reuseFailAlloc_6164_; 
v_reuseFailAlloc_6164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6164_, 0, v___x_6152_);
lean_ctor_set(v_reuseFailAlloc_6164_, 1, v___x_6154_);
v___x_6156_ = v_reuseFailAlloc_6164_;
goto v_reusejp_6155_;
}
v_reusejp_6155_:
{
lean_object* v___x_6158_; 
if (v_isShared_5942_ == 0)
{
lean_ctor_set(v___x_5941_, 1, v___x_6156_);
v___x_6158_ = v___x_5941_;
goto v_reusejp_6157_;
}
else
{
lean_object* v_reuseFailAlloc_6163_; 
v_reuseFailAlloc_6163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6163_, 0, v_fst_5939_);
lean_ctor_set(v_reuseFailAlloc_6163_, 1, v___x_6156_);
v___x_6158_ = v_reuseFailAlloc_6163_;
goto v_reusejp_6157_;
}
v_reusejp_6157_:
{
lean_object* v___x_6160_; 
if (v_isShared_5933_ == 0)
{
lean_ctor_set(v___x_5932_, 1, v___x_6158_);
lean_ctor_set(v___x_5932_, 0, v___x_5954_);
v___x_6160_ = v___x_5932_;
goto v_reusejp_6159_;
}
else
{
lean_object* v_reuseFailAlloc_6162_; 
v_reuseFailAlloc_6162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6162_, 0, v___x_5954_);
lean_ctor_set(v_reuseFailAlloc_6162_, 1, v___x_6158_);
v___x_6160_ = v_reuseFailAlloc_6162_;
goto v_reusejp_6159_;
}
v_reusejp_6159_:
{
v_as_x27_5917_ = v_tail_5938_;
v_b_5918_ = v___x_6160_;
goto _start;
}
}
}
}
}
else
{
lean_object* v_gs_6166_; lean_object* v___x_6168_; uint8_t v_isShared_6169_; uint8_t v_isSharedCheck_6190_; 
lean_dec(v___x_5914_);
lean_dec_ref(v_snd_5913_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
v_gs_6166_ = lean_ctor_get(v_a_5976_, 0);
v_isSharedCheck_6190_ = !lean_is_exclusive(v_a_5976_);
if (v_isSharedCheck_6190_ == 0)
{
v___x_6168_ = v_a_5976_;
v_isShared_6169_ = v_isSharedCheck_6190_;
goto v_resetjp_6167_;
}
else
{
lean_inc(v_gs_6166_);
lean_dec(v_a_5976_);
v___x_6168_ = lean_box(0);
v_isShared_6169_ = v_isSharedCheck_6190_;
goto v_resetjp_6167_;
}
v_resetjp_6167_:
{
lean_object* v___x_6170_; lean_object* v___x_6172_; 
v___x_6170_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__0(v___x_5916_, v_gs_6166_);
if (v_isShared_6169_ == 0)
{
lean_ctor_set(v___x_6168_, 0, v___x_6170_);
v___x_6172_ = v___x_6168_;
goto v_reusejp_6171_;
}
else
{
lean_object* v_reuseFailAlloc_6189_; 
v_reuseFailAlloc_6189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6189_, 0, v___x_6170_);
v___x_6172_ = v_reuseFailAlloc_6189_;
goto v_reusejp_6171_;
}
v_reusejp_6171_:
{
lean_object* v___x_6173_; lean_object* v___x_6175_; 
v___x_6173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6173_, 0, v___x_6172_);
if (v_isShared_5950_ == 0)
{
lean_ctor_set(v___x_5949_, 1, v___x_5974_);
v___x_6175_ = v___x_5949_;
goto v_reusejp_6174_;
}
else
{
lean_object* v_reuseFailAlloc_6188_; 
v_reuseFailAlloc_6188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6188_, 0, v_fst_5947_);
lean_ctor_set(v_reuseFailAlloc_6188_, 1, v___x_5974_);
v___x_6175_ = v_reuseFailAlloc_6188_;
goto v_reusejp_6174_;
}
v_reusejp_6174_:
{
lean_object* v___x_6177_; 
if (v_isShared_5946_ == 0)
{
lean_ctor_set(v___x_5945_, 1, v___x_6175_);
v___x_6177_ = v___x_5945_;
goto v_reusejp_6176_;
}
else
{
lean_object* v_reuseFailAlloc_6187_; 
v_reuseFailAlloc_6187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6187_, 0, v_fst_5943_);
lean_ctor_set(v_reuseFailAlloc_6187_, 1, v___x_6175_);
v___x_6177_ = v_reuseFailAlloc_6187_;
goto v_reusejp_6176_;
}
v_reusejp_6176_:
{
lean_object* v___x_6179_; 
if (v_isShared_5942_ == 0)
{
lean_ctor_set(v___x_5941_, 1, v___x_6177_);
v___x_6179_ = v___x_5941_;
goto v_reusejp_6178_;
}
else
{
lean_object* v_reuseFailAlloc_6186_; 
v_reuseFailAlloc_6186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6186_, 0, v_fst_5939_);
lean_ctor_set(v_reuseFailAlloc_6186_, 1, v___x_6177_);
v___x_6179_ = v_reuseFailAlloc_6186_;
goto v_reusejp_6178_;
}
v_reusejp_6178_:
{
lean_object* v___x_6181_; 
if (v_isShared_5933_ == 0)
{
lean_ctor_set(v___x_5932_, 1, v___x_6179_);
lean_ctor_set(v___x_5932_, 0, v___x_6173_);
v___x_6181_ = v___x_5932_;
goto v_reusejp_6180_;
}
else
{
lean_object* v_reuseFailAlloc_6185_; 
v_reuseFailAlloc_6185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6185_, 0, v___x_6173_);
lean_ctor_set(v_reuseFailAlloc_6185_, 1, v___x_6179_);
v___x_6181_ = v_reuseFailAlloc_6185_;
goto v_reusejp_6180_;
}
v_reusejp_6180_:
{
lean_object* v___x_6183_; 
if (v_isShared_5979_ == 0)
{
lean_ctor_set(v___x_5978_, 0, v___x_6181_);
v___x_6183_ = v___x_5978_;
goto v_reusejp_6182_;
}
else
{
lean_object* v_reuseFailAlloc_6184_; 
v_reuseFailAlloc_6184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6184_, 0, v___x_6181_);
v___x_6183_ = v_reuseFailAlloc_6184_;
goto v_reusejp_6182_;
}
v_reusejp_6182_:
{
return v___x_6183_;
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
else
{
lean_object* v_a_6192_; lean_object* v___x_6194_; uint8_t v_isShared_6195_; uint8_t v_isSharedCheck_6199_; 
lean_dec_ref(v___x_5974_);
lean_dec(v_start_5951_);
lean_del_object(v___x_5949_);
lean_dec(v_fst_5947_);
lean_del_object(v___x_5945_);
lean_dec(v_fst_5943_);
lean_del_object(v___x_5941_);
lean_dec(v_fst_5939_);
lean_del_object(v___x_5932_);
lean_dec(v___x_5914_);
lean_dec_ref(v_snd_5913_);
lean_dec_ref(v_goal_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_kp_5909_);
v_a_6192_ = lean_ctor_get(v___x_5975_, 0);
v_isSharedCheck_6199_ = !lean_is_exclusive(v___x_5975_);
if (v_isSharedCheck_6199_ == 0)
{
v___x_6194_ = v___x_5975_;
v_isShared_6195_ = v_isSharedCheck_6199_;
goto v_resetjp_6193_;
}
else
{
lean_inc(v_a_6192_);
lean_dec(v___x_5975_);
v___x_6194_ = lean_box(0);
v_isShared_6195_ = v_isSharedCheck_6199_;
goto v_resetjp_6193_;
}
v_resetjp_6193_:
{
lean_object* v___x_6197_; 
if (v_isShared_6195_ == 0)
{
v___x_6197_ = v___x_6194_;
goto v_reusejp_6196_;
}
else
{
lean_object* v_reuseFailAlloc_6198_; 
v_reuseFailAlloc_6198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6198_, 0, v_a_6192_);
v___x_6197_ = v_reuseFailAlloc_6198_;
goto v_reusejp_6196_;
}
v_reusejp_6196_:
{
return v___x_6197_;
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
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___boxed(lean_object** _args){
lean_object* v_kp_6213_ = _args[0];
lean_object* v_a_6214_ = _args[1];
lean_object* v_goal_6215_ = _args[2];
lean_object* v___x_6216_ = _args[3];
lean_object* v_snd_6217_ = _args[4];
lean_object* v___x_6218_ = _args[5];
lean_object* v_stopAtFirstFailure_6219_ = _args[6];
lean_object* v___x_6220_ = _args[7];
lean_object* v_as_x27_6221_ = _args[8];
lean_object* v_b_6222_ = _args[9];
lean_object* v___y_6223_ = _args[10];
lean_object* v___y_6224_ = _args[11];
lean_object* v___y_6225_ = _args[12];
lean_object* v___y_6226_ = _args[13];
lean_object* v___y_6227_ = _args[14];
lean_object* v___y_6228_ = _args[15];
lean_object* v___y_6229_ = _args[16];
lean_object* v___y_6230_ = _args[17];
lean_object* v___y_6231_ = _args[18];
lean_object* v___y_6232_ = _args[19];
_start:
{
uint8_t v_stopAtFirstFailure_boxed_6233_; lean_object* v_res_6234_; 
v_stopAtFirstFailure_boxed_6233_ = lean_unbox(v_stopAtFirstFailure_6219_);
v_res_6234_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg(v_kp_6213_, v_a_6214_, v_goal_6215_, v___x_6216_, v_snd_6217_, v___x_6218_, v_stopAtFirstFailure_boxed_6233_, v___x_6220_, v_as_x27_6221_, v_b_6222_, v___y_6223_, v___y_6224_, v___y_6225_, v___y_6226_, v___y_6227_, v___y_6228_, v___y_6229_, v___y_6230_, v___y_6231_);
lean_dec(v___y_6231_);
lean_dec_ref(v___y_6230_);
lean_dec(v___y_6229_);
lean_dec_ref(v___y_6228_);
lean_dec(v___y_6227_);
lean_dec_ref(v___y_6226_);
lean_dec(v___y_6225_);
lean_dec_ref(v___y_6224_);
lean_dec(v___y_6223_);
lean_dec(v_as_x27_6221_);
lean_dec_ref(v___x_6220_);
lean_dec(v___x_6216_);
return v_res_6234_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lean_Meta_Grind_Action_splitCore_spec__2(lean_object* v___x_6235_, lean_object* v_c_6236_, lean_object* v___x_6237_, lean_object* v___x_6238_, lean_object* v___x_6239_, uint64_t v_a_6240_, lean_object* v_a_6241_, lean_object* v_a_6242_){
_start:
{
if (lean_obj_tag(v_a_6241_) == 0)
{
lean_object* v___x_6243_; 
lean_dec_ref(v___x_6239_);
lean_dec(v___x_6238_);
lean_dec_ref(v___x_6237_);
lean_dec_ref(v___x_6235_);
v___x_6243_ = lean_array_to_list(v_a_6242_);
return v___x_6243_;
}
else
{
lean_object* v_split_6244_; lean_object* v_head_6245_; lean_object* v_tail_6246_; lean_object* v___x_6248_; uint8_t v_isShared_6249_; uint8_t v_isSharedCheck_6298_; 
v_split_6244_ = lean_ctor_get(v___x_6235_, 16);
lean_inc_ref(v_split_6244_);
v_head_6245_ = lean_ctor_get(v_a_6241_, 0);
v_tail_6246_ = lean_ctor_get(v_a_6241_, 1);
v_isSharedCheck_6298_ = !lean_is_exclusive(v_a_6241_);
if (v_isSharedCheck_6298_ == 0)
{
v___x_6248_ = v_a_6241_;
v_isShared_6249_ = v_isSharedCheck_6298_;
goto v_resetjp_6247_;
}
else
{
lean_inc(v_tail_6246_);
lean_inc(v_head_6245_);
lean_dec(v_a_6241_);
v___x_6248_ = lean_box(0);
v_isShared_6249_ = v_isSharedCheck_6298_;
goto v_resetjp_6247_;
}
v_resetjp_6247_:
{
lean_object* v_nextDeclIdx_6250_; lean_object* v_enodeMap_6251_; lean_object* v_exprs_6252_; lean_object* v_parents_6253_; lean_object* v_condParents_6254_; lean_object* v_congrTable_6255_; lean_object* v_appMap_6256_; lean_object* v_indicesFound_6257_; lean_object* v_toProcess_6258_; lean_object* v_internalizing_6259_; uint8_t v_inconsistent_6260_; lean_object* v_nextIdx_6261_; lean_object* v_newRawFacts_6262_; lean_object* v_facts_6263_; lean_object* v_extThms_6264_; lean_object* v_ematch_6265_; lean_object* v_inj_6266_; lean_object* v_clean_6267_; lean_object* v_sstates_6268_; uint64_t v_introBase_6269_; lean_object* v_numIntros_6270_; lean_object* v_candidates_6271_; lean_object* v_added_6272_; lean_object* v_resolved_6273_; lean_object* v_trace_6274_; lean_object* v_lookaheads_6275_; lean_object* v_argPosMap_6276_; lean_object* v_argsAt_6277_; lean_object* v___x_6279_; uint8_t v_isShared_6280_; uint8_t v_isSharedCheck_6297_; 
v_nextDeclIdx_6250_ = lean_ctor_get(v___x_6235_, 0);
v_enodeMap_6251_ = lean_ctor_get(v___x_6235_, 1);
v_exprs_6252_ = lean_ctor_get(v___x_6235_, 2);
v_parents_6253_ = lean_ctor_get(v___x_6235_, 3);
v_condParents_6254_ = lean_ctor_get(v___x_6235_, 4);
v_congrTable_6255_ = lean_ctor_get(v___x_6235_, 5);
v_appMap_6256_ = lean_ctor_get(v___x_6235_, 6);
v_indicesFound_6257_ = lean_ctor_get(v___x_6235_, 7);
v_toProcess_6258_ = lean_ctor_get(v___x_6235_, 8);
v_internalizing_6259_ = lean_ctor_get(v___x_6235_, 9);
v_inconsistent_6260_ = lean_ctor_get_uint8(v___x_6235_, sizeof(void*)*21 + 8);
v_nextIdx_6261_ = lean_ctor_get(v___x_6235_, 10);
v_newRawFacts_6262_ = lean_ctor_get(v___x_6235_, 11);
v_facts_6263_ = lean_ctor_get(v___x_6235_, 12);
v_extThms_6264_ = lean_ctor_get(v___x_6235_, 13);
v_ematch_6265_ = lean_ctor_get(v___x_6235_, 14);
v_inj_6266_ = lean_ctor_get(v___x_6235_, 15);
v_clean_6267_ = lean_ctor_get(v___x_6235_, 17);
v_sstates_6268_ = lean_ctor_get(v___x_6235_, 18);
v_introBase_6269_ = lean_ctor_get_uint64(v___x_6235_, sizeof(void*)*21);
v_numIntros_6270_ = lean_ctor_get(v___x_6235_, 20);
v_candidates_6271_ = lean_ctor_get(v_split_6244_, 0);
v_added_6272_ = lean_ctor_get(v_split_6244_, 1);
v_resolved_6273_ = lean_ctor_get(v_split_6244_, 2);
v_trace_6274_ = lean_ctor_get(v_split_6244_, 3);
v_lookaheads_6275_ = lean_ctor_get(v_split_6244_, 4);
v_argPosMap_6276_ = lean_ctor_get(v_split_6244_, 5);
v_argsAt_6277_ = lean_ctor_get(v_split_6244_, 6);
v_isSharedCheck_6297_ = !lean_is_exclusive(v_split_6244_);
if (v_isSharedCheck_6297_ == 0)
{
v___x_6279_ = v_split_6244_;
v_isShared_6280_ = v_isSharedCheck_6297_;
goto v_resetjp_6278_;
}
else
{
lean_inc(v_argsAt_6277_);
lean_inc(v_argPosMap_6276_);
lean_inc(v_lookaheads_6275_);
lean_inc(v_trace_6274_);
lean_inc(v_resolved_6273_);
lean_inc(v_added_6272_);
lean_inc(v_candidates_6271_);
lean_dec(v_split_6244_);
v___x_6279_ = lean_box(0);
v_isShared_6280_ = v_isSharedCheck_6297_;
goto v_resetjp_6278_;
}
v_resetjp_6278_:
{
lean_object* v___x_6281_; lean_object* v___x_6282_; lean_object* v___x_6283_; lean_object* v___x_6285_; 
v___x_6281_ = lean_array_get_size(v_a_6242_);
v___x_6282_ = l_Lean_Meta_Grind_SplitInfo_source(v_c_6236_);
lean_inc(v___x_6238_);
lean_inc_ref(v___x_6237_);
v___x_6283_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6283_, 0, v___x_6237_);
lean_ctor_set(v___x_6283_, 1, v___x_6281_);
lean_ctor_set(v___x_6283_, 2, v___x_6238_);
lean_ctor_set(v___x_6283_, 3, v___x_6282_);
if (v_isShared_6249_ == 0)
{
lean_ctor_set(v___x_6248_, 1, v_trace_6274_);
lean_ctor_set(v___x_6248_, 0, v___x_6283_);
v___x_6285_ = v___x_6248_;
goto v_reusejp_6284_;
}
else
{
lean_object* v_reuseFailAlloc_6296_; 
v_reuseFailAlloc_6296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6296_, 0, v___x_6283_);
lean_ctor_set(v_reuseFailAlloc_6296_, 1, v_trace_6274_);
v___x_6285_ = v_reuseFailAlloc_6296_;
goto v_reusejp_6284_;
}
v_reusejp_6284_:
{
lean_object* v___x_6287_; 
if (v_isShared_6280_ == 0)
{
lean_ctor_set(v___x_6279_, 3, v___x_6285_);
v___x_6287_ = v___x_6279_;
goto v_reusejp_6286_;
}
else
{
lean_object* v_reuseFailAlloc_6295_; 
v_reuseFailAlloc_6295_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_6295_, 0, v_candidates_6271_);
lean_ctor_set(v_reuseFailAlloc_6295_, 1, v_added_6272_);
lean_ctor_set(v_reuseFailAlloc_6295_, 2, v_resolved_6273_);
lean_ctor_set(v_reuseFailAlloc_6295_, 3, v___x_6285_);
lean_ctor_set(v_reuseFailAlloc_6295_, 4, v_lookaheads_6275_);
lean_ctor_set(v_reuseFailAlloc_6295_, 5, v_argPosMap_6276_);
lean_ctor_set(v_reuseFailAlloc_6295_, 6, v_argsAt_6277_);
v___x_6287_ = v_reuseFailAlloc_6295_;
goto v_reusejp_6286_;
}
v_reusejp_6286_:
{
lean_object* v___x_6288_; lean_object* v___x_6289_; uint64_t v___x_6290_; uint64_t v___x_6291_; lean_object* v___x_6292_; lean_object* v___x_6293_; 
lean_inc(v_numIntros_6270_);
lean_inc_ref(v___x_6239_);
lean_inc_ref(v_sstates_6268_);
lean_inc_ref(v_clean_6267_);
lean_inc_ref(v_inj_6266_);
lean_inc_ref(v_ematch_6265_);
lean_inc_ref(v_extThms_6264_);
lean_inc_ref(v_facts_6263_);
lean_inc_ref(v_newRawFacts_6262_);
lean_inc(v_nextIdx_6261_);
lean_inc_ref(v_internalizing_6259_);
lean_inc_ref(v_toProcess_6258_);
lean_inc_ref(v_indicesFound_6257_);
lean_inc_ref(v_appMap_6256_);
lean_inc_ref(v_congrTable_6255_);
lean_inc_ref(v_condParents_6254_);
lean_inc_ref(v_parents_6253_);
lean_inc_ref(v_exprs_6252_);
lean_inc_ref(v_enodeMap_6251_);
lean_inc(v_nextDeclIdx_6250_);
v___x_6288_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v___x_6288_, 0, v_nextDeclIdx_6250_);
lean_ctor_set(v___x_6288_, 1, v_enodeMap_6251_);
lean_ctor_set(v___x_6288_, 2, v_exprs_6252_);
lean_ctor_set(v___x_6288_, 3, v_parents_6253_);
lean_ctor_set(v___x_6288_, 4, v_condParents_6254_);
lean_ctor_set(v___x_6288_, 5, v_congrTable_6255_);
lean_ctor_set(v___x_6288_, 6, v_appMap_6256_);
lean_ctor_set(v___x_6288_, 7, v_indicesFound_6257_);
lean_ctor_set(v___x_6288_, 8, v_toProcess_6258_);
lean_ctor_set(v___x_6288_, 9, v_internalizing_6259_);
lean_ctor_set(v___x_6288_, 10, v_nextIdx_6261_);
lean_ctor_set(v___x_6288_, 11, v_newRawFacts_6262_);
lean_ctor_set(v___x_6288_, 12, v_facts_6263_);
lean_ctor_set(v___x_6288_, 13, v_extThms_6264_);
lean_ctor_set(v___x_6288_, 14, v_ematch_6265_);
lean_ctor_set(v___x_6288_, 15, v_inj_6266_);
lean_ctor_set(v___x_6288_, 16, v___x_6287_);
lean_ctor_set(v___x_6288_, 17, v_clean_6267_);
lean_ctor_set(v___x_6288_, 18, v_sstates_6268_);
lean_ctor_set(v___x_6288_, 19, v___x_6239_);
lean_ctor_set(v___x_6288_, 20, v_numIntros_6270_);
lean_ctor_set_uint8(v___x_6288_, sizeof(void*)*21 + 8, v_inconsistent_6260_);
lean_ctor_set_uint64(v___x_6288_, sizeof(void*)*21, v_introBase_6269_);
v___x_6289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6289_, 0, v___x_6288_);
lean_ctor_set(v___x_6289_, 1, v_head_6245_);
v___x_6290_ = lean_uint64_of_nat(v___x_6281_);
v___x_6291_ = lean_uint64_mix_hash(v_a_6240_, v___x_6290_);
v___x_6292_ = l_Lean_Meta_Grind_Goal_setIntroBase(v___x_6289_, v___x_6291_);
v___x_6293_ = lean_array_push(v_a_6242_, v___x_6292_);
v_a_6241_ = v_tail_6246_;
v_a_6242_ = v___x_6293_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lean_Meta_Grind_Action_splitCore_spec__2___boxed(lean_object* v___x_6299_, lean_object* v_c_6300_, lean_object* v___x_6301_, lean_object* v___x_6302_, lean_object* v___x_6303_, lean_object* v_a_6304_, lean_object* v_a_6305_, lean_object* v_a_6306_){
_start:
{
uint64_t v_a_120809__boxed_6307_; lean_object* v_res_6308_; 
v_a_120809__boxed_6307_ = lean_unbox_uint64(v_a_6304_);
lean_dec_ref(v_a_6304_);
v_res_6308_ = l_List_mapIdx_go___at___00Lean_Meta_Grind_Action_splitCore_spec__2(v___x_6299_, v_c_6300_, v___x_6301_, v___x_6302_, v___x_6303_, v_a_120809__boxed_6307_, v_a_6305_, v_a_6306_);
lean_dec_ref(v_c_6300_);
return v_res_6308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_x_6309_, lean_object* v_x_6310_, lean_object* v_x_6311_, lean_object* v_x_6312_){
_start:
{
lean_object* v_ks_6313_; lean_object* v_vs_6314_; lean_object* v___x_6316_; uint8_t v_isShared_6317_; uint8_t v_isSharedCheck_6338_; 
v_ks_6313_ = lean_ctor_get(v_x_6309_, 0);
v_vs_6314_ = lean_ctor_get(v_x_6309_, 1);
v_isSharedCheck_6338_ = !lean_is_exclusive(v_x_6309_);
if (v_isSharedCheck_6338_ == 0)
{
v___x_6316_ = v_x_6309_;
v_isShared_6317_ = v_isSharedCheck_6338_;
goto v_resetjp_6315_;
}
else
{
lean_inc(v_vs_6314_);
lean_inc(v_ks_6313_);
lean_dec(v_x_6309_);
v___x_6316_ = lean_box(0);
v_isShared_6317_ = v_isSharedCheck_6338_;
goto v_resetjp_6315_;
}
v_resetjp_6315_:
{
lean_object* v___x_6318_; uint8_t v___x_6319_; 
v___x_6318_ = lean_array_get_size(v_ks_6313_);
v___x_6319_ = lean_nat_dec_lt(v_x_6310_, v___x_6318_);
if (v___x_6319_ == 0)
{
lean_object* v___x_6320_; lean_object* v___x_6321_; lean_object* v___x_6323_; 
lean_dec(v_x_6310_);
v___x_6320_ = lean_array_push(v_ks_6313_, v_x_6311_);
v___x_6321_ = lean_array_push(v_vs_6314_, v_x_6312_);
if (v_isShared_6317_ == 0)
{
lean_ctor_set(v___x_6316_, 1, v___x_6321_);
lean_ctor_set(v___x_6316_, 0, v___x_6320_);
v___x_6323_ = v___x_6316_;
goto v_reusejp_6322_;
}
else
{
lean_object* v_reuseFailAlloc_6324_; 
v_reuseFailAlloc_6324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6324_, 0, v___x_6320_);
lean_ctor_set(v_reuseFailAlloc_6324_, 1, v___x_6321_);
v___x_6323_ = v_reuseFailAlloc_6324_;
goto v_reusejp_6322_;
}
v_reusejp_6322_:
{
return v___x_6323_;
}
}
else
{
lean_object* v_k_x27_6325_; uint8_t v___x_6326_; 
v_k_x27_6325_ = lean_array_fget_borrowed(v_ks_6313_, v_x_6310_);
v___x_6326_ = l_Lean_instBEqMVarId_beq(v_x_6311_, v_k_x27_6325_);
if (v___x_6326_ == 0)
{
lean_object* v___x_6328_; 
if (v_isShared_6317_ == 0)
{
v___x_6328_ = v___x_6316_;
goto v_reusejp_6327_;
}
else
{
lean_object* v_reuseFailAlloc_6332_; 
v_reuseFailAlloc_6332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6332_, 0, v_ks_6313_);
lean_ctor_set(v_reuseFailAlloc_6332_, 1, v_vs_6314_);
v___x_6328_ = v_reuseFailAlloc_6332_;
goto v_reusejp_6327_;
}
v_reusejp_6327_:
{
lean_object* v___x_6329_; lean_object* v___x_6330_; 
v___x_6329_ = lean_unsigned_to_nat(1u);
v___x_6330_ = lean_nat_add(v_x_6310_, v___x_6329_);
lean_dec(v_x_6310_);
v_x_6309_ = v___x_6328_;
v_x_6310_ = v___x_6330_;
goto _start;
}
}
else
{
lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6336_; 
v___x_6333_ = lean_array_fset(v_ks_6313_, v_x_6310_, v_x_6311_);
v___x_6334_ = lean_array_fset(v_vs_6314_, v_x_6310_, v_x_6312_);
lean_dec(v_x_6310_);
if (v_isShared_6317_ == 0)
{
lean_ctor_set(v___x_6316_, 1, v___x_6334_);
lean_ctor_set(v___x_6316_, 0, v___x_6333_);
v___x_6336_ = v___x_6316_;
goto v_reusejp_6335_;
}
else
{
lean_object* v_reuseFailAlloc_6337_; 
v_reuseFailAlloc_6337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6337_, 0, v___x_6333_);
lean_ctor_set(v_reuseFailAlloc_6337_, 1, v___x_6334_);
v___x_6336_ = v_reuseFailAlloc_6337_;
goto v_reusejp_6335_;
}
v_reusejp_6335_:
{
return v___x_6336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6___redArg(lean_object* v_n_6339_, lean_object* v_k_6340_, lean_object* v_v_6341_){
_start:
{
lean_object* v___x_6342_; lean_object* v___x_6343_; 
v___x_6342_ = lean_unsigned_to_nat(0u);
v___x_6343_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6_spec__7___redArg(v_n_6339_, v___x_6342_, v_k_6340_, v_v_6341_);
return v___x_6343_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_6344_; 
v___x_6344_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_6344_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg(lean_object* v_x_6345_, size_t v_x_6346_, size_t v_x_6347_, lean_object* v_x_6348_, lean_object* v_x_6349_){
_start:
{
if (lean_obj_tag(v_x_6345_) == 0)
{
lean_object* v_es_6350_; size_t v___x_6351_; size_t v___x_6352_; lean_object* v_j_6353_; lean_object* v___x_6354_; uint8_t v___x_6355_; 
v_es_6350_ = lean_ctor_get(v_x_6345_, 0);
v___x_6351_ = ((size_t)31ULL);
v___x_6352_ = lean_usize_land(v_x_6346_, v___x_6351_);
v_j_6353_ = lean_usize_to_nat(v___x_6352_);
v___x_6354_ = lean_array_get_size(v_es_6350_);
v___x_6355_ = lean_nat_dec_lt(v_j_6353_, v___x_6354_);
if (v___x_6355_ == 0)
{
lean_dec(v_j_6353_);
lean_dec(v_x_6349_);
lean_dec(v_x_6348_);
return v_x_6345_;
}
else
{
lean_object* v___x_6357_; uint8_t v_isShared_6358_; uint8_t v_isSharedCheck_6394_; 
lean_inc_ref(v_es_6350_);
v_isSharedCheck_6394_ = !lean_is_exclusive(v_x_6345_);
if (v_isSharedCheck_6394_ == 0)
{
lean_object* v_unused_6395_; 
v_unused_6395_ = lean_ctor_get(v_x_6345_, 0);
lean_dec(v_unused_6395_);
v___x_6357_ = v_x_6345_;
v_isShared_6358_ = v_isSharedCheck_6394_;
goto v_resetjp_6356_;
}
else
{
lean_dec(v_x_6345_);
v___x_6357_ = lean_box(0);
v_isShared_6358_ = v_isSharedCheck_6394_;
goto v_resetjp_6356_;
}
v_resetjp_6356_:
{
lean_object* v_v_6359_; lean_object* v___x_6360_; lean_object* v_xs_x27_6361_; lean_object* v___y_6363_; 
v_v_6359_ = lean_array_fget(v_es_6350_, v_j_6353_);
v___x_6360_ = lean_box(0);
v_xs_x27_6361_ = lean_array_fset(v_es_6350_, v_j_6353_, v___x_6360_);
switch(lean_obj_tag(v_v_6359_))
{
case 0:
{
lean_object* v_key_6368_; lean_object* v_val_6369_; lean_object* v___x_6371_; uint8_t v_isShared_6372_; uint8_t v_isSharedCheck_6379_; 
v_key_6368_ = lean_ctor_get(v_v_6359_, 0);
v_val_6369_ = lean_ctor_get(v_v_6359_, 1);
v_isSharedCheck_6379_ = !lean_is_exclusive(v_v_6359_);
if (v_isSharedCheck_6379_ == 0)
{
v___x_6371_ = v_v_6359_;
v_isShared_6372_ = v_isSharedCheck_6379_;
goto v_resetjp_6370_;
}
else
{
lean_inc(v_val_6369_);
lean_inc(v_key_6368_);
lean_dec(v_v_6359_);
v___x_6371_ = lean_box(0);
v_isShared_6372_ = v_isSharedCheck_6379_;
goto v_resetjp_6370_;
}
v_resetjp_6370_:
{
uint8_t v___x_6373_; 
v___x_6373_ = l_Lean_instBEqMVarId_beq(v_x_6348_, v_key_6368_);
if (v___x_6373_ == 0)
{
lean_object* v___x_6374_; lean_object* v___x_6375_; 
lean_del_object(v___x_6371_);
v___x_6374_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_6368_, v_val_6369_, v_x_6348_, v_x_6349_);
v___x_6375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6375_, 0, v___x_6374_);
v___y_6363_ = v___x_6375_;
goto v___jp_6362_;
}
else
{
lean_object* v___x_6377_; 
lean_dec(v_val_6369_);
lean_dec(v_key_6368_);
if (v_isShared_6372_ == 0)
{
lean_ctor_set(v___x_6371_, 1, v_x_6349_);
lean_ctor_set(v___x_6371_, 0, v_x_6348_);
v___x_6377_ = v___x_6371_;
goto v_reusejp_6376_;
}
else
{
lean_object* v_reuseFailAlloc_6378_; 
v_reuseFailAlloc_6378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6378_, 0, v_x_6348_);
lean_ctor_set(v_reuseFailAlloc_6378_, 1, v_x_6349_);
v___x_6377_ = v_reuseFailAlloc_6378_;
goto v_reusejp_6376_;
}
v_reusejp_6376_:
{
v___y_6363_ = v___x_6377_;
goto v___jp_6362_;
}
}
}
}
case 1:
{
lean_object* v_node_6380_; lean_object* v___x_6382_; uint8_t v_isShared_6383_; uint8_t v_isSharedCheck_6392_; 
v_node_6380_ = lean_ctor_get(v_v_6359_, 0);
v_isSharedCheck_6392_ = !lean_is_exclusive(v_v_6359_);
if (v_isSharedCheck_6392_ == 0)
{
v___x_6382_ = v_v_6359_;
v_isShared_6383_ = v_isSharedCheck_6392_;
goto v_resetjp_6381_;
}
else
{
lean_inc(v_node_6380_);
lean_dec(v_v_6359_);
v___x_6382_ = lean_box(0);
v_isShared_6383_ = v_isSharedCheck_6392_;
goto v_resetjp_6381_;
}
v_resetjp_6381_:
{
size_t v___x_6384_; size_t v___x_6385_; size_t v___x_6386_; size_t v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6390_; 
v___x_6384_ = ((size_t)5ULL);
v___x_6385_ = lean_usize_shift_right(v_x_6346_, v___x_6384_);
v___x_6386_ = ((size_t)1ULL);
v___x_6387_ = lean_usize_add(v_x_6347_, v___x_6386_);
v___x_6388_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg(v_node_6380_, v___x_6385_, v___x_6387_, v_x_6348_, v_x_6349_);
if (v_isShared_6383_ == 0)
{
lean_ctor_set(v___x_6382_, 0, v___x_6388_);
v___x_6390_ = v___x_6382_;
goto v_reusejp_6389_;
}
else
{
lean_object* v_reuseFailAlloc_6391_; 
v_reuseFailAlloc_6391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6391_, 0, v___x_6388_);
v___x_6390_ = v_reuseFailAlloc_6391_;
goto v_reusejp_6389_;
}
v_reusejp_6389_:
{
v___y_6363_ = v___x_6390_;
goto v___jp_6362_;
}
}
}
default: 
{
lean_object* v___x_6393_; 
v___x_6393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6393_, 0, v_x_6348_);
lean_ctor_set(v___x_6393_, 1, v_x_6349_);
v___y_6363_ = v___x_6393_;
goto v___jp_6362_;
}
}
v___jp_6362_:
{
lean_object* v___x_6364_; lean_object* v___x_6366_; 
v___x_6364_ = lean_array_fset(v_xs_x27_6361_, v_j_6353_, v___y_6363_);
lean_dec(v_j_6353_);
if (v_isShared_6358_ == 0)
{
lean_ctor_set(v___x_6357_, 0, v___x_6364_);
v___x_6366_ = v___x_6357_;
goto v_reusejp_6365_;
}
else
{
lean_object* v_reuseFailAlloc_6367_; 
v_reuseFailAlloc_6367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6367_, 0, v___x_6364_);
v___x_6366_ = v_reuseFailAlloc_6367_;
goto v_reusejp_6365_;
}
v_reusejp_6365_:
{
return v___x_6366_;
}
}
}
}
}
else
{
lean_object* v_ks_6396_; lean_object* v_vs_6397_; lean_object* v___x_6399_; uint8_t v_isShared_6400_; uint8_t v_isSharedCheck_6415_; 
v_ks_6396_ = lean_ctor_get(v_x_6345_, 0);
v_vs_6397_ = lean_ctor_get(v_x_6345_, 1);
v_isSharedCheck_6415_ = !lean_is_exclusive(v_x_6345_);
if (v_isSharedCheck_6415_ == 0)
{
v___x_6399_ = v_x_6345_;
v_isShared_6400_ = v_isSharedCheck_6415_;
goto v_resetjp_6398_;
}
else
{
lean_inc(v_vs_6397_);
lean_inc(v_ks_6396_);
lean_dec(v_x_6345_);
v___x_6399_ = lean_box(0);
v_isShared_6400_ = v_isSharedCheck_6415_;
goto v_resetjp_6398_;
}
v_resetjp_6398_:
{
lean_object* v___x_6402_; 
if (v_isShared_6400_ == 0)
{
v___x_6402_ = v___x_6399_;
goto v_reusejp_6401_;
}
else
{
lean_object* v_reuseFailAlloc_6414_; 
v_reuseFailAlloc_6414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6414_, 0, v_ks_6396_);
lean_ctor_set(v_reuseFailAlloc_6414_, 1, v_vs_6397_);
v___x_6402_ = v_reuseFailAlloc_6414_;
goto v_reusejp_6401_;
}
v_reusejp_6401_:
{
lean_object* v_newNode_6403_; size_t v___x_6404_; uint8_t v___x_6405_; 
v_newNode_6403_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6___redArg(v___x_6402_, v_x_6348_, v_x_6349_);
v___x_6404_ = ((size_t)7ULL);
v___x_6405_ = lean_usize_dec_le(v___x_6404_, v_x_6347_);
if (v___x_6405_ == 0)
{
lean_object* v___x_6406_; lean_object* v___x_6407_; uint8_t v___x_6408_; 
v___x_6406_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_6403_);
v___x_6407_ = lean_unsigned_to_nat(4u);
v___x_6408_ = lean_nat_dec_lt(v___x_6406_, v___x_6407_);
lean_dec(v___x_6406_);
if (v___x_6408_ == 0)
{
lean_object* v_ks_6409_; lean_object* v_vs_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; 
v_ks_6409_ = lean_ctor_get(v_newNode_6403_, 0);
lean_inc_ref(v_ks_6409_);
v_vs_6410_ = lean_ctor_get(v_newNode_6403_, 1);
lean_inc_ref(v_vs_6410_);
lean_dec_ref(v_newNode_6403_);
v___x_6411_ = lean_unsigned_to_nat(0u);
v___x_6412_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg___closed__0);
v___x_6413_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___redArg(v_x_6347_, v_ks_6409_, v_vs_6410_, v___x_6411_, v___x_6412_);
lean_dec_ref(v_vs_6410_);
lean_dec_ref(v_ks_6409_);
return v___x_6413_;
}
else
{
return v_newNode_6403_;
}
}
else
{
return v_newNode_6403_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___redArg(size_t v_depth_6416_, lean_object* v_keys_6417_, lean_object* v_vals_6418_, lean_object* v_i_6419_, lean_object* v_entries_6420_){
_start:
{
lean_object* v___x_6421_; uint8_t v___x_6422_; 
v___x_6421_ = lean_array_get_size(v_keys_6417_);
v___x_6422_ = lean_nat_dec_lt(v_i_6419_, v___x_6421_);
if (v___x_6422_ == 0)
{
lean_dec(v_i_6419_);
return v_entries_6420_;
}
else
{
lean_object* v_k_6423_; lean_object* v_v_6424_; uint64_t v___x_6425_; size_t v_h_6426_; size_t v___x_6427_; lean_object* v___x_6428_; size_t v___x_6429_; size_t v___x_6430_; size_t v___x_6431_; size_t v_h_6432_; lean_object* v___x_6433_; lean_object* v___x_6434_; 
v_k_6423_ = lean_array_fget_borrowed(v_keys_6417_, v_i_6419_);
v_v_6424_ = lean_array_fget_borrowed(v_vals_6418_, v_i_6419_);
v___x_6425_ = l_Lean_instHashableMVarId_hash(v_k_6423_);
v_h_6426_ = lean_uint64_to_usize(v___x_6425_);
v___x_6427_ = ((size_t)5ULL);
v___x_6428_ = lean_unsigned_to_nat(1u);
v___x_6429_ = ((size_t)1ULL);
v___x_6430_ = lean_usize_sub(v_depth_6416_, v___x_6429_);
v___x_6431_ = lean_usize_mul(v___x_6427_, v___x_6430_);
v_h_6432_ = lean_usize_shift_right(v_h_6426_, v___x_6431_);
v___x_6433_ = lean_nat_add(v_i_6419_, v___x_6428_);
lean_dec(v_i_6419_);
lean_inc(v_v_6424_);
lean_inc(v_k_6423_);
v___x_6434_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg(v_entries_6420_, v_h_6432_, v_depth_6416_, v_k_6423_, v_v_6424_);
v_i_6419_ = v___x_6433_;
v_entries_6420_ = v___x_6434_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___redArg___boxed(lean_object* v_depth_6436_, lean_object* v_keys_6437_, lean_object* v_vals_6438_, lean_object* v_i_6439_, lean_object* v_entries_6440_){
_start:
{
size_t v_depth_boxed_6441_; lean_object* v_res_6442_; 
v_depth_boxed_6441_ = lean_unbox_usize(v_depth_6436_);
lean_dec(v_depth_6436_);
v_res_6442_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___redArg(v_depth_boxed_6441_, v_keys_6437_, v_vals_6438_, v_i_6439_, v_entries_6440_);
lean_dec_ref(v_vals_6438_);
lean_dec_ref(v_keys_6437_);
return v_res_6442_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg___boxed(lean_object* v_x_6443_, lean_object* v_x_6444_, lean_object* v_x_6445_, lean_object* v_x_6446_, lean_object* v_x_6447_){
_start:
{
size_t v_x_120957__boxed_6448_; size_t v_x_120958__boxed_6449_; lean_object* v_res_6450_; 
v_x_120957__boxed_6448_ = lean_unbox_usize(v_x_6444_);
lean_dec(v_x_6444_);
v_x_120958__boxed_6449_ = lean_unbox_usize(v_x_6445_);
lean_dec(v_x_6445_);
v_res_6450_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg(v_x_6443_, v_x_120957__boxed_6448_, v_x_120958__boxed_6449_, v_x_6446_, v_x_6447_);
return v_res_6450_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4___redArg(lean_object* v_x_6451_, lean_object* v_x_6452_, lean_object* v_x_6453_){
_start:
{
uint64_t v___x_6454_; size_t v___x_6455_; size_t v___x_6456_; lean_object* v___x_6457_; 
v___x_6454_ = l_Lean_instHashableMVarId_hash(v_x_6452_);
v___x_6455_ = lean_uint64_to_usize(v___x_6454_);
v___x_6456_ = ((size_t)1ULL);
v___x_6457_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg(v_x_6451_, v___x_6455_, v___x_6456_, v_x_6452_, v_x_6453_);
return v___x_6457_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___redArg(lean_object* v_mvarId_6458_, lean_object* v_val_6459_, lean_object* v___y_6460_){
_start:
{
lean_object* v___x_6462_; lean_object* v_mctx_6463_; lean_object* v_cache_6464_; lean_object* v_zetaDeltaFVarIds_6465_; lean_object* v_postponed_6466_; lean_object* v_diag_6467_; lean_object* v___x_6469_; uint8_t v_isShared_6470_; uint8_t v_isSharedCheck_6496_; 
v___x_6462_ = lean_st_ref_take(v___y_6460_);
v_mctx_6463_ = lean_ctor_get(v___x_6462_, 0);
v_cache_6464_ = lean_ctor_get(v___x_6462_, 1);
v_zetaDeltaFVarIds_6465_ = lean_ctor_get(v___x_6462_, 2);
v_postponed_6466_ = lean_ctor_get(v___x_6462_, 3);
v_diag_6467_ = lean_ctor_get(v___x_6462_, 4);
v_isSharedCheck_6496_ = !lean_is_exclusive(v___x_6462_);
if (v_isSharedCheck_6496_ == 0)
{
v___x_6469_ = v___x_6462_;
v_isShared_6470_ = v_isSharedCheck_6496_;
goto v_resetjp_6468_;
}
else
{
lean_inc(v_diag_6467_);
lean_inc(v_postponed_6466_);
lean_inc(v_zetaDeltaFVarIds_6465_);
lean_inc(v_cache_6464_);
lean_inc(v_mctx_6463_);
lean_dec(v___x_6462_);
v___x_6469_ = lean_box(0);
v_isShared_6470_ = v_isSharedCheck_6496_;
goto v_resetjp_6468_;
}
v_resetjp_6468_:
{
lean_object* v_depth_6471_; lean_object* v_levelAssignDepth_6472_; lean_object* v_lmvarCounter_6473_; lean_object* v_mvarCounter_6474_; lean_object* v_lDecls_6475_; lean_object* v_decls_6476_; lean_object* v_userNames_6477_; lean_object* v_lAssignment_6478_; lean_object* v_eAssignment_6479_; lean_object* v_dAssignment_6480_; lean_object* v_instanceTypedMVars_6481_; lean_object* v___x_6483_; uint8_t v_isShared_6484_; uint8_t v_isSharedCheck_6495_; 
v_depth_6471_ = lean_ctor_get(v_mctx_6463_, 0);
v_levelAssignDepth_6472_ = lean_ctor_get(v_mctx_6463_, 1);
v_lmvarCounter_6473_ = lean_ctor_get(v_mctx_6463_, 2);
v_mvarCounter_6474_ = lean_ctor_get(v_mctx_6463_, 3);
v_lDecls_6475_ = lean_ctor_get(v_mctx_6463_, 4);
v_decls_6476_ = lean_ctor_get(v_mctx_6463_, 5);
v_userNames_6477_ = lean_ctor_get(v_mctx_6463_, 6);
v_lAssignment_6478_ = lean_ctor_get(v_mctx_6463_, 7);
v_eAssignment_6479_ = lean_ctor_get(v_mctx_6463_, 8);
v_dAssignment_6480_ = lean_ctor_get(v_mctx_6463_, 9);
v_instanceTypedMVars_6481_ = lean_ctor_get(v_mctx_6463_, 10);
v_isSharedCheck_6495_ = !lean_is_exclusive(v_mctx_6463_);
if (v_isSharedCheck_6495_ == 0)
{
v___x_6483_ = v_mctx_6463_;
v_isShared_6484_ = v_isSharedCheck_6495_;
goto v_resetjp_6482_;
}
else
{
lean_inc(v_instanceTypedMVars_6481_);
lean_inc(v_dAssignment_6480_);
lean_inc(v_eAssignment_6479_);
lean_inc(v_lAssignment_6478_);
lean_inc(v_userNames_6477_);
lean_inc(v_decls_6476_);
lean_inc(v_lDecls_6475_);
lean_inc(v_mvarCounter_6474_);
lean_inc(v_lmvarCounter_6473_);
lean_inc(v_levelAssignDepth_6472_);
lean_inc(v_depth_6471_);
lean_dec(v_mctx_6463_);
v___x_6483_ = lean_box(0);
v_isShared_6484_ = v_isSharedCheck_6495_;
goto v_resetjp_6482_;
}
v_resetjp_6482_:
{
lean_object* v___x_6485_; lean_object* v___x_6486_; lean_object* v___x_6488_; 
v___x_6485_ = lean_box(0);
v___x_6486_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4___redArg(v_eAssignment_6479_, v_mvarId_6458_, v_val_6459_);
if (v_isShared_6484_ == 0)
{
lean_ctor_set(v___x_6483_, 8, v___x_6486_);
v___x_6488_ = v___x_6483_;
goto v_reusejp_6487_;
}
else
{
lean_object* v_reuseFailAlloc_6494_; 
v_reuseFailAlloc_6494_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_6494_, 0, v_depth_6471_);
lean_ctor_set(v_reuseFailAlloc_6494_, 1, v_levelAssignDepth_6472_);
lean_ctor_set(v_reuseFailAlloc_6494_, 2, v_lmvarCounter_6473_);
lean_ctor_set(v_reuseFailAlloc_6494_, 3, v_mvarCounter_6474_);
lean_ctor_set(v_reuseFailAlloc_6494_, 4, v_lDecls_6475_);
lean_ctor_set(v_reuseFailAlloc_6494_, 5, v_decls_6476_);
lean_ctor_set(v_reuseFailAlloc_6494_, 6, v_userNames_6477_);
lean_ctor_set(v_reuseFailAlloc_6494_, 7, v_lAssignment_6478_);
lean_ctor_set(v_reuseFailAlloc_6494_, 8, v___x_6486_);
lean_ctor_set(v_reuseFailAlloc_6494_, 9, v_dAssignment_6480_);
lean_ctor_set(v_reuseFailAlloc_6494_, 10, v_instanceTypedMVars_6481_);
v___x_6488_ = v_reuseFailAlloc_6494_;
goto v_reusejp_6487_;
}
v_reusejp_6487_:
{
lean_object* v___x_6490_; 
if (v_isShared_6470_ == 0)
{
lean_ctor_set(v___x_6469_, 0, v___x_6488_);
v___x_6490_ = v___x_6469_;
goto v_reusejp_6489_;
}
else
{
lean_object* v_reuseFailAlloc_6493_; 
v_reuseFailAlloc_6493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6493_, 0, v___x_6488_);
lean_ctor_set(v_reuseFailAlloc_6493_, 1, v_cache_6464_);
lean_ctor_set(v_reuseFailAlloc_6493_, 2, v_zetaDeltaFVarIds_6465_);
lean_ctor_set(v_reuseFailAlloc_6493_, 3, v_postponed_6466_);
lean_ctor_set(v_reuseFailAlloc_6493_, 4, v_diag_6467_);
v___x_6490_ = v_reuseFailAlloc_6493_;
goto v_reusejp_6489_;
}
v_reusejp_6489_:
{
lean_object* v___x_6491_; lean_object* v___x_6492_; 
v___x_6491_ = lean_st_ref_put(v___y_6460_, v___x_6490_);
v___x_6492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6492_, 0, v___x_6485_);
return v___x_6492_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___redArg___boxed(lean_object* v_mvarId_6497_, lean_object* v_val_6498_, lean_object* v___y_6499_, lean_object* v___y_6500_){
_start:
{
lean_object* v_res_6501_; 
v_res_6501_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___redArg(v_mvarId_6497_, v_val_6498_, v___y_6499_);
lean_dec(v___y_6499_);
return v_res_6501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3(lean_object* v_goal_6506_, lean_object* v_c_6507_, lean_object* v_numCases_6508_, uint8_t v_isRec_6509_, lean_object* v_candidates_x3f_6510_, uint8_t v_compress_6511_, lean_object* v_kp_6512_, uint8_t v_stopAtFirstFailure_6513_, lean_object* v___y_6514_, lean_object* v___y_6515_, lean_object* v___y_6516_, lean_object* v___y_6517_, lean_object* v___y_6518_, lean_object* v___y_6519_, lean_object* v___y_6520_, lean_object* v___y_6521_, lean_object* v___y_6522_){
_start:
{
lean_object* v___x_6524_; 
v___x_6524_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_6515_);
if (lean_obj_tag(v___x_6524_) == 0)
{
lean_object* v_a_6525_; uint8_t v_trace_6526_; lean_object* v___x_6527_; 
v_a_6525_ = lean_ctor_get(v___x_6524_, 0);
lean_inc(v_a_6525_);
lean_dec_ref_known(v___x_6524_, 1);
v_trace_6526_ = lean_ctor_get_uint8(v_a_6525_, sizeof(void*)*18);
lean_dec(v_a_6525_);
v___x_6527_ = l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(v___y_6515_, v___y_6516_, v___y_6520_, v___y_6522_);
if (lean_obj_tag(v___x_6527_) == 0)
{
lean_object* v_a_6528_; lean_object* v___x_6529_; 
v_a_6528_ = lean_ctor_get(v___x_6527_, 0);
lean_inc(v_a_6528_);
lean_dec_ref_known(v___x_6527_, 1);
lean_inc_ref(v_goal_6506_);
v___x_6529_ = l_Lean_Meta_Grind_Goal_mkAuxMVar(v_goal_6506_, v___y_6519_, v___y_6520_, v___y_6521_, v___y_6522_);
if (lean_obj_tag(v___x_6529_) == 0)
{
lean_object* v_a_6530_; lean_object* v_mvarId_6531_; lean_object* v___x_6532_; lean_object* v___x_6533_; lean_object* v___f_6534_; lean_object* v___x_6535_; lean_object* v___f_6536_; lean_object* v___x_6537_; 
v_a_6530_ = lean_ctor_get(v___x_6529_, 0);
lean_inc_n(v_a_6530_, 2);
lean_dec_ref_known(v___x_6529_, 1);
v_mvarId_6531_ = lean_ctor_get(v_goal_6506_, 1);
v___x_6532_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v_c_6507_);
v___x_6533_ = lean_box(v_isRec_6509_);
lean_inc_ref_n(v_c_6507_, 2);
lean_inc_ref(v___x_6532_);
v___f_6534_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_splitCore___redArg___lam__0___boxed), 17, 5);
lean_closure_set(v___f_6534_, 0, v___x_6532_);
lean_closure_set(v___f_6534_, 1, v_c_6507_);
lean_closure_set(v___f_6534_, 2, v_a_6530_);
lean_closure_set(v___f_6534_, 3, v_numCases_6508_);
lean_closure_set(v___f_6534_, 4, v___x_6533_);
v___x_6535_ = lean_box(v_trace_6526_);
lean_inc_ref(v_goal_6506_);
v___f_6536_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_splitCore___redArg___lam__1___boxed), 15, 5);
lean_closure_set(v___f_6536_, 0, v_goal_6506_);
lean_closure_set(v___f_6536_, 1, v___x_6535_);
lean_closure_set(v___f_6536_, 2, v___f_6534_);
lean_closure_set(v___f_6536_, 3, v_c_6507_);
lean_closure_set(v___f_6536_, 4, v_candidates_x3f_6510_);
lean_inc(v_mvarId_6531_);
v___x_6537_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(v_mvarId_6531_, v___f_6536_, v___y_6514_, v___y_6515_, v___y_6516_, v___y_6517_, v___y_6518_, v___y_6519_, v___y_6520_, v___y_6521_, v___y_6522_);
if (lean_obj_tag(v___x_6537_) == 0)
{
lean_object* v_a_6538_; lean_object* v___x_6540_; uint8_t v_isShared_6541_; uint8_t v_isSharedCheck_6717_; 
v_a_6538_ = lean_ctor_get(v___x_6537_, 0);
v_isSharedCheck_6717_ = !lean_is_exclusive(v___x_6537_);
if (v_isSharedCheck_6717_ == 0)
{
v___x_6540_ = v___x_6537_;
v_isShared_6541_ = v_isSharedCheck_6717_;
goto v_resetjp_6539_;
}
else
{
lean_inc(v_a_6538_);
lean_dec(v___x_6537_);
v___x_6540_ = lean_box(0);
v_isShared_6541_ = v_isSharedCheck_6717_;
goto v_resetjp_6539_;
}
v_resetjp_6539_:
{
lean_object* v_fst_6542_; lean_object* v_snd_6543_; lean_object* v___x_6545_; uint8_t v_isShared_6546_; uint8_t v_isSharedCheck_6716_; 
v_fst_6542_ = lean_ctor_get(v_a_6538_, 0);
v_snd_6543_ = lean_ctor_get(v_a_6538_, 1);
v_isSharedCheck_6716_ = !lean_is_exclusive(v_a_6538_);
if (v_isSharedCheck_6716_ == 0)
{
v___x_6545_ = v_a_6538_;
v_isShared_6546_ = v_isSharedCheck_6716_;
goto v_resetjp_6544_;
}
else
{
lean_inc(v_snd_6543_);
lean_inc(v_fst_6542_);
lean_dec(v_a_6538_);
v___x_6545_ = lean_box(0);
v_isShared_6546_ = v_isSharedCheck_6716_;
goto v_resetjp_6544_;
}
v_resetjp_6544_:
{
lean_object* v_fst_6547_; lean_object* v_snd_6548_; lean_object* v___x_6550_; uint8_t v_isShared_6551_; uint8_t v_isSharedCheck_6715_; 
v_fst_6547_ = lean_ctor_get(v_fst_6542_, 0);
v_snd_6548_ = lean_ctor_get(v_fst_6542_, 1);
v_isSharedCheck_6715_ = !lean_is_exclusive(v_fst_6542_);
if (v_isSharedCheck_6715_ == 0)
{
v___x_6550_ = v_fst_6542_;
v_isShared_6551_ = v_isSharedCheck_6715_;
goto v_resetjp_6549_;
}
else
{
lean_inc(v_snd_6548_);
lean_inc(v_fst_6547_);
lean_dec(v_fst_6542_);
v___x_6550_ = lean_box(0);
v_isShared_6551_ = v_isSharedCheck_6715_;
goto v_resetjp_6549_;
}
v_resetjp_6549_:
{
lean_object* v___y_6553_; lean_object* v___y_6554_; lean_object* v___y_6555_; lean_object* v___y_6556_; lean_object* v___y_6557_; lean_object* v___f_6604_; lean_object* v___x_6605_; lean_object* v___x_6606_; lean_object* v_congrThms_6607_; lean_object* v_simp_6608_; lean_object* v_symSimp_6609_; lean_object* v_symDSimp_6610_; lean_object* v_lastTag_6611_; lean_object* v_counters_6612_; lean_object* v_splitDiags_6613_; lean_object* v_ematchDiags_6614_; lean_object* v_lawfulEqCmpMap_6615_; lean_object* v_reflCmpMap_6616_; lean_object* v_anchors_6617_; lean_object* v_fvarAnchors_6618_; lean_object* v_instanceMap_6619_; lean_object* v_hoistedDecls_6620_; lean_object* v_proofInfos_6621_; lean_object* v_numBranches_6622_; lean_object* v___x_6624_; uint8_t v_isShared_6625_; uint8_t v_isSharedCheck_6714_; 
lean_inc(v_snd_6543_);
v___f_6604_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_splitCore___redArg___lam__2___boxed), 12, 2);
lean_closure_set(v___f_6604_, 0, v_snd_6543_);
lean_closure_set(v___f_6604_, 1, v_a_6530_);
v___x_6605_ = l_List_lengthTR___redArg(v_fst_6547_);
v___x_6606_ = lean_st_ref_take(v___y_6516_);
v_congrThms_6607_ = lean_ctor_get(v___x_6606_, 0);
v_simp_6608_ = lean_ctor_get(v___x_6606_, 1);
v_symSimp_6609_ = lean_ctor_get(v___x_6606_, 2);
v_symDSimp_6610_ = lean_ctor_get(v___x_6606_, 3);
v_lastTag_6611_ = lean_ctor_get(v___x_6606_, 4);
v_counters_6612_ = lean_ctor_get(v___x_6606_, 5);
v_splitDiags_6613_ = lean_ctor_get(v___x_6606_, 6);
v_ematchDiags_6614_ = lean_ctor_get(v___x_6606_, 7);
v_lawfulEqCmpMap_6615_ = lean_ctor_get(v___x_6606_, 8);
v_reflCmpMap_6616_ = lean_ctor_get(v___x_6606_, 9);
v_anchors_6617_ = lean_ctor_get(v___x_6606_, 10);
v_fvarAnchors_6618_ = lean_ctor_get(v___x_6606_, 11);
v_instanceMap_6619_ = lean_ctor_get(v___x_6606_, 12);
v_hoistedDecls_6620_ = lean_ctor_get(v___x_6606_, 13);
v_proofInfos_6621_ = lean_ctor_get(v___x_6606_, 14);
v_numBranches_6622_ = lean_ctor_get(v___x_6606_, 15);
v_isSharedCheck_6714_ = !lean_is_exclusive(v___x_6606_);
if (v_isSharedCheck_6714_ == 0)
{
v___x_6624_ = v___x_6606_;
v_isShared_6625_ = v_isSharedCheck_6714_;
goto v_resetjp_6623_;
}
else
{
lean_inc(v_numBranches_6622_);
lean_inc(v_proofInfos_6621_);
lean_inc(v_hoistedDecls_6620_);
lean_inc(v_instanceMap_6619_);
lean_inc(v_fvarAnchors_6618_);
lean_inc(v_anchors_6617_);
lean_inc(v_reflCmpMap_6616_);
lean_inc(v_lawfulEqCmpMap_6615_);
lean_inc(v_ematchDiags_6614_);
lean_inc(v_splitDiags_6613_);
lean_inc(v_counters_6612_);
lean_inc(v_lastTag_6611_);
lean_inc(v_symDSimp_6610_);
lean_inc(v_symSimp_6609_);
lean_inc(v_simp_6608_);
lean_inc(v_congrThms_6607_);
lean_dec(v___x_6606_);
v___x_6624_ = lean_box(0);
v_isShared_6625_ = v_isSharedCheck_6714_;
goto v_resetjp_6623_;
}
v___jp_6552_:
{
lean_object* v___x_6558_; uint8_t v___x_6559_; 
v___x_6558_ = lean_array_get_size(v___y_6553_);
v___x_6559_ = lean_nat_dec_eq(v___x_6558_, v___y_6555_);
if (v___x_6559_ == 0)
{
lean_object* v___x_6560_; lean_object* v___x_6561_; lean_object* v___x_6563_; 
lean_dec(v___y_6554_);
lean_dec(v_snd_6548_);
v___x_6560_ = lean_array_to_list(v___y_6553_);
v___x_6561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6561_, 0, v___x_6560_);
if (v_isShared_6541_ == 0)
{
lean_ctor_set(v___x_6540_, 0, v___x_6561_);
v___x_6563_ = v___x_6540_;
goto v_reusejp_6562_;
}
else
{
lean_object* v_reuseFailAlloc_6564_; 
v_reuseFailAlloc_6564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6564_, 0, v___x_6561_);
v___x_6563_ = v_reuseFailAlloc_6564_;
goto v_reusejp_6562_;
}
v_reusejp_6562_:
{
return v___x_6563_;
}
}
else
{
lean_dec(v___y_6553_);
if (lean_obj_tag(v_snd_6548_) == 1)
{
lean_object* v_val_6565_; lean_object* v___x_6567_; uint8_t v_isShared_6568_; uint8_t v_isSharedCheck_6599_; 
lean_del_object(v___x_6540_);
v_val_6565_ = lean_ctor_get(v_snd_6548_, 0);
v_isSharedCheck_6599_ = !lean_is_exclusive(v_snd_6548_);
if (v_isSharedCheck_6599_ == 0)
{
v___x_6567_ = v_snd_6548_;
v_isShared_6568_ = v_isSharedCheck_6599_;
goto v_resetjp_6566_;
}
else
{
lean_inc(v_val_6565_);
lean_dec(v_snd_6548_);
v___x_6567_ = lean_box(0);
v_isShared_6568_ = v_isSharedCheck_6599_;
goto v_resetjp_6566_;
}
v_resetjp_6566_:
{
lean_object* v___x_6569_; 
v___x_6569_ = l_Lean_Meta_Grind_SplitAnchorRefInfo_toSyntax___redArg(v_val_6565_, v___y_6556_);
lean_dec(v_val_6565_);
if (lean_obj_tag(v___x_6569_) == 0)
{
lean_object* v_a_6570_; lean_object* v___x_6571_; 
v_a_6570_ = lean_ctor_get(v___x_6569_, 0);
lean_inc(v_a_6570_);
lean_dec_ref_known(v___x_6569_, 1);
v___x_6571_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_mkCasesResultSeq(v_a_6570_, v___y_6554_, v_compress_6511_, v___y_6556_, v___y_6557_);
if (lean_obj_tag(v___x_6571_) == 0)
{
lean_object* v_a_6572_; lean_object* v___x_6574_; uint8_t v_isShared_6575_; uint8_t v_isSharedCheck_6582_; 
v_a_6572_ = lean_ctor_get(v___x_6571_, 0);
v_isSharedCheck_6582_ = !lean_is_exclusive(v___x_6571_);
if (v_isSharedCheck_6582_ == 0)
{
v___x_6574_ = v___x_6571_;
v_isShared_6575_ = v_isSharedCheck_6582_;
goto v_resetjp_6573_;
}
else
{
lean_inc(v_a_6572_);
lean_dec(v___x_6571_);
v___x_6574_ = lean_box(0);
v_isShared_6575_ = v_isSharedCheck_6582_;
goto v_resetjp_6573_;
}
v_resetjp_6573_:
{
lean_object* v___x_6577_; 
if (v_isShared_6568_ == 0)
{
lean_ctor_set_tag(v___x_6567_, 0);
lean_ctor_set(v___x_6567_, 0, v_a_6572_);
v___x_6577_ = v___x_6567_;
goto v_reusejp_6576_;
}
else
{
lean_object* v_reuseFailAlloc_6581_; 
v_reuseFailAlloc_6581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6581_, 0, v_a_6572_);
v___x_6577_ = v_reuseFailAlloc_6581_;
goto v_reusejp_6576_;
}
v_reusejp_6576_:
{
lean_object* v___x_6579_; 
if (v_isShared_6575_ == 0)
{
lean_ctor_set(v___x_6574_, 0, v___x_6577_);
v___x_6579_ = v___x_6574_;
goto v_reusejp_6578_;
}
else
{
lean_object* v_reuseFailAlloc_6580_; 
v_reuseFailAlloc_6580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6580_, 0, v___x_6577_);
v___x_6579_ = v_reuseFailAlloc_6580_;
goto v_reusejp_6578_;
}
v_reusejp_6578_:
{
return v___x_6579_;
}
}
}
}
else
{
lean_object* v_a_6583_; lean_object* v___x_6585_; uint8_t v_isShared_6586_; uint8_t v_isSharedCheck_6590_; 
lean_del_object(v___x_6567_);
v_a_6583_ = lean_ctor_get(v___x_6571_, 0);
v_isSharedCheck_6590_ = !lean_is_exclusive(v___x_6571_);
if (v_isSharedCheck_6590_ == 0)
{
v___x_6585_ = v___x_6571_;
v_isShared_6586_ = v_isSharedCheck_6590_;
goto v_resetjp_6584_;
}
else
{
lean_inc(v_a_6583_);
lean_dec(v___x_6571_);
v___x_6585_ = lean_box(0);
v_isShared_6586_ = v_isSharedCheck_6590_;
goto v_resetjp_6584_;
}
v_resetjp_6584_:
{
lean_object* v___x_6588_; 
if (v_isShared_6586_ == 0)
{
v___x_6588_ = v___x_6585_;
goto v_reusejp_6587_;
}
else
{
lean_object* v_reuseFailAlloc_6589_; 
v_reuseFailAlloc_6589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6589_, 0, v_a_6583_);
v___x_6588_ = v_reuseFailAlloc_6589_;
goto v_reusejp_6587_;
}
v_reusejp_6587_:
{
return v___x_6588_;
}
}
}
}
else
{
lean_object* v_a_6591_; lean_object* v___x_6593_; uint8_t v_isShared_6594_; uint8_t v_isSharedCheck_6598_; 
lean_del_object(v___x_6567_);
lean_dec(v___y_6554_);
v_a_6591_ = lean_ctor_get(v___x_6569_, 0);
v_isSharedCheck_6598_ = !lean_is_exclusive(v___x_6569_);
if (v_isSharedCheck_6598_ == 0)
{
v___x_6593_ = v___x_6569_;
v_isShared_6594_ = v_isSharedCheck_6598_;
goto v_resetjp_6592_;
}
else
{
lean_inc(v_a_6591_);
lean_dec(v___x_6569_);
v___x_6593_ = lean_box(0);
v_isShared_6594_ = v_isSharedCheck_6598_;
goto v_resetjp_6592_;
}
v_resetjp_6592_:
{
lean_object* v___x_6596_; 
if (v_isShared_6594_ == 0)
{
v___x_6596_ = v___x_6593_;
goto v_reusejp_6595_;
}
else
{
lean_object* v_reuseFailAlloc_6597_; 
v_reuseFailAlloc_6597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6597_, 0, v_a_6591_);
v___x_6596_ = v_reuseFailAlloc_6597_;
goto v_reusejp_6595_;
}
v_reusejp_6595_:
{
return v___x_6596_;
}
}
}
}
}
else
{
lean_object* v___x_6600_; lean_object* v___x_6602_; 
lean_dec(v___y_6554_);
lean_dec(v_snd_6548_);
v___x_6600_ = ((lean_object*)(l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___closed__0));
if (v_isShared_6541_ == 0)
{
lean_ctor_set(v___x_6540_, 0, v___x_6600_);
v___x_6602_ = v___x_6540_;
goto v_reusejp_6601_;
}
else
{
lean_object* v_reuseFailAlloc_6603_; 
v_reuseFailAlloc_6603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6603_, 0, v___x_6600_);
v___x_6602_ = v_reuseFailAlloc_6603_;
goto v_reusejp_6601_;
}
v_reusejp_6601_:
{
return v___x_6602_;
}
}
}
}
v_resetjp_6623_:
{
lean_object* v___y_6627_; 
if (v_isRec_6509_ == 0)
{
lean_object* v___x_6712_; lean_object* v___x_6713_; 
v___x_6712_ = lean_unsigned_to_nat(1u);
v___x_6713_ = lean_nat_sub(v___x_6605_, v___x_6712_);
v___y_6627_ = v___x_6713_;
goto v___jp_6626_;
}
else
{
lean_inc(v___x_6605_);
v___y_6627_ = v___x_6605_;
goto v___jp_6626_;
}
v___jp_6626_:
{
lean_object* v___x_6628_; lean_object* v___x_6630_; 
v___x_6628_ = lean_nat_add(v_numBranches_6622_, v___y_6627_);
lean_dec(v___y_6627_);
lean_dec(v_numBranches_6622_);
if (v_isShared_6625_ == 0)
{
lean_ctor_set(v___x_6624_, 15, v___x_6628_);
v___x_6630_ = v___x_6624_;
goto v_reusejp_6629_;
}
else
{
lean_object* v_reuseFailAlloc_6711_; 
v_reuseFailAlloc_6711_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_6711_, 0, v_congrThms_6607_);
lean_ctor_set(v_reuseFailAlloc_6711_, 1, v_simp_6608_);
lean_ctor_set(v_reuseFailAlloc_6711_, 2, v_symSimp_6609_);
lean_ctor_set(v_reuseFailAlloc_6711_, 3, v_symDSimp_6610_);
lean_ctor_set(v_reuseFailAlloc_6711_, 4, v_lastTag_6611_);
lean_ctor_set(v_reuseFailAlloc_6711_, 5, v_counters_6612_);
lean_ctor_set(v_reuseFailAlloc_6711_, 6, v_splitDiags_6613_);
lean_ctor_set(v_reuseFailAlloc_6711_, 7, v_ematchDiags_6614_);
lean_ctor_set(v_reuseFailAlloc_6711_, 8, v_lawfulEqCmpMap_6615_);
lean_ctor_set(v_reuseFailAlloc_6711_, 9, v_reflCmpMap_6616_);
lean_ctor_set(v_reuseFailAlloc_6711_, 10, v_anchors_6617_);
lean_ctor_set(v_reuseFailAlloc_6711_, 11, v_fvarAnchors_6618_);
lean_ctor_set(v_reuseFailAlloc_6711_, 12, v_instanceMap_6619_);
lean_ctor_set(v_reuseFailAlloc_6711_, 13, v_hoistedDecls_6620_);
lean_ctor_set(v_reuseFailAlloc_6711_, 14, v_proofInfos_6621_);
lean_ctor_set(v_reuseFailAlloc_6711_, 15, v___x_6628_);
v___x_6630_ = v_reuseFailAlloc_6711_;
goto v_reusejp_6629_;
}
v_reusejp_6629_:
{
lean_object* v___x_6631_; lean_object* v_toGoalState_6632_; lean_object* v_mvarId_6633_; lean_object* v_goalStack_6634_; lean_object* v___x_6636_; 
v___x_6631_ = lean_st_ref_put(v___y_6516_, v___x_6630_);
v_toGoalState_6632_ = lean_ctor_get(v_snd_6543_, 0);
v_mvarId_6633_ = lean_ctor_get(v_snd_6543_, 1);
lean_inc_n(v_mvarId_6633_, 2);
v_goalStack_6634_ = lean_ctor_get(v_toGoalState_6632_, 19);
lean_inc_ref(v_goalStack_6634_);
lean_inc_ref(v_toGoalState_6632_);
if (v_isShared_6551_ == 0)
{
lean_ctor_set(v___x_6550_, 1, v_toGoalState_6632_);
lean_ctor_set(v___x_6550_, 0, v_mvarId_6633_);
v___x_6636_ = v___x_6550_;
goto v_reusejp_6635_;
}
else
{
lean_object* v_reuseFailAlloc_6710_; 
v_reuseFailAlloc_6710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6710_, 0, v_mvarId_6633_);
lean_ctor_set(v_reuseFailAlloc_6710_, 1, v_toGoalState_6632_);
v___x_6636_ = v_reuseFailAlloc_6710_;
goto v_reusejp_6635_;
}
v_reusejp_6635_:
{
lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; 
lean_inc_ref(v_goalStack_6634_);
v___x_6637_ = lean_array_push(v_goalStack_6634_, v___x_6636_);
lean_inc_ref(v_c_6507_);
v___x_6638_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_SplitInfo_getAnchor___boxed), 11, 1);
lean_closure_set(v___x_6638_, 0, v_c_6507_);
lean_inc(v_mvarId_6633_);
v___x_6639_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(v_mvarId_6633_, v___x_6638_, v___y_6514_, v___y_6515_, v___y_6516_, v___y_6517_, v___y_6518_, v___y_6519_, v___y_6520_, v___y_6521_, v___y_6522_);
if (lean_obj_tag(v___x_6639_) == 0)
{
lean_object* v_a_6640_; lean_object* v___x_6641_; lean_object* v___x_6642_; uint64_t v___x_6643_; lean_object* v___x_6644_; lean_object* v___x_6645_; lean_object* v___x_6646_; lean_object* v___x_6647_; lean_object* v___x_6649_; 
v_a_6640_ = lean_ctor_get(v___x_6639_, 0);
lean_inc(v_a_6640_);
lean_dec_ref_known(v___x_6639_, 1);
v___x_6641_ = lean_unsigned_to_nat(0u);
v___x_6642_ = ((lean_object*)(l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___closed__1));
v___x_6643_ = lean_unbox_uint64(v_a_6640_);
lean_dec(v_a_6640_);
lean_inc_n(v___x_6605_, 2);
lean_inc_ref(v_toGoalState_6632_);
v___x_6644_ = l_List_mapIdx_go___at___00Lean_Meta_Grind_Action_splitCore_spec__2(v_toGoalState_6632_, v_c_6507_, v___x_6532_, v___x_6605_, v___x_6637_, v___x_6643_, v_fst_6547_, v___x_6642_);
lean_dec_ref(v_c_6507_);
v___x_6645_ = lean_box(0);
v___x_6646_ = lean_unsigned_to_nat(1u);
v___x_6647_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6647_, 0, v___x_6641_);
lean_ctor_set(v___x_6647_, 1, v___x_6605_);
lean_ctor_set(v___x_6647_, 2, v___x_6646_);
if (v_isShared_6546_ == 0)
{
lean_ctor_set(v___x_6545_, 1, v___x_6647_);
lean_ctor_set(v___x_6545_, 0, v___x_6645_);
v___x_6649_ = v___x_6545_;
goto v_reusejp_6648_;
}
else
{
lean_object* v_reuseFailAlloc_6701_; 
v_reuseFailAlloc_6701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6701_, 0, v___x_6645_);
lean_ctor_set(v_reuseFailAlloc_6701_, 1, v___x_6647_);
v___x_6649_ = v_reuseFailAlloc_6701_;
goto v_reusejp_6648_;
}
v_reusejp_6648_:
{
lean_object* v___x_6650_; lean_object* v___x_6651_; lean_object* v___x_6652_; lean_object* v___x_6653_; 
v___x_6650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6650_, 0, v___x_6642_);
lean_ctor_set(v___x_6650_, 1, v___x_6649_);
v___x_6651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6651_, 0, v___x_6642_);
lean_ctor_set(v___x_6651_, 1, v___x_6650_);
v___x_6652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6652_, 0, v___x_6645_);
lean_ctor_set(v___x_6652_, 1, v___x_6651_);
lean_inc(v_mvarId_6633_);
v___x_6653_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg(v_kp_6512_, v_a_6528_, v_goal_6506_, v___x_6605_, v_snd_6543_, v_mvarId_6633_, v_stopAtFirstFailure_6513_, v_goalStack_6634_, v___x_6644_, v___x_6652_, v___y_6514_, v___y_6515_, v___y_6516_, v___y_6517_, v___y_6518_, v___y_6519_, v___y_6520_, v___y_6521_, v___y_6522_);
lean_dec(v___x_6644_);
lean_dec_ref(v_goalStack_6634_);
lean_dec(v___x_6605_);
if (lean_obj_tag(v___x_6653_) == 0)
{
lean_object* v_a_6654_; lean_object* v___x_6656_; uint8_t v_isShared_6657_; uint8_t v_isSharedCheck_6692_; 
v_a_6654_ = lean_ctor_get(v___x_6653_, 0);
v_isSharedCheck_6692_ = !lean_is_exclusive(v___x_6653_);
if (v_isSharedCheck_6692_ == 0)
{
v___x_6656_ = v___x_6653_;
v_isShared_6657_ = v_isSharedCheck_6692_;
goto v_resetjp_6655_;
}
else
{
lean_inc(v_a_6654_);
lean_dec(v___x_6653_);
v___x_6656_ = lean_box(0);
v_isShared_6657_ = v_isSharedCheck_6692_;
goto v_resetjp_6655_;
}
v_resetjp_6655_:
{
lean_object* v_fst_6658_; 
v_fst_6658_ = lean_ctor_get(v_a_6654_, 0);
if (lean_obj_tag(v_fst_6658_) == 0)
{
lean_object* v_snd_6659_; lean_object* v_snd_6660_; lean_object* v_fst_6661_; lean_object* v_fst_6662_; lean_object* v___x_6663_; 
lean_del_object(v___x_6656_);
v_snd_6659_ = lean_ctor_get(v_a_6654_, 1);
lean_inc(v_snd_6659_);
lean_dec(v_a_6654_);
v_snd_6660_ = lean_ctor_get(v_snd_6659_, 1);
lean_inc(v_snd_6660_);
v_fst_6661_ = lean_ctor_get(v_snd_6659_, 0);
lean_inc(v_fst_6661_);
lean_dec(v_snd_6659_);
v_fst_6662_ = lean_ctor_get(v_snd_6660_, 0);
lean_inc(v_fst_6662_);
lean_dec(v_snd_6660_);
lean_inc(v_mvarId_6633_);
v___x_6663_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(v_mvarId_6633_, v___f_6604_, v___y_6514_, v___y_6515_, v___y_6516_, v___y_6517_, v___y_6518_, v___y_6519_, v___y_6520_, v___y_6521_, v___y_6522_);
if (lean_obj_tag(v___x_6663_) == 0)
{
lean_object* v_a_6664_; lean_object* v___x_6665_; 
v_a_6664_ = lean_ctor_get(v___x_6663_, 0);
lean_inc(v_a_6664_);
lean_dec_ref_known(v___x_6663_, 1);
lean_inc(v_mvarId_6633_);
v___x_6665_ = l_Lean_MVarId_getType(v_mvarId_6633_, v___y_6519_, v___y_6520_, v___y_6521_, v___y_6522_);
if (lean_obj_tag(v___x_6665_) == 0)
{
lean_object* v_a_6666_; uint8_t v___x_6667_; 
v_a_6666_ = lean_ctor_get(v___x_6665_, 0);
lean_inc(v_a_6666_);
lean_dec_ref_known(v___x_6665_, 1);
v___x_6667_ = l_Lean_Expr_isFalse(v_a_6666_);
lean_dec(v_a_6666_);
if (v___x_6667_ == 0)
{
lean_object* v___x_6668_; 
v___x_6668_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___redArg(v_mvarId_6633_, v_a_6664_, v___y_6520_);
lean_dec_ref(v___x_6668_);
v___y_6553_ = v_fst_6662_;
v___y_6554_ = v_fst_6661_;
v___y_6555_ = v___x_6641_;
v___y_6556_ = v___y_6521_;
v___y_6557_ = v___y_6522_;
goto v___jp_6552_;
}
else
{
lean_object* v___x_6669_; lean_object* v___x_6670_; lean_object* v___x_6671_; 
v___x_6669_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1, &l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg___lam__1___closed__1);
v___x_6670_ = l_Lean_Meta_mkExpectedPropHint(v_a_6664_, v___x_6669_);
v___x_6671_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___redArg(v_mvarId_6633_, v___x_6670_, v___y_6520_);
lean_dec_ref(v___x_6671_);
v___y_6553_ = v_fst_6662_;
v___y_6554_ = v_fst_6661_;
v___y_6555_ = v___x_6641_;
v___y_6556_ = v___y_6521_;
v___y_6557_ = v___y_6522_;
goto v___jp_6552_;
}
}
else
{
lean_object* v_a_6672_; lean_object* v___x_6674_; uint8_t v_isShared_6675_; uint8_t v_isSharedCheck_6679_; 
lean_dec(v_a_6664_);
lean_dec(v_fst_6662_);
lean_dec(v_fst_6661_);
lean_dec(v_mvarId_6633_);
lean_dec(v_snd_6548_);
lean_del_object(v___x_6540_);
v_a_6672_ = lean_ctor_get(v___x_6665_, 0);
v_isSharedCheck_6679_ = !lean_is_exclusive(v___x_6665_);
if (v_isSharedCheck_6679_ == 0)
{
v___x_6674_ = v___x_6665_;
v_isShared_6675_ = v_isSharedCheck_6679_;
goto v_resetjp_6673_;
}
else
{
lean_inc(v_a_6672_);
lean_dec(v___x_6665_);
v___x_6674_ = lean_box(0);
v_isShared_6675_ = v_isSharedCheck_6679_;
goto v_resetjp_6673_;
}
v_resetjp_6673_:
{
lean_object* v___x_6677_; 
if (v_isShared_6675_ == 0)
{
v___x_6677_ = v___x_6674_;
goto v_reusejp_6676_;
}
else
{
lean_object* v_reuseFailAlloc_6678_; 
v_reuseFailAlloc_6678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6678_, 0, v_a_6672_);
v___x_6677_ = v_reuseFailAlloc_6678_;
goto v_reusejp_6676_;
}
v_reusejp_6676_:
{
return v___x_6677_;
}
}
}
}
else
{
lean_object* v_a_6680_; lean_object* v___x_6682_; uint8_t v_isShared_6683_; uint8_t v_isSharedCheck_6687_; 
lean_dec(v_fst_6662_);
lean_dec(v_fst_6661_);
lean_dec(v_mvarId_6633_);
lean_dec(v_snd_6548_);
lean_del_object(v___x_6540_);
v_a_6680_ = lean_ctor_get(v___x_6663_, 0);
v_isSharedCheck_6687_ = !lean_is_exclusive(v___x_6663_);
if (v_isSharedCheck_6687_ == 0)
{
v___x_6682_ = v___x_6663_;
v_isShared_6683_ = v_isSharedCheck_6687_;
goto v_resetjp_6681_;
}
else
{
lean_inc(v_a_6680_);
lean_dec(v___x_6663_);
v___x_6682_ = lean_box(0);
v_isShared_6683_ = v_isSharedCheck_6687_;
goto v_resetjp_6681_;
}
v_resetjp_6681_:
{
lean_object* v___x_6685_; 
if (v_isShared_6683_ == 0)
{
v___x_6685_ = v___x_6682_;
goto v_reusejp_6684_;
}
else
{
lean_object* v_reuseFailAlloc_6686_; 
v_reuseFailAlloc_6686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6686_, 0, v_a_6680_);
v___x_6685_ = v_reuseFailAlloc_6686_;
goto v_reusejp_6684_;
}
v_reusejp_6684_:
{
return v___x_6685_;
}
}
}
}
else
{
lean_object* v_val_6688_; lean_object* v___x_6690_; 
lean_inc_ref(v_fst_6658_);
lean_dec(v_a_6654_);
lean_dec(v_mvarId_6633_);
lean_dec_ref(v___f_6604_);
lean_dec(v_snd_6548_);
lean_del_object(v___x_6540_);
v_val_6688_ = lean_ctor_get(v_fst_6658_, 0);
lean_inc(v_val_6688_);
lean_dec_ref_known(v_fst_6658_, 1);
if (v_isShared_6657_ == 0)
{
lean_ctor_set(v___x_6656_, 0, v_val_6688_);
v___x_6690_ = v___x_6656_;
goto v_reusejp_6689_;
}
else
{
lean_object* v_reuseFailAlloc_6691_; 
v_reuseFailAlloc_6691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6691_, 0, v_val_6688_);
v___x_6690_ = v_reuseFailAlloc_6691_;
goto v_reusejp_6689_;
}
v_reusejp_6689_:
{
return v___x_6690_;
}
}
}
}
else
{
lean_object* v_a_6693_; lean_object* v___x_6695_; uint8_t v_isShared_6696_; uint8_t v_isSharedCheck_6700_; 
lean_dec(v_mvarId_6633_);
lean_dec_ref(v___f_6604_);
lean_dec(v_snd_6548_);
lean_del_object(v___x_6540_);
v_a_6693_ = lean_ctor_get(v___x_6653_, 0);
v_isSharedCheck_6700_ = !lean_is_exclusive(v___x_6653_);
if (v_isSharedCheck_6700_ == 0)
{
v___x_6695_ = v___x_6653_;
v_isShared_6696_ = v_isSharedCheck_6700_;
goto v_resetjp_6694_;
}
else
{
lean_inc(v_a_6693_);
lean_dec(v___x_6653_);
v___x_6695_ = lean_box(0);
v_isShared_6696_ = v_isSharedCheck_6700_;
goto v_resetjp_6694_;
}
v_resetjp_6694_:
{
lean_object* v___x_6698_; 
if (v_isShared_6696_ == 0)
{
v___x_6698_ = v___x_6695_;
goto v_reusejp_6697_;
}
else
{
lean_object* v_reuseFailAlloc_6699_; 
v_reuseFailAlloc_6699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6699_, 0, v_a_6693_);
v___x_6698_ = v_reuseFailAlloc_6699_;
goto v_reusejp_6697_;
}
v_reusejp_6697_:
{
return v___x_6698_;
}
}
}
}
}
else
{
lean_object* v_a_6702_; lean_object* v___x_6704_; uint8_t v_isShared_6705_; uint8_t v_isSharedCheck_6709_; 
lean_dec_ref(v___x_6637_);
lean_dec_ref(v_goalStack_6634_);
lean_dec(v_mvarId_6633_);
lean_dec(v___x_6605_);
lean_dec_ref(v___f_6604_);
lean_dec(v_snd_6548_);
lean_dec(v_fst_6547_);
lean_del_object(v___x_6545_);
lean_dec(v_snd_6543_);
lean_del_object(v___x_6540_);
lean_dec_ref(v___x_6532_);
lean_dec(v_a_6528_);
lean_dec_ref(v_kp_6512_);
lean_dec_ref(v_c_6507_);
lean_dec_ref(v_goal_6506_);
v_a_6702_ = lean_ctor_get(v___x_6639_, 0);
v_isSharedCheck_6709_ = !lean_is_exclusive(v___x_6639_);
if (v_isSharedCheck_6709_ == 0)
{
v___x_6704_ = v___x_6639_;
v_isShared_6705_ = v_isSharedCheck_6709_;
goto v_resetjp_6703_;
}
else
{
lean_inc(v_a_6702_);
lean_dec(v___x_6639_);
v___x_6704_ = lean_box(0);
v_isShared_6705_ = v_isSharedCheck_6709_;
goto v_resetjp_6703_;
}
v_resetjp_6703_:
{
lean_object* v___x_6707_; 
if (v_isShared_6705_ == 0)
{
v___x_6707_ = v___x_6704_;
goto v_reusejp_6706_;
}
else
{
lean_object* v_reuseFailAlloc_6708_; 
v_reuseFailAlloc_6708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6708_, 0, v_a_6702_);
v___x_6707_ = v_reuseFailAlloc_6708_;
goto v_reusejp_6706_;
}
v_reusejp_6706_:
{
return v___x_6707_;
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
else
{
lean_object* v_a_6718_; lean_object* v___x_6720_; uint8_t v_isShared_6721_; uint8_t v_isSharedCheck_6725_; 
lean_dec_ref(v___x_6532_);
lean_dec(v_a_6530_);
lean_dec(v_a_6528_);
lean_dec_ref(v_kp_6512_);
lean_dec_ref(v_c_6507_);
lean_dec_ref(v_goal_6506_);
v_a_6718_ = lean_ctor_get(v___x_6537_, 0);
v_isSharedCheck_6725_ = !lean_is_exclusive(v___x_6537_);
if (v_isSharedCheck_6725_ == 0)
{
v___x_6720_ = v___x_6537_;
v_isShared_6721_ = v_isSharedCheck_6725_;
goto v_resetjp_6719_;
}
else
{
lean_inc(v_a_6718_);
lean_dec(v___x_6537_);
v___x_6720_ = lean_box(0);
v_isShared_6721_ = v_isSharedCheck_6725_;
goto v_resetjp_6719_;
}
v_resetjp_6719_:
{
lean_object* v___x_6723_; 
if (v_isShared_6721_ == 0)
{
v___x_6723_ = v___x_6720_;
goto v_reusejp_6722_;
}
else
{
lean_object* v_reuseFailAlloc_6724_; 
v_reuseFailAlloc_6724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6724_, 0, v_a_6718_);
v___x_6723_ = v_reuseFailAlloc_6724_;
goto v_reusejp_6722_;
}
v_reusejp_6722_:
{
return v___x_6723_;
}
}
}
}
else
{
lean_object* v_a_6726_; lean_object* v___x_6728_; uint8_t v_isShared_6729_; uint8_t v_isSharedCheck_6733_; 
lean_dec(v_a_6528_);
lean_dec_ref(v_kp_6512_);
lean_dec(v_candidates_x3f_6510_);
lean_dec(v_numCases_6508_);
lean_dec_ref(v_c_6507_);
lean_dec_ref(v_goal_6506_);
v_a_6726_ = lean_ctor_get(v___x_6529_, 0);
v_isSharedCheck_6733_ = !lean_is_exclusive(v___x_6529_);
if (v_isSharedCheck_6733_ == 0)
{
v___x_6728_ = v___x_6529_;
v_isShared_6729_ = v_isSharedCheck_6733_;
goto v_resetjp_6727_;
}
else
{
lean_inc(v_a_6726_);
lean_dec(v___x_6529_);
v___x_6728_ = lean_box(0);
v_isShared_6729_ = v_isSharedCheck_6733_;
goto v_resetjp_6727_;
}
v_resetjp_6727_:
{
lean_object* v___x_6731_; 
if (v_isShared_6729_ == 0)
{
v___x_6731_ = v___x_6728_;
goto v_reusejp_6730_;
}
else
{
lean_object* v_reuseFailAlloc_6732_; 
v_reuseFailAlloc_6732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6732_, 0, v_a_6726_);
v___x_6731_ = v_reuseFailAlloc_6732_;
goto v_reusejp_6730_;
}
v_reusejp_6730_:
{
return v___x_6731_;
}
}
}
}
else
{
lean_object* v_a_6734_; lean_object* v___x_6736_; uint8_t v_isShared_6737_; uint8_t v_isSharedCheck_6741_; 
lean_dec_ref(v_kp_6512_);
lean_dec(v_candidates_x3f_6510_);
lean_dec(v_numCases_6508_);
lean_dec_ref(v_c_6507_);
lean_dec_ref(v_goal_6506_);
v_a_6734_ = lean_ctor_get(v___x_6527_, 0);
v_isSharedCheck_6741_ = !lean_is_exclusive(v___x_6527_);
if (v_isSharedCheck_6741_ == 0)
{
v___x_6736_ = v___x_6527_;
v_isShared_6737_ = v_isSharedCheck_6741_;
goto v_resetjp_6735_;
}
else
{
lean_inc(v_a_6734_);
lean_dec(v___x_6527_);
v___x_6736_ = lean_box(0);
v_isShared_6737_ = v_isSharedCheck_6741_;
goto v_resetjp_6735_;
}
v_resetjp_6735_:
{
lean_object* v___x_6739_; 
if (v_isShared_6737_ == 0)
{
v___x_6739_ = v___x_6736_;
goto v_reusejp_6738_;
}
else
{
lean_object* v_reuseFailAlloc_6740_; 
v_reuseFailAlloc_6740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6740_, 0, v_a_6734_);
v___x_6739_ = v_reuseFailAlloc_6740_;
goto v_reusejp_6738_;
}
v_reusejp_6738_:
{
return v___x_6739_;
}
}
}
}
else
{
lean_object* v_a_6742_; lean_object* v___x_6744_; uint8_t v_isShared_6745_; uint8_t v_isSharedCheck_6749_; 
lean_dec_ref(v_kp_6512_);
lean_dec(v_candidates_x3f_6510_);
lean_dec(v_numCases_6508_);
lean_dec_ref(v_c_6507_);
lean_dec_ref(v_goal_6506_);
v_a_6742_ = lean_ctor_get(v___x_6524_, 0);
v_isSharedCheck_6749_ = !lean_is_exclusive(v___x_6524_);
if (v_isSharedCheck_6749_ == 0)
{
v___x_6744_ = v___x_6524_;
v_isShared_6745_ = v_isSharedCheck_6749_;
goto v_resetjp_6743_;
}
else
{
lean_inc(v_a_6742_);
lean_dec(v___x_6524_);
v___x_6744_ = lean_box(0);
v_isShared_6745_ = v_isSharedCheck_6749_;
goto v_resetjp_6743_;
}
v_resetjp_6743_:
{
lean_object* v___x_6747_; 
if (v_isShared_6745_ == 0)
{
v___x_6747_ = v___x_6744_;
goto v_reusejp_6746_;
}
else
{
lean_object* v_reuseFailAlloc_6748_; 
v_reuseFailAlloc_6748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6748_, 0, v_a_6742_);
v___x_6747_ = v_reuseFailAlloc_6748_;
goto v_reusejp_6746_;
}
v_reusejp_6746_:
{
return v___x_6747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_goal_6750_ = _args[0];
lean_object* v_c_6751_ = _args[1];
lean_object* v_numCases_6752_ = _args[2];
lean_object* v_isRec_6753_ = _args[3];
lean_object* v_candidates_x3f_6754_ = _args[4];
lean_object* v_compress_6755_ = _args[5];
lean_object* v_kp_6756_ = _args[6];
lean_object* v_stopAtFirstFailure_6757_ = _args[7];
lean_object* v___y_6758_ = _args[8];
lean_object* v___y_6759_ = _args[9];
lean_object* v___y_6760_ = _args[10];
lean_object* v___y_6761_ = _args[11];
lean_object* v___y_6762_ = _args[12];
lean_object* v___y_6763_ = _args[13];
lean_object* v___y_6764_ = _args[14];
lean_object* v___y_6765_ = _args[15];
lean_object* v___y_6766_ = _args[16];
lean_object* v___y_6767_ = _args[17];
_start:
{
uint8_t v_isRec_boxed_6768_; uint8_t v_compress_boxed_6769_; uint8_t v_stopAtFirstFailure_boxed_6770_; lean_object* v_res_6771_; 
v_isRec_boxed_6768_ = lean_unbox(v_isRec_6753_);
v_compress_boxed_6769_ = lean_unbox(v_compress_6755_);
v_stopAtFirstFailure_boxed_6770_ = lean_unbox(v_stopAtFirstFailure_6757_);
v_res_6771_ = l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3(v_goal_6750_, v_c_6751_, v_numCases_6752_, v_isRec_boxed_6768_, v_candidates_x3f_6754_, v_compress_boxed_6769_, v_kp_6756_, v_stopAtFirstFailure_boxed_6770_, v___y_6758_, v___y_6759_, v___y_6760_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_, v___y_6765_, v___y_6766_);
lean_dec(v___y_6766_);
lean_dec_ref(v___y_6765_);
lean_dec(v___y_6764_);
lean_dec_ref(v___y_6763_);
lean_dec(v___y_6762_);
lean_dec_ref(v___y_6761_);
lean_dec(v___y_6760_);
lean_dec_ref(v___y_6759_);
lean_dec(v___y_6758_);
return v_res_6771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg(lean_object* v_c_6772_, lean_object* v_numCases_6773_, uint8_t v_isRec_6774_, uint8_t v_stopAtFirstFailure_6775_, uint8_t v_compress_6776_, lean_object* v_candidates_x3f_6777_, lean_object* v_goal_6778_, lean_object* v_kp_6779_, lean_object* v_a_6780_, lean_object* v_a_6781_, lean_object* v_a_6782_, lean_object* v_a_6783_, lean_object* v_a_6784_, lean_object* v_a_6785_, lean_object* v_a_6786_, lean_object* v_a_6787_, lean_object* v_a_6788_){
_start:
{
lean_object* v___x_6790_; lean_object* v___x_6791_; lean_object* v___x_6792_; lean_object* v___f_6793_; lean_object* v___x_6794_; 
v___x_6790_ = lean_box(v_isRec_6774_);
v___x_6791_ = lean_box(v_compress_6776_);
v___x_6792_ = lean_box(v_stopAtFirstFailure_6775_);
lean_inc_ref(v_goal_6778_);
v___f_6793_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_splitCore___redArg___lam__3___boxed), 18, 8);
lean_closure_set(v___f_6793_, 0, v_goal_6778_);
lean_closure_set(v___f_6793_, 1, v_c_6772_);
lean_closure_set(v___f_6793_, 2, v_numCases_6773_);
lean_closure_set(v___f_6793_, 3, v___x_6790_);
lean_closure_set(v___f_6793_, 4, v_candidates_x3f_6777_);
lean_closure_set(v___f_6793_, 5, v___x_6791_);
lean_closure_set(v___f_6793_, 6, v_kp_6779_);
lean_closure_set(v___f_6793_, 7, v___x_6792_);
v___x_6794_ = l_Lean_Meta_Grind_withHoistedDecls___redArg(v_goal_6778_, v___f_6793_, v_a_6780_, v_a_6781_, v_a_6782_, v_a_6783_, v_a_6784_, v_a_6785_, v_a_6786_, v_a_6787_, v_a_6788_);
return v___x_6794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___redArg___boxed(lean_object** _args){
lean_object* v_c_6795_ = _args[0];
lean_object* v_numCases_6796_ = _args[1];
lean_object* v_isRec_6797_ = _args[2];
lean_object* v_stopAtFirstFailure_6798_ = _args[3];
lean_object* v_compress_6799_ = _args[4];
lean_object* v_candidates_x3f_6800_ = _args[5];
lean_object* v_goal_6801_ = _args[6];
lean_object* v_kp_6802_ = _args[7];
lean_object* v_a_6803_ = _args[8];
lean_object* v_a_6804_ = _args[9];
lean_object* v_a_6805_ = _args[10];
lean_object* v_a_6806_ = _args[11];
lean_object* v_a_6807_ = _args[12];
lean_object* v_a_6808_ = _args[13];
lean_object* v_a_6809_ = _args[14];
lean_object* v_a_6810_ = _args[15];
lean_object* v_a_6811_ = _args[16];
lean_object* v_a_6812_ = _args[17];
_start:
{
uint8_t v_isRec_boxed_6813_; uint8_t v_stopAtFirstFailure_boxed_6814_; uint8_t v_compress_boxed_6815_; lean_object* v_res_6816_; 
v_isRec_boxed_6813_ = lean_unbox(v_isRec_6797_);
v_stopAtFirstFailure_boxed_6814_ = lean_unbox(v_stopAtFirstFailure_6798_);
v_compress_boxed_6815_ = lean_unbox(v_compress_6799_);
v_res_6816_ = l_Lean_Meta_Grind_Action_splitCore___redArg(v_c_6795_, v_numCases_6796_, v_isRec_boxed_6813_, v_stopAtFirstFailure_boxed_6814_, v_compress_boxed_6815_, v_candidates_x3f_6800_, v_goal_6801_, v_kp_6802_, v_a_6803_, v_a_6804_, v_a_6805_, v_a_6806_, v_a_6807_, v_a_6808_, v_a_6809_, v_a_6810_, v_a_6811_);
lean_dec(v_a_6811_);
lean_dec_ref(v_a_6810_);
lean_dec(v_a_6809_);
lean_dec_ref(v_a_6808_);
lean_dec(v_a_6807_);
lean_dec_ref(v_a_6806_);
lean_dec(v_a_6805_);
lean_dec_ref(v_a_6804_);
lean_dec(v_a_6803_);
return v_res_6816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore(lean_object* v_c_6817_, lean_object* v_numCases_6818_, uint8_t v_isRec_6819_, uint8_t v_stopAtFirstFailure_6820_, uint8_t v_compress_6821_, lean_object* v_candidates_x3f_6822_, lean_object* v_goal_6823_, lean_object* v_x_6824_, lean_object* v_kp_6825_, lean_object* v_a_6826_, lean_object* v_a_6827_, lean_object* v_a_6828_, lean_object* v_a_6829_, lean_object* v_a_6830_, lean_object* v_a_6831_, lean_object* v_a_6832_, lean_object* v_a_6833_, lean_object* v_a_6834_){
_start:
{
lean_object* v___x_6836_; 
v___x_6836_ = l_Lean_Meta_Grind_Action_splitCore___redArg(v_c_6817_, v_numCases_6818_, v_isRec_6819_, v_stopAtFirstFailure_6820_, v_compress_6821_, v_candidates_x3f_6822_, v_goal_6823_, v_kp_6825_, v_a_6826_, v_a_6827_, v_a_6828_, v_a_6829_, v_a_6830_, v_a_6831_, v_a_6832_, v_a_6833_, v_a_6834_);
return v___x_6836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitCore___boxed(lean_object** _args){
lean_object* v_c_6837_ = _args[0];
lean_object* v_numCases_6838_ = _args[1];
lean_object* v_isRec_6839_ = _args[2];
lean_object* v_stopAtFirstFailure_6840_ = _args[3];
lean_object* v_compress_6841_ = _args[4];
lean_object* v_candidates_x3f_6842_ = _args[5];
lean_object* v_goal_6843_ = _args[6];
lean_object* v_x_6844_ = _args[7];
lean_object* v_kp_6845_ = _args[8];
lean_object* v_a_6846_ = _args[9];
lean_object* v_a_6847_ = _args[10];
lean_object* v_a_6848_ = _args[11];
lean_object* v_a_6849_ = _args[12];
lean_object* v_a_6850_ = _args[13];
lean_object* v_a_6851_ = _args[14];
lean_object* v_a_6852_ = _args[15];
lean_object* v_a_6853_ = _args[16];
lean_object* v_a_6854_ = _args[17];
lean_object* v_a_6855_ = _args[18];
_start:
{
uint8_t v_isRec_boxed_6856_; uint8_t v_stopAtFirstFailure_boxed_6857_; uint8_t v_compress_boxed_6858_; lean_object* v_res_6859_; 
v_isRec_boxed_6856_ = lean_unbox(v_isRec_6839_);
v_stopAtFirstFailure_boxed_6857_ = lean_unbox(v_stopAtFirstFailure_6840_);
v_compress_boxed_6858_ = lean_unbox(v_compress_6841_);
v_res_6859_ = l_Lean_Meta_Grind_Action_splitCore(v_c_6837_, v_numCases_6838_, v_isRec_boxed_6856_, v_stopAtFirstFailure_boxed_6857_, v_compress_boxed_6858_, v_candidates_x3f_6842_, v_goal_6843_, v_x_6844_, v_kp_6845_, v_a_6846_, v_a_6847_, v_a_6848_, v_a_6849_, v_a_6850_, v_a_6851_, v_a_6852_, v_a_6853_, v_a_6854_);
lean_dec(v_a_6854_);
lean_dec_ref(v_a_6853_);
lean_dec(v_a_6852_);
lean_dec_ref(v_a_6851_);
lean_dec(v_a_6850_);
lean_dec_ref(v_a_6849_);
lean_dec(v_a_6848_);
lean_dec_ref(v_a_6847_);
lean_dec(v_a_6846_);
lean_dec_ref(v_x_6844_);
return v_res_6859_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3(lean_object* v_kp_6860_, lean_object* v_a_6861_, lean_object* v_goal_6862_, lean_object* v___x_6863_, lean_object* v_snd_6864_, lean_object* v___x_6865_, uint8_t v_stopAtFirstFailure_6866_, lean_object* v___x_6867_, lean_object* v_as_6868_, lean_object* v_as_x27_6869_, lean_object* v_b_6870_, lean_object* v_a_6871_, lean_object* v___y_6872_, lean_object* v___y_6873_, lean_object* v___y_6874_, lean_object* v___y_6875_, lean_object* v___y_6876_, lean_object* v___y_6877_, lean_object* v___y_6878_, lean_object* v___y_6879_, lean_object* v___y_6880_){
_start:
{
lean_object* v___x_6882_; 
v___x_6882_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___redArg(v_kp_6860_, v_a_6861_, v_goal_6862_, v___x_6863_, v_snd_6864_, v___x_6865_, v_stopAtFirstFailure_6866_, v___x_6867_, v_as_x27_6869_, v_b_6870_, v___y_6872_, v___y_6873_, v___y_6874_, v___y_6875_, v___y_6876_, v___y_6877_, v___y_6878_, v___y_6879_, v___y_6880_);
return v___x_6882_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3___boxed(lean_object** _args){
lean_object* v_kp_6883_ = _args[0];
lean_object* v_a_6884_ = _args[1];
lean_object* v_goal_6885_ = _args[2];
lean_object* v___x_6886_ = _args[3];
lean_object* v_snd_6887_ = _args[4];
lean_object* v___x_6888_ = _args[5];
lean_object* v_stopAtFirstFailure_6889_ = _args[6];
lean_object* v___x_6890_ = _args[7];
lean_object* v_as_6891_ = _args[8];
lean_object* v_as_x27_6892_ = _args[9];
lean_object* v_b_6893_ = _args[10];
lean_object* v_a_6894_ = _args[11];
lean_object* v___y_6895_ = _args[12];
lean_object* v___y_6896_ = _args[13];
lean_object* v___y_6897_ = _args[14];
lean_object* v___y_6898_ = _args[15];
lean_object* v___y_6899_ = _args[16];
lean_object* v___y_6900_ = _args[17];
lean_object* v___y_6901_ = _args[18];
lean_object* v___y_6902_ = _args[19];
lean_object* v___y_6903_ = _args[20];
lean_object* v___y_6904_ = _args[21];
_start:
{
uint8_t v_stopAtFirstFailure_boxed_6905_; lean_object* v_res_6906_; 
v_stopAtFirstFailure_boxed_6905_ = lean_unbox(v_stopAtFirstFailure_6889_);
v_res_6906_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Action_splitCore_spec__3(v_kp_6883_, v_a_6884_, v_goal_6885_, v___x_6886_, v_snd_6887_, v___x_6888_, v_stopAtFirstFailure_boxed_6905_, v___x_6890_, v_as_6891_, v_as_x27_6892_, v_b_6893_, v_a_6894_, v___y_6895_, v___y_6896_, v___y_6897_, v___y_6898_, v___y_6899_, v___y_6900_, v___y_6901_, v___y_6902_, v___y_6903_);
lean_dec(v___y_6903_);
lean_dec_ref(v___y_6902_);
lean_dec(v___y_6901_);
lean_dec_ref(v___y_6900_);
lean_dec(v___y_6899_);
lean_dec_ref(v___y_6898_);
lean_dec(v___y_6897_);
lean_dec_ref(v___y_6896_);
lean_dec(v___y_6895_);
lean_dec(v_as_x27_6892_);
lean_dec(v_as_6891_);
lean_dec_ref(v___x_6890_);
lean_dec(v___x_6886_);
return v_res_6906_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4(lean_object* v_mvarId_6907_, lean_object* v_val_6908_, lean_object* v___y_6909_, lean_object* v___y_6910_, lean_object* v___y_6911_, lean_object* v___y_6912_, lean_object* v___y_6913_, lean_object* v___y_6914_, lean_object* v___y_6915_, lean_object* v___y_6916_, lean_object* v___y_6917_){
_start:
{
lean_object* v___x_6919_; 
v___x_6919_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___redArg(v_mvarId_6907_, v_val_6908_, v___y_6915_);
return v___x_6919_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4___boxed(lean_object* v_mvarId_6920_, lean_object* v_val_6921_, lean_object* v___y_6922_, lean_object* v___y_6923_, lean_object* v___y_6924_, lean_object* v___y_6925_, lean_object* v___y_6926_, lean_object* v___y_6927_, lean_object* v___y_6928_, lean_object* v___y_6929_, lean_object* v___y_6930_, lean_object* v___y_6931_){
_start:
{
lean_object* v_res_6932_; 
v_res_6932_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4(v_mvarId_6920_, v_val_6921_, v___y_6922_, v___y_6923_, v___y_6924_, v___y_6925_, v___y_6926_, v___y_6927_, v___y_6928_, v___y_6929_, v___y_6930_);
lean_dec(v___y_6930_);
lean_dec_ref(v___y_6929_);
lean_dec(v___y_6928_);
lean_dec_ref(v___y_6927_);
lean_dec(v___y_6926_);
lean_dec_ref(v___y_6925_);
lean_dec(v___y_6924_);
lean_dec_ref(v___y_6923_);
lean_dec(v___y_6922_);
return v_res_6932_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4(lean_object* v_00_u03b2_6933_, lean_object* v_x_6934_, lean_object* v_x_6935_, lean_object* v_x_6936_){
_start:
{
lean_object* v___x_6937_; 
v___x_6937_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4___redArg(v_x_6934_, v_x_6935_, v_x_6936_);
return v___x_6937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5(lean_object* v_00_u03b2_6938_, lean_object* v_x_6939_, size_t v_x_6940_, size_t v_x_6941_, lean_object* v_x_6942_, lean_object* v_x_6943_){
_start:
{
lean_object* v___x_6944_; 
v___x_6944_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___redArg(v_x_6939_, v_x_6940_, v_x_6941_, v_x_6942_, v_x_6943_);
return v___x_6944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5___boxed(lean_object* v_00_u03b2_6945_, lean_object* v_x_6946_, lean_object* v_x_6947_, lean_object* v_x_6948_, lean_object* v_x_6949_, lean_object* v_x_6950_){
_start:
{
size_t v_x_121730__boxed_6951_; size_t v_x_121731__boxed_6952_; lean_object* v_res_6953_; 
v_x_121730__boxed_6951_ = lean_unbox_usize(v_x_6947_);
lean_dec(v_x_6947_);
v_x_121731__boxed_6952_ = lean_unbox_usize(v_x_6948_);
lean_dec(v_x_6948_);
v_res_6953_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5(v_00_u03b2_6945_, v_x_6946_, v_x_121730__boxed_6951_, v_x_121731__boxed_6952_, v_x_6949_, v_x_6950_);
return v_res_6953_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_6954_, lean_object* v_n_6955_, lean_object* v_k_6956_, lean_object* v_v_6957_){
_start:
{
lean_object* v___x_6958_; 
v___x_6958_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6___redArg(v_n_6955_, v_k_6956_, v_v_6957_);
return v___x_6958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7(lean_object* v_00_u03b2_6959_, size_t v_depth_6960_, lean_object* v_keys_6961_, lean_object* v_vals_6962_, lean_object* v_heq_6963_, lean_object* v_i_6964_, lean_object* v_entries_6965_){
_start:
{
lean_object* v___x_6966_; 
v___x_6966_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___redArg(v_depth_6960_, v_keys_6961_, v_vals_6962_, v_i_6964_, v_entries_6965_);
return v___x_6966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7___boxed(lean_object* v_00_u03b2_6967_, lean_object* v_depth_6968_, lean_object* v_keys_6969_, lean_object* v_vals_6970_, lean_object* v_heq_6971_, lean_object* v_i_6972_, lean_object* v_entries_6973_){
_start:
{
size_t v_depth_boxed_6974_; lean_object* v_res_6975_; 
v_depth_boxed_6974_ = lean_unbox_usize(v_depth_6968_);
lean_dec(v_depth_6968_);
v_res_6975_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__7(v_00_u03b2_6967_, v_depth_boxed_6974_, v_keys_6969_, v_vals_6970_, v_heq_6971_, v_i_6972_, v_entries_6973_);
lean_dec_ref(v_vals_6970_);
lean_dec_ref(v_keys_6969_);
return v_res_6975_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_6976_, lean_object* v_x_6977_, lean_object* v_x_6978_, lean_object* v_x_6979_, lean_object* v_x_6980_){
_start:
{
lean_object* v___x_6981_; 
v___x_6981_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_Action_splitCore_spec__4_spec__4_spec__5_spec__6_spec__7___redArg(v_x_6977_, v_x_6978_, v_x_6979_, v_x_6980_);
return v___x_6981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__0(lean_object* v___y_6982_, lean_object* v___y_6983_, lean_object* v___y_6984_, lean_object* v___y_6985_, lean_object* v___y_6986_, lean_object* v___y_6987_, lean_object* v___y_6988_, lean_object* v___y_6989_, lean_object* v___y_6990_, lean_object* v___y_6991_, lean_object* v___y_6992_, lean_object* v___y_6993_){
_start:
{
lean_object* v___x_6995_; 
v___x_6995_ = l_Lean_Meta_Grind_Action_assertAll___redArg(v___y_6982_, v___y_6984_, v___y_6985_, v___y_6986_, v___y_6987_, v___y_6988_, v___y_6989_, v___y_6990_, v___y_6991_, v___y_6992_, v___y_6993_);
return v___x_6995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__0___boxed(lean_object* v___y_6996_, lean_object* v___y_6997_, lean_object* v___y_6998_, lean_object* v___y_6999_, lean_object* v___y_7000_, lean_object* v___y_7001_, lean_object* v___y_7002_, lean_object* v___y_7003_, lean_object* v___y_7004_, lean_object* v___y_7005_, lean_object* v___y_7006_, lean_object* v___y_7007_, lean_object* v___y_7008_){
_start:
{
lean_object* v_res_7009_; 
v_res_7009_ = l_Lean_Meta_Grind_Action_splitNext___lam__0(v___y_6996_, v___y_6997_, v___y_6998_, v___y_6999_, v___y_7000_, v___y_7001_, v___y_7002_, v___y_7003_, v___y_7004_, v___y_7005_, v___y_7006_, v___y_7007_);
lean_dec(v___y_7007_);
lean_dec_ref(v___y_7006_);
lean_dec(v___y_7005_);
lean_dec_ref(v___y_7004_);
lean_dec(v___y_7003_);
lean_dec_ref(v___y_7002_);
lean_dec(v___y_7001_);
lean_dec_ref(v___y_7000_);
lean_dec(v___y_6999_);
lean_dec_ref(v___y_6997_);
return v_res_7009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__1(lean_object* v_goal_7010_, lean_object* v___y_7011_, lean_object* v___y_7012_, lean_object* v___y_7013_, lean_object* v___y_7014_, lean_object* v___y_7015_, lean_object* v___y_7016_, lean_object* v___y_7017_, lean_object* v___y_7018_, lean_object* v___y_7019_){
_start:
{
lean_object* v___x_7021_; lean_object* v___x_7022_; 
v___x_7021_ = lean_st_mk_ref(v_goal_7010_);
v___x_7022_ = l___private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_selectNextSplit_x3f(v___x_7021_, v___y_7011_, v___y_7012_, v___y_7013_, v___y_7014_, v___y_7015_, v___y_7016_, v___y_7017_, v___y_7018_, v___y_7019_);
if (lean_obj_tag(v___x_7022_) == 0)
{
lean_object* v_a_7023_; lean_object* v___x_7025_; uint8_t v_isShared_7026_; uint8_t v_isSharedCheck_7032_; 
v_a_7023_ = lean_ctor_get(v___x_7022_, 0);
v_isSharedCheck_7032_ = !lean_is_exclusive(v___x_7022_);
if (v_isSharedCheck_7032_ == 0)
{
v___x_7025_ = v___x_7022_;
v_isShared_7026_ = v_isSharedCheck_7032_;
goto v_resetjp_7024_;
}
else
{
lean_inc(v_a_7023_);
lean_dec(v___x_7022_);
v___x_7025_ = lean_box(0);
v_isShared_7026_ = v_isSharedCheck_7032_;
goto v_resetjp_7024_;
}
v_resetjp_7024_:
{
lean_object* v___x_7027_; lean_object* v___x_7028_; lean_object* v___x_7030_; 
v___x_7027_ = lean_st_ref_get(v___x_7021_);
lean_dec(v___x_7021_);
v___x_7028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7028_, 0, v_a_7023_);
lean_ctor_set(v___x_7028_, 1, v___x_7027_);
if (v_isShared_7026_ == 0)
{
lean_ctor_set(v___x_7025_, 0, v___x_7028_);
v___x_7030_ = v___x_7025_;
goto v_reusejp_7029_;
}
else
{
lean_object* v_reuseFailAlloc_7031_; 
v_reuseFailAlloc_7031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7031_, 0, v___x_7028_);
v___x_7030_ = v_reuseFailAlloc_7031_;
goto v_reusejp_7029_;
}
v_reusejp_7029_:
{
return v___x_7030_;
}
}
}
else
{
lean_object* v_a_7033_; lean_object* v___x_7035_; uint8_t v_isShared_7036_; uint8_t v_isSharedCheck_7040_; 
lean_dec(v___x_7021_);
v_a_7033_ = lean_ctor_get(v___x_7022_, 0);
v_isSharedCheck_7040_ = !lean_is_exclusive(v___x_7022_);
if (v_isSharedCheck_7040_ == 0)
{
v___x_7035_ = v___x_7022_;
v_isShared_7036_ = v_isSharedCheck_7040_;
goto v_resetjp_7034_;
}
else
{
lean_inc(v_a_7033_);
lean_dec(v___x_7022_);
v___x_7035_ = lean_box(0);
v_isShared_7036_ = v_isSharedCheck_7040_;
goto v_resetjp_7034_;
}
v_resetjp_7034_:
{
lean_object* v___x_7038_; 
if (v_isShared_7036_ == 0)
{
v___x_7038_ = v___x_7035_;
goto v_reusejp_7037_;
}
else
{
lean_object* v_reuseFailAlloc_7039_; 
v_reuseFailAlloc_7039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7039_, 0, v_a_7033_);
v___x_7038_ = v_reuseFailAlloc_7039_;
goto v_reusejp_7037_;
}
v_reusejp_7037_:
{
return v___x_7038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__1___boxed(lean_object* v_goal_7041_, lean_object* v___y_7042_, lean_object* v___y_7043_, lean_object* v___y_7044_, lean_object* v___y_7045_, lean_object* v___y_7046_, lean_object* v___y_7047_, lean_object* v___y_7048_, lean_object* v___y_7049_, lean_object* v___y_7050_, lean_object* v___y_7051_){
_start:
{
lean_object* v_res_7052_; 
v_res_7052_ = l_Lean_Meta_Grind_Action_splitNext___lam__1(v_goal_7041_, v___y_7042_, v___y_7043_, v___y_7044_, v___y_7045_, v___y_7046_, v___y_7047_, v___y_7048_, v___y_7049_, v___y_7050_);
lean_dec(v___y_7050_);
lean_dec_ref(v___y_7049_);
lean_dec(v___y_7048_);
lean_dec_ref(v___y_7047_);
lean_dec(v___y_7046_);
lean_dec_ref(v___y_7045_);
lean_dec(v___y_7044_);
lean_dec_ref(v___y_7043_);
lean_dec(v___y_7042_);
return v_res_7052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__2(lean_object* v___y_7053_, lean_object* v___f_7054_, lean_object* v___y_7055_, lean_object* v___y_7056_, lean_object* v___y_7057_, lean_object* v___y_7058_, lean_object* v___y_7059_, lean_object* v___y_7060_, lean_object* v___y_7061_, lean_object* v___y_7062_, lean_object* v___y_7063_, lean_object* v___y_7064_, lean_object* v___y_7065_, lean_object* v___y_7066_){
_start:
{
lean_object* v___x_7068_; lean_object* v___x_7069_; 
v___x_7068_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_intros___boxed), 14, 1);
lean_closure_set(v___x_7068_, 0, v___y_7053_);
v___x_7069_ = l_Lean_Meta_Grind_Action_andThen(v___x_7068_, v___f_7054_, v___y_7055_, v___y_7056_, v___y_7057_, v___y_7058_, v___y_7059_, v___y_7060_, v___y_7061_, v___y_7062_, v___y_7063_, v___y_7064_, v___y_7065_, v___y_7066_);
return v___x_7069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___lam__2___boxed(lean_object* v___y_7070_, lean_object* v___f_7071_, lean_object* v___y_7072_, lean_object* v___y_7073_, lean_object* v___y_7074_, lean_object* v___y_7075_, lean_object* v___y_7076_, lean_object* v___y_7077_, lean_object* v___y_7078_, lean_object* v___y_7079_, lean_object* v___y_7080_, lean_object* v___y_7081_, lean_object* v___y_7082_, lean_object* v___y_7083_, lean_object* v___y_7084_){
_start:
{
lean_object* v_res_7085_; 
v_res_7085_ = l_Lean_Meta_Grind_Action_splitNext___lam__2(v___y_7070_, v___f_7071_, v___y_7072_, v___y_7073_, v___y_7074_, v___y_7075_, v___y_7076_, v___y_7077_, v___y_7078_, v___y_7079_, v___y_7080_, v___y_7081_, v___y_7082_, v___y_7083_);
lean_dec(v___y_7083_);
lean_dec_ref(v___y_7082_);
lean_dec(v___y_7081_);
lean_dec_ref(v___y_7080_);
lean_dec(v___y_7079_);
lean_dec_ref(v___y_7078_);
lean_dec(v___y_7077_);
lean_dec_ref(v___y_7076_);
lean_dec(v___y_7075_);
return v_res_7085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext(uint8_t v_stopAtFirstFailure_7087_, uint8_t v_compress_7088_, lean_object* v_goal_7089_, lean_object* v_kna_7090_, lean_object* v_kp_7091_, lean_object* v_a_7092_, lean_object* v_a_7093_, lean_object* v_a_7094_, lean_object* v_a_7095_, lean_object* v_a_7096_, lean_object* v_a_7097_, lean_object* v_a_7098_, lean_object* v_a_7099_, lean_object* v_a_7100_){
_start:
{
lean_object* v_toGoalState_7102_; lean_object* v_split_7103_; lean_object* v_mvarId_7104_; lean_object* v_candidates_7105_; lean_object* v___f_7106_; lean_object* v___f_7107_; lean_object* v___x_7108_; 
v_toGoalState_7102_ = lean_ctor_get(v_goal_7089_, 0);
v_split_7103_ = lean_ctor_get(v_toGoalState_7102_, 16);
v_mvarId_7104_ = lean_ctor_get(v_goal_7089_, 1);
lean_inc(v_mvarId_7104_);
v_candidates_7105_ = lean_ctor_get(v_split_7103_, 0);
lean_inc(v_candidates_7105_);
v___f_7106_ = ((lean_object*)(l_Lean_Meta_Grind_Action_splitNext___closed__0));
v___f_7107_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_splitNext___lam__1___boxed), 11, 1);
lean_closure_set(v___f_7107_, 0, v_goal_7089_);
v___x_7108_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Split_0__Lean_Meta_Grind_Action_getFalseProof_x3f_spec__0___redArg(v_mvarId_7104_, v___f_7107_, v_a_7092_, v_a_7093_, v_a_7094_, v_a_7095_, v_a_7096_, v_a_7097_, v_a_7098_, v_a_7099_, v_a_7100_);
if (lean_obj_tag(v___x_7108_) == 0)
{
lean_object* v_a_7109_; lean_object* v_fst_7110_; 
v_a_7109_ = lean_ctor_get(v___x_7108_, 0);
lean_inc(v_a_7109_);
lean_dec_ref_known(v___x_7108_, 1);
v_fst_7110_ = lean_ctor_get(v_a_7109_, 0);
if (lean_obj_tag(v_fst_7110_) == 1)
{
lean_object* v_snd_7111_; lean_object* v_c_7112_; lean_object* v_numCases_7113_; uint8_t v_isRec_7114_; lean_object* v___y_7116_; lean_object* v___x_7124_; lean_object* v___x_7125_; lean_object* v___x_7129_; uint8_t v___x_7130_; 
lean_inc_ref(v_fst_7110_);
v_snd_7111_ = lean_ctor_get(v_a_7109_, 1);
lean_inc(v_snd_7111_);
lean_dec(v_a_7109_);
v_c_7112_ = lean_ctor_get(v_fst_7110_, 0);
lean_inc_ref(v_c_7112_);
v_numCases_7113_ = lean_ctor_get(v_fst_7110_, 1);
lean_inc(v_numCases_7113_);
v_isRec_7114_ = lean_ctor_get_uint8(v_fst_7110_, sizeof(void*)*2);
lean_dec_ref_known(v_fst_7110_, 2);
v___x_7124_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v_c_7112_);
v___x_7125_ = l_Lean_Meta_Grind_Goal_getGeneration(v_snd_7111_, v___x_7124_);
lean_dec_ref(v___x_7124_);
v___x_7129_ = lean_unsigned_to_nat(1u);
v___x_7130_ = lean_nat_dec_lt(v___x_7129_, v_numCases_7113_);
if (v___x_7130_ == 0)
{
if (v_isRec_7114_ == 0)
{
v___y_7116_ = v___x_7125_;
goto v___jp_7115_;
}
else
{
goto v___jp_7126_;
}
}
else
{
goto v___jp_7126_;
}
v___jp_7115_:
{
lean_object* v___f_7117_; lean_object* v___x_7118_; lean_object* v___x_7119_; lean_object* v___x_7120_; lean_object* v___x_7121_; lean_object* v___x_7122_; lean_object* v___x_7123_; 
v___f_7117_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_splitNext___lam__2___boxed), 15, 2);
lean_closure_set(v___f_7117_, 0, v___y_7116_);
lean_closure_set(v___f_7117_, 1, v___f_7106_);
v___x_7118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7118_, 0, v_candidates_7105_);
v___x_7119_ = lean_box(v_isRec_7114_);
v___x_7120_ = lean_box(v_stopAtFirstFailure_7087_);
v___x_7121_ = lean_box(v_compress_7088_);
v___x_7122_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_splitCore___boxed), 19, 6);
lean_closure_set(v___x_7122_, 0, v_c_7112_);
lean_closure_set(v___x_7122_, 1, v_numCases_7113_);
lean_closure_set(v___x_7122_, 2, v___x_7119_);
lean_closure_set(v___x_7122_, 3, v___x_7120_);
lean_closure_set(v___x_7122_, 4, v___x_7121_);
lean_closure_set(v___x_7122_, 5, v___x_7118_);
v___x_7123_ = l_Lean_Meta_Grind_Action_andThen(v___x_7122_, v___f_7117_, v_snd_7111_, v_kna_7090_, v_kp_7091_, v_a_7092_, v_a_7093_, v_a_7094_, v_a_7095_, v_a_7096_, v_a_7097_, v_a_7098_, v_a_7099_, v_a_7100_);
return v___x_7123_;
}
v___jp_7126_:
{
lean_object* v___x_7127_; lean_object* v___x_7128_; 
v___x_7127_ = lean_unsigned_to_nat(1u);
v___x_7128_ = lean_nat_add(v___x_7125_, v___x_7127_);
lean_dec(v___x_7125_);
v___y_7116_ = v___x_7128_;
goto v___jp_7115_;
}
}
else
{
lean_object* v_snd_7131_; lean_object* v___x_7132_; 
lean_dec(v_candidates_7105_);
lean_dec_ref(v_kp_7091_);
v_snd_7131_ = lean_ctor_get(v_a_7109_, 1);
lean_inc(v_snd_7131_);
lean_dec(v_a_7109_);
lean_inc(v_a_7100_);
lean_inc_ref(v_a_7099_);
lean_inc(v_a_7098_);
lean_inc_ref(v_a_7097_);
lean_inc(v_a_7096_);
lean_inc_ref(v_a_7095_);
lean_inc(v_a_7094_);
lean_inc_ref(v_a_7093_);
lean_inc(v_a_7092_);
v___x_7132_ = lean_apply_11(v_kna_7090_, v_snd_7131_, v_a_7092_, v_a_7093_, v_a_7094_, v_a_7095_, v_a_7096_, v_a_7097_, v_a_7098_, v_a_7099_, v_a_7100_, lean_box(0));
return v___x_7132_;
}
}
else
{
lean_object* v_a_7133_; lean_object* v___x_7135_; uint8_t v_isShared_7136_; uint8_t v_isSharedCheck_7140_; 
lean_dec(v_candidates_7105_);
lean_dec_ref(v_kp_7091_);
lean_dec_ref(v_kna_7090_);
v_a_7133_ = lean_ctor_get(v___x_7108_, 0);
v_isSharedCheck_7140_ = !lean_is_exclusive(v___x_7108_);
if (v_isSharedCheck_7140_ == 0)
{
v___x_7135_ = v___x_7108_;
v_isShared_7136_ = v_isSharedCheck_7140_;
goto v_resetjp_7134_;
}
else
{
lean_inc(v_a_7133_);
lean_dec(v___x_7108_);
v___x_7135_ = lean_box(0);
v_isShared_7136_ = v_isSharedCheck_7140_;
goto v_resetjp_7134_;
}
v_resetjp_7134_:
{
lean_object* v___x_7138_; 
if (v_isShared_7136_ == 0)
{
v___x_7138_ = v___x_7135_;
goto v_reusejp_7137_;
}
else
{
lean_object* v_reuseFailAlloc_7139_; 
v_reuseFailAlloc_7139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7139_, 0, v_a_7133_);
v___x_7138_ = v_reuseFailAlloc_7139_;
goto v_reusejp_7137_;
}
v_reusejp_7137_:
{
return v___x_7138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_splitNext___boxed(lean_object* v_stopAtFirstFailure_7141_, lean_object* v_compress_7142_, lean_object* v_goal_7143_, lean_object* v_kna_7144_, lean_object* v_kp_7145_, lean_object* v_a_7146_, lean_object* v_a_7147_, lean_object* v_a_7148_, lean_object* v_a_7149_, lean_object* v_a_7150_, lean_object* v_a_7151_, lean_object* v_a_7152_, lean_object* v_a_7153_, lean_object* v_a_7154_, lean_object* v_a_7155_){
_start:
{
uint8_t v_stopAtFirstFailure_boxed_7156_; uint8_t v_compress_boxed_7157_; lean_object* v_res_7158_; 
v_stopAtFirstFailure_boxed_7156_ = lean_unbox(v_stopAtFirstFailure_7141_);
v_compress_boxed_7157_ = lean_unbox(v_compress_7142_);
v_res_7158_ = l_Lean_Meta_Grind_Action_splitNext(v_stopAtFirstFailure_boxed_7156_, v_compress_boxed_7157_, v_goal_7143_, v_kna_7144_, v_kp_7145_, v_a_7146_, v_a_7147_, v_a_7148_, v_a_7149_, v_a_7150_, v_a_7151_, v_a_7152_, v_a_7153_, v_a_7154_);
lean_dec(v_a_7154_);
lean_dec_ref(v_a_7153_);
lean_dec(v_a_7152_);
lean_dec_ref(v_a_7151_);
lean_dec(v_a_7150_);
lean_dec_ref(v_a_7149_);
lean_dec(v_a_7148_);
lean_dec_ref(v_a_7147_);
lean_dec(v_a_7146_);
return v_res_7158_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_CasesMatch(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_CasesMatch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_instInhabitedSplitStatus_default = _init_l_Lean_Meta_Grind_instInhabitedSplitStatus_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedSplitStatus_default);
l_Lean_Meta_Grind_instInhabitedSplitStatus = _init_l_Lean_Meta_Grind_instInhabitedSplitStatus();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedSplitStatus);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_CasesMatch(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_CasesMatch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Split(builtin);
}
#ifdef __cplusplus
}
#endif
