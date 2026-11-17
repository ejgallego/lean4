// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.DvdCnstr
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Cutsat.Types import Init.Data.Int.OfNat import Init.Grind.Propagator import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Arith.Cutsat.Var import Lean.Meta.Tactic.Grind.Arith.Cutsat.Nat import Lean.Meta.Tactic.Grind.Arith.Cutsat.Proof import Lean.Meta.Tactic.Grind.Arith.Cutsat.Norm import Lean.Meta.Tactic.Grind.Arith.Cutsat.CommRing import Lean.Meta.NatInstTesters public import Lean.Meta.Tactic.Grind.PropagatorAttr import Init.Data.Nat.Dvd
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
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Structural_isInstDvdInt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getIntValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_eagerReflBoolTrue;
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toPoly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_gcdExt(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_mul(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_combine(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_setInconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_getConst(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_bmodCoeffs(lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_instBEqPoly_beq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_div(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_gcdCoeffs(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_Poly_isSorted(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_norm(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_coeff(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Int_Internal_Linear_Poly_isUnsatDvd(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstDvdNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_natToInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Expr_norm(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 130, 109, 65, 232, 6, 169, 172)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__3_value),LEAN_SCALAR_PTR_LITERAL(77, 149, 0, 200, 120, 117, 225, 20)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__7;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "store"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__3_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assertCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assertCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Dvd"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dvd"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 71, 229, 107, 63, 192, 93, 62)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(233, 16, 181, 127, 123, 63, 3, 18)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linear"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "of_not_dvd"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__4_value),LEAN_SCALAR_PTR_LITERAL(80, 75, 231, 118, 66, 61, 134, 150)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__5_value),LEAN_SCALAR_PTR_LITERAL(57, 190, 3, 113, 15, 121, 86, 21)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__6_value),LEAN_SCALAR_PTR_LITERAL(4, 93, 162, 5, 159, 42, 23, 43)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__8;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "non-linear divisibility constraint found"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "emod_pos_of_not_dvd"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(38, 146, 134, 59, 191, 125, 100, 172)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__3;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ToInt"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "of_dvd"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__4_value),LEAN_SCALAR_PTR_LITERAL(4, 173, 245, 176, 99, 227, 18, 222)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 103, 37, 221, 182, 135, 125, 134)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_propagateDvd___regBuiltin_Lean_Meta_Grind_Arith_Cutsat_propagateDvd_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_1909565549____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_propagateDvd___regBuiltin_Lean_Meta_Grind_Arith_Cutsat_propagateDvd_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_1909565549____hygCtx___hyg_9____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(1u);
v___x_4_ = lean_nat_to_int(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0(lean_object* v_00___5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs(lean_object* v_c_9_){
_start:
{
lean_object* v_d_10_; lean_object* v_p_11_; lean_object* v_d_12_; lean_object* v___y_14_; lean_object* v___y_15_; lean_object* v___x_21_; lean_object* v___y_23_; uint8_t v___x_27_; 
v_d_10_ = lean_ctor_get(v_c_9_, 0);
v_p_11_ = lean_ctor_get(v_c_9_, 1);
v_d_12_ = lean_nat_abs(v_d_10_);
v___x_21_ = lean_unsigned_to_nat(1u);
v___x_27_ = lean_nat_dec_le(v_d_12_, v___x_21_);
if (v___x_27_ == 0)
{
if (lean_obj_tag(v_p_11_) == 0)
{
lean_object* v___x_28_; 
v___x_28_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0);
v___y_23_ = v___x_28_;
goto v___jp_22_;
}
else
{
lean_object* v_k_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v_k_29_ = lean_ctor_get(v_p_11_, 0);
v___x_30_ = lean_nat_abs(v_k_29_);
v___x_31_ = lean_nat_dec_eq(v___x_30_, v___x_21_);
lean_dec(v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v_snd_34_; lean_object* v_fst_35_; lean_object* v_fst_36_; lean_object* v___x_37_; uint8_t v___x_38_; 
lean_inc(v_d_12_);
v___x_32_ = lean_nat_to_int(v_d_12_);
v___x_33_ = l_Lean_Meta_Grind_Arith_gcdExt(v_k_29_, v___x_32_);
lean_dec(v___x_32_);
v_snd_34_ = lean_ctor_get(v___x_33_, 1);
lean_inc(v_snd_34_);
v_fst_35_ = lean_ctor_get(v___x_33_, 0);
lean_inc(v_fst_35_);
lean_dec_ref(v___x_33_);
v_fst_36_ = lean_ctor_get(v_snd_34_, 0);
lean_inc(v_fst_36_);
lean_dec(v_snd_34_);
v___x_37_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0);
v___x_38_ = lean_int_dec_eq(v_fst_35_, v___x_37_);
lean_dec(v_fst_35_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; 
lean_dec(v_fst_36_);
v___x_39_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0);
v___y_23_ = v___x_39_;
goto v___jp_22_;
}
else
{
v___y_23_ = v_fst_36_;
goto v___jp_22_;
}
}
else
{
lean_object* v___x_40_; 
v___x_40_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___closed__0);
v___y_23_ = v___x_40_;
goto v___jp_22_;
}
}
}
else
{
lean_dec(v_d_12_);
return v_c_9_;
}
v___jp_13_:
{
lean_object* v_p_16_; uint8_t v___x_17_; 
v_p_16_ = l_Int_Internal_Linear_Poly_bmodCoeffs(v_d_12_, v___y_15_);
v___x_17_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_16_, v_p_11_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
lean_inc(v_d_10_);
v___x_18_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_18_, 0, v_c_9_);
lean_ctor_set(v___x_18_, 1, v___y_14_);
v___x_19_ = lean_box(0);
v___x_20_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_20_, 0, v_d_10_);
lean_ctor_set(v___x_20_, 1, v_p_16_);
lean_ctor_set(v___x_20_, 2, v___x_18_);
lean_ctor_set(v___x_20_, 3, v___x_19_);
return v___x_20_;
}
else
{
lean_dec_ref(v_p_16_);
lean_dec(v___y_14_);
return v_c_9_;
}
}
v___jp_22_:
{
lean_object* v___x_24_; uint8_t v___x_25_; 
v___x_24_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0);
v___x_25_ = lean_int_dec_eq(v___y_23_, v___x_24_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; 
lean_inc_ref(v_p_11_);
v___x_26_ = l_Int_Internal_Linear_Poly_mul(v_p_11_, v___y_23_);
v___y_14_ = v___y_23_;
v___y_15_ = v___x_26_;
goto v___jp_13_;
}
else
{
lean_inc_ref(v_p_11_);
v___y_14_ = v___y_23_;
v___y_15_ = v_p_11_;
goto v___jp_13_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(0u);
v___x_42_ = lean_nat_to_int(v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm(lean_object* v_c_43_){
_start:
{
lean_object* v___y_45_; lean_object* v___y_46_; lean_object* v___y_47_; lean_object* v___y_48_; lean_object* v___y_49_; lean_object* v___y_64_; lean_object* v_d_65_; lean_object* v_p_66_; lean_object* v_d_71_; lean_object* v_p_72_; uint8_t v___x_73_; 
v_d_71_ = lean_ctor_get(v_c_43_, 0);
lean_inc(v_d_71_);
v_p_72_ = lean_ctor_get(v_c_43_, 1);
v___x_73_ = l_Int_Internal_Linear_Poly_isSorted(v_p_72_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
lean_inc_ref(v_p_72_);
v___x_74_ = l_Int_Internal_Linear_Poly_norm(v_p_72_);
v___x_75_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_75_, 0, v_c_43_);
v___x_76_ = lean_box(0);
lean_inc_ref(v___x_74_);
lean_inc(v_d_71_);
v___x_77_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_77_, 0, v_d_71_);
lean_ctor_set(v___x_77_, 1, v___x_74_);
lean_ctor_set(v___x_77_, 2, v___x_75_);
lean_ctor_set(v___x_77_, 3, v___x_76_);
v___y_64_ = v___x_77_;
v_d_65_ = v_d_71_;
v_p_66_ = v___x_74_;
goto v___jp_63_;
}
else
{
lean_inc_ref(v_p_72_);
v___y_64_ = v_c_43_;
v_d_65_ = v_d_71_;
v_p_66_ = v_p_72_;
goto v___jp_63_;
}
v___jp_44_:
{
lean_object* v___x_50_; lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_50_ = l_Int_Internal_Linear_Poly_getConst(v___y_47_);
v___x_51_ = lean_int_emod(v___x_50_, v___y_49_);
lean_dec(v___x_50_);
v___x_52_ = lean_int_dec_eq(v___x_51_, v___y_46_);
lean_dec(v___x_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; 
lean_dec(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
v___x_53_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs(v___y_45_);
return v___x_53_;
}
else
{
lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_54_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs___lam__0___closed__0);
v___x_55_ = lean_int_dec_eq(v___y_49_, v___x_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_56_ = lean_int_ediv(v___y_48_, v___y_49_);
lean_dec(v___y_48_);
v___x_57_ = l_Int_Internal_Linear_Poly_div(v___y_49_, v___y_47_);
lean_dec(v___y_49_);
v___x_58_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_58_, 0, v___y_45_);
v___x_59_ = lean_box(0);
v___x_60_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_60_, 0, v___x_56_);
lean_ctor_set(v___x_60_, 1, v___x_57_);
lean_ctor_set(v___x_60_, 2, v___x_58_);
lean_ctor_set(v___x_60_, 3, v___x_59_);
v___x_61_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs(v___x_60_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; 
lean_dec(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
v___x_62_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_bmodCoeffs(v___y_45_);
return v___x_62_;
}
}
}
v___jp_63_:
{
lean_object* v_g_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
lean_inc(v_d_65_);
v_g_67_ = l_Int_Internal_Linear_Poly_gcdCoeffs(v_p_66_, v_d_65_);
v___x_68_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0);
v___x_69_ = lean_int_dec_lt(v_d_65_, v___x_68_);
if (v___x_69_ == 0)
{
v___y_45_ = v___y_64_;
v___y_46_ = v___x_68_;
v___y_47_ = v_p_66_;
v___y_48_ = v_d_65_;
v___y_49_ = v_g_67_;
goto v___jp_44_;
}
else
{
lean_object* v___x_70_; 
v___x_70_ = lean_int_neg(v_g_67_);
lean_dec(v_g_67_);
v___y_45_ = v___y_64_;
v___y_46_ = v___x_68_;
v___y_47_ = v_p_66_;
v___y_48_ = v_d_65_;
v___y_49_ = v___x_70_;
goto v___jp_44_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0_spec__0(lean_object* v_msgData_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; lean_object* v_env_85_; uint8_t v___x_86_; lean_object* v_env_87_; lean_object* v___x_88_; lean_object* v_toCold_89_; lean_object* v_mctx_90_; lean_object* v_lctx_91_; lean_object* v_options_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_84_ = lean_st_ref_get(v___y_82_);
v_env_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc_ref(v_env_85_);
lean_dec(v___x_84_);
v___x_86_ = 0;
v_env_87_ = l_Lean_Environment_setRecordingDeps(v_env_85_, v___x_86_);
v___x_88_ = lean_st_ref_get(v___y_80_);
v_toCold_89_ = lean_ctor_get(v___y_81_, 0);
v_mctx_90_ = lean_ctor_get(v___x_88_, 0);
lean_inc_ref(v_mctx_90_);
lean_dec(v___x_88_);
v_lctx_91_ = lean_ctor_get(v___y_79_, 2);
v_options_92_ = lean_ctor_get(v_toCold_89_, 2);
lean_inc_ref(v_options_92_);
lean_inc_ref(v_lctx_91_);
v___x_93_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_93_, 0, v_env_87_);
lean_ctor_set(v___x_93_, 1, v_mctx_90_);
lean_ctor_set(v___x_93_, 2, v_lctx_91_);
lean_ctor_set(v___x_93_, 3, v_options_92_);
v___x_94_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set(v___x_94_, 1, v_msgData_78_);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0_spec__0___boxed(lean_object* v_msgData_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0_spec__0(v_msgData_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
return v_res_102_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_103_; double v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_float_of_nat(v___x_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(lean_object* v_cls_108_, lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_ref_115_; lean_object* v___x_116_; lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_162_; 
v_ref_115_ = lean_ctor_get(v___y_112_, 2);
v___x_116_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0_spec__0(v_msg_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_162_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_162_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_162_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v_traceState_122_; lean_object* v_env_123_; lean_object* v_nextMacroScope_124_; lean_object* v_ngen_125_; lean_object* v_auxDeclNGen_126_; lean_object* v_cache_127_; lean_object* v_recordedDeps_128_; lean_object* v_messages_129_; lean_object* v_infoState_130_; lean_object* v_snapshotTasks_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_161_; 
v___x_121_ = lean_st_ref_take(v___y_113_);
v_traceState_122_ = lean_ctor_get(v___x_121_, 4);
v_env_123_ = lean_ctor_get(v___x_121_, 0);
v_nextMacroScope_124_ = lean_ctor_get(v___x_121_, 1);
v_ngen_125_ = lean_ctor_get(v___x_121_, 2);
v_auxDeclNGen_126_ = lean_ctor_get(v___x_121_, 3);
v_cache_127_ = lean_ctor_get(v___x_121_, 5);
v_recordedDeps_128_ = lean_ctor_get(v___x_121_, 6);
v_messages_129_ = lean_ctor_get(v___x_121_, 7);
v_infoState_130_ = lean_ctor_get(v___x_121_, 8);
v_snapshotTasks_131_ = lean_ctor_get(v___x_121_, 9);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_161_ == 0)
{
v___x_133_ = v___x_121_;
v_isShared_134_ = v_isSharedCheck_161_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_snapshotTasks_131_);
lean_inc(v_infoState_130_);
lean_inc(v_messages_129_);
lean_inc(v_recordedDeps_128_);
lean_inc(v_cache_127_);
lean_inc(v_traceState_122_);
lean_inc(v_auxDeclNGen_126_);
lean_inc(v_ngen_125_);
lean_inc(v_nextMacroScope_124_);
lean_inc(v_env_123_);
lean_dec(v___x_121_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_161_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
uint64_t v_tid_135_; lean_object* v_traces_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_160_; 
v_tid_135_ = lean_ctor_get_uint64(v_traceState_122_, sizeof(void*)*1);
v_traces_136_ = lean_ctor_get(v_traceState_122_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v_traceState_122_);
if (v_isSharedCheck_160_ == 0)
{
v___x_138_ = v_traceState_122_;
v_isShared_139_ = v_isSharedCheck_160_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_traces_136_);
lean_dec(v_traceState_122_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_160_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_140_; lean_object* v___x_141_; double v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_151_; 
v___x_140_ = lean_box(0);
v___x_141_ = lean_box(0);
v___x_142_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__0);
v___x_143_ = 0;
v___x_144_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__1));
v___x_145_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_145_, 0, v_cls_108_);
lean_ctor_set(v___x_145_, 1, v___x_141_);
lean_ctor_set(v___x_145_, 2, v___x_144_);
lean_ctor_set_float(v___x_145_, sizeof(void*)*3, v___x_142_);
lean_ctor_set_float(v___x_145_, sizeof(void*)*3 + 8, v___x_142_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*3 + 16, v___x_143_);
v___x_146_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___closed__2));
v___x_147_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set(v___x_147_, 1, v_a_117_);
lean_ctor_set(v___x_147_, 2, v___x_146_);
lean_inc(v_ref_115_);
v___x_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_148_, 0, v_ref_115_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = l_Lean_PersistentArray_push___redArg(v_traces_136_, v___x_148_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 0, v___x_149_);
v___x_151_ = v___x_138_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_149_);
lean_ctor_set_uint64(v_reuseFailAlloc_159_, sizeof(void*)*1, v_tid_135_);
v___x_151_ = v_reuseFailAlloc_159_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_153_; 
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 4, v___x_151_);
v___x_153_ = v___x_133_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_env_123_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v_nextMacroScope_124_);
lean_ctor_set(v_reuseFailAlloc_158_, 2, v_ngen_125_);
lean_ctor_set(v_reuseFailAlloc_158_, 3, v_auxDeclNGen_126_);
lean_ctor_set(v_reuseFailAlloc_158_, 4, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_158_, 5, v_cache_127_);
lean_ctor_set(v_reuseFailAlloc_158_, 6, v_recordedDeps_128_);
lean_ctor_set(v_reuseFailAlloc_158_, 7, v_messages_129_);
lean_ctor_set(v_reuseFailAlloc_158_, 8, v_infoState_130_);
lean_ctor_set(v_reuseFailAlloc_158_, 9, v_snapshotTasks_131_);
v___x_153_ = v_reuseFailAlloc_158_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_154_ = lean_st_ref_put(v___y_113_, v___x_153_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_140_);
v___x_156_ = v___x_119_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_140_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg___boxed(lean_object* v_cls_163_, lean_object* v_msg_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(v_cls_163_, v_msg_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
return v_res_170_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__7(void){
_start:
{
lean_object* v_cls_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v_cls_183_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4));
v___x_184_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__6));
v___x_185_ = l_Lean_Name_append(v___x_184_, v_cls_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__9(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__8));
v___x_188_ = l_Lean_stringToMessageData(v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq(lean_object* v_a_189_, lean_object* v_x_190_, lean_object* v_c_u2081_191_, lean_object* v_b_192_, lean_object* v_c_u2082_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_toCold_205_; lean_object* v_options_206_; lean_object* v_p_207_; lean_object* v_d_208_; lean_object* v_p_209_; lean_object* v_inheritedTraceOptions_210_; uint8_t v_hasTrace_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v_d_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v_p_218_; 
v_toCold_205_ = lean_ctor_get(v_a_202_, 0);
v_options_206_ = lean_ctor_get(v_toCold_205_, 2);
v_p_207_ = lean_ctor_get(v_c_u2081_191_, 0);
v_d_208_ = lean_ctor_get(v_c_u2082_193_, 0);
v_p_209_ = lean_ctor_get(v_c_u2082_193_, 1);
v_inheritedTraceOptions_210_ = lean_ctor_get(v_toCold_205_, 11);
v_hasTrace_211_ = lean_ctor_get_uint8(v_options_206_, sizeof(void*)*1);
v___x_212_ = lean_int_mul(v_a_189_, v_d_208_);
v___x_213_ = lean_nat_abs(v___x_212_);
lean_dec(v___x_212_);
v_d_214_ = lean_nat_to_int(v___x_213_);
lean_inc_ref(v_p_209_);
v___x_215_ = l_Int_Internal_Linear_Poly_mul(v_p_209_, v_a_189_);
v___x_216_ = lean_int_neg(v_b_192_);
lean_inc_ref(v_p_207_);
v___x_217_ = l_Int_Internal_Linear_Poly_mul(v_p_207_, v___x_216_);
lean_dec(v___x_216_);
v_p_218_ = l_Int_Internal_Linear_Poly_combine(v___x_215_, v___x_217_);
if (v_hasTrace_211_ == 0)
{
goto v___jp_219_;
}
else
{
lean_object* v_cls_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v_cls_224_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__4));
v___x_225_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__7, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__7_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__7);
v___x_226_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_210_, v_options_206_, v___x_225_);
if (v___x_226_ == 0)
{
goto v___jp_219_;
}
else
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_x_190_, v_a_194_, v_a_202_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_229_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_227_, 1);
lean_inc_ref(v_c_u2081_191_);
v___x_229_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_u2081_191_, v_a_194_, v_a_202_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v___x_231_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc(v_a_230_);
lean_dec_ref_known(v___x_229_, 1);
lean_inc_ref(v_c_u2082_193_);
v___x_231_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_u2082_193_, v_a_194_, v_a_202_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_a_232_);
lean_dec_ref_known(v___x_231_, 1);
v___x_233_ = l_Lean_MessageData_ofExpr(v_a_228_);
v___x_234_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__9);
v___x_235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_233_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v_a_230_);
v___x_237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v___x_234_);
v___x_238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v_a_232_);
v___x_239_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(v_cls_224_, v___x_238_, v_a_200_, v_a_201_, v_a_202_, v_a_203_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_dec_ref_known(v___x_239_, 1);
goto v___jp_219_;
}
else
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
lean_dec_ref(v_p_218_);
lean_dec(v_d_214_);
lean_dec_ref(v_c_u2082_193_);
lean_dec_ref(v_c_u2081_191_);
lean_dec(v_x_190_);
v_a_240_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v___x_239_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_239_);
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
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
lean_dec(v_a_230_);
lean_dec(v_a_228_);
lean_dec_ref(v_p_218_);
lean_dec(v_d_214_);
lean_dec_ref(v_c_u2082_193_);
lean_dec_ref(v_c_u2081_191_);
lean_dec(v_x_190_);
v_a_248_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_231_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_231_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_dec(v_a_228_);
lean_dec_ref(v_p_218_);
lean_dec(v_d_214_);
lean_dec_ref(v_c_u2082_193_);
lean_dec_ref(v_c_u2081_191_);
lean_dec(v_x_190_);
v_a_256_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_229_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_229_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v_p_218_);
lean_dec(v_d_214_);
lean_dec_ref(v_c_u2082_193_);
lean_dec_ref(v_c_u2081_191_);
lean_dec(v_x_190_);
v_a_264_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_227_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_227_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
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
v___jp_219_:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_220_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_220_, 0, v_x_190_);
lean_ctor_set(v___x_220_, 1, v_c_u2081_191_);
lean_ctor_set(v___x_220_, 2, v_c_u2082_193_);
v___x_221_ = lean_box(0);
v___x_222_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_222_, 0, v_d_214_);
lean_ctor_set(v___x_222_, 1, v_p_218_);
lean_ctor_set(v___x_222_, 2, v___x_220_);
lean_ctor_set(v___x_222_, 3, v___x_221_);
v___x_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
return v___x_223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___boxed(lean_object* v_a_272_, lean_object* v_x_273_, lean_object* v_c_u2081_274_, lean_object* v_b_275_, lean_object* v_c_u2082_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq(v_a_272_, v_x_273_, v_c_u2081_274_, v_b_275_, v_c_u2082_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_, v_a_286_);
lean_dec(v_a_286_);
lean_dec_ref(v_a_285_);
lean_dec(v_a_284_);
lean_dec_ref(v_a_283_);
lean_dec(v_a_282_);
lean_dec_ref(v_a_281_);
lean_dec(v_a_280_);
lean_dec_ref(v_a_279_);
lean_dec(v_a_278_);
lean_dec(v_a_277_);
lean_dec(v_b_275_);
lean_dec(v_a_272_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0(lean_object* v_cls_289_, lean_object* v_msg_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(v_cls_289_, v_msg_290_, v___y_297_, v___y_298_, v___y_299_, v___y_300_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___boxed(lean_object* v_cls_303_, lean_object* v_msg_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0(v_cls_303_, v_msg_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v___y_306_);
lean_dec(v___y_305_);
return v_res_316_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = l_Lean_maxRecDepthErrorMessage;
v___x_323_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__3);
v___x_325_ = l_Lean_MessageData_ofFormat(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__4);
v___x_327_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__2));
v___x_328_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___x_326_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg(lean_object* v_ref_329_){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___closed__5);
v___x_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_332_, 0, v_ref_329_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg___boxed(lean_object* v_ref_334_, lean_object* v___y_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg(v_ref_334_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0(lean_object* v_00_u03b1_337_, lean_object* v_ref_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg(v_ref_338_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___boxed(lean_object* v_00_u03b1_351_, lean_object* v_ref_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0(v_00_u03b1_351_, v_ref_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec(v___y_353_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts(lean_object* v_c_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_p_377_; lean_object* v_toCold_378_; lean_object* v_currRecDepth_379_; lean_object* v_ref_380_; uint16_t v_optionFlags_381_; uint8_t v_suppressElabErrors_382_; uint8_t v_checkDeprecated_383_; uint8_t v_isRecordingDeps_384_; lean_object* v_maxRecDepth_416_; lean_object* v___x_417_; uint8_t v___x_418_; 
v_p_377_ = lean_ctor_get(v_c_365_, 1);
v_toCold_378_ = lean_ctor_get(v_a_374_, 0);
lean_inc_ref(v_toCold_378_);
v_currRecDepth_379_ = lean_ctor_get(v_a_374_, 1);
lean_inc(v_currRecDepth_379_);
v_ref_380_ = lean_ctor_get(v_a_374_, 2);
lean_inc(v_ref_380_);
v_optionFlags_381_ = lean_ctor_get_uint16(v_a_374_, sizeof(void*)*3);
v_suppressElabErrors_382_ = lean_ctor_get_uint8(v_a_374_, sizeof(void*)*3 + 2);
v_checkDeprecated_383_ = lean_ctor_get_uint8(v_a_374_, sizeof(void*)*3 + 3);
v_isRecordingDeps_384_ = lean_ctor_get_uint8(v_a_374_, sizeof(void*)*3 + 4);
lean_dec_ref(v_a_374_);
v_maxRecDepth_416_ = lean_ctor_get(v_toCold_378_, 3);
v___x_417_ = lean_unsigned_to_nat(0u);
v___x_418_ = lean_nat_dec_eq(v_maxRecDepth_416_, v___x_417_);
if (v___x_418_ == 0)
{
uint8_t v___x_419_; 
v___x_419_ = lean_nat_dec_eq(v_currRecDepth_379_, v_maxRecDepth_416_);
if (v___x_419_ == 0)
{
goto v___jp_385_;
}
else
{
lean_object* v___x_420_; 
lean_dec(v_currRecDepth_379_);
lean_dec_ref(v_toCold_378_);
lean_dec_ref(v_c_365_);
v___x_420_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg(v_ref_380_);
return v___x_420_;
}
}
else
{
goto v___jp_385_;
}
v___jp_385_:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_386_ = lean_unsigned_to_nat(1u);
v___x_387_ = lean_nat_add(v_currRecDepth_379_, v___x_386_);
lean_dec(v_currRecDepth_379_);
v___x_388_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_388_, 0, v_toCold_378_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
lean_ctor_set(v___x_388_, 2, v_ref_380_);
lean_ctor_set_uint16(v___x_388_, sizeof(void*)*3, v_optionFlags_381_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*3 + 2, v_suppressElabErrors_382_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*3 + 3, v_checkDeprecated_383_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*3 + 4, v_isRecordingDeps_384_);
lean_inc_ref(v_p_377_);
v___x_389_ = l_Int_Internal_Linear_Poly_findVarToSubst___redArg(v_p_377_, v_a_366_, v___x_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_407_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_407_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_407_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_407_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
if (lean_obj_tag(v_a_390_) == 1)
{
lean_object* v_val_394_; lean_object* v_snd_395_; lean_object* v_snd_396_; lean_object* v_fst_397_; lean_object* v_fst_398_; lean_object* v_p_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
lean_del_object(v___x_392_);
v_val_394_ = lean_ctor_get(v_a_390_, 0);
lean_inc(v_val_394_);
lean_dec_ref_known(v_a_390_, 1);
v_snd_395_ = lean_ctor_get(v_val_394_, 1);
lean_inc(v_snd_395_);
v_snd_396_ = lean_ctor_get(v_snd_395_, 1);
lean_inc(v_snd_396_);
v_fst_397_ = lean_ctor_get(v_val_394_, 0);
lean_inc(v_fst_397_);
lean_dec(v_val_394_);
v_fst_398_ = lean_ctor_get(v_snd_395_, 0);
lean_inc(v_fst_398_);
lean_dec(v_snd_395_);
v_p_399_ = lean_ctor_get(v_snd_396_, 0);
v___x_400_ = l_Int_Internal_Linear_Poly_coeff(v_p_399_, v_fst_398_);
v___x_401_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq(v___x_400_, v_fst_398_, v_snd_396_, v_fst_397_, v_c_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v___x_388_, v_a_375_);
lean_dec(v_fst_397_);
lean_dec(v___x_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref_known(v___x_401_, 1);
v_c_365_ = v_a_402_;
v_a_374_ = v___x_388_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_388_, 3);
return v___x_401_;
}
}
else
{
lean_object* v___x_405_; 
lean_dec(v_a_390_);
lean_dec_ref_known(v___x_388_, 3);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v_c_365_);
v___x_405_ = v___x_392_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_c_365_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec_ref_known(v___x_388_, 3);
lean_dec_ref(v_c_365_);
v_a_408_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_389_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_389_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts___boxed(lean_object* v_c_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts(v_c_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_);
lean_dec(v_a_431_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec(v_a_422_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__0(lean_object* v_a_434_, lean_object* v_v_435_, lean_object* v_s_436_){
_start:
{
lean_object* v_vars_437_; lean_object* v_varMap_438_; lean_object* v_varsHistory_439_; lean_object* v_natToIntMap_440_; lean_object* v_natDef_441_; lean_object* v_dvds_442_; lean_object* v_lowers_443_; lean_object* v_uppers_444_; lean_object* v_diseqs_445_; lean_object* v_elimEqs_446_; lean_object* v_active_447_; lean_object* v_elimStack_448_; lean_object* v_occurs_449_; lean_object* v_assignment_450_; lean_object* v_nextCnstrId_451_; uint8_t v_caseSplits_452_; lean_object* v_steps_453_; lean_object* v_penalties_454_; lean_object* v_numReorderRequests_455_; lean_object* v_conflict_x3f_456_; lean_object* v_diseqSplits_457_; lean_object* v_divMod_458_; uint8_t v_usedCommRing_459_; lean_object* v_nonlinearOccs_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_469_; 
v_vars_437_ = lean_ctor_get(v_s_436_, 0);
v_varMap_438_ = lean_ctor_get(v_s_436_, 1);
v_varsHistory_439_ = lean_ctor_get(v_s_436_, 2);
v_natToIntMap_440_ = lean_ctor_get(v_s_436_, 3);
v_natDef_441_ = lean_ctor_get(v_s_436_, 4);
v_dvds_442_ = lean_ctor_get(v_s_436_, 5);
v_lowers_443_ = lean_ctor_get(v_s_436_, 6);
v_uppers_444_ = lean_ctor_get(v_s_436_, 7);
v_diseqs_445_ = lean_ctor_get(v_s_436_, 8);
v_elimEqs_446_ = lean_ctor_get(v_s_436_, 9);
v_active_447_ = lean_ctor_get(v_s_436_, 10);
v_elimStack_448_ = lean_ctor_get(v_s_436_, 11);
v_occurs_449_ = lean_ctor_get(v_s_436_, 12);
v_assignment_450_ = lean_ctor_get(v_s_436_, 13);
v_nextCnstrId_451_ = lean_ctor_get(v_s_436_, 14);
v_caseSplits_452_ = lean_ctor_get_uint8(v_s_436_, sizeof(void*)*22);
v_steps_453_ = lean_ctor_get(v_s_436_, 15);
v_penalties_454_ = lean_ctor_get(v_s_436_, 16);
v_numReorderRequests_455_ = lean_ctor_get(v_s_436_, 17);
v_conflict_x3f_456_ = lean_ctor_get(v_s_436_, 18);
v_diseqSplits_457_ = lean_ctor_get(v_s_436_, 19);
v_divMod_458_ = lean_ctor_get(v_s_436_, 20);
v_usedCommRing_459_ = lean_ctor_get_uint8(v_s_436_, sizeof(void*)*22 + 1);
v_nonlinearOccs_460_ = lean_ctor_get(v_s_436_, 21);
v_isSharedCheck_469_ = !lean_is_exclusive(v_s_436_);
if (v_isSharedCheck_469_ == 0)
{
v___x_462_ = v_s_436_;
v_isShared_463_ = v_isSharedCheck_469_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_nonlinearOccs_460_);
lean_inc(v_divMod_458_);
lean_inc(v_diseqSplits_457_);
lean_inc(v_conflict_x3f_456_);
lean_inc(v_numReorderRequests_455_);
lean_inc(v_penalties_454_);
lean_inc(v_steps_453_);
lean_inc(v_nextCnstrId_451_);
lean_inc(v_assignment_450_);
lean_inc(v_occurs_449_);
lean_inc(v_elimStack_448_);
lean_inc(v_active_447_);
lean_inc(v_elimEqs_446_);
lean_inc(v_diseqs_445_);
lean_inc(v_uppers_444_);
lean_inc(v_lowers_443_);
lean_inc(v_dvds_442_);
lean_inc(v_natDef_441_);
lean_inc(v_natToIntMap_440_);
lean_inc(v_varsHistory_439_);
lean_inc(v_varMap_438_);
lean_inc(v_vars_437_);
lean_dec(v_s_436_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_469_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_464_, 0, v_a_434_);
v___x_465_ = l_Lean_PersistentArray_set___redArg(v_dvds_442_, v_v_435_, v___x_464_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 5, v___x_465_);
v___x_467_ = v___x_462_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_vars_437_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_varMap_438_);
lean_ctor_set(v_reuseFailAlloc_468_, 2, v_varsHistory_439_);
lean_ctor_set(v_reuseFailAlloc_468_, 3, v_natToIntMap_440_);
lean_ctor_set(v_reuseFailAlloc_468_, 4, v_natDef_441_);
lean_ctor_set(v_reuseFailAlloc_468_, 5, v___x_465_);
lean_ctor_set(v_reuseFailAlloc_468_, 6, v_lowers_443_);
lean_ctor_set(v_reuseFailAlloc_468_, 7, v_uppers_444_);
lean_ctor_set(v_reuseFailAlloc_468_, 8, v_diseqs_445_);
lean_ctor_set(v_reuseFailAlloc_468_, 9, v_elimEqs_446_);
lean_ctor_set(v_reuseFailAlloc_468_, 10, v_active_447_);
lean_ctor_set(v_reuseFailAlloc_468_, 11, v_elimStack_448_);
lean_ctor_set(v_reuseFailAlloc_468_, 12, v_occurs_449_);
lean_ctor_set(v_reuseFailAlloc_468_, 13, v_assignment_450_);
lean_ctor_set(v_reuseFailAlloc_468_, 14, v_nextCnstrId_451_);
lean_ctor_set(v_reuseFailAlloc_468_, 15, v_steps_453_);
lean_ctor_set(v_reuseFailAlloc_468_, 16, v_penalties_454_);
lean_ctor_set(v_reuseFailAlloc_468_, 17, v_numReorderRequests_455_);
lean_ctor_set(v_reuseFailAlloc_468_, 18, v_conflict_x3f_456_);
lean_ctor_set(v_reuseFailAlloc_468_, 19, v_diseqSplits_457_);
lean_ctor_set(v_reuseFailAlloc_468_, 20, v_divMod_458_);
lean_ctor_set(v_reuseFailAlloc_468_, 21, v_nonlinearOccs_460_);
lean_ctor_set_uint8(v_reuseFailAlloc_468_, sizeof(void*)*22, v_caseSplits_452_);
lean_ctor_set_uint8(v_reuseFailAlloc_468_, sizeof(void*)*22 + 1, v_usedCommRing_459_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__0___boxed(lean_object* v_a_470_, lean_object* v_v_471_, lean_object* v_s_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__0(v_a_470_, v_v_471_, v_s_472_);
lean_dec(v_v_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__1(lean_object* v_v_474_, lean_object* v_s_475_){
_start:
{
lean_object* v_vars_476_; lean_object* v_varMap_477_; lean_object* v_varsHistory_478_; lean_object* v_natToIntMap_479_; lean_object* v_natDef_480_; lean_object* v_dvds_481_; lean_object* v_lowers_482_; lean_object* v_uppers_483_; lean_object* v_diseqs_484_; lean_object* v_elimEqs_485_; lean_object* v_active_486_; lean_object* v_elimStack_487_; lean_object* v_occurs_488_; lean_object* v_assignment_489_; lean_object* v_nextCnstrId_490_; uint8_t v_caseSplits_491_; lean_object* v_steps_492_; lean_object* v_penalties_493_; lean_object* v_numReorderRequests_494_; lean_object* v_conflict_x3f_495_; lean_object* v_diseqSplits_496_; lean_object* v_divMod_497_; uint8_t v_usedCommRing_498_; lean_object* v_nonlinearOccs_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_508_; 
v_vars_476_ = lean_ctor_get(v_s_475_, 0);
v_varMap_477_ = lean_ctor_get(v_s_475_, 1);
v_varsHistory_478_ = lean_ctor_get(v_s_475_, 2);
v_natToIntMap_479_ = lean_ctor_get(v_s_475_, 3);
v_natDef_480_ = lean_ctor_get(v_s_475_, 4);
v_dvds_481_ = lean_ctor_get(v_s_475_, 5);
v_lowers_482_ = lean_ctor_get(v_s_475_, 6);
v_uppers_483_ = lean_ctor_get(v_s_475_, 7);
v_diseqs_484_ = lean_ctor_get(v_s_475_, 8);
v_elimEqs_485_ = lean_ctor_get(v_s_475_, 9);
v_active_486_ = lean_ctor_get(v_s_475_, 10);
v_elimStack_487_ = lean_ctor_get(v_s_475_, 11);
v_occurs_488_ = lean_ctor_get(v_s_475_, 12);
v_assignment_489_ = lean_ctor_get(v_s_475_, 13);
v_nextCnstrId_490_ = lean_ctor_get(v_s_475_, 14);
v_caseSplits_491_ = lean_ctor_get_uint8(v_s_475_, sizeof(void*)*22);
v_steps_492_ = lean_ctor_get(v_s_475_, 15);
v_penalties_493_ = lean_ctor_get(v_s_475_, 16);
v_numReorderRequests_494_ = lean_ctor_get(v_s_475_, 17);
v_conflict_x3f_495_ = lean_ctor_get(v_s_475_, 18);
v_diseqSplits_496_ = lean_ctor_get(v_s_475_, 19);
v_divMod_497_ = lean_ctor_get(v_s_475_, 20);
v_usedCommRing_498_ = lean_ctor_get_uint8(v_s_475_, sizeof(void*)*22 + 1);
v_nonlinearOccs_499_ = lean_ctor_get(v_s_475_, 21);
v_isSharedCheck_508_ = !lean_is_exclusive(v_s_475_);
if (v_isSharedCheck_508_ == 0)
{
v___x_501_ = v_s_475_;
v_isShared_502_ = v_isSharedCheck_508_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_nonlinearOccs_499_);
lean_inc(v_divMod_497_);
lean_inc(v_diseqSplits_496_);
lean_inc(v_conflict_x3f_495_);
lean_inc(v_numReorderRequests_494_);
lean_inc(v_penalties_493_);
lean_inc(v_steps_492_);
lean_inc(v_nextCnstrId_490_);
lean_inc(v_assignment_489_);
lean_inc(v_occurs_488_);
lean_inc(v_elimStack_487_);
lean_inc(v_active_486_);
lean_inc(v_elimEqs_485_);
lean_inc(v_diseqs_484_);
lean_inc(v_uppers_483_);
lean_inc(v_lowers_482_);
lean_inc(v_dvds_481_);
lean_inc(v_natDef_480_);
lean_inc(v_natToIntMap_479_);
lean_inc(v_varsHistory_478_);
lean_inc(v_varMap_477_);
lean_inc(v_vars_476_);
lean_dec(v_s_475_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_508_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_503_ = lean_box(0);
v___x_504_ = l_Lean_PersistentArray_set___redArg(v_dvds_481_, v_v_474_, v___x_503_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 5, v___x_504_);
v___x_506_ = v___x_501_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_vars_476_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_varMap_477_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v_varsHistory_478_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_natToIntMap_479_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_natDef_480_);
lean_ctor_set(v_reuseFailAlloc_507_, 5, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_507_, 6, v_lowers_482_);
lean_ctor_set(v_reuseFailAlloc_507_, 7, v_uppers_483_);
lean_ctor_set(v_reuseFailAlloc_507_, 8, v_diseqs_484_);
lean_ctor_set(v_reuseFailAlloc_507_, 9, v_elimEqs_485_);
lean_ctor_set(v_reuseFailAlloc_507_, 10, v_active_486_);
lean_ctor_set(v_reuseFailAlloc_507_, 11, v_elimStack_487_);
lean_ctor_set(v_reuseFailAlloc_507_, 12, v_occurs_488_);
lean_ctor_set(v_reuseFailAlloc_507_, 13, v_assignment_489_);
lean_ctor_set(v_reuseFailAlloc_507_, 14, v_nextCnstrId_490_);
lean_ctor_set(v_reuseFailAlloc_507_, 15, v_steps_492_);
lean_ctor_set(v_reuseFailAlloc_507_, 16, v_penalties_493_);
lean_ctor_set(v_reuseFailAlloc_507_, 17, v_numReorderRequests_494_);
lean_ctor_set(v_reuseFailAlloc_507_, 18, v_conflict_x3f_495_);
lean_ctor_set(v_reuseFailAlloc_507_, 19, v_diseqSplits_496_);
lean_ctor_set(v_reuseFailAlloc_507_, 20, v_divMod_497_);
lean_ctor_set(v_reuseFailAlloc_507_, 21, v_nonlinearOccs_499_);
lean_ctor_set_uint8(v_reuseFailAlloc_507_, sizeof(void*)*22, v_caseSplits_491_);
lean_ctor_set_uint8(v_reuseFailAlloc_507_, sizeof(void*)*22 + 1, v_usedCommRing_498_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__1___boxed(lean_object* v_v_509_, lean_object* v_s_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__1(v_v_509_, v_s_510_);
lean_dec(v_v_509_);
return v_res_511_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__5(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_520_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4));
v___x_521_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__6));
v___x_522_ = l_Lean_Name_append(v___x_521_, v___x_520_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert(lean_object* v_c_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_){
_start:
{
lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_548_; lean_object* v___y_549_; lean_object* v___y_550_; lean_object* v___y_551_; lean_object* v___y_552_; lean_object* v___y_553_; lean_object* v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v_toCold_688_; lean_object* v_currRecDepth_689_; lean_object* v_ref_690_; uint16_t v_optionFlags_691_; uint8_t v_suppressElabErrors_692_; uint8_t v_checkDeprecated_693_; uint8_t v_isRecordingDeps_694_; lean_object* v_options_695_; lean_object* v_maxRecDepth_696_; lean_object* v_inheritedTraceOptions_697_; lean_object* v___x_698_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___x_870_; uint8_t v___x_871_; 
v_toCold_688_ = lean_ctor_get(v_a_532_, 0);
lean_inc_ref(v_toCold_688_);
v_currRecDepth_689_ = lean_ctor_get(v_a_532_, 1);
lean_inc(v_currRecDepth_689_);
v_ref_690_ = lean_ctor_get(v_a_532_, 2);
lean_inc(v_ref_690_);
v_optionFlags_691_ = lean_ctor_get_uint16(v_a_532_, sizeof(void*)*3);
v_suppressElabErrors_692_ = lean_ctor_get_uint8(v_a_532_, sizeof(void*)*3 + 2);
v_checkDeprecated_693_ = lean_ctor_get_uint8(v_a_532_, sizeof(void*)*3 + 3);
v_isRecordingDeps_694_ = lean_ctor_get_uint8(v_a_532_, sizeof(void*)*3 + 4);
lean_dec_ref(v_a_532_);
v_options_695_ = lean_ctor_get(v_toCold_688_, 2);
lean_inc_ref(v_options_695_);
v_maxRecDepth_696_ = lean_ctor_get(v_toCold_688_, 3);
v_inheritedTraceOptions_697_ = lean_ctor_get(v_toCold_688_, 11);
lean_inc_ref(v_inheritedTraceOptions_697_);
v___x_698_ = lean_box(0);
v___x_870_ = lean_unsigned_to_nat(0u);
v___x_871_ = lean_nat_dec_eq(v_maxRecDepth_696_, v___x_870_);
if (v___x_871_ == 0)
{
uint8_t v___x_872_; 
v___x_872_ = lean_nat_dec_eq(v_currRecDepth_689_, v_maxRecDepth_696_);
if (v___x_872_ == 0)
{
goto v___jp_837_;
}
else
{
lean_object* v___x_873_; 
lean_dec_ref(v_inheritedTraceOptions_697_);
lean_dec_ref(v_options_695_);
lean_dec(v_currRecDepth_689_);
lean_dec_ref(v_toCold_688_);
lean_dec_ref(v_c_523_);
v___x_873_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts_spec__0___redArg(v_ref_690_);
return v___x_873_;
}
}
else
{
goto v___jp_837_;
}
v___jp_535_:
{
lean_object* v_p_543_; lean_object* v___x_544_; 
v_p_543_ = lean_ctor_get(v___y_537_, 1);
lean_inc_ref(v_p_543_);
lean_dec_ref(v___y_537_);
v___x_544_ = l_Int_Internal_Linear_Poly_updateOccs___redArg(v_p_543_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
lean_dec_ref(v___y_541_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v___x_545_; lean_object* v___x_546_; 
lean_dec_ref_known(v___x_544_, 1);
v___x_545_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_546_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_545_, v___y_536_, v___y_538_);
return v___x_546_;
}
else
{
lean_dec_ref(v___y_536_);
return v___x_544_;
}
}
v___jp_547_:
{
if (lean_obj_tag(v___y_568_) == 1)
{
lean_object* v_val_569_; lean_object* v_p_570_; 
lean_dec(v___y_548_);
v_val_569_ = lean_ctor_get(v___y_568_, 0);
lean_inc(v_val_569_);
lean_dec_ref_known(v___y_568_, 1);
v_p_570_ = lean_ctor_get(v_val_569_, 1);
lean_inc_ref(v_p_570_);
if (lean_obj_tag(v_p_570_) == 1)
{
lean_object* v_d_571_; lean_object* v_k_572_; lean_object* v_p_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_628_; 
v_d_571_ = lean_ctor_get(v_val_569_, 0);
v_k_572_ = lean_ctor_get(v_p_570_, 0);
v_p_573_ = lean_ctor_get(v_p_570_, 2);
v_isSharedCheck_628_ = !lean_is_exclusive(v_p_570_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; 
v_unused_629_ = lean_ctor_get(v_p_570_, 1);
lean_dec(v_unused_629_);
v___x_575_ = v_p_570_;
v_isShared_576_ = v_isSharedCheck_628_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_p_573_);
lean_inc(v_k_572_);
lean_dec(v_p_570_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_628_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v_snd_580_; lean_object* v_fst_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_627_; 
v___x_577_ = lean_int_mul(v___y_559_, v_d_571_);
v___x_578_ = lean_int_mul(v_k_572_, v___y_550_);
v___x_579_ = l_Lean_Meta_Grind_Arith_gcdExt(v___x_577_, v___x_578_);
lean_dec(v___x_578_);
lean_dec(v___x_577_);
v_snd_580_ = lean_ctor_get(v___x_579_, 1);
v_fst_581_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_627_ == 0)
{
v___x_583_ = v___x_579_;
v_isShared_584_ = v_isSharedCheck_627_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_snd_580_);
lean_inc(v_fst_581_);
lean_dec(v___x_579_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_627_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v_fst_585_; lean_object* v_snd_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_626_; 
v_fst_585_ = lean_ctor_get(v_snd_580_, 0);
v_snd_586_ = lean_ctor_get(v_snd_580_, 1);
v_isSharedCheck_626_ = !lean_is_exclusive(v_snd_580_);
if (v_isSharedCheck_626_ == 0)
{
v___x_588_ = v_snd_580_;
v_isShared_589_ = v_isSharedCheck_626_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_snd_586_);
lean_inc(v_fst_585_);
lean_dec(v_snd_580_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_626_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_590_ = lean_int_mul(v_fst_585_, v_d_571_);
lean_dec(v_fst_585_);
lean_inc_ref(v___y_566_);
v___x_591_ = l_Int_Internal_Linear_Poly_mul(v___y_566_, v___x_590_);
lean_dec(v___x_590_);
v___x_592_ = lean_int_mul(v_snd_586_, v___y_550_);
lean_dec(v_snd_586_);
lean_inc_ref(v_p_573_);
v___x_593_ = l_Int_Internal_Linear_Poly_mul(v_p_573_, v___x_592_);
lean_dec(v___x_592_);
v___x_594_ = lean_int_mul(v___y_550_, v_d_571_);
lean_dec(v___y_550_);
v___x_595_ = l_Int_Internal_Linear_Poly_combine(v___x_591_, v___x_593_);
lean_inc(v_fst_581_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 2, v___x_595_);
lean_ctor_set(v___x_575_, 1, v___y_553_);
lean_ctor_set(v___x_575_, 0, v_fst_581_);
v___x_597_ = v___x_575_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_fst_581_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v___y_553_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v___x_595_);
v___x_597_ = v_reuseFailAlloc_625_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_599_; 
lean_inc(v_val_569_);
lean_inc_ref(v___y_554_);
if (v_isShared_589_ == 0)
{
lean_ctor_set_tag(v___x_588_, 5);
lean_ctor_set(v___x_588_, 1, v_val_569_);
lean_ctor_set(v___x_588_, 0, v___y_554_);
v___x_599_ = v___x_588_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___y_554_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_val_569_);
v___x_599_ = v_reuseFailAlloc_624_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_600_ = lean_box(0);
v___x_601_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_601_, 0, v___x_594_);
lean_ctor_set(v___x_601_, 1, v___x_597_);
lean_ctor_set(v___x_601_, 2, v___x_599_);
lean_ctor_set(v___x_601_, 3, v___x_600_);
v___x_602_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_603_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_602_, v___y_561_, v___y_551_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v___x_604_; 
lean_dec_ref_known(v___x_603_, 1);
lean_inc_ref(v___y_557_);
v___x_604_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert(v___x_601_, v___y_551_, v___y_555_, v___y_549_, v___y_556_, v___y_562_, v___y_567_, v___y_560_, v___y_565_, v___y_557_, v___y_564_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
lean_dec_ref_known(v___x_604_, 1);
v___x_605_ = l_Int_Internal_Linear_Poly_mul(v___y_566_, v_k_572_);
lean_dec(v_k_572_);
v___x_606_ = lean_int_neg(v___y_559_);
lean_dec(v___y_559_);
v___x_607_ = l_Int_Internal_Linear_Poly_mul(v_p_573_, v___x_606_);
lean_dec(v___x_606_);
v___x_608_ = l_Int_Internal_Linear_Poly_combine(v___x_605_, v___x_607_);
lean_inc(v_val_569_);
if (v_isShared_584_ == 0)
{
lean_ctor_set_tag(v___x_583_, 6);
lean_ctor_set(v___x_583_, 1, v_val_569_);
lean_ctor_set(v___x_583_, 0, v___y_554_);
v___x_610_ = v___x_583_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___y_554_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_val_569_);
v___x_610_ = v_reuseFailAlloc_623_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_618_; 
v_isSharedCheck_618_ = !lean_is_exclusive(v_val_569_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; lean_object* v_unused_620_; lean_object* v_unused_621_; lean_object* v_unused_622_; 
v_unused_619_ = lean_ctor_get(v_val_569_, 3);
lean_dec(v_unused_619_);
v_unused_620_ = lean_ctor_get(v_val_569_, 2);
lean_dec(v_unused_620_);
v_unused_621_ = lean_ctor_get(v_val_569_, 1);
lean_dec(v_unused_621_);
v_unused_622_ = lean_ctor_get(v_val_569_, 0);
lean_dec(v_unused_622_);
v___x_612_ = v_val_569_;
v_isShared_613_ = v_isSharedCheck_618_;
goto v_resetjp_611_;
}
else
{
lean_dec(v_val_569_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_618_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 3, v___x_600_);
lean_ctor_set(v___x_612_, 2, v___x_610_);
lean_ctor_set(v___x_612_, 1, v___x_608_);
lean_ctor_set(v___x_612_, 0, v_fst_581_);
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_fst_581_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v___x_608_);
lean_ctor_set(v_reuseFailAlloc_617_, 2, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_617_, 3, v___x_600_);
v___x_615_ = v_reuseFailAlloc_617_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
v_c_523_ = v___x_615_;
v_a_524_ = v___y_551_;
v_a_525_ = v___y_555_;
v_a_526_ = v___y_549_;
v_a_527_ = v___y_556_;
v_a_528_ = v___y_562_;
v_a_529_ = v___y_567_;
v_a_530_ = v___y_560_;
v_a_531_ = v___y_565_;
v_a_532_ = v___y_557_;
v_a_533_ = v___y_564_;
goto _start;
}
}
}
}
else
{
lean_del_object(v___x_583_);
lean_dec(v_fst_581_);
lean_dec_ref(v_p_573_);
lean_dec(v_k_572_);
lean_dec(v_val_569_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_557_);
lean_dec_ref(v___y_554_);
return v___x_604_;
}
}
else
{
lean_dec_ref_known(v___x_601_, 4);
lean_del_object(v___x_583_);
lean_dec(v_fst_581_);
lean_dec_ref(v_p_573_);
lean_dec(v_k_572_);
lean_dec(v_val_569_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_557_);
lean_dec_ref(v___y_554_);
return v___x_603_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_630_; 
lean_dec_ref(v_p_570_);
lean_dec_ref(v___y_566_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
lean_dec(v___y_550_);
v___x_630_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(v_val_569_, v___y_551_, v___y_555_, v___y_549_, v___y_556_, v___y_562_, v___y_567_, v___y_560_, v___y_565_, v___y_557_, v___y_564_);
lean_dec_ref(v___y_557_);
return v___x_630_;
}
}
else
{
lean_object* v___x_631_; 
lean_dec(v___y_568_);
lean_dec_ref(v___y_566_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_559_);
lean_dec(v___y_553_);
lean_dec(v___y_550_);
v___x_631_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___redArg(v___y_554_, v___y_551_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_toCold_632_; lean_object* v_options_633_; lean_object* v_a_634_; lean_object* v_inheritedTraceOptions_635_; uint8_t v_hasTrace_636_; lean_object* v___f_637_; 
v_toCold_632_ = lean_ctor_get(v___y_557_, 0);
v_options_633_ = lean_ctor_get(v_toCold_632_, 2);
v_a_634_ = lean_ctor_get(v___x_631_, 0);
lean_inc_n(v_a_634_, 2);
lean_dec_ref_known(v___x_631_, 1);
v_inheritedTraceOptions_635_ = lean_ctor_get(v_toCold_632_, 11);
v_hasTrace_636_ = lean_ctor_get_uint8(v_options_633_, sizeof(void*)*1);
v___f_637_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__0___boxed), 3, 2);
lean_closure_set(v___f_637_, 0, v_a_634_);
lean_closure_set(v___f_637_, 1, v___y_548_);
if (v_hasTrace_636_ == 0)
{
v___y_536_ = v___f_637_;
v___y_537_ = v_a_634_;
v___y_538_ = v___y_551_;
v___y_539_ = v___y_560_;
v___y_540_ = v___y_565_;
v___y_541_ = v___y_557_;
v___y_542_ = v___y_564_;
goto v___jp_535_;
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
v___x_638_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__0));
lean_inc_ref(v___y_558_);
lean_inc_ref(v___y_552_);
lean_inc_ref(v___y_563_);
v___x_639_ = l_Lean_Name_mkStr4(v___y_563_, v___y_552_, v___y_558_, v___x_638_);
v___x_640_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__6));
lean_inc(v___x_639_);
v___x_641_ = l_Lean_Name_append(v___x_640_, v___x_639_);
v___x_642_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_635_, v_options_633_, v___x_641_);
lean_dec(v___x_641_);
if (v___x_642_ == 0)
{
lean_dec(v___x_639_);
v___y_536_ = v___f_637_;
v___y_537_ = v_a_634_;
v___y_538_ = v___y_551_;
v___y_539_ = v___y_560_;
v___y_540_ = v___y_565_;
v___y_541_ = v___y_557_;
v___y_542_ = v___y_564_;
goto v___jp_535_;
}
else
{
lean_object* v___x_643_; 
lean_inc(v_a_634_);
v___x_643_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_a_634_, v___y_551_, v___y_557_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_645_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_a_644_);
lean_dec_ref_known(v___x_643_, 1);
v___x_645_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(v___x_639_, v_a_644_, v___y_560_, v___y_565_, v___y_557_, v___y_564_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_dec_ref_known(v___x_645_, 1);
v___y_536_ = v___f_637_;
v___y_537_ = v_a_634_;
v___y_538_ = v___y_551_;
v___y_539_ = v___y_560_;
v___y_540_ = v___y_565_;
v___y_541_ = v___y_557_;
v___y_542_ = v___y_564_;
goto v___jp_535_;
}
else
{
lean_dec_ref(v___f_637_);
lean_dec(v_a_634_);
lean_dec_ref(v___y_557_);
return v___x_645_;
}
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec(v___x_639_);
lean_dec_ref(v___f_637_);
lean_dec(v_a_634_);
lean_dec_ref(v___y_557_);
v_a_646_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_643_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_643_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec_ref(v___y_557_);
lean_dec(v___y_548_);
v_a_654_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_631_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_631_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
v___jp_662_:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_674_, 0, v___y_663_);
v___x_675_ = l_Lean_Meta_Grind_Arith_Cutsat_setInconsistent(v___x_674_, v___y_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
lean_dec_ref(v___y_672_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_683_; 
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_683_ == 0)
{
lean_object* v_unused_684_; 
v_unused_684_ = lean_ctor_get(v___x_675_, 0);
lean_dec(v_unused_684_);
v___x_677_ = v___x_675_;
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
else
{
lean_dec(v___x_675_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = lean_box(0);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_679_);
v___x_681_ = v___x_677_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
else
{
return v___x_675_;
}
}
v___jp_685_:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_box(0);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
v___jp_699_:
{
lean_object* v___x_719_; 
v___x_719_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v___y_709_, v___y_717_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v_dvds_721_; lean_object* v_size_722_; uint8_t v___x_723_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_719_, 1);
v_dvds_721_ = lean_ctor_get(v_a_720_, 5);
lean_inc_ref(v_dvds_721_);
lean_dec(v_a_720_);
v_size_722_ = lean_ctor_get(v_dvds_721_, 2);
v___x_723_ = lean_nat_dec_lt(v___y_701_, v_size_722_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; 
lean_dec_ref(v_dvds_721_);
v___x_724_ = l_outOfBounds___redArg(v___x_698_);
lean_inc(v___y_701_);
v___y_548_ = v___y_701_;
v___y_549_ = v___y_711_;
v___y_550_ = v___y_703_;
v___y_551_ = v___y_709_;
v___y_552_ = v___y_705_;
v___y_553_ = v___y_701_;
v___y_554_ = v___y_706_;
v___y_555_ = v___y_710_;
v___y_556_ = v___y_712_;
v___y_557_ = v___y_717_;
v___y_558_ = v___y_704_;
v___y_559_ = v___y_700_;
v___y_560_ = v___y_715_;
v___y_561_ = v___y_707_;
v___y_562_ = v___y_713_;
v___y_563_ = v___y_708_;
v___y_564_ = v___y_718_;
v___y_565_ = v___y_716_;
v___y_566_ = v___y_702_;
v___y_567_ = v___y_714_;
v___y_568_ = v___x_724_;
goto v___jp_547_;
}
else
{
lean_object* v___x_725_; 
v___x_725_ = l_Lean_PersistentArray_get_x21___redArg(v___x_698_, v_dvds_721_, v___y_701_);
lean_dec_ref(v_dvds_721_);
lean_inc(v___y_701_);
v___y_548_ = v___y_701_;
v___y_549_ = v___y_711_;
v___y_550_ = v___y_703_;
v___y_551_ = v___y_709_;
v___y_552_ = v___y_705_;
v___y_553_ = v___y_701_;
v___y_554_ = v___y_706_;
v___y_555_ = v___y_710_;
v___y_556_ = v___y_712_;
v___y_557_ = v___y_717_;
v___y_558_ = v___y_704_;
v___y_559_ = v___y_700_;
v___y_560_ = v___y_715_;
v___y_561_ = v___y_707_;
v___y_562_ = v___y_713_;
v___y_563_ = v___y_708_;
v___y_564_ = v___y_718_;
v___y_565_ = v___y_716_;
v___y_566_ = v___y_702_;
v___y_567_ = v___y_714_;
v___y_568_ = v___x_725_;
goto v___jp_547_;
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
lean_dec_ref(v___y_717_);
lean_dec_ref(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
lean_dec(v___y_701_);
lean_dec(v___y_700_);
v_a_726_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_719_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_719_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
v___jp_734_:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm(v_c_523_);
lean_inc_ref(v___y_746_);
v___x_749_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applySubsts(v___x_748_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_751_; lean_object* v_d_752_; lean_object* v_p_753_; uint8_t v___x_754_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_a_750_);
lean_dec_ref_known(v___x_749_, 1);
v___x_751_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm(v_a_750_);
v_d_752_ = lean_ctor_get(v___x_751_, 0);
v_p_753_ = lean_ctor_get(v___x_751_, 1);
lean_inc(v_d_752_);
v___x_754_ = l_Int_Internal_Linear_Poly_isUnsatDvd(v_d_752_, v_p_753_);
if (v___x_754_ == 0)
{
uint8_t v___x_755_; 
v___x_755_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(v___x_751_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm___closed__0);
v___x_757_ = lean_int_dec_eq(v_d_752_, v___x_756_);
if (v___x_757_ == 0)
{
if (lean_obj_tag(v_p_753_) == 1)
{
lean_object* v_k_758_; lean_object* v_v_759_; lean_object* v_p_760_; lean_object* v___f_761_; lean_object* v___x_762_; 
lean_inc(v_d_752_);
v_k_758_ = lean_ctor_get(v_p_753_, 0);
lean_inc(v_k_758_);
v_v_759_ = lean_ctor_get(v_p_753_, 1);
lean_inc_n(v_v_759_, 2);
v_p_760_ = lean_ctor_get(v_p_753_, 2);
lean_inc_ref(v_p_760_);
v___f_761_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___lam__1___boxed), 2, 1);
lean_closure_set(v___f_761_, 0, v_v_759_);
lean_inc_ref(v___x_751_);
v___x_762_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(v___x_751_, v___y_738_, v___y_746_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; uint8_t v___x_764_; uint8_t v___x_765_; uint8_t v___x_766_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_762_, 1);
v___x_764_ = 0;
v___x_765_ = lean_unbox(v_a_763_);
lean_dec(v_a_763_);
v___x_766_ = l_Lean_instBEqLBool_beq(v___x_765_, v___x_764_);
if (v___x_766_ == 0)
{
v___y_700_ = v_k_758_;
v___y_701_ = v_v_759_;
v___y_702_ = v_p_760_;
v___y_703_ = v_d_752_;
v___y_704_ = v___y_735_;
v___y_705_ = v___y_736_;
v___y_706_ = v___x_751_;
v___y_707_ = v___f_761_;
v___y_708_ = v___y_737_;
v___y_709_ = v___y_738_;
v___y_710_ = v___y_739_;
v___y_711_ = v___y_740_;
v___y_712_ = v___y_741_;
v___y_713_ = v___y_742_;
v___y_714_ = v___y_743_;
v___y_715_ = v___y_744_;
v___y_716_ = v___y_745_;
v___y_717_ = v___y_746_;
v___y_718_ = v___y_747_;
goto v___jp_699_;
}
else
{
lean_object* v___x_767_; 
lean_inc(v_v_759_);
v___x_767_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(v_v_759_, v___y_738_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_dec_ref_known(v___x_767_, 1);
v___y_700_ = v_k_758_;
v___y_701_ = v_v_759_;
v___y_702_ = v_p_760_;
v___y_703_ = v_d_752_;
v___y_704_ = v___y_735_;
v___y_705_ = v___y_736_;
v___y_706_ = v___x_751_;
v___y_707_ = v___f_761_;
v___y_708_ = v___y_737_;
v___y_709_ = v___y_738_;
v___y_710_ = v___y_739_;
v___y_711_ = v___y_740_;
v___y_712_ = v___y_741_;
v___y_713_ = v___y_742_;
v___y_714_ = v___y_743_;
v___y_715_ = v___y_744_;
v___y_716_ = v___y_745_;
v___y_717_ = v___y_746_;
v___y_718_ = v___y_747_;
goto v___jp_699_;
}
else
{
lean_dec_ref(v___f_761_);
lean_dec_ref(v_p_760_);
lean_dec(v_v_759_);
lean_dec(v_k_758_);
lean_dec(v_d_752_);
lean_dec_ref(v___x_751_);
lean_dec_ref(v___y_746_);
return v___x_767_;
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec_ref(v___f_761_);
lean_dec_ref(v_p_760_);
lean_dec(v_v_759_);
lean_dec(v_k_758_);
lean_dec(v_d_752_);
lean_dec_ref(v___x_751_);
lean_dec_ref(v___y_746_);
v_a_768_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_762_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_762_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
else
{
lean_object* v___x_776_; 
v___x_776_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(v___x_751_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
lean_dec_ref(v___y_746_);
return v___x_776_;
}
}
else
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
lean_inc_ref(v_p_753_);
v___x_777_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_751_);
v___x_778_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_778_, 0, v_p_753_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
lean_ctor_set(v___x_778_, 2, v___x_698_);
lean_inc(v___y_747_);
lean_inc(v___y_745_);
lean_inc_ref(v___y_744_);
lean_inc(v___y_743_);
lean_inc_ref(v___y_742_);
lean_inc(v___y_741_);
lean_inc_ref(v___y_740_);
lean_inc(v___y_739_);
lean_inc(v___y_738_);
v___x_779_ = lean_grind_cutsat_assert_eq(v___x_778_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_787_; 
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_787_ == 0)
{
lean_object* v_unused_788_; 
v_unused_788_ = lean_ctor_get(v___x_779_, 0);
lean_dec(v_unused_788_);
v___x_781_ = v___x_779_;
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
else
{
lean_dec(v___x_779_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = lean_box(0);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_783_);
v___x_785_ = v___x_781_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
else
{
return v___x_779_;
}
}
}
else
{
lean_object* v_toCold_789_; lean_object* v_options_790_; uint8_t v_hasTrace_791_; 
v_toCold_789_ = lean_ctor_get(v___y_746_, 0);
v_options_790_ = lean_ctor_get(v_toCold_789_, 2);
v_hasTrace_791_ = lean_ctor_get_uint8(v_options_790_, sizeof(void*)*1);
if (v_hasTrace_791_ == 0)
{
lean_dec_ref(v___x_751_);
lean_dec_ref(v___y_746_);
goto v___jp_685_;
}
else
{
lean_object* v_inheritedTraceOptions_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v_inheritedTraceOptions_792_ = lean_ctor_get(v_toCold_789_, 11);
v___x_793_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__1));
lean_inc_ref(v___y_735_);
lean_inc_ref(v___y_736_);
lean_inc_ref(v___y_737_);
v___x_794_ = l_Lean_Name_mkStr4(v___y_737_, v___y_736_, v___y_735_, v___x_793_);
v___x_795_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__6));
lean_inc(v___x_794_);
v___x_796_ = l_Lean_Name_append(v___x_795_, v___x_794_);
v___x_797_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_792_, v_options_790_, v___x_796_);
lean_dec(v___x_796_);
if (v___x_797_ == 0)
{
lean_dec(v___x_794_);
lean_dec_ref(v___x_751_);
lean_dec_ref(v___y_746_);
goto v___jp_685_;
}
else
{
lean_object* v___x_798_; 
v___x_798_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v___x_751_, v___y_738_, v___y_746_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; lean_object* v___x_800_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_798_, 1);
v___x_800_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(v___x_794_, v_a_799_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
lean_dec_ref(v___y_746_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_dec_ref_known(v___x_800_, 1);
goto v___jp_685_;
}
else
{
return v___x_800_;
}
}
else
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
lean_dec(v___x_794_);
lean_dec_ref(v___y_746_);
v_a_801_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_798_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_798_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
}
}
}
else
{
lean_object* v_toCold_809_; lean_object* v_options_810_; uint8_t v_hasTrace_811_; 
v_toCold_809_ = lean_ctor_get(v___y_746_, 0);
v_options_810_ = lean_ctor_get(v_toCold_809_, 2);
v_hasTrace_811_ = lean_ctor_get_uint8(v_options_810_, sizeof(void*)*1);
if (v_hasTrace_811_ == 0)
{
v___y_663_ = v___x_751_;
v___y_664_ = v___y_738_;
v___y_665_ = v___y_739_;
v___y_666_ = v___y_740_;
v___y_667_ = v___y_741_;
v___y_668_ = v___y_742_;
v___y_669_ = v___y_743_;
v___y_670_ = v___y_744_;
v___y_671_ = v___y_745_;
v___y_672_ = v___y_746_;
v___y_673_ = v___y_747_;
goto v___jp_662_;
}
else
{
lean_object* v_inheritedTraceOptions_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; uint8_t v___x_817_; 
v_inheritedTraceOptions_812_ = lean_ctor_get(v_toCold_809_, 11);
v___x_813_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__2));
lean_inc_ref(v___y_735_);
lean_inc_ref(v___y_736_);
lean_inc_ref(v___y_737_);
v___x_814_ = l_Lean_Name_mkStr4(v___y_737_, v___y_736_, v___y_735_, v___x_813_);
v___x_815_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__6));
lean_inc(v___x_814_);
v___x_816_ = l_Lean_Name_append(v___x_815_, v___x_814_);
v___x_817_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_812_, v_options_810_, v___x_816_);
lean_dec(v___x_816_);
if (v___x_817_ == 0)
{
lean_dec(v___x_814_);
v___y_663_ = v___x_751_;
v___y_664_ = v___y_738_;
v___y_665_ = v___y_739_;
v___y_666_ = v___y_740_;
v___y_667_ = v___y_741_;
v___y_668_ = v___y_742_;
v___y_669_ = v___y_743_;
v___y_670_ = v___y_744_;
v___y_671_ = v___y_745_;
v___y_672_ = v___y_746_;
v___y_673_ = v___y_747_;
goto v___jp_662_;
}
else
{
lean_object* v___x_818_; 
lean_inc_ref(v___x_751_);
v___x_818_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v___x_751_, v___y_738_, v___y_746_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_820_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_a_819_);
lean_dec_ref_known(v___x_818_, 1);
v___x_820_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(v___x_814_, v_a_819_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_dec_ref_known(v___x_820_, 1);
v___y_663_ = v___x_751_;
v___y_664_ = v___y_738_;
v___y_665_ = v___y_739_;
v___y_666_ = v___y_740_;
v___y_667_ = v___y_741_;
v___y_668_ = v___y_742_;
v___y_669_ = v___y_743_;
v___y_670_ = v___y_744_;
v___y_671_ = v___y_745_;
v___y_672_ = v___y_746_;
v___y_673_ = v___y_747_;
goto v___jp_662_;
}
else
{
lean_dec_ref(v___x_751_);
lean_dec_ref(v___y_746_);
return v___x_820_;
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_dec(v___x_814_);
lean_dec_ref(v___x_751_);
lean_dec_ref(v___y_746_);
v_a_821_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_818_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_818_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec_ref(v___y_746_);
v_a_829_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_749_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_749_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
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
v___jp_837_:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_838_ = lean_unsigned_to_nat(1u);
v___x_839_ = lean_nat_add(v_currRecDepth_689_, v___x_838_);
lean_dec(v_currRecDepth_689_);
v___x_840_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_840_, 0, v_toCold_688_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
lean_ctor_set(v___x_840_, 2, v_ref_690_);
lean_ctor_set_uint16(v___x_840_, sizeof(void*)*3, v_optionFlags_691_);
lean_ctor_set_uint8(v___x_840_, sizeof(void*)*3 + 2, v_suppressElabErrors_692_);
lean_ctor_set_uint8(v___x_840_, sizeof(void*)*3 + 3, v_checkDeprecated_693_);
lean_ctor_set_uint8(v___x_840_, sizeof(void*)*3 + 4, v_isRecordingDeps_694_);
v___x_841_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(v_a_524_, v___x_840_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; uint8_t v___x_843_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_841_, 1);
v___x_843_ = lean_unbox(v_a_842_);
lean_dec(v_a_842_);
if (v___x_843_ == 0)
{
uint8_t v_hasTrace_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_hasTrace_844_ = lean_ctor_get_uint8(v_options_695_, sizeof(void*)*1);
v___x_845_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__0));
v___x_846_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq___closed__2));
v___x_847_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__3));
if (v_hasTrace_844_ == 0)
{
lean_dec_ref(v_inheritedTraceOptions_697_);
lean_dec_ref(v_options_695_);
v___y_735_ = v___x_847_;
v___y_736_ = v___x_846_;
v___y_737_ = v___x_845_;
v___y_738_ = v_a_524_;
v___y_739_ = v_a_525_;
v___y_740_ = v_a_526_;
v___y_741_ = v_a_527_;
v___y_742_ = v_a_528_;
v___y_743_ = v_a_529_;
v___y_744_ = v_a_530_;
v___y_745_ = v_a_531_;
v___y_746_ = v___x_840_;
v___y_747_ = v_a_533_;
goto v___jp_734_;
}
else
{
lean_object* v___x_848_; lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_848_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__4));
v___x_849_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__5, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___closed__5);
v___x_850_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_697_, v_options_695_, v___x_849_);
lean_dec_ref(v_options_695_);
lean_dec_ref(v_inheritedTraceOptions_697_);
if (v___x_850_ == 0)
{
v___y_735_ = v___x_847_;
v___y_736_ = v___x_846_;
v___y_737_ = v___x_845_;
v___y_738_ = v_a_524_;
v___y_739_ = v_a_525_;
v___y_740_ = v_a_526_;
v___y_741_ = v_a_527_;
v___y_742_ = v_a_528_;
v___y_743_ = v_a_529_;
v___y_744_ = v_a_530_;
v___y_745_ = v_a_531_;
v___y_746_ = v___x_840_;
v___y_747_ = v_a_533_;
goto v___jp_734_;
}
else
{
lean_object* v___x_851_; 
lean_inc_ref(v_c_523_);
v___x_851_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_523_, v_a_524_, v___x_840_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; lean_object* v___x_853_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
v___x_853_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_applyEq_spec__0___redArg(v___x_848_, v_a_852_, v_a_530_, v_a_531_, v___x_840_, v_a_533_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_dec_ref_known(v___x_853_, 1);
v___y_735_ = v___x_847_;
v___y_736_ = v___x_846_;
v___y_737_ = v___x_845_;
v___y_738_ = v_a_524_;
v___y_739_ = v_a_525_;
v___y_740_ = v_a_526_;
v___y_741_ = v_a_527_;
v___y_742_ = v_a_528_;
v___y_743_ = v_a_529_;
v___y_744_ = v_a_530_;
v___y_745_ = v_a_531_;
v___y_746_ = v___x_840_;
v___y_747_ = v_a_533_;
goto v___jp_734_;
}
else
{
lean_dec_ref_known(v___x_840_, 3);
lean_dec_ref(v_c_523_);
return v___x_853_;
}
}
else
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
lean_dec_ref_known(v___x_840_, 3);
lean_dec_ref(v_c_523_);
v_a_854_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_851_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_851_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_840_, 3);
lean_dec_ref(v_inheritedTraceOptions_697_);
lean_dec_ref(v_options_695_);
lean_dec_ref(v_c_523_);
goto v___jp_685_;
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
lean_dec_ref_known(v___x_840_, 3);
lean_dec_ref(v_inheritedTraceOptions_697_);
lean_dec_ref(v_options_695_);
lean_dec_ref(v_c_523_);
v_a_862_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_841_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_841_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert___boxed(lean_object* v_c_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert(v_c_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_);
lean_dec(v_a_884_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
lean_dec(v_a_878_);
lean_dec_ref(v_a_877_);
lean_dec(v_a_876_);
lean_dec(v_a_875_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assertCore(lean_object* v_c_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_){
_start:
{
lean_object* v_d_899_; lean_object* v_p_900_; lean_object* v___x_901_; 
v_d_899_ = lean_ctor_get(v_c_887_, 0);
v_p_900_ = lean_ctor_get(v_c_887_, 1);
lean_inc_ref(v_p_900_);
v___x_901_ = l_Int_Internal_Linear_Poly_normCommRing_x3f(v_p_900_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
if (lean_obj_tag(v_a_902_) == 1)
{
lean_object* v_val_903_; lean_object* v_snd_904_; lean_object* v_fst_905_; lean_object* v_fst_906_; lean_object* v_snd_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
lean_inc(v_d_899_);
v_val_903_ = lean_ctor_get(v_a_902_, 0);
lean_inc(v_val_903_);
lean_dec_ref_known(v_a_902_, 1);
v_snd_904_ = lean_ctor_get(v_val_903_, 1);
lean_inc(v_snd_904_);
v_fst_905_ = lean_ctor_get(v_val_903_, 0);
lean_inc(v_fst_905_);
lean_dec(v_val_903_);
v_fst_906_ = lean_ctor_get(v_snd_904_, 0);
lean_inc(v_fst_906_);
v_snd_907_ = lean_ctor_get(v_snd_904_, 1);
lean_inc(v_snd_907_);
lean_dec(v_snd_904_);
v___x_908_ = lean_alloc_ctor(13, 3, 0);
lean_ctor_set(v___x_908_, 0, v_c_887_);
lean_ctor_set(v___x_908_, 1, v_fst_905_);
lean_ctor_set(v___x_908_, 2, v_fst_906_);
v___x_909_ = lean_box(0);
v___x_910_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_910_, 0, v_d_899_);
lean_ctor_set(v___x_910_, 1, v_snd_907_);
lean_ctor_set(v___x_910_, 2, v___x_908_);
lean_ctor_set(v___x_910_, 3, v___x_909_);
lean_inc_ref(v_a_896_);
v___x_911_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert(v___x_910_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
return v___x_911_;
}
else
{
lean_object* v___x_912_; 
lean_dec(v_a_902_);
lean_inc_ref(v_a_896_);
v___x_912_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert(v_c_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
return v___x_912_;
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec_ref(v_c_887_);
v_a_913_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_901_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_901_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assertCore___boxed(lean_object* v_c_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assertCore(v_c_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_, v_a_931_);
lean_dec(v_a_931_);
lean_dec_ref(v_a_930_);
lean_dec(v_a_929_);
lean_dec_ref(v_a_928_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
lean_dec(v_a_925_);
lean_dec_ref(v_a_924_);
lean_dec(v_a_923_);
lean_dec(v_a_922_);
return v_res_933_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__8(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_948_ = lean_box(0);
v___x_949_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__7));
v___x_950_ = l_Lean_mkConst(v___x_949_, v___x_948_);
return v___x_950_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__9));
v___x_953_ = l_Lean_stringToMessageData(v___x_952_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd(lean_object* v_e_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
lean_object* v___x_972_; 
lean_inc_ref(v_e_954_);
v___x_972_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_954_, v_a_962_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_974_; uint8_t v___x_975_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref_known(v___x_972_, 1);
v___x_974_ = l_Lean_Expr_cleanupAnnotations(v_a_973_);
lean_dec(v_a_973_);
v___x_975_ = l_Lean_Expr_isApp(v___x_974_);
if (v___x_975_ == 0)
{
lean_dec_ref(v___x_974_);
lean_dec_ref(v_e_954_);
goto v___jp_966_;
}
else
{
lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_976_ = l_Lean_Expr_appFnCleanup___redArg(v___x_974_);
v___x_977_ = l_Lean_Expr_isApp(v___x_976_);
if (v___x_977_ == 0)
{
lean_dec_ref(v___x_976_);
lean_dec_ref(v___x_974_);
lean_dec_ref(v_e_954_);
goto v___jp_966_;
}
else
{
lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_978_ = l_Lean_Expr_appFnCleanup___redArg(v___x_976_);
v___x_979_ = l_Lean_Expr_isApp(v___x_978_);
if (v___x_979_ == 0)
{
lean_dec_ref(v___x_978_);
lean_dec_ref(v___x_976_);
lean_dec_ref(v___x_974_);
lean_dec_ref(v_e_954_);
goto v___jp_966_;
}
else
{
lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_980_ = l_Lean_Expr_appFnCleanup___redArg(v___x_978_);
v___x_981_ = l_Lean_Expr_isApp(v___x_980_);
if (v___x_981_ == 0)
{
lean_dec_ref(v___x_980_);
lean_dec_ref(v___x_978_);
lean_dec_ref(v___x_976_);
lean_dec_ref(v___x_974_);
lean_dec_ref(v_e_954_);
goto v___jp_966_;
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_982_ = l_Lean_Expr_appFnCleanup___redArg(v___x_980_);
lean_dec_ref(v___x_980_);
v___x_983_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2));
v___x_984_ = l_Lean_Expr_isConstOf(v___x_982_, v___x_983_);
lean_dec_ref(v___x_982_);
if (v___x_984_ == 0)
{
lean_dec_ref(v___x_978_);
lean_dec_ref(v___x_976_);
lean_dec_ref(v___x_974_);
lean_dec_ref(v_e_954_);
goto v___jp_966_;
}
else
{
lean_object* v_arg_985_; lean_object* v_arg_986_; lean_object* v_arg_987_; lean_object* v___x_988_; 
v_arg_985_ = lean_ctor_get(v___x_974_, 1);
lean_inc_ref(v_arg_985_);
lean_dec_ref(v___x_974_);
v_arg_986_ = lean_ctor_get(v___x_976_, 1);
lean_inc_ref(v_arg_986_);
lean_dec_ref(v___x_976_);
v_arg_987_ = lean_ctor_get(v___x_978_, 1);
lean_inc_ref(v_arg_987_);
lean_dec_ref(v___x_978_);
v___x_988_ = l_Lean_Meta_Structural_isInstDvdInt___redArg(v_arg_987_, v_a_962_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1090_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_991_ = v___x_988_;
v_isShared_992_ = v_isSharedCheck_1090_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_988_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1090_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
uint8_t v___x_993_; 
v___x_993_ = lean_unbox(v_a_989_);
lean_dec(v_a_989_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; lean_object* v___x_996_; 
lean_dec_ref(v_arg_986_);
lean_dec_ref(v_arg_985_);
lean_dec_ref(v_e_954_);
v___x_994_ = lean_box(0);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 0, v___x_994_);
v___x_996_ = v___x_991_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_994_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
else
{
lean_object* v___x_998_; 
lean_del_object(v___x_991_);
lean_inc_ref(v_arg_986_);
v___x_998_ = l_Lean_Meta_getIntValue_x3f(v_arg_986_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_999_);
lean_dec_ref_known(v___x_998_, 1);
if (lean_obj_tag(v_a_999_) == 1)
{
lean_object* v_val_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1066_; 
v_val_1000_ = lean_ctor_get(v_a_999_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_a_999_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1002_ = v_a_999_;
v_isShared_1003_ = v_isSharedCheck_1066_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_val_1000_);
lean_dec(v_a_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1066_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; 
lean_inc_ref(v_e_954_);
v___x_1004_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_954_, v_a_955_, v_a_959_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; uint8_t v___x_1006_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1006_ = lean_unbox(v_a_1005_);
lean_dec(v_a_1005_);
if (v___x_1006_ == 0)
{
lean_object* v___x_1007_; 
lean_del_object(v___x_1002_);
lean_dec(v_val_1000_);
lean_inc_ref(v_e_954_);
v___x_1007_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_954_, v_a_955_, v_a_959_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1033_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1010_ = v___x_1007_;
v_isShared_1011_ = v_isSharedCheck_1033_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1007_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1033_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
uint8_t v___x_1012_; 
v___x_1012_ = lean_unbox(v_a_1008_);
lean_dec(v_a_1008_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; lean_object* v___x_1015_; 
lean_dec_ref(v_arg_986_);
lean_dec_ref(v_arg_985_);
lean_dec_ref(v_e_954_);
v___x_1013_ = lean_box(0);
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 0, v___x_1013_);
v___x_1015_ = v___x_1010_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1013_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
else
{
lean_object* v___x_1017_; 
lean_del_object(v___x_1010_);
lean_inc_ref(v_e_954_);
v___x_1017_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
lean_inc(v_a_1018_);
lean_dec_ref_known(v___x_1017_, 1);
v___x_1019_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__8);
v___x_1020_ = l_Lean_eagerReflBoolTrue;
v___x_1021_ = l_Lean_Meta_mkOfEqFalseCore(v_e_954_, v_a_1018_);
v___x_1022_ = l_Lean_mkApp4(v___x_1019_, v_arg_986_, v_arg_985_, v___x_1020_, v___x_1021_);
v___x_1023_ = lean_unsigned_to_nat(0u);
v___x_1024_ = l_Lean_Meta_Grind_pushNewFact(v___x_1022_, v___x_1023_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
return v___x_1024_;
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec_ref(v_arg_986_);
lean_dec_ref(v_arg_985_);
lean_dec_ref(v_e_954_);
v_a_1025_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1017_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1017_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
}
}
else
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
lean_dec_ref(v_arg_986_);
lean_dec_ref(v_arg_985_);
lean_dec_ref(v_e_954_);
v_a_1034_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1036_ = v___x_1007_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_1007_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
if (v_isShared_1037_ == 0)
{
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_a_1034_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
else
{
lean_object* v___x_1042_; 
lean_dec_ref(v_arg_986_);
v___x_1042_ = l_Lean_Meta_Grind_Arith_Cutsat_toPoly(v_arg_985_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1045_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1042_, 1);
if (v_isShared_1003_ == 0)
{
lean_ctor_set_tag(v___x_1002_, 0);
lean_ctor_set(v___x_1002_, 0, v_e_954_);
v___x_1045_ = v___x_1002_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_e_954_);
v___x_1045_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1046_ = lean_box(0);
v___x_1047_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1047_, 0, v_val_1000_);
lean_ctor_set(v___x_1047_, 1, v_a_1043_);
lean_ctor_set(v___x_1047_, 2, v___x_1045_);
lean_ctor_set(v___x_1047_, 3, v___x_1046_);
v___x_1048_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assertCore(v___x_1047_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
return v___x_1048_;
}
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
lean_del_object(v___x_1002_);
lean_dec(v_val_1000_);
lean_dec_ref(v_e_954_);
v_a_1050_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1042_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1042_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
lean_del_object(v___x_1002_);
lean_dec(v_val_1000_);
lean_dec_ref(v_arg_986_);
lean_dec_ref(v_arg_985_);
lean_dec_ref(v_e_954_);
v_a_1058_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1004_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1004_);
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
else
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_dec(v_a_999_);
lean_dec_ref(v_arg_986_);
lean_dec_ref(v_arg_985_);
v___x_1067_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10);
v___x_1068_ = l_Lean_indentExpr(v_e_954_);
v___x_1069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_959_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; uint8_t v_verbose_1072_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v___x_1070_, 1);
v_verbose_1072_ = lean_ctor_get_uint8(v_a_1071_, 0);
lean_dec(v_a_1071_);
if (v_verbose_1072_ == 0)
{
lean_dec_ref_known(v___x_1069_, 2);
goto v___jp_969_;
}
else
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_Meta_Sym_reportIssue(v___x_1069_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_dec_ref_known(v___x_1073_, 1);
goto v___jp_969_;
}
else
{
return v___x_1073_;
}
}
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec_ref_known(v___x_1069_, 2);
v_a_1074_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1070_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1070_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
lean_dec_ref(v_arg_986_);
lean_dec_ref(v_arg_985_);
lean_dec_ref(v_e_954_);
v_a_1082_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_998_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_998_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec_ref(v_arg_986_);
lean_dec_ref(v_arg_985_);
lean_dec_ref(v_e_954_);
v_a_1091_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_988_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_988_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
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
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
lean_dec_ref(v_e_954_);
v_a_1099_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_972_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_972_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
v___jp_966_:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = lean_box(0);
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
return v___x_968_;
}
v___jp_969_:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_box(0);
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___boxed(lean_object* v_e_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd(v_e_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
lean_dec(v_a_1113_);
lean_dec_ref(v_a_1112_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec(v_a_1108_);
return v_res_1119_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__3(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = lean_box(0);
v___x_1126_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__2));
v___x_1127_ = l_Lean_mkConst(v___x_1126_, v___x_1125_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__7(void){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1134_ = lean_box(0);
v___x_1135_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__6));
v___x_1136_ = l_Lean_mkConst(v___x_1135_, v___x_1134_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd(lean_object* v_e_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_){
_start:
{
lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1155_ = l_Lean_Expr_cleanupAnnotations(v_e_1137_);
v___x_1156_ = l_Lean_Expr_isApp(v___x_1155_);
if (v___x_1156_ == 0)
{
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1137_);
goto v___jp_1149_;
}
else
{
lean_object* v___x_1157_; uint8_t v___x_1158_; 
v___x_1157_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1155_);
v___x_1158_ = l_Lean_Expr_isApp(v___x_1157_);
if (v___x_1158_ == 0)
{
lean_dec_ref(v___x_1157_);
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1137_);
goto v___jp_1149_;
}
else
{
lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1159_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1157_);
v___x_1160_ = l_Lean_Expr_isApp(v___x_1159_);
if (v___x_1160_ == 0)
{
lean_dec_ref(v___x_1159_);
lean_dec_ref(v___x_1157_);
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1137_);
goto v___jp_1149_;
}
else
{
lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1161_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1159_);
v___x_1162_ = l_Lean_Expr_isApp(v___x_1161_);
if (v___x_1162_ == 0)
{
lean_dec_ref(v___x_1161_);
lean_dec_ref(v___x_1159_);
lean_dec_ref(v___x_1157_);
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1137_);
goto v___jp_1149_;
}
else
{
lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1163_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1161_);
lean_dec_ref(v___x_1161_);
v___x_1164_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2));
v___x_1165_ = l_Lean_Expr_isConstOf(v___x_1163_, v___x_1164_);
lean_dec_ref(v___x_1163_);
if (v___x_1165_ == 0)
{
lean_dec_ref(v___x_1159_);
lean_dec_ref(v___x_1157_);
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1137_);
goto v___jp_1149_;
}
else
{
lean_object* v_arg_1166_; lean_object* v_arg_1167_; lean_object* v_arg_1168_; lean_object* v___x_1169_; 
v_arg_1166_ = lean_ctor_get(v___x_1155_, 1);
lean_inc_ref(v_arg_1166_);
lean_dec_ref(v___x_1155_);
v_arg_1167_ = lean_ctor_get(v___x_1157_, 1);
lean_inc_ref(v_arg_1167_);
lean_dec_ref(v___x_1157_);
v_arg_1168_ = lean_ctor_get(v___x_1159_, 1);
lean_inc_ref(v_arg_1168_);
lean_dec_ref(v___x_1159_);
v___x_1169_ = l_Lean_Meta_Structural_isInstDvdNat___redArg(v_arg_1168_, v_a_1145_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1302_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1172_ = v___x_1169_;
v_isShared_1173_ = v_isSharedCheck_1302_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1169_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1302_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
uint8_t v___x_1174_; 
v___x_1174_ = lean_unbox(v_a_1170_);
lean_dec(v_a_1170_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; lean_object* v___x_1177_; 
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v___x_1175_ = lean_box(0);
if (v_isShared_1173_ == 0)
{
lean_ctor_set(v___x_1172_, 0, v___x_1175_);
v___x_1177_ = v___x_1172_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
else
{
lean_object* v___x_1179_; 
lean_del_object(v___x_1172_);
v___x_1179_ = l_Lean_Meta_getNatValue_x3f(v_arg_1167_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1180_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc(v_a_1180_);
lean_dec_ref_known(v___x_1179_, 1);
if (lean_obj_tag(v_a_1180_) == 1)
{
lean_object* v_val_1181_; lean_object* v___x_1182_; 
v_val_1181_ = lean_ctor_get(v_a_1180_, 0);
lean_inc(v_val_1181_);
lean_dec_ref_known(v_a_1180_, 1);
lean_inc_ref(v_e_1137_);
v___x_1182_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_1137_, v_a_1138_, v_a_1142_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; uint8_t v___x_1184_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1182_, 1);
v___x_1184_ = lean_unbox(v_a_1183_);
lean_dec(v_a_1183_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; 
lean_dec(v_val_1181_);
lean_inc_ref(v_e_1137_);
v___x_1185_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_1137_, v_a_1138_, v_a_1142_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1210_; 
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1188_ = v___x_1185_;
v_isShared_1189_ = v_isSharedCheck_1210_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1185_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1210_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
uint8_t v___x_1190_; 
v___x_1190_ = lean_unbox(v_a_1186_);
lean_dec(v_a_1186_);
if (v___x_1190_ == 0)
{
lean_object* v___x_1191_; lean_object* v___x_1193_; 
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v___x_1191_ = lean_box(0);
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 0, v___x_1191_);
v___x_1193_ = v___x_1188_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1191_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
else
{
lean_object* v___x_1195_; 
lean_del_object(v___x_1188_);
lean_inc_ref(v_e_1137_);
v___x_1195_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1195_, 1);
v___x_1197_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__3);
v___x_1198_ = l_Lean_Meta_mkOfEqFalseCore(v_e_1137_, v_a_1196_);
v___x_1199_ = l_Lean_mkApp3(v___x_1197_, v_arg_1167_, v_arg_1166_, v___x_1198_);
v___x_1200_ = lean_unsigned_to_nat(0u);
v___x_1201_ = l_Lean_Meta_Grind_pushNewFact(v___x_1199_, v___x_1200_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
return v___x_1201_;
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1202_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1195_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1195_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1211_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1185_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1185_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1211_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
else
{
lean_object* v___x_1219_; 
lean_inc_ref(v_arg_1167_);
v___x_1219_ = l_Lean_Meta_Grind_Arith_Cutsat_natToInt(v_arg_1167_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; lean_object* v_fst_1221_; lean_object* v_snd_1222_; lean_object* v___x_1223_; 
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1219_, 1);
v_fst_1221_ = lean_ctor_get(v_a_1220_, 0);
lean_inc(v_fst_1221_);
v_snd_1222_ = lean_ctor_get(v_a_1220_, 1);
lean_inc(v_snd_1222_);
lean_dec(v_a_1220_);
lean_inc_ref(v_arg_1166_);
v___x_1223_ = l_Lean_Meta_Grind_Arith_Cutsat_natToInt(v_arg_1166_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v_a_1224_; lean_object* v_fst_1225_; lean_object* v_snd_1226_; lean_object* v___x_1227_; 
v_a_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_a_1224_);
lean_dec_ref_known(v___x_1223_, 1);
v_fst_1225_ = lean_ctor_get(v_a_1224_, 0);
lean_inc(v_fst_1225_);
v_snd_1226_ = lean_ctor_get(v_a_1224_, 1);
lean_inc(v_snd_1226_);
lean_dec(v_a_1224_);
v___x_1227_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1137_, v_a_1138_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; lean_object* v___x_1229_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1228_);
lean_dec_ref_known(v___x_1227_, 1);
lean_inc(v_fst_1225_);
v___x_1229_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_fst_1225_, v_a_1228_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
if (lean_obj_tag(v___x_1229_) == 0)
{
lean_object* v_a_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_a_1230_ = lean_ctor_get(v___x_1229_, 0);
lean_inc(v_a_1230_);
lean_dec_ref_known(v___x_1229_, 1);
v___x_1231_ = l_Int_Internal_Linear_Expr_norm(v_a_1230_);
v___x_1232_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__7, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__7_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___closed__7);
v___x_1233_ = l_Lean_mkApp6(v___x_1232_, v_arg_1167_, v_arg_1166_, v_fst_1221_, v_fst_1225_, v_snd_1222_, v_snd_1226_);
lean_inc(v_val_1181_);
v___x_1234_ = lean_nat_to_int(v_val_1181_);
v___x_1235_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1235_, 0, v_e_1137_);
lean_ctor_set(v___x_1235_, 1, v___x_1233_);
lean_ctor_set(v___x_1235_, 2, v_val_1181_);
lean_ctor_set(v___x_1235_, 3, v_a_1230_);
v___x_1236_ = lean_box(0);
v___x_1237_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1234_);
lean_ctor_set(v___x_1237_, 1, v___x_1231_);
lean_ctor_set(v___x_1237_, 2, v___x_1235_);
lean_ctor_set(v___x_1237_, 3, v___x_1236_);
v___x_1238_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assertCore(v___x_1237_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
return v___x_1238_;
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
lean_dec(v_snd_1226_);
lean_dec(v_fst_1225_);
lean_dec(v_snd_1222_);
lean_dec(v_fst_1221_);
lean_dec(v_val_1181_);
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1239_ = lean_ctor_get(v___x_1229_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1241_ = v___x_1229_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1229_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1239_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec(v_snd_1226_);
lean_dec(v_fst_1225_);
lean_dec(v_snd_1222_);
lean_dec(v_fst_1221_);
lean_dec(v_val_1181_);
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1247_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1227_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1227_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
else
{
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1262_; 
lean_dec(v_snd_1222_);
lean_dec(v_fst_1221_);
lean_dec(v_val_1181_);
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1255_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1257_ = v___x_1223_;
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1223_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
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
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
lean_dec(v_val_1181_);
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1263_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1265_ = v___x_1219_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1219_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1263_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
lean_dec(v_val_1181_);
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1271_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1182_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1182_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
lean_dec(v_a_1180_);
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
v___x_1279_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__10);
v___x_1280_ = l_Lean_indentExpr(v_e_1137_);
v___x_1281_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1279_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1142_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; uint8_t v_verbose_1284_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
lean_dec_ref_known(v___x_1282_, 1);
v_verbose_1284_ = lean_ctor_get_uint8(v_a_1283_, 0);
lean_dec(v_a_1283_);
if (v_verbose_1284_ == 0)
{
lean_dec_ref_known(v___x_1281_, 2);
goto v___jp_1152_;
}
else
{
lean_object* v___x_1285_; 
v___x_1285_ = l_Lean_Meta_Sym_reportIssue(v___x_1281_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_dec_ref_known(v___x_1285_, 1);
goto v___jp_1152_;
}
else
{
return v___x_1285_;
}
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec_ref_known(v___x_1281_, 2);
v_a_1286_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1282_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1282_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1294_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1179_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1179_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
lean_dec_ref(v_arg_1167_);
lean_dec_ref(v_arg_1166_);
lean_dec_ref(v_e_1137_);
v_a_1303_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1169_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1169_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
}
}
}
}
v___jp_1149_:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = lean_box(0);
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
v___jp_1152_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = lean_box(0);
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd___boxed(lean_object* v_e_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd(v_e_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
lean_dec(v_a_1317_);
lean_dec_ref(v_a_1316_);
lean_dec(v_a_1315_);
lean_dec_ref(v_a_1314_);
lean_dec(v_a_1313_);
lean_dec(v_a_1312_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd(lean_object* v_e_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_){
_start:
{
lean_object* v___x_1341_; 
v___x_1341_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1329_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1377_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1344_ = v___x_1341_;
v_isShared_1345_ = v_isSharedCheck_1377_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1341_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1377_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
uint8_t v_lia_1346_; 
v_lia_1346_ = lean_ctor_get_uint8(v_a_1342_, sizeof(void*)*18 + 24);
lean_dec(v_a_1342_);
if (v_lia_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1349_; 
lean_dec_ref(v_e_1326_);
v___x_1347_ = lean_box(0);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 0, v___x_1347_);
v___x_1349_ = v___x_1344_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
else
{
lean_object* v___x_1351_; 
lean_del_object(v___x_1344_);
lean_inc_ref(v_e_1326_);
v___x_1351_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1326_, v_a_1334_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v_a_1352_; lean_object* v___x_1353_; uint8_t v___x_1354_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_a_1352_);
lean_dec_ref_known(v___x_1351_, 1);
v___x_1353_ = l_Lean_Expr_cleanupAnnotations(v_a_1352_);
lean_dec(v_a_1352_);
v___x_1354_ = l_Lean_Expr_isApp(v___x_1353_);
if (v___x_1354_ == 0)
{
lean_dec_ref(v___x_1353_);
lean_dec_ref(v_e_1326_);
goto v___jp_1338_;
}
else
{
lean_object* v___x_1355_; uint8_t v___x_1356_; 
v___x_1355_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1353_);
lean_dec_ref(v___x_1353_);
v___x_1356_ = l_Lean_Expr_isApp(v___x_1355_);
if (v___x_1356_ == 0)
{
lean_dec_ref(v___x_1355_);
lean_dec_ref(v_e_1326_);
goto v___jp_1338_;
}
else
{
lean_object* v___x_1357_; uint8_t v___x_1358_; 
v___x_1357_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1355_);
lean_dec_ref(v___x_1355_);
v___x_1358_ = l_Lean_Expr_isApp(v___x_1357_);
if (v___x_1358_ == 0)
{
lean_dec_ref(v___x_1357_);
lean_dec_ref(v_e_1326_);
goto v___jp_1338_;
}
else
{
lean_object* v___x_1359_; uint8_t v___x_1360_; 
v___x_1359_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1357_);
lean_dec_ref(v___x_1357_);
v___x_1360_ = l_Lean_Expr_isApp(v___x_1359_);
if (v___x_1360_ == 0)
{
lean_dec_ref(v___x_1359_);
lean_dec_ref(v_e_1326_);
goto v___jp_1338_;
}
else
{
lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1361_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1359_);
v___x_1362_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2));
v___x_1363_ = l_Lean_Expr_isConstOf(v___x_1361_, v___x_1362_);
lean_dec_ref(v___x_1361_);
if (v___x_1363_ == 0)
{
lean_dec_ref(v___x_1359_);
lean_dec_ref(v_e_1326_);
goto v___jp_1338_;
}
else
{
lean_object* v_arg_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v_arg_1364_ = lean_ctor_get(v___x_1359_, 1);
lean_inc_ref(v_arg_1364_);
lean_dec_ref(v___x_1359_);
v___x_1365_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd___closed__0));
v___x_1366_ = l_Lean_Expr_isConstOf(v_arg_1364_, v___x_1365_);
lean_dec_ref(v_arg_1364_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd(v_e_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_);
return v___x_1367_;
}
else
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateNatDvd(v_e_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_);
return v___x_1368_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1376_; 
lean_dec_ref(v_e_1326_);
v_a_1369_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1371_ = v___x_1351_;
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1351_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1374_; 
if (v_isShared_1372_ == 0)
{
v___x_1374_ = v___x_1371_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_a_1369_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
}
}
else
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1385_; 
lean_dec_ref(v_e_1326_);
v_a_1378_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1380_ = v___x_1341_;
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1341_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_a_1378_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
v___jp_1338_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = lean_box(0);
v___x_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
return v___x_1340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd___boxed(lean_object* v_e_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd(v_e_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_);
lean_dec(v_a_1396_);
lean_dec_ref(v_a_1395_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
lean_dec(v_a_1392_);
lean_dec_ref(v_a_1391_);
lean_dec(v_a_1390_);
lean_dec_ref(v_a_1389_);
lean_dec(v_a_1388_);
lean_dec(v_a_1387_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_propagateDvd___regBuiltin_Lean_Meta_Grind_Arith_Cutsat_propagateDvd_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_1909565549____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1400_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntDvd___closed__2));
v___x_1401_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateDvd___boxed), 12, 0);
v___x_1402_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_1400_, v___x_1401_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_propagateDvd___regBuiltin_Lean_Meta_Grind_Arith_Cutsat_propagateDvd_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_1909565549____hygCtx___hyg_9____boxed(lean_object* v_a_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_propagateDvd___regBuiltin_Lean_Meta_Grind_Arith_Cutsat_propagateDvd_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_1909565549____hygCtx___hyg_9_();
return v_res_1404_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Dvd(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Dvd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_0__Lean_Meta_Grind_Arith_Cutsat_propagateDvd___regBuiltin_Lean_Meta_Grind_Arith_Cutsat_propagateDvd_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr_1909565549____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin);
lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Dvd(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Dvd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(builtin);
}
#ifdef __cplusplus
}
#endif
