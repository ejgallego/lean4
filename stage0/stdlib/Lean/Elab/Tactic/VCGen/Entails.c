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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(lean_object* v_fvarId_149_, uint8_t v___x_150_, lean_object* v_as_151_, size_t v_i_152_, size_t v_stop_153_, lean_object* v_b_154_){
_start:
{
lean_object* v___y_156_; uint8_t v___x_160_; 
v___x_160_ = lean_usize_dec_eq(v_i_152_, v_stop_153_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
v___x_161_ = lean_array_uget_borrowed(v_as_151_, v_i_152_);
if (lean_obj_tag(v___x_161_) == 0)
{
v___y_156_ = v_b_154_;
goto v___jp_155_;
}
else
{
lean_object* v_val_162_; lean_object* v_fst_163_; lean_object* v_snd_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_190_; 
v_val_162_ = lean_ctor_get(v___x_161_, 0);
v_fst_163_ = lean_ctor_get(v_b_154_, 0);
v_snd_164_ = lean_ctor_get(v_b_154_, 1);
v_isSharedCheck_190_ = !lean_is_exclusive(v_b_154_);
if (v_isSharedCheck_190_ == 0)
{
v___x_166_ = v_b_154_;
v_isShared_167_ = v_isSharedCheck_190_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_snd_164_);
lean_inc(v_fst_163_);
lean_dec(v_b_154_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_190_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___y_169_; lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = l_Lean_LocalDecl_type(v_val_162_);
v___x_187_ = l_Lean_Expr_containsFVar(v___x_186_, v_fvarId_149_);
lean_dec_ref(v___x_186_);
if (v___x_187_ == 0)
{
v___y_169_ = v_fst_163_;
goto v___jp_168_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; 
lean_inc(v_val_162_);
v___x_188_ = l_Lean_LocalDecl_toExpr(v_val_162_);
v___x_189_ = lean_array_push(v_fst_163_, v___x_188_);
v___y_169_ = v___x_189_;
goto v___jp_168_;
}
v___jp_168_:
{
uint8_t v___x_170_; 
v___x_170_ = lean_unbox(v_snd_164_);
if (v___x_170_ == 0)
{
uint8_t v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_unbox(v_snd_164_);
v___x_172_ = l_Lean_LocalDecl_value_x3f(v_val_162_, v___x_171_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v___x_174_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 0, v___y_169_);
v___x_174_ = v___x_166_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___y_169_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_snd_164_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
v___y_156_ = v___x_174_;
goto v___jp_155_;
}
}
else
{
lean_object* v_val_176_; uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
lean_dec(v_snd_164_);
v_val_176_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_val_176_);
lean_dec_ref_known(v___x_172_, 1);
v___x_177_ = l_Lean_Expr_containsFVar(v_val_176_, v_fvarId_149_);
lean_dec(v_val_176_);
v___x_178_ = lean_box(v___x_177_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 1, v___x_178_);
lean_ctor_set(v___x_166_, 0, v___y_169_);
v___x_180_ = v___x_166_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___y_169_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
v___y_156_ = v___x_180_;
goto v___jp_155_;
}
}
}
else
{
lean_object* v___x_182_; lean_object* v___x_184_; 
lean_dec(v_snd_164_);
v___x_182_ = lean_box(v___x_150_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 1, v___x_182_);
lean_ctor_set(v___x_166_, 0, v___y_169_);
v___x_184_ = v___x_166_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___y_169_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
v___y_156_ = v___x_184_;
goto v___jp_155_;
}
}
}
}
}
}
else
{
return v_b_154_;
}
v___jp_155_:
{
size_t v___x_157_; size_t v___x_158_; 
v___x_157_ = ((size_t)1ULL);
v___x_158_ = lean_usize_add(v_i_152_, v___x_157_);
v_i_152_ = v___x_158_;
v_b_154_ = v___y_156_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_fvarId_191_, lean_object* v___x_192_, lean_object* v_as_193_, lean_object* v_i_194_, lean_object* v_stop_195_, lean_object* v_b_196_){
_start:
{
uint8_t v___x_24021__boxed_197_; size_t v_i_boxed_198_; size_t v_stop_boxed_199_; lean_object* v_res_200_; 
v___x_24021__boxed_197_ = lean_unbox(v___x_192_);
v_i_boxed_198_ = lean_unbox_usize(v_i_194_);
lean_dec(v_i_194_);
v_stop_boxed_199_ = lean_unbox_usize(v_stop_195_);
lean_dec(v_stop_195_);
v_res_200_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_191_, v___x_24021__boxed_197_, v_as_193_, v_i_boxed_198_, v_stop_boxed_199_, v_b_196_);
lean_dec_ref(v_as_193_);
lean_dec(v_fvarId_191_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(lean_object* v_fvarId_201_, uint8_t v___x_202_, lean_object* v_x_203_, lean_object* v_x_204_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
lean_object* v_cs_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v_cs_205_ = lean_ctor_get(v_x_203_, 0);
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_array_get_size(v_cs_205_);
v___x_208_ = lean_nat_dec_lt(v___x_206_, v___x_207_);
if (v___x_208_ == 0)
{
return v_x_204_;
}
else
{
size_t v___x_209_; size_t v___x_210_; lean_object* v___x_211_; 
v___x_209_ = ((size_t)0ULL);
v___x_210_ = lean_usize_of_nat(v___x_207_);
v___x_211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(v_fvarId_201_, v___x_202_, v_cs_205_, v___x_209_, v___x_210_, v_x_204_);
return v___x_211_;
}
}
else
{
lean_object* v_vs_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v_vs_212_ = lean_ctor_get(v_x_203_, 0);
v___x_213_ = lean_unsigned_to_nat(0u);
v___x_214_ = lean_array_get_size(v_vs_212_);
v___x_215_ = lean_nat_dec_lt(v___x_213_, v___x_214_);
if (v___x_215_ == 0)
{
return v_x_204_;
}
else
{
size_t v___x_216_; size_t v___x_217_; lean_object* v___x_218_; 
v___x_216_ = ((size_t)0ULL);
v___x_217_ = lean_usize_of_nat(v___x_214_);
v___x_218_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_201_, v___x_202_, v_vs_212_, v___x_216_, v___x_217_, v_x_204_);
return v___x_218_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(lean_object* v_fvarId_219_, uint8_t v___x_220_, lean_object* v_as_221_, size_t v_i_222_, size_t v_stop_223_, lean_object* v_b_224_){
_start:
{
uint8_t v___x_225_; 
v___x_225_ = lean_usize_dec_eq(v_i_222_, v_stop_223_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; size_t v___x_228_; size_t v___x_229_; 
v___x_226_ = lean_array_uget_borrowed(v_as_221_, v_i_222_);
v___x_227_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(v_fvarId_219_, v___x_220_, v___x_226_, v_b_224_);
v___x_228_ = ((size_t)1ULL);
v___x_229_ = lean_usize_add(v_i_222_, v___x_228_);
v_i_222_ = v___x_229_;
v_b_224_ = v___x_227_;
goto _start;
}
else
{
return v_b_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_fvarId_231_, lean_object* v___x_232_, lean_object* v_as_233_, lean_object* v_i_234_, lean_object* v_stop_235_, lean_object* v_b_236_){
_start:
{
uint8_t v___x_24099__boxed_237_; size_t v_i_boxed_238_; size_t v_stop_boxed_239_; lean_object* v_res_240_; 
v___x_24099__boxed_237_ = lean_unbox(v___x_232_);
v_i_boxed_238_ = lean_unbox_usize(v_i_234_);
lean_dec(v_i_234_);
v_stop_boxed_239_ = lean_unbox_usize(v_stop_235_);
lean_dec(v_stop_235_);
v_res_240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(v_fvarId_231_, v___x_24099__boxed_237_, v_as_233_, v_i_boxed_238_, v_stop_boxed_239_, v_b_236_);
lean_dec_ref(v_as_233_);
lean_dec(v_fvarId_231_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3___boxed(lean_object* v_fvarId_241_, lean_object* v___x_242_, lean_object* v_x_243_, lean_object* v_x_244_){
_start:
{
uint8_t v___x_24107__boxed_245_; lean_object* v_res_246_; 
v___x_24107__boxed_245_ = lean_unbox(v___x_242_);
v_res_246_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(v_fvarId_241_, v___x_24107__boxed_245_, v_x_243_, v_x_244_);
lean_dec_ref(v_x_243_);
lean_dec(v_fvarId_241_);
return v_res_246_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(lean_object* v_fvarId_248_, uint8_t v___x_249_, lean_object* v_x_250_, size_t v_x_251_, size_t v_x_252_, lean_object* v_x_253_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
lean_object* v_cs_254_; lean_object* v___x_255_; size_t v___x_256_; lean_object* v_j_257_; lean_object* v___x_258_; size_t v___x_259_; size_t v___x_260_; size_t v___x_261_; size_t v___x_262_; size_t v___x_263_; size_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v_cs_254_ = lean_ctor_get(v_x_250_, 0);
v___x_255_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___closed__0);
v___x_256_ = lean_usize_shift_right(v_x_251_, v_x_252_);
v_j_257_ = lean_usize_to_nat(v___x_256_);
v___x_258_ = lean_array_get_borrowed(v___x_255_, v_cs_254_, v_j_257_);
v___x_259_ = ((size_t)1ULL);
v___x_260_ = lean_usize_shift_left(v___x_259_, v_x_252_);
v___x_261_ = lean_usize_sub(v___x_260_, v___x_259_);
v___x_262_ = lean_usize_land(v_x_251_, v___x_261_);
v___x_263_ = ((size_t)5ULL);
v___x_264_ = lean_usize_sub(v_x_252_, v___x_263_);
v___x_265_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(v_fvarId_248_, v___x_249_, v___x_258_, v___x_262_, v___x_264_, v_x_253_);
v___x_266_ = lean_unsigned_to_nat(1u);
v___x_267_ = lean_nat_add(v_j_257_, v___x_266_);
lean_dec(v_j_257_);
v___x_268_ = lean_array_get_size(v_cs_254_);
v___x_269_ = lean_nat_dec_lt(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_dec(v___x_267_);
return v___x_265_;
}
else
{
size_t v___x_270_; size_t v___x_271_; lean_object* v___x_272_; 
v___x_270_ = lean_usize_of_nat(v___x_267_);
lean_dec(v___x_267_);
v___x_271_ = lean_usize_of_nat(v___x_268_);
v___x_272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1_spec__2(v_fvarId_248_, v___x_249_, v_cs_254_, v___x_270_, v___x_271_, v___x_265_);
return v___x_272_;
}
}
else
{
lean_object* v_vs_273_; lean_object* v___x_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v_vs_273_ = lean_ctor_get(v_x_250_, 0);
v___x_274_ = lean_usize_to_nat(v_x_251_);
v___x_275_ = lean_array_get_size(v_vs_273_);
v___x_276_ = lean_nat_dec_lt(v___x_274_, v___x_275_);
if (v___x_276_ == 0)
{
lean_dec(v___x_274_);
return v_x_253_;
}
else
{
size_t v___x_277_; size_t v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_usize_of_nat(v___x_274_);
lean_dec(v___x_274_);
v___x_278_ = lean_usize_of_nat(v___x_275_);
v___x_279_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_248_, v___x_249_, v_vs_273_, v___x_277_, v___x_278_, v_x_253_);
return v___x_279_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_fvarId_280_, lean_object* v___x_281_, lean_object* v_x_282_, lean_object* v_x_283_, lean_object* v_x_284_, lean_object* v_x_285_){
_start:
{
uint8_t v___x_24159__boxed_286_; size_t v_x_24161__boxed_287_; size_t v_x_24162__boxed_288_; lean_object* v_res_289_; 
v___x_24159__boxed_286_ = lean_unbox(v___x_281_);
v_x_24161__boxed_287_ = lean_unbox_usize(v_x_283_);
lean_dec(v_x_283_);
v_x_24162__boxed_288_ = lean_unbox_usize(v_x_284_);
lean_dec(v_x_284_);
v_res_289_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(v_fvarId_280_, v___x_24159__boxed_286_, v_x_282_, v_x_24161__boxed_287_, v_x_24162__boxed_288_, v_x_285_);
lean_dec_ref(v_x_282_);
lean_dec(v_fvarId_280_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0(lean_object* v_fvarId_290_, uint8_t v___x_291_, lean_object* v_t_292_, lean_object* v_init_293_, lean_object* v_start_294_){
_start:
{
lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_nat_dec_eq(v_start_294_, v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v_root_297_; lean_object* v_tail_298_; size_t v_shift_299_; lean_object* v_tailOff_300_; uint8_t v___x_301_; 
v_root_297_ = lean_ctor_get(v_t_292_, 0);
v_tail_298_ = lean_ctor_get(v_t_292_, 1);
v_shift_299_ = lean_ctor_get_usize(v_t_292_, 4);
v_tailOff_300_ = lean_ctor_get(v_t_292_, 3);
v___x_301_ = lean_nat_dec_le(v_tailOff_300_, v_start_294_);
if (v___x_301_ == 0)
{
size_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_302_ = lean_usize_of_nat(v_start_294_);
v___x_303_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__1(v_fvarId_290_, v___x_291_, v_root_297_, v___x_302_, v_shift_299_, v_init_293_);
v___x_304_ = lean_array_get_size(v_tail_298_);
v___x_305_ = lean_nat_dec_lt(v___x_295_, v___x_304_);
if (v___x_305_ == 0)
{
return v___x_303_;
}
else
{
size_t v___x_306_; size_t v___x_307_; lean_object* v___x_308_; 
v___x_306_ = ((size_t)0ULL);
v___x_307_ = lean_usize_of_nat(v___x_304_);
v___x_308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_290_, v___x_291_, v_tail_298_, v___x_306_, v___x_307_, v___x_303_);
return v___x_308_;
}
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_309_ = lean_nat_sub(v_start_294_, v_tailOff_300_);
v___x_310_ = lean_array_get_size(v_tail_298_);
v___x_311_ = lean_nat_dec_lt(v___x_309_, v___x_310_);
if (v___x_311_ == 0)
{
lean_dec(v___x_309_);
return v_init_293_;
}
else
{
size_t v___x_312_; size_t v___x_313_; lean_object* v___x_314_; 
v___x_312_ = lean_usize_of_nat(v___x_309_);
lean_dec(v___x_309_);
v___x_313_ = lean_usize_of_nat(v___x_310_);
v___x_314_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_290_, v___x_291_, v_tail_298_, v___x_312_, v___x_313_, v_init_293_);
return v___x_314_;
}
}
}
else
{
lean_object* v_root_315_; lean_object* v_tail_316_; lean_object* v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; 
v_root_315_ = lean_ctor_get(v_t_292_, 0);
v_tail_316_ = lean_ctor_get(v_t_292_, 1);
v___x_317_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__3(v_fvarId_290_, v___x_291_, v_root_315_, v_init_293_);
v___x_318_ = lean_array_get_size(v_tail_316_);
v___x_319_ = lean_nat_dec_lt(v___x_295_, v___x_318_);
if (v___x_319_ == 0)
{
return v___x_317_;
}
else
{
size_t v___x_320_; size_t v___x_321_; lean_object* v___x_322_; 
v___x_320_ = ((size_t)0ULL);
v___x_321_ = lean_usize_of_nat(v___x_318_);
v___x_322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0_spec__2(v_fvarId_290_, v___x_291_, v_tail_316_, v___x_320_, v___x_321_, v___x_317_);
return v___x_322_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0___boxed(lean_object* v_fvarId_323_, lean_object* v___x_324_, lean_object* v_t_325_, lean_object* v_init_326_, lean_object* v_start_327_){
_start:
{
uint8_t v___x_24228__boxed_328_; lean_object* v_res_329_; 
v___x_24228__boxed_328_ = lean_unbox(v___x_324_);
v_res_329_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0(v_fvarId_323_, v___x_24228__boxed_328_, v_t_325_, v_init_326_, v_start_327_);
lean_dec(v_start_327_);
lean_dec_ref(v_t_325_);
lean_dec(v_fvarId_323_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0(lean_object* v_fvarId_330_, uint8_t v___x_331_, lean_object* v_lctx_332_, lean_object* v_init_333_, lean_object* v_start_334_){
_start:
{
lean_object* v_decls_335_; lean_object* v___x_336_; 
v_decls_335_ = lean_ctor_get(v_lctx_332_, 1);
v___x_336_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0_spec__0(v_fvarId_330_, v___x_331_, v_decls_335_, v_init_333_, v_start_334_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0___boxed(lean_object* v_fvarId_337_, lean_object* v___x_338_, lean_object* v_lctx_339_, lean_object* v_init_340_, lean_object* v_start_341_){
_start:
{
uint8_t v___x_24278__boxed_342_; lean_object* v_res_343_; 
v___x_24278__boxed_342_ = lean_unbox(v___x_338_);
v_res_343_ = l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0(v_fvarId_337_, v___x_24278__boxed_342_, v_lctx_339_, v_init_340_, v_start_341_);
lean_dec(v_start_341_);
lean_dec_ref(v_lctx_339_);
lean_dec(v_fvarId_337_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(lean_object* v_eqn_349_, lean_object* v_G_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Meta_Sym_instantiateMVarsS(v_eqn_349_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_481_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_481_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_481_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_481_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = l_Lean_Expr_cleanupAnnotations(v_a_365_);
lean_dec(v_a_365_);
v___x_370_ = l_Lean_Expr_isApp(v___x_369_);
if (v___x_370_ == 0)
{
lean_dec_ref(v___x_369_);
lean_del_object(v___x_367_);
lean_dec_ref(v_G_350_);
goto v___jp_361_;
}
else
{
lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_371_ = l_Lean_Expr_appFnCleanup___redArg(v___x_369_);
v___x_372_ = l_Lean_Expr_isApp(v___x_371_);
if (v___x_372_ == 0)
{
lean_dec_ref(v___x_371_);
lean_dec_ref(v___x_369_);
lean_del_object(v___x_367_);
lean_dec_ref(v_G_350_);
goto v___jp_361_;
}
else
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = l_Lean_Expr_appFnCleanup___redArg(v___x_371_);
v___x_374_ = l_Lean_Expr_isApp(v___x_373_);
if (v___x_374_ == 0)
{
lean_dec_ref(v___x_373_);
lean_dec_ref(v___x_371_);
lean_dec_ref(v___x_369_);
lean_del_object(v___x_367_);
lean_dec_ref(v_G_350_);
goto v___jp_361_;
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_375_ = l_Lean_Expr_appFnCleanup___redArg(v___x_373_);
lean_dec_ref(v___x_373_);
v___x_376_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__1));
v___x_377_ = l_Lean_Expr_isConstOf(v___x_375_, v___x_376_);
lean_dec_ref(v___x_375_);
if (v___x_377_ == 0)
{
lean_dec_ref(v___x_371_);
lean_dec_ref(v___x_369_);
lean_del_object(v___x_367_);
lean_dec_ref(v_G_350_);
goto v___jp_361_;
}
else
{
lean_object* v_arg_378_; 
v_arg_378_ = lean_ctor_get(v___x_371_, 1);
lean_inc_ref(v_arg_378_);
lean_dec_ref(v___x_371_);
if (lean_obj_tag(v_arg_378_) == 1)
{
lean_object* v_fvarId_379_; lean_object* v_lctx_380_; lean_object* v___x_381_; 
v_fvarId_379_ = lean_ctor_get(v_arg_378_, 0);
v_lctx_380_ = lean_ctor_get(v_a_353_, 2);
lean_inc(v_fvarId_379_);
lean_inc_ref(v_lctx_380_);
v___x_381_ = lean_local_ctx_find(v_lctx_380_, v_fvarId_379_);
if (lean_obj_tag(v___x_381_) == 1)
{
lean_object* v_val_382_; uint8_t v___x_383_; uint8_t v___x_384_; 
lean_del_object(v___x_367_);
v_val_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_val_382_);
lean_dec_ref_known(v___x_381_, 1);
v___x_383_ = 0;
v___x_384_ = l_Lean_LocalDecl_isLet(v_val_382_, v___x_383_);
if (v___x_384_ == 0)
{
lean_object* v_arg_385_; uint8_t v___x_386_; 
v_arg_385_ = lean_ctor_get(v___x_369_, 1);
lean_inc_ref(v_arg_385_);
lean_dec_ref(v___x_369_);
v___x_386_ = l_Lean_Expr_containsFVar(v_arg_385_, v_fvarId_379_);
if (v___x_386_ == 0)
{
lean_object* v___x_387_; 
lean_inc_ref(v_G_350_);
v___x_387_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_G_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_464_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_464_ == 0)
{
v___x_390_ = v___x_387_;
v_isShared_391_ = v_isSharedCheck_464_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_387_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_464_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
if (lean_obj_tag(v_a_388_) == 1)
{
lean_object* v_val_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_459_; 
lean_del_object(v___x_390_);
v_val_392_ = lean_ctor_get(v_a_388_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v_a_388_);
if (v_isSharedCheck_459_ == 0)
{
v___x_394_ = v_a_388_;
v_isShared_395_ = v_isSharedCheck_459_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_val_392_);
lean_dec(v_a_388_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_459_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_FVarId_getDecl___redArg(v_val_392_, v_a_353_, v_a_355_, v_a_356_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v_a_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_a_397_);
lean_dec_ref_known(v___x_396_, 1);
v___x_398_ = l_Lean_LocalDecl_index(v_a_397_);
lean_dec(v_a_397_);
v___x_399_ = l_Lean_LocalDecl_index(v_val_382_);
lean_dec(v_val_382_);
v___x_400_ = lean_nat_dec_lt(v___x_398_, v___x_399_);
lean_dec(v___x_398_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_fst_408_; lean_object* v_snd_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_450_; 
v___x_401_ = lean_unsigned_to_nat(0u);
v___x_402_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__2));
v___x_403_ = lean_box(v___x_400_);
v___x_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_402_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_unsigned_to_nat(1u);
v___x_406_ = lean_nat_add(v___x_399_, v___x_405_);
lean_dec(v___x_399_);
v___x_407_ = l_Lean_LocalContext_foldlM___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f_spec__0(v_fvarId_379_, v___x_377_, v_lctx_380_, v___x_404_, v___x_406_);
lean_dec(v___x_406_);
v_fst_408_ = lean_ctor_get(v___x_407_, 0);
v_snd_409_ = lean_ctor_get(v___x_407_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_450_ == 0)
{
v___x_411_ = v___x_407_;
v_isShared_412_ = v_isSharedCheck_450_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_snd_409_);
lean_inc(v_fst_408_);
lean_dec(v___x_407_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_450_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_413_ = lean_mk_empty_array_with_capacity(v___x_405_);
lean_inc_ref_n(v_arg_378_, 2);
v___x_414_ = lean_array_push(v___x_413_, v_arg_378_);
v___x_415_ = l_Array_append___redArg(v___x_414_, v_fst_408_);
v___x_416_ = lean_array_push(v___x_415_, v_arg_378_);
v___x_417_ = l_Lean_Meta_Sym_abstractFVarsRange(v_G_350_, v___x_401_, v___x_416_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_441_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_441_ == 0)
{
v___x_420_ = v___x_417_;
v_isShared_421_ = v_isSharedCheck_441_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_441_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
uint8_t v___y_423_; lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = l_Lean_Expr_looseBVarRange(v_a_418_);
v___x_437_ = lean_nat_dec_eq(v___x_436_, v___x_405_);
lean_dec(v___x_436_);
if (v___x_437_ == 0)
{
lean_del_object(v___x_420_);
lean_dec(v_a_418_);
lean_del_object(v___x_411_);
lean_dec(v_snd_409_);
lean_dec(v_fst_408_);
lean_del_object(v___x_394_);
lean_dec_ref(v_arg_385_);
lean_dec_ref_known(v_arg_378_, 1);
goto v___jp_358_;
}
else
{
lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_438_ = lean_array_get_size(v_fst_408_);
lean_dec(v_fst_408_);
v___x_439_ = lean_nat_dec_eq(v___x_438_, v___x_401_);
if (v___x_439_ == 0)
{
lean_dec(v_snd_409_);
v___y_423_ = v___x_439_;
goto v___jp_422_;
}
else
{
uint8_t v___x_440_; 
v___x_440_ = lean_unbox(v_snd_409_);
lean_dec(v_snd_409_);
if (v___x_440_ == 0)
{
v___y_423_ = v___x_439_;
goto v___jp_422_;
}
else
{
v___y_423_ = v___x_400_;
goto v___jp_422_;
}
}
}
v___jp_422_:
{
lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_424_ = lean_box(v___y_423_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 1, v___x_424_);
lean_ctor_set(v___x_411_, 0, v_a_418_);
v___x_426_ = v___x_411_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_418_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v___x_424_);
v___x_426_ = v_reuseFailAlloc_435_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v_arg_385_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v_arg_378_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_428_);
v___x_430_ = v___x_394_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_428_);
v___x_430_ = v_reuseFailAlloc_434_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_432_; 
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 0, v___x_430_);
v___x_432_ = v___x_420_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
}
else
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
lean_del_object(v___x_411_);
lean_dec(v_snd_409_);
lean_dec(v_fst_408_);
lean_del_object(v___x_394_);
lean_dec_ref(v_arg_385_);
lean_dec_ref_known(v_arg_378_, 1);
v_a_442_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_417_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_417_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_a_442_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
}
else
{
lean_dec(v___x_399_);
lean_del_object(v___x_394_);
lean_dec_ref(v_arg_385_);
lean_dec_ref_known(v_arg_378_, 1);
lean_dec_ref(v_G_350_);
goto v___jp_358_;
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
lean_del_object(v___x_394_);
lean_dec_ref(v_arg_385_);
lean_dec(v_val_382_);
lean_dec_ref_known(v_arg_378_, 1);
lean_dec_ref(v_G_350_);
v_a_451_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_396_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_396_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
}
else
{
lean_object* v___x_460_; lean_object* v___x_462_; 
lean_dec(v_a_388_);
lean_dec_ref(v_arg_385_);
lean_dec(v_val_382_);
lean_dec_ref_known(v_arg_378_, 1);
lean_dec_ref(v_G_350_);
v___x_460_ = lean_box(0);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v___x_460_);
v___x_462_ = v___x_390_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_460_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec_ref(v_arg_385_);
lean_dec(v_val_382_);
lean_dec_ref_known(v_arg_378_, 1);
lean_dec_ref(v_G_350_);
v_a_465_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_387_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_387_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
lean_dec_ref(v_arg_385_);
lean_dec(v_val_382_);
lean_dec_ref_known(v_arg_378_, 1);
lean_dec_ref(v_G_350_);
goto v___jp_358_;
}
}
else
{
lean_dec(v_val_382_);
lean_dec_ref_known(v_arg_378_, 1);
lean_dec_ref(v___x_369_);
lean_dec_ref(v_G_350_);
goto v___jp_358_;
}
}
else
{
lean_object* v___x_473_; lean_object* v___x_475_; 
lean_dec(v___x_381_);
lean_dec_ref_known(v_arg_378_, 1);
lean_dec_ref(v___x_369_);
lean_dec_ref(v_G_350_);
v___x_473_ = lean_box(0);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_473_);
v___x_475_ = v___x_367_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
else
{
lean_object* v___x_477_; lean_object* v___x_479_; 
lean_dec_ref(v_arg_378_);
lean_dec_ref(v___x_369_);
lean_dec_ref(v_G_350_);
v___x_477_ = lean_box(0);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_477_);
v___x_479_ = v___x_367_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
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
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
lean_dec_ref(v_G_350_);
v_a_482_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_364_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_364_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
v___jp_358_:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = lean_box(0);
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
v___jp_361_:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_box(0);
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
return v___x_363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___boxed(lean_object* v_eqn_490_, lean_object* v_G_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(v_eqn_490_, v_G_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_);
lean_dec(v_a_497_);
lean_dec_ref(v_a_496_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f(lean_object* v_eqn_500_, lean_object* v_G_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(v_eqn_500_, v_G_501_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___boxed(lean_object* v_eqn_515_, lean_object* v_G_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f(v_eqn_515_, v_G_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
lean_dec(v_a_527_);
lean_dec_ref(v_a_526_);
lean_dec(v_a_525_);
lean_dec_ref(v_a_524_);
lean_dec(v_a_523_);
lean_dec_ref(v_a_522_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(lean_object* v_00_u03c6_533_, lean_object* v_G_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___x_573_; 
lean_inc_ref(v_00_u03c6_533_);
v___x_573_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_00_u03c6_533_, v_a_538_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v_a_574_; lean_object* v___x_575_; uint8_t v___x_576_; 
v_a_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc(v_a_574_);
lean_dec_ref_known(v___x_573_, 1);
v___x_575_ = l_Lean_Expr_cleanupAnnotations(v_a_574_);
lean_dec(v_a_574_);
v___x_576_ = l_Lean_Expr_isApp(v___x_575_);
if (v___x_576_ == 0)
{
lean_dec_ref(v___x_575_);
v___y_543_ = v_a_535_;
v___y_544_ = v_a_536_;
v___y_545_ = v_a_537_;
v___y_546_ = v_a_538_;
v___y_547_ = v_a_539_;
v___y_548_ = v_a_540_;
goto v___jp_542_;
}
else
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = l_Lean_Expr_appFnCleanup___redArg(v___x_575_);
v___x_578_ = l_Lean_Expr_isApp(v___x_577_);
if (v___x_578_ == 0)
{
lean_dec_ref(v___x_577_);
lean_dec_ref(v___x_575_);
v___y_543_ = v_a_535_;
v___y_544_ = v_a_536_;
v___y_545_ = v_a_537_;
v___y_546_ = v_a_538_;
v___y_547_ = v_a_539_;
v___y_548_ = v_a_540_;
goto v___jp_542_;
}
else
{
lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_579_ = l_Lean_Expr_appFnCleanup___redArg(v___x_577_);
v___x_580_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__1));
v___x_581_ = l_Lean_Expr_isConstOf(v___x_579_, v___x_580_);
lean_dec_ref(v___x_579_);
if (v___x_581_ == 0)
{
lean_dec_ref(v___x_577_);
lean_dec_ref(v___x_575_);
v___y_543_ = v_a_535_;
v___y_544_ = v_a_536_;
v___y_545_ = v_a_537_;
v___y_546_ = v_a_538_;
v___y_547_ = v_a_539_;
v___y_548_ = v_a_540_;
goto v___jp_542_;
}
else
{
lean_object* v_arg_582_; lean_object* v_arg_583_; lean_object* v___x_584_; 
lean_dec_ref(v_00_u03c6_533_);
v_arg_582_ = lean_ctor_get(v___x_575_, 1);
lean_inc_ref(v_arg_582_);
lean_dec_ref(v___x_575_);
v_arg_583_ = lean_ctor_get(v___x_577_, 1);
lean_inc_ref(v_arg_583_);
lean_dec_ref(v___x_577_);
lean_inc_ref(v_G_534_);
v___x_584_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(v_arg_583_, v_G_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; uint8_t v___x_586_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
v___x_586_ = lean_unbox(v_a_585_);
if (v___x_586_ == 0)
{
lean_dec_ref_known(v___x_584_, 1);
v_00_u03c6_533_ = v_arg_582_;
goto _start;
}
else
{
lean_dec_ref(v_arg_582_);
lean_dec_ref(v_G_534_);
return v___x_584_;
}
}
else
{
lean_dec_ref(v_arg_582_);
lean_dec_ref(v_G_534_);
return v___x_584_;
}
}
}
}
}
else
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_595_; 
lean_dec_ref(v_G_534_);
lean_dec_ref(v_00_u03c6_533_);
v_a_588_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_595_ == 0)
{
v___x_590_ = v___x_573_;
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_573_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_591_ == 0)
{
v___x_593_ = v___x_590_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_588_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
v___jp_542_:
{
lean_object* v___x_549_; 
v___x_549_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(v_00_u03c6_533_, v_G_534_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_564_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_564_ == 0)
{
v___x_552_ = v___x_549_;
v_isShared_553_ = v_isSharedCheck_564_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_549_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_564_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
if (lean_obj_tag(v_a_550_) == 0)
{
uint8_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_554_ = 0;
v___x_555_ = lean_box(v___x_554_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v___x_555_);
v___x_557_ = v___x_552_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
else
{
uint8_t v___x_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
lean_dec_ref_known(v_a_550_, 1);
v___x_559_ = 1;
v___x_560_ = lean_box(v___x_559_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v___x_560_);
v___x_562_ = v___x_552_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_560_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
v_a_565_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_549_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_549_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___boxed(lean_object* v_00_u03c6_596_, lean_object* v_G_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(v_00_u03c6_596_, v_G_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_);
lean_dec(v_a_603_);
lean_dec_ref(v_a_602_);
lean_dec(v_a_601_);
lean_dec_ref(v_a_600_);
lean_dec(v_a_599_);
lean_dec_ref(v_a_598_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct(lean_object* v_00_u03c6_606_, lean_object* v_G_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(v_00_u03c6_606_, v_G_607_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___boxed(lean_object* v_00_u03c6_621_, lean_object* v_G_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct(v_00_u03c6_621_, v_G_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_);
lean_dec(v_a_633_);
lean_dec_ref(v_a_632_);
lean_dec(v_a_631_);
lean_dec_ref(v_a_630_);
lean_dec(v_a_629_);
lean_dec_ref(v_a_628_);
lean_dec(v_a_627_);
lean_dec_ref(v_a_626_);
lean_dec(v_a_625_);
lean_dec(v_a_624_);
lean_dec_ref(v_a_623_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(lean_object* v_x_636_, uint8_t v_bi_637_, lean_object* v_t_638_, lean_object* v_b_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v___y_648_; lean_object* v___x_651_; uint8_t v_debug_652_; 
v___x_651_ = lean_st_ref_get(v___y_641_);
v_debug_652_ = lean_ctor_get_uint8(v___x_651_, sizeof(void*)*13);
lean_dec(v___x_651_);
if (v_debug_652_ == 0)
{
v___y_648_ = v___y_641_;
goto v___jp_647_;
}
else
{
lean_object* v___x_653_; 
v___x_653_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_638_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v___x_654_; 
lean_dec_ref_known(v___x_653_, 1);
v___x_654_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_dec_ref_known(v___x_654_, 1);
v___y_648_ = v___y_641_;
goto v___jp_647_;
}
else
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
lean_dec_ref(v_b_639_);
lean_dec_ref(v_t_638_);
lean_dec(v_x_636_);
v_a_655_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_654_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_654_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
lean_dec_ref(v_b_639_);
lean_dec_ref(v_t_638_);
lean_dec(v_x_636_);
v_a_663_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_653_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_653_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
v___jp_647_:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = l_Lean_Expr_forallE___override(v_x_636_, v_t_638_, v_b_639_, v_bi_637_);
v___x_650_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_649_, v___y_648_);
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg___boxed(lean_object* v_x_671_, lean_object* v_bi_672_, lean_object* v_t_673_, lean_object* v_b_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
uint8_t v_bi_boxed_682_; lean_object* v_res_683_; 
v_bi_boxed_682_ = lean_unbox(v_bi_672_);
v_res_683_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_x_671_, v_bi_boxed_682_, v_t_673_, v_b_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0(lean_object* v_x_684_, uint8_t v_bi_685_, lean_object* v_t_686_, lean_object* v_b_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_x_684_, v_bi_685_, v_t_686_, v_b_687_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___boxed(lean_object* v_x_701_, lean_object* v_bi_702_, lean_object* v_t_703_, lean_object* v_b_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
uint8_t v_bi_boxed_717_; lean_object* v_res_718_; 
v_bi_boxed_717_ = lean_unbox(v_bi_702_);
v_res_718_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0(v_x_701_, v_bi_boxed_717_, v_t_703_, v_b_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_719_, lean_object* v_x_720_, lean_object* v_x_721_, lean_object* v_x_722_){
_start:
{
lean_object* v_ks_723_; lean_object* v_vs_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_748_; 
v_ks_723_ = lean_ctor_get(v_x_719_, 0);
v_vs_724_ = lean_ctor_get(v_x_719_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v_x_719_);
if (v_isSharedCheck_748_ == 0)
{
v___x_726_ = v_x_719_;
v_isShared_727_ = v_isSharedCheck_748_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_vs_724_);
lean_inc(v_ks_723_);
lean_dec(v_x_719_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_748_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = lean_array_get_size(v_ks_723_);
v___x_729_ = lean_nat_dec_lt(v_x_720_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
lean_dec(v_x_720_);
v___x_730_ = lean_array_push(v_ks_723_, v_x_721_);
v___x_731_ = lean_array_push(v_vs_724_, v_x_722_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v___x_731_);
lean_ctor_set(v___x_726_, 0, v___x_730_);
v___x_733_ = v___x_726_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
else
{
lean_object* v_k_x27_735_; uint8_t v___x_736_; 
v_k_x27_735_ = lean_array_fget_borrowed(v_ks_723_, v_x_720_);
v___x_736_ = l_Lean_instBEqMVarId_beq(v_x_721_, v_k_x27_735_);
if (v___x_736_ == 0)
{
lean_object* v___x_738_; 
if (v_isShared_727_ == 0)
{
v___x_738_ = v___x_726_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_ks_723_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_vs_724_);
v___x_738_ = v_reuseFailAlloc_742_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = lean_unsigned_to_nat(1u);
v___x_740_ = lean_nat_add(v_x_720_, v___x_739_);
lean_dec(v_x_720_);
v_x_719_ = v___x_738_;
v_x_720_ = v___x_740_;
goto _start;
}
}
else
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_746_; 
v___x_743_ = lean_array_fset(v_ks_723_, v_x_720_, v_x_721_);
v___x_744_ = lean_array_fset(v_vs_724_, v_x_720_, v_x_722_);
lean_dec(v_x_720_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v___x_744_);
lean_ctor_set(v___x_726_, 0, v___x_743_);
v___x_746_ = v___x_726_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_749_, lean_object* v_k_750_, lean_object* v_v_751_){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = lean_unsigned_to_nat(0u);
v___x_753_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_n_749_, v___x_752_, v_k_750_, v_v_751_);
return v___x_753_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(lean_object* v_x_755_, size_t v_x_756_, size_t v_x_757_, lean_object* v_x_758_, lean_object* v_x_759_){
_start:
{
if (lean_obj_tag(v_x_755_) == 0)
{
lean_object* v_es_760_; size_t v___x_761_; size_t v___x_762_; lean_object* v_j_763_; lean_object* v___x_764_; uint8_t v___x_765_; 
v_es_760_ = lean_ctor_get(v_x_755_, 0);
v___x_761_ = ((size_t)31ULL);
v___x_762_ = lean_usize_land(v_x_756_, v___x_761_);
v_j_763_ = lean_usize_to_nat(v___x_762_);
v___x_764_ = lean_array_get_size(v_es_760_);
v___x_765_ = lean_nat_dec_lt(v_j_763_, v___x_764_);
if (v___x_765_ == 0)
{
lean_dec(v_j_763_);
lean_dec(v_x_759_);
lean_dec(v_x_758_);
return v_x_755_;
}
else
{
lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_804_; 
lean_inc_ref(v_es_760_);
v_isSharedCheck_804_ = !lean_is_exclusive(v_x_755_);
if (v_isSharedCheck_804_ == 0)
{
lean_object* v_unused_805_; 
v_unused_805_ = lean_ctor_get(v_x_755_, 0);
lean_dec(v_unused_805_);
v___x_767_ = v_x_755_;
v_isShared_768_ = v_isSharedCheck_804_;
goto v_resetjp_766_;
}
else
{
lean_dec(v_x_755_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_804_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v_v_769_; lean_object* v___x_770_; lean_object* v_xs_x27_771_; lean_object* v___y_773_; 
v_v_769_ = lean_array_fget(v_es_760_, v_j_763_);
v___x_770_ = lean_box(0);
v_xs_x27_771_ = lean_array_fset(v_es_760_, v_j_763_, v___x_770_);
switch(lean_obj_tag(v_v_769_))
{
case 0:
{
lean_object* v_key_778_; lean_object* v_val_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_789_; 
v_key_778_ = lean_ctor_get(v_v_769_, 0);
v_val_779_ = lean_ctor_get(v_v_769_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_v_769_);
if (v_isSharedCheck_789_ == 0)
{
v___x_781_ = v_v_769_;
v_isShared_782_ = v_isSharedCheck_789_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_val_779_);
lean_inc(v_key_778_);
lean_dec(v_v_769_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_789_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
uint8_t v___x_783_; 
v___x_783_ = l_Lean_instBEqMVarId_beq(v_x_758_, v_key_778_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; lean_object* v___x_785_; 
lean_del_object(v___x_781_);
v___x_784_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_778_, v_val_779_, v_x_758_, v_x_759_);
v___x_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
v___y_773_ = v___x_785_;
goto v___jp_772_;
}
else
{
lean_object* v___x_787_; 
lean_dec(v_val_779_);
lean_dec(v_key_778_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 1, v_x_759_);
lean_ctor_set(v___x_781_, 0, v_x_758_);
v___x_787_ = v___x_781_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_x_758_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_x_759_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
v___y_773_ = v___x_787_;
goto v___jp_772_;
}
}
}
}
case 1:
{
lean_object* v_node_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_802_; 
v_node_790_ = lean_ctor_get(v_v_769_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v_v_769_);
if (v_isSharedCheck_802_ == 0)
{
v___x_792_ = v_v_769_;
v_isShared_793_ = v_isSharedCheck_802_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_node_790_);
lean_dec(v_v_769_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_802_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
size_t v___x_794_; size_t v___x_795_; size_t v___x_796_; size_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_794_ = ((size_t)5ULL);
v___x_795_ = lean_usize_shift_right(v_x_756_, v___x_794_);
v___x_796_ = ((size_t)1ULL);
v___x_797_ = lean_usize_add(v_x_757_, v___x_796_);
v___x_798_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_node_790_, v___x_795_, v___x_797_, v_x_758_, v_x_759_);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_798_);
v___x_800_ = v___x_792_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
v___y_773_ = v___x_800_;
goto v___jp_772_;
}
}
}
default: 
{
lean_object* v___x_803_; 
v___x_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_803_, 0, v_x_758_);
lean_ctor_set(v___x_803_, 1, v_x_759_);
v___y_773_ = v___x_803_;
goto v___jp_772_;
}
}
v___jp_772_:
{
lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_774_ = lean_array_fset(v_xs_x27_771_, v_j_763_, v___y_773_);
lean_dec(v_j_763_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 0, v___x_774_);
v___x_776_ = v___x_767_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
else
{
lean_object* v_ks_806_; lean_object* v_vs_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_825_; 
v_ks_806_ = lean_ctor_get(v_x_755_, 0);
v_vs_807_ = lean_ctor_get(v_x_755_, 1);
v_isSharedCheck_825_ = !lean_is_exclusive(v_x_755_);
if (v_isSharedCheck_825_ == 0)
{
v___x_809_ = v_x_755_;
v_isShared_810_ = v_isSharedCheck_825_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_vs_807_);
lean_inc(v_ks_806_);
lean_dec(v_x_755_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_825_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_ks_806_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_vs_807_);
v___x_812_ = v_reuseFailAlloc_824_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v_newNode_813_; size_t v___x_814_; uint8_t v___x_815_; 
v_newNode_813_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3___redArg(v___x_812_, v_x_758_, v_x_759_);
v___x_814_ = ((size_t)7ULL);
v___x_815_ = lean_usize_dec_le(v___x_814_, v_x_757_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_816_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_813_);
v___x_817_ = lean_unsigned_to_nat(4u);
v___x_818_ = lean_nat_dec_lt(v___x_816_, v___x_817_);
lean_dec(v___x_816_);
if (v___x_818_ == 0)
{
lean_object* v_ks_819_; lean_object* v_vs_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_ks_819_ = lean_ctor_get(v_newNode_813_, 0);
lean_inc_ref(v_ks_819_);
v_vs_820_ = lean_ctor_get(v_newNode_813_, 1);
lean_inc_ref(v_vs_820_);
lean_dec_ref(v_newNode_813_);
v___x_821_ = lean_unsigned_to_nat(0u);
v___x_822_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_823_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(v_x_757_, v_ks_819_, v_vs_820_, v___x_821_, v___x_822_);
lean_dec_ref(v_vs_820_);
lean_dec_ref(v_ks_819_);
return v___x_823_;
}
else
{
return v_newNode_813_;
}
}
else
{
return v_newNode_813_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(size_t v_depth_826_, lean_object* v_keys_827_, lean_object* v_vals_828_, lean_object* v_i_829_, lean_object* v_entries_830_){
_start:
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = lean_array_get_size(v_keys_827_);
v___x_832_ = lean_nat_dec_lt(v_i_829_, v___x_831_);
if (v___x_832_ == 0)
{
lean_dec(v_i_829_);
return v_entries_830_;
}
else
{
lean_object* v_k_833_; lean_object* v_v_834_; uint64_t v___x_835_; size_t v_h_836_; size_t v___x_837_; lean_object* v___x_838_; size_t v___x_839_; size_t v___x_840_; size_t v___x_841_; size_t v_h_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_k_833_ = lean_array_fget_borrowed(v_keys_827_, v_i_829_);
v_v_834_ = lean_array_fget_borrowed(v_vals_828_, v_i_829_);
v___x_835_ = l_Lean_instHashableMVarId_hash(v_k_833_);
v_h_836_ = lean_uint64_to_usize(v___x_835_);
v___x_837_ = ((size_t)5ULL);
v___x_838_ = lean_unsigned_to_nat(1u);
v___x_839_ = ((size_t)1ULL);
v___x_840_ = lean_usize_sub(v_depth_826_, v___x_839_);
v___x_841_ = lean_usize_mul(v___x_837_, v___x_840_);
v_h_842_ = lean_usize_shift_right(v_h_836_, v___x_841_);
v___x_843_ = lean_nat_add(v_i_829_, v___x_838_);
lean_dec(v_i_829_);
lean_inc(v_v_834_);
lean_inc(v_k_833_);
v___x_844_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_entries_830_, v_h_842_, v_depth_826_, v_k_833_, v_v_834_);
v_i_829_ = v___x_843_;
v_entries_830_ = v___x_844_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_846_, lean_object* v_keys_847_, lean_object* v_vals_848_, lean_object* v_i_849_, lean_object* v_entries_850_){
_start:
{
size_t v_depth_boxed_851_; lean_object* v_res_852_; 
v_depth_boxed_851_ = lean_unbox_usize(v_depth_846_);
lean_dec(v_depth_846_);
v_res_852_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_851_, v_keys_847_, v_vals_848_, v_i_849_, v_entries_850_);
lean_dec_ref(v_vals_848_);
lean_dec_ref(v_keys_847_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_853_, lean_object* v_x_854_, lean_object* v_x_855_, lean_object* v_x_856_, lean_object* v_x_857_){
_start:
{
size_t v_x_11798__boxed_858_; size_t v_x_11799__boxed_859_; lean_object* v_res_860_; 
v_x_11798__boxed_858_ = lean_unbox_usize(v_x_854_);
lean_dec(v_x_854_);
v_x_11799__boxed_859_ = lean_unbox_usize(v_x_855_);
lean_dec(v_x_855_);
v_res_860_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_x_853_, v_x_11798__boxed_858_, v_x_11799__boxed_859_, v_x_856_, v_x_857_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1___redArg(lean_object* v_x_861_, lean_object* v_x_862_, lean_object* v_x_863_){
_start:
{
uint64_t v___x_864_; size_t v___x_865_; size_t v___x_866_; lean_object* v___x_867_; 
v___x_864_ = l_Lean_instHashableMVarId_hash(v_x_862_);
v___x_865_ = lean_uint64_to_usize(v___x_864_);
v___x_866_ = ((size_t)1ULL);
v___x_867_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_x_861_, v___x_865_, v___x_866_, v_x_862_, v_x_863_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(lean_object* v_mvarId_868_, lean_object* v_val_869_, lean_object* v___y_870_){
_start:
{
lean_object* v___x_872_; lean_object* v_mctx_873_; lean_object* v_cache_874_; lean_object* v_zetaDeltaFVarIds_875_; lean_object* v_postponed_876_; lean_object* v_diag_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_906_; 
v___x_872_ = lean_st_ref_take(v___y_870_);
v_mctx_873_ = lean_ctor_get(v___x_872_, 0);
v_cache_874_ = lean_ctor_get(v___x_872_, 1);
v_zetaDeltaFVarIds_875_ = lean_ctor_get(v___x_872_, 2);
v_postponed_876_ = lean_ctor_get(v___x_872_, 3);
v_diag_877_ = lean_ctor_get(v___x_872_, 4);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_906_ == 0)
{
v___x_879_ = v___x_872_;
v_isShared_880_ = v_isSharedCheck_906_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_diag_877_);
lean_inc(v_postponed_876_);
lean_inc(v_zetaDeltaFVarIds_875_);
lean_inc(v_cache_874_);
lean_inc(v_mctx_873_);
lean_dec(v___x_872_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_906_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v_depth_881_; lean_object* v_levelAssignDepth_882_; lean_object* v_lmvarCounter_883_; lean_object* v_mvarCounter_884_; lean_object* v_lDecls_885_; lean_object* v_decls_886_; lean_object* v_userNames_887_; lean_object* v_lAssignment_888_; lean_object* v_eAssignment_889_; lean_object* v_dAssignment_890_; lean_object* v_instanceTypedMVars_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_905_; 
v_depth_881_ = lean_ctor_get(v_mctx_873_, 0);
v_levelAssignDepth_882_ = lean_ctor_get(v_mctx_873_, 1);
v_lmvarCounter_883_ = lean_ctor_get(v_mctx_873_, 2);
v_mvarCounter_884_ = lean_ctor_get(v_mctx_873_, 3);
v_lDecls_885_ = lean_ctor_get(v_mctx_873_, 4);
v_decls_886_ = lean_ctor_get(v_mctx_873_, 5);
v_userNames_887_ = lean_ctor_get(v_mctx_873_, 6);
v_lAssignment_888_ = lean_ctor_get(v_mctx_873_, 7);
v_eAssignment_889_ = lean_ctor_get(v_mctx_873_, 8);
v_dAssignment_890_ = lean_ctor_get(v_mctx_873_, 9);
v_instanceTypedMVars_891_ = lean_ctor_get(v_mctx_873_, 10);
v_isSharedCheck_905_ = !lean_is_exclusive(v_mctx_873_);
if (v_isSharedCheck_905_ == 0)
{
v___x_893_ = v_mctx_873_;
v_isShared_894_ = v_isSharedCheck_905_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_instanceTypedMVars_891_);
lean_inc(v_dAssignment_890_);
lean_inc(v_eAssignment_889_);
lean_inc(v_lAssignment_888_);
lean_inc(v_userNames_887_);
lean_inc(v_decls_886_);
lean_inc(v_lDecls_885_);
lean_inc(v_mvarCounter_884_);
lean_inc(v_lmvarCounter_883_);
lean_inc(v_levelAssignDepth_882_);
lean_inc(v_depth_881_);
lean_dec(v_mctx_873_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_905_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; 
v___x_895_ = lean_box(0);
v___x_896_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1___redArg(v_eAssignment_889_, v_mvarId_868_, v_val_869_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 8, v___x_896_);
v___x_898_ = v___x_893_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_depth_881_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_levelAssignDepth_882_);
lean_ctor_set(v_reuseFailAlloc_904_, 2, v_lmvarCounter_883_);
lean_ctor_set(v_reuseFailAlloc_904_, 3, v_mvarCounter_884_);
lean_ctor_set(v_reuseFailAlloc_904_, 4, v_lDecls_885_);
lean_ctor_set(v_reuseFailAlloc_904_, 5, v_decls_886_);
lean_ctor_set(v_reuseFailAlloc_904_, 6, v_userNames_887_);
lean_ctor_set(v_reuseFailAlloc_904_, 7, v_lAssignment_888_);
lean_ctor_set(v_reuseFailAlloc_904_, 8, v___x_896_);
lean_ctor_set(v_reuseFailAlloc_904_, 9, v_dAssignment_890_);
lean_ctor_set(v_reuseFailAlloc_904_, 10, v_instanceTypedMVars_891_);
v___x_898_ = v_reuseFailAlloc_904_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
lean_object* v___x_900_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_898_);
v___x_900_ = v___x_879_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_898_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_cache_874_);
lean_ctor_set(v_reuseFailAlloc_903_, 2, v_zetaDeltaFVarIds_875_);
lean_ctor_set(v_reuseFailAlloc_903_, 3, v_postponed_876_);
lean_ctor_set(v_reuseFailAlloc_903_, 4, v_diag_877_);
v___x_900_ = v_reuseFailAlloc_903_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = lean_st_ref_put(v___y_870_, v___x_900_);
v___x_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_895_);
return v___x_902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg___boxed(lean_object* v_mvarId_907_, lean_object* v_val_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(v_mvarId_907_, v_val_908_, v___y_909_);
lean_dec(v___y_909_);
return v_res_911_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_917_ = lean_box(0);
v___x_918_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__2));
v___x_919_ = l_Lean_mkConst(v___x_918_, v___x_917_);
return v___x_919_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_923_ = lean_box(0);
v___x_924_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__5));
v___x_925_ = l_Lean_mkConst(v___x_924_, v___x_923_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f(lean_object* v_goal_926_, lean_object* v_target_927_, lean_object* v_nm_928_, lean_object* v_00_u03c6_929_, lean_object* v_G_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_946_ = l_Lean_Expr_cleanupAnnotations(v_00_u03c6_929_);
v___x_947_ = l_Lean_Expr_isApp(v___x_946_);
if (v___x_947_ == 0)
{
lean_dec_ref(v___x_946_);
lean_dec_ref(v_G_930_);
lean_dec_ref(v_00_u03c6_929_);
lean_dec(v_nm_928_);
lean_dec_ref(v_target_927_);
lean_dec(v_goal_926_);
goto v___jp_943_;
}
else
{
lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_948_ = l_Lean_Expr_appFnCleanup___redArg(v___x_946_);
v___x_949_ = l_Lean_Expr_isApp(v___x_948_);
if (v___x_949_ == 0)
{
lean_dec_ref(v___x_948_);
lean_dec_ref(v___x_946_);
lean_dec_ref(v_G_930_);
lean_dec_ref(v_00_u03c6_929_);
lean_dec(v_nm_928_);
lean_dec_ref(v_target_927_);
lean_dec(v_goal_926_);
goto v___jp_943_;
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_950_ = l_Lean_Expr_appFnCleanup___redArg(v___x_948_);
v___x_951_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg___closed__1));
v___x_952_ = l_Lean_Expr_isConstOf(v___x_950_, v___x_951_);
lean_dec_ref(v___x_950_);
if (v___x_952_ == 0)
{
lean_dec_ref(v___x_948_);
lean_dec_ref(v___x_946_);
lean_dec_ref(v_G_930_);
lean_dec_ref(v_00_u03c6_929_);
lean_dec(v_nm_928_);
lean_dec_ref(v_target_927_);
lean_dec(v_goal_926_);
goto v___jp_943_;
}
else
{
lean_object* v_arg_953_; lean_object* v_arg_954_; lean_object* v___x_955_; 
v_arg_953_ = lean_ctor_get(v___x_946_, 1);
lean_inc_ref(v_arg_953_);
lean_dec_ref(v___x_946_);
v_arg_954_ = lean_ctor_get(v___x_948_, 1);
lean_inc_ref(v_arg_954_);
lean_dec_ref(v___x_948_);
lean_inc_ref(v_G_930_);
v___x_955_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_hasSubstConjunct___redArg(v_00_u03c6_929_, v_G_930_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_1012_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_1012_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_1012_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
uint8_t v___x_960_; 
v___x_960_ = lean_unbox(v_a_956_);
lean_dec(v_a_956_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; lean_object* v___x_963_; 
lean_dec_ref(v_arg_954_);
lean_dec_ref(v_arg_953_);
lean_dec_ref(v_G_930_);
lean_dec(v_nm_928_);
lean_dec_ref(v_target_927_);
lean_dec(v_goal_926_);
v___x_961_ = lean_box(0);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_961_);
v___x_963_ = v___x_958_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
else
{
uint8_t v___x_965_; lean_object* v___x_966_; 
lean_del_object(v___x_958_);
v___x_965_ = 0;
lean_inc_ref(v_G_930_);
lean_inc_ref(v_arg_953_);
lean_inc(v_nm_928_);
v___x_966_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_nm_928_, v___x_965_, v_arg_953_, v_G_930_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_968_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc(v_a_967_);
lean_dec_ref_known(v___x_966_, 1);
lean_inc_ref(v_arg_954_);
v___x_968_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_nm_928_, v___x_965_, v_arg_954_, v_a_967_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc_n(v_a_969_, 2);
lean_dec_ref_known(v___x_968_, 1);
v___x_970_ = lean_box(0);
v___x_971_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_969_, v___x_970_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_986_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc_n(v_a_972_, 2);
lean_dec_ref_known(v___x_971_, 1);
v___x_973_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__3);
v___x_974_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___closed__6);
v___x_975_ = l_Lean_mkApp3(v___x_974_, v_arg_954_, v_arg_953_, v_G_930_);
v___x_976_ = l_Lean_mkApp4(v___x_973_, v_target_927_, v_a_969_, v___x_975_, v_a_972_);
v___x_977_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(v_goal_926_, v___x_976_, v_a_939_);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_986_ == 0)
{
lean_object* v_unused_987_; 
v_unused_987_ = lean_ctor_get(v___x_977_, 0);
lean_dec(v_unused_987_);
v___x_979_ = v___x_977_;
v_isShared_980_ = v_isSharedCheck_986_;
goto v_resetjp_978_;
}
else
{
lean_dec(v___x_977_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_986_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_981_ = l_Lean_Expr_mvarId_x21(v_a_972_);
lean_dec(v_a_972_);
v___x_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 0, v___x_982_);
v___x_984_ = v___x_979_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_a_969_);
lean_dec_ref(v_arg_954_);
lean_dec_ref(v_arg_953_);
lean_dec_ref(v_G_930_);
lean_dec_ref(v_target_927_);
lean_dec(v_goal_926_);
v_a_988_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_971_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_971_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_dec_ref(v_arg_954_);
lean_dec_ref(v_arg_953_);
lean_dec_ref(v_G_930_);
lean_dec_ref(v_target_927_);
lean_dec(v_goal_926_);
v_a_996_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_968_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_968_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec_ref(v_arg_954_);
lean_dec_ref(v_arg_953_);
lean_dec_ref(v_G_930_);
lean_dec(v_nm_928_);
lean_dec_ref(v_target_927_);
lean_dec(v_goal_926_);
v_a_1004_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_966_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_966_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec_ref(v_arg_954_);
lean_dec_ref(v_arg_953_);
lean_dec_ref(v_G_930_);
lean_dec(v_nm_928_);
lean_dec_ref(v_target_927_);
lean_dec(v_goal_926_);
v_a_1013_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_955_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_955_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
}
v___jp_943_:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_box(0);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___boxed(lean_object** _args){
lean_object* v_goal_1021_ = _args[0];
lean_object* v_target_1022_ = _args[1];
lean_object* v_nm_1023_ = _args[2];
lean_object* v_00_u03c6_1024_ = _args[3];
lean_object* v_G_1025_ = _args[4];
lean_object* v_a_1026_ = _args[5];
lean_object* v_a_1027_ = _args[6];
lean_object* v_a_1028_ = _args[7];
lean_object* v_a_1029_ = _args[8];
lean_object* v_a_1030_ = _args[9];
lean_object* v_a_1031_ = _args[10];
lean_object* v_a_1032_ = _args[11];
lean_object* v_a_1033_ = _args[12];
lean_object* v_a_1034_ = _args[13];
lean_object* v_a_1035_ = _args[14];
lean_object* v_a_1036_ = _args[15];
lean_object* v_a_1037_ = _args[16];
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f(v_goal_1021_, v_target_1022_, v_nm_1023_, v_00_u03c6_1024_, v_G_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
lean_dec(v_a_1034_);
lean_dec_ref(v_a_1033_);
lean_dec(v_a_1032_);
lean_dec_ref(v_a_1031_);
lean_dec(v_a_1030_);
lean_dec_ref(v_a_1029_);
lean_dec(v_a_1028_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1(lean_object* v_mvarId_1039_, lean_object* v_val_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(v_mvarId_1039_, v_val_1040_, v___y_1049_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___boxed(lean_object* v_mvarId_1054_, lean_object* v_val_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1(v_mvarId_1054_, v_val_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1(lean_object* v_00_u03b2_1069_, lean_object* v_x_1070_, lean_object* v_x_1071_, lean_object* v_x_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1___redArg(v_x_1070_, v_x_1071_, v_x_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1074_, lean_object* v_x_1075_, size_t v_x_1076_, size_t v_x_1077_, lean_object* v_x_1078_, lean_object* v_x_1079_){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___redArg(v_x_1075_, v_x_1076_, v_x_1077_, v_x_1078_, v_x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1081_, lean_object* v_x_1082_, lean_object* v_x_1083_, lean_object* v_x_1084_, lean_object* v_x_1085_, lean_object* v_x_1086_){
_start:
{
size_t v_x_12261__boxed_1087_; size_t v_x_12262__boxed_1088_; lean_object* v_res_1089_; 
v_x_12261__boxed_1087_ = lean_unbox_usize(v_x_1083_);
lean_dec(v_x_1083_);
v_x_12262__boxed_1088_ = lean_unbox_usize(v_x_1084_);
lean_dec(v_x_1084_);
v_res_1089_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2(v_00_u03b2_1081_, v_x_1082_, v_x_12261__boxed_1087_, v_x_12262__boxed_1088_, v_x_1085_, v_x_1086_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1090_, lean_object* v_n_1091_, lean_object* v_k_1092_, lean_object* v_v_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3___redArg(v_n_1091_, v_k_1092_, v_v_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1095_, size_t v_depth_1096_, lean_object* v_keys_1097_, lean_object* v_vals_1098_, lean_object* v_heq_1099_, lean_object* v_i_1100_, lean_object* v_entries_1101_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_1096_, v_keys_1097_, v_vals_1098_, v_i_1100_, v_entries_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1103_, lean_object* v_depth_1104_, lean_object* v_keys_1105_, lean_object* v_vals_1106_, lean_object* v_heq_1107_, lean_object* v_i_1108_, lean_object* v_entries_1109_){
_start:
{
size_t v_depth_boxed_1110_; lean_object* v_res_1111_; 
v_depth_boxed_1110_ = lean_unbox_usize(v_depth_1104_);
lean_dec(v_depth_1104_);
v_res_1111_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__4(v_00_u03b2_1103_, v_depth_boxed_1110_, v_keys_1105_, v_vals_1106_, v_heq_1107_, v_i_1108_, v_entries_1109_);
lean_dec_ref(v_vals_1106_);
lean_dec_ref(v_keys_1105_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1112_, lean_object* v_x_1113_, lean_object* v_x_1114_, lean_object* v_x_1115_, lean_object* v_x_1116_){
_start:
{
lean_object* v___x_1117_; 
v___x_1117_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_x_1113_, v_x_1114_, v_x_1115_, v_x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(lean_object* v_x_1118_, uint8_t v_bi_1119_, lean_object* v_t_1120_, lean_object* v_b_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v___y_1130_; lean_object* v___x_1133_; uint8_t v_debug_1134_; 
v___x_1133_ = lean_st_ref_get(v___y_1123_);
v_debug_1134_ = lean_ctor_get_uint8(v___x_1133_, sizeof(void*)*13);
lean_dec(v___x_1133_);
if (v_debug_1134_ == 0)
{
v___y_1130_ = v___y_1123_;
goto v___jp_1129_;
}
else
{
lean_object* v___x_1135_; 
v___x_1135_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_1120_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v___x_1136_; 
lean_dec_ref_known(v___x_1135_, 1);
v___x_1136_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_dec_ref_known(v___x_1136_, 1);
v___y_1130_ = v___y_1123_;
goto v___jp_1129_;
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_dec_ref(v_b_1121_);
lean_dec_ref(v_t_1120_);
lean_dec(v_x_1118_);
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1136_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec_ref(v_b_1121_);
lean_dec_ref(v_t_1120_);
lean_dec(v_x_1118_);
v_a_1145_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1135_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1135_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
v___jp_1129_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = l_Lean_Expr_lam___override(v_x_1118_, v_t_1120_, v_b_1121_, v_bi_1119_);
v___x_1132_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1131_, v___y_1130_);
return v___x_1132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg___boxed(lean_object* v_x_1153_, lean_object* v_bi_1154_, lean_object* v_t_1155_, lean_object* v_b_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
uint8_t v_bi_boxed_1164_; lean_object* v_res_1165_; 
v_bi_boxed_1164_ = lean_unbox(v_bi_1154_);
v_res_1165_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(v_x_1153_, v_bi_boxed_1164_, v_t_1155_, v_b_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0(lean_object* v_x_1166_, uint8_t v_bi_1167_, lean_object* v_t_1168_, lean_object* v_b_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v___x_1182_; 
v___x_1182_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(v_x_1166_, v_bi_1167_, v_t_1168_, v_b_1169_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___boxed(lean_object* v_x_1183_, lean_object* v_bi_1184_, lean_object* v_t_1185_, lean_object* v_b_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
uint8_t v_bi_boxed_1199_; lean_object* v_res_1200_; 
v_bi_boxed_1199_ = lean_unbox(v_bi_1184_);
v_res_1200_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0(v_x_1183_, v_bi_boxed_1199_, v_t_1185_, v_b_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
return v_res_1200_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1201_; double v___x_1202_; 
v___x_1201_ = lean_unsigned_to_nat(0u);
v___x_1202_ = lean_float_of_nat(v___x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(lean_object* v_cls_1206_, lean_object* v_msg_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v_ref_1213_; lean_object* v___x_1214_; lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1260_; 
v_ref_1213_ = lean_ctor_get(v___y_1210_, 2);
v___x_1214_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0_spec__0(v_msg_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1217_ = v___x_1214_;
v_isShared_1218_ = v_isSharedCheck_1260_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1214_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1260_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v_traceState_1220_; lean_object* v_env_1221_; lean_object* v_nextMacroScope_1222_; lean_object* v_ngen_1223_; lean_object* v_auxDeclNGen_1224_; lean_object* v_cache_1225_; lean_object* v_recordedDeps_1226_; lean_object* v_messages_1227_; lean_object* v_infoState_1228_; lean_object* v_snapshotTasks_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1259_; 
v___x_1219_ = lean_st_ref_take(v___y_1211_);
v_traceState_1220_ = lean_ctor_get(v___x_1219_, 4);
v_env_1221_ = lean_ctor_get(v___x_1219_, 0);
v_nextMacroScope_1222_ = lean_ctor_get(v___x_1219_, 1);
v_ngen_1223_ = lean_ctor_get(v___x_1219_, 2);
v_auxDeclNGen_1224_ = lean_ctor_get(v___x_1219_, 3);
v_cache_1225_ = lean_ctor_get(v___x_1219_, 5);
v_recordedDeps_1226_ = lean_ctor_get(v___x_1219_, 6);
v_messages_1227_ = lean_ctor_get(v___x_1219_, 7);
v_infoState_1228_ = lean_ctor_get(v___x_1219_, 8);
v_snapshotTasks_1229_ = lean_ctor_get(v___x_1219_, 9);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1231_ = v___x_1219_;
v_isShared_1232_ = v_isSharedCheck_1259_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_snapshotTasks_1229_);
lean_inc(v_infoState_1228_);
lean_inc(v_messages_1227_);
lean_inc(v_recordedDeps_1226_);
lean_inc(v_cache_1225_);
lean_inc(v_traceState_1220_);
lean_inc(v_auxDeclNGen_1224_);
lean_inc(v_ngen_1223_);
lean_inc(v_nextMacroScope_1222_);
lean_inc(v_env_1221_);
lean_dec(v___x_1219_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1259_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
uint64_t v_tid_1233_; lean_object* v_traces_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1258_; 
v_tid_1233_ = lean_ctor_get_uint64(v_traceState_1220_, sizeof(void*)*1);
v_traces_1234_ = lean_ctor_get(v_traceState_1220_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v_traceState_1220_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1236_ = v_traceState_1220_;
v_isShared_1237_ = v_isSharedCheck_1258_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_traces_1234_);
lean_dec(v_traceState_1220_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1258_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; double v___x_1240_; uint8_t v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1238_ = lean_box(0);
v___x_1239_ = lean_box(0);
v___x_1240_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__0);
v___x_1241_ = 0;
v___x_1242_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__1));
v___x_1243_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1243_, 0, v_cls_1206_);
lean_ctor_set(v___x_1243_, 1, v___x_1239_);
lean_ctor_set(v___x_1243_, 2, v___x_1242_);
lean_ctor_set_float(v___x_1243_, sizeof(void*)*3, v___x_1240_);
lean_ctor_set_float(v___x_1243_, sizeof(void*)*3 + 8, v___x_1240_);
lean_ctor_set_uint8(v___x_1243_, sizeof(void*)*3 + 16, v___x_1241_);
v___x_1244_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___closed__2));
v___x_1245_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set(v___x_1245_, 1, v_a_1215_);
lean_ctor_set(v___x_1245_, 2, v___x_1244_);
lean_inc(v_ref_1213_);
v___x_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1246_, 0, v_ref_1213_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = l_Lean_PersistentArray_push___redArg(v_traces_1234_, v___x_1246_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 0, v___x_1247_);
v___x_1249_ = v___x_1236_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1247_);
lean_ctor_set_uint64(v_reuseFailAlloc_1257_, sizeof(void*)*1, v_tid_1233_);
v___x_1249_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
lean_object* v___x_1251_; 
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 4, v___x_1249_);
v___x_1251_ = v___x_1231_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_env_1221_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v_nextMacroScope_1222_);
lean_ctor_set(v_reuseFailAlloc_1256_, 2, v_ngen_1223_);
lean_ctor_set(v_reuseFailAlloc_1256_, 3, v_auxDeclNGen_1224_);
lean_ctor_set(v_reuseFailAlloc_1256_, 4, v___x_1249_);
lean_ctor_set(v_reuseFailAlloc_1256_, 5, v_cache_1225_);
lean_ctor_set(v_reuseFailAlloc_1256_, 6, v_recordedDeps_1226_);
lean_ctor_set(v_reuseFailAlloc_1256_, 7, v_messages_1227_);
lean_ctor_set(v_reuseFailAlloc_1256_, 8, v_infoState_1228_);
lean_ctor_set(v_reuseFailAlloc_1256_, 9, v_snapshotTasks_1229_);
v___x_1251_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1252_ = lean_st_ref_put(v___y_1211_, v___x_1251_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1238_);
v___x_1254_ = v___x_1217_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1238_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg___boxed(lean_object* v_cls_1261_, lean_object* v_msg_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(v_cls_1261_, v_msg_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
return v_res_1268_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11(void){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1288_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8));
v___x_1289_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__10));
v___x_1290_ = l_Lean_Name_append(v___x_1289_, v___x_1288_);
return v___x_1290_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__12));
v___x_1293_ = l_Lean_stringToMessageData(v___x_1292_);
return v___x_1293_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__14));
v___x_1296_ = l_Lean_stringToMessageData(v___x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f(lean_object* v_goal_1297_, lean_object* v_nm_1298_, lean_object* v_eqn_1299_, lean_object* v_G_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_){
_start:
{
lean_object* v___y_1314_; uint8_t v___y_1315_; lean_object* v___x_1320_; 
lean_inc_ref(v_eqn_1299_);
v___x_1320_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg(v_eqn_1299_, v_G_1300_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1514_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1323_ = v___x_1320_;
v_isShared_1324_ = v_isSharedCheck_1514_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1320_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1514_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
if (lean_obj_tag(v_a_1321_) == 1)
{
lean_object* v_val_1325_; lean_object* v_snd_1326_; lean_object* v_snd_1327_; lean_object* v_fst_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1508_; 
lean_del_object(v___x_1323_);
v_val_1325_ = lean_ctor_get(v_a_1321_, 0);
lean_inc(v_val_1325_);
lean_dec_ref_known(v_a_1321_, 1);
v_snd_1326_ = lean_ctor_get(v_val_1325_, 1);
lean_inc(v_snd_1326_);
v_snd_1327_ = lean_ctor_get(v_snd_1326_, 1);
lean_inc(v_snd_1327_);
v_fst_1328_ = lean_ctor_get(v_val_1325_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v_val_1325_);
if (v_isSharedCheck_1508_ == 0)
{
lean_object* v_unused_1509_; 
v_unused_1509_ = lean_ctor_get(v_val_1325_, 1);
lean_dec(v_unused_1509_);
v___x_1330_ = v_val_1325_;
v_isShared_1331_ = v_isSharedCheck_1508_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_fst_1328_);
lean_dec(v_val_1325_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1508_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v_fst_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1506_; 
v_fst_1332_ = lean_ctor_get(v_snd_1326_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_snd_1326_);
if (v_isSharedCheck_1506_ == 0)
{
lean_object* v_unused_1507_; 
v_unused_1507_ = lean_ctor_get(v_snd_1326_, 1);
lean_dec(v_unused_1507_);
v___x_1334_ = v_snd_1326_;
v_isShared_1335_ = v_isSharedCheck_1506_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_fst_1332_);
lean_dec(v_snd_1326_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1506_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v_fst_1336_; lean_object* v_snd_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1505_; 
v_fst_1336_ = lean_ctor_get(v_snd_1327_, 0);
v_snd_1337_ = lean_ctor_get(v_snd_1327_, 1);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_snd_1327_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1339_ = v_snd_1327_;
v_isShared_1340_ = v_isSharedCheck_1505_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_snd_1337_);
lean_inc(v_fst_1336_);
lean_dec(v_snd_1327_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1505_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___y_1342_; lean_object* v___x_1347_; 
lean_inc(v_fst_1328_);
v___x_1347_ = l_Lean_Meta_Sym_inferType(v_fst_1328_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v_a_1348_; lean_object* v___x_1349_; 
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
lean_inc_n(v_a_1348_, 2);
lean_dec_ref_known(v___x_1347_, 1);
v___x_1349_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_1348_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1349_) == 0)
{
lean_object* v_a_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v_a_1350_ = lean_ctor_get(v___x_1349_, 0);
lean_inc(v_a_1350_);
lean_dec_ref_known(v___x_1349_, 1);
v___x_1351_ = l_Lean_Expr_fvarId_x21(v_fst_1328_);
v___x_1352_ = l_Lean_FVarId_getUserName___redArg(v___x_1351_, v_a_1308_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; uint8_t v___x_1354_; lean_object* v___x_1355_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
lean_dec_ref_known(v___x_1352_, 1);
v___x_1354_ = 0;
lean_inc(v_fst_1336_);
lean_inc(v_a_1348_);
v___x_1355_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(v_a_1353_, v___x_1354_, v_a_1348_, v_fst_1336_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v_fst_1358_; lean_object* v_snd_1359_; lean_object* v___y_1360_; lean_object* v___y_1361_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1365_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref_known(v___x_1355_, 1);
v___x_1406_ = lean_unsigned_to_nat(1u);
v___x_1407_ = lean_mk_empty_array_with_capacity(v___x_1406_);
lean_inc(v_fst_1332_);
v___x_1408_ = lean_array_push(v___x_1407_, v_fst_1332_);
v___x_1409_ = l_Lean_Meta_Sym_instantiateRevBetaS(v_fst_1336_, v___x_1408_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1409_) == 0)
{
uint8_t v___x_1410_; 
v___x_1410_ = lean_unbox(v_snd_1337_);
if (v___x_1410_ == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1412_; 
v_a_1411_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1409_, 1);
v___x_1412_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__0___redArg(v_nm_1298_, v___x_1354_, v_eqn_1299_, v_a_1411_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
lean_inc(v_a_1413_);
lean_dec_ref_known(v___x_1412_, 1);
v___x_1414_ = lean_box(0);
v___x_1415_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1413_, v___x_1414_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc_n(v_a_1416_, 2);
lean_dec_ref_known(v___x_1415_, 1);
v_fst_1358_ = v_a_1416_;
v_snd_1359_ = v_a_1416_;
v___y_1360_ = v_a_1301_;
v___y_1361_ = v_a_1302_;
v___y_1362_ = v_a_1303_;
v___y_1363_ = v_a_1304_;
v___y_1364_ = v_a_1305_;
v___y_1365_ = v_a_1306_;
v___y_1366_ = v_a_1307_;
v___y_1367_ = v_a_1308_;
v___y_1368_ = v_a_1309_;
v___y_1369_ = v_a_1310_;
v___y_1370_ = v_a_1311_;
goto v___jp_1357_;
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
lean_dec(v_a_1356_);
lean_dec(v_a_1350_);
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec(v_goal_1297_);
v_a_1417_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1415_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1415_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1432_; 
lean_dec(v_a_1356_);
lean_dec(v_a_1350_);
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec(v_goal_1297_);
v_a_1425_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1427_ = v___x_1412_;
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1412_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1430_; 
if (v_isShared_1428_ == 0)
{
v___x_1430_ = v___x_1427_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_a_1425_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v_a_1433_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_a_1433_);
lean_dec_ref_known(v___x_1409_, 1);
v___x_1434_ = lean_box(0);
v___x_1435_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1433_, v___x_1434_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1437_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1436_);
lean_dec_ref_known(v___x_1435_, 1);
v___x_1437_ = l_Lean_Meta_Sym_shareCommon(v_a_1436_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1439_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc_n(v_a_1438_, 2);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__0___redArg(v_nm_1298_, v___x_1354_, v_eqn_1299_, v_a_1438_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v_fst_1358_ = v_a_1438_;
v_snd_1359_ = v_a_1440_;
v___y_1360_ = v_a_1301_;
v___y_1361_ = v_a_1302_;
v___y_1362_ = v_a_1303_;
v___y_1363_ = v_a_1304_;
v___y_1364_ = v_a_1305_;
v___y_1365_ = v_a_1306_;
v___y_1366_ = v_a_1307_;
v___y_1367_ = v_a_1308_;
v___y_1368_ = v_a_1309_;
v___y_1369_ = v_a_1310_;
v___y_1370_ = v_a_1311_;
goto v___jp_1357_;
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_dec(v_a_1438_);
lean_dec(v_a_1356_);
lean_dec(v_a_1350_);
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec(v_goal_1297_);
v_a_1441_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1439_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1439_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
lean_dec(v_a_1356_);
lean_dec(v_a_1350_);
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v_a_1449_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1437_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1437_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1449_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec(v_a_1356_);
lean_dec(v_a_1350_);
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v_a_1457_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1435_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1435_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
lean_dec(v_a_1356_);
lean_dec(v_a_1350_);
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v_a_1465_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1409_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1409_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
v___jp_1357_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1371_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__3));
v___x_1372_ = lean_box(0);
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 1);
lean_ctor_set(v___x_1339_, 1, v___x_1372_);
lean_ctor_set(v___x_1339_, 0, v_a_1350_);
v___x_1374_ = v___x_1339_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1350_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v_toCold_1378_; lean_object* v_options_1379_; uint8_t v_hasTrace_1380_; 
v___x_1375_ = l_Lean_mkConst(v___x_1371_, v___x_1374_);
lean_inc(v_fst_1332_);
lean_inc(v_fst_1328_);
v___x_1376_ = l_Lean_mkApp5(v___x_1375_, v_a_1348_, v_fst_1328_, v_fst_1332_, v_a_1356_, v_snd_1359_);
v___x_1377_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f_spec__1___redArg(v_goal_1297_, v___x_1376_, v___y_1368_);
lean_dec_ref(v___x_1377_);
v_toCold_1378_ = lean_ctor_get(v___y_1369_, 0);
v_options_1379_ = lean_ctor_get(v_toCold_1378_, 2);
v_hasTrace_1380_ = lean_ctor_get_uint8(v_options_1379_, sizeof(void*)*1);
if (v_hasTrace_1380_ == 0)
{
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
v___y_1342_ = v_fst_1358_;
goto v___jp_1341_;
}
else
{
lean_object* v_inheritedTraceOptions_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
v_inheritedTraceOptions_1381_ = lean_ctor_get(v_toCold_1378_, 11);
v___x_1382_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__8));
v___x_1383_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__11);
v___x_1384_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1381_, v_options_1379_, v___x_1383_);
if (v___x_1384_ == 0)
{
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
v___y_1342_ = v_fst_1358_;
goto v___jp_1341_;
}
else
{
lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1385_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__13);
v___x_1386_ = l_Lean_MessageData_ofExpr(v_fst_1328_);
if (v_isShared_1335_ == 0)
{
lean_ctor_set_tag(v___x_1334_, 7);
lean_ctor_set(v___x_1334_, 1, v___x_1386_);
lean_ctor_set(v___x_1334_, 0, v___x_1385_);
v___x_1388_ = v___x_1334_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1389_ = lean_obj_once(&l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15, &l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15_once, _init_l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___closed__15);
if (v_isShared_1331_ == 0)
{
lean_ctor_set_tag(v___x_1330_, 7);
lean_ctor_set(v___x_1330_, 1, v___x_1389_);
lean_ctor_set(v___x_1330_, 0, v___x_1388_);
v___x_1391_ = v___x_1330_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1388_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v___x_1389_);
v___x_1391_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1392_ = l_Lean_MessageData_ofExpr(v_fst_1332_);
v___x_1393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1391_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
v___x_1394_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(v___x_1382_, v___x_1393_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_dec_ref_known(v___x_1394_, 1);
v___y_1342_ = v_fst_1358_;
goto v___jp_1341_;
}
else
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1402_; 
lean_dec_ref(v_fst_1358_);
lean_dec(v_snd_1337_);
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1397_ = v___x_1394_;
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1394_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1400_; 
if (v_isShared_1398_ == 0)
{
v___x_1400_ = v___x_1397_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_a_1395_);
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
}
}
}
}
}
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
lean_dec(v_a_1350_);
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_dec(v_fst_1336_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v_a_1473_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1475_ = v___x_1355_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1355_);
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
lean_dec(v_a_1350_);
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_dec(v_fst_1336_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v_a_1481_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1352_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1352_);
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
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
lean_dec(v_a_1348_);
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_dec(v_fst_1336_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v_a_1489_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1349_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1349_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_del_object(v___x_1339_);
lean_dec(v_snd_1337_);
lean_dec(v_fst_1336_);
lean_del_object(v___x_1334_);
lean_dec(v_fst_1332_);
lean_del_object(v___x_1330_);
lean_dec(v_fst_1328_);
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v_a_1497_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1347_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1347_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
v___jp_1341_:
{
lean_object* v___x_1343_; uint8_t v___x_1344_; 
v___x_1343_ = l_Lean_Expr_mvarId_x21(v___y_1342_);
lean_dec_ref(v___y_1342_);
v___x_1344_ = lean_unbox(v_snd_1337_);
lean_dec(v_snd_1337_);
if (v___x_1344_ == 0)
{
uint8_t v___x_1345_; 
v___x_1345_ = 1;
v___y_1314_ = v___x_1343_;
v___y_1315_ = v___x_1345_;
goto v___jp_1313_;
}
else
{
uint8_t v___x_1346_; 
v___x_1346_ = 0;
v___y_1314_ = v___x_1343_;
v___y_1315_ = v___x_1346_;
goto v___jp_1313_;
}
}
}
}
}
}
else
{
lean_object* v___x_1510_; lean_object* v___x_1512_; 
lean_dec(v_a_1321_);
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v___x_1510_ = lean_box(0);
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 0, v___x_1510_);
v___x_1512_ = v___x_1323_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec_ref(v_eqn_1299_);
lean_dec(v_nm_1298_);
lean_dec(v_goal_1297_);
v_a_1515_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1320_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1320_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
v___jp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1316_ = lean_box(v___y_1315_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___y_1314_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___boxed(lean_object* v_goal_1523_, lean_object* v_nm_1524_, lean_object* v_eqn_1525_, lean_object* v_G_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f(v_goal_1523_, v_nm_1524_, v_eqn_1525_, v_G_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_);
lean_dec(v_a_1537_);
lean_dec_ref(v_a_1536_);
lean_dec(v_a_1535_);
lean_dec_ref(v_a_1534_);
lean_dec(v_a_1533_);
lean_dec_ref(v_a_1532_);
lean_dec(v_a_1531_);
lean_dec_ref(v_a_1530_);
lean_dec(v_a_1529_);
lean_dec(v_a_1528_);
lean_dec_ref(v_a_1527_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1(lean_object* v_cls_1540_, lean_object* v_msg_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___redArg(v_cls_1540_, v_msg_1541_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1___boxed(lean_object* v_cls_1555_, lean_object* v_msg_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f_spec__1(v_cls_1555_, v_msg_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0(lean_object* v_x_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v___x_1583_; 
lean_inc(v___y_1577_);
lean_inc_ref(v___y_1576_);
lean_inc(v___y_1575_);
lean_inc_ref(v___y_1574_);
lean_inc(v___y_1573_);
lean_inc(v___y_1572_);
lean_inc_ref(v___y_1571_);
v___x_1583_ = lean_apply_12(v_x_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, lean_box(0));
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0___boxed(lean_object* v_x_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0(v_x_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(lean_object* v_mvarId_1598_, lean_object* v_x_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v___f_1612_; lean_object* v___x_1613_; 
lean_inc(v___y_1606_);
lean_inc_ref(v___y_1605_);
lean_inc(v___y_1604_);
lean_inc_ref(v___y_1603_);
lean_inc(v___y_1602_);
lean_inc(v___y_1601_);
lean_inc_ref(v___y_1600_);
v___f_1612_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_1612_, 0, v_x_1599_);
lean_closure_set(v___f_1612_, 1, v___y_1600_);
lean_closure_set(v___f_1612_, 2, v___y_1601_);
lean_closure_set(v___f_1612_, 3, v___y_1602_);
lean_closure_set(v___f_1612_, 4, v___y_1603_);
lean_closure_set(v___f_1612_, 5, v___y_1604_);
lean_closure_set(v___f_1612_, 6, v___y_1605_);
lean_closure_set(v___f_1612_, 7, v___y_1606_);
v___x_1613_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1598_, v___f_1612_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_);
if (lean_obj_tag(v___x_1613_) == 0)
{
return v___x_1613_;
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg___boxed(lean_object* v_mvarId_1622_, lean_object* v_x_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_mvarId_1622_, v_x_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0(lean_object* v_00_u03b1_1637_, lean_object* v_mvarId_1638_, lean_object* v_x_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_mvarId_1638_, v_x_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___boxed(lean_object* v_00_u03b1_1653_, lean_object* v_mvarId_1654_, lean_object* v_x_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0(v_00_u03b1_1653_, v_mvarId_1654_, v_x_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(lean_object* v___x_1669_, lean_object* v___f_1670_, lean_object* v_____r_1671_, lean_object* v_goal_1672_, lean_object* v_pending_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v___x_1686_; 
lean_inc(v___x_1669_);
v___x_1686_ = l_Lean_Elab_Tactic_VCGen_introsHygienicN(v_goal_1672_, v___x_1669_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1688_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc_n(v_a_1687_, 2);
lean_dec_ref_known(v___x_1686_, 1);
v___x_1688_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_a_1687_, v___f_1670_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1713_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1691_ = v___x_1688_;
v_isShared_1692_ = v_isSharedCheck_1713_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1688_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1713_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___y_1694_; lean_object* v___x_1702_; 
v___x_1702_ = l_Lean_LocalContext_lastDecl(v_a_1689_);
lean_dec(v_a_1689_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v___x_1703_; 
v___x_1703_ = lean_box(0);
v___y_1694_ = v___x_1703_;
goto v___jp_1693_;
}
else
{
lean_object* v_val_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1712_; 
v_val_1704_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1706_ = v___x_1702_;
v_isShared_1707_ = v_isSharedCheck_1712_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_val_1704_);
lean_dec(v___x_1702_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1712_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1708_; lean_object* v___x_1710_; 
v___x_1708_ = l_Lean_LocalDecl_fvarId(v_val_1704_);
lean_dec(v_val_1704_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v___x_1708_);
v___x_1710_ = v___x_1706_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
v___y_1694_ = v___x_1710_;
goto v___jp_1693_;
}
}
}
v___jp_1693_:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1700_; 
v___x_1695_ = lean_nat_sub(v_pending_1673_, v___x_1669_);
lean_dec(v___x_1669_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1695_);
lean_ctor_set(v___x_1696_, 1, v___y_1694_);
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v_a_1687_);
lean_ctor_set(v___x_1697_, 1, v___x_1696_);
v___x_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 0, v___x_1698_);
v___x_1700_ = v___x_1691_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v___x_1698_);
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
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
lean_dec(v_a_1687_);
lean_dec(v___x_1669_);
v_a_1714_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1688_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1688_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec_ref(v___f_1670_);
lean_dec(v___x_1669_);
v_a_1722_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1686_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1686_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_1730_ = _args[0];
lean_object* v___f_1731_ = _args[1];
lean_object* v_____r_1732_ = _args[2];
lean_object* v_goal_1733_ = _args[3];
lean_object* v_pending_1734_ = _args[4];
lean_object* v___y_1735_ = _args[5];
lean_object* v___y_1736_ = _args[6];
lean_object* v___y_1737_ = _args[7];
lean_object* v___y_1738_ = _args[8];
lean_object* v___y_1739_ = _args[9];
lean_object* v___y_1740_ = _args[10];
lean_object* v___y_1741_ = _args[11];
lean_object* v___y_1742_ = _args[12];
lean_object* v___y_1743_ = _args[13];
lean_object* v___y_1744_ = _args[14];
lean_object* v___y_1745_ = _args[15];
lean_object* v___y_1746_ = _args[16];
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(v___x_1730_, v___f_1731_, v_____r_1732_, v_goal_1733_, v_pending_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v_pending_1734_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0(lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v_lctx_1760_; lean_object* v___x_1761_; 
v_lctx_1760_ = lean_ctor_get(v___y_1755_, 2);
lean_inc_ref(v_lctx_1760_);
v___x_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1761_, 0, v_lctx_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0___boxed(lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__0(v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec_ref(v___y_1767_);
lean_dec(v___y_1766_);
lean_dec_ref(v___y_1765_);
lean_dec(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
return v_res_1774_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1777_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__1));
v___x_1778_ = l_Lean_stringToMessageData(v___x_1777_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(lean_object* v_a_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v___y_1793_; lean_object* v_snd_1813_; lean_object* v_fst_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1923_; 
v_snd_1813_ = lean_ctor_get(v_a_1779_, 1);
v_fst_1814_ = lean_ctor_get(v_a_1779_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v_a_1779_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1816_ = v_a_1779_;
v_isShared_1817_ = v_isSharedCheck_1923_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_snd_1813_);
lean_inc(v_fst_1814_);
lean_dec(v_a_1779_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1923_;
goto v_resetjp_1815_;
}
v___jp_1792_:
{
if (lean_obj_tag(v___y_1793_) == 0)
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1804_; 
v_a_1794_ = lean_ctor_get(v___y_1793_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___y_1793_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1796_ = v___y_1793_;
v_isShared_1797_ = v_isSharedCheck_1804_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___y_1793_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1804_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
if (lean_obj_tag(v_a_1794_) == 0)
{
lean_object* v_a_1798_; lean_object* v___x_1800_; 
v_a_1798_ = lean_ctor_get(v_a_1794_, 0);
lean_inc(v_a_1798_);
lean_dec_ref_known(v_a_1794_, 1);
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 0, v_a_1798_);
v___x_1800_ = v___x_1796_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1798_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
else
{
lean_object* v_a_1802_; 
lean_del_object(v___x_1796_);
v_a_1802_ = lean_ctor_get(v_a_1794_, 0);
lean_inc(v_a_1802_);
lean_dec_ref_known(v_a_1794_, 1);
v_a_1779_ = v_a_1802_;
goto _start;
}
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
v_a_1805_ = lean_ctor_get(v___y_1793_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___y_1793_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___y_1793_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___y_1793_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
v_resetjp_1815_:
{
lean_object* v_fst_1818_; lean_object* v_snd_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1922_; 
v_fst_1818_ = lean_ctor_get(v_snd_1813_, 0);
v_snd_1819_ = lean_ctor_get(v_snd_1813_, 1);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_snd_1813_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1821_ = v_snd_1813_;
v_isShared_1822_ = v_isSharedCheck_1922_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_snd_1819_);
lean_inc(v_fst_1818_);
lean_dec(v_snd_1813_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1922_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1823_; uint8_t v___x_1824_; 
v___x_1823_ = lean_unsigned_to_nat(0u);
v___x_1824_ = lean_nat_dec_lt(v___x_1823_, v_fst_1818_);
if (v___x_1824_ == 0)
{
lean_object* v___x_1826_; 
if (v_isShared_1822_ == 0)
{
v___x_1826_ = v___x_1821_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_fst_1818_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_snd_1819_);
v___x_1826_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
lean_object* v___x_1828_; 
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 1, v___x_1826_);
v___x_1828_ = v___x_1816_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_fst_1814_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v___x_1826_);
v___x_1828_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
return v___x_1829_;
}
}
}
else
{
lean_object* v___f_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___f_1832_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__0));
v___x_1833_ = lean_unsigned_to_nat(1u);
lean_inc(v_fst_1814_);
v___x_1834_ = l_Lean_MVarId_getType(v_fst_1814_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; 
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_a_1835_);
lean_dec_ref_known(v___x_1834_, 1);
if (lean_obj_tag(v_a_1835_) == 7)
{
lean_object* v_binderName_1836_; lean_object* v_binderType_1837_; lean_object* v_body_1838_; uint8_t v___x_1839_; 
v_binderName_1836_ = lean_ctor_get(v_a_1835_, 0);
lean_inc(v_binderName_1836_);
v_binderType_1837_ = lean_ctor_get(v_a_1835_, 1);
lean_inc_ref(v_binderType_1837_);
v_body_1838_ = lean_ctor_get(v_a_1835_, 2);
lean_inc_ref(v_body_1838_);
v___x_1839_ = l_Lean_Expr_hasLooseBVars(v_body_1838_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
lean_inc_ref(v_body_1838_);
lean_inc_ref(v_binderType_1837_);
lean_inc(v_binderName_1836_);
lean_inc_n(v_fst_1814_, 2);
v___x_1840_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_splitConjHyp_x3f___boxed), 17, 5);
lean_closure_set(v___x_1840_, 0, v_fst_1814_);
lean_closure_set(v___x_1840_, 1, v_a_1835_);
lean_closure_set(v___x_1840_, 2, v_binderName_1836_);
lean_closure_set(v___x_1840_, 3, v_binderType_1837_);
lean_closure_set(v___x_1840_, 4, v_body_1838_);
v___x_1841_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_fst_1814_, v___x_1840_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1841_, 1);
if (lean_obj_tag(v_a_1842_) == 1)
{
lean_object* v_val_1843_; lean_object* v___x_1844_; lean_object* v___x_1846_; 
lean_dec_ref(v_body_1838_);
lean_dec_ref(v_binderType_1837_);
lean_dec(v_binderName_1836_);
lean_dec(v_fst_1814_);
v_val_1843_ = lean_ctor_get(v_a_1842_, 0);
lean_inc(v_val_1843_);
lean_dec_ref_known(v_a_1842_, 1);
v___x_1844_ = lean_nat_add(v_fst_1818_, v___x_1833_);
lean_dec(v_fst_1818_);
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 0, v___x_1844_);
v___x_1846_ = v___x_1821_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1844_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_snd_1819_);
v___x_1846_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1848_; 
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 1, v___x_1846_);
lean_ctor_set(v___x_1816_, 0, v_val_1843_);
v___x_1848_ = v___x_1816_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_val_1843_);
lean_ctor_set(v_reuseFailAlloc_1850_, 1, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
v_a_1779_ = v___x_1848_;
goto _start;
}
}
}
else
{
lean_object* v___x_1852_; lean_object* v___x_1853_; 
lean_dec(v_a_1842_);
lean_del_object(v___x_1816_);
lean_inc_n(v_fst_1814_, 2);
v___x_1852_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_substEqHyp_x3f___boxed), 16, 4);
lean_closure_set(v___x_1852_, 0, v_fst_1814_);
lean_closure_set(v___x_1852_, 1, v_binderName_1836_);
lean_closure_set(v___x_1852_, 2, v_binderType_1837_);
lean_closure_set(v___x_1852_, 3, v_body_1838_);
v___x_1853_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_introPre_spec__0___redArg(v_fst_1814_, v___x_1852_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_a_1854_);
lean_dec_ref_known(v___x_1853_, 1);
if (lean_obj_tag(v_a_1854_) == 1)
{
lean_object* v_val_1855_; lean_object* v_snd_1856_; uint8_t v___x_1857_; 
lean_dec(v_fst_1814_);
v_val_1855_ = lean_ctor_get(v_a_1854_, 0);
lean_inc(v_val_1855_);
lean_dec_ref_known(v_a_1854_, 1);
v_snd_1856_ = lean_ctor_get(v_val_1855_, 1);
v___x_1857_ = lean_unbox(v_snd_1856_);
if (v___x_1857_ == 0)
{
lean_object* v_fst_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1870_; 
v_fst_1858_ = lean_ctor_get(v_val_1855_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v_val_1855_);
if (v_isSharedCheck_1870_ == 0)
{
lean_object* v_unused_1871_; 
v_unused_1871_ = lean_ctor_get(v_val_1855_, 1);
lean_dec(v_unused_1871_);
v___x_1860_ = v_val_1855_;
v_isShared_1861_ = v_isSharedCheck_1870_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_fst_1858_);
lean_dec(v_val_1855_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1870_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1862_; lean_object* v___x_1864_; 
v___x_1862_ = lean_nat_sub(v_fst_1818_, v___x_1833_);
lean_dec(v_fst_1818_);
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 1, v_snd_1819_);
lean_ctor_set(v___x_1860_, 0, v___x_1862_);
v___x_1864_ = v___x_1860_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v___x_1862_);
lean_ctor_set(v_reuseFailAlloc_1869_, 1, v_snd_1819_);
v___x_1864_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1866_; 
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 1, v___x_1864_);
lean_ctor_set(v___x_1821_, 0, v_fst_1858_);
v___x_1866_ = v___x_1821_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_fst_1858_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
v_a_1779_ = v___x_1866_;
goto _start;
}
}
}
}
else
{
lean_object* v_fst_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
lean_del_object(v___x_1821_);
lean_dec(v_snd_1819_);
v_fst_1872_ = lean_ctor_get(v_val_1855_, 0);
lean_inc(v_fst_1872_);
lean_dec(v_val_1855_);
v___x_1873_ = lean_box(0);
v___x_1874_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(v___x_1833_, v___f_1832_, v___x_1873_, v_fst_1872_, v_fst_1818_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v_fst_1818_);
v___y_1793_ = v___x_1874_;
goto v___jp_1792_;
}
}
else
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
lean_dec(v_a_1854_);
lean_del_object(v___x_1821_);
lean_dec(v_snd_1819_);
v___x_1875_ = lean_box(0);
v___x_1876_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(v___x_1833_, v___f_1832_, v___x_1875_, v_fst_1814_, v_fst_1818_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v_fst_1818_);
v___y_1793_ = v___x_1876_;
goto v___jp_1792_;
}
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_del_object(v___x_1821_);
lean_dec(v_snd_1819_);
lean_dec(v_fst_1818_);
lean_dec(v_fst_1814_);
v_a_1877_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1853_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1853_);
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
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec_ref(v_body_1838_);
lean_dec_ref(v_binderType_1837_);
lean_dec(v_binderName_1836_);
lean_del_object(v___x_1821_);
lean_dec(v_snd_1819_);
lean_dec(v_fst_1818_);
lean_del_object(v___x_1816_);
lean_dec(v_fst_1814_);
v_a_1885_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1841_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1841_);
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
else
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
lean_dec_ref(v_body_1838_);
lean_dec_ref(v_binderType_1837_);
lean_dec_ref_known(v_a_1835_, 3);
lean_dec(v_binderName_1836_);
lean_del_object(v___x_1821_);
lean_dec(v_snd_1819_);
lean_del_object(v___x_1816_);
v___x_1893_ = lean_box(0);
v___x_1894_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___lam__1(v___x_1833_, v___f_1832_, v___x_1893_, v_fst_1814_, v_fst_1818_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v_fst_1818_);
v___y_1793_ = v___x_1894_;
goto v___jp_1792_;
}
}
else
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
lean_dec(v_a_1835_);
v___x_1895_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___closed__2);
lean_inc(v_fst_1814_);
v___x_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1896_, 0, v_fst_1814_);
v___x_1897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1895_);
lean_ctor_set(v___x_1897_, 1, v___x_1896_);
v___x_1898_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v___x_1897_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v___x_1900_; 
lean_dec_ref_known(v___x_1898_, 1);
if (v_isShared_1822_ == 0)
{
v___x_1900_ = v___x_1821_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_fst_1818_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v_snd_1819_);
v___x_1900_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1902_; 
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 1, v___x_1900_);
v___x_1902_ = v___x_1816_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_fst_1814_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
v_a_1779_ = v___x_1902_;
goto _start;
}
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
lean_del_object(v___x_1821_);
lean_dec(v_snd_1819_);
lean_dec(v_fst_1818_);
lean_del_object(v___x_1816_);
lean_dec(v_fst_1814_);
v_a_1906_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1898_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1898_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
lean_del_object(v___x_1821_);
lean_dec(v_snd_1819_);
lean_dec(v_fst_1818_);
lean_del_object(v___x_1816_);
lean_dec(v_fst_1814_);
v_a_1914_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1834_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1834_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1914_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg___boxed(lean_object* v_a_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(v_a_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
lean_dec(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
return v_res_1937_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_introPre___closed__1(void){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1939_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_introPre___closed__0));
v___x_1940_ = l_Lean_stringToMessageData(v___x_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_introPre(lean_object* v_rule_1944_, lean_object* v_goal_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_){
_start:
{
lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = lean_box(0);
lean_inc(v_goal_1945_);
v___x_1968_ = l_Lean_Elab_Tactic_VCGen_Lean_Meta_Sym_BackwardRule_applyChecked(v_rule_1944_, v_goal_1945_, v___x_1967_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1968_, 1);
if (lean_obj_tag(v_a_1969_) == 1)
{
lean_object* v_mvarIds_1970_; 
v_mvarIds_1970_ = lean_ctor_get(v_a_1969_, 0);
lean_inc(v_mvarIds_1970_);
lean_dec_ref_known(v_a_1969_, 1);
if (lean_obj_tag(v_mvarIds_1970_) == 1)
{
lean_object* v_tail_1971_; 
v_tail_1971_ = lean_ctor_get(v_mvarIds_1970_, 1);
if (lean_obj_tag(v_tail_1971_) == 0)
{
lean_object* v_head_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_2008_; 
lean_dec(v_goal_1945_);
v_head_1972_ = lean_ctor_get(v_mvarIds_1970_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v_mvarIds_1970_);
if (v_isSharedCheck_2008_ == 0)
{
lean_object* v_unused_2009_; 
v_unused_2009_ = lean_ctor_get(v_mvarIds_1970_, 1);
lean_dec(v_unused_2009_);
v___x_1974_ = v_mvarIds_1970_;
v_isShared_1975_ = v_isSharedCheck_2008_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_head_1972_);
lean_dec(v_mvarIds_1970_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_2008_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1976_; lean_object* v___x_1978_; 
v___x_1976_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_introPre___closed__2));
if (v_isShared_1975_ == 0)
{
lean_ctor_set_tag(v___x_1974_, 0);
lean_ctor_set(v___x_1974_, 1, v___x_1976_);
v___x_1978_ = v___x_1974_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_head_1972_);
lean_ctor_set(v_reuseFailAlloc_2007_, 1, v___x_1976_);
v___x_1978_ = v_reuseFailAlloc_2007_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
lean_object* v___x_1979_; 
v___x_1979_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(v___x_1978_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1998_; 
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1982_ = v___x_1979_;
v_isShared_1983_ = v_isSharedCheck_1998_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_a_1980_);
lean_dec(v___x_1979_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1998_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v_snd_1984_; lean_object* v_fst_1985_; lean_object* v_snd_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1996_; 
v_snd_1984_ = lean_ctor_get(v_a_1980_, 1);
lean_inc(v_snd_1984_);
v_fst_1985_ = lean_ctor_get(v_a_1980_, 0);
lean_inc(v_fst_1985_);
lean_dec(v_a_1980_);
v_snd_1986_ = lean_ctor_get(v_snd_1984_, 1);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_snd_1984_);
if (v_isSharedCheck_1996_ == 0)
{
lean_object* v_unused_1997_; 
v_unused_1997_ = lean_ctor_get(v_snd_1984_, 0);
lean_dec(v_unused_1997_);
v___x_1988_ = v_snd_1984_;
v_isShared_1989_ = v_isSharedCheck_1996_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_snd_1986_);
lean_dec(v_snd_1984_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1996_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v_fst_1985_);
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_fst_1985_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v_snd_1986_);
v___x_1991_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
lean_object* v___x_1993_; 
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 0, v___x_1991_);
v___x_1993_ = v___x_1982_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1991_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
}
else
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
v_a_1999_ = lean_ctor_get(v___x_1979_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1979_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1979_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_mvarIds_1970_, 2);
v___y_1959_ = v_a_1953_;
v___y_1960_ = v_a_1954_;
v___y_1961_ = v_a_1955_;
v___y_1962_ = v_a_1956_;
goto v___jp_1958_;
}
}
else
{
lean_dec(v_mvarIds_1970_);
v___y_1959_ = v_a_1953_;
v___y_1960_ = v_a_1954_;
v___y_1961_ = v_a_1955_;
v___y_1962_ = v_a_1956_;
goto v___jp_1958_;
}
}
else
{
lean_dec(v_a_1969_);
v___y_1959_ = v_a_1953_;
v___y_1960_ = v_a_1954_;
v___y_1961_ = v_a_1955_;
v___y_1962_ = v_a_1956_;
goto v___jp_1958_;
}
}
else
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2017_; 
lean_dec(v_goal_1945_);
v_a_2010_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_2012_ = v___x_1968_;
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_1968_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2015_; 
if (v_isShared_2013_ == 0)
{
v___x_2015_ = v___x_2012_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_a_2010_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
}
v___jp_1958_:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1963_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_introPre___closed__1, &l_Lean_Elab_Tactic_VCGen_introPre___closed__1_once, _init_l_Lean_Elab_Tactic_VCGen_introPre___closed__1);
v___x_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1964_, 0, v_goal_1945_);
v___x_1965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1963_);
lean_ctor_set(v___x_1965_, 1, v___x_1964_);
v___x_1966_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v___x_1965_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
return v___x_1966_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_introPre___boxed(lean_object* v_rule_2018_, lean_object* v_goal_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_Elab_Tactic_VCGen_introPre(v_rule_2018_, v_goal_2019_, v_a_2020_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
lean_dec(v_a_2026_);
lean_dec_ref(v_a_2025_);
lean_dec(v_a_2024_);
lean_dec_ref(v_a_2023_);
lean_dec(v_a_2022_);
lean_dec(v_a_2021_);
lean_dec_ref(v_a_2020_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1(lean_object* v_inst_2033_, lean_object* v_a_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_){
_start:
{
lean_object* v___x_2047_; 
v___x_2047_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___redArg(v_a_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1___boxed(lean_object* v_inst_2048_, lean_object* v_a_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_introPre_spec__1(v_inst_2048_, v_a_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(lean_object* v_declName_2063_, lean_object* v_us_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2067_ = l_Lean_Expr_const___override(v_declName_2063_, v_us_2064_);
v___x_2068_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2067_, v___y_2065_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg___boxed(lean_object* v_declName_2069_, lean_object* v_us_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(v_declName_2069_, v_us_2070_, v___y_2071_);
lean_dec(v___y_2071_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0(lean_object* v_declName_2074_, lean_object* v_us_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v___x_2088_; 
v___x_2088_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(v_declName_2074_, v_us_2075_, v___y_2082_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___boxed(lean_object* v_declName_2089_, lean_object* v_us_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0(v_declName_2089_, v_us_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec(v___y_2092_);
lean_dec_ref(v___y_2091_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(lean_object* v_f_2104_, lean_object* v_a_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_){
_start:
{
lean_object* v___y_2114_; lean_object* v___x_2117_; uint8_t v_debug_2118_; 
v___x_2117_ = lean_st_ref_get(v___y_2107_);
v_debug_2118_ = lean_ctor_get_uint8(v___x_2117_, sizeof(void*)*13);
lean_dec(v___x_2117_);
if (v_debug_2118_ == 0)
{
v___y_2114_ = v___y_2107_;
goto v___jp_2113_;
}
else
{
lean_object* v___x_2119_; 
v___x_2119_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_2104_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
if (lean_obj_tag(v___x_2119_) == 0)
{
lean_object* v___x_2120_; 
lean_dec_ref_known(v___x_2119_, 1);
v___x_2120_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
if (lean_obj_tag(v___x_2120_) == 0)
{
lean_dec_ref_known(v___x_2120_, 1);
v___y_2114_ = v___y_2107_;
goto v___jp_2113_;
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec_ref(v_a_2105_);
lean_dec_ref(v_f_2104_);
v_a_2121_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2120_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2120_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
lean_dec_ref(v_a_2105_);
lean_dec_ref(v_f_2104_);
v_a_2129_ = lean_ctor_get(v___x_2119_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2119_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2119_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
v___jp_2113_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2115_ = l_Lean_Expr_app___override(v_f_2104_, v_a_2105_);
v___x_2116_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2115_, v___y_2114_);
return v___x_2116_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_f_2137_, lean_object* v_a_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
lean_object* v_res_2146_; 
v_res_2146_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(v_f_2137_, v_a_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1(lean_object* v_args_2147_, lean_object* v_endIdx_2148_, lean_object* v_b_2149_, lean_object* v_i_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
uint8_t v___x_2163_; 
v___x_2163_ = lean_nat_dec_le(v_endIdx_2148_, v_i_2150_);
if (v___x_2163_ == 0)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2164_ = l_Lean_instInhabitedExpr;
v___x_2165_ = lean_array_get_borrowed(v___x_2164_, v_args_2147_, v_i_2150_);
lean_inc(v___x_2165_);
v___x_2166_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(v_b_2149_, v___x_2165_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_);
if (lean_obj_tag(v___x_2166_) == 0)
{
lean_object* v_a_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v_a_2167_ = lean_ctor_get(v___x_2166_, 0);
lean_inc(v_a_2167_);
lean_dec_ref_known(v___x_2166_, 1);
v___x_2168_ = lean_unsigned_to_nat(1u);
v___x_2169_ = lean_nat_add(v_i_2150_, v___x_2168_);
lean_dec(v_i_2150_);
v_b_2149_ = v_a_2167_;
v_i_2150_ = v___x_2169_;
goto _start;
}
else
{
lean_dec(v_i_2150_);
return v___x_2166_;
}
}
else
{
lean_object* v___x_2171_; 
lean_dec(v_i_2150_);
v___x_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2171_, 0, v_b_2149_);
return v___x_2171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1___boxed(lean_object* v_args_2172_, lean_object* v_endIdx_2173_, lean_object* v_b_2174_, lean_object* v_i_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1(v_args_2172_, v_endIdx_2173_, v_b_2174_, v_i_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec(v___y_2182_);
lean_dec_ref(v___y_2181_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
lean_dec(v___y_2178_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v_endIdx_2173_);
lean_dec_ref(v_args_2172_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(lean_object* v_f_2189_, lean_object* v_args_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2203_ = lean_unsigned_to_nat(0u);
v___x_2204_ = lean_array_get_size(v_args_2190_);
v___x_2205_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1(v_args_2190_, v___x_2204_, v_f_2189_, v___x_2203_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1___boxed(lean_object* v_f_2206_, lean_object* v_args_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
lean_object* v_res_2220_; 
v_res_2220_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(v_f_2206_, v_args_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
lean_dec(v___y_2210_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec_ref(v_args_2207_);
return v_res_2220_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8(void){
_start:
{
lean_object* v___x_2239_; lean_object* v_dummy_2240_; 
v___x_2239_ = lean_box(0);
v_dummy_2240_ = l_Lean_Expr_sort___override(v___x_2239_);
return v_dummy_2240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2(lean_object* v_goal_2241_, lean_object* v_x_2242_, lean_object* v_x_2243_, lean_object* v_x_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
if (lean_obj_tag(v_x_2242_) == 5)
{
lean_object* v_fn_2257_; lean_object* v_arg_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v_fn_2257_ = lean_ctor_get(v_x_2242_, 0);
lean_inc_ref(v_fn_2257_);
v_arg_2258_ = lean_ctor_get(v_x_2242_, 1);
lean_inc_ref(v_arg_2258_);
lean_dec_ref_known(v_x_2242_, 2);
v___x_2259_ = lean_array_set(v_x_2243_, v_x_2244_, v_arg_2258_);
v___x_2260_ = lean_unsigned_to_nat(1u);
v___x_2261_ = lean_nat_sub(v_x_2244_, v___x_2260_);
lean_dec(v_x_2244_);
v_x_2242_ = v_fn_2257_;
v_x_2243_ = v___x_2259_;
v_x_2244_ = v___x_2261_;
goto _start;
}
else
{
lean_object* v___x_2263_; uint8_t v___x_2264_; 
lean_dec(v_x_2244_);
v___x_2263_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__3));
v___x_2264_ = l_Lean_Expr_isConstOf(v_x_2242_, v___x_2263_);
if (v___x_2264_ == 0)
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
lean_dec_ref(v_x_2243_);
lean_dec_ref(v_x_2242_);
lean_dec(v_goal_2241_);
v___x_2265_ = lean_box(0);
v___x_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
return v___x_2266_;
}
else
{
lean_object* v___x_2267_; lean_object* v___x_2268_; uint8_t v___x_2269_; 
v___x_2267_ = lean_unsigned_to_nat(2u);
v___x_2268_ = lean_array_get_size(v_x_2243_);
v___x_2269_ = lean_nat_dec_lt(v___x_2267_, v___x_2268_);
if (v___x_2269_ == 0)
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
lean_dec_ref(v_x_2243_);
lean_dec_ref(v_x_2242_);
lean_dec(v_goal_2241_);
v___x_2270_ = lean_box(0);
v___x_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
return v___x_2271_;
}
else
{
lean_object* v___x_2272_; lean_object* v___x_2273_; uint8_t v___x_2274_; 
v___x_2272_ = lean_array_fget_borrowed(v_x_2243_, v___x_2267_);
v___x_2273_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__5));
v___x_2274_ = l_Lean_Expr_isAppOf(v___x_2272_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
lean_dec_ref(v_x_2243_);
lean_dec_ref(v_x_2242_);
lean_dec(v_goal_2241_);
v___x_2275_ = lean_box(0);
v___x_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
return v___x_2276_;
}
else
{
lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2277_ = lean_unsigned_to_nat(3u);
v___x_2278_ = lean_nat_dec_lt(v___x_2277_, v___x_2268_);
if (v___x_2278_ == 0)
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_dec_ref(v_x_2243_);
lean_dec_ref(v_x_2242_);
lean_dec(v_goal_2241_);
v___x_2279_ = lean_box(0);
v___x_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
return v___x_2280_;
}
else
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2281_ = l_Lean_instInhabitedExpr;
v___x_2282_ = lean_array_fget_borrowed(v_x_2243_, v___x_2277_);
v___x_2283_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__7));
v___x_2284_ = l_Lean_Expr_constLevels_x21(v_x_2242_);
lean_dec_ref(v_x_2242_);
v___x_2285_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__0___redArg(v___x_2283_, v___x_2284_, v___y_2251_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2285_, 1);
v___x_2287_ = lean_unsigned_to_nat(0u);
v___x_2288_ = lean_array_get_borrowed(v___x_2281_, v_x_2243_, v___x_2287_);
v___x_2289_ = lean_unsigned_to_nat(1u);
v___x_2290_ = lean_array_get_borrowed(v___x_2281_, v_x_2243_, v___x_2289_);
v___x_2291_ = l_Lean_Expr_appArg_x21(v___x_2272_);
v___x_2292_ = lean_unsigned_to_nat(4u);
v___x_2293_ = lean_mk_empty_array_with_capacity(v___x_2292_);
lean_inc(v___x_2288_);
v___x_2294_ = lean_array_push(v___x_2293_, v___x_2288_);
lean_inc(v___x_2290_);
v___x_2295_ = lean_array_push(v___x_2294_, v___x_2290_);
v___x_2296_ = lean_array_push(v___x_2295_, v___x_2291_);
lean_inc(v___x_2282_);
v___x_2297_ = lean_array_push(v___x_2296_, v___x_2282_);
v___x_2298_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(v_a_2286_, v___x_2297_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
lean_dec_ref(v___x_2297_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_a_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
lean_inc(v_a_2299_);
lean_dec_ref_known(v___x_2298_, 1);
v___x_2300_ = l_Array_extract___redArg(v_x_2243_, v___x_2292_, v___x_2268_);
lean_dec_ref(v_x_2243_);
v___x_2301_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(v_a_2299_, v___x_2300_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
lean_dec_ref(v___x_2300_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v_a_2302_; lean_object* v___x_2303_; 
v_a_2302_ = lean_ctor_get(v___x_2301_, 0);
lean_inc(v_a_2302_);
lean_dec_ref_known(v___x_2301_, 1);
lean_inc(v_goal_2241_);
v___x_2303_ = l_Lean_MVarId_getType(v_goal_2241_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2305_; lean_object* v_dummy_2306_; lean_object* v_nargs_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v___x_2303_, 1);
v___x_2305_ = l_Lean_Expr_getAppFn(v_a_2304_);
v_dummy_2306_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8);
v_nargs_2307_ = l_Lean_Expr_getAppNumArgs(v_a_2304_);
lean_inc(v_nargs_2307_);
v___x_2308_ = lean_mk_array(v_nargs_2307_, v_dummy_2306_);
v___x_2309_ = lean_nat_sub(v_nargs_2307_, v___x_2289_);
lean_dec(v_nargs_2307_);
v___x_2310_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2304_, v___x_2308_, v___x_2309_);
lean_inc(v_a_2302_);
v___x_2311_ = lean_array_set(v___x_2310_, v___x_2277_, v_a_2302_);
v___x_2312_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1(v___x_2305_, v___x_2311_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
lean_dec_ref(v___x_2311_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v___x_2314_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v___x_2314_ = l_Lean_MVarId_replaceTargetDefEqFast(v_goal_2241_, v_a_2313_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2324_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2317_ = v___x_2314_;
v_isShared_2318_ = v_isSharedCheck_2324_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2314_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2324_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2322_; 
v___x_2319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2319_, 0, v_a_2315_);
lean_ctor_set(v___x_2319_, 1, v_a_2302_);
v___x_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
if (v_isShared_2318_ == 0)
{
lean_ctor_set(v___x_2317_, 0, v___x_2320_);
v___x_2322_ = v___x_2317_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v___x_2320_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2332_; 
lean_dec(v_a_2302_);
v_a_2325_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2327_ = v___x_2314_;
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_a_2325_);
lean_dec(v___x_2314_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2325_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2340_; 
lean_dec(v_a_2302_);
lean_dec(v_goal_2241_);
v_a_2333_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2335_ = v___x_2312_;
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_dec(v___x_2312_);
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
lean_dec(v_a_2302_);
lean_dec(v_goal_2241_);
v_a_2341_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2343_ = v___x_2303_;
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2303_);
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
lean_dec(v_goal_2241_);
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
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec_ref(v_x_2243_);
lean_dec(v_goal_2241_);
v_a_2357_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2298_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2298_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_dec_ref(v_x_2243_);
lean_dec(v_goal_2241_);
v_a_2365_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2285_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2285_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
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
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___boxed(lean_object* v_goal_2373_, lean_object* v_x_2374_, lean_object* v_x_2375_, lean_object* v_x_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2(v_goal_2373_, v_x_2374_, v_x_2375_, v_x_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
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
lean_dec_ref(v___y_2377_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f(lean_object* v_goal_2390_, lean_object* v_rhs_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v_dummy_2404_; lean_object* v_nargs_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
v_dummy_2404_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8);
v_nargs_2405_ = l_Lean_Expr_getAppNumArgs(v_rhs_2391_);
lean_inc(v_nargs_2405_);
v___x_2406_ = lean_mk_array(v_nargs_2405_, v_dummy_2404_);
v___x_2407_ = lean_unsigned_to_nat(1u);
v___x_2408_ = lean_nat_sub(v_nargs_2405_, v___x_2407_);
lean_dec(v_nargs_2405_);
v___x_2409_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2(v_goal_2390_, v_rhs_2391_, v___x_2406_, v___x_2408_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f___boxed(lean_object* v_goal_2410_, lean_object* v_rhs_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f(v_goal_2410_, v_rhs_2411_, v_a_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_);
lean_dec(v_a_2422_);
lean_dec_ref(v_a_2421_);
lean_dec(v_a_2420_);
lean_dec_ref(v_a_2419_);
lean_dec(v_a_2418_);
lean_dec_ref(v_a_2417_);
lean_dec(v_a_2416_);
lean_dec_ref(v_a_2415_);
lean_dec(v_a_2414_);
lean_dec(v_a_2413_);
lean_dec_ref(v_a_2412_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2(lean_object* v_f_2425_, lean_object* v_a_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___redArg(v_f_2425_, v_a_2426_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_f_2440_, lean_object* v_a_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__1_spec__1_spec__2(v_f_2440_, v_a_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(lean_object* v_a_2455_, lean_object* v_x_2456_){
_start:
{
if (lean_obj_tag(v_x_2456_) == 0)
{
lean_object* v___x_2457_; 
v___x_2457_ = lean_box(0);
return v___x_2457_;
}
else
{
lean_object* v_key_2458_; lean_object* v_value_2459_; lean_object* v_tail_2460_; uint8_t v___x_2461_; 
v_key_2458_ = lean_ctor_get(v_x_2456_, 0);
v_value_2459_ = lean_ctor_get(v_x_2456_, 1);
v_tail_2460_ = lean_ctor_get(v_x_2456_, 2);
v___x_2461_ = lean_name_eq(v_key_2458_, v_a_2455_);
if (v___x_2461_ == 0)
{
v_x_2456_ = v_tail_2460_;
goto _start;
}
else
{
lean_object* v___x_2463_; 
lean_inc(v_value_2459_);
v___x_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2463_, 0, v_value_2459_);
return v___x_2463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_2464_, lean_object* v_x_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(v_a_2464_, v_x_2465_);
lean_dec(v_x_2465_);
lean_dec(v_a_2464_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(lean_object* v_m_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v_buckets_2469_; lean_object* v___x_2470_; uint64_t v___y_2472_; 
v_buckets_2469_ = lean_ctor_get(v_m_2467_, 1);
v___x_2470_ = lean_array_get_size(v_buckets_2469_);
if (lean_obj_tag(v_a_2468_) == 0)
{
uint64_t v___x_2486_; 
v___x_2486_ = 1723ULL;
v___y_2472_ = v___x_2486_;
goto v___jp_2471_;
}
else
{
uint64_t v_hash_2487_; 
v_hash_2487_ = lean_ctor_get_uint64(v_a_2468_, sizeof(void*)*2);
v___y_2472_ = v_hash_2487_;
goto v___jp_2471_;
}
v___jp_2471_:
{
uint64_t v___x_2473_; uint64_t v___x_2474_; uint64_t v_fold_2475_; uint64_t v___x_2476_; uint64_t v___x_2477_; uint64_t v___x_2478_; size_t v___x_2479_; size_t v___x_2480_; size_t v___x_2481_; size_t v___x_2482_; size_t v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2473_ = 32ULL;
v___x_2474_ = lean_uint64_shift_right(v___y_2472_, v___x_2473_);
v_fold_2475_ = lean_uint64_xor(v___y_2472_, v___x_2474_);
v___x_2476_ = 16ULL;
v___x_2477_ = lean_uint64_shift_right(v_fold_2475_, v___x_2476_);
v___x_2478_ = lean_uint64_xor(v_fold_2475_, v___x_2477_);
v___x_2479_ = lean_uint64_to_usize(v___x_2478_);
v___x_2480_ = lean_usize_of_nat(v___x_2470_);
v___x_2481_ = ((size_t)1ULL);
v___x_2482_ = lean_usize_sub(v___x_2480_, v___x_2481_);
v___x_2483_ = lean_usize_land(v___x_2479_, v___x_2482_);
v___x_2484_ = lean_array_uget_borrowed(v_buckets_2469_, v___x_2483_);
v___x_2485_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(v_a_2468_, v___x_2484_);
return v___x_2485_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg___boxed(lean_object* v_m_2488_, lean_object* v_a_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(v_m_2488_, v_a_2489_);
lean_dec(v_a_2489_);
lean_dec_ref(v_m_2488_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f(lean_object* v_goal_2491_, lean_object* v_rhs_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_){
_start:
{
lean_object* v___x_2505_; 
lean_inc_ref(v_rhs_2492_);
lean_inc(v_goal_2491_);
v___x_2505_ = l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f(v_goal_2491_, v_rhs_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2576_; 
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2508_ = v___x_2505_;
v_isShared_2509_ = v_isSharedCheck_2576_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2505_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2576_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v_fst_2511_; lean_object* v_snd_2512_; 
if (lean_obj_tag(v_a_2506_) == 0)
{
v_fst_2511_ = v_goal_2491_;
v_snd_2512_ = v_rhs_2492_;
goto v___jp_2510_;
}
else
{
lean_object* v_val_2573_; lean_object* v_fst_2574_; lean_object* v_snd_2575_; 
lean_dec_ref(v_rhs_2492_);
lean_dec(v_goal_2491_);
v_val_2573_ = lean_ctor_get(v_a_2506_, 0);
lean_inc(v_val_2573_);
lean_dec_ref_known(v_a_2506_, 1);
v_fst_2574_ = lean_ctor_get(v_val_2573_, 0);
lean_inc(v_fst_2574_);
v_snd_2575_ = lean_ctor_get(v_val_2573_, 1);
lean_inc(v_snd_2575_);
lean_dec(v_val_2573_);
v_fst_2511_ = v_fst_2574_;
v_snd_2512_ = v_snd_2575_;
goto v___jp_2510_;
}
v___jp_2510_:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2513_ = l_Lean_Expr_getAppFn(v_snd_2512_);
v___x_2514_ = l_Lean_Expr_constName_x3f(v___x_2513_);
lean_dec_ref(v___x_2513_);
if (lean_obj_tag(v___x_2514_) == 1)
{
lean_object* v_val_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
v_val_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_val_2515_);
lean_dec_ref_known(v___x_2514_, 1);
v___x_2516_ = l_Lean_Elab_Tactic_VCGen_latticeOps;
v___x_2517_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(v___x_2516_, v_val_2515_);
lean_dec(v_val_2515_);
if (lean_obj_tag(v___x_2517_) == 1)
{
lean_object* v_val_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2564_; 
v_val_2518_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2520_ = v___x_2517_;
v_isShared_2521_ = v_isSharedCheck_2564_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_val_2518_);
lean_dec(v___x_2517_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2564_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v_applies_x3f_2522_; lean_object* v___x_2523_; uint8_t v___x_2524_; 
v_applies_x3f_2522_ = lean_ctor_get(v_val_2518_, 4);
lean_inc_ref(v_applies_x3f_2522_);
lean_inc_ref(v_snd_2512_);
v___x_2523_ = lean_apply_1(v_applies_x3f_2522_, v_snd_2512_);
v___x_2524_ = lean_unbox(v___x_2523_);
if (v___x_2524_ == 0)
{
lean_object* v___x_2525_; lean_object* v___x_2527_; 
lean_del_object(v___x_2520_);
lean_dec(v_val_2518_);
lean_dec_ref(v_snd_2512_);
lean_dec(v_fst_2511_);
v___x_2525_ = lean_box(0);
if (v_isShared_2509_ == 0)
{
lean_ctor_set(v___x_2508_, 0, v___x_2525_);
v___x_2527_ = v___x_2508_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2525_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
else
{
lean_object* v___x_2529_; 
lean_del_object(v___x_2508_);
v___x_2529_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(v_snd_2512_, v_val_2518_, v_a_2494_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v_a_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v___x_2529_, 1);
v___x_2531_ = lean_box(0);
v___x_2532_ = l_Lean_Elab_Tactic_VCGen_Lean_Meta_Sym_BackwardRule_applyChecked(v_a_2530_, v_fst_2511_, v___x_2531_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2547_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2535_ = v___x_2532_;
v_isShared_2536_ = v_isSharedCheck_2547_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2532_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2547_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
if (lean_obj_tag(v_a_2533_) == 0)
{
lean_object* v___x_2538_; 
lean_del_object(v___x_2520_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2531_);
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2531_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
else
{
lean_object* v_mvarIds_2540_; lean_object* v___x_2542_; 
v_mvarIds_2540_ = lean_ctor_get(v_a_2533_, 0);
lean_inc(v_mvarIds_2540_);
lean_dec_ref_known(v_a_2533_, 1);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 0, v_mvarIds_2540_);
v___x_2542_ = v___x_2520_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_mvarIds_2540_);
v___x_2542_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
lean_object* v___x_2544_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2542_);
v___x_2544_ = v___x_2535_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v___x_2542_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
}
else
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
lean_del_object(v___x_2520_);
v_a_2548_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2550_ = v___x_2532_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v___x_2532_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2553_; 
if (v_isShared_2551_ == 0)
{
v___x_2553_ = v___x_2550_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_a_2548_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
}
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
lean_del_object(v___x_2520_);
lean_dec(v_fst_2511_);
v_a_2556_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2529_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2529_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
}
}
}
else
{
lean_object* v___x_2565_; lean_object* v___x_2567_; 
lean_dec(v___x_2517_);
lean_dec_ref(v_snd_2512_);
lean_dec(v_fst_2511_);
v___x_2565_ = lean_box(0);
if (v_isShared_2509_ == 0)
{
lean_ctor_set(v___x_2508_, 0, v___x_2565_);
v___x_2567_ = v___x_2508_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v___x_2565_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
else
{
lean_object* v___x_2569_; lean_object* v___x_2571_; 
lean_dec(v___x_2514_);
lean_dec_ref(v_snd_2512_);
lean_dec(v_fst_2511_);
v___x_2569_ = lean_box(0);
if (v_isShared_2509_ == 0)
{
lean_ctor_set(v___x_2508_, 0, v___x_2569_);
v___x_2571_ = v___x_2508_;
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
}
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2584_; 
lean_dec_ref(v_rhs_2492_);
lean_dec(v_goal_2491_);
v_a_2577_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2579_ = v___x_2505_;
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2505_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2577_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f___boxed(lean_object* v_goal_2585_, lean_object* v_rhs_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l_Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f(v_goal_2585_, v_rhs_2586_, v_a_2587_, v_a_2588_, v_a_2589_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_);
lean_dec(v_a_2597_);
lean_dec_ref(v_a_2596_);
lean_dec(v_a_2595_);
lean_dec_ref(v_a_2594_);
lean_dec(v_a_2593_);
lean_dec_ref(v_a_2592_);
lean_dec(v_a_2591_);
lean_dec_ref(v_a_2590_);
lean_dec(v_a_2589_);
lean_dec(v_a_2588_);
lean_dec_ref(v_a_2587_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0(lean_object* v_00_u03b2_2600_, lean_object* v_m_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v___x_2603_; 
v___x_2603_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___redArg(v_m_2601_, v_a_2602_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0___boxed(lean_object* v_00_u03b2_2604_, lean_object* v_m_2605_, lean_object* v_a_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0(v_00_u03b2_2604_, v_m_2605_, v_a_2606_);
lean_dec(v_a_2606_);
lean_dec_ref(v_m_2605_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0(lean_object* v_00_u03b2_2608_, lean_object* v_a_2609_, lean_object* v_x_2610_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___redArg(v_a_2609_, v_x_2610_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2612_, lean_object* v_a_2613_, lean_object* v_x_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_splitLatticeOp_x3f_spec__0_spec__0(v_00_u03b2_2612_, v_a_2613_, v_x_2614_);
lean_dec(v_x_2614_);
lean_dec(v_a_2613_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitForallLe_x3f(lean_object* v_goal_2616_, lean_object* v_rhs_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_){
_start:
{
uint8_t v___x_2630_; 
v___x_2630_ = l_Lean_Expr_isForall(v_rhs_2617_);
if (v___x_2630_ == 0)
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
lean_dec(v_goal_2616_);
v___x_2631_ = lean_box(0);
v___x_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
return v___x_2632_;
}
else
{
lean_object* v_backwardRules_2633_; lean_object* v_forallIntro_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v_backwardRules_2633_ = lean_ctor_get(v_a_2618_, 0);
v_forallIntro_2634_ = lean_ctor_get(v_backwardRules_2633_, 11);
v___x_2635_ = lean_box(0);
lean_inc_ref(v_forallIntro_2634_);
v___x_2636_ = l_Lean_Elab_Tactic_VCGen_Lean_Meta_Sym_BackwardRule_applyChecked(v_forallIntro_2634_, v_goal_2616_, v___x_2635_, v_a_2618_, v_a_2619_, v_a_2620_, v_a_2621_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2655_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2639_ = v___x_2636_;
v_isShared_2640_ = v_isSharedCheck_2655_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2636_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2655_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
if (lean_obj_tag(v_a_2637_) == 0)
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2635_);
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v___x_2635_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
else
{
lean_object* v_mvarIds_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2654_; 
v_mvarIds_2644_ = lean_ctor_get(v_a_2637_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v_a_2637_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2646_ = v_a_2637_;
v_isShared_2647_ = v_isSharedCheck_2654_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_mvarIds_2644_);
lean_dec(v_a_2637_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2654_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2649_; 
if (v_isShared_2647_ == 0)
{
v___x_2649_ = v___x_2646_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_mvarIds_2644_);
v___x_2649_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
lean_object* v___x_2651_; 
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2649_);
v___x_2651_ = v___x_2639_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v___x_2649_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
}
}
else
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2663_; 
v_a_2656_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2663_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2658_ = v___x_2636_;
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v___x_2636_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2661_; 
if (v_isShared_2659_ == 0)
{
v___x_2661_ = v___x_2658_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v_a_2656_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_splitForallLe_x3f___boxed(lean_object* v_goal_2664_, lean_object* v_rhs_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_){
_start:
{
lean_object* v_res_2678_; 
v_res_2678_ = l_Lean_Elab_Tactic_VCGen_splitForallLe_x3f(v_goal_2664_, v_rhs_2665_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_, v_a_2676_);
lean_dec(v_a_2676_);
lean_dec_ref(v_a_2675_);
lean_dec(v_a_2674_);
lean_dec_ref(v_a_2673_);
lean_dec(v_a_2672_);
lean_dec_ref(v_a_2671_);
lean_dec(v_a_2670_);
lean_dec_ref(v_a_2669_);
lean_dec(v_a_2668_);
lean_dec(v_a_2667_);
lean_dec_ref(v_a_2666_);
lean_dec_ref(v_rhs_2665_);
return v_res_2678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0(lean_object* v_as_2703_, size_t v_sz_2704_, size_t v_i_2705_, lean_object* v_b_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
uint8_t v___x_2714_; 
v___x_2714_ = lean_usize_dec_lt(v_i_2705_, v_sz_2704_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2715_; 
v___x_2715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2715_, 0, v_b_2706_);
return v___x_2715_;
}
else
{
lean_object* v_snd_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2900_; 
v_snd_2716_ = lean_ctor_get(v_b_2706_, 1);
v_isSharedCheck_2900_ = !lean_is_exclusive(v_b_2706_);
if (v_isSharedCheck_2900_ == 0)
{
lean_object* v_unused_2901_; 
v_unused_2901_ = lean_ctor_get(v_b_2706_, 0);
lean_dec(v_unused_2901_);
v___x_2718_ = v_b_2706_;
v_isShared_2719_ = v_isSharedCheck_2900_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_snd_2716_);
lean_dec(v_b_2706_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2900_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v_snd_2720_; lean_object* v_snd_2721_; lean_object* v_snd_2722_; lean_object* v_fst_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2898_; 
v_snd_2720_ = lean_ctor_get(v_snd_2716_, 1);
lean_inc(v_snd_2720_);
v_snd_2721_ = lean_ctor_get(v_snd_2720_, 1);
lean_inc(v_snd_2721_);
v_snd_2722_ = lean_ctor_get(v_snd_2721_, 1);
lean_inc(v_snd_2722_);
v_fst_2723_ = lean_ctor_get(v_snd_2716_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v_snd_2716_);
if (v_isSharedCheck_2898_ == 0)
{
lean_object* v_unused_2899_; 
v_unused_2899_ = lean_ctor_get(v_snd_2716_, 1);
lean_dec(v_unused_2899_);
v___x_2725_ = v_snd_2716_;
v_isShared_2726_ = v_isSharedCheck_2898_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_fst_2723_);
lean_dec(v_snd_2716_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2898_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v_fst_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2896_; 
v_fst_2727_ = lean_ctor_get(v_snd_2720_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v_snd_2720_);
if (v_isSharedCheck_2896_ == 0)
{
lean_object* v_unused_2897_; 
v_unused_2897_ = lean_ctor_get(v_snd_2720_, 1);
lean_dec(v_unused_2897_);
v___x_2729_ = v_snd_2720_;
v_isShared_2730_ = v_isSharedCheck_2896_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_fst_2727_);
lean_dec(v_snd_2720_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2896_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v_fst_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2894_; 
v_fst_2731_ = lean_ctor_get(v_snd_2721_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v_snd_2721_);
if (v_isSharedCheck_2894_ == 0)
{
lean_object* v_unused_2895_; 
v_unused_2895_ = lean_ctor_get(v_snd_2721_, 1);
lean_dec(v_unused_2895_);
v___x_2733_ = v_snd_2721_;
v_isShared_2734_ = v_isSharedCheck_2894_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_fst_2731_);
lean_dec(v_snd_2721_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2894_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v_fst_2735_; lean_object* v_snd_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2893_; 
v_fst_2735_ = lean_ctor_get(v_snd_2722_, 0);
v_snd_2736_ = lean_ctor_get(v_snd_2722_, 1);
v_isSharedCheck_2893_ = !lean_is_exclusive(v_snd_2722_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2738_ = v_snd_2722_;
v_isShared_2739_ = v_isSharedCheck_2893_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_snd_2736_);
lean_inc(v_fst_2735_);
lean_dec(v_snd_2722_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2893_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v_a_2760_; lean_object* v___x_2761_; 
v___x_2758_ = lean_box(0);
v___x_2759_ = lean_box(0);
v_a_2760_ = lean_array_uget_borrowed(v_as_2703_, v_i_2705_);
lean_inc(v_fst_2735_);
v___x_2761_ = l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS(v_fst_2735_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2884_; 
v_a_2762_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2764_ = v___x_2761_;
v_isShared_2765_ = v_isSharedCheck_2884_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2761_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2884_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
if (lean_obj_tag(v_a_2762_) == 7)
{
lean_object* v_binderType_2766_; lean_object* v_body_2767_; uint8_t v___x_2768_; 
v_binderType_2766_ = lean_ctor_get(v_a_2762_, 1);
lean_inc_ref(v_binderType_2766_);
v_body_2767_ = lean_ctor_get(v_a_2762_, 2);
lean_inc_ref(v_body_2767_);
lean_dec_ref_known(v_a_2762_, 3);
v___x_2768_ = l_Lean_Expr_hasLooseBVars(v_body_2767_);
if (v___x_2768_ == 0)
{
lean_object* v___x_2769_; uint8_t v___x_2770_; 
v___x_2769_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__2));
v___x_2770_ = l_Lean_Expr_isAppOf(v_snd_2736_, v___x_2769_);
if (v___x_2770_ == 0)
{
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
lean_del_object(v___x_2764_);
goto v___jp_2740_;
}
else
{
lean_object* v___x_2771_; 
lean_del_object(v___x_2738_);
lean_del_object(v___x_2733_);
lean_del_object(v___x_2729_);
lean_del_object(v___x_2725_);
lean_del_object(v___x_2718_);
v___x_2771_ = l_Lean_Expr_appArg_x21(v_snd_2736_);
if (lean_obj_tag(v___x_2771_) == 6)
{
lean_object* v_body_2772_; lean_object* v___x_2773_; 
lean_del_object(v___x_2764_);
v_body_2772_ = lean_ctor_get(v___x_2771_, 2);
lean_inc_ref(v_body_2772_);
lean_dec_ref_known(v___x_2771_, 3);
lean_inc_ref(v_binderType_2766_);
v___x_2773_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_2766_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v_a_2774_; lean_object* v___x_2775_; 
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_a_2774_);
lean_dec_ref_known(v___x_2773_, 1);
lean_inc_ref(v_body_2767_);
v___x_2775_ = l_Lean_Meta_Sym_getLevel___redArg(v_body_2767_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2777_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2776_);
lean_dec_ref_known(v___x_2775_, 1);
lean_inc(v_a_2774_);
v___x_2777_ = l_Lean_Meta_decLevel(v_a_2774_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2779_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
lean_inc(v_a_2778_);
lean_dec_ref_known(v___x_2777_, 1);
lean_inc(v_a_2776_);
v___x_2779_ = l_Lean_Meta_decLevel(v_a_2776_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
lean_inc(v_a_2780_);
lean_dec_ref_known(v___x_2779_, 1);
v___x_2781_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__4));
v___x_2782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2782_, 0, v_a_2780_);
lean_ctor_set(v___x_2782_, 1, v___x_2758_);
v___x_2783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2783_, 0, v_a_2778_);
lean_ctor_set(v___x_2783_, 1, v___x_2782_);
v___x_2784_ = l_Lean_mkConst(v___x_2781_, v___x_2783_);
lean_inc(v_a_2760_);
lean_inc_ref(v_body_2772_);
lean_inc_ref(v_body_2767_);
lean_inc_ref(v_binderType_2766_);
v___x_2785_ = l_Lean_mkApp4(v___x_2784_, v_binderType_2766_, v_body_2767_, v_body_2772_, v_a_2760_);
lean_inc_ref(v___x_2785_);
v___x_2786_ = l_Lean_Meta_Sym_inferType(v___x_2785_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2825_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2789_ = v___x_2786_;
v_isShared_2790_ = v_isSharedCheck_2825_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2786_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2825_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; uint8_t v___x_2793_; 
v___x_2791_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_eqSubstCandidate_x3f___redArg___closed__1));
v___x_2792_ = lean_unsigned_to_nat(3u);
v___x_2793_ = l_Lean_Expr_isAppOfArity(v_a_2787_, v___x_2791_, v___x_2792_);
if (v___x_2793_ == 0)
{
lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2801_; 
lean_dec(v_a_2787_);
lean_dec_ref(v___x_2785_);
lean_dec(v_a_2776_);
lean_dec(v_a_2774_);
lean_dec_ref(v_body_2772_);
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
v___x_2794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5));
v___x_2795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2795_, 0, v_fst_2735_);
lean_ctor_set(v___x_2795_, 1, v_snd_2736_);
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v_fst_2731_);
lean_ctor_set(v___x_2796_, 1, v___x_2795_);
v___x_2797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2797_, 0, v_fst_2727_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2798_, 0, v_fst_2723_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2794_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v___x_2799_);
v___x_2801_ = v___x_2789_;
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
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; uint8_t v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; size_t v___x_2822_; size_t v___x_2823_; 
lean_del_object(v___x_2789_);
lean_dec(v_snd_2736_);
lean_dec(v_fst_2735_);
v___x_2803_ = l_Lean_Expr_appArg_x21(v_a_2787_);
lean_dec(v_a_2787_);
v___x_2804_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__7));
v___x_2805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2805_, 0, v_a_2776_);
lean_ctor_set(v___x_2805_, 1, v___x_2758_);
lean_inc_ref(v___x_2805_);
v___x_2806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2806_, 0, v_a_2774_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
v___x_2807_ = l_Lean_mkConst(v___x_2804_, v___x_2806_);
v___x_2808_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__9));
v___x_2809_ = 0;
lean_inc_ref_n(v_body_2767_, 2);
lean_inc_ref(v_binderType_2766_);
v___x_2810_ = l_Lean_Expr_lam___override(v___x_2808_, v_binderType_2766_, v_body_2767_, v___x_2809_);
lean_inc_n(v_a_2760_, 3);
lean_inc(v_fst_2731_);
lean_inc(v_fst_2727_);
v___x_2811_ = l_Lean_mkApp6(v___x_2807_, v_binderType_2766_, v___x_2810_, v_fst_2727_, v_fst_2731_, v_fst_2723_, v_a_2760_);
v___x_2812_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__11));
v___x_2813_ = l_Lean_mkConst(v___x_2812_, v___x_2805_);
v___x_2814_ = l_Lean_Expr_app___override(v_fst_2727_, v_a_2760_);
v___x_2815_ = l_Lean_Expr_app___override(v_fst_2731_, v_a_2760_);
lean_inc_ref(v___x_2803_);
lean_inc_ref(v___x_2814_);
v___x_2816_ = l_Lean_mkApp6(v___x_2813_, v_body_2767_, v___x_2814_, v___x_2815_, v___x_2803_, v___x_2811_, v___x_2785_);
v___x_2817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2817_, 0, v_body_2767_);
lean_ctor_set(v___x_2817_, 1, v_body_2772_);
v___x_2818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2803_);
lean_ctor_set(v___x_2818_, 1, v___x_2817_);
v___x_2819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2814_);
lean_ctor_set(v___x_2819_, 1, v___x_2818_);
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2816_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
v___x_2821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2759_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
v___x_2822_ = ((size_t)1ULL);
v___x_2823_ = lean_usize_add(v_i_2705_, v___x_2822_);
v_i_2705_ = v___x_2823_;
v_b_2706_ = v___x_2821_;
goto _start;
}
}
}
else
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2833_; 
lean_dec_ref(v___x_2785_);
lean_dec(v_a_2776_);
lean_dec(v_a_2774_);
lean_dec_ref(v_body_2772_);
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
lean_dec(v_snd_2736_);
lean_dec(v_fst_2735_);
lean_dec(v_fst_2731_);
lean_dec(v_fst_2727_);
lean_dec(v_fst_2723_);
v_a_2826_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2828_ = v___x_2786_;
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v___x_2786_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_a_2826_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
}
else
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
lean_dec(v_a_2778_);
lean_dec(v_a_2776_);
lean_dec(v_a_2774_);
lean_dec_ref(v_body_2772_);
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
lean_dec(v_snd_2736_);
lean_dec(v_fst_2735_);
lean_dec(v_fst_2731_);
lean_dec(v_fst_2727_);
lean_dec(v_fst_2723_);
v_a_2834_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2779_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2779_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
else
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2849_; 
lean_dec(v_a_2776_);
lean_dec(v_a_2774_);
lean_dec_ref(v_body_2772_);
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
lean_dec(v_snd_2736_);
lean_dec(v_fst_2735_);
lean_dec(v_fst_2731_);
lean_dec(v_fst_2727_);
lean_dec(v_fst_2723_);
v_a_2842_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2844_ = v___x_2777_;
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2777_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2847_; 
if (v_isShared_2845_ == 0)
{
v___x_2847_ = v___x_2844_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v_a_2842_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_dec(v_a_2774_);
lean_dec_ref(v_body_2772_);
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
lean_dec(v_snd_2736_);
lean_dec(v_fst_2735_);
lean_dec(v_fst_2731_);
lean_dec(v_fst_2727_);
lean_dec(v_fst_2723_);
v_a_2850_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2775_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2775_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
else
{
lean_object* v_a_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2865_; 
lean_dec_ref(v_body_2772_);
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
lean_dec(v_snd_2736_);
lean_dec(v_fst_2735_);
lean_dec(v_fst_2731_);
lean_dec(v_fst_2727_);
lean_dec(v_fst_2723_);
v_a_2858_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2860_ = v___x_2773_;
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_a_2858_);
lean_dec(v___x_2773_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2863_; 
if (v_isShared_2861_ == 0)
{
v___x_2863_ = v___x_2860_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_a_2858_);
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
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2873_; 
lean_dec_ref(v___x_2771_);
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
v___x_2866_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5));
v___x_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2867_, 0, v_fst_2735_);
lean_ctor_set(v___x_2867_, 1, v_snd_2736_);
v___x_2868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2868_, 0, v_fst_2731_);
lean_ctor_set(v___x_2868_, 1, v___x_2867_);
v___x_2869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2869_, 0, v_fst_2727_);
lean_ctor_set(v___x_2869_, 1, v___x_2868_);
v___x_2870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2870_, 0, v_fst_2723_);
lean_ctor_set(v___x_2870_, 1, v___x_2869_);
v___x_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2866_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
if (v_isShared_2765_ == 0)
{
lean_ctor_set(v___x_2764_, 0, v___x_2871_);
v___x_2873_ = v___x_2764_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v___x_2871_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
}
}
else
{
lean_dec_ref(v_body_2767_);
lean_dec_ref(v_binderType_2766_);
lean_del_object(v___x_2764_);
goto v___jp_2740_;
}
}
else
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2882_; 
lean_dec(v_a_2762_);
lean_del_object(v___x_2738_);
lean_del_object(v___x_2733_);
lean_del_object(v___x_2729_);
lean_del_object(v___x_2725_);
lean_del_object(v___x_2718_);
v___x_2875_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__5));
v___x_2876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2876_, 0, v_fst_2735_);
lean_ctor_set(v___x_2876_, 1, v_snd_2736_);
v___x_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2877_, 0, v_fst_2731_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
v___x_2878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2878_, 0, v_fst_2727_);
lean_ctor_set(v___x_2878_, 1, v___x_2877_);
v___x_2879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2879_, 0, v_fst_2723_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2875_);
lean_ctor_set(v___x_2880_, 1, v___x_2879_);
if (v_isShared_2765_ == 0)
{
lean_ctor_set(v___x_2764_, 0, v___x_2880_);
v___x_2882_ = v___x_2764_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v___x_2880_);
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
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
lean_del_object(v___x_2738_);
lean_dec(v_snd_2736_);
lean_dec(v_fst_2735_);
lean_del_object(v___x_2733_);
lean_dec(v_fst_2731_);
lean_del_object(v___x_2729_);
lean_dec(v_fst_2727_);
lean_del_object(v___x_2725_);
lean_dec(v_fst_2723_);
lean_del_object(v___x_2718_);
v_a_2885_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v___x_2761_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2761_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
v___jp_2740_:
{
lean_object* v___x_2741_; lean_object* v___x_2743_; 
v___x_2741_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___closed__0));
if (v_isShared_2739_ == 0)
{
v___x_2743_ = v___x_2738_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_fst_2735_);
lean_ctor_set(v_reuseFailAlloc_2757_, 1, v_snd_2736_);
v___x_2743_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
lean_object* v___x_2745_; 
if (v_isShared_2734_ == 0)
{
lean_ctor_set(v___x_2733_, 1, v___x_2743_);
v___x_2745_ = v___x_2733_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_fst_2731_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v___x_2743_);
v___x_2745_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
lean_object* v___x_2747_; 
if (v_isShared_2730_ == 0)
{
lean_ctor_set(v___x_2729_, 1, v___x_2745_);
v___x_2747_ = v___x_2729_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_fst_2727_);
lean_ctor_set(v_reuseFailAlloc_2755_, 1, v___x_2745_);
v___x_2747_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
lean_object* v___x_2749_; 
if (v_isShared_2726_ == 0)
{
lean_ctor_set(v___x_2725_, 1, v___x_2747_);
v___x_2749_ = v___x_2725_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_fst_2723_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v___x_2747_);
v___x_2749_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
lean_object* v___x_2751_; 
if (v_isShared_2719_ == 0)
{
lean_ctor_set(v___x_2718_, 1, v___x_2749_);
lean_ctor_set(v___x_2718_, 0, v___x_2741_);
v___x_2751_ = v___x_2718_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v___x_2741_);
lean_ctor_set(v_reuseFailAlloc_2753_, 1, v___x_2749_);
v___x_2751_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
return v___x_2752_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0___boxed(lean_object* v_as_2902_, lean_object* v_sz_2903_, lean_object* v_i_2904_, lean_object* v_b_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
size_t v_sz_boxed_2913_; size_t v_i_boxed_2914_; lean_object* v_res_2915_; 
v_sz_boxed_2913_ = lean_unbox_usize(v_sz_2903_);
lean_dec(v_sz_2903_);
v_i_boxed_2914_ = lean_unbox_usize(v_i_2904_);
lean_dec(v_i_2904_);
v_res_2915_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0(v_as_2902_, v_sz_boxed_2913_, v_i_boxed_2914_, v_b_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec_ref(v_as_2902_);
return v_res_2915_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6(void){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = lean_unsigned_to_nat(0u);
v___x_2929_ = l_Lean_Expr_bvar___override(v___x_2928_);
return v___x_2929_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9(void){
_start:
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2933_ = lean_box(0);
v___x_2934_ = l_Lean_Level_succ___override(v___x_2933_);
return v___x_2934_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10(void){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2935_ = lean_box(0);
v___x_2936_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9, &l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9_once, _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__9);
v___x_2937_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
lean_ctor_set(v___x_2937_, 1, v___x_2935_);
return v___x_2937_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11(void){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = lean_box(0);
v___x_2939_ = l_Lean_mkSort(v___x_2938_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f(lean_object* v_goal_2940_, lean_object* v_target_2941_, lean_object* v_pre_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_){
_start:
{
lean_object* v___x_2953_; uint8_t v___x_2954_; 
v___x_2953_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1));
v___x_2954_ = l_Lean_Expr_isAppOf(v_pre_2942_, v___x_2953_);
if (v___x_2954_ == 0)
{
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
goto v___jp_2950_;
}
else
{
lean_object* v___x_2955_; lean_object* v___x_2956_; uint8_t v___x_2957_; 
v___x_2955_ = lean_unsigned_to_nat(2u);
v___x_2956_ = l_Lean_Expr_getAppNumArgs(v_pre_2942_);
v___x_2957_ = lean_nat_dec_lt(v___x_2955_, v___x_2956_);
if (v___x_2957_ == 0)
{
lean_dec(v___x_2956_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
goto v___jp_2950_;
}
else
{
lean_object* v_dummy_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v_args_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; uint8_t v___x_2965_; 
v_dummy_2958_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_VCGen_Entails_0__Lean_Elab_Tactic_VCGen_refoldHimpUpperAdjoint_x3f_spec__2___closed__8);
lean_inc(v___x_2956_);
v___x_2959_ = lean_mk_array(v___x_2956_, v_dummy_2958_);
v___x_2960_ = lean_unsigned_to_nat(1u);
v___x_2961_ = lean_nat_sub(v___x_2956_, v___x_2960_);
lean_dec(v___x_2956_);
lean_inc_ref(v_pre_2942_);
v_args_2962_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_pre_2942_, v___x_2959_, v___x_2961_);
v___x_2963_ = lean_unsigned_to_nat(0u);
v___x_2964_ = lean_array_get_size(v_args_2962_);
v___x_2965_ = lean_nat_dec_lt(v___x_2963_, v___x_2964_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
lean_dec_ref(v_args_2962_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
v___x_2966_ = lean_box(0);
v___x_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2966_);
return v___x_2967_;
}
else
{
uint8_t v___x_2968_; 
v___x_2968_ = lean_nat_dec_lt(v___x_2960_, v___x_2964_);
if (v___x_2968_ == 0)
{
lean_object* v___x_2969_; lean_object* v___x_2970_; 
lean_dec_ref(v_args_2962_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
v___x_2969_ = lean_box(0);
v___x_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
return v___x_2970_;
}
else
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v_curTop_2974_; lean_object* v___x_2975_; 
v___x_2971_ = lean_array_fget(v_args_2962_, v___x_2963_);
v___x_2972_ = lean_array_fget(v_args_2962_, v___x_2960_);
v___x_2973_ = l_Lean_Expr_getAppFn(v_pre_2942_);
lean_inc(v___x_2972_);
lean_inc_n(v___x_2971_, 2);
v_curTop_2974_ = l_Lean_mkAppB(v___x_2973_, v___x_2971_, v___x_2972_);
v___x_2975_ = l_Lean_Meta_Sym_getLevel___redArg(v___x_2971_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; size_t v_sz_2989_; size_t v___x_2990_; lean_object* v___x_2991_; 
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
lean_inc(v_a_2976_);
lean_dec_ref_known(v___x_2975_, 1);
v___x_2977_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__3));
v___x_2978_ = lean_box(0);
v___x_2979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2979_, 0, v_a_2976_);
lean_ctor_set(v___x_2979_, 1, v___x_2978_);
v___x_2980_ = l_Lean_mkConst(v___x_2977_, v___x_2979_);
lean_inc_ref_n(v_curTop_2974_, 2);
lean_inc(v___x_2971_);
v___x_2981_ = l_Lean_mkAppB(v___x_2980_, v___x_2971_, v_curTop_2974_);
v___x_2982_ = l_Array_extract___redArg(v_args_2962_, v___x_2955_, v___x_2964_);
lean_dec_ref(v_args_2962_);
v___x_2983_ = lean_box(0);
v___x_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2971_);
lean_ctor_set(v___x_2984_, 1, v___x_2972_);
v___x_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2985_, 0, v_curTop_2974_);
lean_ctor_set(v___x_2985_, 1, v___x_2984_);
v___x_2986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2986_, 0, v_curTop_2974_);
lean_ctor_set(v___x_2986_, 1, v___x_2985_);
v___x_2987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2981_);
lean_ctor_set(v___x_2987_, 1, v___x_2986_);
v___x_2988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2983_);
lean_ctor_set(v___x_2988_, 1, v___x_2987_);
v_sz_2989_ = lean_array_size(v___x_2982_);
v___x_2990_ = ((size_t)0ULL);
v___x_2991_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f_spec__0(v___x_2982_, v_sz_2989_, v___x_2990_, v___x_2988_, v_a_2943_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_);
lean_dec_ref(v___x_2982_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3075_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_2994_ = v___x_2991_;
v_isShared_2995_ = v_isSharedCheck_3075_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2991_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3075_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v_fst_2996_; 
v_fst_2996_ = lean_ctor_get(v_a_2992_, 0);
if (lean_obj_tag(v_fst_2996_) == 0)
{
lean_object* v_snd_2997_; lean_object* v_nargs_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
v_snd_2997_ = lean_ctor_get(v_a_2992_, 1);
lean_inc(v_snd_2997_);
lean_dec(v_a_2992_);
v_nargs_2998_ = l_Lean_Expr_getAppNumArgs(v_target_2941_);
lean_inc(v_nargs_2998_);
v___x_2999_ = lean_mk_array(v_nargs_2998_, v_dummy_2958_);
v___x_3000_ = lean_nat_sub(v_nargs_2998_, v___x_2960_);
lean_dec(v_nargs_2998_);
lean_inc_ref(v_target_2941_);
v___x_3001_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_target_2941_, v___x_2999_, v___x_3000_);
v___x_3002_ = lean_array_get_size(v___x_3001_);
v___x_3003_ = lean_nat_dec_lt(v___x_2963_, v___x_3002_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3005_; 
lean_dec_ref(v___x_3001_);
lean_dec(v_snd_2997_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_2983_);
v___x_3005_ = v___x_2994_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___x_2983_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
else
{
uint8_t v___x_3007_; 
v___x_3007_ = lean_nat_dec_lt(v___x_2960_, v___x_3002_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3009_; 
lean_dec_ref(v___x_3001_);
lean_dec(v_snd_2997_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_2983_);
v___x_3009_ = v___x_2994_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v___x_2983_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
else
{
lean_object* v___x_3011_; uint8_t v___x_3012_; 
v___x_3011_ = lean_unsigned_to_nat(3u);
v___x_3012_ = lean_nat_dec_lt(v___x_3011_, v___x_3002_);
if (v___x_3012_ == 0)
{
lean_object* v___x_3014_; 
lean_dec_ref(v___x_3001_);
lean_dec(v_snd_2997_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_2983_);
v___x_3014_ = v___x_2994_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_2983_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
else
{
lean_object* v_snd_3016_; lean_object* v_snd_3017_; lean_object* v_fst_3018_; lean_object* v_fst_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3069_; 
lean_del_object(v___x_2994_);
v_snd_3016_ = lean_ctor_get(v_snd_2997_, 1);
v_snd_3017_ = lean_ctor_get(v_snd_3016_, 1);
lean_inc(v_snd_3017_);
v_fst_3018_ = lean_ctor_get(v_snd_2997_, 0);
lean_inc(v_fst_3018_);
lean_dec(v_snd_2997_);
v_fst_3019_ = lean_ctor_get(v_snd_3017_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v_snd_3017_);
if (v_isSharedCheck_3069_ == 0)
{
lean_object* v_unused_3070_; 
v_unused_3070_ = lean_ctor_get(v_snd_3017_, 1);
lean_dec(v_unused_3070_);
v___x_3021_ = v_snd_3017_;
v_isShared_3022_ = v_isSharedCheck_3069_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_fst_3019_);
lean_dec(v_snd_3017_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3069_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3023_ = lean_array_fget(v___x_3001_, v___x_2963_);
v___x_3024_ = lean_array_fget(v___x_3001_, v___x_2960_);
v___x_3025_ = lean_array_fget(v___x_3001_, v___x_3011_);
lean_dec_ref(v___x_3001_);
lean_inc(v___x_3023_);
v___x_3026_ = l_Lean_Meta_Sym_getLevel___redArg(v___x_3023_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; uint8_t v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3037_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3026_, 1);
v___x_3028_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__5));
v___x_3029_ = l_Lean_Expr_getAppFn(v_target_2941_);
lean_dec_ref(v_target_2941_);
v___x_3030_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6, &l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6_once, _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__6);
lean_inc(v___x_3025_);
lean_inc(v___x_3024_);
lean_inc_n(v___x_3023_, 2);
lean_inc_ref(v___x_3029_);
v___x_3031_ = l_Lean_mkApp4(v___x_3029_, v___x_3023_, v___x_3024_, v___x_3030_, v___x_3025_);
v___x_3032_ = 0;
v___x_3033_ = l_Lean_Expr_lam___override(v___x_3028_, v___x_3023_, v___x_3031_, v___x_3032_);
v___x_3034_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__8));
v___x_3035_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10, &l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10_once, _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__10);
if (v_isShared_3022_ == 0)
{
lean_ctor_set_tag(v___x_3021_, 1);
lean_ctor_set(v___x_3021_, 1, v___x_3035_);
lean_ctor_set(v___x_3021_, 0, v_a_3027_);
v___x_3037_ = v___x_3021_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_a_3027_);
lean_ctor_set(v_reuseFailAlloc_3060_, 1, v___x_3035_);
v___x_3037_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___x_3038_ = l_Lean_mkConst(v___x_3034_, v___x_3037_);
v___x_3039_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11, &l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11_once, _init_l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__11);
lean_inc(v_fst_3019_);
lean_inc(v___x_3023_);
v___x_3040_ = l_Lean_mkApp6(v___x_3038_, v___x_3023_, v___x_3039_, v_pre_2942_, v_fst_3019_, v___x_3033_, v_fst_3018_);
v___x_3041_ = l_Lean_mkApp4(v___x_3029_, v___x_3023_, v___x_3024_, v_fst_3019_, v___x_3025_);
v___x_3042_ = l_Lean_MVarId_replaceTargetEq(v_goal_2940_, v___x_3041_, v___x_3040_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3051_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3045_ = v___x_3042_;
v_isShared_3046_ = v_isSharedCheck_3051_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_3042_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3051_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3047_; lean_object* v___x_3049_; 
v___x_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3047_, 0, v_a_3043_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3047_);
v___x_3049_ = v___x_3045_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3047_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
else
{
lean_object* v_a_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3059_; 
v_a_3052_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3054_ = v___x_3042_;
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_a_3052_);
lean_dec(v___x_3042_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3057_; 
if (v_isShared_3055_ == 0)
{
v___x_3057_ = v___x_3054_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_a_3052_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
}
}
else
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3068_; 
lean_dec(v___x_3025_);
lean_dec(v___x_3024_);
lean_dec(v___x_3023_);
lean_del_object(v___x_3021_);
lean_dec(v_fst_3019_);
lean_dec(v_fst_3018_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
v_a_3061_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3063_ = v___x_3026_;
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3026_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_a_3061_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
return v___x_3066_;
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
lean_object* v_val_3071_; lean_object* v___x_3073_; 
lean_inc_ref(v_fst_2996_);
lean_dec(v_a_2992_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
v_val_3071_ = lean_ctor_get(v_fst_2996_, 0);
lean_inc(v_val_3071_);
lean_dec_ref_known(v_fst_2996_, 1);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v_val_3071_);
v___x_3073_ = v___x_2994_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_val_3071_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
v_a_3076_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_2991_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_2991_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec_ref(v_curTop_2974_);
lean_dec(v___x_2972_);
lean_dec(v___x_2971_);
lean_dec_ref(v_args_2962_);
lean_dec_ref(v_pre_2942_);
lean_dec_ref(v_target_2941_);
lean_dec(v_goal_2940_);
v_a_3084_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_2975_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_2975_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
}
}
}
v___jp_2950_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = lean_box(0);
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___boxed(lean_object* v_goal_3092_, lean_object* v_target_3093_, lean_object* v_pre_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f(v_goal_3092_, v_target_3093_, v_pre_3094_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_);
lean_dec(v_a_3100_);
lean_dec_ref(v_a_3099_);
lean_dec(v_a_3098_);
lean_dec_ref(v_a_3097_);
lean_dec(v_a_3096_);
lean_dec_ref(v_a_3095_);
return v_res_3102_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1(void){
_start:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3104_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__0));
v___x_3105_ = l_Lean_stringToMessageData(v___x_3104_);
return v___x_3105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(lean_object* v_goal_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_){
_start:
{
lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v___x_3131_; 
lean_inc(v_goal_3113_);
v___x_3131_ = l_Lean_MVarId_getType(v_goal_3113_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3195_; 
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3134_ = v___x_3131_;
v_isShared_3135_ = v_isSharedCheck_3195_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3131_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3195_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; uint8_t v___x_3138_; 
v___x_3136_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__4));
v___x_3137_ = lean_unsigned_to_nat(4u);
v___x_3138_ = l_Lean_Expr_isAppOfArity(v_a_3132_, v___x_3136_, v___x_3137_);
if (v___x_3138_ == 0)
{
lean_object* v___x_3140_; 
lean_dec(v_a_3132_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 0, v_goal_3113_);
v___x_3140_ = v___x_3134_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_goal_3113_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
return v___x_3140_;
}
}
else
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3142_ = l_Lean_Expr_appFn_x21(v_a_3132_);
lean_dec(v_a_3132_);
v___x_3143_ = l_Lean_Expr_appFn_x21(v___x_3142_);
v___x_3144_ = l_Lean_Expr_appFn_x21(v___x_3143_);
lean_dec_ref(v___x_3143_);
v___x_3145_ = l_Lean_Expr_appArg_x21(v___x_3144_);
lean_dec_ref(v___x_3144_);
if (lean_obj_tag(v___x_3145_) == 3)
{
lean_object* v_u_3146_; 
v_u_3146_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_u_3146_);
lean_dec_ref_known(v___x_3145_, 1);
if (lean_obj_tag(v_u_3146_) == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3148_; 
lean_del_object(v___x_3134_);
v___x_3147_ = l_Lean_Expr_appArg_x21(v___x_3142_);
lean_dec_ref(v___x_3142_);
v___x_3148_ = l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS(v___x_3147_, v_a_3115_, v_a_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3180_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3151_ = v___x_3148_;
v_isShared_3152_ = v_isSharedCheck_3180_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3148_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3180_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3153_; uint8_t v___x_3154_; 
v___x_3153_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_reduceTopAppliedPre_x3f___closed__1));
v___x_3154_ = l_Lean_Expr_isAppOf(v_a_3149_, v___x_3153_);
lean_dec(v_a_3149_);
if (v___x_3154_ == 0)
{
lean_object* v___x_3156_; 
if (v_isShared_3152_ == 0)
{
lean_ctor_set(v___x_3151_, 0, v_goal_3113_);
v___x_3156_ = v___x_3151_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_goal_3113_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
else
{
lean_object* v_backwardRules_3158_; lean_object* v_elimPre_3159_; lean_object* v___x_3160_; 
lean_del_object(v___x_3151_);
v_backwardRules_3158_ = lean_ctor_get(v_a_3114_, 0);
v_elimPre_3159_ = lean_ctor_get(v_backwardRules_3158_, 7);
lean_inc_ref(v_elimPre_3159_);
lean_inc(v_goal_3113_);
v___x_3160_ = l_Lean_Meta_Sym_BackwardRule_apply(v_goal_3113_, v_elimPre_3159_, v_a_3115_, v_a_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3171_; 
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3163_ = v___x_3160_;
v_isShared_3164_ = v_isSharedCheck_3171_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3160_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3171_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
if (lean_obj_tag(v_a_3161_) == 1)
{
lean_object* v_mvarIds_3165_; 
v_mvarIds_3165_ = lean_ctor_get(v_a_3161_, 0);
lean_inc(v_mvarIds_3165_);
lean_dec_ref_known(v_a_3161_, 1);
if (lean_obj_tag(v_mvarIds_3165_) == 1)
{
lean_object* v_tail_3166_; 
v_tail_3166_ = lean_ctor_get(v_mvarIds_3165_, 1);
if (lean_obj_tag(v_tail_3166_) == 0)
{
lean_object* v_head_3167_; lean_object* v___x_3169_; 
lean_dec(v_goal_3113_);
v_head_3167_ = lean_ctor_get(v_mvarIds_3165_, 0);
lean_inc(v_head_3167_);
lean_dec_ref_known(v_mvarIds_3165_, 2);
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 0, v_head_3167_);
v___x_3169_ = v___x_3163_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_head_3167_);
v___x_3169_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
return v___x_3169_;
}
}
else
{
lean_dec_ref_known(v_mvarIds_3165_, 2);
lean_del_object(v___x_3163_);
v___y_3123_ = v_a_3117_;
v___y_3124_ = v_a_3118_;
v___y_3125_ = v_a_3119_;
v___y_3126_ = v_a_3120_;
goto v___jp_3122_;
}
}
else
{
lean_dec(v_mvarIds_3165_);
lean_del_object(v___x_3163_);
v___y_3123_ = v_a_3117_;
v___y_3124_ = v_a_3118_;
v___y_3125_ = v_a_3119_;
v___y_3126_ = v_a_3120_;
goto v___jp_3122_;
}
}
else
{
lean_del_object(v___x_3163_);
lean_dec(v_a_3161_);
v___y_3123_ = v_a_3117_;
v___y_3124_ = v_a_3118_;
v___y_3125_ = v_a_3119_;
v___y_3126_ = v_a_3120_;
goto v___jp_3122_;
}
}
}
else
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3179_; 
lean_dec(v_goal_3113_);
v_a_3172_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3174_ = v___x_3160_;
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3160_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
}
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3188_; 
lean_dec(v_goal_3113_);
v_a_3181_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3183_ = v___x_3148_;
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___x_3148_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3186_; 
if (v_isShared_3184_ == 0)
{
v___x_3186_ = v___x_3183_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3181_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
return v___x_3186_;
}
}
}
}
else
{
lean_object* v___x_3190_; 
lean_dec(v_u_3146_);
lean_dec_ref(v___x_3142_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 0, v_goal_3113_);
v___x_3190_ = v___x_3134_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_goal_3113_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
else
{
lean_object* v___x_3193_; 
lean_dec_ref(v___x_3145_);
lean_dec_ref(v___x_3142_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 0, v_goal_3113_);
v___x_3193_ = v___x_3134_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_goal_3113_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
}
}
}
else
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3203_; 
lean_dec(v_goal_3113_);
v_a_3196_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3198_ = v___x_3131_;
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3131_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3201_; 
if (v_isShared_3199_ == 0)
{
v___x_3201_ = v___x_3198_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_a_3196_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
v___jp_3122_:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3127_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1, &l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___closed__1);
v___x_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3128_, 0, v_goal_3113_);
v___x_3129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3127_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = l_Lean_throwError___at___00Lean_Elab_Tactic_VCGen_unfoldTriple_spec__0___redArg(v___x_3129_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_);
return v___x_3130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg___boxed(lean_object* v_goal_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(v_goal_3204_, v_a_3205_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_);
lean_dec(v_a_3211_);
lean_dec_ref(v_a_3210_);
lean_dec(v_a_3209_);
lean_dec_ref(v_a_3208_);
lean_dec(v_a_3207_);
lean_dec_ref(v_a_3206_);
lean_dec_ref(v_a_3205_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre(lean_object* v_goal_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_, lean_object* v_a_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_){
_start:
{
lean_object* v___x_3227_; 
v___x_3227_ = l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(v_goal_3214_, v_a_3215_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___boxed(lean_object* v_goal_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_){
_start:
{
lean_object* v_res_3241_; 
v_res_3241_ = l_Lean_Elab_Tactic_VCGen_elimTopPre(v_goal_3228_, v_a_3229_, v_a_3230_, v_a_3231_, v_a_3232_, v_a_3233_, v_a_3234_, v_a_3235_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_);
lean_dec(v_a_3239_);
lean_dec_ref(v_a_3238_);
lean_dec(v_a_3237_);
lean_dec_ref(v_a_3236_);
lean_dec(v_a_3235_);
lean_dec_ref(v_a_3234_);
lean_dec(v_a_3233_);
lean_dec_ref(v_a_3232_);
lean_dec(v_a_3231_);
lean_dec(v_a_3230_);
lean_dec_ref(v_a_3229_);
return v_res_3241_;
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
