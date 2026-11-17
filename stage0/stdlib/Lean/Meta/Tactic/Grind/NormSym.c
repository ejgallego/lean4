// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.NormSym
// Imports: public import Lean.Meta.Tactic.Grind.Types public import Lean.Meta.Sym.Simp.SimpM public import Lean.Meta.Sym.Simp.Theorems import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.SimpUtil import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Sym.Simp.Main import Lean.Meta.Sym.Simp.Simproc import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.EvalGround import Lean.Meta.Sym.Simp.Forall import Lean.Meta.Sym.Simp.Arith import Lean.Meta.Sym.Simp.Discharger import Lean.Meta.Tactic.Grind.NormSymProcs import Lean.Meta.Sym.Simp.Reduce public import Lean.Meta.Sym.DSimp import Lean.Meta.Sym.Simp.ControlFlow import Lean.Meta.Sym.Util import Lean.Meta.DiscrTree import Init.Grind.Norm
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
lean_object* l_Lean_Meta_Sym_DSimp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_Decls_toDSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_zetaDeltaAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_dsimpProj___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_dsimpMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_beta___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_zeta___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_normalizeBoolCondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default;
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Meta_Grind_normSymExt;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_simpForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_simpExists(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_simpDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_simpEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpNatSub(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpNatRel___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_Simp_EvalGround_0__Lean_Meta_Sym_Simp_evalGroundCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpArith(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_pushNot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_zetaDeltaAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_reduceControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_reduceProj___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_beta___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_NormSym_eraseMData___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_zeta___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_Grind_symNorm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_simpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormSymTheorems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormSymTheorems___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormSymTheorems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormSymTheorems___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ite_eq_cond"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(94, 227, 134, 192, 109, 120, 140, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__12(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_mkNormSymMethods___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__14___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__1___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__0_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__1_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__2___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__1_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__2_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__3___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__2_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__3_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__4___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__3_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__4_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__5___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__4_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__5_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__6___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__5_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__6_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__7___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__7_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__8___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__7_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__8_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__9___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__8_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__9_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__10___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__9_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__10_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__11___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__10_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__11_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeSimpSelf___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__12_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__22___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__6_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__13_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymMethods___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymMethods___lam__23___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__6_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymMethods___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymMethods___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__1_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__4___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__0_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__2_value;
static const lean_closure_object l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__5___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__0_value)} };
static const lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normLegacy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normLegacy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_normSym___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_normSym___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_normSym___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_normSym___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_normSym___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_normSym___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_normSym___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_normSym___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSym___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSym___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSym(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSym___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormSymTheorems___redArg(lean_object* v_a_1_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v_env_5_; lean_object* v___x_6_; lean_object* v_ext_7_; lean_object* v_toEnvExtension_8_; lean_object* v_asyncMode_9_; uint8_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_3_ = l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default;
v___x_4_ = lean_st_ref_get(v_a_1_);
v_env_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc_ref(v_env_5_);
lean_dec(v___x_4_);
v___x_6_ = l_Lean_Meta_Grind_normSymExt;
v_ext_7_ = lean_ctor_get(v___x_6_, 1);
v_toEnvExtension_8_ = lean_ctor_get(v_ext_7_, 0);
v_asyncMode_9_ = lean_ctor_get(v_toEnvExtension_8_, 2);
v___x_10_ = 0;
v___x_11_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3_, v___x_6_, v_env_5_, v_asyncMode_9_, v___x_10_);
v___x_12_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormSymTheorems___redArg___boxed(lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l_Lean_Meta_Grind_getNormSymTheorems___redArg(v_a_13_);
lean_dec(v_a_13_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormSymTheorems(lean_object* v_a_16_, lean_object* v_a_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Meta_Grind_getNormSymTheorems___redArg(v_a_17_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormSymTheorems___boxed(lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Meta_Grind_getNormSymTheorems(v_a_20_, v_a_21_);
lean_dec(v_a_21_);
lean_dec_ref(v_a_20_);
return v_res_23_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__7(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = lean_box(0);
v___x_36_ = lean_unsigned_to_nat(16u);
v___x_37_ = lean_mk_array(v___x_36_, v___x_35_);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__8(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__7, &l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__7);
v___x_39_ = lean_unsigned_to_nat(0u);
v___x_40_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg(lean_object* v_e_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = l_Lean_Expr_cleanupAnnotations(v_e_48_);
v___x_60_ = l_Lean_Expr_isApp(v___x_59_);
if (v___x_60_ == 0)
{
lean_dec_ref(v___x_59_);
lean_dec_ref(v_e_48_);
goto v___jp_56_;
}
else
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = l_Lean_Expr_appFnCleanup___redArg(v___x_59_);
v___x_62_ = l_Lean_Expr_isApp(v___x_61_);
if (v___x_62_ == 0)
{
lean_dec_ref(v___x_61_);
lean_dec_ref(v___x_59_);
lean_dec_ref(v_e_48_);
goto v___jp_56_;
}
else
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = l_Lean_Expr_appFnCleanup___redArg(v___x_61_);
v___x_64_ = l_Lean_Expr_isApp(v___x_63_);
if (v___x_64_ == 0)
{
lean_dec_ref(v___x_63_);
lean_dec_ref(v___x_61_);
lean_dec_ref(v___x_59_);
lean_dec_ref(v_e_48_);
goto v___jp_56_;
}
else
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = l_Lean_Expr_appFnCleanup___redArg(v___x_63_);
v___x_66_ = l_Lean_Expr_isApp(v___x_65_);
if (v___x_66_ == 0)
{
lean_dec_ref(v___x_65_);
lean_dec_ref(v___x_63_);
lean_dec_ref(v___x_61_);
lean_dec_ref(v___x_59_);
lean_dec_ref(v_e_48_);
goto v___jp_56_;
}
else
{
lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_67_ = l_Lean_Expr_appFnCleanup___redArg(v___x_65_);
v___x_68_ = l_Lean_Expr_isApp(v___x_67_);
if (v___x_68_ == 0)
{
lean_dec_ref(v___x_67_);
lean_dec_ref(v___x_65_);
lean_dec_ref(v___x_63_);
lean_dec_ref(v___x_61_);
lean_dec_ref(v___x_59_);
lean_dec_ref(v_e_48_);
goto v___jp_56_;
}
else
{
lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_69_ = l_Lean_Expr_appFnCleanup___redArg(v___x_67_);
v___x_70_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__2));
v___x_71_ = l_Lean_Expr_isConstOf(v___x_69_, v___x_70_);
if (v___x_71_ == 0)
{
lean_dec_ref(v___x_69_);
lean_dec_ref(v___x_67_);
lean_dec_ref(v___x_65_);
lean_dec_ref(v___x_63_);
lean_dec_ref(v___x_61_);
lean_dec_ref(v___x_59_);
lean_dec_ref(v_e_48_);
goto v___jp_56_;
}
else
{
lean_object* v_arg_72_; lean_object* v_arg_73_; lean_object* v_arg_74_; lean_object* v_arg_75_; lean_object* v_arg_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_arg_72_ = lean_ctor_get(v___x_59_, 1);
lean_inc_ref_n(v_arg_72_, 2);
lean_dec_ref(v___x_59_);
v_arg_73_ = lean_ctor_get(v___x_61_, 1);
lean_inc_ref_n(v_arg_73_, 2);
lean_dec_ref(v___x_61_);
v_arg_74_ = lean_ctor_get(v___x_63_, 1);
lean_inc_ref_n(v_arg_74_, 2);
lean_dec_ref(v___x_63_);
v_arg_75_ = lean_ctor_get(v___x_65_, 1);
lean_inc_ref(v_arg_75_);
lean_dec_ref(v___x_65_);
v_arg_76_ = lean_ctor_get(v___x_67_, 1);
lean_inc_ref_n(v_arg_76_, 2);
lean_dec_ref(v___x_67_);
v___x_77_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__4));
v___x_78_ = l_Lean_Expr_constLevels_x21(v___x_69_);
lean_dec_ref(v___x_69_);
lean_inc(v___x_78_);
v___x_79_ = l_Lean_mkConst(v___x_77_, v___x_78_);
v___x_80_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__6));
v___x_81_ = lean_unsigned_to_nat(0u);
v___x_82_ = l_Lean_Expr_proj___override(v___x_80_, v___x_81_, v_arg_74_);
v___x_83_ = l_Lean_mkApp4(v___x_79_, v_arg_76_, v___x_82_, v_arg_73_, v_arg_72_);
v___x_84_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__8, &l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__8);
v___x_85_ = l_Lean_Meta_Sym_shareCommonWithoutChecks(v___x_83_, v___x_84_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc(v_a_86_);
lean_dec_ref_known(v___x_85_, 1);
v___x_87_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__12));
v___x_88_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_87_, v___x_78_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
lean_inc(v_a_89_);
lean_dec_ref_known(v___x_88_, 1);
v___x_90_ = l_Lean_mkApp5(v_a_89_, v_arg_76_, v_arg_75_, v_arg_74_, v_arg_73_, v_arg_72_);
lean_inc(v_a_86_);
v___x_91_ = l_Lean_Meta_mkEq(v_e_48_, v_a_86_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
if (lean_obj_tag(v___x_91_) == 0)
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_102_; 
v_a_92_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_102_ == 0)
{
v___x_94_ = v___x_91_;
v_isShared_95_ = v_isSharedCheck_102_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_91_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_102_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v___x_96_ = l_Lean_Meta_mkExpectedPropHint(v___x_90_, v_a_92_);
v___x_97_ = 0;
v___x_98_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_98_, 0, v_a_86_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*2, v___x_97_);
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*2 + 1, v___x_97_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v___x_98_);
v___x_100_ = v___x_94_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_98_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
else
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_110_; 
lean_dec_ref(v___x_90_);
lean_dec(v_a_86_);
v_a_103_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_110_ == 0)
{
v___x_105_ = v___x_91_;
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v___x_91_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_108_; 
if (v_isShared_106_ == 0)
{
v___x_108_ = v___x_105_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_a_103_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
lean_dec(v_a_86_);
lean_dec_ref(v_arg_76_);
lean_dec_ref(v_arg_75_);
lean_dec_ref(v_arg_74_);
lean_dec_ref(v_arg_73_);
lean_dec_ref(v_arg_72_);
lean_dec_ref(v_e_48_);
v_a_111_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_88_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_88_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec(v___x_78_);
lean_dec_ref(v_arg_76_);
lean_dec_ref(v_arg_75_);
lean_dec_ref(v_arg_74_);
lean_dec_ref(v_arg_73_);
lean_dec_ref(v_arg_72_);
lean_dec_ref(v_e_48_);
v_a_119_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_85_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_85_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
}
}
}
}
v___jp_56_:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__0));
v___x_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___boxed(lean_object* v_e_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg(v_e_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym(lean_object* v_e_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg(v_e_136_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___boxed(lean_object* v_e_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym(v_e_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec(v_a_155_);
lean_dec_ref(v_a_154_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg(lean_object* v_e_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = l_Lean_Expr_cleanupAnnotations(v_e_174_);
v___x_189_ = l_Lean_Expr_isApp(v___x_188_);
if (v___x_189_ == 0)
{
lean_dec_ref(v___x_188_);
lean_dec_ref(v_e_174_);
goto v___jp_185_;
}
else
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = l_Lean_Expr_appFnCleanup___redArg(v___x_188_);
v___x_191_ = l_Lean_Expr_isApp(v___x_190_);
if (v___x_191_ == 0)
{
lean_dec_ref(v___x_190_);
lean_dec_ref(v___x_188_);
lean_dec_ref(v_e_174_);
goto v___jp_185_;
}
else
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = l_Lean_Expr_appFnCleanup___redArg(v___x_190_);
v___x_193_ = l_Lean_Expr_isApp(v___x_192_);
if (v___x_193_ == 0)
{
lean_dec_ref(v___x_192_);
lean_dec_ref(v___x_190_);
lean_dec_ref(v___x_188_);
lean_dec_ref(v_e_174_);
goto v___jp_185_;
}
else
{
lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_194_ = l_Lean_Expr_appFnCleanup___redArg(v___x_192_);
v___x_195_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__1));
v___x_196_ = l_Lean_Expr_isConstOf(v___x_194_, v___x_195_);
lean_dec_ref(v___x_194_);
if (v___x_196_ == 0)
{
lean_dec_ref(v___x_192_);
lean_dec_ref(v___x_190_);
lean_dec_ref(v___x_188_);
lean_dec_ref(v_e_174_);
goto v___jp_185_;
}
else
{
lean_object* v_arg_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v_arg_197_ = lean_ctor_get(v___x_192_, 1);
lean_inc_ref(v_arg_197_);
lean_dec_ref(v___x_192_);
v___x_198_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__3));
v___x_199_ = l_Lean_Expr_isConstOf(v_arg_197_, v___x_198_);
lean_dec_ref(v_arg_197_);
if (v___x_199_ == 0)
{
lean_dec_ref(v___x_190_);
lean_dec_ref(v___x_188_);
lean_dec_ref(v_e_174_);
goto v___jp_182_;
}
else
{
lean_object* v_arg_200_; lean_object* v_arg_201_; lean_object* v___x_261_; uint8_t v___x_262_; 
v_arg_200_ = lean_ctor_get(v___x_188_, 1);
lean_inc_ref(v_arg_200_);
lean_dec_ref(v___x_188_);
v_arg_201_ = lean_ctor_get(v___x_190_, 1);
lean_inc_ref(v_arg_201_);
lean_dec_ref(v___x_190_);
v___x_261_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__5));
v___x_262_ = l_Lean_Expr_isConstOf(v_arg_200_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___closed__7));
v___x_264_ = l_Lean_Expr_isConstOf(v_arg_200_, v___x_263_);
lean_dec_ref(v_arg_200_);
if (v___x_264_ == 0)
{
lean_dec_ref(v_arg_201_);
lean_dec_ref(v_e_174_);
goto v___jp_182_;
}
else
{
goto v___jp_202_;
}
}
else
{
lean_dec_ref(v_arg_200_);
goto v___jp_202_;
}
v___jp_202_:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_Meta_getBoolDecision_x3f(v_arg_201_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_252_; 
v_a_204_ = lean_ctor_get(v___x_203_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_203_);
if (v_isSharedCheck_252_ == 0)
{
v___x_206_ = v___x_203_;
v_isShared_207_ = v_isSharedCheck_252_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_203_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_252_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
if (lean_obj_tag(v_a_204_) == 1)
{
lean_object* v___x_208_; 
lean_dec_ref_known(v_a_204_, 1);
lean_del_object(v___x_206_);
v___x_208_ = l_Lean_Meta_Simp_normalizeBoolCondition(v_e_174_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v_expr_210_; lean_object* v___x_211_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_a_209_);
lean_dec_ref_known(v___x_208_, 1);
v_expr_210_ = lean_ctor_get(v_a_209_, 0);
lean_inc_ref(v_expr_210_);
v___x_211_ = l_Lean_Meta_Sym_shareCommon(v_expr_210_, v_a_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_213_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
lean_dec_ref_known(v___x_211_, 1);
v___x_213_ = l_Lean_Meta_Simp_Result_getProof(v_a_209_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_223_; 
v_a_214_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_223_ == 0)
{
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_223_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_223_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_218_ = 0;
v___x_219_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_219_, 0, v_a_212_);
lean_ctor_set(v___x_219_, 1, v_a_214_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*2, v___x_218_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*2 + 1, v___x_218_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_219_);
v___x_221_ = v___x_216_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
else
{
lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_231_; 
lean_dec(v_a_212_);
v_a_224_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_231_ == 0)
{
v___x_226_ = v___x_213_;
v_isShared_227_ = v_isSharedCheck_231_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_213_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_231_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_229_; 
if (v_isShared_227_ == 0)
{
v___x_229_ = v___x_226_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_a_224_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
}
else
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_239_; 
lean_dec(v_a_209_);
v_a_232_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_239_ == 0)
{
v___x_234_ = v___x_211_;
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_211_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_a_232_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
else
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
v_a_240_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v___x_208_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_208_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_240_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
else
{
lean_object* v___x_248_; lean_object* v___x_250_; 
lean_dec(v_a_204_);
lean_dec_ref(v_e_174_);
v___x_248_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__0));
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v___x_248_);
v___x_250_ = v___x_206_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_248_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
else
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
lean_dec_ref(v_e_174_);
v_a_253_ = lean_ctor_get(v___x_203_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_203_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_203_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_203_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
}
}
}
}
v___jp_182_:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__0));
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
v___jp_185_:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg___closed__0));
v___x_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
return v___x_187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg___boxed(lean_object* v_e_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg(v_e_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
lean_dec(v_a_271_);
lean_dec_ref(v_a_270_);
lean_dec(v_a_269_);
lean_dec_ref(v_a_268_);
lean_dec(v_a_267_);
lean_dec_ref(v_a_266_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq(lean_object* v_e_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg(v_e_274_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___boxed(lean_object* v_e_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq(v_e_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_a_292_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__0(lean_object* v_x_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v___x_310_; 
lean_inc_ref(v___y_299_);
v___x_310_ = l_Lean_Meta_Sym_Simp_reduceControl(v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_311_);
if (lean_obj_tag(v_a_311_) == 0)
{
uint8_t v_done_312_; 
v_done_312_ = lean_ctor_get_uint8(v_a_311_, 0);
if (v_done_312_ == 0)
{
uint8_t v_contextDependent_313_; lean_object* v___x_314_; 
lean_dec_ref_known(v___x_310_, 1);
v_contextDependent_313_ = lean_ctor_get_uint8(v_a_311_, 1);
lean_dec_ref_known(v_a_311_, 0);
v___x_314_ = l_Lean_Meta_Sym_Simp_simpExistsPropDomain(v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec_ref(v___y_299_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; uint8_t v___y_317_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
if (v_contextDependent_313_ == 0)
{
return v___x_314_;
}
else
{
if (lean_obj_tag(v_a_315_) == 0)
{
uint8_t v_contextDependent_327_; 
v_contextDependent_327_ = lean_ctor_get_uint8(v_a_315_, 1);
v___y_317_ = v_contextDependent_327_;
goto v___jp_316_;
}
else
{
uint8_t v_contextDependent_328_; 
v_contextDependent_328_ = lean_ctor_get_uint8(v_a_315_, sizeof(void*)*2 + 1);
v___y_317_ = v_contextDependent_328_;
goto v___jp_316_;
}
}
v___jp_316_:
{
if (v___y_317_ == 0)
{
lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_325_; 
lean_inc(v_a_315_);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_325_ == 0)
{
lean_object* v_unused_326_; 
v_unused_326_ = lean_ctor_get(v___x_314_, 0);
lean_dec(v_unused_326_);
v___x_319_ = v___x_314_;
v_isShared_320_ = v_isSharedCheck_325_;
goto v_resetjp_318_;
}
else
{
lean_dec(v___x_314_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_325_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_321_; lean_object* v___x_323_; 
v___x_321_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_315_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v___x_321_);
v___x_323_ = v___x_319_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
else
{
return v___x_314_;
}
}
}
else
{
return v___x_314_;
}
}
else
{
lean_dec_ref_known(v_a_311_, 0);
lean_dec_ref(v___y_299_);
return v___x_310_;
}
}
else
{
uint8_t v_done_329_; 
v_done_329_ = lean_ctor_get_uint8(v_a_311_, sizeof(void*)*2);
if (v_done_329_ == 0)
{
lean_object* v_e_x27_330_; lean_object* v_proof_331_; uint8_t v_contextDependent_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_382_; 
lean_dec_ref_known(v___x_310_, 1);
v_e_x27_330_ = lean_ctor_get(v_a_311_, 0);
v_proof_331_ = lean_ctor_get(v_a_311_, 1);
v_contextDependent_332_ = lean_ctor_get_uint8(v_a_311_, sizeof(void*)*2 + 1);
v_isSharedCheck_382_ = !lean_is_exclusive(v_a_311_);
if (v_isSharedCheck_382_ == 0)
{
v___x_334_ = v_a_311_;
v_isShared_335_ = v_isSharedCheck_382_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_proof_331_);
lean_inc(v_e_x27_330_);
lean_dec(v_a_311_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_382_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; 
v___x_336_ = l_Lean_Meta_Sym_Simp_simpExistsPropDomain(v_e_x27_330_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_381_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_381_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_381_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_381_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
if (lean_obj_tag(v_a_337_) == 0)
{
uint8_t v_done_341_; uint8_t v_contextDependent_342_; uint8_t v___y_344_; 
lean_dec_ref(v___y_299_);
v_done_341_ = lean_ctor_get_uint8(v_a_337_, 0);
v_contextDependent_342_ = lean_ctor_get_uint8(v_a_337_, 1);
lean_dec_ref_known(v_a_337_, 0);
if (v_contextDependent_332_ == 0)
{
v___y_344_ = v_contextDependent_342_;
goto v___jp_343_;
}
else
{
v___y_344_ = v_contextDependent_332_;
goto v___jp_343_;
}
v___jp_343_:
{
lean_object* v___x_346_; 
if (v_isShared_335_ == 0)
{
v___x_346_ = v___x_334_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_e_x27_330_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_proof_331_);
v___x_346_ = v_reuseFailAlloc_350_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_object* v___x_348_; 
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*2, v_done_341_);
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*2 + 1, v___y_344_);
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 0, v___x_346_);
v___x_348_ = v___x_339_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_346_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
else
{
lean_object* v_e_x27_351_; lean_object* v_proof_352_; uint8_t v_done_353_; uint8_t v_contextDependent_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_380_; 
lean_del_object(v___x_339_);
lean_del_object(v___x_334_);
v_e_x27_351_ = lean_ctor_get(v_a_337_, 0);
v_proof_352_ = lean_ctor_get(v_a_337_, 1);
v_done_353_ = lean_ctor_get_uint8(v_a_337_, sizeof(void*)*2);
v_contextDependent_354_ = lean_ctor_get_uint8(v_a_337_, sizeof(void*)*2 + 1);
v_isSharedCheck_380_ = !lean_is_exclusive(v_a_337_);
if (v_isSharedCheck_380_ == 0)
{
v___x_356_ = v_a_337_;
v_isShared_357_ = v_isSharedCheck_380_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_proof_352_);
lean_inc(v_e_x27_351_);
lean_dec(v_a_337_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_380_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_358_; 
lean_inc_ref(v_e_x27_351_);
v___x_358_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_299_, v_e_x27_330_, v_proof_331_, v_e_x27_351_, v_proof_352_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_371_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_371_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_371_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_371_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
uint8_t v___y_364_; 
if (v_contextDependent_332_ == 0)
{
v___y_364_ = v_contextDependent_354_;
goto v___jp_363_;
}
else
{
v___y_364_ = v_contextDependent_332_;
goto v___jp_363_;
}
v___jp_363_:
{
lean_object* v___x_366_; 
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 1, v_a_359_);
v___x_366_ = v___x_356_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_e_x27_351_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v_a_359_);
lean_ctor_set_uint8(v_reuseFailAlloc_370_, sizeof(void*)*2, v_done_353_);
v___x_366_ = v_reuseFailAlloc_370_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
lean_object* v___x_368_; 
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*2 + 1, v___y_364_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_366_);
v___x_368_ = v___x_361_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_366_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_del_object(v___x_356_);
lean_dec_ref(v_e_x27_351_);
v_a_372_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_358_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_358_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_334_);
lean_dec_ref(v_proof_331_);
lean_dec_ref(v_e_x27_330_);
lean_dec_ref(v___y_299_);
return v___x_336_;
}
}
}
else
{
lean_dec_ref_known(v_a_311_, 2);
lean_dec_ref(v___y_299_);
return v___x_310_;
}
}
}
else
{
lean_dec_ref(v___y_299_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__0___boxed(lean_object* v_x_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__0(v_x_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__1(lean_object* v___f_396_, lean_object* v_x_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = lean_box(0);
lean_inc_ref(v___y_398_);
v___x_410_ = l_Lean_Meta_Sym_Simp_reduceProj___redArg(v___y_398_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v_a_411_; 
v_a_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_a_411_);
if (lean_obj_tag(v_a_411_) == 0)
{
uint8_t v_done_412_; 
v_done_412_ = lean_ctor_get_uint8(v_a_411_, 0);
if (v_done_412_ == 0)
{
uint8_t v_contextDependent_413_; lean_object* v___x_414_; 
lean_dec_ref_known(v___x_410_, 1);
v_contextDependent_413_ = lean_ctor_get_uint8(v_a_411_, 1);
lean_dec_ref_known(v_a_411_, 0);
lean_inc(v___y_407_);
lean_inc_ref(v___y_406_);
lean_inc(v___y_405_);
lean_inc_ref(v___y_404_);
lean_inc(v___y_403_);
lean_inc_ref(v___y_402_);
lean_inc(v___y_401_);
lean_inc_ref(v___y_400_);
lean_inc(v___y_399_);
v___x_414_ = lean_apply_12(v___f_396_, v___x_409_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, lean_box(0));
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; uint8_t v___y_417_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_415_);
if (v_contextDependent_413_ == 0)
{
lean_dec(v_a_415_);
return v___x_414_;
}
else
{
if (lean_obj_tag(v_a_415_) == 0)
{
uint8_t v_contextDependent_427_; 
v_contextDependent_427_ = lean_ctor_get_uint8(v_a_415_, 1);
v___y_417_ = v_contextDependent_427_;
goto v___jp_416_;
}
else
{
uint8_t v_contextDependent_428_; 
v_contextDependent_428_ = lean_ctor_get_uint8(v_a_415_, sizeof(void*)*2 + 1);
v___y_417_ = v_contextDependent_428_;
goto v___jp_416_;
}
}
v___jp_416_:
{
if (v___y_417_ == 0)
{
lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_425_; 
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; 
v_unused_426_ = lean_ctor_get(v___x_414_, 0);
lean_dec(v_unused_426_);
v___x_419_ = v___x_414_;
v_isShared_420_ = v_isSharedCheck_425_;
goto v_resetjp_418_;
}
else
{
lean_dec(v___x_414_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_425_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_421_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_415_);
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 0, v___x_421_);
v___x_423_ = v___x_419_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
else
{
lean_dec(v_a_415_);
return v___x_414_;
}
}
}
else
{
return v___x_414_;
}
}
else
{
lean_dec_ref_known(v_a_411_, 0);
lean_dec_ref(v___y_398_);
lean_dec_ref(v___f_396_);
return v___x_410_;
}
}
else
{
uint8_t v_done_429_; 
v_done_429_ = lean_ctor_get_uint8(v_a_411_, sizeof(void*)*2);
if (v_done_429_ == 0)
{
lean_object* v_e_x27_430_; lean_object* v_proof_431_; uint8_t v_contextDependent_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_482_; 
lean_dec_ref_known(v___x_410_, 1);
v_e_x27_430_ = lean_ctor_get(v_a_411_, 0);
v_proof_431_ = lean_ctor_get(v_a_411_, 1);
v_contextDependent_432_ = lean_ctor_get_uint8(v_a_411_, sizeof(void*)*2 + 1);
v_isSharedCheck_482_ = !lean_is_exclusive(v_a_411_);
if (v_isSharedCheck_482_ == 0)
{
v___x_434_ = v_a_411_;
v_isShared_435_ = v_isSharedCheck_482_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_proof_431_);
lean_inc(v_e_x27_430_);
lean_dec(v_a_411_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_482_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; 
lean_inc(v___y_407_);
lean_inc_ref(v___y_406_);
lean_inc(v___y_405_);
lean_inc_ref(v___y_404_);
lean_inc(v___y_403_);
lean_inc_ref(v___y_402_);
lean_inc(v___y_401_);
lean_inc_ref(v___y_400_);
lean_inc(v___y_399_);
lean_inc_ref(v_e_x27_430_);
v___x_436_ = lean_apply_12(v___f_396_, v___x_409_, v_e_x27_430_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, lean_box(0));
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_481_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_481_ == 0)
{
v___x_439_ = v___x_436_;
v_isShared_440_ = v_isSharedCheck_481_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_436_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_481_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
if (lean_obj_tag(v_a_437_) == 0)
{
uint8_t v_done_441_; uint8_t v_contextDependent_442_; uint8_t v___y_444_; 
lean_dec_ref(v___y_398_);
v_done_441_ = lean_ctor_get_uint8(v_a_437_, 0);
v_contextDependent_442_ = lean_ctor_get_uint8(v_a_437_, 1);
lean_dec_ref_known(v_a_437_, 0);
if (v_contextDependent_432_ == 0)
{
v___y_444_ = v_contextDependent_442_;
goto v___jp_443_;
}
else
{
v___y_444_ = v_contextDependent_432_;
goto v___jp_443_;
}
v___jp_443_:
{
lean_object* v___x_446_; 
if (v_isShared_435_ == 0)
{
v___x_446_ = v___x_434_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_e_x27_430_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_proof_431_);
v___x_446_ = v_reuseFailAlloc_450_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_448_; 
lean_ctor_set_uint8(v___x_446_, sizeof(void*)*2, v_done_441_);
lean_ctor_set_uint8(v___x_446_, sizeof(void*)*2 + 1, v___y_444_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_446_);
v___x_448_ = v___x_439_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
else
{
lean_object* v_e_x27_451_; lean_object* v_proof_452_; uint8_t v_done_453_; uint8_t v_contextDependent_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_480_; 
lean_del_object(v___x_439_);
lean_del_object(v___x_434_);
v_e_x27_451_ = lean_ctor_get(v_a_437_, 0);
v_proof_452_ = lean_ctor_get(v_a_437_, 1);
v_done_453_ = lean_ctor_get_uint8(v_a_437_, sizeof(void*)*2);
v_contextDependent_454_ = lean_ctor_get_uint8(v_a_437_, sizeof(void*)*2 + 1);
v_isSharedCheck_480_ = !lean_is_exclusive(v_a_437_);
if (v_isSharedCheck_480_ == 0)
{
v___x_456_ = v_a_437_;
v_isShared_457_ = v_isSharedCheck_480_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_proof_452_);
lean_inc(v_e_x27_451_);
lean_dec(v_a_437_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_480_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; 
lean_inc_ref(v_e_x27_451_);
v___x_458_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_398_, v_e_x27_430_, v_proof_431_, v_e_x27_451_, v_proof_452_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_471_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_471_ == 0)
{
v___x_461_ = v___x_458_;
v_isShared_462_ = v_isSharedCheck_471_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_458_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_471_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
uint8_t v___y_464_; 
if (v_contextDependent_432_ == 0)
{
v___y_464_ = v_contextDependent_454_;
goto v___jp_463_;
}
else
{
v___y_464_ = v_contextDependent_432_;
goto v___jp_463_;
}
v___jp_463_:
{
lean_object* v___x_466_; 
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 1, v_a_459_);
v___x_466_ = v___x_456_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_e_x27_451_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_a_459_);
lean_ctor_set_uint8(v_reuseFailAlloc_470_, sizeof(void*)*2, v_done_453_);
v___x_466_ = v_reuseFailAlloc_470_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_468_; 
lean_ctor_set_uint8(v___x_466_, sizeof(void*)*2 + 1, v___y_464_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v___x_466_);
v___x_468_ = v___x_461_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_del_object(v___x_456_);
lean_dec_ref(v_e_x27_451_);
v_a_472_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_458_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_458_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_434_);
lean_dec_ref(v_proof_431_);
lean_dec_ref(v_e_x27_430_);
lean_dec_ref(v___y_398_);
return v___x_436_;
}
}
}
else
{
lean_dec_ref_known(v_a_411_, 2);
lean_dec_ref(v___y_398_);
lean_dec_ref(v___f_396_);
return v___x_410_;
}
}
}
else
{
lean_dec_ref(v___y_398_);
lean_dec_ref(v___f_396_);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__1___boxed(lean_object* v___f_483_, lean_object* v_x_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__1(v___f_483_, v_x_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__2(lean_object* v___f_497_, lean_object* v_x_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = lean_box(0);
lean_inc_ref(v___y_499_);
v___x_511_ = l_Lean_Meta_Grind_NormSym_etaReduce___redArg(v___y_499_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
if (lean_obj_tag(v_a_512_) == 0)
{
uint8_t v_done_513_; 
v_done_513_ = lean_ctor_get_uint8(v_a_512_, 0);
if (v_done_513_ == 0)
{
uint8_t v_contextDependent_514_; lean_object* v___x_515_; 
lean_dec_ref_known(v___x_511_, 1);
v_contextDependent_514_ = lean_ctor_get_uint8(v_a_512_, 1);
lean_dec_ref_known(v_a_512_, 0);
lean_inc(v___y_508_);
lean_inc_ref(v___y_507_);
lean_inc(v___y_506_);
lean_inc_ref(v___y_505_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
v___x_515_ = lean_apply_12(v___f_497_, v___x_510_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, lean_box(0));
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; uint8_t v___y_518_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
if (v_contextDependent_514_ == 0)
{
lean_dec(v_a_516_);
return v___x_515_;
}
else
{
if (lean_obj_tag(v_a_516_) == 0)
{
uint8_t v_contextDependent_528_; 
v_contextDependent_528_ = lean_ctor_get_uint8(v_a_516_, 1);
v___y_518_ = v_contextDependent_528_;
goto v___jp_517_;
}
else
{
uint8_t v_contextDependent_529_; 
v_contextDependent_529_ = lean_ctor_get_uint8(v_a_516_, sizeof(void*)*2 + 1);
v___y_518_ = v_contextDependent_529_;
goto v___jp_517_;
}
}
v___jp_517_:
{
if (v___y_518_ == 0)
{
lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_526_; 
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_526_ == 0)
{
lean_object* v_unused_527_; 
v_unused_527_ = lean_ctor_get(v___x_515_, 0);
lean_dec(v_unused_527_);
v___x_520_ = v___x_515_;
v_isShared_521_ = v_isSharedCheck_526_;
goto v_resetjp_519_;
}
else
{
lean_dec(v___x_515_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_526_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_522_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_516_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 0, v___x_522_);
v___x_524_ = v___x_520_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_dec(v_a_516_);
return v___x_515_;
}
}
}
else
{
return v___x_515_;
}
}
else
{
lean_dec_ref_known(v_a_512_, 0);
lean_dec_ref(v___y_499_);
lean_dec_ref(v___f_497_);
return v___x_511_;
}
}
else
{
uint8_t v_done_530_; 
v_done_530_ = lean_ctor_get_uint8(v_a_512_, sizeof(void*)*2);
if (v_done_530_ == 0)
{
lean_object* v_e_x27_531_; lean_object* v_proof_532_; uint8_t v_contextDependent_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_583_; 
lean_dec_ref_known(v___x_511_, 1);
v_e_x27_531_ = lean_ctor_get(v_a_512_, 0);
v_proof_532_ = lean_ctor_get(v_a_512_, 1);
v_contextDependent_533_ = lean_ctor_get_uint8(v_a_512_, sizeof(void*)*2 + 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_a_512_);
if (v_isSharedCheck_583_ == 0)
{
v___x_535_ = v_a_512_;
v_isShared_536_ = v_isSharedCheck_583_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_proof_532_);
lean_inc(v_e_x27_531_);
lean_dec(v_a_512_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_583_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; 
lean_inc(v___y_508_);
lean_inc_ref(v___y_507_);
lean_inc(v___y_506_);
lean_inc_ref(v___y_505_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v_e_x27_531_);
v___x_537_ = lean_apply_12(v___f_497_, v___x_510_, v_e_x27_531_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, lean_box(0));
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_582_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_582_ == 0)
{
v___x_540_ = v___x_537_;
v_isShared_541_ = v_isSharedCheck_582_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_537_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_582_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
if (lean_obj_tag(v_a_538_) == 0)
{
uint8_t v_done_542_; uint8_t v_contextDependent_543_; uint8_t v___y_545_; 
lean_dec_ref(v___y_499_);
v_done_542_ = lean_ctor_get_uint8(v_a_538_, 0);
v_contextDependent_543_ = lean_ctor_get_uint8(v_a_538_, 1);
lean_dec_ref_known(v_a_538_, 0);
if (v_contextDependent_533_ == 0)
{
v___y_545_ = v_contextDependent_543_;
goto v___jp_544_;
}
else
{
v___y_545_ = v_contextDependent_533_;
goto v___jp_544_;
}
v___jp_544_:
{
lean_object* v___x_547_; 
if (v_isShared_536_ == 0)
{
v___x_547_ = v___x_535_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_e_x27_531_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_proof_532_);
v___x_547_ = v_reuseFailAlloc_551_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_549_; 
lean_ctor_set_uint8(v___x_547_, sizeof(void*)*2, v_done_542_);
lean_ctor_set_uint8(v___x_547_, sizeof(void*)*2 + 1, v___y_545_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_547_);
v___x_549_ = v___x_540_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
else
{
lean_object* v_e_x27_552_; lean_object* v_proof_553_; uint8_t v_done_554_; uint8_t v_contextDependent_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_581_; 
lean_del_object(v___x_540_);
lean_del_object(v___x_535_);
v_e_x27_552_ = lean_ctor_get(v_a_538_, 0);
v_proof_553_ = lean_ctor_get(v_a_538_, 1);
v_done_554_ = lean_ctor_get_uint8(v_a_538_, sizeof(void*)*2);
v_contextDependent_555_ = lean_ctor_get_uint8(v_a_538_, sizeof(void*)*2 + 1);
v_isSharedCheck_581_ = !lean_is_exclusive(v_a_538_);
if (v_isSharedCheck_581_ == 0)
{
v___x_557_ = v_a_538_;
v_isShared_558_ = v_isSharedCheck_581_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_proof_553_);
lean_inc(v_e_x27_552_);
lean_dec(v_a_538_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_581_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_559_; 
lean_inc_ref(v_e_x27_552_);
v___x_559_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_499_, v_e_x27_531_, v_proof_532_, v_e_x27_552_, v_proof_553_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_572_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_572_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_572_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_572_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
uint8_t v___y_565_; 
if (v_contextDependent_533_ == 0)
{
v___y_565_ = v_contextDependent_555_;
goto v___jp_564_;
}
else
{
v___y_565_ = v_contextDependent_533_;
goto v___jp_564_;
}
v___jp_564_:
{
lean_object* v___x_567_; 
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 1, v_a_560_);
v___x_567_ = v___x_557_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_e_x27_552_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_a_560_);
lean_ctor_set_uint8(v_reuseFailAlloc_571_, sizeof(void*)*2, v_done_554_);
v___x_567_ = v_reuseFailAlloc_571_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_569_; 
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*2 + 1, v___y_565_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_567_);
v___x_569_ = v___x_562_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_del_object(v___x_557_);
lean_dec_ref(v_e_x27_552_);
v_a_573_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_559_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_559_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_535_);
lean_dec_ref(v_proof_532_);
lean_dec_ref(v_e_x27_531_);
lean_dec_ref(v___y_499_);
return v___x_537_;
}
}
}
else
{
lean_dec_ref_known(v_a_512_, 2);
lean_dec_ref(v___y_499_);
lean_dec_ref(v___f_497_);
return v___x_511_;
}
}
}
else
{
lean_dec_ref(v___y_499_);
lean_dec_ref(v___f_497_);
return v___x_511_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__2___boxed(lean_object* v___f_584_, lean_object* v_x_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__2(v___f_584_, v_x_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__3(lean_object* v___f_598_, lean_object* v_x_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_box(0);
lean_inc_ref(v___y_600_);
v___x_612_ = l_Lean_Meta_Sym_Simp_beta___redArg(v___y_600_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_a_613_);
if (lean_obj_tag(v_a_613_) == 0)
{
uint8_t v_done_614_; 
v_done_614_ = lean_ctor_get_uint8(v_a_613_, 0);
if (v_done_614_ == 0)
{
uint8_t v_contextDependent_615_; lean_object* v___x_616_; 
lean_dec_ref_known(v___x_612_, 1);
v_contextDependent_615_ = lean_ctor_get_uint8(v_a_613_, 1);
lean_dec_ref_known(v_a_613_, 0);
lean_inc(v___y_609_);
lean_inc_ref(v___y_608_);
lean_inc(v___y_607_);
lean_inc_ref(v___y_606_);
lean_inc(v___y_605_);
lean_inc_ref(v___y_604_);
lean_inc(v___y_603_);
lean_inc_ref(v___y_602_);
lean_inc(v___y_601_);
v___x_616_ = lean_apply_12(v___f_598_, v___x_611_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, lean_box(0));
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; uint8_t v___y_619_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
if (v_contextDependent_615_ == 0)
{
lean_dec(v_a_617_);
return v___x_616_;
}
else
{
if (lean_obj_tag(v_a_617_) == 0)
{
uint8_t v_contextDependent_629_; 
v_contextDependent_629_ = lean_ctor_get_uint8(v_a_617_, 1);
v___y_619_ = v_contextDependent_629_;
goto v___jp_618_;
}
else
{
uint8_t v_contextDependent_630_; 
v_contextDependent_630_ = lean_ctor_get_uint8(v_a_617_, sizeof(void*)*2 + 1);
v___y_619_ = v_contextDependent_630_;
goto v___jp_618_;
}
}
v___jp_618_:
{
if (v___y_619_ == 0)
{
lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_627_; 
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; 
v_unused_628_ = lean_ctor_get(v___x_616_, 0);
lean_dec(v_unused_628_);
v___x_621_ = v___x_616_;
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
else
{
lean_dec(v___x_616_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_623_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_617_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v___x_623_);
v___x_625_ = v___x_621_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_dec(v_a_617_);
return v___x_616_;
}
}
}
else
{
return v___x_616_;
}
}
else
{
lean_dec_ref_known(v_a_613_, 0);
lean_dec_ref(v___y_600_);
lean_dec_ref(v___f_598_);
return v___x_612_;
}
}
else
{
uint8_t v_done_631_; 
v_done_631_ = lean_ctor_get_uint8(v_a_613_, sizeof(void*)*2);
if (v_done_631_ == 0)
{
lean_object* v_e_x27_632_; lean_object* v_proof_633_; uint8_t v_contextDependent_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_684_; 
lean_dec_ref_known(v___x_612_, 1);
v_e_x27_632_ = lean_ctor_get(v_a_613_, 0);
v_proof_633_ = lean_ctor_get(v_a_613_, 1);
v_contextDependent_634_ = lean_ctor_get_uint8(v_a_613_, sizeof(void*)*2 + 1);
v_isSharedCheck_684_ = !lean_is_exclusive(v_a_613_);
if (v_isSharedCheck_684_ == 0)
{
v___x_636_ = v_a_613_;
v_isShared_637_ = v_isSharedCheck_684_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_proof_633_);
lean_inc(v_e_x27_632_);
lean_dec(v_a_613_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_684_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; 
lean_inc(v___y_609_);
lean_inc_ref(v___y_608_);
lean_inc(v___y_607_);
lean_inc_ref(v___y_606_);
lean_inc(v___y_605_);
lean_inc_ref(v___y_604_);
lean_inc(v___y_603_);
lean_inc_ref(v___y_602_);
lean_inc(v___y_601_);
lean_inc_ref(v_e_x27_632_);
v___x_638_ = lean_apply_12(v___f_598_, v___x_611_, v_e_x27_632_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, lean_box(0));
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_683_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_683_ == 0)
{
v___x_641_ = v___x_638_;
v_isShared_642_ = v_isSharedCheck_683_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_683_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
if (lean_obj_tag(v_a_639_) == 0)
{
uint8_t v_done_643_; uint8_t v_contextDependent_644_; uint8_t v___y_646_; 
lean_dec_ref(v___y_600_);
v_done_643_ = lean_ctor_get_uint8(v_a_639_, 0);
v_contextDependent_644_ = lean_ctor_get_uint8(v_a_639_, 1);
lean_dec_ref_known(v_a_639_, 0);
if (v_contextDependent_634_ == 0)
{
v___y_646_ = v_contextDependent_644_;
goto v___jp_645_;
}
else
{
v___y_646_ = v_contextDependent_634_;
goto v___jp_645_;
}
v___jp_645_:
{
lean_object* v___x_648_; 
if (v_isShared_637_ == 0)
{
v___x_648_ = v___x_636_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_e_x27_632_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_proof_633_);
v___x_648_ = v_reuseFailAlloc_652_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_650_; 
lean_ctor_set_uint8(v___x_648_, sizeof(void*)*2, v_done_643_);
lean_ctor_set_uint8(v___x_648_, sizeof(void*)*2 + 1, v___y_646_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v___x_648_);
v___x_650_ = v___x_641_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
else
{
lean_object* v_e_x27_653_; lean_object* v_proof_654_; uint8_t v_done_655_; uint8_t v_contextDependent_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_682_; 
lean_del_object(v___x_641_);
lean_del_object(v___x_636_);
v_e_x27_653_ = lean_ctor_get(v_a_639_, 0);
v_proof_654_ = lean_ctor_get(v_a_639_, 1);
v_done_655_ = lean_ctor_get_uint8(v_a_639_, sizeof(void*)*2);
v_contextDependent_656_ = lean_ctor_get_uint8(v_a_639_, sizeof(void*)*2 + 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v_a_639_);
if (v_isSharedCheck_682_ == 0)
{
v___x_658_ = v_a_639_;
v_isShared_659_ = v_isSharedCheck_682_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_proof_654_);
lean_inc(v_e_x27_653_);
lean_dec(v_a_639_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_682_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_660_; 
lean_inc_ref(v_e_x27_653_);
v___x_660_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_600_, v_e_x27_632_, v_proof_633_, v_e_x27_653_, v_proof_654_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_673_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_673_ == 0)
{
v___x_663_ = v___x_660_;
v_isShared_664_ = v_isSharedCheck_673_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_660_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_673_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
uint8_t v___y_666_; 
if (v_contextDependent_634_ == 0)
{
v___y_666_ = v_contextDependent_656_;
goto v___jp_665_;
}
else
{
v___y_666_ = v_contextDependent_634_;
goto v___jp_665_;
}
v___jp_665_:
{
lean_object* v___x_668_; 
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v_a_661_);
v___x_668_ = v___x_658_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_e_x27_653_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v_a_661_);
lean_ctor_set_uint8(v_reuseFailAlloc_672_, sizeof(void*)*2, v_done_655_);
v___x_668_ = v_reuseFailAlloc_672_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
lean_object* v___x_670_; 
lean_ctor_set_uint8(v___x_668_, sizeof(void*)*2 + 1, v___y_666_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 0, v___x_668_);
v___x_670_ = v___x_663_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_668_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_del_object(v___x_658_);
lean_dec_ref(v_e_x27_653_);
v_a_674_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_660_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_660_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_636_);
lean_dec_ref(v_proof_633_);
lean_dec_ref(v_e_x27_632_);
lean_dec_ref(v___y_600_);
return v___x_638_;
}
}
}
else
{
lean_dec_ref_known(v_a_613_, 2);
lean_dec_ref(v___y_600_);
lean_dec_ref(v___f_598_);
return v___x_612_;
}
}
}
else
{
lean_dec_ref(v___y_600_);
lean_dec_ref(v___f_598_);
return v___x_612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__3___boxed(lean_object* v___f_685_, lean_object* v_x_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__3(v___f_685_, v_x_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__4(lean_object* v___f_699_, lean_object* v_x_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_712_ = lean_box(0);
lean_inc_ref(v___y_701_);
v___x_713_ = l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpIteToCondSym___redArg(v___y_701_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
lean_inc(v_a_714_);
lean_dec_ref_known(v___x_713_, 1);
if (lean_obj_tag(v_a_714_) == 0)
{
lean_object* v___x_715_; 
lean_dec_ref_known(v_a_714_, 0);
lean_inc(v___y_710_);
lean_inc_ref(v___y_709_);
lean_inc(v___y_708_);
lean_inc_ref(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
lean_inc(v___y_704_);
lean_inc_ref(v___y_703_);
lean_inc(v___y_702_);
v___x_715_ = lean_apply_12(v___f_699_, v___x_712_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, lean_box(0));
return v___x_715_;
}
else
{
lean_object* v_e_x27_716_; lean_object* v_proof_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_767_; 
v_e_x27_716_ = lean_ctor_get(v_a_714_, 0);
v_proof_717_ = lean_ctor_get(v_a_714_, 1);
v_isSharedCheck_767_ = !lean_is_exclusive(v_a_714_);
if (v_isSharedCheck_767_ == 0)
{
v___x_719_ = v_a_714_;
v_isShared_720_ = v_isSharedCheck_767_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_proof_717_);
lean_inc(v_e_x27_716_);
lean_dec(v_a_714_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_767_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; 
lean_inc(v___y_710_);
lean_inc_ref(v___y_709_);
lean_inc(v___y_708_);
lean_inc_ref(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
lean_inc(v___y_704_);
lean_inc_ref(v___y_703_);
lean_inc(v___y_702_);
lean_inc_ref(v_e_x27_716_);
v___x_721_ = lean_apply_12(v___f_699_, v___x_712_, v_e_x27_716_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, lean_box(0));
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_766_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_766_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_766_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_766_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
if (lean_obj_tag(v_a_722_) == 0)
{
uint8_t v_done_726_; uint8_t v_contextDependent_727_; uint8_t v___y_729_; 
lean_dec_ref(v___y_701_);
v_done_726_ = lean_ctor_get_uint8(v_a_722_, 0);
v_contextDependent_727_ = lean_ctor_get_uint8(v_a_722_, 1);
lean_dec_ref_known(v_a_722_, 0);
v___y_729_ = v_contextDependent_727_;
goto v___jp_728_;
v___jp_728_:
{
lean_object* v___x_731_; 
if (v_isShared_720_ == 0)
{
v___x_731_ = v___x_719_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_e_x27_716_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_proof_717_);
v___x_731_ = v_reuseFailAlloc_735_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
lean_object* v___x_733_; 
lean_ctor_set_uint8(v___x_731_, sizeof(void*)*2, v_done_726_);
lean_ctor_set_uint8(v___x_731_, sizeof(void*)*2 + 1, v___y_729_);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 0, v___x_731_);
v___x_733_ = v___x_724_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
else
{
lean_object* v_e_x27_736_; lean_object* v_proof_737_; uint8_t v_done_738_; uint8_t v_contextDependent_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_765_; 
lean_del_object(v___x_724_);
lean_del_object(v___x_719_);
v_e_x27_736_ = lean_ctor_get(v_a_722_, 0);
v_proof_737_ = lean_ctor_get(v_a_722_, 1);
v_done_738_ = lean_ctor_get_uint8(v_a_722_, sizeof(void*)*2);
v_contextDependent_739_ = lean_ctor_get_uint8(v_a_722_, sizeof(void*)*2 + 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v_a_722_);
if (v_isSharedCheck_765_ == 0)
{
v___x_741_ = v_a_722_;
v_isShared_742_ = v_isSharedCheck_765_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_proof_737_);
lean_inc(v_e_x27_736_);
lean_dec(v_a_722_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_765_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; 
lean_inc_ref(v_e_x27_736_);
v___x_743_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_701_, v_e_x27_716_, v_proof_717_, v_e_x27_736_, v_proof_737_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_756_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_756_ == 0)
{
v___x_746_ = v___x_743_;
v_isShared_747_ = v_isSharedCheck_756_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_743_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_756_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
uint8_t v___y_749_; 
v___y_749_ = v_contextDependent_739_;
goto v___jp_748_;
v___jp_748_:
{
lean_object* v___x_751_; 
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 1, v_a_744_);
v___x_751_ = v___x_741_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_e_x27_736_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_a_744_);
lean_ctor_set_uint8(v_reuseFailAlloc_755_, sizeof(void*)*2, v_done_738_);
v___x_751_ = v_reuseFailAlloc_755_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_753_; 
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*2 + 1, v___y_749_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_751_);
v___x_753_ = v___x_746_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_751_);
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
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_del_object(v___x_741_);
lean_dec_ref(v_e_x27_736_);
v_a_757_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_743_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_743_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_719_);
lean_dec_ref(v_proof_717_);
lean_dec_ref(v_e_x27_716_);
lean_dec_ref(v___y_701_);
return v___x_721_;
}
}
}
}
else
{
lean_dec_ref(v___y_701_);
lean_dec_ref(v___f_699_);
return v___x_713_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__4___boxed(lean_object* v___f_768_, lean_object* v_x_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__4(v___f_768_, v_x_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec(v___y_771_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__5(lean_object* v___f_782_, lean_object* v_x_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = lean_box(0);
lean_inc_ref(v___y_784_);
v___x_796_ = l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly(v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v_a_797_; 
v_a_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_797_);
if (lean_obj_tag(v_a_797_) == 0)
{
uint8_t v_done_798_; 
v_done_798_ = lean_ctor_get_uint8(v_a_797_, 0);
if (v_done_798_ == 0)
{
uint8_t v_contextDependent_799_; lean_object* v___x_800_; 
lean_dec_ref_known(v___x_796_, 1);
v_contextDependent_799_ = lean_ctor_get_uint8(v_a_797_, 1);
lean_dec_ref_known(v_a_797_, 0);
lean_inc(v___y_793_);
lean_inc_ref(v___y_792_);
lean_inc(v___y_791_);
lean_inc_ref(v___y_790_);
lean_inc(v___y_789_);
lean_inc_ref(v___y_788_);
lean_inc(v___y_787_);
lean_inc_ref(v___y_786_);
lean_inc(v___y_785_);
v___x_800_ = lean_apply_12(v___f_782_, v___x_795_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, lean_box(0));
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; uint8_t v___y_803_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_a_801_);
if (v_contextDependent_799_ == 0)
{
lean_dec(v_a_801_);
return v___x_800_;
}
else
{
if (lean_obj_tag(v_a_801_) == 0)
{
uint8_t v_contextDependent_813_; 
v_contextDependent_813_ = lean_ctor_get_uint8(v_a_801_, 1);
v___y_803_ = v_contextDependent_813_;
goto v___jp_802_;
}
else
{
uint8_t v_contextDependent_814_; 
v_contextDependent_814_ = lean_ctor_get_uint8(v_a_801_, sizeof(void*)*2 + 1);
v___y_803_ = v_contextDependent_814_;
goto v___jp_802_;
}
}
v___jp_802_:
{
if (v___y_803_ == 0)
{
lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_811_; 
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_811_ == 0)
{
lean_object* v_unused_812_; 
v_unused_812_ = lean_ctor_get(v___x_800_, 0);
lean_dec(v_unused_812_);
v___x_805_ = v___x_800_;
v_isShared_806_ = v_isSharedCheck_811_;
goto v_resetjp_804_;
}
else
{
lean_dec(v___x_800_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_811_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v___x_809_; 
v___x_807_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_801_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v___x_807_);
v___x_809_ = v___x_805_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
else
{
lean_dec(v_a_801_);
return v___x_800_;
}
}
}
else
{
return v___x_800_;
}
}
else
{
lean_dec_ref_known(v_a_797_, 0);
lean_dec_ref(v___y_784_);
lean_dec_ref(v___f_782_);
return v___x_796_;
}
}
else
{
uint8_t v_done_815_; 
v_done_815_ = lean_ctor_get_uint8(v_a_797_, sizeof(void*)*2);
if (v_done_815_ == 0)
{
lean_object* v_e_x27_816_; lean_object* v_proof_817_; uint8_t v_contextDependent_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_868_; 
lean_dec_ref_known(v___x_796_, 1);
v_e_x27_816_ = lean_ctor_get(v_a_797_, 0);
v_proof_817_ = lean_ctor_get(v_a_797_, 1);
v_contextDependent_818_ = lean_ctor_get_uint8(v_a_797_, sizeof(void*)*2 + 1);
v_isSharedCheck_868_ = !lean_is_exclusive(v_a_797_);
if (v_isSharedCheck_868_ == 0)
{
v___x_820_ = v_a_797_;
v_isShared_821_ = v_isSharedCheck_868_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_proof_817_);
lean_inc(v_e_x27_816_);
lean_dec(v_a_797_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_868_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; 
lean_inc(v___y_793_);
lean_inc_ref(v___y_792_);
lean_inc(v___y_791_);
lean_inc_ref(v___y_790_);
lean_inc(v___y_789_);
lean_inc_ref(v___y_788_);
lean_inc(v___y_787_);
lean_inc_ref(v___y_786_);
lean_inc(v___y_785_);
lean_inc_ref(v_e_x27_816_);
v___x_822_ = lean_apply_12(v___f_782_, v___x_795_, v_e_x27_816_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, lean_box(0));
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_867_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_867_ == 0)
{
v___x_825_ = v___x_822_;
v_isShared_826_ = v_isSharedCheck_867_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_822_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_867_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
if (lean_obj_tag(v_a_823_) == 0)
{
uint8_t v_done_827_; uint8_t v_contextDependent_828_; uint8_t v___y_830_; 
lean_dec_ref(v___y_784_);
v_done_827_ = lean_ctor_get_uint8(v_a_823_, 0);
v_contextDependent_828_ = lean_ctor_get_uint8(v_a_823_, 1);
lean_dec_ref_known(v_a_823_, 0);
if (v_contextDependent_818_ == 0)
{
v___y_830_ = v_contextDependent_828_;
goto v___jp_829_;
}
else
{
v___y_830_ = v_contextDependent_818_;
goto v___jp_829_;
}
v___jp_829_:
{
lean_object* v___x_832_; 
if (v_isShared_821_ == 0)
{
v___x_832_ = v___x_820_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_e_x27_816_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_proof_817_);
v___x_832_ = v_reuseFailAlloc_836_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_834_; 
lean_ctor_set_uint8(v___x_832_, sizeof(void*)*2, v_done_827_);
lean_ctor_set_uint8(v___x_832_, sizeof(void*)*2 + 1, v___y_830_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v___x_832_);
v___x_834_ = v___x_825_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
else
{
lean_object* v_e_x27_837_; lean_object* v_proof_838_; uint8_t v_done_839_; uint8_t v_contextDependent_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_866_; 
lean_del_object(v___x_825_);
lean_del_object(v___x_820_);
v_e_x27_837_ = lean_ctor_get(v_a_823_, 0);
v_proof_838_ = lean_ctor_get(v_a_823_, 1);
v_done_839_ = lean_ctor_get_uint8(v_a_823_, sizeof(void*)*2);
v_contextDependent_840_ = lean_ctor_get_uint8(v_a_823_, sizeof(void*)*2 + 1);
v_isSharedCheck_866_ = !lean_is_exclusive(v_a_823_);
if (v_isSharedCheck_866_ == 0)
{
v___x_842_ = v_a_823_;
v_isShared_843_ = v_isSharedCheck_866_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_proof_838_);
lean_inc(v_e_x27_837_);
lean_dec(v_a_823_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_866_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; 
lean_inc_ref(v_e_x27_837_);
v___x_844_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_784_, v_e_x27_816_, v_proof_817_, v_e_x27_837_, v_proof_838_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_857_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_857_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_857_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_857_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
uint8_t v___y_850_; 
if (v_contextDependent_818_ == 0)
{
v___y_850_ = v_contextDependent_840_;
goto v___jp_849_;
}
else
{
v___y_850_ = v_contextDependent_818_;
goto v___jp_849_;
}
v___jp_849_:
{
lean_object* v___x_852_; 
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 1, v_a_845_);
v___x_852_ = v___x_842_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_e_x27_837_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_a_845_);
lean_ctor_set_uint8(v_reuseFailAlloc_856_, sizeof(void*)*2, v_done_839_);
v___x_852_ = v_reuseFailAlloc_856_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_854_; 
lean_ctor_set_uint8(v___x_852_, sizeof(void*)*2 + 1, v___y_850_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 0, v___x_852_);
v___x_854_ = v___x_847_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
lean_del_object(v___x_842_);
lean_dec_ref(v_e_x27_837_);
v_a_858_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_844_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_844_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_820_);
lean_dec_ref(v_proof_817_);
lean_dec_ref(v_e_x27_816_);
lean_dec_ref(v___y_784_);
return v___x_822_;
}
}
}
else
{
lean_dec_ref_known(v_a_797_, 2);
lean_dec_ref(v___y_784_);
lean_dec_ref(v___f_782_);
return v___x_796_;
}
}
}
else
{
lean_dec_ref(v___y_784_);
lean_dec_ref(v___f_782_);
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__5___boxed(lean_object* v___f_869_, lean_object* v_x_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__5(v___f_869_, v_x_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__6(lean_object* v___f_883_, lean_object* v_x_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = lean_box(0);
v___x_897_ = l_Lean_Meta_Grind_NormSym_preMatchCond___redArg(v___y_885_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
if (lean_obj_tag(v_a_898_) == 0)
{
uint8_t v_done_899_; 
v_done_899_ = lean_ctor_get_uint8(v_a_898_, 0);
if (v_done_899_ == 0)
{
uint8_t v_contextDependent_900_; lean_object* v___x_901_; 
lean_dec_ref_known(v___x_897_, 1);
v_contextDependent_900_ = lean_ctor_get_uint8(v_a_898_, 1);
lean_dec_ref_known(v_a_898_, 0);
lean_inc(v___y_894_);
lean_inc_ref(v___y_893_);
lean_inc(v___y_892_);
lean_inc_ref(v___y_891_);
lean_inc(v___y_890_);
lean_inc_ref(v___y_889_);
lean_inc(v___y_888_);
lean_inc_ref(v___y_887_);
lean_inc(v___y_886_);
v___x_901_ = lean_apply_12(v___f_883_, v___x_896_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, lean_box(0));
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; uint8_t v___y_904_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
if (v_contextDependent_900_ == 0)
{
lean_dec(v_a_902_);
return v___x_901_;
}
else
{
if (lean_obj_tag(v_a_902_) == 0)
{
uint8_t v_contextDependent_914_; 
v_contextDependent_914_ = lean_ctor_get_uint8(v_a_902_, 1);
v___y_904_ = v_contextDependent_914_;
goto v___jp_903_;
}
else
{
uint8_t v_contextDependent_915_; 
v_contextDependent_915_ = lean_ctor_get_uint8(v_a_902_, sizeof(void*)*2 + 1);
v___y_904_ = v_contextDependent_915_;
goto v___jp_903_;
}
}
v___jp_903_:
{
if (v___y_904_ == 0)
{
lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_912_; 
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_912_ == 0)
{
lean_object* v_unused_913_; 
v_unused_913_ = lean_ctor_get(v___x_901_, 0);
lean_dec(v_unused_913_);
v___x_906_ = v___x_901_;
v_isShared_907_ = v_isSharedCheck_912_;
goto v_resetjp_905_;
}
else
{
lean_dec(v___x_901_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_912_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_908_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_902_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_908_);
v___x_910_ = v___x_906_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
else
{
lean_dec(v_a_902_);
return v___x_901_;
}
}
}
else
{
return v___x_901_;
}
}
else
{
lean_dec_ref_known(v_a_898_, 0);
lean_dec_ref(v___y_885_);
lean_dec_ref(v___f_883_);
return v___x_897_;
}
}
else
{
uint8_t v_done_916_; 
v_done_916_ = lean_ctor_get_uint8(v_a_898_, sizeof(void*)*2);
if (v_done_916_ == 0)
{
lean_object* v_e_x27_917_; lean_object* v_proof_918_; uint8_t v_contextDependent_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref_known(v___x_897_, 1);
v_e_x27_917_ = lean_ctor_get(v_a_898_, 0);
v_proof_918_ = lean_ctor_get(v_a_898_, 1);
v_contextDependent_919_ = lean_ctor_get_uint8(v_a_898_, sizeof(void*)*2 + 1);
v_isSharedCheck_969_ = !lean_is_exclusive(v_a_898_);
if (v_isSharedCheck_969_ == 0)
{
v___x_921_ = v_a_898_;
v_isShared_922_ = v_isSharedCheck_969_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_proof_918_);
lean_inc(v_e_x27_917_);
lean_dec(v_a_898_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_969_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_923_; 
lean_inc(v___y_894_);
lean_inc_ref(v___y_893_);
lean_inc(v___y_892_);
lean_inc_ref(v___y_891_);
lean_inc(v___y_890_);
lean_inc_ref(v___y_889_);
lean_inc(v___y_888_);
lean_inc_ref(v___y_887_);
lean_inc(v___y_886_);
lean_inc_ref(v_e_x27_917_);
v___x_923_ = lean_apply_12(v___f_883_, v___x_896_, v_e_x27_917_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, lean_box(0));
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_968_; 
v_a_924_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_968_ == 0)
{
v___x_926_ = v___x_923_;
v_isShared_927_ = v_isSharedCheck_968_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_968_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
if (lean_obj_tag(v_a_924_) == 0)
{
uint8_t v_done_928_; uint8_t v_contextDependent_929_; uint8_t v___y_931_; 
lean_dec_ref(v___y_885_);
v_done_928_ = lean_ctor_get_uint8(v_a_924_, 0);
v_contextDependent_929_ = lean_ctor_get_uint8(v_a_924_, 1);
lean_dec_ref_known(v_a_924_, 0);
if (v_contextDependent_919_ == 0)
{
v___y_931_ = v_contextDependent_929_;
goto v___jp_930_;
}
else
{
v___y_931_ = v_contextDependent_919_;
goto v___jp_930_;
}
v___jp_930_:
{
lean_object* v___x_933_; 
if (v_isShared_922_ == 0)
{
v___x_933_ = v___x_921_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_e_x27_917_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_proof_918_);
v___x_933_ = v_reuseFailAlloc_937_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_935_; 
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*2, v_done_928_);
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*2 + 1, v___y_931_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v___x_933_);
v___x_935_ = v___x_926_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_933_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
else
{
lean_object* v_e_x27_938_; lean_object* v_proof_939_; uint8_t v_done_940_; uint8_t v_contextDependent_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_967_; 
lean_del_object(v___x_926_);
lean_del_object(v___x_921_);
v_e_x27_938_ = lean_ctor_get(v_a_924_, 0);
v_proof_939_ = lean_ctor_get(v_a_924_, 1);
v_done_940_ = lean_ctor_get_uint8(v_a_924_, sizeof(void*)*2);
v_contextDependent_941_ = lean_ctor_get_uint8(v_a_924_, sizeof(void*)*2 + 1);
v_isSharedCheck_967_ = !lean_is_exclusive(v_a_924_);
if (v_isSharedCheck_967_ == 0)
{
v___x_943_ = v_a_924_;
v_isShared_944_ = v_isSharedCheck_967_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_proof_939_);
lean_inc(v_e_x27_938_);
lean_dec(v_a_924_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_967_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; 
lean_inc_ref(v_e_x27_938_);
v___x_945_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_885_, v_e_x27_917_, v_proof_918_, v_e_x27_938_, v_proof_939_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_958_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_958_ == 0)
{
v___x_948_ = v___x_945_;
v_isShared_949_ = v_isSharedCheck_958_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_945_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_958_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
uint8_t v___y_951_; 
if (v_contextDependent_919_ == 0)
{
v___y_951_ = v_contextDependent_941_;
goto v___jp_950_;
}
else
{
v___y_951_ = v_contextDependent_919_;
goto v___jp_950_;
}
v___jp_950_:
{
lean_object* v___x_953_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v_a_946_);
v___x_953_ = v___x_943_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_e_x27_938_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v_a_946_);
lean_ctor_set_uint8(v_reuseFailAlloc_957_, sizeof(void*)*2, v_done_940_);
v___x_953_ = v_reuseFailAlloc_957_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
lean_object* v___x_955_; 
lean_ctor_set_uint8(v___x_953_, sizeof(void*)*2 + 1, v___y_951_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v___x_953_);
v___x_955_ = v___x_948_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_del_object(v___x_943_);
lean_dec_ref(v_e_x27_938_);
v_a_959_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_945_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_945_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_921_);
lean_dec_ref(v_proof_918_);
lean_dec_ref(v_e_x27_917_);
lean_dec_ref(v___y_885_);
return v___x_923_;
}
}
}
else
{
lean_dec_ref_known(v_a_898_, 2);
lean_dec_ref(v___y_885_);
lean_dec_ref(v___f_883_);
return v___x_897_;
}
}
}
else
{
lean_dec_ref(v___y_885_);
lean_dec_ref(v___f_883_);
return v___x_897_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__6___boxed(lean_object* v___f_970_, lean_object* v_x_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__6(v___f_970_, v_x_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v___y_977_);
lean_dec_ref(v___y_976_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__7(lean_object* v_x_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v___x_996_; 
lean_inc_ref(v___y_985_);
v___x_996_ = l_Lean_Meta_Grind_NormSym_simpForall(v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_997_);
if (lean_obj_tag(v_a_997_) == 0)
{
uint8_t v_done_998_; 
v_done_998_ = lean_ctor_get_uint8(v_a_997_, 0);
if (v_done_998_ == 0)
{
uint8_t v_contextDependent_999_; lean_object* v___x_1000_; 
lean_dec_ref_known(v___x_996_, 1);
v_contextDependent_999_ = lean_ctor_get_uint8(v_a_997_, 1);
lean_dec_ref_known(v_a_997_, 0);
v___x_1000_ = l_Lean_Meta_Grind_NormSym_simpExists(v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
lean_dec_ref(v___y_985_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; uint8_t v___y_1003_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
if (v_contextDependent_999_ == 0)
{
return v___x_1000_;
}
else
{
if (lean_obj_tag(v_a_1001_) == 0)
{
uint8_t v_contextDependent_1013_; 
v_contextDependent_1013_ = lean_ctor_get_uint8(v_a_1001_, 1);
v___y_1003_ = v_contextDependent_1013_;
goto v___jp_1002_;
}
else
{
uint8_t v_contextDependent_1014_; 
v_contextDependent_1014_ = lean_ctor_get_uint8(v_a_1001_, sizeof(void*)*2 + 1);
v___y_1003_ = v_contextDependent_1014_;
goto v___jp_1002_;
}
}
v___jp_1002_:
{
if (v___y_1003_ == 0)
{
lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1011_; 
lean_inc(v_a_1001_);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1011_ == 0)
{
lean_object* v_unused_1012_; 
v_unused_1012_ = lean_ctor_get(v___x_1000_, 0);
lean_dec(v_unused_1012_);
v___x_1005_ = v___x_1000_;
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
else
{
lean_dec(v___x_1000_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1009_; 
v___x_1007_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1001_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1007_);
v___x_1009_ = v___x_1005_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
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
return v___x_1000_;
}
}
}
else
{
return v___x_1000_;
}
}
else
{
lean_dec_ref_known(v_a_997_, 0);
lean_dec_ref(v___y_985_);
return v___x_996_;
}
}
else
{
uint8_t v_done_1015_; 
v_done_1015_ = lean_ctor_get_uint8(v_a_997_, sizeof(void*)*2);
if (v_done_1015_ == 0)
{
lean_object* v_e_x27_1016_; lean_object* v_proof_1017_; uint8_t v_contextDependent_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1068_; 
lean_dec_ref_known(v___x_996_, 1);
v_e_x27_1016_ = lean_ctor_get(v_a_997_, 0);
v_proof_1017_ = lean_ctor_get(v_a_997_, 1);
v_contextDependent_1018_ = lean_ctor_get_uint8(v_a_997_, sizeof(void*)*2 + 1);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_a_997_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1020_ = v_a_997_;
v_isShared_1021_ = v_isSharedCheck_1068_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_proof_1017_);
lean_inc(v_e_x27_1016_);
lean_dec(v_a_997_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1068_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_Meta_Grind_NormSym_simpExists(v_e_x27_1016_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1067_; 
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1067_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1067_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
if (lean_obj_tag(v_a_1023_) == 0)
{
uint8_t v_done_1027_; uint8_t v_contextDependent_1028_; uint8_t v___y_1030_; 
lean_dec_ref(v___y_985_);
v_done_1027_ = lean_ctor_get_uint8(v_a_1023_, 0);
v_contextDependent_1028_ = lean_ctor_get_uint8(v_a_1023_, 1);
lean_dec_ref_known(v_a_1023_, 0);
if (v_contextDependent_1018_ == 0)
{
v___y_1030_ = v_contextDependent_1028_;
goto v___jp_1029_;
}
else
{
v___y_1030_ = v_contextDependent_1018_;
goto v___jp_1029_;
}
v___jp_1029_:
{
lean_object* v___x_1032_; 
if (v_isShared_1021_ == 0)
{
v___x_1032_ = v___x_1020_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_e_x27_1016_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v_proof_1017_);
v___x_1032_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1034_; 
lean_ctor_set_uint8(v___x_1032_, sizeof(void*)*2, v_done_1027_);
lean_ctor_set_uint8(v___x_1032_, sizeof(void*)*2 + 1, v___y_1030_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1032_);
v___x_1034_ = v___x_1025_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
else
{
lean_object* v_e_x27_1037_; lean_object* v_proof_1038_; uint8_t v_done_1039_; uint8_t v_contextDependent_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1066_; 
lean_del_object(v___x_1025_);
lean_del_object(v___x_1020_);
v_e_x27_1037_ = lean_ctor_get(v_a_1023_, 0);
v_proof_1038_ = lean_ctor_get(v_a_1023_, 1);
v_done_1039_ = lean_ctor_get_uint8(v_a_1023_, sizeof(void*)*2);
v_contextDependent_1040_ = lean_ctor_get_uint8(v_a_1023_, sizeof(void*)*2 + 1);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_a_1023_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1042_ = v_a_1023_;
v_isShared_1043_ = v_isSharedCheck_1066_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_proof_1038_);
lean_inc(v_e_x27_1037_);
lean_dec(v_a_1023_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1066_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; 
lean_inc_ref(v_e_x27_1037_);
v___x_1044_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_985_, v_e_x27_1016_, v_proof_1017_, v_e_x27_1037_, v_proof_1038_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1057_; 
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1047_ = v___x_1044_;
v_isShared_1048_ = v_isSharedCheck_1057_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1057_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
uint8_t v___y_1050_; 
if (v_contextDependent_1018_ == 0)
{
v___y_1050_ = v_contextDependent_1040_;
goto v___jp_1049_;
}
else
{
v___y_1050_ = v_contextDependent_1018_;
goto v___jp_1049_;
}
v___jp_1049_:
{
lean_object* v___x_1052_; 
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 1, v_a_1045_);
v___x_1052_ = v___x_1042_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_e_x27_1037_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v_a_1045_);
lean_ctor_set_uint8(v_reuseFailAlloc_1056_, sizeof(void*)*2, v_done_1039_);
v___x_1052_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
lean_object* v___x_1054_; 
lean_ctor_set_uint8(v___x_1052_, sizeof(void*)*2 + 1, v___y_1050_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 0, v___x_1052_);
v___x_1054_ = v___x_1047_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1052_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
lean_del_object(v___x_1042_);
lean_dec_ref(v_e_x27_1037_);
v_a_1058_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1044_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1044_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1020_);
lean_dec_ref(v_proof_1017_);
lean_dec_ref(v_e_x27_1016_);
lean_dec_ref(v___y_985_);
return v___x_1022_;
}
}
}
else
{
lean_dec_ref_known(v_a_997_, 2);
lean_dec_ref(v___y_985_);
return v___x_996_;
}
}
}
else
{
lean_dec_ref(v___y_985_);
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__7___boxed(lean_object* v_x_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__7(v_x_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1071_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__8(lean_object* v___f_1082_, lean_object* v_x_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_box(0);
lean_inc_ref(v___y_1084_);
v___x_1096_ = l_Lean_Meta_Grind_NormSym_reduceCtorEq(v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
if (lean_obj_tag(v_a_1097_) == 0)
{
uint8_t v_done_1098_; 
v_done_1098_ = lean_ctor_get_uint8(v_a_1097_, 0);
if (v_done_1098_ == 0)
{
uint8_t v_contextDependent_1099_; lean_object* v___x_1100_; 
lean_dec_ref_known(v___x_1096_, 1);
v_contextDependent_1099_ = lean_ctor_get_uint8(v_a_1097_, 1);
lean_dec_ref_known(v_a_1097_, 0);
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1090_);
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
lean_inc(v___y_1087_);
lean_inc_ref(v___y_1086_);
lean_inc(v___y_1085_);
v___x_1100_ = lean_apply_12(v___f_1082_, v___x_1095_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, lean_box(0));
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; uint8_t v___y_1103_; 
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1101_);
if (v_contextDependent_1099_ == 0)
{
lean_dec(v_a_1101_);
return v___x_1100_;
}
else
{
if (lean_obj_tag(v_a_1101_) == 0)
{
uint8_t v_contextDependent_1113_; 
v_contextDependent_1113_ = lean_ctor_get_uint8(v_a_1101_, 1);
v___y_1103_ = v_contextDependent_1113_;
goto v___jp_1102_;
}
else
{
uint8_t v_contextDependent_1114_; 
v_contextDependent_1114_ = lean_ctor_get_uint8(v_a_1101_, sizeof(void*)*2 + 1);
v___y_1103_ = v_contextDependent_1114_;
goto v___jp_1102_;
}
}
v___jp_1102_:
{
if (v___y_1103_ == 0)
{
lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1111_; 
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; 
v_unused_1112_ = lean_ctor_get(v___x_1100_, 0);
lean_dec(v_unused_1112_);
v___x_1105_ = v___x_1100_;
v_isShared_1106_ = v_isSharedCheck_1111_;
goto v_resetjp_1104_;
}
else
{
lean_dec(v___x_1100_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1111_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1107_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1101_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1107_);
v___x_1109_ = v___x_1105_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
else
{
lean_dec(v_a_1101_);
return v___x_1100_;
}
}
}
else
{
return v___x_1100_;
}
}
else
{
lean_dec_ref_known(v_a_1097_, 0);
lean_dec_ref(v___y_1084_);
lean_dec_ref(v___f_1082_);
return v___x_1096_;
}
}
else
{
uint8_t v_done_1115_; 
v_done_1115_ = lean_ctor_get_uint8(v_a_1097_, sizeof(void*)*2);
if (v_done_1115_ == 0)
{
lean_object* v_e_x27_1116_; lean_object* v_proof_1117_; uint8_t v_contextDependent_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1168_; 
lean_dec_ref_known(v___x_1096_, 1);
v_e_x27_1116_ = lean_ctor_get(v_a_1097_, 0);
v_proof_1117_ = lean_ctor_get(v_a_1097_, 1);
v_contextDependent_1118_ = lean_ctor_get_uint8(v_a_1097_, sizeof(void*)*2 + 1);
v_isSharedCheck_1168_ = !lean_is_exclusive(v_a_1097_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1120_ = v_a_1097_;
v_isShared_1121_ = v_isSharedCheck_1168_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_proof_1117_);
lean_inc(v_e_x27_1116_);
lean_dec(v_a_1097_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1168_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1122_; 
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1090_);
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
lean_inc(v___y_1087_);
lean_inc_ref(v___y_1086_);
lean_inc(v___y_1085_);
lean_inc_ref(v_e_x27_1116_);
v___x_1122_ = lean_apply_12(v___f_1082_, v___x_1095_, v_e_x27_1116_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, lean_box(0));
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1167_; 
v_a_1123_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1125_ = v___x_1122_;
v_isShared_1126_ = v_isSharedCheck_1167_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1122_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1167_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
if (lean_obj_tag(v_a_1123_) == 0)
{
uint8_t v_done_1127_; uint8_t v_contextDependent_1128_; uint8_t v___y_1130_; 
lean_dec_ref(v___y_1084_);
v_done_1127_ = lean_ctor_get_uint8(v_a_1123_, 0);
v_contextDependent_1128_ = lean_ctor_get_uint8(v_a_1123_, 1);
lean_dec_ref_known(v_a_1123_, 0);
if (v_contextDependent_1118_ == 0)
{
v___y_1130_ = v_contextDependent_1128_;
goto v___jp_1129_;
}
else
{
v___y_1130_ = v_contextDependent_1118_;
goto v___jp_1129_;
}
v___jp_1129_:
{
lean_object* v___x_1132_; 
if (v_isShared_1121_ == 0)
{
v___x_1132_ = v___x_1120_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_e_x27_1116_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_proof_1117_);
v___x_1132_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
lean_object* v___x_1134_; 
lean_ctor_set_uint8(v___x_1132_, sizeof(void*)*2, v_done_1127_);
lean_ctor_set_uint8(v___x_1132_, sizeof(void*)*2 + 1, v___y_1130_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 0, v___x_1132_);
v___x_1134_ = v___x_1125_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1132_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
else
{
lean_object* v_e_x27_1137_; lean_object* v_proof_1138_; uint8_t v_done_1139_; uint8_t v_contextDependent_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1166_; 
lean_del_object(v___x_1125_);
lean_del_object(v___x_1120_);
v_e_x27_1137_ = lean_ctor_get(v_a_1123_, 0);
v_proof_1138_ = lean_ctor_get(v_a_1123_, 1);
v_done_1139_ = lean_ctor_get_uint8(v_a_1123_, sizeof(void*)*2);
v_contextDependent_1140_ = lean_ctor_get_uint8(v_a_1123_, sizeof(void*)*2 + 1);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_a_1123_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1142_ = v_a_1123_;
v_isShared_1143_ = v_isSharedCheck_1166_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_proof_1138_);
lean_inc(v_e_x27_1137_);
lean_dec(v_a_1123_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1166_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; 
lean_inc_ref(v_e_x27_1137_);
v___x_1144_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1084_, v_e_x27_1116_, v_proof_1117_, v_e_x27_1137_, v_proof_1138_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1157_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1157_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1157_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
uint8_t v___y_1150_; 
if (v_contextDependent_1118_ == 0)
{
v___y_1150_ = v_contextDependent_1140_;
goto v___jp_1149_;
}
else
{
v___y_1150_ = v_contextDependent_1118_;
goto v___jp_1149_;
}
v___jp_1149_:
{
lean_object* v___x_1152_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 1, v_a_1145_);
v___x_1152_ = v___x_1142_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_e_x27_1137_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_a_1145_);
lean_ctor_set_uint8(v_reuseFailAlloc_1156_, sizeof(void*)*2, v_done_1139_);
v___x_1152_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
lean_object* v___x_1154_; 
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*2 + 1, v___y_1150_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1152_);
v___x_1154_ = v___x_1147_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_del_object(v___x_1142_);
lean_dec_ref(v_e_x27_1137_);
v_a_1158_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1144_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1144_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1120_);
lean_dec_ref(v_proof_1117_);
lean_dec_ref(v_e_x27_1116_);
lean_dec_ref(v___y_1084_);
return v___x_1122_;
}
}
}
else
{
lean_dec_ref_known(v_a_1097_, 2);
lean_dec_ref(v___y_1084_);
lean_dec_ref(v___f_1082_);
return v___x_1096_;
}
}
}
else
{
lean_dec_ref(v___y_1084_);
lean_dec_ref(v___f_1082_);
return v___x_1096_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__8___boxed(lean_object* v___f_1169_, lean_object* v_x_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__8(v___f_1169_, v_x_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__9(lean_object* v___f_1183_, lean_object* v_x_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_box(0);
lean_inc_ref(v___y_1185_);
v___x_1197_ = l_Lean_Meta_Grind_NormSym_simpDIte(v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1198_);
if (lean_obj_tag(v_a_1198_) == 0)
{
uint8_t v_done_1199_; 
v_done_1199_ = lean_ctor_get_uint8(v_a_1198_, 0);
if (v_done_1199_ == 0)
{
uint8_t v_contextDependent_1200_; lean_object* v___x_1201_; 
lean_dec_ref_known(v___x_1197_, 1);
v_contextDependent_1200_ = lean_ctor_get_uint8(v_a_1198_, 1);
lean_dec_ref_known(v_a_1198_, 0);
lean_inc(v___y_1194_);
lean_inc_ref(v___y_1193_);
lean_inc(v___y_1192_);
lean_inc_ref(v___y_1191_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v___y_1187_);
lean_inc(v___y_1186_);
v___x_1201_ = lean_apply_12(v___f_1183_, v___x_1196_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, lean_box(0));
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; uint8_t v___y_1204_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
if (v_contextDependent_1200_ == 0)
{
lean_dec(v_a_1202_);
return v___x_1201_;
}
else
{
if (lean_obj_tag(v_a_1202_) == 0)
{
uint8_t v_contextDependent_1214_; 
v_contextDependent_1214_ = lean_ctor_get_uint8(v_a_1202_, 1);
v___y_1204_ = v_contextDependent_1214_;
goto v___jp_1203_;
}
else
{
uint8_t v_contextDependent_1215_; 
v_contextDependent_1215_ = lean_ctor_get_uint8(v_a_1202_, sizeof(void*)*2 + 1);
v___y_1204_ = v_contextDependent_1215_;
goto v___jp_1203_;
}
}
v___jp_1203_:
{
if (v___y_1204_ == 0)
{
lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1212_; 
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1212_ == 0)
{
lean_object* v_unused_1213_; 
v_unused_1213_ = lean_ctor_get(v___x_1201_, 0);
lean_dec(v_unused_1213_);
v___x_1206_ = v___x_1201_;
v_isShared_1207_ = v_isSharedCheck_1212_;
goto v_resetjp_1205_;
}
else
{
lean_dec(v___x_1201_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1212_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1208_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1202_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1208_);
v___x_1210_ = v___x_1206_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
else
{
lean_dec(v_a_1202_);
return v___x_1201_;
}
}
}
else
{
return v___x_1201_;
}
}
else
{
lean_dec_ref_known(v_a_1198_, 0);
lean_dec_ref(v___y_1185_);
lean_dec_ref(v___f_1183_);
return v___x_1197_;
}
}
else
{
uint8_t v_done_1216_; 
v_done_1216_ = lean_ctor_get_uint8(v_a_1198_, sizeof(void*)*2);
if (v_done_1216_ == 0)
{
lean_object* v_e_x27_1217_; lean_object* v_proof_1218_; uint8_t v_contextDependent_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1269_; 
lean_dec_ref_known(v___x_1197_, 1);
v_e_x27_1217_ = lean_ctor_get(v_a_1198_, 0);
v_proof_1218_ = lean_ctor_get(v_a_1198_, 1);
v_contextDependent_1219_ = lean_ctor_get_uint8(v_a_1198_, sizeof(void*)*2 + 1);
v_isSharedCheck_1269_ = !lean_is_exclusive(v_a_1198_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1221_ = v_a_1198_;
v_isShared_1222_ = v_isSharedCheck_1269_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_proof_1218_);
lean_inc(v_e_x27_1217_);
lean_dec(v_a_1198_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1269_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1223_; 
lean_inc(v___y_1194_);
lean_inc_ref(v___y_1193_);
lean_inc(v___y_1192_);
lean_inc_ref(v___y_1191_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v___y_1187_);
lean_inc(v___y_1186_);
lean_inc_ref(v_e_x27_1217_);
v___x_1223_ = lean_apply_12(v___f_1183_, v___x_1196_, v_e_x27_1217_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, lean_box(0));
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1268_; 
v_a_1224_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1226_ = v___x_1223_;
v_isShared_1227_ = v_isSharedCheck_1268_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1223_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1268_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
if (lean_obj_tag(v_a_1224_) == 0)
{
uint8_t v_done_1228_; uint8_t v_contextDependent_1229_; uint8_t v___y_1231_; 
lean_dec_ref(v___y_1185_);
v_done_1228_ = lean_ctor_get_uint8(v_a_1224_, 0);
v_contextDependent_1229_ = lean_ctor_get_uint8(v_a_1224_, 1);
lean_dec_ref_known(v_a_1224_, 0);
if (v_contextDependent_1219_ == 0)
{
v___y_1231_ = v_contextDependent_1229_;
goto v___jp_1230_;
}
else
{
v___y_1231_ = v_contextDependent_1219_;
goto v___jp_1230_;
}
v___jp_1230_:
{
lean_object* v___x_1233_; 
if (v_isShared_1222_ == 0)
{
v___x_1233_ = v___x_1221_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_e_x27_1217_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_proof_1218_);
v___x_1233_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1235_; 
lean_ctor_set_uint8(v___x_1233_, sizeof(void*)*2, v_done_1228_);
lean_ctor_set_uint8(v___x_1233_, sizeof(void*)*2 + 1, v___y_1231_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 0, v___x_1233_);
v___x_1235_ = v___x_1226_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1233_);
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
else
{
lean_object* v_e_x27_1238_; lean_object* v_proof_1239_; uint8_t v_done_1240_; uint8_t v_contextDependent_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1267_; 
lean_del_object(v___x_1226_);
lean_del_object(v___x_1221_);
v_e_x27_1238_ = lean_ctor_get(v_a_1224_, 0);
v_proof_1239_ = lean_ctor_get(v_a_1224_, 1);
v_done_1240_ = lean_ctor_get_uint8(v_a_1224_, sizeof(void*)*2);
v_contextDependent_1241_ = lean_ctor_get_uint8(v_a_1224_, sizeof(void*)*2 + 1);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_a_1224_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1243_ = v_a_1224_;
v_isShared_1244_ = v_isSharedCheck_1267_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_proof_1239_);
lean_inc(v_e_x27_1238_);
lean_dec(v_a_1224_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1267_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1245_; 
lean_inc_ref(v_e_x27_1238_);
v___x_1245_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1185_, v_e_x27_1217_, v_proof_1218_, v_e_x27_1238_, v_proof_1239_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1258_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1248_ = v___x_1245_;
v_isShared_1249_ = v_isSharedCheck_1258_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1245_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1258_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
uint8_t v___y_1251_; 
if (v_contextDependent_1219_ == 0)
{
v___y_1251_ = v_contextDependent_1241_;
goto v___jp_1250_;
}
else
{
v___y_1251_ = v_contextDependent_1219_;
goto v___jp_1250_;
}
v___jp_1250_:
{
lean_object* v___x_1253_; 
if (v_isShared_1244_ == 0)
{
lean_ctor_set(v___x_1243_, 1, v_a_1246_);
v___x_1253_ = v___x_1243_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_e_x27_1238_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_a_1246_);
lean_ctor_set_uint8(v_reuseFailAlloc_1257_, sizeof(void*)*2, v_done_1240_);
v___x_1253_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_object* v___x_1255_; 
lean_ctor_set_uint8(v___x_1253_, sizeof(void*)*2 + 1, v___y_1251_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 0, v___x_1253_);
v___x_1255_ = v___x_1248_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1253_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
lean_del_object(v___x_1243_);
lean_dec_ref(v_e_x27_1238_);
v_a_1259_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1245_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1245_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1221_);
lean_dec_ref(v_proof_1218_);
lean_dec_ref(v_e_x27_1217_);
lean_dec_ref(v___y_1185_);
return v___x_1223_;
}
}
}
else
{
lean_dec_ref_known(v_a_1198_, 2);
lean_dec_ref(v___y_1185_);
lean_dec_ref(v___f_1183_);
return v___x_1197_;
}
}
}
else
{
lean_dec_ref(v___y_1185_);
lean_dec_ref(v___f_1183_);
return v___x_1197_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__9___boxed(lean_object* v___f_1270_, lean_object* v_x_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__9(v___f_1270_, v_x_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__10(lean_object* v___f_1284_, lean_object* v_x_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = lean_box(0);
v___x_1298_ = l_Lean_Meta_Grind_NormSym_simpOr___redArg(v___y_1286_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
if (lean_obj_tag(v_a_1299_) == 0)
{
uint8_t v_done_1300_; 
v_done_1300_ = lean_ctor_get_uint8(v_a_1299_, 0);
if (v_done_1300_ == 0)
{
uint8_t v_contextDependent_1301_; lean_object* v___x_1302_; 
lean_dec_ref_known(v___x_1298_, 1);
v_contextDependent_1301_ = lean_ctor_get_uint8(v_a_1299_, 1);
lean_dec_ref_known(v_a_1299_, 0);
lean_inc(v___y_1295_);
lean_inc_ref(v___y_1294_);
lean_inc(v___y_1293_);
lean_inc_ref(v___y_1292_);
lean_inc(v___y_1291_);
lean_inc_ref(v___y_1290_);
lean_inc(v___y_1289_);
lean_inc_ref(v___y_1288_);
lean_inc(v___y_1287_);
v___x_1302_ = lean_apply_12(v___f_1284_, v___x_1297_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, lean_box(0));
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; uint8_t v___y_1305_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1303_);
if (v_contextDependent_1301_ == 0)
{
lean_dec(v_a_1303_);
return v___x_1302_;
}
else
{
if (lean_obj_tag(v_a_1303_) == 0)
{
uint8_t v_contextDependent_1315_; 
v_contextDependent_1315_ = lean_ctor_get_uint8(v_a_1303_, 1);
v___y_1305_ = v_contextDependent_1315_;
goto v___jp_1304_;
}
else
{
uint8_t v_contextDependent_1316_; 
v_contextDependent_1316_ = lean_ctor_get_uint8(v_a_1303_, sizeof(void*)*2 + 1);
v___y_1305_ = v_contextDependent_1316_;
goto v___jp_1304_;
}
}
v___jp_1304_:
{
if (v___y_1305_ == 0)
{
lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1313_; 
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1313_ == 0)
{
lean_object* v_unused_1314_; 
v_unused_1314_ = lean_ctor_get(v___x_1302_, 0);
lean_dec(v_unused_1314_);
v___x_1307_ = v___x_1302_;
v_isShared_1308_ = v_isSharedCheck_1313_;
goto v_resetjp_1306_;
}
else
{
lean_dec(v___x_1302_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1313_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1309_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1303_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v___x_1309_);
v___x_1311_ = v___x_1307_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
else
{
lean_dec(v_a_1303_);
return v___x_1302_;
}
}
}
else
{
return v___x_1302_;
}
}
else
{
lean_dec_ref_known(v_a_1299_, 0);
lean_dec_ref(v___y_1286_);
lean_dec_ref(v___f_1284_);
return v___x_1298_;
}
}
else
{
uint8_t v_done_1317_; 
v_done_1317_ = lean_ctor_get_uint8(v_a_1299_, sizeof(void*)*2);
if (v_done_1317_ == 0)
{
lean_object* v_e_x27_1318_; lean_object* v_proof_1319_; uint8_t v_contextDependent_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1370_; 
lean_dec_ref_known(v___x_1298_, 1);
v_e_x27_1318_ = lean_ctor_get(v_a_1299_, 0);
v_proof_1319_ = lean_ctor_get(v_a_1299_, 1);
v_contextDependent_1320_ = lean_ctor_get_uint8(v_a_1299_, sizeof(void*)*2 + 1);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_a_1299_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1322_ = v_a_1299_;
v_isShared_1323_ = v_isSharedCheck_1370_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_proof_1319_);
lean_inc(v_e_x27_1318_);
lean_dec(v_a_1299_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1370_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1324_; 
lean_inc(v___y_1295_);
lean_inc_ref(v___y_1294_);
lean_inc(v___y_1293_);
lean_inc_ref(v___y_1292_);
lean_inc(v___y_1291_);
lean_inc_ref(v___y_1290_);
lean_inc(v___y_1289_);
lean_inc_ref(v___y_1288_);
lean_inc(v___y_1287_);
lean_inc_ref(v_e_x27_1318_);
v___x_1324_ = lean_apply_12(v___f_1284_, v___x_1297_, v_e_x27_1318_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, lean_box(0));
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1369_; 
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1369_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1369_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
if (lean_obj_tag(v_a_1325_) == 0)
{
uint8_t v_done_1329_; uint8_t v_contextDependent_1330_; uint8_t v___y_1332_; 
lean_dec_ref(v___y_1286_);
v_done_1329_ = lean_ctor_get_uint8(v_a_1325_, 0);
v_contextDependent_1330_ = lean_ctor_get_uint8(v_a_1325_, 1);
lean_dec_ref_known(v_a_1325_, 0);
if (v_contextDependent_1320_ == 0)
{
v___y_1332_ = v_contextDependent_1330_;
goto v___jp_1331_;
}
else
{
v___y_1332_ = v_contextDependent_1320_;
goto v___jp_1331_;
}
v___jp_1331_:
{
lean_object* v___x_1334_; 
if (v_isShared_1323_ == 0)
{
v___x_1334_ = v___x_1322_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_e_x27_1318_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_proof_1319_);
v___x_1334_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
lean_object* v___x_1336_; 
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*2, v_done_1329_);
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*2 + 1, v___y_1332_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 0, v___x_1334_);
v___x_1336_ = v___x_1327_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
else
{
lean_object* v_e_x27_1339_; lean_object* v_proof_1340_; uint8_t v_done_1341_; uint8_t v_contextDependent_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1368_; 
lean_del_object(v___x_1327_);
lean_del_object(v___x_1322_);
v_e_x27_1339_ = lean_ctor_get(v_a_1325_, 0);
v_proof_1340_ = lean_ctor_get(v_a_1325_, 1);
v_done_1341_ = lean_ctor_get_uint8(v_a_1325_, sizeof(void*)*2);
v_contextDependent_1342_ = lean_ctor_get_uint8(v_a_1325_, sizeof(void*)*2 + 1);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_a_1325_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1344_ = v_a_1325_;
v_isShared_1345_ = v_isSharedCheck_1368_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_proof_1340_);
lean_inc(v_e_x27_1339_);
lean_dec(v_a_1325_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1368_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1346_; 
lean_inc_ref(v_e_x27_1339_);
v___x_1346_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1286_, v_e_x27_1318_, v_proof_1319_, v_e_x27_1339_, v_proof_1340_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1359_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1349_ = v___x_1346_;
v_isShared_1350_ = v_isSharedCheck_1359_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1346_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1359_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
uint8_t v___y_1352_; 
if (v_contextDependent_1320_ == 0)
{
v___y_1352_ = v_contextDependent_1342_;
goto v___jp_1351_;
}
else
{
v___y_1352_ = v_contextDependent_1320_;
goto v___jp_1351_;
}
v___jp_1351_:
{
lean_object* v___x_1354_; 
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 1, v_a_1347_);
v___x_1354_ = v___x_1344_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_e_x27_1339_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_a_1347_);
lean_ctor_set_uint8(v_reuseFailAlloc_1358_, sizeof(void*)*2, v_done_1341_);
v___x_1354_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1356_; 
lean_ctor_set_uint8(v___x_1354_, sizeof(void*)*2 + 1, v___y_1352_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 0, v___x_1354_);
v___x_1356_ = v___x_1349_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1354_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_del_object(v___x_1344_);
lean_dec_ref(v_e_x27_1339_);
v_a_1360_ = lean_ctor_get(v___x_1346_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1346_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1346_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1322_);
lean_dec_ref(v_proof_1319_);
lean_dec_ref(v_e_x27_1318_);
lean_dec_ref(v___y_1286_);
return v___x_1324_;
}
}
}
else
{
lean_dec_ref_known(v_a_1299_, 2);
lean_dec_ref(v___y_1286_);
lean_dec_ref(v___f_1284_);
return v___x_1298_;
}
}
}
else
{
lean_dec_ref(v___y_1286_);
lean_dec_ref(v___f_1284_);
return v___x_1298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__10___boxed(lean_object* v___f_1371_, lean_object* v_x_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__10(v___f_1371_, v_x_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__11(lean_object* v___f_1385_, lean_object* v_x_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1398_ = lean_box(0);
v___x_1399_ = l_Lean_Meta_Grind_NormSym_simpEq(v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_a_1400_);
if (lean_obj_tag(v_a_1400_) == 0)
{
uint8_t v_done_1401_; 
v_done_1401_ = lean_ctor_get_uint8(v_a_1400_, 0);
if (v_done_1401_ == 0)
{
uint8_t v_contextDependent_1402_; lean_object* v___x_1403_; 
lean_dec_ref_known(v___x_1399_, 1);
v_contextDependent_1402_ = lean_ctor_get_uint8(v_a_1400_, 1);
lean_dec_ref_known(v_a_1400_, 0);
lean_inc(v___y_1396_);
lean_inc_ref(v___y_1395_);
lean_inc(v___y_1394_);
lean_inc_ref(v___y_1393_);
lean_inc(v___y_1392_);
lean_inc_ref(v___y_1391_);
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
lean_inc(v___y_1388_);
v___x_1403_ = lean_apply_12(v___f_1385_, v___x_1398_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, lean_box(0));
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; uint8_t v___y_1406_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_a_1404_);
if (v_contextDependent_1402_ == 0)
{
lean_dec(v_a_1404_);
return v___x_1403_;
}
else
{
if (lean_obj_tag(v_a_1404_) == 0)
{
uint8_t v_contextDependent_1416_; 
v_contextDependent_1416_ = lean_ctor_get_uint8(v_a_1404_, 1);
v___y_1406_ = v_contextDependent_1416_;
goto v___jp_1405_;
}
else
{
uint8_t v_contextDependent_1417_; 
v_contextDependent_1417_ = lean_ctor_get_uint8(v_a_1404_, sizeof(void*)*2 + 1);
v___y_1406_ = v_contextDependent_1417_;
goto v___jp_1405_;
}
}
v___jp_1405_:
{
if (v___y_1406_ == 0)
{
lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1414_; 
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1414_ == 0)
{
lean_object* v_unused_1415_; 
v_unused_1415_ = lean_ctor_get(v___x_1403_, 0);
lean_dec(v_unused_1415_);
v___x_1408_ = v___x_1403_;
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
else
{
lean_dec(v___x_1403_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1410_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1404_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 0, v___x_1410_);
v___x_1412_ = v___x_1408_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
else
{
lean_dec(v_a_1404_);
return v___x_1403_;
}
}
}
else
{
return v___x_1403_;
}
}
else
{
lean_dec_ref_known(v_a_1400_, 0);
lean_dec_ref(v___y_1387_);
lean_dec_ref(v___f_1385_);
return v___x_1399_;
}
}
else
{
uint8_t v_done_1418_; 
v_done_1418_ = lean_ctor_get_uint8(v_a_1400_, sizeof(void*)*2);
if (v_done_1418_ == 0)
{
lean_object* v_e_x27_1419_; lean_object* v_proof_1420_; uint8_t v_contextDependent_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1471_; 
lean_dec_ref_known(v___x_1399_, 1);
v_e_x27_1419_ = lean_ctor_get(v_a_1400_, 0);
v_proof_1420_ = lean_ctor_get(v_a_1400_, 1);
v_contextDependent_1421_ = lean_ctor_get_uint8(v_a_1400_, sizeof(void*)*2 + 1);
v_isSharedCheck_1471_ = !lean_is_exclusive(v_a_1400_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1423_ = v_a_1400_;
v_isShared_1424_ = v_isSharedCheck_1471_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_proof_1420_);
lean_inc(v_e_x27_1419_);
lean_dec(v_a_1400_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1471_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1425_; 
lean_inc(v___y_1396_);
lean_inc_ref(v___y_1395_);
lean_inc(v___y_1394_);
lean_inc_ref(v___y_1393_);
lean_inc(v___y_1392_);
lean_inc_ref(v___y_1391_);
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
lean_inc(v___y_1388_);
lean_inc_ref(v_e_x27_1419_);
v___x_1425_ = lean_apply_12(v___f_1385_, v___x_1398_, v_e_x27_1419_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, lean_box(0));
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1470_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1470_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1470_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
if (lean_obj_tag(v_a_1426_) == 0)
{
uint8_t v_done_1430_; uint8_t v_contextDependent_1431_; uint8_t v___y_1433_; 
lean_dec_ref(v___y_1387_);
v_done_1430_ = lean_ctor_get_uint8(v_a_1426_, 0);
v_contextDependent_1431_ = lean_ctor_get_uint8(v_a_1426_, 1);
lean_dec_ref_known(v_a_1426_, 0);
if (v_contextDependent_1421_ == 0)
{
v___y_1433_ = v_contextDependent_1431_;
goto v___jp_1432_;
}
else
{
v___y_1433_ = v_contextDependent_1421_;
goto v___jp_1432_;
}
v___jp_1432_:
{
lean_object* v___x_1435_; 
if (v_isShared_1424_ == 0)
{
v___x_1435_ = v___x_1423_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_e_x27_1419_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_proof_1420_);
v___x_1435_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
lean_object* v___x_1437_; 
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*2, v_done_1430_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*2 + 1, v___y_1433_);
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 0, v___x_1435_);
v___x_1437_ = v___x_1428_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
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
else
{
lean_object* v_e_x27_1440_; lean_object* v_proof_1441_; uint8_t v_done_1442_; uint8_t v_contextDependent_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1469_; 
lean_del_object(v___x_1428_);
lean_del_object(v___x_1423_);
v_e_x27_1440_ = lean_ctor_get(v_a_1426_, 0);
v_proof_1441_ = lean_ctor_get(v_a_1426_, 1);
v_done_1442_ = lean_ctor_get_uint8(v_a_1426_, sizeof(void*)*2);
v_contextDependent_1443_ = lean_ctor_get_uint8(v_a_1426_, sizeof(void*)*2 + 1);
v_isSharedCheck_1469_ = !lean_is_exclusive(v_a_1426_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1445_ = v_a_1426_;
v_isShared_1446_ = v_isSharedCheck_1469_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_proof_1441_);
lean_inc(v_e_x27_1440_);
lean_dec(v_a_1426_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1469_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1447_; 
lean_inc_ref(v_e_x27_1440_);
v___x_1447_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1387_, v_e_x27_1419_, v_proof_1420_, v_e_x27_1440_, v_proof_1441_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1460_; 
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1450_ = v___x_1447_;
v_isShared_1451_ = v_isSharedCheck_1460_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1447_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1460_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
uint8_t v___y_1453_; 
if (v_contextDependent_1421_ == 0)
{
v___y_1453_ = v_contextDependent_1443_;
goto v___jp_1452_;
}
else
{
v___y_1453_ = v_contextDependent_1421_;
goto v___jp_1452_;
}
v___jp_1452_:
{
lean_object* v___x_1455_; 
if (v_isShared_1446_ == 0)
{
lean_ctor_set(v___x_1445_, 1, v_a_1448_);
v___x_1455_ = v___x_1445_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_e_x27_1440_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_a_1448_);
lean_ctor_set_uint8(v_reuseFailAlloc_1459_, sizeof(void*)*2, v_done_1442_);
v___x_1455_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
lean_object* v___x_1457_; 
lean_ctor_set_uint8(v___x_1455_, sizeof(void*)*2 + 1, v___y_1453_);
if (v_isShared_1451_ == 0)
{
lean_ctor_set(v___x_1450_, 0, v___x_1455_);
v___x_1457_ = v___x_1450_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v___x_1455_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_del_object(v___x_1445_);
lean_dec_ref(v_e_x27_1440_);
v_a_1461_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1447_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1447_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1423_);
lean_dec_ref(v_proof_1420_);
lean_dec_ref(v_e_x27_1419_);
lean_dec_ref(v___y_1387_);
return v___x_1425_;
}
}
}
else
{
lean_dec_ref_known(v_a_1400_, 2);
lean_dec_ref(v___y_1387_);
lean_dec_ref(v___f_1385_);
return v___x_1399_;
}
}
}
else
{
lean_dec_ref(v___y_1387_);
lean_dec_ref(v___f_1385_);
return v___x_1399_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__11___boxed(lean_object* v___f_1472_, lean_object* v_x_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__11(v___f_1472_, v_x_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1475_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__12(uint8_t v_distrib_1486_, lean_object* v___f_1487_, lean_object* v_x_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = lean_box(0);
lean_inc_ref(v___y_1489_);
v___x_1501_ = l_Lean_Meta_Sym_Simp_simpNatSub(v_distrib_1486_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
if (lean_obj_tag(v_a_1502_) == 0)
{
uint8_t v_done_1503_; 
v_done_1503_ = lean_ctor_get_uint8(v_a_1502_, 0);
if (v_done_1503_ == 0)
{
uint8_t v_contextDependent_1504_; lean_object* v___x_1505_; 
lean_dec_ref_known(v___x_1501_, 1);
v_contextDependent_1504_ = lean_ctor_get_uint8(v_a_1502_, 1);
lean_dec_ref_known(v_a_1502_, 0);
lean_inc(v___y_1498_);
lean_inc_ref(v___y_1497_);
lean_inc(v___y_1496_);
lean_inc_ref(v___y_1495_);
lean_inc(v___y_1494_);
lean_inc_ref(v___y_1493_);
lean_inc(v___y_1492_);
lean_inc_ref(v___y_1491_);
lean_inc(v___y_1490_);
v___x_1505_ = lean_apply_12(v___f_1487_, v___x_1500_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, lean_box(0));
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; uint8_t v___y_1508_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
if (v_contextDependent_1504_ == 0)
{
lean_dec(v_a_1506_);
return v___x_1505_;
}
else
{
if (lean_obj_tag(v_a_1506_) == 0)
{
uint8_t v_contextDependent_1518_; 
v_contextDependent_1518_ = lean_ctor_get_uint8(v_a_1506_, 1);
v___y_1508_ = v_contextDependent_1518_;
goto v___jp_1507_;
}
else
{
uint8_t v_contextDependent_1519_; 
v_contextDependent_1519_ = lean_ctor_get_uint8(v_a_1506_, sizeof(void*)*2 + 1);
v___y_1508_ = v_contextDependent_1519_;
goto v___jp_1507_;
}
}
v___jp_1507_:
{
if (v___y_1508_ == 0)
{
lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1516_; 
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1516_ == 0)
{
lean_object* v_unused_1517_; 
v_unused_1517_ = lean_ctor_get(v___x_1505_, 0);
lean_dec(v_unused_1517_);
v___x_1510_ = v___x_1505_;
v_isShared_1511_ = v_isSharedCheck_1516_;
goto v_resetjp_1509_;
}
else
{
lean_dec(v___x_1505_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1516_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1514_; 
v___x_1512_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1506_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v___x_1512_);
v___x_1514_ = v___x_1510_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1512_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
else
{
lean_dec(v_a_1506_);
return v___x_1505_;
}
}
}
else
{
return v___x_1505_;
}
}
else
{
lean_dec_ref_known(v_a_1502_, 0);
lean_dec_ref(v___y_1489_);
lean_dec_ref(v___f_1487_);
return v___x_1501_;
}
}
else
{
uint8_t v_done_1520_; 
v_done_1520_ = lean_ctor_get_uint8(v_a_1502_, sizeof(void*)*2);
if (v_done_1520_ == 0)
{
lean_object* v_e_x27_1521_; lean_object* v_proof_1522_; uint8_t v_contextDependent_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1573_; 
lean_dec_ref_known(v___x_1501_, 1);
v_e_x27_1521_ = lean_ctor_get(v_a_1502_, 0);
v_proof_1522_ = lean_ctor_get(v_a_1502_, 1);
v_contextDependent_1523_ = lean_ctor_get_uint8(v_a_1502_, sizeof(void*)*2 + 1);
v_isSharedCheck_1573_ = !lean_is_exclusive(v_a_1502_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1525_ = v_a_1502_;
v_isShared_1526_ = v_isSharedCheck_1573_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_proof_1522_);
lean_inc(v_e_x27_1521_);
lean_dec(v_a_1502_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1573_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1527_; 
lean_inc(v___y_1498_);
lean_inc_ref(v___y_1497_);
lean_inc(v___y_1496_);
lean_inc_ref(v___y_1495_);
lean_inc(v___y_1494_);
lean_inc_ref(v___y_1493_);
lean_inc(v___y_1492_);
lean_inc_ref(v___y_1491_);
lean_inc(v___y_1490_);
lean_inc_ref(v_e_x27_1521_);
v___x_1527_ = lean_apply_12(v___f_1487_, v___x_1500_, v_e_x27_1521_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, lean_box(0));
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1572_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1530_ = v___x_1527_;
v_isShared_1531_ = v_isSharedCheck_1572_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1527_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1572_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
if (lean_obj_tag(v_a_1528_) == 0)
{
uint8_t v_done_1532_; uint8_t v_contextDependent_1533_; uint8_t v___y_1535_; 
lean_dec_ref(v___y_1489_);
v_done_1532_ = lean_ctor_get_uint8(v_a_1528_, 0);
v_contextDependent_1533_ = lean_ctor_get_uint8(v_a_1528_, 1);
lean_dec_ref_known(v_a_1528_, 0);
if (v_contextDependent_1523_ == 0)
{
v___y_1535_ = v_contextDependent_1533_;
goto v___jp_1534_;
}
else
{
v___y_1535_ = v_contextDependent_1523_;
goto v___jp_1534_;
}
v___jp_1534_:
{
lean_object* v___x_1537_; 
if (v_isShared_1526_ == 0)
{
v___x_1537_ = v___x_1525_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_e_x27_1521_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v_proof_1522_);
v___x_1537_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
lean_object* v___x_1539_; 
lean_ctor_set_uint8(v___x_1537_, sizeof(void*)*2, v_done_1532_);
lean_ctor_set_uint8(v___x_1537_, sizeof(void*)*2 + 1, v___y_1535_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1537_);
v___x_1539_ = v___x_1530_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
else
{
lean_object* v_e_x27_1542_; lean_object* v_proof_1543_; uint8_t v_done_1544_; uint8_t v_contextDependent_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1571_; 
lean_del_object(v___x_1530_);
lean_del_object(v___x_1525_);
v_e_x27_1542_ = lean_ctor_get(v_a_1528_, 0);
v_proof_1543_ = lean_ctor_get(v_a_1528_, 1);
v_done_1544_ = lean_ctor_get_uint8(v_a_1528_, sizeof(void*)*2);
v_contextDependent_1545_ = lean_ctor_get_uint8(v_a_1528_, sizeof(void*)*2 + 1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_a_1528_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1547_ = v_a_1528_;
v_isShared_1548_ = v_isSharedCheck_1571_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_proof_1543_);
lean_inc(v_e_x27_1542_);
lean_dec(v_a_1528_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1571_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1549_; 
lean_inc_ref(v_e_x27_1542_);
v___x_1549_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1489_, v_e_x27_1521_, v_proof_1522_, v_e_x27_1542_, v_proof_1543_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1562_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1552_ = v___x_1549_;
v_isShared_1553_ = v_isSharedCheck_1562_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1549_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1562_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
uint8_t v___y_1555_; 
if (v_contextDependent_1523_ == 0)
{
v___y_1555_ = v_contextDependent_1545_;
goto v___jp_1554_;
}
else
{
v___y_1555_ = v_contextDependent_1523_;
goto v___jp_1554_;
}
v___jp_1554_:
{
lean_object* v___x_1557_; 
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 1, v_a_1550_);
v___x_1557_ = v___x_1547_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_e_x27_1542_);
lean_ctor_set(v_reuseFailAlloc_1561_, 1, v_a_1550_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*2, v_done_1544_);
v___x_1557_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1559_; 
lean_ctor_set_uint8(v___x_1557_, sizeof(void*)*2 + 1, v___y_1555_);
if (v_isShared_1553_ == 0)
{
lean_ctor_set(v___x_1552_, 0, v___x_1557_);
v___x_1559_ = v___x_1552_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1557_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
else
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
lean_del_object(v___x_1547_);
lean_dec_ref(v_e_x27_1542_);
v_a_1563_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1549_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1549_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1525_);
lean_dec_ref(v_proof_1522_);
lean_dec_ref(v_e_x27_1521_);
lean_dec_ref(v___y_1489_);
return v___x_1527_;
}
}
}
else
{
lean_dec_ref_known(v_a_1502_, 2);
lean_dec_ref(v___y_1489_);
lean_dec_ref(v___f_1487_);
return v___x_1501_;
}
}
}
else
{
lean_dec_ref(v___y_1489_);
lean_dec_ref(v___f_1487_);
return v___x_1501_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__12___boxed(lean_object* v_distrib_1574_, lean_object* v___f_1575_, lean_object* v_x_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
uint8_t v_distrib_boxed_1588_; lean_object* v_res_1589_; 
v_distrib_boxed_1588_ = lean_unbox(v_distrib_1574_);
v_res_1589_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__12(v_distrib_boxed_1588_, v___f_1575_, v_x_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v___y_1578_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__13(lean_object* v___f_1590_, lean_object* v_x_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1603_ = lean_box(0);
lean_inc_ref(v___y_1592_);
v___x_1604_ = l_Lean_Meta_Sym_Simp_simpNatRel___redArg(v___y_1592_, v___y_1596_, v___y_1599_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_a_1605_);
if (lean_obj_tag(v_a_1605_) == 0)
{
uint8_t v_done_1606_; 
v_done_1606_ = lean_ctor_get_uint8(v_a_1605_, 0);
if (v_done_1606_ == 0)
{
uint8_t v_contextDependent_1607_; lean_object* v___x_1608_; 
lean_dec_ref_known(v___x_1604_, 1);
v_contextDependent_1607_ = lean_ctor_get_uint8(v_a_1605_, 1);
lean_dec_ref_known(v_a_1605_, 0);
lean_inc(v___y_1601_);
lean_inc_ref(v___y_1600_);
lean_inc(v___y_1599_);
lean_inc_ref(v___y_1598_);
lean_inc(v___y_1597_);
lean_inc_ref(v___y_1596_);
lean_inc(v___y_1595_);
lean_inc_ref(v___y_1594_);
lean_inc(v___y_1593_);
v___x_1608_ = lean_apply_12(v___f_1590_, v___x_1603_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, lean_box(0));
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v_a_1609_; uint8_t v___y_1611_; 
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
lean_inc(v_a_1609_);
if (v_contextDependent_1607_ == 0)
{
lean_dec(v_a_1609_);
return v___x_1608_;
}
else
{
if (lean_obj_tag(v_a_1609_) == 0)
{
uint8_t v_contextDependent_1621_; 
v_contextDependent_1621_ = lean_ctor_get_uint8(v_a_1609_, 1);
v___y_1611_ = v_contextDependent_1621_;
goto v___jp_1610_;
}
else
{
uint8_t v_contextDependent_1622_; 
v_contextDependent_1622_ = lean_ctor_get_uint8(v_a_1609_, sizeof(void*)*2 + 1);
v___y_1611_ = v_contextDependent_1622_;
goto v___jp_1610_;
}
}
v___jp_1610_:
{
if (v___y_1611_ == 0)
{
lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1619_; 
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1619_ == 0)
{
lean_object* v_unused_1620_; 
v_unused_1620_ = lean_ctor_get(v___x_1608_, 0);
lean_dec(v_unused_1620_);
v___x_1613_ = v___x_1608_;
v_isShared_1614_ = v_isSharedCheck_1619_;
goto v_resetjp_1612_;
}
else
{
lean_dec(v___x_1608_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1619_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1615_; lean_object* v___x_1617_; 
v___x_1615_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1609_);
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1615_);
v___x_1617_ = v___x_1613_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1615_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
else
{
lean_dec(v_a_1609_);
return v___x_1608_;
}
}
}
else
{
return v___x_1608_;
}
}
else
{
lean_dec_ref_known(v_a_1605_, 0);
lean_dec_ref(v___y_1592_);
lean_dec_ref(v___f_1590_);
return v___x_1604_;
}
}
else
{
uint8_t v_done_1623_; 
v_done_1623_ = lean_ctor_get_uint8(v_a_1605_, sizeof(void*)*2);
if (v_done_1623_ == 0)
{
lean_object* v_e_x27_1624_; lean_object* v_proof_1625_; uint8_t v_contextDependent_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1676_; 
lean_dec_ref_known(v___x_1604_, 1);
v_e_x27_1624_ = lean_ctor_get(v_a_1605_, 0);
v_proof_1625_ = lean_ctor_get(v_a_1605_, 1);
v_contextDependent_1626_ = lean_ctor_get_uint8(v_a_1605_, sizeof(void*)*2 + 1);
v_isSharedCheck_1676_ = !lean_is_exclusive(v_a_1605_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1628_ = v_a_1605_;
v_isShared_1629_ = v_isSharedCheck_1676_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_proof_1625_);
lean_inc(v_e_x27_1624_);
lean_dec(v_a_1605_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1676_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1630_; 
lean_inc(v___y_1601_);
lean_inc_ref(v___y_1600_);
lean_inc(v___y_1599_);
lean_inc_ref(v___y_1598_);
lean_inc(v___y_1597_);
lean_inc_ref(v___y_1596_);
lean_inc(v___y_1595_);
lean_inc_ref(v___y_1594_);
lean_inc(v___y_1593_);
lean_inc_ref(v_e_x27_1624_);
v___x_1630_ = lean_apply_12(v___f_1590_, v___x_1603_, v_e_x27_1624_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, lean_box(0));
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1675_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1633_ = v___x_1630_;
v_isShared_1634_ = v_isSharedCheck_1675_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1630_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1675_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
if (lean_obj_tag(v_a_1631_) == 0)
{
uint8_t v_done_1635_; uint8_t v_contextDependent_1636_; uint8_t v___y_1638_; 
lean_dec_ref(v___y_1592_);
v_done_1635_ = lean_ctor_get_uint8(v_a_1631_, 0);
v_contextDependent_1636_ = lean_ctor_get_uint8(v_a_1631_, 1);
lean_dec_ref_known(v_a_1631_, 0);
if (v_contextDependent_1626_ == 0)
{
v___y_1638_ = v_contextDependent_1636_;
goto v___jp_1637_;
}
else
{
v___y_1638_ = v_contextDependent_1626_;
goto v___jp_1637_;
}
v___jp_1637_:
{
lean_object* v___x_1640_; 
if (v_isShared_1629_ == 0)
{
v___x_1640_ = v___x_1628_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_e_x27_1624_);
lean_ctor_set(v_reuseFailAlloc_1644_, 1, v_proof_1625_);
v___x_1640_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
lean_object* v___x_1642_; 
lean_ctor_set_uint8(v___x_1640_, sizeof(void*)*2, v_done_1635_);
lean_ctor_set_uint8(v___x_1640_, sizeof(void*)*2 + 1, v___y_1638_);
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 0, v___x_1640_);
v___x_1642_ = v___x_1633_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1640_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
}
else
{
lean_object* v_e_x27_1645_; lean_object* v_proof_1646_; uint8_t v_done_1647_; uint8_t v_contextDependent_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1674_; 
lean_del_object(v___x_1633_);
lean_del_object(v___x_1628_);
v_e_x27_1645_ = lean_ctor_get(v_a_1631_, 0);
v_proof_1646_ = lean_ctor_get(v_a_1631_, 1);
v_done_1647_ = lean_ctor_get_uint8(v_a_1631_, sizeof(void*)*2);
v_contextDependent_1648_ = lean_ctor_get_uint8(v_a_1631_, sizeof(void*)*2 + 1);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_a_1631_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1650_ = v_a_1631_;
v_isShared_1651_ = v_isSharedCheck_1674_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_proof_1646_);
lean_inc(v_e_x27_1645_);
lean_dec(v_a_1631_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1674_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1652_; 
lean_inc_ref(v_e_x27_1645_);
v___x_1652_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1592_, v_e_x27_1624_, v_proof_1625_, v_e_x27_1645_, v_proof_1646_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1665_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1655_ = v___x_1652_;
v_isShared_1656_ = v_isSharedCheck_1665_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1652_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1665_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
uint8_t v___y_1658_; 
if (v_contextDependent_1626_ == 0)
{
v___y_1658_ = v_contextDependent_1648_;
goto v___jp_1657_;
}
else
{
v___y_1658_ = v_contextDependent_1626_;
goto v___jp_1657_;
}
v___jp_1657_:
{
lean_object* v___x_1660_; 
if (v_isShared_1651_ == 0)
{
lean_ctor_set(v___x_1650_, 1, v_a_1653_);
v___x_1660_ = v___x_1650_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_e_x27_1645_);
lean_ctor_set(v_reuseFailAlloc_1664_, 1, v_a_1653_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*2, v_done_1647_);
v___x_1660_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1662_; 
lean_ctor_set_uint8(v___x_1660_, sizeof(void*)*2 + 1, v___y_1658_);
if (v_isShared_1656_ == 0)
{
lean_ctor_set(v___x_1655_, 0, v___x_1660_);
v___x_1662_ = v___x_1655_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_del_object(v___x_1650_);
lean_dec_ref(v_e_x27_1645_);
v_a_1666_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1652_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1652_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1628_);
lean_dec_ref(v_proof_1625_);
lean_dec_ref(v_e_x27_1624_);
lean_dec_ref(v___y_1592_);
return v___x_1630_;
}
}
}
else
{
lean_dec_ref_known(v_a_1605_, 2);
lean_dec_ref(v___y_1592_);
lean_dec_ref(v___f_1590_);
return v___x_1604_;
}
}
}
else
{
lean_dec_ref(v___y_1592_);
lean_dec_ref(v___f_1590_);
return v___x_1604_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__13___boxed(lean_object* v___f_1677_, lean_object* v_x_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__13(v___f_1677_, v_x_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec(v___y_1688_);
lean_dec_ref(v___y_1687_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__14(lean_object* v___f_1694_, lean_object* v_x_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = ((lean_object*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__14___closed__0));
v___x_1708_ = lean_box(0);
v___x_1709_ = l___private_Lean_Meta_Sym_Simp_EvalGround_0__Lean_Meta_Sym_Simp_evalGroundCore___redArg(v___y_1696_, v___x_1707_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1710_);
if (lean_obj_tag(v_a_1710_) == 0)
{
uint8_t v_done_1711_; 
v_done_1711_ = lean_ctor_get_uint8(v_a_1710_, 0);
if (v_done_1711_ == 0)
{
uint8_t v_contextDependent_1712_; lean_object* v___x_1713_; 
lean_dec_ref_known(v___x_1709_, 1);
v_contextDependent_1712_ = lean_ctor_get_uint8(v_a_1710_, 1);
lean_dec_ref_known(v_a_1710_, 0);
lean_inc(v___y_1705_);
lean_inc_ref(v___y_1704_);
lean_inc(v___y_1703_);
lean_inc_ref(v___y_1702_);
lean_inc(v___y_1701_);
lean_inc_ref(v___y_1700_);
lean_inc(v___y_1699_);
lean_inc_ref(v___y_1698_);
lean_inc(v___y_1697_);
v___x_1713_ = lean_apply_12(v___f_1694_, v___x_1708_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, lean_box(0));
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; uint8_t v___y_1716_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
lean_inc(v_a_1714_);
if (v_contextDependent_1712_ == 0)
{
lean_dec(v_a_1714_);
return v___x_1713_;
}
else
{
if (lean_obj_tag(v_a_1714_) == 0)
{
uint8_t v_contextDependent_1726_; 
v_contextDependent_1726_ = lean_ctor_get_uint8(v_a_1714_, 1);
v___y_1716_ = v_contextDependent_1726_;
goto v___jp_1715_;
}
else
{
uint8_t v_contextDependent_1727_; 
v_contextDependent_1727_ = lean_ctor_get_uint8(v_a_1714_, sizeof(void*)*2 + 1);
v___y_1716_ = v_contextDependent_1727_;
goto v___jp_1715_;
}
}
v___jp_1715_:
{
if (v___y_1716_ == 0)
{
lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1724_; 
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1724_ == 0)
{
lean_object* v_unused_1725_; 
v_unused_1725_ = lean_ctor_get(v___x_1713_, 0);
lean_dec(v_unused_1725_);
v___x_1718_ = v___x_1713_;
v_isShared_1719_ = v_isSharedCheck_1724_;
goto v_resetjp_1717_;
}
else
{
lean_dec(v___x_1713_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1724_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1720_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1714_);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1720_);
v___x_1722_ = v___x_1718_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
else
{
lean_dec(v_a_1714_);
return v___x_1713_;
}
}
}
else
{
return v___x_1713_;
}
}
else
{
lean_dec_ref_known(v_a_1710_, 0);
lean_dec_ref(v___y_1696_);
lean_dec_ref(v___f_1694_);
return v___x_1709_;
}
}
else
{
uint8_t v_done_1728_; 
v_done_1728_ = lean_ctor_get_uint8(v_a_1710_, sizeof(void*)*2);
if (v_done_1728_ == 0)
{
lean_object* v_e_x27_1729_; lean_object* v_proof_1730_; uint8_t v_contextDependent_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1781_; 
lean_dec_ref_known(v___x_1709_, 1);
v_e_x27_1729_ = lean_ctor_get(v_a_1710_, 0);
v_proof_1730_ = lean_ctor_get(v_a_1710_, 1);
v_contextDependent_1731_ = lean_ctor_get_uint8(v_a_1710_, sizeof(void*)*2 + 1);
v_isSharedCheck_1781_ = !lean_is_exclusive(v_a_1710_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1733_ = v_a_1710_;
v_isShared_1734_ = v_isSharedCheck_1781_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_proof_1730_);
lean_inc(v_e_x27_1729_);
lean_dec(v_a_1710_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1781_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1735_; 
lean_inc(v___y_1705_);
lean_inc_ref(v___y_1704_);
lean_inc(v___y_1703_);
lean_inc_ref(v___y_1702_);
lean_inc(v___y_1701_);
lean_inc_ref(v___y_1700_);
lean_inc(v___y_1699_);
lean_inc_ref(v___y_1698_);
lean_inc(v___y_1697_);
lean_inc_ref(v_e_x27_1729_);
v___x_1735_ = lean_apply_12(v___f_1694_, v___x_1708_, v_e_x27_1729_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, lean_box(0));
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1780_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1738_ = v___x_1735_;
v_isShared_1739_ = v_isSharedCheck_1780_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1735_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1780_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
if (lean_obj_tag(v_a_1736_) == 0)
{
uint8_t v_done_1740_; uint8_t v_contextDependent_1741_; uint8_t v___y_1743_; 
lean_dec_ref(v___y_1696_);
v_done_1740_ = lean_ctor_get_uint8(v_a_1736_, 0);
v_contextDependent_1741_ = lean_ctor_get_uint8(v_a_1736_, 1);
lean_dec_ref_known(v_a_1736_, 0);
if (v_contextDependent_1731_ == 0)
{
v___y_1743_ = v_contextDependent_1741_;
goto v___jp_1742_;
}
else
{
v___y_1743_ = v_contextDependent_1731_;
goto v___jp_1742_;
}
v___jp_1742_:
{
lean_object* v___x_1745_; 
if (v_isShared_1734_ == 0)
{
v___x_1745_ = v___x_1733_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_e_x27_1729_);
lean_ctor_set(v_reuseFailAlloc_1749_, 1, v_proof_1730_);
v___x_1745_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
lean_object* v___x_1747_; 
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*2, v_done_1740_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*2 + 1, v___y_1743_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 0, v___x_1745_);
v___x_1747_ = v___x_1738_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
else
{
lean_object* v_e_x27_1750_; lean_object* v_proof_1751_; uint8_t v_done_1752_; uint8_t v_contextDependent_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1779_; 
lean_del_object(v___x_1738_);
lean_del_object(v___x_1733_);
v_e_x27_1750_ = lean_ctor_get(v_a_1736_, 0);
v_proof_1751_ = lean_ctor_get(v_a_1736_, 1);
v_done_1752_ = lean_ctor_get_uint8(v_a_1736_, sizeof(void*)*2);
v_contextDependent_1753_ = lean_ctor_get_uint8(v_a_1736_, sizeof(void*)*2 + 1);
v_isSharedCheck_1779_ = !lean_is_exclusive(v_a_1736_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1755_ = v_a_1736_;
v_isShared_1756_ = v_isSharedCheck_1779_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_proof_1751_);
lean_inc(v_e_x27_1750_);
lean_dec(v_a_1736_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1779_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1757_; 
lean_inc_ref(v_e_x27_1750_);
v___x_1757_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1696_, v_e_x27_1729_, v_proof_1730_, v_e_x27_1750_, v_proof_1751_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1770_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1760_ = v___x_1757_;
v_isShared_1761_ = v_isSharedCheck_1770_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1757_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1770_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
uint8_t v___y_1763_; 
if (v_contextDependent_1731_ == 0)
{
v___y_1763_ = v_contextDependent_1753_;
goto v___jp_1762_;
}
else
{
v___y_1763_ = v_contextDependent_1731_;
goto v___jp_1762_;
}
v___jp_1762_:
{
lean_object* v___x_1765_; 
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 1, v_a_1758_);
v___x_1765_ = v___x_1755_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_e_x27_1750_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v_a_1758_);
lean_ctor_set_uint8(v_reuseFailAlloc_1769_, sizeof(void*)*2, v_done_1752_);
v___x_1765_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1767_; 
lean_ctor_set_uint8(v___x_1765_, sizeof(void*)*2 + 1, v___y_1763_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v___x_1765_);
v___x_1767_ = v___x_1760_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1765_);
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
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_del_object(v___x_1755_);
lean_dec_ref(v_e_x27_1750_);
v_a_1771_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1757_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1757_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1733_);
lean_dec_ref(v_proof_1730_);
lean_dec_ref(v_e_x27_1729_);
lean_dec_ref(v___y_1696_);
return v___x_1735_;
}
}
}
else
{
lean_dec_ref_known(v_a_1710_, 2);
lean_dec_ref(v___y_1696_);
lean_dec_ref(v___f_1694_);
return v___x_1709_;
}
}
}
else
{
lean_dec_ref(v___y_1696_);
lean_dec_ref(v___f_1694_);
return v___x_1709_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__14___boxed(lean_object* v___f_1782_, lean_object* v_x_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__14(v___f_1782_, v_x_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec(v___y_1785_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__15(lean_object* v_thms_1796_, lean_object* v_d_1797_, lean_object* v_x_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_pre_1810_; lean_object* v___x_1811_; 
v_pre_1810_ = lean_ctor_get(v_thms_1796_, 0);
v___x_1811_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_pre_1810_, v_d_1797_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__15___boxed(lean_object* v_thms_1812_, lean_object* v_d_1813_, lean_object* v_x_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__15(v_thms_1812_, v_d_1813_, v_x_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
lean_dec(v___y_1816_);
lean_dec_ref(v_thms_1812_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__16(lean_object* v_maxChar_1827_, lean_object* v_d_1828_, uint8_t v_distrib_1829_, lean_object* v___f_1830_, lean_object* v_x_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
uint8_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1843_ = 1;
v___x_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1844_, 0, v_maxChar_1827_);
v___x_1845_ = lean_box(0);
lean_inc_ref(v___y_1832_);
v___x_1846_ = l_Lean_Meta_Sym_Simp_simpArith(v_d_1828_, v___x_1843_, v_distrib_1829_, v___x_1844_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec_ref_known(v___x_1844_, 1);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v_a_1847_; 
v_a_1847_ = lean_ctor_get(v___x_1846_, 0);
lean_inc(v_a_1847_);
if (lean_obj_tag(v_a_1847_) == 0)
{
uint8_t v_done_1848_; 
v_done_1848_ = lean_ctor_get_uint8(v_a_1847_, 0);
if (v_done_1848_ == 0)
{
uint8_t v_contextDependent_1849_; lean_object* v___x_1850_; 
lean_dec_ref_known(v___x_1846_, 1);
v_contextDependent_1849_ = lean_ctor_get_uint8(v_a_1847_, 1);
lean_dec_ref_known(v_a_1847_, 0);
lean_inc(v___y_1841_);
lean_inc_ref(v___y_1840_);
lean_inc(v___y_1839_);
lean_inc_ref(v___y_1838_);
lean_inc(v___y_1837_);
lean_inc_ref(v___y_1836_);
lean_inc(v___y_1835_);
lean_inc_ref(v___y_1834_);
lean_inc(v___y_1833_);
v___x_1850_ = lean_apply_12(v___f_1830_, v___x_1845_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, lean_box(0));
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; uint8_t v___y_1853_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_a_1851_);
if (v_contextDependent_1849_ == 0)
{
lean_dec(v_a_1851_);
return v___x_1850_;
}
else
{
if (lean_obj_tag(v_a_1851_) == 0)
{
uint8_t v_contextDependent_1863_; 
v_contextDependent_1863_ = lean_ctor_get_uint8(v_a_1851_, 1);
v___y_1853_ = v_contextDependent_1863_;
goto v___jp_1852_;
}
else
{
uint8_t v_contextDependent_1864_; 
v_contextDependent_1864_ = lean_ctor_get_uint8(v_a_1851_, sizeof(void*)*2 + 1);
v___y_1853_ = v_contextDependent_1864_;
goto v___jp_1852_;
}
}
v___jp_1852_:
{
if (v___y_1853_ == 0)
{
lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1861_; 
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1861_ == 0)
{
lean_object* v_unused_1862_; 
v_unused_1862_ = lean_ctor_get(v___x_1850_, 0);
lean_dec(v_unused_1862_);
v___x_1855_ = v___x_1850_;
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
else
{
lean_dec(v___x_1850_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v___x_1859_; 
v___x_1857_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1851_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1857_);
v___x_1859_ = v___x_1855_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
else
{
lean_dec(v_a_1851_);
return v___x_1850_;
}
}
}
else
{
return v___x_1850_;
}
}
else
{
lean_dec_ref_known(v_a_1847_, 0);
lean_dec_ref(v___y_1832_);
lean_dec_ref(v___f_1830_);
return v___x_1846_;
}
}
else
{
uint8_t v_done_1865_; 
v_done_1865_ = lean_ctor_get_uint8(v_a_1847_, sizeof(void*)*2);
if (v_done_1865_ == 0)
{
lean_object* v_e_x27_1866_; lean_object* v_proof_1867_; uint8_t v_contextDependent_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1918_; 
lean_dec_ref_known(v___x_1846_, 1);
v_e_x27_1866_ = lean_ctor_get(v_a_1847_, 0);
v_proof_1867_ = lean_ctor_get(v_a_1847_, 1);
v_contextDependent_1868_ = lean_ctor_get_uint8(v_a_1847_, sizeof(void*)*2 + 1);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_a_1847_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1870_ = v_a_1847_;
v_isShared_1871_ = v_isSharedCheck_1918_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_proof_1867_);
lean_inc(v_e_x27_1866_);
lean_dec(v_a_1847_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1918_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1872_; 
lean_inc(v___y_1841_);
lean_inc_ref(v___y_1840_);
lean_inc(v___y_1839_);
lean_inc_ref(v___y_1838_);
lean_inc(v___y_1837_);
lean_inc_ref(v___y_1836_);
lean_inc(v___y_1835_);
lean_inc_ref(v___y_1834_);
lean_inc(v___y_1833_);
lean_inc_ref(v_e_x27_1866_);
v___x_1872_ = lean_apply_12(v___f_1830_, v___x_1845_, v_e_x27_1866_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, lean_box(0));
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1917_; 
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1875_ = v___x_1872_;
v_isShared_1876_ = v_isSharedCheck_1917_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1872_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1917_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
if (lean_obj_tag(v_a_1873_) == 0)
{
uint8_t v_done_1877_; uint8_t v_contextDependent_1878_; uint8_t v___y_1880_; 
lean_dec_ref(v___y_1832_);
v_done_1877_ = lean_ctor_get_uint8(v_a_1873_, 0);
v_contextDependent_1878_ = lean_ctor_get_uint8(v_a_1873_, 1);
lean_dec_ref_known(v_a_1873_, 0);
if (v_contextDependent_1868_ == 0)
{
v___y_1880_ = v_contextDependent_1878_;
goto v___jp_1879_;
}
else
{
v___y_1880_ = v_contextDependent_1868_;
goto v___jp_1879_;
}
v___jp_1879_:
{
lean_object* v___x_1882_; 
if (v_isShared_1871_ == 0)
{
v___x_1882_ = v___x_1870_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_e_x27_1866_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_proof_1867_);
v___x_1882_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
lean_object* v___x_1884_; 
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*2, v_done_1877_);
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*2 + 1, v___y_1880_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v___x_1882_);
v___x_1884_ = v___x_1875_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v___x_1882_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
else
{
lean_object* v_e_x27_1887_; lean_object* v_proof_1888_; uint8_t v_done_1889_; uint8_t v_contextDependent_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1916_; 
lean_del_object(v___x_1875_);
lean_del_object(v___x_1870_);
v_e_x27_1887_ = lean_ctor_get(v_a_1873_, 0);
v_proof_1888_ = lean_ctor_get(v_a_1873_, 1);
v_done_1889_ = lean_ctor_get_uint8(v_a_1873_, sizeof(void*)*2);
v_contextDependent_1890_ = lean_ctor_get_uint8(v_a_1873_, sizeof(void*)*2 + 1);
v_isSharedCheck_1916_ = !lean_is_exclusive(v_a_1873_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1892_ = v_a_1873_;
v_isShared_1893_ = v_isSharedCheck_1916_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_proof_1888_);
lean_inc(v_e_x27_1887_);
lean_dec(v_a_1873_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1916_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; 
lean_inc_ref(v_e_x27_1887_);
v___x_1894_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1832_, v_e_x27_1866_, v_proof_1867_, v_e_x27_1887_, v_proof_1888_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1907_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1897_ = v___x_1894_;
v_isShared_1898_ = v_isSharedCheck_1907_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1894_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1907_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
uint8_t v___y_1900_; 
if (v_contextDependent_1868_ == 0)
{
v___y_1900_ = v_contextDependent_1890_;
goto v___jp_1899_;
}
else
{
v___y_1900_ = v_contextDependent_1868_;
goto v___jp_1899_;
}
v___jp_1899_:
{
lean_object* v___x_1902_; 
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v_a_1895_);
v___x_1902_ = v___x_1892_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_e_x27_1887_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v_a_1895_);
lean_ctor_set_uint8(v_reuseFailAlloc_1906_, sizeof(void*)*2, v_done_1889_);
v___x_1902_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
lean_object* v___x_1904_; 
lean_ctor_set_uint8(v___x_1902_, sizeof(void*)*2 + 1, v___y_1900_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1902_);
v___x_1904_ = v___x_1897_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_del_object(v___x_1892_);
lean_dec_ref(v_e_x27_1887_);
v_a_1908_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1894_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1894_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1870_);
lean_dec_ref(v_proof_1867_);
lean_dec_ref(v_e_x27_1866_);
lean_dec_ref(v___y_1832_);
return v___x_1872_;
}
}
}
else
{
lean_dec_ref_known(v_a_1847_, 2);
lean_dec_ref(v___y_1832_);
lean_dec_ref(v___f_1830_);
return v___x_1846_;
}
}
}
else
{
lean_dec_ref(v___y_1832_);
lean_dec_ref(v___f_1830_);
return v___x_1846_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__16___boxed(lean_object* v_maxChar_1919_, lean_object* v_d_1920_, lean_object* v_distrib_1921_, lean_object* v___f_1922_, lean_object* v_x_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
uint8_t v_distrib_boxed_1935_; lean_object* v_res_1936_; 
v_distrib_boxed_1935_ = lean_unbox(v_distrib_1921_);
v_res_1936_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__16(v_maxChar_1919_, v_d_1920_, v_distrib_boxed_1935_, v___f_1922_, v_x_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec(v___y_1925_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__17(lean_object* v___f_1937_, lean_object* v_x_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1950_ = lean_box(0);
lean_inc_ref(v___y_1939_);
v___x_1951_ = l_Lean_Meta_Grind_NormSym_pushNot(v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_a_1952_; 
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
lean_inc(v_a_1952_);
if (lean_obj_tag(v_a_1952_) == 0)
{
uint8_t v_done_1953_; 
v_done_1953_ = lean_ctor_get_uint8(v_a_1952_, 0);
if (v_done_1953_ == 0)
{
uint8_t v_contextDependent_1954_; lean_object* v___x_1955_; 
lean_dec_ref_known(v___x_1951_, 1);
v_contextDependent_1954_ = lean_ctor_get_uint8(v_a_1952_, 1);
lean_dec_ref_known(v_a_1952_, 0);
lean_inc(v___y_1948_);
lean_inc_ref(v___y_1947_);
lean_inc(v___y_1946_);
lean_inc_ref(v___y_1945_);
lean_inc(v___y_1944_);
lean_inc_ref(v___y_1943_);
lean_inc(v___y_1942_);
lean_inc_ref(v___y_1941_);
lean_inc(v___y_1940_);
v___x_1955_ = lean_apply_12(v___f_1937_, v___x_1950_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, lean_box(0));
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; uint8_t v___y_1958_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
if (v_contextDependent_1954_ == 0)
{
lean_dec(v_a_1956_);
return v___x_1955_;
}
else
{
if (lean_obj_tag(v_a_1956_) == 0)
{
uint8_t v_contextDependent_1968_; 
v_contextDependent_1968_ = lean_ctor_get_uint8(v_a_1956_, 1);
v___y_1958_ = v_contextDependent_1968_;
goto v___jp_1957_;
}
else
{
uint8_t v_contextDependent_1969_; 
v_contextDependent_1969_ = lean_ctor_get_uint8(v_a_1956_, sizeof(void*)*2 + 1);
v___y_1958_ = v_contextDependent_1969_;
goto v___jp_1957_;
}
}
v___jp_1957_:
{
if (v___y_1958_ == 0)
{
lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1966_; 
v_isSharedCheck_1966_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1966_ == 0)
{
lean_object* v_unused_1967_; 
v_unused_1967_ = lean_ctor_get(v___x_1955_, 0);
lean_dec(v_unused_1967_);
v___x_1960_ = v___x_1955_;
v_isShared_1961_ = v_isSharedCheck_1966_;
goto v_resetjp_1959_;
}
else
{
lean_dec(v___x_1955_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1966_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v___x_1964_; 
v___x_1962_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1956_);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 0, v___x_1962_);
v___x_1964_ = v___x_1960_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v___x_1962_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
}
else
{
lean_dec(v_a_1956_);
return v___x_1955_;
}
}
}
else
{
return v___x_1955_;
}
}
else
{
lean_dec_ref_known(v_a_1952_, 0);
lean_dec_ref(v___y_1939_);
lean_dec_ref(v___f_1937_);
return v___x_1951_;
}
}
else
{
uint8_t v_done_1970_; 
v_done_1970_ = lean_ctor_get_uint8(v_a_1952_, sizeof(void*)*2);
if (v_done_1970_ == 0)
{
lean_object* v_e_x27_1971_; lean_object* v_proof_1972_; uint8_t v_contextDependent_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_2023_; 
lean_dec_ref_known(v___x_1951_, 1);
v_e_x27_1971_ = lean_ctor_get(v_a_1952_, 0);
v_proof_1972_ = lean_ctor_get(v_a_1952_, 1);
v_contextDependent_1973_ = lean_ctor_get_uint8(v_a_1952_, sizeof(void*)*2 + 1);
v_isSharedCheck_2023_ = !lean_is_exclusive(v_a_1952_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_1975_ = v_a_1952_;
v_isShared_1976_ = v_isSharedCheck_2023_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_proof_1972_);
lean_inc(v_e_x27_1971_);
lean_dec(v_a_1952_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_2023_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1977_; 
lean_inc(v___y_1948_);
lean_inc_ref(v___y_1947_);
lean_inc(v___y_1946_);
lean_inc_ref(v___y_1945_);
lean_inc(v___y_1944_);
lean_inc_ref(v___y_1943_);
lean_inc(v___y_1942_);
lean_inc_ref(v___y_1941_);
lean_inc(v___y_1940_);
lean_inc_ref(v_e_x27_1971_);
v___x_1977_ = lean_apply_12(v___f_1937_, v___x_1950_, v_e_x27_1971_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, lean_box(0));
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_2022_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_1980_ = v___x_1977_;
v_isShared_1981_ = v_isSharedCheck_2022_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1977_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_2022_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
if (lean_obj_tag(v_a_1978_) == 0)
{
uint8_t v_done_1982_; uint8_t v_contextDependent_1983_; uint8_t v___y_1985_; 
lean_dec_ref(v___y_1939_);
v_done_1982_ = lean_ctor_get_uint8(v_a_1978_, 0);
v_contextDependent_1983_ = lean_ctor_get_uint8(v_a_1978_, 1);
lean_dec_ref_known(v_a_1978_, 0);
if (v_contextDependent_1973_ == 0)
{
v___y_1985_ = v_contextDependent_1983_;
goto v___jp_1984_;
}
else
{
v___y_1985_ = v_contextDependent_1973_;
goto v___jp_1984_;
}
v___jp_1984_:
{
lean_object* v___x_1987_; 
if (v_isShared_1976_ == 0)
{
v___x_1987_ = v___x_1975_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_e_x27_1971_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_proof_1972_);
v___x_1987_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1989_; 
lean_ctor_set_uint8(v___x_1987_, sizeof(void*)*2, v_done_1982_);
lean_ctor_set_uint8(v___x_1987_, sizeof(void*)*2 + 1, v___y_1985_);
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 0, v___x_1987_);
v___x_1989_ = v___x_1980_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1987_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
else
{
lean_object* v_e_x27_1992_; lean_object* v_proof_1993_; uint8_t v_done_1994_; uint8_t v_contextDependent_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2021_; 
lean_del_object(v___x_1980_);
lean_del_object(v___x_1975_);
v_e_x27_1992_ = lean_ctor_get(v_a_1978_, 0);
v_proof_1993_ = lean_ctor_get(v_a_1978_, 1);
v_done_1994_ = lean_ctor_get_uint8(v_a_1978_, sizeof(void*)*2);
v_contextDependent_1995_ = lean_ctor_get_uint8(v_a_1978_, sizeof(void*)*2 + 1);
v_isSharedCheck_2021_ = !lean_is_exclusive(v_a_1978_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_1997_ = v_a_1978_;
v_isShared_1998_ = v_isSharedCheck_2021_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_proof_1993_);
lean_inc(v_e_x27_1992_);
lean_dec(v_a_1978_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2021_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_1999_; 
lean_inc_ref(v_e_x27_1992_);
v___x_1999_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_1939_, v_e_x27_1971_, v_proof_1972_, v_e_x27_1992_, v_proof_1993_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2012_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_2002_ = v___x_1999_;
v_isShared_2003_ = v_isSharedCheck_2012_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1999_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2012_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
uint8_t v___y_2005_; 
if (v_contextDependent_1973_ == 0)
{
v___y_2005_ = v_contextDependent_1995_;
goto v___jp_2004_;
}
else
{
v___y_2005_ = v_contextDependent_1973_;
goto v___jp_2004_;
}
v___jp_2004_:
{
lean_object* v___x_2007_; 
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 1, v_a_2000_);
v___x_2007_ = v___x_1997_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_e_x27_1992_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v_a_2000_);
lean_ctor_set_uint8(v_reuseFailAlloc_2011_, sizeof(void*)*2, v_done_1994_);
v___x_2007_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
lean_object* v___x_2009_; 
lean_ctor_set_uint8(v___x_2007_, sizeof(void*)*2 + 1, v___y_2005_);
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 0, v___x_2007_);
v___x_2009_ = v___x_2002_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2007_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
else
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_del_object(v___x_1997_);
lean_dec_ref(v_e_x27_1992_);
v_a_2013_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_1999_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_1999_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1975_);
lean_dec_ref(v_proof_1972_);
lean_dec_ref(v_e_x27_1971_);
lean_dec_ref(v___y_1939_);
return v___x_1977_;
}
}
}
else
{
lean_dec_ref_known(v_a_1952_, 2);
lean_dec_ref(v___y_1939_);
lean_dec_ref(v___f_1937_);
return v___x_1951_;
}
}
}
else
{
lean_dec_ref(v___y_1939_);
lean_dec_ref(v___f_1937_);
return v___x_1951_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__17___boxed(lean_object* v___f_2024_, lean_object* v_x_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__17(v___f_2024_, v_x_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
lean_dec(v___y_2031_);
lean_dec_ref(v___y_2030_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__18(lean_object* v___f_2038_, lean_object* v_x_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = lean_box(0);
lean_inc_ref(v___y_2040_);
v___x_2052_ = l___private_Lean_Meta_Tactic_Grind_NormSym_0__Lean_Meta_Grind_simpDecisionEq___redArg(v___y_2040_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v_a_2053_; 
v_a_2053_ = lean_ctor_get(v___x_2052_, 0);
lean_inc(v_a_2053_);
lean_dec_ref_known(v___x_2052_, 1);
if (lean_obj_tag(v_a_2053_) == 0)
{
lean_object* v___x_2054_; 
lean_dec_ref_known(v_a_2053_, 0);
lean_inc(v___y_2049_);
lean_inc_ref(v___y_2048_);
lean_inc(v___y_2047_);
lean_inc_ref(v___y_2046_);
lean_inc(v___y_2045_);
lean_inc_ref(v___y_2044_);
lean_inc(v___y_2043_);
lean_inc_ref(v___y_2042_);
lean_inc(v___y_2041_);
v___x_2054_ = lean_apply_12(v___f_2038_, v___x_2051_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, lean_box(0));
return v___x_2054_;
}
else
{
lean_object* v_e_x27_2055_; lean_object* v_proof_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2106_; 
v_e_x27_2055_ = lean_ctor_get(v_a_2053_, 0);
v_proof_2056_ = lean_ctor_get(v_a_2053_, 1);
v_isSharedCheck_2106_ = !lean_is_exclusive(v_a_2053_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2058_ = v_a_2053_;
v_isShared_2059_ = v_isSharedCheck_2106_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_proof_2056_);
lean_inc(v_e_x27_2055_);
lean_dec(v_a_2053_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2106_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2060_; 
lean_inc(v___y_2049_);
lean_inc_ref(v___y_2048_);
lean_inc(v___y_2047_);
lean_inc_ref(v___y_2046_);
lean_inc(v___y_2045_);
lean_inc_ref(v___y_2044_);
lean_inc(v___y_2043_);
lean_inc_ref(v___y_2042_);
lean_inc(v___y_2041_);
lean_inc_ref(v_e_x27_2055_);
v___x_2060_ = lean_apply_12(v___f_2038_, v___x_2051_, v_e_x27_2055_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, lean_box(0));
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2105_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2063_ = v___x_2060_;
v_isShared_2064_ = v_isSharedCheck_2105_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2060_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2105_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
if (lean_obj_tag(v_a_2061_) == 0)
{
uint8_t v_done_2065_; uint8_t v_contextDependent_2066_; uint8_t v___y_2068_; 
lean_dec_ref(v___y_2040_);
v_done_2065_ = lean_ctor_get_uint8(v_a_2061_, 0);
v_contextDependent_2066_ = lean_ctor_get_uint8(v_a_2061_, 1);
lean_dec_ref_known(v_a_2061_, 0);
v___y_2068_ = v_contextDependent_2066_;
goto v___jp_2067_;
v___jp_2067_:
{
lean_object* v___x_2070_; 
if (v_isShared_2059_ == 0)
{
v___x_2070_ = v___x_2058_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_e_x27_2055_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v_proof_2056_);
v___x_2070_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2072_; 
lean_ctor_set_uint8(v___x_2070_, sizeof(void*)*2, v_done_2065_);
lean_ctor_set_uint8(v___x_2070_, sizeof(void*)*2 + 1, v___y_2068_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2070_);
v___x_2072_ = v___x_2063_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v___x_2070_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
}
else
{
lean_object* v_e_x27_2075_; lean_object* v_proof_2076_; uint8_t v_done_2077_; uint8_t v_contextDependent_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2104_; 
lean_del_object(v___x_2063_);
lean_del_object(v___x_2058_);
v_e_x27_2075_ = lean_ctor_get(v_a_2061_, 0);
v_proof_2076_ = lean_ctor_get(v_a_2061_, 1);
v_done_2077_ = lean_ctor_get_uint8(v_a_2061_, sizeof(void*)*2);
v_contextDependent_2078_ = lean_ctor_get_uint8(v_a_2061_, sizeof(void*)*2 + 1);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_a_2061_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2080_ = v_a_2061_;
v_isShared_2081_ = v_isSharedCheck_2104_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_proof_2076_);
lean_inc(v_e_x27_2075_);
lean_dec(v_a_2061_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2104_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2082_; 
lean_inc_ref(v_e_x27_2075_);
v___x_2082_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_2040_, v_e_x27_2055_, v_proof_2056_, v_e_x27_2075_, v_proof_2076_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2095_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2085_ = v___x_2082_;
v_isShared_2086_ = v_isSharedCheck_2095_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2082_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2095_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
uint8_t v___y_2088_; 
v___y_2088_ = v_contextDependent_2078_;
goto v___jp_2087_;
v___jp_2087_:
{
lean_object* v___x_2090_; 
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 1, v_a_2083_);
v___x_2090_ = v___x_2080_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_e_x27_2075_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v_a_2083_);
lean_ctor_set_uint8(v_reuseFailAlloc_2094_, sizeof(void*)*2, v_done_2077_);
v___x_2090_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
lean_object* v___x_2092_; 
lean_ctor_set_uint8(v___x_2090_, sizeof(void*)*2 + 1, v___y_2088_);
if (v_isShared_2086_ == 0)
{
lean_ctor_set(v___x_2085_, 0, v___x_2090_);
v___x_2092_ = v___x_2085_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2090_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
}
else
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2103_; 
lean_del_object(v___x_2080_);
lean_dec_ref(v_e_x27_2075_);
v_a_2096_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2098_ = v___x_2082_;
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2082_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2101_; 
if (v_isShared_2099_ == 0)
{
v___x_2101_ = v___x_2098_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_a_2096_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2058_);
lean_dec_ref(v_proof_2056_);
lean_dec_ref(v_e_x27_2055_);
lean_dec_ref(v___y_2040_);
return v___x_2060_;
}
}
}
}
else
{
lean_dec_ref(v___y_2040_);
lean_dec_ref(v___f_2038_);
return v___x_2052_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__18___boxed(lean_object* v___f_2107_, lean_object* v_x_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__18(v___f_2107_, v_x_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_);
lean_dec(v___y_2118_);
lean_dec_ref(v___y_2117_);
lean_dec(v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__19(lean_object* v_pre_2121_, lean_object* v___f_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2134_ = lean_box(0);
lean_inc(v___y_2132_);
lean_inc_ref(v___y_2131_);
lean_inc(v___y_2130_);
lean_inc_ref(v___y_2129_);
lean_inc(v___y_2128_);
lean_inc_ref(v___y_2127_);
lean_inc(v___y_2126_);
lean_inc_ref(v___y_2125_);
lean_inc(v___y_2124_);
lean_inc_ref(v___y_2123_);
v___x_2135_ = lean_apply_11(v_pre_2121_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, lean_box(0));
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v_a_2136_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_a_2136_);
if (lean_obj_tag(v_a_2136_) == 0)
{
uint8_t v_done_2137_; 
v_done_2137_ = lean_ctor_get_uint8(v_a_2136_, 0);
if (v_done_2137_ == 0)
{
uint8_t v_contextDependent_2138_; lean_object* v___x_2139_; 
lean_dec_ref_known(v___x_2135_, 1);
v_contextDependent_2138_ = lean_ctor_get_uint8(v_a_2136_, 1);
lean_dec_ref_known(v_a_2136_, 0);
v___x_2139_ = lean_apply_12(v___f_2122_, v___x_2134_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, lean_box(0));
if (lean_obj_tag(v___x_2139_) == 0)
{
lean_object* v_a_2140_; uint8_t v___y_2142_; 
v_a_2140_ = lean_ctor_get(v___x_2139_, 0);
lean_inc(v_a_2140_);
if (v_contextDependent_2138_ == 0)
{
lean_dec(v_a_2140_);
return v___x_2139_;
}
else
{
if (lean_obj_tag(v_a_2140_) == 0)
{
uint8_t v_contextDependent_2152_; 
v_contextDependent_2152_ = lean_ctor_get_uint8(v_a_2140_, 1);
v___y_2142_ = v_contextDependent_2152_;
goto v___jp_2141_;
}
else
{
uint8_t v_contextDependent_2153_; 
v_contextDependent_2153_ = lean_ctor_get_uint8(v_a_2140_, sizeof(void*)*2 + 1);
v___y_2142_ = v_contextDependent_2153_;
goto v___jp_2141_;
}
}
v___jp_2141_:
{
if (v___y_2142_ == 0)
{
lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2150_; 
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2139_);
if (v_isSharedCheck_2150_ == 0)
{
lean_object* v_unused_2151_; 
v_unused_2151_ = lean_ctor_get(v___x_2139_, 0);
lean_dec(v_unused_2151_);
v___x_2144_ = v___x_2139_;
v_isShared_2145_ = v_isSharedCheck_2150_;
goto v_resetjp_2143_;
}
else
{
lean_dec(v___x_2139_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2150_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2146_; lean_object* v___x_2148_; 
v___x_2146_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2140_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 0, v___x_2146_);
v___x_2148_ = v___x_2144_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
else
{
lean_dec(v_a_2140_);
return v___x_2139_;
}
}
}
else
{
return v___x_2139_;
}
}
else
{
lean_dec_ref_known(v_a_2136_, 0);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec_ref(v___f_2122_);
return v___x_2135_;
}
}
else
{
uint8_t v_done_2154_; 
v_done_2154_ = lean_ctor_get_uint8(v_a_2136_, sizeof(void*)*2);
if (v_done_2154_ == 0)
{
lean_object* v_e_x27_2155_; lean_object* v_proof_2156_; uint8_t v_contextDependent_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2207_; 
lean_dec_ref_known(v___x_2135_, 1);
v_e_x27_2155_ = lean_ctor_get(v_a_2136_, 0);
v_proof_2156_ = lean_ctor_get(v_a_2136_, 1);
v_contextDependent_2157_ = lean_ctor_get_uint8(v_a_2136_, sizeof(void*)*2 + 1);
v_isSharedCheck_2207_ = !lean_is_exclusive(v_a_2136_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2159_ = v_a_2136_;
v_isShared_2160_ = v_isSharedCheck_2207_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_proof_2156_);
lean_inc(v_e_x27_2155_);
lean_dec(v_a_2136_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2207_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2161_; 
lean_inc(v___y_2132_);
lean_inc_ref(v___y_2131_);
lean_inc(v___y_2130_);
lean_inc_ref(v___y_2129_);
lean_inc(v___y_2128_);
lean_inc_ref(v___y_2127_);
lean_inc_ref(v_e_x27_2155_);
v___x_2161_ = lean_apply_12(v___f_2122_, v___x_2134_, v_e_x27_2155_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, lean_box(0));
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2206_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2206_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2164_ = v___x_2161_;
v_isShared_2165_ = v_isSharedCheck_2206_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2161_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2206_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
if (lean_obj_tag(v_a_2162_) == 0)
{
uint8_t v_done_2166_; uint8_t v_contextDependent_2167_; uint8_t v___y_2169_; 
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec_ref(v___y_2123_);
v_done_2166_ = lean_ctor_get_uint8(v_a_2162_, 0);
v_contextDependent_2167_ = lean_ctor_get_uint8(v_a_2162_, 1);
lean_dec_ref_known(v_a_2162_, 0);
if (v_contextDependent_2157_ == 0)
{
v___y_2169_ = v_contextDependent_2167_;
goto v___jp_2168_;
}
else
{
v___y_2169_ = v_contextDependent_2157_;
goto v___jp_2168_;
}
v___jp_2168_:
{
lean_object* v___x_2171_; 
if (v_isShared_2160_ == 0)
{
v___x_2171_ = v___x_2159_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_e_x27_2155_);
lean_ctor_set(v_reuseFailAlloc_2175_, 1, v_proof_2156_);
v___x_2171_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
lean_object* v___x_2173_; 
lean_ctor_set_uint8(v___x_2171_, sizeof(void*)*2, v_done_2166_);
lean_ctor_set_uint8(v___x_2171_, sizeof(void*)*2 + 1, v___y_2169_);
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 0, v___x_2171_);
v___x_2173_ = v___x_2164_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___x_2171_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
}
else
{
lean_object* v_e_x27_2176_; lean_object* v_proof_2177_; uint8_t v_done_2178_; uint8_t v_contextDependent_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2205_; 
lean_del_object(v___x_2164_);
lean_del_object(v___x_2159_);
v_e_x27_2176_ = lean_ctor_get(v_a_2162_, 0);
v_proof_2177_ = lean_ctor_get(v_a_2162_, 1);
v_done_2178_ = lean_ctor_get_uint8(v_a_2162_, sizeof(void*)*2);
v_contextDependent_2179_ = lean_ctor_get_uint8(v_a_2162_, sizeof(void*)*2 + 1);
v_isSharedCheck_2205_ = !lean_is_exclusive(v_a_2162_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2181_ = v_a_2162_;
v_isShared_2182_ = v_isSharedCheck_2205_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_proof_2177_);
lean_inc(v_e_x27_2176_);
lean_dec(v_a_2162_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2205_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2183_; 
lean_inc_ref(v_e_x27_2176_);
v___x_2183_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_2123_, v_e_x27_2155_, v_proof_2156_, v_e_x27_2176_, v_proof_2177_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2196_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2186_ = v___x_2183_;
v_isShared_2187_ = v_isSharedCheck_2196_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2183_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2196_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
uint8_t v___y_2189_; 
if (v_contextDependent_2157_ == 0)
{
v___y_2189_ = v_contextDependent_2179_;
goto v___jp_2188_;
}
else
{
v___y_2189_ = v_contextDependent_2157_;
goto v___jp_2188_;
}
v___jp_2188_:
{
lean_object* v___x_2191_; 
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 1, v_a_2184_);
v___x_2191_ = v___x_2181_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_e_x27_2176_);
lean_ctor_set(v_reuseFailAlloc_2195_, 1, v_a_2184_);
lean_ctor_set_uint8(v_reuseFailAlloc_2195_, sizeof(void*)*2, v_done_2178_);
v___x_2191_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
lean_object* v___x_2193_; 
lean_ctor_set_uint8(v___x_2191_, sizeof(void*)*2 + 1, v___y_2189_);
if (v_isShared_2187_ == 0)
{
lean_ctor_set(v___x_2186_, 0, v___x_2191_);
v___x_2193_ = v___x_2186_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2191_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
}
}
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
lean_del_object(v___x_2181_);
lean_dec_ref(v_e_x27_2176_);
v_a_2197_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2183_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2183_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2159_);
lean_dec_ref(v_proof_2156_);
lean_dec_ref(v_e_x27_2155_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec_ref(v___y_2123_);
return v___x_2161_;
}
}
}
else
{
lean_dec_ref_known(v_a_2136_, 2);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec_ref(v___f_2122_);
return v___x_2135_;
}
}
}
else
{
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec_ref(v___f_2122_);
return v___x_2135_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__19___boxed(lean_object* v_pre_2208_, lean_object* v___f_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__19(v_pre_2208_, v___f_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__20(lean_object* v_post_2222_, lean_object* v_d_2223_, lean_object* v___f_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2236_ = lean_box(0);
lean_inc_ref(v___y_2225_);
v___x_2237_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_post_2222_, v_d_2223_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v_a_2238_; 
v_a_2238_ = lean_ctor_get(v___x_2237_, 0);
lean_inc(v_a_2238_);
if (lean_obj_tag(v_a_2238_) == 0)
{
uint8_t v_done_2239_; 
v_done_2239_ = lean_ctor_get_uint8(v_a_2238_, 0);
if (v_done_2239_ == 0)
{
uint8_t v_contextDependent_2240_; lean_object* v___x_2241_; 
lean_dec_ref_known(v___x_2237_, 1);
v_contextDependent_2240_ = lean_ctor_get_uint8(v_a_2238_, 1);
lean_dec_ref_known(v_a_2238_, 0);
v___x_2241_ = lean_apply_12(v___f_2224_, v___x_2236_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, lean_box(0));
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; uint8_t v___y_2244_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_a_2242_);
if (v_contextDependent_2240_ == 0)
{
lean_dec(v_a_2242_);
return v___x_2241_;
}
else
{
if (lean_obj_tag(v_a_2242_) == 0)
{
uint8_t v_contextDependent_2254_; 
v_contextDependent_2254_ = lean_ctor_get_uint8(v_a_2242_, 1);
v___y_2244_ = v_contextDependent_2254_;
goto v___jp_2243_;
}
else
{
uint8_t v_contextDependent_2255_; 
v_contextDependent_2255_ = lean_ctor_get_uint8(v_a_2242_, sizeof(void*)*2 + 1);
v___y_2244_ = v_contextDependent_2255_;
goto v___jp_2243_;
}
}
v___jp_2243_:
{
if (v___y_2244_ == 0)
{
lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2252_; 
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2252_ == 0)
{
lean_object* v_unused_2253_; 
v_unused_2253_ = lean_ctor_get(v___x_2241_, 0);
lean_dec(v_unused_2253_);
v___x_2246_ = v___x_2241_;
v_isShared_2247_ = v_isSharedCheck_2252_;
goto v_resetjp_2245_;
}
else
{
lean_dec(v___x_2241_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2252_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2248_; lean_object* v___x_2250_; 
v___x_2248_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2242_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 0, v___x_2248_);
v___x_2250_ = v___x_2246_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v___x_2248_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
else
{
lean_dec(v_a_2242_);
return v___x_2241_;
}
}
}
else
{
return v___x_2241_;
}
}
else
{
lean_dec_ref_known(v_a_2238_, 0);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec_ref(v___f_2224_);
return v___x_2237_;
}
}
else
{
uint8_t v_done_2256_; 
v_done_2256_ = lean_ctor_get_uint8(v_a_2238_, sizeof(void*)*2);
if (v_done_2256_ == 0)
{
lean_object* v_e_x27_2257_; lean_object* v_proof_2258_; uint8_t v_contextDependent_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2309_; 
lean_dec_ref_known(v___x_2237_, 1);
v_e_x27_2257_ = lean_ctor_get(v_a_2238_, 0);
v_proof_2258_ = lean_ctor_get(v_a_2238_, 1);
v_contextDependent_2259_ = lean_ctor_get_uint8(v_a_2238_, sizeof(void*)*2 + 1);
v_isSharedCheck_2309_ = !lean_is_exclusive(v_a_2238_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2261_ = v_a_2238_;
v_isShared_2262_ = v_isSharedCheck_2309_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_proof_2258_);
lean_inc(v_e_x27_2257_);
lean_dec(v_a_2238_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2309_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2263_; 
lean_inc(v___y_2234_);
lean_inc_ref(v___y_2233_);
lean_inc(v___y_2232_);
lean_inc_ref(v___y_2231_);
lean_inc(v___y_2230_);
lean_inc_ref(v___y_2229_);
lean_inc_ref(v_e_x27_2257_);
v___x_2263_ = lean_apply_12(v___f_2224_, v___x_2236_, v_e_x27_2257_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, lean_box(0));
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2308_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2266_ = v___x_2263_;
v_isShared_2267_ = v_isSharedCheck_2308_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2308_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
if (lean_obj_tag(v_a_2264_) == 0)
{
uint8_t v_done_2268_; uint8_t v_contextDependent_2269_; uint8_t v___y_2271_; 
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec_ref(v___y_2225_);
v_done_2268_ = lean_ctor_get_uint8(v_a_2264_, 0);
v_contextDependent_2269_ = lean_ctor_get_uint8(v_a_2264_, 1);
lean_dec_ref_known(v_a_2264_, 0);
if (v_contextDependent_2259_ == 0)
{
v___y_2271_ = v_contextDependent_2269_;
goto v___jp_2270_;
}
else
{
v___y_2271_ = v_contextDependent_2259_;
goto v___jp_2270_;
}
v___jp_2270_:
{
lean_object* v___x_2273_; 
if (v_isShared_2262_ == 0)
{
v___x_2273_ = v___x_2261_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_e_x27_2257_);
lean_ctor_set(v_reuseFailAlloc_2277_, 1, v_proof_2258_);
v___x_2273_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
lean_object* v___x_2275_; 
lean_ctor_set_uint8(v___x_2273_, sizeof(void*)*2, v_done_2268_);
lean_ctor_set_uint8(v___x_2273_, sizeof(void*)*2 + 1, v___y_2271_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 0, v___x_2273_);
v___x_2275_ = v___x_2266_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v___x_2273_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
return v___x_2275_;
}
}
}
}
else
{
lean_object* v_e_x27_2278_; lean_object* v_proof_2279_; uint8_t v_done_2280_; uint8_t v_contextDependent_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2307_; 
lean_del_object(v___x_2266_);
lean_del_object(v___x_2261_);
v_e_x27_2278_ = lean_ctor_get(v_a_2264_, 0);
v_proof_2279_ = lean_ctor_get(v_a_2264_, 1);
v_done_2280_ = lean_ctor_get_uint8(v_a_2264_, sizeof(void*)*2);
v_contextDependent_2281_ = lean_ctor_get_uint8(v_a_2264_, sizeof(void*)*2 + 1);
v_isSharedCheck_2307_ = !lean_is_exclusive(v_a_2264_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2283_ = v_a_2264_;
v_isShared_2284_ = v_isSharedCheck_2307_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_proof_2279_);
lean_inc(v_e_x27_2278_);
lean_dec(v_a_2264_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2307_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2285_; 
lean_inc_ref(v_e_x27_2278_);
v___x_2285_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_2225_, v_e_x27_2257_, v_proof_2258_, v_e_x27_2278_, v_proof_2279_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2298_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2288_ = v___x_2285_;
v_isShared_2289_ = v_isSharedCheck_2298_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2285_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2298_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
uint8_t v___y_2291_; 
if (v_contextDependent_2259_ == 0)
{
v___y_2291_ = v_contextDependent_2281_;
goto v___jp_2290_;
}
else
{
v___y_2291_ = v_contextDependent_2259_;
goto v___jp_2290_;
}
v___jp_2290_:
{
lean_object* v___x_2293_; 
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 1, v_a_2286_);
v___x_2293_ = v___x_2283_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_e_x27_2278_);
lean_ctor_set(v_reuseFailAlloc_2297_, 1, v_a_2286_);
lean_ctor_set_uint8(v_reuseFailAlloc_2297_, sizeof(void*)*2, v_done_2280_);
v___x_2293_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
lean_object* v___x_2295_; 
lean_ctor_set_uint8(v___x_2293_, sizeof(void*)*2 + 1, v___y_2291_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v___x_2293_);
v___x_2295_ = v___x_2288_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v___x_2293_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_del_object(v___x_2283_);
lean_dec_ref(v_e_x27_2278_);
v_a_2299_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2285_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2285_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2261_);
lean_dec_ref(v_proof_2258_);
lean_dec_ref(v_e_x27_2257_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec_ref(v___y_2225_);
return v___x_2263_;
}
}
}
else
{
lean_dec_ref_known(v_a_2238_, 2);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec_ref(v___f_2224_);
return v___x_2237_;
}
}
}
else
{
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec_ref(v___f_2224_);
return v___x_2237_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__20___boxed(lean_object* v_post_2310_, lean_object* v_d_2311_, lean_object* v___f_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__20(v_post_2310_, v_d_2311_, v___f_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
lean_dec_ref(v_post_2310_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__21(lean_object* v_pre_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_){
_start:
{
lean_object* v___x_2337_; 
lean_inc(v___y_2335_);
lean_inc_ref(v___y_2334_);
lean_inc(v___y_2333_);
lean_inc_ref(v___y_2332_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc_ref(v___y_2326_);
v___x_2337_ = lean_apply_11(v_pre_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, lean_box(0));
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2338_);
if (lean_obj_tag(v_a_2338_) == 0)
{
uint8_t v_done_2339_; 
v_done_2339_ = lean_ctor_get_uint8(v_a_2338_, 0);
if (v_done_2339_ == 0)
{
uint8_t v_contextDependent_2340_; lean_object* v___x_2341_; 
lean_dec_ref_known(v___x_2337_, 1);
v_contextDependent_2340_ = lean_ctor_get_uint8(v_a_2338_, 1);
lean_dec_ref_known(v_a_2338_, 0);
v___x_2341_ = l_Lean_Meta_Sym_Simp_zetaDeltaAll___redArg(v___y_2326_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_a_2342_; uint8_t v___y_2344_; 
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
if (v_contextDependent_2340_ == 0)
{
return v___x_2341_;
}
else
{
if (lean_obj_tag(v_a_2342_) == 0)
{
uint8_t v_contextDependent_2354_; 
v_contextDependent_2354_ = lean_ctor_get_uint8(v_a_2342_, 1);
v___y_2344_ = v_contextDependent_2354_;
goto v___jp_2343_;
}
else
{
uint8_t v_contextDependent_2355_; 
v_contextDependent_2355_ = lean_ctor_get_uint8(v_a_2342_, sizeof(void*)*2 + 1);
v___y_2344_ = v_contextDependent_2355_;
goto v___jp_2343_;
}
}
v___jp_2343_:
{
if (v___y_2344_ == 0)
{
lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2352_; 
lean_inc(v_a_2342_);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2352_ == 0)
{
lean_object* v_unused_2353_; 
v_unused_2353_ = lean_ctor_get(v___x_2341_, 0);
lean_dec(v_unused_2353_);
v___x_2346_ = v___x_2341_;
v_isShared_2347_ = v_isSharedCheck_2352_;
goto v_resetjp_2345_;
}
else
{
lean_dec(v___x_2341_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2352_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2348_; lean_object* v___x_2350_; 
v___x_2348_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2342_);
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 0, v___x_2348_);
v___x_2350_ = v___x_2346_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___x_2348_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
else
{
return v___x_2341_;
}
}
}
else
{
return v___x_2341_;
}
}
else
{
lean_dec_ref_known(v_a_2338_, 0);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec_ref(v___y_2326_);
return v___x_2337_;
}
}
else
{
uint8_t v_done_2356_; 
v_done_2356_ = lean_ctor_get_uint8(v_a_2338_, sizeof(void*)*2);
if (v_done_2356_ == 0)
{
lean_object* v_e_x27_2357_; lean_object* v_proof_2358_; uint8_t v_contextDependent_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2409_; 
lean_dec_ref_known(v___x_2337_, 1);
v_e_x27_2357_ = lean_ctor_get(v_a_2338_, 0);
v_proof_2358_ = lean_ctor_get(v_a_2338_, 1);
v_contextDependent_2359_ = lean_ctor_get_uint8(v_a_2338_, sizeof(void*)*2 + 1);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_a_2338_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2361_ = v_a_2338_;
v_isShared_2362_ = v_isSharedCheck_2409_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_proof_2358_);
lean_inc(v_e_x27_2357_);
lean_dec(v_a_2338_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2409_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; 
lean_inc_ref(v_e_x27_2357_);
v___x_2363_ = l_Lean_Meta_Sym_Simp_zetaDeltaAll___redArg(v_e_x27_2357_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2408_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2366_ = v___x_2363_;
v_isShared_2367_ = v_isSharedCheck_2408_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2363_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2408_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
if (lean_obj_tag(v_a_2364_) == 0)
{
uint8_t v_done_2368_; uint8_t v_contextDependent_2369_; uint8_t v___y_2371_; 
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec_ref(v___y_2326_);
v_done_2368_ = lean_ctor_get_uint8(v_a_2364_, 0);
v_contextDependent_2369_ = lean_ctor_get_uint8(v_a_2364_, 1);
lean_dec_ref_known(v_a_2364_, 0);
if (v_contextDependent_2359_ == 0)
{
v___y_2371_ = v_contextDependent_2369_;
goto v___jp_2370_;
}
else
{
v___y_2371_ = v_contextDependent_2359_;
goto v___jp_2370_;
}
v___jp_2370_:
{
lean_object* v___x_2373_; 
if (v_isShared_2362_ == 0)
{
v___x_2373_ = v___x_2361_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_e_x27_2357_);
lean_ctor_set(v_reuseFailAlloc_2377_, 1, v_proof_2358_);
v___x_2373_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2375_; 
lean_ctor_set_uint8(v___x_2373_, sizeof(void*)*2, v_done_2368_);
lean_ctor_set_uint8(v___x_2373_, sizeof(void*)*2 + 1, v___y_2371_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2373_);
v___x_2375_ = v___x_2366_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v_e_x27_2378_; lean_object* v_proof_2379_; uint8_t v_done_2380_; uint8_t v_contextDependent_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2407_; 
lean_del_object(v___x_2366_);
lean_del_object(v___x_2361_);
v_e_x27_2378_ = lean_ctor_get(v_a_2364_, 0);
v_proof_2379_ = lean_ctor_get(v_a_2364_, 1);
v_done_2380_ = lean_ctor_get_uint8(v_a_2364_, sizeof(void*)*2);
v_contextDependent_2381_ = lean_ctor_get_uint8(v_a_2364_, sizeof(void*)*2 + 1);
v_isSharedCheck_2407_ = !lean_is_exclusive(v_a_2364_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2383_ = v_a_2364_;
v_isShared_2384_ = v_isSharedCheck_2407_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_proof_2379_);
lean_inc(v_e_x27_2378_);
lean_dec(v_a_2364_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2407_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2385_; 
lean_inc_ref(v_e_x27_2378_);
v___x_2385_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_2326_, v_e_x27_2357_, v_proof_2358_, v_e_x27_2378_, v_proof_2379_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2398_; 
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2385_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2388_ = v___x_2385_;
v_isShared_2389_ = v_isSharedCheck_2398_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2385_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2398_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
uint8_t v___y_2391_; 
if (v_contextDependent_2359_ == 0)
{
v___y_2391_ = v_contextDependent_2381_;
goto v___jp_2390_;
}
else
{
v___y_2391_ = v_contextDependent_2359_;
goto v___jp_2390_;
}
v___jp_2390_:
{
lean_object* v___x_2393_; 
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 1, v_a_2386_);
v___x_2393_ = v___x_2383_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_e_x27_2378_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v_a_2386_);
lean_ctor_set_uint8(v_reuseFailAlloc_2397_, sizeof(void*)*2, v_done_2380_);
v___x_2393_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
lean_object* v___x_2395_; 
lean_ctor_set_uint8(v___x_2393_, sizeof(void*)*2 + 1, v___y_2391_);
if (v_isShared_2389_ == 0)
{
lean_ctor_set(v___x_2388_, 0, v___x_2393_);
v___x_2395_ = v___x_2388_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v___x_2393_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
}
else
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2406_; 
lean_del_object(v___x_2383_);
lean_dec_ref(v_e_x27_2378_);
v_a_2399_ = lean_ctor_get(v___x_2385_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2385_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2401_ = v___x_2385_;
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v___x_2385_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_a_2399_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2361_);
lean_dec_ref(v_proof_2358_);
lean_dec_ref(v_e_x27_2357_);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec_ref(v___y_2326_);
return v___x_2363_;
}
}
}
else
{
lean_dec_ref_known(v_a_2338_, 2);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec_ref(v___y_2326_);
return v___x_2337_;
}
}
}
else
{
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec_ref(v___y_2326_);
return v___x_2337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__21___boxed(lean_object* v_pre_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__21(v_pre_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__22(lean_object* v___f_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = lean_box(0);
lean_inc_ref(v___y_2424_);
v___x_2436_ = l_Lean_Meta_Grind_NormSym_eraseMData___redArg(v___y_2424_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
if (lean_obj_tag(v_a_2437_) == 0)
{
uint8_t v_done_2438_; 
v_done_2438_ = lean_ctor_get_uint8(v_a_2437_, 0);
if (v_done_2438_ == 0)
{
uint8_t v_contextDependent_2439_; lean_object* v___x_2440_; 
lean_dec_ref_known(v___x_2436_, 1);
v_contextDependent_2439_ = lean_ctor_get_uint8(v_a_2437_, 1);
lean_dec_ref_known(v_a_2437_, 0);
v___x_2440_ = lean_apply_12(v___f_2423_, v___x_2435_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, lean_box(0));
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; uint8_t v___y_2443_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_a_2441_);
if (v_contextDependent_2439_ == 0)
{
lean_dec(v_a_2441_);
return v___x_2440_;
}
else
{
if (lean_obj_tag(v_a_2441_) == 0)
{
uint8_t v_contextDependent_2453_; 
v_contextDependent_2453_ = lean_ctor_get_uint8(v_a_2441_, 1);
v___y_2443_ = v_contextDependent_2453_;
goto v___jp_2442_;
}
else
{
uint8_t v_contextDependent_2454_; 
v_contextDependent_2454_ = lean_ctor_get_uint8(v_a_2441_, sizeof(void*)*2 + 1);
v___y_2443_ = v_contextDependent_2454_;
goto v___jp_2442_;
}
}
v___jp_2442_:
{
if (v___y_2443_ == 0)
{
lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2451_; 
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2451_ == 0)
{
lean_object* v_unused_2452_; 
v_unused_2452_ = lean_ctor_get(v___x_2440_, 0);
lean_dec(v_unused_2452_);
v___x_2445_ = v___x_2440_;
v_isShared_2446_ = v_isSharedCheck_2451_;
goto v_resetjp_2444_;
}
else
{
lean_dec(v___x_2440_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2451_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2447_; lean_object* v___x_2449_; 
v___x_2447_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2441_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 0, v___x_2447_);
v___x_2449_ = v___x_2445_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v___x_2447_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
else
{
lean_dec(v_a_2441_);
return v___x_2440_;
}
}
}
else
{
return v___x_2440_;
}
}
else
{
lean_dec_ref_known(v_a_2437_, 0);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec_ref(v___f_2423_);
return v___x_2436_;
}
}
else
{
uint8_t v_done_2455_; 
v_done_2455_ = lean_ctor_get_uint8(v_a_2437_, sizeof(void*)*2);
if (v_done_2455_ == 0)
{
lean_object* v_e_x27_2456_; lean_object* v_proof_2457_; uint8_t v_contextDependent_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2508_; 
lean_dec_ref_known(v___x_2436_, 1);
v_e_x27_2456_ = lean_ctor_get(v_a_2437_, 0);
v_proof_2457_ = lean_ctor_get(v_a_2437_, 1);
v_contextDependent_2458_ = lean_ctor_get_uint8(v_a_2437_, sizeof(void*)*2 + 1);
v_isSharedCheck_2508_ = !lean_is_exclusive(v_a_2437_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2460_ = v_a_2437_;
v_isShared_2461_ = v_isSharedCheck_2508_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_proof_2457_);
lean_inc(v_e_x27_2456_);
lean_dec(v_a_2437_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2508_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2462_; 
lean_inc(v___y_2433_);
lean_inc_ref(v___y_2432_);
lean_inc(v___y_2431_);
lean_inc_ref(v___y_2430_);
lean_inc(v___y_2429_);
lean_inc_ref(v___y_2428_);
lean_inc_ref(v_e_x27_2456_);
v___x_2462_ = lean_apply_12(v___f_2423_, v___x_2435_, v_e_x27_2456_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, lean_box(0));
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2507_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2465_ = v___x_2462_;
v_isShared_2466_ = v_isSharedCheck_2507_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2462_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2507_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
if (lean_obj_tag(v_a_2463_) == 0)
{
uint8_t v_done_2467_; uint8_t v_contextDependent_2468_; uint8_t v___y_2470_; 
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec_ref(v___y_2424_);
v_done_2467_ = lean_ctor_get_uint8(v_a_2463_, 0);
v_contextDependent_2468_ = lean_ctor_get_uint8(v_a_2463_, 1);
lean_dec_ref_known(v_a_2463_, 0);
if (v_contextDependent_2458_ == 0)
{
v___y_2470_ = v_contextDependent_2468_;
goto v___jp_2469_;
}
else
{
v___y_2470_ = v_contextDependent_2458_;
goto v___jp_2469_;
}
v___jp_2469_:
{
lean_object* v___x_2472_; 
if (v_isShared_2461_ == 0)
{
v___x_2472_ = v___x_2460_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_e_x27_2456_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v_proof_2457_);
v___x_2472_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
lean_object* v___x_2474_; 
lean_ctor_set_uint8(v___x_2472_, sizeof(void*)*2, v_done_2467_);
lean_ctor_set_uint8(v___x_2472_, sizeof(void*)*2 + 1, v___y_2470_);
if (v_isShared_2466_ == 0)
{
lean_ctor_set(v___x_2465_, 0, v___x_2472_);
v___x_2474_ = v___x_2465_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v___x_2472_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
else
{
lean_object* v_e_x27_2477_; lean_object* v_proof_2478_; uint8_t v_done_2479_; uint8_t v_contextDependent_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2506_; 
lean_del_object(v___x_2465_);
lean_del_object(v___x_2460_);
v_e_x27_2477_ = lean_ctor_get(v_a_2463_, 0);
v_proof_2478_ = lean_ctor_get(v_a_2463_, 1);
v_done_2479_ = lean_ctor_get_uint8(v_a_2463_, sizeof(void*)*2);
v_contextDependent_2480_ = lean_ctor_get_uint8(v_a_2463_, sizeof(void*)*2 + 1);
v_isSharedCheck_2506_ = !lean_is_exclusive(v_a_2463_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2482_ = v_a_2463_;
v_isShared_2483_ = v_isSharedCheck_2506_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_proof_2478_);
lean_inc(v_e_x27_2477_);
lean_dec(v_a_2463_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2506_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2484_; 
lean_inc_ref(v_e_x27_2477_);
v___x_2484_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_2424_, v_e_x27_2456_, v_proof_2457_, v_e_x27_2477_, v_proof_2478_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
if (lean_obj_tag(v___x_2484_) == 0)
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2497_; 
v_a_2485_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2487_ = v___x_2484_;
v_isShared_2488_ = v_isSharedCheck_2497_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2484_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2497_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
uint8_t v___y_2490_; 
if (v_contextDependent_2458_ == 0)
{
v___y_2490_ = v_contextDependent_2480_;
goto v___jp_2489_;
}
else
{
v___y_2490_ = v_contextDependent_2458_;
goto v___jp_2489_;
}
v___jp_2489_:
{
lean_object* v___x_2492_; 
if (v_isShared_2483_ == 0)
{
lean_ctor_set(v___x_2482_, 1, v_a_2485_);
v___x_2492_ = v___x_2482_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_e_x27_2477_);
lean_ctor_set(v_reuseFailAlloc_2496_, 1, v_a_2485_);
lean_ctor_set_uint8(v_reuseFailAlloc_2496_, sizeof(void*)*2, v_done_2479_);
v___x_2492_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
lean_object* v___x_2494_; 
lean_ctor_set_uint8(v___x_2492_, sizeof(void*)*2 + 1, v___y_2490_);
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v___x_2492_);
v___x_2494_ = v___x_2487_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v___x_2492_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_del_object(v___x_2482_);
lean_dec_ref(v_e_x27_2477_);
v_a_2498_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2484_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2484_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2460_);
lean_dec_ref(v_proof_2457_);
lean_dec_ref(v_e_x27_2456_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec_ref(v___y_2424_);
return v___x_2462_;
}
}
}
else
{
lean_dec_ref_known(v_a_2437_, 2);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec_ref(v___f_2423_);
return v___x_2436_;
}
}
}
else
{
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec_ref(v___f_2423_);
return v___x_2436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__22___boxed(lean_object* v___f_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__22(v___f_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__23(lean_object* v___f_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v___y_2535_; lean_object* v___y_2536_; uint8_t v___y_2537_; uint8_t v___y_2541_; lean_object* v___y_2542_; lean_object* v___y_2543_; uint8_t v___y_2544_; lean_object* v___y_2548_; lean_object* v___y_2549_; uint8_t v___y_2550_; uint8_t v___y_2551_; lean_object* v___y_2555_; lean_object* v_e_x27_2556_; lean_object* v_proof_2557_; uint8_t v_done_2558_; uint8_t v_contextDependent_2559_; lean_object* v___y_2581_; lean_object* v_a_2582_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = lean_box(0);
lean_inc_ref(v___y_2523_);
v___x_2594_ = l_Lean_Meta_Grind_NormSym_eraseMData___redArg(v___y_2523_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_a_2595_; 
v_a_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_a_2595_);
if (lean_obj_tag(v_a_2595_) == 0)
{
uint8_t v_done_2596_; 
v_done_2596_ = lean_ctor_get_uint8(v_a_2595_, 0);
if (v_done_2596_ == 0)
{
uint8_t v_contextDependent_2597_; lean_object* v___x_2598_; 
lean_dec_ref_known(v___x_2594_, 1);
v_contextDependent_2597_ = lean_ctor_get_uint8(v_a_2595_, 1);
lean_dec_ref_known(v_a_2595_, 0);
lean_inc(v___y_2532_);
lean_inc_ref(v___y_2531_);
lean_inc(v___y_2530_);
lean_inc_ref(v___y_2529_);
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc_ref(v___y_2523_);
v___x_2598_ = lean_apply_12(v___f_2522_, v___x_2593_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, lean_box(0));
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; uint8_t v___y_2601_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
if (v_contextDependent_2597_ == 0)
{
v___y_2581_ = v___x_2598_;
v_a_2582_ = v_a_2599_;
goto v___jp_2580_;
}
else
{
if (lean_obj_tag(v_a_2599_) == 0)
{
uint8_t v_contextDependent_2611_; 
v_contextDependent_2611_ = lean_ctor_get_uint8(v_a_2599_, 1);
v___y_2601_ = v_contextDependent_2611_;
goto v___jp_2600_;
}
else
{
uint8_t v_contextDependent_2612_; 
v_contextDependent_2612_ = lean_ctor_get_uint8(v_a_2599_, sizeof(void*)*2 + 1);
v___y_2601_ = v_contextDependent_2612_;
goto v___jp_2600_;
}
}
v___jp_2600_:
{
if (v___y_2601_ == 0)
{
lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2609_; 
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2609_ == 0)
{
lean_object* v_unused_2610_; 
v_unused_2610_ = lean_ctor_get(v___x_2598_, 0);
lean_dec(v_unused_2610_);
v___x_2603_ = v___x_2598_;
v_isShared_2604_ = v_isSharedCheck_2609_;
goto v_resetjp_2602_;
}
else
{
lean_dec(v___x_2598_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2609_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2605_; lean_object* v___x_2607_; 
v___x_2605_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2599_);
lean_inc_ref(v___x_2605_);
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 0, v___x_2605_);
v___x_2607_ = v___x_2603_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v___x_2605_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
v___y_2581_ = v___x_2607_;
v_a_2582_ = v___x_2605_;
goto v___jp_2580_;
}
}
}
else
{
v___y_2581_ = v___x_2598_;
v_a_2582_ = v_a_2599_;
goto v___jp_2580_;
}
}
}
else
{
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec_ref(v___y_2523_);
return v___x_2598_;
}
}
else
{
lean_dec_ref_known(v_a_2595_, 0);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec_ref(v___f_2522_);
return v___x_2594_;
}
}
else
{
uint8_t v_done_2613_; 
v_done_2613_ = lean_ctor_get_uint8(v_a_2595_, sizeof(void*)*2);
if (v_done_2613_ == 0)
{
lean_object* v_e_x27_2614_; lean_object* v_proof_2615_; uint8_t v_contextDependent_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2666_; 
lean_dec_ref_known(v___x_2594_, 1);
v_e_x27_2614_ = lean_ctor_get(v_a_2595_, 0);
v_proof_2615_ = lean_ctor_get(v_a_2595_, 1);
v_contextDependent_2616_ = lean_ctor_get_uint8(v_a_2595_, sizeof(void*)*2 + 1);
v_isSharedCheck_2666_ = !lean_is_exclusive(v_a_2595_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2618_ = v_a_2595_;
v_isShared_2619_ = v_isSharedCheck_2666_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_proof_2615_);
lean_inc(v_e_x27_2614_);
lean_dec(v_a_2595_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2666_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v___x_2620_; 
lean_inc(v___y_2532_);
lean_inc_ref(v___y_2531_);
lean_inc(v___y_2530_);
lean_inc_ref(v___y_2529_);
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc_ref(v_e_x27_2614_);
v___x_2620_ = lean_apply_12(v___f_2522_, v___x_2593_, v_e_x27_2614_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, lean_box(0));
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2665_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2623_ = v___x_2620_;
v_isShared_2624_ = v_isSharedCheck_2665_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2620_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2665_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
if (lean_obj_tag(v_a_2621_) == 0)
{
uint8_t v_done_2625_; uint8_t v_contextDependent_2626_; uint8_t v___y_2628_; 
v_done_2625_ = lean_ctor_get_uint8(v_a_2621_, 0);
v_contextDependent_2626_ = lean_ctor_get_uint8(v_a_2621_, 1);
lean_dec_ref_known(v_a_2621_, 0);
if (v_contextDependent_2616_ == 0)
{
v___y_2628_ = v_contextDependent_2626_;
goto v___jp_2627_;
}
else
{
v___y_2628_ = v_contextDependent_2616_;
goto v___jp_2627_;
}
v___jp_2627_:
{
lean_object* v___x_2630_; 
lean_inc_ref(v_proof_2615_);
lean_inc_ref(v_e_x27_2614_);
if (v_isShared_2619_ == 0)
{
v___x_2630_ = v___x_2618_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_e_x27_2614_);
lean_ctor_set(v_reuseFailAlloc_2634_, 1, v_proof_2615_);
v___x_2630_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
lean_object* v___x_2632_; 
lean_ctor_set_uint8(v___x_2630_, sizeof(void*)*2, v_done_2625_);
lean_ctor_set_uint8(v___x_2630_, sizeof(void*)*2 + 1, v___y_2628_);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 0, v___x_2630_);
v___x_2632_ = v___x_2623_;
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
v___y_2555_ = v___x_2632_;
v_e_x27_2556_ = v_e_x27_2614_;
v_proof_2557_ = v_proof_2615_;
v_done_2558_ = v_done_2625_;
v_contextDependent_2559_ = v___y_2628_;
goto v___jp_2554_;
}
}
}
}
else
{
lean_object* v_e_x27_2635_; lean_object* v_proof_2636_; uint8_t v_done_2637_; uint8_t v_contextDependent_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2664_; 
lean_del_object(v___x_2623_);
lean_del_object(v___x_2618_);
v_e_x27_2635_ = lean_ctor_get(v_a_2621_, 0);
v_proof_2636_ = lean_ctor_get(v_a_2621_, 1);
v_done_2637_ = lean_ctor_get_uint8(v_a_2621_, sizeof(void*)*2);
v_contextDependent_2638_ = lean_ctor_get_uint8(v_a_2621_, sizeof(void*)*2 + 1);
v_isSharedCheck_2664_ = !lean_is_exclusive(v_a_2621_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2640_ = v_a_2621_;
v_isShared_2641_ = v_isSharedCheck_2664_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_proof_2636_);
lean_inc(v_e_x27_2635_);
lean_dec(v_a_2621_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2664_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2642_; 
lean_inc_ref(v_e_x27_2635_);
lean_inc_ref(v___y_2523_);
v___x_2642_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_2523_, v_e_x27_2614_, v_proof_2615_, v_e_x27_2635_, v_proof_2636_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2655_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2645_ = v___x_2642_;
v_isShared_2646_ = v_isSharedCheck_2655_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2642_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2655_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
uint8_t v___y_2648_; 
if (v_contextDependent_2616_ == 0)
{
v___y_2648_ = v_contextDependent_2638_;
goto v___jp_2647_;
}
else
{
v___y_2648_ = v_contextDependent_2616_;
goto v___jp_2647_;
}
v___jp_2647_:
{
lean_object* v___x_2650_; 
lean_inc(v_a_2643_);
lean_inc_ref(v_e_x27_2635_);
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 1, v_a_2643_);
v___x_2650_ = v___x_2640_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_e_x27_2635_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v_a_2643_);
lean_ctor_set_uint8(v_reuseFailAlloc_2654_, sizeof(void*)*2, v_done_2637_);
v___x_2650_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
lean_object* v___x_2652_; 
lean_ctor_set_uint8(v___x_2650_, sizeof(void*)*2 + 1, v___y_2648_);
if (v_isShared_2646_ == 0)
{
lean_ctor_set(v___x_2645_, 0, v___x_2650_);
v___x_2652_ = v___x_2645_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
v___y_2555_ = v___x_2652_;
v_e_x27_2556_ = v_e_x27_2635_;
v_proof_2557_ = v_a_2643_;
v_done_2558_ = v_done_2637_;
v_contextDependent_2559_ = v___y_2648_;
goto v___jp_2554_;
}
}
}
}
}
else
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2663_; 
lean_del_object(v___x_2640_);
lean_dec_ref(v_e_x27_2635_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec_ref(v___y_2523_);
v_a_2656_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2663_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2658_ = v___x_2642_;
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v___x_2642_);
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
}
else
{
lean_del_object(v___x_2618_);
lean_dec_ref(v_proof_2615_);
lean_dec_ref(v_e_x27_2614_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec_ref(v___y_2523_);
return v___x_2620_;
}
}
}
else
{
lean_dec_ref_known(v_a_2595_, 2);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec_ref(v___f_2522_);
return v___x_2594_;
}
}
}
else
{
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec_ref(v___f_2522_);
return v___x_2594_;
}
v___jp_2534_:
{
if (v___y_2537_ == 0)
{
lean_object* v___x_2538_; lean_object* v___x_2539_; 
lean_dec_ref(v___y_2535_);
v___x_2538_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_2536_);
v___x_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2538_);
return v___x_2539_;
}
else
{
lean_dec_ref(v___y_2536_);
return v___y_2535_;
}
}
v___jp_2540_:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2545_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2545_, 0, v___y_2542_);
lean_ctor_set(v___x_2545_, 1, v___y_2543_);
lean_ctor_set_uint8(v___x_2545_, sizeof(void*)*2, v___y_2541_);
lean_ctor_set_uint8(v___x_2545_, sizeof(void*)*2 + 1, v___y_2544_);
v___x_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
return v___x_2546_;
}
v___jp_2547_:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2552_, 0, v___y_2549_);
lean_ctor_set(v___x_2552_, 1, v___y_2548_);
lean_ctor_set_uint8(v___x_2552_, sizeof(void*)*2, v___y_2550_);
lean_ctor_set_uint8(v___x_2552_, sizeof(void*)*2 + 1, v___y_2551_);
v___x_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2552_);
return v___x_2553_;
}
v___jp_2554_:
{
if (v_done_2558_ == 0)
{
lean_object* v___x_2560_; 
lean_dec_ref(v___y_2555_);
lean_inc_ref(v_e_x27_2556_);
v___x_2560_ = l_Lean_Meta_Sym_Simp_zeta___redArg(v_e_x27_2556_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2561_);
lean_dec_ref_known(v___x_2560_, 1);
if (lean_obj_tag(v_a_2561_) == 0)
{
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec_ref(v___y_2523_);
if (v_contextDependent_2559_ == 0)
{
uint8_t v_done_2562_; uint8_t v_contextDependent_2563_; 
v_done_2562_ = lean_ctor_get_uint8(v_a_2561_, 0);
v_contextDependent_2563_ = lean_ctor_get_uint8(v_a_2561_, 1);
lean_dec_ref_known(v_a_2561_, 0);
v___y_2548_ = v_proof_2557_;
v___y_2549_ = v_e_x27_2556_;
v___y_2550_ = v_done_2562_;
v___y_2551_ = v_contextDependent_2563_;
goto v___jp_2547_;
}
else
{
uint8_t v_done_2564_; 
v_done_2564_ = lean_ctor_get_uint8(v_a_2561_, 0);
lean_dec_ref_known(v_a_2561_, 0);
v___y_2548_ = v_proof_2557_;
v___y_2549_ = v_e_x27_2556_;
v___y_2550_ = v_done_2564_;
v___y_2551_ = v_contextDependent_2559_;
goto v___jp_2547_;
}
}
else
{
lean_object* v_e_x27_2565_; lean_object* v_proof_2566_; uint8_t v_done_2567_; uint8_t v_contextDependent_2568_; lean_object* v___x_2569_; 
v_e_x27_2565_ = lean_ctor_get(v_a_2561_, 0);
lean_inc_ref_n(v_e_x27_2565_, 2);
v_proof_2566_ = lean_ctor_get(v_a_2561_, 1);
lean_inc_ref(v_proof_2566_);
v_done_2567_ = lean_ctor_get_uint8(v_a_2561_, sizeof(void*)*2);
v_contextDependent_2568_ = lean_ctor_get_uint8(v_a_2561_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2561_, 2);
v___x_2569_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_2523_, v_e_x27_2556_, v_proof_2557_, v_e_x27_2565_, v_proof_2566_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
if (lean_obj_tag(v___x_2569_) == 0)
{
if (v_contextDependent_2559_ == 0)
{
lean_object* v_a_2570_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v___x_2569_, 1);
v___y_2541_ = v_done_2567_;
v___y_2542_ = v_e_x27_2565_;
v___y_2543_ = v_a_2570_;
v___y_2544_ = v_contextDependent_2568_;
goto v___jp_2540_;
}
else
{
lean_object* v_a_2571_; 
v_a_2571_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2569_, 1);
v___y_2541_ = v_done_2567_;
v___y_2542_ = v_e_x27_2565_;
v___y_2543_ = v_a_2571_;
v___y_2544_ = v_contextDependent_2559_;
goto v___jp_2540_;
}
}
else
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
lean_dec_ref(v_e_x27_2565_);
v_a_2572_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2569_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2569_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2572_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
}
}
else
{
lean_dec_ref(v_proof_2557_);
lean_dec_ref(v_e_x27_2556_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec_ref(v___y_2523_);
return v___x_2560_;
}
}
else
{
lean_dec_ref(v_proof_2557_);
lean_dec_ref(v_e_x27_2556_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec_ref(v___y_2523_);
return v___y_2555_;
}
}
v___jp_2580_:
{
if (lean_obj_tag(v_a_2582_) == 0)
{
uint8_t v_done_2583_; 
v_done_2583_ = lean_ctor_get_uint8(v_a_2582_, 0);
if (v_done_2583_ == 0)
{
uint8_t v_contextDependent_2584_; lean_object* v___x_2585_; 
lean_dec_ref(v___y_2581_);
v_contextDependent_2584_ = lean_ctor_get_uint8(v_a_2582_, 1);
lean_dec_ref_known(v_a_2582_, 0);
v___x_2585_ = l_Lean_Meta_Sym_Simp_zeta___redArg(v___y_2523_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
if (lean_obj_tag(v___x_2585_) == 0)
{
if (v_contextDependent_2584_ == 0)
{
return v___x_2585_;
}
else
{
lean_object* v_a_2586_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2586_);
if (lean_obj_tag(v_a_2586_) == 0)
{
uint8_t v_contextDependent_2587_; 
v_contextDependent_2587_ = lean_ctor_get_uint8(v_a_2586_, 1);
v___y_2535_ = v___x_2585_;
v___y_2536_ = v_a_2586_;
v___y_2537_ = v_contextDependent_2587_;
goto v___jp_2534_;
}
else
{
uint8_t v_contextDependent_2588_; 
v_contextDependent_2588_ = lean_ctor_get_uint8(v_a_2586_, sizeof(void*)*2 + 1);
v___y_2535_ = v___x_2585_;
v___y_2536_ = v_a_2586_;
v___y_2537_ = v_contextDependent_2588_;
goto v___jp_2534_;
}
}
}
else
{
return v___x_2585_;
}
}
else
{
lean_dec_ref_known(v_a_2582_, 0);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec_ref(v___y_2523_);
return v___y_2581_;
}
}
else
{
lean_object* v_e_x27_2589_; lean_object* v_proof_2590_; uint8_t v_done_2591_; uint8_t v_contextDependent_2592_; 
v_e_x27_2589_ = lean_ctor_get(v_a_2582_, 0);
lean_inc_ref(v_e_x27_2589_);
v_proof_2590_ = lean_ctor_get(v_a_2582_, 1);
lean_inc_ref(v_proof_2590_);
v_done_2591_ = lean_ctor_get_uint8(v_a_2582_, sizeof(void*)*2);
v_contextDependent_2592_ = lean_ctor_get_uint8(v_a_2582_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2582_, 2);
v___y_2555_ = v___y_2581_;
v_e_x27_2556_ = v_e_x27_2589_;
v_proof_2557_ = v_proof_2590_;
v_done_2558_ = v_done_2591_;
v_contextDependent_2559_ = v_contextDependent_2592_;
goto v___jp_2554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods___lam__23___boxed(lean_object* v___f_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Lean_Meta_Grind_mkNormSymMethods___lam__23(v___f_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymMethods(lean_object* v_config_2707_, lean_object* v_thms_2708_){
_start:
{
uint8_t v_zetaDelta_2709_; uint8_t v_zeta_2710_; uint8_t v_distrib_2711_; lean_object* v_maxChar_2712_; lean_object* v___f_2713_; lean_object* v___x_2714_; lean_object* v___f_2715_; lean_object* v___f_2716_; lean_object* v___f_2717_; lean_object* v_d_2718_; lean_object* v___f_2719_; lean_object* v___x_2720_; lean_object* v___f_2721_; lean_object* v___f_2722_; lean_object* v___f_2723_; lean_object* v_pre_2725_; lean_object* v_pre_2731_; 
v_zetaDelta_2709_ = lean_ctor_get_uint8(v_config_2707_, sizeof(void*)*18 + 19);
v_zeta_2710_ = lean_ctor_get_uint8(v_config_2707_, sizeof(void*)*18 + 20);
v_distrib_2711_ = lean_ctor_get_uint8(v_config_2707_, sizeof(void*)*18 + 21);
v_maxChar_2712_ = lean_ctor_get(v_config_2707_, 7);
lean_inc(v_maxChar_2712_);
lean_dec_ref(v_config_2707_);
v___f_2713_ = ((lean_object*)(l_Lean_Meta_Grind_mkNormSymMethods___closed__11));
v___x_2714_ = lean_box(v_distrib_2711_);
v___f_2715_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__12___boxed), 14, 2);
lean_closure_set(v___f_2715_, 0, v___x_2714_);
lean_closure_set(v___f_2715_, 1, v___f_2713_);
v___f_2716_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__13___boxed), 13, 1);
lean_closure_set(v___f_2716_, 0, v___f_2715_);
v___f_2717_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__14___boxed), 13, 1);
lean_closure_set(v___f_2717_, 0, v___f_2716_);
v_d_2718_ = ((lean_object*)(l_Lean_Meta_Grind_mkNormSymMethods___closed__12));
lean_inc_ref(v_thms_2708_);
v___f_2719_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__15___boxed), 14, 2);
lean_closure_set(v___f_2719_, 0, v_thms_2708_);
lean_closure_set(v___f_2719_, 1, v_d_2718_);
v___x_2720_ = lean_box(v_distrib_2711_);
v___f_2721_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__16___boxed), 16, 4);
lean_closure_set(v___f_2721_, 0, v_maxChar_2712_);
lean_closure_set(v___f_2721_, 1, v_d_2718_);
lean_closure_set(v___f_2721_, 2, v___x_2720_);
lean_closure_set(v___f_2721_, 3, v___f_2719_);
v___f_2722_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__17___boxed), 13, 1);
lean_closure_set(v___f_2722_, 0, v___f_2721_);
v___f_2723_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__18___boxed), 13, 1);
lean_closure_set(v___f_2723_, 0, v___f_2722_);
if (v_zeta_2710_ == 0)
{
lean_object* v_pre_2733_; 
v_pre_2733_ = ((lean_object*)(l_Lean_Meta_Grind_mkNormSymMethods___closed__13));
v_pre_2731_ = v_pre_2733_;
goto v___jp_2730_;
}
else
{
lean_object* v_pre_2734_; 
v_pre_2734_ = ((lean_object*)(l_Lean_Meta_Grind_mkNormSymMethods___closed__14));
v_pre_2731_ = v_pre_2734_;
goto v___jp_2730_;
}
v___jp_2724_:
{
lean_object* v_post_2726_; lean_object* v_pre_2727_; lean_object* v_post_2728_; lean_object* v___x_2729_; 
v_post_2726_ = lean_ctor_get(v_thms_2708_, 1);
lean_inc_ref(v_post_2726_);
lean_dec_ref(v_thms_2708_);
v_pre_2727_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__19___boxed), 13, 2);
lean_closure_set(v_pre_2727_, 0, v_pre_2725_);
lean_closure_set(v_pre_2727_, 1, v___f_2723_);
v_post_2728_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__20___boxed), 14, 3);
lean_closure_set(v_post_2728_, 0, v_post_2726_);
lean_closure_set(v_post_2728_, 1, v_d_2718_);
lean_closure_set(v_post_2728_, 2, v___f_2717_);
v___x_2729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2729_, 0, v_pre_2727_);
lean_ctor_set(v___x_2729_, 1, v_post_2728_);
return v___x_2729_;
}
v___jp_2730_:
{
if (v_zetaDelta_2709_ == 0)
{
lean_inc_ref(v_pre_2731_);
v_pre_2725_ = v_pre_2731_;
goto v___jp_2724_;
}
else
{
lean_object* v_pre_2732_; 
lean_inc_ref(v_pre_2731_);
v_pre_2732_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymMethods___lam__21___boxed), 12, 1);
lean_closure_set(v_pre_2732_, 0, v_pre_2731_);
v_pre_2725_ = v_pre_2732_;
goto v___jp_2724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__0(lean_object* v_x_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_){
_start:
{
lean_object* v___x_2747_; 
lean_inc_ref(v___y_2736_);
v___x_2747_ = l_Lean_Meta_Sym_DSimp_dsimpProj___redArg(v___y_2736_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v_a_2748_; 
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
lean_inc(v_a_2748_);
if (lean_obj_tag(v_a_2748_) == 0)
{
uint8_t v_done_2749_; 
v_done_2749_ = lean_ctor_get_uint8(v_a_2748_, 0);
lean_dec_ref_known(v_a_2748_, 0);
if (v_done_2749_ == 0)
{
lean_object* v___x_2750_; 
lean_dec_ref_known(v___x_2747_, 1);
v___x_2750_ = l_Lean_Meta_Sym_DSimp_dsimpMatch___redArg(v___y_2736_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec_ref(v___y_2736_);
return v___x_2750_;
}
else
{
lean_dec_ref(v___y_2736_);
return v___x_2747_;
}
}
else
{
uint8_t v_done_2751_; 
lean_dec_ref(v___y_2736_);
v_done_2751_ = lean_ctor_get_uint8(v_a_2748_, sizeof(void*)*1);
if (v_done_2751_ == 0)
{
lean_object* v_e_x27_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2770_; 
lean_dec_ref_known(v___x_2747_, 1);
v_e_x27_2752_ = lean_ctor_get(v_a_2748_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v_a_2748_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2754_ = v_a_2748_;
v_isShared_2755_ = v_isSharedCheck_2770_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_e_x27_2752_);
lean_dec(v_a_2748_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2770_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2756_; 
v___x_2756_ = l_Lean_Meta_Sym_DSimp_dsimpMatch___redArg(v_e_x27_2752_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_object* v_a_2757_; 
v_a_2757_ = lean_ctor_get(v___x_2756_, 0);
if (lean_obj_tag(v_a_2757_) == 0)
{
lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2768_; 
lean_inc_ref(v_a_2757_);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2768_ == 0)
{
lean_object* v_unused_2769_; 
v_unused_2769_ = lean_ctor_get(v___x_2756_, 0);
lean_dec(v_unused_2769_);
v___x_2759_ = v___x_2756_;
v_isShared_2760_ = v_isSharedCheck_2768_;
goto v_resetjp_2758_;
}
else
{
lean_dec(v___x_2756_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2768_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
uint8_t v_done_2761_; lean_object* v___x_2763_; 
v_done_2761_ = lean_ctor_get_uint8(v_a_2757_, 0);
lean_dec_ref_known(v_a_2757_, 0);
if (v_isShared_2755_ == 0)
{
v___x_2763_ = v___x_2754_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_e_x27_2752_);
v___x_2763_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
lean_object* v___x_2765_; 
lean_ctor_set_uint8(v___x_2763_, sizeof(void*)*1, v_done_2761_);
if (v_isShared_2760_ == 0)
{
lean_ctor_set(v___x_2759_, 0, v___x_2763_);
v___x_2765_ = v___x_2759_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2763_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
}
}
else
{
lean_del_object(v___x_2754_);
lean_dec_ref(v_e_x27_2752_);
return v___x_2756_;
}
}
else
{
lean_del_object(v___x_2754_);
lean_dec_ref(v_e_x27_2752_);
return v___x_2756_;
}
}
}
else
{
lean_dec_ref_known(v_a_2748_, 1);
return v___x_2747_;
}
}
}
else
{
lean_dec_ref(v___y_2736_);
return v___x_2747_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__0___boxed(lean_object* v_x_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
lean_object* v_res_2783_; 
v_res_2783_ = l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__0(v_x_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
lean_dec(v___y_2773_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__1(lean_object* v_x_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; 
v___x_2796_ = lean_unsigned_to_nat(255u);
v___x_2797_ = l_Lean_Meta_Sym_DSimp_evalGround___redArg(v___x_2796_, v___y_2785_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__1___boxed(lean_object* v_x_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__1(v_x_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__2(lean_object* v_dsimp_2811_, lean_object* v___f_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2824_ = lean_box(0);
lean_inc_ref(v___y_2813_);
v___x_2825_ = l_Lean_Meta_Sym_DSimp_Decls_toDSimproc(v_dsimp_2811_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v_a_2826_; 
v_a_2826_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2826_);
if (lean_obj_tag(v_a_2826_) == 0)
{
uint8_t v_done_2827_; 
v_done_2827_ = lean_ctor_get_uint8(v_a_2826_, 0);
lean_dec_ref_known(v_a_2826_, 0);
if (v_done_2827_ == 0)
{
lean_object* v___x_2828_; 
lean_dec_ref_known(v___x_2825_, 1);
v___x_2828_ = lean_apply_12(v___f_2812_, v___x_2824_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, lean_box(0));
return v___x_2828_;
}
else
{
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2817_);
lean_dec(v___y_2816_);
lean_dec_ref(v___y_2815_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec_ref(v___f_2812_);
return v___x_2825_;
}
}
else
{
uint8_t v_done_2829_; 
lean_dec_ref(v___y_2813_);
v_done_2829_ = lean_ctor_get_uint8(v_a_2826_, sizeof(void*)*1);
if (v_done_2829_ == 0)
{
lean_object* v_e_x27_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2848_; 
lean_dec_ref_known(v___x_2825_, 1);
v_e_x27_2830_ = lean_ctor_get(v_a_2826_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v_a_2826_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2832_ = v_a_2826_;
v_isShared_2833_ = v_isSharedCheck_2848_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_e_x27_2830_);
lean_dec(v_a_2826_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2848_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2834_; 
lean_inc_ref(v_e_x27_2830_);
v___x_2834_ = lean_apply_12(v___f_2812_, v___x_2824_, v_e_x27_2830_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, lean_box(0));
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v_a_2835_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
lean_inc(v_a_2835_);
if (lean_obj_tag(v_a_2835_) == 0)
{
lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2846_; 
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2846_ == 0)
{
lean_object* v_unused_2847_; 
v_unused_2847_ = lean_ctor_get(v___x_2834_, 0);
lean_dec(v_unused_2847_);
v___x_2837_ = v___x_2834_;
v_isShared_2838_ = v_isSharedCheck_2846_;
goto v_resetjp_2836_;
}
else
{
lean_dec(v___x_2834_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2846_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
uint8_t v_done_2839_; lean_object* v___x_2841_; 
v_done_2839_ = lean_ctor_get_uint8(v_a_2835_, 0);
lean_dec_ref_known(v_a_2835_, 0);
if (v_isShared_2833_ == 0)
{
v___x_2841_ = v___x_2832_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v_e_x27_2830_);
v___x_2841_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
lean_object* v___x_2843_; 
lean_ctor_set_uint8(v___x_2841_, sizeof(void*)*1, v_done_2839_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 0, v___x_2841_);
v___x_2843_ = v___x_2837_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v___x_2841_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_2835_, 1);
lean_del_object(v___x_2832_);
lean_dec_ref(v_e_x27_2830_);
return v___x_2834_;
}
}
else
{
lean_del_object(v___x_2832_);
lean_dec_ref(v_e_x27_2830_);
return v___x_2834_;
}
}
}
else
{
lean_dec_ref_known(v_a_2826_, 1);
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2817_);
lean_dec(v___y_2816_);
lean_dec_ref(v___y_2815_);
lean_dec(v___y_2814_);
lean_dec_ref(v___f_2812_);
return v___x_2825_;
}
}
}
else
{
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2817_);
lean_dec(v___y_2816_);
lean_dec_ref(v___y_2815_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec_ref(v___f_2812_);
return v___x_2825_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__2___boxed(lean_object* v_dsimp_2849_, lean_object* v___f_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__2(v_dsimp_2849_, v___f_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec_ref(v_dsimp_2849_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__3(lean_object* v_pre_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v___x_2875_; 
lean_inc(v___y_2873_);
lean_inc_ref(v___y_2872_);
lean_inc(v___y_2871_);
lean_inc_ref(v___y_2870_);
lean_inc(v___y_2869_);
lean_inc_ref(v___y_2868_);
lean_inc_ref(v___y_2864_);
v___x_2875_ = lean_apply_11(v_pre_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, lean_box(0));
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v_a_2876_; 
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2876_);
if (lean_obj_tag(v_a_2876_) == 0)
{
uint8_t v_done_2877_; 
v_done_2877_ = lean_ctor_get_uint8(v_a_2876_, 0);
lean_dec_ref_known(v_a_2876_, 0);
if (v_done_2877_ == 0)
{
lean_object* v___x_2878_; 
lean_dec_ref_known(v___x_2875_, 1);
v___x_2878_ = l_Lean_Meta_Sym_DSimp_zetaDeltaAll___redArg(v___y_2864_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
return v___x_2878_;
}
else
{
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec_ref(v___y_2864_);
return v___x_2875_;
}
}
else
{
uint8_t v_done_2879_; 
lean_dec_ref(v___y_2864_);
v_done_2879_ = lean_ctor_get_uint8(v_a_2876_, sizeof(void*)*1);
if (v_done_2879_ == 0)
{
lean_object* v_e_x27_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2898_; 
lean_dec_ref_known(v___x_2875_, 1);
v_e_x27_2880_ = lean_ctor_get(v_a_2876_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v_a_2876_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2882_ = v_a_2876_;
v_isShared_2883_ = v_isSharedCheck_2898_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_e_x27_2880_);
lean_dec(v_a_2876_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2898_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2884_; 
lean_inc_ref(v_e_x27_2880_);
v___x_2884_ = l_Lean_Meta_Sym_DSimp_zetaDeltaAll___redArg(v_e_x27_2880_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
if (lean_obj_tag(v_a_2885_) == 0)
{
lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2896_; 
lean_inc_ref(v_a_2885_);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2896_ == 0)
{
lean_object* v_unused_2897_; 
v_unused_2897_ = lean_ctor_get(v___x_2884_, 0);
lean_dec(v_unused_2897_);
v___x_2887_ = v___x_2884_;
v_isShared_2888_ = v_isSharedCheck_2896_;
goto v_resetjp_2886_;
}
else
{
lean_dec(v___x_2884_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2896_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
uint8_t v_done_2889_; lean_object* v___x_2891_; 
v_done_2889_ = lean_ctor_get_uint8(v_a_2885_, 0);
lean_dec_ref_known(v_a_2885_, 0);
if (v_isShared_2883_ == 0)
{
v___x_2891_ = v___x_2882_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_e_x27_2880_);
v___x_2891_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
lean_object* v___x_2893_; 
lean_ctor_set_uint8(v___x_2891_, sizeof(void*)*1, v_done_2889_);
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v___x_2891_);
v___x_2893_ = v___x_2887_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2891_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
}
else
{
lean_del_object(v___x_2882_);
lean_dec_ref(v_e_x27_2880_);
return v___x_2884_;
}
}
else
{
lean_del_object(v___x_2882_);
lean_dec_ref(v_e_x27_2880_);
return v___x_2884_;
}
}
}
else
{
lean_dec_ref_known(v_a_2876_, 1);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
return v___x_2875_;
}
}
}
else
{
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec_ref(v___y_2864_);
return v___x_2875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__3___boxed(lean_object* v_pre_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__3(v_pre_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__4(lean_object* v___f_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; 
v___x_2924_ = lean_box(0);
lean_inc_ref(v___y_2913_);
v___x_2925_ = l_Lean_Meta_Sym_DSimp_beta___redArg(v___y_2913_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v_a_2926_; 
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2926_);
if (lean_obj_tag(v_a_2926_) == 0)
{
uint8_t v_done_2927_; 
v_done_2927_ = lean_ctor_get_uint8(v_a_2926_, 0);
lean_dec_ref_known(v_a_2926_, 0);
if (v_done_2927_ == 0)
{
lean_object* v___x_2928_; 
lean_dec_ref_known(v___x_2925_, 1);
v___x_2928_ = lean_apply_12(v___f_2912_, v___x_2924_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, lean_box(0));
return v___x_2928_;
}
else
{
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec_ref(v___f_2912_);
return v___x_2925_;
}
}
else
{
uint8_t v_done_2929_; 
lean_dec_ref(v___y_2913_);
v_done_2929_ = lean_ctor_get_uint8(v_a_2926_, sizeof(void*)*1);
if (v_done_2929_ == 0)
{
lean_object* v_e_x27_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2948_; 
lean_dec_ref_known(v___x_2925_, 1);
v_e_x27_2930_ = lean_ctor_get(v_a_2926_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v_a_2926_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2932_ = v_a_2926_;
v_isShared_2933_ = v_isSharedCheck_2948_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_e_x27_2930_);
lean_dec(v_a_2926_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2948_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2934_; 
lean_inc_ref(v_e_x27_2930_);
v___x_2934_ = lean_apply_12(v___f_2912_, v___x_2924_, v_e_x27_2930_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, lean_box(0));
if (lean_obj_tag(v___x_2934_) == 0)
{
lean_object* v_a_2935_; 
v_a_2935_ = lean_ctor_get(v___x_2934_, 0);
lean_inc(v_a_2935_);
if (lean_obj_tag(v_a_2935_) == 0)
{
lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2946_; 
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2934_);
if (v_isSharedCheck_2946_ == 0)
{
lean_object* v_unused_2947_; 
v_unused_2947_ = lean_ctor_get(v___x_2934_, 0);
lean_dec(v_unused_2947_);
v___x_2937_ = v___x_2934_;
v_isShared_2938_ = v_isSharedCheck_2946_;
goto v_resetjp_2936_;
}
else
{
lean_dec(v___x_2934_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2946_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
uint8_t v_done_2939_; lean_object* v___x_2941_; 
v_done_2939_ = lean_ctor_get_uint8(v_a_2935_, 0);
lean_dec_ref_known(v_a_2935_, 0);
if (v_isShared_2933_ == 0)
{
v___x_2941_ = v___x_2932_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_e_x27_2930_);
v___x_2941_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2943_; 
lean_ctor_set_uint8(v___x_2941_, sizeof(void*)*1, v_done_2939_);
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 0, v___x_2941_);
v___x_2943_ = v___x_2937_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v___x_2941_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
return v___x_2943_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_2935_, 1);
lean_del_object(v___x_2932_);
lean_dec_ref(v_e_x27_2930_);
return v___x_2934_;
}
}
else
{
lean_del_object(v___x_2932_);
lean_dec_ref(v_e_x27_2930_);
return v___x_2934_;
}
}
}
else
{
lean_dec_ref_known(v_a_2926_, 1);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___f_2912_);
return v___x_2925_;
}
}
}
else
{
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec_ref(v___f_2912_);
return v___x_2925_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__4___boxed(lean_object* v___f_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__4(v___f_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__5(lean_object* v___f_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v___y_2975_; lean_object* v_e_x27_2976_; uint8_t v_done_2977_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = lean_box(0);
lean_inc_ref(v___y_2963_);
v___x_2991_ = l_Lean_Meta_Sym_DSimp_beta___redArg(v___y_2963_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
if (lean_obj_tag(v_a_2992_) == 0)
{
uint8_t v_done_2993_; 
v_done_2993_ = lean_ctor_get_uint8(v_a_2992_, 0);
lean_dec_ref_known(v_a_2992_, 0);
if (v_done_2993_ == 0)
{
lean_object* v___x_2994_; 
lean_dec_ref_known(v___x_2991_, 1);
lean_inc(v___y_2972_);
lean_inc_ref(v___y_2971_);
lean_inc(v___y_2970_);
lean_inc_ref(v___y_2969_);
lean_inc(v___y_2968_);
lean_inc_ref(v___y_2967_);
lean_inc_ref(v___y_2963_);
v___x_2994_ = lean_apply_12(v___f_2962_, v___x_2990_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, lean_box(0));
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
lean_inc(v_a_2995_);
if (lean_obj_tag(v_a_2995_) == 0)
{
uint8_t v_done_2996_; 
v_done_2996_ = lean_ctor_get_uint8(v_a_2995_, 0);
lean_dec_ref_known(v_a_2995_, 0);
if (v_done_2996_ == 0)
{
lean_object* v___x_2997_; 
lean_dec_ref_known(v___x_2994_, 1);
v___x_2997_ = l_Lean_Meta_Sym_DSimp_zeta___redArg(v___y_2963_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
return v___x_2997_;
}
else
{
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec_ref(v___y_2963_);
return v___x_2994_;
}
}
else
{
lean_object* v_e_x27_2998_; uint8_t v_done_2999_; 
lean_dec_ref(v___y_2963_);
v_e_x27_2998_ = lean_ctor_get(v_a_2995_, 0);
lean_inc_ref(v_e_x27_2998_);
v_done_2999_ = lean_ctor_get_uint8(v_a_2995_, sizeof(void*)*1);
lean_dec_ref_known(v_a_2995_, 1);
v___y_2975_ = v___x_2994_;
v_e_x27_2976_ = v_e_x27_2998_;
v_done_2977_ = v_done_2999_;
goto v___jp_2974_;
}
}
else
{
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec_ref(v___y_2963_);
return v___x_2994_;
}
}
else
{
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec_ref(v___y_2963_);
lean_dec_ref(v___f_2962_);
return v___x_2991_;
}
}
else
{
uint8_t v_done_3000_; 
lean_dec_ref(v___y_2963_);
v_done_3000_ = lean_ctor_get_uint8(v_a_2992_, sizeof(void*)*1);
if (v_done_3000_ == 0)
{
lean_object* v_e_x27_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3021_; 
lean_dec_ref_known(v___x_2991_, 1);
v_e_x27_3001_ = lean_ctor_get(v_a_2992_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v_a_2992_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3003_ = v_a_2992_;
v_isShared_3004_ = v_isSharedCheck_3021_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_e_x27_3001_);
lean_dec(v_a_2992_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3021_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3005_; 
lean_inc(v___y_2972_);
lean_inc_ref(v___y_2971_);
lean_inc(v___y_2970_);
lean_inc_ref(v___y_2969_);
lean_inc(v___y_2968_);
lean_inc_ref(v___y_2967_);
lean_inc_ref(v_e_x27_3001_);
v___x_3005_ = lean_apply_12(v___f_2962_, v___x_2990_, v_e_x27_3001_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, lean_box(0));
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; 
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3006_);
if (lean_obj_tag(v_a_3006_) == 0)
{
lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3017_; 
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3017_ == 0)
{
lean_object* v_unused_3018_; 
v_unused_3018_ = lean_ctor_get(v___x_3005_, 0);
lean_dec(v_unused_3018_);
v___x_3008_ = v___x_3005_;
v_isShared_3009_ = v_isSharedCheck_3017_;
goto v_resetjp_3007_;
}
else
{
lean_dec(v___x_3005_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3017_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
uint8_t v_done_3010_; lean_object* v___x_3012_; 
v_done_3010_ = lean_ctor_get_uint8(v_a_3006_, 0);
lean_dec_ref_known(v_a_3006_, 0);
lean_inc_ref(v_e_x27_3001_);
if (v_isShared_3004_ == 0)
{
v___x_3012_ = v___x_3003_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_e_x27_3001_);
v___x_3012_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3014_; 
lean_ctor_set_uint8(v___x_3012_, sizeof(void*)*1, v_done_3010_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 0, v___x_3012_);
v___x_3014_ = v___x_3008_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
v___y_2975_ = v___x_3014_;
v_e_x27_2976_ = v_e_x27_3001_;
v_done_2977_ = v_done_3010_;
goto v___jp_2974_;
}
}
}
}
else
{
lean_object* v_e_x27_3019_; uint8_t v_done_3020_; 
lean_del_object(v___x_3003_);
lean_dec_ref(v_e_x27_3001_);
v_e_x27_3019_ = lean_ctor_get(v_a_3006_, 0);
lean_inc_ref(v_e_x27_3019_);
v_done_3020_ = lean_ctor_get_uint8(v_a_3006_, sizeof(void*)*1);
lean_dec_ref_known(v_a_3006_, 1);
v___y_2975_ = v___x_3005_;
v_e_x27_2976_ = v_e_x27_3019_;
v_done_2977_ = v_done_3020_;
goto v___jp_2974_;
}
}
else
{
lean_del_object(v___x_3003_);
lean_dec_ref(v_e_x27_3001_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
return v___x_3005_;
}
}
}
else
{
lean_dec_ref_known(v_a_2992_, 1);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec_ref(v___f_2962_);
return v___x_2991_;
}
}
}
else
{
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec_ref(v___y_2963_);
lean_dec_ref(v___f_2962_);
return v___x_2991_;
}
v___jp_2974_:
{
if (v_done_2977_ == 0)
{
lean_object* v___x_2978_; 
lean_dec_ref(v___y_2975_);
lean_inc_ref(v_e_x27_2976_);
v___x_2978_ = l_Lean_Meta_Sym_DSimp_zeta___redArg(v_e_x27_2976_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
if (lean_obj_tag(v_a_2979_) == 0)
{
lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2988_; 
lean_inc_ref(v_a_2979_);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_2988_ == 0)
{
lean_object* v_unused_2989_; 
v_unused_2989_ = lean_ctor_get(v___x_2978_, 0);
lean_dec(v_unused_2989_);
v___x_2981_ = v___x_2978_;
v_isShared_2982_ = v_isSharedCheck_2988_;
goto v_resetjp_2980_;
}
else
{
lean_dec(v___x_2978_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2988_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
uint8_t v_done_2983_; lean_object* v___x_2984_; lean_object* v___x_2986_; 
v_done_2983_ = lean_ctor_get_uint8(v_a_2979_, 0);
lean_dec_ref_known(v_a_2979_, 0);
v___x_2984_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_2984_, 0, v_e_x27_2976_);
lean_ctor_set_uint8(v___x_2984_, sizeof(void*)*1, v_done_2983_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 0, v___x_2984_);
v___x_2986_ = v___x_2981_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v___x_2984_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
else
{
lean_dec_ref(v_e_x27_2976_);
return v___x_2978_;
}
}
else
{
lean_dec_ref(v_e_x27_2976_);
return v___x_2978_;
}
}
else
{
lean_dec_ref(v_e_x27_2976_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
return v___y_2975_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__5___boxed(lean_object* v___f_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_){
_start:
{
lean_object* v_res_3034_; 
v_res_3034_ = l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__5(v___f_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods(lean_object* v_config_3041_, lean_object* v_thms_3042_){
_start:
{
uint8_t v_zetaDelta_3043_; uint8_t v_zeta_3044_; lean_object* v___f_3045_; lean_object* v_pre_3047_; lean_object* v_pre_3052_; 
v_zetaDelta_3043_ = lean_ctor_get_uint8(v_config_3041_, sizeof(void*)*18 + 19);
v_zeta_3044_ = lean_ctor_get_uint8(v_config_3041_, sizeof(void*)*18 + 20);
v___f_3045_ = ((lean_object*)(l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__1));
if (v_zeta_3044_ == 0)
{
lean_object* v_pre_3054_; 
v_pre_3054_ = ((lean_object*)(l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__2));
v_pre_3052_ = v_pre_3054_;
goto v___jp_3051_;
}
else
{
lean_object* v_pre_3055_; 
v_pre_3055_ = ((lean_object*)(l_Lean_Meta_Grind_mkNormSymDSimpMethods___closed__3));
v_pre_3052_ = v_pre_3055_;
goto v___jp_3051_;
}
v___jp_3046_:
{
lean_object* v_dsimp_3048_; lean_object* v_post_3049_; lean_object* v___x_3050_; 
v_dsimp_3048_ = lean_ctor_get(v_thms_3042_, 2);
lean_inc_ref(v_dsimp_3048_);
lean_dec_ref(v_thms_3042_);
v_post_3049_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__2___boxed), 13, 2);
lean_closure_set(v_post_3049_, 0, v_dsimp_3048_);
lean_closure_set(v_post_3049_, 1, v___f_3045_);
v___x_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3050_, 0, v_pre_3047_);
lean_ctor_set(v___x_3050_, 1, v_post_3049_);
return v___x_3050_;
}
v___jp_3051_:
{
if (v_zetaDelta_3043_ == 0)
{
lean_inc_ref(v_pre_3052_);
v_pre_3047_ = v_pre_3052_;
goto v___jp_3046_;
}
else
{
lean_object* v_pre_3053_; 
lean_inc_ref(v_pre_3052_);
v_pre_3053_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_mkNormSymDSimpMethods___lam__3___boxed), 12, 1);
lean_closure_set(v_pre_3053_, 0, v_pre_3052_);
v_pre_3047_ = v_pre_3053_;
goto v___jp_3046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkNormSymDSimpMethods___boxed(lean_object* v_config_3056_, lean_object* v_thms_3057_){
_start:
{
lean_object* v_res_3058_; 
v_res_3058_ = l_Lean_Meta_Grind_mkNormSymDSimpMethods(v_config_3056_, v_thms_3057_);
lean_dec_ref(v_config_3056_);
return v_res_3058_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___redArg(lean_object* v_e_3059_, lean_object* v___y_3060_){
_start:
{
uint8_t v___x_3062_; 
v___x_3062_ = l_Lean_Expr_hasMVar(v_e_3059_);
if (v___x_3062_ == 0)
{
lean_object* v___x_3063_; 
v___x_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3063_, 0, v_e_3059_);
return v___x_3063_;
}
else
{
lean_object* v___x_3064_; lean_object* v_mctx_3065_; lean_object* v___x_3066_; lean_object* v_fst_3067_; lean_object* v_snd_3068_; lean_object* v___x_3069_; lean_object* v_cache_3070_; lean_object* v_zetaDeltaFVarIds_3071_; lean_object* v_postponed_3072_; lean_object* v_diag_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3082_; 
v___x_3064_ = lean_st_ref_get(v___y_3060_);
v_mctx_3065_ = lean_ctor_get(v___x_3064_, 0);
lean_inc_ref(v_mctx_3065_);
lean_dec(v___x_3064_);
v___x_3066_ = l_Lean_instantiateMVarsCore(v_mctx_3065_, v_e_3059_);
v_fst_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_fst_3067_);
v_snd_3068_ = lean_ctor_get(v___x_3066_, 1);
lean_inc(v_snd_3068_);
lean_dec_ref(v___x_3066_);
v___x_3069_ = lean_st_ref_take(v___y_3060_);
v_cache_3070_ = lean_ctor_get(v___x_3069_, 1);
v_zetaDeltaFVarIds_3071_ = lean_ctor_get(v___x_3069_, 2);
v_postponed_3072_ = lean_ctor_get(v___x_3069_, 3);
v_diag_3073_ = lean_ctor_get(v___x_3069_, 4);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3082_ == 0)
{
lean_object* v_unused_3083_; 
v_unused_3083_ = lean_ctor_get(v___x_3069_, 0);
lean_dec(v_unused_3083_);
v___x_3075_ = v___x_3069_;
v_isShared_3076_ = v_isSharedCheck_3082_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_diag_3073_);
lean_inc(v_postponed_3072_);
lean_inc(v_zetaDeltaFVarIds_3071_);
lean_inc(v_cache_3070_);
lean_dec(v___x_3069_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3082_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v_snd_3068_);
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_snd_3068_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v_cache_3070_);
lean_ctor_set(v_reuseFailAlloc_3081_, 2, v_zetaDeltaFVarIds_3071_);
lean_ctor_set(v_reuseFailAlloc_3081_, 3, v_postponed_3072_);
lean_ctor_set(v_reuseFailAlloc_3081_, 4, v_diag_3073_);
v___x_3078_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3079_ = lean_st_ref_put(v___y_3060_, v___x_3078_);
v___x_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3080_, 0, v_fst_3067_);
return v___x_3080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___redArg___boxed(lean_object* v_e_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_){
_start:
{
lean_object* v_res_3087_; 
v_res_3087_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___redArg(v_e_3084_, v___y_3085_);
lean_dec(v___y_3085_);
return v_res_3087_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0(lean_object* v_e_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___redArg(v_e_3088_, v___y_3095_);
return v___x_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___boxed(lean_object* v_e_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
lean_object* v_res_3111_; 
v_res_3111_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0(v_e_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_);
lean_dec(v___y_3109_);
lean_dec_ref(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
lean_dec(v___y_3105_);
lean_dec_ref(v___y_3104_);
lean_dec(v___y_3103_);
lean_dec_ref(v___y_3102_);
lean_dec(v___y_3101_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normLegacy(lean_object* v_e_3112_, lean_object* v_a_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_){
_start:
{
lean_object* v___x_3123_; lean_object* v_a_3124_; lean_object* v___x_3125_; 
v___x_3123_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_normLegacy_spec__0___redArg(v_e_3112_, v_a_3119_);
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref(v___x_3123_);
v___x_3125_ = l_Lean_Meta_Grind_simpCore(v_a_3124_, v_a_3113_, v_a_3114_, v_a_3115_, v_a_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v_expr_3127_; lean_object* v_proof_x3f_3128_; uint8_t v_cache_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3153_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v___x_3125_, 1);
v_expr_3127_ = lean_ctor_get(v_a_3126_, 0);
v_proof_x3f_3128_ = lean_ctor_get(v_a_3126_, 1);
v_cache_3129_ = lean_ctor_get_uint8(v_a_3126_, sizeof(void*)*2);
v_isSharedCheck_3153_ = !lean_is_exclusive(v_a_3126_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3131_ = v_a_3126_;
v_isShared_3132_ = v_isSharedCheck_3153_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_proof_x3f_3128_);
lean_inc(v_expr_3127_);
lean_dec(v_a_3126_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3153_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3133_; 
v___x_3133_ = l_Lean_Meta_Grind_eraseIrrelevantMData(v_expr_3127_, v_a_3120_, v_a_3121_);
if (lean_obj_tag(v___x_3133_) == 0)
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3144_; 
v_a_3134_ = lean_ctor_get(v___x_3133_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3133_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3136_ = v___x_3133_;
v_isShared_3137_ = v_isSharedCheck_3144_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3133_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3144_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_a_3134_);
v___x_3139_ = v___x_3131_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3134_);
lean_ctor_set(v_reuseFailAlloc_3143_, 1, v_proof_x3f_3128_);
lean_ctor_set_uint8(v_reuseFailAlloc_3143_, sizeof(void*)*2, v_cache_3129_);
v___x_3139_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
lean_object* v___x_3141_; 
if (v_isShared_3137_ == 0)
{
lean_ctor_set(v___x_3136_, 0, v___x_3139_);
v___x_3141_ = v___x_3136_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v___x_3139_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_del_object(v___x_3131_);
lean_dec(v_proof_x3f_3128_);
v_a_3145_ = lean_ctor_get(v___x_3133_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3133_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3133_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3133_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
}
}
else
{
return v___x_3125_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normLegacy___boxed(lean_object* v_e_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_, lean_object* v_a_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_){
_start:
{
lean_object* v_res_3165_; 
v_res_3165_ = l_Lean_Meta_Grind_normLegacy(v_e_3154_, v_a_3155_, v_a_3156_, v_a_3157_, v_a_3158_, v_a_3159_, v_a_3160_, v_a_3161_, v_a_3162_, v_a_3163_);
lean_dec(v_a_3163_);
lean_dec_ref(v_a_3162_);
lean_dec(v_a_3161_);
lean_dec_ref(v_a_3160_);
lean_dec(v_a_3159_);
lean_dec_ref(v_a_3158_);
lean_dec(v_a_3157_);
lean_dec_ref(v_a_3156_);
lean_dec(v_a_3155_);
return v_res_3165_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_normSym___redArg___closed__0(void){
_start:
{
lean_object* v___x_3166_; 
v___x_3166_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3166_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_normSym___redArg___closed__1(void){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3167_ = lean_obj_once(&l_Lean_Meta_Grind_normSym___redArg___closed__0, &l_Lean_Meta_Grind_normSym___redArg___closed__0_once, _init_l_Lean_Meta_Grind_normSym___redArg___closed__0);
v___x_3168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3167_);
return v___x_3168_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_normSym___redArg___closed__2(void){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3169_ = lean_obj_once(&l_Lean_Meta_Grind_normSym___redArg___closed__1, &l_Lean_Meta_Grind_normSym___redArg___closed__1_once, _init_l_Lean_Meta_Grind_normSym___redArg___closed__1);
v___x_3170_ = lean_unsigned_to_nat(0u);
v___x_3171_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
lean_ctor_set(v___x_3171_, 1, v___x_3169_);
lean_ctor_set(v___x_3171_, 2, v___x_3169_);
lean_ctor_set(v___x_3171_, 3, v___x_3169_);
return v___x_3171_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_normSym___redArg___closed__3(void){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3172_ = lean_obj_once(&l_Lean_Meta_Grind_normSym___redArg___closed__1, &l_Lean_Meta_Grind_normSym___redArg___closed__1_once, _init_l_Lean_Meta_Grind_normSym___redArg___closed__1);
v___x_3173_ = lean_unsigned_to_nat(0u);
v___x_3174_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3173_);
lean_ctor_set(v___x_3174_, 1, v___x_3172_);
lean_ctor_set(v___x_3174_, 2, v___x_3172_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSym___redArg(lean_object* v_e_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_){
_start:
{
lean_object* v___x_3184_; lean_object* v_a_3185_; lean_object* v___x_3186_; 
v___x_3184_ = l_Lean_Meta_Grind_getNormSymTheorems___redArg(v_a_3182_);
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref(v___x_3184_);
v___x_3186_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_3176_);
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v_a_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
lean_inc_n(v_a_3187_, 2);
lean_dec_ref_known(v___x_3186_, 1);
lean_inc(v_a_3185_);
v___x_3188_ = l_Lean_Meta_Grind_mkNormSymMethods(v_a_3187_, v_a_3185_);
v___x_3189_ = l_Lean_Meta_Grind_mkNormSymDSimpMethods(v_a_3187_, v_a_3185_);
lean_dec(v_a_3187_);
v___x_3190_ = lean_obj_once(&l_Lean_Meta_Grind_normSym___redArg___closed__2, &l_Lean_Meta_Grind_normSym___redArg___closed__2_once, _init_l_Lean_Meta_Grind_normSym___redArg___closed__2);
v___x_3191_ = lean_obj_once(&l_Lean_Meta_Grind_normSym___redArg___closed__3, &l_Lean_Meta_Grind_normSym___redArg___closed__3_once, _init_l_Lean_Meta_Grind_normSym___redArg___closed__3);
v___x_3192_ = l_Lean_Meta_Grind_symNorm(v_e_3175_, v___x_3188_, v___x_3189_, v___x_3190_, v___x_3191_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_, v_a_3182_);
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_object* v_a_3193_; lean_object* v_fst_3194_; lean_object* v_expr_3195_; lean_object* v_proof_x3f_3196_; uint8_t v_cache_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3221_; 
v_a_3193_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_a_3193_);
lean_dec_ref_known(v___x_3192_, 1);
v_fst_3194_ = lean_ctor_get(v_a_3193_, 0);
lean_inc(v_fst_3194_);
lean_dec(v_a_3193_);
v_expr_3195_ = lean_ctor_get(v_fst_3194_, 0);
v_proof_x3f_3196_ = lean_ctor_get(v_fst_3194_, 1);
v_cache_3197_ = lean_ctor_get_uint8(v_fst_3194_, sizeof(void*)*2);
v_isSharedCheck_3221_ = !lean_is_exclusive(v_fst_3194_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3199_ = v_fst_3194_;
v_isShared_3200_ = v_isSharedCheck_3221_;
goto v_resetjp_3198_;
}
else
{
lean_inc(v_proof_x3f_3196_);
lean_inc(v_expr_3195_);
lean_dec(v_fst_3194_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3221_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
lean_object* v___x_3201_; 
v___x_3201_ = l_Lean_Meta_Grind_eraseIrrelevantMData(v_expr_3195_, v_a_3181_, v_a_3182_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3212_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3204_ = v___x_3201_;
v_isShared_3205_ = v_isSharedCheck_3212_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3201_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3212_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3207_; 
if (v_isShared_3200_ == 0)
{
lean_ctor_set(v___x_3199_, 0, v_a_3202_);
v___x_3207_ = v___x_3199_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_a_3202_);
lean_ctor_set(v_reuseFailAlloc_3211_, 1, v_proof_x3f_3196_);
lean_ctor_set_uint8(v_reuseFailAlloc_3211_, sizeof(void*)*2, v_cache_3197_);
v___x_3207_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
lean_object* v___x_3209_; 
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v___x_3207_);
v___x_3209_ = v___x_3204_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v___x_3207_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
else
{
lean_object* v_a_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3220_; 
lean_del_object(v___x_3199_);
lean_dec(v_proof_x3f_3196_);
v_a_3213_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3220_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3220_ == 0)
{
v___x_3215_ = v___x_3201_;
v_isShared_3216_ = v_isSharedCheck_3220_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_a_3213_);
lean_dec(v___x_3201_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3220_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3218_; 
if (v_isShared_3216_ == 0)
{
v___x_3218_ = v___x_3215_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v_a_3213_);
v___x_3218_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
return v___x_3218_;
}
}
}
}
}
else
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3229_; 
v_a_3222_ = lean_ctor_get(v___x_3192_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3192_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3224_ = v___x_3192_;
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v___x_3192_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3227_; 
if (v_isShared_3225_ == 0)
{
v___x_3227_ = v___x_3224_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3222_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3237_; 
lean_dec(v_a_3185_);
lean_dec_ref(v_e_3175_);
v_a_3230_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3232_ = v___x_3186_;
v_isShared_3233_ = v_isSharedCheck_3237_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_a_3230_);
lean_dec(v___x_3186_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3237_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3235_; 
if (v_isShared_3233_ == 0)
{
v___x_3235_ = v___x_3232_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v_a_3230_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSym___redArg___boxed(lean_object* v_e_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Lean_Meta_Grind_normSym___redArg(v_e_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_);
lean_dec(v_a_3245_);
lean_dec_ref(v_a_3244_);
lean_dec(v_a_3243_);
lean_dec_ref(v_a_3242_);
lean_dec(v_a_3241_);
lean_dec_ref(v_a_3240_);
lean_dec_ref(v_a_3239_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSym(lean_object* v_e_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_){
_start:
{
lean_object* v___x_3259_; 
v___x_3259_ = l_Lean_Meta_Grind_normSym___redArg(v_e_3248_, v_a_3250_, v_a_3252_, v_a_3253_, v_a_3254_, v_a_3255_, v_a_3256_, v_a_3257_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSym___boxed(lean_object* v_e_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_Lean_Meta_Grind_normSym(v_e_3260_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_, v_a_3269_);
lean_dec(v_a_3269_);
lean_dec_ref(v_a_3268_);
lean_dec(v_a_3267_);
lean_dec_ref(v_a_3266_);
lean_dec(v_a_3265_);
lean_dec_ref(v_a_3264_);
lean_dec(v_a_3263_);
lean_dec_ref(v_a_3262_);
lean_dec(v_a_3261_);
return v_res_3271_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SimpUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Arith(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_NormSymProcs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Reduce(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Norm(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_NormSym(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SimpUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Arith(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_NormSymProcs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_NormSym(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SimpUtil(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Arith(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_NormSymProcs(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Reduce(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* initialize_Init_Grind_Norm(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_NormSym(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SimpUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Arith(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_NormSymProcs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_NormSym(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_NormSym(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_NormSym(builtin);
}
#ifdef __cplusplus
}
#endif
