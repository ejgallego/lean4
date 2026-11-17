// Lean compiler output
// Module: Lean.Elab.Tactic.VCGen.Entails
// Imports: public import Lean.Elab.Tactic.VCGen.Context public import Lean.Elab.Tactic.VCGen.RuleCache public import Lean.Elab.Tactic.VCGen.Util public import Lean.Meta.Sym.Util public import Lean.Meta.Tactic.Replace public import Std.WP import Lean.Meta.Sym.InferType import Lean.Meta.Sym.InstantiateMVarsS import Lean.Meta.Sym.AbstractS import Lean.Meta.Sym.MaxFVar import Lean.Meta.Sym.InstantiateS import Init.Sym.Lemmas
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_Lean_Meta_Sym_BackwardRule_applyChecked(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEqFast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_VCGen_latticeOps;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_abstractFVarsRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevBetaS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_introsHygienicN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_lastDecl(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_decLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Failed to unfold the Triple target of "};
static const lean_object* l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_unfoldTriple(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_unfoldTriple___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__1_value;
static const lean_array_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(14, 81, 9, 215, 230, 198, 87, 3)}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "and_imp"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(97, 187, 54, 56, 129, 238, 180, 43)}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "imp_subst"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(125, 24, 151, 61, 213, 29, 36, 180)}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vcgen"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(180, 190, 140, 210, 253, 78, 130, 238)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(212, 104, 229, 54, 179, 197, 12, 87)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(49, 235, 69, 93, 100, 93, 190, 221)}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "subst: "};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13;
static const lean_string_object l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Failed to intro the lifted precondition of "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_VCGen_introPre___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Failed to apply precondition intro rule to "};
static const lean_object* l_Lean_Elab_Tactic_VCGen_introPre___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_introPre___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_introPre___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_introPre___closed__1;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_introPre___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_introPre___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_introPre___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_introPre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_introPre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PreservesSup"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "upperAdjoint"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__2_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(184, 207, 242, 99, 37, 43, 114, 21)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3_value_aux_2),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 52, 128, 160, 100, 147, 237, 166)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meet"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__4_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(194, 193, 63, 6, 53, 61, 199, 176)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "himp"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__6_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(173, 29, 48, 122, 5, 158, 45, 140)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitForallLe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitForallLe_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "instCompleteLatticePi"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(216, 67, 57, 247, 147, 127, 99, 32)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "top_apply"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 219, 32, 190, 96, 78, 240, 61)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrFun"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(63, 110, 174, 29, 249, 91, 125, 152)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__11_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "top"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 33, 148, 124, 218, 91, 248, 169)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(34, 153, 146, 175, 179, 220, 230, 134)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 37, .m_data = "Failed to strip the `⊤ ⊑` wrapper of "};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; uint8_t v___x_9_; lean_object* v_env_10_; lean_object* v___x_11_; lean_object* v_toCold_12_; lean_object* v_mctx_13_; lean_object* v_lctx_14_; lean_object* v_options_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = 0;
v_env_10_ = l_Lean_Environment_setRecordingDeps(v_env_8_, v___x_9_);
v___x_11_ = lean_st_ref_get(v___y_3_);
v_toCold_12_ = lean_ctor_get(v___y_4_, 0);
v_mctx_13_ = lean_ctor_get(v___x_11_, 0);
lean_inc_ref(v_mctx_13_);
lean_dec(v___x_11_);
v_lctx_14_ = lean_ctor_get(v___y_2_, 2);
v_options_15_ = lean_ctor_get(v_toCold_12_, 2);
lean_inc_ref(v_options_15_);
lean_inc_ref(v_lctx_14_);
v___x_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_16_, 0, v_env_10_);
lean_ctor_set(v___x_16_, 1, v_mctx_13_);
lean_ctor_set(v___x_16_, 2, v_lctx_14_);
lean_ctor_set(v___x_16_, 3, v_options_15_);
v___x_17_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v_msgData_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0_spec__0___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0_spec__0(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(lean_object* v_msg_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_ref_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
v_ref_32_ = lean_ctor_get(v___y_29_, 2);
v___x_33_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0_spec__0(v_msg_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
v_a_34_ = lean_ctor_get(v___x_33_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_33_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_33_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc(v_ref_32_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_ref_32_);
lean_ctor_set(v___x_38_, 1, v_a_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 1);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg___boxed(lean_object* v_msg_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v_msg_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__1(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__0));
v___x_52_ = l_Lean_stringToMessageData(v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_unfoldTriple(lean_object* v_goal_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
lean_object* v___y_67_; lean_object* v___y_68_; lean_object* v___y_69_; lean_object* v___y_70_; lean_object* v___y_71_; lean_object* v___y_72_; lean_object* v___y_73_; lean_object* v___y_74_; lean_object* v___y_75_; lean_object* v___y_76_; lean_object* v___y_77_; lean_object* v_backwardRules_82_; lean_object* v_tripleIntro_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_backwardRules_82_ = lean_ctor_get(v_a_54_, 0);
v_tripleIntro_83_ = lean_ctor_get(v_backwardRules_82_, 0);
v___x_84_ = lean_box(0);
lean_inc(v_goal_53_);
lean_inc_ref(v_tripleIntro_83_);
v___x_85_ = l_Lean_Elab_Tactic_VCGen_Lean_Meta_Sym_BackwardRule_applyChecked(v_tripleIntro_83_, v_goal_53_, v___x_84_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_96_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_96_ == 0)
{
v___x_88_ = v___x_85_;
v_isShared_89_ = v_isSharedCheck_96_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_a_86_);
lean_dec(v___x_85_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_96_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
if (lean_obj_tag(v_a_86_) == 1)
{
lean_object* v_mvarIds_90_; 
v_mvarIds_90_ = lean_ctor_get(v_a_86_, 0);
lean_inc(v_mvarIds_90_);
lean_dec_ref_known(v_a_86_, 1);
if (lean_obj_tag(v_mvarIds_90_) == 1)
{
lean_object* v_tail_91_; 
v_tail_91_ = lean_ctor_get(v_mvarIds_90_, 1);
if (lean_obj_tag(v_tail_91_) == 0)
{
lean_object* v_head_92_; lean_object* v___x_94_; 
lean_dec(v_goal_53_);
v_head_92_ = lean_ctor_get(v_mvarIds_90_, 0);
lean_inc(v_head_92_);
lean_dec_ref_known(v_mvarIds_90_, 2);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v_head_92_);
v___x_94_ = v___x_88_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_head_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
else
{
lean_dec_ref_known(v_mvarIds_90_, 2);
lean_del_object(v___x_88_);
v___y_67_ = v_a_54_;
v___y_68_ = v_a_55_;
v___y_69_ = v_a_56_;
v___y_70_ = v_a_57_;
v___y_71_ = v_a_58_;
v___y_72_ = v_a_59_;
v___y_73_ = v_a_60_;
v___y_74_ = v_a_61_;
v___y_75_ = v_a_62_;
v___y_76_ = v_a_63_;
v___y_77_ = v_a_64_;
goto v___jp_66_;
}
}
else
{
lean_dec(v_mvarIds_90_);
lean_del_object(v___x_88_);
v___y_67_ = v_a_54_;
v___y_68_ = v_a_55_;
v___y_69_ = v_a_56_;
v___y_70_ = v_a_57_;
v___y_71_ = v_a_58_;
v___y_72_ = v_a_59_;
v___y_73_ = v_a_60_;
v___y_74_ = v_a_61_;
v___y_75_ = v_a_62_;
v___y_76_ = v_a_63_;
v___y_77_ = v_a_64_;
goto v___jp_66_;
}
}
else
{
lean_del_object(v___x_88_);
lean_dec(v_a_86_);
v___y_67_ = v_a_54_;
v___y_68_ = v_a_55_;
v___y_69_ = v_a_56_;
v___y_70_ = v_a_57_;
v___y_71_ = v_a_58_;
v___y_72_ = v_a_59_;
v___y_73_ = v_a_60_;
v___y_74_ = v_a_61_;
v___y_75_ = v_a_62_;
v___y_76_ = v_a_63_;
v___y_77_ = v_a_64_;
goto v___jp_66_;
}
}
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
lean_dec(v_goal_53_);
v_a_97_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_85_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_85_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
v___jp_66_:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__1, &l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__1_once, _init_l_Lean_Elab_Tactic_VCGen_unfoldTriple___closed__1);
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v_goal_53_);
v___x_80_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v___x_80_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_unfoldTriple___boxed(lean_object* v_goal_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_Elab_Tactic_VCGen_unfoldTriple(v_goal_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_, v_a_115_, v_a_116_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
lean_dec(v_a_114_);
lean_dec_ref(v_a_113_);
lean_dec(v_a_112_);
lean_dec_ref(v_a_111_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0(lean_object* v_00_u03b1_119_, lean_object* v_msg_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v_msg_120_, v___y_128_, v___y_129_, v___y_130_, v___y_131_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___boxed(lean_object* v_00_u03b1_134_, lean_object* v_msg_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0(v_00_u03b1_134_, v_msg_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(lean_object* v_fvarId_149_, lean_object* v_as_150_, size_t v_i_151_, size_t v_stop_152_, lean_object* v_b_153_){
_start:
{
lean_object* v___y_155_; uint8_t v___x_159_; 
v___x_159_ = lean_usize_dec_eq(v_i_151_, v_stop_152_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; 
v___x_160_ = lean_array_uget_borrowed(v_as_150_, v_i_151_);
if (lean_obj_tag(v___x_160_) == 0)
{
v___y_155_ = v_b_153_;
goto v___jp_154_;
}
else
{
lean_object* v_val_161_; lean_object* v_fst_162_; lean_object* v_snd_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_188_; 
v_val_161_ = lean_ctor_get(v___x_160_, 0);
v_fst_162_ = lean_ctor_get(v_b_153_, 0);
v_snd_163_ = lean_ctor_get(v_b_153_, 1);
v_isSharedCheck_188_ = !lean_is_exclusive(v_b_153_);
if (v_isSharedCheck_188_ == 0)
{
v___x_165_ = v_b_153_;
v_isShared_166_ = v_isSharedCheck_188_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_snd_163_);
lean_inc(v_fst_162_);
lean_dec(v_b_153_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_188_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___y_168_; lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = l_Lean_LocalDecl_type(v_val_161_);
v___x_185_ = l_Lean_Expr_containsFVar(v___x_184_, v_fvarId_149_);
lean_dec_ref(v___x_184_);
if (v___x_185_ == 0)
{
v___y_168_ = v_fst_162_;
goto v___jp_167_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; 
lean_inc(v_val_161_);
v___x_186_ = l_Lean_LocalDecl_toExpr(v_val_161_);
v___x_187_ = lean_array_push(v_fst_162_, v___x_186_);
v___y_168_ = v___x_187_;
goto v___jp_167_;
}
v___jp_167_:
{
uint8_t v___x_169_; 
v___x_169_ = lean_unbox(v_snd_163_);
if (v___x_169_ == 0)
{
uint8_t v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_unbox(v_snd_163_);
v___x_171_ = l_Lean_LocalDecl_value_x3f(v_val_161_, v___x_170_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v___x_173_; 
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___y_168_);
v___x_173_ = v___x_165_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v___y_168_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_snd_163_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
v___y_155_ = v___x_173_;
goto v___jp_154_;
}
}
else
{
lean_object* v_val_175_; uint8_t v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
lean_dec(v_snd_163_);
v_val_175_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_val_175_);
lean_dec_ref_known(v___x_171_, 1);
v___x_176_ = l_Lean_Expr_containsFVar(v_val_175_, v_fvarId_149_);
lean_dec(v_val_175_);
v___x_177_ = lean_box(v___x_176_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 1, v___x_177_);
lean_ctor_set(v___x_165_, 0, v___y_168_);
v___x_179_ = v___x_165_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___y_168_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
v___y_155_ = v___x_179_;
goto v___jp_154_;
}
}
}
else
{
lean_object* v___x_182_; 
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___y_168_);
v___x_182_ = v___x_165_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___y_168_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_snd_163_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
v___y_155_ = v___x_182_;
goto v___jp_154_;
}
}
}
}
}
}
else
{
return v_b_153_;
}
v___jp_154_:
{
size_t v___x_156_; size_t v___x_157_; 
v___x_156_ = ((size_t)1ULL);
v___x_157_ = lean_usize_add(v_i_151_, v___x_156_);
v_i_151_ = v___x_157_;
v_b_153_ = v___y_155_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_fvarId_189_, lean_object* v_as_190_, lean_object* v_i_191_, lean_object* v_stop_192_, lean_object* v_b_193_){
_start:
{
size_t v_i_boxed_194_; size_t v_stop_boxed_195_; lean_object* v_res_196_; 
v_i_boxed_194_ = lean_unbox_usize(v_i_191_);
lean_dec(v_i_191_);
v_stop_boxed_195_ = lean_unbox_usize(v_stop_192_);
lean_dec(v_stop_192_);
v_res_196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_189_, v_as_190_, v_i_boxed_194_, v_stop_boxed_195_, v_b_193_);
lean_dec_ref(v_as_190_);
lean_dec(v_fvarId_189_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(lean_object* v_fvarId_197_, lean_object* v_x_198_, lean_object* v_x_199_){
_start:
{
if (lean_obj_tag(v_x_198_) == 0)
{
lean_object* v_cs_200_; lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v_cs_200_ = lean_ctor_get(v_x_198_, 0);
v___x_201_ = lean_unsigned_to_nat(0u);
v___x_202_ = lean_array_get_size(v_cs_200_);
v___x_203_ = lean_nat_dec_lt(v___x_201_, v___x_202_);
if (v___x_203_ == 0)
{
return v_x_199_;
}
else
{
size_t v___x_204_; size_t v___x_205_; lean_object* v___x_206_; 
v___x_204_ = ((size_t)0ULL);
v___x_205_ = lean_usize_of_nat(v___x_202_);
v___x_206_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(v_fvarId_197_, v_cs_200_, v___x_204_, v___x_205_, v_x_199_);
return v___x_206_;
}
}
else
{
lean_object* v_vs_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v_vs_207_ = lean_ctor_get(v_x_198_, 0);
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = lean_array_get_size(v_vs_207_);
v___x_210_ = lean_nat_dec_lt(v___x_208_, v___x_209_);
if (v___x_210_ == 0)
{
return v_x_199_;
}
else
{
size_t v___x_211_; size_t v___x_212_; lean_object* v___x_213_; 
v___x_211_ = ((size_t)0ULL);
v___x_212_ = lean_usize_of_nat(v___x_209_);
v___x_213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_197_, v_vs_207_, v___x_211_, v___x_212_, v_x_199_);
return v___x_213_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(lean_object* v_fvarId_214_, lean_object* v_as_215_, size_t v_i_216_, size_t v_stop_217_, lean_object* v_b_218_){
_start:
{
uint8_t v___x_219_; 
v___x_219_ = lean_usize_dec_eq(v_i_216_, v_stop_217_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; size_t v___x_222_; size_t v___x_223_; 
v___x_220_ = lean_array_uget_borrowed(v_as_215_, v_i_216_);
v___x_221_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(v_fvarId_214_, v___x_220_, v_b_218_);
v___x_222_ = ((size_t)1ULL);
v___x_223_ = lean_usize_add(v_i_216_, v___x_222_);
v_i_216_ = v___x_223_;
v_b_218_ = v___x_221_;
goto _start;
}
else
{
return v_b_218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_fvarId_225_, lean_object* v_as_226_, lean_object* v_i_227_, lean_object* v_stop_228_, lean_object* v_b_229_){
_start:
{
size_t v_i_boxed_230_; size_t v_stop_boxed_231_; lean_object* v_res_232_; 
v_i_boxed_230_ = lean_unbox_usize(v_i_227_);
lean_dec(v_i_227_);
v_stop_boxed_231_ = lean_unbox_usize(v_stop_228_);
lean_dec(v_stop_228_);
v_res_232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(v_fvarId_225_, v_as_226_, v_i_boxed_230_, v_stop_boxed_231_, v_b_229_);
lean_dec_ref(v_as_226_);
lean_dec(v_fvarId_225_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3___boxed(lean_object* v_fvarId_233_, lean_object* v_x_234_, lean_object* v_x_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(v_fvarId_233_, v_x_234_, v_x_235_);
lean_dec_ref(v_x_234_);
lean_dec(v_fvarId_233_);
return v_res_236_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(lean_object* v_fvarId_238_, lean_object* v_x_239_, size_t v_x_240_, size_t v_x_241_, lean_object* v_x_242_){
_start:
{
if (lean_obj_tag(v_x_239_) == 0)
{
lean_object* v_cs_243_; lean_object* v___x_244_; size_t v___x_245_; lean_object* v_j_246_; lean_object* v___x_247_; size_t v___x_248_; size_t v___x_249_; size_t v___x_250_; size_t v___x_251_; size_t v___x_252_; size_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; 
v_cs_243_ = lean_ctor_get(v_x_239_, 0);
v___x_244_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0);
v___x_245_ = lean_usize_shift_right(v_x_240_, v_x_241_);
v_j_246_ = lean_usize_to_nat(v___x_245_);
v___x_247_ = lean_array_get_borrowed(v___x_244_, v_cs_243_, v_j_246_);
v___x_248_ = ((size_t)1ULL);
v___x_249_ = lean_usize_shift_left(v___x_248_, v_x_241_);
v___x_250_ = lean_usize_sub(v___x_249_, v___x_248_);
v___x_251_ = lean_usize_land(v_x_240_, v___x_250_);
v___x_252_ = ((size_t)5ULL);
v___x_253_ = lean_usize_sub(v_x_241_, v___x_252_);
v___x_254_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(v_fvarId_238_, v___x_247_, v___x_251_, v___x_253_, v_x_242_);
v___x_255_ = lean_unsigned_to_nat(1u);
v___x_256_ = lean_nat_add(v_j_246_, v___x_255_);
lean_dec(v_j_246_);
v___x_257_ = lean_array_get_size(v_cs_243_);
v___x_258_ = lean_nat_dec_lt(v___x_256_, v___x_257_);
if (v___x_258_ == 0)
{
lean_dec(v___x_256_);
return v___x_254_;
}
else
{
size_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v___x_259_ = lean_usize_of_nat(v___x_256_);
lean_dec(v___x_256_);
v___x_260_ = lean_usize_of_nat(v___x_257_);
v___x_261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(v_fvarId_238_, v_cs_243_, v___x_259_, v___x_260_, v___x_254_);
return v___x_261_;
}
}
else
{
lean_object* v_vs_262_; lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v_vs_262_ = lean_ctor_get(v_x_239_, 0);
v___x_263_ = lean_usize_to_nat(v_x_240_);
v___x_264_ = lean_array_get_size(v_vs_262_);
v___x_265_ = lean_nat_dec_lt(v___x_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_dec(v___x_263_);
return v_x_242_;
}
else
{
size_t v___x_266_; size_t v___x_267_; lean_object* v___x_268_; 
v___x_266_ = lean_usize_of_nat(v___x_263_);
lean_dec(v___x_263_);
v___x_267_ = lean_usize_of_nat(v___x_264_);
v___x_268_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_238_, v_vs_262_, v___x_266_, v___x_267_, v_x_242_);
return v___x_268_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_fvarId_269_, lean_object* v_x_270_, lean_object* v_x_271_, lean_object* v_x_272_, lean_object* v_x_273_){
_start:
{
size_t v_x_23986__boxed_274_; size_t v_x_23987__boxed_275_; lean_object* v_res_276_; 
v_x_23986__boxed_274_ = lean_unbox_usize(v_x_271_);
lean_dec(v_x_271_);
v_x_23987__boxed_275_ = lean_unbox_usize(v_x_272_);
lean_dec(v_x_272_);
v_res_276_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(v_fvarId_269_, v_x_270_, v_x_23986__boxed_274_, v_x_23987__boxed_275_, v_x_273_);
lean_dec_ref(v_x_270_);
lean_dec(v_fvarId_269_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0(lean_object* v_fvarId_277_, lean_object* v_t_278_, lean_object* v_init_279_, lean_object* v_start_280_){
_start:
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_unsigned_to_nat(0u);
v___x_282_ = lean_nat_dec_eq(v_start_280_, v___x_281_);
if (v___x_282_ == 0)
{
lean_object* v_root_283_; lean_object* v_tail_284_; size_t v_shift_285_; lean_object* v_tailOff_286_; uint8_t v___x_287_; 
v_root_283_ = lean_ctor_get(v_t_278_, 0);
v_tail_284_ = lean_ctor_get(v_t_278_, 1);
v_shift_285_ = lean_ctor_get_usize(v_t_278_, 4);
v_tailOff_286_ = lean_ctor_get(v_t_278_, 3);
v___x_287_ = lean_nat_dec_le(v_tailOff_286_, v_start_280_);
if (v___x_287_ == 0)
{
size_t v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_288_ = lean_usize_of_nat(v_start_280_);
v___x_289_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(v_fvarId_277_, v_root_283_, v___x_288_, v_shift_285_, v_init_279_);
v___x_290_ = lean_array_get_size(v_tail_284_);
v___x_291_ = lean_nat_dec_lt(v___x_281_, v___x_290_);
if (v___x_291_ == 0)
{
return v___x_289_;
}
else
{
size_t v___x_292_; size_t v___x_293_; lean_object* v___x_294_; 
v___x_292_ = ((size_t)0ULL);
v___x_293_ = lean_usize_of_nat(v___x_290_);
v___x_294_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_277_, v_tail_284_, v___x_292_, v___x_293_, v___x_289_);
return v___x_294_;
}
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = lean_nat_sub(v_start_280_, v_tailOff_286_);
v___x_296_ = lean_array_get_size(v_tail_284_);
v___x_297_ = lean_nat_dec_lt(v___x_295_, v___x_296_);
if (v___x_297_ == 0)
{
lean_dec(v___x_295_);
return v_init_279_;
}
else
{
size_t v___x_298_; size_t v___x_299_; lean_object* v___x_300_; 
v___x_298_ = lean_usize_of_nat(v___x_295_);
lean_dec(v___x_295_);
v___x_299_ = lean_usize_of_nat(v___x_296_);
v___x_300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_277_, v_tail_284_, v___x_298_, v___x_299_, v_init_279_);
return v___x_300_;
}
}
}
else
{
lean_object* v_root_301_; lean_object* v_tail_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v_root_301_ = lean_ctor_get(v_t_278_, 0);
v_tail_302_ = lean_ctor_get(v_t_278_, 1);
v___x_303_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(v_fvarId_277_, v_root_301_, v_init_279_);
v___x_304_ = lean_array_get_size(v_tail_302_);
v___x_305_ = lean_nat_dec_lt(v___x_281_, v___x_304_);
if (v___x_305_ == 0)
{
return v___x_303_;
}
else
{
size_t v___x_306_; size_t v___x_307_; lean_object* v___x_308_; 
v___x_306_ = ((size_t)0ULL);
v___x_307_ = lean_usize_of_nat(v___x_304_);
v___x_308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_277_, v_tail_302_, v___x_306_, v___x_307_, v___x_303_);
return v___x_308_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0___boxed(lean_object* v_fvarId_309_, lean_object* v_t_310_, lean_object* v_init_311_, lean_object* v_start_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0(v_fvarId_309_, v_t_310_, v_init_311_, v_start_312_);
lean_dec(v_start_312_);
lean_dec_ref(v_t_310_);
lean_dec(v_fvarId_309_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0(lean_object* v_fvarId_314_, lean_object* v_lctx_315_, lean_object* v_init_316_, lean_object* v_start_317_){
_start:
{
lean_object* v_decls_318_; lean_object* v___x_319_; 
v_decls_318_ = lean_ctor_get(v_lctx_315_, 1);
v___x_319_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0(v_fvarId_314_, v_decls_318_, v_init_316_, v_start_317_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0___boxed(lean_object* v_fvarId_320_, lean_object* v_lctx_321_, lean_object* v_init_322_, lean_object* v_start_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0(v_fvarId_320_, v_lctx_321_, v_init_322_, v_start_323_);
lean_dec(v_start_323_);
lean_dec_ref(v_lctx_321_);
lean_dec(v_fvarId_320_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(lean_object* v_eqn_330_, lean_object* v_G_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lean_Meta_Sym_instantiateMVarsS(v_eqn_330_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_462_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_462_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_462_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_462_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = l_Lean_Expr_cleanupAnnotations(v_a_346_);
lean_dec(v_a_346_);
v___x_351_ = l_Lean_Expr_isApp(v___x_350_);
if (v___x_351_ == 0)
{
lean_dec_ref(v___x_350_);
lean_del_object(v___x_348_);
lean_dec_ref(v_G_331_);
goto v___jp_342_;
}
else
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = l_Lean_Expr_appFnCleanup___redArg(v___x_350_);
v___x_353_ = l_Lean_Expr_isApp(v___x_352_);
if (v___x_353_ == 0)
{
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_350_);
lean_del_object(v___x_348_);
lean_dec_ref(v_G_331_);
goto v___jp_342_;
}
else
{
lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_354_ = l_Lean_Expr_appFnCleanup___redArg(v___x_352_);
v___x_355_ = l_Lean_Expr_isApp(v___x_354_);
if (v___x_355_ == 0)
{
lean_dec_ref(v___x_354_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_350_);
lean_del_object(v___x_348_);
lean_dec_ref(v_G_331_);
goto v___jp_342_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_356_ = l_Lean_Expr_appFnCleanup___redArg(v___x_354_);
lean_dec_ref(v___x_354_);
v___x_357_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__1));
v___x_358_ = l_Lean_Expr_isConstOf(v___x_356_, v___x_357_);
lean_dec_ref(v___x_356_);
if (v___x_358_ == 0)
{
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_350_);
lean_del_object(v___x_348_);
lean_dec_ref(v_G_331_);
goto v___jp_342_;
}
else
{
lean_object* v_arg_359_; 
v_arg_359_ = lean_ctor_get(v___x_352_, 1);
lean_inc_ref(v_arg_359_);
lean_dec_ref(v___x_352_);
if (lean_obj_tag(v_arg_359_) == 1)
{
lean_object* v_fvarId_360_; lean_object* v_lctx_361_; lean_object* v___x_362_; 
v_fvarId_360_ = lean_ctor_get(v_arg_359_, 0);
v_lctx_361_ = lean_ctor_get(v_a_334_, 2);
lean_inc(v_fvarId_360_);
lean_inc_ref(v_lctx_361_);
v___x_362_ = lean_local_ctx_find(v_lctx_361_, v_fvarId_360_);
if (lean_obj_tag(v___x_362_) == 1)
{
lean_object* v_val_363_; uint8_t v___x_364_; uint8_t v___x_365_; 
lean_del_object(v___x_348_);
v_val_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_val_363_);
lean_dec_ref_known(v___x_362_, 1);
v___x_364_ = 0;
v___x_365_ = l_Lean_LocalDecl_isLet(v_val_363_, v___x_364_);
if (v___x_365_ == 0)
{
lean_object* v_arg_366_; uint8_t v___x_367_; 
v_arg_366_ = lean_ctor_get(v___x_350_, 1);
lean_inc_ref(v_arg_366_);
lean_dec_ref(v___x_350_);
v___x_367_ = l_Lean_Expr_containsFVar(v_arg_366_, v_fvarId_360_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
lean_inc_ref(v_G_331_);
v___x_368_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_G_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_445_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_445_ == 0)
{
v___x_371_ = v___x_368_;
v_isShared_372_ = v_isSharedCheck_445_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_445_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
if (lean_obj_tag(v_a_369_) == 1)
{
lean_object* v_val_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_440_; 
lean_del_object(v___x_371_);
v_val_373_ = lean_ctor_get(v_a_369_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v_a_369_);
if (v_isSharedCheck_440_ == 0)
{
v___x_375_ = v_a_369_;
v_isShared_376_ = v_isSharedCheck_440_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_val_373_);
lean_dec(v_a_369_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_440_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; 
v___x_377_ = l_Lean_FVarId_getDecl___redArg(v_val_373_, v_a_334_, v_a_336_, v_a_337_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v_a_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v_a_378_ = lean_ctor_get(v___x_377_, 0);
lean_inc(v_a_378_);
lean_dec_ref_known(v___x_377_, 1);
v___x_379_ = l_Lean_LocalDecl_index(v_a_378_);
lean_dec(v_a_378_);
v___x_380_ = l_Lean_LocalDecl_index(v_val_363_);
lean_dec(v_val_363_);
v___x_381_ = lean_nat_dec_lt(v___x_379_, v___x_380_);
lean_dec(v___x_379_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v_fst_389_; lean_object* v_snd_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_431_; 
v___x_382_ = lean_unsigned_to_nat(0u);
v___x_383_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__2));
v___x_384_ = lean_box(v___x_381_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_383_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = lean_unsigned_to_nat(1u);
v___x_387_ = lean_nat_add(v___x_380_, v___x_386_);
lean_dec(v___x_380_);
v___x_388_ = l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0(v_fvarId_360_, v_lctx_361_, v___x_385_, v___x_387_);
lean_dec(v___x_387_);
v_fst_389_ = lean_ctor_get(v___x_388_, 0);
v_snd_390_ = lean_ctor_get(v___x_388_, 1);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_431_ == 0)
{
v___x_392_ = v___x_388_;
v_isShared_393_ = v_isSharedCheck_431_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_snd_390_);
lean_inc(v_fst_389_);
lean_dec(v___x_388_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_431_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_394_ = lean_mk_empty_array_with_capacity(v___x_386_);
lean_inc_ref_n(v_arg_359_, 2);
v___x_395_ = lean_array_push(v___x_394_, v_arg_359_);
v___x_396_ = l_Array_append___redArg(v___x_395_, v_fst_389_);
v___x_397_ = lean_array_push(v___x_396_, v_arg_359_);
v___x_398_ = l_Lean_Meta_Sym_abstractFVarsRange(v_G_331_, v___x_382_, v___x_397_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_422_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_422_ == 0)
{
v___x_401_ = v___x_398_;
v_isShared_402_ = v_isSharedCheck_422_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_398_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_422_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
uint8_t v___y_404_; lean_object* v___x_417_; uint8_t v___x_418_; 
v___x_417_ = l_Lean_Expr_looseBVarRange(v_a_399_);
v___x_418_ = lean_nat_dec_eq(v___x_417_, v___x_386_);
lean_dec(v___x_417_);
if (v___x_418_ == 0)
{
lean_del_object(v___x_401_);
lean_dec(v_a_399_);
lean_del_object(v___x_392_);
lean_dec(v_snd_390_);
lean_dec(v_fst_389_);
lean_del_object(v___x_375_);
lean_dec_ref(v_arg_366_);
lean_dec_ref_known(v_arg_359_, 1);
goto v___jp_339_;
}
else
{
lean_object* v___x_419_; uint8_t v___x_420_; 
v___x_419_ = lean_array_get_size(v_fst_389_);
lean_dec(v_fst_389_);
v___x_420_ = lean_nat_dec_eq(v___x_419_, v___x_382_);
if (v___x_420_ == 0)
{
lean_dec(v_snd_390_);
v___y_404_ = v___x_420_;
goto v___jp_403_;
}
else
{
uint8_t v___x_421_; 
v___x_421_ = lean_unbox(v_snd_390_);
lean_dec(v_snd_390_);
if (v___x_421_ == 0)
{
v___y_404_ = v___x_420_;
goto v___jp_403_;
}
else
{
v___y_404_ = v___x_381_;
goto v___jp_403_;
}
}
}
v___jp_403_:
{
lean_object* v___x_405_; lean_object* v___x_407_; 
v___x_405_ = lean_box(v___y_404_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v___x_405_);
lean_ctor_set(v___x_392_, 0, v_a_399_);
v___x_407_ = v___x_392_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_399_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v___x_405_);
v___x_407_ = v_reuseFailAlloc_416_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_408_, 0, v_arg_366_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v_arg_359_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_409_);
v___x_411_ = v___x_375_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_415_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_413_; 
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v___x_411_);
v___x_413_ = v___x_401_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_411_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
}
}
else
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
lean_del_object(v___x_392_);
lean_dec(v_snd_390_);
lean_dec(v_fst_389_);
lean_del_object(v___x_375_);
lean_dec_ref(v_arg_366_);
lean_dec_ref_known(v_arg_359_, 1);
v_a_423_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_398_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_398_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
}
else
{
lean_dec(v___x_380_);
lean_del_object(v___x_375_);
lean_dec_ref(v_arg_366_);
lean_dec_ref_known(v_arg_359_, 1);
lean_dec_ref(v_G_331_);
goto v___jp_339_;
}
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_del_object(v___x_375_);
lean_dec_ref(v_arg_366_);
lean_dec(v_val_363_);
lean_dec_ref_known(v_arg_359_, 1);
lean_dec_ref(v_G_331_);
v_a_432_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_377_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_377_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
else
{
lean_object* v___x_441_; lean_object* v___x_443_; 
lean_dec(v_a_369_);
lean_dec_ref(v_arg_366_);
lean_dec(v_val_363_);
lean_dec_ref_known(v_arg_359_, 1);
lean_dec_ref(v_G_331_);
v___x_441_ = lean_box(0);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_441_);
v___x_443_ = v___x_371_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec_ref(v_arg_366_);
lean_dec(v_val_363_);
lean_dec_ref_known(v_arg_359_, 1);
lean_dec_ref(v_G_331_);
v_a_446_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_368_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_368_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
else
{
lean_dec_ref(v_arg_366_);
lean_dec(v_val_363_);
lean_dec_ref_known(v_arg_359_, 1);
lean_dec_ref(v_G_331_);
goto v___jp_339_;
}
}
else
{
lean_dec(v_val_363_);
lean_dec_ref_known(v_arg_359_, 1);
lean_dec_ref(v___x_350_);
lean_dec_ref(v_G_331_);
goto v___jp_339_;
}
}
else
{
lean_object* v___x_454_; lean_object* v___x_456_; 
lean_dec(v___x_362_);
lean_dec_ref_known(v_arg_359_, 1);
lean_dec_ref(v___x_350_);
lean_dec_ref(v_G_331_);
v___x_454_ = lean_box(0);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_454_);
v___x_456_ = v___x_348_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
else
{
lean_object* v___x_458_; lean_object* v___x_460_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v___x_350_);
lean_dec_ref(v_G_331_);
v___x_458_ = lean_box(0);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_458_);
v___x_460_ = v___x_348_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
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
}
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
lean_dec_ref(v_G_331_);
v_a_463_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_345_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_345_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
v___jp_339_:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = lean_box(0);
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
return v___x_341_;
}
v___jp_342_:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_box(0);
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___boxed(lean_object* v_eqn_471_, lean_object* v_G_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(v_eqn_471_, v_G_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_);
lean_dec(v_a_478_);
lean_dec_ref(v_a_477_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
lean_dec(v_a_474_);
lean_dec_ref(v_a_473_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f(lean_object* v_eqn_481_, lean_object* v_G_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(v_eqn_481_, v_G_482_, v_a_488_, v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___boxed(lean_object* v_eqn_496_, lean_object* v_G_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f(v_eqn_496_, v_G_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
lean_dec(v_a_508_);
lean_dec_ref(v_a_507_);
lean_dec(v_a_506_);
lean_dec_ref(v_a_505_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
lean_dec(v_a_502_);
lean_dec_ref(v_a_501_);
lean_dec(v_a_500_);
lean_dec(v_a_499_);
lean_dec_ref(v_a_498_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(lean_object* v_00_u03c6_514_, lean_object* v_G_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___x_554_; 
lean_inc_ref(v_00_u03c6_514_);
v___x_554_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_00_u03c6_514_, v_a_519_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_a_555_);
lean_dec_ref_known(v___x_554_, 1);
v___x_556_ = l_Lean_Expr_cleanupAnnotations(v_a_555_);
lean_dec(v_a_555_);
v___x_557_ = l_Lean_Expr_isApp(v___x_556_);
if (v___x_557_ == 0)
{
lean_dec_ref(v___x_556_);
v___y_524_ = v_a_516_;
v___y_525_ = v_a_517_;
v___y_526_ = v_a_518_;
v___y_527_ = v_a_519_;
v___y_528_ = v_a_520_;
v___y_529_ = v_a_521_;
goto v___jp_523_;
}
else
{
lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_558_ = l_Lean_Expr_appFnCleanup___redArg(v___x_556_);
v___x_559_ = l_Lean_Expr_isApp(v___x_558_);
if (v___x_559_ == 0)
{
lean_dec_ref(v___x_558_);
lean_dec_ref(v___x_556_);
v___y_524_ = v_a_516_;
v___y_525_ = v_a_517_;
v___y_526_ = v_a_518_;
v___y_527_ = v_a_519_;
v___y_528_ = v_a_520_;
v___y_529_ = v_a_521_;
goto v___jp_523_;
}
else
{
lean_object* v___x_560_; lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_560_ = l_Lean_Expr_appFnCleanup___redArg(v___x_558_);
v___x_561_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__1));
v___x_562_ = l_Lean_Expr_isConstOf(v___x_560_, v___x_561_);
lean_dec_ref(v___x_560_);
if (v___x_562_ == 0)
{
lean_dec_ref(v___x_558_);
lean_dec_ref(v___x_556_);
v___y_524_ = v_a_516_;
v___y_525_ = v_a_517_;
v___y_526_ = v_a_518_;
v___y_527_ = v_a_519_;
v___y_528_ = v_a_520_;
v___y_529_ = v_a_521_;
goto v___jp_523_;
}
else
{
lean_object* v_arg_563_; lean_object* v_arg_564_; lean_object* v___x_565_; 
lean_dec_ref(v_00_u03c6_514_);
v_arg_563_ = lean_ctor_get(v___x_556_, 1);
lean_inc_ref(v_arg_563_);
lean_dec_ref(v___x_556_);
v_arg_564_ = lean_ctor_get(v___x_558_, 1);
lean_inc_ref(v_arg_564_);
lean_dec_ref(v___x_558_);
lean_inc_ref(v_G_515_);
v___x_565_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(v_arg_564_, v_G_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; uint8_t v___x_567_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v___x_567_ = lean_unbox(v_a_566_);
if (v___x_567_ == 0)
{
lean_dec_ref_known(v___x_565_, 1);
v_00_u03c6_514_ = v_arg_563_;
goto _start;
}
else
{
lean_dec_ref(v_arg_563_);
lean_dec_ref(v_G_515_);
return v___x_565_;
}
}
else
{
lean_dec_ref(v_arg_563_);
lean_dec_ref(v_G_515_);
return v___x_565_;
}
}
}
}
}
else
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
lean_dec_ref(v_G_515_);
lean_dec_ref(v_00_u03c6_514_);
v_a_569_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_554_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_554_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
v___jp_523_:
{
lean_object* v___x_530_; 
v___x_530_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(v_00_u03c6_514_, v_G_515_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_545_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_545_ == 0)
{
v___x_533_ = v___x_530_;
v_isShared_534_ = v_isSharedCheck_545_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_545_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
if (lean_obj_tag(v_a_531_) == 0)
{
uint8_t v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_535_ = 0;
v___x_536_ = lean_box(v___x_535_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_536_);
v___x_538_ = v___x_533_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
else
{
uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
lean_dec_ref_known(v_a_531_, 1);
v___x_540_ = 1;
v___x_541_ = lean_box(v___x_540_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_541_);
v___x_543_ = v___x_533_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
v_a_546_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_530_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_530_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___boxed(lean_object* v_00_u03c6_577_, lean_object* v_G_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(v_00_u03c6_577_, v_G_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct(lean_object* v_00_u03c6_587_, lean_object* v_G_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(v_00_u03c6_587_, v_G_588_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___boxed(lean_object* v_00_u03c6_602_, lean_object* v_G_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct(v_00_u03c6_602_, v_G_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_);
lean_dec(v_a_614_);
lean_dec_ref(v_a_613_);
lean_dec(v_a_612_);
lean_dec_ref(v_a_611_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
lean_dec(v_a_608_);
lean_dec_ref(v_a_607_);
lean_dec(v_a_606_);
lean_dec(v_a_605_);
lean_dec_ref(v_a_604_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(lean_object* v_x_617_, uint8_t v_bi_618_, lean_object* v_t_619_, lean_object* v_b_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v___y_629_; lean_object* v___x_632_; uint8_t v_debug_633_; 
v___x_632_ = lean_st_ref_get(v___y_622_);
v_debug_633_ = lean_ctor_get_uint8(v___x_632_, sizeof(void*)*13);
lean_dec(v___x_632_);
if (v_debug_633_ == 0)
{
v___y_629_ = v___y_622_;
goto v___jp_628_;
}
else
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_619_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v___x_635_; 
lean_dec_ref_known(v___x_634_, 1);
v___x_635_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_dec_ref_known(v___x_635_, 1);
v___y_629_ = v___y_622_;
goto v___jp_628_;
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_dec_ref(v_b_620_);
lean_dec_ref(v_t_619_);
lean_dec(v_x_617_);
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
lean_dec_ref(v_b_620_);
lean_dec_ref(v_t_619_);
lean_dec(v_x_617_);
v_a_644_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_634_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_634_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
v___jp_628_:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = l_Lean_Expr_forallE___override(v_x_617_, v_t_619_, v_b_620_, v_bi_618_);
v___x_631_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_630_, v___y_629_);
return v___x_631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg___boxed(lean_object* v_x_652_, lean_object* v_bi_653_, lean_object* v_t_654_, lean_object* v_b_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
uint8_t v_bi_boxed_663_; lean_object* v_res_664_; 
v_bi_boxed_663_ = lean_unbox(v_bi_653_);
v_res_664_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_x_652_, v_bi_boxed_663_, v_t_654_, v_b_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0(lean_object* v_x_665_, uint8_t v_bi_666_, lean_object* v_t_667_, lean_object* v_b_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_x_665_, v_bi_666_, v_t_667_, v_b_668_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___boxed(lean_object* v_x_682_, lean_object* v_bi_683_, lean_object* v_t_684_, lean_object* v_b_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
uint8_t v_bi_boxed_698_; lean_object* v_res_699_; 
v_bi_boxed_698_ = lean_unbox(v_bi_683_);
v_res_699_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0(v_x_682_, v_bi_boxed_698_, v_t_684_, v_b_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_700_, lean_object* v_x_701_, lean_object* v_x_702_, lean_object* v_x_703_){
_start:
{
lean_object* v_ks_704_; lean_object* v_vs_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_729_; 
v_ks_704_ = lean_ctor_get(v_x_700_, 0);
v_vs_705_ = lean_ctor_get(v_x_700_, 1);
v_isSharedCheck_729_ = !lean_is_exclusive(v_x_700_);
if (v_isSharedCheck_729_ == 0)
{
v___x_707_ = v_x_700_;
v_isShared_708_ = v_isSharedCheck_729_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_vs_705_);
lean_inc(v_ks_704_);
lean_dec(v_x_700_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_729_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_709_; uint8_t v___x_710_; 
v___x_709_ = lean_array_get_size(v_ks_704_);
v___x_710_ = lean_nat_dec_lt(v_x_701_, v___x_709_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
lean_dec(v_x_701_);
v___x_711_ = lean_array_push(v_ks_704_, v_x_702_);
v___x_712_ = lean_array_push(v_vs_705_, v_x_703_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_712_);
lean_ctor_set(v___x_707_, 0, v___x_711_);
v___x_714_ = v___x_707_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_711_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
else
{
lean_object* v_k_x27_716_; uint8_t v___x_717_; 
v_k_x27_716_ = lean_array_fget_borrowed(v_ks_704_, v_x_701_);
v___x_717_ = l_Lean_instBEqMVarId_beq(v_x_702_, v_k_x27_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_719_; 
if (v_isShared_708_ == 0)
{
v___x_719_ = v___x_707_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_ks_704_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_vs_705_);
v___x_719_ = v_reuseFailAlloc_723_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = lean_unsigned_to_nat(1u);
v___x_721_ = lean_nat_add(v_x_701_, v___x_720_);
lean_dec(v_x_701_);
v_x_700_ = v___x_719_;
v_x_701_ = v___x_721_;
goto _start;
}
}
else
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_727_; 
v___x_724_ = lean_array_fset(v_ks_704_, v_x_701_, v_x_702_);
v___x_725_ = lean_array_fset(v_vs_705_, v_x_701_, v_x_703_);
lean_dec(v_x_701_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_725_);
lean_ctor_set(v___x_707_, 0, v___x_724_);
v___x_727_ = v___x_707_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v___x_725_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_730_, lean_object* v_k_731_, lean_object* v_v_732_){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_733_ = lean_unsigned_to_nat(0u);
v___x_734_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_n_730_, v___x_733_, v_k_731_, v_v_732_);
return v___x_734_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_735_; 
v___x_735_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(lean_object* v_x_736_, size_t v_x_737_, size_t v_x_738_, lean_object* v_x_739_, lean_object* v_x_740_){
_start:
{
if (lean_obj_tag(v_x_736_) == 0)
{
lean_object* v_es_741_; size_t v___x_742_; size_t v___x_743_; lean_object* v_j_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v_es_741_ = lean_ctor_get(v_x_736_, 0);
v___x_742_ = ((size_t)31ULL);
v___x_743_ = lean_usize_land(v_x_737_, v___x_742_);
v_j_744_ = lean_usize_to_nat(v___x_743_);
v___x_745_ = lean_array_get_size(v_es_741_);
v___x_746_ = lean_nat_dec_lt(v_j_744_, v___x_745_);
if (v___x_746_ == 0)
{
lean_dec(v_j_744_);
lean_dec(v_x_740_);
lean_dec(v_x_739_);
return v_x_736_;
}
else
{
lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_785_; 
lean_inc_ref(v_es_741_);
v_isSharedCheck_785_ = !lean_is_exclusive(v_x_736_);
if (v_isSharedCheck_785_ == 0)
{
lean_object* v_unused_786_; 
v_unused_786_ = lean_ctor_get(v_x_736_, 0);
lean_dec(v_unused_786_);
v___x_748_ = v_x_736_;
v_isShared_749_ = v_isSharedCheck_785_;
goto v_resetjp_747_;
}
else
{
lean_dec(v_x_736_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_785_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v_v_750_; lean_object* v___x_751_; lean_object* v_xs_x27_752_; lean_object* v___y_754_; 
v_v_750_ = lean_array_fget(v_es_741_, v_j_744_);
v___x_751_ = lean_box(0);
v_xs_x27_752_ = lean_array_fset(v_es_741_, v_j_744_, v___x_751_);
switch(lean_obj_tag(v_v_750_))
{
case 0:
{
lean_object* v_key_759_; lean_object* v_val_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_770_; 
v_key_759_ = lean_ctor_get(v_v_750_, 0);
v_val_760_ = lean_ctor_get(v_v_750_, 1);
v_isSharedCheck_770_ = !lean_is_exclusive(v_v_750_);
if (v_isSharedCheck_770_ == 0)
{
v___x_762_ = v_v_750_;
v_isShared_763_ = v_isSharedCheck_770_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_val_760_);
lean_inc(v_key_759_);
lean_dec(v_v_750_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_770_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
uint8_t v___x_764_; 
v___x_764_ = l_Lean_instBEqMVarId_beq(v_x_739_, v_key_759_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; lean_object* v___x_766_; 
lean_del_object(v___x_762_);
v___x_765_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_759_, v_val_760_, v_x_739_, v_x_740_);
v___x_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
v___y_754_ = v___x_766_;
goto v___jp_753_;
}
else
{
lean_object* v___x_768_; 
lean_dec(v_val_760_);
lean_dec(v_key_759_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 1, v_x_740_);
lean_ctor_set(v___x_762_, 0, v_x_739_);
v___x_768_ = v___x_762_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_x_739_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v_x_740_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
v___y_754_ = v___x_768_;
goto v___jp_753_;
}
}
}
}
case 1:
{
lean_object* v_node_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_783_; 
v_node_771_ = lean_ctor_get(v_v_750_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v_v_750_);
if (v_isSharedCheck_783_ == 0)
{
v___x_773_ = v_v_750_;
v_isShared_774_ = v_isSharedCheck_783_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_node_771_);
lean_dec(v_v_750_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_783_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
size_t v___x_775_; size_t v___x_776_; size_t v___x_777_; size_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_775_ = ((size_t)5ULL);
v___x_776_ = lean_usize_shift_right(v_x_737_, v___x_775_);
v___x_777_ = ((size_t)1ULL);
v___x_778_ = lean_usize_add(v_x_738_, v___x_777_);
v___x_779_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_node_771_, v___x_776_, v___x_778_, v_x_739_, v_x_740_);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v___x_779_);
v___x_781_ = v___x_773_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
v___y_754_ = v___x_781_;
goto v___jp_753_;
}
}
}
default: 
{
lean_object* v___x_784_; 
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v_x_739_);
lean_ctor_set(v___x_784_, 1, v_x_740_);
v___y_754_ = v___x_784_;
goto v___jp_753_;
}
}
v___jp_753_:
{
lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_755_ = lean_array_fset(v_xs_x27_752_, v_j_744_, v___y_754_);
lean_dec(v_j_744_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 0, v___x_755_);
v___x_757_ = v___x_748_;
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
else
{
lean_object* v_ks_787_; lean_object* v_vs_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_806_; 
v_ks_787_ = lean_ctor_get(v_x_736_, 0);
v_vs_788_ = lean_ctor_get(v_x_736_, 1);
v_isSharedCheck_806_ = !lean_is_exclusive(v_x_736_);
if (v_isSharedCheck_806_ == 0)
{
v___x_790_ = v_x_736_;
v_isShared_791_ = v_isSharedCheck_806_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_vs_788_);
lean_inc(v_ks_787_);
lean_dec(v_x_736_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_806_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_ks_787_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_vs_788_);
v___x_793_ = v_reuseFailAlloc_805_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v_newNode_794_; size_t v___x_795_; uint8_t v___x_796_; 
v_newNode_794_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3___redArg(v___x_793_, v_x_739_, v_x_740_);
v___x_795_ = ((size_t)7ULL);
v___x_796_ = lean_usize_dec_le(v___x_795_, v_x_738_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_797_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_794_);
v___x_798_ = lean_unsigned_to_nat(4u);
v___x_799_ = lean_nat_dec_lt(v___x_797_, v___x_798_);
lean_dec(v___x_797_);
if (v___x_799_ == 0)
{
lean_object* v_ks_800_; lean_object* v_vs_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v_ks_800_ = lean_ctor_get(v_newNode_794_, 0);
lean_inc_ref(v_ks_800_);
v_vs_801_ = lean_ctor_get(v_newNode_794_, 1);
lean_inc_ref(v_vs_801_);
lean_dec_ref(v_newNode_794_);
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_804_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(v_x_738_, v_ks_800_, v_vs_801_, v___x_802_, v___x_803_);
lean_dec_ref(v_vs_801_);
lean_dec_ref(v_ks_800_);
return v___x_804_;
}
else
{
return v_newNode_794_;
}
}
else
{
return v_newNode_794_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(size_t v_depth_807_, lean_object* v_keys_808_, lean_object* v_vals_809_, lean_object* v_i_810_, lean_object* v_entries_811_){
_start:
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = lean_array_get_size(v_keys_808_);
v___x_813_ = lean_nat_dec_lt(v_i_810_, v___x_812_);
if (v___x_813_ == 0)
{
lean_dec(v_i_810_);
return v_entries_811_;
}
else
{
lean_object* v_k_814_; lean_object* v_v_815_; uint64_t v___x_816_; size_t v_h_817_; size_t v___x_818_; lean_object* v___x_819_; size_t v___x_820_; size_t v___x_821_; size_t v___x_822_; size_t v_h_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v_k_814_ = lean_array_fget_borrowed(v_keys_808_, v_i_810_);
v_v_815_ = lean_array_fget_borrowed(v_vals_809_, v_i_810_);
v___x_816_ = l_Lean_instHashableMVarId_hash(v_k_814_);
v_h_817_ = lean_uint64_to_usize(v___x_816_);
v___x_818_ = ((size_t)5ULL);
v___x_819_ = lean_unsigned_to_nat(1u);
v___x_820_ = ((size_t)1ULL);
v___x_821_ = lean_usize_sub(v_depth_807_, v___x_820_);
v___x_822_ = lean_usize_mul(v___x_818_, v___x_821_);
v_h_823_ = lean_usize_shift_right(v_h_817_, v___x_822_);
v___x_824_ = lean_nat_add(v_i_810_, v___x_819_);
lean_dec(v_i_810_);
lean_inc(v_v_815_);
lean_inc(v_k_814_);
v___x_825_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_entries_811_, v_h_823_, v_depth_807_, v_k_814_, v_v_815_);
v_i_810_ = v___x_824_;
v_entries_811_ = v___x_825_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_827_, lean_object* v_keys_828_, lean_object* v_vals_829_, lean_object* v_i_830_, lean_object* v_entries_831_){
_start:
{
size_t v_depth_boxed_832_; lean_object* v_res_833_; 
v_depth_boxed_832_ = lean_unbox_usize(v_depth_827_);
lean_dec(v_depth_827_);
v_res_833_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_832_, v_keys_828_, v_vals_829_, v_i_830_, v_entries_831_);
lean_dec_ref(v_vals_829_);
lean_dec_ref(v_keys_828_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_834_, lean_object* v_x_835_, lean_object* v_x_836_, lean_object* v_x_837_, lean_object* v_x_838_){
_start:
{
size_t v_x_11782__boxed_839_; size_t v_x_11783__boxed_840_; lean_object* v_res_841_; 
v_x_11782__boxed_839_ = lean_unbox_usize(v_x_835_);
lean_dec(v_x_835_);
v_x_11783__boxed_840_ = lean_unbox_usize(v_x_836_);
lean_dec(v_x_836_);
v_res_841_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_x_834_, v_x_11782__boxed_839_, v_x_11783__boxed_840_, v_x_837_, v_x_838_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1___redArg(lean_object* v_x_842_, lean_object* v_x_843_, lean_object* v_x_844_){
_start:
{
uint64_t v___x_845_; size_t v___x_846_; size_t v___x_847_; lean_object* v___x_848_; 
v___x_845_ = l_Lean_instHashableMVarId_hash(v_x_843_);
v___x_846_ = lean_uint64_to_usize(v___x_845_);
v___x_847_ = ((size_t)1ULL);
v___x_848_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_x_842_, v___x_846_, v___x_847_, v_x_843_, v_x_844_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(lean_object* v_mvarId_849_, lean_object* v_val_850_, lean_object* v___y_851_){
_start:
{
lean_object* v___x_853_; lean_object* v_mctx_854_; lean_object* v_cache_855_; lean_object* v_zetaDeltaFVarIds_856_; lean_object* v_postponed_857_; lean_object* v_diag_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_887_; 
v___x_853_ = lean_st_ref_take(v___y_851_);
v_mctx_854_ = lean_ctor_get(v___x_853_, 0);
v_cache_855_ = lean_ctor_get(v___x_853_, 1);
v_zetaDeltaFVarIds_856_ = lean_ctor_get(v___x_853_, 2);
v_postponed_857_ = lean_ctor_get(v___x_853_, 3);
v_diag_858_ = lean_ctor_get(v___x_853_, 4);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_887_ == 0)
{
v___x_860_ = v___x_853_;
v_isShared_861_ = v_isSharedCheck_887_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_diag_858_);
lean_inc(v_postponed_857_);
lean_inc(v_zetaDeltaFVarIds_856_);
lean_inc(v_cache_855_);
lean_inc(v_mctx_854_);
lean_dec(v___x_853_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_887_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v_depth_862_; lean_object* v_levelAssignDepth_863_; lean_object* v_lmvarCounter_864_; lean_object* v_mvarCounter_865_; lean_object* v_lDecls_866_; lean_object* v_decls_867_; lean_object* v_userNames_868_; lean_object* v_lAssignment_869_; lean_object* v_eAssignment_870_; lean_object* v_dAssignment_871_; lean_object* v_instanceTypedMVars_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_886_; 
v_depth_862_ = lean_ctor_get(v_mctx_854_, 0);
v_levelAssignDepth_863_ = lean_ctor_get(v_mctx_854_, 1);
v_lmvarCounter_864_ = lean_ctor_get(v_mctx_854_, 2);
v_mvarCounter_865_ = lean_ctor_get(v_mctx_854_, 3);
v_lDecls_866_ = lean_ctor_get(v_mctx_854_, 4);
v_decls_867_ = lean_ctor_get(v_mctx_854_, 5);
v_userNames_868_ = lean_ctor_get(v_mctx_854_, 6);
v_lAssignment_869_ = lean_ctor_get(v_mctx_854_, 7);
v_eAssignment_870_ = lean_ctor_get(v_mctx_854_, 8);
v_dAssignment_871_ = lean_ctor_get(v_mctx_854_, 9);
v_instanceTypedMVars_872_ = lean_ctor_get(v_mctx_854_, 10);
v_isSharedCheck_886_ = !lean_is_exclusive(v_mctx_854_);
if (v_isSharedCheck_886_ == 0)
{
v___x_874_ = v_mctx_854_;
v_isShared_875_ = v_isSharedCheck_886_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_instanceTypedMVars_872_);
lean_inc(v_dAssignment_871_);
lean_inc(v_eAssignment_870_);
lean_inc(v_lAssignment_869_);
lean_inc(v_userNames_868_);
lean_inc(v_decls_867_);
lean_inc(v_lDecls_866_);
lean_inc(v_mvarCounter_865_);
lean_inc(v_lmvarCounter_864_);
lean_inc(v_levelAssignDepth_863_);
lean_inc(v_depth_862_);
lean_dec(v_mctx_854_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_886_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_879_; 
v___x_876_ = lean_box(0);
v___x_877_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1___redArg(v_eAssignment_870_, v_mvarId_849_, v_val_850_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 8, v___x_877_);
v___x_879_ = v___x_874_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_depth_862_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_levelAssignDepth_863_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v_lmvarCounter_864_);
lean_ctor_set(v_reuseFailAlloc_885_, 3, v_mvarCounter_865_);
lean_ctor_set(v_reuseFailAlloc_885_, 4, v_lDecls_866_);
lean_ctor_set(v_reuseFailAlloc_885_, 5, v_decls_867_);
lean_ctor_set(v_reuseFailAlloc_885_, 6, v_userNames_868_);
lean_ctor_set(v_reuseFailAlloc_885_, 7, v_lAssignment_869_);
lean_ctor_set(v_reuseFailAlloc_885_, 8, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_885_, 9, v_dAssignment_871_);
lean_ctor_set(v_reuseFailAlloc_885_, 10, v_instanceTypedMVars_872_);
v___x_879_ = v_reuseFailAlloc_885_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_881_; 
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 0, v___x_879_);
v___x_881_ = v___x_860_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_879_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v_cache_855_);
lean_ctor_set(v_reuseFailAlloc_884_, 2, v_zetaDeltaFVarIds_856_);
lean_ctor_set(v_reuseFailAlloc_884_, 3, v_postponed_857_);
lean_ctor_set(v_reuseFailAlloc_884_, 4, v_diag_858_);
v___x_881_ = v_reuseFailAlloc_884_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_st_ref_put(v___y_851_, v___x_881_);
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_876_);
return v___x_883_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg___boxed(lean_object* v_mvarId_888_, lean_object* v_val_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(v_mvarId_888_, v_val_889_, v___y_890_);
lean_dec(v___y_890_);
return v_res_892_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_898_ = lean_box(0);
v___x_899_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__2));
v___x_900_ = l_Lean_mkConst(v___x_899_, v___x_898_);
return v___x_900_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_904_ = lean_box(0);
v___x_905_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__5));
v___x_906_ = l_Lean_mkConst(v___x_905_, v___x_904_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f(lean_object* v_goal_907_, lean_object* v_target_908_, lean_object* v_nm_909_, lean_object* v_00_u03c6_910_, lean_object* v_G_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_){
_start:
{
lean_object* v___x_927_; uint8_t v___x_928_; 
v___x_927_ = l_Lean_Expr_cleanupAnnotations(v_00_u03c6_910_);
v___x_928_ = l_Lean_Expr_isApp(v___x_927_);
if (v___x_928_ == 0)
{
lean_dec_ref(v___x_927_);
lean_dec_ref(v_G_911_);
lean_dec_ref(v_00_u03c6_910_);
lean_dec(v_nm_909_);
lean_dec_ref(v_target_908_);
lean_dec(v_goal_907_);
goto v___jp_924_;
}
else
{
lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_929_ = l_Lean_Expr_appFnCleanup___redArg(v___x_927_);
v___x_930_ = l_Lean_Expr_isApp(v___x_929_);
if (v___x_930_ == 0)
{
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
lean_dec_ref(v_G_911_);
lean_dec_ref(v_00_u03c6_910_);
lean_dec(v_nm_909_);
lean_dec_ref(v_target_908_);
lean_dec(v_goal_907_);
goto v___jp_924_;
}
else
{
lean_object* v___x_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_931_ = l_Lean_Expr_appFnCleanup___redArg(v___x_929_);
v___x_932_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__1));
v___x_933_ = l_Lean_Expr_isConstOf(v___x_931_, v___x_932_);
lean_dec_ref(v___x_931_);
if (v___x_933_ == 0)
{
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
lean_dec_ref(v_G_911_);
lean_dec_ref(v_00_u03c6_910_);
lean_dec(v_nm_909_);
lean_dec_ref(v_target_908_);
lean_dec(v_goal_907_);
goto v___jp_924_;
}
else
{
lean_object* v_arg_934_; lean_object* v_arg_935_; lean_object* v___x_936_; 
v_arg_934_ = lean_ctor_get(v___x_927_, 1);
lean_inc_ref(v_arg_934_);
lean_dec_ref(v___x_927_);
v_arg_935_ = lean_ctor_get(v___x_929_, 1);
lean_inc_ref(v_arg_935_);
lean_dec_ref(v___x_929_);
lean_inc_ref(v_G_911_);
v___x_936_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(v_00_u03c6_910_, v_G_911_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_993_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_993_ == 0)
{
v___x_939_ = v___x_936_;
v_isShared_940_ = v_isSharedCheck_993_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_936_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_993_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
uint8_t v___x_941_; 
v___x_941_ = lean_unbox(v_a_937_);
lean_dec(v_a_937_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_944_; 
lean_dec_ref(v_arg_935_);
lean_dec_ref(v_arg_934_);
lean_dec_ref(v_G_911_);
lean_dec(v_nm_909_);
lean_dec_ref(v_target_908_);
lean_dec(v_goal_907_);
v___x_942_ = lean_box(0);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 0, v___x_942_);
v___x_944_ = v___x_939_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
else
{
uint8_t v___x_946_; lean_object* v___x_947_; 
lean_del_object(v___x_939_);
v___x_946_ = 0;
lean_inc_ref(v_G_911_);
lean_inc_ref(v_arg_934_);
lean_inc(v_nm_909_);
v___x_947_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_nm_909_, v___x_946_, v_arg_934_, v_G_911_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_949_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
lean_inc_ref(v_arg_935_);
v___x_949_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_nm_909_, v___x_946_, v_arg_935_, v_a_948_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc_n(v_a_950_, 2);
lean_dec_ref_known(v___x_949_, 1);
v___x_951_ = lean_box(0);
v___x_952_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_950_, v___x_951_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_967_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc_n(v_a_953_, 2);
lean_dec_ref_known(v___x_952_, 1);
v___x_954_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3);
v___x_955_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6);
v___x_956_ = l_Lean_mkApp3(v___x_955_, v_arg_935_, v_arg_934_, v_G_911_);
v___x_957_ = l_Lean_mkApp4(v___x_954_, v_target_908_, v_a_950_, v___x_956_, v_a_953_);
v___x_958_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(v_goal_907_, v___x_957_, v_a_920_);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_967_ == 0)
{
lean_object* v_unused_968_; 
v_unused_968_ = lean_ctor_get(v___x_958_, 0);
lean_dec(v_unused_968_);
v___x_960_ = v___x_958_;
v_isShared_961_ = v_isSharedCheck_967_;
goto v_resetjp_959_;
}
else
{
lean_dec(v___x_958_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_967_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_962_ = l_Lean_Expr_mvarId_x21(v_a_953_);
lean_dec(v_a_953_);
v___x_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v___x_963_);
v___x_965_ = v___x_960_;
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
else
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
lean_dec(v_a_950_);
lean_dec_ref(v_arg_935_);
lean_dec_ref(v_arg_934_);
lean_dec_ref(v_G_911_);
lean_dec_ref(v_target_908_);
lean_dec(v_goal_907_);
v_a_969_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v___x_952_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_952_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_969_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_dec_ref(v_arg_935_);
lean_dec_ref(v_arg_934_);
lean_dec_ref(v_G_911_);
lean_dec_ref(v_target_908_);
lean_dec(v_goal_907_);
v_a_977_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_949_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_949_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_dec_ref(v_arg_935_);
lean_dec_ref(v_arg_934_);
lean_dec_ref(v_G_911_);
lean_dec(v_nm_909_);
lean_dec_ref(v_target_908_);
lean_dec(v_goal_907_);
v_a_985_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_947_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_947_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_dec_ref(v_arg_935_);
lean_dec_ref(v_arg_934_);
lean_dec_ref(v_G_911_);
lean_dec(v_nm_909_);
lean_dec_ref(v_target_908_);
lean_dec(v_goal_907_);
v_a_994_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_936_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_936_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
}
}
v___jp_924_:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = lean_box(0);
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
return v___x_926_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___boxed(lean_object** _args){
lean_object* v_goal_1002_ = _args[0];
lean_object* v_target_1003_ = _args[1];
lean_object* v_nm_1004_ = _args[2];
lean_object* v_00_u03c6_1005_ = _args[3];
lean_object* v_G_1006_ = _args[4];
lean_object* v_a_1007_ = _args[5];
lean_object* v_a_1008_ = _args[6];
lean_object* v_a_1009_ = _args[7];
lean_object* v_a_1010_ = _args[8];
lean_object* v_a_1011_ = _args[9];
lean_object* v_a_1012_ = _args[10];
lean_object* v_a_1013_ = _args[11];
lean_object* v_a_1014_ = _args[12];
lean_object* v_a_1015_ = _args[13];
lean_object* v_a_1016_ = _args[14];
lean_object* v_a_1017_ = _args[15];
lean_object* v_a_1018_ = _args[16];
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f(v_goal_1002_, v_target_1003_, v_nm_1004_, v_00_u03c6_1005_, v_G_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_);
lean_dec(v_a_1017_);
lean_dec_ref(v_a_1016_);
lean_dec(v_a_1015_);
lean_dec_ref(v_a_1014_);
lean_dec(v_a_1013_);
lean_dec_ref(v_a_1012_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec(v_a_1009_);
lean_dec(v_a_1008_);
lean_dec_ref(v_a_1007_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1(lean_object* v_mvarId_1020_, lean_object* v_val_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(v_mvarId_1020_, v_val_1021_, v___y_1030_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___boxed(lean_object* v_mvarId_1035_, lean_object* v_val_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1(v_mvarId_1035_, v_val_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1(lean_object* v_00_u03b2_1050_, lean_object* v_x_1051_, lean_object* v_x_1052_, lean_object* v_x_1053_){
_start:
{
lean_object* v___x_1054_; 
v___x_1054_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1___redArg(v_x_1051_, v_x_1052_, v_x_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1055_, lean_object* v_x_1056_, size_t v_x_1057_, size_t v_x_1058_, lean_object* v_x_1059_, lean_object* v_x_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_x_1056_, v_x_1057_, v_x_1058_, v_x_1059_, v_x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1062_, lean_object* v_x_1063_, lean_object* v_x_1064_, lean_object* v_x_1065_, lean_object* v_x_1066_, lean_object* v_x_1067_){
_start:
{
size_t v_x_12245__boxed_1068_; size_t v_x_12246__boxed_1069_; lean_object* v_res_1070_; 
v_x_12245__boxed_1068_ = lean_unbox_usize(v_x_1064_);
lean_dec(v_x_1064_);
v_x_12246__boxed_1069_ = lean_unbox_usize(v_x_1065_);
lean_dec(v_x_1065_);
v_res_1070_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2(v_00_u03b2_1062_, v_x_1063_, v_x_12245__boxed_1068_, v_x_12246__boxed_1069_, v_x_1066_, v_x_1067_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1071_, lean_object* v_n_1072_, lean_object* v_k_1073_, lean_object* v_v_1074_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3___redArg(v_n_1072_, v_k_1073_, v_v_1074_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1076_, size_t v_depth_1077_, lean_object* v_keys_1078_, lean_object* v_vals_1079_, lean_object* v_heq_1080_, lean_object* v_i_1081_, lean_object* v_entries_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_1077_, v_keys_1078_, v_vals_1079_, v_i_1081_, v_entries_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1084_, lean_object* v_depth_1085_, lean_object* v_keys_1086_, lean_object* v_vals_1087_, lean_object* v_heq_1088_, lean_object* v_i_1089_, lean_object* v_entries_1090_){
_start:
{
size_t v_depth_boxed_1091_; lean_object* v_res_1092_; 
v_depth_boxed_1091_ = lean_unbox_usize(v_depth_1085_);
lean_dec(v_depth_1085_);
v_res_1092_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4(v_00_u03b2_1084_, v_depth_boxed_1091_, v_keys_1086_, v_vals_1087_, v_heq_1088_, v_i_1089_, v_entries_1090_);
lean_dec_ref(v_vals_1087_);
lean_dec_ref(v_keys_1086_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1093_, lean_object* v_x_1094_, lean_object* v_x_1095_, lean_object* v_x_1096_, lean_object* v_x_1097_){
_start:
{
lean_object* v___x_1098_; 
v___x_1098_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_x_1094_, v_x_1095_, v_x_1096_, v_x_1097_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(lean_object* v_x_1099_, uint8_t v_bi_1100_, lean_object* v_t_1101_, lean_object* v_b_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v___y_1111_; lean_object* v___x_1114_; uint8_t v_debug_1115_; 
v___x_1114_ = lean_st_ref_get(v___y_1104_);
v_debug_1115_ = lean_ctor_get_uint8(v___x_1114_, sizeof(void*)*13);
lean_dec(v___x_1114_);
if (v_debug_1115_ == 0)
{
v___y_1111_ = v___y_1104_;
goto v___jp_1110_;
}
else
{
lean_object* v___x_1116_; 
v___x_1116_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_1101_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v___x_1117_; 
lean_dec_ref_known(v___x_1116_, 1);
v___x_1117_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_dec_ref_known(v___x_1117_, 1);
v___y_1111_ = v___y_1104_;
goto v___jp_1110_;
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec_ref(v_b_1102_);
lean_dec_ref(v_t_1101_);
lean_dec(v_x_1099_);
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1117_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1117_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v_b_1102_);
lean_dec_ref(v_t_1101_);
lean_dec(v_x_1099_);
v_a_1126_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1116_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1116_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
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
v___jp_1110_:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = l_Lean_Expr_lam___override(v_x_1099_, v_t_1101_, v_b_1102_, v_bi_1100_);
v___x_1113_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1112_, v___y_1111_);
return v___x_1113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg___boxed(lean_object* v_x_1134_, lean_object* v_bi_1135_, lean_object* v_t_1136_, lean_object* v_b_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
uint8_t v_bi_boxed_1145_; lean_object* v_res_1146_; 
v_bi_boxed_1145_ = lean_unbox(v_bi_1135_);
v_res_1146_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(v_x_1134_, v_bi_boxed_1145_, v_t_1136_, v_b_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0(lean_object* v_x_1147_, uint8_t v_bi_1148_, lean_object* v_t_1149_, lean_object* v_b_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(v_x_1147_, v_bi_1148_, v_t_1149_, v_b_1150_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___boxed(lean_object* v_x_1164_, lean_object* v_bi_1165_, lean_object* v_t_1166_, lean_object* v_b_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
uint8_t v_bi_boxed_1180_; lean_object* v_res_1181_; 
v_bi_boxed_1180_ = lean_unbox(v_bi_1165_);
v_res_1181_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0(v_x_1164_, v_bi_boxed_1180_, v_t_1166_, v_b_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
return v_res_1181_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1182_; double v___x_1183_; 
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = lean_float_of_nat(v___x_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(lean_object* v_cls_1187_, lean_object* v_msg_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_ref_1194_; lean_object* v___x_1195_; lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1241_; 
v_ref_1194_ = lean_ctor_get(v___y_1191_, 2);
v___x_1195_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0_spec__0(v_msg_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1198_ = v___x_1195_;
v_isShared_1199_ = v_isSharedCheck_1241_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1195_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1241_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1200_; lean_object* v_traceState_1201_; lean_object* v_env_1202_; lean_object* v_nextMacroScope_1203_; lean_object* v_ngen_1204_; lean_object* v_auxDeclNGen_1205_; lean_object* v_cache_1206_; lean_object* v_recordedDeps_1207_; lean_object* v_messages_1208_; lean_object* v_infoState_1209_; lean_object* v_snapshotTasks_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1240_; 
v___x_1200_ = lean_st_ref_take(v___y_1192_);
v_traceState_1201_ = lean_ctor_get(v___x_1200_, 4);
v_env_1202_ = lean_ctor_get(v___x_1200_, 0);
v_nextMacroScope_1203_ = lean_ctor_get(v___x_1200_, 1);
v_ngen_1204_ = lean_ctor_get(v___x_1200_, 2);
v_auxDeclNGen_1205_ = lean_ctor_get(v___x_1200_, 3);
v_cache_1206_ = lean_ctor_get(v___x_1200_, 5);
v_recordedDeps_1207_ = lean_ctor_get(v___x_1200_, 6);
v_messages_1208_ = lean_ctor_get(v___x_1200_, 7);
v_infoState_1209_ = lean_ctor_get(v___x_1200_, 8);
v_snapshotTasks_1210_ = lean_ctor_get(v___x_1200_, 9);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1212_ = v___x_1200_;
v_isShared_1213_ = v_isSharedCheck_1240_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_snapshotTasks_1210_);
lean_inc(v_infoState_1209_);
lean_inc(v_messages_1208_);
lean_inc(v_recordedDeps_1207_);
lean_inc(v_cache_1206_);
lean_inc(v_traceState_1201_);
lean_inc(v_auxDeclNGen_1205_);
lean_inc(v_ngen_1204_);
lean_inc(v_nextMacroScope_1203_);
lean_inc(v_env_1202_);
lean_dec(v___x_1200_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1240_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
uint64_t v_tid_1214_; lean_object* v_traces_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1239_; 
v_tid_1214_ = lean_ctor_get_uint64(v_traceState_1201_, sizeof(void*)*1);
v_traces_1215_ = lean_ctor_get(v_traceState_1201_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v_traceState_1201_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1217_ = v_traceState_1201_;
v_isShared_1218_ = v_isSharedCheck_1239_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_traces_1215_);
lean_dec(v_traceState_1201_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1239_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; double v___x_1221_; uint8_t v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1230_; 
v___x_1219_ = lean_box(0);
v___x_1220_ = lean_box(0);
v___x_1221_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0);
v___x_1222_ = 0;
v___x_1223_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__1));
v___x_1224_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1224_, 0, v_cls_1187_);
lean_ctor_set(v___x_1224_, 1, v___x_1220_);
lean_ctor_set(v___x_1224_, 2, v___x_1223_);
lean_ctor_set_float(v___x_1224_, sizeof(void*)*3, v___x_1221_);
lean_ctor_set_float(v___x_1224_, sizeof(void*)*3 + 8, v___x_1221_);
lean_ctor_set_uint8(v___x_1224_, sizeof(void*)*3 + 16, v___x_1222_);
v___x_1225_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__2));
v___x_1226_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1224_);
lean_ctor_set(v___x_1226_, 1, v_a_1196_);
lean_ctor_set(v___x_1226_, 2, v___x_1225_);
lean_inc(v_ref_1194_);
v___x_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1227_, 0, v_ref_1194_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = l_Lean_PersistentArray_push___redArg(v_traces_1215_, v___x_1227_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1228_);
v___x_1230_ = v___x_1217_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1228_);
lean_ctor_set_uint64(v_reuseFailAlloc_1238_, sizeof(void*)*1, v_tid_1214_);
v___x_1230_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
lean_object* v___x_1232_; 
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 4, v___x_1230_);
v___x_1232_ = v___x_1212_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_env_1202_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_nextMacroScope_1203_);
lean_ctor_set(v_reuseFailAlloc_1237_, 2, v_ngen_1204_);
lean_ctor_set(v_reuseFailAlloc_1237_, 3, v_auxDeclNGen_1205_);
lean_ctor_set(v_reuseFailAlloc_1237_, 4, v___x_1230_);
lean_ctor_set(v_reuseFailAlloc_1237_, 5, v_cache_1206_);
lean_ctor_set(v_reuseFailAlloc_1237_, 6, v_recordedDeps_1207_);
lean_ctor_set(v_reuseFailAlloc_1237_, 7, v_messages_1208_);
lean_ctor_set(v_reuseFailAlloc_1237_, 8, v_infoState_1209_);
lean_ctor_set(v_reuseFailAlloc_1237_, 9, v_snapshotTasks_1210_);
v___x_1232_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1233_; lean_object* v___x_1235_; 
v___x_1233_ = lean_st_ref_put(v___y_1192_, v___x_1232_);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 0, v___x_1219_);
v___x_1235_ = v___x_1198_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1219_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___boxed(lean_object* v_cls_1242_, lean_object* v_msg_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(v_cls_1242_, v_msg_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
return v_res_1249_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11(void){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1269_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8));
v___x_1270_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__10));
v___x_1271_ = l_Lean_Name_append(v___x_1270_, v___x_1269_);
return v___x_1271_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__12));
v___x_1274_ = l_Lean_stringToMessageData(v___x_1273_);
return v___x_1274_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__14));
v___x_1277_ = l_Lean_stringToMessageData(v___x_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f(lean_object* v_goal_1278_, lean_object* v_nm_1279_, lean_object* v_eqn_1280_, lean_object* v_G_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v___y_1295_; uint8_t v___y_1296_; lean_object* v___x_1301_; 
lean_inc_ref(v_eqn_1280_);
v___x_1301_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(v_eqn_1280_, v_G_1281_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1495_; 
v_a_1302_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1304_ = v___x_1301_;
v_isShared_1305_ = v_isSharedCheck_1495_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1301_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1495_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
if (lean_obj_tag(v_a_1302_) == 1)
{
lean_object* v_val_1306_; lean_object* v_snd_1307_; lean_object* v_snd_1308_; lean_object* v_fst_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1489_; 
lean_del_object(v___x_1304_);
v_val_1306_ = lean_ctor_get(v_a_1302_, 0);
lean_inc(v_val_1306_);
lean_dec_ref_known(v_a_1302_, 1);
v_snd_1307_ = lean_ctor_get(v_val_1306_, 1);
lean_inc(v_snd_1307_);
v_snd_1308_ = lean_ctor_get(v_snd_1307_, 1);
lean_inc(v_snd_1308_);
v_fst_1309_ = lean_ctor_get(v_val_1306_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_val_1306_);
if (v_isSharedCheck_1489_ == 0)
{
lean_object* v_unused_1490_; 
v_unused_1490_ = lean_ctor_get(v_val_1306_, 1);
lean_dec(v_unused_1490_);
v___x_1311_ = v_val_1306_;
v_isShared_1312_ = v_isSharedCheck_1489_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_fst_1309_);
lean_dec(v_val_1306_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1489_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v_fst_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1487_; 
v_fst_1313_ = lean_ctor_get(v_snd_1307_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_snd_1307_);
if (v_isSharedCheck_1487_ == 0)
{
lean_object* v_unused_1488_; 
v_unused_1488_ = lean_ctor_get(v_snd_1307_, 1);
lean_dec(v_unused_1488_);
v___x_1315_ = v_snd_1307_;
v_isShared_1316_ = v_isSharedCheck_1487_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_fst_1313_);
lean_dec(v_snd_1307_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1487_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v_fst_1317_; lean_object* v_snd_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1486_; 
v_fst_1317_ = lean_ctor_get(v_snd_1308_, 0);
v_snd_1318_ = lean_ctor_get(v_snd_1308_, 1);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_snd_1308_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1320_ = v_snd_1308_;
v_isShared_1321_ = v_isSharedCheck_1486_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_snd_1318_);
lean_inc(v_fst_1317_);
lean_dec(v_snd_1308_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1486_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___y_1323_; lean_object* v___x_1328_; 
lean_inc(v_fst_1309_);
v___x_1328_ = l_Lean_Meta_Sym_inferType(v_fst_1309_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc_n(v_a_1329_, 2);
lean_dec_ref_known(v___x_1328_, 1);
v___x_1330_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_1329_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1330_, 1);
v___x_1332_ = l_Lean_Expr_fvarId_x21(v_fst_1309_);
v___x_1333_ = l_Lean_FVarId_getUserName___redArg(v___x_1332_, v_a_1289_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; uint8_t v___x_1335_; lean_object* v___x_1336_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1334_);
lean_dec_ref_known(v___x_1333_, 1);
v___x_1335_ = 0;
lean_inc(v_fst_1317_);
lean_inc(v_a_1329_);
v___x_1336_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(v_a_1334_, v___x_1335_, v_a_1329_, v_fst_1317_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v_fst_1339_; lean_object* v_snd_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1336_, 1);
v___x_1387_ = lean_unsigned_to_nat(1u);
v___x_1388_ = lean_mk_empty_array_with_capacity(v___x_1387_);
lean_inc(v_fst_1313_);
v___x_1389_ = lean_array_push(v___x_1388_, v_fst_1313_);
v___x_1390_ = l_Lean_Meta_Sym_instantiateRevBetaS(v_fst_1317_, v___x_1389_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1390_) == 0)
{
uint8_t v___x_1391_; 
v___x_1391_ = lean_unbox(v_snd_1318_);
if (v___x_1391_ == 0)
{
lean_object* v_a_1392_; lean_object* v___x_1393_; 
v_a_1392_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1392_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1393_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_nm_1279_, v___x_1335_, v_eqn_1280_, v_a_1392_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___x_1393_, 1);
v___x_1395_ = lean_box(0);
v___x_1396_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1394_, v___x_1395_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc_n(v_a_1397_, 2);
lean_dec_ref_known(v___x_1396_, 1);
v_fst_1339_ = v_a_1397_;
v_snd_1340_ = v_a_1397_;
v___y_1341_ = v_a_1282_;
v___y_1342_ = v_a_1283_;
v___y_1343_ = v_a_1284_;
v___y_1344_ = v_a_1285_;
v___y_1345_ = v_a_1286_;
v___y_1346_ = v_a_1287_;
v___y_1347_ = v_a_1288_;
v___y_1348_ = v_a_1289_;
v___y_1349_ = v_a_1290_;
v___y_1350_ = v_a_1291_;
v___y_1351_ = v_a_1292_;
goto v___jp_1338_;
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
lean_dec(v_a_1337_);
lean_dec(v_a_1331_);
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec(v_goal_1278_);
v_a_1398_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v___x_1396_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1396_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_a_1398_);
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
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_a_1337_);
lean_dec(v_a_1331_);
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec(v_goal_1278_);
v_a_1406_ = lean_ctor_get(v___x_1393_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1393_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1393_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v_a_1414_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1414_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1415_ = lean_box(0);
v___x_1416_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1414_, v___x_1415_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1418_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
v___x_1418_ = l_Lean_Meta_Sym_shareCommon(v_a_1417_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1420_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc_n(v_a_1419_, 2);
lean_dec_ref_known(v___x_1418_, 1);
v___x_1420_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(v_nm_1279_, v___x_1335_, v_eqn_1280_, v_a_1419_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref_known(v___x_1420_, 1);
v_fst_1339_ = v_a_1419_;
v_snd_1340_ = v_a_1421_;
v___y_1341_ = v_a_1282_;
v___y_1342_ = v_a_1283_;
v___y_1343_ = v_a_1284_;
v___y_1344_ = v_a_1285_;
v___y_1345_ = v_a_1286_;
v___y_1346_ = v_a_1287_;
v___y_1347_ = v_a_1288_;
v___y_1348_ = v_a_1289_;
v___y_1349_ = v_a_1290_;
v___y_1350_ = v_a_1291_;
v___y_1351_ = v_a_1292_;
goto v___jp_1338_;
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec(v_a_1419_);
lean_dec(v_a_1337_);
lean_dec(v_a_1331_);
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec(v_goal_1278_);
v_a_1422_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1420_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1420_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_a_1337_);
lean_dec(v_a_1331_);
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v_a_1430_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1418_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1418_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec(v_a_1337_);
lean_dec(v_a_1331_);
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v_a_1438_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1416_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1416_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec(v_a_1337_);
lean_dec(v_a_1331_);
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v_a_1446_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1390_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1390_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
v___jp_1338_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3));
v___x_1353_ = lean_box(0);
if (v_isShared_1321_ == 0)
{
lean_ctor_set_tag(v___x_1320_, 1);
lean_ctor_set(v___x_1320_, 1, v___x_1353_);
lean_ctor_set(v___x_1320_, 0, v_a_1331_);
v___x_1355_ = v___x_1320_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1331_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v_toCold_1359_; lean_object* v_options_1360_; uint8_t v_hasTrace_1361_; 
v___x_1356_ = l_Lean_mkConst(v___x_1352_, v___x_1355_);
lean_inc(v_fst_1313_);
lean_inc(v_fst_1309_);
v___x_1357_ = l_Lean_mkApp5(v___x_1356_, v_a_1329_, v_fst_1309_, v_fst_1313_, v_a_1337_, v_snd_1340_);
v___x_1358_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(v_goal_1278_, v___x_1357_, v___y_1349_);
lean_dec_ref(v___x_1358_);
v_toCold_1359_ = lean_ctor_get(v___y_1350_, 0);
v_options_1360_ = lean_ctor_get(v_toCold_1359_, 2);
v_hasTrace_1361_ = lean_ctor_get_uint8(v_options_1360_, sizeof(void*)*1);
if (v_hasTrace_1361_ == 0)
{
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
v___y_1323_ = v_fst_1339_;
goto v___jp_1322_;
}
else
{
lean_object* v_inheritedTraceOptions_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; uint8_t v___x_1365_; 
v_inheritedTraceOptions_1362_ = lean_ctor_get(v_toCold_1359_, 11);
v___x_1363_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8));
v___x_1364_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11);
v___x_1365_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1362_, v_options_1360_, v___x_1364_);
if (v___x_1365_ == 0)
{
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
v___y_1323_ = v_fst_1339_;
goto v___jp_1322_;
}
else
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1369_; 
v___x_1366_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13);
v___x_1367_ = l_Lean_MessageData_ofExpr(v_fst_1309_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set_tag(v___x_1315_, 7);
lean_ctor_set(v___x_1315_, 1, v___x_1367_);
lean_ctor_set(v___x_1315_, 0, v___x_1366_);
v___x_1369_ = v___x_1315_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1366_);
lean_ctor_set(v_reuseFailAlloc_1385_, 1, v___x_1367_);
v___x_1369_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
lean_object* v___x_1370_; lean_object* v___x_1372_; 
v___x_1370_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15);
if (v_isShared_1312_ == 0)
{
lean_ctor_set_tag(v___x_1311_, 7);
lean_ctor_set(v___x_1311_, 1, v___x_1370_);
lean_ctor_set(v___x_1311_, 0, v___x_1369_);
v___x_1372_ = v___x_1311_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1369_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v___x_1370_);
v___x_1372_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1373_ = l_Lean_MessageData_ofExpr(v_fst_1313_);
v___x_1374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1372_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
v___x_1375_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(v___x_1363_, v___x_1374_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_dec_ref_known(v___x_1375_, 1);
v___y_1323_ = v_fst_1339_;
goto v___jp_1322_;
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
lean_dec_ref(v_fst_1339_);
lean_dec(v_snd_1318_);
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1375_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
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
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec(v_a_1331_);
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_dec(v_fst_1317_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v_a_1454_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1336_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1336_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_dec(v_a_1331_);
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_dec(v_fst_1317_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v_a_1462_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1333_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1333_);
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
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec(v_a_1329_);
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_dec(v_fst_1317_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v_a_1470_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1330_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1330_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
else
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_del_object(v___x_1320_);
lean_dec(v_snd_1318_);
lean_dec(v_fst_1317_);
lean_del_object(v___x_1315_);
lean_dec(v_fst_1313_);
lean_del_object(v___x_1311_);
lean_dec(v_fst_1309_);
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v_a_1478_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1328_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1328_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
v___jp_1322_:
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1324_ = l_Lean_Expr_mvarId_x21(v___y_1323_);
lean_dec_ref(v___y_1323_);
v___x_1325_ = lean_unbox(v_snd_1318_);
lean_dec(v_snd_1318_);
if (v___x_1325_ == 0)
{
uint8_t v___x_1326_; 
v___x_1326_ = 1;
v___y_1295_ = v___x_1324_;
v___y_1296_ = v___x_1326_;
goto v___jp_1294_;
}
else
{
uint8_t v___x_1327_; 
v___x_1327_ = 0;
v___y_1295_ = v___x_1324_;
v___y_1296_ = v___x_1327_;
goto v___jp_1294_;
}
}
}
}
}
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1493_; 
lean_dec(v_a_1302_);
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v___x_1491_ = lean_box(0);
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 0, v___x_1491_);
v___x_1493_ = v___x_1304_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec_ref(v_eqn_1280_);
lean_dec(v_nm_1279_);
lean_dec(v_goal_1278_);
v_a_1496_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1301_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1301_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
v___jp_1294_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1297_ = lean_box(v___y_1296_);
v___x_1298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___y_1295_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
v___x_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
return v___x_1300_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___boxed(lean_object* v_goal_1504_, lean_object* v_nm_1505_, lean_object* v_eqn_1506_, lean_object* v_G_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f(v_goal_1504_, v_nm_1505_, v_eqn_1506_, v_G_1507_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_);
lean_dec(v_a_1518_);
lean_dec_ref(v_a_1517_);
lean_dec(v_a_1516_);
lean_dec_ref(v_a_1515_);
lean_dec(v_a_1514_);
lean_dec_ref(v_a_1513_);
lean_dec(v_a_1512_);
lean_dec_ref(v_a_1511_);
lean_dec(v_a_1510_);
lean_dec(v_a_1509_);
lean_dec_ref(v_a_1508_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1(lean_object* v_cls_1521_, lean_object* v_msg_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(v_cls_1521_, v_msg_1522_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___boxed(lean_object* v_cls_1536_, lean_object* v_msg_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1(v_cls_1536_, v_msg_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0(lean_object* v_x_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v___x_1564_; 
lean_inc(v___y_1558_);
lean_inc_ref(v___y_1557_);
lean_inc(v___y_1556_);
lean_inc_ref(v___y_1555_);
lean_inc(v___y_1554_);
lean_inc(v___y_1553_);
lean_inc_ref(v___y_1552_);
v___x_1564_ = lean_apply_12(v_x_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, lean_box(0));
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0___boxed(lean_object* v_x_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0(v_x_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(lean_object* v_mvarId_1579_, lean_object* v_x_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v___f_1593_; lean_object* v___x_1594_; 
lean_inc(v___y_1587_);
lean_inc_ref(v___y_1586_);
lean_inc(v___y_1585_);
lean_inc_ref(v___y_1584_);
lean_inc(v___y_1583_);
lean_inc(v___y_1582_);
lean_inc_ref(v___y_1581_);
v___f_1593_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_1593_, 0, v_x_1580_);
lean_closure_set(v___f_1593_, 1, v___y_1581_);
lean_closure_set(v___f_1593_, 2, v___y_1582_);
lean_closure_set(v___f_1593_, 3, v___y_1583_);
lean_closure_set(v___f_1593_, 4, v___y_1584_);
lean_closure_set(v___f_1593_, 5, v___y_1585_);
lean_closure_set(v___f_1593_, 6, v___y_1586_);
lean_closure_set(v___f_1593_, 7, v___y_1587_);
v___x_1594_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1579_, v___f_1593_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
if (lean_obj_tag(v___x_1594_) == 0)
{
return v___x_1594_;
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1602_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1597_ = v___x_1594_;
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___x_1594_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___boxed(lean_object* v_mvarId_1603_, lean_object* v_x_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_mvarId_1603_, v_x_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
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
lean_dec_ref(v___y_1605_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0(lean_object* v_00_u03b1_1618_, lean_object* v_mvarId_1619_, lean_object* v_x_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v___x_1633_; 
v___x_1633_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_mvarId_1619_, v_x_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___boxed(lean_object* v_00_u03b1_1634_, lean_object* v_mvarId_1635_, lean_object* v_x_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0(v_00_u03b1_1634_, v_mvarId_1635_, v_x_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(lean_object* v___x_1650_, lean_object* v___f_1651_, lean_object* v_____r_1652_, lean_object* v_goal_1653_, lean_object* v_pending_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v___x_1667_; 
lean_inc(v___x_1650_);
v___x_1667_ = l_Lean_Elab_Tactic_VCGen_introsHygienicN(v_goal_1653_, v___x_1650_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v___x_1669_; 
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc_n(v_a_1668_, 2);
lean_dec_ref_known(v___x_1667_, 1);
v___x_1669_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_a_1668_, v___f_1651_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1694_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1672_ = v___x_1669_;
v_isShared_1673_ = v_isSharedCheck_1694_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1669_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1694_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___y_1675_; lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_LocalContext_lastDecl(v_a_1670_);
lean_dec(v_a_1670_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v___x_1684_; 
v___x_1684_ = lean_box(0);
v___y_1675_ = v___x_1684_;
goto v___jp_1674_;
}
else
{
lean_object* v_val_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1693_; 
v_val_1685_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1687_ = v___x_1683_;
v_isShared_1688_ = v_isSharedCheck_1693_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_val_1685_);
lean_dec(v___x_1683_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1693_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1689_; lean_object* v___x_1691_; 
v___x_1689_ = l_Lean_LocalDecl_fvarId(v_val_1685_);
lean_dec(v_val_1685_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v___x_1689_);
v___x_1691_ = v___x_1687_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1689_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
v___y_1675_ = v___x_1691_;
goto v___jp_1674_;
}
}
}
v___jp_1674_:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1676_ = lean_nat_sub(v_pending_1654_, v___x_1650_);
lean_dec(v___x_1650_);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
lean_ctor_set(v___x_1677_, 1, v___y_1675_);
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v_a_1668_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v___x_1679_);
v___x_1681_ = v___x_1672_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
else
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
lean_dec(v_a_1668_);
lean_dec(v___x_1650_);
v_a_1695_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1697_ = v___x_1669_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1669_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_a_1695_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_dec_ref(v___f_1651_);
lean_dec(v___x_1650_);
v_a_1703_ = lean_ctor_get(v___x_1667_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1667_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1667_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_1711_ = _args[0];
lean_object* v___f_1712_ = _args[1];
lean_object* v_____r_1713_ = _args[2];
lean_object* v_goal_1714_ = _args[3];
lean_object* v_pending_1715_ = _args[4];
lean_object* v___y_1716_ = _args[5];
lean_object* v___y_1717_ = _args[6];
lean_object* v___y_1718_ = _args[7];
lean_object* v___y_1719_ = _args[8];
lean_object* v___y_1720_ = _args[9];
lean_object* v___y_1721_ = _args[10];
lean_object* v___y_1722_ = _args[11];
lean_object* v___y_1723_ = _args[12];
lean_object* v___y_1724_ = _args[13];
lean_object* v___y_1725_ = _args[14];
lean_object* v___y_1726_ = _args[15];
lean_object* v___y_1727_ = _args[16];
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(v___x_1711_, v___f_1712_, v_____r_1713_, v_goal_1714_, v_pending_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v_pending_1715_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0(lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_lctx_1741_; lean_object* v___x_1742_; 
v_lctx_1741_ = lean_ctor_get(v___y_1736_, 2);
lean_inc_ref(v_lctx_1741_);
v___x_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1742_, 0, v_lctx_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0___boxed(lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0(v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_);
lean_dec(v___y_1753_);
lean_dec_ref(v___y_1752_);
lean_dec(v___y_1751_);
lean_dec_ref(v___y_1750_);
lean_dec(v___y_1749_);
lean_dec_ref(v___y_1748_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
return v_res_1755_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__1));
v___x_1759_ = l_Lean_stringToMessageData(v___x_1758_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(lean_object* v_a_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v___y_1774_; lean_object* v_snd_1794_; lean_object* v_fst_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1904_; 
v_snd_1794_ = lean_ctor_get(v_a_1760_, 1);
v_fst_1795_ = lean_ctor_get(v_a_1760_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v_a_1760_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1797_ = v_a_1760_;
v_isShared_1798_ = v_isSharedCheck_1904_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_snd_1794_);
lean_inc(v_fst_1795_);
lean_dec(v_a_1760_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1904_;
goto v_resetjp_1796_;
}
v___jp_1773_:
{
if (lean_obj_tag(v___y_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1785_; 
v_a_1775_ = lean_ctor_get(v___y_1774_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___y_1774_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1777_ = v___y_1774_;
v_isShared_1778_ = v_isSharedCheck_1785_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___y_1774_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1785_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
if (lean_obj_tag(v_a_1775_) == 0)
{
lean_object* v_a_1779_; lean_object* v___x_1781_; 
v_a_1779_ = lean_ctor_get(v_a_1775_, 0);
lean_inc(v_a_1779_);
lean_dec_ref_known(v_a_1775_, 1);
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 0, v_a_1779_);
v___x_1781_ = v___x_1777_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1779_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
else
{
lean_object* v_a_1783_; 
lean_del_object(v___x_1777_);
v_a_1783_ = lean_ctor_get(v_a_1775_, 0);
lean_inc(v_a_1783_);
lean_dec_ref_known(v_a_1775_, 1);
v_a_1760_ = v_a_1783_;
goto _start;
}
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
v_a_1786_ = lean_ctor_get(v___y_1774_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___y_1774_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1788_ = v___y_1774_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___y_1774_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1791_; 
if (v_isShared_1789_ == 0)
{
v___x_1791_ = v___x_1788_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1786_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
v_resetjp_1796_:
{
lean_object* v_fst_1799_; lean_object* v_snd_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1903_; 
v_fst_1799_ = lean_ctor_get(v_snd_1794_, 0);
v_snd_1800_ = lean_ctor_get(v_snd_1794_, 1);
v_isSharedCheck_1903_ = !lean_is_exclusive(v_snd_1794_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1802_ = v_snd_1794_;
v_isShared_1803_ = v_isSharedCheck_1903_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_snd_1800_);
lean_inc(v_fst_1799_);
lean_dec(v_snd_1794_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1903_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1804_; uint8_t v___x_1805_; 
v___x_1804_ = lean_unsigned_to_nat(0u);
v___x_1805_ = lean_nat_dec_lt(v___x_1804_, v_fst_1799_);
if (v___x_1805_ == 0)
{
lean_object* v___x_1807_; 
if (v_isShared_1803_ == 0)
{
v___x_1807_ = v___x_1802_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_fst_1799_);
lean_ctor_set(v_reuseFailAlloc_1812_, 1, v_snd_1800_);
v___x_1807_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1809_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 1, v___x_1807_);
v___x_1809_ = v___x_1797_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_fst_1795_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; 
v___x_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
return v___x_1810_;
}
}
}
else
{
lean_object* v___f_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___f_1813_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__0));
v___x_1814_ = lean_unsigned_to_nat(1u);
lean_inc(v_fst_1795_);
v___x_1815_ = l_Lean_MVarId_getType(v_fst_1795_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; 
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
lean_inc(v_a_1816_);
lean_dec_ref_known(v___x_1815_, 1);
if (lean_obj_tag(v_a_1816_) == 7)
{
lean_object* v_binderName_1817_; lean_object* v_binderType_1818_; lean_object* v_body_1819_; uint8_t v___x_1820_; 
v_binderName_1817_ = lean_ctor_get(v_a_1816_, 0);
lean_inc(v_binderName_1817_);
v_binderType_1818_ = lean_ctor_get(v_a_1816_, 1);
lean_inc_ref(v_binderType_1818_);
v_body_1819_ = lean_ctor_get(v_a_1816_, 2);
lean_inc_ref(v_body_1819_);
v___x_1820_ = l_Lean_Expr_hasLooseBVars(v_body_1819_);
if (v___x_1820_ == 0)
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
lean_inc_ref(v_body_1819_);
lean_inc_ref(v_binderType_1818_);
lean_inc(v_binderName_1817_);
lean_inc_n(v_fst_1795_, 2);
v___x_1821_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___boxed), 17, 5);
lean_closure_set(v___x_1821_, 0, v_fst_1795_);
lean_closure_set(v___x_1821_, 1, v_a_1816_);
lean_closure_set(v___x_1821_, 2, v_binderName_1817_);
lean_closure_set(v___x_1821_, 3, v_binderType_1818_);
lean_closure_set(v___x_1821_, 4, v_body_1819_);
v___x_1822_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_fst_1795_, v___x_1821_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_a_1823_);
lean_dec_ref_known(v___x_1822_, 1);
if (lean_obj_tag(v_a_1823_) == 1)
{
lean_object* v_val_1824_; lean_object* v___x_1825_; lean_object* v___x_1827_; 
lean_dec_ref(v_body_1819_);
lean_dec_ref(v_binderType_1818_);
lean_dec(v_binderName_1817_);
lean_dec(v_fst_1795_);
v_val_1824_ = lean_ctor_get(v_a_1823_, 0);
lean_inc(v_val_1824_);
lean_dec_ref_known(v_a_1823_, 1);
v___x_1825_ = lean_nat_add(v_fst_1799_, v___x_1814_);
lean_dec(v_fst_1799_);
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 0, v___x_1825_);
v___x_1827_ = v___x_1802_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v___x_1825_);
lean_ctor_set(v_reuseFailAlloc_1832_, 1, v_snd_1800_);
v___x_1827_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1829_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 1, v___x_1827_);
lean_ctor_set(v___x_1797_, 0, v_val_1824_);
v___x_1829_ = v___x_1797_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_val_1824_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v___x_1827_);
v___x_1829_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
v_a_1760_ = v___x_1829_;
goto _start;
}
}
}
else
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
lean_dec(v_a_1823_);
lean_del_object(v___x_1797_);
lean_inc_n(v_fst_1795_, 2);
v___x_1833_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___boxed), 16, 4);
lean_closure_set(v___x_1833_, 0, v_fst_1795_);
lean_closure_set(v___x_1833_, 1, v_binderName_1817_);
lean_closure_set(v___x_1833_, 2, v_binderType_1818_);
lean_closure_set(v___x_1833_, 3, v_body_1819_);
v___x_1834_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_fst_1795_, v___x_1833_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; 
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_a_1835_);
lean_dec_ref_known(v___x_1834_, 1);
if (lean_obj_tag(v_a_1835_) == 1)
{
lean_object* v_val_1836_; lean_object* v_snd_1837_; uint8_t v___x_1838_; 
lean_dec(v_fst_1795_);
v_val_1836_ = lean_ctor_get(v_a_1835_, 0);
lean_inc(v_val_1836_);
lean_dec_ref_known(v_a_1835_, 1);
v_snd_1837_ = lean_ctor_get(v_val_1836_, 1);
v___x_1838_ = lean_unbox(v_snd_1837_);
if (v___x_1838_ == 0)
{
lean_object* v_fst_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1851_; 
v_fst_1839_ = lean_ctor_get(v_val_1836_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_val_1836_);
if (v_isSharedCheck_1851_ == 0)
{
lean_object* v_unused_1852_; 
v_unused_1852_ = lean_ctor_get(v_val_1836_, 1);
lean_dec(v_unused_1852_);
v___x_1841_ = v_val_1836_;
v_isShared_1842_ = v_isSharedCheck_1851_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_fst_1839_);
lean_dec(v_val_1836_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1851_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; lean_object* v___x_1845_; 
v___x_1843_ = lean_nat_sub(v_fst_1799_, v___x_1814_);
lean_dec(v_fst_1799_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 1, v_snd_1800_);
lean_ctor_set(v___x_1841_, 0, v___x_1843_);
v___x_1845_ = v___x_1841_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1843_);
lean_ctor_set(v_reuseFailAlloc_1850_, 1, v_snd_1800_);
v___x_1845_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
lean_object* v___x_1847_; 
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 1, v___x_1845_);
lean_ctor_set(v___x_1802_, 0, v_fst_1839_);
v___x_1847_ = v___x_1802_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_fst_1839_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
v_a_1760_ = v___x_1847_;
goto _start;
}
}
}
}
else
{
lean_object* v_fst_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
lean_del_object(v___x_1802_);
lean_dec(v_snd_1800_);
v_fst_1853_ = lean_ctor_get(v_val_1836_, 0);
lean_inc(v_fst_1853_);
lean_dec(v_val_1836_);
v___x_1854_ = lean_box(0);
v___x_1855_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(v___x_1814_, v___f_1813_, v___x_1854_, v_fst_1853_, v_fst_1799_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
lean_dec(v_fst_1799_);
v___y_1774_ = v___x_1855_;
goto v___jp_1773_;
}
}
else
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
lean_dec(v_a_1835_);
lean_del_object(v___x_1802_);
lean_dec(v_snd_1800_);
v___x_1856_ = lean_box(0);
v___x_1857_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(v___x_1814_, v___f_1813_, v___x_1856_, v_fst_1795_, v_fst_1799_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
lean_dec(v_fst_1799_);
v___y_1774_ = v___x_1857_;
goto v___jp_1773_;
}
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
lean_del_object(v___x_1802_);
lean_dec(v_snd_1800_);
lean_dec(v_fst_1799_);
lean_dec(v_fst_1795_);
v_a_1858_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1834_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1834_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
lean_dec_ref(v_body_1819_);
lean_dec_ref(v_binderType_1818_);
lean_dec(v_binderName_1817_);
lean_del_object(v___x_1802_);
lean_dec(v_snd_1800_);
lean_dec(v_fst_1799_);
lean_del_object(v___x_1797_);
lean_dec(v_fst_1795_);
v_a_1866_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1822_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1822_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
else
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
lean_dec_ref(v_body_1819_);
lean_dec_ref(v_binderType_1818_);
lean_dec(v_binderName_1817_);
lean_dec_ref_known(v_a_1816_, 3);
lean_del_object(v___x_1802_);
lean_dec(v_snd_1800_);
lean_del_object(v___x_1797_);
v___x_1874_ = lean_box(0);
v___x_1875_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(v___x_1814_, v___f_1813_, v___x_1874_, v_fst_1795_, v_fst_1799_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
lean_dec(v_fst_1799_);
v___y_1774_ = v___x_1875_;
goto v___jp_1773_;
}
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
lean_dec(v_a_1816_);
v___x_1876_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2);
lean_inc(v_fst_1795_);
v___x_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1877_, 0, v_fst_1795_);
v___x_1878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1876_);
lean_ctor_set(v___x_1878_, 1, v___x_1877_);
v___x_1879_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v___x_1878_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v___x_1881_; 
lean_dec_ref_known(v___x_1879_, 1);
if (v_isShared_1803_ == 0)
{
v___x_1881_ = v___x_1802_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_fst_1799_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_snd_1800_);
v___x_1881_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
lean_object* v___x_1883_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 1, v___x_1881_);
v___x_1883_ = v___x_1797_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_fst_1795_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v___x_1881_);
v___x_1883_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
v_a_1760_ = v___x_1883_;
goto _start;
}
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
lean_del_object(v___x_1802_);
lean_dec(v_snd_1800_);
lean_dec(v_fst_1799_);
lean_del_object(v___x_1797_);
lean_dec(v_fst_1795_);
v_a_1887_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1879_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1879_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_del_object(v___x_1802_);
lean_dec(v_snd_1800_);
lean_dec(v_fst_1799_);
lean_del_object(v___x_1797_);
lean_dec(v_fst_1795_);
v_a_1895_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1815_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1815_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___boxed(lean_object* v_a_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(v_a_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
return v_res_1918_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_introPre___closed__1(void){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_introPre___closed__0));
v___x_1921_ = l_Lean_stringToMessageData(v___x_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_introPre(lean_object* v_rule_1925_, lean_object* v_goal_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_){
_start:
{
lean_object* v___y_1940_; lean_object* v___y_1941_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = lean_box(0);
lean_inc(v_goal_1926_);
v___x_1949_ = l_Lean_Elab_Tactic_VCGen_Lean_Meta_Sym_BackwardRule_applyChecked(v_rule_1925_, v_goal_1926_, v___x_1948_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_1949_) == 0)
{
lean_object* v_a_1950_; 
v_a_1950_ = lean_ctor_get(v___x_1949_, 0);
lean_inc(v_a_1950_);
lean_dec_ref_known(v___x_1949_, 1);
if (lean_obj_tag(v_a_1950_) == 1)
{
lean_object* v_mvarIds_1951_; 
v_mvarIds_1951_ = lean_ctor_get(v_a_1950_, 0);
lean_inc(v_mvarIds_1951_);
lean_dec_ref_known(v_a_1950_, 1);
if (lean_obj_tag(v_mvarIds_1951_) == 1)
{
lean_object* v_tail_1952_; 
v_tail_1952_ = lean_ctor_get(v_mvarIds_1951_, 1);
if (lean_obj_tag(v_tail_1952_) == 0)
{
lean_object* v_head_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1989_; 
lean_dec(v_goal_1926_);
v_head_1953_ = lean_ctor_get(v_mvarIds_1951_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v_mvarIds_1951_);
if (v_isSharedCheck_1989_ == 0)
{
lean_object* v_unused_1990_; 
v_unused_1990_ = lean_ctor_get(v_mvarIds_1951_, 1);
lean_dec(v_unused_1990_);
v___x_1955_ = v_mvarIds_1951_;
v_isShared_1956_ = v_isSharedCheck_1989_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_head_1953_);
lean_dec(v_mvarIds_1951_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1989_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; lean_object* v___x_1959_; 
v___x_1957_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_introPre___closed__2));
if (v_isShared_1956_ == 0)
{
lean_ctor_set_tag(v___x_1955_, 0);
lean_ctor_set(v___x_1955_, 1, v___x_1957_);
v___x_1959_ = v___x_1955_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_head_1953_);
lean_ctor_set(v_reuseFailAlloc_1988_, 1, v___x_1957_);
v___x_1959_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
lean_object* v___x_1960_; 
v___x_1960_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(v___x_1959_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1979_; 
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1963_ = v___x_1960_;
v_isShared_1964_ = v_isSharedCheck_1979_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1960_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1979_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v_snd_1965_; lean_object* v_fst_1966_; lean_object* v_snd_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1977_; 
v_snd_1965_ = lean_ctor_get(v_a_1961_, 1);
lean_inc(v_snd_1965_);
v_fst_1966_ = lean_ctor_get(v_a_1961_, 0);
lean_inc(v_fst_1966_);
lean_dec(v_a_1961_);
v_snd_1967_ = lean_ctor_get(v_snd_1965_, 1);
v_isSharedCheck_1977_ = !lean_is_exclusive(v_snd_1965_);
if (v_isSharedCheck_1977_ == 0)
{
lean_object* v_unused_1978_; 
v_unused_1978_ = lean_ctor_get(v_snd_1965_, 0);
lean_dec(v_unused_1978_);
v___x_1969_ = v_snd_1965_;
v_isShared_1970_ = v_isSharedCheck_1977_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_snd_1967_);
lean_dec(v_snd_1965_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1977_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 0, v_fst_1966_);
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_fst_1966_);
lean_ctor_set(v_reuseFailAlloc_1976_, 1, v_snd_1967_);
v___x_1972_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1974_; 
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v___x_1972_);
v___x_1974_ = v___x_1963_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v___x_1972_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
}
else
{
lean_object* v_a_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1987_; 
v_a_1980_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1982_ = v___x_1960_;
v_isShared_1983_ = v_isSharedCheck_1987_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_a_1980_);
lean_dec(v___x_1960_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1987_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1985_; 
if (v_isShared_1983_ == 0)
{
v___x_1985_ = v___x_1982_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v_a_1980_);
v___x_1985_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
return v___x_1985_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_mvarIds_1951_, 2);
v___y_1940_ = v_a_1934_;
v___y_1941_ = v_a_1935_;
v___y_1942_ = v_a_1936_;
v___y_1943_ = v_a_1937_;
goto v___jp_1939_;
}
}
else
{
lean_dec(v_mvarIds_1951_);
v___y_1940_ = v_a_1934_;
v___y_1941_ = v_a_1935_;
v___y_1942_ = v_a_1936_;
v___y_1943_ = v_a_1937_;
goto v___jp_1939_;
}
}
else
{
lean_dec(v_a_1950_);
v___y_1940_ = v_a_1934_;
v___y_1941_ = v_a_1935_;
v___y_1942_ = v_a_1936_;
v___y_1943_ = v_a_1937_;
goto v___jp_1939_;
}
}
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
lean_dec(v_goal_1926_);
v_a_1991_ = lean_ctor_get(v___x_1949_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1949_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1949_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1949_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
v___jp_1939_:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1944_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_introPre___closed__1, &l_Lean_Elab_Tactic_VCGen_introPre___closed__1_once, _init_l_Lean_Elab_Tactic_VCGen_introPre___closed__1);
v___x_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1945_, 0, v_goal_1926_);
v___x_1946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1944_);
lean_ctor_set(v___x_1946_, 1, v___x_1945_);
v___x_1947_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v___x_1946_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
return v___x_1947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_introPre___boxed(lean_object* v_rule_1999_, lean_object* v_goal_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_Lean_Elab_Tactic_VCGen_introPre(v_rule_1999_, v_goal_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
lean_dec(v_a_2011_);
lean_dec_ref(v_a_2010_);
lean_dec(v_a_2009_);
lean_dec_ref(v_a_2008_);
lean_dec(v_a_2007_);
lean_dec_ref(v_a_2006_);
lean_dec(v_a_2005_);
lean_dec_ref(v_a_2004_);
lean_dec(v_a_2003_);
lean_dec(v_a_2002_);
lean_dec_ref(v_a_2001_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1(lean_object* v_inst_2014_, lean_object* v_a_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(v_a_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___boxed(lean_object* v_inst_2029_, lean_object* v_a_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1(v_inst_2029_, v_a_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(lean_object* v_declName_2044_, lean_object* v_us_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2048_ = l_Lean_Expr_const___override(v_declName_2044_, v_us_2045_);
v___x_2049_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2048_, v___y_2046_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg___boxed(lean_object* v_declName_2050_, lean_object* v_us_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(v_declName_2050_, v_us_2051_, v___y_2052_);
lean_dec(v___y_2052_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0(lean_object* v_declName_2055_, lean_object* v_us_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(v_declName_2055_, v_us_2056_, v___y_2063_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___boxed(lean_object* v_declName_2070_, lean_object* v_us_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0(v_declName_2070_, v_us_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
lean_dec(v___y_2073_);
lean_dec_ref(v___y_2072_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(lean_object* v_f_2085_, lean_object* v_a_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
lean_object* v___y_2095_; lean_object* v___x_2098_; uint8_t v_debug_2099_; 
v___x_2098_ = lean_st_ref_get(v___y_2088_);
v_debug_2099_ = lean_ctor_get_uint8(v___x_2098_, sizeof(void*)*13);
lean_dec(v___x_2098_);
if (v_debug_2099_ == 0)
{
v___y_2095_ = v___y_2088_;
goto v___jp_2094_;
}
else
{
lean_object* v___x_2100_; 
v___x_2100_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_2085_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v___x_2101_; 
lean_dec_ref_known(v___x_2100_, 1);
v___x_2101_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_dec_ref_known(v___x_2101_, 1);
v___y_2095_ = v___y_2088_;
goto v___jp_2094_;
}
else
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2109_; 
lean_dec_ref(v_a_2086_);
lean_dec_ref(v_f_2085_);
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2104_ = v___x_2101_;
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2101_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_a_2102_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
lean_dec_ref(v_a_2086_);
lean_dec_ref(v_f_2085_);
v_a_2110_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2100_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2100_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
v___jp_2094_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = l_Lean_Expr_app___override(v_f_2085_, v_a_2086_);
v___x_2097_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2096_, v___y_2095_);
return v___x_2097_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_f_2118_, lean_object* v_a_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(v_f_2118_, v_a_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1(lean_object* v_args_2128_, lean_object* v_endIdx_2129_, lean_object* v_b_2130_, lean_object* v_i_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_){
_start:
{
uint8_t v___x_2144_; 
v___x_2144_ = lean_nat_dec_le(v_endIdx_2129_, v_i_2131_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2145_ = l_Lean_instInhabitedExpr;
v___x_2146_ = lean_array_get_borrowed(v___x_2145_, v_args_2128_, v_i_2131_);
lean_inc(v___x_2146_);
v___x_2147_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(v_b_2130_, v___x_2146_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
if (lean_obj_tag(v___x_2147_) == 0)
{
lean_object* v_a_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v_a_2148_ = lean_ctor_get(v___x_2147_, 0);
lean_inc(v_a_2148_);
lean_dec_ref_known(v___x_2147_, 1);
v___x_2149_ = lean_unsigned_to_nat(1u);
v___x_2150_ = lean_nat_add(v_i_2131_, v___x_2149_);
lean_dec(v_i_2131_);
v_b_2130_ = v_a_2148_;
v_i_2131_ = v___x_2150_;
goto _start;
}
else
{
lean_dec(v_i_2131_);
return v___x_2147_;
}
}
else
{
lean_object* v___x_2152_; 
lean_dec(v_i_2131_);
v___x_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2152_, 0, v_b_2130_);
return v___x_2152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1___boxed(lean_object* v_args_2153_, lean_object* v_endIdx_2154_, lean_object* v_b_2155_, lean_object* v_i_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
lean_object* v_res_2169_; 
v_res_2169_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1(v_args_2153_, v_endIdx_2154_, v_b_2155_, v_i_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec(v___y_2163_);
lean_dec_ref(v___y_2162_);
lean_dec(v___y_2161_);
lean_dec_ref(v___y_2160_);
lean_dec(v___y_2159_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec(v_endIdx_2154_);
lean_dec_ref(v_args_2153_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(lean_object* v_f_2170_, lean_object* v_args_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2184_ = lean_unsigned_to_nat(0u);
v___x_2185_ = lean_array_get_size(v_args_2171_);
v___x_2186_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1(v_args_2171_, v___x_2185_, v_f_2170_, v___x_2184_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1___boxed(lean_object* v_f_2187_, lean_object* v_args_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(v_f_2187_, v_args_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
lean_dec_ref(v_args_2188_);
return v_res_2201_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8(void){
_start:
{
lean_object* v___x_2220_; lean_object* v_dummy_2221_; 
v___x_2220_ = lean_box(0);
v_dummy_2221_ = l_Lean_Expr_sort___override(v___x_2220_);
return v_dummy_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2(lean_object* v_goal_2222_, lean_object* v_x_2223_, lean_object* v_x_2224_, lean_object* v_x_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
if (lean_obj_tag(v_x_2223_) == 5)
{
lean_object* v_fn_2238_; lean_object* v_arg_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v_fn_2238_ = lean_ctor_get(v_x_2223_, 0);
lean_inc_ref(v_fn_2238_);
v_arg_2239_ = lean_ctor_get(v_x_2223_, 1);
lean_inc_ref(v_arg_2239_);
lean_dec_ref_known(v_x_2223_, 2);
v___x_2240_ = lean_array_set(v_x_2224_, v_x_2225_, v_arg_2239_);
v___x_2241_ = lean_unsigned_to_nat(1u);
v___x_2242_ = lean_nat_sub(v_x_2225_, v___x_2241_);
lean_dec(v_x_2225_);
v_x_2223_ = v_fn_2238_;
v_x_2224_ = v___x_2240_;
v_x_2225_ = v___x_2242_;
goto _start;
}
else
{
lean_object* v___x_2244_; uint8_t v___x_2245_; 
lean_dec(v_x_2225_);
v___x_2244_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3));
v___x_2245_ = l_Lean_Expr_isConstOf(v_x_2223_, v___x_2244_);
if (v___x_2245_ == 0)
{
lean_object* v___x_2246_; lean_object* v___x_2247_; 
lean_dec_ref(v_x_2224_);
lean_dec_ref(v_x_2223_);
lean_dec(v_goal_2222_);
v___x_2246_ = lean_box(0);
v___x_2247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2246_);
return v___x_2247_;
}
else
{
lean_object* v___x_2248_; lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2248_ = lean_unsigned_to_nat(2u);
v___x_2249_ = lean_array_get_size(v_x_2224_);
v___x_2250_ = lean_nat_dec_lt(v___x_2248_, v___x_2249_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_dec_ref(v_x_2224_);
lean_dec_ref(v_x_2223_);
lean_dec(v_goal_2222_);
v___x_2251_ = lean_box(0);
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
return v___x_2252_;
}
else
{
lean_object* v___x_2253_; lean_object* v___x_2254_; uint8_t v___x_2255_; 
v___x_2253_ = lean_array_fget_borrowed(v_x_2224_, v___x_2248_);
v___x_2254_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5));
v___x_2255_ = l_Lean_Expr_isAppOf(v___x_2253_, v___x_2254_);
if (v___x_2255_ == 0)
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
lean_dec_ref(v_x_2224_);
lean_dec_ref(v_x_2223_);
lean_dec(v_goal_2222_);
v___x_2256_ = lean_box(0);
v___x_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
return v___x_2257_;
}
else
{
lean_object* v___x_2258_; uint8_t v___x_2259_; 
v___x_2258_ = lean_unsigned_to_nat(3u);
v___x_2259_ = lean_nat_dec_lt(v___x_2258_, v___x_2249_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; lean_object* v___x_2261_; 
lean_dec_ref(v_x_2224_);
lean_dec_ref(v_x_2223_);
lean_dec(v_goal_2222_);
v___x_2260_ = lean_box(0);
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
return v___x_2261_;
}
else
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2262_ = l_Lean_instInhabitedExpr;
v___x_2263_ = lean_array_fget_borrowed(v_x_2224_, v___x_2258_);
v___x_2264_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7));
v___x_2265_ = l_Lean_Expr_constLevels_x21(v_x_2223_);
lean_dec_ref(v_x_2223_);
v___x_2266_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(v___x_2264_, v___x_2265_, v___y_2232_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_a_2267_);
lean_dec_ref_known(v___x_2266_, 1);
v___x_2268_ = lean_unsigned_to_nat(0u);
v___x_2269_ = lean_array_get_borrowed(v___x_2262_, v_x_2224_, v___x_2268_);
v___x_2270_ = lean_unsigned_to_nat(1u);
v___x_2271_ = lean_array_get_borrowed(v___x_2262_, v_x_2224_, v___x_2270_);
v___x_2272_ = l_Lean_Expr_appArg_x21(v___x_2253_);
v___x_2273_ = lean_unsigned_to_nat(4u);
v___x_2274_ = lean_mk_empty_array_with_capacity(v___x_2273_);
lean_inc(v___x_2269_);
v___x_2275_ = lean_array_push(v___x_2274_, v___x_2269_);
lean_inc(v___x_2271_);
v___x_2276_ = lean_array_push(v___x_2275_, v___x_2271_);
v___x_2277_ = lean_array_push(v___x_2276_, v___x_2272_);
lean_inc(v___x_2263_);
v___x_2278_ = lean_array_push(v___x_2277_, v___x_2263_);
v___x_2279_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(v_a_2267_, v___x_2278_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
lean_dec_ref(v___x_2278_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2279_, 1);
v___x_2281_ = l_Array_extract___redArg(v_x_2224_, v___x_2273_, v___x_2249_);
lean_dec_ref(v_x_2224_);
v___x_2282_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(v_a_2280_, v___x_2281_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
lean_dec_ref(v___x_2281_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v___x_2284_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
lean_inc(v_goal_2222_);
v___x_2284_ = l_Lean_MVarId_getType(v_goal_2222_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2286_; lean_object* v_dummy_2287_; lean_object* v_nargs_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2284_, 1);
v___x_2286_ = l_Lean_Expr_getAppFn(v_a_2285_);
v_dummy_2287_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8);
v_nargs_2288_ = l_Lean_Expr_getAppNumArgs(v_a_2285_);
lean_inc(v_nargs_2288_);
v___x_2289_ = lean_mk_array(v_nargs_2288_, v_dummy_2287_);
v___x_2290_ = lean_nat_sub(v_nargs_2288_, v___x_2270_);
lean_dec(v_nargs_2288_);
v___x_2291_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2285_, v___x_2289_, v___x_2290_);
lean_inc(v_a_2283_);
v___x_2292_ = lean_array_set(v___x_2291_, v___x_2258_, v_a_2283_);
v___x_2293_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(v___x_2286_, v___x_2292_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
lean_dec_ref(v___x_2292_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2295_; 
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
lean_inc(v_a_2294_);
lean_dec_ref_known(v___x_2293_, 1);
v___x_2295_ = l_Lean_MVarId_replaceTargetDefEqFast(v_goal_2222_, v_a_2294_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2305_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2298_ = v___x_2295_;
v_isShared_2299_ = v_isSharedCheck_2305_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2295_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2305_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2303_; 
v___x_2300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2300_, 0, v_a_2296_);
lean_ctor_set(v___x_2300_, 1, v_a_2283_);
v___x_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 0, v___x_2301_);
v___x_2303_ = v___x_2298_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v___x_2301_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec(v_a_2283_);
v_a_2306_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2295_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2295_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_dec(v_a_2283_);
lean_dec(v_goal_2222_);
v_a_2314_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2293_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2293_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec(v_a_2283_);
lean_dec(v_goal_2222_);
v_a_2322_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2284_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2284_);
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
lean_dec(v_goal_2222_);
v_a_2330_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2282_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2282_);
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
else
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
lean_dec_ref(v_x_2224_);
lean_dec(v_goal_2222_);
v_a_2338_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2279_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2279_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2353_; 
lean_dec_ref(v_x_2224_);
lean_dec(v_goal_2222_);
v_a_2346_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2348_ = v___x_2266_;
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2266_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2351_; 
if (v_isShared_2349_ == 0)
{
v___x_2351_ = v___x_2348_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_a_2346_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
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
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___boxed(lean_object* v_goal_2354_, lean_object* v_x_2355_, lean_object* v_x_2356_, lean_object* v_x_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2(v_goal_2354_, v_x_2355_, v_x_2356_, v_x_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_);
lean_dec(v___y_2368_);
lean_dec_ref(v___y_2367_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
lean_dec(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec(v___y_2360_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f(lean_object* v_goal_2371_, lean_object* v_rhs_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_){
_start:
{
lean_object* v_dummy_2385_; lean_object* v_nargs_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v_dummy_2385_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8);
v_nargs_2386_ = l_Lean_Expr_getAppNumArgs(v_rhs_2372_);
lean_inc(v_nargs_2386_);
v___x_2387_ = lean_mk_array(v_nargs_2386_, v_dummy_2385_);
v___x_2388_ = lean_unsigned_to_nat(1u);
v___x_2389_ = lean_nat_sub(v_nargs_2386_, v___x_2388_);
lean_dec(v_nargs_2386_);
v___x_2390_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2(v_goal_2371_, v_rhs_2372_, v___x_2387_, v___x_2389_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f___boxed(lean_object* v_goal_2391_, lean_object* v_rhs_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f(v_goal_2391_, v_rhs_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_);
lean_dec(v_a_2403_);
lean_dec_ref(v_a_2402_);
lean_dec(v_a_2401_);
lean_dec_ref(v_a_2400_);
lean_dec(v_a_2399_);
lean_dec_ref(v_a_2398_);
lean_dec(v_a_2397_);
lean_dec_ref(v_a_2396_);
lean_dec(v_a_2395_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2(lean_object* v_f_2406_, lean_object* v_a_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v___x_2420_; 
v___x_2420_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(v_f_2406_, v_a_2407_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_f_2421_, lean_object* v_a_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2(v_f_2421_, v_a_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(lean_object* v_a_2436_, lean_object* v_x_2437_){
_start:
{
if (lean_obj_tag(v_x_2437_) == 0)
{
lean_object* v___x_2438_; 
v___x_2438_ = lean_box(0);
return v___x_2438_;
}
else
{
lean_object* v_key_2439_; lean_object* v_value_2440_; lean_object* v_tail_2441_; uint8_t v___x_2442_; 
v_key_2439_ = lean_ctor_get(v_x_2437_, 0);
v_value_2440_ = lean_ctor_get(v_x_2437_, 1);
v_tail_2441_ = lean_ctor_get(v_x_2437_, 2);
v___x_2442_ = lean_name_eq(v_key_2439_, v_a_2436_);
if (v___x_2442_ == 0)
{
v_x_2437_ = v_tail_2441_;
goto _start;
}
else
{
lean_object* v___x_2444_; 
lean_inc(v_value_2440_);
v___x_2444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2444_, 0, v_value_2440_);
return v___x_2444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_2445_, lean_object* v_x_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(v_a_2445_, v_x_2446_);
lean_dec(v_x_2446_);
lean_dec(v_a_2445_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(lean_object* v_m_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v_buckets_2450_; lean_object* v___x_2451_; uint64_t v___y_2453_; 
v_buckets_2450_ = lean_ctor_get(v_m_2448_, 1);
v___x_2451_ = lean_array_get_size(v_buckets_2450_);
if (lean_obj_tag(v_a_2449_) == 0)
{
uint64_t v___x_2467_; 
v___x_2467_ = 1723ULL;
v___y_2453_ = v___x_2467_;
goto v___jp_2452_;
}
else
{
uint64_t v_hash_2468_; 
v_hash_2468_ = lean_ctor_get_uint64(v_a_2449_, sizeof(void*)*2);
v___y_2453_ = v_hash_2468_;
goto v___jp_2452_;
}
v___jp_2452_:
{
uint64_t v___x_2454_; uint64_t v___x_2455_; uint64_t v_fold_2456_; uint64_t v___x_2457_; uint64_t v___x_2458_; uint64_t v___x_2459_; size_t v___x_2460_; size_t v___x_2461_; size_t v___x_2462_; size_t v___x_2463_; size_t v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2454_ = 32ULL;
v___x_2455_ = lean_uint64_shift_right(v___y_2453_, v___x_2454_);
v_fold_2456_ = lean_uint64_xor(v___y_2453_, v___x_2455_);
v___x_2457_ = 16ULL;
v___x_2458_ = lean_uint64_shift_right(v_fold_2456_, v___x_2457_);
v___x_2459_ = lean_uint64_xor(v_fold_2456_, v___x_2458_);
v___x_2460_ = lean_uint64_to_usize(v___x_2459_);
v___x_2461_ = lean_usize_of_nat(v___x_2451_);
v___x_2462_ = ((size_t)1ULL);
v___x_2463_ = lean_usize_sub(v___x_2461_, v___x_2462_);
v___x_2464_ = lean_usize_land(v___x_2460_, v___x_2463_);
v___x_2465_ = lean_array_uget_borrowed(v_buckets_2450_, v___x_2464_);
v___x_2466_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(v_a_2449_, v___x_2465_);
return v___x_2466_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg___boxed(lean_object* v_m_2469_, lean_object* v_a_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(v_m_2469_, v_a_2470_);
lean_dec(v_a_2470_);
lean_dec_ref(v_m_2469_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f(lean_object* v_goal_2472_, lean_object* v_rhs_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_){
_start:
{
lean_object* v___x_2486_; 
lean_inc_ref(v_rhs_2473_);
lean_inc(v_goal_2472_);
v___x_2486_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f(v_goal_2472_, v_rhs_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2557_; 
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2486_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2489_ = v___x_2486_;
v_isShared_2490_ = v_isSharedCheck_2557_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v___x_2486_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2557_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v_fst_2492_; lean_object* v_snd_2493_; 
if (lean_obj_tag(v_a_2487_) == 0)
{
v_fst_2492_ = v_goal_2472_;
v_snd_2493_ = v_rhs_2473_;
goto v___jp_2491_;
}
else
{
lean_object* v_val_2554_; lean_object* v_fst_2555_; lean_object* v_snd_2556_; 
lean_dec_ref(v_rhs_2473_);
lean_dec(v_goal_2472_);
v_val_2554_ = lean_ctor_get(v_a_2487_, 0);
lean_inc(v_val_2554_);
lean_dec_ref_known(v_a_2487_, 1);
v_fst_2555_ = lean_ctor_get(v_val_2554_, 0);
lean_inc(v_fst_2555_);
v_snd_2556_ = lean_ctor_get(v_val_2554_, 1);
lean_inc(v_snd_2556_);
lean_dec(v_val_2554_);
v_fst_2492_ = v_fst_2555_;
v_snd_2493_ = v_snd_2556_;
goto v___jp_2491_;
}
v___jp_2491_:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2494_ = l_Lean_Expr_getAppFn(v_snd_2493_);
v___x_2495_ = l_Lean_Expr_constName_x3f(v___x_2494_);
lean_dec_ref(v___x_2494_);
if (lean_obj_tag(v___x_2495_) == 1)
{
lean_object* v_val_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v_val_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_val_2496_);
lean_dec_ref_known(v___x_2495_, 1);
v___x_2497_ = l_Lean_Elab_Tactic_VCGen_latticeOps;
v___x_2498_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(v___x_2497_, v_val_2496_);
lean_dec(v_val_2496_);
if (lean_obj_tag(v___x_2498_) == 1)
{
lean_object* v_val_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2545_; 
v_val_2499_ = lean_ctor_get(v___x_2498_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2501_ = v___x_2498_;
v_isShared_2502_ = v_isSharedCheck_2545_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_val_2499_);
lean_dec(v___x_2498_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2545_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v_applies_x3f_2503_; lean_object* v___x_2504_; uint8_t v___x_2505_; 
v_applies_x3f_2503_ = lean_ctor_get(v_val_2499_, 4);
lean_inc_ref(v_applies_x3f_2503_);
lean_inc_ref(v_snd_2493_);
v___x_2504_ = lean_apply_1(v_applies_x3f_2503_, v_snd_2493_);
v___x_2505_ = lean_unbox(v___x_2504_);
if (v___x_2505_ == 0)
{
lean_object* v___x_2506_; lean_object* v___x_2508_; 
lean_del_object(v___x_2501_);
lean_dec(v_val_2499_);
lean_dec_ref(v_snd_2493_);
lean_dec(v_fst_2492_);
v___x_2506_ = lean_box(0);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v___x_2506_);
v___x_2508_ = v___x_2489_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v___x_2506_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
else
{
lean_object* v___x_2510_; 
lean_del_object(v___x_2489_);
v___x_2510_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(v_snd_2493_, v_val_2499_, v_a_2475_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2512_ = lean_box(0);
v___x_2513_ = l_Lean_Elab_Tactic_VCGen_Lean_Meta_Sym_BackwardRule_applyChecked(v_a_2511_, v_fst_2492_, v___x_2512_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2528_; 
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2516_ = v___x_2513_;
v_isShared_2517_ = v_isSharedCheck_2528_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2513_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2528_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
if (lean_obj_tag(v_a_2514_) == 0)
{
lean_object* v___x_2519_; 
lean_del_object(v___x_2501_);
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 0, v___x_2512_);
v___x_2519_ = v___x_2516_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v___x_2512_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
else
{
lean_object* v_mvarIds_2521_; lean_object* v___x_2523_; 
v_mvarIds_2521_ = lean_ctor_get(v_a_2514_, 0);
lean_inc(v_mvarIds_2521_);
lean_dec_ref_known(v_a_2514_, 1);
if (v_isShared_2502_ == 0)
{
lean_ctor_set(v___x_2501_, 0, v_mvarIds_2521_);
v___x_2523_ = v___x_2501_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_mvarIds_2521_);
v___x_2523_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
lean_object* v___x_2525_; 
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 0, v___x_2523_);
v___x_2525_ = v___x_2516_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
}
else
{
lean_object* v_a_2529_; lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2536_; 
lean_del_object(v___x_2501_);
v_a_2529_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_2536_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2536_ == 0)
{
v___x_2531_ = v___x_2513_;
v_isShared_2532_ = v_isSharedCheck_2536_;
goto v_resetjp_2530_;
}
else
{
lean_inc(v_a_2529_);
lean_dec(v___x_2513_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2536_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2534_; 
if (v_isShared_2532_ == 0)
{
v___x_2534_ = v___x_2531_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v_a_2529_);
v___x_2534_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
return v___x_2534_;
}
}
}
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2544_; 
lean_del_object(v___x_2501_);
lean_dec(v_fst_2492_);
v_a_2537_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2539_ = v___x_2510_;
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_a_2537_);
lean_dec(v___x_2510_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2542_; 
if (v_isShared_2540_ == 0)
{
v___x_2542_ = v___x_2539_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_a_2537_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
}
}
else
{
lean_object* v___x_2546_; lean_object* v___x_2548_; 
lean_dec(v___x_2498_);
lean_dec_ref(v_snd_2493_);
lean_dec(v_fst_2492_);
v___x_2546_ = lean_box(0);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v___x_2546_);
v___x_2548_ = v___x_2489_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v___x_2546_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
else
{
lean_object* v___x_2550_; lean_object* v___x_2552_; 
lean_dec(v___x_2495_);
lean_dec_ref(v_snd_2493_);
lean_dec(v_fst_2492_);
v___x_2550_ = lean_box(0);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v___x_2550_);
v___x_2552_ = v___x_2489_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v___x_2550_);
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
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
lean_dec_ref(v_rhs_2473_);
lean_dec(v_goal_2472_);
v_a_2558_ = lean_ctor_get(v___x_2486_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2486_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2486_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2486_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f___boxed(lean_object* v_goal_2566_, lean_object* v_rhs_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f(v_goal_2566_, v_rhs_2567_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_);
lean_dec(v_a_2578_);
lean_dec_ref(v_a_2577_);
lean_dec(v_a_2576_);
lean_dec_ref(v_a_2575_);
lean_dec(v_a_2574_);
lean_dec_ref(v_a_2573_);
lean_dec(v_a_2572_);
lean_dec_ref(v_a_2571_);
lean_dec(v_a_2570_);
lean_dec(v_a_2569_);
lean_dec_ref(v_a_2568_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0(lean_object* v_00_u03b2_2581_, lean_object* v_m_2582_, lean_object* v_a_2583_){
_start:
{
lean_object* v___x_2584_; 
v___x_2584_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(v_m_2582_, v_a_2583_);
return v___x_2584_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___boxed(lean_object* v_00_u03b2_2585_, lean_object* v_m_2586_, lean_object* v_a_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0(v_00_u03b2_2585_, v_m_2586_, v_a_2587_);
lean_dec(v_a_2587_);
lean_dec_ref(v_m_2586_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0(lean_object* v_00_u03b2_2589_, lean_object* v_a_2590_, lean_object* v_x_2591_){
_start:
{
lean_object* v___x_2592_; 
v___x_2592_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(v_a_2590_, v_x_2591_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2593_, lean_object* v_a_2594_, lean_object* v_x_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0(v_00_u03b2_2593_, v_a_2594_, v_x_2595_);
lean_dec(v_x_2595_);
lean_dec(v_a_2594_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitForallLe_x3f(lean_object* v_goal_2597_, lean_object* v_rhs_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_){
_start:
{
uint8_t v___x_2611_; 
v___x_2611_ = l_Lean_Expr_isForall(v_rhs_2598_);
if (v___x_2611_ == 0)
{
lean_object* v___x_2612_; lean_object* v___x_2613_; 
lean_dec(v_goal_2597_);
v___x_2612_ = lean_box(0);
v___x_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2612_);
return v___x_2613_;
}
else
{
lean_object* v_backwardRules_2614_; lean_object* v_forallIntro_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v_backwardRules_2614_ = lean_ctor_get(v_a_2599_, 0);
v_forallIntro_2615_ = lean_ctor_get(v_backwardRules_2614_, 11);
v___x_2616_ = lean_box(0);
lean_inc_ref(v_forallIntro_2615_);
v___x_2617_ = l_Lean_Elab_Tactic_VCGen_Lean_Meta_Sym_BackwardRule_applyChecked(v_forallIntro_2615_, v_goal_2597_, v___x_2616_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_, v_a_2609_);
if (lean_obj_tag(v___x_2617_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2636_; 
v_a_2618_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2620_ = v___x_2617_;
v_isShared_2621_ = v_isSharedCheck_2636_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_dec(v___x_2617_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2636_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
if (lean_obj_tag(v_a_2618_) == 0)
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 0, v___x_2616_);
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v___x_2616_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
else
{
lean_object* v_mvarIds_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2635_; 
v_mvarIds_2625_ = lean_ctor_get(v_a_2618_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v_a_2618_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2627_ = v_a_2618_;
v_isShared_2628_ = v_isSharedCheck_2635_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_mvarIds_2625_);
lean_dec(v_a_2618_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2635_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_mvarIds_2625_);
v___x_2630_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
lean_object* v___x_2632_; 
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 0, v___x_2630_);
v___x_2632_ = v___x_2620_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2630_);
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
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
v_a_2637_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2639_ = v___x_2617_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2617_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v_a_2637_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitForallLe_x3f___boxed(lean_object* v_goal_2645_, lean_object* v_rhs_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lean_Elab_Tactic_VCGen_splitForallLe_x3f(v_goal_2645_, v_rhs_2646_, v_a_2647_, v_a_2648_, v_a_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_, v_a_2655_, v_a_2656_, v_a_2657_);
lean_dec(v_a_2657_);
lean_dec_ref(v_a_2656_);
lean_dec(v_a_2655_);
lean_dec_ref(v_a_2654_);
lean_dec(v_a_2653_);
lean_dec_ref(v_a_2652_);
lean_dec(v_a_2651_);
lean_dec_ref(v_a_2650_);
lean_dec(v_a_2649_);
lean_dec(v_a_2648_);
lean_dec_ref(v_a_2647_);
lean_dec_ref(v_rhs_2646_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0(lean_object* v_as_2684_, size_t v_sz_2685_, size_t v_i_2686_, lean_object* v_b_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
uint8_t v___x_2695_; 
v___x_2695_ = lean_usize_dec_lt(v_i_2686_, v_sz_2685_);
if (v___x_2695_ == 0)
{
lean_object* v___x_2696_; 
v___x_2696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2696_, 0, v_b_2687_);
return v___x_2696_;
}
else
{
lean_object* v_snd_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2881_; 
v_snd_2697_ = lean_ctor_get(v_b_2687_, 1);
v_isSharedCheck_2881_ = !lean_is_exclusive(v_b_2687_);
if (v_isSharedCheck_2881_ == 0)
{
lean_object* v_unused_2882_; 
v_unused_2882_ = lean_ctor_get(v_b_2687_, 0);
lean_dec(v_unused_2882_);
v___x_2699_ = v_b_2687_;
v_isShared_2700_ = v_isSharedCheck_2881_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_snd_2697_);
lean_dec(v_b_2687_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2881_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v_snd_2701_; lean_object* v_snd_2702_; lean_object* v_snd_2703_; lean_object* v_fst_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2879_; 
v_snd_2701_ = lean_ctor_get(v_snd_2697_, 1);
lean_inc(v_snd_2701_);
v_snd_2702_ = lean_ctor_get(v_snd_2701_, 1);
lean_inc(v_snd_2702_);
v_snd_2703_ = lean_ctor_get(v_snd_2702_, 1);
lean_inc(v_snd_2703_);
v_fst_2704_ = lean_ctor_get(v_snd_2697_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v_snd_2697_);
if (v_isSharedCheck_2879_ == 0)
{
lean_object* v_unused_2880_; 
v_unused_2880_ = lean_ctor_get(v_snd_2697_, 1);
lean_dec(v_unused_2880_);
v___x_2706_ = v_snd_2697_;
v_isShared_2707_ = v_isSharedCheck_2879_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_fst_2704_);
lean_dec(v_snd_2697_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2879_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v_fst_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2877_; 
v_fst_2708_ = lean_ctor_get(v_snd_2701_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v_snd_2701_);
if (v_isSharedCheck_2877_ == 0)
{
lean_object* v_unused_2878_; 
v_unused_2878_ = lean_ctor_get(v_snd_2701_, 1);
lean_dec(v_unused_2878_);
v___x_2710_ = v_snd_2701_;
v_isShared_2711_ = v_isSharedCheck_2877_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_fst_2708_);
lean_dec(v_snd_2701_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2877_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v_fst_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2875_; 
v_fst_2712_ = lean_ctor_get(v_snd_2702_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v_snd_2702_);
if (v_isSharedCheck_2875_ == 0)
{
lean_object* v_unused_2876_; 
v_unused_2876_ = lean_ctor_get(v_snd_2702_, 1);
lean_dec(v_unused_2876_);
v___x_2714_ = v_snd_2702_;
v_isShared_2715_ = v_isSharedCheck_2875_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_fst_2712_);
lean_dec(v_snd_2702_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2875_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v_fst_2716_; lean_object* v_snd_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2874_; 
v_fst_2716_ = lean_ctor_get(v_snd_2703_, 0);
v_snd_2717_ = lean_ctor_get(v_snd_2703_, 1);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_snd_2703_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2719_ = v_snd_2703_;
v_isShared_2720_ = v_isSharedCheck_2874_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_snd_2717_);
lean_inc(v_fst_2716_);
lean_dec(v_snd_2703_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2874_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v_a_2741_; lean_object* v___x_2742_; 
v___x_2739_ = lean_box(0);
v___x_2740_ = lean_box(0);
v_a_2741_ = lean_array_uget_borrowed(v_as_2684_, v_i_2686_);
lean_inc(v_fst_2716_);
v___x_2742_ = l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS(v_fst_2716_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2865_; 
v_a_2743_ = lean_ctor_get(v___x_2742_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2745_ = v___x_2742_;
v_isShared_2746_ = v_isSharedCheck_2865_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2742_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2865_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
if (lean_obj_tag(v_a_2743_) == 7)
{
lean_object* v_binderType_2747_; lean_object* v_body_2748_; uint8_t v___x_2749_; 
v_binderType_2747_ = lean_ctor_get(v_a_2743_, 1);
lean_inc_ref(v_binderType_2747_);
v_body_2748_ = lean_ctor_get(v_a_2743_, 2);
lean_inc_ref(v_body_2748_);
lean_dec_ref_known(v_a_2743_, 3);
v___x_2749_ = l_Lean_Expr_hasLooseBVars(v_body_2748_);
if (v___x_2749_ == 0)
{
lean_object* v___x_2750_; uint8_t v___x_2751_; 
v___x_2750_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2));
v___x_2751_ = l_Lean_Expr_isAppOf(v_snd_2717_, v___x_2750_);
if (v___x_2751_ == 0)
{
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
lean_del_object(v___x_2745_);
goto v___jp_2721_;
}
else
{
lean_object* v___x_2752_; 
lean_del_object(v___x_2719_);
lean_del_object(v___x_2714_);
lean_del_object(v___x_2710_);
lean_del_object(v___x_2706_);
lean_del_object(v___x_2699_);
v___x_2752_ = l_Lean_Expr_appArg_x21(v_snd_2717_);
if (lean_obj_tag(v___x_2752_) == 6)
{
lean_object* v_body_2753_; lean_object* v___x_2754_; 
lean_del_object(v___x_2745_);
v_body_2753_ = lean_ctor_get(v___x_2752_, 2);
lean_inc_ref(v_body_2753_);
lean_dec_ref_known(v___x_2752_, 3);
lean_inc_ref(v_binderType_2747_);
v___x_2754_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_2747_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2756_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2754_, 1);
lean_inc_ref(v_body_2748_);
v___x_2756_ = l_Lean_Meta_Sym_getLevel___redArg(v_body_2748_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_object* v_a_2757_; lean_object* v___x_2758_; 
v_a_2757_ = lean_ctor_get(v___x_2756_, 0);
lean_inc(v_a_2757_);
lean_dec_ref_known(v___x_2756_, 1);
lean_inc(v_a_2755_);
v___x_2758_ = l_Lean_Meta_decLevel(v_a_2755_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_object* v_a_2759_; lean_object* v___x_2760_; 
v_a_2759_ = lean_ctor_get(v___x_2758_, 0);
lean_inc(v_a_2759_);
lean_dec_ref_known(v___x_2758_, 1);
lean_inc(v_a_2757_);
v___x_2760_ = l_Lean_Meta_decLevel(v_a_2757_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
lean_inc(v_a_2761_);
lean_dec_ref_known(v___x_2760_, 1);
v___x_2762_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4));
v___x_2763_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2763_, 0, v_a_2761_);
lean_ctor_set(v___x_2763_, 1, v___x_2739_);
v___x_2764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2764_, 0, v_a_2759_);
lean_ctor_set(v___x_2764_, 1, v___x_2763_);
v___x_2765_ = l_Lean_mkConst(v___x_2762_, v___x_2764_);
lean_inc(v_a_2741_);
lean_inc_ref(v_body_2753_);
lean_inc_ref(v_body_2748_);
lean_inc_ref(v_binderType_2747_);
v___x_2766_ = l_Lean_mkApp4(v___x_2765_, v_binderType_2747_, v_body_2748_, v_body_2753_, v_a_2741_);
lean_inc_ref(v___x_2766_);
v___x_2767_ = l_Lean_Meta_Sym_inferType(v___x_2766_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v_a_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2806_; 
v_a_2768_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2770_ = v___x_2767_;
v_isShared_2771_ = v_isSharedCheck_2806_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_a_2768_);
lean_dec(v___x_2767_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2806_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; uint8_t v___x_2774_; 
v___x_2772_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__1));
v___x_2773_ = lean_unsigned_to_nat(3u);
v___x_2774_ = l_Lean_Expr_isAppOfArity(v_a_2768_, v___x_2772_, v___x_2773_);
if (v___x_2774_ == 0)
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2782_; 
lean_dec(v_a_2768_);
lean_dec_ref(v___x_2766_);
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec_ref(v_body_2753_);
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
v___x_2775_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5));
v___x_2776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2776_, 0, v_fst_2716_);
lean_ctor_set(v___x_2776_, 1, v_snd_2717_);
v___x_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2777_, 0, v_fst_2712_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
v___x_2778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2778_, 0, v_fst_2708_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
v___x_2779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2779_, 0, v_fst_2704_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
v___x_2780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2775_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 0, v___x_2780_);
v___x_2782_ = v___x_2770_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
else
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; uint8_t v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; size_t v___x_2803_; size_t v___x_2804_; 
lean_del_object(v___x_2770_);
lean_dec(v_snd_2717_);
lean_dec(v_fst_2716_);
v___x_2784_ = l_Lean_Expr_appArg_x21(v_a_2768_);
lean_dec(v_a_2768_);
v___x_2785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__7));
v___x_2786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2786_, 0, v_a_2757_);
lean_ctor_set(v___x_2786_, 1, v___x_2739_);
lean_inc_ref(v___x_2786_);
v___x_2787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2787_, 0, v_a_2755_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
v___x_2788_ = l_Lean_mkConst(v___x_2785_, v___x_2787_);
v___x_2789_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__9));
v___x_2790_ = 0;
lean_inc_ref_n(v_body_2748_, 2);
lean_inc_ref(v_binderType_2747_);
v___x_2791_ = l_Lean_Expr_lam___override(v___x_2789_, v_binderType_2747_, v_body_2748_, v___x_2790_);
lean_inc_n(v_a_2741_, 3);
lean_inc(v_fst_2712_);
lean_inc(v_fst_2708_);
v___x_2792_ = l_Lean_mkApp6(v___x_2788_, v_binderType_2747_, v___x_2791_, v_fst_2708_, v_fst_2712_, v_fst_2704_, v_a_2741_);
v___x_2793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__11));
v___x_2794_ = l_Lean_mkConst(v___x_2793_, v___x_2786_);
v___x_2795_ = l_Lean_Expr_app___override(v_fst_2708_, v_a_2741_);
v___x_2796_ = l_Lean_Expr_app___override(v_fst_2712_, v_a_2741_);
lean_inc_ref(v___x_2784_);
lean_inc_ref(v___x_2795_);
v___x_2797_ = l_Lean_mkApp6(v___x_2794_, v_body_2748_, v___x_2795_, v___x_2796_, v___x_2784_, v___x_2792_, v___x_2766_);
v___x_2798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2798_, 0, v_body_2748_);
lean_ctor_set(v___x_2798_, 1, v_body_2753_);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2784_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
v___x_2800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2800_, 0, v___x_2795_);
lean_ctor_set(v___x_2800_, 1, v___x_2799_);
v___x_2801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2797_);
lean_ctor_set(v___x_2801_, 1, v___x_2800_);
v___x_2802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2740_);
lean_ctor_set(v___x_2802_, 1, v___x_2801_);
v___x_2803_ = ((size_t)1ULL);
v___x_2804_ = lean_usize_add(v_i_2686_, v___x_2803_);
v_i_2686_ = v___x_2804_;
v_b_2687_ = v___x_2802_;
goto _start;
}
}
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
lean_dec_ref(v___x_2766_);
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec_ref(v_body_2753_);
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
lean_dec(v_snd_2717_);
lean_dec(v_fst_2716_);
lean_dec(v_fst_2712_);
lean_dec(v_fst_2708_);
lean_dec(v_fst_2704_);
v_a_2807_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2767_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2767_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
else
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
lean_dec(v_a_2759_);
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec_ref(v_body_2753_);
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
lean_dec(v_snd_2717_);
lean_dec(v_fst_2716_);
lean_dec(v_fst_2712_);
lean_dec(v_fst_2708_);
lean_dec(v_fst_2704_);
v_a_2815_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v___x_2760_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2760_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
else
{
lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec_ref(v_body_2753_);
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
lean_dec(v_snd_2717_);
lean_dec(v_fst_2716_);
lean_dec(v_fst_2712_);
lean_dec(v_fst_2708_);
lean_dec(v_fst_2704_);
v_a_2823_ = lean_ctor_get(v___x_2758_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v___x_2758_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v___x_2758_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
else
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
lean_dec(v_a_2755_);
lean_dec_ref(v_body_2753_);
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
lean_dec(v_snd_2717_);
lean_dec(v_fst_2716_);
lean_dec(v_fst_2712_);
lean_dec(v_fst_2708_);
lean_dec(v_fst_2704_);
v_a_2831_ = lean_ctor_get(v___x_2756_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v___x_2756_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___x_2756_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
}
else
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2846_; 
lean_dec_ref(v_body_2753_);
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
lean_dec(v_snd_2717_);
lean_dec(v_fst_2716_);
lean_dec(v_fst_2712_);
lean_dec(v_fst_2708_);
lean_dec(v_fst_2704_);
v_a_2839_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2841_ = v___x_2754_;
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2754_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2844_; 
if (v_isShared_2842_ == 0)
{
v___x_2844_ = v___x_2841_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v_a_2839_);
v___x_2844_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
return v___x_2844_;
}
}
}
}
else
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; 
lean_dec_ref(v___x_2752_);
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
v___x_2847_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5));
v___x_2848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2848_, 0, v_fst_2716_);
lean_ctor_set(v___x_2848_, 1, v_snd_2717_);
v___x_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2849_, 0, v_fst_2712_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
v___x_2850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2850_, 0, v_fst_2708_);
lean_ctor_set(v___x_2850_, 1, v___x_2849_);
v___x_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2851_, 0, v_fst_2704_);
lean_ctor_set(v___x_2851_, 1, v___x_2850_);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2847_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 0, v___x_2852_);
v___x_2854_ = v___x_2745_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
else
{
lean_dec_ref(v_body_2748_);
lean_dec_ref(v_binderType_2747_);
lean_del_object(v___x_2745_);
goto v___jp_2721_;
}
}
else
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2863_; 
lean_dec(v_a_2743_);
lean_del_object(v___x_2719_);
lean_del_object(v___x_2714_);
lean_del_object(v___x_2710_);
lean_del_object(v___x_2706_);
lean_del_object(v___x_2699_);
v___x_2856_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5));
v___x_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2857_, 0, v_fst_2716_);
lean_ctor_set(v___x_2857_, 1, v_snd_2717_);
v___x_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2858_, 0, v_fst_2712_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2859_, 0, v_fst_2708_);
lean_ctor_set(v___x_2859_, 1, v___x_2858_);
v___x_2860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2860_, 0, v_fst_2704_);
lean_ctor_set(v___x_2860_, 1, v___x_2859_);
v___x_2861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2856_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 0, v___x_2861_);
v___x_2863_ = v___x_2745_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v___x_2861_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
lean_del_object(v___x_2719_);
lean_dec(v_snd_2717_);
lean_dec(v_fst_2716_);
lean_del_object(v___x_2714_);
lean_dec(v_fst_2712_);
lean_del_object(v___x_2710_);
lean_dec(v_fst_2708_);
lean_del_object(v___x_2706_);
lean_dec(v_fst_2704_);
lean_del_object(v___x_2699_);
v_a_2866_ = lean_ctor_get(v___x_2742_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2868_ = v___x_2742_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___x_2742_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
v___jp_2721_:
{
lean_object* v___x_2722_; lean_object* v___x_2724_; 
v___x_2722_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__0));
if (v_isShared_2720_ == 0)
{
v___x_2724_ = v___x_2719_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_fst_2716_);
lean_ctor_set(v_reuseFailAlloc_2738_, 1, v_snd_2717_);
v___x_2724_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
lean_object* v___x_2726_; 
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 1, v___x_2724_);
v___x_2726_ = v___x_2714_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_fst_2712_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v___x_2724_);
v___x_2726_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
lean_object* v___x_2728_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 1, v___x_2726_);
v___x_2728_ = v___x_2710_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_fst_2708_);
lean_ctor_set(v_reuseFailAlloc_2736_, 1, v___x_2726_);
v___x_2728_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
lean_object* v___x_2730_; 
if (v_isShared_2707_ == 0)
{
lean_ctor_set(v___x_2706_, 1, v___x_2728_);
v___x_2730_ = v___x_2706_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_fst_2704_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v___x_2728_);
v___x_2730_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
lean_object* v___x_2732_; 
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 1, v___x_2730_);
lean_ctor_set(v___x_2699_, 0, v___x_2722_);
v___x_2732_ = v___x_2699_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2722_);
lean_ctor_set(v_reuseFailAlloc_2734_, 1, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
lean_object* v___x_2733_; 
v___x_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2733_, 0, v___x_2732_);
return v___x_2733_;
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___boxed(lean_object* v_as_2883_, lean_object* v_sz_2884_, lean_object* v_i_2885_, lean_object* v_b_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
size_t v_sz_boxed_2894_; size_t v_i_boxed_2895_; lean_object* v_res_2896_; 
v_sz_boxed_2894_ = lean_unbox_usize(v_sz_2884_);
lean_dec(v_sz_2884_);
v_i_boxed_2895_ = lean_unbox_usize(v_i_2885_);
lean_dec(v_i_2885_);
v_res_2896_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0(v_as_2883_, v_sz_boxed_2894_, v_i_boxed_2895_, v_b_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec(v___y_2888_);
lean_dec_ref(v___y_2887_);
lean_dec_ref(v_as_2883_);
return v_res_2896_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6(void){
_start:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2909_ = lean_unsigned_to_nat(0u);
v___x_2910_ = l_Lean_Expr_bvar___override(v___x_2909_);
return v___x_2910_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9(void){
_start:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2914_ = lean_box(0);
v___x_2915_ = l_Lean_Level_succ___override(v___x_2914_);
return v___x_2915_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10(void){
_start:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2916_ = lean_box(0);
v___x_2917_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9, &l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9_once, _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9);
v___x_2918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2917_);
lean_ctor_set(v___x_2918_, 1, v___x_2916_);
return v___x_2918_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11(void){
_start:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2919_ = lean_box(0);
v___x_2920_ = l_Lean_mkSort(v___x_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f(lean_object* v_goal_2921_, lean_object* v_target_2922_, lean_object* v_pre_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_){
_start:
{
lean_object* v___x_2934_; uint8_t v___x_2935_; 
v___x_2934_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1));
v___x_2935_ = l_Lean_Expr_isAppOf(v_pre_2923_, v___x_2934_);
if (v___x_2935_ == 0)
{
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
goto v___jp_2931_;
}
else
{
lean_object* v___x_2936_; lean_object* v___x_2937_; uint8_t v___x_2938_; 
v___x_2936_ = lean_unsigned_to_nat(2u);
v___x_2937_ = l_Lean_Expr_getAppNumArgs(v_pre_2923_);
v___x_2938_ = lean_nat_dec_lt(v___x_2936_, v___x_2937_);
if (v___x_2938_ == 0)
{
lean_dec(v___x_2937_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
goto v___jp_2931_;
}
else
{
lean_object* v_dummy_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v_args_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; uint8_t v___x_2946_; 
v_dummy_2939_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8);
lean_inc(v___x_2937_);
v___x_2940_ = lean_mk_array(v___x_2937_, v_dummy_2939_);
v___x_2941_ = lean_unsigned_to_nat(1u);
v___x_2942_ = lean_nat_sub(v___x_2937_, v___x_2941_);
lean_dec(v___x_2937_);
lean_inc_ref(v_pre_2923_);
v_args_2943_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_pre_2923_, v___x_2940_, v___x_2942_);
v___x_2944_ = lean_unsigned_to_nat(0u);
v___x_2945_ = lean_array_get_size(v_args_2943_);
v___x_2946_ = lean_nat_dec_lt(v___x_2944_, v___x_2945_);
if (v___x_2946_ == 0)
{
lean_object* v___x_2947_; lean_object* v___x_2948_; 
lean_dec_ref(v_args_2943_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
v___x_2947_ = lean_box(0);
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
return v___x_2948_;
}
else
{
uint8_t v___x_2949_; 
v___x_2949_ = lean_nat_dec_lt(v___x_2941_, v___x_2945_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; lean_object* v___x_2951_; 
lean_dec_ref(v_args_2943_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
v___x_2950_ = lean_box(0);
v___x_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
return v___x_2951_;
}
else
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v_curTop_2955_; lean_object* v___x_2956_; 
v___x_2952_ = lean_array_fget(v_args_2943_, v___x_2944_);
v___x_2953_ = lean_array_fget(v_args_2943_, v___x_2941_);
v___x_2954_ = l_Lean_Expr_getAppFn(v_pre_2923_);
lean_inc(v___x_2953_);
lean_inc_n(v___x_2952_, 2);
v_curTop_2955_ = l_Lean_mkAppB(v___x_2954_, v___x_2952_, v___x_2953_);
v___x_2956_ = l_Lean_Meta_Sym_getLevel___redArg(v___x_2952_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; size_t v_sz_2970_; size_t v___x_2971_; lean_object* v___x_2972_; 
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
lean_inc(v_a_2957_);
lean_dec_ref_known(v___x_2956_, 1);
v___x_2958_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__3));
v___x_2959_ = lean_box(0);
v___x_2960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2960_, 0, v_a_2957_);
lean_ctor_set(v___x_2960_, 1, v___x_2959_);
v___x_2961_ = l_Lean_mkConst(v___x_2958_, v___x_2960_);
lean_inc_ref_n(v_curTop_2955_, 2);
lean_inc(v___x_2952_);
v___x_2962_ = l_Lean_mkAppB(v___x_2961_, v___x_2952_, v_curTop_2955_);
v___x_2963_ = l_Array_extract___redArg(v_args_2943_, v___x_2936_, v___x_2945_);
lean_dec_ref(v_args_2943_);
v___x_2964_ = lean_box(0);
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2952_);
lean_ctor_set(v___x_2965_, 1, v___x_2953_);
v___x_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2966_, 0, v_curTop_2955_);
lean_ctor_set(v___x_2966_, 1, v___x_2965_);
v___x_2967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2967_, 0, v_curTop_2955_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
v___x_2968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2962_);
lean_ctor_set(v___x_2968_, 1, v___x_2967_);
v___x_2969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2969_, 0, v___x_2964_);
lean_ctor_set(v___x_2969_, 1, v___x_2968_);
v_sz_2970_ = lean_array_size(v___x_2963_);
v___x_2971_ = ((size_t)0ULL);
v___x_2972_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0(v___x_2963_, v_sz_2970_, v___x_2971_, v___x_2969_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_);
lean_dec_ref(v___x_2963_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_3056_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_2975_ = v___x_2972_;
v_isShared_2976_ = v_isSharedCheck_3056_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2972_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_3056_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v_fst_2977_; 
v_fst_2977_ = lean_ctor_get(v_a_2973_, 0);
if (lean_obj_tag(v_fst_2977_) == 0)
{
lean_object* v_snd_2978_; lean_object* v_nargs_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; 
v_snd_2978_ = lean_ctor_get(v_a_2973_, 1);
lean_inc(v_snd_2978_);
lean_dec(v_a_2973_);
v_nargs_2979_ = l_Lean_Expr_getAppNumArgs(v_target_2922_);
lean_inc(v_nargs_2979_);
v___x_2980_ = lean_mk_array(v_nargs_2979_, v_dummy_2939_);
v___x_2981_ = lean_nat_sub(v_nargs_2979_, v___x_2941_);
lean_dec(v_nargs_2979_);
lean_inc_ref(v_target_2922_);
v___x_2982_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_target_2922_, v___x_2980_, v___x_2981_);
v___x_2983_ = lean_array_get_size(v___x_2982_);
v___x_2984_ = lean_nat_dec_lt(v___x_2944_, v___x_2983_);
if (v___x_2984_ == 0)
{
lean_object* v___x_2986_; 
lean_dec_ref(v___x_2982_);
lean_dec(v_snd_2978_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 0, v___x_2964_);
v___x_2986_ = v___x_2975_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v___x_2964_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
else
{
uint8_t v___x_2988_; 
v___x_2988_ = lean_nat_dec_lt(v___x_2941_, v___x_2983_);
if (v___x_2988_ == 0)
{
lean_object* v___x_2990_; 
lean_dec_ref(v___x_2982_);
lean_dec(v_snd_2978_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 0, v___x_2964_);
v___x_2990_ = v___x_2975_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2964_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
else
{
lean_object* v___x_2992_; uint8_t v___x_2993_; 
v___x_2992_ = lean_unsigned_to_nat(3u);
v___x_2993_ = lean_nat_dec_lt(v___x_2992_, v___x_2983_);
if (v___x_2993_ == 0)
{
lean_object* v___x_2995_; 
lean_dec_ref(v___x_2982_);
lean_dec(v_snd_2978_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 0, v___x_2964_);
v___x_2995_ = v___x_2975_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2964_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
}
}
else
{
lean_object* v_snd_2997_; lean_object* v_snd_2998_; lean_object* v_fst_2999_; lean_object* v_fst_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3050_; 
lean_del_object(v___x_2975_);
v_snd_2997_ = lean_ctor_get(v_snd_2978_, 1);
v_snd_2998_ = lean_ctor_get(v_snd_2997_, 1);
lean_inc(v_snd_2998_);
v_fst_2999_ = lean_ctor_get(v_snd_2978_, 0);
lean_inc(v_fst_2999_);
lean_dec(v_snd_2978_);
v_fst_3000_ = lean_ctor_get(v_snd_2998_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v_snd_2998_);
if (v_isSharedCheck_3050_ == 0)
{
lean_object* v_unused_3051_; 
v_unused_3051_ = lean_ctor_get(v_snd_2998_, 1);
lean_dec(v_unused_3051_);
v___x_3002_ = v_snd_2998_;
v_isShared_3003_ = v_isSharedCheck_3050_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_fst_3000_);
lean_dec(v_snd_2998_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3050_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3004_ = lean_array_fget(v___x_2982_, v___x_2944_);
v___x_3005_ = lean_array_fget(v___x_2982_, v___x_2941_);
v___x_3006_ = lean_array_fget(v___x_2982_, v___x_2992_);
lean_dec_ref(v___x_2982_);
lean_inc(v___x_3004_);
v___x_3007_ = l_Lean_Meta_Sym_getLevel___redArg(v___x_3004_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; uint8_t v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3018_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v___x_3007_, 1);
v___x_3009_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__5));
v___x_3010_ = l_Lean_Expr_getAppFn(v_target_2922_);
lean_dec_ref(v_target_2922_);
v___x_3011_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6, &l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6_once, _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6);
lean_inc(v___x_3006_);
lean_inc(v___x_3005_);
lean_inc_n(v___x_3004_, 2);
lean_inc_ref(v___x_3010_);
v___x_3012_ = l_Lean_mkApp4(v___x_3010_, v___x_3004_, v___x_3005_, v___x_3011_, v___x_3006_);
v___x_3013_ = 0;
v___x_3014_ = l_Lean_Expr_lam___override(v___x_3009_, v___x_3004_, v___x_3012_, v___x_3013_);
v___x_3015_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__8));
v___x_3016_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10, &l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10_once, _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10);
if (v_isShared_3003_ == 0)
{
lean_ctor_set_tag(v___x_3002_, 1);
lean_ctor_set(v___x_3002_, 1, v___x_3016_);
lean_ctor_set(v___x_3002_, 0, v_a_3008_);
v___x_3018_ = v___x_3002_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_a_3008_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v___x_3016_);
v___x_3018_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3019_ = l_Lean_mkConst(v___x_3015_, v___x_3018_);
v___x_3020_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11, &l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11_once, _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11);
lean_inc(v_fst_3000_);
lean_inc(v___x_3004_);
v___x_3021_ = l_Lean_mkApp6(v___x_3019_, v___x_3004_, v___x_3020_, v_pre_2923_, v_fst_3000_, v___x_3014_, v_fst_2999_);
v___x_3022_ = l_Lean_mkApp4(v___x_3010_, v___x_3004_, v___x_3005_, v_fst_3000_, v___x_3006_);
v___x_3023_ = l_Lean_MVarId_replaceTargetEq(v_goal_2921_, v___x_3022_, v___x_3021_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3032_; 
v_a_3024_ = lean_ctor_get(v___x_3023_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_3023_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3026_ = v___x_3023_;
v_isShared_3027_ = v_isSharedCheck_3032_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_3023_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3032_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3028_; lean_object* v___x_3030_; 
v___x_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3028_, 0, v_a_3024_);
if (v_isShared_3027_ == 0)
{
lean_ctor_set(v___x_3026_, 0, v___x_3028_);
v___x_3030_ = v___x_3026_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v___x_3028_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
v_a_3033_ = lean_ctor_get(v___x_3023_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_3023_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_3023_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_3023_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3038_; 
if (v_isShared_3036_ == 0)
{
v___x_3038_ = v___x_3035_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3033_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
}
}
}
else
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
lean_dec(v___x_3006_);
lean_dec(v___x_3005_);
lean_dec(v___x_3004_);
lean_del_object(v___x_3002_);
lean_dec(v_fst_3000_);
lean_dec(v_fst_2999_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
v_a_3042_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_3007_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___x_3007_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
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
lean_object* v_val_3052_; lean_object* v___x_3054_; 
lean_inc_ref(v_fst_2977_);
lean_dec(v_a_2973_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
v_val_3052_ = lean_ctor_get(v_fst_2977_, 0);
lean_inc(v_val_3052_);
lean_dec_ref_known(v_fst_2977_, 1);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 0, v_val_3052_);
v___x_3054_ = v___x_2975_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_val_3052_);
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
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
v_a_3057_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_2972_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_2972_);
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
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_dec_ref(v_curTop_2955_);
lean_dec(v___x_2953_);
lean_dec(v___x_2952_);
lean_dec_ref(v_args_2943_);
lean_dec_ref(v_pre_2923_);
lean_dec_ref(v_target_2922_);
lean_dec(v_goal_2921_);
v_a_3065_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_2956_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_2956_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
}
}
}
v___jp_2931_:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = lean_box(0);
v___x_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
return v___x_2933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___boxed(lean_object* v_goal_3073_, lean_object* v_target_3074_, lean_object* v_pre_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_){
_start:
{
lean_object* v_res_3083_; 
v_res_3083_ = l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f(v_goal_3073_, v_target_3074_, v_pre_3075_, v_a_3076_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_);
lean_dec(v_a_3081_);
lean_dec_ref(v_a_3080_);
lean_dec(v_a_3079_);
lean_dec_ref(v_a_3078_);
lean_dec(v_a_3077_);
lean_dec_ref(v_a_3076_);
return v_res_3083_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1(void){
_start:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3085_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__0));
v___x_3086_ = l_Lean_stringToMessageData(v___x_3085_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(lean_object* v_goal_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_){
_start:
{
lean_object* v___y_3104_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___x_3112_; 
lean_inc(v_goal_3094_);
v___x_3112_ = l_Lean_MVarId_getType(v_goal_3094_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3176_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3115_ = v___x_3112_;
v_isShared_3116_ = v_isSharedCheck_3176_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_a_3113_);
lean_dec(v___x_3112_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3176_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; uint8_t v___x_3119_; 
v___x_3117_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4));
v___x_3118_ = lean_unsigned_to_nat(4u);
v___x_3119_ = l_Lean_Expr_isAppOfArity(v_a_3113_, v___x_3117_, v___x_3118_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3121_; 
lean_dec(v_a_3113_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 0, v_goal_3094_);
v___x_3121_ = v___x_3115_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v_goal_3094_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
else
{
lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3123_ = l_Lean_Expr_appFn_x21(v_a_3113_);
lean_dec(v_a_3113_);
v___x_3124_ = l_Lean_Expr_appFn_x21(v___x_3123_);
v___x_3125_ = l_Lean_Expr_appFn_x21(v___x_3124_);
lean_dec_ref(v___x_3124_);
v___x_3126_ = l_Lean_Expr_appArg_x21(v___x_3125_);
lean_dec_ref(v___x_3125_);
if (lean_obj_tag(v___x_3126_) == 3)
{
lean_object* v_u_3127_; 
v_u_3127_ = lean_ctor_get(v___x_3126_, 0);
lean_inc(v_u_3127_);
lean_dec_ref_known(v___x_3126_, 1);
if (lean_obj_tag(v_u_3127_) == 0)
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
lean_del_object(v___x_3115_);
v___x_3128_ = l_Lean_Expr_appArg_x21(v___x_3123_);
lean_dec_ref(v___x_3123_);
v___x_3129_ = l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS(v___x_3128_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_);
if (lean_obj_tag(v___x_3129_) == 0)
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3161_; 
v_a_3130_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3132_ = v___x_3129_;
v_isShared_3133_ = v_isSharedCheck_3161_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v___x_3129_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3161_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3134_; uint8_t v___x_3135_; 
v___x_3134_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1));
v___x_3135_ = l_Lean_Expr_isAppOf(v_a_3130_, v___x_3134_);
lean_dec(v_a_3130_);
if (v___x_3135_ == 0)
{
lean_object* v___x_3137_; 
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 0, v_goal_3094_);
v___x_3137_ = v___x_3132_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_goal_3094_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
else
{
lean_object* v_backwardRules_3139_; lean_object* v_elimPre_3140_; lean_object* v___x_3141_; 
lean_del_object(v___x_3132_);
v_backwardRules_3139_ = lean_ctor_get(v_a_3095_, 0);
v_elimPre_3140_ = lean_ctor_get(v_backwardRules_3139_, 7);
lean_inc_ref(v_elimPre_3140_);
lean_inc(v_goal_3094_);
v___x_3141_ = l_Lean_Meta_Sym_BackwardRule_apply(v_goal_3094_, v_elimPre_3140_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3152_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3144_ = v___x_3141_;
v_isShared_3145_ = v_isSharedCheck_3152_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v___x_3141_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3152_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
if (lean_obj_tag(v_a_3142_) == 1)
{
lean_object* v_mvarIds_3146_; 
v_mvarIds_3146_ = lean_ctor_get(v_a_3142_, 0);
lean_inc(v_mvarIds_3146_);
lean_dec_ref_known(v_a_3142_, 1);
if (lean_obj_tag(v_mvarIds_3146_) == 1)
{
lean_object* v_tail_3147_; 
v_tail_3147_ = lean_ctor_get(v_mvarIds_3146_, 1);
if (lean_obj_tag(v_tail_3147_) == 0)
{
lean_object* v_head_3148_; lean_object* v___x_3150_; 
lean_dec(v_goal_3094_);
v_head_3148_ = lean_ctor_get(v_mvarIds_3146_, 0);
lean_inc(v_head_3148_);
lean_dec_ref_known(v_mvarIds_3146_, 2);
if (v_isShared_3145_ == 0)
{
lean_ctor_set(v___x_3144_, 0, v_head_3148_);
v___x_3150_ = v___x_3144_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_head_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
else
{
lean_dec_ref_known(v_mvarIds_3146_, 2);
lean_del_object(v___x_3144_);
v___y_3104_ = v_a_3098_;
v___y_3105_ = v_a_3099_;
v___y_3106_ = v_a_3100_;
v___y_3107_ = v_a_3101_;
goto v___jp_3103_;
}
}
else
{
lean_dec(v_mvarIds_3146_);
lean_del_object(v___x_3144_);
v___y_3104_ = v_a_3098_;
v___y_3105_ = v_a_3099_;
v___y_3106_ = v_a_3100_;
v___y_3107_ = v_a_3101_;
goto v___jp_3103_;
}
}
else
{
lean_del_object(v___x_3144_);
lean_dec(v_a_3142_);
v___y_3104_ = v_a_3098_;
v___y_3105_ = v_a_3099_;
v___y_3106_ = v_a_3100_;
v___y_3107_ = v_a_3101_;
goto v___jp_3103_;
}
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
lean_dec(v_goal_3094_);
v_a_3153_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3155_ = v___x_3141_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3141_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3158_; 
if (v_isShared_3156_ == 0)
{
v___x_3158_ = v___x_3155_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3153_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
}
}
else
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
lean_dec(v_goal_3094_);
v_a_3162_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_3129_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_3129_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
}
else
{
lean_object* v___x_3171_; 
lean_dec(v_u_3127_);
lean_dec_ref(v___x_3123_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 0, v_goal_3094_);
v___x_3171_ = v___x_3115_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_goal_3094_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
return v___x_3171_;
}
}
}
else
{
lean_object* v___x_3174_; 
lean_dec_ref(v___x_3126_);
lean_dec_ref(v___x_3123_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 0, v_goal_3094_);
v___x_3174_ = v___x_3115_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_goal_3094_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
}
else
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3184_; 
lean_dec(v_goal_3094_);
v_a_3177_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3179_ = v___x_3112_;
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___x_3112_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3182_; 
if (v_isShared_3180_ == 0)
{
v___x_3182_ = v___x_3179_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_a_3177_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
return v___x_3182_;
}
}
}
v___jp_3103_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3108_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1, &l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1);
v___x_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3109_, 0, v_goal_3094_);
v___x_3110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3108_);
lean_ctor_set(v___x_3110_, 1, v___x_3109_);
v___x_3111_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v___x_3110_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
return v___x_3111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___boxed(lean_object* v_goal_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_){
_start:
{
lean_object* v_res_3194_; 
v_res_3194_ = l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(v_goal_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_);
lean_dec(v_a_3192_);
lean_dec_ref(v_a_3191_);
lean_dec(v_a_3190_);
lean_dec_ref(v_a_3189_);
lean_dec(v_a_3188_);
lean_dec_ref(v_a_3187_);
lean_dec_ref(v_a_3186_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre(lean_object* v_goal_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_){
_start:
{
lean_object* v___x_3208_; 
v___x_3208_ = l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(v_goal_3195_, v_a_3196_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___boxed(lean_object* v_goal_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_, lean_object* v_a_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_){
_start:
{
lean_object* v_res_3222_; 
v_res_3222_ = l_Lean_Elab_Tactic_VCGen_elimTopPre(v_goal_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_, v_a_3215_, v_a_3216_, v_a_3217_, v_a_3218_, v_a_3219_, v_a_3220_);
lean_dec(v_a_3220_);
lean_dec_ref(v_a_3219_);
lean_dec(v_a_3218_);
lean_dec_ref(v_a_3217_);
lean_dec(v_a_3216_);
lean_dec_ref(v_a_3215_);
lean_dec(v_a_3214_);
lean_dec_ref(v_a_3213_);
lean_dec(v_a_3212_);
lean_dec(v_a_3211_);
lean_dec_ref(v_a_3210_);
return v_res_3222_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_RuleCache(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Std_WP(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_MaxFVar(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Init_Sym_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Entails(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_MaxFVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_VCGen_Entails(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_RuleCache(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Std_WP(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_MaxFVar(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Init_Sym_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_VCGen_Entails(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_MaxFVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Entails(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_VCGen_Entails(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_VCGen_Entails(builtin);
}
#ifdef __cplusplus
}
#endif
