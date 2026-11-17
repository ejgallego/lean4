// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Intro
// Imports: public import Init.Grind.Lemmas public import Lean.Meta.Tactic.Grind.Action import Lean.Meta.Tactic.Apply import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Tactic.Grind.CasesMatch import Lean.Meta.Tactic.Grind.Injection import Lean.Meta.Tactic.Grind.Core import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.MarkAccessible import Lean.Meta.Tactic.Grind.Anchor import Init.Data.List.MapIdx import Init.Grind.Util
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
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_Queue_dequeue_x3f___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Grind_isEagerSplit___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_setIntroBase(lean_object*, uint64_t);
lean_object* l_Lean_Meta_Grind_Action_group___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_Expr_isLet(lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t l_String_Slice_isNat(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Meta_Grind_getOriginalName_x3f(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_MVarId_intro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerFVarAnchor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
uint8_t l_Lean_Meta_Grind_isMatchCondCandidate(lean_object*);
uint8_t l_Lean_Expr_isBVar(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
lean_object* l_Lean_Meta_Grind_isInterpreted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markAsPreMatchCond(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_Grind_addNewEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_expandLet(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
uint8_t l_Lean_Expr_bindingInfo_x21(lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isArrow(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_simpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_byContra_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addHypothesis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_injection_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markCaseSplitAsResolved(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getAnchor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_saveCases___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_isBuiltinEagerCases(lean_object*);
lean_object* l_Lean_Meta_Grind_cheapCasesOnly___redArg(lean_object*);
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
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_andThen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_ungroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_lastDecl(lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedGoal_default;
lean_object* l_Lean_Meta_Grind_Solvers_mkActionCore();
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newHyp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newHyp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newDepHyp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newDepHyp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newLocal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newLocal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedIntroResult_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedIntroResult_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedIntroResult_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_instInhabitedIntroResult;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "alreadyNorm"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 221, 60, 184, 251, 204, 208, 244)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Int8"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 171, 155, 218, 43, 77, 1, 67)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int16"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 121, 89, 120, 57, 100, 28, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int32"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__4_value),LEAN_SCALAR_PTR_LITERAL(202, 24, 245, 188, 10, 96, 206, 241)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int64"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 100, 38, 50, 157, 43, 83, 90)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__7_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__4_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__5_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPatternLitValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPatternLitValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__0;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__1_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__2_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessHypothesis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessHypothesis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`grind` internal error, binder expected"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "intro_with_eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 88, 152, 82, 213, 6, 119, 183)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "intro_with_eq'"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 115, 213, 198, 106, 77, 45, 3)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__2___boxed(lean_object**);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mpr_prop"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 177, 76, 157, 211, 15, 217, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_applyInjection_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_applyInjection_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_lastDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_lastDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__0(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__0_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Action_intro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_Action_intro___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_intro___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_hugeNumber;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Action_intros___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_intros___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Action_intros___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_intros___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_Action_intros___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_ungroup___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Action_intros___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_intros___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertNext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Solvers_mkAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Solvers_mkAction___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Solvers_mkAction___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Solvers_mkAction___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction();
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 1:
{
lean_object* v_fvarId_7_; lean_object* v_goal_8_; lean_object* v___x_9_; 
v_fvarId_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_fvarId_7_);
v_goal_8_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_goal_8_);
lean_dec_ref_known(v_t_5_, 2);
v___x_9_ = lean_apply_2(v_k_6_, v_fvarId_7_, v_goal_8_);
return v___x_9_;
}
case 3:
{
lean_object* v_fvarId_10_; lean_object* v_goal_11_; lean_object* v___x_12_; 
v_fvarId_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_fvarId_10_);
v_goal_11_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_goal_11_);
lean_dec_ref_known(v_t_5_, 2);
v___x_12_ = lean_apply_2(v_k_6_, v_fvarId_10_, v_goal_11_);
return v___x_12_;
}
default: 
{
lean_object* v_goal_13_; lean_object* v___x_14_; 
v_goal_13_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_goal_13_);
lean_dec_ref(v_t_5_);
v___x_14_ = lean_apply_1(v_k_6_, v_goal_13_);
return v___x_14_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___boxed(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim(v_motive_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_done_elim___redArg(lean_object* v_t_27_, lean_object* v_done_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_27_, v_done_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_done_elim(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_done_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_31_, v_done_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newHyp_elim___redArg(lean_object* v_t_35_, lean_object* v_newHyp_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_35_, v_newHyp_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newHyp_elim(lean_object* v_motive_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_newHyp_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_39_, v_newHyp_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newDepHyp_elim___redArg(lean_object* v_t_43_, lean_object* v_newDepHyp_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_43_, v_newDepHyp_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newDepHyp_elim(lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_newDepHyp_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_47_, v_newDepHyp_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newLocal_elim___redArg(lean_object* v_t_51_, lean_object* v_newLocal_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_51_, v_newLocal_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_newLocal_elim(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_newLocal_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_IntroResult_ctorElim___redArg(v_t_55_, v_newLocal_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedIntroResult_default___closed__0(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = l_Lean_Meta_Grind_instInhabitedGoal_default;
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedIntroResult_default(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedIntroResult_default___closed__0, &l_Lean_Meta_Grind_instInhabitedIntroResult_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedIntroResult_default___closed__0);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_instInhabitedIntroResult(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Meta_Grind_instInhabitedIntroResult_default;
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f(lean_object* v_e_70_){
_start:
{
lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_71_ = l_Lean_Expr_cleanupAnnotations(v_e_70_);
v___x_72_ = l_Lean_Expr_isApp(v___x_71_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
lean_dec_ref(v___x_71_);
v___x_73_ = lean_box(0);
return v___x_73_;
}
else
{
lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_74_ = l_Lean_Expr_appFnCleanup___redArg(v___x_71_);
v___x_75_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___closed__3));
v___x_76_ = l_Lean_Expr_isConstOf(v___x_74_, v___x_75_);
lean_dec_ref(v___x_74_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
lean_dec_ref(v___x_71_);
v___x_77_ = lean_box(0);
return v___x_77_;
}
else
{
lean_object* v_arg_78_; lean_object* v___x_79_; 
v_arg_78_ = lean_ctor_get(v___x_71_, 1);
lean_inc_ref(v_arg_78_);
lean_dec_ref(v___x_71_);
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v_arg_78_);
return v___x_79_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f___boxed(lean_object* v_e_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f(v_e_80_);
lean_dec_ref(v_e_80_);
return v_res_81_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType(lean_object* v_type_94_){
_start:
{
lean_object* v_type_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v_type_95_ = l_Lean_Expr_consumeMData(v_type_94_);
v___x_96_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__1));
v___x_97_ = l_Lean_Expr_isConstOf(v_type_95_, v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__3));
v___x_99_ = l_Lean_Expr_isConstOf(v_type_95_, v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__5));
v___x_101_ = l_Lean_Expr_isConstOf(v_type_95_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___closed__7));
v___x_103_ = l_Lean_Expr_isConstOf(v_type_95_, v___x_102_);
lean_dec_ref(v_type_95_);
return v___x_103_;
}
else
{
lean_dec_ref(v_type_95_);
return v___x_101_;
}
}
else
{
lean_dec_ref(v_type_95_);
return v___x_99_;
}
}
else
{
lean_dec_ref(v_type_95_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType___boxed(lean_object* v_type_104_){
_start:
{
uint8_t v_res_105_; lean_object* v_r_106_; 
v_res_105_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType(v_type_104_);
lean_dec_ref(v_type_104_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue(lean_object* v_e_117_){
_start:
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = l_Lean_Expr_cleanupAnnotations(v_e_117_);
v___x_119_ = l_Lean_Expr_isApp(v___x_118_);
if (v___x_119_ == 0)
{
lean_dec_ref(v___x_118_);
return v___x_119_;
}
else
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = l_Lean_Expr_appFnCleanup___redArg(v___x_118_);
v___x_121_ = l_Lean_Expr_isApp(v___x_120_);
if (v___x_121_ == 0)
{
lean_dec_ref(v___x_120_);
lean_dec_ref(v___x_118_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_122_ = l_Lean_Expr_appFnCleanup___redArg(v___x_120_);
v___x_123_ = l_Lean_Expr_isApp(v___x_122_);
if (v___x_123_ == 0)
{
lean_dec_ref(v___x_122_);
lean_dec_ref(v___x_120_);
lean_dec_ref(v___x_118_);
return v___x_123_;
}
else
{
lean_object* v_arg_124_; lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v_arg_124_ = lean_ctor_get(v___x_122_, 1);
lean_inc_ref(v_arg_124_);
v___x_125_ = l_Lean_Expr_appFnCleanup___redArg(v___x_122_);
lean_dec_ref(v___x_122_);
v___x_126_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__2));
v___x_127_ = l_Lean_Expr_isConstOf(v___x_125_, v___x_126_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; uint8_t v___x_129_; 
lean_dec_ref(v___x_118_);
v___x_128_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__5));
v___x_129_ = l_Lean_Expr_isConstOf(v___x_125_, v___x_128_);
lean_dec_ref(v___x_125_);
if (v___x_129_ == 0)
{
lean_dec_ref(v_arg_124_);
lean_dec_ref(v___x_120_);
return v___x_129_;
}
else
{
uint8_t v___x_130_; 
v___x_130_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType(v_arg_124_);
lean_dec_ref(v_arg_124_);
if (v___x_130_ == 0)
{
lean_dec_ref(v___x_120_);
return v___x_130_;
}
else
{
lean_object* v_arg_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v_arg_131_ = lean_ctor_get(v___x_120_, 1);
lean_inc_ref(v_arg_131_);
lean_dec_ref(v___x_120_);
v___x_132_ = l_Lean_Expr_consumeMData(v_arg_131_);
lean_dec_ref(v_arg_131_);
v___x_133_ = l_Lean_Expr_isRawNatLit(v___x_132_);
lean_dec_ref(v___x_132_);
return v___x_133_;
}
}
}
else
{
lean_object* v_arg_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
lean_dec_ref(v___x_125_);
lean_dec_ref(v___x_120_);
v_arg_134_ = lean_ctor_get(v___x_118_, 1);
lean_inc_ref(v_arg_134_);
lean_dec_ref(v___x_118_);
v___x_135_ = l_Lean_Expr_cleanupAnnotations(v_arg_134_);
lean_dec_ref(v_arg_134_);
v___x_136_ = l_Lean_Expr_isApp(v___x_135_);
if (v___x_136_ == 0)
{
lean_dec_ref(v___x_135_);
lean_dec_ref(v_arg_124_);
return v___x_136_;
}
else
{
lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_137_ = l_Lean_Expr_appFnCleanup___redArg(v___x_135_);
lean_dec_ref(v___x_135_);
v___x_138_ = l_Lean_Expr_isApp(v___x_137_);
if (v___x_138_ == 0)
{
lean_dec_ref(v___x_137_);
lean_dec_ref(v_arg_124_);
return v___x_138_;
}
else
{
lean_object* v___x_139_; uint8_t v___x_140_; 
v___x_139_ = l_Lean_Expr_appFnCleanup___redArg(v___x_137_);
v___x_140_ = l_Lean_Expr_isApp(v___x_139_);
if (v___x_140_ == 0)
{
lean_dec_ref(v___x_139_);
lean_dec_ref(v___x_137_);
lean_dec_ref(v_arg_124_);
return v___x_140_;
}
else
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_141_ = l_Lean_Expr_appFnCleanup___redArg(v___x_139_);
v___x_142_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___closed__5));
v___x_143_ = l_Lean_Expr_isConstOf(v___x_141_, v___x_142_);
lean_dec_ref(v___x_141_);
if (v___x_143_ == 0)
{
lean_dec_ref(v___x_139_);
lean_dec_ref(v___x_137_);
lean_dec_ref(v_arg_124_);
return v___x_143_;
}
else
{
lean_object* v_arg_144_; lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v_arg_144_ = lean_ctor_get(v___x_139_, 1);
lean_inc_ref(v_arg_144_);
lean_dec_ref(v___x_139_);
v___x_145_ = l_Lean_Expr_consumeMData(v_arg_124_);
v___x_146_ = l_Lean_Expr_consumeMData(v_arg_144_);
lean_dec_ref(v_arg_144_);
v___x_147_ = lean_expr_eqv(v___x_145_, v___x_146_);
lean_dec_ref(v___x_146_);
lean_dec_ref(v___x_145_);
if (v___x_147_ == 0)
{
lean_dec_ref(v___x_137_);
lean_dec_ref(v_arg_124_);
return v___x_147_;
}
else
{
uint8_t v___x_148_; 
v___x_148_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue_isSIntType(v_arg_124_);
lean_dec_ref(v_arg_124_);
if (v___x_148_ == 0)
{
lean_dec_ref(v___x_137_);
return v___x_148_;
}
else
{
lean_object* v_arg_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v_arg_149_ = lean_ctor_get(v___x_137_, 1);
lean_inc_ref(v_arg_149_);
lean_dec_ref(v___x_137_);
v___x_150_ = l_Lean_Expr_consumeMData(v_arg_149_);
lean_dec_ref(v_arg_149_);
v___x_151_ = l_Lean_Expr_isRawNatLit(v___x_150_);
lean_dec_ref(v___x_150_);
return v___x_151_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue___boxed(lean_object* v_e_152_){
_start:
{
uint8_t v_res_153_; lean_object* v_r_154_; 
v_res_153_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue(v_e_152_);
lean_dec_ref(v_e_152_);
v_r_154_ = lean_box(v_res_153_);
return v_r_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPatternLitValue(lean_object* v_e_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
uint8_t v___x_165_; 
v___x_165_ = l_Lean_Expr_hasLooseBVars(v_e_155_);
if (v___x_165_ == 0)
{
uint8_t v___x_166_; 
v___x_166_ = l_Lean_Expr_isTrue(v_e_155_);
if (v___x_166_ == 0)
{
uint8_t v___x_167_; 
v___x_167_ = l_Lean_Expr_isFalse(v_e_155_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
lean_inc_ref(v_e_155_);
v___x_168_ = l_Lean_Meta_Grind_isInterpreted(v_e_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_168_) == 0)
{
lean_object* v_a_169_; uint8_t v___x_170_; 
v_a_169_ = lean_ctor_get(v___x_168_, 0);
v___x_170_ = lean_unbox(v_a_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_179_; 
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; 
v_unused_180_ = lean_ctor_get(v___x_168_, 0);
lean_dec(v_unused_180_);
v___x_172_ = v___x_168_;
v_isShared_173_ = v_isSharedCheck_179_;
goto v_resetjp_171_;
}
else
{
lean_dec(v___x_168_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_179_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
uint8_t v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_174_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue(v_e_155_);
lean_dec_ref(v_e_155_);
v___x_175_ = lean_box(v___x_174_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 0, v___x_175_);
v___x_177_ = v___x_172_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
else
{
lean_dec_ref(v_e_155_);
return v___x_168_;
}
}
else
{
lean_dec_ref(v_e_155_);
return v___x_168_;
}
}
else
{
lean_dec_ref(v_e_155_);
goto v___jp_161_;
}
}
else
{
lean_dec_ref(v_e_155_);
goto v___jp_161_;
}
}
else
{
lean_dec_ref(v_e_155_);
goto v___jp_161_;
}
v___jp_161_:
{
uint8_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = 0;
v___x_163_ = lean_box(v___x_162_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPatternLitValue___boxed(lean_object* v_e_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPatternLitValue(v_e_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_);
lean_dec(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
return v_res_187_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__0(void){
_start:
{
lean_object* v___x_191_; lean_object* v_dummy_192_; 
v___x_191_ = lean_box(0);
v_dummy_192_ = l_Lean_Expr_sort___override(v___x_191_);
return v_dummy_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern(lean_object* v_e_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_){
_start:
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = l_Lean_Expr_getAppFn(v_e_198_);
v___x_209_ = l_Lean_Expr_isBVar(v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
lean_inc_ref(v_e_198_);
v___x_210_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPatternLitValue(v_e_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_311_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_311_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_311_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_311_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___y_219_; uint8_t v___x_271_; 
v___x_271_ = lean_unbox(v_a_211_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; 
lean_inc_ref(v_e_198_);
v___x_272_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_198_, v_a_200_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_302_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_302_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_302_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_302_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = l_Lean_Expr_cleanupAnnotations(v_a_273_);
lean_dec(v_a_273_);
v___x_278_ = l_Lean_Expr_isApp(v___x_277_);
if (v___x_278_ == 0)
{
lean_dec_ref(v___x_277_);
lean_del_object(v___x_275_);
v___y_216_ = v_a_199_;
v___y_217_ = v_a_200_;
v___y_218_ = v_a_201_;
v___y_219_ = v_a_202_;
goto v___jp_215_;
}
else
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = l_Lean_Expr_appFnCleanup___redArg(v___x_277_);
v___x_280_ = l_Lean_Expr_isApp(v___x_279_);
if (v___x_280_ == 0)
{
lean_dec_ref(v___x_279_);
lean_dec_ref(v___x_277_);
lean_del_object(v___x_275_);
v___y_216_ = v_a_199_;
v___y_217_ = v_a_200_;
v___y_218_ = v_a_201_;
v___y_219_ = v_a_202_;
goto v___jp_215_;
}
else
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = l_Lean_Expr_appFnCleanup___redArg(v___x_279_);
v___x_282_ = l_Lean_Expr_isApp(v___x_281_);
if (v___x_282_ == 0)
{
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_279_);
lean_dec_ref(v___x_277_);
lean_del_object(v___x_275_);
v___y_216_ = v_a_199_;
v___y_217_ = v_a_200_;
v___y_218_ = v_a_201_;
v___y_219_ = v_a_202_;
goto v___jp_215_;
}
else
{
lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_283_ = l_Lean_Expr_appFnCleanup___redArg(v___x_281_);
lean_dec_ref(v___x_281_);
v___x_284_ = l_Lean_Expr_isApp(v___x_283_);
if (v___x_284_ == 0)
{
lean_dec_ref(v___x_283_);
lean_dec_ref(v___x_279_);
lean_dec_ref(v___x_277_);
lean_del_object(v___x_275_);
v___y_216_ = v_a_199_;
v___y_217_ = v_a_200_;
v___y_218_ = v_a_201_;
v___y_219_ = v_a_202_;
goto v___jp_215_;
}
else
{
lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_285_ = l_Lean_Expr_appFnCleanup___redArg(v___x_283_);
lean_dec_ref(v___x_283_);
v___x_286_ = l_Lean_Expr_isApp(v___x_285_);
if (v___x_286_ == 0)
{
lean_dec_ref(v___x_285_);
lean_dec_ref(v___x_279_);
lean_dec_ref(v___x_277_);
lean_del_object(v___x_275_);
v___y_216_ = v_a_199_;
v___y_217_ = v_a_200_;
v___y_218_ = v_a_201_;
v___y_219_ = v_a_202_;
goto v___jp_215_;
}
else
{
lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_287_ = l_Lean_Expr_appFnCleanup___redArg(v___x_285_);
lean_dec_ref(v___x_285_);
v___x_288_ = l_Lean_Expr_isApp(v___x_287_);
if (v___x_288_ == 0)
{
lean_dec_ref(v___x_287_);
lean_dec_ref(v___x_279_);
lean_dec_ref(v___x_277_);
lean_del_object(v___x_275_);
v___y_216_ = v_a_199_;
v___y_217_ = v_a_200_;
v___y_218_ = v_a_201_;
v___y_219_ = v_a_202_;
goto v___jp_215_;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_289_ = l_Lean_Expr_appFnCleanup___redArg(v___x_287_);
lean_dec_ref(v___x_287_);
v___x_290_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__3));
v___x_291_ = l_Lean_Expr_isConstOf(v___x_289_, v___x_290_);
lean_dec_ref(v___x_289_);
if (v___x_291_ == 0)
{
lean_dec_ref(v___x_279_);
lean_dec_ref(v___x_277_);
lean_del_object(v___x_275_);
v___y_216_ = v_a_199_;
v___y_217_ = v_a_200_;
v___y_218_ = v_a_201_;
v___y_219_ = v_a_202_;
goto v___jp_215_;
}
else
{
lean_object* v_arg_292_; uint8_t v___x_293_; 
lean_del_object(v___x_213_);
lean_dec_ref(v___x_208_);
lean_dec_ref(v_e_198_);
v_arg_292_ = lean_ctor_get(v___x_277_, 1);
lean_inc_ref(v_arg_292_);
lean_dec_ref(v___x_277_);
v___x_293_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isSIntPatternLitValue(v_arg_292_);
if (v___x_293_ == 0)
{
lean_object* v_arg_294_; lean_object* v___x_295_; 
lean_del_object(v___x_275_);
lean_dec(v_a_211_);
v_arg_294_ = lean_ctor_get(v___x_279_, 1);
lean_inc_ref(v_arg_294_);
lean_dec_ref(v___x_279_);
v___x_295_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPatternLitValue(v_arg_292_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; uint8_t v___x_297_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v___x_297_ = lean_unbox(v_a_296_);
if (v___x_297_ == 0)
{
lean_dec_ref(v_arg_294_);
return v___x_295_;
}
else
{
lean_dec_ref_known(v___x_295_, 1);
v_e_198_ = v_arg_294_;
goto _start;
}
}
else
{
lean_dec_ref(v_arg_294_);
return v___x_295_;
}
}
else
{
lean_object* v___x_300_; 
lean_dec_ref(v_arg_292_);
lean_dec_ref(v___x_279_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v_a_211_);
v___x_300_ = v___x_275_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_211_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
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
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_del_object(v___x_213_);
lean_dec(v_a_211_);
lean_dec_ref(v___x_208_);
lean_dec_ref(v_e_198_);
v_a_303_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_272_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_272_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
else
{
lean_del_object(v___x_213_);
lean_dec(v_a_211_);
lean_dec_ref(v___x_208_);
lean_dec_ref(v_e_198_);
goto v___jp_204_;
}
v___jp_215_:
{
if (lean_obj_tag(v___x_208_) == 4)
{
lean_object* v_declName_220_; lean_object* v___x_221_; lean_object* v_env_222_; uint8_t v___x_223_; lean_object* v___x_224_; 
v_declName_220_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_declName_220_);
lean_dec_ref_known(v___x_208_, 2);
v___x_221_ = lean_st_ref_get(v___y_219_);
v_env_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc_ref(v_env_222_);
lean_dec(v___x_221_);
v___x_223_ = lean_unbox(v_a_211_);
v___x_224_ = l_Lean_Environment_find_x3f(v_env_222_, v_declName_220_, v___x_223_);
if (lean_obj_tag(v___x_224_) == 1)
{
lean_object* v_val_225_; 
v_val_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_225_);
lean_dec_ref_known(v___x_224_, 1);
if (lean_obj_tag(v_val_225_) == 6)
{
lean_object* v_val_226_; lean_object* v_numParams_227_; lean_object* v_numFields_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
lean_dec(v_a_211_);
v_val_226_ = lean_ctor_get(v_val_225_, 0);
lean_inc_ref(v_val_226_);
lean_dec_ref_known(v_val_225_, 1);
v_numParams_227_ = lean_ctor_get(v_val_226_, 3);
lean_inc(v_numParams_227_);
v_numFields_228_ = lean_ctor_get(v_val_226_, 4);
lean_inc(v_numFields_228_);
lean_dec_ref(v_val_226_);
v___x_229_ = l_Lean_Expr_getAppNumArgs(v_e_198_);
v___x_230_ = lean_nat_add(v_numParams_227_, v_numFields_228_);
lean_dec(v_numFields_228_);
v___x_231_ = lean_nat_dec_eq(v___x_229_, v___x_230_);
lean_dec(v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_234_; 
lean_dec(v___x_229_);
lean_dec(v_numParams_227_);
lean_dec_ref(v_e_198_);
v___x_232_ = lean_box(v___x_231_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_232_);
v___x_234_ = v___x_213_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
else
{
lean_object* v_dummy_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
lean_del_object(v___x_213_);
v_dummy_236_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__0, &l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___closed__0);
lean_inc(v___x_229_);
v___x_237_ = lean_mk_array(v___x_229_, v_dummy_236_);
v___x_238_ = lean_unsigned_to_nat(1u);
v___x_239_ = lean_nat_sub(v___x_229_, v___x_238_);
lean_dec(v___x_229_);
v___x_240_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_198_, v___x_237_, v___x_239_);
v___x_241_ = lean_array_get_size(v___x_240_);
v___x_242_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg___closed__0));
v___x_243_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg(v___x_241_, v___x_240_, v_numParams_227_, v___x_242_, v___y_216_, v___y_217_, v___y_218_, v___y_219_);
lean_dec_ref(v___x_240_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_253_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_253_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_253_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_253_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v_fst_248_; 
v_fst_248_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_fst_248_);
lean_dec(v_a_244_);
if (lean_obj_tag(v_fst_248_) == 0)
{
lean_del_object(v___x_246_);
goto v___jp_204_;
}
else
{
lean_object* v_val_249_; lean_object* v___x_251_; 
v_val_249_ = lean_ctor_get(v_fst_248_, 0);
lean_inc(v_val_249_);
lean_dec_ref_known(v_fst_248_, 1);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 0, v_val_249_);
v___x_251_ = v___x_246_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_val_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
v_a_254_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_243_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_243_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
else
{
lean_object* v___x_263_; 
lean_dec(v_val_225_);
lean_dec_ref(v_e_198_);
if (v_isShared_214_ == 0)
{
v___x_263_ = v___x_213_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_211_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v___x_266_; 
lean_dec(v___x_224_);
lean_dec_ref(v_e_198_);
if (v_isShared_214_ == 0)
{
v___x_266_ = v___x_213_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_211_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
else
{
lean_object* v___x_269_; 
lean_dec_ref(v___x_208_);
lean_dec_ref(v_e_198_);
if (v_isShared_214_ == 0)
{
v___x_269_ = v___x_213_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_211_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_208_);
lean_dec_ref(v_e_198_);
return v___x_210_;
}
}
else
{
lean_dec_ref(v___x_208_);
lean_dec_ref(v_e_198_);
goto v___jp_204_;
}
v___jp_204_:
{
uint8_t v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = 1;
v___x_206_ = lean_box(v___x_205_);
v___x_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg(lean_object* v_upperBound_312_, lean_object* v___x_313_, lean_object* v_a_314_, lean_object* v_b_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
uint8_t v___x_321_; 
v___x_321_ = lean_nat_dec_lt(v_a_314_, v_upperBound_312_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; 
lean_dec(v_a_314_);
v___x_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_322_, 0, v_b_315_);
return v___x_322_;
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
lean_dec_ref(v_b_315_);
v___x_323_ = l_Lean_instInhabitedExpr;
v___x_324_ = lean_box(0);
v___x_325_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg___closed__0));
v___x_326_ = lean_array_get_borrowed(v___x_323_, v___x_313_, v_a_314_);
lean_inc(v___x_326_);
v___x_327_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern(v___x_326_, v___y_316_, v___y_317_, v___y_318_, v___y_319_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_341_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_341_ == 0)
{
v___x_330_ = v___x_327_;
v_isShared_331_ = v_isSharedCheck_341_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_341_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
uint8_t v___x_332_; 
v___x_332_ = lean_unbox(v_a_328_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
lean_dec(v_a_314_);
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v_a_328_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_324_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_334_);
v___x_336_ = v___x_330_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; 
lean_del_object(v___x_330_);
lean_dec(v_a_328_);
v___x_338_ = lean_unsigned_to_nat(1u);
v___x_339_ = lean_nat_add(v_a_314_, v___x_338_);
lean_dec(v_a_314_);
v_a_314_ = v___x_339_;
v_b_315_ = v___x_325_;
goto _start;
}
}
}
else
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec(v_a_314_);
v_a_342_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_327_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_327_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg___boxed(lean_object* v_upperBound_350_, lean_object* v___x_351_, lean_object* v_a_352_, lean_object* v_b_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg(v_upperBound_350_, v___x_351_, v_a_352_, v_b_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec_ref(v___x_351_);
lean_dec(v_upperBound_350_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern___boxed(lean_object* v_e_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern(v_e_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec(v_a_362_);
lean_dec_ref(v_a_361_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0(lean_object* v_upperBound_367_, lean_object* v___x_368_, lean_object* v_inst_369_, lean_object* v_R_370_, lean_object* v_a_371_, lean_object* v_b_372_, lean_object* v_c_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___redArg(v_upperBound_367_, v___x_368_, v_a_371_, v_b_372_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0___boxed(lean_object* v_upperBound_380_, lean_object* v___x_381_, lean_object* v_inst_382_, lean_object* v_R_383_, lean_object* v_a_384_, lean_object* v_b_385_, lean_object* v_c_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern_spec__0(v_upperBound_380_, v___x_381_, v_inst_382_, v_R_383_, v_a_384_, v_b_385_, v_c_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec_ref(v___x_381_);
lean_dec(v_upperBound_380_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go(lean_object* v_e_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
if (lean_obj_tag(v_e_399_) == 7)
{
lean_object* v_binderType_405_; lean_object* v_body_406_; lean_object* v_rhs_408_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___y_411_; lean_object* v___y_412_; lean_object* v___x_417_; 
v_binderType_405_ = lean_ctor_get(v_e_399_, 1);
lean_inc_ref(v_binderType_405_);
v_body_406_ = lean_ctor_get(v_e_399_, 2);
lean_inc_ref(v_body_406_);
lean_dec_ref_known(v_e_399_, 3);
v___x_417_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_405_, v_a_401_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_417_, 1);
v___x_419_ = l_Lean_Expr_cleanupAnnotations(v_a_418_);
lean_dec(v_a_418_);
v___x_420_ = l_Lean_Expr_isApp(v___x_419_);
if (v___x_420_ == 0)
{
lean_dec_ref(v___x_419_);
v_e_399_ = v_body_406_;
goto _start;
}
else
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = l_Lean_Expr_appFnCleanup___redArg(v___x_419_);
v___x_423_ = l_Lean_Expr_isApp(v___x_422_);
if (v___x_423_ == 0)
{
lean_dec_ref(v___x_422_);
lean_dec_ref(v___x_419_);
v_e_399_ = v_body_406_;
goto _start;
}
else
{
lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_425_ = l_Lean_Expr_appFnCleanup___redArg(v___x_422_);
lean_dec_ref(v___x_422_);
v___x_426_ = l_Lean_Expr_isApp(v___x_425_);
if (v___x_426_ == 0)
{
lean_dec_ref(v___x_425_);
lean_dec_ref(v___x_419_);
v_e_399_ = v_body_406_;
goto _start;
}
else
{
lean_object* v_arg_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v_arg_428_ = lean_ctor_get(v___x_419_, 1);
lean_inc_ref(v_arg_428_);
lean_dec_ref(v___x_419_);
v___x_429_ = l_Lean_Expr_appFnCleanup___redArg(v___x_425_);
lean_dec_ref(v___x_425_);
v___x_430_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__1));
v___x_431_ = l_Lean_Expr_isConstOf(v___x_429_, v___x_430_);
if (v___x_431_ == 0)
{
uint8_t v___x_432_; 
v___x_432_ = l_Lean_Expr_isApp(v___x_429_);
if (v___x_432_ == 0)
{
lean_dec_ref(v___x_429_);
lean_dec_ref(v_arg_428_);
v_e_399_ = v_body_406_;
goto _start;
}
else
{
lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v___x_434_ = l_Lean_Expr_appFnCleanup___redArg(v___x_429_);
lean_dec_ref(v___x_429_);
v___x_435_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___closed__3));
v___x_436_ = l_Lean_Expr_isConstOf(v___x_434_, v___x_435_);
lean_dec_ref(v___x_434_);
if (v___x_436_ == 0)
{
lean_dec_ref(v_arg_428_);
v_e_399_ = v_body_406_;
goto _start;
}
else
{
v_rhs_408_ = v_arg_428_;
v___y_409_ = v_a_400_;
v___y_410_ = v_a_401_;
v___y_411_ = v_a_402_;
v___y_412_ = v_a_403_;
goto v___jp_407_;
}
}
}
else
{
lean_dec_ref(v___x_429_);
v_rhs_408_ = v_arg_428_;
v___y_409_ = v_a_400_;
v___y_410_ = v_a_401_;
v___y_411_ = v_a_402_;
v___y_412_ = v_a_403_;
goto v___jp_407_;
}
}
}
}
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec_ref(v_body_406_);
v_a_438_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_417_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_417_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
v___jp_407_:
{
lean_object* v___x_413_; 
v___x_413_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isPattern(v_rhs_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; uint8_t v___x_415_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
v___x_415_ = lean_unbox(v_a_414_);
if (v___x_415_ == 0)
{
lean_dec_ref(v_body_406_);
return v___x_413_;
}
else
{
lean_dec_ref_known(v___x_413_, 1);
v_e_399_ = v_body_406_;
v_a_400_ = v___y_409_;
v_a_401_ = v___y_410_;
v_a_402_ = v___y_411_;
v_a_403_ = v___y_412_;
goto _start;
}
}
else
{
lean_dec_ref(v_body_406_);
return v___x_413_;
}
}
}
else
{
uint8_t v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec_ref(v_e_399_);
v___x_446_ = 1;
v___x_447_ = lean_box(v___x_446_);
v___x_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
return v___x_448_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go___boxed(lean_object* v_e_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go(v_e_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
lean_dec(v_a_451_);
lean_dec_ref(v_a_450_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp(lean_object* v_e_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
uint8_t v___x_462_; 
v___x_462_ = l_Lean_Meta_Grind_isMatchCondCandidate(v_e_456_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec_ref(v_e_456_);
v___x_463_ = lean_box(v___x_462_);
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
return v___x_464_;
}
else
{
lean_object* v___x_465_; 
v___x_465_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp_go(v_e_456_, v_a_457_, v_a_458_, v_a_459_, v_a_460_);
return v___x_465_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp___boxed(lean_object* v_e_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp(v_e_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessHypothesis(lean_object* v_e_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_){
_start:
{
lean_object* v___x_485_; 
lean_inc_ref(v_e_473_);
v___x_485_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isMatchCondHyp(v_e_473_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; uint8_t v___x_487_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_486_);
lean_dec_ref_known(v___x_485_, 1);
v___x_487_ = lean_unbox(v_a_486_);
lean_dec(v_a_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; 
v___x_488_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isAlreadyNorm_x3f(v_e_473_);
if (lean_obj_tag(v___x_488_) == 1)
{
lean_object* v_val_489_; lean_object* v___x_490_; 
lean_dec_ref(v_e_473_);
v_val_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_val_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = l_Lean_Meta_Sym_canon(v_val_489_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v___x_492_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v___x_492_ = l_Lean_Meta_Sym_shareCommon(v_a_491_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_503_; 
v_a_493_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_503_ == 0)
{
v___x_495_ = v___x_492_;
v_isShared_496_ = v_isSharedCheck_503_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_492_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_503_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; uint8_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_501_; 
v___x_497_ = lean_box(0);
v___x_498_ = 1;
v___x_499_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_499_, 0, v_a_493_);
lean_ctor_set(v___x_499_, 1, v___x_497_);
lean_ctor_set_uint8(v___x_499_, sizeof(void*)*2, v___x_498_);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_499_);
v___x_501_ = v___x_495_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_499_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
else
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
v_a_504_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_492_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_492_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
v_a_512_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_490_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_490_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
else
{
lean_object* v___x_520_; 
lean_dec(v___x_488_);
lean_inc(v_a_483_);
lean_inc_ref(v_a_482_);
lean_inc(v_a_481_);
lean_inc_ref(v_a_480_);
lean_inc(v_a_479_);
lean_inc_ref(v_a_478_);
lean_inc(v_a_477_);
lean_inc_ref(v_a_476_);
lean_inc(v_a_475_);
lean_inc(v_a_474_);
v___x_520_ = lean_grind_preprocess(v_e_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
return v___x_520_;
}
}
else
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = l_Lean_Meta_Grind_markAsPreMatchCond(v_e_473_);
lean_inc(v_a_483_);
lean_inc_ref(v_a_482_);
lean_inc(v_a_481_);
lean_inc_ref(v_a_480_);
lean_inc(v_a_479_);
lean_inc_ref(v_a_478_);
lean_inc(v_a_477_);
lean_inc_ref(v_a_476_);
lean_inc(v_a_475_);
lean_inc(v_a_474_);
v___x_522_ = lean_grind_preprocess(v___x_521_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
return v___x_522_;
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec_ref(v_e_473_);
v_a_523_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_485_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_485_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessHypothesis___boxed(lean_object* v_e_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lean_Meta_Grind_preprocessHypothesis(v_e_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_);
lean_dec(v_a_541_);
lean_dec_ref(v_a_540_);
lean_dec(v_a_539_);
lean_dec_ref(v_a_538_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
lean_dec(v_a_535_);
lean_dec_ref(v_a_534_);
lean_dec(v_a_533_);
lean_dec(v_a_532_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___redArg(lean_object* v___x_544_, lean_object* v_str_545_, lean_object* v_a_546_, lean_object* v_b_547_){
_start:
{
uint8_t v_decide_548_; 
v_decide_548_ = lean_nat_dec_eq(v_a_546_, v___x_544_);
if (v_decide_548_ == 0)
{
uint32_t v___x_549_; uint32_t v___x_550_; uint8_t v___x_551_; 
v___x_549_ = lean_string_utf8_get_fast(v_str_545_, v_a_546_);
v___x_550_ = 95;
v___x_551_ = lean_uint32_dec_eq(v___x_549_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_box(0);
v___x_553_ = lean_string_utf8_next_fast(v_str_545_, v_a_546_);
lean_dec(v_a_546_);
v_a_546_ = v___x_553_;
v_b_547_ = v___x_552_;
goto _start;
}
else
{
lean_object* v___x_555_; 
v___x_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_555_, 0, v_a_546_);
return v___x_555_;
}
}
else
{
lean_dec(v_a_546_);
lean_inc(v_b_547_);
return v_b_547_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___redArg___boxed(lean_object* v___x_556_, lean_object* v_str_557_, lean_object* v_a_558_, lean_object* v_b_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___redArg(v___x_556_, v_str_557_, v_a_558_, v_b_559_);
lean_dec(v_b_559_);
lean_dec_ref(v_str_557_);
lean_dec(v___x_556_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName(lean_object* v_name_567_, lean_object* v_type_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; 
if (lean_obj_tag(v_name_567_) == 1)
{
lean_object* v_str_602_; lean_object* v___y_604_; lean_object* v_searcher_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v_str_602_ = lean_ctor_get(v_name_567_, 1);
lean_inc_ref(v_str_602_);
lean_dec_ref_known(v_name_567_, 2);
v_searcher_622_ = lean_unsigned_to_nat(0u);
v___x_623_ = lean_string_utf8_byte_size(v_str_602_);
v___x_624_ = lean_box(0);
v___x_625_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___redArg(v___x_623_, v_str_602_, v_searcher_622_, v___x_624_);
if (lean_obj_tag(v___x_625_) == 0)
{
v___y_604_ = v___x_623_;
goto v___jp_603_;
}
else
{
lean_object* v_val_626_; 
v_val_626_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_val_626_);
lean_dec_ref_known(v___x_625_, 1);
v___y_604_ = v_val_626_;
goto v___jp_603_;
}
v___jp_603_:
{
lean_object* v___x_605_; uint8_t v_decide_606_; 
v___x_605_ = lean_string_utf8_byte_size(v_str_602_);
v_decide_606_ = lean_nat_dec_eq(v___y_604_, v___x_605_);
if (v_decide_606_ == 0)
{
lean_object* v___x_607_; lean_object* v_suffix_608_; uint8_t v___x_609_; 
v___x_607_ = lean_string_utf8_next_fast(v_str_602_, v___y_604_);
lean_inc_ref(v_str_602_);
v_suffix_608_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_suffix_608_, 0, v_str_602_);
lean_ctor_set(v_suffix_608_, 1, v___x_607_);
lean_ctor_set(v_suffix_608_, 2, v___x_605_);
v___x_609_ = l_String_Slice_isNat(v_suffix_608_);
lean_dec_ref_known(v_suffix_608_, 3);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
lean_dec(v___y_604_);
lean_dec_ref(v_type_568_);
v___x_610_ = lean_box(0);
v___x_611_ = l_Lean_Name_str___override(v___x_610_, v_str_602_);
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
else
{
lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_613_ = lean_unsigned_to_nat(0u);
v___x_614_ = lean_nat_dec_eq(v___y_604_, v___x_613_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
lean_dec_ref(v_type_568_);
v___x_615_ = lean_string_utf8_extract_fast(v_str_602_, v___x_613_, v___y_604_);
lean_dec(v___y_604_);
lean_dec_ref(v_str_602_);
v___x_616_ = lean_box(0);
v___x_617_ = l_Lean_Name_str___override(v___x_616_, v___x_615_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
return v___x_618_;
}
else
{
lean_dec(v___y_604_);
lean_dec_ref(v_str_602_);
v___y_575_ = v_a_569_;
v___y_576_ = v_a_570_;
v___y_577_ = v_a_571_;
v___y_578_ = v_a_572_;
goto v___jp_574_;
}
}
}
else
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
lean_dec(v___y_604_);
lean_dec_ref(v_type_568_);
v___x_619_ = lean_box(0);
v___x_620_ = l_Lean_Name_str___override(v___x_619_, v_str_602_);
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
}
}
else
{
lean_dec(v_name_567_);
v___y_575_ = v_a_569_;
v___y_576_ = v_a_570_;
v___y_577_ = v_a_571_;
v___y_578_ = v_a_572_;
goto v___jp_574_;
}
v___jp_574_:
{
lean_object* v___x_579_; 
v___x_579_ = l_Lean_Meta_isProp(v_type_568_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_593_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_593_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_593_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_593_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
uint8_t v___x_584_; 
v___x_584_ = lean_unbox(v_a_580_);
lean_dec(v_a_580_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_585_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__1));
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_585_);
v___x_587_ = v___x_582_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
else
{
lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_589_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__3));
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_589_);
v___x_591_ = v___x_582_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_589_);
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
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
v_a_594_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_579_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_579_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___boxed(lean_object* v_name_627_, lean_object* v_type_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName(v_name_627_, v_type_628_, v_a_629_, v_a_630_, v_a_631_, v_a_632_);
lean_dec(v_a_632_);
lean_dec_ref(v_a_631_);
lean_dec(v_a_630_);
lean_dec_ref(v_a_629_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0(lean_object* v___x_635_, lean_object* v___x_636_, lean_object* v_str_637_, lean_object* v_inst_638_, lean_object* v_R_639_, lean_object* v_a_640_, lean_object* v_b_641_, lean_object* v_c_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___redArg(v___x_635_, v_str_637_, v_a_640_, v_b_641_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0___boxed(lean_object* v___x_644_, lean_object* v___x_645_, lean_object* v_str_646_, lean_object* v_inst_647_, lean_object* v_R_648_, lean_object* v_a_649_, lean_object* v_b_650_, lean_object* v_c_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName_spec__0(v___x_644_, v___x_645_, v_str_646_, v_inst_647_, v_R_648_, v_a_649_, v_b_650_, v_c_651_);
lean_dec(v_b_650_);
lean_dec_ref(v_str_646_);
lean_dec_ref(v___x_645_);
lean_dec(v___x_644_);
return v_res_652_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___redArg(lean_object* v_keys_653_, lean_object* v_i_654_, lean_object* v_k_655_){
_start:
{
lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_656_ = lean_array_get_size(v_keys_653_);
v___x_657_ = lean_nat_dec_lt(v_i_654_, v___x_656_);
if (v___x_657_ == 0)
{
lean_dec(v_i_654_);
return v___x_657_;
}
else
{
lean_object* v_k_x27_658_; uint8_t v___x_659_; 
v_k_x27_658_ = lean_array_fget_borrowed(v_keys_653_, v_i_654_);
v___x_659_ = lean_name_eq(v_k_655_, v_k_x27_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_unsigned_to_nat(1u);
v___x_661_ = lean_nat_add(v_i_654_, v___x_660_);
lean_dec(v_i_654_);
v_i_654_ = v___x_661_;
goto _start;
}
else
{
lean_dec(v_i_654_);
return v___x_657_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_keys_663_, lean_object* v_i_664_, lean_object* v_k_665_){
_start:
{
uint8_t v_res_666_; lean_object* v_r_667_; 
v_res_666_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___redArg(v_keys_663_, v_i_664_, v_k_665_);
lean_dec(v_k_665_);
lean_dec_ref(v_keys_663_);
v_r_667_ = lean_box(v_res_666_);
return v_r_667_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___redArg(lean_object* v_x_668_, size_t v_x_669_, lean_object* v_x_670_){
_start:
{
if (lean_obj_tag(v_x_668_) == 0)
{
lean_object* v_es_671_; lean_object* v___x_672_; size_t v___x_673_; size_t v___x_674_; lean_object* v_j_675_; lean_object* v___x_676_; 
v_es_671_ = lean_ctor_get(v_x_668_, 0);
v___x_672_ = lean_box(2);
v___x_673_ = ((size_t)31ULL);
v___x_674_ = lean_usize_land(v_x_669_, v___x_673_);
v_j_675_ = lean_usize_to_nat(v___x_674_);
v___x_676_ = lean_array_get_borrowed(v___x_672_, v_es_671_, v_j_675_);
lean_dec(v_j_675_);
switch(lean_obj_tag(v___x_676_))
{
case 0:
{
lean_object* v_key_677_; uint8_t v___x_678_; 
v_key_677_ = lean_ctor_get(v___x_676_, 0);
v___x_678_ = lean_name_eq(v_x_670_, v_key_677_);
return v___x_678_;
}
case 1:
{
lean_object* v_node_679_; size_t v___x_680_; size_t v___x_681_; 
v_node_679_ = lean_ctor_get(v___x_676_, 0);
v___x_680_ = ((size_t)5ULL);
v___x_681_ = lean_usize_shift_right(v_x_669_, v___x_680_);
v_x_668_ = v_node_679_;
v_x_669_ = v___x_681_;
goto _start;
}
default: 
{
uint8_t v___x_683_; 
v___x_683_ = 0;
return v___x_683_;
}
}
}
else
{
lean_object* v_ks_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v_ks_684_ = lean_ctor_get(v_x_668_, 0);
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___redArg(v_ks_684_, v___x_685_, v_x_670_);
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___redArg___boxed(lean_object* v_x_687_, lean_object* v_x_688_, lean_object* v_x_689_){
_start:
{
size_t v_x_38218__boxed_690_; uint8_t v_res_691_; lean_object* v_r_692_; 
v_x_38218__boxed_690_ = lean_unbox_usize(v_x_688_);
lean_dec(v_x_688_);
v_res_691_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___redArg(v_x_687_, v_x_38218__boxed_690_, v_x_689_);
lean_dec(v_x_689_);
lean_dec_ref(v_x_687_);
v_r_692_ = lean_box(v_res_691_);
return v_r_692_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___redArg(lean_object* v_x_693_, lean_object* v_x_694_){
_start:
{
uint64_t v___y_696_; 
if (lean_obj_tag(v_x_694_) == 0)
{
uint64_t v___x_699_; 
v___x_699_ = 1723ULL;
v___y_696_ = v___x_699_;
goto v___jp_695_;
}
else
{
uint64_t v_hash_700_; 
v_hash_700_ = lean_ctor_get_uint64(v_x_694_, sizeof(void*)*2);
v___y_696_ = v_hash_700_;
goto v___jp_695_;
}
v___jp_695_:
{
size_t v___x_697_; uint8_t v___x_698_; 
v___x_697_ = lean_uint64_to_usize(v___y_696_);
v___x_698_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___redArg(v_x_693_, v___x_697_, v_x_694_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___redArg___boxed(lean_object* v_x_701_, lean_object* v_x_702_){
_start:
{
uint8_t v_res_703_; lean_object* v_r_704_; 
v_res_703_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___redArg(v_x_701_, v_x_702_);
lean_dec(v_x_702_);
lean_dec_ref(v_x_701_);
v_r_704_ = lean_box(v_res_703_);
return v_r_704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___redArg(lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_snd_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_729_; 
v_snd_709_ = lean_ctor_get(v_a_706_, 1);
v_isSharedCheck_729_ = !lean_is_exclusive(v_a_706_);
if (v_isSharedCheck_729_ == 0)
{
lean_object* v_unused_730_; 
v_unused_730_ = lean_ctor_get(v_a_706_, 0);
lean_dec(v_unused_730_);
v___x_711_ = v_a_706_;
v_isShared_712_ = v_isSharedCheck_729_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_snd_709_);
lean_dec(v_a_706_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_729_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v_toGoalState_717_; lean_object* v_clean_718_; lean_object* v_used_719_; uint8_t v___x_720_; 
lean_inc(v_snd_709_);
lean_inc(v_a_705_);
v___x_713_ = lean_name_append_index_after(v_a_705_, v_snd_709_);
v___x_714_ = lean_unsigned_to_nat(1u);
v___x_715_ = lean_nat_add(v_snd_709_, v___x_714_);
lean_dec(v_snd_709_);
v___x_716_ = lean_st_ref_get(v___y_707_);
v_toGoalState_717_ = lean_ctor_get(v___x_716_, 0);
lean_inc_ref(v_toGoalState_717_);
lean_dec(v___x_716_);
v_clean_718_ = lean_ctor_get(v_toGoalState_717_, 17);
lean_inc_ref(v_clean_718_);
lean_dec_ref(v_toGoalState_717_);
v_used_719_ = lean_ctor_get(v_clean_718_, 0);
lean_inc_ref(v_used_719_);
lean_dec_ref(v_clean_718_);
v___x_720_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___redArg(v_used_719_, v___x_713_);
lean_dec_ref(v_used_719_);
if (v___x_720_ == 0)
{
lean_object* v___x_722_; 
lean_dec(v_a_705_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_715_);
lean_ctor_set(v___x_711_, 0, v___x_713_);
v___x_722_ = v___x_711_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v___x_715_);
v___x_722_ = v_reuseFailAlloc_724_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; 
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
}
else
{
lean_object* v___x_726_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_715_);
lean_ctor_set(v___x_711_, 0, v___x_713_);
v___x_726_ = v___x_711_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v___x_715_);
v___x_726_ = v_reuseFailAlloc_728_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
v_a_706_ = v___x_726_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___redArg___boxed(lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___redArg(v_a_731_, v_a_732_, v___y_733_);
lean_dec(v___y_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_x_736_, lean_object* v_x_737_, lean_object* v_x_738_, lean_object* v_x_739_){
_start:
{
lean_object* v_ks_740_; lean_object* v_vs_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_765_; 
v_ks_740_ = lean_ctor_get(v_x_736_, 0);
v_vs_741_ = lean_ctor_get(v_x_736_, 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v_x_736_);
if (v_isSharedCheck_765_ == 0)
{
v___x_743_ = v_x_736_;
v_isShared_744_ = v_isSharedCheck_765_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_vs_741_);
lean_inc(v_ks_740_);
lean_dec(v_x_736_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_765_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_745_ = lean_array_get_size(v_ks_740_);
v___x_746_ = lean_nat_dec_lt(v_x_737_, v___x_745_);
if (v___x_746_ == 0)
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_750_; 
lean_dec(v_x_737_);
v___x_747_ = lean_array_push(v_ks_740_, v_x_738_);
v___x_748_ = lean_array_push(v_vs_741_, v_x_739_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v___x_748_);
lean_ctor_set(v___x_743_, 0, v___x_747_);
v___x_750_ = v___x_743_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v___x_748_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
else
{
lean_object* v_k_x27_752_; uint8_t v___x_753_; 
v_k_x27_752_ = lean_array_fget_borrowed(v_ks_740_, v_x_737_);
v___x_753_ = lean_name_eq(v_x_738_, v_k_x27_752_);
if (v___x_753_ == 0)
{
lean_object* v___x_755_; 
if (v_isShared_744_ == 0)
{
v___x_755_ = v___x_743_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_ks_740_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v_vs_741_);
v___x_755_ = v_reuseFailAlloc_759_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lean_unsigned_to_nat(1u);
v___x_757_ = lean_nat_add(v_x_737_, v___x_756_);
lean_dec(v_x_737_);
v_x_736_ = v___x_755_;
v_x_737_ = v___x_757_;
goto _start;
}
}
else
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_763_; 
v___x_760_ = lean_array_fset(v_ks_740_, v_x_737_, v_x_738_);
v___x_761_ = lean_array_fset(v_vs_741_, v_x_737_, v_x_739_);
lean_dec(v_x_737_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v___x_761_);
lean_ctor_set(v___x_743_, 0, v___x_760_);
v___x_763_ = v___x_743_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_760_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v___x_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1___redArg(lean_object* v_n_766_, lean_object* v_k_767_, lean_object* v_v_768_){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1_spec__5___redArg(v_n_766_, v___x_769_, v_k_767_, v_v_768_);
return v___x_770_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg(lean_object* v_x_772_, size_t v_x_773_, size_t v_x_774_, lean_object* v_x_775_, lean_object* v_x_776_){
_start:
{
if (lean_obj_tag(v_x_772_) == 0)
{
lean_object* v_es_777_; size_t v___x_778_; size_t v___x_779_; lean_object* v_j_780_; lean_object* v___x_781_; uint8_t v___x_782_; 
v_es_777_ = lean_ctor_get(v_x_772_, 0);
v___x_778_ = ((size_t)31ULL);
v___x_779_ = lean_usize_land(v_x_773_, v___x_778_);
v_j_780_ = lean_usize_to_nat(v___x_779_);
v___x_781_ = lean_array_get_size(v_es_777_);
v___x_782_ = lean_nat_dec_lt(v_j_780_, v___x_781_);
if (v___x_782_ == 0)
{
lean_dec(v_j_780_);
lean_dec(v_x_776_);
lean_dec(v_x_775_);
return v_x_772_;
}
else
{
lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_821_; 
lean_inc_ref(v_es_777_);
v_isSharedCheck_821_ = !lean_is_exclusive(v_x_772_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v_x_772_, 0);
lean_dec(v_unused_822_);
v___x_784_ = v_x_772_;
v_isShared_785_ = v_isSharedCheck_821_;
goto v_resetjp_783_;
}
else
{
lean_dec(v_x_772_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_821_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v_v_786_; lean_object* v___x_787_; lean_object* v_xs_x27_788_; lean_object* v___y_790_; 
v_v_786_ = lean_array_fget(v_es_777_, v_j_780_);
v___x_787_ = lean_box(0);
v_xs_x27_788_ = lean_array_fset(v_es_777_, v_j_780_, v___x_787_);
switch(lean_obj_tag(v_v_786_))
{
case 0:
{
lean_object* v_key_795_; lean_object* v_val_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_806_; 
v_key_795_ = lean_ctor_get(v_v_786_, 0);
v_val_796_ = lean_ctor_get(v_v_786_, 1);
v_isSharedCheck_806_ = !lean_is_exclusive(v_v_786_);
if (v_isSharedCheck_806_ == 0)
{
v___x_798_ = v_v_786_;
v_isShared_799_ = v_isSharedCheck_806_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_val_796_);
lean_inc(v_key_795_);
lean_dec(v_v_786_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_806_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
uint8_t v___x_800_; 
v___x_800_ = lean_name_eq(v_x_775_, v_key_795_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; lean_object* v___x_802_; 
lean_del_object(v___x_798_);
v___x_801_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_795_, v_val_796_, v_x_775_, v_x_776_);
v___x_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
v___y_790_ = v___x_802_;
goto v___jp_789_;
}
else
{
lean_object* v___x_804_; 
lean_dec(v_val_796_);
lean_dec(v_key_795_);
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 1, v_x_776_);
lean_ctor_set(v___x_798_, 0, v_x_775_);
v___x_804_ = v___x_798_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_x_775_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_x_776_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
v___y_790_ = v___x_804_;
goto v___jp_789_;
}
}
}
}
case 1:
{
lean_object* v_node_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_819_; 
v_node_807_ = lean_ctor_get(v_v_786_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v_v_786_);
if (v_isSharedCheck_819_ == 0)
{
v___x_809_ = v_v_786_;
v_isShared_810_ = v_isSharedCheck_819_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_node_807_);
lean_dec(v_v_786_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_819_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
size_t v___x_811_; size_t v___x_812_; size_t v___x_813_; size_t v___x_814_; lean_object* v___x_815_; lean_object* v___x_817_; 
v___x_811_ = ((size_t)5ULL);
v___x_812_ = lean_usize_shift_right(v_x_773_, v___x_811_);
v___x_813_ = ((size_t)1ULL);
v___x_814_ = lean_usize_add(v_x_774_, v___x_813_);
v___x_815_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg(v_node_807_, v___x_812_, v___x_814_, v_x_775_, v_x_776_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_815_);
v___x_817_ = v___x_809_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v___x_815_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
v___y_790_ = v___x_817_;
goto v___jp_789_;
}
}
}
default: 
{
lean_object* v___x_820_; 
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v_x_775_);
lean_ctor_set(v___x_820_, 1, v_x_776_);
v___y_790_ = v___x_820_;
goto v___jp_789_;
}
}
v___jp_789_:
{
lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_791_ = lean_array_fset(v_xs_x27_788_, v_j_780_, v___y_790_);
lean_dec(v_j_780_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 0, v___x_791_);
v___x_793_ = v___x_784_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_791_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
}
else
{
lean_object* v_ks_823_; lean_object* v_vs_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_842_; 
v_ks_823_ = lean_ctor_get(v_x_772_, 0);
v_vs_824_ = lean_ctor_get(v_x_772_, 1);
v_isSharedCheck_842_ = !lean_is_exclusive(v_x_772_);
if (v_isSharedCheck_842_ == 0)
{
v___x_826_ = v_x_772_;
v_isShared_827_ = v_isSharedCheck_842_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_vs_824_);
lean_inc(v_ks_823_);
lean_dec(v_x_772_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_842_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_ks_823_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_vs_824_);
v___x_829_ = v_reuseFailAlloc_841_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v_newNode_830_; size_t v___x_831_; uint8_t v___x_832_; 
v_newNode_830_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1___redArg(v___x_829_, v_x_775_, v_x_776_);
v___x_831_ = ((size_t)7ULL);
v___x_832_ = lean_usize_dec_le(v___x_831_, v_x_774_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_833_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_830_);
v___x_834_ = lean_unsigned_to_nat(4u);
v___x_835_ = lean_nat_dec_lt(v___x_833_, v___x_834_);
lean_dec(v___x_833_);
if (v___x_835_ == 0)
{
lean_object* v_ks_836_; lean_object* v_vs_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v_ks_836_ = lean_ctor_get(v_newNode_830_, 0);
lean_inc_ref(v_ks_836_);
v_vs_837_ = lean_ctor_get(v_newNode_830_, 1);
lean_inc_ref(v_vs_837_);
lean_dec_ref(v_newNode_830_);
v___x_838_ = lean_unsigned_to_nat(0u);
v___x_839_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0);
v___x_840_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___redArg(v_x_774_, v_ks_836_, v_vs_837_, v___x_838_, v___x_839_);
lean_dec_ref(v_vs_837_);
lean_dec_ref(v_ks_836_);
return v___x_840_;
}
else
{
return v_newNode_830_;
}
}
else
{
return v_newNode_830_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___redArg(size_t v_depth_843_, lean_object* v_keys_844_, lean_object* v_vals_845_, lean_object* v_i_846_, lean_object* v_entries_847_){
_start:
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = lean_array_get_size(v_keys_844_);
v___x_849_ = lean_nat_dec_lt(v_i_846_, v___x_848_);
if (v___x_849_ == 0)
{
lean_dec(v_i_846_);
return v_entries_847_;
}
else
{
lean_object* v_k_850_; lean_object* v_v_851_; uint64_t v___y_853_; 
v_k_850_ = lean_array_fget_borrowed(v_keys_844_, v_i_846_);
v_v_851_ = lean_array_fget_borrowed(v_vals_845_, v_i_846_);
if (lean_obj_tag(v_k_850_) == 0)
{
uint64_t v___x_864_; 
v___x_864_ = 1723ULL;
v___y_853_ = v___x_864_;
goto v___jp_852_;
}
else
{
uint64_t v_hash_865_; 
v_hash_865_ = lean_ctor_get_uint64(v_k_850_, sizeof(void*)*2);
v___y_853_ = v_hash_865_;
goto v___jp_852_;
}
v___jp_852_:
{
size_t v_h_854_; size_t v___x_855_; lean_object* v___x_856_; size_t v___x_857_; size_t v___x_858_; size_t v___x_859_; size_t v_h_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_h_854_ = lean_uint64_to_usize(v___y_853_);
v___x_855_ = ((size_t)5ULL);
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = ((size_t)1ULL);
v___x_858_ = lean_usize_sub(v_depth_843_, v___x_857_);
v___x_859_ = lean_usize_mul(v___x_855_, v___x_858_);
v_h_860_ = lean_usize_shift_right(v_h_854_, v___x_859_);
v___x_861_ = lean_nat_add(v_i_846_, v___x_856_);
lean_dec(v_i_846_);
lean_inc(v_v_851_);
lean_inc(v_k_850_);
v___x_862_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg(v_entries_847_, v_h_860_, v_depth_843_, v_k_850_, v_v_851_);
v_i_846_ = v___x_861_;
v_entries_847_ = v___x_862_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_866_, lean_object* v_keys_867_, lean_object* v_vals_868_, lean_object* v_i_869_, lean_object* v_entries_870_){
_start:
{
size_t v_depth_boxed_871_; lean_object* v_res_872_; 
v_depth_boxed_871_ = lean_unbox_usize(v_depth_866_);
lean_dec(v_depth_866_);
v_res_872_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___redArg(v_depth_boxed_871_, v_keys_867_, v_vals_868_, v_i_869_, v_entries_870_);
lean_dec_ref(v_vals_868_);
lean_dec_ref(v_keys_867_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___boxed(lean_object* v_x_873_, lean_object* v_x_874_, lean_object* v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_){
_start:
{
size_t v_x_38398__boxed_878_; size_t v_x_38399__boxed_879_; lean_object* v_res_880_; 
v_x_38398__boxed_878_ = lean_unbox_usize(v_x_874_);
lean_dec(v_x_874_);
v_x_38399__boxed_879_ = lean_unbox_usize(v_x_875_);
lean_dec(v_x_875_);
v_res_880_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg(v_x_873_, v_x_38398__boxed_878_, v_x_38399__boxed_879_, v_x_876_, v_x_877_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0___redArg(lean_object* v_x_881_, lean_object* v_x_882_, lean_object* v_x_883_){
_start:
{
uint64_t v___y_885_; 
if (lean_obj_tag(v_x_882_) == 0)
{
uint64_t v___x_889_; 
v___x_889_ = 1723ULL;
v___y_885_ = v___x_889_;
goto v___jp_884_;
}
else
{
uint64_t v_hash_890_; 
v_hash_890_ = lean_ctor_get_uint64(v_x_882_, sizeof(void*)*2);
v___y_885_ = v_hash_890_;
goto v___jp_884_;
}
v___jp_884_:
{
size_t v___x_886_; size_t v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_uint64_to_usize(v___y_885_);
v___x_887_ = ((size_t)1ULL);
v___x_888_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg(v_x_881_, v___x_886_, v___x_887_, v_x_882_, v_x_883_);
return v___x_888_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___redArg(lean_object* v_keys_891_, lean_object* v_vals_892_, lean_object* v_i_893_, lean_object* v_k_894_){
_start:
{
lean_object* v___x_895_; uint8_t v___x_896_; 
v___x_895_ = lean_array_get_size(v_keys_891_);
v___x_896_ = lean_nat_dec_lt(v_i_893_, v___x_895_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; 
lean_dec(v_i_893_);
v___x_897_ = lean_box(0);
return v___x_897_;
}
else
{
lean_object* v_k_x27_898_; uint8_t v___x_899_; 
v_k_x27_898_ = lean_array_fget_borrowed(v_keys_891_, v_i_893_);
v___x_899_ = lean_name_eq(v_k_894_, v_k_x27_898_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = lean_unsigned_to_nat(1u);
v___x_901_ = lean_nat_add(v_i_893_, v___x_900_);
lean_dec(v_i_893_);
v_i_893_ = v___x_901_;
goto _start;
}
else
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = lean_array_fget_borrowed(v_vals_892_, v_i_893_);
lean_dec(v_i_893_);
lean_inc(v___x_903_);
v___x_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
return v___x_904_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_keys_905_, lean_object* v_vals_906_, lean_object* v_i_907_, lean_object* v_k_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___redArg(v_keys_905_, v_vals_906_, v_i_907_, v_k_908_);
lean_dec(v_k_908_);
lean_dec_ref(v_vals_906_);
lean_dec_ref(v_keys_905_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___redArg(lean_object* v_x_910_, size_t v_x_911_, lean_object* v_x_912_){
_start:
{
if (lean_obj_tag(v_x_910_) == 0)
{
lean_object* v_es_913_; lean_object* v___x_914_; size_t v___x_915_; size_t v___x_916_; lean_object* v_j_917_; lean_object* v___x_918_; 
v_es_913_ = lean_ctor_get(v_x_910_, 0);
v___x_914_ = lean_box(2);
v___x_915_ = ((size_t)31ULL);
v___x_916_ = lean_usize_land(v_x_911_, v___x_915_);
v_j_917_ = lean_usize_to_nat(v___x_916_);
v___x_918_ = lean_array_get_borrowed(v___x_914_, v_es_913_, v_j_917_);
lean_dec(v_j_917_);
switch(lean_obj_tag(v___x_918_))
{
case 0:
{
lean_object* v_key_919_; lean_object* v_val_920_; uint8_t v___x_921_; 
v_key_919_ = lean_ctor_get(v___x_918_, 0);
v_val_920_ = lean_ctor_get(v___x_918_, 1);
v___x_921_ = lean_name_eq(v_x_912_, v_key_919_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; 
v___x_922_ = lean_box(0);
return v___x_922_;
}
else
{
lean_object* v___x_923_; 
lean_inc(v_val_920_);
v___x_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_923_, 0, v_val_920_);
return v___x_923_;
}
}
case 1:
{
lean_object* v_node_924_; size_t v___x_925_; size_t v___x_926_; 
v_node_924_ = lean_ctor_get(v___x_918_, 0);
v___x_925_ = ((size_t)5ULL);
v___x_926_ = lean_usize_shift_right(v_x_911_, v___x_925_);
v_x_910_ = v_node_924_;
v_x_911_ = v___x_926_;
goto _start;
}
default: 
{
lean_object* v___x_928_; 
v___x_928_ = lean_box(0);
return v___x_928_;
}
}
}
else
{
lean_object* v_ks_929_; lean_object* v_vs_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v_ks_929_ = lean_ctor_get(v_x_910_, 0);
v_vs_930_ = lean_ctor_get(v_x_910_, 1);
v___x_931_ = lean_unsigned_to_nat(0u);
v___x_932_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___redArg(v_ks_929_, v_vs_930_, v___x_931_, v_x_912_);
return v___x_932_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___redArg___boxed(lean_object* v_x_933_, lean_object* v_x_934_, lean_object* v_x_935_){
_start:
{
size_t v_x_38588__boxed_936_; lean_object* v_res_937_; 
v_x_38588__boxed_936_ = lean_unbox_usize(v_x_934_);
lean_dec(v_x_934_);
v_res_937_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___redArg(v_x_933_, v_x_38588__boxed_936_, v_x_935_);
lean_dec(v_x_935_);
lean_dec_ref(v_x_933_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___redArg(lean_object* v_x_938_, lean_object* v_x_939_){
_start:
{
uint64_t v___y_941_; 
if (lean_obj_tag(v_x_939_) == 0)
{
uint64_t v___x_944_; 
v___x_944_ = 1723ULL;
v___y_941_ = v___x_944_;
goto v___jp_940_;
}
else
{
uint64_t v_hash_945_; 
v_hash_945_ = lean_ctor_get_uint64(v_x_939_, sizeof(void*)*2);
v___y_941_ = v_hash_945_;
goto v___jp_940_;
}
v___jp_940_:
{
size_t v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_uint64_to_usize(v___y_941_);
v___x_943_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___redArg(v_x_938_, v___x_942_, v_x_939_);
return v___x_943_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___redArg___boxed(lean_object* v_x_946_, lean_object* v_x_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___redArg(v_x_946_, v_x_947_);
lean_dec(v_x_947_);
lean_dec_ref(v_x_946_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName(lean_object* v_name_952_, lean_object* v_type_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_){
_start:
{
lean_object* v_name_966_; lean_object* v___y_967_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v_name_1104_; lean_object* v___y_1105_; lean_object* v___y_1106_; lean_object* v___y_1107_; lean_object* v___y_1108_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___x_1129_; 
v___x_1129_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_956_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1190_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1132_ = v___x_1129_;
v_isShared_1133_ = v_isSharedCheck_1190_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1129_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1190_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
uint8_t v_clean_1155_; 
v_clean_1155_ = lean_ctor_get_uint8(v_a_1130_, sizeof(void*)*18 + 16);
lean_dec(v_a_1130_);
if (v_clean_1155_ == 0)
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lean_Meta_Grind_getOriginalName_x3f(v_name_952_);
if (lean_obj_tag(v___x_1156_) == 1)
{
lean_object* v_val_1157_; lean_object* v___x_1159_; 
lean_dec_ref(v_type_953_);
lean_dec(v_name_952_);
v_val_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_val_1157_);
lean_dec_ref_known(v___x_1156_, 1);
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v_val_1157_);
v___x_1159_ = v___x_1132_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_val_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
else
{
uint8_t v___x_1161_; 
lean_dec(v___x_1156_);
v___x_1161_ = l_Lean_Name_hasMacroScopes(v_name_952_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; 
lean_del_object(v___x_1132_);
lean_dec_ref(v_type_953_);
v___x_1162_ = l_Lean_Core_mkFreshUserName(v_name_952_, v_a_962_, v_a_963_);
return v___x_1162_;
}
else
{
lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1163_ = l_Lean_Name_eraseMacroScopes(v_name_952_);
v___x_1164_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__1));
v___x_1165_ = lean_name_eq(v___x_1163_, v___x_1164_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1166_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__1));
v___x_1167_ = lean_name_eq(v___x_1163_, v___x_1166_);
lean_dec(v___x_1163_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1169_; 
lean_dec_ref(v_type_953_);
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v_name_952_);
v___x_1169_ = v___x_1132_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_name_952_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
else
{
lean_del_object(v___x_1132_);
goto v___jp_1134_;
}
}
else
{
lean_dec(v___x_1163_);
lean_del_object(v___x_1132_);
goto v___jp_1134_;
}
}
}
}
else
{
uint8_t v___x_1171_; 
lean_del_object(v___x_1132_);
v___x_1171_ = l_Lean_Name_hasMacroScopes(v_name_952_);
if (v___x_1171_ == 0)
{
v_name_1104_ = v_name_952_;
v___y_1105_ = v_a_954_;
v___y_1106_ = v_a_955_;
v___y_1107_ = v_a_956_;
v___y_1108_ = v_a_957_;
v___y_1109_ = v_a_958_;
v___y_1110_ = v_a_959_;
v___y_1111_ = v_a_960_;
v___y_1112_ = v_a_961_;
v___y_1113_ = v_a_962_;
v___y_1114_ = v_a_963_;
goto v___jp_1103_;
}
else
{
lean_object* v___x_1172_; lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1172_ = l_Lean_Name_eraseMacroScopes(v_name_952_);
lean_dec(v_name_952_);
v___x_1186_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__1));
v___x_1187_ = lean_name_eq(v___x_1172_, v___x_1186_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1188_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___closed__1));
v___x_1189_ = lean_name_eq(v___x_1172_, v___x_1188_);
if (v___x_1189_ == 0)
{
v_name_1104_ = v___x_1172_;
v___y_1105_ = v_a_954_;
v___y_1106_ = v_a_955_;
v___y_1107_ = v_a_956_;
v___y_1108_ = v_a_957_;
v___y_1109_ = v_a_958_;
v___y_1110_ = v_a_959_;
v___y_1111_ = v_a_960_;
v___y_1112_ = v_a_961_;
v___y_1113_ = v_a_962_;
v___y_1114_ = v_a_963_;
goto v___jp_1103_;
}
else
{
goto v___jp_1173_;
}
}
else
{
goto v___jp_1173_;
}
v___jp_1173_:
{
lean_object* v___x_1174_; 
lean_inc_ref(v_type_953_);
v___x_1174_ = l_Lean_Meta_isProp(v_type_953_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v_a_1175_; uint8_t v___x_1176_; 
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_a_1175_);
lean_dec_ref_known(v___x_1174_, 1);
v___x_1176_ = lean_unbox(v_a_1175_);
lean_dec(v_a_1175_);
if (v___x_1176_ == 0)
{
v_name_1104_ = v___x_1172_;
v___y_1105_ = v_a_954_;
v___y_1106_ = v_a_955_;
v___y_1107_ = v_a_956_;
v___y_1108_ = v_a_957_;
v___y_1109_ = v_a_958_;
v___y_1110_ = v_a_959_;
v___y_1111_ = v_a_960_;
v___y_1112_ = v_a_961_;
v___y_1113_ = v_a_962_;
v___y_1114_ = v_a_963_;
goto v___jp_1103_;
}
else
{
lean_object* v___x_1177_; 
lean_dec(v___x_1172_);
v___x_1177_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__3));
v_name_1104_ = v___x_1177_;
v___y_1105_ = v_a_954_;
v___y_1106_ = v_a_955_;
v___y_1107_ = v_a_956_;
v___y_1108_ = v_a_957_;
v___y_1109_ = v_a_958_;
v___y_1110_ = v_a_959_;
v___y_1111_ = v_a_960_;
v___y_1112_ = v_a_961_;
v___y_1113_ = v_a_962_;
v___y_1114_ = v_a_963_;
goto v___jp_1103_;
}
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_dec(v___x_1172_);
lean_dec_ref(v_type_953_);
v_a_1178_ = lean_ctor_get(v___x_1174_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1174_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1174_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
}
v___jp_1134_:
{
lean_object* v___x_1135_; 
v___x_1135_ = l_Lean_Meta_isProp(v_type_953_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1146_; 
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1138_ = v___x_1135_;
v_isShared_1139_ = v_isSharedCheck_1146_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1135_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1146_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
uint8_t v___x_1140_; 
v___x_1140_ = lean_unbox(v_a_1136_);
lean_dec(v_a_1136_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1142_; 
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 0, v_name_952_);
v___x_1142_ = v___x_1138_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_name_952_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
lean_del_object(v___x_1138_);
lean_dec(v_name_952_);
v___x_1144_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__3));
v___x_1145_ = l_Lean_Core_mkFreshUserName(v___x_1144_, v_a_962_, v_a_963_);
return v___x_1145_;
}
}
}
else
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
lean_dec(v_name_952_);
v_a_1147_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1149_ = v___x_1135_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1135_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1147_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
}
}
}
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
lean_dec_ref(v_type_953_);
lean_dec(v_name_952_);
v_a_1191_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___x_1129_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1129_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
v___jp_965_:
{
lean_object* v___x_968_; lean_object* v_toGoalState_969_; lean_object* v_clean_970_; lean_object* v_mvarId_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_1021_; 
v___x_968_ = lean_st_ref_take(v___y_967_);
v_toGoalState_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc_ref(v_toGoalState_969_);
v_clean_970_ = lean_ctor_get(v_toGoalState_969_, 17);
lean_inc_ref(v_clean_970_);
v_mvarId_971_ = lean_ctor_get(v___x_968_, 1);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_1021_ == 0)
{
lean_object* v_unused_1022_; 
v_unused_1022_ = lean_ctor_get(v___x_968_, 0);
lean_dec(v_unused_1022_);
v___x_973_ = v___x_968_;
v_isShared_974_ = v_isSharedCheck_1021_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_mvarId_971_);
lean_dec(v___x_968_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_1021_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v_nextDeclIdx_975_; lean_object* v_enodeMap_976_; lean_object* v_exprs_977_; lean_object* v_parents_978_; lean_object* v_condParents_979_; lean_object* v_congrTable_980_; lean_object* v_appMap_981_; lean_object* v_indicesFound_982_; lean_object* v_toProcess_983_; lean_object* v_internalizing_984_; uint8_t v_inconsistent_985_; lean_object* v_nextIdx_986_; lean_object* v_newRawFacts_987_; lean_object* v_facts_988_; lean_object* v_extThms_989_; lean_object* v_ematch_990_; lean_object* v_inj_991_; lean_object* v_split_992_; lean_object* v_sstates_993_; lean_object* v_goalStack_994_; uint64_t v_introBase_995_; lean_object* v_numIntros_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1019_; 
v_nextDeclIdx_975_ = lean_ctor_get(v_toGoalState_969_, 0);
v_enodeMap_976_ = lean_ctor_get(v_toGoalState_969_, 1);
v_exprs_977_ = lean_ctor_get(v_toGoalState_969_, 2);
v_parents_978_ = lean_ctor_get(v_toGoalState_969_, 3);
v_condParents_979_ = lean_ctor_get(v_toGoalState_969_, 4);
v_congrTable_980_ = lean_ctor_get(v_toGoalState_969_, 5);
v_appMap_981_ = lean_ctor_get(v_toGoalState_969_, 6);
v_indicesFound_982_ = lean_ctor_get(v_toGoalState_969_, 7);
v_toProcess_983_ = lean_ctor_get(v_toGoalState_969_, 8);
v_internalizing_984_ = lean_ctor_get(v_toGoalState_969_, 9);
v_inconsistent_985_ = lean_ctor_get_uint8(v_toGoalState_969_, sizeof(void*)*21 + 8);
v_nextIdx_986_ = lean_ctor_get(v_toGoalState_969_, 10);
v_newRawFacts_987_ = lean_ctor_get(v_toGoalState_969_, 11);
v_facts_988_ = lean_ctor_get(v_toGoalState_969_, 12);
v_extThms_989_ = lean_ctor_get(v_toGoalState_969_, 13);
v_ematch_990_ = lean_ctor_get(v_toGoalState_969_, 14);
v_inj_991_ = lean_ctor_get(v_toGoalState_969_, 15);
v_split_992_ = lean_ctor_get(v_toGoalState_969_, 16);
v_sstates_993_ = lean_ctor_get(v_toGoalState_969_, 18);
v_goalStack_994_ = lean_ctor_get(v_toGoalState_969_, 19);
v_introBase_995_ = lean_ctor_get_uint64(v_toGoalState_969_, sizeof(void*)*21);
v_numIntros_996_ = lean_ctor_get(v_toGoalState_969_, 20);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_toGoalState_969_);
if (v_isSharedCheck_1019_ == 0)
{
lean_object* v_unused_1020_; 
v_unused_1020_ = lean_ctor_get(v_toGoalState_969_, 17);
lean_dec(v_unused_1020_);
v___x_998_ = v_toGoalState_969_;
v_isShared_999_ = v_isSharedCheck_1019_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_numIntros_996_);
lean_inc(v_goalStack_994_);
lean_inc(v_sstates_993_);
lean_inc(v_split_992_);
lean_inc(v_inj_991_);
lean_inc(v_ematch_990_);
lean_inc(v_extThms_989_);
lean_inc(v_facts_988_);
lean_inc(v_newRawFacts_987_);
lean_inc(v_nextIdx_986_);
lean_inc(v_internalizing_984_);
lean_inc(v_toProcess_983_);
lean_inc(v_indicesFound_982_);
lean_inc(v_appMap_981_);
lean_inc(v_congrTable_980_);
lean_inc(v_condParents_979_);
lean_inc(v_parents_978_);
lean_inc(v_exprs_977_);
lean_inc(v_enodeMap_976_);
lean_inc(v_nextDeclIdx_975_);
lean_dec(v_toGoalState_969_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1019_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v_used_1000_; lean_object* v_next_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1018_; 
v_used_1000_ = lean_ctor_get(v_clean_970_, 0);
v_next_1001_ = lean_ctor_get(v_clean_970_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_clean_970_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1003_ = v_clean_970_;
v_isShared_1004_ = v_isSharedCheck_1018_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_next_1001_);
lean_inc(v_used_1000_);
lean_dec(v_clean_970_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1018_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1008_; 
v___x_1005_ = lean_box(0);
lean_inc(v_name_966_);
v___x_1006_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0___redArg(v_used_1000_, v_name_966_, v___x_1005_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 0, v___x_1006_);
v___x_1008_ = v___x_1003_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1006_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v_next_1001_);
v___x_1008_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v___x_1010_; 
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 17, v___x_1008_);
v___x_1010_ = v___x_998_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_nextDeclIdx_975_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_enodeMap_976_);
lean_ctor_set(v_reuseFailAlloc_1016_, 2, v_exprs_977_);
lean_ctor_set(v_reuseFailAlloc_1016_, 3, v_parents_978_);
lean_ctor_set(v_reuseFailAlloc_1016_, 4, v_condParents_979_);
lean_ctor_set(v_reuseFailAlloc_1016_, 5, v_congrTable_980_);
lean_ctor_set(v_reuseFailAlloc_1016_, 6, v_appMap_981_);
lean_ctor_set(v_reuseFailAlloc_1016_, 7, v_indicesFound_982_);
lean_ctor_set(v_reuseFailAlloc_1016_, 8, v_toProcess_983_);
lean_ctor_set(v_reuseFailAlloc_1016_, 9, v_internalizing_984_);
lean_ctor_set(v_reuseFailAlloc_1016_, 10, v_nextIdx_986_);
lean_ctor_set(v_reuseFailAlloc_1016_, 11, v_newRawFacts_987_);
lean_ctor_set(v_reuseFailAlloc_1016_, 12, v_facts_988_);
lean_ctor_set(v_reuseFailAlloc_1016_, 13, v_extThms_989_);
lean_ctor_set(v_reuseFailAlloc_1016_, 14, v_ematch_990_);
lean_ctor_set(v_reuseFailAlloc_1016_, 15, v_inj_991_);
lean_ctor_set(v_reuseFailAlloc_1016_, 16, v_split_992_);
lean_ctor_set(v_reuseFailAlloc_1016_, 17, v___x_1008_);
lean_ctor_set(v_reuseFailAlloc_1016_, 18, v_sstates_993_);
lean_ctor_set(v_reuseFailAlloc_1016_, 19, v_goalStack_994_);
lean_ctor_set(v_reuseFailAlloc_1016_, 20, v_numIntros_996_);
lean_ctor_set_uint8(v_reuseFailAlloc_1016_, sizeof(void*)*21 + 8, v_inconsistent_985_);
lean_ctor_set_uint64(v_reuseFailAlloc_1016_, sizeof(void*)*21, v_introBase_995_);
v___x_1010_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1012_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 0, v___x_1010_);
v___x_1012_ = v___x_973_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1015_, 1, v_mvarId_971_);
v___x_1012_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_st_ref_put(v___y_967_, v___x_1012_);
v___x_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1014_, 0, v_name_966_);
return v___x_1014_;
}
}
}
}
}
}
}
v___jp_1023_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___y_1030_);
lean_ctor_set(v___x_1037_, 1, v___y_1036_);
lean_inc(v___y_1032_);
v___x_1038_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___redArg(v___y_1032_, v___x_1037_, v___y_1033_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; lean_object* v_fst_1040_; lean_object* v_snd_1041_; lean_object* v___x_1042_; lean_object* v_toGoalState_1043_; lean_object* v_clean_1044_; lean_object* v_mvarId_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1093_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref_known(v___x_1038_, 1);
v_fst_1040_ = lean_ctor_get(v_a_1039_, 0);
lean_inc(v_fst_1040_);
v_snd_1041_ = lean_ctor_get(v_a_1039_, 1);
lean_inc(v_snd_1041_);
lean_dec(v_a_1039_);
v___x_1042_ = lean_st_ref_take(v___y_1033_);
v_toGoalState_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc_ref(v_toGoalState_1043_);
v_clean_1044_ = lean_ctor_get(v_toGoalState_1043_, 17);
lean_inc_ref(v_clean_1044_);
v_mvarId_1045_ = lean_ctor_get(v___x_1042_, 1);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1093_ == 0)
{
lean_object* v_unused_1094_; 
v_unused_1094_ = lean_ctor_get(v___x_1042_, 0);
lean_dec(v_unused_1094_);
v___x_1047_ = v___x_1042_;
v_isShared_1048_ = v_isSharedCheck_1093_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_mvarId_1045_);
lean_dec(v___x_1042_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1093_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v_nextDeclIdx_1049_; lean_object* v_enodeMap_1050_; lean_object* v_exprs_1051_; lean_object* v_parents_1052_; lean_object* v_condParents_1053_; lean_object* v_congrTable_1054_; lean_object* v_appMap_1055_; lean_object* v_indicesFound_1056_; lean_object* v_toProcess_1057_; lean_object* v_internalizing_1058_; uint8_t v_inconsistent_1059_; lean_object* v_nextIdx_1060_; lean_object* v_newRawFacts_1061_; lean_object* v_facts_1062_; lean_object* v_extThms_1063_; lean_object* v_ematch_1064_; lean_object* v_inj_1065_; lean_object* v_split_1066_; lean_object* v_sstates_1067_; lean_object* v_goalStack_1068_; uint64_t v_introBase_1069_; lean_object* v_numIntros_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1091_; 
v_nextDeclIdx_1049_ = lean_ctor_get(v_toGoalState_1043_, 0);
v_enodeMap_1050_ = lean_ctor_get(v_toGoalState_1043_, 1);
v_exprs_1051_ = lean_ctor_get(v_toGoalState_1043_, 2);
v_parents_1052_ = lean_ctor_get(v_toGoalState_1043_, 3);
v_condParents_1053_ = lean_ctor_get(v_toGoalState_1043_, 4);
v_congrTable_1054_ = lean_ctor_get(v_toGoalState_1043_, 5);
v_appMap_1055_ = lean_ctor_get(v_toGoalState_1043_, 6);
v_indicesFound_1056_ = lean_ctor_get(v_toGoalState_1043_, 7);
v_toProcess_1057_ = lean_ctor_get(v_toGoalState_1043_, 8);
v_internalizing_1058_ = lean_ctor_get(v_toGoalState_1043_, 9);
v_inconsistent_1059_ = lean_ctor_get_uint8(v_toGoalState_1043_, sizeof(void*)*21 + 8);
v_nextIdx_1060_ = lean_ctor_get(v_toGoalState_1043_, 10);
v_newRawFacts_1061_ = lean_ctor_get(v_toGoalState_1043_, 11);
v_facts_1062_ = lean_ctor_get(v_toGoalState_1043_, 12);
v_extThms_1063_ = lean_ctor_get(v_toGoalState_1043_, 13);
v_ematch_1064_ = lean_ctor_get(v_toGoalState_1043_, 14);
v_inj_1065_ = lean_ctor_get(v_toGoalState_1043_, 15);
v_split_1066_ = lean_ctor_get(v_toGoalState_1043_, 16);
v_sstates_1067_ = lean_ctor_get(v_toGoalState_1043_, 18);
v_goalStack_1068_ = lean_ctor_get(v_toGoalState_1043_, 19);
v_introBase_1069_ = lean_ctor_get_uint64(v_toGoalState_1043_, sizeof(void*)*21);
v_numIntros_1070_ = lean_ctor_get(v_toGoalState_1043_, 20);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_toGoalState_1043_);
if (v_isSharedCheck_1091_ == 0)
{
lean_object* v_unused_1092_; 
v_unused_1092_ = lean_ctor_get(v_toGoalState_1043_, 17);
lean_dec(v_unused_1092_);
v___x_1072_ = v_toGoalState_1043_;
v_isShared_1073_ = v_isSharedCheck_1091_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_numIntros_1070_);
lean_inc(v_goalStack_1068_);
lean_inc(v_sstates_1067_);
lean_inc(v_split_1066_);
lean_inc(v_inj_1065_);
lean_inc(v_ematch_1064_);
lean_inc(v_extThms_1063_);
lean_inc(v_facts_1062_);
lean_inc(v_newRawFacts_1061_);
lean_inc(v_nextIdx_1060_);
lean_inc(v_internalizing_1058_);
lean_inc(v_toProcess_1057_);
lean_inc(v_indicesFound_1056_);
lean_inc(v_appMap_1055_);
lean_inc(v_congrTable_1054_);
lean_inc(v_condParents_1053_);
lean_inc(v_parents_1052_);
lean_inc(v_exprs_1051_);
lean_inc(v_enodeMap_1050_);
lean_inc(v_nextDeclIdx_1049_);
lean_dec(v_toGoalState_1043_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1091_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v_used_1074_; lean_object* v_next_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1090_; 
v_used_1074_ = lean_ctor_get(v_clean_1044_, 0);
v_next_1075_ = lean_ctor_get(v_clean_1044_, 1);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_clean_1044_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1077_ = v_clean_1044_;
v_isShared_1078_ = v_isSharedCheck_1090_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_next_1075_);
lean_inc(v_used_1074_);
lean_dec(v_clean_1044_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1090_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1081_; 
v___x_1079_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0___redArg(v_next_1075_, v___y_1032_, v_snd_1041_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 1, v___x_1079_);
v___x_1081_ = v___x_1077_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_used_1074_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v___x_1079_);
v___x_1081_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1083_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 17, v___x_1081_);
v___x_1083_ = v___x_1072_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_nextDeclIdx_1049_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_enodeMap_1050_);
lean_ctor_set(v_reuseFailAlloc_1088_, 2, v_exprs_1051_);
lean_ctor_set(v_reuseFailAlloc_1088_, 3, v_parents_1052_);
lean_ctor_set(v_reuseFailAlloc_1088_, 4, v_condParents_1053_);
lean_ctor_set(v_reuseFailAlloc_1088_, 5, v_congrTable_1054_);
lean_ctor_set(v_reuseFailAlloc_1088_, 6, v_appMap_1055_);
lean_ctor_set(v_reuseFailAlloc_1088_, 7, v_indicesFound_1056_);
lean_ctor_set(v_reuseFailAlloc_1088_, 8, v_toProcess_1057_);
lean_ctor_set(v_reuseFailAlloc_1088_, 9, v_internalizing_1058_);
lean_ctor_set(v_reuseFailAlloc_1088_, 10, v_nextIdx_1060_);
lean_ctor_set(v_reuseFailAlloc_1088_, 11, v_newRawFacts_1061_);
lean_ctor_set(v_reuseFailAlloc_1088_, 12, v_facts_1062_);
lean_ctor_set(v_reuseFailAlloc_1088_, 13, v_extThms_1063_);
lean_ctor_set(v_reuseFailAlloc_1088_, 14, v_ematch_1064_);
lean_ctor_set(v_reuseFailAlloc_1088_, 15, v_inj_1065_);
lean_ctor_set(v_reuseFailAlloc_1088_, 16, v_split_1066_);
lean_ctor_set(v_reuseFailAlloc_1088_, 17, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1088_, 18, v_sstates_1067_);
lean_ctor_set(v_reuseFailAlloc_1088_, 19, v_goalStack_1068_);
lean_ctor_set(v_reuseFailAlloc_1088_, 20, v_numIntros_1070_);
lean_ctor_set_uint8(v_reuseFailAlloc_1088_, sizeof(void*)*21 + 8, v_inconsistent_1059_);
lean_ctor_set_uint64(v_reuseFailAlloc_1088_, sizeof(void*)*21, v_introBase_1069_);
v___x_1083_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1085_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 0, v___x_1083_);
v___x_1085_ = v___x_1047_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v_mvarId_1045_);
v___x_1085_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
lean_object* v___x_1086_; 
v___x_1086_ = lean_st_ref_put(v___y_1033_, v___x_1085_);
v_name_966_ = v_fst_1040_;
v___y_967_ = v___y_1033_;
goto v___jp_965_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_dec(v___y_1032_);
v_a_1095_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1038_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1038_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
v___jp_1103_:
{
lean_object* v___x_1115_; lean_object* v_toGoalState_1116_; lean_object* v_clean_1117_; lean_object* v_used_1118_; uint8_t v___x_1119_; 
v___x_1115_ = lean_st_ref_get(v___y_1105_);
v_toGoalState_1116_ = lean_ctor_get(v___x_1115_, 0);
lean_inc_ref(v_toGoalState_1116_);
lean_dec(v___x_1115_);
v_clean_1117_ = lean_ctor_get(v_toGoalState_1116_, 17);
lean_inc_ref(v_clean_1117_);
lean_dec_ref(v_toGoalState_1116_);
v_used_1118_ = lean_ctor_get(v_clean_1117_, 0);
lean_inc_ref(v_used_1118_);
lean_dec_ref(v_clean_1117_);
v___x_1119_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___redArg(v_used_1118_, v_name_1104_);
lean_dec_ref(v_used_1118_);
if (v___x_1119_ == 0)
{
lean_dec_ref(v_type_953_);
v_name_966_ = v_name_1104_;
v___y_967_ = v___y_1105_;
goto v___jp_965_;
}
else
{
lean_object* v___x_1120_; 
lean_inc(v_name_1104_);
v___x_1120_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName(v_name_1104_, v_type_953_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1122_; lean_object* v_toGoalState_1123_; lean_object* v_clean_1124_; lean_object* v_next_1125_; lean_object* v___x_1126_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v___x_1122_ = lean_st_ref_get(v___y_1105_);
v_toGoalState_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc_ref(v_toGoalState_1123_);
lean_dec(v___x_1122_);
v_clean_1124_ = lean_ctor_get(v_toGoalState_1123_, 17);
lean_inc_ref(v_clean_1124_);
lean_dec_ref(v_toGoalState_1123_);
v_next_1125_ = lean_ctor_get(v_clean_1124_, 1);
lean_inc_ref(v_next_1125_);
lean_dec_ref(v_clean_1124_);
v___x_1126_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___redArg(v_next_1125_, v_a_1121_);
lean_dec_ref(v_next_1125_);
if (lean_obj_tag(v___x_1126_) == 1)
{
lean_object* v_val_1127_; 
v_val_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc(v_val_1127_);
lean_dec_ref_known(v___x_1126_, 1);
v___y_1024_ = v___y_1106_;
v___y_1025_ = v___y_1112_;
v___y_1026_ = v___y_1111_;
v___y_1027_ = v___y_1109_;
v___y_1028_ = v___y_1108_;
v___y_1029_ = v___y_1110_;
v___y_1030_ = v_name_1104_;
v___y_1031_ = v___y_1114_;
v___y_1032_ = v_a_1121_;
v___y_1033_ = v___y_1105_;
v___y_1034_ = v___y_1113_;
v___y_1035_ = v___y_1107_;
v___y_1036_ = v_val_1127_;
goto v___jp_1023_;
}
else
{
lean_object* v___x_1128_; 
lean_dec(v___x_1126_);
v___x_1128_ = lean_unsigned_to_nat(1u);
v___y_1024_ = v___y_1106_;
v___y_1025_ = v___y_1112_;
v___y_1026_ = v___y_1111_;
v___y_1027_ = v___y_1109_;
v___y_1028_ = v___y_1108_;
v___y_1029_ = v___y_1110_;
v___y_1030_ = v_name_1104_;
v___y_1031_ = v___y_1114_;
v___y_1032_ = v_a_1121_;
v___y_1033_ = v___y_1105_;
v___y_1034_ = v___y_1113_;
v___y_1035_ = v___y_1107_;
v___y_1036_ = v___x_1128_;
goto v___jp_1023_;
}
}
else
{
lean_dec(v_name_1104_);
return v___x_1120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName___boxed(lean_object* v_name_1199_, lean_object* v_type_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName(v_name_1199_, v_type_1200_, v_a_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_);
lean_dec(v_a_1210_);
lean_dec_ref(v_a_1209_);
lean_dec(v_a_1208_);
lean_dec_ref(v_a_1207_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
lean_dec(v_a_1204_);
lean_dec_ref(v_a_1203_);
lean_dec(v_a_1202_);
lean_dec(v_a_1201_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0(lean_object* v_00_u03b2_1213_, lean_object* v_x_1214_, lean_object* v_x_1215_, lean_object* v_x_1216_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0___redArg(v_x_1214_, v_x_1215_, v_x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1(lean_object* v_00_u03b2_1218_, lean_object* v_x_1219_, lean_object* v_x_1220_){
_start:
{
uint8_t v___x_1221_; 
v___x_1221_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___redArg(v_x_1219_, v_x_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1___boxed(lean_object* v_00_u03b2_1222_, lean_object* v_x_1223_, lean_object* v_x_1224_){
_start:
{
uint8_t v_res_1225_; lean_object* v_r_1226_; 
v_res_1225_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1(v_00_u03b2_1222_, v_x_1223_, v_x_1224_);
lean_dec(v_x_1224_);
lean_dec_ref(v_x_1223_);
v_r_1226_ = lean_box(v_res_1225_);
return v_r_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2(lean_object* v_a_1227_, lean_object* v_inst_1228_, lean_object* v_a_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___redArg(v_a_1227_, v_a_1229_, v___y_1230_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2___boxed(lean_object* v_a_1242_, lean_object* v_inst_1243_, lean_object* v_a_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__2(v_a_1242_, v_inst_1243_, v_a_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
lean_dec(v___y_1246_);
lean_dec(v___y_1245_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3(lean_object* v_00_u03b2_1257_, lean_object* v_x_1258_, lean_object* v_x_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___redArg(v_x_1258_, v_x_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3___boxed(lean_object* v_00_u03b2_1261_, lean_object* v_x_1262_, lean_object* v_x_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3(v_00_u03b2_1261_, v_x_1262_, v_x_1263_);
lean_dec(v_x_1263_);
lean_dec_ref(v_x_1262_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0(lean_object* v_00_u03b2_1265_, lean_object* v_x_1266_, size_t v_x_1267_, size_t v_x_1268_, lean_object* v_x_1269_, lean_object* v_x_1270_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg(v_x_1266_, v_x_1267_, v_x_1268_, v_x_1269_, v_x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1272_, lean_object* v_x_1273_, lean_object* v_x_1274_, lean_object* v_x_1275_, lean_object* v_x_1276_, lean_object* v_x_1277_){
_start:
{
size_t v_x_39082__boxed_1278_; size_t v_x_39083__boxed_1279_; lean_object* v_res_1280_; 
v_x_39082__boxed_1278_ = lean_unbox_usize(v_x_1274_);
lean_dec(v_x_1274_);
v_x_39083__boxed_1279_ = lean_unbox_usize(v_x_1275_);
lean_dec(v_x_1275_);
v_res_1280_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0(v_00_u03b2_1272_, v_x_1273_, v_x_39082__boxed_1278_, v_x_39083__boxed_1279_, v_x_1276_, v_x_1277_);
return v_res_1280_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2(lean_object* v_00_u03b2_1281_, lean_object* v_x_1282_, size_t v_x_1283_, lean_object* v_x_1284_){
_start:
{
uint8_t v___x_1285_; 
v___x_1285_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___redArg(v_x_1282_, v_x_1283_, v_x_1284_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1286_, lean_object* v_x_1287_, lean_object* v_x_1288_, lean_object* v_x_1289_){
_start:
{
size_t v_x_39099__boxed_1290_; uint8_t v_res_1291_; lean_object* v_r_1292_; 
v_x_39099__boxed_1290_ = lean_unbox_usize(v_x_1288_);
lean_dec(v_x_1288_);
v_res_1291_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2(v_00_u03b2_1286_, v_x_1287_, v_x_39099__boxed_1290_, v_x_1289_);
lean_dec(v_x_1289_);
lean_dec_ref(v_x_1287_);
v_r_1292_ = lean_box(v_res_1291_);
return v_r_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5(lean_object* v_00_u03b2_1293_, lean_object* v_x_1294_, size_t v_x_1295_, lean_object* v_x_1296_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___redArg(v_x_1294_, v_x_1295_, v_x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1298_, lean_object* v_x_1299_, lean_object* v_x_1300_, lean_object* v_x_1301_){
_start:
{
size_t v_x_39110__boxed_1302_; lean_object* v_res_1303_; 
v_x_39110__boxed_1302_ = lean_unbox_usize(v_x_1300_);
lean_dec(v_x_1300_);
v_res_1303_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5(v_00_u03b2_1298_, v_x_1299_, v_x_39110__boxed_1302_, v_x_1301_);
lean_dec(v_x_1301_);
lean_dec_ref(v_x_1299_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1304_, lean_object* v_n_1305_, lean_object* v_k_1306_, lean_object* v_v_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1___redArg(v_n_1305_, v_k_1306_, v_v_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1309_, size_t v_depth_1310_, lean_object* v_keys_1311_, lean_object* v_vals_1312_, lean_object* v_heq_1313_, lean_object* v_i_1314_, lean_object* v_entries_1315_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___redArg(v_depth_1310_, v_keys_1311_, v_vals_1312_, v_i_1314_, v_entries_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1317_, lean_object* v_depth_1318_, lean_object* v_keys_1319_, lean_object* v_vals_1320_, lean_object* v_heq_1321_, lean_object* v_i_1322_, lean_object* v_entries_1323_){
_start:
{
size_t v_depth_boxed_1324_; lean_object* v_res_1325_; 
v_depth_boxed_1324_ = lean_unbox_usize(v_depth_1318_);
lean_dec(v_depth_1318_);
v_res_1325_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__2(v_00_u03b2_1317_, v_depth_boxed_1324_, v_keys_1319_, v_vals_1320_, v_heq_1321_, v_i_1322_, v_entries_1323_);
lean_dec_ref(v_vals_1320_);
lean_dec_ref(v_keys_1319_);
return v_res_1325_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1326_, lean_object* v_keys_1327_, lean_object* v_vals_1328_, lean_object* v_heq_1329_, lean_object* v_i_1330_, lean_object* v_k_1331_){
_start:
{
uint8_t v___x_1332_; 
v___x_1332_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___redArg(v_keys_1327_, v_i_1330_, v_k_1331_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1333_, lean_object* v_keys_1334_, lean_object* v_vals_1335_, lean_object* v_heq_1336_, lean_object* v_i_1337_, lean_object* v_k_1338_){
_start:
{
uint8_t v_res_1339_; lean_object* v_r_1340_; 
v_res_1339_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__1_spec__2_spec__5(v_00_u03b2_1333_, v_keys_1334_, v_vals_1335_, v_heq_1336_, v_i_1337_, v_k_1338_);
lean_dec(v_k_1338_);
lean_dec_ref(v_vals_1335_);
lean_dec_ref(v_keys_1334_);
v_r_1340_ = lean_box(v_res_1339_);
return v_r_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_1341_, lean_object* v_keys_1342_, lean_object* v_vals_1343_, lean_object* v_heq_1344_, lean_object* v_i_1345_, lean_object* v_k_1346_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___redArg(v_keys_1342_, v_vals_1343_, v_i_1345_, v_k_1346_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1348_, lean_object* v_keys_1349_, lean_object* v_vals_1350_, lean_object* v_heq_1351_, lean_object* v_i_1352_, lean_object* v_k_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__3_spec__5_spec__9(v_00_u03b2_1348_, v_keys_1349_, v_vals_1350_, v_heq_1351_, v_i_1352_, v_k_1353_);
lean_dec(v_k_1353_);
lean_dec_ref(v_vals_1350_);
lean_dec_ref(v_keys_1349_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_1355_, lean_object* v_x_1356_, lean_object* v_x_1357_, lean_object* v_x_1358_, lean_object* v_x_1359_){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0_spec__1_spec__5___redArg(v_x_1356_, v_x_1357_, v_x_1358_, v_x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0_spec__0(lean_object* v_msgData_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v___x_1367_; lean_object* v_env_1368_; uint8_t v___x_1369_; lean_object* v_env_1370_; lean_object* v___x_1371_; lean_object* v_toCold_1372_; lean_object* v_mctx_1373_; lean_object* v_lctx_1374_; lean_object* v_options_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1367_ = lean_st_ref_get(v___y_1365_);
v_env_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc_ref(v_env_1368_);
lean_dec(v___x_1367_);
v___x_1369_ = 0;
v_env_1370_ = l_Lean_Environment_setRecordingDeps(v_env_1368_, v___x_1369_);
v___x_1371_ = lean_st_ref_get(v___y_1363_);
v_toCold_1372_ = lean_ctor_get(v___y_1364_, 0);
v_mctx_1373_ = lean_ctor_get(v___x_1371_, 0);
lean_inc_ref(v_mctx_1373_);
lean_dec(v___x_1371_);
v_lctx_1374_ = lean_ctor_get(v___y_1362_, 2);
v_options_1375_ = lean_ctor_get(v_toCold_1372_, 2);
lean_inc_ref(v_options_1375_);
lean_inc_ref(v_lctx_1374_);
v___x_1376_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1376_, 0, v_env_1370_);
lean_ctor_set(v___x_1376_, 1, v_mctx_1373_);
lean_ctor_set(v___x_1376_, 2, v_lctx_1374_);
lean_ctor_set(v___x_1376_, 3, v_options_1375_);
v___x_1377_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
lean_ctor_set(v___x_1377_, 1, v_msgData_1361_);
v___x_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0_spec__0___boxed(lean_object* v_msgData_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0_spec__0(v_msgData_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___redArg(lean_object* v_msg_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v_ref_1392_; lean_object* v___x_1393_; lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1402_; 
v_ref_1392_ = lean_ctor_get(v___y_1389_, 2);
v___x_1393_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0_spec__0(v_msg_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1396_ = v___x_1393_;
v_isShared_1397_ = v_isSharedCheck_1402_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1393_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1402_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1400_; 
lean_inc(v_ref_1392_);
v___x_1398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1398_, 0, v_ref_1392_);
lean_ctor_set(v___x_1398_, 1, v_a_1394_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set_tag(v___x_1396_, 1);
lean_ctor_set(v___x_1396_, 0, v___x_1398_);
v___x_1400_ = v___x_1396_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___redArg___boxed(lean_object* v_msg_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___redArg(v_msg_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
return v_res_1409_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__1(void){
_start:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1411_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__0));
v___x_1412_ = l_Lean_stringToMessageData(v___x_1411_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1(lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_){
_start:
{
lean_object* v_fst_1425_; lean_object* v_snd_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___x_1489_; lean_object* v_mvarId_1490_; lean_object* v___x_1491_; 
v___x_1489_ = lean_st_ref_get(v_a_1413_);
v_mvarId_1490_ = lean_ctor_get(v___x_1489_, 1);
lean_inc(v_mvarId_1490_);
lean_dec(v___x_1489_);
v___x_1491_ = l_Lean_MVarId_getType(v_mvarId_1490_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_object* v_a_1492_; 
v_a_1492_ = lean_ctor_get(v___x_1491_, 0);
lean_inc(v_a_1492_);
lean_dec_ref_known(v___x_1491_, 1);
switch(lean_obj_tag(v_a_1492_))
{
case 7:
{
lean_object* v_binderName_1493_; lean_object* v_binderType_1494_; 
v_binderName_1493_ = lean_ctor_get(v_a_1492_, 0);
lean_inc(v_binderName_1493_);
v_binderType_1494_ = lean_ctor_get(v_a_1492_, 1);
lean_inc_ref(v_binderType_1494_);
lean_dec_ref_known(v_a_1492_, 3);
v_fst_1425_ = v_binderName_1493_;
v_snd_1426_ = v_binderType_1494_;
v___y_1427_ = v_a_1413_;
v___y_1428_ = v_a_1414_;
v___y_1429_ = v_a_1415_;
v___y_1430_ = v_a_1416_;
v___y_1431_ = v_a_1417_;
v___y_1432_ = v_a_1418_;
v___y_1433_ = v_a_1419_;
v___y_1434_ = v_a_1420_;
v___y_1435_ = v_a_1421_;
v___y_1436_ = v_a_1422_;
goto v___jp_1424_;
}
case 8:
{
lean_object* v_declName_1495_; lean_object* v_type_1496_; 
v_declName_1495_ = lean_ctor_get(v_a_1492_, 0);
lean_inc(v_declName_1495_);
v_type_1496_ = lean_ctor_get(v_a_1492_, 1);
lean_inc_ref(v_type_1496_);
lean_dec_ref_known(v_a_1492_, 4);
v_fst_1425_ = v_declName_1495_;
v_snd_1426_ = v_type_1496_;
v___y_1427_ = v_a_1413_;
v___y_1428_ = v_a_1414_;
v___y_1429_ = v_a_1415_;
v___y_1430_ = v_a_1416_;
v___y_1431_ = v_a_1417_;
v___y_1432_ = v_a_1418_;
v___y_1433_ = v_a_1419_;
v___y_1434_ = v_a_1420_;
v___y_1435_ = v_a_1421_;
v___y_1436_ = v_a_1422_;
goto v___jp_1424_;
}
default: 
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec(v_a_1492_);
v___x_1497_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__1, &l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___closed__1);
v___x_1498_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___redArg(v___x_1497_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_);
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1498_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1498_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
v_a_1507_ = lean_ctor_get(v___x_1491_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1491_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1491_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
v___jp_1424_:
{
lean_object* v___x_1437_; 
v___x_1437_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName(v_fst_1425_, v_snd_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1439_; lean_object* v_mvarId_1440_; lean_object* v___x_1441_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = lean_st_ref_get(v___y_1427_);
v_mvarId_1440_ = lean_ctor_get(v___x_1439_, 1);
lean_inc(v_mvarId_1440_);
lean_dec(v___x_1439_);
v___x_1441_ = l_Lean_MVarId_intro(v_mvarId_1440_, v_a_1438_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_object* v_a_1442_; lean_object* v_fst_1443_; lean_object* v_snd_1444_; lean_object* v___x_1445_; lean_object* v_toGoalState_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1471_; 
v_a_1442_ = lean_ctor_get(v___x_1441_, 0);
lean_inc(v_a_1442_);
lean_dec_ref_known(v___x_1441_, 1);
v_fst_1443_ = lean_ctor_get(v_a_1442_, 0);
lean_inc(v_fst_1443_);
v_snd_1444_ = lean_ctor_get(v_a_1442_, 1);
lean_inc(v_snd_1444_);
lean_dec(v_a_1442_);
v___x_1445_ = lean_st_ref_take(v___y_1427_);
v_toGoalState_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1471_ == 0)
{
lean_object* v_unused_1472_; 
v_unused_1472_ = lean_ctor_get(v___x_1445_, 1);
lean_dec(v_unused_1472_);
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1471_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_toGoalState_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1471_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 1, v_snd_1444_);
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_toGoalState_1446_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_snd_1444_);
v___x_1451_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = lean_st_ref_put(v___y_1427_, v___x_1451_);
lean_inc(v_fst_1443_);
v___x_1453_ = l_Lean_Meta_Grind_registerFVarAnchor___redArg(v_fst_1443_, v___y_1427_, v___y_1429_, v___y_1430_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1460_ == 0)
{
lean_object* v_unused_1461_; 
v_unused_1461_ = lean_ctor_get(v___x_1453_, 0);
lean_dec(v_unused_1461_);
v___x_1455_ = v___x_1453_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_dec(v___x_1453_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 0, v_fst_1443_);
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_fst_1443_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_dec(v_fst_1443_);
v_a_1462_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1453_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1453_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
}
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
v_a_1473_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1475_ = v___x_1441_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1441_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1478_; 
if (v_isShared_1476_ == 0)
{
v___x_1478_ = v___x_1475_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1473_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
v_a_1481_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1437_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1437_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1___boxed(lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1(v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_);
lean_dec(v_a_1524_);
lean_dec_ref(v_a_1523_);
lean_dec(v_a_1522_);
lean_dec_ref(v_a_1521_);
lean_dec(v_a_1520_);
lean_dec_ref(v_a_1519_);
lean_dec(v_a_1518_);
lean_dec_ref(v_a_1517_);
lean_dec(v_a_1516_);
lean_dec(v_a_1515_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0(lean_object* v_00_u03b1_1527_, lean_object* v_msg_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v___x_1540_; 
v___x_1540_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___redArg(v_msg_1528_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0___boxed(lean_object* v_00_u03b1_1541_, lean_object* v_msg_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1_spec__0(v_00_u03b1_1541_, v_msg_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec(v___y_1543_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg___lam__0(lean_object* v_x_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v___x_1567_; 
lean_inc(v___y_1561_);
lean_inc_ref(v___y_1560_);
lean_inc(v___y_1559_);
lean_inc_ref(v___y_1558_);
lean_inc(v___y_1557_);
lean_inc(v___y_1556_);
v___x_1567_ = lean_apply_11(v_x_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, lean_box(0));
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg___lam__0___boxed(lean_object* v_x_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg___lam__0(v_x_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec(v___y_1569_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(lean_object* v_mvarId_1581_, lean_object* v_x_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v___f_1594_; lean_object* v___x_1595_; 
lean_inc(v___y_1588_);
lean_inc_ref(v___y_1587_);
lean_inc(v___y_1586_);
lean_inc_ref(v___y_1585_);
lean_inc(v___y_1584_);
lean_inc(v___y_1583_);
v___f_1594_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg___lam__0___boxed), 12, 7);
lean_closure_set(v___f_1594_, 0, v_x_1582_);
lean_closure_set(v___f_1594_, 1, v___y_1583_);
lean_closure_set(v___f_1594_, 2, v___y_1584_);
lean_closure_set(v___f_1594_, 3, v___y_1585_);
lean_closure_set(v___f_1594_, 4, v___y_1586_);
lean_closure_set(v___f_1594_, 5, v___y_1587_);
lean_closure_set(v___f_1594_, 6, v___y_1588_);
v___x_1595_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1581_, v___f_1594_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_);
if (lean_obj_tag(v___x_1595_) == 0)
{
return v___x_1595_;
}
else
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v___x_1595_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg___boxed(lean_object* v_mvarId_1604_, lean_object* v_x_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(v_mvarId_1604_, v_x_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec(v___y_1606_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0(lean_object* v_00_u03b1_1618_, lean_object* v_mvarId_1619_, lean_object* v_x_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(v_mvarId_1619_, v_x_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___boxed(lean_object* v_00_u03b1_1633_, lean_object* v_mvarId_1634_, lean_object* v_x_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0(v_00_u03b1_1633_, v_mvarId_1634_, v_x_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec(v___y_1636_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg___lam__0(lean_object* v_x_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v___x_1659_; 
lean_inc(v___y_1653_);
lean_inc_ref(v___y_1652_);
lean_inc(v___y_1651_);
lean_inc_ref(v___y_1650_);
lean_inc(v___y_1649_);
v___x_1659_ = lean_apply_10(v_x_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, lean_box(0));
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg___lam__0___boxed(lean_object* v_x_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg___lam__0(v_x_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(lean_object* v_mvarId_1672_, lean_object* v_x_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v___f_1684_; lean_object* v___x_1685_; 
lean_inc(v___y_1678_);
lean_inc_ref(v___y_1677_);
lean_inc(v___y_1676_);
lean_inc_ref(v___y_1675_);
lean_inc(v___y_1674_);
v___f_1684_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_1684_, 0, v_x_1673_);
lean_closure_set(v___f_1684_, 1, v___y_1674_);
lean_closure_set(v___f_1684_, 2, v___y_1675_);
lean_closure_set(v___f_1684_, 3, v___y_1676_);
lean_closure_set(v___f_1684_, 4, v___y_1677_);
lean_closure_set(v___f_1684_, 5, v___y_1678_);
v___x_1685_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1672_, v___f_1684_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1685_) == 0)
{
return v___x_1685_;
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1685_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1685_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg___boxed(lean_object* v_mvarId_1694_, lean_object* v_x_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_1694_, v_x_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3(lean_object* v_00_u03b1_1707_, lean_object* v_mvarId_1708_, lean_object* v_x_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_1708_, v_x_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___boxed(lean_object* v_00_u03b1_1721_, lean_object* v_mvarId_1722_, lean_object* v_x_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3(v_00_u03b1_1721_, v_mvarId_1722_, v_x_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
lean_dec(v___y_1732_);
lean_dec_ref(v___y_1731_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__0(lean_object* v_a_1735_, lean_object* v_generation_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_){
_start:
{
lean_object* v___x_1748_; 
lean_inc(v_a_1735_);
v___x_1748_ = l_Lean_FVarId_getDecl___redArg(v_a_1735_, v___y_1743_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = l_Lean_LocalDecl_type(v_a_1749_);
lean_dec(v_a_1749_);
lean_inc_ref(v___x_1750_);
v___x_1751_ = l_Lean_Meta_isProp(v___x_1750_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1752_; uint8_t v___x_1753_; 
v_a_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc(v_a_1752_);
lean_dec_ref_known(v___x_1751_, 1);
v___x_1753_ = lean_unbox(v_a_1752_);
if (v___x_1753_ == 0)
{
lean_object* v___x_1754_; 
lean_dec_ref(v___x_1750_);
lean_inc(v_a_1735_);
v___x_1754_ = l_Lean_FVarId_getDecl___redArg(v_a_1735_, v___y_1743_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; uint8_t v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1755_);
lean_dec_ref_known(v___x_1754_, 1);
v___x_1756_ = lean_unbox(v_a_1752_);
lean_dec(v_a_1752_);
v___x_1757_ = l_Lean_LocalDecl_value(v_a_1755_, v___x_1756_);
lean_dec(v_a_1755_);
v___x_1758_ = l_Lean_Meta_Grind_preprocessHypothesis(v___x_1757_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1759_);
lean_dec_ref_known(v___x_1758_, 1);
lean_inc(v_a_1735_);
v___x_1760_ = l_Lean_mkFVar(v_a_1735_);
v___x_1761_ = l_Lean_Meta_Sym_shareCommon(v___x_1760_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; lean_object* v___x_1763_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc(v_a_1762_);
lean_dec_ref_known(v___x_1761_, 1);
lean_inc(v_a_1759_);
v___x_1763_ = l_Lean_Meta_Simp_Result_getProof(v_a_1759_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v_expr_1765_; lean_object* v___x_1766_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v_expr_1765_ = lean_ctor_get(v_a_1759_, 0);
lean_inc_ref(v_expr_1765_);
lean_dec(v_a_1759_);
v___x_1766_ = l_Lean_Meta_Grind_addNewEq(v_a_1762_, v_expr_1765_, v_a_1764_, v_generation_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1775_; 
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1775_ == 0)
{
lean_object* v_unused_1776_; 
v_unused_1776_ = lean_ctor_get(v___x_1766_, 0);
lean_dec(v_unused_1776_);
v___x_1768_ = v___x_1766_;
v_isShared_1769_ = v_isSharedCheck_1775_;
goto v_resetjp_1767_;
}
else
{
lean_dec(v___x_1766_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1775_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1773_; 
v___x_1770_ = lean_st_ref_get(v___y_1737_);
v___x_1771_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1771_, 0, v_a_1735_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1771_);
v___x_1773_ = v___x_1768_;
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
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec(v_a_1735_);
v_a_1777_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1766_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1766_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_dec(v_a_1762_);
lean_dec(v_a_1759_);
lean_dec(v_generation_1736_);
lean_dec(v_a_1735_);
v_a_1785_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1763_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1763_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec(v_a_1759_);
lean_dec(v_generation_1736_);
lean_dec(v_a_1735_);
v_a_1793_ = lean_ctor_get(v___x_1761_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1761_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1761_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
else
{
lean_object* v_a_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1808_; 
lean_dec(v_generation_1736_);
lean_dec(v_a_1735_);
v_a_1801_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1808_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1803_ = v___x_1758_;
v_isShared_1804_ = v_isSharedCheck_1808_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_a_1801_);
lean_dec(v___x_1758_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1808_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1806_; 
if (v_isShared_1804_ == 0)
{
v___x_1806_ = v___x_1803_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_a_1801_);
v___x_1806_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
return v___x_1806_;
}
}
}
}
else
{
lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1816_; 
lean_dec(v_a_1752_);
lean_dec(v_generation_1736_);
lean_dec(v_a_1735_);
v_a_1809_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1811_ = v___x_1754_;
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v___x_1754_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1812_ == 0)
{
v___x_1814_ = v___x_1811_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1809_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
}
else
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
lean_dec(v_a_1752_);
lean_dec(v_generation_1736_);
v___x_1817_ = lean_st_ref_get(v___y_1737_);
v___x_1818_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__3));
lean_inc_ref(v___x_1750_);
v___x_1819_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName(v___x_1818_, v___x_1750_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1819_) == 0)
{
lean_object* v_a_1820_; lean_object* v_mvarId_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v_a_1820_ = lean_ctor_get(v___x_1819_, 0);
lean_inc(v_a_1820_);
lean_dec_ref_known(v___x_1819_, 1);
v_mvarId_1821_ = lean_ctor_get(v___x_1817_, 1);
lean_inc(v_mvarId_1821_);
lean_dec(v___x_1817_);
v___x_1822_ = l_Lean_mkFVar(v_a_1735_);
v___x_1823_ = l_Lean_MVarId_assert(v_mvarId_1821_, v_a_1820_, v___x_1750_, v___x_1822_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1842_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1826_ = v___x_1823_;
v_isShared_1827_ = v_isSharedCheck_1842_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1823_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1842_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; lean_object* v_toGoalState_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1840_; 
v___x_1828_ = lean_st_ref_get(v___y_1737_);
v_toGoalState_1829_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1840_ == 0)
{
lean_object* v_unused_1841_; 
v_unused_1841_ = lean_ctor_get(v___x_1828_, 1);
lean_dec(v_unused_1841_);
v___x_1831_ = v___x_1828_;
v_isShared_1832_ = v_isSharedCheck_1840_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_toGoalState_1829_);
lean_dec(v___x_1828_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1840_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 1, v_a_1824_);
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_toGoalState_1829_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_a_1824_);
v___x_1834_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
lean_object* v___x_1835_; lean_object* v___x_1837_; 
v___x_1835_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1835_);
v___x_1837_ = v___x_1826_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
v_a_1843_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1823_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1823_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
lean_dec(v___x_1817_);
lean_dec_ref(v___x_1750_);
lean_dec(v_a_1735_);
v_a_1851_ = lean_ctor_get(v___x_1819_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1819_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1819_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
lean_dec_ref(v___x_1750_);
lean_dec(v_generation_1736_);
lean_dec(v_a_1735_);
v_a_1859_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1751_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1751_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec(v_generation_1736_);
lean_dec(v_a_1735_);
v_a_1867_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1748_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1748_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__0___boxed(lean_object* v_a_1875_, lean_object* v_generation_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__0(v_a_1875_, v_generation_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
lean_dec(v___y_1880_);
lean_dec_ref(v___y_1879_);
lean_dec(v___y_1878_);
lean_dec(v___y_1877_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(lean_object* v_x_1889_, lean_object* v_x_1890_, lean_object* v_x_1891_, lean_object* v_x_1892_){
_start:
{
lean_object* v_ks_1893_; lean_object* v_vs_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1918_; 
v_ks_1893_ = lean_ctor_get(v_x_1889_, 0);
v_vs_1894_ = lean_ctor_get(v_x_1889_, 1);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_x_1889_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1896_ = v_x_1889_;
v_isShared_1897_ = v_isSharedCheck_1918_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_vs_1894_);
lean_inc(v_ks_1893_);
lean_dec(v_x_1889_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1918_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; uint8_t v___x_1899_; 
v___x_1898_ = lean_array_get_size(v_ks_1893_);
v___x_1899_ = lean_nat_dec_lt(v_x_1890_, v___x_1898_);
if (v___x_1899_ == 0)
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
lean_dec(v_x_1890_);
v___x_1900_ = lean_array_push(v_ks_1893_, v_x_1891_);
v___x_1901_ = lean_array_push(v_vs_1894_, v_x_1892_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 1, v___x_1901_);
lean_ctor_set(v___x_1896_, 0, v___x_1900_);
v___x_1903_ = v___x_1896_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1900_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
else
{
lean_object* v_k_x27_1905_; uint8_t v___x_1906_; 
v_k_x27_1905_ = lean_array_fget_borrowed(v_ks_1893_, v_x_1890_);
v___x_1906_ = l_Lean_instBEqMVarId_beq(v_x_1891_, v_k_x27_1905_);
if (v___x_1906_ == 0)
{
lean_object* v___x_1908_; 
if (v_isShared_1897_ == 0)
{
v___x_1908_ = v___x_1896_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_ks_1893_);
lean_ctor_set(v_reuseFailAlloc_1912_, 1, v_vs_1894_);
v___x_1908_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_unsigned_to_nat(1u);
v___x_1910_ = lean_nat_add(v_x_1890_, v___x_1909_);
lean_dec(v_x_1890_);
v_x_1889_ = v___x_1908_;
v_x_1890_ = v___x_1910_;
goto _start;
}
}
else
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1916_; 
v___x_1913_ = lean_array_fset(v_ks_1893_, v_x_1890_, v_x_1891_);
v___x_1914_ = lean_array_fset(v_vs_1894_, v_x_1890_, v_x_1892_);
lean_dec(v_x_1890_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 1, v___x_1914_);
lean_ctor_set(v___x_1896_, 0, v___x_1913_);
v___x_1916_ = v___x_1896_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1913_);
lean_ctor_set(v_reuseFailAlloc_1917_, 1, v___x_1914_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6___redArg(lean_object* v_n_1919_, lean_object* v_k_1920_, lean_object* v_v_1921_){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = lean_unsigned_to_nat(0u);
v___x_1923_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_n_1919_, v___x_1922_, v_k_1920_, v_v_1921_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg(lean_object* v_x_1924_, size_t v_x_1925_, size_t v_x_1926_, lean_object* v_x_1927_, lean_object* v_x_1928_){
_start:
{
if (lean_obj_tag(v_x_1924_) == 0)
{
lean_object* v_es_1929_; size_t v___x_1930_; size_t v___x_1931_; lean_object* v_j_1932_; lean_object* v___x_1933_; uint8_t v___x_1934_; 
v_es_1929_ = lean_ctor_get(v_x_1924_, 0);
v___x_1930_ = ((size_t)31ULL);
v___x_1931_ = lean_usize_land(v_x_1925_, v___x_1930_);
v_j_1932_ = lean_usize_to_nat(v___x_1931_);
v___x_1933_ = lean_array_get_size(v_es_1929_);
v___x_1934_ = lean_nat_dec_lt(v_j_1932_, v___x_1933_);
if (v___x_1934_ == 0)
{
lean_dec(v_j_1932_);
lean_dec(v_x_1928_);
lean_dec(v_x_1927_);
return v_x_1924_;
}
else
{
lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1973_; 
lean_inc_ref(v_es_1929_);
v_isSharedCheck_1973_ = !lean_is_exclusive(v_x_1924_);
if (v_isSharedCheck_1973_ == 0)
{
lean_object* v_unused_1974_; 
v_unused_1974_ = lean_ctor_get(v_x_1924_, 0);
lean_dec(v_unused_1974_);
v___x_1936_ = v_x_1924_;
v_isShared_1937_ = v_isSharedCheck_1973_;
goto v_resetjp_1935_;
}
else
{
lean_dec(v_x_1924_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1973_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v_v_1938_; lean_object* v___x_1939_; lean_object* v_xs_x27_1940_; lean_object* v___y_1942_; 
v_v_1938_ = lean_array_fget(v_es_1929_, v_j_1932_);
v___x_1939_ = lean_box(0);
v_xs_x27_1940_ = lean_array_fset(v_es_1929_, v_j_1932_, v___x_1939_);
switch(lean_obj_tag(v_v_1938_))
{
case 0:
{
lean_object* v_key_1947_; lean_object* v_val_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1958_; 
v_key_1947_ = lean_ctor_get(v_v_1938_, 0);
v_val_1948_ = lean_ctor_get(v_v_1938_, 1);
v_isSharedCheck_1958_ = !lean_is_exclusive(v_v_1938_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1950_ = v_v_1938_;
v_isShared_1951_ = v_isSharedCheck_1958_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_val_1948_);
lean_inc(v_key_1947_);
lean_dec(v_v_1938_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1958_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
uint8_t v___x_1952_; 
v___x_1952_ = l_Lean_instBEqMVarId_beq(v_x_1927_, v_key_1947_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1953_; lean_object* v___x_1954_; 
lean_del_object(v___x_1950_);
v___x_1953_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1947_, v_val_1948_, v_x_1927_, v_x_1928_);
v___x_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
v___y_1942_ = v___x_1954_;
goto v___jp_1941_;
}
else
{
lean_object* v___x_1956_; 
lean_dec(v_val_1948_);
lean_dec(v_key_1947_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 1, v_x_1928_);
lean_ctor_set(v___x_1950_, 0, v_x_1927_);
v___x_1956_ = v___x_1950_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_x_1927_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_x_1928_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
v___y_1942_ = v___x_1956_;
goto v___jp_1941_;
}
}
}
}
case 1:
{
lean_object* v_node_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1971_; 
v_node_1959_ = lean_ctor_get(v_v_1938_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v_v_1938_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1961_ = v_v_1938_;
v_isShared_1962_ = v_isSharedCheck_1971_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_node_1959_);
lean_dec(v_v_1938_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1971_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
size_t v___x_1963_; size_t v___x_1964_; size_t v___x_1965_; size_t v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1969_; 
v___x_1963_ = ((size_t)5ULL);
v___x_1964_ = lean_usize_shift_right(v_x_1925_, v___x_1963_);
v___x_1965_ = ((size_t)1ULL);
v___x_1966_ = lean_usize_add(v_x_1926_, v___x_1965_);
v___x_1967_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg(v_node_1959_, v___x_1964_, v___x_1966_, v_x_1927_, v_x_1928_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1967_);
v___x_1969_ = v___x_1961_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1967_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
v___y_1942_ = v___x_1969_;
goto v___jp_1941_;
}
}
}
default: 
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1972_, 0, v_x_1927_);
lean_ctor_set(v___x_1972_, 1, v_x_1928_);
v___y_1942_ = v___x_1972_;
goto v___jp_1941_;
}
}
v___jp_1941_:
{
lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1943_ = lean_array_fset(v_xs_x27_1940_, v_j_1932_, v___y_1942_);
lean_dec(v_j_1932_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 0, v___x_1943_);
v___x_1945_ = v___x_1936_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
else
{
lean_object* v_ks_1975_; lean_object* v_vs_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1994_; 
v_ks_1975_ = lean_ctor_get(v_x_1924_, 0);
v_vs_1976_ = lean_ctor_get(v_x_1924_, 1);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_x_1924_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1978_ = v_x_1924_;
v_isShared_1979_ = v_isSharedCheck_1994_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_vs_1976_);
lean_inc(v_ks_1975_);
lean_dec(v_x_1924_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1994_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_ks_1975_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v_vs_1976_);
v___x_1981_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v_newNode_1982_; size_t v___x_1983_; uint8_t v___x_1984_; 
v_newNode_1982_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6___redArg(v___x_1981_, v_x_1927_, v_x_1928_);
v___x_1983_ = ((size_t)7ULL);
v___x_1984_ = lean_usize_dec_le(v___x_1983_, v_x_1926_);
if (v___x_1984_ == 0)
{
lean_object* v___x_1985_; lean_object* v___x_1986_; uint8_t v___x_1987_; 
v___x_1985_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1982_);
v___x_1986_ = lean_unsigned_to_nat(4u);
v___x_1987_ = lean_nat_dec_lt(v___x_1985_, v___x_1986_);
lean_dec(v___x_1985_);
if (v___x_1987_ == 0)
{
lean_object* v_ks_1988_; lean_object* v_vs_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v_ks_1988_ = lean_ctor_get(v_newNode_1982_, 0);
lean_inc_ref(v_ks_1988_);
v_vs_1989_ = lean_ctor_get(v_newNode_1982_, 1);
lean_inc_ref(v_vs_1989_);
lean_dec_ref(v_newNode_1982_);
v___x_1990_ = lean_unsigned_to_nat(0u);
v___x_1991_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName_spec__0_spec__0___redArg___closed__0);
v___x_1992_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___redArg(v_x_1926_, v_ks_1988_, v_vs_1989_, v___x_1990_, v___x_1991_);
lean_dec_ref(v_vs_1989_);
lean_dec_ref(v_ks_1988_);
return v___x_1992_;
}
else
{
return v_newNode_1982_;
}
}
else
{
return v_newNode_1982_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___redArg(size_t v_depth_1995_, lean_object* v_keys_1996_, lean_object* v_vals_1997_, lean_object* v_i_1998_, lean_object* v_entries_1999_){
_start:
{
lean_object* v___x_2000_; uint8_t v___x_2001_; 
v___x_2000_ = lean_array_get_size(v_keys_1996_);
v___x_2001_ = lean_nat_dec_lt(v_i_1998_, v___x_2000_);
if (v___x_2001_ == 0)
{
lean_dec(v_i_1998_);
return v_entries_1999_;
}
else
{
lean_object* v_k_2002_; lean_object* v_v_2003_; uint64_t v___x_2004_; size_t v_h_2005_; size_t v___x_2006_; lean_object* v___x_2007_; size_t v___x_2008_; size_t v___x_2009_; size_t v___x_2010_; size_t v_h_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v_k_2002_ = lean_array_fget_borrowed(v_keys_1996_, v_i_1998_);
v_v_2003_ = lean_array_fget_borrowed(v_vals_1997_, v_i_1998_);
v___x_2004_ = l_Lean_instHashableMVarId_hash(v_k_2002_);
v_h_2005_ = lean_uint64_to_usize(v___x_2004_);
v___x_2006_ = ((size_t)5ULL);
v___x_2007_ = lean_unsigned_to_nat(1u);
v___x_2008_ = ((size_t)1ULL);
v___x_2009_ = lean_usize_sub(v_depth_1995_, v___x_2008_);
v___x_2010_ = lean_usize_mul(v___x_2006_, v___x_2009_);
v_h_2011_ = lean_usize_shift_right(v_h_2005_, v___x_2010_);
v___x_2012_ = lean_nat_add(v_i_1998_, v___x_2007_);
lean_dec(v_i_1998_);
lean_inc(v_v_2003_);
lean_inc(v_k_2002_);
v___x_2013_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg(v_entries_1999_, v_h_2011_, v_depth_1995_, v_k_2002_, v_v_2003_);
v_i_1998_ = v___x_2012_;
v_entries_1999_ = v___x_2013_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_depth_2015_, lean_object* v_keys_2016_, lean_object* v_vals_2017_, lean_object* v_i_2018_, lean_object* v_entries_2019_){
_start:
{
size_t v_depth_boxed_2020_; lean_object* v_res_2021_; 
v_depth_boxed_2020_ = lean_unbox_usize(v_depth_2015_);
lean_dec(v_depth_2015_);
v_res_2021_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___redArg(v_depth_boxed_2020_, v_keys_2016_, v_vals_2017_, v_i_2018_, v_entries_2019_);
lean_dec_ref(v_vals_2017_);
lean_dec_ref(v_keys_2016_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_2022_, lean_object* v_x_2023_, lean_object* v_x_2024_, lean_object* v_x_2025_, lean_object* v_x_2026_){
_start:
{
size_t v_x_171420__boxed_2027_; size_t v_x_171421__boxed_2028_; lean_object* v_res_2029_; 
v_x_171420__boxed_2027_ = lean_unbox_usize(v_x_2023_);
lean_dec(v_x_2023_);
v_x_171421__boxed_2028_ = lean_unbox_usize(v_x_2024_);
lean_dec(v_x_2024_);
v_res_2029_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg(v_x_2022_, v_x_171420__boxed_2027_, v_x_171421__boxed_2028_, v_x_2025_, v_x_2026_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1___redArg(lean_object* v_x_2030_, lean_object* v_x_2031_, lean_object* v_x_2032_){
_start:
{
uint64_t v___x_2033_; size_t v___x_2034_; size_t v___x_2035_; lean_object* v___x_2036_; 
v___x_2033_ = l_Lean_instHashableMVarId_hash(v_x_2031_);
v___x_2034_ = lean_uint64_to_usize(v___x_2033_);
v___x_2035_ = ((size_t)1ULL);
v___x_2036_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg(v_x_2030_, v___x_2034_, v___x_2035_, v_x_2031_, v_x_2032_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg(lean_object* v_mvarId_2037_, lean_object* v_val_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v___x_2041_; lean_object* v_mctx_2042_; lean_object* v_cache_2043_; lean_object* v_zetaDeltaFVarIds_2044_; lean_object* v_postponed_2045_; lean_object* v_diag_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2075_; 
v___x_2041_ = lean_st_ref_take(v___y_2039_);
v_mctx_2042_ = lean_ctor_get(v___x_2041_, 0);
v_cache_2043_ = lean_ctor_get(v___x_2041_, 1);
v_zetaDeltaFVarIds_2044_ = lean_ctor_get(v___x_2041_, 2);
v_postponed_2045_ = lean_ctor_get(v___x_2041_, 3);
v_diag_2046_ = lean_ctor_get(v___x_2041_, 4);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2048_ = v___x_2041_;
v_isShared_2049_ = v_isSharedCheck_2075_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_diag_2046_);
lean_inc(v_postponed_2045_);
lean_inc(v_zetaDeltaFVarIds_2044_);
lean_inc(v_cache_2043_);
lean_inc(v_mctx_2042_);
lean_dec(v___x_2041_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2075_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v_depth_2050_; lean_object* v_levelAssignDepth_2051_; lean_object* v_lmvarCounter_2052_; lean_object* v_mvarCounter_2053_; lean_object* v_lDecls_2054_; lean_object* v_decls_2055_; lean_object* v_userNames_2056_; lean_object* v_lAssignment_2057_; lean_object* v_eAssignment_2058_; lean_object* v_dAssignment_2059_; lean_object* v_instanceTypedMVars_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2074_; 
v_depth_2050_ = lean_ctor_get(v_mctx_2042_, 0);
v_levelAssignDepth_2051_ = lean_ctor_get(v_mctx_2042_, 1);
v_lmvarCounter_2052_ = lean_ctor_get(v_mctx_2042_, 2);
v_mvarCounter_2053_ = lean_ctor_get(v_mctx_2042_, 3);
v_lDecls_2054_ = lean_ctor_get(v_mctx_2042_, 4);
v_decls_2055_ = lean_ctor_get(v_mctx_2042_, 5);
v_userNames_2056_ = lean_ctor_get(v_mctx_2042_, 6);
v_lAssignment_2057_ = lean_ctor_get(v_mctx_2042_, 7);
v_eAssignment_2058_ = lean_ctor_get(v_mctx_2042_, 8);
v_dAssignment_2059_ = lean_ctor_get(v_mctx_2042_, 9);
v_instanceTypedMVars_2060_ = lean_ctor_get(v_mctx_2042_, 10);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_mctx_2042_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2062_ = v_mctx_2042_;
v_isShared_2063_ = v_isSharedCheck_2074_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_instanceTypedMVars_2060_);
lean_inc(v_dAssignment_2059_);
lean_inc(v_eAssignment_2058_);
lean_inc(v_lAssignment_2057_);
lean_inc(v_userNames_2056_);
lean_inc(v_decls_2055_);
lean_inc(v_lDecls_2054_);
lean_inc(v_mvarCounter_2053_);
lean_inc(v_lmvarCounter_2052_);
lean_inc(v_levelAssignDepth_2051_);
lean_inc(v_depth_2050_);
lean_dec(v_mctx_2042_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2074_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2067_; 
v___x_2064_ = lean_box(0);
v___x_2065_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1___redArg(v_eAssignment_2058_, v_mvarId_2037_, v_val_2038_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 8, v___x_2065_);
v___x_2067_ = v___x_2062_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_depth_2050_);
lean_ctor_set(v_reuseFailAlloc_2073_, 1, v_levelAssignDepth_2051_);
lean_ctor_set(v_reuseFailAlloc_2073_, 2, v_lmvarCounter_2052_);
lean_ctor_set(v_reuseFailAlloc_2073_, 3, v_mvarCounter_2053_);
lean_ctor_set(v_reuseFailAlloc_2073_, 4, v_lDecls_2054_);
lean_ctor_set(v_reuseFailAlloc_2073_, 5, v_decls_2055_);
lean_ctor_set(v_reuseFailAlloc_2073_, 6, v_userNames_2056_);
lean_ctor_set(v_reuseFailAlloc_2073_, 7, v_lAssignment_2057_);
lean_ctor_set(v_reuseFailAlloc_2073_, 8, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2073_, 9, v_dAssignment_2059_);
lean_ctor_set(v_reuseFailAlloc_2073_, 10, v_instanceTypedMVars_2060_);
v___x_2067_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2069_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v___x_2067_);
v___x_2069_ = v___x_2048_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v___x_2067_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v_cache_2043_);
lean_ctor_set(v_reuseFailAlloc_2072_, 2, v_zetaDeltaFVarIds_2044_);
lean_ctor_set(v_reuseFailAlloc_2072_, 3, v_postponed_2045_);
lean_ctor_set(v_reuseFailAlloc_2072_, 4, v_diag_2046_);
v___x_2069_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_st_ref_put(v___y_2039_, v___x_2069_);
v___x_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2064_);
return v___x_2071_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg___boxed(lean_object* v_mvarId_2076_, lean_object* v_val_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg(v_mvarId_2076_, v_val_2077_, v___y_2078_);
lean_dec(v___y_2078_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___redArg(lean_object* v___y_2081_){
_start:
{
lean_object* v___x_2083_; lean_object* v_ngen_2084_; lean_object* v_namePrefix_2085_; lean_object* v_idx_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2116_; 
v___x_2083_ = lean_st_ref_get(v___y_2081_);
v_ngen_2084_ = lean_ctor_get(v___x_2083_, 2);
lean_inc_ref(v_ngen_2084_);
lean_dec(v___x_2083_);
v_namePrefix_2085_ = lean_ctor_get(v_ngen_2084_, 0);
v_idx_2086_ = lean_ctor_get(v_ngen_2084_, 1);
v_isSharedCheck_2116_ = !lean_is_exclusive(v_ngen_2084_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2088_ = v_ngen_2084_;
v_isShared_2089_ = v_isSharedCheck_2116_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_idx_2086_);
lean_inc(v_namePrefix_2085_);
lean_dec(v_ngen_2084_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2116_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v_r_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2094_; 
lean_inc(v_idx_2086_);
lean_inc(v_namePrefix_2085_);
v_r_2090_ = l_Lean_Name_num___override(v_namePrefix_2085_, v_idx_2086_);
v___x_2091_ = lean_unsigned_to_nat(1u);
v___x_2092_ = lean_nat_add(v_idx_2086_, v___x_2091_);
lean_dec(v_idx_2086_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 1, v___x_2092_);
v___x_2094_ = v___x_2088_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_namePrefix_2085_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
lean_object* v___x_2095_; lean_object* v_env_2096_; lean_object* v_nextMacroScope_2097_; lean_object* v_auxDeclNGen_2098_; lean_object* v_traceState_2099_; lean_object* v_cache_2100_; lean_object* v_recordedDeps_2101_; lean_object* v_messages_2102_; lean_object* v_infoState_2103_; lean_object* v_snapshotTasks_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2113_; 
v___x_2095_ = lean_st_ref_take(v___y_2081_);
v_env_2096_ = lean_ctor_get(v___x_2095_, 0);
v_nextMacroScope_2097_ = lean_ctor_get(v___x_2095_, 1);
v_auxDeclNGen_2098_ = lean_ctor_get(v___x_2095_, 3);
v_traceState_2099_ = lean_ctor_get(v___x_2095_, 4);
v_cache_2100_ = lean_ctor_get(v___x_2095_, 5);
v_recordedDeps_2101_ = lean_ctor_get(v___x_2095_, 6);
v_messages_2102_ = lean_ctor_get(v___x_2095_, 7);
v_infoState_2103_ = lean_ctor_get(v___x_2095_, 8);
v_snapshotTasks_2104_ = lean_ctor_get(v___x_2095_, 9);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2113_ == 0)
{
lean_object* v_unused_2114_; 
v_unused_2114_ = lean_ctor_get(v___x_2095_, 2);
lean_dec(v_unused_2114_);
v___x_2106_ = v___x_2095_;
v_isShared_2107_ = v_isSharedCheck_2113_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_snapshotTasks_2104_);
lean_inc(v_infoState_2103_);
lean_inc(v_messages_2102_);
lean_inc(v_recordedDeps_2101_);
lean_inc(v_cache_2100_);
lean_inc(v_traceState_2099_);
lean_inc(v_auxDeclNGen_2098_);
lean_inc(v_nextMacroScope_2097_);
lean_inc(v_env_2096_);
lean_dec(v___x_2095_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2113_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2109_; 
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 2, v___x_2094_);
v___x_2109_ = v___x_2106_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_env_2096_);
lean_ctor_set(v_reuseFailAlloc_2112_, 1, v_nextMacroScope_2097_);
lean_ctor_set(v_reuseFailAlloc_2112_, 2, v___x_2094_);
lean_ctor_set(v_reuseFailAlloc_2112_, 3, v_auxDeclNGen_2098_);
lean_ctor_set(v_reuseFailAlloc_2112_, 4, v_traceState_2099_);
lean_ctor_set(v_reuseFailAlloc_2112_, 5, v_cache_2100_);
lean_ctor_set(v_reuseFailAlloc_2112_, 6, v_recordedDeps_2101_);
lean_ctor_set(v_reuseFailAlloc_2112_, 7, v_messages_2102_);
lean_ctor_set(v_reuseFailAlloc_2112_, 8, v_infoState_2103_);
lean_ctor_set(v_reuseFailAlloc_2112_, 9, v_snapshotTasks_2104_);
v___x_2109_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = lean_st_ref_put(v___y_2081_, v___x_2109_);
v___x_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2111_, 0, v_r_2090_);
return v___x_2111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___redArg___boxed(lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___redArg(v___y_2117_);
lean_dec(v___y_2117_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2(lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v___x_2131_; lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
v___x_2131_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___redArg(v___y_2129_);
v_a_2132_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2131_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2131_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2___boxed(lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2(v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
lean_dec(v___y_2141_);
lean_dec(v___y_2140_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4(lean_object* v___x_2157_, lean_object* v_a_2158_, uint8_t v___x_2159_, uint8_t v___x_2160_, uint8_t v___x_2161_, lean_object* v_a_2162_, lean_object* v___x_2163_, lean_object* v_expr_2164_, lean_object* v___x_2165_, lean_object* v_val_2166_, lean_object* v_mvarId_2167_, lean_object* v___x_2168_, lean_object* v_a_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v___x_2181_; 
v___x_2181_ = l_Lean_Meta_mkLambdaFVars(v___x_2157_, v_a_2158_, v___x_2159_, v___x_2160_, v___x_2159_, v___x_2160_, v___x_2161_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2182_);
lean_dec_ref_known(v___x_2181_, 1);
v___x_2183_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___closed__1));
v___x_2184_ = lean_box(0);
v___x_2185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2185_, 0, v_a_2162_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
v___x_2186_ = l_Lean_mkConst(v___x_2183_, v___x_2185_);
v___x_2187_ = lean_unsigned_to_nat(5u);
v___x_2188_ = lean_mk_empty_array_with_capacity(v___x_2187_);
v___x_2189_ = lean_array_push(v___x_2188_, v___x_2163_);
v___x_2190_ = lean_array_push(v___x_2189_, v_expr_2164_);
v___x_2191_ = lean_array_push(v___x_2190_, v___x_2165_);
v___x_2192_ = lean_array_push(v___x_2191_, v_val_2166_);
v___x_2193_ = lean_array_push(v___x_2192_, v_a_2182_);
v___x_2194_ = l_Lean_mkAppN(v___x_2186_, v___x_2193_);
lean_dec_ref(v___x_2193_);
v___x_2195_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg(v_mvarId_2167_, v___x_2194_, v___y_2177_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2213_; 
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2213_ == 0)
{
lean_object* v_unused_2214_; 
v_unused_2214_ = lean_ctor_get(v___x_2195_, 0);
lean_dec(v_unused_2214_);
v___x_2197_ = v___x_2195_;
v_isShared_2198_ = v_isSharedCheck_2213_;
goto v_resetjp_2196_;
}
else
{
lean_dec(v___x_2195_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2213_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2199_; lean_object* v_toGoalState_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2211_; 
v___x_2199_ = lean_st_ref_get(v___y_2170_);
v_toGoalState_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2211_ == 0)
{
lean_object* v_unused_2212_; 
v_unused_2212_ = lean_ctor_get(v___x_2199_, 1);
lean_dec(v_unused_2212_);
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2211_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_toGoalState_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2211_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 1, v___x_2168_);
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_toGoalState_2200_);
lean_ctor_set(v_reuseFailAlloc_2210_, 1, v___x_2168_);
v___x_2205_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
lean_object* v___x_2206_; lean_object* v___x_2208_; 
v___x_2206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2206_, 0, v_a_2169_);
lean_ctor_set(v___x_2206_, 1, v___x_2205_);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v___x_2206_);
v___x_2208_ = v___x_2197_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2206_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
}
else
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2222_; 
lean_dec(v_a_2169_);
lean_dec(v___x_2168_);
v_a_2215_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2217_ = v___x_2195_;
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2195_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
lean_dec(v_a_2169_);
lean_dec(v___x_2168_);
lean_dec(v_mvarId_2167_);
lean_dec_ref(v_val_2166_);
lean_dec_ref(v___x_2165_);
lean_dec_ref(v_expr_2164_);
lean_dec_ref(v___x_2163_);
lean_dec(v_a_2162_);
v_a_2223_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2181_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2181_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___boxed(lean_object** _args){
lean_object* v___x_2231_ = _args[0];
lean_object* v_a_2232_ = _args[1];
lean_object* v___x_2233_ = _args[2];
lean_object* v___x_2234_ = _args[3];
lean_object* v___x_2235_ = _args[4];
lean_object* v_a_2236_ = _args[5];
lean_object* v___x_2237_ = _args[6];
lean_object* v_expr_2238_ = _args[7];
lean_object* v___x_2239_ = _args[8];
lean_object* v_val_2240_ = _args[9];
lean_object* v_mvarId_2241_ = _args[10];
lean_object* v___x_2242_ = _args[11];
lean_object* v_a_2243_ = _args[12];
lean_object* v___y_2244_ = _args[13];
lean_object* v___y_2245_ = _args[14];
lean_object* v___y_2246_ = _args[15];
lean_object* v___y_2247_ = _args[16];
lean_object* v___y_2248_ = _args[17];
lean_object* v___y_2249_ = _args[18];
lean_object* v___y_2250_ = _args[19];
lean_object* v___y_2251_ = _args[20];
lean_object* v___y_2252_ = _args[21];
lean_object* v___y_2253_ = _args[22];
lean_object* v___y_2254_ = _args[23];
_start:
{
uint8_t v___x_171742__boxed_2255_; uint8_t v___x_171743__boxed_2256_; uint8_t v___x_171744__boxed_2257_; lean_object* v_res_2258_; 
v___x_171742__boxed_2255_ = lean_unbox(v___x_2233_);
v___x_171743__boxed_2256_ = lean_unbox(v___x_2234_);
v___x_171744__boxed_2257_ = lean_unbox(v___x_2235_);
v_res_2258_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4(v___x_2231_, v_a_2232_, v___x_171742__boxed_2255_, v___x_171743__boxed_2256_, v___x_171744__boxed_2257_, v_a_2236_, v___x_2237_, v_expr_2238_, v___x_2239_, v_val_2240_, v_mvarId_2241_, v___x_2242_, v_a_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec_ref(v___y_2248_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec_ref(v___x_2231_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3(lean_object* v___x_2264_, lean_object* v_a_2265_, uint8_t v___x_2266_, uint8_t v___x_2267_, uint8_t v___x_2268_, lean_object* v_a_2269_, lean_object* v___x_2270_, lean_object* v___x_2271_, lean_object* v_expr_2272_, lean_object* v___x_2273_, lean_object* v_val_2274_, lean_object* v_mvarId_2275_, lean_object* v___x_2276_, lean_object* v_a_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = l_Lean_Meta_mkLambdaFVars(v___x_2264_, v_a_2265_, v___x_2266_, v___x_2267_, v___x_2266_, v___x_2267_, v___x_2268_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2289_, 1);
v___x_2291_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___closed__1));
v___x_2292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2292_, 0, v_a_2269_);
lean_ctor_set(v___x_2292_, 1, v___x_2270_);
v___x_2293_ = l_Lean_mkConst(v___x_2291_, v___x_2292_);
v___x_2294_ = lean_unsigned_to_nat(5u);
v___x_2295_ = lean_mk_empty_array_with_capacity(v___x_2294_);
v___x_2296_ = lean_array_push(v___x_2295_, v___x_2271_);
v___x_2297_ = lean_array_push(v___x_2296_, v_expr_2272_);
v___x_2298_ = lean_array_push(v___x_2297_, v___x_2273_);
v___x_2299_ = lean_array_push(v___x_2298_, v_val_2274_);
v___x_2300_ = lean_array_push(v___x_2299_, v_a_2290_);
v___x_2301_ = l_Lean_mkAppN(v___x_2293_, v___x_2300_);
lean_dec_ref(v___x_2300_);
v___x_2302_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg(v_mvarId_2275_, v___x_2301_, v___y_2285_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2320_; 
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2320_ == 0)
{
lean_object* v_unused_2321_; 
v_unused_2321_ = lean_ctor_get(v___x_2302_, 0);
lean_dec(v_unused_2321_);
v___x_2304_ = v___x_2302_;
v_isShared_2305_ = v_isSharedCheck_2320_;
goto v_resetjp_2303_;
}
else
{
lean_dec(v___x_2302_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2320_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2306_; lean_object* v_toGoalState_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2318_; 
v___x_2306_ = lean_st_ref_get(v___y_2278_);
v_toGoalState_2307_ = lean_ctor_get(v___x_2306_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2306_);
if (v_isSharedCheck_2318_ == 0)
{
lean_object* v_unused_2319_; 
v_unused_2319_ = lean_ctor_get(v___x_2306_, 1);
lean_dec(v_unused_2319_);
v___x_2309_ = v___x_2306_;
v_isShared_2310_ = v_isSharedCheck_2318_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_toGoalState_2307_);
lean_dec(v___x_2306_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2318_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 1, v___x_2276_);
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_toGoalState_2307_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v___x_2276_);
v___x_2312_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; lean_object* v___x_2315_; 
v___x_2313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2313_, 0, v_a_2277_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
if (v_isShared_2305_ == 0)
{
lean_ctor_set(v___x_2304_, 0, v___x_2313_);
v___x_2315_ = v___x_2304_;
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
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec(v_a_2277_);
lean_dec(v___x_2276_);
v_a_2322_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2302_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2302_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_dec(v_a_2277_);
lean_dec(v___x_2276_);
lean_dec(v_mvarId_2275_);
lean_dec_ref(v_val_2274_);
lean_dec_ref(v___x_2273_);
lean_dec_ref(v_expr_2272_);
lean_dec_ref(v___x_2271_);
lean_dec(v___x_2270_);
lean_dec(v_a_2269_);
v_a_2330_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2289_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2289_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___boxed(lean_object** _args){
lean_object* v___x_2338_ = _args[0];
lean_object* v_a_2339_ = _args[1];
lean_object* v___x_2340_ = _args[2];
lean_object* v___x_2341_ = _args[3];
lean_object* v___x_2342_ = _args[4];
lean_object* v_a_2343_ = _args[5];
lean_object* v___x_2344_ = _args[6];
lean_object* v___x_2345_ = _args[7];
lean_object* v_expr_2346_ = _args[8];
lean_object* v___x_2347_ = _args[9];
lean_object* v_val_2348_ = _args[10];
lean_object* v_mvarId_2349_ = _args[11];
lean_object* v___x_2350_ = _args[12];
lean_object* v_a_2351_ = _args[13];
lean_object* v___y_2352_ = _args[14];
lean_object* v___y_2353_ = _args[15];
lean_object* v___y_2354_ = _args[16];
lean_object* v___y_2355_ = _args[17];
lean_object* v___y_2356_ = _args[18];
lean_object* v___y_2357_ = _args[19];
lean_object* v___y_2358_ = _args[20];
lean_object* v___y_2359_ = _args[21];
lean_object* v___y_2360_ = _args[22];
lean_object* v___y_2361_ = _args[23];
lean_object* v___y_2362_ = _args[24];
_start:
{
uint8_t v___x_171924__boxed_2363_; uint8_t v___x_171925__boxed_2364_; uint8_t v___x_171926__boxed_2365_; lean_object* v_res_2366_; 
v___x_171924__boxed_2363_ = lean_unbox(v___x_2340_);
v___x_171925__boxed_2364_ = lean_unbox(v___x_2341_);
v___x_171926__boxed_2365_ = lean_unbox(v___x_2342_);
v_res_2366_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3(v___x_2338_, v_a_2339_, v___x_171924__boxed_2363_, v___x_171925__boxed_2364_, v___x_171926__boxed_2365_, v_a_2343_, v___x_2344_, v___x_2345_, v_expr_2346_, v___x_2347_, v_val_2348_, v_mvarId_2349_, v___x_2350_, v_a_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
lean_dec(v___y_2353_);
lean_dec(v___y_2352_);
lean_dec_ref(v___x_2338_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__2(lean_object* v___x_2367_, lean_object* v_a_2368_, uint8_t v___x_2369_, uint8_t v___x_2370_, uint8_t v___x_2371_, lean_object* v_mvarId_2372_, lean_object* v___x_2373_, lean_object* v_a_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = l_Lean_Meta_mkLambdaFVars(v___x_2367_, v_a_2368_, v___x_2369_, v___x_2370_, v___x_2369_, v___x_2370_, v___x_2371_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___x_2388_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref_known(v___x_2386_, 1);
v___x_2388_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg(v_mvarId_2372_, v_a_2387_, v___y_2382_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2406_; 
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2406_ == 0)
{
lean_object* v_unused_2407_; 
v_unused_2407_ = lean_ctor_get(v___x_2388_, 0);
lean_dec(v_unused_2407_);
v___x_2390_ = v___x_2388_;
v_isShared_2391_ = v_isSharedCheck_2406_;
goto v_resetjp_2389_;
}
else
{
lean_dec(v___x_2388_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2406_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; lean_object* v_toGoalState_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2404_; 
v___x_2392_ = lean_st_ref_get(v___y_2375_);
v_toGoalState_2393_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2404_ == 0)
{
lean_object* v_unused_2405_; 
v_unused_2405_ = lean_ctor_get(v___x_2392_, 1);
lean_dec(v_unused_2405_);
v___x_2395_ = v___x_2392_;
v_isShared_2396_ = v_isSharedCheck_2404_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_toGoalState_2393_);
lean_dec(v___x_2392_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2404_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
lean_ctor_set(v___x_2395_, 1, v___x_2373_);
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_toGoalState_2393_);
lean_ctor_set(v_reuseFailAlloc_2403_, 1, v___x_2373_);
v___x_2398_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
lean_object* v___x_2399_; lean_object* v___x_2401_; 
v___x_2399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2399_, 0, v_a_2374_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
if (v_isShared_2391_ == 0)
{
lean_ctor_set(v___x_2390_, 0, v___x_2399_);
v___x_2401_ = v___x_2390_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v___x_2399_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
}
}
else
{
lean_object* v_a_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2415_; 
lean_dec(v_a_2374_);
lean_dec(v___x_2373_);
v_a_2408_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2415_ == 0)
{
v___x_2410_ = v___x_2388_;
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_a_2408_);
lean_dec(v___x_2388_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_a_2408_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
else
{
lean_object* v_a_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2423_; 
lean_dec(v_a_2374_);
lean_dec(v___x_2373_);
lean_dec(v_mvarId_2372_);
v_a_2416_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2418_ = v___x_2386_;
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_a_2416_);
lean_dec(v___x_2386_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2421_; 
if (v_isShared_2419_ == 0)
{
v___x_2421_ = v___x_2418_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v_a_2416_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__2___boxed(lean_object** _args){
lean_object* v___x_2424_ = _args[0];
lean_object* v_a_2425_ = _args[1];
lean_object* v___x_2426_ = _args[2];
lean_object* v___x_2427_ = _args[3];
lean_object* v___x_2428_ = _args[4];
lean_object* v_mvarId_2429_ = _args[5];
lean_object* v___x_2430_ = _args[6];
lean_object* v_a_2431_ = _args[7];
lean_object* v___y_2432_ = _args[8];
lean_object* v___y_2433_ = _args[9];
lean_object* v___y_2434_ = _args[10];
lean_object* v___y_2435_ = _args[11];
lean_object* v___y_2436_ = _args[12];
lean_object* v___y_2437_ = _args[13];
lean_object* v___y_2438_ = _args[14];
lean_object* v___y_2439_ = _args[15];
lean_object* v___y_2440_ = _args[16];
lean_object* v___y_2441_ = _args[17];
lean_object* v___y_2442_ = _args[18];
_start:
{
uint8_t v___x_172095__boxed_2443_; uint8_t v___x_172096__boxed_2444_; uint8_t v___x_172097__boxed_2445_; lean_object* v_res_2446_; 
v___x_172095__boxed_2443_ = lean_unbox(v___x_2426_);
v___x_172096__boxed_2444_ = lean_unbox(v___x_2427_);
v___x_172097__boxed_2445_ = lean_unbox(v___x_2428_);
v_res_2446_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__2(v___x_2424_, v_a_2425_, v___x_172095__boxed_2443_, v___x_172096__boxed_2444_, v___x_172097__boxed_2445_, v_mvarId_2429_, v___x_2430_, v_a_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec(v___y_2432_);
lean_dec_ref(v___x_2424_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__1(lean_object* v_mvarId_2449_, lean_object* v___x_2450_, lean_object* v_generation_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v___x_2463_; 
lean_inc(v_mvarId_2449_);
v___x_2463_ = l_Lean_MVarId_getTag(v_mvarId_2449_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; lean_object* v___x_2465_; 
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_a_2464_);
lean_dec_ref_known(v___x_2463_, 1);
v___x_2465_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2450_, v_a_2464_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; lean_object* v___x_2467_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
lean_inc_n(v_a_2466_, 2);
lean_dec_ref_known(v___x_2465_, 1);
v___x_2467_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg(v_mvarId_2449_, v_a_2466_, v___y_2459_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v___x_2468_; lean_object* v_toGoalState_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2478_; 
lean_dec_ref_known(v___x_2467_, 1);
v___x_2468_ = lean_st_ref_get(v___y_2452_);
v_toGoalState_2469_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2478_ == 0)
{
lean_object* v_unused_2479_; 
v_unused_2479_ = lean_ctor_get(v___x_2468_, 1);
lean_dec(v_unused_2479_);
v___x_2471_ = v___x_2468_;
v_isShared_2472_ = v_isSharedCheck_2478_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_toGoalState_2469_);
lean_dec(v___x_2468_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2478_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2473_; lean_object* v___x_2475_; 
v___x_2473_ = l_Lean_Expr_mvarId_x21(v_a_2466_);
lean_dec(v_a_2466_);
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 1, v___x_2473_);
v___x_2475_ = v___x_2471_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_toGoalState_2469_);
lean_ctor_set(v_reuseFailAlloc_2477_, 1, v___x_2473_);
v___x_2475_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
lean_object* v___x_2476_; 
v___x_2476_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext(v___x_2475_, v_generation_2451_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
return v___x_2476_;
}
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec(v_a_2466_);
lean_dec(v_generation_2451_);
v_a_2480_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2467_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2467_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2495_; 
lean_dec(v_generation_2451_);
lean_dec(v_mvarId_2449_);
v_a_2488_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2465_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2465_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2493_; 
if (v_isShared_2491_ == 0)
{
v___x_2493_ = v___x_2490_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_a_2488_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2503_; 
lean_dec(v_generation_2451_);
lean_dec_ref(v___x_2450_);
lean_dec(v_mvarId_2449_);
v_a_2496_ = lean_ctor_get(v___x_2463_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2498_ = v___x_2463_;
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2463_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2501_; 
if (v_isShared_2499_ == 0)
{
v___x_2501_ = v___x_2498_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_a_2496_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__1___boxed(lean_object* v_mvarId_2504_, lean_object* v___x_2505_, lean_object* v_generation_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__1(v_mvarId_2504_, v___x_2505_, v_generation_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec(v___y_2508_);
lean_dec(v___y_2507_);
return v_res_2518_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__3(void){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2523_ = lean_box(0);
v___x_2524_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__2));
v___x_2525_ = l_Lean_mkConst(v___x_2524_, v___x_2523_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5(lean_object* v_goal_2526_, lean_object* v_generation_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v___x_2538_; lean_object* v_a_2540_; lean_object* v___y_2545_; lean_object* v___x_2555_; lean_object* v_mvarId_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2832_; 
lean_inc_ref(v_goal_2526_);
v___x_2538_ = lean_st_mk_ref(v_goal_2526_);
v___x_2555_ = lean_st_ref_get(v___x_2538_);
v_mvarId_2556_ = lean_ctor_get(v___x_2555_, 1);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2832_ == 0)
{
lean_object* v_unused_2833_; 
v_unused_2833_ = lean_ctor_get(v___x_2555_, 0);
lean_dec(v_unused_2833_);
v___x_2558_ = v___x_2555_;
v_isShared_2559_ = v_isSharedCheck_2832_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_mvarId_2556_);
lean_dec(v___x_2555_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2832_;
goto v_resetjp_2557_;
}
v___jp_2539_:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2541_ = lean_st_ref_get(v___x_2538_);
lean_dec(v___x_2538_);
v___x_2542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2542_, 0, v_a_2540_);
lean_ctor_set(v___x_2542_, 1, v___x_2541_);
v___x_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
return v___x_2543_;
}
v___jp_2544_:
{
if (lean_obj_tag(v___y_2545_) == 0)
{
lean_object* v_a_2546_; 
v_a_2546_ = lean_ctor_get(v___y_2545_, 0);
lean_inc(v_a_2546_);
lean_dec_ref_known(v___y_2545_, 1);
v_a_2540_ = v_a_2546_;
goto v___jp_2539_;
}
else
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
lean_dec(v___x_2538_);
v_a_2547_ = lean_ctor_get(v___y_2545_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___y_2545_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v___y_2545_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___y_2545_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
}
v_resetjp_2557_:
{
lean_object* v___x_2560_; 
v___x_2560_ = l_Lean_MVarId_getType(v_mvarId_2556_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; uint8_t v___x_2562_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2561_);
lean_dec_ref_known(v___x_2560_, 1);
v___x_2562_ = l_Lean_Expr_isForall(v_a_2561_);
if (v___x_2562_ == 0)
{
uint8_t v___x_2563_; 
lean_del_object(v___x_2558_);
v___x_2563_ = l_Lean_Expr_isLet(v_a_2561_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; 
lean_dec(v_a_2561_);
lean_dec_ref(v___y_2533_);
lean_dec(v_generation_2527_);
v___x_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2564_, 0, v_goal_2526_);
v_a_2540_ = v___x_2564_;
goto v___jp_2539_;
}
else
{
lean_object* v___x_2565_; 
lean_dec_ref(v_goal_2526_);
v___x_2565_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_2529_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; uint8_t v_zetaDelta_2567_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2566_);
lean_dec_ref_known(v___x_2565_, 1);
v_zetaDelta_2567_ = lean_ctor_get_uint8(v_a_2566_, sizeof(void*)*18 + 19);
lean_dec(v_a_2566_);
if (v_zetaDelta_2567_ == 0)
{
lean_object* v___x_2568_; 
lean_dec(v_a_2561_);
v___x_2568_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1(v___x_2538_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___f_2570_; lean_object* v___x_2571_; lean_object* v_mvarId_2572_; lean_object* v___x_2573_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2568_, 1);
v___f_2570_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__0___boxed), 13, 2);
lean_closure_set(v___f_2570_, 0, v_a_2569_);
lean_closure_set(v___f_2570_, 1, v_generation_2527_);
v___x_2571_ = lean_st_ref_get(v___x_2538_);
v_mvarId_2572_ = lean_ctor_get(v___x_2571_, 1);
lean_inc(v_mvarId_2572_);
lean_dec(v___x_2571_);
v___x_2573_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(v_mvarId_2572_, v___f_2570_, v___x_2538_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec_ref(v___y_2533_);
v___y_2545_ = v___x_2573_;
goto v___jp_2544_;
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
lean_dec(v_generation_2527_);
v_a_2574_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2568_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2568_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
else
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v_mvarId_2585_; lean_object* v___f_2586_; lean_object* v___x_2587_; 
v___x_2582_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__0));
v___x_2583_ = l_Lean_Meta_expandLet(v_a_2561_, v___x_2582_, v_zetaDelta_2567_);
lean_dec(v_a_2561_);
v___x_2584_ = lean_st_ref_get(v___x_2538_);
v_mvarId_2585_ = lean_ctor_get(v___x_2584_, 1);
lean_inc_n(v_mvarId_2585_, 2);
lean_dec(v___x_2584_);
v___f_2586_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__1___boxed), 14, 3);
lean_closure_set(v___f_2586_, 0, v_mvarId_2585_);
lean_closure_set(v___f_2586_, 1, v___x_2583_);
lean_closure_set(v___f_2586_, 2, v_generation_2527_);
v___x_2587_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(v_mvarId_2585_, v___f_2586_, v___x_2538_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec_ref(v___y_2533_);
v___y_2545_ = v___x_2587_;
goto v___jp_2544_;
}
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2595_; 
lean_dec(v_a_2561_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
lean_dec(v_generation_2527_);
v_a_2588_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2590_ = v___x_2565_;
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2565_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2593_; 
if (v_isShared_2591_ == 0)
{
v___x_2593_ = v___x_2590_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_a_2588_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
}
else
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
lean_dec(v_generation_2527_);
lean_dec_ref(v_goal_2526_);
v___x_2596_ = l_Lean_Expr_bindingDomain_x21(v_a_2561_);
lean_inc_ref(v___x_2596_);
v___x_2597_ = l_Lean_Meta_isProp(v___x_2596_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; uint8_t v___x_2599_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
v___x_2599_ = lean_unbox(v_a_2598_);
lean_dec(v_a_2598_);
if (v___x_2599_ == 0)
{
lean_object* v___x_2600_; 
lean_dec_ref(v___x_2596_);
lean_dec(v_a_2561_);
v___x_2600_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_intro1(v___x_2538_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec_ref(v___y_2533_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; lean_object* v___x_2602_; lean_object* v___x_2604_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___x_2600_, 1);
v___x_2602_ = lean_st_ref_get(v___x_2538_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set_tag(v___x_2558_, 3);
lean_ctor_set(v___x_2558_, 1, v___x_2602_);
lean_ctor_set(v___x_2558_, 0, v_a_2601_);
v___x_2604_ = v___x_2558_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2601_);
lean_ctor_set(v_reuseFailAlloc_2605_, 1, v___x_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
v_a_2540_ = v___x_2604_;
goto v___jp_2539_;
}
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
lean_del_object(v___x_2558_);
lean_dec(v___x_2538_);
v_a_2606_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v___x_2600_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2600_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
else
{
uint8_t v___x_2614_; lean_object* v___x_2615_; lean_object* v_mvarId_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2814_; 
lean_del_object(v___x_2558_);
v___x_2614_ = 0;
v___x_2615_ = lean_st_ref_get(v___x_2538_);
v_mvarId_2616_ = lean_ctor_get(v___x_2615_, 1);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2814_ == 0)
{
lean_object* v_unused_2815_; 
v_unused_2815_ = lean_ctor_get(v___x_2615_, 0);
lean_dec(v_unused_2815_);
v___x_2618_ = v___x_2615_;
v_isShared_2619_ = v_isSharedCheck_2814_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_mvarId_2616_);
lean_dec(v___x_2615_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2814_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v___x_2620_; 
lean_inc(v_mvarId_2616_);
v___x_2620_ = l_Lean_MVarId_getTag(v_mvarId_2616_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2620_, 1);
v___x_2622_ = l_Lean_Expr_bindingBody_x21(v_a_2561_);
v___x_2623_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2(v___x_2538_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2625_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
lean_inc_n(v_a_2624_, 2);
lean_dec_ref_known(v___x_2623_, 1);
v___x_2625_ = l_Lean_Meta_Grind_registerFVarAnchor___redArg(v_a_2624_, v___x_2538_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v___x_2626_; lean_object* v___x_2627_; 
lean_dec_ref_known(v___x_2625_, 1);
lean_inc(v_a_2624_);
v___x_2626_ = l_Lean_mkFVar(v_a_2624_);
lean_inc_ref(v___x_2596_);
v___x_2627_ = l_Lean_Meta_Grind_preprocessHypothesis(v___x_2596_, v___x_2538_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; lean_object* v_lctx_2629_; lean_object* v_localInstances_2630_; lean_object* v_expr_2631_; lean_object* v_proof_x3f_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___x_2627_, 1);
v_lctx_2629_ = lean_ctor_get(v___y_2533_, 2);
v_localInstances_2630_ = lean_ctor_get(v___y_2533_, 3);
v_expr_2631_ = lean_ctor_get(v_a_2628_, 0);
lean_inc_ref_n(v_expr_2631_, 2);
v_proof_x3f_2632_ = lean_ctor_get(v_a_2628_, 1);
lean_inc(v_proof_x3f_2632_);
lean_dec(v_a_2628_);
v___x_2633_ = l_Lean_Expr_bindingName_x21(v_a_2561_);
lean_inc(v___x_2633_);
v___x_2634_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkCleanName(v___x_2633_, v_expr_2631_, v___x_2538_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; uint8_t v___x_2636_; uint8_t v___x_2637_; lean_object* v___x_2638_; lean_object* v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v_localInsts_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; lean_object* v___y_2681_; lean_object* v___y_2682_; lean_object* v___y_2683_; lean_object* v___y_2684_; lean_object* v___y_2685_; lean_object* v___x_2759_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2634_, 1);
v___x_2636_ = l_Lean_Expr_bindingInfo_x21(v_a_2561_);
v___x_2637_ = 0;
lean_inc_ref_n(v_expr_2631_, 2);
lean_inc(v_a_2624_);
lean_inc_ref(v_lctx_2629_);
v___x_2638_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_2629_, v_a_2624_, v_a_2635_, v_expr_2631_, v___x_2636_, v___x_2637_);
v___x_2759_ = l_Lean_Meta_isClass_x3f(v_expr_2631_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v_a_2760_; 
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
lean_inc(v_a_2760_);
lean_dec_ref_known(v___x_2759_, 1);
if (lean_obj_tag(v_a_2760_) == 1)
{
lean_object* v_val_2761_; lean_object* v___x_2763_; 
v_val_2761_ = lean_ctor_get(v_a_2760_, 0);
lean_inc(v_val_2761_);
lean_dec_ref_known(v_a_2760_, 1);
lean_inc_ref(v___x_2626_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 1, v___x_2626_);
lean_ctor_set(v___x_2618_, 0, v_val_2761_);
v___x_2763_ = v___x_2618_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_val_2761_);
lean_ctor_set(v_reuseFailAlloc_2765_, 1, v___x_2626_);
v___x_2763_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
lean_object* v___x_2764_; 
lean_inc_ref(v_localInstances_2630_);
v___x_2764_ = lean_array_push(v_localInstances_2630_, v___x_2763_);
lean_inc(v___x_2538_);
v_localInsts_2675_ = v___x_2764_;
v___y_2676_ = v___x_2538_;
v___y_2677_ = v___y_2528_;
v___y_2678_ = v___y_2529_;
v___y_2679_ = v___y_2530_;
v___y_2680_ = v___y_2531_;
v___y_2681_ = v___y_2532_;
v___y_2682_ = v___y_2533_;
v___y_2683_ = v___y_2534_;
v___y_2684_ = v___y_2535_;
v___y_2685_ = v___y_2536_;
goto v___jp_2674_;
}
}
else
{
lean_inc_ref(v_localInstances_2630_);
lean_dec(v_a_2760_);
lean_del_object(v___x_2618_);
lean_inc(v___x_2538_);
v_localInsts_2675_ = v_localInstances_2630_;
v___y_2676_ = v___x_2538_;
v___y_2677_ = v___y_2528_;
v___y_2678_ = v___y_2529_;
v___y_2679_ = v___y_2530_;
v___y_2680_ = v___y_2531_;
v___y_2681_ = v___y_2532_;
v___y_2682_ = v___y_2533_;
v___y_2683_ = v___y_2534_;
v___y_2684_ = v___y_2535_;
v___y_2685_ = v___y_2536_;
goto v___jp_2674_;
}
}
else
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2773_; 
lean_dec_ref(v___x_2638_);
lean_dec(v___x_2633_);
lean_dec(v_proof_x3f_2632_);
lean_dec_ref(v_expr_2631_);
lean_dec_ref(v___x_2626_);
lean_dec(v_a_2624_);
lean_dec_ref(v___x_2622_);
lean_dec(v_a_2621_);
lean_del_object(v___x_2618_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v_a_2561_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
v_a_2766_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2768_ = v___x_2759_;
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2759_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2766_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
v___jp_2639_:
{
uint8_t v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2652_ = 2;
v___x_2653_ = lean_unsigned_to_nat(0u);
v___x_2654_ = l_Lean_Meta_mkFreshExprMVarAt(v___x_2638_, v___y_2644_, v___y_2651_, v___x_2652_, v_a_2621_, v___x_2653_, v___y_2641_, v___y_2642_, v___y_2645_, v___y_2649_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; uint8_t v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___f_2664_; lean_object* v___x_2665_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
v___x_2656_ = l_Lean_Expr_mvarId_x21(v_a_2655_);
v___x_2657_ = lean_unsigned_to_nat(1u);
v___x_2658_ = lean_mk_empty_array_with_capacity(v___x_2657_);
v___x_2659_ = lean_array_push(v___x_2658_, v___x_2626_);
v___x_2660_ = 1;
v___x_2661_ = lean_box(v___x_2614_);
v___x_2662_ = lean_box(v___x_2562_);
v___x_2663_ = lean_box(v___x_2660_);
lean_inc(v___x_2656_);
v___f_2664_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__2___boxed), 19, 8);
lean_closure_set(v___f_2664_, 0, v___x_2659_);
lean_closure_set(v___f_2664_, 1, v_a_2655_);
lean_closure_set(v___f_2664_, 2, v___x_2661_);
lean_closure_set(v___f_2664_, 3, v___x_2662_);
lean_closure_set(v___f_2664_, 4, v___x_2663_);
lean_closure_set(v___f_2664_, 5, v_mvarId_2616_);
lean_closure_set(v___f_2664_, 6, v___x_2656_);
lean_closure_set(v___f_2664_, 7, v_a_2624_);
v___x_2665_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(v___x_2656_, v___f_2664_, v___y_2640_, v___y_2646_, v___y_2643_, v___y_2648_, v___y_2650_, v___y_2647_, v___y_2641_, v___y_2642_, v___y_2645_, v___y_2649_);
lean_dec_ref(v___y_2641_);
lean_dec(v___y_2640_);
v___y_2545_ = v___x_2665_;
goto v___jp_2544_;
}
else
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2673_; 
lean_dec_ref(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec_ref(v___x_2626_);
lean_dec(v_a_2624_);
lean_dec(v_mvarId_2616_);
lean_dec(v___x_2538_);
v_a_2666_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2668_ = v___x_2654_;
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v___x_2654_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2671_; 
if (v_isShared_2669_ == 0)
{
v___x_2671_ = v___x_2668_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_a_2666_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
v___jp_2674_:
{
if (lean_obj_tag(v_proof_x3f_2632_) == 0)
{
uint8_t v___x_2686_; 
lean_dec(v___x_2633_);
lean_dec_ref(v_expr_2631_);
lean_dec_ref(v___x_2596_);
v___x_2686_ = l_Lean_Expr_isArrow(v_a_2561_);
lean_dec(v_a_2561_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; 
v___x_2687_ = lean_expr_instantiate1(v___x_2622_, v___x_2626_);
lean_dec_ref(v___x_2622_);
v___y_2640_ = v___y_2676_;
v___y_2641_ = v___y_2682_;
v___y_2642_ = v___y_2683_;
v___y_2643_ = v___y_2678_;
v___y_2644_ = v_localInsts_2675_;
v___y_2645_ = v___y_2684_;
v___y_2646_ = v___y_2677_;
v___y_2647_ = v___y_2681_;
v___y_2648_ = v___y_2679_;
v___y_2649_ = v___y_2685_;
v___y_2650_ = v___y_2680_;
v___y_2651_ = v___x_2687_;
goto v___jp_2639_;
}
else
{
v___y_2640_ = v___y_2676_;
v___y_2641_ = v___y_2682_;
v___y_2642_ = v___y_2683_;
v___y_2643_ = v___y_2678_;
v___y_2644_ = v_localInsts_2675_;
v___y_2645_ = v___y_2684_;
v___y_2646_ = v___y_2677_;
v___y_2647_ = v___y_2681_;
v___y_2648_ = v___y_2679_;
v___y_2649_ = v___y_2685_;
v___y_2650_ = v___y_2680_;
v___y_2651_ = v___x_2622_;
goto v___jp_2639_;
}
}
else
{
lean_object* v_val_2688_; uint8_t v___x_2689_; 
v_val_2688_ = lean_ctor_get(v_proof_x3f_2632_, 0);
lean_inc(v_val_2688_);
lean_dec_ref_known(v_proof_x3f_2632_, 1);
v___x_2689_ = l_Lean_Expr_isArrow(v_a_2561_);
lean_dec(v_a_2561_);
if (v___x_2689_ == 0)
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
lean_inc_ref(v___x_2622_);
lean_inc_ref_n(v___x_2596_, 2);
v___x_2690_ = l_Lean_mkLambda(v___x_2633_, v___x_2636_, v___x_2596_, v___x_2622_);
v___x_2691_ = lean_box(0);
v___x_2692_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__3, &l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___closed__3);
lean_inc_ref(v___x_2626_);
lean_inc(v_val_2688_);
lean_inc_ref(v_expr_2631_);
v___x_2693_ = l_Lean_mkApp4(v___x_2692_, v___x_2596_, v_expr_2631_, v_val_2688_, v___x_2626_);
v___x_2694_ = lean_expr_instantiate1(v___x_2622_, v___x_2693_);
lean_dec_ref(v___x_2693_);
lean_dec_ref(v___x_2622_);
lean_inc_ref(v___x_2694_);
v___x_2695_ = l_Lean_Meta_getLevel(v___x_2694_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
if (lean_obj_tag(v___x_2695_) == 0)
{
lean_object* v_a_2696_; uint8_t v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v_a_2696_ = lean_ctor_get(v___x_2695_, 0);
lean_inc(v_a_2696_);
lean_dec_ref_known(v___x_2695_, 1);
v___x_2697_ = 2;
v___x_2698_ = lean_unsigned_to_nat(0u);
v___x_2699_ = l_Lean_Meta_mkFreshExprMVarAt(v___x_2638_, v_localInsts_2675_, v___x_2694_, v___x_2697_, v_a_2621_, v___x_2698_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; uint8_t v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___f_2709_; lean_object* v___x_2710_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref_known(v___x_2699_, 1);
v___x_2701_ = l_Lean_Expr_mvarId_x21(v_a_2700_);
v___x_2702_ = lean_unsigned_to_nat(1u);
v___x_2703_ = lean_mk_empty_array_with_capacity(v___x_2702_);
v___x_2704_ = lean_array_push(v___x_2703_, v___x_2626_);
v___x_2705_ = 1;
v___x_2706_ = lean_box(v___x_2689_);
v___x_2707_ = lean_box(v___x_2562_);
v___x_2708_ = lean_box(v___x_2705_);
lean_inc(v___x_2701_);
v___f_2709_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__3___boxed), 25, 14);
lean_closure_set(v___f_2709_, 0, v___x_2704_);
lean_closure_set(v___f_2709_, 1, v_a_2700_);
lean_closure_set(v___f_2709_, 2, v___x_2706_);
lean_closure_set(v___f_2709_, 3, v___x_2707_);
lean_closure_set(v___f_2709_, 4, v___x_2708_);
lean_closure_set(v___f_2709_, 5, v_a_2696_);
lean_closure_set(v___f_2709_, 6, v___x_2691_);
lean_closure_set(v___f_2709_, 7, v___x_2596_);
lean_closure_set(v___f_2709_, 8, v_expr_2631_);
lean_closure_set(v___f_2709_, 9, v___x_2690_);
lean_closure_set(v___f_2709_, 10, v_val_2688_);
lean_closure_set(v___f_2709_, 11, v_mvarId_2616_);
lean_closure_set(v___f_2709_, 12, v___x_2701_);
lean_closure_set(v___f_2709_, 13, v_a_2624_);
v___x_2710_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(v___x_2701_, v___f_2709_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2676_);
v___y_2545_ = v___x_2710_;
goto v___jp_2544_;
}
else
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2718_; 
lean_dec(v_a_2696_);
lean_dec_ref(v___x_2690_);
lean_dec(v_val_2688_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2676_);
lean_dec_ref(v_expr_2631_);
lean_dec_ref(v___x_2626_);
lean_dec(v_a_2624_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v___x_2538_);
v_a_2711_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2713_ = v___x_2699_;
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2699_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
else
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
lean_dec_ref(v___x_2694_);
lean_dec_ref(v___x_2690_);
lean_dec(v_val_2688_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2676_);
lean_dec_ref(v_localInsts_2675_);
lean_dec_ref(v___x_2638_);
lean_dec_ref(v_expr_2631_);
lean_dec_ref(v___x_2626_);
lean_dec(v_a_2624_);
lean_dec(v_a_2621_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v___x_2538_);
v_a_2719_ = lean_ctor_get(v___x_2695_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2695_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2721_ = v___x_2695_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2695_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
if (v_isShared_2722_ == 0)
{
v___x_2724_ = v___x_2721_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2719_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
else
{
lean_object* v___x_2727_; 
lean_dec(v___x_2633_);
lean_inc_ref(v___x_2622_);
v___x_2727_ = l_Lean_Meta_getLevel(v___x_2622_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; uint8_t v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2728_);
lean_dec_ref_known(v___x_2727_, 1);
v___x_2729_ = 2;
v___x_2730_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___x_2622_);
v___x_2731_ = l_Lean_Meta_mkFreshExprMVarAt(v___x_2638_, v_localInsts_2675_, v___x_2622_, v___x_2729_, v_a_2621_, v___x_2730_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; uint8_t v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___f_2741_; lean_object* v___x_2742_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc(v_a_2732_);
lean_dec_ref_known(v___x_2731_, 1);
v___x_2733_ = l_Lean_Expr_mvarId_x21(v_a_2732_);
v___x_2734_ = lean_unsigned_to_nat(1u);
v___x_2735_ = lean_mk_empty_array_with_capacity(v___x_2734_);
v___x_2736_ = lean_array_push(v___x_2735_, v___x_2626_);
v___x_2737_ = 1;
v___x_2738_ = lean_box(v___x_2614_);
v___x_2739_ = lean_box(v___x_2689_);
v___x_2740_ = lean_box(v___x_2737_);
lean_inc(v___x_2733_);
v___f_2741_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__4___boxed), 24, 13);
lean_closure_set(v___f_2741_, 0, v___x_2736_);
lean_closure_set(v___f_2741_, 1, v_a_2732_);
lean_closure_set(v___f_2741_, 2, v___x_2738_);
lean_closure_set(v___f_2741_, 3, v___x_2739_);
lean_closure_set(v___f_2741_, 4, v___x_2740_);
lean_closure_set(v___f_2741_, 5, v_a_2728_);
lean_closure_set(v___f_2741_, 6, v___x_2596_);
lean_closure_set(v___f_2741_, 7, v_expr_2631_);
lean_closure_set(v___f_2741_, 8, v___x_2622_);
lean_closure_set(v___f_2741_, 9, v_val_2688_);
lean_closure_set(v___f_2741_, 10, v_mvarId_2616_);
lean_closure_set(v___f_2741_, 11, v___x_2733_);
lean_closure_set(v___f_2741_, 12, v_a_2624_);
v___x_2742_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__0___redArg(v___x_2733_, v___f_2741_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2676_);
v___y_2545_ = v___x_2742_;
goto v___jp_2544_;
}
else
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
lean_dec(v_a_2728_);
lean_dec(v_val_2688_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2676_);
lean_dec_ref(v_expr_2631_);
lean_dec_ref(v___x_2626_);
lean_dec(v_a_2624_);
lean_dec_ref(v___x_2622_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v___x_2538_);
v_a_2743_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v___x_2731_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2731_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2758_; 
lean_dec(v_val_2688_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2676_);
lean_dec_ref(v_localInsts_2675_);
lean_dec_ref(v___x_2638_);
lean_dec_ref(v_expr_2631_);
lean_dec_ref(v___x_2626_);
lean_dec(v_a_2624_);
lean_dec_ref(v___x_2622_);
lean_dec(v_a_2621_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v___x_2538_);
v_a_2751_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2753_ = v___x_2727_;
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___x_2727_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2756_; 
if (v_isShared_2754_ == 0)
{
v___x_2756_ = v___x_2753_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2751_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_dec(v___x_2633_);
lean_dec(v_proof_x3f_2632_);
lean_dec_ref(v_expr_2631_);
lean_dec_ref(v___x_2626_);
lean_dec(v_a_2624_);
lean_dec_ref(v___x_2622_);
lean_dec(v_a_2621_);
lean_del_object(v___x_2618_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v_a_2561_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
v_a_2774_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2634_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2634_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec_ref(v___x_2626_);
lean_dec(v_a_2624_);
lean_dec_ref(v___x_2622_);
lean_dec(v_a_2621_);
lean_del_object(v___x_2618_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v_a_2561_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
v_a_2782_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2627_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2627_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
lean_dec(v_a_2624_);
lean_dec_ref(v___x_2622_);
lean_dec(v_a_2621_);
lean_del_object(v___x_2618_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v_a_2561_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
v_a_2790_ = lean_ctor_get(v___x_2625_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2625_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2625_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
else
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2805_; 
lean_dec_ref(v___x_2622_);
lean_dec(v_a_2621_);
lean_del_object(v___x_2618_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v_a_2561_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
v_a_2798_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2800_ = v___x_2623_;
v_isShared_2801_ = v_isSharedCheck_2805_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v___x_2623_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2805_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2803_; 
if (v_isShared_2801_ == 0)
{
v___x_2803_ = v___x_2800_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_a_2798_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_del_object(v___x_2618_);
lean_dec(v_mvarId_2616_);
lean_dec_ref(v___x_2596_);
lean_dec(v_a_2561_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
v_a_2806_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2620_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2620_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
}
}
else
{
lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2823_; 
lean_dec_ref(v___x_2596_);
lean_dec(v_a_2561_);
lean_del_object(v___x_2558_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
v_a_2816_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2818_ = v___x_2597_;
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2597_);
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
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2831_; 
lean_del_object(v___x_2558_);
lean_dec(v___x_2538_);
lean_dec_ref(v___y_2533_);
lean_dec(v_generation_2527_);
lean_dec_ref(v_goal_2526_);
v_a_2824_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2826_ = v___x_2560_;
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v___x_2560_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
if (v_isShared_2827_ == 0)
{
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_a_2824_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___boxed(lean_object* v_goal_2834_, lean_object* v_generation_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5(v_goal_2834_, v_generation_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_);
lean_dec(v___y_2844_);
lean_dec_ref(v___y_2843_);
lean_dec(v___y_2842_);
lean_dec(v___y_2840_);
lean_dec_ref(v___y_2839_);
lean_dec(v___y_2838_);
lean_dec_ref(v___y_2837_);
lean_dec(v___y_2836_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext(lean_object* v_goal_2847_, lean_object* v_generation_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_){
_start:
{
lean_object* v_mvarId_2859_; lean_object* v___f_2860_; lean_object* v___x_2861_; 
v_mvarId_2859_ = lean_ctor_get(v_goal_2847_, 1);
lean_inc(v_mvarId_2859_);
v___f_2860_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___lam__5___boxed), 12, 2);
lean_closure_set(v___f_2860_, 0, v_goal_2847_);
lean_closure_set(v___f_2860_, 1, v_generation_2848_);
v___x_2861_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_2859_, v___f_2860_, v_a_2849_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2870_; 
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2864_ = v___x_2861_;
v_isShared_2865_ = v_isSharedCheck_2870_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2861_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2870_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v_fst_2866_; lean_object* v___x_2868_; 
v_fst_2866_ = lean_ctor_get(v_a_2862_, 0);
lean_inc(v_fst_2866_);
lean_dec(v_a_2862_);
if (v_isShared_2865_ == 0)
{
lean_ctor_set(v___x_2864_, 0, v_fst_2866_);
v___x_2868_ = v___x_2864_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_fst_2866_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
else
{
lean_object* v_a_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2878_; 
v_a_2871_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2873_ = v___x_2861_;
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_a_2871_);
lean_dec(v___x_2861_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2876_; 
if (v_isShared_2874_ == 0)
{
v___x_2876_ = v___x_2873_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_a_2871_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext___boxed(lean_object* v_goal_2879_, lean_object* v_generation_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext(v_goal_2879_, v_generation_2880_, v_a_2881_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_);
lean_dec(v_a_2889_);
lean_dec_ref(v_a_2888_);
lean_dec(v_a_2887_);
lean_dec_ref(v_a_2886_);
lean_dec(v_a_2885_);
lean_dec_ref(v_a_2884_);
lean_dec(v_a_2883_);
lean_dec_ref(v_a_2882_);
lean_dec(v_a_2881_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1(lean_object* v_mvarId_2892_, lean_object* v_val_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v___x_2905_; 
v___x_2905_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___redArg(v_mvarId_2892_, v_val_2893_, v___y_2901_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1___boxed(lean_object* v_mvarId_2906_, lean_object* v_val_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1(v_mvarId_2906_, v_val_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec(v___y_2909_);
lean_dec(v___y_2908_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3(lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v___x_2931_; 
v___x_2931_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___redArg(v___y_2929_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3___boxed(lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v_res_2943_; 
v_res_2943_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__2_spec__3(v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_);
lean_dec(v___y_2941_);
lean_dec_ref(v___y_2940_);
lean_dec(v___y_2939_);
lean_dec_ref(v___y_2938_);
lean_dec(v___y_2937_);
lean_dec_ref(v___y_2936_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
lean_dec(v___y_2933_);
lean_dec(v___y_2932_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1(lean_object* v_00_u03b2_2944_, lean_object* v_x_2945_, lean_object* v_x_2946_, lean_object* v_x_2947_){
_start:
{
lean_object* v___x_2948_; 
v___x_2948_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1___redArg(v_x_2945_, v_x_2946_, v_x_2947_);
return v___x_2948_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_2949_, lean_object* v_x_2950_, size_t v_x_2951_, size_t v_x_2952_, lean_object* v_x_2953_, lean_object* v_x_2954_){
_start:
{
lean_object* v___x_2955_; 
v___x_2955_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___redArg(v_x_2950_, v_x_2951_, v_x_2952_, v_x_2953_, v_x_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2956_, lean_object* v_x_2957_, lean_object* v_x_2958_, lean_object* v_x_2959_, lean_object* v_x_2960_, lean_object* v_x_2961_){
_start:
{
size_t v_x_173088__boxed_2962_; size_t v_x_173089__boxed_2963_; lean_object* v_res_2964_; 
v_x_173088__boxed_2962_ = lean_unbox_usize(v_x_2958_);
lean_dec(v_x_2958_);
v_x_173089__boxed_2963_ = lean_unbox_usize(v_x_2959_);
lean_dec(v_x_2959_);
v_res_2964_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3(v_00_u03b2_2956_, v_x_2957_, v_x_173088__boxed_2962_, v_x_173089__boxed_2963_, v_x_2960_, v_x_2961_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_2965_, lean_object* v_n_2966_, lean_object* v_k_2967_, lean_object* v_v_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6___redArg(v_n_2966_, v_k_2967_, v_v_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2970_, size_t v_depth_2971_, lean_object* v_keys_2972_, lean_object* v_vals_2973_, lean_object* v_heq_2974_, lean_object* v_i_2975_, lean_object* v_entries_2976_){
_start:
{
lean_object* v___x_2977_; 
v___x_2977_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___redArg(v_depth_2971_, v_keys_2972_, v_vals_2973_, v_i_2975_, v_entries_2976_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_2978_, lean_object* v_depth_2979_, lean_object* v_keys_2980_, lean_object* v_vals_2981_, lean_object* v_heq_2982_, lean_object* v_i_2983_, lean_object* v_entries_2984_){
_start:
{
size_t v_depth_boxed_2985_; lean_object* v_res_2986_; 
v_depth_boxed_2985_ = lean_unbox_usize(v_depth_2979_);
lean_dec(v_depth_2979_);
v_res_2986_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__7(v_00_u03b2_2978_, v_depth_boxed_2985_, v_keys_2980_, v_vals_2981_, v_heq_2982_, v_i_2983_, v_entries_2984_);
lean_dec_ref(v_vals_2981_);
lean_dec_ref(v_keys_2980_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_2987_, lean_object* v_x_2988_, lean_object* v_x_2989_, lean_object* v_x_2990_, lean_object* v_x_2991_){
_start:
{
lean_object* v___x_2992_; 
v___x_2992_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_x_2988_, v_x_2989_, v_x_2990_, v_x_2991_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___redArg(lean_object* v_type_2993_, lean_object* v_a_2994_){
_start:
{
lean_object* v___x_2996_; 
v___x_2996_ = l_Lean_Expr_getAppFn(v_type_2993_);
if (lean_obj_tag(v___x_2996_) == 4)
{
lean_object* v_declName_2997_; lean_object* v___x_2998_; 
v_declName_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_declName_2997_);
lean_dec_ref_known(v___x_2996_, 2);
v___x_2998_ = l_Lean_Meta_Grind_isEagerSplit___redArg(v_declName_2997_, v_a_2994_);
lean_dec(v_declName_2997_);
return v___x_2998_;
}
else
{
uint8_t v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
lean_dec_ref(v___x_2996_);
v___x_2999_ = 0;
v___x_3000_ = lean_box(v___x_2999_);
v___x_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3000_);
return v___x_3001_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___redArg___boxed(lean_object* v_type_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___redArg(v_type_3002_, v_a_3003_);
lean_dec_ref(v_a_3003_);
lean_dec_ref(v_type_3002_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate(lean_object* v_type_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_){
_start:
{
lean_object* v___x_3017_; 
v___x_3017_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___redArg(v_type_3006_, v_a_3008_);
return v___x_3017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___boxed(lean_object* v_type_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate(v_type_3018_, v_a_3019_, v_a_3020_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_);
lean_dec(v_a_3027_);
lean_dec_ref(v_a_3026_);
lean_dec(v_a_3025_);
lean_dec_ref(v_a_3024_);
lean_dec(v_a_3023_);
lean_dec_ref(v_a_3022_);
lean_dec(v_a_3021_);
lean_dec_ref(v_a_3020_);
lean_dec(v_a_3019_);
lean_dec_ref(v_type_3018_);
return v_res_3029_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3030_; 
v___x_3030_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3030_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3031_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_3032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3031_);
return v___x_3032_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3033_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_3034_ = lean_unsigned_to_nat(0u);
v___x_3035_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
lean_ctor_set(v___x_3035_, 2, v___x_3034_);
lean_ctor_set(v___x_3035_, 3, v___x_3034_);
lean_ctor_set(v___x_3035_, 4, v___x_3033_);
lean_ctor_set(v___x_3035_, 5, v___x_3033_);
lean_ctor_set(v___x_3035_, 6, v___x_3033_);
lean_ctor_set(v___x_3035_, 7, v___x_3033_);
lean_ctor_set(v___x_3035_, 8, v___x_3033_);
lean_ctor_set(v___x_3035_, 9, v___x_3033_);
lean_ctor_set(v___x_3035_, 10, v___x_3033_);
return v___x_3035_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = lean_unsigned_to_nat(32u);
v___x_3037_ = lean_mk_empty_array_with_capacity(v___x_3036_);
v___x_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
return v___x_3038_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3039_ = ((size_t)5ULL);
v___x_3040_ = lean_unsigned_to_nat(0u);
v___x_3041_ = lean_unsigned_to_nat(32u);
v___x_3042_ = lean_mk_empty_array_with_capacity(v___x_3041_);
v___x_3043_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_3044_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3044_, 0, v___x_3043_);
lean_ctor_set(v___x_3044_, 1, v___x_3042_);
lean_ctor_set(v___x_3044_, 2, v___x_3040_);
lean_ctor_set(v___x_3044_, 3, v___x_3040_);
lean_ctor_set_usize(v___x_3044_, 4, v___x_3039_);
return v___x_3044_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; 
v___x_3045_ = lean_box(1);
v___x_3046_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4);
v___x_3047_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_3048_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
lean_ctor_set(v___x_3048_, 1, v___x_3046_);
lean_ctor_set(v___x_3048_, 2, v___x_3045_);
return v___x_3048_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3050_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6));
v___x_3051_ = l_Lean_stringToMessageData(v___x_3050_);
return v___x_3051_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_3053_; lean_object* v___x_3054_; 
v___x_3053_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8));
v___x_3054_ = l_Lean_stringToMessageData(v___x_3053_);
return v___x_3054_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; 
v___x_3056_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10));
v___x_3057_ = l_Lean_stringToMessageData(v___x_3056_);
return v___x_3057_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12));
v___x_3060_ = l_Lean_stringToMessageData(v___x_3059_);
return v___x_3060_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15(void){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3062_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14));
v___x_3063_ = l_Lean_stringToMessageData(v___x_3062_);
return v___x_3063_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17(void){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3065_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16));
v___x_3066_ = l_Lean_stringToMessageData(v___x_3065_);
return v___x_3066_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19(void){
_start:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3068_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18));
v___x_3069_ = l_Lean_stringToMessageData(v___x_3068_);
return v___x_3069_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_3070_, lean_object* v_declHint_3071_, lean_object* v___y_3072_){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v_env_3076_; uint8_t v___x_3077_; 
v___x_3074_ = lean_box(0);
v___x_3075_ = lean_st_ref_get(v___y_3072_);
v_env_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc_ref(v_env_3076_);
lean_dec(v___x_3075_);
v___x_3077_ = l_Lean_Name_isAnonymous(v_declHint_3071_);
if (v___x_3077_ == 0)
{
uint8_t v_isExporting_3078_; 
v_isExporting_3078_ = lean_ctor_get_uint8(v_env_3076_, sizeof(void*)*13);
if (v_isExporting_3078_ == 0)
{
lean_object* v___x_3079_; 
lean_dec_ref(v_env_3076_);
lean_dec(v_declHint_3071_);
v___x_3079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3079_, 0, v_msg_3070_);
return v___x_3079_;
}
else
{
lean_object* v___x_3080_; uint8_t v___x_3081_; 
lean_inc_ref(v_env_3076_);
v___x_3080_ = l_Lean_Environment_setExporting(v_env_3076_, v___x_3077_);
lean_inc(v_declHint_3071_);
lean_inc_ref(v___x_3080_);
v___x_3081_ = l_Lean_Environment_contains(v___x_3080_, v_declHint_3071_, v_isExporting_3078_);
if (v___x_3081_ == 0)
{
lean_object* v___x_3082_; 
lean_dec_ref(v___x_3080_);
lean_dec_ref(v_env_3076_);
lean_dec(v_declHint_3071_);
v___x_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_msg_3070_);
return v___x_3082_;
}
else
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v_c_3088_; lean_object* v___x_3089_; 
v___x_3083_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_3084_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5);
v___x_3085_ = l_Lean_Options_empty;
lean_inc_ref(v___x_3080_);
v___x_3086_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3080_);
lean_ctor_set(v___x_3086_, 1, v___x_3083_);
lean_ctor_set(v___x_3086_, 2, v___x_3084_);
lean_ctor_set(v___x_3086_, 3, v___x_3085_);
lean_inc(v_declHint_3071_);
v___x_3087_ = l_Lean_MessageData_ofConstName(v_declHint_3071_, v___x_3077_);
v_c_3088_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3088_, 0, v___x_3086_);
lean_ctor_set(v_c_3088_, 1, v___x_3087_);
v___x_3089_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_3080_, v_declHint_3071_);
lean_dec_ref(v___x_3080_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
lean_dec_ref(v_env_3076_);
lean_dec(v_declHint_3071_);
v___x_3090_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_3091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3090_);
lean_ctor_set(v___x_3091_, 1, v_c_3088_);
v___x_3092_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9);
v___x_3093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3091_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
v___x_3094_ = l_Lean_MessageData_note(v___x_3093_);
v___x_3095_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3095_, 0, v_msg_3070_);
lean_ctor_set(v___x_3095_, 1, v___x_3094_);
v___x_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
return v___x_3096_;
}
else
{
lean_object* v_val_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3131_; 
v_val_3097_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3099_ = v___x_3089_;
v_isShared_3100_ = v_isSharedCheck_3131_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_val_3097_);
lean_dec(v___x_3089_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3131_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3101_; lean_object* v_moduleNames_3102_; lean_object* v_mod_3103_; uint8_t v___x_3104_; 
v___x_3101_ = l_Lean_Environment_header(v_env_3076_);
lean_dec_ref(v_env_3076_);
v_moduleNames_3102_ = lean_ctor_get(v___x_3101_, 4);
lean_inc_ref(v_moduleNames_3102_);
lean_dec_ref(v___x_3101_);
v_mod_3103_ = lean_array_get(v___x_3074_, v_moduleNames_3102_, v_val_3097_);
lean_dec(v_val_3097_);
lean_dec_ref(v_moduleNames_3102_);
v___x_3104_ = l_Lean_isPrivateName(v_declHint_3071_);
lean_dec(v_declHint_3071_);
if (v___x_3104_ == 0)
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3116_; 
v___x_3105_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11);
v___x_3106_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3105_);
lean_ctor_set(v___x_3106_, 1, v_c_3088_);
v___x_3107_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13);
v___x_3108_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3106_);
lean_ctor_set(v___x_3108_, 1, v___x_3107_);
v___x_3109_ = l_Lean_MessageData_ofName(v_mod_3103_);
v___x_3110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3108_);
lean_ctor_set(v___x_3110_, 1, v___x_3109_);
v___x_3111_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15);
v___x_3112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3110_);
lean_ctor_set(v___x_3112_, 1, v___x_3111_);
v___x_3113_ = l_Lean_MessageData_note(v___x_3112_);
v___x_3114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3114_, 0, v_msg_3070_);
lean_ctor_set(v___x_3114_, 1, v___x_3113_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set_tag(v___x_3099_, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3114_);
v___x_3116_ = v___x_3099_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v___x_3114_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
return v___x_3116_;
}
}
else
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3129_; 
v___x_3118_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_3119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
lean_ctor_set(v___x_3119_, 1, v_c_3088_);
v___x_3120_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17);
v___x_3121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3119_);
lean_ctor_set(v___x_3121_, 1, v___x_3120_);
v___x_3122_ = l_Lean_MessageData_ofName(v_mod_3103_);
v___x_3123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3121_);
lean_ctor_set(v___x_3123_, 1, v___x_3122_);
v___x_3124_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19);
v___x_3125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3123_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = l_Lean_MessageData_note(v___x_3125_);
v___x_3127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3127_, 0, v_msg_3070_);
lean_ctor_set(v___x_3127_, 1, v___x_3126_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set_tag(v___x_3099_, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3127_);
v___x_3129_ = v___x_3099_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3132_; 
lean_dec_ref(v_env_3076_);
lean_dec(v_declHint_3071_);
v___x_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3132_, 0, v_msg_3070_);
return v___x_3132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_3133_, lean_object* v_declHint_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_){
_start:
{
lean_object* v_res_3137_; 
v_res_3137_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_3133_, v_declHint_3134_, v___y_3135_);
lean_dec(v___y_3135_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_msg_3138_, lean_object* v_declHint_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_){
_start:
{
lean_object* v___x_3143_; lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3153_; 
v___x_3143_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_3138_, v_declHint_3139_, v___y_3141_);
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3146_ = v___x_3143_;
v_isShared_3147_ = v_isSharedCheck_3153_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3143_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3153_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3151_; 
v___x_3148_ = l_Lean_unknownIdentifierMessageTag;
v___x_3149_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
lean_ctor_set(v___x_3149_, 1, v_a_3144_);
if (v_isShared_3147_ == 0)
{
lean_ctor_set(v___x_3146_, 0, v___x_3149_);
v___x_3151_ = v___x_3146_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v___x_3149_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_msg_3154_, lean_object* v_declHint_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
lean_object* v_res_3159_; 
v_res_3159_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_3154_, v_declHint_3155_, v___y_3156_, v___y_3157_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
return v_res_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object* v_msgData_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_){
_start:
{
lean_object* v___x_3164_; lean_object* v_toCold_3165_; lean_object* v_env_3166_; lean_object* v_options_3167_; uint8_t v___x_3168_; lean_object* v_env_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3164_ = lean_st_ref_get(v___y_3162_);
v_toCold_3165_ = lean_ctor_get(v___y_3161_, 0);
v_env_3166_ = lean_ctor_get(v___x_3164_, 0);
lean_inc_ref(v_env_3166_);
lean_dec(v___x_3164_);
v_options_3167_ = lean_ctor_get(v_toCold_3165_, 2);
v___x_3168_ = 0;
v_env_3169_ = l_Lean_Environment_setRecordingDeps(v_env_3166_, v___x_3168_);
v___x_3170_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_3171_ = lean_unsigned_to_nat(32u);
v___x_3172_ = lean_mk_empty_array_with_capacity(v___x_3171_);
lean_dec_ref(v___x_3172_);
v___x_3173_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5);
lean_inc_ref(v_options_3167_);
v___x_3174_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3174_, 0, v_env_3169_);
lean_ctor_set(v___x_3174_, 1, v___x_3170_);
lean_ctor_set(v___x_3174_, 2, v___x_3173_);
lean_ctor_set(v___x_3174_, 3, v_options_3167_);
v___x_3175_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v_msgData_3160_);
v___x_3176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3175_);
return v___x_3176_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7___boxed(lean_object* v_msgData_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(v_msgData_3177_, v___y_3178_, v___y_3179_);
lean_dec(v___y_3179_);
lean_dec_ref(v___y_3178_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_msg_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_){
_start:
{
lean_object* v_ref_3186_; lean_object* v___x_3187_; lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3196_; 
v_ref_3186_ = lean_ctor_get(v___y_3183_, 2);
v___x_3187_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(v_msg_3182_, v___y_3183_, v___y_3184_);
v_a_3188_ = lean_ctor_get(v___x_3187_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3187_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3190_ = v___x_3187_;
v_isShared_3191_ = v_isSharedCheck_3196_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___x_3187_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3196_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3192_; lean_object* v___x_3194_; 
lean_inc(v_ref_3186_);
v___x_3192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3192_, 0, v_ref_3186_);
lean_ctor_set(v___x_3192_, 1, v_a_3188_);
if (v_isShared_3191_ == 0)
{
lean_ctor_set_tag(v___x_3190_, 1);
lean_ctor_set(v___x_3190_, 0, v___x_3192_);
v___x_3194_ = v___x_3190_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v___x_3192_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_msg_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_3197_, v___y_3198_, v___y_3199_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_3202_, lean_object* v_msg_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
lean_object* v_toCold_3207_; lean_object* v_currRecDepth_3208_; lean_object* v_ref_3209_; uint16_t v_optionFlags_3210_; uint8_t v_suppressElabErrors_3211_; uint8_t v_checkDeprecated_3212_; uint8_t v_isRecordingDeps_3213_; lean_object* v_ref_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v_toCold_3207_ = lean_ctor_get(v___y_3204_, 0);
v_currRecDepth_3208_ = lean_ctor_get(v___y_3204_, 1);
v_ref_3209_ = lean_ctor_get(v___y_3204_, 2);
v_optionFlags_3210_ = lean_ctor_get_uint16(v___y_3204_, sizeof(void*)*3);
v_suppressElabErrors_3211_ = lean_ctor_get_uint8(v___y_3204_, sizeof(void*)*3 + 2);
v_checkDeprecated_3212_ = lean_ctor_get_uint8(v___y_3204_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3213_ = lean_ctor_get_uint8(v___y_3204_, sizeof(void*)*3 + 4);
v_ref_3214_ = l_Lean_replaceRef(v_ref_3202_, v_ref_3209_);
lean_inc(v_currRecDepth_3208_);
lean_inc_ref(v_toCold_3207_);
v___x_3215_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3215_, 0, v_toCold_3207_);
lean_ctor_set(v___x_3215_, 1, v_currRecDepth_3208_);
lean_ctor_set(v___x_3215_, 2, v_ref_3214_);
lean_ctor_set_uint16(v___x_3215_, sizeof(void*)*3, v_optionFlags_3210_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*3 + 2, v_suppressElabErrors_3211_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*3 + 3, v_checkDeprecated_3212_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*3 + 4, v_isRecordingDeps_3213_);
v___x_3216_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_3203_, v___x_3215_, v___y_3205_);
lean_dec_ref_known(v___x_3215_, 3);
return v___x_3216_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_3217_, lean_object* v_msg_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_){
_start:
{
lean_object* v_res_3222_; 
v_res_3222_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_3217_, v_msg_3218_, v___y_3219_, v___y_3220_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v_ref_3217_);
return v_res_3222_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_3223_, lean_object* v_msg_3224_, lean_object* v_declHint_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v___x_3229_; lean_object* v_a_3230_; lean_object* v___x_3231_; 
v___x_3229_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_3224_, v_declHint_3225_, v___y_3226_, v___y_3227_);
v_a_3230_ = lean_ctor_get(v___x_3229_, 0);
lean_inc(v_a_3230_);
lean_dec_ref(v___x_3229_);
v___x_3231_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_3223_, v_a_3230_, v___y_3226_, v___y_3227_);
return v___x_3231_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_3232_, lean_object* v_msg_3233_, lean_object* v_declHint_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_){
_start:
{
lean_object* v_res_3238_; 
v_res_3238_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_3232_, v_msg_3233_, v_declHint_3234_, v___y_3235_, v___y_3236_);
lean_dec(v___y_3236_);
lean_dec_ref(v___y_3235_);
lean_dec(v_ref_3232_);
return v_res_3238_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3240_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_3241_ = l_Lean_stringToMessageData(v___x_3240_);
return v___x_3241_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; 
v___x_3243_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_3244_ = l_Lean_stringToMessageData(v___x_3243_);
return v___x_3244_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_3245_, lean_object* v_constName_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_){
_start:
{
lean_object* v___x_3250_; uint8_t v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3250_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_3251_ = 0;
lean_inc(v_constName_3246_);
v___x_3252_ = l_Lean_MessageData_ofConstName(v_constName_3246_, v___x_3251_);
v___x_3253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3250_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_3255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3253_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___x_3256_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_3245_, v___x_3255_, v_constName_3246_, v___y_3247_, v___y_3248_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_3257_, lean_object* v_constName_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg(v_ref_3257_, v_constName_3258_, v___y_3259_, v___y_3260_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
lean_dec(v_ref_3257_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___redArg(lean_object* v_constName_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_){
_start:
{
lean_object* v_ref_3267_; lean_object* v___x_3268_; 
v_ref_3267_ = lean_ctor_get(v___y_3264_, 2);
v___x_3268_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg(v_ref_3267_, v_constName_3263_, v___y_3264_, v___y_3265_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___redArg___boxed(lean_object* v_constName_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_){
_start:
{
lean_object* v_res_3273_; 
v_res_3273_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___redArg(v_constName_3269_, v___y_3270_, v___y_3271_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0(lean_object* v_constName_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v___x_3278_; lean_object* v_env_3279_; uint8_t v___x_3280_; lean_object* v___x_3281_; 
v___x_3278_ = lean_st_ref_get(v___y_3276_);
v_env_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc_ref(v_env_3279_);
lean_dec(v___x_3278_);
v___x_3280_ = 0;
lean_inc(v_constName_3274_);
v___x_3281_ = l_Lean_Environment_find_x3f(v_env_3279_, v_constName_3274_, v___x_3280_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v___x_3282_; 
v___x_3282_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___redArg(v_constName_3274_, v___y_3275_, v___y_3276_);
return v___x_3282_;
}
else
{
lean_object* v_val_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3290_; 
lean_dec(v_constName_3274_);
v_val_3283_ = lean_ctor_get(v___x_3281_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3285_ = v___x_3281_;
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_val_3283_);
lean_dec(v___x_3281_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3288_; 
if (v_isShared_3286_ == 0)
{
lean_ctor_set_tag(v___x_3285_, 0);
v___x_3288_ = v___x_3285_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_val_3283_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
return v___x_3288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0___boxed(lean_object* v_constName_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0(v_constName_3291_, v___y_3292_, v___y_3293_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive(lean_object* v_type_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_){
_start:
{
lean_object* v___x_3300_; 
v___x_3300_ = l_Lean_Expr_getAppFn(v_type_3296_);
if (lean_obj_tag(v___x_3300_) == 4)
{
lean_object* v_declName_3301_; lean_object* v___x_3302_; 
v_declName_3301_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_declName_3301_);
lean_dec_ref_known(v___x_3300_, 2);
v___x_3302_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0(v_declName_3301_, v_a_3297_, v_a_3298_);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v_a_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3320_; 
v_a_3303_ = lean_ctor_get(v___x_3302_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3305_ = v___x_3302_;
v_isShared_3306_ = v_isSharedCheck_3320_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_a_3303_);
lean_dec(v___x_3302_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3320_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
if (lean_obj_tag(v_a_3303_) == 5)
{
lean_object* v_val_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; uint8_t v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3313_; 
v_val_3307_ = lean_ctor_get(v_a_3303_, 0);
lean_inc_ref(v_val_3307_);
lean_dec_ref_known(v_a_3303_, 1);
v___x_3308_ = l_Lean_InductiveVal_numCtors(v_val_3307_);
lean_dec_ref(v_val_3307_);
v___x_3309_ = lean_unsigned_to_nat(1u);
v___x_3310_ = lean_nat_dec_le(v___x_3308_, v___x_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = lean_box(v___x_3310_);
if (v_isShared_3306_ == 0)
{
lean_ctor_set(v___x_3305_, 0, v___x_3311_);
v___x_3313_ = v___x_3305_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v___x_3311_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
else
{
uint8_t v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3318_; 
lean_dec(v_a_3303_);
v___x_3315_ = 0;
v___x_3316_ = lean_box(v___x_3315_);
if (v_isShared_3306_ == 0)
{
lean_ctor_set(v___x_3305_, 0, v___x_3316_);
v___x_3318_ = v___x_3305_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v___x_3316_);
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
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
v_a_3321_ = lean_ctor_get(v___x_3302_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3302_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3302_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
else
{
uint8_t v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; 
lean_dec_ref(v___x_3300_);
v___x_3329_ = 0;
v___x_3330_ = lean_box(v___x_3329_);
v___x_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3330_);
return v___x_3331_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive___boxed(lean_object* v_type_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive(v_type_3332_, v_a_3333_, v_a_3334_);
lean_dec(v_a_3334_);
lean_dec_ref(v_a_3333_);
lean_dec_ref(v_type_3332_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0(lean_object* v_00_u03b1_3337_, lean_object* v_constName_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_){
_start:
{
lean_object* v___x_3342_; 
v___x_3342_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___redArg(v_constName_3338_, v___y_3339_, v___y_3340_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3343_, lean_object* v_constName_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
lean_object* v_res_3348_; 
v_res_3348_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0(v_00_u03b1_3343_, v_constName_3344_, v___y_3345_, v___y_3346_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
return v_res_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3349_, lean_object* v_ref_3350_, lean_object* v_constName_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_){
_start:
{
lean_object* v___x_3355_; 
v___x_3355_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___redArg(v_ref_3350_, v_constName_3351_, v___y_3352_, v___y_3353_);
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3356_, lean_object* v_ref_3357_, lean_object* v_constName_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
lean_object* v_res_3362_; 
v_res_3362_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1(v_00_u03b1_3356_, v_ref_3357_, v_constName_3358_, v___y_3359_, v___y_3360_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec(v_ref_3357_);
return v_res_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3363_, lean_object* v_ref_3364_, lean_object* v_msg_3365_, lean_object* v_declHint_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_3364_, v_msg_3365_, v_declHint_3366_, v___y_3367_, v___y_3368_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3371_, lean_object* v_ref_3372_, lean_object* v_msg_3373_, lean_object* v_declHint_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v_res_3378_; 
v_res_3378_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3371_, v_ref_3372_, v_msg_3373_, v_declHint_3374_, v___y_3375_, v___y_3376_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec(v_ref_3372_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_3379_, lean_object* v_declHint_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_){
_start:
{
lean_object* v___x_3384_; 
v___x_3384_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_3379_, v_declHint_3380_, v___y_3382_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_3385_, lean_object* v_declHint_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_3385_, v_declHint_3386_, v___y_3387_, v___y_3388_);
lean_dec(v___y_3388_);
lean_dec_ref(v___y_3387_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_3391_, lean_object* v_ref_3392_, lean_object* v_msg_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_){
_start:
{
lean_object* v___x_3397_; 
v___x_3397_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_3392_, v_msg_3393_, v___y_3394_, v___y_3395_);
return v___x_3397_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_3398_, lean_object* v_ref_3399_, lean_object* v_msg_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_3398_, v_ref_3399_, v_msg_3400_, v___y_3401_, v___y_3402_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec(v_ref_3399_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b1_3405_, lean_object* v_msg_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_3406_, v___y_3407_, v___y_3408_);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_3411_, lean_object* v_msg_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(v_00_u03b1_3411_, v_msg_3412_, v___y_3413_, v___y_3414_);
lean_dec(v___y_3414_);
lean_dec_ref(v___y_3413_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_applyInjection_x3f(lean_object* v_goal_3417_, lean_object* v_fvarId_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_){
_start:
{
lean_object* v_toGoalState_3424_; lean_object* v_mvarId_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3461_; 
v_toGoalState_3424_ = lean_ctor_get(v_goal_3417_, 0);
v_mvarId_3425_ = lean_ctor_get(v_goal_3417_, 1);
v_isSharedCheck_3461_ = !lean_is_exclusive(v_goal_3417_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3427_ = v_goal_3417_;
v_isShared_3428_ = v_isSharedCheck_3461_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_mvarId_3425_);
lean_inc(v_toGoalState_3424_);
lean_dec(v_goal_3417_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3461_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3429_; 
v___x_3429_ = l_Lean_Meta_Grind_injection_x3f(v_mvarId_3425_, v_fvarId_3418_, v_a_3419_, v_a_3420_, v_a_3421_, v_a_3422_);
if (lean_obj_tag(v___x_3429_) == 0)
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3452_; 
v_a_3430_ = lean_ctor_get(v___x_3429_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3432_ = v___x_3429_;
v_isShared_3433_ = v_isSharedCheck_3452_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3429_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3452_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
if (lean_obj_tag(v_a_3430_) == 1)
{
lean_object* v_val_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3447_; 
v_val_3434_ = lean_ctor_get(v_a_3430_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v_a_3430_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3436_ = v_a_3430_;
v_isShared_3437_ = v_isSharedCheck_3447_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_val_3434_);
lean_dec(v_a_3430_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3447_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3439_; 
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 1, v_val_3434_);
v___x_3439_ = v___x_3427_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_toGoalState_3424_);
lean_ctor_set(v_reuseFailAlloc_3446_, 1, v_val_3434_);
v___x_3439_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
lean_object* v___x_3441_; 
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 0, v___x_3439_);
v___x_3441_ = v___x_3436_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
lean_object* v___x_3443_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v___x_3441_);
v___x_3443_ = v___x_3432_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v___x_3441_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
}
}
else
{
lean_object* v___x_3448_; lean_object* v___x_3450_; 
lean_dec(v_a_3430_);
lean_del_object(v___x_3427_);
lean_dec_ref(v_toGoalState_3424_);
v___x_3448_ = lean_box(0);
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v___x_3448_);
v___x_3450_ = v___x_3432_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v___x_3448_);
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
else
{
lean_object* v_a_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3460_; 
lean_del_object(v___x_3427_);
lean_dec_ref(v_toGoalState_3424_);
v_a_3453_ = lean_ctor_get(v___x_3429_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3455_ = v___x_3429_;
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_a_3453_);
lean_dec(v___x_3429_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_a_3453_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_applyInjection_x3f___boxed(lean_object* v_goal_3462_, lean_object* v_fvarId_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_){
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_applyInjection_x3f(v_goal_3462_, v_fvarId_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3466_);
lean_dec(v_a_3465_);
lean_dec_ref(v_a_3464_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___redArg(lean_object* v_mvarId_3470_, lean_object* v_x_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3470_, v_x_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3485_; 
v_a_3478_ = lean_ctor_get(v___x_3477_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3480_ = v___x_3477_;
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v___x_3477_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3478_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
else
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3493_; 
v_a_3486_ = lean_ctor_get(v___x_3477_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3488_ = v___x_3477_;
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v___x_3477_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3491_; 
if (v_isShared_3489_ == 0)
{
v___x_3491_ = v___x_3488_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v_a_3486_);
v___x_3491_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
return v___x_3491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___redArg___boxed(lean_object* v_mvarId_3494_, lean_object* v_x_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_){
_start:
{
lean_object* v_res_3501_; 
v_res_3501_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___redArg(v_mvarId_3494_, v_x_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
lean_dec(v___y_3499_);
lean_dec_ref(v___y_3498_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0(lean_object* v_00_u03b1_3502_, lean_object* v_mvarId_3503_, lean_object* v_x_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v___x_3510_; 
v___x_3510_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___redArg(v_mvarId_3503_, v_x_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___boxed(lean_object* v_00_u03b1_3511_, lean_object* v_mvarId_3512_, lean_object* v_x_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0(v_00_u03b1_3511_, v_mvarId_3512_, v_x_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
lean_dec(v___y_3517_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3515_);
lean_dec_ref(v___y_3514_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp___lam__0(lean_object* v_mvarId_3520_, lean_object* v_toGoalState_3521_, lean_object* v_goal_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_){
_start:
{
lean_object* v___x_3528_; 
lean_inc(v_mvarId_3520_);
v___x_3528_ = l_Lean_MVarId_getType(v_mvarId_3520_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3530_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3530_ = l_Lean_Meta_isProp(v_a_3529_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3557_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3533_ = v___x_3530_;
v_isShared_3534_ = v_isSharedCheck_3557_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_a_3531_);
lean_dec(v___x_3530_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3557_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
uint8_t v___x_3535_; 
v___x_3535_ = lean_unbox(v_a_3531_);
lean_dec(v_a_3531_);
if (v___x_3535_ == 0)
{
lean_object* v___x_3536_; 
lean_del_object(v___x_3533_);
lean_dec_ref(v_goal_3522_);
v___x_3536_ = l_Lean_MVarId_exfalso(v_mvarId_3520_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3545_; 
v_a_3537_ = lean_ctor_get(v___x_3536_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v___x_3536_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3539_ = v___x_3536_;
v_isShared_3540_ = v_isSharedCheck_3545_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v___x_3536_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3545_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3541_; lean_object* v___x_3543_; 
v___x_3541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3541_, 0, v_toGoalState_3521_);
lean_ctor_set(v___x_3541_, 1, v_a_3537_);
if (v_isShared_3540_ == 0)
{
lean_ctor_set(v___x_3539_, 0, v___x_3541_);
v___x_3543_ = v___x_3539_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v___x_3541_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
return v___x_3543_;
}
}
}
else
{
lean_object* v_a_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3553_; 
lean_dec_ref(v_toGoalState_3521_);
v_a_3546_ = lean_ctor_get(v___x_3536_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3536_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3548_ = v___x_3536_;
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_a_3546_);
lean_dec(v___x_3536_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
lean_object* v___x_3551_; 
if (v_isShared_3549_ == 0)
{
v___x_3551_ = v___x_3548_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_a_3546_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
}
else
{
lean_object* v___x_3555_; 
lean_dec_ref(v_toGoalState_3521_);
lean_dec(v_mvarId_3520_);
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 0, v_goal_3522_);
v___x_3555_ = v___x_3533_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_goal_3522_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3565_; 
lean_dec_ref(v_goal_3522_);
lean_dec_ref(v_toGoalState_3521_);
lean_dec(v_mvarId_3520_);
v_a_3558_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3560_ = v___x_3530_;
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3530_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
if (v_isShared_3561_ == 0)
{
v___x_3563_ = v___x_3560_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
else
{
lean_object* v_a_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3573_; 
lean_dec_ref(v_goal_3522_);
lean_dec_ref(v_toGoalState_3521_);
lean_dec(v_mvarId_3520_);
v_a_3566_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3568_ = v___x_3528_;
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_a_3566_);
lean_dec(v___x_3528_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
lean_object* v___x_3571_; 
if (v_isShared_3569_ == 0)
{
v___x_3571_ = v___x_3568_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_a_3566_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp___lam__0___boxed(lean_object* v_mvarId_3574_, lean_object* v_toGoalState_3575_, lean_object* v_goal_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
lean_object* v_res_3582_; 
v_res_3582_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp___lam__0(v_mvarId_3574_, v_toGoalState_3575_, v_goal_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
return v_res_3582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp(lean_object* v_goal_3583_, lean_object* v_a_3584_, lean_object* v_a_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_){
_start:
{
lean_object* v_toGoalState_3589_; lean_object* v_mvarId_3590_; lean_object* v___f_3591_; lean_object* v___x_3592_; 
v_toGoalState_3589_ = lean_ctor_get(v_goal_3583_, 0);
lean_inc_ref(v_toGoalState_3589_);
v_mvarId_3590_ = lean_ctor_get(v_goal_3583_, 1);
lean_inc_n(v_mvarId_3590_, 2);
v___f_3591_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3591_, 0, v_mvarId_3590_);
lean_closure_set(v___f_3591_, 1, v_toGoalState_3589_);
lean_closure_set(v___f_3591_, 2, v_goal_3583_);
v___x_3592_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp_spec__0___redArg(v_mvarId_3590_, v___f_3591_, v_a_3584_, v_a_3585_, v_a_3586_, v_a_3587_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp___boxed(lean_object* v_goal_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp(v_goal_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_);
lean_dec(v_a_3597_);
lean_dec_ref(v_a_3596_);
lean_dec(v_a_3595_);
lean_dec_ref(v_a_3594_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget___lam__0(lean_object* v_toGoalState_3600_, lean_object* v_mvarId_3601_, lean_object* v_goal_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_){
_start:
{
lean_object* v_mvarId_3614_; lean_object* v___x_3617_; 
lean_inc(v_mvarId_3601_);
v___x_3617_ = l_Lean_MVarId_getType(v_mvarId_3601_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
if (lean_obj_tag(v___x_3617_) == 0)
{
lean_object* v_a_3618_; lean_object* v___x_3619_; 
v_a_3618_ = lean_ctor_get(v___x_3617_, 0);
lean_inc_n(v_a_3618_, 2);
lean_dec_ref_known(v___x_3617_, 1);
v___x_3619_ = l_Lean_Meta_Grind_simpCore(v_a_3618_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v_a_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3651_; 
v_a_3620_ = lean_ctor_get(v___x_3619_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3622_ = v___x_3619_;
v_isShared_3623_ = v_isSharedCheck_3651_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_a_3620_);
lean_dec(v___x_3619_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3651_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v_expr_3624_; lean_object* v_proof_x3f_3625_; uint8_t v___x_3626_; 
v_expr_3624_ = lean_ctor_get(v_a_3620_, 0);
lean_inc_ref(v_expr_3624_);
v_proof_x3f_3625_ = lean_ctor_get(v_a_3620_, 1);
lean_inc(v_proof_x3f_3625_);
lean_dec(v_a_3620_);
v___x_3626_ = lean_expr_eqv(v_expr_3624_, v_a_3618_);
lean_dec(v_a_3618_);
if (v___x_3626_ == 0)
{
lean_del_object(v___x_3622_);
lean_dec_ref(v_goal_3602_);
if (lean_obj_tag(v_proof_x3f_3625_) == 0)
{
lean_object* v___x_3627_; 
v___x_3627_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_3601_, v_expr_3624_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_a_3628_; 
v_a_3628_ = lean_ctor_get(v___x_3627_, 0);
lean_inc(v_a_3628_);
lean_dec_ref_known(v___x_3627_, 1);
v_mvarId_3614_ = v_a_3628_;
goto v___jp_3613_;
}
else
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3636_; 
lean_dec_ref(v_toGoalState_3600_);
v_a_3629_ = lean_ctor_get(v___x_3627_, 0);
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3631_ = v___x_3627_;
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3627_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3634_; 
if (v_isShared_3632_ == 0)
{
v___x_3634_ = v___x_3631_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3629_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
return v___x_3634_;
}
}
}
}
else
{
lean_object* v_val_3637_; lean_object* v___x_3638_; 
v_val_3637_ = lean_ctor_get(v_proof_x3f_3625_, 0);
lean_inc(v_val_3637_);
lean_dec_ref_known(v_proof_x3f_3625_, 1);
v___x_3638_ = l_Lean_MVarId_replaceTargetEq(v_mvarId_3601_, v_expr_3624_, v_val_3637_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
lean_inc(v_a_3639_);
lean_dec_ref_known(v___x_3638_, 1);
v_mvarId_3614_ = v_a_3639_;
goto v___jp_3613_;
}
else
{
lean_object* v_a_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3647_; 
lean_dec_ref(v_toGoalState_3600_);
v_a_3640_ = lean_ctor_get(v___x_3638_, 0);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3642_ = v___x_3638_;
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
else
{
lean_inc(v_a_3640_);
lean_dec(v___x_3638_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v___x_3645_; 
if (v_isShared_3643_ == 0)
{
v___x_3645_ = v___x_3642_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v_a_3640_);
v___x_3645_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
return v___x_3645_;
}
}
}
}
}
else
{
lean_object* v___x_3649_; 
lean_dec(v_proof_x3f_3625_);
lean_dec_ref(v_expr_3624_);
lean_dec(v_mvarId_3601_);
lean_dec_ref(v_toGoalState_3600_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 0, v_goal_3602_);
v___x_3649_ = v___x_3622_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_goal_3602_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
else
{
lean_object* v_a_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3659_; 
lean_dec(v_a_3618_);
lean_dec_ref(v_goal_3602_);
lean_dec(v_mvarId_3601_);
lean_dec_ref(v_toGoalState_3600_);
v_a_3652_ = lean_ctor_get(v___x_3619_, 0);
v_isSharedCheck_3659_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_3654_ = v___x_3619_;
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_a_3652_);
lean_dec(v___x_3619_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3657_; 
if (v_isShared_3655_ == 0)
{
v___x_3657_ = v___x_3654_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_a_3652_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
return v___x_3657_;
}
}
}
}
else
{
lean_object* v_a_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3667_; 
lean_dec_ref(v_goal_3602_);
lean_dec(v_mvarId_3601_);
lean_dec_ref(v_toGoalState_3600_);
v_a_3660_ = lean_ctor_get(v___x_3617_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3662_ = v___x_3617_;
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_a_3660_);
lean_dec(v___x_3617_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3665_; 
if (v_isShared_3663_ == 0)
{
v___x_3665_ = v___x_3662_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_a_3660_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
}
}
}
v___jp_3613_:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3615_, 0, v_toGoalState_3600_);
lean_ctor_set(v___x_3615_, 1, v_mvarId_3614_);
v___x_3616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3616_, 0, v___x_3615_);
return v___x_3616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget___lam__0___boxed(lean_object* v_toGoalState_3668_, lean_object* v_mvarId_3669_, lean_object* v_goal_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
lean_object* v_res_3681_; 
v_res_3681_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget___lam__0(v_toGoalState_3668_, v_mvarId_3669_, v_goal_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
lean_dec(v___y_3679_);
lean_dec_ref(v___y_3678_);
lean_dec(v___y_3677_);
lean_dec_ref(v___y_3676_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
return v_res_3681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget(lean_object* v_goal_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_, lean_object* v_a_3687_, lean_object* v_a_3688_, lean_object* v_a_3689_, lean_object* v_a_3690_, lean_object* v_a_3691_){
_start:
{
lean_object* v_toGoalState_3693_; lean_object* v_mvarId_3694_; lean_object* v___f_3695_; lean_object* v___x_3696_; 
v_toGoalState_3693_ = lean_ctor_get(v_goal_3682_, 0);
lean_inc_ref(v_toGoalState_3693_);
v_mvarId_3694_ = lean_ctor_get(v_goal_3682_, 1);
lean_inc_n(v_mvarId_3694_, 2);
v___f_3695_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget___lam__0___boxed), 13, 3);
lean_closure_set(v___f_3695_, 0, v_toGoalState_3693_);
lean_closure_set(v___f_3695_, 1, v_mvarId_3694_);
lean_closure_set(v___f_3695_, 2, v_goal_3682_);
v___x_3696_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_3694_, v___f_3695_, v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_, v_a_3687_, v_a_3688_, v_a_3689_, v_a_3690_, v_a_3691_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget___boxed(lean_object* v_goal_3697_, lean_object* v_a_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_, lean_object* v_a_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget(v_goal_3697_, v_a_3698_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_);
lean_dec(v_a_3706_);
lean_dec_ref(v_a_3705_);
lean_dec(v_a_3704_);
lean_dec_ref(v_a_3703_);
lean_dec(v_a_3702_);
lean_dec_ref(v_a_3701_);
lean_dec(v_a_3700_);
lean_dec_ref(v_a_3699_);
lean_dec(v_a_3698_);
return v_res_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_lastDecl_x3f(lean_object* v_goal_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_, lean_object* v_a_3713_){
_start:
{
lean_object* v_mvarId_3715_; lean_object* v___x_3716_; 
v_mvarId_3715_ = lean_ctor_get(v_goal_3709_, 1);
lean_inc(v_mvarId_3715_);
lean_dec_ref(v_goal_3709_);
v___x_3716_ = l_Lean_MVarId_getDecl(v_mvarId_3715_, v_a_3710_, v_a_3711_, v_a_3712_, v_a_3713_);
if (lean_obj_tag(v___x_3716_) == 0)
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3726_; 
v_a_3717_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3719_ = v___x_3716_;
v_isShared_3720_ = v_isSharedCheck_3726_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v___x_3716_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3726_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v_lctx_3721_; lean_object* v___x_3722_; lean_object* v___x_3724_; 
v_lctx_3721_ = lean_ctor_get(v_a_3717_, 1);
lean_inc_ref(v_lctx_3721_);
lean_dec(v_a_3717_);
v___x_3722_ = l_Lean_LocalContext_lastDecl(v_lctx_3721_);
lean_dec_ref(v_lctx_3721_);
if (v_isShared_3720_ == 0)
{
lean_ctor_set(v___x_3719_, 0, v___x_3722_);
v___x_3724_ = v___x_3719_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3722_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
else
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3734_; 
v_a_3727_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3729_ = v___x_3716_;
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3716_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3732_; 
if (v_isShared_3730_ == 0)
{
v___x_3732_ = v___x_3729_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3727_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_lastDecl_x3f___boxed(lean_object* v_goal_3735_, lean_object* v_a_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_, lean_object* v_a_3739_, lean_object* v_a_3740_){
_start:
{
lean_object* v_res_3741_; 
v_res_3741_ = l_Lean_Meta_Grind_Goal_lastDecl_x3f(v_goal_3735_, v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_);
lean_dec(v_a_3739_);
lean_dec_ref(v_a_3738_);
lean_dec(v_a_3737_);
lean_dec_ref(v_a_3736_);
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__0(lean_object* v_goal_3742_, lean_object* v_fvarId_3743_, lean_object* v_generation_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_){
_start:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; 
v___x_3755_ = lean_st_mk_ref(v_goal_3742_);
lean_inc(v_fvarId_3743_);
v___x_3756_ = l_Lean_Meta_Grind_addHypothesis(v_fvarId_3743_, v_generation_3744_, v___x_3755_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v___x_3757_; 
lean_dec_ref_known(v___x_3756_, 1);
v___x_3757_ = l_Lean_FVarId_getType___redArg(v_fvarId_3743_, v___y_3750_, v___y_3752_, v___y_3753_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_object* v_a_3758_; lean_object* v___x_3759_; 
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
lean_inc(v_a_3758_);
lean_dec_ref_known(v___x_3757_, 1);
v___x_3759_ = l_Lean_Meta_Grind_markCaseSplitAsResolved(v_a_3758_, v___x_3755_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3768_; 
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3759_);
if (v_isSharedCheck_3768_ == 0)
{
lean_object* v_unused_3769_; 
v_unused_3769_ = lean_ctor_get(v___x_3759_, 0);
lean_dec(v_unused_3769_);
v___x_3761_ = v___x_3759_;
v_isShared_3762_ = v_isSharedCheck_3768_;
goto v_resetjp_3760_;
}
else
{
lean_dec(v___x_3759_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3768_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3766_; 
v___x_3763_ = lean_st_ref_get(v___x_3755_);
v___x_3764_ = lean_st_ref_get(v___x_3755_);
lean_dec(v___x_3755_);
lean_dec(v___x_3764_);
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 0, v___x_3763_);
v___x_3766_ = v___x_3761_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v___x_3763_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
else
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3777_; 
lean_dec(v___x_3755_);
v_a_3770_ = lean_ctor_get(v___x_3759_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3759_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3772_ = v___x_3759_;
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v___x_3759_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
return v___x_3775_;
}
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
lean_dec(v___x_3755_);
v_a_3778_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v___x_3757_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3757_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3793_; 
lean_dec(v___x_3755_);
lean_dec(v_fvarId_3743_);
v_a_3786_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3788_ = v___x_3756_;
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3756_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3791_; 
if (v_isShared_3789_ == 0)
{
v___x_3791_ = v___x_3788_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3786_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__0___boxed(lean_object* v_goal_3794_, lean_object* v_fvarId_3795_, lean_object* v_generation_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_){
_start:
{
lean_object* v_res_3807_; 
v_res_3807_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__0(v_goal_3794_, v_fvarId_3795_, v_generation_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
lean_dec(v___y_3801_);
lean_dec_ref(v___y_3800_);
lean_dec(v___y_3799_);
lean_dec_ref(v___y_3798_);
lean_dec(v___y_3797_);
return v_res_3807_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___redArg(lean_object* v_kp_3808_, lean_object* v_as_x27_3809_, lean_object* v_b_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
if (lean_obj_tag(v_as_x27_3809_) == 0)
{
lean_object* v___x_3821_; 
lean_dec_ref(v_kp_3808_);
v___x_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3821_, 0, v_b_3810_);
return v___x_3821_;
}
else
{
lean_object* v_head_3822_; lean_object* v_tail_3823_; lean_object* v_fst_3824_; lean_object* v_snd_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3851_; 
v_head_3822_ = lean_ctor_get(v_as_x27_3809_, 0);
v_tail_3823_ = lean_ctor_get(v_as_x27_3809_, 1);
v_fst_3824_ = lean_ctor_get(v_b_3810_, 0);
v_snd_3825_ = lean_ctor_get(v_b_3810_, 1);
v_isSharedCheck_3851_ = !lean_is_exclusive(v_b_3810_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3827_ = v_b_3810_;
v_isShared_3828_ = v_isSharedCheck_3851_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_snd_3825_);
lean_inc(v_fst_3824_);
lean_dec(v_b_3810_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3851_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3829_; 
lean_inc_ref(v_kp_3808_);
lean_inc(v___y_3819_);
lean_inc_ref(v___y_3818_);
lean_inc(v___y_3817_);
lean_inc_ref(v___y_3816_);
lean_inc(v___y_3815_);
lean_inc_ref(v___y_3814_);
lean_inc(v___y_3813_);
lean_inc_ref(v___y_3812_);
lean_inc(v___y_3811_);
lean_inc(v_head_3822_);
v___x_3829_ = lean_apply_11(v_kp_3808_, v_head_3822_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_, lean_box(0));
if (lean_obj_tag(v___x_3829_) == 0)
{
lean_object* v_a_3830_; 
v_a_3830_ = lean_ctor_get(v___x_3829_, 0);
lean_inc(v_a_3830_);
lean_dec_ref_known(v___x_3829_, 1);
if (lean_obj_tag(v_a_3830_) == 0)
{
lean_object* v_seq_3831_; lean_object* v___x_3832_; lean_object* v___x_3834_; 
v_seq_3831_ = lean_ctor_get(v_a_3830_, 0);
lean_inc(v_seq_3831_);
lean_dec_ref_known(v_a_3830_, 1);
v___x_3832_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_fst_3824_, v_seq_3831_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 0, v___x_3832_);
v___x_3834_ = v___x_3827_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v___x_3832_);
lean_ctor_set(v_reuseFailAlloc_3836_, 1, v_snd_3825_);
v___x_3834_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
v_as_x27_3809_ = v_tail_3823_;
v_b_3810_ = v___x_3834_;
goto _start;
}
}
else
{
lean_object* v_gs_3837_; lean_object* v___x_3838_; lean_object* v___x_3840_; 
v_gs_3837_ = lean_ctor_get(v_a_3830_, 0);
lean_inc(v_gs_3837_);
lean_dec_ref_known(v_a_3830_, 1);
v___x_3838_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_snd_3825_, v_gs_3837_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 1, v___x_3838_);
v___x_3840_ = v___x_3827_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_fst_3824_);
lean_ctor_set(v_reuseFailAlloc_3842_, 1, v___x_3838_);
v___x_3840_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
v_as_x27_3809_ = v_tail_3823_;
v_b_3810_ = v___x_3840_;
goto _start;
}
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_del_object(v___x_3827_);
lean_dec(v_snd_3825_);
lean_dec(v_fst_3824_);
lean_dec_ref(v_kp_3808_);
v_a_3843_ = lean_ctor_get(v___x_3829_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3829_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3829_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3829_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___redArg___boxed(lean_object* v_kp_3852_, lean_object* v_as_x27_3853_, lean_object* v_b_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___redArg(v_kp_3852_, v_as_x27_3853_, v_b_3854_, v___y_3855_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec(v___y_3859_);
lean_dec_ref(v___y_3858_);
lean_dec(v___y_3857_);
lean_dec_ref(v___y_3856_);
lean_dec(v___y_3855_);
lean_dec(v_as_x27_3853_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__0(lean_object* v_goal_3866_, uint64_t v_a_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_){
_start:
{
if (lean_obj_tag(v_a_3868_) == 0)
{
lean_object* v___x_3870_; 
lean_dec_ref(v_goal_3866_);
v___x_3870_ = lean_array_to_list(v_a_3869_);
return v___x_3870_;
}
else
{
lean_object* v_toGoalState_3871_; lean_object* v_ematch_3872_; lean_object* v_head_3873_; lean_object* v_tail_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3936_; 
v_toGoalState_3871_ = lean_ctor_get(v_goal_3866_, 0);
lean_inc_ref(v_toGoalState_3871_);
v_ematch_3872_ = lean_ctor_get(v_toGoalState_3871_, 14);
lean_inc_ref(v_ematch_3872_);
v_head_3873_ = lean_ctor_get(v_a_3868_, 0);
v_tail_3874_ = lean_ctor_get(v_a_3868_, 1);
v_isSharedCheck_3936_ = !lean_is_exclusive(v_a_3868_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3876_ = v_a_3868_;
v_isShared_3877_ = v_isSharedCheck_3936_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_tail_3874_);
lean_inc(v_head_3873_);
lean_dec(v_a_3868_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3936_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v_nextDeclIdx_3878_; lean_object* v_enodeMap_3879_; lean_object* v_exprs_3880_; lean_object* v_parents_3881_; lean_object* v_condParents_3882_; lean_object* v_congrTable_3883_; lean_object* v_appMap_3884_; lean_object* v_indicesFound_3885_; lean_object* v_toProcess_3886_; lean_object* v_internalizing_3887_; uint8_t v_inconsistent_3888_; lean_object* v_nextIdx_3889_; lean_object* v_newRawFacts_3890_; lean_object* v_facts_3891_; lean_object* v_extThms_3892_; lean_object* v_inj_3893_; lean_object* v_split_3894_; lean_object* v_clean_3895_; lean_object* v_sstates_3896_; lean_object* v_goalStack_3897_; uint64_t v_introBase_3898_; lean_object* v_numIntros_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3934_; 
v_nextDeclIdx_3878_ = lean_ctor_get(v_toGoalState_3871_, 0);
v_enodeMap_3879_ = lean_ctor_get(v_toGoalState_3871_, 1);
v_exprs_3880_ = lean_ctor_get(v_toGoalState_3871_, 2);
v_parents_3881_ = lean_ctor_get(v_toGoalState_3871_, 3);
v_condParents_3882_ = lean_ctor_get(v_toGoalState_3871_, 4);
v_congrTable_3883_ = lean_ctor_get(v_toGoalState_3871_, 5);
v_appMap_3884_ = lean_ctor_get(v_toGoalState_3871_, 6);
v_indicesFound_3885_ = lean_ctor_get(v_toGoalState_3871_, 7);
v_toProcess_3886_ = lean_ctor_get(v_toGoalState_3871_, 8);
v_internalizing_3887_ = lean_ctor_get(v_toGoalState_3871_, 9);
v_inconsistent_3888_ = lean_ctor_get_uint8(v_toGoalState_3871_, sizeof(void*)*21 + 8);
v_nextIdx_3889_ = lean_ctor_get(v_toGoalState_3871_, 10);
v_newRawFacts_3890_ = lean_ctor_get(v_toGoalState_3871_, 11);
v_facts_3891_ = lean_ctor_get(v_toGoalState_3871_, 12);
v_extThms_3892_ = lean_ctor_get(v_toGoalState_3871_, 13);
v_inj_3893_ = lean_ctor_get(v_toGoalState_3871_, 15);
v_split_3894_ = lean_ctor_get(v_toGoalState_3871_, 16);
v_clean_3895_ = lean_ctor_get(v_toGoalState_3871_, 17);
v_sstates_3896_ = lean_ctor_get(v_toGoalState_3871_, 18);
v_goalStack_3897_ = lean_ctor_get(v_toGoalState_3871_, 19);
v_introBase_3898_ = lean_ctor_get_uint64(v_toGoalState_3871_, sizeof(void*)*21);
v_numIntros_3899_ = lean_ctor_get(v_toGoalState_3871_, 20);
v_isSharedCheck_3934_ = !lean_is_exclusive(v_toGoalState_3871_);
if (v_isSharedCheck_3934_ == 0)
{
lean_object* v_unused_3935_; 
v_unused_3935_ = lean_ctor_get(v_toGoalState_3871_, 14);
lean_dec(v_unused_3935_);
v___x_3901_ = v_toGoalState_3871_;
v_isShared_3902_ = v_isSharedCheck_3934_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_numIntros_3899_);
lean_inc(v_goalStack_3897_);
lean_inc(v_sstates_3896_);
lean_inc(v_clean_3895_);
lean_inc(v_split_3894_);
lean_inc(v_inj_3893_);
lean_inc(v_extThms_3892_);
lean_inc(v_facts_3891_);
lean_inc(v_newRawFacts_3890_);
lean_inc(v_nextIdx_3889_);
lean_inc(v_internalizing_3887_);
lean_inc(v_toProcess_3886_);
lean_inc(v_indicesFound_3885_);
lean_inc(v_appMap_3884_);
lean_inc(v_congrTable_3883_);
lean_inc(v_condParents_3882_);
lean_inc(v_parents_3881_);
lean_inc(v_exprs_3880_);
lean_inc(v_enodeMap_3879_);
lean_inc(v_nextDeclIdx_3878_);
lean_dec(v_toGoalState_3871_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3934_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v_thmMap_3903_; lean_object* v_gmt_3904_; lean_object* v_thms_3905_; lean_object* v_newThms_3906_; lean_object* v_numInstances_3907_; lean_object* v_numDelayedInstances_3908_; lean_object* v_preInstances_3909_; lean_object* v_nextThmIdx_3910_; lean_object* v_matchEqNames_3911_; lean_object* v_delayedThmInsts_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3932_; 
v_thmMap_3903_ = lean_ctor_get(v_ematch_3872_, 0);
v_gmt_3904_ = lean_ctor_get(v_ematch_3872_, 1);
v_thms_3905_ = lean_ctor_get(v_ematch_3872_, 2);
v_newThms_3906_ = lean_ctor_get(v_ematch_3872_, 3);
v_numInstances_3907_ = lean_ctor_get(v_ematch_3872_, 4);
v_numDelayedInstances_3908_ = lean_ctor_get(v_ematch_3872_, 5);
v_preInstances_3909_ = lean_ctor_get(v_ematch_3872_, 7);
v_nextThmIdx_3910_ = lean_ctor_get(v_ematch_3872_, 8);
v_matchEqNames_3911_ = lean_ctor_get(v_ematch_3872_, 9);
v_delayedThmInsts_3912_ = lean_ctor_get(v_ematch_3872_, 10);
v_isSharedCheck_3932_ = !lean_is_exclusive(v_ematch_3872_);
if (v_isSharedCheck_3932_ == 0)
{
lean_object* v_unused_3933_; 
v_unused_3933_ = lean_ctor_get(v_ematch_3872_, 6);
lean_dec(v_unused_3933_);
v___x_3914_ = v_ematch_3872_;
v_isShared_3915_ = v_isSharedCheck_3932_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_delayedThmInsts_3912_);
lean_inc(v_matchEqNames_3911_);
lean_inc(v_nextThmIdx_3910_);
lean_inc(v_preInstances_3909_);
lean_inc(v_numDelayedInstances_3908_);
lean_inc(v_numInstances_3907_);
lean_inc(v_newThms_3906_);
lean_inc(v_thms_3905_);
lean_inc(v_gmt_3904_);
lean_inc(v_thmMap_3903_);
lean_dec(v_ematch_3872_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3932_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3919_; 
v___x_3916_ = lean_array_get_size(v_a_3869_);
v___x_3917_ = lean_unsigned_to_nat(0u);
if (v_isShared_3915_ == 0)
{
lean_ctor_set(v___x_3914_, 6, v___x_3917_);
v___x_3919_ = v___x_3914_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_thmMap_3903_);
lean_ctor_set(v_reuseFailAlloc_3931_, 1, v_gmt_3904_);
lean_ctor_set(v_reuseFailAlloc_3931_, 2, v_thms_3905_);
lean_ctor_set(v_reuseFailAlloc_3931_, 3, v_newThms_3906_);
lean_ctor_set(v_reuseFailAlloc_3931_, 4, v_numInstances_3907_);
lean_ctor_set(v_reuseFailAlloc_3931_, 5, v_numDelayedInstances_3908_);
lean_ctor_set(v_reuseFailAlloc_3931_, 6, v___x_3917_);
lean_ctor_set(v_reuseFailAlloc_3931_, 7, v_preInstances_3909_);
lean_ctor_set(v_reuseFailAlloc_3931_, 8, v_nextThmIdx_3910_);
lean_ctor_set(v_reuseFailAlloc_3931_, 9, v_matchEqNames_3911_);
lean_ctor_set(v_reuseFailAlloc_3931_, 10, v_delayedThmInsts_3912_);
v___x_3919_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
lean_object* v___x_3921_; 
if (v_isShared_3902_ == 0)
{
lean_ctor_set(v___x_3901_, 14, v___x_3919_);
v___x_3921_ = v___x_3901_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_nextDeclIdx_3878_);
lean_ctor_set(v_reuseFailAlloc_3930_, 1, v_enodeMap_3879_);
lean_ctor_set(v_reuseFailAlloc_3930_, 2, v_exprs_3880_);
lean_ctor_set(v_reuseFailAlloc_3930_, 3, v_parents_3881_);
lean_ctor_set(v_reuseFailAlloc_3930_, 4, v_condParents_3882_);
lean_ctor_set(v_reuseFailAlloc_3930_, 5, v_congrTable_3883_);
lean_ctor_set(v_reuseFailAlloc_3930_, 6, v_appMap_3884_);
lean_ctor_set(v_reuseFailAlloc_3930_, 7, v_indicesFound_3885_);
lean_ctor_set(v_reuseFailAlloc_3930_, 8, v_toProcess_3886_);
lean_ctor_set(v_reuseFailAlloc_3930_, 9, v_internalizing_3887_);
lean_ctor_set(v_reuseFailAlloc_3930_, 10, v_nextIdx_3889_);
lean_ctor_set(v_reuseFailAlloc_3930_, 11, v_newRawFacts_3890_);
lean_ctor_set(v_reuseFailAlloc_3930_, 12, v_facts_3891_);
lean_ctor_set(v_reuseFailAlloc_3930_, 13, v_extThms_3892_);
lean_ctor_set(v_reuseFailAlloc_3930_, 14, v___x_3919_);
lean_ctor_set(v_reuseFailAlloc_3930_, 15, v_inj_3893_);
lean_ctor_set(v_reuseFailAlloc_3930_, 16, v_split_3894_);
lean_ctor_set(v_reuseFailAlloc_3930_, 17, v_clean_3895_);
lean_ctor_set(v_reuseFailAlloc_3930_, 18, v_sstates_3896_);
lean_ctor_set(v_reuseFailAlloc_3930_, 19, v_goalStack_3897_);
lean_ctor_set(v_reuseFailAlloc_3930_, 20, v_numIntros_3899_);
lean_ctor_set_uint8(v_reuseFailAlloc_3930_, sizeof(void*)*21 + 8, v_inconsistent_3888_);
lean_ctor_set_uint64(v_reuseFailAlloc_3930_, sizeof(void*)*21, v_introBase_3898_);
v___x_3921_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
lean_object* v___x_3923_; 
if (v_isShared_3877_ == 0)
{
lean_ctor_set_tag(v___x_3876_, 0);
lean_ctor_set(v___x_3876_, 1, v_head_3873_);
lean_ctor_set(v___x_3876_, 0, v___x_3921_);
v___x_3923_ = v___x_3876_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v___x_3921_);
lean_ctor_set(v_reuseFailAlloc_3929_, 1, v_head_3873_);
v___x_3923_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
uint64_t v___x_3924_; uint64_t v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; 
v___x_3924_ = lean_uint64_of_nat(v___x_3916_);
v___x_3925_ = lean_uint64_mix_hash(v_a_3867_, v___x_3924_);
v___x_3926_ = l_Lean_Meta_Grind_Goal_setIntroBase(v___x_3923_, v___x_3925_);
v___x_3927_ = lean_array_push(v_a_3869_, v___x_3926_);
v_a_3868_ = v_tail_3874_;
v_a_3869_ = v___x_3927_;
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
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__0___boxed(lean_object* v_goal_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_){
_start:
{
uint64_t v_a_49564__boxed_3941_; lean_object* v_res_3942_; 
v_a_49564__boxed_3941_ = lean_unbox_uint64(v_a_3938_);
lean_dec_ref(v_a_3938_);
v_res_3942_ = l_List_mapIdx_go___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__0(v_goal_3937_, v_a_49564__boxed_3941_, v_a_3939_, v_a_3940_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1(lean_object* v_fvarId_3947_, lean_object* v_kp_3948_, lean_object* v_goal_3949_, lean_object* v_toGoalState_3950_, lean_object* v_mvarId_3951_, lean_object* v___f_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
lean_object* v_goal_3964_; lean_object* v_toGoalState_3965_; lean_object* v_mvarId_3966_; lean_object* v___y_3967_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3971_; lean_object* v___y_3972_; lean_object* v___y_3973_; lean_object* v___y_3974_; lean_object* v___y_3975_; lean_object* v___x_4051_; 
lean_inc(v_fvarId_3947_);
v___x_4051_ = l_Lean_FVarId_getType___redArg(v_fvarId_3947_, v___y_3958_, v___y_3960_, v___y_3961_);
if (lean_obj_tag(v___x_4051_) == 0)
{
lean_object* v_a_4052_; lean_object* v___x_4053_; 
v_a_4052_ = lean_ctor_get(v___x_4051_, 0);
lean_inc(v_a_4052_);
lean_dec_ref_known(v___x_4051_, 1);
lean_inc(v___y_3961_);
lean_inc_ref(v___y_3960_);
lean_inc(v___y_3959_);
lean_inc_ref(v___y_3958_);
v___x_4053_ = lean_whnf(v_a_4052_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_object* v_a_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4156_; 
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4156_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4056_ = v___x_4053_;
v_isShared_4057_ = v_isSharedCheck_4156_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_a_4054_);
lean_dec(v___x_4053_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4156_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___y_4062_; lean_object* v___y_4063_; lean_object* v___y_4064_; lean_object* v___y_4065_; lean_object* v___y_4066_; lean_object* v___y_4067_; lean_object* v___x_4107_; 
v___x_4107_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___redArg(v_a_4054_, v___y_3954_);
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4147_; 
v_a_4108_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4110_ = v___x_4107_;
v_isShared_4111_ = v_isSharedCheck_4147_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4107_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4147_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
uint8_t v___x_4112_; 
v___x_4112_ = lean_unbox(v_a_4108_);
lean_dec(v_a_4108_);
if (v___x_4112_ == 0)
{
lean_object* v___x_4113_; lean_object* v___x_4115_; 
lean_del_object(v___x_4056_);
lean_dec(v_a_4054_);
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v___x_4113_ = lean_box(0);
if (v_isShared_4111_ == 0)
{
lean_ctor_set(v___x_4110_, 0, v___x_4113_);
v___x_4115_ = v___x_4110_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v___x_4113_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
else
{
lean_object* v___x_4117_; 
lean_del_object(v___x_4110_);
v___x_4117_ = l_Lean_Meta_Grind_cheapCasesOnly___redArg(v___y_3954_);
if (lean_obj_tag(v___x_4117_) == 0)
{
lean_object* v_a_4118_; uint8_t v___x_4119_; 
v_a_4118_ = lean_ctor_get(v___x_4117_, 0);
lean_inc(v_a_4118_);
lean_dec_ref_known(v___x_4117_, 1);
v___x_4119_ = lean_unbox(v_a_4118_);
lean_dec(v_a_4118_);
if (v___x_4119_ == 0)
{
v___y_4059_ = v___y_3953_;
v___y_4060_ = v___y_3954_;
v___y_4061_ = v___y_3955_;
v___y_4062_ = v___y_3956_;
v___y_4063_ = v___y_3957_;
v___y_4064_ = v___y_3958_;
v___y_4065_ = v___y_3959_;
v___y_4066_ = v___y_3960_;
v___y_4067_ = v___y_3961_;
goto v___jp_4058_;
}
else
{
lean_object* v___x_4120_; 
v___x_4120_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isCheapInductive(v_a_4054_, v___y_3960_, v___y_3961_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4130_; 
v_a_4121_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4130_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4130_ == 0)
{
v___x_4123_ = v___x_4120_;
v_isShared_4124_ = v_isSharedCheck_4130_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4120_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4130_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
uint8_t v___x_4125_; 
v___x_4125_ = lean_unbox(v_a_4121_);
lean_dec(v_a_4121_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4126_; lean_object* v___x_4128_; 
lean_del_object(v___x_4056_);
lean_dec(v_a_4054_);
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v___x_4126_ = lean_box(0);
if (v_isShared_4124_ == 0)
{
lean_ctor_set(v___x_4123_, 0, v___x_4126_);
v___x_4128_ = v___x_4123_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v___x_4126_);
v___x_4128_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
return v___x_4128_;
}
}
else
{
lean_del_object(v___x_4123_);
v___y_4059_ = v___y_3953_;
v___y_4060_ = v___y_3954_;
v___y_4061_ = v___y_3955_;
v___y_4062_ = v___y_3956_;
v___y_4063_ = v___y_3957_;
v___y_4064_ = v___y_3958_;
v___y_4065_ = v___y_3959_;
v___y_4066_ = v___y_3960_;
v___y_4067_ = v___y_3961_;
goto v___jp_4058_;
}
}
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
lean_del_object(v___x_4056_);
lean_dec(v_a_4054_);
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v_a_4131_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___x_4120_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4120_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
}
else
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4146_; 
lean_del_object(v___x_4056_);
lean_dec(v_a_4054_);
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v_a_4139_ = lean_ctor_get(v___x_4117_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4117_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4141_ = v___x_4117_;
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v___x_4117_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v___x_4144_; 
if (v_isShared_4142_ == 0)
{
v___x_4144_ = v___x_4141_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v_a_4139_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
}
}
else
{
lean_object* v_a_4148_; lean_object* v___x_4150_; uint8_t v_isShared_4151_; uint8_t v_isSharedCheck_4155_; 
lean_del_object(v___x_4056_);
lean_dec(v_a_4054_);
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v_a_4148_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4150_ = v___x_4107_;
v_isShared_4151_ = v_isSharedCheck_4155_;
goto v_resetjp_4149_;
}
else
{
lean_inc(v_a_4148_);
lean_dec(v___x_4107_);
v___x_4150_ = lean_box(0);
v_isShared_4151_ = v_isSharedCheck_4155_;
goto v_resetjp_4149_;
}
v_resetjp_4149_:
{
lean_object* v___x_4153_; 
if (v_isShared_4151_ == 0)
{
v___x_4153_ = v___x_4150_;
goto v_reusejp_4152_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v_a_4148_);
v___x_4153_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4152_;
}
v_reusejp_4152_:
{
return v___x_4153_;
}
}
}
v___jp_4058_:
{
lean_object* v___x_4068_; 
v___x_4068_ = l_Lean_Expr_getAppFn(v_a_4054_);
if (lean_obj_tag(v___x_4068_) == 4)
{
lean_object* v_declName_4069_; lean_object* v___x_4070_; 
lean_del_object(v___x_4056_);
v_declName_4069_ = lean_ctor_get(v___x_4068_, 0);
lean_inc_n(v_declName_4069_, 2);
lean_dec_ref_known(v___x_4068_, 2);
v___x_4070_ = l_Lean_Meta_Grind_saveCases___redArg(v_declName_4069_, v___y_4061_);
if (lean_obj_tag(v___x_4070_) == 0)
{
lean_object* v___x_4071_; 
lean_dec_ref_known(v___x_4070_, 1);
v___x_4071_ = l_Lean_Meta_isProp(v_a_4054_, v___y_4064_, v___y_4065_, v___y_4066_, v___y_4067_);
if (lean_obj_tag(v___x_4071_) == 0)
{
lean_object* v_a_4072_; uint8_t v___x_4073_; 
v_a_4072_ = lean_ctor_get(v___x_4071_, 0);
lean_inc(v_a_4072_);
lean_dec_ref_known(v___x_4071_, 1);
v___x_4073_ = l_Lean_Meta_Grind_isBuiltinEagerCases(v_declName_4069_);
lean_dec(v_declName_4069_);
if (v___x_4073_ == 0)
{
uint8_t v___x_4074_; 
v___x_4074_ = lean_unbox(v_a_4072_);
lean_dec(v_a_4072_);
if (v___x_4074_ == 0)
{
lean_dec_ref(v___f_3952_);
v_goal_3964_ = v_goal_3949_;
v_toGoalState_3965_ = v_toGoalState_3950_;
v_mvarId_3966_ = v_mvarId_3951_;
v___y_3967_ = v___y_4059_;
v___y_3968_ = v___y_4060_;
v___y_3969_ = v___y_4061_;
v___y_3970_ = v___y_4062_;
v___y_3971_ = v___y_4063_;
v___y_3972_ = v___y_4064_;
v___y_3973_ = v___y_4065_;
v___y_3974_ = v___y_4066_;
v___y_3975_ = v___y_4067_;
goto v___jp_3963_;
}
else
{
lean_object* v___x_4075_; 
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
v___x_4075_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_3951_, v___f_3952_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_, v___y_4066_, v___y_4067_);
if (lean_obj_tag(v___x_4075_) == 0)
{
lean_object* v_a_4076_; lean_object* v_toGoalState_4077_; lean_object* v_mvarId_4078_; 
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
lean_inc(v_a_4076_);
lean_dec_ref_known(v___x_4075_, 1);
v_toGoalState_4077_ = lean_ctor_get(v_a_4076_, 0);
lean_inc_ref(v_toGoalState_4077_);
v_mvarId_4078_ = lean_ctor_get(v_a_4076_, 1);
lean_inc(v_mvarId_4078_);
v_goal_3964_ = v_a_4076_;
v_toGoalState_3965_ = v_toGoalState_4077_;
v_mvarId_3966_ = v_mvarId_4078_;
v___y_3967_ = v___y_4059_;
v___y_3968_ = v___y_4060_;
v___y_3969_ = v___y_4061_;
v___y_3970_ = v___y_4062_;
v___y_3971_ = v___y_4063_;
v___y_3972_ = v___y_4064_;
v___y_3973_ = v___y_4065_;
v___y_3974_ = v___y_4066_;
v___y_3975_ = v___y_4067_;
goto v___jp_3963_;
}
else
{
lean_object* v_a_4079_; lean_object* v___x_4081_; uint8_t v_isShared_4082_; uint8_t v_isSharedCheck_4086_; 
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v_a_4079_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4086_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4086_ == 0)
{
v___x_4081_ = v___x_4075_;
v_isShared_4082_ = v_isSharedCheck_4086_;
goto v_resetjp_4080_;
}
else
{
lean_inc(v_a_4079_);
lean_dec(v___x_4075_);
v___x_4081_ = lean_box(0);
v_isShared_4082_ = v_isSharedCheck_4086_;
goto v_resetjp_4080_;
}
v_resetjp_4080_:
{
lean_object* v___x_4084_; 
if (v_isShared_4082_ == 0)
{
v___x_4084_ = v___x_4081_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v_a_4079_);
v___x_4084_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
return v___x_4084_;
}
}
}
}
}
else
{
lean_dec(v_a_4072_);
lean_dec_ref(v___f_3952_);
v_goal_3964_ = v_goal_3949_;
v_toGoalState_3965_ = v_toGoalState_3950_;
v_mvarId_3966_ = v_mvarId_3951_;
v___y_3967_ = v___y_4059_;
v___y_3968_ = v___y_4060_;
v___y_3969_ = v___y_4061_;
v___y_3970_ = v___y_4062_;
v___y_3971_ = v___y_4063_;
v___y_3972_ = v___y_4064_;
v___y_3973_ = v___y_4065_;
v___y_3974_ = v___y_4066_;
v___y_3975_ = v___y_4067_;
goto v___jp_3963_;
}
}
else
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4094_; 
lean_dec(v_declName_4069_);
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v_a_4087_ = lean_ctor_get(v___x_4071_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_4071_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4089_ = v___x_4071_;
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4071_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4092_; 
if (v_isShared_4090_ == 0)
{
v___x_4092_ = v___x_4089_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_a_4087_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
return v___x_4092_;
}
}
}
}
else
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4102_; 
lean_dec(v_declName_4069_);
lean_dec(v_a_4054_);
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v_a_4095_ = lean_ctor_get(v___x_4070_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4070_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4097_ = v___x_4070_;
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4070_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
else
{
lean_object* v___x_4103_; lean_object* v___x_4105_; 
lean_dec_ref(v___x_4068_);
lean_dec(v_a_4054_);
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v___x_4103_ = lean_box(0);
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 0, v___x_4103_);
v___x_4105_ = v___x_4056_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v___x_4103_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
}
}
}
else
{
lean_object* v_a_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4164_; 
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v_a_4157_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4164_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4159_ = v___x_4053_;
v_isShared_4160_ = v_isSharedCheck_4164_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_a_4157_);
lean_dec(v___x_4053_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4164_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4162_; 
if (v_isShared_4160_ == 0)
{
v___x_4162_ = v___x_4159_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v_a_4157_);
v___x_4162_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
return v___x_4162_;
}
}
}
}
else
{
lean_object* v_a_4165_; lean_object* v___x_4167_; uint8_t v_isShared_4168_; uint8_t v_isSharedCheck_4172_; 
lean_dec_ref(v___f_3952_);
lean_dec(v_mvarId_3951_);
lean_dec_ref(v_toGoalState_3950_);
lean_dec_ref(v_goal_3949_);
lean_dec_ref(v_kp_3948_);
lean_dec(v_fvarId_3947_);
v_a_4165_ = lean_ctor_get(v___x_4051_, 0);
v_isSharedCheck_4172_ = !lean_is_exclusive(v___x_4051_);
if (v_isSharedCheck_4172_ == 0)
{
v___x_4167_ = v___x_4051_;
v_isShared_4168_ = v_isSharedCheck_4172_;
goto v_resetjp_4166_;
}
else
{
lean_inc(v_a_4165_);
lean_dec(v___x_4051_);
v___x_4167_ = lean_box(0);
v_isShared_4168_ = v_isSharedCheck_4172_;
goto v_resetjp_4166_;
}
v_resetjp_4166_:
{
lean_object* v___x_4170_; 
if (v_isShared_4168_ == 0)
{
v___x_4170_ = v___x_4167_;
goto v_reusejp_4169_;
}
else
{
lean_object* v_reuseFailAlloc_4171_; 
v_reuseFailAlloc_4171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4171_, 0, v_a_4165_);
v___x_4170_ = v_reuseFailAlloc_4171_;
goto v_reusejp_4169_;
}
v_reusejp_4169_:
{
return v___x_4170_;
}
}
}
v___jp_3963_:
{
uint8_t v_inconsistent_3976_; 
v_inconsistent_3976_ = lean_ctor_get_uint8(v_toGoalState_3965_, sizeof(void*)*21 + 8);
lean_dec_ref(v_toGoalState_3965_);
if (v_inconsistent_3976_ == 0)
{
lean_object* v___x_3977_; lean_object* v___x_3978_; 
v___x_3977_ = l_Lean_mkFVar(v_fvarId_3947_);
lean_inc_ref(v___x_3977_);
v___x_3978_ = l_Lean_Meta_Grind_cases(v_mvarId_3966_, v___x_3977_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v___x_3980_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3979_);
lean_dec_ref_known(v___x_3978_, 1);
v___x_3980_ = l_Lean_Meta_Grind_getAnchor(v___x_3977_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_object* v_a_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; uint64_t v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; 
v_a_3981_ = lean_ctor_get(v___x_3980_, 0);
lean_inc(v_a_3981_);
lean_dec_ref_known(v___x_3980_, 1);
v___x_3982_ = lean_unsigned_to_nat(0u);
v___x_3983_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__0));
v___x_3984_ = lean_unbox_uint64(v_a_3981_);
lean_dec(v_a_3981_);
v___x_3985_ = l_List_mapIdx_go___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__0(v_goal_3964_, v___x_3984_, v_a_3979_, v___x_3983_);
v___x_3986_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___closed__1));
v___x_3987_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___redArg(v_kp_3948_, v___x_3985_, v___x_3986_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_);
lean_dec(v___x_3985_);
if (lean_obj_tag(v___x_3987_) == 0)
{
lean_object* v_a_3988_; lean_object* v___x_3990_; uint8_t v_isShared_3991_; uint8_t v_isSharedCheck_4008_; 
v_a_3988_ = lean_ctor_get(v___x_3987_, 0);
v_isSharedCheck_4008_ = !lean_is_exclusive(v___x_3987_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_3990_ = v___x_3987_;
v_isShared_3991_ = v_isSharedCheck_4008_;
goto v_resetjp_3989_;
}
else
{
lean_inc(v_a_3988_);
lean_dec(v___x_3987_);
v___x_3990_ = lean_box(0);
v_isShared_3991_ = v_isSharedCheck_4008_;
goto v_resetjp_3989_;
}
v_resetjp_3989_:
{
lean_object* v_fst_3992_; lean_object* v_snd_3993_; lean_object* v___x_3994_; uint8_t v___x_3995_; 
v_fst_3992_ = lean_ctor_get(v_a_3988_, 0);
lean_inc(v_fst_3992_);
v_snd_3993_ = lean_ctor_get(v_a_3988_, 1);
lean_inc(v_snd_3993_);
lean_dec(v_a_3988_);
v___x_3994_ = lean_array_get_size(v_snd_3993_);
v___x_3995_ = lean_nat_dec_eq(v___x_3994_, v___x_3982_);
if (v___x_3995_ == 0)
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_4000_; 
lean_dec(v_fst_3992_);
v___x_3996_ = lean_array_to_list(v_snd_3993_);
v___x_3997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3996_);
v___x_3998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
if (v_isShared_3991_ == 0)
{
lean_ctor_set(v___x_3990_, 0, v___x_3998_);
v___x_4000_ = v___x_3990_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v___x_3998_);
v___x_4000_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
return v___x_4000_;
}
}
else
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4006_; 
lean_dec(v_snd_3993_);
v___x_4002_ = lean_array_to_list(v_fst_3992_);
v___x_4003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4003_, 0, v___x_4002_);
v___x_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4004_, 0, v___x_4003_);
if (v_isShared_3991_ == 0)
{
lean_ctor_set(v___x_3990_, 0, v___x_4004_);
v___x_4006_ = v___x_3990_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v___x_4004_);
v___x_4006_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
return v___x_4006_;
}
}
}
}
else
{
lean_object* v_a_4009_; lean_object* v___x_4011_; uint8_t v_isShared_4012_; uint8_t v_isSharedCheck_4016_; 
v_a_4009_ = lean_ctor_get(v___x_3987_, 0);
v_isSharedCheck_4016_ = !lean_is_exclusive(v___x_3987_);
if (v_isSharedCheck_4016_ == 0)
{
v___x_4011_ = v___x_3987_;
v_isShared_4012_ = v_isSharedCheck_4016_;
goto v_resetjp_4010_;
}
else
{
lean_inc(v_a_4009_);
lean_dec(v___x_3987_);
v___x_4011_ = lean_box(0);
v_isShared_4012_ = v_isSharedCheck_4016_;
goto v_resetjp_4010_;
}
v_resetjp_4010_:
{
lean_object* v___x_4014_; 
if (v_isShared_4012_ == 0)
{
v___x_4014_ = v___x_4011_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v_a_4009_);
v___x_4014_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
return v___x_4014_;
}
}
}
}
else
{
lean_object* v_a_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4024_; 
lean_dec(v_a_3979_);
lean_dec_ref(v_goal_3964_);
lean_dec_ref(v_kp_3948_);
v_a_4017_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4019_ = v___x_3980_;
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_a_4017_);
lean_dec(v___x_3980_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4022_; 
if (v_isShared_4020_ == 0)
{
v___x_4022_ = v___x_4019_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4017_);
v___x_4022_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
return v___x_4022_;
}
}
}
}
else
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4032_; 
lean_dec_ref(v___x_3977_);
lean_dec_ref(v_goal_3964_);
lean_dec_ref(v_kp_3948_);
v_a_4025_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4027_ = v___x_3978_;
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v___x_3978_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___x_4030_; 
if (v_isShared_4028_ == 0)
{
v___x_4030_ = v___x_4027_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v_a_4025_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
else
{
lean_object* v___x_4033_; 
lean_dec(v_mvarId_3966_);
lean_dec(v_fvarId_3947_);
lean_inc(v___y_3975_);
lean_inc_ref(v___y_3974_);
lean_inc(v___y_3973_);
lean_inc_ref(v___y_3972_);
lean_inc(v___y_3971_);
lean_inc_ref(v___y_3970_);
lean_inc(v___y_3969_);
lean_inc_ref(v___y_3968_);
lean_inc(v___y_3967_);
v___x_4033_ = lean_apply_11(v_kp_3948_, v_goal_3964_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_, lean_box(0));
if (lean_obj_tag(v___x_4033_) == 0)
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4042_; 
v_a_4034_ = lean_ctor_get(v___x_4033_, 0);
v_isSharedCheck_4042_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4042_ == 0)
{
v___x_4036_ = v___x_4033_;
v_isShared_4037_ = v_isSharedCheck_4042_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_4033_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4042_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4038_; lean_object* v___x_4040_; 
v___x_4038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4038_, 0, v_a_4034_);
if (v_isShared_4037_ == 0)
{
lean_ctor_set(v___x_4036_, 0, v___x_4038_);
v___x_4040_ = v___x_4036_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v___x_4038_);
v___x_4040_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
return v___x_4040_;
}
}
}
else
{
lean_object* v_a_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4050_; 
v_a_4043_ = lean_ctor_get(v___x_4033_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_4045_ = v___x_4033_;
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_a_4043_);
lean_dec(v___x_4033_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4048_; 
if (v_isShared_4046_ == 0)
{
v___x_4048_ = v___x_4045_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_a_4043_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___boxed(lean_object* v_fvarId_4173_, lean_object* v_kp_4174_, lean_object* v_goal_4175_, lean_object* v_toGoalState_4176_, lean_object* v_mvarId_4177_, lean_object* v___f_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1(v_fvarId_4173_, v_kp_4174_, v_goal_4175_, v_toGoalState_4176_, v_mvarId_4177_, v___f_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_);
lean_dec(v___y_4187_);
lean_dec_ref(v___y_4186_);
lean_dec(v___y_4185_);
lean_dec_ref(v___y_4184_);
lean_dec(v___y_4183_);
lean_dec_ref(v___y_4182_);
lean_dec(v___y_4181_);
lean_dec_ref(v___y_4180_);
lean_dec(v___y_4179_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f(lean_object* v_goal_4190_, lean_object* v_fvarId_4191_, lean_object* v_generation_4192_, lean_object* v_kp_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_, lean_object* v_a_4201_, lean_object* v_a_4202_){
_start:
{
lean_object* v_toGoalState_4204_; lean_object* v_mvarId_4205_; lean_object* v___f_4206_; lean_object* v___f_4207_; lean_object* v___x_4208_; 
v_toGoalState_4204_ = lean_ctor_get(v_goal_4190_, 0);
lean_inc_ref(v_toGoalState_4204_);
v_mvarId_4205_ = lean_ctor_get(v_goal_4190_, 1);
lean_inc_n(v_mvarId_4205_, 2);
lean_inc(v_fvarId_4191_);
lean_inc_ref(v_goal_4190_);
v___f_4206_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__0___boxed), 13, 3);
lean_closure_set(v___f_4206_, 0, v_goal_4190_);
lean_closure_set(v___f_4206_, 1, v_fvarId_4191_);
lean_closure_set(v___f_4206_, 2, v_generation_4192_);
v___f_4207_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___lam__1___boxed), 16, 6);
lean_closure_set(v___f_4207_, 0, v_fvarId_4191_);
lean_closure_set(v___f_4207_, 1, v_kp_4193_);
lean_closure_set(v___f_4207_, 2, v_goal_4190_);
lean_closure_set(v___f_4207_, 3, v_toGoalState_4204_);
lean_closure_set(v___f_4207_, 4, v_mvarId_4205_);
lean_closure_set(v___f_4207_, 5, v___f_4206_);
v___x_4208_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_4205_, v___f_4207_, v_a_4194_, v_a_4195_, v_a_4196_, v_a_4197_, v_a_4198_, v_a_4199_, v_a_4200_, v_a_4201_, v_a_4202_);
return v___x_4208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f___boxed(lean_object* v_goal_4209_, lean_object* v_fvarId_4210_, lean_object* v_generation_4211_, lean_object* v_kp_4212_, lean_object* v_a_4213_, lean_object* v_a_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_, lean_object* v_a_4220_, lean_object* v_a_4221_, lean_object* v_a_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f(v_goal_4209_, v_fvarId_4210_, v_generation_4211_, v_kp_4212_, v_a_4213_, v_a_4214_, v_a_4215_, v_a_4216_, v_a_4217_, v_a_4218_, v_a_4219_, v_a_4220_, v_a_4221_);
lean_dec(v_a_4221_);
lean_dec_ref(v_a_4220_);
lean_dec(v_a_4219_);
lean_dec_ref(v_a_4218_);
lean_dec(v_a_4217_);
lean_dec_ref(v_a_4216_);
lean_dec(v_a_4215_);
lean_dec_ref(v_a_4214_);
lean_dec(v_a_4213_);
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1(lean_object* v_kp_4224_, lean_object* v_as_4225_, lean_object* v_as_x27_4226_, lean_object* v_b_4227_, lean_object* v_a_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_){
_start:
{
lean_object* v___x_4239_; 
v___x_4239_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___redArg(v_kp_4224_, v_as_x27_4226_, v_b_4227_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_, v___y_4235_, v___y_4236_, v___y_4237_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1___boxed(lean_object* v_kp_4240_, lean_object* v_as_4241_, lean_object* v_as_x27_4242_, lean_object* v_b_4243_, lean_object* v_a_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_){
_start:
{
lean_object* v_res_4255_; 
v_res_4255_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f_spec__1(v_kp_4240_, v_as_4241_, v_as_x27_4242_, v_b_4243_, v_a_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_);
lean_dec(v___y_4253_);
lean_dec_ref(v___y_4252_);
lean_dec(v___y_4251_);
lean_dec_ref(v___y_4250_);
lean_dec(v___y_4249_);
lean_dec_ref(v___y_4248_);
lean_dec(v___y_4247_);
lean_dec_ref(v___y_4246_);
lean_dec(v___y_4245_);
lean_dec(v_as_x27_4242_);
lean_dec(v_as_4241_);
return v_res_4255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intro___lam__0(lean_object* v_goal_4256_, lean_object* v_fvarId_4257_, lean_object* v_generation_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_){
_start:
{
lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4269_ = lean_st_mk_ref(v_goal_4256_);
v___x_4270_ = l_Lean_Meta_Grind_addHypothesis(v_fvarId_4257_, v_generation_4258_, v___x_4269_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_);
if (lean_obj_tag(v___x_4270_) == 0)
{
lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4279_; 
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4279_ == 0)
{
lean_object* v_unused_4280_; 
v_unused_4280_ = lean_ctor_get(v___x_4270_, 0);
lean_dec(v_unused_4280_);
v___x_4272_ = v___x_4270_;
v_isShared_4273_ = v_isSharedCheck_4279_;
goto v_resetjp_4271_;
}
else
{
lean_dec(v___x_4270_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4279_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4277_; 
v___x_4274_ = lean_st_ref_get(v___x_4269_);
v___x_4275_ = lean_st_ref_get(v___x_4269_);
lean_dec(v___x_4269_);
lean_dec(v___x_4275_);
if (v_isShared_4273_ == 0)
{
lean_ctor_set(v___x_4272_, 0, v___x_4274_);
v___x_4277_ = v___x_4272_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v___x_4274_);
v___x_4277_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
return v___x_4277_;
}
}
}
else
{
lean_object* v_a_4281_; lean_object* v___x_4283_; uint8_t v_isShared_4284_; uint8_t v_isSharedCheck_4288_; 
lean_dec(v___x_4269_);
v_a_4281_ = lean_ctor_get(v___x_4270_, 0);
v_isSharedCheck_4288_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4288_ == 0)
{
v___x_4283_ = v___x_4270_;
v_isShared_4284_ = v_isSharedCheck_4288_;
goto v_resetjp_4282_;
}
else
{
lean_inc(v_a_4281_);
lean_dec(v___x_4270_);
v___x_4283_ = lean_box(0);
v_isShared_4284_ = v_isSharedCheck_4288_;
goto v_resetjp_4282_;
}
v_resetjp_4282_:
{
lean_object* v___x_4286_; 
if (v_isShared_4284_ == 0)
{
v___x_4286_ = v___x_4283_;
goto v_reusejp_4285_;
}
else
{
lean_object* v_reuseFailAlloc_4287_; 
v_reuseFailAlloc_4287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4287_, 0, v_a_4281_);
v___x_4286_ = v_reuseFailAlloc_4287_;
goto v_reusejp_4285_;
}
v_reusejp_4285_:
{
return v___x_4286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intro___lam__0___boxed(lean_object* v_goal_4289_, lean_object* v_fvarId_4290_, lean_object* v_generation_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_){
_start:
{
lean_object* v_res_4302_; 
v_res_4302_ = l_Lean_Meta_Grind_Action_intro___lam__0(v_goal_4289_, v_fvarId_4290_, v_generation_4291_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_, v___y_4298_, v___y_4299_, v___y_4300_);
lean_dec(v___y_4300_);
lean_dec_ref(v___y_4299_);
lean_dec(v___y_4298_);
lean_dec_ref(v___y_4297_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4295_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec(v___y_4292_);
return v_res_4302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intro(lean_object* v_generation_4305_, lean_object* v_goal_4306_, lean_object* v_kna_4307_, lean_object* v_kp_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_, lean_object* v_a_4311_, lean_object* v_a_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_){
_start:
{
lean_object* v_toGoalState_4319_; uint8_t v_inconsistent_4320_; 
v_toGoalState_4319_ = lean_ctor_get(v_goal_4306_, 0);
v_inconsistent_4320_ = lean_ctor_get_uint8(v_toGoalState_4319_, sizeof(void*)*21 + 8);
if (v_inconsistent_4320_ == 0)
{
lean_object* v_mvarId_4321_; lean_object* v___x_4322_; 
v_mvarId_4321_ = lean_ctor_get(v_goal_4306_, 1);
lean_inc(v_mvarId_4321_);
v___x_4322_ = l_Lean_MVarId_getType(v_mvarId_4321_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4322_) == 0)
{
lean_object* v_a_4323_; uint8_t v___x_4324_; 
v_a_4323_ = lean_ctor_get(v___x_4322_, 0);
lean_inc(v_a_4323_);
lean_dec_ref_known(v___x_4322_, 1);
v___x_4324_ = l_Lean_Expr_isFalse(v_a_4323_);
lean_dec(v_a_4323_);
if (v___x_4324_ == 0)
{
lean_object* v___x_4325_; 
lean_dec_ref(v_kna_4307_);
lean_inc(v_generation_4305_);
v___x_4325_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext(v_goal_4306_, v_generation_4305_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v_a_4326_; 
v_a_4326_ = lean_ctor_get(v___x_4325_, 0);
lean_inc(v_a_4326_);
lean_dec_ref_known(v___x_4325_, 1);
switch(lean_obj_tag(v_a_4326_))
{
case 0:
{
lean_object* v_goal_4327_; lean_object* v___x_4328_; 
lean_dec(v_generation_4305_);
v_goal_4327_ = lean_ctor_get(v_a_4326_, 0);
lean_inc_ref(v_goal_4327_);
lean_dec_ref_known(v_a_4326_, 1);
v___x_4328_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_exfalsoIfNotProp(v_goal_4327_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; lean_object* v___x_4330_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
lean_inc(v_a_4329_);
lean_dec_ref_known(v___x_4328_, 1);
v___x_4330_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_simpTarget(v_a_4329_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4330_) == 0)
{
lean_object* v_a_4331_; lean_object* v_toGoalState_4332_; lean_object* v_mvarId_4333_; lean_object* v___x_4334_; 
v_a_4331_ = lean_ctor_get(v___x_4330_, 0);
lean_inc(v_a_4331_);
lean_dec_ref_known(v___x_4330_, 1);
v_toGoalState_4332_ = lean_ctor_get(v_a_4331_, 0);
v_mvarId_4333_ = lean_ctor_get(v_a_4331_, 1);
lean_inc(v_mvarId_4333_);
v___x_4334_ = l_Lean_MVarId_getType(v_mvarId_4333_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4334_) == 0)
{
lean_object* v_a_4335_; uint8_t v___x_4336_; 
v_a_4335_ = lean_ctor_get(v___x_4334_, 0);
lean_inc(v_a_4335_);
lean_dec_ref_known(v___x_4334_, 1);
v___x_4336_ = l_Lean_Expr_isForall(v_a_4335_);
if (v___x_4336_ == 0)
{
uint8_t v___x_4337_; 
v___x_4337_ = l_Lean_Expr_isLet(v_a_4335_);
lean_dec(v_a_4335_);
if (v___x_4337_ == 0)
{
lean_object* v___x_4338_; 
lean_inc(v_mvarId_4333_);
v___x_4338_ = l_Lean_MVarId_byContra_x3f(v_mvarId_4333_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4338_) == 0)
{
lean_object* v_a_4339_; 
v_a_4339_ = lean_ctor_get(v___x_4338_, 0);
lean_inc(v_a_4339_);
lean_dec_ref_known(v___x_4338_, 1);
if (lean_obj_tag(v_a_4339_) == 1)
{
lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4348_; 
lean_inc_ref(v_toGoalState_4332_);
v_isSharedCheck_4348_ = !lean_is_exclusive(v_a_4331_);
if (v_isSharedCheck_4348_ == 0)
{
lean_object* v_unused_4349_; lean_object* v_unused_4350_; 
v_unused_4349_ = lean_ctor_get(v_a_4331_, 1);
lean_dec(v_unused_4349_);
v_unused_4350_ = lean_ctor_get(v_a_4331_, 0);
lean_dec(v_unused_4350_);
v___x_4341_ = v_a_4331_;
v_isShared_4342_ = v_isSharedCheck_4348_;
goto v_resetjp_4340_;
}
else
{
lean_dec(v_a_4331_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4348_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v_val_4343_; lean_object* v___x_4345_; 
v_val_4343_ = lean_ctor_get(v_a_4339_, 0);
lean_inc(v_val_4343_);
lean_dec_ref_known(v_a_4339_, 1);
if (v_isShared_4342_ == 0)
{
lean_ctor_set(v___x_4341_, 1, v_val_4343_);
v___x_4345_ = v___x_4341_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v_toGoalState_4332_);
lean_ctor_set(v_reuseFailAlloc_4347_, 1, v_val_4343_);
v___x_4345_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
lean_object* v___x_4346_; 
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4346_ = lean_apply_11(v_kp_4308_, v___x_4345_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4346_;
}
}
}
else
{
lean_object* v___x_4351_; 
lean_dec(v_a_4339_);
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4351_ = lean_apply_11(v_kp_4308_, v_a_4331_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4351_;
}
}
else
{
lean_object* v_a_4352_; lean_object* v___x_4354_; uint8_t v_isShared_4355_; uint8_t v_isSharedCheck_4359_; 
lean_dec(v_a_4331_);
lean_dec_ref(v_kp_4308_);
v_a_4352_ = lean_ctor_get(v___x_4338_, 0);
v_isSharedCheck_4359_ = !lean_is_exclusive(v___x_4338_);
if (v_isSharedCheck_4359_ == 0)
{
v___x_4354_ = v___x_4338_;
v_isShared_4355_ = v_isSharedCheck_4359_;
goto v_resetjp_4353_;
}
else
{
lean_inc(v_a_4352_);
lean_dec(v___x_4338_);
v___x_4354_ = lean_box(0);
v_isShared_4355_ = v_isSharedCheck_4359_;
goto v_resetjp_4353_;
}
v_resetjp_4353_:
{
lean_object* v___x_4357_; 
if (v_isShared_4355_ == 0)
{
v___x_4357_ = v___x_4354_;
goto v_reusejp_4356_;
}
else
{
lean_object* v_reuseFailAlloc_4358_; 
v_reuseFailAlloc_4358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4358_, 0, v_a_4352_);
v___x_4357_ = v_reuseFailAlloc_4358_;
goto v_reusejp_4356_;
}
v_reusejp_4356_:
{
return v___x_4357_;
}
}
}
}
else
{
lean_object* v___x_4360_; 
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4360_ = lean_apply_11(v_kp_4308_, v_a_4331_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4360_;
}
}
else
{
lean_object* v___x_4361_; 
lean_dec(v_a_4335_);
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4361_ = lean_apply_11(v_kp_4308_, v_a_4331_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4361_;
}
}
else
{
lean_object* v_a_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4369_; 
lean_dec(v_a_4331_);
lean_dec_ref(v_kp_4308_);
v_a_4362_ = lean_ctor_get(v___x_4334_, 0);
v_isSharedCheck_4369_ = !lean_is_exclusive(v___x_4334_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4364_ = v___x_4334_;
v_isShared_4365_ = v_isSharedCheck_4369_;
goto v_resetjp_4363_;
}
else
{
lean_inc(v_a_4362_);
lean_dec(v___x_4334_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4369_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
lean_object* v___x_4367_; 
if (v_isShared_4365_ == 0)
{
v___x_4367_ = v___x_4364_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v_a_4362_);
v___x_4367_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
return v___x_4367_;
}
}
}
}
else
{
lean_object* v_a_4370_; lean_object* v___x_4372_; uint8_t v_isShared_4373_; uint8_t v_isSharedCheck_4377_; 
lean_dec_ref(v_kp_4308_);
v_a_4370_ = lean_ctor_get(v___x_4330_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4330_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4372_ = v___x_4330_;
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
else
{
lean_inc(v_a_4370_);
lean_dec(v___x_4330_);
v___x_4372_ = lean_box(0);
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
v_resetjp_4371_:
{
lean_object* v___x_4375_; 
if (v_isShared_4373_ == 0)
{
v___x_4375_ = v___x_4372_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v_a_4370_);
v___x_4375_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
return v___x_4375_;
}
}
}
}
else
{
lean_object* v_a_4378_; lean_object* v___x_4380_; uint8_t v_isShared_4381_; uint8_t v_isSharedCheck_4385_; 
lean_dec_ref(v_kp_4308_);
v_a_4378_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4385_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4380_ = v___x_4328_;
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
else
{
lean_inc(v_a_4378_);
lean_dec(v___x_4328_);
v___x_4380_ = lean_box(0);
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
v_resetjp_4379_:
{
lean_object* v___x_4383_; 
if (v_isShared_4381_ == 0)
{
v___x_4383_ = v___x_4380_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v_a_4378_);
v___x_4383_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
return v___x_4383_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_4386_; lean_object* v_goal_4387_; lean_object* v___f_4388_; lean_object* v___x_4389_; 
v_fvarId_4386_ = lean_ctor_get(v_a_4326_, 0);
lean_inc_n(v_fvarId_4386_, 3);
v_goal_4387_ = lean_ctor_get(v_a_4326_, 1);
lean_inc_ref_n(v_goal_4387_, 3);
lean_dec_ref_known(v_a_4326_, 2);
lean_inc(v_generation_4305_);
v___f_4388_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_intro___lam__0___boxed), 13, 3);
lean_closure_set(v___f_4388_, 0, v_goal_4387_);
lean_closure_set(v___f_4388_, 1, v_fvarId_4386_);
lean_closure_set(v___f_4388_, 2, v_generation_4305_);
v___x_4389_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_applyInjection_x3f(v_goal_4387_, v_fvarId_4386_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4389_) == 0)
{
lean_object* v_a_4390_; 
v_a_4390_ = lean_ctor_get(v___x_4389_, 0);
lean_inc(v_a_4390_);
lean_dec_ref_known(v___x_4389_, 1);
if (lean_obj_tag(v_a_4390_) == 1)
{
lean_object* v_val_4391_; lean_object* v___x_4392_; 
lean_dec_ref(v___f_4388_);
lean_dec_ref(v_goal_4387_);
lean_dec(v_fvarId_4386_);
lean_dec(v_generation_4305_);
v_val_4391_ = lean_ctor_get(v_a_4390_, 0);
lean_inc(v_val_4391_);
lean_dec_ref_known(v_a_4390_, 1);
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4392_ = lean_apply_11(v_kp_4308_, v_val_4391_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4392_;
}
else
{
lean_object* v___x_4393_; 
lean_dec(v_a_4390_);
lean_inc_ref(v_kp_4308_);
lean_inc_ref(v_goal_4387_);
v___x_4393_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f(v_goal_4387_, v_fvarId_4386_, v_generation_4305_, v_kp_4308_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4393_) == 0)
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4414_; 
v_a_4394_ = lean_ctor_get(v___x_4393_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4393_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4396_ = v___x_4393_;
v_isShared_4397_ = v_isSharedCheck_4414_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4393_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4414_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
if (lean_obj_tag(v_a_4394_) == 1)
{
lean_object* v_val_4398_; lean_object* v___x_4400_; 
lean_dec_ref(v___f_4388_);
lean_dec_ref(v_goal_4387_);
lean_dec_ref(v_kp_4308_);
v_val_4398_ = lean_ctor_get(v_a_4394_, 0);
lean_inc(v_val_4398_);
lean_dec_ref_known(v_a_4394_, 1);
if (v_isShared_4397_ == 0)
{
lean_ctor_set(v___x_4396_, 0, v_val_4398_);
v___x_4400_ = v___x_4396_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_val_4398_);
v___x_4400_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
return v___x_4400_;
}
}
else
{
lean_object* v_mvarId_4402_; lean_object* v___x_4403_; 
lean_del_object(v___x_4396_);
lean_dec(v_a_4394_);
v_mvarId_4402_ = lean_ctor_get(v_goal_4387_, 1);
lean_inc(v_mvarId_4402_);
lean_dec_ref(v_goal_4387_);
v___x_4403_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_4402_, v___f_4388_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4403_) == 0)
{
lean_object* v_a_4404_; lean_object* v___x_4405_; 
v_a_4404_ = lean_ctor_get(v___x_4403_, 0);
lean_inc(v_a_4404_);
lean_dec_ref_known(v___x_4403_, 1);
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4405_ = lean_apply_11(v_kp_4308_, v_a_4404_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4405_;
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4413_; 
lean_dec_ref(v_kp_4308_);
v_a_4406_ = lean_ctor_get(v___x_4403_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4408_ = v___x_4403_;
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v___x_4403_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4411_; 
if (v_isShared_4409_ == 0)
{
v___x_4411_ = v___x_4408_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4406_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
}
}
else
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4422_; 
lean_dec_ref(v___f_4388_);
lean_dec_ref(v_goal_4387_);
lean_dec_ref(v_kp_4308_);
v_a_4415_ = lean_ctor_get(v___x_4393_, 0);
v_isSharedCheck_4422_ = !lean_is_exclusive(v___x_4393_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4417_ = v___x_4393_;
v_isShared_4418_ = v_isSharedCheck_4422_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4393_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4422_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4420_; 
if (v_isShared_4418_ == 0)
{
v___x_4420_ = v___x_4417_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_a_4415_);
v___x_4420_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
return v___x_4420_;
}
}
}
}
}
else
{
lean_object* v_a_4423_; lean_object* v___x_4425_; uint8_t v_isShared_4426_; uint8_t v_isSharedCheck_4430_; 
lean_dec_ref(v___f_4388_);
lean_dec_ref(v_goal_4387_);
lean_dec(v_fvarId_4386_);
lean_dec_ref(v_kp_4308_);
lean_dec(v_generation_4305_);
v_a_4423_ = lean_ctor_get(v___x_4389_, 0);
v_isSharedCheck_4430_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4430_ == 0)
{
v___x_4425_ = v___x_4389_;
v_isShared_4426_ = v_isSharedCheck_4430_;
goto v_resetjp_4424_;
}
else
{
lean_inc(v_a_4423_);
lean_dec(v___x_4389_);
v___x_4425_ = lean_box(0);
v_isShared_4426_ = v_isSharedCheck_4430_;
goto v_resetjp_4424_;
}
v_resetjp_4424_:
{
lean_object* v___x_4428_; 
if (v_isShared_4426_ == 0)
{
v___x_4428_ = v___x_4425_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v_a_4423_);
v___x_4428_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
return v___x_4428_;
}
}
}
}
case 2:
{
lean_object* v_goal_4431_; lean_object* v___x_4432_; 
lean_dec(v_generation_4305_);
v_goal_4431_ = lean_ctor_get(v_a_4326_, 0);
lean_inc_ref(v_goal_4431_);
lean_dec_ref_known(v_a_4326_, 1);
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4432_ = lean_apply_11(v_kp_4308_, v_goal_4431_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4432_;
}
default: 
{
lean_object* v_fvarId_4433_; lean_object* v_goal_4434_; lean_object* v___x_4435_; 
v_fvarId_4433_ = lean_ctor_get(v_a_4326_, 0);
lean_inc(v_fvarId_4433_);
v_goal_4434_ = lean_ctor_get(v_a_4326_, 1);
lean_inc_ref_n(v_goal_4434_, 2);
lean_dec_ref_known(v_a_4326_, 2);
lean_inc_ref(v_kp_4308_);
v___x_4435_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_applyCases_x3f(v_goal_4434_, v_fvarId_4433_, v_generation_4305_, v_kp_4308_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
if (lean_obj_tag(v___x_4435_) == 0)
{
lean_object* v_a_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4445_; 
v_a_4436_ = lean_ctor_get(v___x_4435_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4435_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4438_ = v___x_4435_;
v_isShared_4439_ = v_isSharedCheck_4445_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_a_4436_);
lean_dec(v___x_4435_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4445_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
if (lean_obj_tag(v_a_4436_) == 1)
{
lean_object* v_val_4440_; lean_object* v___x_4442_; 
lean_dec_ref(v_goal_4434_);
lean_dec_ref(v_kp_4308_);
v_val_4440_ = lean_ctor_get(v_a_4436_, 0);
lean_inc(v_val_4440_);
lean_dec_ref_known(v_a_4436_, 1);
if (v_isShared_4439_ == 0)
{
lean_ctor_set(v___x_4438_, 0, v_val_4440_);
v___x_4442_ = v___x_4438_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4443_; 
v_reuseFailAlloc_4443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4443_, 0, v_val_4440_);
v___x_4442_ = v_reuseFailAlloc_4443_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
return v___x_4442_;
}
}
else
{
lean_object* v___x_4444_; 
lean_del_object(v___x_4438_);
lean_dec(v_a_4436_);
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4444_ = lean_apply_11(v_kp_4308_, v_goal_4434_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4444_;
}
}
}
else
{
lean_object* v_a_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4453_; 
lean_dec_ref(v_goal_4434_);
lean_dec_ref(v_kp_4308_);
v_a_4446_ = lean_ctor_get(v___x_4435_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4435_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4448_ = v___x_4435_;
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_a_4446_);
lean_dec(v___x_4435_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v___x_4451_; 
if (v_isShared_4449_ == 0)
{
v___x_4451_ = v___x_4448_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_a_4446_);
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
}
else
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4461_; 
lean_dec_ref(v_kp_4308_);
lean_dec(v_generation_4305_);
v_a_4454_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4456_ = v___x_4325_;
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4325_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v_a_4454_);
v___x_4459_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
return v___x_4459_;
}
}
}
}
else
{
lean_object* v___x_4462_; 
lean_dec_ref(v_kp_4308_);
lean_dec(v_generation_4305_);
lean_inc(v_a_4317_);
lean_inc_ref(v_a_4316_);
lean_inc(v_a_4315_);
lean_inc_ref(v_a_4314_);
lean_inc(v_a_4313_);
lean_inc_ref(v_a_4312_);
lean_inc(v_a_4311_);
lean_inc_ref(v_a_4310_);
lean_inc(v_a_4309_);
v___x_4462_ = lean_apply_11(v_kna_4307_, v_goal_4306_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, lean_box(0));
return v___x_4462_;
}
}
else
{
lean_object* v_a_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4470_; 
lean_dec_ref(v_kp_4308_);
lean_dec_ref(v_kna_4307_);
lean_dec_ref(v_goal_4306_);
lean_dec(v_generation_4305_);
v_a_4463_ = lean_ctor_get(v___x_4322_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4322_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4465_ = v___x_4322_;
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_a_4463_);
lean_dec(v___x_4322_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4468_; 
if (v_isShared_4466_ == 0)
{
v___x_4468_ = v___x_4465_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v_a_4463_);
v___x_4468_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
return v___x_4468_;
}
}
}
}
else
{
lean_object* v___x_4471_; lean_object* v___x_4472_; 
lean_dec_ref(v_kp_4308_);
lean_dec_ref(v_kna_4307_);
lean_dec_ref(v_goal_4306_);
lean_dec(v_generation_4305_);
v___x_4471_ = ((lean_object*)(l_Lean_Meta_Grind_Action_intro___closed__0));
v___x_4472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4472_, 0, v___x_4471_);
return v___x_4472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intro___boxed(lean_object* v_generation_4473_, lean_object* v_goal_4474_, lean_object* v_kna_4475_, lean_object* v_kp_4476_, lean_object* v_a_4477_, lean_object* v_a_4478_, lean_object* v_a_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_, lean_object* v_a_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_, lean_object* v_a_4486_){
_start:
{
lean_object* v_res_4487_; 
v_res_4487_ = l_Lean_Meta_Grind_Action_intro(v_generation_4473_, v_goal_4474_, v_kna_4475_, v_kp_4476_, v_a_4477_, v_a_4478_, v_a_4479_, v_a_4480_, v_a_4481_, v_a_4482_, v_a_4483_, v_a_4484_, v_a_4485_);
lean_dec(v_a_4485_);
lean_dec_ref(v_a_4484_);
lean_dec(v_a_4483_);
lean_dec_ref(v_a_4482_);
lean_dec(v_a_4481_);
lean_dec_ref(v_a_4480_);
lean_dec(v_a_4479_);
lean_dec_ref(v_a_4478_);
lean_dec(v_a_4477_);
return v_res_4487_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_hugeNumber(void){
_start:
{
lean_object* v___x_4488_; 
v___x_4488_ = lean_unsigned_to_nat(1000000u);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___lam__0(lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_){
_start:
{
lean_object* v___x_4502_; 
v___x_4502_ = l_Lean_Meta_Grind_Action_group___redArg(v___y_4489_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_);
return v___x_4502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___lam__0___boxed(lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_){
_start:
{
lean_object* v_res_4516_; 
v_res_4516_ = l_Lean_Meta_Grind_Action_intros___lam__0(v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_, v___y_4512_, v___y_4513_, v___y_4514_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___y_4512_);
lean_dec_ref(v___y_4511_);
lean_dec(v___y_4510_);
lean_dec_ref(v___y_4509_);
lean_dec(v___y_4508_);
lean_dec_ref(v___y_4507_);
lean_dec(v___y_4506_);
lean_dec_ref(v___y_4504_);
return v_res_4516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___lam__1(lean_object* v_generation_4517_, lean_object* v___f_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_){
_start:
{
lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; 
v___x_4532_ = lean_unsigned_to_nat(1000000u);
v___x_4533_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_intro___boxed), 14, 1);
lean_closure_set(v___x_4533_, 0, v_generation_4517_);
v___x_4534_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_loop___boxed), 15, 2);
lean_closure_set(v___x_4534_, 0, v___x_4532_);
lean_closure_set(v___x_4534_, 1, v___x_4533_);
v___x_4535_ = l_Lean_Meta_Grind_Action_andThen(v___x_4534_, v___f_4518_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_);
return v___x_4535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___lam__1___boxed(lean_object* v_generation_4536_, lean_object* v___f_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_){
_start:
{
lean_object* v_res_4551_; 
v_res_4551_ = l_Lean_Meta_Grind_Action_intros___lam__1(v_generation_4536_, v___f_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_);
lean_dec(v___y_4549_);
lean_dec_ref(v___y_4548_);
lean_dec(v___y_4547_);
lean_dec_ref(v___y_4546_);
lean_dec(v___y_4545_);
lean_dec_ref(v___y_4544_);
lean_dec(v___y_4543_);
lean_dec_ref(v___y_4542_);
lean_dec(v___y_4541_);
return v_res_4551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros(lean_object* v_generation_4554_, lean_object* v_a_4555_, lean_object* v_kna_4556_, lean_object* v_kp_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_a_4561_, lean_object* v_a_4562_, lean_object* v_a_4563_, lean_object* v_a_4564_, lean_object* v_a_4565_, lean_object* v_a_4566_){
_start:
{
lean_object* v___f_4568_; lean_object* v___f_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___f_4568_ = ((lean_object*)(l_Lean_Meta_Grind_Action_intros___closed__0));
v___f_4569_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_intros___lam__1___boxed), 15, 2);
lean_closure_set(v___f_4569_, 0, v_generation_4554_);
lean_closure_set(v___f_4569_, 1, v___f_4568_);
v___x_4570_ = ((lean_object*)(l_Lean_Meta_Grind_Action_intros___closed__1));
v___x_4571_ = l_Lean_Meta_Grind_Action_andThen(v___x_4570_, v___f_4569_, v_a_4555_, v_kna_4556_, v_kp_4557_, v_a_4558_, v_a_4559_, v_a_4560_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_, v_a_4565_, v_a_4566_);
return v___x_4571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_intros___boxed(lean_object* v_generation_4572_, lean_object* v_a_4573_, lean_object* v_kna_4574_, lean_object* v_kp_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_){
_start:
{
lean_object* v_res_4586_; 
v_res_4586_ = l_Lean_Meta_Grind_Action_intros(v_generation_4572_, v_a_4573_, v_kna_4574_, v_kp_4575_, v_a_4576_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
lean_dec(v_a_4584_);
lean_dec_ref(v_a_4583_);
lean_dec(v_a_4582_);
lean_dec_ref(v_a_4581_);
lean_dec(v_a_4580_);
lean_dec_ref(v_a_4579_);
lean_dec(v_a_4578_);
lean_dec_ref(v_a_4577_);
lean_dec(v_a_4576_);
return v_res_4586_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
v___x_4594_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__2));
v___x_4595_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__1));
v___x_4596_ = l_Lean_mkConst(v___x_4595_, v___x_4594_);
return v___x_4596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0(lean_object* v_goal_4597_, lean_object* v_prop_4598_, lean_object* v_proof_4599_, lean_object* v_generation_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_){
_start:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; 
v___x_4611_ = lean_st_mk_ref(v_goal_4597_);
lean_inc(v___y_4609_);
lean_inc_ref(v___y_4608_);
lean_inc(v___y_4607_);
lean_inc_ref(v___y_4606_);
lean_inc(v___y_4605_);
lean_inc_ref(v___y_4604_);
lean_inc(v___y_4603_);
lean_inc_ref(v___y_4602_);
lean_inc(v___y_4601_);
lean_inc(v___x_4611_);
lean_inc_ref(v_prop_4598_);
v___x_4612_ = lean_grind_preprocess(v_prop_4598_, v___x_4611_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_);
if (lean_obj_tag(v___x_4612_) == 0)
{
lean_object* v_a_4613_; lean_object* v_expr_4614_; lean_object* v___x_4615_; 
v_a_4613_ = lean_ctor_get(v___x_4612_, 0);
lean_inc(v_a_4613_);
lean_dec_ref_known(v___x_4612_, 1);
v_expr_4614_ = lean_ctor_get(v_a_4613_, 0);
lean_inc_ref(v_expr_4614_);
v___x_4615_ = l_Lean_Meta_Simp_Result_getProof(v_a_4613_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_);
if (lean_obj_tag(v___x_4615_) == 0)
{
lean_object* v_a_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
v_a_4616_ = lean_ctor_get(v___x_4615_, 0);
lean_inc(v_a_4616_);
lean_dec_ref_known(v___x_4615_, 1);
v___x_4617_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___closed__3);
lean_inc_ref(v_expr_4614_);
v___x_4618_ = l_Lean_mkApp4(v___x_4617_, v_prop_4598_, v_expr_4614_, v_a_4616_, v_proof_4599_);
v___x_4619_ = l_Lean_Meta_Grind_add(v_expr_4614_, v___x_4618_, v_generation_4600_, v___x_4611_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_);
if (lean_obj_tag(v___x_4619_) == 0)
{
lean_object* v___x_4621_; uint8_t v_isShared_4622_; uint8_t v_isSharedCheck_4628_; 
v_isSharedCheck_4628_ = !lean_is_exclusive(v___x_4619_);
if (v_isSharedCheck_4628_ == 0)
{
lean_object* v_unused_4629_; 
v_unused_4629_ = lean_ctor_get(v___x_4619_, 0);
lean_dec(v_unused_4629_);
v___x_4621_ = v___x_4619_;
v_isShared_4622_ = v_isSharedCheck_4628_;
goto v_resetjp_4620_;
}
else
{
lean_dec(v___x_4619_);
v___x_4621_ = lean_box(0);
v_isShared_4622_ = v_isSharedCheck_4628_;
goto v_resetjp_4620_;
}
v_resetjp_4620_:
{
lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4626_; 
v___x_4623_ = lean_st_ref_get(v___x_4611_);
v___x_4624_ = lean_st_ref_get(v___x_4611_);
lean_dec(v___x_4611_);
lean_dec(v___x_4624_);
if (v_isShared_4622_ == 0)
{
lean_ctor_set(v___x_4621_, 0, v___x_4623_);
v___x_4626_ = v___x_4621_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v___x_4623_);
v___x_4626_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
return v___x_4626_;
}
}
}
else
{
lean_object* v_a_4630_; lean_object* v___x_4632_; uint8_t v_isShared_4633_; uint8_t v_isSharedCheck_4637_; 
lean_dec(v___x_4611_);
v_a_4630_ = lean_ctor_get(v___x_4619_, 0);
v_isSharedCheck_4637_ = !lean_is_exclusive(v___x_4619_);
if (v_isSharedCheck_4637_ == 0)
{
v___x_4632_ = v___x_4619_;
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
else
{
lean_inc(v_a_4630_);
lean_dec(v___x_4619_);
v___x_4632_ = lean_box(0);
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
v_resetjp_4631_:
{
lean_object* v___x_4635_; 
if (v_isShared_4633_ == 0)
{
v___x_4635_ = v___x_4632_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4636_; 
v_reuseFailAlloc_4636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4636_, 0, v_a_4630_);
v___x_4635_ = v_reuseFailAlloc_4636_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
return v___x_4635_;
}
}
}
}
else
{
lean_object* v_a_4638_; lean_object* v___x_4640_; uint8_t v_isShared_4641_; uint8_t v_isSharedCheck_4645_; 
lean_dec_ref(v_expr_4614_);
lean_dec(v___x_4611_);
lean_dec(v_generation_4600_);
lean_dec_ref(v_proof_4599_);
lean_dec_ref(v_prop_4598_);
v_a_4638_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4645_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4645_ == 0)
{
v___x_4640_ = v___x_4615_;
v_isShared_4641_ = v_isSharedCheck_4645_;
goto v_resetjp_4639_;
}
else
{
lean_inc(v_a_4638_);
lean_dec(v___x_4615_);
v___x_4640_ = lean_box(0);
v_isShared_4641_ = v_isSharedCheck_4645_;
goto v_resetjp_4639_;
}
v_resetjp_4639_:
{
lean_object* v___x_4643_; 
if (v_isShared_4641_ == 0)
{
v___x_4643_ = v___x_4640_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4644_; 
v_reuseFailAlloc_4644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4644_, 0, v_a_4638_);
v___x_4643_ = v_reuseFailAlloc_4644_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
return v___x_4643_;
}
}
}
}
else
{
lean_object* v_a_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4653_; 
lean_dec(v___x_4611_);
lean_dec(v_generation_4600_);
lean_dec_ref(v_proof_4599_);
lean_dec_ref(v_prop_4598_);
v_a_4646_ = lean_ctor_get(v___x_4612_, 0);
v_isSharedCheck_4653_ = !lean_is_exclusive(v___x_4612_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4648_ = v___x_4612_;
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_a_4646_);
lean_dec(v___x_4612_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v___x_4651_; 
if (v_isShared_4649_ == 0)
{
v___x_4651_ = v___x_4648_;
goto v_reusejp_4650_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v_a_4646_);
v___x_4651_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4650_;
}
v_reusejp_4650_:
{
return v___x_4651_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___boxed(lean_object* v_goal_4654_, lean_object* v_prop_4655_, lean_object* v_proof_4656_, lean_object* v_generation_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_){
_start:
{
lean_object* v_res_4668_; 
v_res_4668_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0(v_goal_4654_, v_prop_4655_, v_proof_4656_, v_generation_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec(v___y_4662_);
lean_dec_ref(v___y_4661_);
lean_dec(v___y_4660_);
lean_dec_ref(v___y_4659_);
lean_dec(v___y_4658_);
return v_res_4668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__1(lean_object* v_goal_4669_, lean_object* v___f_4670_, lean_object* v_kp_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_){
_start:
{
lean_object* v_mvarId_4682_; lean_object* v___x_4683_; 
v_mvarId_4682_ = lean_ctor_get(v_goal_4669_, 1);
lean_inc(v_mvarId_4682_);
lean_dec_ref(v_goal_4669_);
v___x_4683_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_4682_, v___f_4670_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_, v___y_4676_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_);
if (lean_obj_tag(v___x_4683_) == 0)
{
lean_object* v_a_4684_; lean_object* v___x_4685_; 
v_a_4684_ = lean_ctor_get(v___x_4683_, 0);
lean_inc(v_a_4684_);
lean_dec_ref_known(v___x_4683_, 1);
lean_inc(v___y_4680_);
lean_inc_ref(v___y_4679_);
lean_inc(v___y_4678_);
lean_inc_ref(v___y_4677_);
lean_inc(v___y_4676_);
lean_inc_ref(v___y_4675_);
lean_inc(v___y_4674_);
lean_inc_ref(v___y_4673_);
lean_inc(v___y_4672_);
v___x_4685_ = lean_apply_11(v_kp_4671_, v_a_4684_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_, v___y_4676_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_, lean_box(0));
return v___x_4685_;
}
else
{
lean_object* v_a_4686_; lean_object* v___x_4688_; uint8_t v_isShared_4689_; uint8_t v_isSharedCheck_4693_; 
lean_dec_ref(v_kp_4671_);
v_a_4686_ = lean_ctor_get(v___x_4683_, 0);
v_isSharedCheck_4693_ = !lean_is_exclusive(v___x_4683_);
if (v_isSharedCheck_4693_ == 0)
{
v___x_4688_ = v___x_4683_;
v_isShared_4689_ = v_isSharedCheck_4693_;
goto v_resetjp_4687_;
}
else
{
lean_inc(v_a_4686_);
lean_dec(v___x_4683_);
v___x_4688_ = lean_box(0);
v_isShared_4689_ = v_isSharedCheck_4693_;
goto v_resetjp_4687_;
}
v_resetjp_4687_:
{
lean_object* v___x_4691_; 
if (v_isShared_4689_ == 0)
{
v___x_4691_ = v___x_4688_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v_a_4686_);
v___x_4691_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4690_;
}
v_reusejp_4690_:
{
return v___x_4691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__1___boxed(lean_object* v_goal_4694_, lean_object* v___f_4695_, lean_object* v_kp_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_){
_start:
{
lean_object* v_res_4707_; 
v_res_4707_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__1(v_goal_4694_, v___f_4695_, v_kp_4696_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_);
lean_dec(v___y_4705_);
lean_dec_ref(v___y_4704_);
lean_dec(v___y_4703_);
lean_dec_ref(v___y_4702_);
lean_dec(v___y_4701_);
lean_dec_ref(v___y_4700_);
lean_dec(v___y_4699_);
lean_dec_ref(v___y_4698_);
lean_dec(v___y_4697_);
return v_res_4707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt(lean_object* v_proof_4708_, lean_object* v_prop_4709_, lean_object* v_generation_4710_, lean_object* v_goal_4711_, lean_object* v_kna_4712_, lean_object* v_kp_4713_, lean_object* v_a_4714_, lean_object* v_a_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_, lean_object* v_a_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_, lean_object* v_a_4722_){
_start:
{
lean_object* v___f_4724_; lean_object* v___f_4725_; lean_object* v___x_4726_; 
lean_inc(v_generation_4710_);
lean_inc_ref(v_proof_4708_);
lean_inc_ref(v_prop_4709_);
lean_inc_ref_n(v_goal_4711_, 2);
v___f_4724_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__0___boxed), 14, 4);
lean_closure_set(v___f_4724_, 0, v_goal_4711_);
lean_closure_set(v___f_4724_, 1, v_prop_4709_);
lean_closure_set(v___f_4724_, 2, v_proof_4708_);
lean_closure_set(v___f_4724_, 3, v_generation_4710_);
lean_inc_ref(v_kp_4713_);
v___f_4725_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___lam__1___boxed), 13, 3);
lean_closure_set(v___f_4725_, 0, v_goal_4711_);
lean_closure_set(v___f_4725_, 1, v___f_4724_);
lean_closure_set(v___f_4725_, 2, v_kp_4713_);
v___x_4726_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_isEagerCasesCandidate___redArg(v_prop_4709_, v_a_4715_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_object* v_a_4727_; uint8_t v___x_4728_; 
v_a_4727_ = lean_ctor_get(v___x_4726_, 0);
lean_inc(v_a_4727_);
lean_dec_ref_known(v___x_4726_, 1);
v___x_4728_ = lean_unbox(v_a_4727_);
lean_dec(v_a_4727_);
if (v___x_4728_ == 0)
{
lean_object* v_mvarId_4729_; lean_object* v___x_4730_; 
lean_dec_ref(v_kp_4713_);
lean_dec_ref(v_kna_4712_);
lean_dec(v_generation_4710_);
lean_dec_ref(v_prop_4709_);
lean_dec_ref(v_proof_4708_);
v_mvarId_4729_ = lean_ctor_get(v_goal_4711_, 1);
lean_inc(v_mvarId_4729_);
lean_dec_ref(v_goal_4711_);
v___x_4730_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_4729_, v___f_4725_, v_a_4714_, v_a_4715_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_);
return v___x_4730_;
}
else
{
lean_object* v___x_4731_; lean_object* v___x_4732_; 
lean_dec_ref(v___f_4725_);
v___x_4731_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_mkBaseName___closed__3));
v___x_4732_ = l_Lean_Core_mkFreshUserName(v___x_4731_, v_a_4721_, v_a_4722_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_object* v_a_4733_; lean_object* v_toGoalState_4734_; lean_object* v_mvarId_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4766_; 
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
lean_inc(v_a_4733_);
lean_dec_ref_known(v___x_4732_, 1);
v_toGoalState_4734_ = lean_ctor_get(v_goal_4711_, 0);
v_mvarId_4735_ = lean_ctor_get(v_goal_4711_, 1);
v_isSharedCheck_4766_ = !lean_is_exclusive(v_goal_4711_);
if (v_isSharedCheck_4766_ == 0)
{
v___x_4737_ = v_goal_4711_;
v_isShared_4738_ = v_isSharedCheck_4766_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_mvarId_4735_);
lean_inc(v_toGoalState_4734_);
lean_dec(v_goal_4711_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4766_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4739_; 
lean_inc_ref(v_prop_4709_);
lean_inc(v_mvarId_4735_);
v___x_4739_ = l_Lean_MVarId_assert(v_mvarId_4735_, v_a_4733_, v_prop_4709_, v_proof_4708_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_);
if (lean_obj_tag(v___x_4739_) == 0)
{
lean_object* v_a_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; 
v_a_4740_ = lean_ctor_get(v___x_4739_, 0);
lean_inc(v_a_4740_);
lean_dec_ref_known(v___x_4739_, 1);
v___x_4741_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_getAnchor___boxed), 11, 1);
lean_closure_set(v___x_4741_, 0, v_prop_4709_);
v___x_4742_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_introNext_spec__3___redArg(v_mvarId_4735_, v___x_4741_, v_a_4714_, v_a_4715_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_);
if (lean_obj_tag(v___x_4742_) == 0)
{
lean_object* v_a_4743_; lean_object* v___x_4745_; 
v_a_4743_ = lean_ctor_get(v___x_4742_, 0);
lean_inc(v_a_4743_);
lean_dec_ref_known(v___x_4742_, 1);
if (v_isShared_4738_ == 0)
{
lean_ctor_set(v___x_4737_, 1, v_a_4740_);
v___x_4745_ = v___x_4737_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_toGoalState_4734_);
lean_ctor_set(v_reuseFailAlloc_4749_, 1, v_a_4740_);
v___x_4745_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
uint64_t v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; 
v___x_4746_ = lean_unbox_uint64(v_a_4743_);
lean_dec(v_a_4743_);
v___x_4747_ = l_Lean_Meta_Grind_Goal_setIntroBase(v___x_4745_, v___x_4746_);
v___x_4748_ = l_Lean_Meta_Grind_Action_intros(v_generation_4710_, v___x_4747_, v_kna_4712_, v_kp_4713_, v_a_4714_, v_a_4715_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_);
return v___x_4748_;
}
}
else
{
lean_object* v_a_4750_; lean_object* v___x_4752_; uint8_t v_isShared_4753_; uint8_t v_isSharedCheck_4757_; 
lean_dec(v_a_4740_);
lean_del_object(v___x_4737_);
lean_dec_ref(v_toGoalState_4734_);
lean_dec_ref(v_kp_4713_);
lean_dec_ref(v_kna_4712_);
lean_dec(v_generation_4710_);
v_a_4750_ = lean_ctor_get(v___x_4742_, 0);
v_isSharedCheck_4757_ = !lean_is_exclusive(v___x_4742_);
if (v_isSharedCheck_4757_ == 0)
{
v___x_4752_ = v___x_4742_;
v_isShared_4753_ = v_isSharedCheck_4757_;
goto v_resetjp_4751_;
}
else
{
lean_inc(v_a_4750_);
lean_dec(v___x_4742_);
v___x_4752_ = lean_box(0);
v_isShared_4753_ = v_isSharedCheck_4757_;
goto v_resetjp_4751_;
}
v_resetjp_4751_:
{
lean_object* v___x_4755_; 
if (v_isShared_4753_ == 0)
{
v___x_4755_ = v___x_4752_;
goto v_reusejp_4754_;
}
else
{
lean_object* v_reuseFailAlloc_4756_; 
v_reuseFailAlloc_4756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4756_, 0, v_a_4750_);
v___x_4755_ = v_reuseFailAlloc_4756_;
goto v_reusejp_4754_;
}
v_reusejp_4754_:
{
return v___x_4755_;
}
}
}
}
else
{
lean_object* v_a_4758_; lean_object* v___x_4760_; uint8_t v_isShared_4761_; uint8_t v_isSharedCheck_4765_; 
lean_del_object(v___x_4737_);
lean_dec(v_mvarId_4735_);
lean_dec_ref(v_toGoalState_4734_);
lean_dec_ref(v_kp_4713_);
lean_dec_ref(v_kna_4712_);
lean_dec(v_generation_4710_);
lean_dec_ref(v_prop_4709_);
v_a_4758_ = lean_ctor_get(v___x_4739_, 0);
v_isSharedCheck_4765_ = !lean_is_exclusive(v___x_4739_);
if (v_isSharedCheck_4765_ == 0)
{
v___x_4760_ = v___x_4739_;
v_isShared_4761_ = v_isSharedCheck_4765_;
goto v_resetjp_4759_;
}
else
{
lean_inc(v_a_4758_);
lean_dec(v___x_4739_);
v___x_4760_ = lean_box(0);
v_isShared_4761_ = v_isSharedCheck_4765_;
goto v_resetjp_4759_;
}
v_resetjp_4759_:
{
lean_object* v___x_4763_; 
if (v_isShared_4761_ == 0)
{
v___x_4763_ = v___x_4760_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4764_; 
v_reuseFailAlloc_4764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4764_, 0, v_a_4758_);
v___x_4763_ = v_reuseFailAlloc_4764_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
return v___x_4763_;
}
}
}
}
}
else
{
lean_object* v_a_4767_; lean_object* v___x_4769_; uint8_t v_isShared_4770_; uint8_t v_isSharedCheck_4774_; 
lean_dec_ref(v_kp_4713_);
lean_dec_ref(v_kna_4712_);
lean_dec_ref(v_goal_4711_);
lean_dec(v_generation_4710_);
lean_dec_ref(v_prop_4709_);
lean_dec_ref(v_proof_4708_);
v_a_4767_ = lean_ctor_get(v___x_4732_, 0);
v_isSharedCheck_4774_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4774_ == 0)
{
v___x_4769_ = v___x_4732_;
v_isShared_4770_ = v_isSharedCheck_4774_;
goto v_resetjp_4768_;
}
else
{
lean_inc(v_a_4767_);
lean_dec(v___x_4732_);
v___x_4769_ = lean_box(0);
v_isShared_4770_ = v_isSharedCheck_4774_;
goto v_resetjp_4768_;
}
v_resetjp_4768_:
{
lean_object* v___x_4772_; 
if (v_isShared_4770_ == 0)
{
v___x_4772_ = v___x_4769_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v_a_4767_);
v___x_4772_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
return v___x_4772_;
}
}
}
}
}
else
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4782_; 
lean_dec_ref(v___f_4725_);
lean_dec_ref(v_kp_4713_);
lean_dec_ref(v_kna_4712_);
lean_dec_ref(v_goal_4711_);
lean_dec(v_generation_4710_);
lean_dec_ref(v_prop_4709_);
lean_dec_ref(v_proof_4708_);
v_a_4775_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4782_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4782_ == 0)
{
v___x_4777_ = v___x_4726_;
v_isShared_4778_ = v_isSharedCheck_4782_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v___x_4726_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4782_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4780_; 
if (v_isShared_4778_ == 0)
{
v___x_4780_ = v___x_4777_;
goto v_reusejp_4779_;
}
else
{
lean_object* v_reuseFailAlloc_4781_; 
v_reuseFailAlloc_4781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4781_, 0, v_a_4775_);
v___x_4780_ = v_reuseFailAlloc_4781_;
goto v_reusejp_4779_;
}
v_reusejp_4779_:
{
return v___x_4780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt___boxed(lean_object* v_proof_4783_, lean_object* v_prop_4784_, lean_object* v_generation_4785_, lean_object* v_goal_4786_, lean_object* v_kna_4787_, lean_object* v_kp_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_, lean_object* v_a_4793_, lean_object* v_a_4794_, lean_object* v_a_4795_, lean_object* v_a_4796_, lean_object* v_a_4797_, lean_object* v_a_4798_){
_start:
{
lean_object* v_res_4799_; 
v_res_4799_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt(v_proof_4783_, v_prop_4784_, v_generation_4785_, v_goal_4786_, v_kna_4787_, v_kp_4788_, v_a_4789_, v_a_4790_, v_a_4791_, v_a_4792_, v_a_4793_, v_a_4794_, v_a_4795_, v_a_4796_, v_a_4797_);
lean_dec(v_a_4797_);
lean_dec_ref(v_a_4796_);
lean_dec(v_a_4795_);
lean_dec_ref(v_a_4794_);
lean_dec(v_a_4793_);
lean_dec_ref(v_a_4792_);
lean_dec(v_a_4791_);
lean_dec_ref(v_a_4790_);
lean_dec(v_a_4789_);
return v_res_4799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertNext(lean_object* v_goal_4800_, lean_object* v_kna_4801_, lean_object* v_kp_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_, lean_object* v_a_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_){
_start:
{
lean_object* v_toGoalState_4813_; uint8_t v_inconsistent_4814_; 
v_toGoalState_4813_ = lean_ctor_get(v_goal_4800_, 0);
lean_inc_ref(v_toGoalState_4813_);
v_inconsistent_4814_ = lean_ctor_get_uint8(v_toGoalState_4813_, sizeof(void*)*21 + 8);
if (v_inconsistent_4814_ == 0)
{
lean_object* v_mvarId_4815_; lean_object* v_nextDeclIdx_4816_; lean_object* v_enodeMap_4817_; lean_object* v_exprs_4818_; lean_object* v_parents_4819_; lean_object* v_condParents_4820_; lean_object* v_congrTable_4821_; lean_object* v_appMap_4822_; lean_object* v_indicesFound_4823_; lean_object* v_toProcess_4824_; lean_object* v_internalizing_4825_; lean_object* v_nextIdx_4826_; lean_object* v_newRawFacts_4827_; lean_object* v_facts_4828_; lean_object* v_extThms_4829_; lean_object* v_ematch_4830_; lean_object* v_inj_4831_; lean_object* v_split_4832_; lean_object* v_clean_4833_; lean_object* v_sstates_4834_; lean_object* v_goalStack_4835_; uint64_t v_introBase_4836_; lean_object* v_numIntros_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4880_; 
v_mvarId_4815_ = lean_ctor_get(v_goal_4800_, 1);
v_nextDeclIdx_4816_ = lean_ctor_get(v_toGoalState_4813_, 0);
v_enodeMap_4817_ = lean_ctor_get(v_toGoalState_4813_, 1);
v_exprs_4818_ = lean_ctor_get(v_toGoalState_4813_, 2);
v_parents_4819_ = lean_ctor_get(v_toGoalState_4813_, 3);
v_condParents_4820_ = lean_ctor_get(v_toGoalState_4813_, 4);
v_congrTable_4821_ = lean_ctor_get(v_toGoalState_4813_, 5);
v_appMap_4822_ = lean_ctor_get(v_toGoalState_4813_, 6);
v_indicesFound_4823_ = lean_ctor_get(v_toGoalState_4813_, 7);
v_toProcess_4824_ = lean_ctor_get(v_toGoalState_4813_, 8);
v_internalizing_4825_ = lean_ctor_get(v_toGoalState_4813_, 9);
v_nextIdx_4826_ = lean_ctor_get(v_toGoalState_4813_, 10);
v_newRawFacts_4827_ = lean_ctor_get(v_toGoalState_4813_, 11);
v_facts_4828_ = lean_ctor_get(v_toGoalState_4813_, 12);
v_extThms_4829_ = lean_ctor_get(v_toGoalState_4813_, 13);
v_ematch_4830_ = lean_ctor_get(v_toGoalState_4813_, 14);
v_inj_4831_ = lean_ctor_get(v_toGoalState_4813_, 15);
v_split_4832_ = lean_ctor_get(v_toGoalState_4813_, 16);
v_clean_4833_ = lean_ctor_get(v_toGoalState_4813_, 17);
v_sstates_4834_ = lean_ctor_get(v_toGoalState_4813_, 18);
v_goalStack_4835_ = lean_ctor_get(v_toGoalState_4813_, 19);
v_introBase_4836_ = lean_ctor_get_uint64(v_toGoalState_4813_, sizeof(void*)*21);
v_numIntros_4837_ = lean_ctor_get(v_toGoalState_4813_, 20);
v_isSharedCheck_4880_ = !lean_is_exclusive(v_toGoalState_4813_);
if (v_isSharedCheck_4880_ == 0)
{
v___x_4839_ = v_toGoalState_4813_;
v_isShared_4840_ = v_isSharedCheck_4880_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_numIntros_4837_);
lean_inc(v_goalStack_4835_);
lean_inc(v_sstates_4834_);
lean_inc(v_clean_4833_);
lean_inc(v_split_4832_);
lean_inc(v_inj_4831_);
lean_inc(v_ematch_4830_);
lean_inc(v_extThms_4829_);
lean_inc(v_facts_4828_);
lean_inc(v_newRawFacts_4827_);
lean_inc(v_nextIdx_4826_);
lean_inc(v_internalizing_4825_);
lean_inc(v_toProcess_4824_);
lean_inc(v_indicesFound_4823_);
lean_inc(v_appMap_4822_);
lean_inc(v_congrTable_4821_);
lean_inc(v_condParents_4820_);
lean_inc(v_parents_4819_);
lean_inc(v_exprs_4818_);
lean_inc(v_enodeMap_4817_);
lean_inc(v_nextDeclIdx_4816_);
lean_dec(v_toGoalState_4813_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4880_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
lean_object* v___x_4841_; 
v___x_4841_ = l_Std_Queue_dequeue_x3f___redArg(v_newRawFacts_4827_);
if (lean_obj_tag(v___x_4841_) == 1)
{
lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4876_; 
lean_inc(v_mvarId_4815_);
v_isSharedCheck_4876_ = !lean_is_exclusive(v_goal_4800_);
if (v_isSharedCheck_4876_ == 0)
{
lean_object* v_unused_4877_; lean_object* v_unused_4878_; 
v_unused_4877_ = lean_ctor_get(v_goal_4800_, 1);
lean_dec(v_unused_4877_);
v_unused_4878_ = lean_ctor_get(v_goal_4800_, 0);
lean_dec(v_unused_4878_);
v___x_4843_ = v_goal_4800_;
v_isShared_4844_ = v_isSharedCheck_4876_;
goto v_resetjp_4842_;
}
else
{
lean_dec(v_goal_4800_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4876_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v_val_4845_; lean_object* v_fst_4846_; lean_object* v_snd_4847_; lean_object* v_proof_4848_; lean_object* v_prop_4849_; lean_object* v_generation_4850_; lean_object* v_splitSource_4851_; lean_object* v_ematchDiagSource_4852_; lean_object* v_simp_4853_; lean_object* v_simpMethods_4854_; lean_object* v_symSimpMethods_4855_; lean_object* v_symDSimpMethods_4856_; lean_object* v_config_4857_; lean_object* v_identity_4858_; lean_object* v_activeSolvers_4859_; lean_object* v_anchorRefs_x3f_4860_; uint8_t v_anchors_4861_; uint8_t v_cheapCases_4862_; uint8_t v_reportMVarIssue_4863_; lean_object* v_symPrios_4864_; lean_object* v_extensions_4865_; uint8_t v_debug_4866_; uint8_t v_ematchDiag_4867_; lean_object* v___x_4869_; 
v_val_4845_ = lean_ctor_get(v___x_4841_, 0);
lean_inc(v_val_4845_);
lean_dec_ref_known(v___x_4841_, 1);
v_fst_4846_ = lean_ctor_get(v_val_4845_, 0);
lean_inc(v_fst_4846_);
v_snd_4847_ = lean_ctor_get(v_val_4845_, 1);
lean_inc(v_snd_4847_);
lean_dec(v_val_4845_);
v_proof_4848_ = lean_ctor_get(v_fst_4846_, 0);
lean_inc_ref(v_proof_4848_);
v_prop_4849_ = lean_ctor_get(v_fst_4846_, 1);
lean_inc_ref(v_prop_4849_);
v_generation_4850_ = lean_ctor_get(v_fst_4846_, 2);
lean_inc(v_generation_4850_);
v_splitSource_4851_ = lean_ctor_get(v_fst_4846_, 3);
lean_inc(v_splitSource_4851_);
v_ematchDiagSource_4852_ = lean_ctor_get(v_fst_4846_, 4);
lean_inc(v_ematchDiagSource_4852_);
lean_dec(v_fst_4846_);
v_simp_4853_ = lean_ctor_get(v_a_4804_, 0);
v_simpMethods_4854_ = lean_ctor_get(v_a_4804_, 1);
v_symSimpMethods_4855_ = lean_ctor_get(v_a_4804_, 2);
v_symDSimpMethods_4856_ = lean_ctor_get(v_a_4804_, 3);
v_config_4857_ = lean_ctor_get(v_a_4804_, 4);
v_identity_4858_ = lean_ctor_get(v_a_4804_, 5);
v_activeSolvers_4859_ = lean_ctor_get(v_a_4804_, 6);
v_anchorRefs_x3f_4860_ = lean_ctor_get(v_a_4804_, 7);
v_anchors_4861_ = lean_ctor_get_uint8(v_a_4804_, sizeof(void*)*12);
v_cheapCases_4862_ = lean_ctor_get_uint8(v_a_4804_, sizeof(void*)*12 + 1);
v_reportMVarIssue_4863_ = lean_ctor_get_uint8(v_a_4804_, sizeof(void*)*12 + 2);
v_symPrios_4864_ = lean_ctor_get(v_a_4804_, 10);
v_extensions_4865_ = lean_ctor_get(v_a_4804_, 11);
v_debug_4866_ = lean_ctor_get_uint8(v_a_4804_, sizeof(void*)*12 + 3);
v_ematchDiag_4867_ = lean_ctor_get_uint8(v_a_4804_, sizeof(void*)*12 + 4);
if (v_isShared_4840_ == 0)
{
lean_ctor_set(v___x_4839_, 11, v_snd_4847_);
v___x_4869_ = v___x_4839_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4875_; 
v_reuseFailAlloc_4875_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_4875_, 0, v_nextDeclIdx_4816_);
lean_ctor_set(v_reuseFailAlloc_4875_, 1, v_enodeMap_4817_);
lean_ctor_set(v_reuseFailAlloc_4875_, 2, v_exprs_4818_);
lean_ctor_set(v_reuseFailAlloc_4875_, 3, v_parents_4819_);
lean_ctor_set(v_reuseFailAlloc_4875_, 4, v_condParents_4820_);
lean_ctor_set(v_reuseFailAlloc_4875_, 5, v_congrTable_4821_);
lean_ctor_set(v_reuseFailAlloc_4875_, 6, v_appMap_4822_);
lean_ctor_set(v_reuseFailAlloc_4875_, 7, v_indicesFound_4823_);
lean_ctor_set(v_reuseFailAlloc_4875_, 8, v_toProcess_4824_);
lean_ctor_set(v_reuseFailAlloc_4875_, 9, v_internalizing_4825_);
lean_ctor_set(v_reuseFailAlloc_4875_, 10, v_nextIdx_4826_);
lean_ctor_set(v_reuseFailAlloc_4875_, 11, v_snd_4847_);
lean_ctor_set(v_reuseFailAlloc_4875_, 12, v_facts_4828_);
lean_ctor_set(v_reuseFailAlloc_4875_, 13, v_extThms_4829_);
lean_ctor_set(v_reuseFailAlloc_4875_, 14, v_ematch_4830_);
lean_ctor_set(v_reuseFailAlloc_4875_, 15, v_inj_4831_);
lean_ctor_set(v_reuseFailAlloc_4875_, 16, v_split_4832_);
lean_ctor_set(v_reuseFailAlloc_4875_, 17, v_clean_4833_);
lean_ctor_set(v_reuseFailAlloc_4875_, 18, v_sstates_4834_);
lean_ctor_set(v_reuseFailAlloc_4875_, 19, v_goalStack_4835_);
lean_ctor_set(v_reuseFailAlloc_4875_, 20, v_numIntros_4837_);
lean_ctor_set_uint8(v_reuseFailAlloc_4875_, sizeof(void*)*21 + 8, v_inconsistent_4814_);
lean_ctor_set_uint64(v_reuseFailAlloc_4875_, sizeof(void*)*21, v_introBase_4836_);
v___x_4869_ = v_reuseFailAlloc_4875_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
lean_object* v_goal_4871_; 
if (v_isShared_4844_ == 0)
{
lean_ctor_set(v___x_4843_, 0, v___x_4869_);
v_goal_4871_ = v___x_4843_;
goto v_reusejp_4870_;
}
else
{
lean_object* v_reuseFailAlloc_4874_; 
v_reuseFailAlloc_4874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4874_, 0, v___x_4869_);
lean_ctor_set(v_reuseFailAlloc_4874_, 1, v_mvarId_4815_);
v_goal_4871_ = v_reuseFailAlloc_4874_;
goto v_reusejp_4870_;
}
v_reusejp_4870_:
{
lean_object* v___x_4872_; lean_object* v___x_4873_; 
lean_inc_ref(v_extensions_4865_);
lean_inc_ref(v_symPrios_4864_);
lean_inc(v_anchorRefs_x3f_4860_);
lean_inc_ref(v_activeSolvers_4859_);
lean_inc(v_identity_4858_);
lean_inc_ref(v_config_4857_);
lean_inc_ref(v_symDSimpMethods_4856_);
lean_inc_ref(v_symSimpMethods_4855_);
lean_inc_ref(v_simpMethods_4854_);
lean_inc_ref(v_simp_4853_);
v___x_4872_ = lean_alloc_ctor(0, 12, 5);
lean_ctor_set(v___x_4872_, 0, v_simp_4853_);
lean_ctor_set(v___x_4872_, 1, v_simpMethods_4854_);
lean_ctor_set(v___x_4872_, 2, v_symSimpMethods_4855_);
lean_ctor_set(v___x_4872_, 3, v_symDSimpMethods_4856_);
lean_ctor_set(v___x_4872_, 4, v_config_4857_);
lean_ctor_set(v___x_4872_, 5, v_identity_4858_);
lean_ctor_set(v___x_4872_, 6, v_activeSolvers_4859_);
lean_ctor_set(v___x_4872_, 7, v_anchorRefs_x3f_4860_);
lean_ctor_set(v___x_4872_, 8, v_splitSource_4851_);
lean_ctor_set(v___x_4872_, 9, v_ematchDiagSource_4852_);
lean_ctor_set(v___x_4872_, 10, v_symPrios_4864_);
lean_ctor_set(v___x_4872_, 11, v_extensions_4865_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*12, v_anchors_4861_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*12 + 1, v_cheapCases_4862_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*12 + 2, v_reportMVarIssue_4863_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*12 + 3, v_debug_4866_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*12 + 4, v_ematchDiag_4867_);
v___x_4873_ = l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_assertAt(v_proof_4848_, v_prop_4849_, v_generation_4850_, v_goal_4871_, v_kna_4801_, v_kp_4802_, v_a_4803_, v___x_4872_, v_a_4805_, v_a_4806_, v_a_4807_, v_a_4808_, v_a_4809_, v_a_4810_, v_a_4811_);
lean_dec_ref_known(v___x_4872_, 12);
return v___x_4873_;
}
}
}
}
else
{
lean_object* v___x_4879_; 
lean_dec(v___x_4841_);
lean_del_object(v___x_4839_);
lean_dec(v_numIntros_4837_);
lean_dec_ref(v_goalStack_4835_);
lean_dec_ref(v_sstates_4834_);
lean_dec_ref(v_clean_4833_);
lean_dec_ref(v_split_4832_);
lean_dec_ref(v_inj_4831_);
lean_dec_ref(v_ematch_4830_);
lean_dec_ref(v_extThms_4829_);
lean_dec_ref(v_facts_4828_);
lean_dec(v_nextIdx_4826_);
lean_dec_ref(v_internalizing_4825_);
lean_dec_ref(v_toProcess_4824_);
lean_dec_ref(v_indicesFound_4823_);
lean_dec_ref(v_appMap_4822_);
lean_dec_ref(v_congrTable_4821_);
lean_dec_ref(v_condParents_4820_);
lean_dec_ref(v_parents_4819_);
lean_dec_ref(v_exprs_4818_);
lean_dec_ref(v_enodeMap_4817_);
lean_dec(v_nextDeclIdx_4816_);
lean_dec_ref(v_kp_4802_);
lean_inc(v_a_4811_);
lean_inc_ref(v_a_4810_);
lean_inc(v_a_4809_);
lean_inc_ref(v_a_4808_);
lean_inc(v_a_4807_);
lean_inc_ref(v_a_4806_);
lean_inc(v_a_4805_);
lean_inc_ref(v_a_4804_);
lean_inc(v_a_4803_);
v___x_4879_ = lean_apply_11(v_kna_4801_, v_goal_4800_, v_a_4803_, v_a_4804_, v_a_4805_, v_a_4806_, v_a_4807_, v_a_4808_, v_a_4809_, v_a_4810_, v_a_4811_, lean_box(0));
return v___x_4879_;
}
}
}
else
{
lean_object* v___x_4881_; lean_object* v___x_4882_; 
lean_dec_ref(v_toGoalState_4813_);
lean_dec_ref(v_kp_4802_);
lean_dec_ref(v_kna_4801_);
lean_dec_ref(v_goal_4800_);
v___x_4881_ = ((lean_object*)(l_Lean_Meta_Grind_Action_intro___closed__0));
v___x_4882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4882_, 0, v___x_4881_);
return v___x_4882_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertNext___boxed(lean_object* v_goal_4883_, lean_object* v_kna_4884_, lean_object* v_kp_4885_, lean_object* v_a_4886_, lean_object* v_a_4887_, lean_object* v_a_4888_, lean_object* v_a_4889_, lean_object* v_a_4890_, lean_object* v_a_4891_, lean_object* v_a_4892_, lean_object* v_a_4893_, lean_object* v_a_4894_, lean_object* v_a_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l_Lean_Meta_Grind_Action_assertNext(v_goal_4883_, v_kna_4884_, v_kp_4885_, v_a_4886_, v_a_4887_, v_a_4888_, v_a_4889_, v_a_4890_, v_a_4891_, v_a_4892_, v_a_4893_, v_a_4894_);
lean_dec(v_a_4894_);
lean_dec_ref(v_a_4893_);
lean_dec(v_a_4892_);
lean_dec_ref(v_a_4891_);
lean_dec(v_a_4890_);
lean_dec_ref(v_a_4889_);
lean_dec(v_a_4888_);
lean_dec_ref(v_a_4887_);
lean_dec(v_a_4886_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertAll___redArg(lean_object* v_a_4897_, lean_object* v_kp_4898_, lean_object* v_a_4899_, lean_object* v_a_4900_, lean_object* v_a_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_, lean_object* v_a_4904_, lean_object* v_a_4905_, lean_object* v_a_4906_, lean_object* v_a_4907_){
_start:
{
lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v___x_4909_ = lean_unsigned_to_nat(1000000u);
v___x_4910_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_assertNext___boxed), 13, 0);
v___x_4911_ = l_Lean_Meta_Grind_Action_loop___redArg(v___x_4909_, v___x_4910_, v_a_4897_, v_kp_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_, v_a_4907_);
return v___x_4911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertAll___redArg___boxed(lean_object* v_a_4912_, lean_object* v_kp_4913_, lean_object* v_a_4914_, lean_object* v_a_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_, lean_object* v_a_4918_, lean_object* v_a_4919_, lean_object* v_a_4920_, lean_object* v_a_4921_, lean_object* v_a_4922_, lean_object* v_a_4923_){
_start:
{
lean_object* v_res_4924_; 
v_res_4924_ = l_Lean_Meta_Grind_Action_assertAll___redArg(v_a_4912_, v_kp_4913_, v_a_4914_, v_a_4915_, v_a_4916_, v_a_4917_, v_a_4918_, v_a_4919_, v_a_4920_, v_a_4921_, v_a_4922_);
lean_dec(v_a_4922_);
lean_dec_ref(v_a_4921_);
lean_dec(v_a_4920_);
lean_dec_ref(v_a_4919_);
lean_dec(v_a_4918_);
lean_dec_ref(v_a_4917_);
lean_dec(v_a_4916_);
lean_dec_ref(v_a_4915_);
lean_dec(v_a_4914_);
return v_res_4924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertAll(lean_object* v_a_4925_, lean_object* v_kna_4926_, lean_object* v_kp_4927_, lean_object* v_a_4928_, lean_object* v_a_4929_, lean_object* v_a_4930_, lean_object* v_a_4931_, lean_object* v_a_4932_, lean_object* v_a_4933_, lean_object* v_a_4934_, lean_object* v_a_4935_, lean_object* v_a_4936_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = l_Lean_Meta_Grind_Action_assertAll___redArg(v_a_4925_, v_kp_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_assertAll___boxed(lean_object* v_a_4939_, lean_object* v_kna_4940_, lean_object* v_kp_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_){
_start:
{
lean_object* v_res_4952_; 
v_res_4952_ = l_Lean_Meta_Grind_Action_assertAll(v_a_4939_, v_kna_4940_, v_kp_4941_, v_a_4942_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_);
lean_dec(v_a_4950_);
lean_dec_ref(v_a_4949_);
lean_dec(v_a_4948_);
lean_dec_ref(v_a_4947_);
lean_dec(v_a_4946_);
lean_dec_ref(v_a_4945_);
lean_dec(v_a_4944_);
lean_dec_ref(v_a_4943_);
lean_dec(v_a_4942_);
lean_dec_ref(v_kna_4940_);
return v_res_4952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___lam__0(lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_){
_start:
{
lean_object* v___x_4966_; 
v___x_4966_ = l_Lean_Meta_Grind_Action_assertAll___redArg(v___y_4953_, v___y_4955_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_, v___y_4960_, v___y_4961_, v___y_4962_, v___y_4963_, v___y_4964_);
return v___x_4966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___lam__0___boxed(lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_){
_start:
{
lean_object* v_res_4980_; 
v_res_4980_ = l_Lean_Meta_Grind_Solvers_mkAction___lam__0(v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_, v___y_4974_, v___y_4975_, v___y_4976_, v___y_4977_, v___y_4978_);
lean_dec(v___y_4978_);
lean_dec_ref(v___y_4977_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec(v___y_4974_);
lean_dec_ref(v___y_4973_);
lean_dec(v___y_4972_);
lean_dec_ref(v___y_4971_);
lean_dec(v___y_4970_);
lean_dec_ref(v___y_4968_);
return v_res_4980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___lam__1(lean_object* v_a_4981_, lean_object* v___f_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_){
_start:
{
lean_object* v___x_4996_; 
v___x_4996_ = l_Lean_Meta_Grind_Action_andThen(v_a_4981_, v___f_4982_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_, v___y_4992_, v___y_4993_, v___y_4994_);
return v___x_4996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___lam__1___boxed(lean_object* v_a_4997_, lean_object* v___f_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
lean_object* v_res_5012_; 
v_res_5012_ = l_Lean_Meta_Grind_Solvers_mkAction___lam__1(v_a_4997_, v___f_4998_, v___y_4999_, v___y_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction(){
_start:
{
lean_object* v___f_5015_; lean_object* v___x_5016_; 
v___f_5015_ = ((lean_object*)(l_Lean_Meta_Grind_Solvers_mkAction___closed__0));
v___x_5016_ = l_Lean_Meta_Grind_Solvers_mkActionCore();
if (lean_obj_tag(v___x_5016_) == 0)
{
lean_object* v_a_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5025_; 
v_a_5017_ = lean_ctor_get(v___x_5016_, 0);
v_isSharedCheck_5025_ = !lean_is_exclusive(v___x_5016_);
if (v_isSharedCheck_5025_ == 0)
{
v___x_5019_ = v___x_5016_;
v_isShared_5020_ = v_isSharedCheck_5025_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_a_5017_);
lean_dec(v___x_5016_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5025_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
lean_object* v___f_5021_; lean_object* v___x_5023_; 
v___f_5021_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Solvers_mkAction___lam__1___boxed), 15, 2);
lean_closure_set(v___f_5021_, 0, v_a_5017_);
lean_closure_set(v___f_5021_, 1, v___f_5015_);
if (v_isShared_5020_ == 0)
{
lean_ctor_set(v___x_5019_, 0, v___f_5021_);
v___x_5023_ = v___x_5019_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v___f_5021_);
v___x_5023_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
return v___x_5023_;
}
}
}
else
{
return v___x_5016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Solvers_mkAction___boxed(lean_object* v_a_5026_){
_start:
{
lean_object* v_res_5027_; 
v_res_5027_ = l_Lean_Meta_Grind_Solvers_mkAction();
return v_res_5027_;
}
}
lean_object* runtime_initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_CasesMatch(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Injection(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MarkAccessible(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Intro(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_CasesMatch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MarkAccessible(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_instInhabitedIntroResult_default = _init_l_Lean_Meta_Grind_instInhabitedIntroResult_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedIntroResult_default);
l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_instInhabitedIntroResult = _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_instInhabitedIntroResult();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_instInhabitedIntroResult);
l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_hugeNumber = _init_l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_hugeNumber();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Intro_0__Lean_Meta_Grind_Action_hugeNumber);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Intro(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_CasesMatch(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Injection(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MarkAccessible(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Intro(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_CasesMatch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MarkAccessible(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Intro(builtin);
}
#ifdef __cplusplus
}
#endif
